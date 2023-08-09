#include<iostream>
#include<cmath>
#include"GeometricSequence.h"

using namespace std;

int main(){

    GeometricSequence A, B, C;
    int aob;
    int rob;
    int nob;
    int size;
    int* sequenceArr;
    
//Creating the sequences A, B and C.
    cout << "Informe the values for sequence A: " << endl;
    A.read();
    A.write();
    cout << "Informe the values for sequence B: " << endl;
    B.read();
    B.write();
    cout << "Informe the values for sequence C: " << endl;
    C.read();
    C.write();

//Set D to be a sequence equal to A, but with -r
    A.getCharacteristic(aob, rob, nob, sequenceArr);
    GeometricSequence D(aob, -rob, nob);
    D.write();




    return 0;
}