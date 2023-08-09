// Student: Thiago Ladeira - 001213566 - tc.ladeira@uleth.ca
// Assignment II - Geometric Sequence


//First thing is to include the libraries and do not forget the headline.
#include <iostream>
#include <cmath>
// #include "GeometricSequence.h"
using namespace std;


//Creating the class here
class GeometricSequence{
private:
    int a;
    int r;
    int n;
    int size;
    int* geoseq;

public:

GeometricSequence (int ac, int rc, int nc){
    a = ac;
    r = rc;
    n = nc;
    size = nc;
    geoseq = new int [size];
    for (int i = 0; i < n; ++i){
       geoseq[i] = ac * pow(rc,i);

    }
}

void getCharacteristic(int& aob, int& rob, int& nob, int* userSeq){
    aob = a;
    rob = r;
    nob = n;
    for (int i = 0; i < size; ++i){
    userSeq[i] = geoseq[i];
    }
}

int& element(int index){
    assert(index<size && index>=0);
    int& reference = geoseq[index];
    return reference;
}

int& element(int index) const{
    assert(index<size && index>=0);
    return geoseq[index];
}

void add(GeometricSequence& userObject, int userValue){
    for (int i = 0; i < size; ++i){
        userObject.geoseq[i] = userObject.geoseq[i] + userValue;

    }
}
void sub(GeometricSequence& userObject, int userValue){
    for (int i = 0; i < size; ++i){
        userObject.geoseq[i] = userObject.geoseq[i] - userValue;

    }
}
void mult(GeometricSequence& userObject, int userValue){
    for (int i = 0; i < size; ++i){
        userObject.geoseq[i] = userObject.geoseq[i] * userValue;

    }
}
void read (){
    cout << "Inform the scale factor of the Sequence: " << endl;
    cin >> a;
    cout << "Inform the common ration of the Sequence: " << endl;
    cin >> r;
    cout << "Inform the number of elements in the Sequence: " << endl;
    cin >> n;
}
void write(){

}

};



int main() {
     
     int a;
     int b;
     int c;
     int index;
     int* userSeq = new int [index];

    GeometricSequence seq (21, 2, 4);
    seq.add(seq, 2);
    seq.getCharacteristic(a, b, c, userSeq);
    cout << "Value of index 0 is: " << userSeq[1];
    



    return 0;
} 