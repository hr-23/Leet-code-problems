class Solution {
public:

    int nearestExit(vector<vector<char>>& maze, vector<int>& e) {
        
        int n = maze.size(); 
        int m = maze[0].size();
        
        vector<vector<int>> vis(n , vector<int>(m, 0)) ; 
        
        vector<int>dr = { -1 , 0,1,0  }; 
        vector<int>dc = { 0 , 1 , 0, -1}; 

        queue<pair<int, int >>q ;
        q.push({e[0] ,e[1]}); 
       vis[e[0]][e[1]]=1; 
        
    int path= 0;
     while(!q.empty())
     {
         int size =q.size() ;
         for(int i= 0 ;i<size ;i++ )
         {
            int x = q.front().first ;
            int y = q.front().second ;
          if((x==0 ||y==0 || x==n-1 ||y==m-1) && path>0)
          {
            return path; 
          }
        q.pop(); 
  
      for(int k =0 ; k<4; k++ )
      {
          int nx = x+dr[k] ;
          int ny = y+dc[k] ;
          if(nx>=0 && ny>=0 && nx<n && ny<m && !vis[nx][ny] && maze[nx][ny]=='.')
          {
              q.push({nx, ny }) ; 
              vis[nx][ny]=1; 
          }

      }
       
         }
           path++ ;
  }
        return -1 ; 
    }
};