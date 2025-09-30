#include<iostream>
using namespace std;

int main(){
    
    int umur = 25;
    int *p_umur;

    p_umur = &umur;

    cout << "Nilai 'Umur' : " << umur << endl;
    cout << "Alamat Memori 'umur' : " << &umur << endl;
    cout << "Nilai 'p_umur' : " << p_umur << endl;
    cout << "Nilai Yang Diakses 'p_umur' : " << *p_umur << endl;
    cout << "Alamat Memori Dari Pointer 'p_umur' itu sendiri : " << &p_umur << endl;
    return 0;
}