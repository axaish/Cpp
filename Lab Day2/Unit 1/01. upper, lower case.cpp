#include <iostream>
#include <cctype>
#include <string>
using namespace std;

int main()
{
    char str[100];
    cout << "Enter a string: ";
    cin.getline(str, 100);

    int count = 0;
    for (int i = 0; i < 100; i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            count++;
        }
    }
    cout << "Total uppercase letters in the string are: " << count << endl;

    for (int i = 0; str[i] != '\0'; i++)
    {
        str[i] = toupper(str[i]);
    }
    cout << "Uppercase string: " << str << endl;

    for (int i = 0; str[i] != '\0'; i++)
    {
        str[i] = tolower(str[i]);
    }
    cout << "Lowercase string: " << str << endl;

    return 0;
}
