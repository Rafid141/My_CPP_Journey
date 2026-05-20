#include<iostream>
#include<string>

int main(){

    std::string a;

    std::string b;

    std::cin >> a;

    std::cin >> b;

    int len1 = a.length();

    int len2 = b.length();

    std::cout << len1 << " " << len2 << std::endl;

    std::string combined = a+b;

    std::cout << combined << std::endl;

    std::swap(a[0], b[0]);

    std::cout << a << std::endl;

    std::cout << b;

    return 0;

}
