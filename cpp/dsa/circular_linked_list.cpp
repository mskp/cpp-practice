#include <iostream>

using std::cin;
using std::cout;
using std::endl;

class node
{
public:
    int value;
    node *next;
};

class singlyLinkedList
{
public:
    int size = 0;

    node *insertAtBegin(node *head);

    node *insertAtEnd(node *head);

    node *insertAtIndex(node *head);

    node *deleteFirst(node *head);

    node *deleteLast(node *head);

    node *deleteByIndex(node *head);

    void traverse(node *ptr);
};

int main()
{
    int choice;
    singlyLinkedList o;
    node *head = new node();
    head = head;

    while (true)
    {
        cout << endl
             << "CIRCULAR SINGLY LINKED LIST OPERTAIONS" << endl;
        cout << "1) Insert at beginning" << endl;
        cout << "2) Insert at end" << endl;
        cout << "3) Insert at index" << endl;
        cout << "4) Delete first node" << endl;
        cout << "5) Delete last node" << endl;
        cout << "6) Delete specific node" << endl;
        cout << "7) Display linked list" << endl;
        cout << "8) Display size of linked list" << endl;
        cout << "9) Exit" << endl;
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
            o.traverse(head);
            break;
        case 8:
            cout << endl
                 << o.size << endl;
            break;
        case 9:
            exit(0);
            break;
        default:
            cout << "Invalid choice\n";
            break;
        }
    }
    return 0;
}

node *singlyLinkedList::insertAtBegin(node *head)
{
    int value;
    node *ptr = new node(), *p = head;
    cout << endl
         << "Enter the value to insert: ";
    cin >> value;
    ptr->value = value;
    cout << endl
         << ptr->value << " has been inserted" << endl;
    do
    {
        p = p->next;
    } while (p->next != head);
    p->next = ptr;
    ptr->next = head;
    head = ptr;
    size++;
    return head;
}

node *singlyLinkedList::insertAtEnd(node *head)
{
    int value;
    node *ptr = new node(), *p = head;
    cout << endl
         << "Enter the value to insert: ";
    cin >> value;
    ptr->value = value;
    cout << endl
         << ptr->value << " has been inserted" << endl;
    do
    {
        p = p->next;
    } while (p->next != head);
    p->next = ptr;
    ptr->next = head;
    size++;
    return head;
}

node *singlyLinkedList::insertAtIndex(node *head)
{
    int index, value;
    cout << endl
         << "Enter the index: ";
    cin >> index;
    if (index < 0 || index == 0 || index > size)
        cout << endl
             << "Invalid Index" << endl;
    else
    {
        node *ptr = new node(), *p = head;
        for (int i = 0; i < index - 1; i++)
            p = p->next;
        cout << endl
             << "Enter the value to insert: ";
        cin >> value;
        ptr->value = value;
        cout << endl
             << ptr->value << " has been inserted" << endl;
        ptr->next = p->next;
        p->next = ptr;
        size++;
    }
    return head;
}

node *singlyLinkedList::deleteFirst(node *head)
{
    if (head == nullptr)
        cout << endl
             << "Linked list is empty" << endl;
    else
    {
        node *p = head, *q = head;
        do
        {
            p = p->next;
        } while (p->next != head);
        p->next = head->next;
        head = head->next;
        cout << endl
             << q->value << " has been deleted" << endl;
        delete q;
        size--;
    }
    return head;
}

node *singlyLinkedList::deleteLast(node *head)
{
    if (head == nullptr)
        cout << endl
             << "Linked list is empty" << endl;
    else
    {
        node *p = head, *q = head->next;
        while (q->next != head)
        {
            p = p->next;
            q = q->next;
        }
        p->next = head;
        cout << endl
             << q->value << " has been deleted" << endl;
        delete q;
        size--;
    }
    return head;
}

node *singlyLinkedList::deleteByIndex(node *head)
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
        if (index < 0 || index == 0 || index > size)
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
            delete q;
            size--;
        }
    }
    return head;
}

void singlyLinkedList::traverse(node *head)
{
    node *p = head;
    if (p == head)
        cout << endl
             << "Linked list is empty" << endl;
    else
    {
        cout << endl
             << "Linked List: ";
        do
        {
            cout << p->value << " ";
            p = p->next;
        } while (p != head);
        cout << endl;
    }
}