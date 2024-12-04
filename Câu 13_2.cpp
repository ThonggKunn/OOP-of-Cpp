#include<iostream>
#include<iomanip>
#include<string>

using namespace std;

class MaTran {
	
	private:
		int soHang;
		int soCot;
		int phanTu[2][2];
		
	public:
		int get_soHang() {
			return soHang;
		}
		int get_soCot() {
			return soCot;
		}
		void Input(int n) {
			for(int i = 1; i <= n; i++) {
				cout<<"Nhap so hang cua ma tran " <<i <<": ";
				cin>>soHang;
				cout<<"Nhap so cot cua ma tran "<<i <<": ";
				cin>>soCot;
				for (int i = 0; i < get_soHang(); i++) {
					for (int j = 0; j < get_soCot(); j++) {
						cout<<"Nhap phan tu thu "<<"["<<i <<"]["<<j <<"]: ";
						cin>>phanTu[i][j];
					}
				}
			}
		}
		void Output(int n) {
			for(int i = 1; i <= n; i++) {
				cout<<"So hang cua ma tran "<<i <<": " <<soHang <<endl;
				cout<<"So cot cua ma tran "<<i <<": " <<soCot <<endl;
				cout<<"Day la ma tran co kich co: " <<soHang <<"*" <<soCot <<endl;
				for (int i = 0; i < get_soHang(); i++) {
					for (int j = 0; j < get_soCot(); j++) {
						cout<< "[" <<phanTu[i][j] <<"]";
					}
					cout<<"\n";
				}
			}
		}
		
};

void congMaTran(MaTran matran[][], int n) {
    int hang = matran[0].get_soHang();
    int cot = matran[0].get_soCot();
    MaTran tong;
    tong.phanTu = new int*[hang];
    for (int i = 0; i < hang; i++) {
        tong.phanTu[i] = new int[cot]{0};
    }
    for (int x = 0; x < n; x++) {
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < columns; j++) {
                tong.phanTu[i][j] += matran[x].phanTu[i][j];
            }
        }
    }
    cout << "Tong cac ma tran:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cot; j++) {
            cout << "[" << tong.phanTu[i][j] << "] ";
        }
        cout << endl;
    }
    
    //giai phong bo nho
//    for (int i = 0; i < rows; i++) {
//        delete[] tong.phanTu[i];
//    }
//    delete[] tong.phanTu;
}
int main() {
	
	MaTran matran;
	int n;
	cout<<"Nhap so luong ma tran: ";
	cin>>n;
	
	
	matran.Input(n);
	matran.Output(n);	
	

	
//	matran.congMaTran(matran,n);
	
	return 0;
}



