#include <iostream>
using namespace std;

int main() {
    double suma, discount = 0.0;
    cout << "Сума покупки: ";
    cin >> suma;
    if (suma < 100) {
         discount = 0;
    }
    else if (suma >= 100 && suma < 500) {
         discount = 5;
    }
    else if (suma >= 500 && suma < 1000) {
         discount = 10;
    }
    else if (suma >= 1000) {
        discount = 15;
    }
    cout << "Знижка: " << discount << endl;
    double suma2 = suma * (1 - discount / 100);
    cout << "Сума до оплати: " << suma2 << endl;
    return 0;

}