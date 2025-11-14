#include <iostream>
using namespace std;

int main() {
   int C;
    cout << "Температура: ";
    cin >> C;
    if (C <= 0) {cout << "Беремо теплий одяг та рукавички" << endl;}
    else if (C > 0 && C <= 15) {cout << "Візьміть легку куртку" << endl;}
    else if (C > 15 && C <= 25) {cout << "Можна одягати футболку" << endl;}
    else {cout << "Легкий одяг, сонцезахисні окуляри" << endl;}
    return 0;
}