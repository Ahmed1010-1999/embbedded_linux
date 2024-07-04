#include <iostream>
#include <string.h>
using namespace std;
//template<class t>
class Node{
    public:
    int data;
    
    Node *nxt_ptr;   
};
//template<class t>
class myStack {
    public:
    //Node*head;
    Node * top=nullptr;
    void push (int val ){ 
        Node *nwptr=new Node;
        nwptr->nxt_ptr=top;
        nwptr->data=val;
        top=nwptr;    
    }
    void display(){
        Node *nwptr=new Node;
        nwptr=top;
        while(nwptr!=nullptr){
            cout <<nwptr->data<<"   ";
            nwptr=nwptr->nxt_ptr;
        }
        
    }
    int pop(){
        int m=top->data;
        top=top->nxt_ptr;
        return m;
    }
    

};
//template<class t>
int main(){  
    myStack p;
    p.push(4);
    p.push(3);
    p.push(5);
    p.push(6);
    p.push(7);
    p.push(9);
    cout<<p.pop();
    cout<<"\n"<<p.pop();


}