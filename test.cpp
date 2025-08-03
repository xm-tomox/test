#include <iostream>
#include <string>
#include <memory>

using namespace std;

unique_ptr<std::string> createString(const char str[]) {
    return std::make_unique<std::string>(str);
}

int main() {
    unique_ptr<string> ptr;
    ptr = createString("123 ABCDEFG あいう");
    cout << *ptr << endl;
    
    return 0;
}