#include <iostream>
using namespace std;

class MasukUniversitas {
    private:
     string UangPendaftaran[10];
     public:
     void setUangPendaftaran(int i, string value) {
        UangPendaftaran[i] = value;
     }
     string getUangPendaftaran(int i) {
        return UangPendaftaran[i];
     }
};

int main(){
    MasukUniversitas biayanya;

    biayanya.setUangPendaftaran(0, "uang pendaftaran");
     biayanya.setUangPendaftaran(1, "uang semester pertama");
      biayanya.setUangPendaftaran(2, "uang bangunan");
       biayanya.setUangPendaftaran(3, "total biaya");

       cout << biayanya.getUangPendaftaran(0) << endl;
         cout << biayanya.getUangPendaftaran(1) << endl;
           cout << biayanya.getUangPendaftaran(2) << endl;
             cout << biayanya.getUangPendaftaran(3) << endl;

             return 0;
}