#include<iostream>
#include<vector>
#include<queue>
using namespace std;
template <typename T>
class binaryTree{
    public:

    T data;
    binaryTree<T>* left;
    binaryTree<T>* rigth;

    binaryTree(T data){
        this->data =data;
        left = NULL;
        rigth = NULL;
    }
    ~binaryTree() {
        delete left;
        delete rigth;
    }
};

void print(binaryTree<int>* root){
    if(root == NULL){
        return ;
    }

    
    
    cout<<root->data<<": ";

    if(root->left){
        cout<<"L"<<root->left->data<<" ";
            }

    if(root->rigth){
        cout<<"R"<<root->rigth->data<<" ";
            }

            cout<<endl;

    print(root->left);
    print(root->rigth);

}

// take input node wise;

binaryTree<int>* takeinput() {

    int rootdata;
    cout<<"enter data :" ;
    cin>>rootdata;

    if(rootdata == -1){
        return NULL;
    }

    binaryTree<int>* root = new binaryTree<int>(rootdata);
    binaryTree<int>* left1 = takeinput();
    binaryTree<int>* rigth1 = takeinput();

    root->left =left1;
    root->rigth = rigth1;

    return root;
}


//take input level wise;

binaryTree<int>* takeinput2() {
    int rootdata;
    cout<<"enter root data = ";
    cin>>rootdata;

    queue<binaryTree<int>*> node;
    binaryTree<int>* root = new binaryTree<int>(rootdata);
    node.push(root);

    while(node.size() != 0){
        binaryTree<int>* front = node.front() ;
        node.pop();

        cout<<"enter left child of "<<front->data <<"= ";
        int leftdata;
        cin>>leftdata;
        if(leftdata != -1){
            binaryTree<int>* leftnode = new binaryTree<int>(leftdata);
            node.push(leftnode);
            front->left = leftnode;
        }

        cout<<"enter rigth child of "<<front->data<<" = ";
        int rigthtchild;
        cin>>rigthtchild;

        if(rigthtchild != -1){
            binaryTree<int>* rigthnode = new binaryTree<int>(rigthtchild);
            node.push(rigthnode);
            front->rigth = rigthnode;
        }

       
    }

    return root;
}

int main() {
    binaryTree<int>* root = takeinput2() ;

    print(root);

}