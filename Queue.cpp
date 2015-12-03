//
// Created by Kyle Unruh on 12/2/15.
//FIFO

#include "Queue.h"


int Queue::search(string s) {
    return list.find(s);
}

void Queue::clear() {
    list.clear();
}

void Queue::offer(string s) {
    list.add(s, list.size());
}

string Queue::peek() {
    return list.get(0);
}

string Queue::poll() {
    return list.remove(0);
}

int Queue::size() {
    return list.size();
}

void Queue::print(){
    list.print();
}