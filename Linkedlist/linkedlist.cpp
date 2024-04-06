#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node(int val){
        data=val;
        next=NULL;
    }
};
void insertathead(node* &head,int val){
    node* n=new node(val);
    n->next=head;
    head=n;
}
void insertattail(node* &head,int val){
    node* n=new node(val);
     if(head==NULL){
     head=n;
     return;
}
    node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
    return;
}
bool search(node* head,int k){
    node* temp=head;
    while(temp!=NULL){
        if(temp->data==k) return true;
        temp=temp->next;
    }
    return false;
}
void display(node* head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;

    }
cout<<"NULL"<<endl;
}
void deleteathead(node* &head){
    node* temp=head;
    head=head->next;
    delete temp;
}
void deletion(node* &head,int val){
    node* temp=head;
    if(head==NULL)
    return;
    if(temp->next==NULL){
        deleteathead(head);
        return;
    }
    while(temp->next->data!=val){
        temp=temp->next;
    }
    node* todelete=temp->next;
    temp->next=temp->next->next;
    delete todelete;
}
node* reverse(node* &head){
node* prev=NULL;
node* curr=head;
node* nex;
while(curr!=NULL){
    nex=curr->next;
    curr->next=prev;
    prev=curr;
    curr=nex;

}
return prev;
}

node* reverserecursive(node* &head){
    if(head==NULL || head->next==NULL)
    return head;
    node* newhead=reverserecursive(head->next);
    head->next->next=head;
    head->next=NULL;
    return newhead;
}
int main(){
    node* head=NULL;
insertattail(head,1);
insertattail(head,2);
insertattail(head,3);
//insertathead(head,0);
display(head);
node* newhead=reverserecursive(head);
display(newhead);

    return 0;
}