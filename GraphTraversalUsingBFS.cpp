/*
https://practice.geeksforgeeks.org/problems/distance-of-nearest-cell-having-1-1587115620/1

Distance of nearest cell having 1
MediumAccuracy: 47.7%Submissions: 31227Points: 4
Given a binary grid of n*m. Find the distance of the nearest 1 in the grid for each cell.
The distance is calculated as |i1  - i2| + |j1 - j2|, where i1, j1 are the row number and column number of the current cell, and i2, j2 are the row number and column number of the nearest cell having value 1.
 

Example 1:

Input: grid = {{0,1,1,0},{1,1,0,0},{0,0,1,1}}
Output: {{1,0,0,1},{0,0,1,1},{1,1,0,0}}
Explanation: The grid is-
0 1 1 0 
1 1 0 0 
0 0 1 1 
0's at (0,0), (0,3), (1,2), (1,3), (2,0) and
(2,1) are at a distance of 1 from 1's at (0,1),
(0,2), (0,2), (2,3), (1,0) and (1,1)
respectively.


Example 2:

Input: grid = {{1,0,1},{1,1,0},{1,0,0}}
Output: {{0,1,0},{0,0,1},{0,1,2}}
Explanation: The grid is-
1 0 1
1 1 0
1 0 0
0's at (0,1), (1,2), (2,1) and (2,2) are at a 
distance of 1, 1, 1 and 2 from 1's at (0,0),
(0,2), (2,0) and (1,1) respectively.
*/


vector<vector<int>>nearest(vector<vector<int>>grid){
	    int m=grid.size();
	    int n=grid[0].size();
	    vector<vector<int>>vis(m,vector<int>(n,0));
	    vector<vector<int>>dist(m,vector<int>(n,0));
	    queue<pair<pair<int,int>,int>>q;
	    for(int i=0;i<m;i++){
	        for(int j=0;j<n;j++){
	            if(grid[i][j]){
	                vis[i][j]=1;
	                q.push({{i,j},0});
	            }
	        }
	    }
	    int delrow[]={-1,0,1,0};
	    int delcol[]={0,1,0,-1};
	    while(!q.empty()){
	        int row=q.front().first.first;
	        int col=q.front().first.second;
	        int steps=q.front().second;
	        q.pop();
	        dist[row][col]=steps;
	        for(int i=0;i<4;i++){
	            int valrow=row+delrow[i];
	            int valcol=col+delcol[i];
	            if(valrow>=0 && valrow<m && valcol>=0 && valcol<n && !vis[valrow][valcol]){
	                vis[valrow][valcol]=1;
	                q.push({{valrow,valcol},steps+1});
	            }
	        }
	    }
	    return dist;
}
