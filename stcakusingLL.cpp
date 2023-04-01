#include<iostream>
using namespace std;

class Node{
    public:

    int data;
    Node* next;

Node(int data) {
this->data  = data;
this->next = NULL;
}
};

class stack{

Node *head;
int size;

public :

stack(){
    head = NULL;
    size = 0;
}

int getsize() {
    return size;
}

bool isempty(){
    return size == 0;
}

void push(int data){

Node* newnode = new Node(data);

if(head ==  NULL){
    head = newnode;
    size++;
}

else{

    newnode->next = head;
    head = newnode;
    size++;
}


}

int  pop() {
  
  int ans = head->data;

  Node* p =  head;

head = head->next;
 size--;

delete p;

 return ans;

}

int top() {
    return head->data;
}



};

int main() {
    stack s1;

    s1.push(20);
    cout<<s1.getsize()<<endl;

    cout<<s1.top() <<endl;

s1.push(47);

s1.push(22);

    cout<<s1.top() <<endl;

    cout<<s1.pop() <<endl;
     
     cout<<s1.top()<<endl;

     cout<<s1.getsize() <<endl;

}