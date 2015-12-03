//
// Created by Kyle Unruh on 12/2/15.
//

#ifndef LINKEDLIST_STACK_H
#define LINKEDLIST_STACK_H

#include <iostream>
#include "LinkedList.cpp"

using namespace std;

class Stack {

public:
    virtual void push(string s);

    virtual string pop();

    virtual string peek();

    virtual int search(string s);

    virtual void print();

    virtual int size();

    virtual void clear();

protected:
    LinkedList list;

};


#endif //LINKEDLIST_STACK_H
