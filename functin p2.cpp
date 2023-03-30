#include<iostream>
using namespace std;
int fact(int n){
    int p=1;
    for(int i=1; i<=n; i++){
       p=p*i;
    }
    return p;
}
int main() {
    int n,r;
    cout<<"enter value of n = ";
    cin>>n;
    cout<<"enter value of r = ";
    cin>>r;
    int a=fact(n)/(fact(n-r)*fact(r));
    cout<<"answer is "<<a;
    return 0;
}