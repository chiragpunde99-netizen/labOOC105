// File Handling in C++ using ifstream and ofstream
// Writing content to a file and then reading it

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    // Create an ofstream object to write to the file
    ofstream fout;

    string line;

    // Open the file in write mode
    // Previous content will be deleted if the file already exists
    fout.open("sample.txt");

    // Take input and write it to the file
    while (fout)
    {
        // Read a line from the user
        getline(cin, line);

        // Stop input when the user enters -1
        if (line == "-1")
            break;

        // Write the line into the file
        fout << line << endl;
    }

    // Close the file after writing
    fout.close();

    // Create an ifstream object to read the file
    ifstream fin;

    // Open the file in read mode
    fin.open("sample.txt");

    // Read the file line by line until the end
    while (getline(fin, line))
    {
        // Display each line on the screen
        cout << line << endl;
    }

    // Close the file after reading
    fin.close();

    return 0;
}