#include <iostream> 
using namespace std;

int main() {
    cout << "Оцінка якості обслуговування" << endl;
    cout << "Оцініть від 1 до 5" << endl;
    int num;
    cin >> num;
    switch (num) {
        case 1: cout << "Дуже погано" << endl; break;
        case 2: cout << "Погано" << endl; break;
        case 3: cout << "Задовільно" << endl; break;
        case 4: cout << "Добре" << endl; break;
        case 5: cout << "Відмінно" << endl; break;
        default: cout << "Неправильний вибір" << endl;
    }
    return 0;
}