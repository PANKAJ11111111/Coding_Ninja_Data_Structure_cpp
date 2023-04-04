#include<bits/stdc++.h>
using namespace std;


int pivort(int *arr,int e,int s){
    int pivor=arr[s];
    int count=0;
    for(int i=s+1;i<e;i++){
        if(arr[i]<pivor){
            count++;
        }
    }
    int pi=count+s;
    swap(arr[pi],arr[s]);

int i=s;
int j=e;
while(i<pi && j>pi){
    while(arr[i]<pivor){
        i++;
    }
    while(arr[j]>pivor){
        j++;
    }
    if(i<pi && j>pi){
        swap(arr[i],arr[j]);
    }
}

return pi;

}

void quickshort(int *arr,int e,int s){
    if(s>=e){
        return;
    }
    int p=pivort(arr,e,s);
    quickshort(arr,p,s);
    quickshort(arr,e,p+1);
}


int main() {
    int n;
    cin>>n;
    int *arr = new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    quickshort(arr,n,0);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    
}