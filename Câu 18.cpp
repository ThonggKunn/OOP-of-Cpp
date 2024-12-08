#include <iostream>
#include <algorithm>
using namespace std;

class Fraction1 {
private:
    int numerator;
    int denominator;

public:
    void Input() {
        cout << "Enter numerator: ";
        cin >> numerator;
        do {
            cout << "Enter denominator (not 0): ";
            cin >> denominator;
            if (denominator == 0) {
                cout << "Denominator must not be 0. Try again.\n";
            }
        } while (denominator == 0);
    }
    // tim ucln bang gcd
//    int GCD(int a, int b) {
//        if (b == 0) return abs(a);
//        return GCD(b, a % b);
//    }
//    void Simplify() {
//        int gcd = GCD(numerator, denominator);
//        if (denominator < 0) {
//            numerator = numerator;
//            denominator = denominator;
//        }
//    }


    void Output() {
        cout << numerator << "/" << denominator;
    }

    
};
class Fraction2 : public Fraction1 {
public:
    
    
    
};

int main() {
    Fraction1 fractions[10];
    int n;

    do {
        cout << "Enter the number of fractions (max 10): ";
        cin >> n;
        if (n < 1 || n > 10) {
            cout << "Invalid number. Please enter a number between 1 and 10.\n";
        }
    } while (n < 1 || n > 10);

    for (int i = 0; i < n; i++) {
        cout << "Enter fraction " << i + 1 << ":\n";
        fractions[i].Input();
		
    }

    cout << "\nSorted fractions in descending order:\n";
    for (int i = 0; i < n; i++) {
        fractions[i].Output();
        cout << endl;
    }

    return 0;
}

