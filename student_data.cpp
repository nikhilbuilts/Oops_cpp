#include<iostream>
using namespace std;

class Student{
  private:
  int rollNumber;
  float marks;
  char grade;
  string name;

  public:
  Student(){
    cout<<"Constructor called. Initialising student data.\n";
    rollNumber = 0;
    marks = 0;
    grade = 'F';
    name = "Unknown";
  }

  void input(){
    cout << "\nEnter Name: ";
    cin.ignore(); // to avoid input buffer issue
    getline(cin, name);
    cout<<"Enter Roll Number";
    cin>>rollNumber;
    cout<<"Enter Marks (out of 100):  ";
    cin>>marks;
    calculateGrade();
  }

  void calculateGrade() {
        if (marks >= 90)
            grade = 'A';
        else if (marks >= 75)
            grade = 'B';
        else if (marks >= 60)
            grade = 'C';
        else if (marks >= 40)
            grade = 'D';
        else
            grade = 'F';
  }

    void display() {
        cout << "\n--- Student Details ---\n";
        cout<<"Name: "<<name<<endl;
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Marks: " << marks << endl;
        cout << "Grade: " << grade << endl;
    }
  
};


int main(){
  Student s1;
  s1.input();
  s1.display();
  return 0;
}