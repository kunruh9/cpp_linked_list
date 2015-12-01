//
// Created by Kyle Unruh on 11/30/15.
//

#include "LinkedList.h"


//List method definitions declared in ListInterface

Iterator * LinkedList::iterator() {
    return new Iterator();
}