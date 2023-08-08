// Student: Thiago Ladeira - 001213566 - tc.ladeira@uleth.ca
// Assignment II - Geometric Sequence


//First thing is to include the libraries and do not forget the headline.
#include <iostream>
#include <cmath>
// #include "GeometricSequence.h"
using namespace std;


//Creating the class here
class GeometricSequence{
public:
    int a;
    int r;
    int n;
    int size;
    int* geoseq;

// public:

GeometricSequence (int ac, int rc, int nc){
    a = ac;
    r = rc;
    n = nc;
    size = nc;
    geoseq = new int [size];
    for (int i = 0; i < n; ++i){
       geoseq[i] = ac * pow(rc,nc);

    }
}

};



int main() {

    GeometricSequence seq (2, 2, 2);

    cout << seq.geoseq[0];


    return 0;
} 