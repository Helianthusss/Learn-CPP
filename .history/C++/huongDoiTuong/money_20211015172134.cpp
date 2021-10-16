#include<iostream>
using namespace std;

class TaiKhoan{
    private:
        float  m_fSoDu = 0;
    public:
        float baoSoDu() {   
                return m_fSoDu; 
        }
        void napTien(float fSoTien) {   
            m_fSoDu += fSoTien;  
        }
        void rutTien(float fSoTien)  {
            if (fSoTien <= m_fSoDu)
                m_fSoDu -= fSoTien;
        }
};
class TaiKhoanTietKiem:public TaiKhoan{
    private:
        int m_fKyhanGui;
        float m_fLaiSuat;
        int m_fSoThangGui;
        int m_fSoTien;
    public:
        void input();
        void napTien2();
        void rutTien2();
        void tangThoiHanGui();
        void soDu();
};
void TaiKhoanTietKiem::input(){
    cout<<"\nKi han gui:";
    cin>>m_fKyhanGui;
    cout<<"\nLai suat: ";
    cin>>m_fLaiSuat;
}
void TaiKhoanTietKiem::napTien2(){
    float soTien;
    cout<<"\nSo tien can nap: ";
    cin>>soTien;
    napTien(soTien);
    m_fSoThangGui=0;
}
void TaiKhoanTietKiem::rutTien2(){
    float fSoTien;
    if(m_fSoThangGui<m_fKyhanGui){
        cout<<"Chua toi ky han!!!"<<endl;
       return;
    }
    cin>>fSoTien;
    rutTien(fSoTien);
}
void TaiKhoanTietKiem::tangThoiHanGui(){
    int thang;
    cin>>thang;
    m_fSoThangGui+=thang;
}
void TaiKhoanTietKiem::soDu(){
    cout<<"\nSo du trong tai khoan la: "<<baoSoDu();
}
int main(){
   TaiKhoanTietKiem t;
    t.napTien2();
    t.input();
    t.soDu();
    cout<<"\nTang tho han gui";
    t.tangThoiHanGui();
    t.rutTien2();
    return 0;
}