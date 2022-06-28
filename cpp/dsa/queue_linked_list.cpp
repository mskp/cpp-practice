//#include<bits/stdc++.h>
#include<iostream>

using std::cin;
using std::cout;

template <class T> class Queue{

    class Node{
        T data;
        Node *next;
        friend class Queue;

    public:

        Node(T value){
            this->data = value;
            this->next = nullptr;
        }
    };

    Node *rear = nullptr;
    int size = 0;

public:

    bool insert(T value){
        // if(front == rear == nullptr){
        //     front = rear;
        // }
        Node *node = new Node(value);
        rear->next = node;
        return true;
    }

    T remove(){
        Node *temp = front;
        front = front->next;
        delete temp;
    }

    void display(){
        Node *temp = front;
        while(temp != nullptr){
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "end";
    }
};