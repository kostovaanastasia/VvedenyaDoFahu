#include <iostream> 
using namespace std;

int main() {
    const int balance = 1000;
    int suma;
    cout << "Сума: ";
    cin >> suma;
    if (suma <= 0) {cout << "Помилка" << endl;}
    else if (suma > balance) {cout << "Недостатньо коштів" << endl;}
    else {cout << "Операція успішна" << endl;}
    return 0;
}