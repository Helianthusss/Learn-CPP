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
        PhanSo Cong (const PhanSo &);
        PhanSo Tru (const PhanSo &);
        PhanSo Nhan (const PhanSo &);
        PhanSo Chia (const PhanSo &);
        int SoSanh (const PhanSo &);
        ~PhanSo();      
};
#endif