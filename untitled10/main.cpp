/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <string>
using namespace std;

int main()
{
    cout<<"input roman numeral\n";
    string roman;
    //assumes all characters are capatalized
    cin >> roman;
    int sum = 0;
    int arabic[roman.length()];
    //convert letters to numbers
    for(int i = 0; i < roman.length(); i++){
        if(roman[i] == 'I')
            arabic[i] = 1;
        else if (roman[i] == 'V')
            arabic[i] = 5;
        else if (roman[i] == 'X')
            arabic[i] = 10;
        else if (roman[i] == 'L')
            arabic[i] = 50;
        else if (roman[i] == 'C')
            arabic[i] = 100;
        else if (roman[i] == 'D')
            arabic[i] = 500;
        else if (roman[i] == 'M')
            arabic[i] = 1000;
    }
    int i = 0;
    int x = sizeof(arabic) / sizeof(int);
    //add the correct number to the sum going from left to right of the "arabic" array.
    while (i < x){
        //checks if the current index value is less than the next or if it's the last value
        if(arabic[i] >= arabic[i+1] || i == x - 1)
            sum += arabic[i];
        //subtracts B from A and skips to the next index
        else{
            sum += (arabic[i+1] - arabic[i]);
            i += 1;
        }
        i += 1;
    }
    cout << sum << "\nPress Enter to exit..." << endl;
    string fill;
    cin >> fill;
    return 0;
}