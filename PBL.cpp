
// PBL NHOM 4
#include <iostream>
#include <string>
#include <stdio.h>
#include <iomanip>
#include <fstream>
#include <cstring>
using namespace std;
class MonAn{
   private:
       int LuaChon;
       int SoLuong;
       int Ban;
       string TenMon;
       int HeSo;
       int ThanhTien;

   public:
   	// Ham khoi tao
   	MonAn(){
   		this->LuaChon=LuaChon;
   		this->SoLuong=SoLuong;
   		this->Ban=Ban;
   		this->TenMon=TenMon;
   		this->HeSo=HeSo;
   		this->ThanhTien=ThanhTien;
	   }
       int TinhTien(){
           ThanhTien=HeSo*SoLuong;
           return ThanhTien;
       }
   void Menu(){
     cout<<"\n\n\t\t   ========== MENU ======== "<<endl;
     cout<<"\n  ===== FOOD =====                        ===== DRINK ====== "<<endl;
     cout<<"\n 1. Bun bo hue        15.000 VND      6. Nuoc loc     7.000 VND";
     cout<<"\n 2. Bun cha ca        15.000 VND      7. Pepsi        10.000 VND";
     cout<<"\n 3. My quang          15.000 VND      8. Sting        10.000 VND";
     cout<<"\n 4. Chao long         12.000 VND      9. Cocacola     10.000 VND ";
     cout<<"\n 5. Banh mi           10.000 VND      10. Tra sua     15.0000 VND ";
    }
    void Setup(MonAn &f){

       cout<<"\n\t\t ======= MOI CHON BAN ======= "<<endl;
       cout <<"\n Ban :";
       cin>>Ban;
       Menu();
       int dieukien=1;
       ofstream ofs("text0.txt");

       while(dieukien!=0){
       cout<<"\n\t\t  ======= MOI CHON MON ======= "<<endl;
       cout <<"\n Chon so cua tung mon an :";
       cin>>LuaChon;

       if(LuaChon==1)
       {   
	   cout<<"\n\n Nhap so luong mon : ";
       cin>>SoLuong;
         TenMon=" Bun bo hue ";
         HeSo=15;
         ofs<<TenMon<<"\n"<<SoLuong<<"\n"<<TinhTien();
        ofs<<endl;
       }
	   else if(LuaChon==2)
       {
	     cout<<"\n\n Nhap so luong mon : ";
         cin>>SoLuong;
           TenMon=" Bun cha ca ";
           HeSo=15;
           ofs<<TenMon<<"\n"<<SoLuong<<"\n"<<TinhTien();
         ofs<<endl;
       } 
	   else if(LuaChon==3)
       {
	       cout<<"\n\n Nhap so luong mon : ";
       cin>>SoLuong;
           TenMon=" My quang ";
           HeSo=15;
           ofs<<TenMon<<"\n"<<SoLuong<<"\n"<<TinhTien();
         ofs<<endl;
       }
	   else if(LuaChon==4)
       { 
	      cout<<"\n\n Nhap so luong mon : ";
       cin>>SoLuong;
           TenMon=" Chao long ";
           HeSo=12;
          ofs<<TenMon<<"\n"<<SoLuong<<"\n"<<TinhTien();
         ofs<<endl;
       }
	   else if(LuaChon==5)
       {
	       cout<<"\n\n Nhap so luong mon : ";
       cin>>SoLuong;
           TenMon=" Banh mi ";
           HeSo=10;
           ofs<<TenMon<<"\n"<<SoLuong<<"\n"<<TinhTien();
         ofs<<endl;
       }
	   else if(LuaChon==6)
       { 
	      cout<<"\n\n Nhap so luong mon : ";
       cin>>SoLuong;
           TenMon=" Nuoc loc ";
           HeSo=7;
           ofs<<TenMon<<"\n"<<SoLuong<<"\n"<<TinhTien();
         ofs<<endl;

       }
	   else if(LuaChon==7)
       {   
	    cout<<"\n\n Nhap so luong mon : ";
       cin>>SoLuong;
           TenMon=" Pepsi";
           HeSo=10;
           ofs<<TenMon<<"\n"<<SoLuong<<"\n"<<TinhTien();
         ofs<<endl;

       }
	   else if(LuaChon==8)
       {
	       cout<<"\n\n Nhap so luong mon : ";
       cin>>SoLuong;
           TenMon=" Sting ";
           HeSo=10;
           ofs<<TenMon<<"\n"<<SoLuong<<"\n"<<TinhTien();
         ofs<<endl;

       }
	   else if(LuaChon==9)
       {    
	   cout<<"\n\n Nhap so luong mon : ";
       cin>>SoLuong;
           TenMon=" Cocacola ";
           HeSo=10;
           ofs<<TenMon<<"\n"<<SoLuong<<"\n"<<TinhTien();
         ofs<<endl;
       }
       else if(LuaChon==10){
       	cout <<"\n\n Nhap so luong mon : ";
       	cin >>SoLuong;
       	TenMon=" Tra sua ";
       	HeSo=15;
       	ofs<<TenMon<<"\n"<<SoLuong<<"\n"<<TinhTien();
       	ofs<<endl;
       	}
       cout<<"\n Nhap lua chon ";
       cout<<"\n 0.Thoat";
       cout<<"\n 1.Chon them mon";
       cout <<"\n Lua chon :";
       cin>>dieukien;
       }
       ofs.close();
    }
    void HoaDon(MonAn f){
        cout<<"\n\t\t  ======= HOA DON THANH TOAN ======="<<endl;
        cout<<" Ban so :"<<Ban<<endl;
      ifstream ifs;
      string Ten[100];
      int sl[100];
      int ttoan[100];
      int i=0;
      int dem=0;
      float TongTien=0;
      ifs.open("text0.txt" );
      while(ifs.good()){
        ifs.ignore();
        getline(ifs,TenMon);
        ifs>>SoLuong;
        ifs>>ThanhTien;
        ifs.ignore();
        Ten[i]=TenMon;
        sl[i]=SoLuong;
        ttoan[i]=ThanhTien;
        dem++;
        i++;
      }
      for(int i=0; i<dem-1; i++){
        cout<<"\n "<<Ten[i]<<setw(10)<<sl[i]<<setw(10)<<ttoan[i]<<".000 VND \n ";
        TongTien+=ttoan[i];
      }
      cout<<"\n\t -------------------------------------\n";
      cout<<"\nTong tien  \t\t\t : "<<TongTien<<".000 VND\n";
         ifs.close();
    }
};
class NhanVien{
   private:
     char TenNv[100],GioiTinh[100],DiaChi[100],SoDT[100];
     int Tuoi,CaLam;
   public:
     friend istream & operator >> (istream & is, NhanVien & nv){
         cout<<"\n\t\t ======= NHAP THONG TIN NHAN VIEN ======= "<<endl;
         cout<<"\n Nhap ten nhan vien : ";
         fflush(stdin);
         cin.getline(nv.TenNv, 100);
         cout<<"\n Nhap tuoi nhan vien : ";
         cin>>nv.Tuoi;
         cout<<"\n Nhap gioi tinh nhan vien : ";
         fflush(stdin);
         cin.getline(nv.GioiTinh, 100);
         cout<<"\n Nhap so dien thoai nhan vien : ";
         fflush(stdin);
         cin.getline(nv.SoDT,100);
         cout<<"\n Nhap dia chi nhan vien : ";
         fflush(stdin);
         cin.getline(nv.DiaChi,100);
         cout <<"\n\t ==== THONG TIN CA LAM VIEC ====\t\n";
         cout<<" \n 1. Thong tin ca lam : Ca 1: 7h-12h \n";
         cout <<"\n 2. Thong tin ca lam : Ca 2: 13h-18h \n";
         cout <<"\n 3.Thong tin ca lam : Ca 3: 18h-22h \n";
         cout<<"\n  Nhap ca lam cua nhan vien : ";
         cin>>nv.CaLam;
         return is;
     }
     friend ostream & operator << (ostream & os , NhanVien & nv){
        cout<<"\n\t\t ======= THONG TIN NHAN VIEN ========="<<endl;
        cout<<"\n Ho va ten : "<<nv.TenNv;
        cout<<"\n Tuoi : "<<nv.Tuoi;
        cout<<"\n Gioi tinh : "<<nv.GioiTinh;
        cout<<"\n So dien thoai : "<<nv.SoDT;
        cout<<"\n Dia chi : "<<nv.DiaChi;
        if(nv.CaLam==1){
            cout<<"\n Ca lam la ca 1: 7h -12h"<<endl;
        }
		else if(nv.CaLam==2){
              cout<<"\n Ca lam la ca 2: 13h-18h"<<endl;
        }
        else if(nv.CaLam==3){
        	cout <<"\n Ca lam la ca 3 : 18h-22h "<<endl;
        	}
     }

