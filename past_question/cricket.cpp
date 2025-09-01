// 2024 - Q15
//
// Declare a class cricket with member's player name, age, and score made. Write a program to read records of n player and
// store them file and display the records of players who made the highest score

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class Cricket {
    string name;
    int age;
    int score;

public:
    void input() {
        cout << "Enter player name: ";
        cin.ignore();
        getline(cin, name);
        cout << "Enter age: ";
        cin >> age;
        cout << "Enter score: ";
        cin >> score;
    }

    void writeToFile(ofstream &out) {
        out << name << " " << age << " " << score << "\n";
    }

    void displayHighestScorePlayers(const string &filename) {
        ifstream in(filename);
        string pname;
        int page, pscore;

        int highest = 0;

        while (in >> pname >> page >> pscore) {
            if (pscore > highest) {
                highest = pscore;
            }
        }
        in.close();

        in.open(filename);
        cout << "\nPlayers with highest score (" << highest << "):\n";
        while (in >> pname >> page >> pscore) {
            if (pscore == highest)
                cout << pname << " " << page << " " << pscore << "\n";
        }
        in.close();
    }
};

int main() {
    int n;
    cout << "Enter number of players: ";
    cin >> n;

    ofstream out("cricket.txt", ios::app);
    Cricket c;

    for (int i = 0; i < n; i++) {
        cout << "\nPlayer " << i + 1 << ":\n";
        c.input();
        c.writeToFile(out);
    }
    out.close();

    c.displayHighestScorePlayers("cricket.txt");

    return 0;
}
