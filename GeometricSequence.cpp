// Student: Thiago Ladeira - 001213566 - tc.ladeira@uleth.ca
// Assignment II - Geometric Sequence


//First thing is to include the libraries and do not forget the headline.
#include <iostream>
#include <cmath>
#include "GeometricSequence.h"
using namespace std;

//created one standard and one with parameters.
GeometricSequence::GeometricSequence(){}

GeometricSequence::GeometricSequence (int ac, int rc, int nc){
    a = ac;
    r = rc;
    n = nc;
    size = nc;
    geoseq = new int [size];
    for (int i = 0; i < n; ++i){
       geoseq[i] = ac * pow(rc,i);

    }
}
//For some reason my destructor is giving me some trouble, so I commemet it out.
// GeometricSequence::~GeometricSequence(){
//     delete[] geoseq;
// }

void GeometricSequence::getCharacteristic(int& aob, int& rob, int& nob, int* userSeq){
    aob = a;
    rob = r;
    nob = n;
    for (int i = 0; i < size; ++i){
    userSeq[i] = geoseq[i];
    }
}

int& GeometricSequence::element(int index){
    assert(index<size && index>=0);
    int& reference = geoseq[index];
    return reference;
}

int& GeometricSequence::element(int index) const{
    assert(index<size && index>=0);
    return geoseq[index];
}

void GeometricSequence::add(GeometricSequence& userObject, int userValue){
    for (int i = 0; i < size; ++i){
        userObject.geoseq[i] = userObject.geoseq[i] + userValue;

    }
}
void GeometricSequence::sub(GeometricSequence& userObject, int userValue){
    for (int i = 0; i < size; ++i){
        userObject.geoseq[i] = userObject.geoseq[i] - userValue;

    }
}
void GeometricSequence::mult(GeometricSequence& userObject, int userValue){
    for (int i = 0; i < size; ++i){
        userObject.geoseq[i] = userObject.geoseq[i] * userValue;

    }
}

void GeometricSequence::read (){
    cout << "Inform the scale factor of the Sequence: " << endl;
    cin >> a;
    cout << "Inform the common ration of the Sequence: " << endl;
    cin >> r;
    cout << "Inform the number of elements in the Sequence: " << endl;
    cin >> n;
    geoseq = new int [n];
    for (int i = 0; i < n; ++i){
        geoseq[i] = a * pow(r,i);
    }
}

void GeometricSequence::write(){
    cout << "The elements of the Sequence are: " << endl;
    for (int i = 0; i < n; ++i){
        cout << geoseq[i] << ", " << endl;
    }
}
