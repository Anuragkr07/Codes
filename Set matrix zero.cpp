#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<vector<int>>a
    {
        {4, 1, 1},
        {1, 0, 1},
        {1, 1, 1}
    };
    int rows=a.size();
    int cols=a[0].size();
    
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    
    cout<<"New Matrix is: "<<endl;
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
            if(a[i][j]==0){
                
            
            int ind=i-1;
            while (ind >= 0) {
            if (a[ind][j] != 0) {
            a[ind][j] = -1;
            }
            ind--;
          }
            
            ind = i + 1;
            while (ind < rows) {
            if (a[ind][j] != 0) {
            a[ind][j] = -1;
            }
            ind++;
          }
            
            ind = j - 1;
            while (ind >= 0) {
            if (a[i][ind] != 0) {
            a[i][ind] = -1;

            }
            ind--;
          }
            
            ind = j + 1;
            while (ind < cols) {
            if (a[i][ind] != 0) {
            a[i][ind] = -1;

            }
            ind++;
            }
          }
        }
    }
    
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    
    
    

    return 0;
}
