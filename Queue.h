//
// Created by Kyle Unruh on 12/2/15.
//

#ifndef LINKEDLIST_QUEUE_H
#define LINKEDLIST_QUEUE_H

#include <iostream>
#include "LinkedList.cpp"

using namespace std;

class Queue {
    
public:

    virtual void offer(string s);

    virtual string poll();

    virtual string peek();

    virtual void clear();

    virtual int search(string s);

    virtual int size();
    
    virtual void print();
    
protected:
    LinkedList list;
};


#endif //LINKEDLIST_QUEUE_H

