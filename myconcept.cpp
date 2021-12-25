#include <iostream>
using namespace std;


int main() {
    int i;
 int total ;
 int sum ; 
 int totalNumber;


cin >> total ; 
cout << "the total Number is :" << total << endl;

for ( i= 0 ; i < total ; i++ ) {

cin >> totalNumber; 
cout << "Enter the Number" << i + 1 << endl;
sum += totalNumber;



}
 cout << "arthmetic Mean :"<< (sum/total);

 return 0;
}