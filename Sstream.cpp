#include<iostream>
#include<sstream>

int main(){

    std::string line = "I love Nicole";

    std::stringstream ss(line);

    std::string word1, word2, word3;

    ss >> word1;

    ss >> word2;

    ss >> word3;

    std::cout << word1 << std::endl;

    std::cout << word2 << std::endl;

    std::cout << word3 << std::endl;


}
