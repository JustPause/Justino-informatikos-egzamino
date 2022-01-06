#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(void)
{

    int score1, score2, score3;
    // dont' forget to include
    // string header file
    string s;

    ofstream write;
    ifstream read;

    // write to file
    write.open("test3.txt");

    write << "Scores " << 85 << " " << 73 << " " << 99 << endl;

    write.close();

    // read from file
    read.open("test3.txt");

    read >> s >> score1 >> score2 >> score3;

    cout << s << " " << score1 << " " << score2 << " " << score3 << " ";
    cout << "avg. " << (score1 + score2 + score3) / 3.0 << endl;

    read.close();

    return 0;
}