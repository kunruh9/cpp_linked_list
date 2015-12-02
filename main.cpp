#include <iostream>
#include "LinkedList.cpp"

using namespace std;

int main() {

    LinkedList list;

    list.add("one");
    list.add("zero");
    list.add("hi", 9);
    list.add("car", 2);
//    cout << list.remove(1);

    int size = list.size();
    for (int i = 0; i < size; i++) {
        cout << "[" << i << "] => \"" << list.get(i) << "\", ";
    }

    cout << endl;

    return 0;
}