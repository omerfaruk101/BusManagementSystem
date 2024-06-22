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
	
string soforisim;           //þoförün ismi
string soforsoyad;			//þoförün soyadý
string soforkontrol;        //þoför boþ mu dolu mu kontrolü
string sofordeneyim;		//þoför kaç yýldýr bu meslekte?
int soforyas;               //þoförün yaþý	


public: 

void soforlergoster(Sofor_bilgi obje1[]);
void soforgoster();
Sofor_bilgi (string soforisim, string soforsoyad, int soforyas, string sofordeneyim, string soforkontrol);
Sofor_bilgi ();


};





#endif
