//#include<bits/stdc++.h>
#include<iostream>
// // #include "queue_array.cpp" 
// // #include "circular_queue.cpp" 
// // #include "stack_array.cpp"
#include "linked_list.cpp"

using std::cin;
using std::cout;

main() {
//     // cout << sum(4, 5) << std::endl;
//     // Stack<int> *myStack = new Stack<int>();
//     // myStack->push(63);
//     // myStack->push(36);
//     // myStack->push(96);
//     // myStack->push(51);
//     // myStack->push(23);
//     // cout << myStack->push(69) << std::endl;
//     // cout << myStack->length() << std::endl;
//     // cout << myStack->pop() << std::endl;
//     // cout << myStack->pop() << std::endl;
//     // cout << myStack->pop() << std::endl;
//     // cout << myStack->pop() << std::endl;
//     // cout << myStack->pop() << std::endl;
//     // myStack->display();

//     // delete myStack;

    LinkedList<int> myList;
    myList.add_first(34);
    myList.add_first(25);
    myList.add_first(5);
    myList.add_first(65);
    myList.add(1, 545454);
//     // for(int i = 1; i <= 10; i++)
//     //     myList.add_first(2 * i);
//     // myList.add_first(34);

    myList.display();
    cout << std::endl << myList.length() << std::endl;
//     // // myList.display();
    // myList.remove(-1);
    myList.display();
//     // // cout << endl;
//     // myList.display();
//     // cout << endl;
    // myList.reverse();
//     // cout << std::endl;
    // myList.display();
    
//     // Queue<int> queue(5);
//     // queue.insert(45);
//     // queue.insert(65);
//     // queue.insert(59);
//     // queue.insert(4);
//     // cout << queue.insert(54) << std::endl;
//     // cout << queue.isFull() << std::endl;
//     // queue.remove();
//     // cout << queue.length() << std::endl;
//     // cout << queue.isEmpty();
//     // queue.display();

//     return 0;
}