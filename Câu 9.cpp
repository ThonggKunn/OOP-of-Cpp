#include<iostream>
#include<iomanip>
#include<string>

using namespace std;
class NhanVien {
	
	private:
		string HoTen;
		string ChucVu;
		string GioiTinh;
		int NamSinh;
		string QueQuan;
		int NamVaoLam;
	public:
		void Input() {
			cout<<"Nhap ho ten: ";
			cin.ignore();
			getline(cin, HoTen);
			cout<<"Nhap chuc vu: ";
			getline(cin, ChucVu);
			cout<<"Nhap gioi tinh: ";
			getline(cin, GioiTinh);
			cout<<"Nhap nam sinh: "; cin>>NamSinh;
			cout<<"Nhap que quan: ";
			cin.ignore();
			getline(cin, QueQuan);
			cout<<"Nhap nam vao lam: "; cin>>NamVaoLam;
		}
		
		void Output() {
			
			cout<<"Ho Ten: " <<HoTen <<"\n";
			cout<<"Chuc vu: " <<ChucVu <<"\n";
			cout<<"Gioi tinh: " <<GioiTinh <<"\n";
			cout<<"Nam sinh: " <<NamSinh <<"\n";
			cout<<"Que quan: " <<QueQuan <<"\n";
			cout<<"Nam vao lam: " <<NamVaoLam <<"\n";
		}
		
		void nvLamTren20Nam () {
			
			int namHienTai = 2024;
			if (namHienTai - NamVaoLam > 20) {
					NhanVien::Output();
				}
				else {
					cout<<"Du lieu khong ton tai!";
				}
		}
};
int main()
{
	int n;
	NhanVien nhanvien[20];
	cout<<"Nhap so luong nhan vien: "; cin>>n;
	for(int i = 1; i <= n; i++) {
		cout<<"Nhap thong tin nhan vien thu " <<i <<":\n";
		nhanvien[i].Input();
	};
	cout<<"\n--- Thong Tin ---\n";
	for(int i = 1; i <= n; i++) {
		cout<<"Nhan vien " <<i <<":\n";
		nhanvien[i].Output();
	};
	
	cout<<"\n--- Nhan Vien Lam Tren 20 Nam ---\n";
	
	for(int i = 1; i <= n; i++) {
		nhanvien[i].nvLamTren20Nam();
	};
	
	return 0;
}
