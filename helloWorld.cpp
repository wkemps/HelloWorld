#include <iostream>

using namespace std;

string getNumber();


int main() {
    std::string temp;

    temp = getNumber();
    std::cout << "Hello " << temp << std::endl;
    return 0;
}

string getNumber()
{
    string temp;
    cout << "Name? ";
    cin >> temp;
    return temp;
}