     void NhapdanhsachNhanVien(NhanVien ds[], int &n){
         for(int i=0; i<n ;i++){
            cin>>ds[i];
         }
     }
     void XuatdanhsachNhanVien(NhanVien ds[], int &n){
        for(int i=0; i<n;i++){
            cout<<ds[i];
        }
     }
     void NhapthemNhanVien(NhanVien ds[], int &n, int &socannhap){
         int k=n;
         n=n+socannhap;
          for(int i=k ;i<n;i++){

            cin>>ds[i];

          }

     }
     void XoaNhanVien(NhanVien ds[], int &n){
         char ten[100];
         int t;
         char GT[100];
         cout<<"\n Nhap ten nhan vien can xoa : ";
         fflush(stdin);
         cin.getline(ten, 100);
         cout<<"\n Nhap gioi tinh nhan vien can xoa :";
		 fflush(stdin);
		 cin.getline(GT,100); 
         cout<<"\n Nhap tuoi nhan vien can xoa : ";
         cin>>t;
         int vitrixoa;
         for(int i=0;i<vitrixoa;i++){
            if(ds[i].TenNv==ten && ds[i].GioiTinh==GT && ds[i].Tuoi==t){
               vitrixoa=i;
            }
         }
         for(int i=0; i<n ;i++){
            ds[i]=ds[i+1];
         }
         n--;
     }
     float luongnhanvien(){
    float salary=0;
     float luong1thang=0;
    int ca1=5;
    int ca2=5;
    int ca3=4;
    int tien1gio=30;
     	if(CaLam==1){
     	salary=ca1*tien1gio;
     	}
     	else if(CaLam==2){
     		salary=ca2*tien1gio;
     		}
     	else{
     		salary=ca3*tien1gio;
		 }
		 return salary;
	 	}   
     	void nhapnhanvienthanhtoan(){
     		cout <<"\n\t\t ======= NHAP THONG TIN NHAN VIEN THANH TOAN ======="<<endl;
     		cout <<"\n Nhap ca can thanh toan :";
     		cin >>CaLam;
     		cout <<"\n Ten nhan vien thanh toan :";
     	    fflush(stdin);
     	    cin.getline(TenNv,100);
     		cout <<"\n Gioi tinh nhan vien thanh toan :";
     		fflush(stdin);
     		cin.getline(GioiTinh,100);
		 }
			void xemnhanvienthanhtoan(){
				cout <<"\n\t\t======= XEM THONG TIN THANH TOAN 1 CA ======="<<endl;
				cout <<"\n Ca :"<<CaLam<<endl;
			   cout <<"\n Ten nhan vien :"<<TenNv<<endl;
				cout <<"\n Gioi tinh nhan vien :"<<GioiTinh<<endl;
			  if(CaLam==1){
				cout <<"\n Tien luong ca 1 :"<<luongnhanvien()<<".000 VND"<<endl;
				}
				else if(CaLam==2){
				cout <<"\n Tien ca 2 :"<<luongnhanvien()<<".000 VND"<<endl;
				}
				else{
				cout <<"\n Tien ca 3 :"<<luongnhanvien()<<".000 VND"<<endl;
				}
			}
};


