

#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string>
#include <fstream>
#include <cstdint>
//#include <filesystem>

#include "rm_header.h"
using namespace std;












void Sig_class1(string fout1n, unsigned int n) {

    unsigned int l;

    l = n;

    cout << "Count of Sig = " << l << endl ;

    if (l > 10000)  l = 10000;


    unsigned int n1 = count_short(n), l1 = count_short(l),t1,t2,t3,t4, f1,f2,f3;

    unsigned short *Ind = new unsigned short[l*l1];

    matrinput(fout1n, Ind, l, l);

    unsigned int i,j,r1,j1, flag;


    for (j = 0; j < l; j++) {
           // cout << j << " : " << endl;
           flag = 0;

            for (i = j; i < l; i++) {
            r1 = pos_short(j+1);
            j1 = count_short(j+1);
           // cout << r1 << ' ' << j1 << endl;
            if (bit(*(Ind + i*l1 + j1-1), r1)) {

                   // cout << i << ",  ";
                   flag = 1;

                    cout << "(" << i  << ")  ";
            }
            }
            if (flag) cout << endl << endl << endl;
    }

}




void Sig_class2(string fout1n, unsigned int n) {

    unsigned int l;


    l = (n*n-n)/2;

    cout << "Count of Sig = " << l << endl ;

    if (l > 10000)  l = 10000;


    unsigned int n1 = count_short(n), l1 = count_short(l),t1,t2,t3,t4, f1,f2,f3,jj;

    unsigned short *Ind = new unsigned short[l*l1];

    matrinput(fout1n, Ind, l, l);

    unsigned int i,j,r1,j1, flag;

    string fn("Coordinates.txt");
    unsigned short ans_coord;

    ifstream fin;





    for (j = 0; j < l; j++) {
           // cout << j << " : " << endl;
           flag = 0;
           fin.open(fn);
           for (jj = 0; jj <= j; jj++) {
                fin >> t1;
                fin >> t2;
                fin >> t3;

           }
         //  cout << t1 << "  " << t2 << "  " << t3 << endl << endl;
           for (i = j; i < l; i++) {
                r1 = pos_short(j+1);
                j1 = count_short(j+1);
               // cout << r1 << ' ' << j1 << endl;

                if (bit(*(Ind + i*l1 + j1-1), r1)) {

                       cout << i << ":  ";
                       flag = 1;


                       cout << "("  << t2 << "  " << t3  << ")   ";
                }
                fin >> t1;
                fin >> t2;
                fin >> t3;
               // cout << t1 << "  " << t2 << "  " << t3 << endl;
            }
            fin.close();
            if (flag) cout << endl << endl << endl;
    }


}




void Sig_class3(string fout1n, unsigned int n) {

    unsigned int l;


    l = (n/4)*(n/4)*(n/4)*(n/4);


    cout << "Count of Sig = " << l << endl ;

    if (l > 10000)  l = 10000;


    unsigned int n1 = count_short(n), l1 = count_short(l),t1,t2,t3,t4, f1,f2,f3;

    unsigned short *Ind = new unsigned short[l*l1];

    matrinput(fout1n, Ind, l, l);

    unsigned int i,j,r1,j1, flag;




    f1 = (n/4)*(n/4)*(n/4);
    f2 = (n/4)*(n/4);
    f3 = (n/4);

    cout << f1 << "  " << f2 << "  " << f3 << endl;

    for (j = 0; j < l; j++) {
           // cout << j << " : " << endl;
           flag = 0;

            for (i = j; i < l; i++) {
            r1 = pos_short(j+1);
            j1 = count_short(j+1);
           // cout << r1 << ' ' << j1 << endl;
            if (bit(*(Ind + i*l1 + j1-1), r1)) {

                   // cout << i << ",  ";
                   flag = 1;

                    t1 = i / f1;

                    t2 = (i % f1) / f2;

                    t3 = ((i % f1) % f2) / f3 ;

                    t4 = ((i % f1) % f2) % f3 ;

                    cout << "(" << t1 << "  " << t2 + n/4 << "  " << t3 + n/2 << "  " << t4 + 3*n/4 << ")       ";
            }
            }
            if (flag) cout << endl << endl << endl;
    }
}




