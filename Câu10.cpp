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
			cout<<"Nhap ho ten: ";
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

class CanBo : public NhanSu {
	
	private:
		int LuongCoBan;
		float HeSoLuong;
		float tienLuong;
	public: 

		void InputCanBo() {
			NhanSu::Input();
			cout<<"Nhap luong co ban: ";
			cin>>LuongCoBan;
			cout<<"Nhap he so luong: ";
			cin.ignore();
			cin>>HeSoLuong;
		}
		
		void OutputCanBo() {
			NhanSu::Output();
			cout<<"Luong co ban: " <<LuongCoBan <<endl;
			cout<<"He so luong: " <<HeSoLuong <<endl;
			cout<<"Luong: " <<LuongCoBan * HeSoLuong <<endl;
		}
		
		float TienLuong() {
			
			return LuongCoBan * HeSoLuong;
		}
		
		
};

void sapxepTienLuongGiamDan(CanBo canbo[], int n) {
			CanBo temp;
			for (int i = 0; i < n-1; i++) {
				for (int j = i+1;j < n; j++) {
					if(canbo[i].TienLuong() < canbo[j].TienLuong()) {
						temp = canbo[i];
						canbo[i] = canbo[j];
						canbo[j] = temp;
					}
				}
			}
		}

int main() 
{
	int n;
	cout<<"Nhap so luong can bo: ";
	cin>>n;
	cout<<endl;
	
	CanBo canbo[20];
	for(int i = 0; i < n; i++) {
		canbo[i].InputCanBo();
	}
	cout<<"---- Thong Tin ----\n" <<endl;
	for(int i = 0; i < n; i++) {
		canbo[i].OutputCanBo();
	}
	cout<<"---- Thong Tin Can Bo Theo Thu Tu ----\n" <<endl;
	
	sapxepTienLuongGiamDan(canbo, n);
	for(int i = 0; i < n; i++) {
		canbo[i].OutputCanBo();
	}
	
	return 0;
}
