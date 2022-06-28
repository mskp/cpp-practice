//#include<bits/stdc++.h>
#include<iostream>

using std::cin;
using std::cout;

template <class T> class Queue{

    T *data;
    const int DEFAULT_SIZE = 10;
    int size;
    int len;
    int front;
    int rear;

public:

    Queue() : Queue(DEFAULT_SIZE) { }

    Queue(int size){
        this->size = size;
        this->data = new int[size];
        this->front = this->rear = -1;
        this->len = 0;
    }

    int length(){
        return len;
    }

    bool isFull(){
        return rear == size - 1;
    }

    bool isEmpty(){
        return front == rear;
    }

    bool insert(T value){
        if(isFull())
            return false;

        data[++rear] = value;
        len++;
        return true;
    }

    T remove(){
        if(isEmpty())
            return 0;

        len--;
        return data[++front];
    }

    void display(){
        if(isEmpty())
            return;

        for (int i = front + 1; i <= rear; i++)
            cout << data[i] << " ";
    }
};