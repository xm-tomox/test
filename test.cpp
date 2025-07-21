#include <iostream>
#include <string>
#include <memory>

std::unique_ptr<std::string> createString(const char str[]) {
    return std::make_unique<std::string>(str);
}

int main() {
    std::unique_ptr<std::string> ptr;
    ptr = createString("ABCDEFG");
    std::cout << *ptr << std::endl;
    return 0;
}