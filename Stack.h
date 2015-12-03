//
// Created by Kyle Unruh on 12/2/15.
//

#ifndef LINKEDLIST_STACK_H
#define LINKEDLIST_STACK_H

#include <iostream>
#include "LinkedList.cpp"

using namespace std;

class Stack {

    virtual void push(string s);

    virtual string pop();

    virtual string peek();

    virtual int search();

    virtual void print();

    virtual int size();

    virtual void clear();
};


#endif //LINKEDLIST_STACK_H
