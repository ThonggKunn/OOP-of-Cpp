#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

class Human {
private:
    string HoTen;
    int NamSinh;

public:
    void Input() {
        cin.ignore();
        cout<< "Nhap ho ten: ";
      	cin>>HoTen;
        cout<< "Nhap nam sinh: ";
        cin>>NamSinh;
    }

    void Output() {
        cout<<"Ho Ten: " << HoTen <<"\n";
        cout<<"Nam Sinh: " << NamSinh <<"\n";
    }

    string getHoTen() {
        return HoTen;
    }
};

class SinhVien : public Human {
private:
    string MaSV;
    float DiemTB;

public:
    void nhapSV() {
        Human::Input();
        cout<<"Nhap ma sinh vien: ";
        cin>>MaSV;
        cout<<"Nhap diem trung binh: ";
        cin>>DiemTB;
    }

    void xuatSV() {
        Human::Output();
        cout << "Ma Sinh Vien: "<<MaSV<<"\n";
        cout << "Diem Trung Binh: "<<DiemTB<< "\n";
    }
    string getMaSV() {
        return MaSV;
    }
};

void timKiemSinhVien(SinhVien sinhvien[], int n, string keyword) {
    bool found = false;
    for (int i = 0; i < n; i++) {
        if (sinhvien[i].getMaSV() == keyword || sinhvien[i].getHoTen() == keyword) {
            cout << "\nThong tin sinh vien tim thay:\n";
            sinhvien[i].xuatSV();
            found = true;
            break;
        }
    }
    if (!found) {
        cout << "Khong tim thay sinh vien voi tu khoa: " << keyword << "\n";
    }
}

int main() {
    int n;
    cout << "Nhap so luong sinh vien: ";
    cin >> n;

    SinhVien sinhvien[20];
    for (int i = 0; i < n; i++) {
        cout << "\nNhap thong tin sinh vien thu " << i + 1 << ":\n";
        sinhvien[i].nhapSV();
    }
    cout << "\nDanh sach sinh vien:\n";
    for (int i = 0; i < n; i++) {
        cout << "\nSinh vien thu " << i + 1 << ":\n";
        sinhvien[i].xuatSV();
    }
    string keyword;
    cin.ignore();
    cout << "\nNhap ma sinh vien hoac ho ten de tim kiem: ";
    cin>>keyword;

    timKiemSinhVien(sinhvien, n, keyword);

    return 0;
}

