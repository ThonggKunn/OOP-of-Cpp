#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

class MaTranVuong {
	
	private:
		int CapMaTran;
		float phanTuMaTran[10][10];
	public:
		void Input() {
			cin.ignore();
			cout<<"Nhap cap cua ma tran: ";
			cin>>CapMaTran;
			for(int x=0;x<CapMaTran;x++) {
				for(int y=0;y<CapMaTran;y++) {
					cout<<"Nhap phan tu thu ["<<x <<"]["<<y <<"] cua ma tran: ";
					cin>>phanTuMaTran[x][y];
				}
			}
		}
		void Output() {
			
			cout<<"Ma tran da nhap la: \n";
			for(int x=0;x<CapMaTran;x++) {
				for(int y=0;y<CapMaTran;y++) {
					cout<<"["<<phanTuMaTran[x][y] <<"]";
				}
				cout<<"\n";
			}
		}	
		
		int tongDuongCheoChinh() {
			
			int tongCheoChinh = 0;
			for(int i=0;i<CapMaTran;i++){
				
				tongCheoChinh += phanTuMaTran[i][i];
			}
			
			return tongCheoChinh;
		}
		
		int tongDuongCheoPhu() {
			
			int tongCheoPhu = 0;
			for(int i=0;i<CapMaTran;i++) {
				tongCheoPhu += phanTuMaTran[i][CapMaTran-i-1];
			}
			return tongCheoPhu;
		}
};


int main() {
	
	
	MaTranVuong matranvuong;
	
	matranvuong.Input();
	matranvuong.Output();
	
	cout<<"Tong cua cac phan tu nam tren duong cheo chinh la: " <<matranvuong.tongDuongCheoChinh();
	
	cout<<"\nTong cua cac phan tu nam tren duong cheo phu la: " <<matranvuong.tongDuongCheoPhu();
	
	
	return 0;
}
