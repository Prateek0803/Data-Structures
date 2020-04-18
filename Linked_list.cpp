#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node *link;
};

Node*head = NULL;


//Insertion at beginning
 void insert_begin(int d){
    Node *node = new Node();
    node->data = d;
    node->link = head;
    head = node;
}

//Insertion at end
// void insert_end(int e){
//     Node *node = new Node();
//     node->data = e;
//     node->link = NULL;
//     if(head == NULL){
//         head = node;
//     }
//     else{
//         Node*temp1 = head;
//         while(temp1->link!=NULL){
//             temp1=temp1->link;
//         }
//         temp1->link = node;
//     }
// }

void printOut(){
    if(head == NULL){
        cout<<"List is empty";
    }
    else{
        Node*temp = head;
        while(temp!= NULL){
            cout << temp->data<<endl;
            temp = temp->link;
        }
    }
}

int main(){
   
insert_begin(1);
insert_begin(2);
insert_begin(3);
insert_begin(4);
insert_begin(5);

printOut();   
}