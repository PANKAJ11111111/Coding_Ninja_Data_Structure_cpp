#include <bits/stdc++.h>

void insertinheap(vector<int> &heap, int v){
       heap.push_back(v);

       int ci =heap.size()-1;

       while(ci>0){
           int pi = (ci-1)/2;
           if(heap[ci]<heap[pi]){
               swap(heap[ci],heap[pi]);
           }
           else{
               break;
           }
           ci=pi;
       }
}

int remov(vector<int> &heap){
    int ans =heap[0];
    heap[0] = heap[heap.size()-1];
    heap.pop_back();
    int pi=0;
    int n=heap.size();
    int min;
    while(pi<n){
        int lc = 2*pi+1;
        int rc = 2*pi+2;
        if(lc <n && rc<n){
            if(heap[lc]< heap[rc])
            min = lc;
            else{
                min = rc;
            }
        }

        else if(lc<n && rc>=n){
            min = lc;
        }

        else{
            break;
        }

        if(heap[min] < heap[pi]){
            swap(heap[min], heap[pi]);
        }
        else{
            break;
        }
        pi =min;
    }
    return ans;
}


vector<int> minHeap(int n, vector<vector<int>>& q) {
    // Write your code here.
  vector<int>heap;
  vector<int>ans;

  for(int i=0; i<q.size(); i++){
      if(q[i][0]==0){
          insertinheap(heap,q[i][1]);
      }
      else{
          int removed = remov(heap);
          ans.push_back(removed);
      }
  }

  return ans;
}
