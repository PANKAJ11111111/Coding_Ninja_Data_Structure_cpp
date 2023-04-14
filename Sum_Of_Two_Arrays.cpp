#include <bits/stdc++.h> 

int sum(vector<int> arr , int s){
	int num = 0;
	for(int i=0; i<s; i++){
		num = num*10 +arr[i];
	}
	return num;
}
vector<int> findArraySum(vector<int>&a, int n, vector<int>&b, int m) {
	// Write your code here.
	vector<int> output;
	int sum1 = sum(a,n);
	int sum2 = sum(b,m);

	int ans = sum1+sum2;

	while(ans != 0){
		int val = ans %10;
		ans =ans/10;
        output.push_back(val);

	}

	reverse(output.begin(), output.end());

	return output;

}

int main(){

    vector<int> arr1;
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>arr1[i];
    }

    vector<int> arr2;
    int m;
    cin>>m;
    for(int i=0; i<m; i++){
        cin>>arr2[i];
    }

    vector<int> ans = findArraySum(arr1, n , arr2 , m );


    
}