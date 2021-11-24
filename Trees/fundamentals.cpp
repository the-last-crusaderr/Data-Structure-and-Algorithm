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

    cout << root->data << " " << first->data  << " "  << second->data;

    return 0;
}


