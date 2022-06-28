// #include<bits/stdc++.h>
#include <iostream>

template <class T> class LinkedList {

    class Node {

        T data;
        Node *next;
        friend class LinkedList;

        Node(T value) {
            this->data = value;
            this->next = nullptr;
        }

        Node(T value, Node *next) {
            this->data = value;
            this->next = next;
        }
    };

    Node *head = nullptr;
    // Node *tail = nullptr;
    int size = 0;

public:
    LinkedList() {}

    int length() {
        return this->size;
    }

    void add_first(T value) {
        Node *node = new Node(value, head);

        // if(head == nullptr)
        //     head = node;

        // node->next = head;
        head = node;
        size++;
    }

    void add(T value) {
        if (head == nullptr)
            return add_first(value);

        Node *temp = head;

        while (temp->next != nullptr)
            temp = temp->next;

        Node *node = new Node(value);
        temp->next = node;
        size++;
    }

    void add(int index, T value) {
        if (index == size)
            return add(value);

        else if (index == 0)
            return add_first(value);

        Node *node = new Node(value);
        Node *temp = head;

        for (int i = 1; i < index; i++)
            temp = temp->next;

        node->next = temp->next;
        temp->next = node;
    }

    void remove_first() {
        if (head == nullptr)
            return;

        Node *temp = head;
        head = head->next;
        delete temp;
    }

    void remove_last() {
        Node *temp1 = head, *temp2 = head->next;

        while (temp2->next != nullptr) {
            temp1 = temp1->next;
            temp2 = temp2->next;
        }
        
        temp1->next = nullptr;
        delete temp2;
    }

    void remove(int index) {
        if (index > size || index < 0) {
            std::cout << "Invalid index" << std::endl;
            return;
        }
        else if (index == size)
            return remove_last();

        else if (index == 0)
            return remove_first();

        Node *temp1 = head;
        Node *temp2 = head->next;

        for (int i = 1; i < index; i++) {
            temp1 = temp1->next;
            temp2 = temp2->next;
        }
        temp1->next = temp2->next;
        delete temp2;
    }

    void reverse() {
        Node *prev_ptr = nullptr;
        Node *current_ptr = head;
        Node *next_ptr;

        while (current_ptr != nullptr) {
            next_ptr = current_ptr->next;
            current_ptr->next = prev_ptr;

            prev_ptr = current_ptr;
            current_ptr = next_ptr;
        }

        head = prev_ptr;
    }

    void display() {
        for (Node *tmp = head; tmp != nullptr; tmp = tmp->next) {
            std::cout << tmp->data << " -> ";
        }
        std::cout << "end";
    }
};