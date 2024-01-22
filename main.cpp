#include <iostream>
using namespace std;


void sayHello(){
    cout << "\n\n This hello is from sayHello() type in anything... \n\n";
}


int main(){
    cout << "\n\n Hello world! \n\n";

    // This is a comment

    /*
       Notice this other comment has a beginning and an end!
    */

     int num1;
     string myStr = "This is a string";


     num1 = 55;

     cout << " \n num1 is ... " << num1 << "\n\n";
     cout << " \n myStr is ... " << myStr << "\n\n";

    sayHello();
    return 0;
}
