#include <iostream>

using namespace std;

void Log(const char* message){
    cout << message << "\n";
}

void InitLog(){
    Log("Initializing Log");
}