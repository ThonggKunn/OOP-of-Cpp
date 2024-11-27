#include<iostream>
#include<iomanip>
#include<string>

using namespace std;

class NhanSu {
	
	private:
		string MaNV;
		string HoTen;
		int NamSinh;
	public:
		void Input() {
			
			cout<<"Nhap ma nhan vien: ";
			cin.ignore();
			getline(cin,MaNV);
			cout<<"Nhap ho va ten: ";
			getline(cin,HoTen);
			cout<<"Nhap nam sinh: ";
			cin>>NamSinh;
		}
		
		void Output() {
			
			cout<<"Ma nhan vien: " <<MaNV <<endl;
			cout<<"Ho va ten: " <<HoTen <<endl;
			cout<<"Nam sinh: " <<NamSinh <<endl;
		}
};

class CongNhan : public NhanSu {
	
	private:
		int ngayCong;
	public:
		void InputCongNhan() {
			NhanSu::Input();
			cout<<"Nhap so ngay cong: ";
			cin>>ngayCong;
		}
		void OutputCongNhan() {
			NhanSu :: Output();
			cout<<"So ngay cong: " <<ngayCong <<endl;
		}
		
		int get_ngayCong() {
			return ngayCong;
		}
		
};

int main()
{
	int n;
	cout<<"Nhap so luong cong nhan: ";
	cin>>n;
	CongNhan congnhan[20];
	
	for(int i = 0; i < n; i++) {
		congnhan[i].InputCongNhan();
	}
	
	cout<<"---- Thong Tin ----" <<endl;
	for(int i = 0; i < n; i++) {
		congnhan[i].OutputCongNhan();
	}
	
	cout<<"---- Thong Tin Thuong ----" <<endl;
	cout<<"\n";
	
	
	int tienthuong = 0;
	for (int i = 0; i < n; i++) {
		if(congnhan[i].get_ngayCong() > 26) {
			congnhan[i].OutputCongNhan();
			cout<<"Tien thuong: ";
			for(int x = 1; x <= congnhan[i].get_ngayCong() - 26; x++) {
				tienthuong += 100;
			}
			cout<<tienthuong;
		}
	}
}

