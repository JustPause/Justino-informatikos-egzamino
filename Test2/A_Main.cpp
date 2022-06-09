#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;
int ucost;
int uniformcost();

int main()
{
      int NO;
      string firstname, lastname;
      string POS;
      string grade;
      int feet, inches;
      int weight;
      string home;
      int height;
      int count;
      count = 0;
      char dash;
      double ucost, lcost, tcost;
      int sum;
      sum = 0;

      string filename;
      ifstream inFile;

      cout << "Enter the name of the input file: ";
      cin >> filename;

      inFile.open(filename.c_str());

      if (!inFile)
      {
            cout << "Cannot Open Input File." << endl;
            cout << "Program Terminates!" << endl;
            return 1;
      }
      cout << filename << " was opened" << endl
           << endl;
      inFile.ignore(200, '\n');

      inFile >> NO >> firstname >> lastname >> POS >> grade >> feet >> dash >> inches >> weight >> home;
      getline(inFile, home);
      while (inFile)
      {
            inFile >> NO >> firstname >> lastname >> POS >> grade >> feet >> dash >> inches >> weight >> home;
            getline(inFile, home);

            cout << "Jersey Number: " << NO << endl;
            cout << "Name: " << firstname << " " << lastname << endl;
            cout << "Position: " << POS << endl;
            cout << "Grade Level: " << grade << endl;
            cout << "Height: " << feet << dash << inches << endl;
            cout << "Weight: " << weight << endl;
            cout << "From: " << home << endl
                 << endl;
            count++;

            int heightinches;
            heightinches = (feet * 12) + inches;

            if (heightinches <= 72)
            {
                  ucost = 200;
            }

            else if (weight > 260)
            {
                  ucost = 255;
            }

            else if (72 < heightinches <= 76)
            {
                  ucost = 225;
            }

            int lcost;
            lcost = (lastname.length()) * 2;
            int ncost;
            if (NO <= 10)
                  ncost = 5;
            else
                  ncost = 10;

            int totalcost1;
            totalcost1 = ucost + lcost + ncost;
            int tuniformcost;

            if (grade.length() == 5)
                  tuniformcost = totalcost1 * 2;
            else
                  tuniformcost = totalcost1 * 4;

            cout << " Uniform cost is: $" << ucost << endl;
            cout << " Cost for letters: $" << lcost << endl;
            cout << " Cost for numbers: $" << ncost << endl;
            cout << " Total cost for 1 uniform: $" << totalcost1 << endl;
            cout << "Total Uniform Cost: $" << tuniformcost << endl
                 << endl
                 << endl;

            sum = sum + tuniformcost;
      }

      cout << "=============================================" << endl;
      cout << " Team Stats " << endl;
      cout << "=============================================" << endl;
      cout << endl
           << endl;
      cout << "Number of Players: " << count << endl;
      cout << "Total Monthly Uniform Cost: " << sum << endl;
}