class Solution {
public:
    // void setneg(vector<vector<int>> & matrix,int i,int j,int row,int col){
    //     for(int a=0;a<col;a++){
    //         if(matrix[i][a]!=0){
    //         matrix[i][a]=-1;
    //         }
            
    //     }
    //     for(int z=0;z<row;z++){
    //         if(matrix[z][j]!=0){
    //         matrix[z][j]=-1;
    //         }
    //     }
    //     return;
    // }
    void setZeroes(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();
        vector<int>row(m,0);
        vector<int>col(n,0);
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(matrix[i][j]==0){
                    // matrix[i][j]=-1;
                    // setneg(matrix,i,j,m,n);
                    row[i]=1;
                    col[j]=1;
                }
            }
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(row[i]|| col[j]){
                    matrix[i][j]=0;
                }
            }
        }
        
        return;
    }
};