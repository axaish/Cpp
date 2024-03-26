#include <iostream>
#include <string>
bool isValidUsername(const std::string& username1, const std::string& username2) {
return username1 == username2;
}
int main() {
std::string userName, reenteredName;
std::cout << "Enter the user name: ";
std::cin >> userName;
std::cout << "Reenter the user name: ";
std::cin >> reenteredName;
if (isValidUsername(userName, reenteredName)) {
std::cout << "User name is Valid" << std::endl;
} else {
std::cout << "User name is Invalid" << std::endl;
}
return 0;
}
