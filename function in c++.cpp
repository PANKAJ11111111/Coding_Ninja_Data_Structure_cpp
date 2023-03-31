#include<iostream>
using namespace std;
int fact(int n){
     long int p=1;
    for(int i=1; i<=n;i++){
        p=p*i;

    }
    return p;
}
int main() {
    int a;
    cout<<"enter number for calculate factorial = ";
    cin>>a;
  long int b = fact(a);
   cout<<"factorial of "<<a<<" =  "<<b;
   cout<<endl;
return 0;
}