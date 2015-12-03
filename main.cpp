#include <iostream>
#include "Stack.h"
#include "Queue.h"

using namespace std;

int main() {

    Stack stack;
    Queue queue;

    LinkedList list, list2;


    list.add("one");
    list.add("zero");
    list.add("hi", 9);
    list.add("car", 2);

    list2.add(list.get(2));
    list2.print();
    list.print();

    return 0;
}