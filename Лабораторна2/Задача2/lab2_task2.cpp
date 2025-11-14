#include <iostream> 
using namespace std;

int main() {
    int age;
    cout << "Ваш вік: ";
    cin >> age;
    if (age < 13) { cout << "Доступ заборонено" << endl;} 
    else if (age > 13 && age < 18) { cout << "Доступ з батьківським контролем" << endl;}
    else { cout << "Повний доступ" << endl;}
    return 0;
}