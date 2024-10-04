#ifndef GREETING_H
#define GREETING_H

#include <string>

using namespace std;

class Greeting {
public:
    Greeting(const string& word);
    void greeting();
private:
    string word;
};

#endif //GREETING_H