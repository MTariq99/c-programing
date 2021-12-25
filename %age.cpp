#include <iostream>
using namespace std;

int main() {

int English ; 
int math ;
int physics ; 
int chemistry ; 
int Urdu ;
int pakStudy ; 
int Islamiat ;
int obtainedMarks ;
int totalMarks;
int subj1; 
int subj2; 
int subj3; 
int subj4; 
int subj5; 
int subj6;
int subj7;  

cout << "Enter the obtained marks of English :";
cin >> English;

cout << "Enter the Total marks of English :";
cin >> subj1;


cout << "Enter the obtained marks of math :";
cin >> math;

cout << "Enter the Total marks of math :";
cin >> subj2;

cout << "Enter the obtained marks of physics :";
cin >> physics;

cout << "Enter the total marks of physics :";
cin >> subj3;

cout << "Enter the obtained marks of chemistry :";
cin >> chemistry;

cout << "Enter the total marks of chemistry :";
cin >> subj4;

cout << "Enter the obtained marks of urdu :";
cin >> Urdu;

cout << "Enter the total marks of urdu :";
cin >> subj5;

cout << "Enter the obtained marks of pakStudy :";
cin >> pakStudy;

cout << "Enter the total marks of pakStudy :";
cin >> subj6;

cout << "Enter the obtained marks of Islamiat :";
cin >> Islamiat;

cout << "Enter the total marks of Islamiat :";
cin >> subj7;


obtainedMarks = English + math + physics + chemistry + Urdu + pakStudy + Islamiat ;
totalMarks = subj1 + subj2 + subj3 + subj4 + subj5 + subj6 + subj6 ;

cout << "Your percentage is = " << obtainedMarks*100/totalMarks <<"%" <<endl;


cout << "percentage in english is " << English*100/subj1 <<"%" <<endl;

cout << "percentage in math is " << math*100/subj2 <<"%" <<endl;

cout << "percentage in physics is " << physics*100/subj3 <<"%" <<endl;

cout << "percentage in chemistry is " << chemistry*100/subj4 <<"%" <<endl;

cout << "percentage in Urdu is " << Urdu*100/subj5 <<"%" <<endl;

cout << "percentage in pakStudy is " << pakStudy*100/subj6 <<"%" <<endl;


cout << "percentage in Islamiat is " << Islamiat*100/subj7 <<"%" <<endl;




}