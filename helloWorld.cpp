#include <iostream>

using namespace std;

string getName();


int main() {
    std::string temp;

    temp = getName();
    std::cout << "Hello " << temp << std::endl;
    return 0;
}

string getName()
{
    string temp;
    cout << "Name? ";
    cin >> temp;
    return temp;
}