int main()

{      MonAn x;
       NhanVien nv[100],nv1;
       int choose,n;
       int sonvm;
       char TK[100];
       char MK[100];
       cout<<"\n\t\t ======= DANG NHAP DE HE THONG KHOI DONG ======="<<endl;
       cout<<"\n Tai khoan :";
	    cin.getline(TK, 100);
       cout<<"\n Mat khau : ";
	    cin.getline(MK, 100);
       //TK : Quanliquanan
       //MK: PBLNhom4K20
       while(strcmp("Quanliquanan",TK)!=0 || strcmp("PBLNhom4K20",MK)!=0){
        cout<<"\nTen dang nhap hoac mat khau sai\n";
        cout<<"\n\t\t======= Vui long dang nhap lai ======= ";
       cout<<"\n Tai khoan :"; 
	   cin.getline(TK, 100);
       cout<<"\n Mat khau : "; 
	   cin.getline(MK, 100);
       }
       if(strcmp(TK,"Quanliquanan")==0 && strcmp(MK,"PBLNhom4K20")==0 ){
       do{
    cout<<"\n\t\t ======= LUA CHON ======="<<endl;
    cout<<"1. Goi mon an \n";
    cout<<"2. Thanh toan \n";
    cout<<"3. Nhap thong tin nhan vien \n";
    cout<<"4. Xem thong tin nhan vien \n";
    cout<<"5. Thay doi thong tin nhan vien (Chuc nang nay cua Quan li) \n";
    cout <<"6. Nhap thong tin nhan vien thanh toan \n";
    cout <<"7. Xem thong tin thanh toan \n";
    cout<<"0. Thoat  \n";
    cout <<"\n\n Vui long chon chuc nang :";
     cin>>choose;
     switch(choose){
     	case 0: break;
     	case 1:
		 {
     		x.Setup(x);
			break;
		 }
		 case 2:
		 	{
		 	    x.HoaDon(x);
		 		break;
			 }
		case 3:
		{

		    cout<<"\n Nhap so nhan vien can dien thong tin : ";
		    cin>>n;
		    nv1.NhapdanhsachNhanVien(nv,n);
			break;
		}
		case 4:
		{
			nv1.XuatdanhsachNhanVien(nv,n);
			break;
		}
		case 5:
		    {  int x;
		       char matkhau[100];
		       cout<<"\n Nhap mat khau de thay doi nhan vien : ";
		       fflush(stdin);
		       cin.getline(matkhau, 100);
		       //Mat khau la: PBLNhom4K20
		       if(strcmp(matkhau,"PBLNhom4K20")==0)
			   // MK: PBLNhom4K20
			   {
                cout<<"\n\t-------------------------\n";
		        cout<<"1.Them nhan vien moi\n";
		        cout<<"2.Xoa nhan vien \n";
		        cout<<"Nhap lua chon cua ban : ";
		        cin>>x;
		        if(x==1){
                    cout<<"\n Nhap so nhan vien moi : ";
                    cin>>sonvm;
                    nv1.NhapthemNhanVien(nv,n,sonvm);
		        }else if(x==2){
		           nv1.XoaNhanVien(nv,n);
		        }
		       }
		 break;
		}
		case 6:
			{ 	
				nv1.nhapnhanvienthanhtoan();
				break;
			}
		case 7:
				nv1.xemnhanvienthanhtoan();
	     	break;		
	 }

       }
       while(choose!=0);
       }
    return 0;
}
