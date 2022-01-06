#include <iostream>
#include <fstream>

using std::cin;
using std::cout;
using std::endl;

const int SIZE = 100;
int Skaiciai[SIZE];
int a;
void Apskaiciavimai();
int Suskaiciavimai(int Begimo_laikas_rytia[], int Begimo_laikas_vakaras[], int Skaiciai);

int main()
{
      std::ifstream i_file("U1.txt");
      while (!i_file.eof())
      {
            i_file >> Skaiciai[a];
            a++;
      }

      const int Pirmas_skaicius = 6;
      int Begimo_laikas_rytia[Pirmas_skaicius];
      for (int rutulio_skaicius = 0; rutulio_skaicius <= 6; rutulio_skaicius++)
      {

            Begimo_laikas_rytia[rutulio_skaicius] =
                (Skaiciai[4 + (9 * rutulio_skaicius)] * 60 + Skaiciai[5 + (9 * rutulio_skaicius)]) - (Skaiciai[2 + (9 * rutulio_skaicius)] * 60 + Skaiciai[3 + (9 * rutulio_skaicius)]);
            // beda su nulintu skaiciumi, turetu buti 15 o yra 0
      }

      cout << endl;

      int Begimo_laikas_vakaras[Pirmas_skaicius];
      for (int rutulio_skaicius = 0; rutulio_skaicius <= 6; rutulio_skaicius++)
      {
            Begimo_laikas_vakaras[rutulio_skaicius] =
                (Skaiciai[8 + (9 * rutulio_skaicius)] * 60 + Skaiciai[9 + (9 * rutulio_skaicius)]) - (Skaiciai[6 + (9 * rutulio_skaicius)] * 60 + Skaiciai[7 + (9 * rutulio_skaicius)]);
      }

      // cout << Begimo_laikas[0] << " " << Begimo_laikas[1];

      // Apskaiciavimai();
      int rutulio_skaicius = 0;
      Begimo_laikas_rytia[0] = (Skaiciai[4 + (9 * rutulio_skaicius)] * 60 + Skaiciai[5 + (9 * rutulio_skaicius)]) - (Skaiciai[2 + (9 * rutulio_skaicius)] * 60 + Skaiciai[3 + (9 * rutulio_skaicius)]);
      // jeigu veikia neverta taisyti;
      int z = 0;
      for (int i = 0; i < Skaiciai[0]; i++)
      {
            cout << i + 1 << "-1 " << Begimo_laikas_rytia[i] << endl;

            cout << i + 1 << "-2 " << Begimo_laikas_vakaras[i] << endl;
      }

      Suskaiciavimai(Begimo_laikas_rytia, Begimo_laikas_vakaras, Skaiciai[0]);
}
void Apskaiciavimai()
{
      int Begimo_laiaks1_1 = (Skaiciai[4 + 9 * 0] * 60 + Skaiciai[5 + 9 * 0]) - (Skaiciai[2 + 9 * 0] * 60 + Skaiciai[3 + 9 * 0]); // pirmos dienos rytas

      int Begimo_laiaks1_2 = (Skaiciai[8 + 9 * 0] * 60 + Skaiciai[9 + 9 * 0]) - (Skaiciai[6 + 9 * 0] * 60 + Skaiciai[7 + 9 * 0]); // pirmos dienos pakaras

      int Begimo_laiaks2_1 = (Skaiciai[4 + 9 * 1] * 60 + Skaiciai[5 + 9 * 1]) - (Skaiciai[2 + 9 * 1] * 60 + Skaiciai[3 + 9 * 1]); // pirmos dienos rytas

      int Begimo_laiaks2_2 = (Skaiciai[8 + 9 * 1] * 60 + Skaiciai[9 + 9 * 1]) - (Skaiciai[6 + 9 * 1] * 60 + Skaiciai[7 + 9 * 1]);

      int Begimo_laiaks3_1 = (Skaiciai[4 + 9 * 2] * 60 + Skaiciai[5 + 9 * 2]) - (Skaiciai[2 + 9 * 2] * 60 + Skaiciai[3 + 9 * 2]); // pirmos dienos rytas

      int Begimo_laiaks3_2 = (Skaiciai[8 + 9 * 2] * 60 + Skaiciai[9 + 9 * 2]) - (Skaiciai[6 + 9 * 2] * 60 + Skaiciai[7 + 9 * 2]);

      int Begimo_laiaks4_1 = (Skaiciai[4 + 9 * 3] * 60 + Skaiciai[5 + 9 * 3]) - (Skaiciai[2 + 9 * 3] * 60 + Skaiciai[3 + 9 * 3]); // pirmos dienos rytas

      int Begimo_laiaks4_2 = (Skaiciai[8 + 9 * 3] * 60 + Skaiciai[9 + 9 * 3]) - (Skaiciai[6 + 9 * 3] * 60 + Skaiciai[7 + 9 * 3]);

      int Begimo_laiaks5_1 = (Skaiciai[4 + 9 * 4] * 60 + Skaiciai[5 + 9 * 4]) - (Skaiciai[2 + 9 * 4] * 60 + Skaiciai[3 + 9 * 4]); // pirmos dienos rytas

      int Begimo_laiaks5_2 = (Skaiciai[8 + 9 * 4] * 60 + Skaiciai[9 + 9 * 4]) - (Skaiciai[6 + 9 * 4] * 60 + Skaiciai[7 + 9 * 4]);

      int Begimo_laiaks6_1 = (Skaiciai[4 + 9 * 5] * 60 + Skaiciai[5 + 9 * 5]) - (Skaiciai[2 + 9 * 5] * 60 + Skaiciai[3 + 9 * 5]); // pirmos dienos rytas

      int Begimo_laiaks6_2 = (Skaiciai[8 + 9 * 5] * 60 + Skaiciai[9 + 9 * 5]) - (Skaiciai[6 + 9 * 5] * 60 + Skaiciai[7 + 9 * 5]);
      cout << Begimo_laiaks6_2;
}

