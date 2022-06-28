#include <iostream>

using std::cin;
using std::cout;
using std::endl;

class node
{
public:
    int value;
    node *prev, *next;
};

class doublyLinkedList
{
public:
    int size = 2;

    node *insertAtBegin(node *head);

    node *insertAtEnd(node *head);

    node *insertAtIndex(node *head);

    node *deleteFirst(node *head);

    node *deleteLast(node *head);

    node *deleteByIndex(node *head);

    void traverseForward(node *ptr);

    void traverseReverse(node *ptr);
};

int main()
{
    int choice;
    doublyLinkedList o;
    node *head = new node(), *other = new node();
    head->prev = nullptr;
    head->value = 56;
    head->next = other;
    other->prev = head;
    other->value = 79;
    other->next = nullptr;

    while (true)
    {
        cout << endl
             << "DOUBLY LINKED LIST OPERTAIONS" << endl;
        cout << "1) Insert at beginning" << endl;
        cout << "2) Insert at end" << endl;
        cout << "3) Insert at index" << endl;
        cout << "4) Delete first node" << endl;
        cout << "5) Delete last node" << endl;
        cout << "6) Delete specific node" << endl;
        cout << "7) Display linked list (Forward)" << endl;
        cout << "8) Display linked list (Reverse)" << endl;
        cout << "9) Display size of linked list" << endl;
        cout << "10) Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            head = o.insertAtBegin(head);
            break;
        case 2:
            o.insertAtEnd(head);
            break;
        case 3:
            o.insertAtIndex(head);
            break;
        case 4:
            head = o.deleteFirst(head);
            break;
        case 5:
            o.deleteLast(head);
            break;
        case 6:
            o.deleteByIndex(head);
            break;
        case 7:
            o.traverseForward(head);
            break;
        case 8:
            o.traverseReverse(head);
            break;
        case 9:
            cout << endl
                 << o.size << endl;
            break;
        case 10:
            exit(0);
            break;
        default:
            cout << "Invalid choice\n";
            break;
        }
    }
    return 0;
}

node *doublyLinkedList::insertAtBegin(node *head)
{
    int value;
    node *ptr = new node();
    cout << endl
         << "Enter the value to insert: ";
    cin >> value;
    ptr->value = value;
    cout << endl
         << ptr->value << " has been inserted" << endl;
    ptr->prev = nullptr;
    ptr->next = head;
    head->prev = ptr;
    head = ptr;
    size++;
    return ptr;
}

node *doublyLinkedList::insertAtEnd(node *head)
{
    int value;
    node *ptr = new node();
    node *p = head;
    cout << endl
         << "Enter the value to insert: ";
    cin >> value;
    ptr->value = value;
    cout << endl
         << ptr->value << " has been inserted" << endl;
    while (p->next != nullptr)
    {
        p = p->next;
    }
    p->next = ptr;
    ptr->prev = p;
    ptr->next = nullptr;
    size++;
    return ptr;
}

node *doublyLinkedList::insertAtIndex(node *head)
{
    int index, value;
    cout << endl
         << "Enter the index: ";
    cin >> index;
    if (index < 0 || index == 0 || index > size - 1)
        cout << endl
             << "Invalid Index" << endl;
    else
    {
        node *ptr = new node(), *p = head;
        cout << endl
             << "Enter the value to insert: ";
        cin >> value;
        ptr->value = value;
        cout << endl
             << ptr->value << " has been inserted" << endl;
        for (int i = 0; i < index - 1; i++)
            p = p->next;
        ptr->next = p->next;
        ptr->next->prev = ptr;
        ptr->prev = p;
        p->next = ptr;
        size++;
    }
    return head;
}

node *doublyLinkedList::deleteFirst(node *head)
{
    if (head == nullptr)
        cout << endl
             << "Linked list is empty" << endl;
    else
    {
        node *p = head;
        head = head->next;
        cout << endl
             << p->value << " has been deleted" << endl;
        head->prev = nullptr;
        delete p;
        size--;
    }
    return head;
}

node *doublyLinkedList::deleteLast(node *head)
{
    if (head == nullptr)
        cout << endl
             << "Linked list is empty" << endl;
    else
    {

        node *p = head, *q = head->next;
        while (q->next != nullptr)
        {
            p = p->next;
            q = q->next;
        }
        p->next = nullptr;
        cout << endl
             << q->value << " has been deleted" << endl;
        delete q;
        size--;
    }
    return head;
}

node *doublyLinkedList::deleteByIndex(node *head)
{
    int index;
    if (head == nullptr)
        cout << endl
             << "Linked list is empty" << endl;
    else
    {
        cout << endl
             << "Enter the index: ";
        cin >> index;
        if (index < 0 || index == 0 || index > size - 1)
            cout << endl
                 << "Invalid Index" << endl;
        else
        {
            node *p = head, *q = head->next;
            for (int i = 0; i < index - 1; i++)
            {
                p = p->next;
                q = q->next;
            }
            p->next = q->next;
            cout << endl
                 << q->value << " has been deleted" << endl;
            q->next->prev = p;
            delete q;
            size--;
        }
    }
    return head;
}

void doublyLinkedList::traverseForward(node *ptr)
{
    if (ptr == nullptr)
        cout << endl
             << "Linked list is empty" << endl;
    else
    {
        cout << endl
             << "Linked List: ";
        while (ptr != nullptr)
        {
            cout << ptr->value << " ";
            ptr = ptr->next;
        }
        cout << endl;
    }
}

void doublyLinkedList::traverseReverse(node *ptr)
{
    while (ptr->next != nullptr)
        ptr = ptr->next;

    cout << endl
         << "Linked List: ";
    while (ptr != nullptr)
    {
        cout << ptr->value << " ";
        ptr = ptr->prev;
    }
    cout << endl;
}