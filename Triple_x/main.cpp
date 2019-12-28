//
//  main.cpp
//  Triple_x
//
//  Created by sovannmonyreak hing on 12/27/19.
//  Copyright © 2019 sovannmonyreak hing. All rights reserved.
//

#include <iostream>
#include <ctime>
using namespace std;
void PrintIntro(int Level){
    // welcome text
    cout << "Hello, World!\n";
    cout << "You are a secret agent breaking into a scure server room!\n";
    cout << "You are breaking into level : " << Level << "\n";
    cout << "ENTER THE CORRECT CODE TO CONTINUE!\n";
    cout << "\n" ;
    cout<<".--.|__| .-------."<<endl;
    cout<<"|=.| |.-----.|"<<endl;
    cout<<"|--| || KCK ||"<<endl;
    cout<<"|__|~')_____('"<<endl;
  
}
bool PlayGame(int Level){
        PrintIntro(Level);
        //code set game
        const int CodeA = rand() % Level + Level;
        const int CodeB = rand() % Level +Level;
        const int CodeC = rand() % Level + Level;

        const int CodeSum = CodeA + CodeB + CodeC ;
        const int CodeProduct = CodeA * CodeB * CodeC ;
        cout << "\n" << "\n";
        cout << "There are 3 number in the code \n";
        cout << "This is codes this add-up to : " << CodeSum << "\n";
        cout << "This is codes this mutiply to : " << CodeProduct << "\n";
    //==============================================================================

    //take user input
        int GuessA, GuessB, GuessC;
        cin >> GuessA >> GuessB >> GuessC;
        
        int SumGuess = GuessA+GuessB+GuessC;
        int ProductGuess = GuessA*GuessB*GuessC;
        if (SumGuess == CodeSum && ProductGuess == CodeProduct){
            cout << "Well son of the bitch you are in the next level\n";
            return true;
        }
        else{
            cout << "Well son of the bitch you need to re-try \n";
            return false;
        }
    //==============================================================================

}


int main(int argc, const char *argv[])
{
    srand(time(NULL));
    int LevelGame = 1 ;
    const int MaxLevel = 5;
    while(LevelGame <= MaxLevel){
        bool bLevelComplete = PlayGame(LevelGame);;
        cin.clear();
        cin.ignore();
        if(bLevelComplete){
            ++LevelGame;
        }
    }
    cout << "Well son of the bitch you are smart now GETOUT\n";
    return 0;
//==============================================================================
}
