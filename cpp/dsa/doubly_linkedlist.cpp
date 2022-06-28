//#include<bits/stdc++.h>
#include<iostream>

using std::cin;
using std::cout;

template <class T> class LinkedList {

    class Node {
        Node *previous;
        T data;
        Node *next;
        friend class LinkedList;
    
    public:
        Node(T value) {
            this->previous = nullptr;
            this->data = value;
            this->next = nullptr;
        }
    };
    Node *head = nullptr;
    int size = 0;

public:

    LinkedList(){ }

    bool insert_at_first(T value) {
        Node *new_node = new Node(value);


        if(head == nullptr){
            head = new_node;
        } else {
            new_node->next = head;
            head->previous=new_node;
            head = new_node;
        }

        size++;
        return true;
    }

    void display() {
        Node *tmp = head;
        
        while (tmp ->next != nullptr) {
            tmp = tmp->next;
        }
        while (tmp != nullptr) {
            cout << tmp->data << " -> ";
            tmp = tmp->previous;
        }
        cout << "end";
    }
};

int main() {
    LinkedList<int> list;
    list.insert_at_first(45);
    list.insert_at_first(63);
    list.insert_at_first(41);
    list.insert_at_first(29);
    list.insert_at_first(79);
    list.insert_at_first(74);
    list.insert_at_first(62);
    list.display();

    return 0;
}