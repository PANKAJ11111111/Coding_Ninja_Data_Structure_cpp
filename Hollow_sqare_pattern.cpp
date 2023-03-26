#include<bits/stdc++.h>
using namespace std;
int main() {
for(int i = 1 ; i <= 6 ; i++){if(i == 1 || i == 6){
		for(int j = 1 ; j <= 10 ; j++){
			cout<<"*";
			}
		}
			else{
				for(int j = 1 ; j <= 10 ; j++){
					if(j==1 || j== 10){
						cout<<"*";
					}
					else{
						cout<<" ";
					}
				}
			}
			cout<<endl;
		
	}
}