#include <iostream>
#include <iomanip>

using namespace std;

double celsius(double fahrenheit);

int main() {
    cout << fixed << setprecision(1);

    cout << left << setw(15) << "Fahrenheit"
        << setw(15) << "Celsius" << '\n';
    cout << "----------------------------\n";

    for (int f = 0; f <= 100; f += 5) {
        cout << left << setw(15) << f
            << setw(15) << celsius(f) << '\n';
    }

    return 0;
}

double celsius(double fahrenheit) {
    return (5.0 / 9.0) * (fahrenheit - 32.0);
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
