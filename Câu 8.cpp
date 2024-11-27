#include <iostream>
#include <iomanip>
using namespace std;

class MaTran {
private:
    int soHang;
    int soCot;
    int phanTuMaTran[10][10];

public:
    void Input() {
        cout << "Nhap so hang: ";
        cin >> soHang;
        cout << "Nhap so cot: ";
        cin >> soCot;
        cout << "Nhap cac phan tu cua ma tran:\n";
        for (int i = 0; i < soHang; i++) {
            for (int j = 0; j < soCot; j++) {
                cout << "Phan tu [" << i + 1 << "][" << j + 1 << "]: ";
                cin >> phanTuMaTran[i][j];
            }
        }
    }
    void Output() {
        cout << "\nMa tran vua nhap:\n";
        for (int i = 0; i < soHang; i++) {
            for (int j = 0; j < soCot; j++) {
                cout<<"["<<phanTuMaTran[i][j] <<"]";
            }
            cout << "\n";
        }
    }
    int tongDuongVien() {
        int tong = 0;
        for (int j = 0; j < soCot; j++) {
            tong += phanTuMaTran[0][j];
        }
        if (soHang > 1) {
            for (int j = 0; j < soCot; j++) {
                tong += phanTuMaTran[soHang - 1][j];
            }
        }
        for (int i = 1; i < soHang - 1; i++) {
            tong += phanTuMaTran[i][0];
        }
        if (soCot > 1) {
            for (int i = 1; i < soHang - 1; i++) {
                tong += phanTuMaTran[i][soCot - 1];
            }
        }
        return tong;
    }
};

int main() {
    MaTran matran;
    matran.Input();
    matran.Output();
    cout << "\nTong cac phan tu tren 4 duong vien cua ma tran: " << matran.tongDuongVien() << "\n";

    return 0;
}

