#include <iostream>
#include <windows.h>
#include <time.h>
#include <conio.h>

using namespace std;
string dane1[20];
int rozmiar;
//------------------------------------------------------------------------
void wyswietl_stos()
{
    system("CLS");
    cout<<endl;
    cout<<"----------------"<<endl;
    cout<<"STOSU:"<<endl;
    cout<<"----------------"<<endl;
    
    if (rozmiar==0) cout<<"pusty"<<endl;
    else {
    	for(int i=0; i<=rozmiar;i++){
    		cout<<dane1[i]<<endl;
		}
	}
    cout << "----------------"<<endl<<endl;
}
//dodawanie
void push()
{
	system("CLS");
	cout << "Aby przerwac wcisnij 4" << endl;
	if(rozmiar==0){
		for (int i=0; i<=20; i++)
   	 	{
    	    Sleep(1000);
    	    cout<<dane1[i]<<endl;
    	    rozmiar=rozmiar+1;

    	    if( kbhit() )
    	        if( getch() == '4' )
     	    	{
     	            cout << "Wczytywanie zostalo przerwane" << endl;
      	           break;
     	        }
  	  	}	
	} else {
		for (int i=rozmiar; i<=20; i++)
   	 	{
    	    Sleep(1000);
    	    cout<<dane1[i]<<endl;
    	    rozmiar=rozmiar+1;

    	    if( kbhit() )
    	        if( getch() == '4' )
     	    	{
     	            cout << "Wczytywanie zostalo przerwane" << endl;
      	           break;
     	        }
  	  	}
	}  
}
//rozmiar
void size()
{
   cout<<endl<<"Liczba elementow na stosie: "<<rozmiar;
    Sleep(2000);
}
//main
int main()
{
	//tablica
    dane1[0] = "POWER GOOD";
    dane1[1] = "Uruchamianie kodu z pamieci ROM BIOS-u";
    dane1[2] = "Rozpoczynam testowanie sprzetu";
    dane1[3] = "Test Zintegrowanej karty graficznej";
    dane1[4] = "Test RAM";
    dane1[5] = "Test magistrali PCI Express";
    dane1[6] = "Test karty graficznej";
    dane1[7] = "Test karty sieciowej";
    dane1[8] = "Test karty dzwiekowej";
    dane1[9] = "Wykrywanie urzadzen podpietych przez USB";
    dane1[10] = "Wczytywanie sterownika klawiatury";
    dane1[11] = "Wczytywanie sterownika myszy";
    dane1[12] = "Wyszukiwanie podlaczonych nosnikow danych";
    dane1[13] = "Wczytywanie danych systemu operacyjnego";
    dane1[14] = "Wczytywanie konfiguracji sprzetowej systemu";
    dane1[15] = "Weryfikowanie konfiguracji sprzetowej";
    dane1[16] = "Odtworzenie muzyczki powitalnej systemu";
    dane1[17] = "Generowanie pulpitu uzytkownika";
    dane1[18] = "Wczytywanie danych uzytkownika";
    dane1[19] = "Wyswietlenie komunikatu 'Witaj'";
    int menu;
    rozmiar=0;
    do
    {
        wyswietl_stos();
        cout << "MENU GLOWNE:\n1. Wlacz\n2. Ile elementow sie wczytalo\n3. Koniec programu \nmenu: ";
        cin >> menu;
        switch (menu)
        {
        case 1:
            push();
            break;
        case 2:
            size();
            break;
		case 3:
            exit(0);
        }
    }
    while (true);
    return 0;
}