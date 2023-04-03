#include<iostream>
using namespace std;
int check(int n){
    int x,y;
    int i=0;
    int a[n];
    while(n>0){
        x=n/2;
        y=n%2;
        n=x;
        a[i]=y;
        i++;
    }
    
    for(int j=i-1; j>=0; j--){
        cout<<a[j];
    }
}
int main(){
    int n;
    cout<<"enter number ";
    cin>>n;
    check(n);
    return 0;
}