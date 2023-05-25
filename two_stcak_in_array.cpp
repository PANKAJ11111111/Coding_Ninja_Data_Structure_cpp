#include <bits/stdc++.h> 
class TwoStack {

public:

    // Initialize TwoStack.

    int *arr;
    int index1;
    int index2;
    int size;

    TwoStack(int s) {
        // Write your code here.
        arr = new int[s];
        this->size = s;
        index1 = -1;
        index2 = s;

    }
    
    // Push in stack 1.
    void push1(int num) {
        // Write your code here.
        if(index2 - index1 > 1){
             index1++;
            arr[index1] = num;
           
        }
    }

    // Push in stack 2.
    void push2(int num) {
        // Write your code here.
        if(index2  - index1 >1){
            index2--;
            arr[index2] = num;
            
        }
    }

    // Pop from stack 1 and return popped element.
    int pop1() {
        // Write your code here.
        if(index1>=0){
            int ans =arr[index1];
            index1--;
            return ans;
        }
        else{
            return -1;
        }
        
    }

    // Pop from stack 2 and return popped element.
    int pop2() {
        // Write your code here.
        if(index2 <size){
            int ans =arr[index2];
            index2++;
            return ans;
        }
        else{
            return -1;
        }
    }
        
};
