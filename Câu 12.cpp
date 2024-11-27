#include<iostream>
#include<iomanip>
#include<string>

using namespace std;

class MonHoc {
	
	private:
		string TenMonHoc;
		int diemChuyenCan;
		int diemKiemTra;
		int diemThi;
	public:
		void Input() {
			cout<<"Nhap ten mon hoc: ";
			cin.ignore();
			getline(cin,TenMonHoc);
			cout<<"Nhap diem chuyen can: ";
			cin>>diemChuyenCan;
			cout<<"Nhap diem kiem tra: ";
			cin>>diemKiemTra;
			cout<<"Nhap diem thi: ";
			cin>>diemThi;
		}
		
		void Output() {
			cout<<"Ten mon: " <<TenMonHoc <<endl;
			cout<<"Diem chuyen can: " <<diemChuyenCan <<endl;
			cout<<"Diem kiem tra: " <<diemKiemTra <<endl;
			cout<<"Diem thi: " <<diemThi <<endl;
		}
		
		int get_diemChuyenCan() {
			return diemChuyenCan;
		}
		int get_diemKiemTra() {
			return diemKiemTra;
		}
		
		float tinhDiemHocPhan() {
			return 0.1*diemChuyenCan + 0.3*diemKiemTra + 0.6*diemThi;
		}
};

class SinhVien : public MonHoc {
	
	private:
		string HoTen;
		string Lop;
		string MaSV;
	public:
		void InputSV() {
			cout<<"Nhap ho ten sinh vien: ";
			cin.ignore();
			getline(cin,HoTen);
			cout<<"Lop: ";
			getline(cin,Lop);
			cout<<"Ma sinh vien: ";
			getline(cin,MaSV);
			MonHoc::Input();
			
		}
		
		void OutputSV() {
			cout<<"Ho ten: " <<HoTen <<endl;
			cout<<"Lop: " <<Lop <<endl;
			cout<<"Ma sinh vien: " <<MaSV <<endl;
			MonHoc::Output();
			cout<<"Diem hoc phan: " <<tinhDiemHocPhan();
		}
};


int main()
{
	int n;
	cout<<"Nhap so sinh vien: ";
	cin>>n;
	
	SinhVien sinhvien[20];
	
	cout<<"\n---- Nhap Thong Tin ----" <<endl;
	
	for(int i = 0; i < n; i++) {
		sinhvien[i].InputSV();
	}
	
	cout<<"---- Thong Tin ----" <<endl;
	for(int i = 0; i < n; i++) {
		sinhvien[i].OutputSV();
	}
	
	cout<<"\n---- Thong Tin Hoc Sinh Cam Thi ----" <<endl;
	for(int i = 0; i < n; i++) {
		if (sinhvien[i].get_diemChuyenCan() < 5 || sinhvien[i].get_diemKiemTra() == 0) {
			sinhvien[i].OutputSV();
		}
	}
	
	return 0;
	
}













