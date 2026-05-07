#include <iostream>
#include <fstream>
using namespace std;
/*
define a function to read the contents of the test file and display them on the console, terminal.
the name of the file should be passed to the function as argument */
void readFile(string fileName);
/*
define a function to count the number of words in a file and write the
count in a file named 'wordcounts.txt'. the 'wordcounts.txt' should write
the result as: joel rivera
                total number of words:*/
void countFile(string fileName, string wordCount);
/*
define a function to count the number of times the word Earth appears in the
file. appened the results to file "wordcounts.txt as: the word earth appears ___
times in the document"*/
void appendFile(string fileName, string wordCount);
int main()
{
    string file = "./Remembering_Earth.txt", wordCount = "wordcounts.txt";

    // readFile(file);
    // countFile(file, wordCount);
    // appendFile(file, wordCount);

    return 0;
}
void readFile(string fileName)
{
    string s;
    ifstream fileStream;
    fileStream.open(fileName);
    while (fileStream >> s)
    {
        cout << s << " ";
    }
    cout << endl;
    fileStream.close();
}
void countFile(string fileName, string wordCount)
{
    string s, name;
    int count = 0;
    ifstream fileStream;
    ofstream fileOutStream(wordCount);
    fileStream.open(fileName);
    cout << "Enter your name: ";
    getline(cin, name);
    while (fileStream >> s)
    {
        count++;
    }
    fileOutStream << name << "\n";
    fileOutStream << "total number of words: " << count << "\n";
    fileStream.close();
    fileOutStream.close();
}
void appendFile(string fileName, string wordCount)
{
    string s;
    int count = 0;
    ofstream file(wordCount, ios_base::app);
    ifstream nfile(fileName);
    while (nfile >> s)
    {
        if (s == "Earth")
        {
            count++;
        }
    }
    file << "the word earth appears " << count << " times" << "\n";
    file.close();
    nfile.close();
}