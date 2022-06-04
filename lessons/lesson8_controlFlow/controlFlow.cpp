#include <iostream>

using namespace std;

int main(){
    int num;
    string name;

    cout << "What's your name? ";
    cin >> name;

    cout << "How old are you? ";
    cin >> num;

    if(name.length() > 5 && !(num < 5 || num > 125)){
        for(int i=0; i<num; i++){
            cout << "Happy Birthday " << name << "\n";
        }
    } 
    else if(name.length() < 3){
        cout << "Your name seems too short";
    }
    else if(!(num > 5)){
        cout << "You are too young to use this program";
    }
    else {
        cout << "S";
        while(num > 0){
            cout << "O";
            num--;
        }
        cout << " MANY BIRTHDAYS " << name;
    }

    return 0;
}