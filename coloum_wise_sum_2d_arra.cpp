#include<iostream>
using namespace std;


int main(){
int r, c;
int arr[1000][1000];
cin>>r>>c;
for(int i=0;i<r;i++){
	for(int j=0;j<c;j++){
		cin >> arr[i][j];
	}
}

for(int i=0; i<c;i++){
	int ans =0;
	for(int j=0;j<r;j++){
		ans =ans+arr[j][i];
	}
	cout<<ans<<" ";
}
  
}


