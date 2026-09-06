#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node *left,*right;
    Node(int x)
    {
        data=x;
        left=right=NULL;
    }
};
Node* LCA(Node *root,int p,int q){
    if(root==NULL)
        return NULL;
    if(root->data==p || root->data==q)
        return root;
    Node *left=LCA(root->left,p,q);
    Node *right=LCA(root->right,p,q);
    if(left!=NULL && right!=NULL)
        return root;

    if(left!=NULL)
        return left;
    return right;
}
int main(){
    Node *root=new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    root->left->left=new Node(4);
    root->left->right=new Node(5);
    int p,q;
    cout<<"Enter two nodes: ";
    cin>>p>>q;
    Node *ans=LCA(root,p,q);
    if(ans!=NULL)
        cout<<"LCA = "<<ans->data;
    else
        cout<<"Node not found";
    return 0;
}
