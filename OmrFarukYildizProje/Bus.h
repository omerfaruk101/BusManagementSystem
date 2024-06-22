#ifndef Bus_H_
#define Bus_H_
#include <string>
#include <iostream>
using namespace std;

class Oto_bilgi
{

public:

string otokalkis;   		
string otovaris;    	
int otonumara; 	
string otosaat;
string ototarih;            	
     	   


Oto_bilgi (string otokalkis, string otovaris, int otonumara, string otosaat, string ototarih);
Oto_bilgi ();
void otogoster(); 

};



class Sofor_bilgi
{
	
string soforisim;           //�of�r�n ismi
string soforsoyad;			//�of�r�n soyad�
string soforkontrol;        //�of�r bo� mu dolu mu kontrol�
string sofordeneyim;		//�of�r ka� y�ld�r bu meslekte?
int soforyas;               //�of�r�n ya��	


public: 

void soforlergoster(Sofor_bilgi obje1[]);
void soforgoster();
Sofor_bilgi (string soforisim, string soforsoyad, int soforyas, string sofordeneyim, string soforkontrol);
Sofor_bilgi ();


};





#endif
