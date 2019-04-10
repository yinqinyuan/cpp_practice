//
// Created by qinyin on 4/9/2019.
//

#include "printset.h"
void setprint(std::set<int>const &s){
    std::cout << "Set data" << std::endl;

    for (auto se : s){
        std::cout << se << "\n";
    }

    std::cout<< std::endl;
}