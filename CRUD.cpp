#include <iostream>
using namespace std;


int main(int argc, char** argv) {
	
	int v[100];
	int n=0;
	int o;
	do{
		//visualizzazione voci
		cout<<"1 - inserimento";
		//altre voci
		cout<<"scegli l'opzione";
		cin>>o;
		switch(o){
			1://operazione 1
			    
				add(v,n);
				break;
				
			2://operazione 2
				break;	
				
		}
		
	}while(o!=0); 
	
	
	

	
	
	return 0;
}