#include <iostream>
#include <vector>
using namespace std;

vector<string> gameTitles;

void addGameTitle(string title);
void removeGameTitle(string title);
void listGameTitles();

int main()
{
    int option;
    string title;

    cout << "\nThis is the game titles application." << endl;
    cout << "Options: " << endl;
    cout << "0) Exit the app" << endl;
    cout << "1) Add a game title" << endl;
    cout << "2) Remove a game title" << endl;
    cout << "3) List all game titles" << endl;
    cout << "Please enter a number: ";
    cin >> option;

    switch (option) {
    case 0:
        return 0;
    case 1:
        cout << "\nEnter the title to add: ";
        cin >> title;
        addGameTitle(title);
        main();
        break;
    case 2:
        cout << "\nEnter the title to remove: ";
        cin >> title;
        removeGameTitle(title);
        main();
        break;
    case 3:
        listGameTitles();
        main();
        break;
    default:
        main();
        break;
    }
}

void addGameTitle(string title) {
    gameTitles.push_back(title);
    cout << title << " has been added." << endl;
}

void removeGameTitle(string title) {
    vector<string>::iterator item = find(gameTitles.begin(), gameTitles.end(), title);
    gameTitles.erase(item);
    cout << title << " has been removed";
}

void listGameTitles() {
    for (string title : gameTitles) {
        cout << title << endl;
    }
}

