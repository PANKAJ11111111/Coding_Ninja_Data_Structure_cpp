#include <bits/stdc++.h> 
/************************************************************

    Following is the linked list node structure:
    
    template <typename T>
    class Node {
        public:
        T data;
        Node* next;

        Node(T data) {
            next = NULL;
            this->data = data;
        }
    };

************************************************************/
Node<int>* reverse(Node<int>* &head){
    Node<int>* curr = head;
    Node<int>* prv =  NULL;
    Node<int>* next = NULL;

    while(curr != NULL){
        next = curr ->next ;
        curr->next = prv;
        prv = curr ; 
        curr = next ;

    }
    return prv;
}

Node<int>* addTwoLists(Node<int>* first, Node<int>* second) {
    // Write your code here.
    Node<int>* h1 = reverse(first);
    Node<int>* h2 = reverse(second);
    Node<int>* h3 =NULL;
    Node<int>* h3t = NULL;


    int carray = 0;
    int nv =0;

    while(h1 != NULL || h2 != NULL || carray != 0){
        int val1=0;
        if(h1 != NULL){
            val1 = h1->data;
        }

        int val2 = 0;
        if(h2 != NULL){
            val2 = h2->data;
        }

        int sum = val1 + val2 + carray;
        carray = sum/10;
        nv = sum%10;

        Node<int>* newnode = new Node<int>(nv);

        if(h3 == NULL){
            h3 = newnode;
            h3t = newnode;
        }
        else{
            h3t->next = newnode;
            h3t = newnode;
        }

           if(h1 != NULL){
               h1 = h1->next;
           }

           if(h2 != NULL){
               h2 = h2->next;
           }

    }


    Node<int>* finall = reverse(h3);

    return finall;
}