//Write a program to find diameter, circumference and area of circle using functions.
//Diameter of a Circle  D = 2 × r
//Circumference of a Circle  C = 2 × π × r
//Area of a Circle  A = π × r
#include <iostream>

using namespace std;

int Diameter(int r ) {

   return r * 2 ;
}
float Circumference(int r ) {

   return r * 2 * 3.14159265359 ;
}
float Area(int r ) {

   return r * 3.14159265359 ;
}

// C = 2 * Pi * r ;
   // A = Pi * r ;

    int main() {
    int r ;
    cout <<" we will do the test bcz u r dump \n " << endl;
    cin >> r ;
    cout << "\n Diameter : "  <<  Diameter(r) ;
    cout << "\n Circumference : "  <<  Circumference(r) ;
    cout << "\n Area : " <<  Area(r) ;


    }
