#include <iostream>

using namespace std;

void Tasks_Task1_printName();
void Tasks_Task2_printFriendsNames();

int main()
{
    Tasks_Task1_printName();
    Tasks_Task2_printFriendsNames();

    cin.get();
}

/* Function that is used for printing my name */
void Tasks_Task1_printName()
{
    cout << "My name is Pawel\n";
}

/* Function that is used for printing my friend's names */
void Tasks_Task2_printFriendsNames()
{
    cout << "Pawel\n";
    cout << "Kasia\n";
    cout << "Konrad\n";
    cout << "Kuba\n";
    cout << "Mateusz\n";
}