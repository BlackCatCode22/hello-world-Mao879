#include <iostream>
using namespace std;

void printMin(int arr[5]);

int main(){
    int ar[5] = { 30, 10, 20, 40, 50 };
    printMin(ar);

    int x, y;
    int sum;
    cout << "Type a number:";
    cin >> x;
    cout << "Type another number:";
    cin >> y;
    sum = x+y;
    cout << "Sum is:" << sum;

    string name;

    cout << "What your name:";

    cin >> name;

    if (cin.fail()) {
        cout << "That was not a name." << endl;
        return -1;
    }

    cout << name << endl;
    return 0;
}

void printMin(int arr[5]){
    int min = arr[0];
    for (int i = 0; i < 5; i++){
        if (min > arr[i]){
            min = arr[i];
        }
    }
    cout << "Minimun element is:" << min << "\n";
}
