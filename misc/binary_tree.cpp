#include<bits/stdc++.h>
using namespace std;

struct node{
  int data;
  node* left;
  node* right;
};

node* newNode(int d){
  node* p = new node();
  p->data = d;
  p->left=p->right=NULL;

  return p;
}

node* buildTree(){
  int d;
  cin>>d;
  if(d==-1){
    return NULL;
  }
  node* root = newNode(d);
  root->left = buildTree();
  root->right = buildTree();

  return root;
}

void print(node* root){
    if(root==NULL){
      return;
    }
    //Preorder
    cout<<root->data<<" ";
    print(root->left);
    print(root->right);
}

void printInorder(node* root){
    if(root==NULL){
      return;
    }
    //Inorder
    print(root->left);
    cout<<root->data<<" ";
    print(root->right);
}

void printPostorder(node* root){
    if(root==NULL){
      return;
    }
    //Postorder
    print(root->left);
    print(root->right);
    cout<<root->data<<" ";
}

int count(node* root){
  if(root==NULL)
    return 0;

  return 1+count(root->left)+count(root->right);
}

int sum(node* root){
  if(root==NULL)
    return 0;
  return root->data+sum(root->right)+sum(root->left);
}

int height(node* root){
  if(root==NULL){
    return 0;
  }
  return 1+ max(height(root->left),height(root->right));
}

int diameter(node* root){
  if(root==NULL)
    return 0;
  int rd = height(root->right);
  int ld = height(root->left);

  return max(ld+rd+1,max(ld,rd));
}

int main(){
  node* n = buildTree();
  cout<<"Preorder: "; print(n); cout<<endl;
  cout<<"Inorder: ";printInorder(n); cout<<endl;
  cout<<"Postorder: ";printPostorder(n); cout<<endl;
  cout<<"No. of nodes: "<<count(n)<<endl;
  cout<<"Sum of nodes: "<<sum(n)<<endl;
  cout<<"Height of tree: "<<height(n)<<endl;
  cout<<"Diameter: "<<diameter(n)<<endl;
  return 0;
}
