#include <iostream>
#include <cstring>

using namespace std;

struct person{
    char name[120], gender;
    int age;
};

void makeUser(person &p) {
    cout << "Greetings! What is your name?" << endl;
    cin.clear();
    cin.getline(p.name, 120);
    cout << "Now please tell me your age and gender: ";
    cin >> p.age >> p.gender;
}

int main() {
    person p;
    makeUser(p);
    cout << "Hello, " << p.name;

    return 0;
}
