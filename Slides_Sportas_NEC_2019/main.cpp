#include <iostream>
#include <fstream>

using namespace std;

const int ilgis=21;
int i=0;

struct Startas
{
    char v[ilgis]=" ";

    int start_skaic, start_h, start_m, start_s;


    int finish_skaic;

    int finish_h, finish_m, finish_s;
    int pirmas_i, antras_i, pirmas_p, antras_p;

    int taskai;

    int laikas_f, laikas_s;

    int baudos_laikas;
};

int in1_Work(Startas &pirmas, Startas &antas, Startas &trecias, Startas &ketivirtas, Startas &penktas, Startas &sestas, Startas &Nezinomasis, int &p1, int &p2)
{
    ifstream file_in("U1.txt");

    file_in>>p1;

    file_in.ignore();//kaskodel skaito iki tarpo
    file_in.get(pirmas.v, ilgis);
    file_in>>pirmas.start_skaic>>pirmas.start_h>>pirmas.start_m>>pirmas.start_s;

    file_in.ignore();//kaskodel skaito iki tarpo
    file_in.get(antas.v, ilgis);
    file_in>>antas.start_skaic>>antas.start_h>>antas.start_m>>antas.start_s;

    file_in.ignore();//kaskodel skaito iki tarpo
    file_in.get(trecias.v, ilgis);
    file_in>>trecias.start_skaic>>trecias.start_h>>trecias.start_m>>trecias.start_s;

    file_in.ignore();//kaskodel skaito iki tarpo
    file_in.get(ketivirtas.v, ilgis);
    file_in>>ketivirtas.start_skaic>>ketivirtas.start_h>>ketivirtas.start_m>>ketivirtas.start_s;

    file_in.ignore();//kaskodel skaito iki tarpo
    file_in.get(penktas.v, ilgis);
    file_in>>penktas.start_skaic>>penktas.start_h>>penktas.start_m>>penktas.start_s;

    file_in.ignore();
    file_in.get(sestas.v, ilgis);
    file_in>>sestas.start_skaic>>sestas.start_h>>sestas.start_m>>sestas.start_s;

    file_in>>p2;
    for(int i=0; i<6; i++) {
        file_in>> Nezinomasis.finish_skaic;
        if( Nezinomasis.finish_skaic>=200) {
            file_in>>Nezinomasis.finish_h>>Nezinomasis.finish_m>>Nezinomasis.finish_s>>Nezinomasis.pirmas_i>>Nezinomasis.pirmas_p>>Nezinomasis.antras_i>>Nezinomasis.antras_p;
        } else {
            file_in>>Nezinomasis.finish_h>>Nezinomasis.finish_m>>Nezinomasis.finish_s>>Nezinomasis.pirmas_i>>Nezinomasis.pirmas_p;
        }

        if (pirmas.start_skaic==Nezinomasis.finish_skaic) {

            pirmas.finish_skaic=Nezinomasis.finish_skaic;
            pirmas.finish_h=Nezinomasis.finish_h;
            pirmas.finish_m=Nezinomasis.finish_m;
            pirmas.finish_s=Nezinomasis.finish_s;
            pirmas.pirmas_i=Nezinomasis.pirmas_i;
            pirmas.pirmas_p=Nezinomasis.pirmas_p;
            if (Nezinomasis.finish_skaic>=200) {
                pirmas.antras_i=Nezinomasis.antras_i;
                pirmas.antras_p=Nezinomasis.antras_p;
            }
        }

        else if (antas.start_skaic==Nezinomasis.finish_skaic) {

            antas.finish_skaic=Nezinomasis.finish_skaic;
            antas.finish_h=Nezinomasis.finish_h;
            antas.finish_m=Nezinomasis.finish_m;
            antas.finish_s=Nezinomasis.finish_s;
            antas.pirmas_i=Nezinomasis.pirmas_i;
            antas.pirmas_p=Nezinomasis.pirmas_p;
            if (Nezinomasis.finish_skaic>=200) {
                antas.antras_i=Nezinomasis.antras_i;
                antas.antras_p=Nezinomasis.antras_p;
            }
        }

        else if (trecias.start_skaic==Nezinomasis.finish_skaic) {

            trecias.finish_skaic=Nezinomasis.finish_skaic;
            trecias.finish_h=Nezinomasis.finish_h;
            trecias.finish_m=Nezinomasis.finish_m;
            trecias.finish_s=Nezinomasis.finish_s;
            trecias.pirmas_i=Nezinomasis.pirmas_i;
            trecias.pirmas_p=Nezinomasis.pirmas_p;
            if (Nezinomasis.finish_skaic>=200) {
                trecias.antras_i=Nezinomasis.antras_i;
                trecias.antras_p=Nezinomasis.antras_p;
            }
        }

        else if (ketivirtas.start_skaic==Nezinomasis.finish_skaic) {

            ketivirtas.finish_skaic=Nezinomasis.finish_skaic;
            ketivirtas.finish_h=Nezinomasis.finish_h;
            ketivirtas.finish_m=Nezinomasis.finish_m;
            ketivirtas.finish_s=Nezinomasis.finish_s;
            ketivirtas.pirmas_i=Nezinomasis.pirmas_i;
            ketivirtas.pirmas_p=Nezinomasis.pirmas_p;
            if (Nezinomasis.finish_skaic>=200) {
                ketivirtas.antras_i=Nezinomasis.antras_i;
                ketivirtas.antras_p=Nezinomasis.antras_p;
            }
        }

        else if (penktas.start_skaic==Nezinomasis.finish_skaic) {

            penktas.finish_skaic=Nezinomasis.finish_skaic;
            penktas.finish_h=Nezinomasis.finish_h;
            penktas.finish_m=Nezinomasis.finish_m;
            penktas.finish_s=Nezinomasis.finish_s;
            penktas.pirmas_i=Nezinomasis.pirmas_i;
            penktas.pirmas_p=Nezinomasis.pirmas_p;
            if (Nezinomasis.finish_skaic>=200) {
                penktas.antras_i=Nezinomasis.antras_i;
                penktas.antras_p=Nezinomasis.antras_p;
            }
        } else if (sestas.start_skaic==Nezinomasis.finish_skaic) {

            sestas.finish_skaic=Nezinomasis.finish_skaic;
            sestas.finish_h=Nezinomasis.finish_h;
            sestas.finish_m=Nezinomasis.finish_m;
            sestas.finish_s=Nezinomasis.finish_s;
            sestas.pirmas_i=Nezinomasis.pirmas_i;
            sestas.pirmas_p=Nezinomasis.pirmas_p;
            if (Nezinomasis.finish_skaic>=200) {
                sestas.antras_i=Nezinomasis.antras_i;
                sestas.antras_p=Nezinomasis.antras_p;
            }
        } else (cout<<Nezinomasis.finish_skaic<<" ");
    }

    /*
    file_in>>antas.finish_skaic>>antas.finish_h>>antas.finish_m>>antas.finish_s>>antas.pirmas_i>>antas.pirmas_p>>antas.antras_i>>antas.antras_p;
    file_in>>trecias.finish_skaic>>trecias.finish_h>>trecias.finish_m>>trecias.finish_s>>trecias.pirmas_i>>trecias.pirmas_p>>trecias.antras_i>>trecias.antras_p;
    file_in>>ketivirtas.finish_skaic>>ketivirtas.finish_h>>ketivirtas.finish_m>>ketivirtas.finish_s>>ketivirtas.pirmas_i>>ketivirtas.pirmas_p>>ketivirtas.antras_i>>ketivirtas.antras_p;
    file_in>>penktas.finish_skaic>>penktas.finish_h>>penktas.finish_m>>penktas.finish_s>>penktas.pirmas_i>>penktas.pirmas_p>>penktas.antras_i>>penktas.antras_p;
    */
    return 0;
}

