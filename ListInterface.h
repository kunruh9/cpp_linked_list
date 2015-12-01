//
// Created by Kyle Unruh on 11/30/15.
//

#ifndef LINKEDLIST_LISTINTERFACE_H
#define LINKEDLIST_LISTINTERFACE_H

#include "Iterator.h"

// abstract class for Linked Lists

class ListInterface {
    public:

        virtual void add(string s) = 0;

        virtual void add(string s, int index) = 0;

        virtual void clear() = 0;

        virtual string get(int index) = 0;

        virtual bool isEmpty() = 0;

        virtual Iterator * iterator() = 0;

        virtual string remove(int index) = 0;

        virtual bool remove(string s) = 0;

        virtual int size() = 0;
};


#endif //LINKEDLIST_LISTINTERFACE_H
