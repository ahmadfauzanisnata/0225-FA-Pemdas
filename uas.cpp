#include <iostream> 
using namespace std; 
class MasukUniversitas { 
private:
int uangPendaftaran; 
    string UangPendaftaran, UangSemesterPertama, UangBangunan, totalBiaya;

 
public: 
    MasukUniversitas() { 
        uangPendaftaran = 0; 
        UangPendaftaran = 100000;
        // isi nilai default variable yang dibutuhkan di bawah ini 
    } 
 
    virtual void namaJalurMasuk() { return; } 
    // isi disini dengan fungsi virtual yang dibutuhkan 
 
    void setUangPendaftaran(int nilai) { 
        this->uangPendaftaran = nilai; 
    } 
 
    float getUangPendaftaran() { 
        return uangPendaftaran; 
    } 
     private:
     string UangPendaftaran[10];
     public:
     void setUangPendaftaran(int i, string value) {
        UangPendaftaran[i] = value;
     }
     string getUangPendaftaran(int i) {
        return UangPendaftaran[i];
     }
 
    // isi setter dan getter variable yang dibutuhkan di bawah ini 
}; 
 
class SNBT : public MasukUniversitas { 
     public:
    void rekomendasi(){
        cout << "1.SNBT" << endl;
    }
    // isi disini untuk melengkapi class SNBT 
}; 
 
class SNBP : public MasukUniversitas { 
     public:
    void rekomendasi(){
        cout << "2.SNBP" << endl;
    }
    // isi disini untuk melengkapi class SNBP 
   
}; 
 
int main() { 
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
    // isi disini untuk fungsi main 
} 