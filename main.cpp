#include <iostream>
#include "Stack.h"
#include "Queue.h"

using namespace std;

int main() {

    Stack stack = Stack();
    Queue queue = Queue();

    stack.push("dog");
    stack.push("cat");
    stack.push("bird");
    stack.push("horse");
    stack.print();
    cout << "Element on top of stack: " << stack.peek() << endl;
    cout << "Pop " << stack.pop() << endl;
    stack.print();
    cout << "Cat is at position: " << stack.search("cat") << endl;
    stack.clear();
    stack.print();

    cout << endl;

    queue.offer("dog");
    queue.offer("cat");
    queue.offer("bird");
    queue.offer("horse");
    queue.print();
    cout << "Element at front of Queue: " << queue.peek() << endl;
    cout << "Dequeue " << queue.poll() << endl;
    queue.print();
    cout << "Horse is at position: " << queue.search("horse") << endl;
    queue.clear();
    queue.print();

    return 0;
}