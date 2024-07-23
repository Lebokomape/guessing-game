#include <iostream>
#include <complex>
#include <cmath>
using namespace std;

int main() {
    using Complex = complex<float>;
    int a = 0, b = 0, c = 0;
    char choice;

    do {
        cout << "Enter integers coefficient of a: ";
        cin >> a;
        cout << "Enter integers coefficient of b: ";
        cin >> b;
        cout << "Enter integers coefficient of c: ";
        cin >> c;

        Complex discriminant = sqrt(Complex(pow(b,b) - 4 * a * c, 0));

        Complex plusRoot = ((float)(-1*b) + discriminant) / ((float)2 * a);
        Complex minusRoot = ((float)(-1*b) - discriminant) / ((float)2 * a);

        cout << "X = " << plusRoot << " or X = " << minusRoot << endl;
        cout << "Do you want to calculate another quadratic? (Enter 'q' to quit): ";
        cin >> choice;
    } while(choice != 'q' && choice != 'Q');

    return 0;
}
