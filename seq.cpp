// Student: Thiago Ladeira - 001213566 - tc.ladeira@uleth.ca
// Assignment II - Geometric Sequence

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

//Set D to be a sequence equal to A, but with -r.
    A.getCharacteristic(aob, rob, nob, sequenceArr);
    GeometricSequence D(aob, -rob, nob);
    D.write();

//Adding A + B and priting.
    GeometricSequence result1 = A;
    result1.add(B);
    cout << "A + B = ";
    result1.write();

    GeometricSequence result2 = A;
    result2.add(B);
    result2.write();


    return 0;
}