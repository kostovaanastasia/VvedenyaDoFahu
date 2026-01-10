#include <iostream> 
using namespace std;

int main() {
    int num;
    double sum, sum1;
    cout << "Введіть ціну : ";
    cin >> sum;
    cout << "Виберіть категорію" << endl;
    cout << "1 — звичайний" << endl;
    cout << "2 — студент" << endl;
    cout << "3 — пенсіонер" << endl;
    cout << "4 — VIP-клієнт" << endl;
    cin >> num;
    switch (num) {
        case 1: cout << "Знижка: 0%" << sum << endl; break;
        case 2: cout << "Знижка: 5%" << endl; sum1 = sum * 0.05; cout << sum - sum1; break;
        case 3: cout << "Знижка: 10%" << endl;  sum1 = sum * 0.1; cout << sum - sum1; break;
        case 4: cout << "Знижка: 15%" <<endl;  sum1 = sum * 0.15; cout << sum - sum1; break;
        default: cout << "Неправильний вибір категорії" << endl;
    }
return 0;
}
