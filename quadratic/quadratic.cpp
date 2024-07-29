#include <iostream>
#include <complex>
#include <cmath>
using namespace std;

int main() {
    using ComplexNum = complex<float>;
    int a, b, c;
    char choice;

    do {
        cout << "Enter integers coefficient of a: ";
        cin >> a;
        cout << "Enter integers coefficient of b: ";
        cin >> b;
        cout << "Enter integers coefficient of c: ";
        cin >> c;

        ComplexNum discriminant = sqrt(ComplexNum(pow(b,b) - 4 * a * c, 0));

        ComplexNum plusRoot = ((float)(-1*b) + discriminant) / ((float)2 * a);
        ComplexNum minusRoot = ((float)(-1*b) - discriminant) / ((float)2 * a);

        cout << "X = " << plusRoot << " or X = " << minusRoot << endl;
        cout << "Do you want to calculate another quadratic? (Enter 'q' to quit): ";
        cin >> choice;
    } while(choice != 'q' && choice != 'Q');

    return 0;
}
