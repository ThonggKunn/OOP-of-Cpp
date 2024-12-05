#include <iostream>
#include <string>

using namespace std;

class Officer {
	private:
    	string officerID;
    	string unitID;
    	string name;
    	int yearOfBirth;

	public:
    	void Input() {
        	cout << "Enter officer ID: ";
        	cin >> officerID;
        	cout << "Enter unit ID: ";
        	cin >> unitID;
        	cout << "Enter name: ";
        	cin.ignore();
        	getline(cin, name);
        	cout << "Enter year of birth: ";
        	cin >> yearOfBirth;
    }

    	void Output() {
        	cout << "Officer ID: " << officerID << endl;
        	cout << "Unit ID: " << unitID << endl;
        	cout << "Name: " << name << endl;
        	cout << "Year of Birth: " << yearOfBirth << endl;
    }
};
	
class Salary : public Officer {
	private:
     double allowances; //phu cap
     double salaryCoefficient; //he so luong
     double insurance;

  	public:
    	void salaryInput() {
        	Input();
        	cout << "Enter allowances: ";
        	cin >> allowances;
        	cout << "Enter salary coefficient: ";
        	cin >> salaryCoefficient;
        	cout << "Enter insurance: ";
        	cin >> insurance;
    }

    	void salaryOutput(){
        	Output();
        	cout << "Allowances: " << allowances << endl;
        	cout << "Salary Coefficient: " << salaryCoefficient << endl;
        	cout << "Insurance: " << insurance << endl;
        	cout << "Salary: " << calculateSalary() << endl;
    }

    	double calculateSalary() const {
        	return salaryCoefficient * 290000 + allowances - insurance;
    }
};

int main() {
    int n;
    cout << "Enter number of officer: ";
    cin >> n;

    Salary salary[n];

    for (int i = 0; i < n; i++) {
        salary[i].SalaryInput();
    }

    cout << "\n------Information------\n";
    for (int i = 0; i < n; i++) {
        salary[i].SalaryOutput();
    }


    return 0;
}

