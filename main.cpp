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

    Stack stack;
    Queue queue;
    queue.add("dog");
    queue.add("cat");
    queue.add("bird");
    queue.print();
    stack.print();

    return 0;
}