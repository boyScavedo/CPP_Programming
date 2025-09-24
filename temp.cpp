#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class Cricket {
public:
    string playerName;
    int age;
    int score;
    
    void readData() {
        cout << "Enter player name: ";
        cin.ignore();
        getline(cin, playerName);
        cout << "Enter age: ";
        cin >> age;
        cout << "Enter score: ";
        cin >> score;
    }

    void displayData() {
        cout << "Name: " << playerName << endl;
        cout << "Age: " << age << endl;
        cout << "Score: " << score << endl;
        cout << "---------------------" << endl;
    }
};

int main() {
    int n;
    cout << "Enter number of players: ";
    cin >> n;

    Cricket* players = new Cricket[n];

    // Read data
    for (int i = 0; i < n; i++) {
        cout << "\nEnter details for player " << i + 1 << ":" << endl;
        players[i].readData();
    }

    // Write to text file (SIMPLE WAY)
    ofstream outFile("cricket.txt");
    outFile << n << endl; // Store count first
    
    for (int i = 0; i < n; i++) {
        outFile << players[i].playerName << endl;
        outFile << players[i].age << endl;
        outFile << players[i].score << endl;
    }
    outFile.close();

    // Read from text file (SIMPLE WAY)
    ifstream inFile("cricket.txt");
    int count;
    inFile >> count;
    inFile.ignore(); // Clear newline
    
    Cricket* filePlayers = new Cricket[count];
    for (int i = 0; i < count; i++) {
        getline(inFile, filePlayers[i].playerName);
        inFile >> filePlayers[i].age;
        inFile >> filePlayers[i].score;
        inFile.ignore(); // Clear newline after numbers
    }
    inFile.close();

    // Find and display highest scorers
    int highest = 0;
    for (int i = 0; i < count; i++) {
        if (filePlayers[i].score > highest) {
            highest = filePlayers[i].score;
        }
    }

    cout << "\nHighest Scorers (" << highest << "):" << endl;
    for (int i = 0; i < count; i++) {
        if (filePlayers[i].score == highest) {
            filePlayers[i].displayData();
        }
    }

    delete[] players;
    delete[] filePlayers;
    return 0;
}
