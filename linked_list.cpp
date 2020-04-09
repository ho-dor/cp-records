#include<bits/stdc++.h>

using namespace std;
struct node{
  int data;
  node* next;
};

node* newNode(int data){
  node* p = new node();
  p->data = data;
  p->next = NULL;
  return p;
}

node* insertAtTail(node*&head, int d){
  if(head==NULL){
    node* head = newNode(d);
    return head;
  }
  node* temp=head;
  while(temp->next!=NULL){
    temp = temp->next;
  }
  node* p = newNode(d);
  temp->next = p;

  return head;
}

void print(node* head){
  if(head==NULL)
    return;

  node* temp = head;
  while(temp!=NULL){
    cout<<temp->data<<"->";
    temp=temp->next;
  }
}

node* insertHead(int d){
  node* head = newNode(d);
  return head;
}

node* buildList(node*&head){
  int d;
  cin>>d;
  while(d!=-1){
    if(head==NULL){
      head = insertHead(d);
    }else{
        head = insertAtTail(head,d);
    }
    cin>>d;
  }
  return head;
}

int main(){
  node* head = NULL;
  buildList(head);
  print(head);
return 0;
}
