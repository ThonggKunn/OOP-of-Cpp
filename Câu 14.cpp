#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

class Human {
	
	private:
		string Name;
		int yearOfBirth;
	public:
		void Input() {
			cout<<"Enter name: ";
			cin.ignore();
			getline(cin,Name);
			cout<<"Enter year of birth: ";
			cin>>yearOfBirth;
		}
		
		void Output() {
			cout<<"Name: " <<Name <<endl;
			cout<<"Year of birth: " <<yearOfBirth <<endl;
		}
};

class Teacher : public Human {
	
	private:
		string departmentSubject;
		string teachingSubject;
		
	public:
		void InputTeacher() {
			Human::Input();
			cout<<"Enter department subject: ";
			cin.ignore();
			getline(cin,departmentSubject);
			
			cout<<"Enter teaching subject: ";
			getline(cin,teachingSubject);
		}
		
		void OutputTeacher() {
			Human::Output();
			cout<<"Department subject: " <<departmentSubject <<endl ;
			cout<<"Teaching subject: " <<teachingSubject <<endl;
		}
		
		string get_departmentSubject() {
			return departmentSubject;
		}
};

void Arrange(Teacher teacher[], int n) {
	
	for (int i = 0; i < n-1; i++) {
		for (int j = 0; j < n; j++) {
			if (teacher[i].get_departmentSubject() > teacher[j].get_departmentSubject()) {
				swap(teacher[i], teacher[j]);
			}
		}
	}
	
}

int main() {
	
	int n;
	cout<<"Enter number of teacher: ";
	cin>>n;
	
	Teacher teacher[20];
	for (int i = 0; i < n; i++) {
        teacher[i].InputTeacher();
    }
    
    cout<<"------ Information ------" <<endl;
    for (int i = 0; i < n; i++) {
    	teacher[i].OutputTeacher();
    }
    
    
    Arrange(teacher, n);
    cout<<"------ List after arranged: ------" <<endl;
    
	for (int i = 0; i < n; i++) {
    	teacher[i].OutputTeacher();
    }
    
    return 0;
}
