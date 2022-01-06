#include <iostream>
#include <fstream>

using std::cin;
using std::cout;
using std::endl;

int dienuskaicius;
int dienos1, dienos2, dienos3, dienos4, dienos5, dienos6;
int rytinis_laikas_isejimas_val1, rytinis_laikas_isejimas_val2, rytinis_laikas_isejimas_val3, rytinis_laikas_isejimas_val4, rytinis_laikas_isejimas_val5, rytinis_laikas_isejimas_val6;
int rytinis_laikas_isejimas_min1, rytinis_laikas_isejimas_min2, rytinis_laikas_isejimas_min3, rytinis_laikas_isejimas_min4, rytinis_laikas_isejimas_min5, rytinis_laikas_isejimas_min6;

int rytinis_laikas_sugryzimas_val1, rytinis_laikas_sugryzimas_val2, rytinis_laikas_sugryzimas_val3, rytinis_laikas_sugryzimas_val4, rytinis_laikas_sugryzimas_val5, rytinis_laikas_sugryzimas_val6;
int rytinis_laikas_sugryzimas_min1, rytinis_laikas_sugryzimas_min2, rytinis_laikas_sugryzimas_min3, rytinis_laikas_sugryzimas_min4, rytinis_laikas_sugryzimas_min5, rytinis_laikas_sugryzimas_min6;

int vakaro_laikas_isejimas_val1, vakaro_laikas_isejimas_val2, vakaro_laikas_isejimas_val3, vakaro_laikas_isejimas_val4, vakaro_laikas_isejimas_val5, vakaro_laikas_isejimas_val6;
int vakaro_laikas_isejimas_min1, vakaro_laikas_isejimas_min2, vakaro_laikas_isejimas_min3, vakaro_laikas_isejimas_min4, vakaro_laikas_isejimas_min5, vakaro_laikas_isejimas_min6;

int vakaro_laikas_sugryzimas_val1, vakaro_laikas_sugryzimas_val2, vakaro_laikas_sugryzimas_val3, vakaro_laikas_sugryzimas_val4, vakaro_laikas_sugryzimas_val5, vakaro_laikas_sugryzimas_val6;
int vakaro_laikas_sugryzimas_min1, vakaro_laikas_sugryzimas_min2, vakaro_laikas_sugryzimas_min3, vakaro_laikas_sugryzimas_min4, vakaro_laikas_sugryzimas_min5, vakaro_laikas_sugryzimas_min6;

int Kodas();

