#include <iostream>
using namespace std;
void BoyOrtalama();
int main() {
    BoyOrtalama();
}
void BoyOrtalama() {
    double sum = 0,counter = 0,ortalama,Boylar[10];
    for (int i = 0; i < 10; i++) {
        cout << "Boy giriniz : " << endl;
        cin >> Boylar[i];
    sum = sum + Boylar[i];
    }
    ortalama = sum/10;
     for (int i = 0; i < 10; i++) {
        if(Boylar[i] > ortalama) {
            counter++;
        }
    }
    cout << "Boy ortalamasi : " << ortalama << endl << "Ortalama ustu ogrenci sayisi : " << counter << endl;
}