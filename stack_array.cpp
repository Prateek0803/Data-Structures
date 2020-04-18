#include<bits/stdc++.h>
using namespace std;
#define SIZE 5
int A[SIZE];
int top=-1;

bool isempty(){
    if(top == -1){
        return true;
    }
    else{
        return false;
    }
}

void push(int value){
    if(top  ==  SIZE -1){
        cout<< "Stack is full";
    }
    else{
        top++;
        A[top] = value;
    }
}

void pop(){
    if(isempty()){
        cout<< "Stack is empty";
    }
    else{
        top--;
    }
}

void display(){
    if(isempty()){
        cout << "Stack is empty";
    }
    else{
        for(int i=0;i<=top;i++){
            cout << A[i]<<" ";
        }
        cout<<endl;
    }
}

void showTop(){
    if(isempty()){
        cout<<"Stack is empty";
    }
    else{
        cout<<A[top]<<" ";
    }
}

int main(){
    showTop();
}