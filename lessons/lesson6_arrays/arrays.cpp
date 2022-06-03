#include <iostream>

using namespace std;

int main(){

    int numbers[] = {4, 1, 2, 3};
    int sizedArray[20];

    numbers[2] = 5;
    sizedArray[20] = 52;

    cout << numbers[2] << '\n';
    cout << sizedArray[20];

    return 0;
}