#ifndef PHAN_SO
#define PHAN_SO

class PhanSo
{
    private:
        int iTuSo;
        int iMauSo;
         
    private:
        int UCLN(int a, int b);
 
    public:
        PhanSo();
        PhanSo(int iTu, int iMau);
        void Nhap();
        void Xuat();
        void RutGon();
        PhanSo Cong (const PhanSo &b);
        PhanSo Tru (const PhanSo &b);
        PhanSo Nhan (const PhanSo &b);
        PhanSo Chia (const PhanSo &b);
        int SoSanh (const PhanSo &b);
        ~PhanSo();      
};
#endif