#include <iostream>

using std::cout;
using std::endl;
using std::cin;



int main()
{
    int score;
    double distance;
    char playAgain;
    bool shieldsUp;
    short lives, aliensKilled;

    score = 0;
    distance = 1200.76;
    playAgain = 'y';
    shieldsUp = true;
    lives = 3;
    aliensKilled = 10;
    double engineTemp = 6572.89;

    cout << "\nscore: " << score << endl;
    cout << "distance: " << distance << endl;
    cout << "playAgain: " << playAgain << endl;
    // Пропуск shieldsUp becose bool на экран не выводятся 
    cout << "lives: " << lives << endl;
    cout << "aliensKilled: " << aliensKilled << endl;
    cout << "engineTemp: " << engineTemp << endl;

    int fuel;
    cout << "\nhow much fuel? ";
    cin >> fuel;
    cout << "fuel: " << fuel << endl;
    typedef unsigned short int ushort;
    ushort bonus = 10;
    cout << "\nbonus: " << bonus << endl;
    

    return 0;
}