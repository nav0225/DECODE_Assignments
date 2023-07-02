#include <iostream>
using namespace std;
int main(){
    float rad, height;
    float pi = 3.14;
    cout<<"Enter radius and height of cylinder: \n";
    cin >> rad >> height;
    float vol;
    vol = pi*rad*rad*height;
    cout<< "volume of the cylinder is: "<< vol;

    return 0;
}

#include<iostream>
using namespace std;
int main(){
    char ch1, ch2;
    cin >> ch1 >> ch2;
    cout<< "Fetching ASCII values of respective characters...\n";
    int x1, x2;
    x1 = (int)ch1; x2 = (int)ch2;
    cout<< "Calculating difference between ASCII values...\n";
    int diff;
    diff = x1 - x2;
    cout<< "Difference between ASCII values of the input characters is: "<< diff;

    return 0;
}


