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
    public:
        void input();
        void napTien2(float fSoTien);
        void rutTien2(float fSoTien);
        void tangThoiHanGui();
        void soDu(float fSoTien);
};
void TaiKhoanTietKiem::input(){
    cout<<"\nKi han gui:";
    cin>>m_fKyhanGui;
    cout<<"\nLai suat: ";
    cin>>m_fLaiSuat;
    cout<<"\n So thang gui: ";
    cin>>m_fSoThangGui;
}
void TaiKhoanTietKiem::napTien2(float fSoTien){
    m_fSoThangGui=0;
    baoSoDu()+=fSoTien;
}
void TaiKhoanTietKiem::rutTien2(float fSoTien){
    if(fSoTien <= baoSoDu()){

    }
}