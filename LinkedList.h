//
// Created by Kyle Unruh on 11/30/15.
//

#ifndef LINKEDLIST_LINKEDLIST_H
#define LINKEDLIST_LINKEDLIST_H

#include <iostream>
#include "ListInterface.h"

using namespace std;

class LinkedList : public ListInterface {
    public:
        Iterator * iterator();
    //TODO: Declarations of the rest of methods from ListInterface
};


#endif //LINKEDLIST_LINKEDLIST_H
