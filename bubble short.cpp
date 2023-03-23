#include<iostream>
using namespace  std;
void check(int a[],int n ){
    for(int i=0; i<=n-1; i++){
        for(int j=0; j<=n; j++){
            for(int k=j+1; k<=j+1; k++){
                if(a[k]<a[j]){
                    int tem;
                    tem = a[j];
                    a[j] =a[k];
                    a[k] = tem;
                }
        }
        }
    }
    for(int p=0; p<=n; p++){
        cout<<" "<<a[p];
    }
}
int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<=n; i++){
        cin>>arr[i];
    }
    check(arr,n);
    return 0;
}