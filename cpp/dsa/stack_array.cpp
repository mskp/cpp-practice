#include<bits/stdc++.h>

using namespace std;

template <class T> class Stack{

    T *data;
    const int DEFAULT_SIZE= 10;
    int size;
    int len;
    int topOfStack;

public:

    Stack() : Stack(DEFAULT_SIZE){ };

    Stack(int size){
        this->size = size;
        this->data = new T[size];
        this->topOfStack = -1; 
        this->len = 0;    
    }

    int length() {
        return this->len;
    }

    bool isEmpty() {
        return this->topOfStack == -1;
    }

    bool isFull() {
        return this->topOfStack == size - 1;
    }

    bool push(T value) {
        if(isFull())
            return false;

        data[++topOfStack] = value;
        len++;
        return true;
    }

    T pop() {
        if(isEmpty())
            return 0;
        len--;
        return data[topOfStack--];
    }

    void display() {
        if(isEmpty())
            return;

        for (int i = topOfStack; i >= 0; i--)
            cout << data[i] << " ";
    }
};