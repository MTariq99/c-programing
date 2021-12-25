#include <iostream>
using namespace std;

int main() {

int n ; 
int choice ;
string t= "y";
int i ;
t ="N";
cout << "Enter the Number for the Table : ";  n;
cin >> n ;
cout << "Enter the length of the Table : ";
cin >> choice ;

i = 1; 

for (i <= choice; t== "y" ; i++) { 
    if ( t == "y") {
        cout << n <<"X" << i <<"=" <<n*i;
    
     if (i==choice) {
        cout << "Do you want to continue :";
        cin >> t;
    }
    else if (t != "y" &&  t != "N") {
        i--;
    }
    } else {
        cin >> n ;
cout << "Enter the Number for the Table : ";
cin >> choice ;
cout << "Enter the length of the Table : ";
    }


}


 return 0;
}