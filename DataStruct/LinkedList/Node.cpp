//
// Created by qinyin on 3/28/2019.
//

#include "Node.h"
template<class T>
Node<T>::Node()
{
}

template<class T>
Node<T>::Node(const T& item, Node<T>* ptrnext) {
    this -> data = item;
    this -> next = ptrnext;
}
template <class T>
Node<T>* Node<T>::NextNode() {
    return this->next;
}

template <class T>
void Node<T>::Insert(Node<T> *p) {
    p->next = this -> next;

    this->next = p;
}

template <class T>
Node<T>* Node<T>::DeleteAfter(){
    Node<T>* tempNode = next;
    if(next != NULL)
        next = next -> next;

    return tempNode;
}
