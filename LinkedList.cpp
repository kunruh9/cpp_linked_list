//
// Created by Kyle Unruh on 11/30/15.
//

#ifndef LINKEDLIST_CPP
#define LINKEDLIST_CPP

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
        if (nodePtr == nullptr)
            return;
        while (nodePtr->next != nullptr) {
            tmp = nodePtr;
            nodePtr = nodePtr->next;
            deleteNode(tmp);
        }
        head = nullptr;
        listSize = 0;
    }

    string get(int index) {
        if (index > listSize-1)
            return "";

        node* nodePtr = head;
        while (index--) {
            nodePtr = nodePtr->next;
        }
        return nodePtr->s;
    }

    bool isEmpty() {
        return listSize == 0;
    }

    string remove(int index) {
        node* nodeCurr = head;
        node* nodePrev = nullptr;
        while (index--) {
            nodePrev = nodeCurr;
            nodeCurr = nodeCurr->next;
        }
        string s = nodeCurr->s;
        if (nodePrev != nullptr)
            nodePrev->next = nodeCurr->next;
        else
            head = nodeCurr->next;
        deleteNode(nodeCurr);
        listSize--;
        return s;
    }

    bool remove(string s) {
        node* nodeCurr = head;
        node* nodePrev = nullptr;
        while (nodeCurr != nullptr) {
            if (s.compare(nodeCurr->s) == 0) {
                if (nodePrev == nullptr) {
                    head = nodeCurr->next;
                } else {
                    nodePrev->next = nodeCurr->next;
                }
                deleteNode(nodeCurr);
                listSize--;
                return true;
            }
            nodePrev = nodeCurr;
            nodeCurr = nodeCurr->next;
        }
        return false;
    }

    int size() {
        return listSize;
    }

    void print() {
        cout << "head => ";
        for (int i = 0; i < listSize; i++) {
            cout << "["<< i << ": \"" << get(i) << "\"] => ";
        }
        cout << "nil" << endl;
    }

    int find(string s){
        node* tmp = head;
        for (int i = 0; i < listSize; i++ || tmp == nullptr) {
            if (s.compare(tmp->s) == 0){
                return i;
            }
            tmp = tmp->next;
        }

        return -1;
    }

protected:
    typedef struct node {
        string s;
        node* next;
    } node;
    node* head;
    int listSize;

    void deleteNode(node* n) {
        delete n;
        n = NULL;
    }
};

#endif