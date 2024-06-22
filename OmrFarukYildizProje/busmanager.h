#include "Bus.h"

class Bus_manager{
	public:
		
		void otoekle();
		void otogoster();
		void otoekle(string otokalkis, string otovaris, int otonumara, string otosaat, string ototarih);
		Bus_manager();
		
	private:
		Oto_bilgi otolar[20];
		int index;
};
