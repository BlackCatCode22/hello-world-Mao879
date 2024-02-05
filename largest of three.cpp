#include <iostream>
using namespace std;

int main(){
    int a, b, c;
    cout << "Enter the three numbers a, b & c" << endl;
    cin >> a >> b >> c;

    if (a >= b) {
        if (a >= c){
            cout << "The Largest Among Three Numbers s:" << a << endl;

        }
        else {
            cout << "The Largest Among Three Numbers is:" << c << endl;
        }
    }
       else {
        cout << "The Largest Among Three Numbers is:" << b << endl;
       }
       return 0;
    }
