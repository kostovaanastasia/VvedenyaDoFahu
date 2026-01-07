#include <iostream>
using namespace std;

int main() {
    int num;
    double sum;

    const double USD = 38.0;
    const double EUR = 41.0;

    cout << "Калькулятор валют" << endl;
    cout << "1 — гривня -> долар" << endl;
    cout << "2 — гривня -> євро" << endl;
    cout << "3 — долар -> гривня" << endl;
    cout << "4 — євро -> гривня" << endl;

    cin >> num;
    cout << "Введіть суму: ";
    cin >> sum;

    switch (num) {
        case 1: cout << sum/USD << " доларів" << endl; break;
        case 2: cout << sum/EUR << " євро" << endl; break;
        case 3: cout << sum * USD << " гривень" << endl; break;
        case 4: cout << sum * EUR << " гривень" << endl; break;
        default: cout << "Неправвильний вибір операції" << endl;
    }
    return 0;
}