#include <string>
#include <iostream>

int main()
{
    std::string str("HI THIS IS BRAIN");
    std::string* stringPTR = &str;
    std::string& stringREF = str;

    std::cout << "str address : " << &str << "\n";
    std::cout << "stringPTR address : " << stringPTR << "\n";
    std::cout << "stringREF address : " << &stringREF << "\n\n";

    std::cout << "str value : " << str << "\n";
    std::cout << "stringPTR value : " << *stringPTR << "\n";
    std::cout << "stringREF value : " << stringREF << "\n";
}
