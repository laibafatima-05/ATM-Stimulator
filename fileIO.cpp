#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream outFile("data.txt");

    outFile << "Ali Ahmad" << endl;
    outFile << 20 << endl;

    outFile.close();

    ifstream inFile("data.txt");

    string name;
    int age;

    getline(inFile, name);
    inFile >> age;

    cout << name << endl;
    cout << age << endl;

    inFile.close();
    return 0;
}