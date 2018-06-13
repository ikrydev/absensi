#include <iostream>

using namespace std;

extern "C" __declspec(dllexport)
void header(string title);

extern "C" __declspec(dllexport)
void tampilan();

extern "C" __declspec(dllexport)
void input_mhs();

extern "C" __declspec(dllexport)
void absen_mhs();

extern "C" __declspec(dllexport)
void baca_mhs();

extern "C" __declspec(dllexport)
void bacaabsen_mhs();

extern "C" __declspec(dllexport)
void cari_mhs();

extern "C" __declspec(dllexport)
void dtmhs();


int main()
{
    tampilan();

    return 0;
}
