/*
Shortest Distance in a Binary Maze
Given a n * m matrix grid where each element can either be 0 or 1. You need to find the shortest distance between a given source cell to a destination cell. The path can only be created out of a cell if its value is 1. 

If the path is not possible between source cell and destination cell, then return -1.

Note : You can move into an adjacent cell if that adjacent cell is filled with element 1. Two cells are adjacent if they share a side. In other words, you can move in one of the four directions, Up, Down, Left and Right.

Example 1:

Input:
grid[][] = {{1, 1, 1, 1},
            {1, 1, 0, 1},
            {1, 1, 1, 1},
            {1, 1, 0, 0},
            {1, 0, 0, 1}}
source = {0, 1}
destination = {2, 2}
Output:
3
Explanation:
1 1 1 1
1 1 0 1
1 1 1 1
1 1 0 0
1 0 0 1
The highlighted part in the matrix denotes the 
shortest path from source to destination cell.
Example 2:

Input:
grid[][] = {{1, 1, 1, 1, 1},
            {1, 1, 1, 1, 1},
            {1, 1, 1, 1, 0},
            {1, 0, 1, 0, 1}}
source = {0, 0}
destination = {3, 4}
Output:
-1
Explanation:
The path is not possible between source and 
destination, hence return -1.
*/

class Solution {
  public:
     int shortestPath(vector<vector<int>> &grid, pair<int, int> source,
                     pair<int, int> d) {
        queue<pair<int,int>>q;
        q.push({source.first,source.second});
        int level=-1;
        int n=grid.size();
        int m=grid[0].size();
    
        while(q.empty()==false){
            int count=q.size();
            level++;
            for(int i=0;i<count;i++){
                int x=q.front().first;
                int y=q.front().second;
                if(x==d.first&&y==d.second)return level;
                q.pop();
             if(x>0&&grid[x-1][y]==1){q.push({x-1,y});grid[x-1][y]=0;}
             if(x<n-1&&grid[x+1][y]==1){q.push({x+1,y});grid[x+1][y]=0;}
             if(y>0&&grid[x][y-1]==1){q.push({x,y-1});grid[x][y-1]=0;}
             if(y<m-1&&grid[x][y+1]==1){q.push({x,y+1});grid[x][y+1]=0;}
            }
        }
        return -1;
    }
};
