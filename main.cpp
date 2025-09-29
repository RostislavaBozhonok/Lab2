#include <iostream>
#include <cmath>
using namespace std;

int main() {
    // Integer11. Дано тризначне число. Знайти суму і добуток його цифр.
    cout << "Integer11.\n";
    int num;
    cout << "Enter a three-digit number: ";
    cin >> num;
    int a = num / 100;         // сотні
    int b = (num / 10) % 10;   // десятки
    int c = num % 10;          // одиниці
    int sum = a + b + c;
    int product = a * b * c;
    cout << "Sum = " << sum << ", Product = " << product << endl;

    // Boolean41. Точка (x,y) належить відрізку [0;a] на осі Ox
    cout << "\nBoolean41.\n";
    double x, y, a_val;
    cout << "Enter x, y, a: ";
    cin >> x >> y >> a_val;
    bool belongs = (y == 0 && x >= 0 && x <= a_val);
    cout << "Point belongs to segment: " << boolalpha << belongs << endl;

    // Math21.
    cout << "\nMath21.\n";
    const double pi = 3.141592;
    double X, Y;
    cout << "Enter X = ";
    cin >> X;

    // чисельник: кубічний корінь з |x^2 - 2| * sin(x) * |3*tan(x)| * 5^(cos(x - 12))
    double numerator = cbrt(fabs(X*X - 2) * sin(X) * fabs(3 * tan(X)) * pow(5, cos(X - 12)));

    // знаменник: 0.6 + 4*log2(x + 15)
    double denominator = 0.6 + 4 * (log(X + 15) / log(2.0));

    // обчислення y
    Y = numerator / denominator;

    cout << "Y = " << Y << endl;

    return 0;
}
