//
//  main.cpp
//  Triple_x
//
//  Created by sovannmonyreak hing on 12/27/19.
//  Copyright © 2019 sovannmonyreak hing. All rights reserved.
//

#include <iostream>
using namespace std;
int main(int argc, const char *argv[])
{
    // insert code here...
    cout << "Hello, World!\n";
    cout << "You are a secret agent breaking into a scure server room!\n";
    cout << "ENTER THE CORRECT CODE TO CONTINUE!\n";

    const int CodeA = 2;
    const int CodeB = 3;
    const int CodeC = 4;

    const int CodeSum = CodeA + CodeB + CodeC ;
    const int CodeProduct = CodeA * CodeB * CodeC ;
    cout << "\n" << "\n";
    cout << "There are 3 number in the code \n";
    cout << "This is codes this add-up to : " << CodeSum << "\n";
    cout << "This is codes this mutiply to : " << CodeProduct << "\n";



    int PlayerGuess;
    cin >> PlayerGuess ;
    if (PlayerGuess == CodeA && PlayerGuess && CodeB && PlayerGuess && CodeC){
        cout << "Well son of the bitch you are in \n";
    }
    cout << "You entered : " << PlayerGuess ;
    return 0;
}
