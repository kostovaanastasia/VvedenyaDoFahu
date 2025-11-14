#include <iostream>
using namespace std;
int main() {
    int X;
    cout << "X: ";
    cin >> X;
    int x = X;
    int X1 = ++X;
    cout << "Префіксна інкрементація: " << X1 << endl;
    X = x;
    int X2 = X++;
    cout << "Постфіксна інкрементація: " << X2 << endl;
    X = x;
    int X3 = --X;
    cout << "Префіксна  декрементація: " << X3 << endl;
    X = x;
    int X4 = X--;
    cout << "Постфіксна декрементація: " << X4 << endl;
    X = x;
    int Y = 10 + X;
    cout << "Y: " << Y << " X: " << X << endl;
    X = x;
    int Y1 = 10 + ++X;
     cout << "Y: " << Y1 << " X: " << X << endl;
     X = x;
    int Y2 = 10 + X++;
     cout << "Y: " << Y2 << " X: " << X << endl;
     return 0;
}
