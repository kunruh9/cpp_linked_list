#include <iostream>
#include "LinkedList.cpp"

using namespace std;

int main() {

    LinkedList list, list2;

    list.add("one");
    list.add("zero");
    list.add("hi", 9);
    list.add("car", 2);

    list2.add(list.get(2));
    list2.print();
    list.print();

//    list.printList();
//
//    list.remove("zero");
//
//    list.printList();
//
    list.clear();
//
//    list.printList();

    return 0;
}