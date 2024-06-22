#include "Bus.h"
#include <iostream>
#include <string>
#include "busmanager.h"

using namespace std;

int main()
{    int islem;

     Bus_manager buscontroller;
    while(islem!=5){
    
    cout << "\n\n\n\n";
    cout << "\t\t\t\t\t================================================\n";
    cout << "\t\t\t\t\t||         OTOBUS YONETIM PROJESINE           ||\n";
    cout << "\t\t\t\t\t||                                            ||\n";
    cout << "\t\t\t\t\t||                HOSGELDINIZ                 ||\n";
    cout << "\t\t\t\t\t||                                            ||\n";
    cout << "\t\t\t\t\t================================================\n\n\n";
    
    cout << "\t\t\t\t\t===================================" << endl;
    cout << "\t\t\t\t\t1. Otobus Ekle" << endl;
    cout << "\t\t\t\t\t2. Otobusler"   << endl;
    cout << "\t\t\t\t\t3. Soforler"    << endl;
    cout << "\t\t\t\t\t4. Sofor Ekle"  << endl;
    cout << "\t\t\t\t\t5. Cikis"       << endl;
    cout << "\t\t\t\t\t===================================" << endl;
    
  
    cout << "\t\t\t\t\tYapmak istediginiz islemi seciniz:";
    cin >> islem;
    cout << "\n";
	
    
	 buscontroller.otoekle("istanbul","giresun", 17 ,"   03:00"," 24/10/2022");
	 buscontroller.otoekle("istanbul","rize", 25 ,"   00:00"," 24/10/2022");
	 buscontroller.otoekle("istanbul","trabzon", 34 ,"   17:00"," 4/11/2022");
	 buscontroller.otoekle("istanbul","bartin", 98 ,"   18:00"," 6/11/2022");
	 buscontroller.otoekle("istanbul","ordu", 67 ,"   10:00"," 11/11/2022");
	 buscontroller.otoekle("istanbul","samsun", 48 ,"   21:00"," 11/11/2022");
	 buscontroller.otoekle("istanbul","artvin", 55 ,"   21:30"," 13/11/2022");
	 buscontroller.otoekle("istanbul","karabuk", 71 ,"   22:45"," 14/11/2022");
	 
     
    
    
    Sofor_bilgi sofor[15]={Sofor_bilgi("Emre","  YILDIZ", 36 ,"8 YIL","    MESAIDE"),
	Sofor_bilgi ("Mehmet","  GEDIK",39 ,"9 YIL","    MESAIDE"),
	Sofor_bilgi ("Izzet","  MESE", 50 ,"22 YIL","    BOSTA"),
	Sofor_bilgi ("Cemal","  YILMAZ", 41 ,"14 YIL","    MESAIDE"),
	Sofor_bilgi ("Ahmet","  YESIM",45 ,"18 YIL","    IZINDE"),
	Sofor_bilgi ("Erdem","  BALCI", 42 ,"18 YIL","    MESAIDE"),
	Sofor_bilgi ("Mehmet","  BASARAN", 39 ,"11 YIL","    BOSTA"),
	Sofor_bilgi ("Berat","  YILDIZ", 31 ,"4 YIL","    BOSTA"),
	Sofor_bilgi ("Ibrahim","  OZTURK", 45 ,"15 YIL","    IZINDE"),
	Sofor_bilgi ("Mustafa","  ERDINC", 54 ,"28 YIL","    MESAIDE")
	};
    
    
    
    
	
    
    switch(islem)
	{
    	case 1:
    	    system("cls");
    		//oto[0].otoekle(oto,1);
    		buscontroller.otoekle();
    		break;
    		
    	
		case 2:
			system("cls");
		    buscontroller.otogoster();
			break;
			
		
		case 3:
			system("cls");
			sofor[0].soforlergoster(sofor);
			break;
			
			
			
			
		
		
		case 5:
			system("cls");
			cout<<"iyi gunler dileriz...";
			break;
			
			
			
}
			
	}
	
    
    return 0;
}


