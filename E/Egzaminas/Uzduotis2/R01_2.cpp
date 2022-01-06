#include <iostream>
#include <fstream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int Zmoniu_Skaicius;
int Vienkartisnis_Skaicius = 0;

int main()
{
    // a
    std::ifstream filas_is_txt("U2.txt");

    filas_is_txt >> Zmoniu_Skaicius;

    string Vardas[Zmoniu_Skaicius];
    string Pamoka[Zmoniu_Skaicius];
    int Pazimiu_Skaicius;

    // int Pazimys[Pazimiu_Skaicius];
    //  for (Pazimiu_Skaicius){Pazimys[Pazimys]}
    //  if (Pazimys <paziau 9){neskaicuok}

    filas_is_txt >> Vardas[0] >> Pamoka[0] >> Pazimiu_Skaicius;

    int Pazimys[Pazimiu_Skaicius];

    for (int Pazimiu_Skaicius_Skaiciuja = 0; Pazimiu_Skaicius > Pazimiu_Skaicius_Skaiciuja; Pazimiu_Skaicius_Skaiciuja++)
    {
        filas_is_txt >> Pazimys[Pazimiu_Skaicius_Skaiciuja];
    }

    cout << Vardas[0] << " " << Pamoka[0] << " " << Pazimiu_Skaicius << " " << Pazimys[4];

    std::ofstream filas_i_txt("U2rez.txt");
    filas_i_txt << "a";
}
// kaip zinoti, kad egzamino metu neismes {Segmentation fault (core dumped)}
