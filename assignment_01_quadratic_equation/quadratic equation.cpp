
#include <iostream>
#include <cmath>
using namespace std;

int main() {

 char choice;

 do{
      double a,b,c,d,x,x1,x2;

    cout << "Enter the coefficient 'a','b', 'c': "<< endl;
     cin >> a >> b >>c;


    cout << "a: "  << a << "\n" << "b: " << b << "\n" << "c: " << c << endl;



  if (a == 0) {

        if (b == 0) {

            if (c == 0) {
                cout << "The equation has infinitely many solutions." << endl;
            } else {
                cout << "The equation has no solution." << endl;
            }
        } else {

             x = -c / b;
            cout << "Solution: x = " << x << endl;
        }
    } else {



         d = b * b - 4 * a * c;
         cout<<"The value of discriminant:" << d<< endl;;


        if (d > 0) {
             x1 = (-b + sqrt(d)) / (2 * a);
             x2 = (-b - sqrt(d)) / (2 * a);
            cout << "Solution set: { " << x1 << ", " << x2 << " }" << endl;

        } else if (d == 0) {

             x = -b / (2 * a);
            cout << "Solution set:  x = " << x << endl;

        } else {

            cout << "No real solutions exist means complex number." << endl;
        }
    }

     cout << "Do you want to run again? (y/n): ";
        cin >> choice;
    } while (choice == 'y');



    return 0;
}
