#include "busmanager.h"
#include "Bus.h"

void Bus_manager::otoekle(){
	
string otokalkis;   		
string otovaris;    	
int otonumara; 	
string otosaat;
string ototarih;      


cout << "otobus numarasini giriniz:";
cin >> otonumara;

cout << "kalkis saatini giriniz:";
cin >> otosaat;

cout << "otobusun nereden kalkacagýný giriniz:";
cin >> otokalkis;

cout << "otobusun nereye gidecegini giriniz:";
cin >> otovaris;

cout << "otobusun hangi tarihte yola cikacagini giriniz:";
cin >> ototarih;

this->otolar[this->index]=Oto_bilgi( otokalkis,  otovaris,  otonumara,  otosaat, ototarih);
this->index++;

}
void Bus_manager::otoekle(string otokalkis, string otovaris, int otonumara, string otosaat, string ototarih){
	   

this->otolar[this->index]=Oto_bilgi( otokalkis,  otovaris,  otonumara,  otosaat, ototarih);
this->index++;

}
Bus_manager::Bus_manager(){
	this->index=0;
	}

void Bus_manager::otogoster(){
	cout << "        ===============================================================================" << endl;
    cout << "        KALKIS YERI    VARIS YERI    OTOBUS NUMARASI    KALKIS SAATI   KALKIS TARIHI"    << endl;
    cout << "        ===============================================================================" << endl;
	for(int i=0; i<index-8; i++){
		 cout << "\t"<<this->otolar[i].otokalkis << "\t"<<this->otolar[i].otovaris << "\t\t\t"<< this->otolar[i].otonumara << "\t"<<this->otolar[i].otosaat << "\t"<< this->otolar[i].ototarih << endl;
		 
	}
}
