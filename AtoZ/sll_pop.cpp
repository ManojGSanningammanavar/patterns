#include<bits/stdc++.h>
using namespace std;

class Node{
    public :
    int data;
    Node* next;

    Node(val){
        data = val;
        next = null;
    }
};

class sll{
    Node* head;
    Node* tail;

    sll()
    {
        head = tail = NULL;
    }

    void poo_front(){
        if(head == NULL){
            cou<<"NO LL Exists\n";
        return;
    }
    Node* temp = head;
    head = head->next;
    temp->next = NULL;
    delete temp;
    }
}
