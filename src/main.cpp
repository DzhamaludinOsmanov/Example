#include <iostream>
#include <string>
#include <greeting.h>

using namespace std;
int main(int argc, char* argv[]){
    if (argc != 2){
        cout << "Usage: " << argv[0] << "word" << endl;
        return 1;
    }

    string word = argv[1];

    Greeting greeting(word);
    greeting.greeting();

    return 0;
} // namespace std;
