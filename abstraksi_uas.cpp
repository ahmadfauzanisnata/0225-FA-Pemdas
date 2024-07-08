#include <iostream>
using namespace std;

class MasukUniversitas {
    private: string UangPendaftaran, UangSemesterPertama, UangBangunan, totalBiaya;

    public:

    //method untuk mengisi nilai
    //private member
    void setXY(string a, string b, string c, string d) {
        UangPendaftaran = a;
        UangSemesterPertama = b;
        UangBangunan = c;
        totalBiaya = d;
    }
    //menampilkan nilai
    void display(){
        cout << "UangPendaftaran = " << UangPendaftaran << endl;
        cout << "UangSemesterPertama = " << UangSemesterPertama << endl;
         cout << "UangBangunan = " << UangBangunan << endl;
          cout << "totalBiaya = " << totalBiaya << endl;
    }
};

int main(){
    MasukUniversitas ak;
    ak.setXY("100000", "30000000", "15000000 ", " 9100000 ");
    ak.display();
    return 0;
}