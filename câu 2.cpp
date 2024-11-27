#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
class Human {
	
	private:
		string HoTen;
		int NamSinh;
	public:
		string get_hoten() {
			return HoTen;
		}
		int get_namsinh() {
			return NamSinh;
		}
		void Input() {
			cin.ignore();
			cout<<"Nhap ho ten: ";
			cin>>HoTen;
			cout<<"Nhap nam sinh: ";
			cin>>NamSinh;
		}
		void Output() {
			cin.ignore();
			cout<<"Ho Ten: " <<HoTen;
			cout<<"\nNam sinh: " <<NamSinh;
		}		
};

class SinhVien : public Human {
	
	private:
		string MaSV;
		float DiemTB;
	public:
		void nhapSV() {
			Human::Input();
			cout<<"\nNhap ma SV: ";
			cin>>MaSV;
			cout<<"Nhap diem TB: ";
			cin>>DiemTB;
		}
		void xuatSV(int n) {
			Human::Output();
			cout<<"\nMa SV: " <<MaSV;
			cout<<"\nDiem TB: " <<DiemTB;
		}
		float get_diemTB() {
			return DiemTB;
		}
};

void SapXep(SinhVien ds[], int n) {
	SinhVien temp;
	for (int i=0;i<n-1;i++) {
		for (int j=i+1;j<n;j++) {
			if (ds[i].get_diemTB() < ds[j].get_diemTB()){
				temp = ds[i];
				ds[i] = ds[j];
				ds[j] = temp;
			}
		}
	}
}

int main() {
	int n;
	cout<<"Nhap so luong sinh vien: ";
	cin>>n;
	
	Human human;
	
	SinhVien sinhvien[20];
	for(int i=0;i<n;i++) {
		sinhvien[i].nhapSV();
	}
	for(int i=0;i<n;i++) {
		sinhvien[i].xuatSV(n);
	}

	
	SapXep(sinhvien, n);
	
	cout<<"Danh sach sinh vien sau khi sap xep: \n";
	for(int i=0;i<n;i++) {
		sinhvien[i].xuatSV(n);
	}
	
	return 0;
	
}