void Sig_class4(string fout1n, unsigned int n) {


    unsigned int l;


    l = (n/4)*(n/4)*(n/4)*(n/4)/2 - (n/4)*(n/4)*(n/4)/2;


    cout << "Count of Sig = " << l << endl ;

    if (l > 10000)  l = 10000;


    unsigned int n1 = count_short(n), l1 = count_short(l),t0, t1,t2,t3,t4, f1,f2,f3,jj;

    unsigned short *Ind = new unsigned short[l*l1];

    matrinput(fout1n, Ind, l, l);

    unsigned int i,j,r1,j1, flag;

    string fn("Coordinates.txt");
    unsigned short ans_coord;

    ifstream fin;



    for (j = 0; j < l; j++) {
           // cout << j << " : " << endl;
           flag = 0;
           fin.open(fn);
           for (jj = 0; jj <= j; jj++) {
                fin >> t0;
                fin >> t1;
                fin >> t2;
                fin >> t3;
                fin >> t4;

           }
         //  cout << t1 << "  " << t2 << "  " << t3 << endl << endl;
           for (i = j; i < l; i++) {
                r1 = pos_short(j+1);
                j1 = count_short(j+1);
               // cout << r1 << ' ' << j1 << endl;

                if (bit(*(Ind + i*l1 + j1-1), r1)) {

                       cout << i << ":  ";
                       flag = 1;


                       cout << "("  << t1 << "  " << t2 << "  " << t3  << "  " << t4 << ")   ";
                }
                fin >> t0;
                fin >> t1;
                fin >> t2;
                fin >> t3;
                fin >> t4;
               // cout << t1 << "  " << t2 << "  " << t3 << endl;
            }
            fin.close();
            if (flag) cout << endl << endl << endl;
    }
}




void Sig_class5(string fout1n, unsigned int n) {



    unsigned int l;


    l = (n-4)*(n-4)*n*n/1024;


    cout << "Count of Sig = " << l << endl ;

    if (l > 10000)  l = 10000;


    unsigned int n1 = count_short(n), l1 = count_short(l),t0, t1,t2,t3,t4, f1,f2,f3,jj;

    unsigned short *Ind = new unsigned short[l*l1];

    matrinput(fout1n, Ind, l, l);

    unsigned int i,j,r1,j1, flag;

    string fn("Coordinates.txt");
    unsigned short ans_coord;

    ifstream fin;



    for (j = 0; j < l; j++) {
           // cout << j << " : " << endl;
           flag = 0;
           fin.open(fn);
           for (jj = 0; jj <= j; jj++) {
                fin >> t0;
                fin >> t1;
                fin >> t2;
                fin >> t3;
                fin >> t4;

           }
         //  cout << t1 << "  " << t2 << "  " << t3 << endl << endl;
           for (i = j; i < l; i++) {
                r1 = pos_short(j+1);
                j1 = count_short(j+1);
               // cout << r1 << ' ' << j1 << endl;

                if (bit(*(Ind + i*l1 + j1-1), r1)) {

                       cout << i << ":  ";
                       flag = 1;


                       cout << "("  << t1 << "  " << t2 << "  " << t3  << "  " << t4 << ")   ";
                }
                fin >> t0;
                fin >> t1;
                fin >> t2;
                fin >> t3;
                fin >> t4;
               // cout << t1 << "  " << t2 << "  " << t3 << endl;
            }
            fin.close();
            if (flag) cout << endl << endl << endl;
    }
}






int main()
{

    unsigned int n;
    unsigned int k;


    string fout1n("Ind(rr,mm).txt");
    string fout1n_m("Ind(rr,mm)m.txt");


    char p,q;

    unsigned int i,j,t,r,m;
    cout << "r = ";
    cin >> r;
    cout << "m = ";
    cin >> m;

    n = step2(m);
 //   k = dimRM(r,m);
    p = '0'+r/10;
    q = '0'+r%10;
    fout1n[4] =p;
    fout1n[5] =q;
    fout1n_m[4] =p;
    fout1n_m[5] =q;
    p = '0'+m/10;
    q = '0'+m%10;
    fout1n[7] =p;
    fout1n[8] =q;
    fout1n_m[7] =p;
    fout1n_m[8] =q;

    string fn("Parameters_Coord.txt");
    unsigned short ans_coord;

    ifstream fin;

    fin.open(fn);

    fin >> ans_coord;
    fin.close();

    cout << "Equiavalence classes of coordinates, H(r,m):" << endl;

    if (ans_coord == 1) { Sig_class1(fout1n, n); cout << "Equiavalence classes of coordinates, H'(r,m):" << endl; Sig_class1(fout1n_m, n);} else
        if (ans_coord == 2) { Sig_class2(fout1n, n); cout << "Equiavalence classes of coordinates, H'(r,m):" << endl; Sig_class2(fout1n_m, n);}  else
            if (ans_coord == 3) { Sig_class3(fout1n, n); cout << "Equiavalence classes of coordinates, H'(r,m):" << endl; Sig_class3(fout1n_m, n);}  else //p1
                if (ans_coord == 4) { Sig_class4(fout1n, n); cout << "Equiavalence classes of coordinates, H'(r,m):" << endl; Sig_class4(fout1n_m, n);}  else //p2
                    if (ans_coord == 5) { Sig_class5(fout1n, n); cout << "Equiavalence classes of coordinates, H'(r,m):" << endl; Sig_class5(fout1n_m, n);}  else //p3
                    {
                        cout << "Incorrect date of Parameters_Coord" ;
                    }




    return 0;
}

