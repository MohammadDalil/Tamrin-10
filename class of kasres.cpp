#include <iostream>
#include <conio.h>
using namespace std;

class kasr
{
public:
    int surat, makhraj;

    kasr(int s, int m)
    {
        cout << "Enter Surat : ";
        cin >> s;
        surat = s;
        cout << "Enter Makhraj : ";
        cin >> m;
        makhraj = m;
    }
    void show(string name);
    void sum(kasr kasr_digar);
    void mul(kasr kasr_digar);
    void sub(kasr kasr_digar);
    void div(kasr kasr_digar);


};

//kasr::kasr()
//{
//}

//kasr::~kasr()
//{
//}

void kasr::show(string name)
{
    if (makhraj == 1)
        cout << name << ":" << surat << endl;
    else if (makhraj != 0)
        cout << name << ":" << surat << '/' << makhraj << endl;
    else
        cout << "ERROR / 0";
}

void kasr::sum(kasr kasr_digar)
{
    int s = surat, m = makhraj, ks = kasr_digar.surat, km = kasr_digar.makhraj;
    if (makhraj == kasr_digar.surat)
    {
        surat = surat + kasr_digar.surat;
        cout << surat << "/" << makhraj;
    }
    else if (makhraj != kasr_digar.makhraj)
    {
        kasr_digar.surat = kasr_digar.surat * makhraj;
        makhraj = makhraj * kasr_digar.makhraj;
        surat = surat * kasr_digar.makhraj;
        kasr_digar.makhraj = makhraj * kasr_digar.makhraj;
        surat = surat + kasr_digar.surat;
        cout << surat << "/" << makhraj;
    }
    surat = s;
    makhraj = m;
    kasr_digar.surat = ks;
    kasr_digar.makhraj = km;
}

void kasr::mul(kasr kasr_digar)
{
    int s = surat, m = makhraj, ks = kasr_digar.surat, km = kasr_digar.makhraj;
    makhraj *= kasr_digar.makhraj;
    surat *= kasr_digar.surat;
    cout << surat << "/" << makhraj;
    surat = s;
    makhraj = m;
    kasr_digar.surat = ks;
    kasr_digar.makhraj = km;
}
void kasr::sub(kasr kasr_digar)
{
    int s = surat, m = makhraj, ks = kasr_digar.surat, km = kasr_digar.makhraj;
    if (makhraj == kasr_digar.makhraj)
    {
        surat = surat - kasr_digar.surat;
        cout << surat << "/" << makhraj;
    }
    else if (makhraj != kasr_digar.makhraj)
    {
        kasr_digar.surat = kasr_digar.surat * makhraj;
        makhraj = makhraj * kasr_digar.makhraj;
        surat = surat * kasr_digar.makhraj;
        kasr_digar.makhraj = makhraj * kasr_digar.makhraj;
        surat = surat - kasr_digar.surat;
        cout << surat << "/" << makhraj;
    }
    surat = s;
    makhraj = m;
    kasr_digar.surat = ks;
    kasr_digar.makhraj = km;
}
void kasr::div(kasr kasr_digar)
{
    int s = surat, m = makhraj, ks = kasr_digar.surat, km = kasr_digar.makhraj;
    surat *= kasr_digar.makhraj;
    makhraj *= kasr_digar.surat;
    cout << surat << "/" << makhraj;
    surat = s;
    makhraj = m;
    kasr_digar.surat = ks;
    kasr_digar.makhraj = km;
}

int main()
{
    cout << "kasr 1:\n";
    kasr kasr1(0, 1);
    cout << "kasr 2:\n";
    kasr kasr2(0, 2);
    string name1 = "kasr1";
    kasr1.show(name1);
    string name2 = "kasr2";
    kasr2.show(name2);

    kasr1.sum(kasr2);
    cout << "\t";
    kasr1.mul(kasr2);
    cout << "\t";
    kasr1.sub(kasr2);
    cout << "\t";
    kasr1.div(kasr2);
    cout << "\t";
    return 0;

}