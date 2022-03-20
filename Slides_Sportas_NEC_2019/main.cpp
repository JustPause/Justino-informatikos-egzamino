#include <iostream>
#include <fstream>

using namespace std;

const int ilgis = 21;
int i = 0;

struct Startas
{
    char v[ilgis] = " ";

    int start_skaic = 0, start_h = 0, start_m = 0, start_s = 0;

    int finish_skaic = 0;

    int finish_h = 0, finish_m = 0, finish_s = 0;
    int pirmas_i = 0, antras_i = 0, pirmas_p = 0, antras_p = 0;

    int taskai = 0;

    int laikas_f = 0, laikas_s = 0;

    int baudos_laikas = 0;

    int vieta = 0;
};

int in1_Work(Startas &pirmas, Startas &antas, Startas &trecias, Startas &ketivirtas, Startas &penktas, Startas &sestas, Startas &Nezinomasis, int &p1, int &p2)
{
    ifstream file_in("U1.txt");

    file_in >> p1;

    file_in.ignore(); // kaskodel skaito iki tarpo
    file_in.get(pirmas.v, ilgis);
    file_in >> pirmas.start_skaic >> pirmas.start_h >> pirmas.start_m >> pirmas.start_s;

    file_in.ignore(); // kaskodel skaito iki tarpo
    file_in.get(antas.v, ilgis);
    file_in >> antas.start_skaic >> antas.start_h >> antas.start_m >> antas.start_s;

    file_in.ignore(); // kaskodel skaito iki tarpo
    file_in.get(trecias.v, ilgis);
    file_in >> trecias.start_skaic >> trecias.start_h >> trecias.start_m >> trecias.start_s;

    file_in.ignore(); // kaskodel skaito iki tarpo
    file_in.get(ketivirtas.v, ilgis);
    file_in >> ketivirtas.start_skaic >> ketivirtas.start_h >> ketivirtas.start_m >> ketivirtas.start_s;

    file_in.ignore(); // kaskodel skaito iki tarpo
    file_in.get(penktas.v, ilgis);
    file_in >> penktas.start_skaic >> penktas.start_h >> penktas.start_m >> penktas.start_s;

    file_in.ignore();
    file_in.get(sestas.v, ilgis);
    file_in >> sestas.start_skaic >> sestas.start_h >> sestas.start_m >> sestas.start_s;

    file_in >> p2;

    for (int i = 0; i < 6; i++) {
        file_in >> Nezinomasis.finish_skaic;
        if (Nezinomasis.finish_skaic >= 200) {
            file_in >> Nezinomasis.finish_h >> Nezinomasis.finish_m >> Nezinomasis.finish_s >> Nezinomasis.pirmas_i >> Nezinomasis.pirmas_p >> Nezinomasis.antras_i >> Nezinomasis.antras_p;
        } else {
            file_in >> Nezinomasis.finish_h >> Nezinomasis.finish_m >> Nezinomasis.finish_s >> Nezinomasis.pirmas_i >> Nezinomasis.pirmas_p;
        }

        if (pirmas.start_skaic == Nezinomasis.finish_skaic) {

            pirmas.finish_skaic = Nezinomasis.finish_skaic;
            pirmas.finish_h = Nezinomasis.finish_h;
            pirmas.finish_m = Nezinomasis.finish_m;
            pirmas.finish_s = Nezinomasis.finish_s;
            pirmas.pirmas_i = Nezinomasis.pirmas_i;
            pirmas.pirmas_p = Nezinomasis.pirmas_p;
            if (Nezinomasis.finish_skaic >= 200) {
                pirmas.antras_i = Nezinomasis.antras_i;
                pirmas.antras_p = Nezinomasis.antras_p;
            }
        }

        else if (antas.start_skaic == Nezinomasis.finish_skaic) {

            antas.finish_skaic = Nezinomasis.finish_skaic;
            antas.finish_h = Nezinomasis.finish_h;
            antas.finish_m = Nezinomasis.finish_m;
            antas.finish_s = Nezinomasis.finish_s;
            antas.pirmas_i = Nezinomasis.pirmas_i;
            antas.pirmas_p = Nezinomasis.pirmas_p;
            if (Nezinomasis.finish_skaic >= 200) {
                antas.antras_i = Nezinomasis.antras_i;
                antas.antras_p = Nezinomasis.antras_p;
            }
        }

        else if (trecias.start_skaic == Nezinomasis.finish_skaic) {

            trecias.finish_skaic = Nezinomasis.finish_skaic;
            trecias.finish_h = Nezinomasis.finish_h;
            trecias.finish_m = Nezinomasis.finish_m;
            trecias.finish_s = Nezinomasis.finish_s;
            trecias.pirmas_i = Nezinomasis.pirmas_i;
            trecias.pirmas_p = Nezinomasis.pirmas_p;
            if (Nezinomasis.finish_skaic >= 200) {
                trecias.antras_i = Nezinomasis.antras_i;
                trecias.antras_p = Nezinomasis.antras_p;
            }
        }

        else if (ketivirtas.start_skaic == Nezinomasis.finish_skaic) {

            ketivirtas.finish_skaic = Nezinomasis.finish_skaic;
            ketivirtas.finish_h = Nezinomasis.finish_h;
            ketivirtas.finish_m = Nezinomasis.finish_m;
            ketivirtas.finish_s = Nezinomasis.finish_s;
            ketivirtas.pirmas_i = Nezinomasis.pirmas_i;
            ketivirtas.pirmas_p = Nezinomasis.pirmas_p;
            if (Nezinomasis.finish_skaic >= 200) {
                ketivirtas.antras_i = Nezinomasis.antras_i;
                ketivirtas.antras_p = Nezinomasis.antras_p;
            }
        }

        else if (penktas.start_skaic == Nezinomasis.finish_skaic) {

            penktas.finish_skaic = Nezinomasis.finish_skaic;
            penktas.finish_h = Nezinomasis.finish_h;
            penktas.finish_m = Nezinomasis.finish_m;
            penktas.finish_s = Nezinomasis.finish_s;
            penktas.pirmas_i = Nezinomasis.pirmas_i;
            penktas.pirmas_p = Nezinomasis.pirmas_p;
            if (Nezinomasis.finish_skaic >= 200) {
                penktas.antras_i = Nezinomasis.antras_i;
                penktas.antras_p = Nezinomasis.antras_p;
            }
        } else if (sestas.start_skaic == Nezinomasis.finish_skaic) {

            sestas.finish_skaic = Nezinomasis.finish_skaic;
            sestas.finish_h = Nezinomasis.finish_h;
            sestas.finish_m = Nezinomasis.finish_m;
            sestas.finish_s = Nezinomasis.finish_s;
            sestas.pirmas_i = Nezinomasis.pirmas_i;
            sestas.pirmas_p = Nezinomasis.pirmas_p;
            if (Nezinomasis.finish_skaic >= 200) {
                sestas.antras_i = Nezinomasis.antras_i;
                sestas.antras_p = Nezinomasis.antras_p;
            }
        } else
            (cout << Nezinomasis.finish_skaic << " ");
    }

    /*
    file_in>>antas.finish_skaic>>antas.finish_h>>antas.finish_m>>antas.finish_s>>antas.pirmas_i>>antas.pirmas_p>>antas.antras_i>>antas.antras_p;
    file_in>>trecias.finish_skaic>>trecias.finish_h>>trecias.finish_m>>trecias.finish_s>>trecias.pirmas_i>>trecias.pirmas_p>>trecias.antras_i>>trecias.antras_p;
    file_in>>ketivirtas.finish_skaic>>ketivirtas.finish_h>>ketivirtas.finish_m>>ketivirtas.finish_s>>ketivirtas.pirmas_i>>ketivirtas.pirmas_p>>ketivirtas.antras_i>>ketivirtas.antras_p;
    file_in>>penktas.finish_skaic>>penktas.finish_h>>penktas.finish_m>>penktas.finish_s>>penktas.pirmas_i>>penktas.pirmas_p>>penktas.antras_i>>penktas.antras_p;
    */
    return 0;
}

