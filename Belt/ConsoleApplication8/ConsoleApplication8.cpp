// ConsoleApplication8.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <vector>
#include <iostream>
#include <map>
#include <set>
using namespace std;

void PrintVector(const vector<int>&v) {
    for (auto s:v)
    {
        cout << s;
        cout << endl;
    }
}
void PrintVector(const vector<bool>& v) {
    for (auto s : v)
    {
        cout << s;
        cout << endl;
    }
}
void PrintMap(const map<int, string>& m) {
    for (auto item: m)
    {
        cout << item.first<< " " << item.second; 
        cout << endl;
    }
}
void PrintMap(const map<string, int>& m) {
    for (auto item : m)
    {
        cout << item.first << " " << item.second;
        cout << endl;
    }
}
map<string,int> BuildRMap(const map<int, string>& m) {
    map<string, int> result;
    for (auto item: m)
    {
        result[item.second] = item.first;
    }
    return result;
}
void PrintSet(const set<string>& s) {

    for (auto item : s)
    {
        cout << item << "\n";
    }
}


int main() {

    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
