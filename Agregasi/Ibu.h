#include<iostream>
#include<vector>
#include "Anak.h"
#include<string>
#ifndef IBU_H
#define IBU_H
using namespace std;


class ibu {
    public:
    string nama;
    vector<anak*> daftar_anak;

        ibu(string pNama): nama(pNama){
            cout << "Ibu \"" << nama << "\" ada\n";
        }

        ~ibu() {
        cout << "Ibu \"" << nama << "\" tidak ada\n";
    }

    void tambahAnak(anak*);
    void cetakAnak();
};
}
   
