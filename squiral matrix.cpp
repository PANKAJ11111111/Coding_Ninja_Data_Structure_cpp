#include<bits/stdc++.h>
using namespace std;
int main() {
    int n,m;
    cin>>n>>m;
    int a[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    int start_row=0 , end_row = n-1, start_c = 0 , end_c = m-1;
    while(start_row<=end_row && start_c<=end_c){
        for(int i=start_row;i<=end_c;i++){
            cout<<a[start_row][i]<<" ";
        }
        start_row++;
        for(int i = start_row; i<=end_row; i++){
            cout<<a[i][end_c]<<" ";
        }
        end_c--;
        for(int i=end_row; i>=start_c;i--){
            cout<<a[end_row][i]<<" ";
        }
        end_row--;
        for(int i=end_row; i>=start_row; i--){
            cout<<a[i][start_c]<<" ";
        }
        start_c++;
    }
    return 0;
}