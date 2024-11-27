#include<iostream>
#include<iomanip>
#include<string>
//#include<ignore>
using namespace std;

class ThiSinh {
	
	private:
		string MaTS;
		string HoTen;
		int diemToan;
		int diemLy;
		int diemHoa;
	
	public: 
		void input();
		void output();
		string getMaTS() {
			return MaTS;
		}
		string getHoTen() {
			return HoTen;
		}
		int get_diemToan() {
			return diemToan;
		}
		int get_diemLy() {
			return diemLy;
		}
		int get_diemHoa() {
			return diemHoa;
		}
		int sumScore() {
			return diemToan + diemLy + diemHoa;
		}
		
};

	void ThiSinh::input() {
		cin.ignore();
		cout<<"Nhap ma thi sinh: ";
		cin>>MaTS;
		cout<<"Nhap ho ten: ";
		cin>>HoTen;
		cout<<"Nhap diem toan: ";
		cin>>diemToan;
		cout<<"Nhap diem ly: ";
		cin>>diemLy;
		cout<<"Nhap diem hoa: ";
		cin>>diemHoa;
	}
	
//	void ThiSinh::output() {
//		cin.ignore();
//		cout<<"MaTS" <<setw(7) <<"HoTen" <<setw(4) <<" Toan" <<setw(4) <<" Ly" <<setw(4) <<" Hoa" <<setw(4) <<" TongDiem";
//		cout<<setw(35) <<endl;
//		cout<<setfill('-');
//		cout<<"\n";
//		cout<<setfill(' ');
//		cout<<getMaTS() <<setw(3) <<getHoTen() <<setw(4) <<get_diemToan() <<setw(4) <<get_diemLy() <<setw(4) <<get_diemHoa() <<sumScore() <<endl;
//	}
	
	void ThiSinh::output() {
//		cin.ignore();
		cout<<"\nMaTS: " <<getMaTS();
		cout<<"\nHo Ten: " <<getHoTen();
		cout<<"\nDiem Toan: " <<get_diemToan();
		cout<<"\nDiem Ly: " <<get_diemLy();
		cout<<"\nDiem Hoa: " <<get_diemHoa();
		cout<<"\nTong diem: " <<sumScore();
	}
	
	string timThiSinh() {
		
	cin.ignore();
    string tenCanTim;
    cout << "\nNhap ho ten can tim: ";
    getline(cin, tenCanTim);

    bool timThay = false;
    for (int i = 0; i < n; i++) {
        if (ThiSinh[i].getHoTen() == tenCanTim) {
            cout << "\nThong tin thi sinh can tim:\n";
            ThiSinh[i].xuat();
            timThay = true;
            break;
        }
    }

    if (!timThay) {
        cout << "Khong tim thay thi sinh co ho ten: " << tenCanTim << endl;
    	}
	}
	void sapxep() {
	}
	
	
	int main() {
		int n;
		cout<<"Nhap so luong sinh vien: ";
		cin>>n;
		ThiSinh thisinh;
		for (int i=0;i<n;i++) {
			thisinh.input();
			
		}
		for (int i=0;i<n;i++) {
			thisinh.output();
			cout<<"\n";
			
		}
		
		
		
		
		
		
	}



