int BigNumberCrunch(Startas pirmas, Startas antas, Startas trecias, Startas ketivirtas, Startas penktas, Startas sestas, int p1, int p2)
{

    pirmas.laikas_f = ((pirmas.finish_h * 60) + pirmas.finish_m * 60) + pirmas.finish_s;

    pirmas.laikas_s = ((pirmas.start_h * 60) + pirmas.start_m * 60) + pirmas.start_s;

    pirmas.baudos_laikas = (pirmas.pirmas_p - pirmas.pirmas_i) + (pirmas.antras_p - pirmas.antras_i);

    pirmas.taskai = (pirmas.laikas_f - pirmas.laikas_s) + (pirmas.baudos_laikas * 60);

}

int main()
{
    Startas S_pirmas, S_antas, S_trecias, S_ketivirtas, S_penktas, S_sestas, Nezinomasis;

    int p1, p2;

    in1_Work(S_pirmas, S_antas, S_trecias, S_ketivirtas, S_penktas, S_sestas, Nezinomasis, p1, p2);

    BigNumberCrunch(S_pirmas, S_antas, S_trecias, S_ketivirtas, S_penktas, S_sestas, p1, p2);

    //Bug Hunt
    cout << S_pirmas.v;
    cout << ":"<<endl;
    cout << S_sestas.finish_skaic<<endl;

    ofstream file_out("U1rez.txt");

    return 0;
}