int Suskaiciavimai(int Begimo_laikas_rytia[], int Begimo_laikas_vakaras[], int Skaiciai)
{
      int s1, s2;
      for (int i = 1; i < Skaiciai; i++)
      {
            Begimo_laikas_rytia[0] = s1;
            if (s1 > Begimo_laikas_rytia[i])
                  s1 = Begimo_laikas_rytia[i];
      }
      cout << "ryto " << s1 << endl;

      for (int i = 1; i < Skaiciai; i++)
      {
            Begimo_laikas_vakaras[0] = s2;
            if (s2 > Begimo_laikas_vakaras[i])
                  s2 = Begimo_laikas_vakaras[i];
      }
      cout << "vakaro " << s2 << endl;

      for (int i = 0; i < Skaiciai; i++)
      {
            if (s1 == i)
            {
                  cout;
            }
      }
      return 0;
      // 54 skaiciai

      /*
      [0] = 6 = Skaičius dienų, kai Laurynas bėgo bent vieną kartą.
      [1] = 3 = Liepos mėnesio diena

      [1] 09 40 = pabaigos laikas
      [1] 09 25 = bėgimo ryte pradžios
      15
      [2] 19 45 = bėgimo vakare pradžios
      [2] 20 00 = pabaigos laikas
      15

      [10] = 6
      [3] 08 30 = bėgimo ryte pradžios
      [3] 08 48 = pabaigos laikas
      18
      [4] 0 0 =
      [4] 0 0 =
      0

      7
      [5] 09 18 = bėgimo ryte pradžios
      [5] 09 38 = pabaigos laikas
      20
      [6] 18 52 = bėgimo vakare pradžios
      [6] 19 11 = pabaigos laikas
      19

      10
      [7] 08 48
      [7] 09 03
      15
      [8] 18 45
      [8] 19 00
      15

      15
      [9] 08 52
      [9] 09 11
      19
      [10] 17 58
      [10] 18 18
      20

      30
      [11] 0 0
      [11] 0 0
      0
      [12] 19 02
      [12] 19 20
      18
      */