//
// Created by Kyle Unruh on 11/30/15.
//

#include "ListInterface.h"


//List method definitions declared in ListInterface

class LinkedList : public ListInterface {

public:
    LinkedList() {
        head = nullptr;
        listSize = 0;
    }

    void add(string s) {
        if (head == nullptr) {
            head = new node;
            head->s = s;
            head->next = nullptr;
        } else {
            node* n = new node;
            n->s = s;
            n->next = head;
            head = n;
        }
        listSize++;
    }

    void add(string s, int index) {
        if (index > listSize)
            index = listSize;

        if (head == nullptr || index == 0) {
            return add(s);
        } else {
            node* tmp = head;
            for (int i = 1; i <= index-1; i++) {
                tmp = tmp->next;
            }
            node* n = new node;
            n->s = s;
            n->next = tmp->next;
            tmp->next = n;
        }
        listSize++;
    }

    void clear() {
        node* nodePtr = head;
        node* tmp = nullptr;
        while (nodePtr->next != nullptr) {
            tmp = nodePtr;
            nodePtr = nodePtr->next;
            delete tmp;
        }
        head = nullptr;
    }

    string get(int index) {
        node* nodePtr = head;
        while (index--) {
            nodePtr = nodePtr->next;
        }
        return nodePtr->s;
    }

    bool isEmpty() {
        return listSize == 0;
    }

    Iterator* iterator() {
        return nullptr;
    }

    string remove(int index) {
        node* nodeCurr = head;
        node* nodePrev = head;
        while (index--) {
            nodePrev = nodeCurr;
            nodeCurr = nodeCurr->next;
        }
        string s = nodeCurr->s;
        nodePrev->next = nodeCurr->next;
//        delete nodeCurr;
        return s;
    }

    bool remove(string s) {
        node* nodePtr = head;
        while (nodePtr != nullptr) {
            if (s.compare(nodePtr->s))
                return true;
            nodePtr = nodePtr->next;
        }
        return false;
    }

    int size() {
        return listSize;
    }

protected:
    typedef struct node {
        string s;
        node* next;
    };
    node* head;
    int listSize;
};