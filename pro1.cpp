#include<iostream>
#include<string>
using namespace std;

class BFCAIStudent{

string firstName;
string lastName;
int idNumber;
public:
char courseGrade;
string departement;
double gpa;
int testeScore;

BFCAIStudent( string student_fName, string student_lName, char student_cGrade, int student_tScore,int student_id,/* double student_GPA,*/string student_dp){

 firstName = student_fName;
 lastName = student_lName;
 courseGrade = student_cGrade;
 idNumber = student_id;
 departement = student_dp;
 //gpa = student_GPA;
 testeScore = student_tScore;
}

BFCAIStudent(){
    gpa = 0;
}

BFCAIStudent(){
    testeScore = 89;
}
void display(){
    cout<<gpa<<endl;
}
void set_firsName(){firstName = "Ahmed";}
void set_lasName(){lastName = "Beban";}
void set_id(){idNumber = 2022656;}

string get_firsName(){return firstName;}
string get_lasName(){return lastName;}
int get_id(){return idNumber;}

};



int main(){


BFCAIStudent boj1,obj2,boj3;

obj2.display();



}