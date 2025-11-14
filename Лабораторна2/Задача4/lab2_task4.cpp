#include <iostream> 
using namespace std;

int main() {
    int a;
    cout << "Твоя оцінка: ";
    cin >> a;
    if (a < 60) { cout << "Незадовільно" << endl;}
    else if (a > 59 && a <= 74) {cout << "Задовільно" << endl;}
    else if (a > 74 && a < 90) {cout << "Добре" << endl;}
    else if (a < 101) {cout << "Відміно" << endl;}
return 0;
}