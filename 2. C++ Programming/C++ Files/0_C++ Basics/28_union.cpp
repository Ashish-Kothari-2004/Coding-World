// union --> A union is a type of structure that can be used where the amount of memory used is a key factor.

// A union is a user-defined data type in which all members share the same memory location. This definition means that at any given time, a union can contain not more than one object from its list of members. It also means that no matter how many members a union has, it always uses only enough memory to store the largest member.

// Union is a user-defined datatype. All the members of union share same memory location. Size of union is decided by the size of largest member of union. If you want to use same memory location for two or more members, union is the best for that.

// Unions are similar to structures. Union variables are created in same manner as structure variables. The keyword “union” is used to define unions in C language.

// Here is the syntax of unions in C language,
// union union_name {
//    member definition;
// }

#include <iostream>
using namespace std;
union game
{
    int cricketRun;
    float footballScore;
    int basketballScore;
};

int main()
{
    // union game player1, player2;
    game player1, player2;
    // In C++ it is not mandatory to write union before the name of custom data type.

    // player1.cricketRun = 45;// It will allocate one memory address for player1 
    player1.footballScore = 65;
    // player1.basketballScore = 23;

    // player2.basketballScore = 97;// It will allocate one memory address for player.2
    player2.footballScore = 67;
    // player2.basketballScore = 78;

    // cout << player1.cricketRun << endl;
    cout << player1.footballScore << endl;
    // cout << player1.basketballScore << endl;

    // cout << player2.cricketRun << endl;
    cout << player2.footballScore << endl;
    // cout << player2.basketballScore << endl;

    return 0;
}