#include<iostream>
using namespace std;

void tampilkanmatriks(int matriks[3][3]){
   for (int i = 0; i < 3; i++) 
    {
        for (int j = 0; j < 3; j++) 
        {
            cout << matriks[i][j] << " ";
        }
        cout << endl;
    }
}

int main(){
    
    int matriksA[3][3] = {
        {3, 4, 5},
        {7, 8, 9},
        {1, 2, 3}};
        
    int matriksB[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};

    int matriksC[3][3] = {0};
    int matriksD[3][3] = {0};
    int matriksE[3][3] = {0};

    //Penjumlahan
    
    for (int i = 0; i < 3; i++) 
        {
            for (int j = 0; j < 3; j++) 
                {
                    matriksC[i][j] = matriksA[i][j] + matriksB[i][j];
                }       
    }
    cout << "Hasil Dari Penjumlahan Matriks A dikurang dengan Matriks B : " << endl;
    tampilkanmatriks(matriksC);
    
    //Pengurangan
    
    for (int i = 0; i < 3; i++) 
        {
            for (int j = 0; j < 3; j++) 
                {
                    matriksD[i][j] = matriksA[i][j] - matriksB[i][j];
            }       
    }
    cout << "Hasil Dari Pengurangan Matriks A dikurang dengan Matriks B : " << endl;
    tampilkanmatriks(matriksD);


    //Perkalian Matriks
    for (int i = 0; i < 3; i++) 
        {
            for (int j = 0; j < 3; j++) 
                {
                    for (int k = 0; k < 3; k++) 
                        {
                            matriksE[i][j] += matriksA[i][k] * matriksB[k][j];
                    }
            }
          
    };
    cout << "Hasil Dari Perkalian Matriks A dikurang dengan Matriks B : " << endl;
    tampilkanmatriks(matriksE);

    
    
    return 0;
}