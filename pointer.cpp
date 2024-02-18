#include <iostream>
using namespace std;

int main()
{
    int a = 15;
    int *p;
    p = &a;
    cout << "Address in pointer p:" << p << endl;
    cout << "Value of a using pointer p:" << *p << endl;
    *p = 30;
    cout << "New value of a:" << a << endl;

    int arr[5] = {11, 24, 37, 43, 50};
    int *u = arr;
    for (int i = 0; i < 5; ++i){
        cout << "Address of arr[" << i << "]" << (u + i) << endl;
        cout << "Value of arr[" << i <<"]" << *(u + i) << endl;
    }

    return 0;
}
