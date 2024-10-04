#include <iostream>
#include <greeting.h>

using namespace std;

Greeting::Greeting(const string& word) : word(word) {}

void Greeting::greeting() {
    cout << word << ", World!" << endl;
}
