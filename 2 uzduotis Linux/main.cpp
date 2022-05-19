#include <iostream>
#include <fstream>

using namespace std;

struct Zvejyba
{
    int Z_sk;
    char VardasPavarde[20]= {" "};
};

int main()
{
    ifstream file_in ("U2.txt");

    int Z_sk;

    file_in >> Z_sk;

    Zvejyba Zvejys[Z_sk];

    file_in.get(Zvejys[0].VardasPavarde, 20);

    cout<<Zvejys[0].VardasPavarde[5];

    for(int i=0; i<20; i++)
    {
        cout<<Zvejys[0].VardasPavarde[i];
    }
    return 0;
}
