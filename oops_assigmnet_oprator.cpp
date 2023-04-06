#include<bits/stdc++.h>
using namespace std;

class student {
   public :
   int age ;
   int rn;

   void display() {
      cout<<age << " "<<rn<<endl;
   }

};


int main() {

   student s1;
   s1.age = 10;
   s1.rn = 201;
   s1.display();

   student s2;
   s2.age =20;
   s2.rn = 202;
   s2.display();

   s2 = s1;

   s2.display();
   
}