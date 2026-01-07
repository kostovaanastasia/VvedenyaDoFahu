#include <iostream> 
using namespace std;
int main() {
    int num;
    cout << "Меню кавової машини!" << endl;
    cout << "1 — Еспресо" << endl;
    cout << "2 — Американо" << endl;
    cout << "3 — Капучино" << endl;
    cout << "4 — Лате" << endl;
    cout << "5 — Какао" << endl;
    cin >> num;
    switch (num) {
        case 1: cout << "Еспресо - 45 грн" << endl; break;
        case 2: cout << "Американо - 50 грн" << endl; break;
        case 3: cout << "Капучино - 49 грн" << endl; break;
        case 4: cout << "Лате - 60 грн" << endl; break;
        case 5: cout << "Какао - 55 грн" << endl; break;
        default: cout << "Введіть від 1 до 5" << endl; 
    }
    return 0;
}