int main()
{
      std::ifstream i_file("U1.txt");

      i_file >> dienuskaicius >> dienos1 >> rytinis_laikas_isejimas_val1 >> rytinis_laikas_isejimas_min1 >> rytinis_laikas_sugryzimas_val1 >> rytinis_laikas_sugryzimas_min1 >> vakaro_laikas_isejimas_val1 >> vakaro_laikas_isejimas_min1 >> vakaro_laikas_sugryzimas_val1 >> vakaro_laikas_sugryzimas_min1 >> dienos2 >> rytinis_laikas_isejimas_val2 >> rytinis_laikas_isejimas_min2 >> rytinis_laikas_sugryzimas_val2 >> rytinis_laikas_sugryzimas_min2 >> vakaro_laikas_isejimas_val2 >> vakaro_laikas_isejimas_min2 >> vakaro_laikas_sugryzimas_val2 >> vakaro_laikas_sugryzimas_min2 >> dienos3 >> rytinis_laikas_isejimas_val3 >> rytinis_laikas_isejimas_min3 >> rytinis_laikas_sugryzimas_val3 >> rytinis_laikas_sugryzimas_min3 >> vakaro_laikas_isejimas_val3 >> vakaro_laikas_isejimas_min3 >> vakaro_laikas_sugryzimas_val3 >> vakaro_laikas_sugryzimas_min3 >> dienos4 >> rytinis_laikas_isejimas_val4 >> rytinis_laikas_isejimas_min4 >> rytinis_laikas_sugryzimas_val4 >> rytinis_laikas_sugryzimas_min4 >> vakaro_laikas_isejimas_val4 >> vakaro_laikas_isejimas_min4 >> vakaro_laikas_sugryzimas_val4 >> vakaro_laikas_sugryzimas_min4 >> dienos5 >> rytinis_laikas_isejimas_val5 >> rytinis_laikas_isejimas_min5 >> rytinis_laikas_sugryzimas_val5 >> rytinis_laikas_sugryzimas_min5 >> vakaro_laikas_isejimas_val5 >> vakaro_laikas_isejimas_min5 >> vakaro_laikas_sugryzimas_val5 >> vakaro_laikas_sugryzimas_min5 >> dienos6 >> rytinis_laikas_isejimas_val6 >> rytinis_laikas_isejimas_min6 >> rytinis_laikas_sugryzimas_val6 >> rytinis_laikas_sugryzimas_min6 >> vakaro_laikas_isejimas_val6 >> vakaro_laikas_isejimas_min6 >> vakaro_laikas_sugryzimas_val6 >> vakaro_laikas_sugryzimas_min6;

      cout
          << dienos1 << endl
          << rytinis_laikas_isejimas_val1 << " " << rytinis_laikas_isejimas_min1 << ", " << rytinis_laikas_sugryzimas_val1 << " " << rytinis_laikas_sugryzimas_min1 << endl
          << vakaro_laikas_isejimas_val1 << " " << vakaro_laikas_isejimas_min1 << ", " << vakaro_laikas_sugryzimas_val1 << " " << vakaro_laikas_sugryzimas_min1 << endl
          << endl
          << dienos2 << endl
          << rytinis_laikas_isejimas_val2 << " " << rytinis_laikas_isejimas_min2 << ", " << rytinis_laikas_sugryzimas_val2 << " " << rytinis_laikas_sugryzimas_min2 << endl
          << vakaro_laikas_isejimas_val2 << " " << vakaro_laikas_isejimas_min2 << ", " << vakaro_laikas_sugryzimas_val2 << " " << vakaro_laikas_sugryzimas_min2 << endl
          << endl
          << dienos3 << endl
          << rytinis_laikas_isejimas_val3 << " " << rytinis_laikas_isejimas_min3 << ", " << rytinis_laikas_sugryzimas_val3 << " " << rytinis_laikas_sugryzimas_min3 << endl
          << vakaro_laikas_isejimas_val3 << " " << vakaro_laikas_isejimas_min3 << ", " << vakaro_laikas_sugryzimas_val3 << " " << vakaro_laikas_sugryzimas_min3 << endl
          << endl
          << dienos4 << endl
          << rytinis_laikas_isejimas_val4 << " " << rytinis_laikas_isejimas_min4 << ", " << rytinis_laikas_sugryzimas_val4 << " " << rytinis_laikas_sugryzimas_min4 << endl
          << vakaro_laikas_isejimas_val4 << " " << vakaro_laikas_isejimas_min4 << ", " << vakaro_laikas_sugryzimas_val4 << " " << vakaro_laikas_sugryzimas_min4 << endl
          << endl
          << dienos5 << endl
          << rytinis_laikas_isejimas_val5 << " " << rytinis_laikas_isejimas_min5 << ", " << rytinis_laikas_sugryzimas_val5 << " " << rytinis_laikas_sugryzimas_min5 << endl
          << vakaro_laikas_isejimas_val5 << " " << vakaro_laikas_isejimas_min5 << ", " << vakaro_laikas_sugryzimas_val5 << " " << vakaro_laikas_sugryzimas_min5 << endl
          << endl
          << dienos6 << endl
          << rytinis_laikas_isejimas_val6 << " " << rytinis_laikas_isejimas_min6 << ", " << rytinis_laikas_sugryzimas_val6 << " " << rytinis_laikas_sugryzimas_min6 << endl
          << vakaro_laikas_isejimas_val6 << " " << vakaro_laikas_isejimas_min6 << ", " << vakaro_laikas_sugryzimas_val6 << " " << vakaro_laikas_sugryzimas_min6 << endl
          << endl;

      Kodas();
}

int laikas_rytas1, laikas_vakaras1,
    laikas_rytas2, laikas_vakaras2,
    laikas_rytas3, laikas_vakaras3,
    laikas_rytas4, laikas_vakaras4,
    laikas_rytas5, laikas_vakaras5,
    laikas_rytas6, laikas_vakaras6;

