#include <iostream> 
using namespace std;
int main() {
    int a;
    cout << "Введіть ціле число: ";
    cin >> a;
    double b;
    b = a % 7; 
    cout << "a % 7 = " << b << endl;
    int num1, num2;
    cout << "Введіть два цілих числа: ";
    cin >> num1 >> num2;
    if (num1 % num2 == 0) {
        cout << "Ділиться без залишку" << endl;
    }
    else {
        int zal =  num1 % num2;
        cout << "Ділиться з залишком: " << zal << endl;
    }
    if (num1 % 2 == 0) {
        cout << "Перше число " << num1 << " парне" << endl;
    } else {cout << "Перше число " << num1 << " непарне" << endl;}
    if (num2 % 2 == 0) {
        cout << "Друге число " << num2 << " парне" << endl;
    } else {cout << "Друге число " << num2 << " непарне" << endl;}
    return 0;
}