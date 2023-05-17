//Edward Carter
//testPostfixCalc.cpp

using namespace std;
#include "postfixCalculator.h"
#include <string>
#include <cstdlib>
#include <iostream>


int main() {

    //test 1
    postfixCalculator p;
    string s;

    while (cin >> s) {
        cout << s << endl;

        const char *array_c = s.c_str();

        if(s == "+"){

            p.add();

        }else if(s == "-"){

            p.subtract();

        }else if(s == "*"){

            p.multiply();

        }else if(s == "/"){

            p.divide();

        }else if(s == "~"){

            p.negatate();

        }else{

            int i = atoi(array_c);
            p.pushNum(i);
        }

        

    } 

    cout << "Output: " << p.getTop() << endl;









    /* cout << "pushing 1 to the stack " << endl;
    p.pushNum (1);
    cout << "pushing 2 to the stack " << endl;
    p.pushNum (2);
    cout << "pushing 3 to the stack " << endl;
    p.pushNum (3);
    cout << "pushing 4 to the stack " << endl;
    p.pushNum (4);
    cout << "pushing 5 to the stack " << endl;
    p.pushNum (5);
    cout << "adding all the elements in the stack... " << endl;
    p.add();
    p.add();
    p.add();
    p.add();
    cout << "result is: " << p.getTop() << endl;
    cout << "adding 5 to the stack " << endl;
    p.pushNum (5);
    cout << "subtracting 5..." << endl;
    p.subtract();
    cout << "result is: " << p.getTop() << endl;

    //test 2
    cout << "pushing 5 to the stack " << endl;
    p.pushNum (5);
    cout << "multiplying by 5..." << endl;
    p.multiply();
    cout << "result is: " << p.getTop() << endl;

    //test 3
    cout << "pushing 5 to the stack " << endl;
    p.pushNum (5);
    cout << "dividing by 5..." << endl;
    p.divide();
    cout << "result is: " << p.getTop() << endl;
*/

    return 0;
}