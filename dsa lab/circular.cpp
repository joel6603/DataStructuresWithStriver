#include<iostream>
using namespace std;

struct Node{
  int data;
  Node *next;
};

Node * create_list(int arr[],int n){
  if(n==0){
    return NULL;
  }
  Node* head=NULL;
  Node* tail=NULL;

  Node* newnode = new Node();

  newnode->data = arr[0];
  newnode->next = NULL;
  head = newnode;
  tail = newnode;

  for(int i =1;i<n;i++){
    Node* newnode = new Node();
    newnode->data = arr[i];
    newnode->next = NULL;
    tail->next = newnode;
    tail =tail->next;
  }

  tail->next = head;
  return head;

}

void display(Node * head){
  Node* temp;
  cout << head->data<<" ";
  temp = head->next;
  while(temp!=head)
  {
    cout << temp -> data<<" ";
    temp = temp->next;
  }
}

Node * merge(Node * head1,Node *head2){
  if(head1 == NULL){
    return head2;
  }
  if(head2 == NULL){
    return head1;
  }

  Node * first = head1;
  Node * second = head2;

  int s1 =1;
  int s2 = 1;
  while(first!=head1){
    first = first->next;
    s1++;
  }
  while(second!=head2){
    second = second->next;
    s2++;
  }
  while(s1>0 && s2 >0){
    if(first->data<=second->data){
      Node* newnode = new Node();
      
    }
  }
}

int main(){
  Node* head=new Node();
  head = NULL;
  int n1,n2;
  cin >> n1;
  int arr1[n1];
  for(int i=0;i<n1;i++){
    cin >> arr1[i];
  }

  cin >> n2;
  int arr2[n2];
  for(int i=0;i<n2;i++){
    cin >> arr2[i];
  }

  Node* head1 = new Node();
  Node* head2 = new Node();

  head1 = create_list(arr1,n1);
  display(head1);
  head2 = create_list(arr2,n2);
  display(head2); 

  head = merge(head1,head2);

  return 0;
}