int Poits(Startas &pirmas, Startas &antas, Startas &trecias, Startas &ketivirtas, Startas &penktas, Startas &sestas, int &p1, int &p2)
{

    pirmas.laikas_f = (((pirmas.finish_h * 60) + pirmas.finish_m) * 60) + pirmas.finish_s;

    pirmas.laikas_s = (((pirmas.start_h * 60) + pirmas.start_m) * 60) + pirmas.start_s;

    if (pirmas.finish_skaic >= 200) {
        pirmas.baudos_laikas = (pirmas.pirmas_i - pirmas.pirmas_p) + (pirmas.antras_i - pirmas.antras_p);
    } else {
        pirmas.baudos_laikas = (pirmas.pirmas_i - pirmas.pirmas_p);
    }

    pirmas.taskai = (pirmas.laikas_f - pirmas.laikas_s) + (pirmas.baudos_laikas * 60);

    antas.laikas_f = (((antas.finish_h * 60) + antas.finish_m) * 60) + antas.finish_s;

    antas.laikas_s = (((antas.start_h * 60) + antas.start_m) * 60) + antas.start_s;

    if (antas.finish_skaic >= 200) {
        antas.baudos_laikas = (antas.pirmas_i - antas.pirmas_p) + (antas.antras_i - antas.antras_p);
    } else {
        antas.baudos_laikas = (antas.pirmas_i - antas.pirmas_p);
    }

    antas.taskai = (antas.laikas_f - antas.laikas_s) + (antas.baudos_laikas * 60);

    trecias.laikas_f = (((trecias.finish_h * 60) + trecias.finish_m) * 60) + trecias.finish_s;

    trecias.laikas_s = (((trecias.start_h * 60) + trecias.start_m) * 60) + trecias.start_s;

    if (trecias.finish_skaic >= 200) {
        trecias.baudos_laikas = (trecias.pirmas_i - trecias.pirmas_p) + (trecias.antras_i - trecias.antras_p);
    } else {
        trecias.baudos_laikas = (trecias.pirmas_i - trecias.pirmas_p);
    }

    trecias.taskai = (trecias.laikas_f - trecias.laikas_s) + (trecias.baudos_laikas * 60);

    ketivirtas.laikas_f = (((ketivirtas.finish_h * 60) + ketivirtas.finish_m) * 60) + ketivirtas.finish_s;

    ketivirtas.laikas_s = (((ketivirtas.start_h * 60) + ketivirtas.start_m) * 60) + ketivirtas.start_s;

    if (ketivirtas.finish_skaic >= 200) {
        ketivirtas.baudos_laikas = (ketivirtas.pirmas_i - ketivirtas.pirmas_p) + (ketivirtas.antras_i - ketivirtas.antras_p);
    } else {
        ketivirtas.baudos_laikas = (ketivirtas.pirmas_i - ketivirtas.pirmas_p);
    }

    ketivirtas.taskai = (ketivirtas.laikas_f - ketivirtas.laikas_s) + (ketivirtas.baudos_laikas * 60);

    penktas.laikas_f = (((penktas.finish_h * 60) + penktas.finish_m) * 60) + penktas.finish_s;

    penktas.laikas_s = (((penktas.start_h * 60) + penktas.start_m) * 60) + penktas.start_s;

    if (penktas.finish_skaic >= 200) {
        penktas.baudos_laikas = (penktas.pirmas_i - penktas.pirmas_p) + (penktas.antras_i - penktas.antras_p);
    } else {
        penktas.baudos_laikas = (penktas.pirmas_i - penktas.pirmas_p);
    }

    penktas.taskai = (penktas.laikas_f - penktas.laikas_s) + (penktas.baudos_laikas * 60);

    sestas.laikas_f = (((sestas.finish_h * 60) + sestas.finish_m) * 60) + sestas.finish_s;

    sestas.laikas_s = (((sestas.start_h * 60) + sestas.start_m) * 60) + sestas.start_s;

    if (sestas.finish_skaic >= 200) {
        sestas.baudos_laikas = (sestas.pirmas_i - sestas.pirmas_p) + (sestas.antras_i - sestas.antras_p);
    } else {
        sestas.baudos_laikas = (sestas.pirmas_i - sestas.pirmas_p);
    }

    sestas.taskai = (sestas.laikas_f - sestas.laikas_s) + (sestas.baudos_laikas * 60);

    if(pirmas.taskai < 0) {
        pirmas.taskai=0;
    }
    if(antas.taskai < 0) {
        antas.taskai=0;
    }
    if(trecias.taskai < 0) {
        trecias.taskai=0;
    }
    if(ketivirtas.taskai < 0) {
        ketivirtas.taskai=0;
    }
    if(penktas.taskai < 0) {
        penktas.taskai=0;
    }
    if(sestas.taskai < 0) {
        sestas.taskai=0;
    }
}

