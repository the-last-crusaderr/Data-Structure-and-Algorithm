#include <iostream>
using namespace std;

/*

                  1
                /   \                 
               4     5                     


*/








struct Node{
    int data;
    struct Node* left = NULL;
    struct Node* right = NULL;
};



void preorder(Node* root){
    if(root == NULL)
        return;    
    cout << root->data;    
    preorder(root->left);    
    preorder(root->right);
}

void inorder(Node * root){
    if(root == NULL)
        return;
    inorder(root->left);
    cout << root->data;
    inorder(root->right);    

}

void postorder(Node *root){
    if(root == NULL)
        return;
    postorder(root->left);
    postorder(root->right);
    cout << root->data;

}



int main(){

//declaration
    struct Node* root = new struct Node();
    struct Node* first = new struct Node(); 
    struct Node* second = new struct Node();

//initialisation
    root->data = 1;
    first->data = 4;
    second->data = 5;

//assigning left and right child to root
    root->left = first;
    root->right = second;

    //cout << root->data << " " << first->data  << " "  << second->data;

    preorder(root);
    cout << endl;
    inorder(root);
    cout << endl;
    postorder(root);
    cout << endl;

    return 0;
}


