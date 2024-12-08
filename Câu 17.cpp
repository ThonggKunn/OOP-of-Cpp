#include <iostream>
#include <cmath>
using namespace std;

class Diem {
private:
    double x, y;

public:
    void Input() {
        cout << "Nhap toa do x: ";
        cin >> x;
        cout << "Nhap toa do y: ";
        cin >> y;
    }
    void Output() {
        cout << "(" << x << ", " << y << ")";
    }
	//cong thuc euclid
    friend double khoangCach(const Diem &a, const Diem &b) {
        return sqrt((a.x - b.x) * (a.x - b.x) + (a.y - b.y) * (a.y - b.y));
    }
};

class TamGiac {
private:
    Diem d1, d2, d3;
    double canh1, canh2, canh3;

public:
    void TamGiacInput() {
        cout << "Nhap toa do dinh thu nhat:\n";
        d1.Input();
        cout << "Nhap toa do dinh thu hai:\n";
        d2.Input();
        cout << "Nhap toa do dinh thu ba:\n";
        d3.Input();
        tinhDoDaiCanh();
    }

    void TamGiacOutput() {
        cout << "Toa do cac dinh cua tam giac:\n";
        cout << "Dinh 1: ";
        d1.Output();
        cout << "\nDinh 2: ";
        d2.Output();
        cout << "\nDinh 3: ";
        d3.Output();
        cout << "\nDo dai cac canh:\n";
        cout << "Canh 1: " << canh1 << endl;
        cout << "Canh 2: " << canh2 << endl;
        cout << "Canh 3: " << canh3 << endl;
    }

    void tinhDoDaiCanh() {
        canh1 = khoangCach(d1, d2);
        canh2 = khoangCach(d2, d3);
        canh3 = khoangCach(d3, d1);
    }

    void kiemTraTinhChat() {
        if ((canh1 + canh2 < canh3) && (canh1 + canh3 < canh2) && (canh2 + canh3 < canh1)) {
            cout << "Day khong phai la tam giac.\n";
            return;
        }
        if (canh1 == canh2 && canh2 == canh3) {
            cout << "Tam giac deu.\n";
        } else if ((canh1 == canh2 || canh2 == canh3 || canh3 == canh1)) {
            cout << "Tam giac vuong can.\n";
        } else if (canh1*canh1 + canh2*canh2 == canh3*canh3 || canh1*canh1 + canh3*canh3 == canh2*canh2 || canh3*canh3 + canh2*canh2 == canh1*canh1) {
            cout << "Tam giac vuong.\n";
        } else if (canh1 == canh2 || canh2 == canh3 || canh3 == canh1) {
            cout << "Tam giac can.\n";
        } else {
            cout << "Tam giac thuong.\n";
        }
    }
};

int main() {
    TamGiac tg;

    cout << "Nhap thong tin tam giac:\n";
    tg.TamGiacInput();

    cout << "\nThong tin tam giac vua nhap:\n";
    tg.TamGiacOutput();

    cout << "\nTinh chat cua tam giac:\n";
    tg.kiemTraTinhChat();

    return 0;
}

