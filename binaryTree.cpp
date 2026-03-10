#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int data) {
        this->data = data;
        left = nullptr;
        right = nullptr;
    }
};
Node* createBinaryTree(){
    int val;
    cout<<"ENTER NODE VALUE:"<<endl;
    cin>>val;
    if(val<0){
        return nullptr;
    }
    Node *root=new Node(val);
    cout<<"ENTER "<<val<<" LEFT DATA:"<<endl;
    root->left=createBtree();

    cout<<"ENTER "<<val<<" RIGHT DATA:"<<endl;
    root->right=createBtree();
    return root;
}

int main() {
    Node *root=createBinaryTree();

    return 0;
}
