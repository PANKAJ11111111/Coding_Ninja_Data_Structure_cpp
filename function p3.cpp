#include<iostream>
using namespace std;
int check(int n , int m, int o){
    int a = max(n,max(m,o));
    int b,c;
    if(a==n){
        b=m; c=o;
    }
    else if(a==m){
        b=n; c=o;
    }
    else{
        b=n;c=m;
    }
    if(a*a == b*b + c*c){
        return 1;
    }
    else{
        return 0;
    }
}
    
int main() {
    int h,p,b;
    cout<<"enter any three number = ";
    cin>>h>>p>>b;
   int a = check(h,p,b);
   if(a==1){
    cout<<"give number is triplate ";
   }
   else{
    cout<<"given number is not an triplate ";
   }
   return 0;
}