int Sorting(Startas pirmas, Startas antas, Startas trecias, Startas ketivirtas, Startas penktas, Startas sestas, int p1, int p2)
{
    int temp=0;
    if (pirmas.taskai>antas.taskai) {
        temp = pirmas.taskai;
        pirmas.taskai=antas.taskai;
        antas.taskai=temp;
    }

    if (antas.taskai>trecias.taskai) {
        temp = antas.taskai;
        antas.taskai=trecias.taskai;
        trecias.taskai=temp;
    }

    if (trecias.taskai>ketivirtas.taskai) {
        temp = trecias.taskai;
        trecias.taskai=ketivirtas.taskai;
        ketivirtas.taskai=temp;
    }

    if (ketivirtas.taskai>penktas.taskai) {
        temp = ketivirtas.taskai;
        ketivirtas.taskai=penktas.taskai;
        penktas.taskai=temp;
    }

    if (penktas.taskai>sestas.taskai) {
        temp = penktas.taskai;
        penktas.taskai=sestas.taskai;
        sestas.taskai=temp;
    }

    {
        for( int i=1; i>sestas.taskai+1; i++) {
            if(i==pirmas.taskai) {
                cout<<"coll";
            }
        }

        cout << pirmas.taskai << endl;
        cout << antas.taskai << endl;
        cout << trecias.taskai << endl;
        cout << ketivirtas.taskai << endl;
        cout << penktas.taskai << endl;
        cout << sestas.taskai << endl;

    }
}
int line_out(Startas pirmas, Startas antas, Startas trecias, Startas ketivirtas, Startas penktas, Startas sestas, int p1, int p2) {

}

int main()
{
    Startas S_pirmas, S_antas, S_trecias, S_ketivirtas, S_penktas, S_sestas, Nezinomasis;

    int p1, p2;

    in1_Work(S_pirmas, S_antas, S_trecias, S_ketivirtas, S_penktas, S_sestas, Nezinomasis, p1, p2);

    Poits(S_pirmas, S_antas, S_trecias, S_ketivirtas, S_penktas, S_sestas, p1, p2);

    Sorting(S_pirmas, S_antas, S_trecias, S_ketivirtas, S_penktas, S_sestas, p1, p2);
    // Bug Hunt

    ofstream file_out("U1rez.txt");

    return 0;
}
