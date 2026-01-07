#include <iostream>
using namespace std;
int main() {
    cout << "Вибери службу достаки:" << endl; 
    cout << "1 — Нова Пошта" << endl; 
    cout << "2 — Укрпошта" << endl; 
    cout << "3 — Meest" << endl; 
    cout << "4 — GLS" << endl; 

    int num;
    cout << "num: ";
    cin >> num;

    switch (num){
        case 1: cout << "Вартість за кг - 60 грн, час доставки: 1-2 дні" << endl; break;
        case 2: cout << "Вартість за кг - 30 грн, час доставки: 3-5 дні" << endl; break;
        case 3: cout << "Вартість за кг - 45 грн, час доставки: 2-4 дні" << endl; break;
        case 4: cout << "Вартість за кг - 70 грн, час доставки: 1-3 дні" << endl; break;
        default: cout << "Неправильний вибір служби доставки" << endl;
    }
    return 0;
}