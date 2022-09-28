#include <bits/stdc++.h>
#include "array.h"
using namespace std;

int main() {

    cout << "Welcome to Array" << endl;

    cout << "To add ==> insert , append" <<endl;
    cout << "To create ==> create" <<endl;
    cout << "To delete ==> pop_this , pop_front , pop_back" <<endl;
    cout << "To check if empty ==> is_empty" << endl;
    cout << "To check if full ==> is_full" << endl;
    cout << "To know size ==> get_size" << endl;
    cout << "To know length ==> get_length" << endl;
    cout << "To search  ==> search" << endl;
    cout << "To replace ==> replace" << endl;
    cout << "To large ==> enlargement" <<endl;
    cout << "To add Array to another ==> join" <<endl;
    cout << "To reverse ==> reverse" << endl;
    cout << "To clear ==> clear" << endl;
    cout << "To display ==> display" <<endl;


    cout << "===========================================" << endl;

//  check empty Array

    Array a1(5);

    a1.create(6);
    a1.is_empty();
    a1.is_full();
    a1.get_size();
    a1.get_length();
    a1.clear();
    a1.search(99);
    a1.replace(99,100);
    a1.enlargement(4);
    a1.display();
    a1.insert(99,100);
    a1.pop_front();
    a1.pop_back();
    a1.pop_this(99);
    a1.create(5);   // inputs : 1 2 3 4 5
    a1.display();


//  check not empty Array

    Array a2(5);

    a2.create(3);   // inputs : 1 2 3
    a2.is_empty();
    a2.is_full();
    a2.get_size();
    a2.get_length();
    a2.search(0);
    a2.search(1);
    a2.search(2);
    a2.search(3);
    a2.replace(3,100);
    a2.replace(1,99);
    a2.replace(1000,100);
    a2.append(4);
    a2.insert(0);
    a2.display();
    a2.is_full();
    a2.search(0);
    a2.search(4);
    a2.enlargement(7);
    a2.get_size();
    a2.join(a1);
    a2.display();
    a2.get_size();
    a2.get_length();
    a2.pop_front();
    a2.pop_back();
    a2.display();
    a2.insert(99,100);
    a2.pop_this(99);
    a2.pop_this(4);
    a2.pop_this(4);
    a2.display();
    a2.reverse();
    a1.reverse();
    a2.display();
    a1.display();
    a2.clear();
    a1.clear();

    return 0;
}
