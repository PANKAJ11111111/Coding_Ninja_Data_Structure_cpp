/***********************************************************
	Following is the Binary Tree Node class structure

	template <typename T>
	class BinaryTreeNode {
    	public : 
    	T data;
    	BinaryTreeNode<T> *left;
    	BinaryTreeNode<T> *right;

    	BinaryTreeNode(T data) {
        	this -> data = data;
        	left = NULL;
        	right = NULL;
    	}
	};

***********************************************************/

int height(BinaryTreeNode<int>* root) {
    // Write our code here
	 int h=0;
    if(root==NULL)
        return h;
    
    int lefth= height(root->left);
    int righth= height(root->right);
    
   if(lefth>righth)
       return lefth +1;
    else
        return righth+1;
}