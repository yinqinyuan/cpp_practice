//
// Created by qinyin on 3/28/2019.
//

#ifndef LINKEDLIST_NODE_H
#define LINKEDLIST_NODE_H

#include <iostream>

template<typename T>
class Node
{
public:
    Node();
    Node(const T& item, Node<T>* ptrnext = NULL);
    T data;
    Node<T>* NextNode();
    void Insert(Node<T>* p);
    Node<T>* DeleteAfter();

private:
    Node<T>* next;

};

#endif //LINKEDLIST_NODE_H
