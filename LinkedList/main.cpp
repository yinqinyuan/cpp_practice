#include <iostream>
#include "Node.cpp"

int main() {
    Node<char> *p, *q, *r;
    q = new Node<char>('B');
    p = new Node<char>('A',q);
    r = new Node<char>('C');

    q->Insert(r);

    std::cout << "p: " << p->data << std::endl;

    p = p->NextNode();

    std::cout << std::endl;

    r = q->DeleteAfter();

    delete q;
    delete p;
    delete r;
    return 0;
}