int Kodas()
{
      std::ofstream write("U1rez.txt");
      write << "Minimalus laikas" << endl;
      laikas_rytas1 = (rytinis_laikas_sugryzimas_val1 * 60) + rytinis_laikas_sugryzimas_min1 - (rytinis_laikas_isejimas_val1 * 60) + rytinis_laikas_isejimas_min1;

      laikas_vakaras1 = (vakaro_laikas_sugryzimas_val1 * 60) + vakaro_laikas_sugryzimas_min1 - (vakaro_laikas_isejimas_val1 * 60) + vakaro_laikas_isejimas_min1;

      laikas_rytas2 = (rytinis_laikas_sugryzimas_val2 * 60) + rytinis_laikas_sugryzimas_min2 - (rytinis_laikas_isejimas_val2 * 60) + rytinis_laikas_isejimas_min2;

      laikas_vakaras2 = (vakaro_laikas_sugryzimas_val2 * 60) + vakaro_laikas_sugryzimas_min2 - (vakaro_laikas_isejimas_val2 * 60) + vakaro_laikas_isejimas_min2;

      laikas_rytas3 = (rytinis_laikas_sugryzimas_val3 * 60) + rytinis_laikas_sugryzimas_min3 - (rytinis_laikas_isejimas_val3 * 60) + rytinis_laikas_isejimas_min3;

      laikas_vakaras3 = (vakaro_laikas_sugryzimas_val3 * 60) + vakaro_laikas_sugryzimas_min3 - (vakaro_laikas_isejimas_val3 * 60) + vakaro_laikas_isejimas_min3;

      laikas_rytas4 = (rytinis_laikas_sugryzimas_val4 * 60) + rytinis_laikas_sugryzimas_min4 - (rytinis_laikas_isejimas_val4 * 60) + rytinis_laikas_isejimas_min4;

      laikas_vakaras4 = (vakaro_laikas_sugryzimas_val4 * 60) + vakaro_laikas_sugryzimas_min4 - (vakaro_laikas_isejimas_val4 * 60) + vakaro_laikas_isejimas_min4;

      laikas_rytas5 = (rytinis_laikas_sugryzimas_val5 * 60) + rytinis_laikas_sugryzimas_min5 - (rytinis_laikas_isejimas_val5 * 60) + rytinis_laikas_isejimas_min5;

      laikas_vakaras5 = (vakaro_laikas_sugryzimas_val5 * 60) + vakaro_laikas_sugryzimas_min5 - (vakaro_laikas_isejimas_val5 * 60) + vakaro_laikas_isejimas_min5;

      laikas_rytas6 = (rytinis_laikas_sugryzimas_val6 * 60) + rytinis_laikas_sugryzimas_min6 - (rytinis_laikas_isejimas_val6 * 60) + rytinis_laikas_isejimas_min6;

      laikas_vakaras6 = (vakaro_laikas_sugryzimas_val6 * 60) + vakaro_laikas_sugryzimas_min6 - (vakaro_laikas_isejimas_val6 * 60) + vakaro_laikas_isejimas_min6;

      cout << "-----------------------------------------------------------------------------" << endl
           << endl;

      cout << laikas_rytas1 << " " << laikas_vakaras1<< " "
           << laikas_rytas2 << " " << laikas_vakaras2<< " "
           << laikas_rytas3 << " " << laikas_vakaras3<< " "
           << laikas_rytas4 << " " << laikas_vakaras4<< " "
           << laikas_rytas5 << " " << laikas_vakaras5<< " "
           << laikas_rytas6 << " " << laikas_vakaras6;


      return 0;
}

/*
6 = Skaičius dienų, kai Laurynas bėgo bent vieną kartą.
3 = Liepos mėnesio diena

09 25 = bėgimo ryte pradžios
09 40 = pabaigos laikas
19 45 = bėgimo vakare pradžios
20 00 = pabaigos laikas

6
08 30 = bėgimo ryte pradžios
08 48 = pabaigos laikas
0 0 =
0 0 =

7
09 18 = bėgimo ryte pradžios
09 38 = pabaigos laikas
18 52 = bėgimo vakare pradžios
19 11 = pabaigos laikas

10
08 48
09 03
18 45
19 00

15
08 52
09 11
17 58
18 18

30
0 0
0 0
19 02
19 20
*/
