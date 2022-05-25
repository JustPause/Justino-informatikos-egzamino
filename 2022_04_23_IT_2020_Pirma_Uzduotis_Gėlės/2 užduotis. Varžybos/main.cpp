#include <iostream>
#include <fstream>

using namespace std;

struct Zvejyba
{
    int Z_sk;
    char VardasPavarde[20]= {};
    int Pristatytu_zuvu_skaicius;
    char ZuviesVardas[20]= {};
    int Zuvies_mase_gramais;
};

int main()
{
    ifstream file_in("U2.txt");

    int Z_sk;

    file_in >> Z_sk;

    Zvejyba Zvejys[Z_sk];

    //cout << Z_sk;
    //char Vardas[20];

    for(int i=0; i<Z_sk; i++)
    {
        file_in.ignore();
        file_in.get(Zvejys[i].VardasPavarde, 20);
        file_in >> Zvejys[i].Pristatytu_zuvu_skaicius;

        for(int j=0; j<Zvejys[i].Pristatytu_zuvu_skaicius; j++)
        {
            file_in.ignore();
            file_in.get(Zvejys[i].ZuviesVardas, 20);
            file_in>>Zvejys[i].Zuvies_mase_gramais;
        }
    }

for(int i=0;i<20;i++){
    cout<<Zvejys[1].VardasPavarde[i];
}

    file_in.close();
    return 0;
}
