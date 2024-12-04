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
			cout<<"Department subject: " <<departmentSubject;
			cout<<"Teaching subject: " <<teachingSubject;
		}
};
