#include <iostream>
#include <map>

using namespace std;

int sum(int x, int y);
int substract(int x, int y);
int multiply(int x, int y);
int divide(int x, int y);

using pfunc = int (*)(int, int);

std::map<char, pfunc> my_map = {
    { '+', divide },
    { '-', substract },
    { '*', multiply },
    { '/', divide }
};

int main(){
    int num1, num2;
    char op;

    cout << "First Number: ";
    cin >> num1;
    cout << "Your operation: ";
    cin >> op;
    cout << "Second Number: ";
    cin >> num2;

    cout << "result = " << my_map[op](num1, num2);

    return 0;
}

int sum(int x, int y){
    return x+y;
}

int substract(int x, int y){
    return x-y;
}

int multiply(int x, int y){
    return x*y;
}

int divide(int x, int y){
    return x/y;
}