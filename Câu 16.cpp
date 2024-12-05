#include <iostream>
#include <vector>
using namespace std;

class Square {
private:
    double edge;

public:
    Square() : edge(0) {}

    void Input()) {
        cout << "Enter edge: ";
        cin >> edge;
    }

    void Output() {
        cout << "Edge: " << edge << endl;
        cout << "Perimeter: " << calculatePerimeter() << endl;
        cout << "Acreage: " << calculateAcreage() << endl;
    }

    double calculatePerimeter() {
        return 4 * edge;
    }

    double calculateAcreage() const {
        return edge * edge;
    }
};

class Rectangle : public Square {
private:
    double edge2;

public:
    Rectangle() : edge2(0) {}

    void RecInput() {
        cout << "Enter the first edge: ";
        cin >> edge;
        cout << "Enter the second edge: ";
        cin >> edge2;
    }
    void RecOutput() {
        cout << "The first edge: " << edge << endl;
        cout << "The second edge: " << edge2 << endl;
        cout << "Perimeter: " << calculateRecPerimeter() << endl;
        cout << "Acreage: " << calculateRecAcreage() << endl;
    }
    double calculateRecPerimeter(){
        return 2 * (edge + edge2);
    }
    double calculateRecAcreage() {
        return edge * edge;
    }
};

int main() {
    int n;
    cout << "Enter number of square: ";
    cin >> n;

    vector<Square> square(n);

    for (int i = 0; i < n; i++) {
        square[i].nhap();
    }
    
    double biggestAcreage = square[0].calculateAcreage();

    for (int i = 1; i < n; i++) {
        double Acreage = square[i].calculateAcreage();
        if (Acreage > biggestAcreage) {
            
        }
    }
    
}

