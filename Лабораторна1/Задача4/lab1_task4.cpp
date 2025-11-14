#include <iostream>
using namespace std;
int main() {
    int age; 
    double salary;
    cout << "Ваш вік: "; 
    cin >> age;
    cout << "Ваша зарплата: ";
    cin >> salary;
    if (age > 20 && salary > 400 && salary < 1000) {
    cout << "We will consider your position" << endl;
    string name;
    cout << "Ваше ім'я: ";
    cin >> name;
    string surname;
    cout << "Ваше прізвище: ";
    cin >> surname;
    string position;
    cout << "Бажана посада: ";
    cin >> position;
    cout << "Ваш вік: " << age << endl << "Ваша зарплата: "
    << salary << endl << "Ваше ім'я: " << name << endl <<
    "Ваше прізвище: " << surname << endl << "Бажана посада: " 
    << position << endl;
    } else { cout << "You are not suitable";};
    return 0;
}