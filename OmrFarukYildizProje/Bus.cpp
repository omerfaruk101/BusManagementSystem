#include <iostream>
#include "Bus.h"
#include <string>

using namespace std;

/*
void Bus_add::otoekle()
{
	
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
	
	this.otobilgiler[0]=Oto_bilgi( otokalkis,  otovaris,  otonumara,  otosaat, ototarih);
	
cout << "Otobusunuz basariyla eklenmistir";	
	
};

void Bus_add::otoekle(int adet){
	int toplam=0;
	for(int i=1; i<=20; i++){
		if(this.otobilgiler[i].otonumara!=0){
			toplam+=1;
		}
	}
	
		for(int i=toplam; i<toplam+adet; i++){
			cout<<"\n\t\t\tKacinci Otobus? =>" <<i+1 << endl<< endl;
			this.otobilgiler[i+1].otoekle(otobus);
			this.otobilgiler[i+1].otogoster();
			cout<<i;
		}
		toplam=toplam+adet;
	
	
	
}

void Oto_bilgi::otogoster()
{
	cout << "\t"<<otokalkis << "\t"<<otovaris << "\t\t\t"<< otonumara << "\t"<<otosaat << "\t"<< ototarih; 

};




void Bus_add::otolargoster(Bus_add obje[]){
	
	cout << "        ===============================================================================" << endl;
	cout << "        KALKIS YERI    VARIS YERI    OTOBUS NUMARASI    KALKIS SAATI   KALKIS TARIHI"    << endl;
	cout << "        ===============================================================================" << endl;
	
	cout << sizeof(obje) << endl;
	
	for(int i=0; i<20; i++){
		obje[i].otogoster();
		cout << endl;
		
	}
	
}
*/
Oto_bilgi::Oto_bilgi (string otokalkis, string otovaris,  int otonumara, string otosaat, string ototarih){
	
	this->otokalkis=otokalkis;
	this->otovaris=otovaris;
	this->otonumara=otonumara;
	this->otosaat=otosaat;
	this->ototarih=ototarih;
}
Oto_bilgi::Oto_bilgi(){
	
	otokalkis = "";
	otovaris = "";
	otonumara = 0;
	otosaat = "";
	ototarih = "";
	
}

void Sofor_bilgi::soforgoster()
{
	cout << "\t"<<soforisim << "\t"<<soforsoyad << "  \t"<<soforyas << "\t"<<sofordeneyim << "\t"<<soforkontrol; 

};

Sofor_bilgi::Sofor_bilgi (string soforisim, string soforsoyad, int soforyas, string sofordeneyim, string soforkontrol){
	
	this->soforisim=soforisim;
	this->soforsoyad=soforsoyad;
	this->soforyas=soforyas;
	this->sofordeneyim=sofordeneyim;
	this->soforkontrol=soforkontrol;
	
}
Sofor_bilgi::Sofor_bilgi(){
	
	soforisim = "";
	soforsoyad = "";
	soforyas = 0;
	sofordeneyim = "";
	soforkontrol = "";
	
	
}


void Sofor_bilgi::soforlergoster(Sofor_bilgi obje1[]){
	
	cout << "        <<<<<<<<<<<<<<<<<<<<<<<<<<>>>>>>>>>>>>>>>>>>>>>>>>>" << endl;
	cout << "        ISIM      SOYISIM       YAS     DENEYIM      DURUM"  << endl;
	cout << "        <<<<<<<<<<<<<<<<<<<<<<<<<<>>>>>>>>>>>>>>>>>>>>>>>>>" << endl;
	
	for(int i=0; i<10; i++){
		obje1[i].soforgoster();
		cout << endl;

	}
	
}


















