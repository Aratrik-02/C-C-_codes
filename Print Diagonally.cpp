/*
Give a N * N square matrix A, return all the elements of its anti-diagonals from top to bottom.

Example 1:

Input: 
N = 2
A = [[1, 2],
     [3, 4]]
Output:
1 2 3 4
Explanation: 

Hence, elements will be returned in the 
order {1, 2, 3, 4}.


Example 2:

Input: 
N = 3 
A = [[1, 2, 3],
     [4, 5, 6],
     [7, 8, 9]]
Output: 
1 2 4 3 5 7 6 8 9
Explanation: 

Hence, elements will be returned in 
the order {1, 2, 4, 3, 5, 7, 6, 8, 9}.

*/

vector<int> downwardDigonal(int N, vector<vector<int>> A){
 vector<int>ans;
 //upper triangular matrix
 for(int i=0;i<N;i++)
     for(int j=i;j>=0;j--)
         ans.push_back(A[i-j][j]);
 //lower traingular matrix
 for(int i=1;i<N;i++)
     for(int j=0;j<N-i;j++)
         ans.push_back(A[i+j][N-1-j]);
 return ans;
 }
