#include <iostream>

using namespace std;
struct Node
   {
           int data;        // wartość przechowywana w węźle
    Node* left;      // wskaźnik na lewe dziecko
    Node* right;     // wskaźnik na prawe dziecko

    // Konstruktor
    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
   };

  int invert(Node* root){
    if(root == NULL)
    {
       return 0;
    }

    return invert(root->left)+1;
    return invert(root->right)+1;
  
        

}
int main()
{
   
    Node* root = new Node(10);
    root->left = new Node(5);
        root->left = new Node(5);
    root->right = new Node(15);
    root->right->right = new Node(15);
    root->right->right->right = new Node(15);
   /// preorder(root);
    int w=invert(root);
    cout << w << endl;

    //  preorder(root);
    return 0;
}