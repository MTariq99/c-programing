#include <iostream>
using namespace std;

int main() {
 int total ;
 int sum;
 int currentNumber;

cin >>total ;
cout << "The total count is : " << total << endl;


for (  int i = 0 ; i < total ; i++) {
    cout << "Enter the number" << i + 1  << ":"<< endl; 
    cin >> currentNumber;

    sum += currentNumber ;
}

cout << "Arthmetic mean :" << (sum/total); 

return 0;

}