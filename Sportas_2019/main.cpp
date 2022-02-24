#include <iostream>
#include <fstream>
#include <string>

#include <bits/stdc++.h>

using namespace std;

struct LendtelePradzia
{
    string Vardas;
    string Pavarde;
    int Nr;
    int PradVal,PradMin,PradSek;

    int FinVal,FinMin,FinSek;
    int KiekPat1,KiekBuvo1,KiekPat2,KiekBuvo2;

    int laikas;
};

int main()
{
    //viska istraukiu pirma eilute

    int ZomnSk;

    ifstream file_in("U1.txt");

    file_in>>ZomnSk;

    //antra eilute

    LendtelePradzia m213,m221,m115,m256,m111,m255;

    string A,B;

    file_in>>m213.Vardas>>A>>m213.Pavarde>>m213.Nr>>m213.PradVal>>m213.PradMin>>m213.PradSek;
    file_in>>m221.Vardas>>m221.Pavarde>>m221.Nr>>m221.PradVal>>m221.PradMin>>m221.PradSek;
    file_in>>m115.Vardas>>m115.Pavarde>>m115.Nr>>m115.PradVal>>m115.PradMin>>m115.PradSek;
    file_in>>m256.Vardas>>m256.Pavarde>>m221.Nr>>m256.PradVal>>m256.PradMin>>m256.PradSek;
    file_in>>m111.Vardas>>m111.Pavarde>>m111.Nr>>m111.PradVal>>m111.PradMin>>m111.PradSek;
    file_in>>m255.Vardas>>B>>m255.Pavarde>>m255.Nr>>m255.PradVal>>m255.PradMin>>m255.PradSek;

    m213.Vardas=m213.Vardas + " " + A;
    m213.Vardas=m255.Vardas + " " + B;

    cout<< m221.Vardas<<" "<<m221.Pavarde<<" "<<m221.Nr<<" "<<m221.PradVal<<" "<<m221.PradMin<<" "<<m221.PradSek;

    //paskutine dalis

    int pabaigusiuSkaicius;

    file_in>> pabaigusiuSkaicius;

    file_in>>m256.Nr>>m256.FinVal>>m256.FinMin>>m256.FinSek>>m256.KiekBuvo1>>m256.KiekPat1>>m256.KiekBuvo2>>m256.KiekPat2;
    file_in>>m213.Nr>>m213.FinVal>>m213.FinMin>>m213.FinSek>>m213.KiekBuvo1>>m213.KiekPat1>>m213.KiekBuvo2>>m213.KiekPat2;
    file_in>>m111.Nr>>m111.FinVal>>m111.FinMin>>m111.FinSek>>m111.KiekBuvo1>>m111.KiekPat1;
    file_in>>m255.Nr>>m255.FinVal>>m255.FinMin>>m255.FinSek>>m255.KiekBuvo1>>m255.KiekPat1>>m255.KiekBuvo2>>m255.KiekPat2;
    file_in>>m115.Nr>>m115.FinVal>>m115.FinMin>>m115.FinSek>>m115.KiekBuvo1>>m115.KiekPat1;

    //Perdirbimas

    int z213,z255,z115,z256,z111;
    /*256*/ z256 = ((((m256.FinVal)*60+m256.FinMin)*60+m256.FinSek) - (((m256.PradVal*60)+m256.PradMin)*60+m256.PradSek)) - ((m256.KiekBuvo1-m256.KiekPat1)*60);
    /*213*/ z213 = ((((m213.FinVal)*60+m213.FinMin)*60+m213.FinSek) - (((m213.PradVal*60)+m213.PradMin)*60+m213.PradSek)) - ((m213.KiekBuvo1-m213.KiekPat1)*60);
    /*115*/ z111 = ((((m111.FinVal)*60+m111.FinMin)*60+m111.FinSek) - (((m111.PradVal*60)+m111.PradMin)*60+m111.PradSek)) - ((m111.KiekBuvo1-m111.KiekPat1)*60);
    /*255*/ z255 = ((((m255.FinVal)*60+m255.FinMin)*60+m255.FinSek) - (((m255.PradVal*60)+m255.PradMin)*60+m255.PradSek)) - ((m255.KiekBuvo1-m255.KiekPat1)*60);
    /*115*/ z115 = ((((m115.FinVal)*60+m115.FinMin)*60+m115.FinSek) - (((m115.PradVal*60)+m115.PradMin)*60+m115.PradSek)) - ((m115.KiekBuvo1-m115.KiekPat1)*60);

    //COUT

    cout<<m221.Vardas<<" "<<m221.Pavarde<<" "<<m221.Nr<<" "<<m221.PradVal<<" "<<m221.PradMin<<" "<<m221.PradSek<<endl;
    cout<<m115.Vardas<<" "<<m115.Pavarde<<" "<<m115.Nr<<" "<<m115.PradVal<<" "<<m115.PradMin<<" "<<m115.PradSek<<endl;
    cout<<m256.Vardas<<" "<<m256.Pavarde<<" "<<m221.Nr<<" "<<m256.PradVal<<" "<<m256.PradMin<<" "<<m256.PradSek<<endl;
    cout<<m111.Vardas<<" "<<m111.Pavarde<<" "<<m111.Nr<<" "<<m111.PradVal<<" "<<m111.PradMin<<" "<<m111.PradSek<<endl;
    cout<<m255.Vardas<<" "<<m255.Pavarde<<" "<<m255.Nr<<" "<<m255.PradVal<<" "<<m255.PradMin<<" "<<m255.PradSek<<endl;

    cout <<endl;

    cout<<pabaigusiuSkaicius<<endl<<endl;

    cout<<m256.Nr<<" "<<m256.FinVal<<" "<<m256.FinMin<<" "<<m256.FinSek<<" "<<m256.KiekBuvo1<<" "<<m256.KiekPat1<<" "<<m256.KiekBuvo2<<" "<<m256.KiekPat2<<endl;
    cout<<m213.Nr<<" "<<m213.FinVal<<" "<<m213.FinMin<<" "<<m213.FinSek<<" "<<m213.KiekBuvo1<<" "<<m213.KiekPat1<<" "<<m213.KiekBuvo2<<" "<<m213.KiekPat2<<endl;
    cout<<m111.Nr<<" "<<m111.FinVal<<" "<<m111.FinMin<<" "<<m111.FinSek<<" "<<m111.KiekBuvo1<<" "<<m111.KiekPat1<<endl;
    cout<<m255.Nr<<" "<<m255.FinVal<<" "<<m255.FinMin<<" "<<m255.FinSek<<" "<<m255.KiekBuvo1<<" "<<m255.KiekPat1<<" "<<m255.KiekBuvo2<<" "<<m255.KiekPat2<<endl;
    cout<<m115.Nr<<" "<<m115.FinVal<<" "<<m115.FinMin<<" "<<m115.FinSek<<" "<<m115.KiekBuvo1<<" "<<m115.KiekPat1<<endl;

    cout <<endl;

    cout <<z256<<" "<<z213<<" "<<z111<<" "<<z255<<" "<<z115<<endl;

    //COUT End

    int laikai[pabaigusiuSkaicius] {z256,z213,z111,z255,z115};

    sort(laikai,laikai+pabaigusiuSkaicius);

    for (int i=0; i<pabaigusiuSkaicius; i++) {
        cout<<laikai[i]<<" ";
    }

    //Fstriem

    ofstream file_out("U1rez.txt");

    for (int i=0; i<pabaigusiuSkaicius; i++) {
        file_out<<laikai[i]<<" ";
    }

    file_out<<endl;

//COUT

    cout<<endl<<endl;

    cout<<"merinos"<<endl;

//COUT end

    for(int i =0; i<10000; i++)
    {
        if(laikai[0]==i)
        {

            m213.laikas=i;
        }

        if(laikai[1]==i)
        {
            m115.laikas=i;
        }

        if(laikai[2]==i)
        {
            m256.laikas=i;
        }

        if(laikai[3]==i)
        {
            m111.laikas=i;
        }

        if(laikai[4]==i)
        {
            m255.laikas=i;
        }
    }

// m213,m115,m256,m111,m255;
        if(m213.Nr<200&&m213.Nr>100) {
            cout<<m213.Nr<<" "<<m213.laikas<<endl;
        }
        cout << endl;

        if(m115.Nr<200&&m115.Nr>100) {
            cout<<m115.Nr<<" "<<m115.laikas<<endl;
        }
        cout << endl;

        if(m256.Nr<200&&m256.Nr>100) {
            cout<<m256.Nr<<" "<<m256.laikas<<endl;
        }
        cout << endl;

        if(m111.Nr<200&&m111.Nr>100) {
            cout<<m111.Nr<<" "<<m111.laikas<<endl;
        }
        cout << endl;

        if(m255.Nr<200&&m255.Nr>100) {
            cout<<m255.Nr<<" "<<m255.laikas<<endl;
        }
        cout << endl;

        //vaikinai

        cout<<"Vaikinai"<<endl<<endl;

        if(m213.Nr>100) {
            cout<<m213.Nr<<" "<<m213.laikas<<endl;
        }
        cout << endl;

        if(m115.Nr>100) {
            cout<<m115.Nr<<" "<<m115.laikas<<endl;
        }
        cout << endl;

        if(m256.Nr>100) {
            cout<<m256.Nr<<" "<<m256.laikas<<endl;
        }
        cout << endl;

        if(m111.Nr>100) {
            cout<<m111.Nr<<" "<<m111.laikas<<endl;
        }
        cout << endl;

        if(m255.Nr>100) {
            cout<<m255.Nr<<" "<<m255.laikas<<endl;
        }
        cout << endl;

    return 0;
}
