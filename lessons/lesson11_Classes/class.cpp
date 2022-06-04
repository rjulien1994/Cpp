#include <iostream>

using namespace std;

class person{
    private:
        string SSN;
    public:
        string firstName;
        string LastName;
        int age;

        person(string first, string last, int yo, string social){
            firstName = first;
            LastName = last;
            SSN = social;
            age = yo;
        }

        int birthday(){
            age++;
            return age;
        }

        string getSSN(){
            return SSN;
        }
};

class student: public person{
    public:
        string major;

        student(string first, string last, int yo, string social, string study): person(first, last, yo, social){
            major = study;
        }

        string study(){
            return "My name is " + firstName + " and I study " + major;
        }
};

int main(){
    person me("Julien", "Rappe", 27, "JulienSSN");

    //cout << me.SSN; <- cannot access private methods or attributes
    cout << "My SSN is: " << me.getSSN() << "\n";
    cout << "I am " << me.age << " but after my birthday I will be " << me.birthday() << " and be " << me.age <<" for one year \n";

    student Tom("Tom", "Smith", 23, "TomSSN", "CSS");

    cout << Tom.study() << "\n";

    return 0;
}