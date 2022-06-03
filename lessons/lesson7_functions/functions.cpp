#include <iostream>

using namespace std;

string sayHi(string name, string source="Cpp");

int main(){
    cout << sayHi("Julien");

    return 0;
}

string sayHi(string name, string source){
    return "Hello " + name + " from " + source + '\n';
}