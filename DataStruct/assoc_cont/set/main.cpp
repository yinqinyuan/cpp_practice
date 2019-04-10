#include <iostream>
#include <set>
#include "printset.h"

int main() {
    std::set<int> set1;
    set1.insert(15);
    set1.insert(789);
    set1.insert(870);
    set1.insert(44);
    setprint(set1);


    set1.erase(44);
    setprint(set1);

    return 0;
}