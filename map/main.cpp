#include <iostream>
#include <map>
#include <string>

int main() {
    std::map<std::string, int> namecard;

    namecard.insert(std::make_pair("John", 42));
    namecard.insert(std::make_pair("Mary", 23));
    namecard.insert(std::make_pair("Jack", 25));
    namecard.insert(std::make_pair("Jason", 29));
    namecard.insert(std::make_pair("Tim", 75));
    namecard.insert(std::make_pair("Jane", 12));

    std::map<std::string, int>::iterator itr;
    std::cout << "Print elements" << std::endl;

    for (itr = namecard.begin(); itr != namecard.end(); itr++ ){
        std::cout << itr->first <<  "\t" << itr->second << "\n";
    }
    std::cout << std::endl;

    std::map<std::string, int> namecardcopy(namecard.begin(), namecard.end());
    std::cout << "Print copy" << std::endl;
    for (auto nc : namecardcopy){
        std::cout << nc.first << "\t" << nc.second << "\n";
    }
    std::cout << std::endl;
    return 0;
}