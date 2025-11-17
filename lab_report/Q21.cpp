// Write a C++ program to create a file named data.txt.
// The program should allow the user to enter a line of text and save it to the file.
// Then read the same file and display its contents on the screen.

#include <iostream>
#include <fstream>
#include <conio.h>
using namespace std;

int main() {
    string text;

    ofstream fout("data.txt");
    cout << "Enter a line: ";
    getline(cin, text);
    fout << text;
    fout.close();

    ifstream fin("data.txt");
    getline(fin, text);
    fin.close();

    cout << "\nFile contains:\n" << text << endl;

    getch();
    return 0;
}

