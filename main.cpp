#include <iostream>
#include "Stack.h"
#include "Queue.h"

using namespace std;

int main() {


    LinkedList list;

    list.add("test1");
    list.add("test2");
    list.add("test3");

    list.print();

    list.remove(0);

    list.print();

    list.remove(1);

    list.print();

//    Stack stack;
//    Queue queue;
//
//    stack.push("blue");
//    stack.push("red");
//    stack.push("yellow");
//
//    stack.print();
//
//    cout << stack.pop() << endl;
//
//    stack.print();

    return 0;
}