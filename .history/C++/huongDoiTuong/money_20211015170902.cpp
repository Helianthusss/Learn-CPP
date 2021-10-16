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
        void output();
        void napTien2();
        void rutTien2();
        void tangThoiHanGui();
        void soDu();
};
void TaiKhoanTietKiem::input(){
    cout<<"\nNhap so tien can gui: ";
    cin>>m_fSoTien;
    cout<<"\nKi han gui:";
    cin>>m_fKyhanGui;
    cout<<"\nLai suat: ";
    cin>>m_fLaiSuat;
    cout<<"\nSo thang gui: ";
    cin>>m_fSoThangGui;
}
/*void TaiKhoanTietKiem::output(){
    cout<<"\nSo tien: "<<m_fSoTien<<endl<<"Ki han gui:"<<m_fKyhanGui<<endl<<"Lai suat: "<<m_fLaiSuat<<endl<<"So thang gui: "<<m_fSoThangGui<<endl;
}*/
void TaiKhoanTietKiem::napTien2(){
    m_fSoThangGui=0;
    int soTien;
    cout<<"\nSo tien can nap them: ";
    cin>>soTien;
    napTien(soTien);
}
void TaiKhoanTietKiem::rutTien2(){
    float fSoTien;
    int kyhan;
    cin>>kyhan;
    if(kyhan<m_fKyhanGui){
        cout<<"Chua toi ky han!!!"<<endl;
       return;
    }
    cin>>fSoTien;
    rutTien(fSoTien);
}
void TaiKhoanTietKiem::tangThoiHanGui(){
    m_fSoThangGui++;
    int kyhan;
    cin>>kyhan;
    m_fKyhanGui=kyhan;
}
void TaiKhoanTietKiem::soDu(){
    cout<<"\nSo du trong tai khoan la: "<<baoSoDu();
}
int main(){
   TaiKhoanTietKiem t;
   t.input();
   t.napTien2();
   t.soDu();
}