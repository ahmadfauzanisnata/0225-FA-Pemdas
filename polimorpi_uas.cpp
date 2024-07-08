#include <iostream>
using namespace std;

class MasukUniveritas {
    public:
    virtual void rekomendasi() = 0;
    //virtual void pesan(){
        //cout<<"pesan dari seseorang"<<endl;
    //}
};

class SNBT :public MasukUniveritas {
  public:
    void rekomendasi(){
        cout << "1.SNBT" << endl;
    }
};

class SNBP :public MasukUniveritas {
    public:
    void rekomendasi(){
        cout << "2.SNBP" << endl;
    }
};

int main() {
    MasukUniveritas* obyek;
    SNBT a;
    SNBP b;

    obyek = &a;
    obyek->rekomendasi();
    obyek = &b;
    obyek->rekomendasi();
    //a.seseorang::pesan();
    return 0;
    
}