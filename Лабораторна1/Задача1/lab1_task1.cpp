#include <iostream> 
using namespace std;
int main() {
    int a, b;
    cout << "Введіть а та b: ";
    cin >> a >> b;
    int suma = a + b;
    int riz = a - b;
    int dob = a * b; 
    double chastka = (double) a / (double) b;
   cout << "Сума: " << suma << endl;
    cout << "Різниця: " << riz << endl;
    cout << "Добуток: " << dob << endl;
    cout << "Частка: " << chastka << endl;
    int dov, shyryna; 
     cout << "============ Прямокутник ============== " << endl;
    cout << "Введіть довжину прямокутника: ";
    cin >> dov;
    cout << "Введіть ширину прямокутника: ";
    cin >> shyryna;
    double dov1 = (double) dov; 
    double shyryna1 = (double) shyryna;
    double S = dov1 * shyryna1;
    double P = 2 * (dov1 + shyryna1);
    cout << "Площа: " << S << endl;
    cout << "Периметр: " << P << endl;
    cout << "============ Память і адреса змінних =============" << endl;
    cout << "Обсяг пам'яті а = " << sizeof(a) << " Адреса пам'яті: " << &a << endl;
    cout << "Обсяг пам'яті b = " << sizeof(b) << " Адреса пам'яті: " << &b << endl;
    cout << "Обсяг пам'яті suma = " << sizeof(suma) << " Адреса пам'яті: " << &suma << endl;
    cout << "Обсяг пам'яті riz = " << sizeof(riz) << " Адреса пам'яті: " << &riz << endl;
    cout << "Обсяг пам'яті dob  = " << sizeof(dob) << " Адреса пам'яті: " << &dob << endl;
    cout << "Обсяг пам'яті chastka = " << sizeof(chastka) << " Адреса пам'яті: " << &chastka << endl;
    cout << "Обсяг пам'яті dov = " << sizeof(dov) << " Адреса пам'яті: " << &dov << endl;
    cout << "Обсяг пам'яті shyryna = " << sizeof(shyryna) << " Адреса пам'яті: " << &shyryna << endl;
    cout << "Обсяг пам'яті shyryna1 = " << sizeof(shyryna1) << " Адреса пам'яті: " << &shyryna1 << endl;
    cout << "Обсяг пам'яті dov1 = " << sizeof(dov1) << " Адреса пам'яті: " << &dov1 << endl;
    cout << "Обсяг пам'яті S = " << sizeof(S) << " Адреса пам'яті: " << &S << endl;
    cout << "Обсяг пам'яті P = " << sizeof(P) << " Адреса пам'яті: " << &P << endl;

    size_t zahalnuy = sizeof(a) + sizeof(b) + sizeof(suma) + sizeof(riz) + sizeof(dob) + sizeof(chastka)
    +  sizeof(dov) + sizeof(shyryna) + sizeof(dov1) + sizeof(shyryna1) + sizeof(S) + sizeof(P);
    cout << "Загальний обсяг пам’яті: " << zahalnuy << endl;
    return 0;
}
