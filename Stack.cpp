//
// Created by Kyle Unruh on 12/2/15.
//

#include "Stack.h"

void Stack::push(string s) {
    list.add(s);
}

string Stack::pop() {
    return list.remove(0);
}

string Stack::peek() {
    return list.get(0);
}

int Stack::search(string s) {
    return list.find(s);
}

void Stack::print() {
    list.print();
}

int Stack::size() {
    return list.size();
}

void Stack::clear() {
    list.clear();
}

