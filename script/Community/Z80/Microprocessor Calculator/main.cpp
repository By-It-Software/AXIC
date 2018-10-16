#include <iostream>
#include <string>



//Z80 LANGUAGE CONVERTER

/*IF (Z80 = TRUE) > !PPORT 2 {
    COUT<<"CONNECTED"<<ENDL;
    PUT PPORT2 == OUTPPORT;
}
*/

using namespace std;

int main()
{


int scelta;
string scelta2;
string help;
int nand1;
int nand2;
int nor1;
int nor2;

int Memx89x00F2AF;
int AF0x00000ABFF;


int next_button;
int prev_button;
int address_button;
int del_button;

//Dichiarazione dei pulsanti

string a_button ="A";
string b_button ="B";
string c_button ="C";
string d_button ="D";
string e_button ="E";
string f_button ="F";
string g_button ="G";

int button_0 = 0;
int button_1 = 1;
int button_2 = 2;
int button_3 = 3;
int button_4 = 4;
int button_5 = 5;

int address1;
int address2;
int address3;
int address4;
int address5;
int address6;
int address7;

cout<<"Z80 IN C++ BY NICHOLAS IMPIERI "<<endl;
cout<<endl;
cout<<"----------------------------------"<<endl;
cout<<endl;
cout<<"Type help to see all comands or Type Run to start"<<endl;
cout<<endl;
cin>>help;
cout<<endl;
if (help=="help"){
    cout<<endl;
    cout<<"-------------------------------------"<<endl;
    cout<<"Z80++ HELP GUIDE BY NICHOLAS IMPIERI"<<endl;
    cout<<"-------------------------------------"<<endl;
    cout<<endl;
    cout<<"* Create Memory Address Type (1) or (2)"<<endl;
    cout<<endl;
    cout<<"* 1 == Create  Unlimited Memory Address"<<endl;
    cout<<endl;
    cout<<"* 2 == Create Only 2 Memory Address (beta Only)"<<endl;
    cout<<endl;
    cout<<"* Type 0 (zero) to close the software"<<endl;
    cout<<endl;
    cout<<"---------------------------------------"<<endl;
    cout<<"                 END                    "<<endl;
    cout<<"---------------------------------------"<<endl;
    cout<<endl;
    goto fine;
}

if (help="Run","run"){
    goto start;
}
start:
cout<<"Quanti indirizzi devi inserire ?"<<endl;
cin>>scelta;

if (scelta==1){
    goto indirizzo_1;
}
else if (scelta==2){
    goto indirizzo_2;
}
else if (scelta>=3){
    goto fine;
}

else if (scelta==0);{
    goto fine;
}


indirizzo_1:
cout<<"Inserisci l'indirizzo di memoria (es: 1800/01)"<<endl;
cin>>address1;
cout<<endl;
cout<<"Vuoi incrementare il valore di "<<address1<<"? (Y o N)"<<endl;
cin>>scelta2;

if(scelta2=="n","N"){
        string valore1;
        cout<<"Inserisci i valori da inserire all'interno di "<<address1<<endl;
        cin>>valore1;
        cout<<endl;
        cout<<"All'interno della memoria "<<address1<<" e' presente il seguente valore: "<<valore1<<endl;
        cout<<endl;

}

if (scelta2=="y","Y"){

int incremento;
int somma;
somma=address1;
(incremento=somma+1);

        cout<<"La tua memoria adesso e' "<<incremento<<endl;
        cout<<endl;
        string valore1;
        cout<<"Inserisci i valori da inserire all'interno di "<<incremento<<endl;
        cin>>valore1;
        cout<<endl;
        cout<<"All'interno della memoria "<<incremento<<" e' presente il seguente valore: "<<valore1<<endl;
        cout<<endl;
        goto start;

}




goto fine;

//Inizio 2 memorie

indirizzo_2:{
cout<<"Inserisci l'indirizzo di memoria (es: 1800/01)"<<endl;
cin>>address1;
cout<<endl;

cout <<"Inserisci l'indirizzo della seconda memoria "<<endl;
cin>>address2;
cout<<endl;

//If della memoria numero 1
cout<<"Vuoi incrementare il valore dellla memoria : "<<address1<<" ? (Y o N)"<<endl;
cin>>scelta2;



if (scelta2="y","Y"){
    int incremento1;
    incremento1=address1+1;
    cout<<"La tua memoria adesso vale: "<<incremento1<<endl;
    cout<<endl;
    string valore1;
    cout<<"Inserisci il valore all'interno di "<<incremento1<<endl;
    cin>>valore1;
    cout<<"All'interno della memoria "<<incremento1<<" hai inserito il valore: "<<valore1<<endl;
    cout<<endl;
    goto scelta_3;


}

else if(scelta2=="n"){
    string valore1;
    int address01;
    address01=address1;
    cout<<"Opzione no"<<endl;
    cout<<"Inserisci il valore all'interno di "<<address01<<endl;
    cin>>valore1;
    cout<<"All'interno della memoria "<<address01<<" hai inserito il valore: "<<valore1<<endl;
    cout<<endl;
}




scelta_3:
// Inizio if della seconda memoria
string scelta3;
cout<<"Vuoi aumentare il valore della memoria: "<<address2<<"? (Y o N)"<<endl;
cin>>scelta3;

if (scelta3=="y","Y"){
    int incremento2;
    incremento2=address2+1;
    cout<<"La tua memoria adesso e': "<<incremento2<<endl;
    cout<<endl;
    string valore2;
    cout<<"Inserisci il valore all'interno di "<<incremento2<<endl;
    cin>>valore2;
    cout<<"All'interno della memoria "<<incremento2<<" hai inserito il valore: "<<valore2;
    cout<<endl;
    cout<<address2<<endl;
}

else if(scelta3=="n","N"){
    int valore2;
    cout<<"Inserisci il valore all'interno di "<<address2<<endl;
    cin>>valore2;
    cout<<endl;
    cout<<"All'interno della memoria "<<address2<<" hai inserito il valore: "<<valore2;
    cout<<endl;
}



}






// Dichiarazione delle allocazioni di memoria


//singature//.AXIC_START


//SIMPLE ADDRESS

/*CONVERTER
if (nand1 == nor1)
{
   syscall z80lang.h
        new.window(gui.exe)
    ARM;
}
*/

//ASSEMBLY DIPEND

/*

FOR ADDR:{
<string ="0.0.0.0": "nand1">,
<string ="0.0.0.0": "nand2">,
}

FOR DATA:
{
<string ="0.0": "nor1">,
<string ="0.0": "nor2">,
}

FOR PACKAGE > OUT{

if (%out !=nand1,!=nand2){
<output var = 0;>
cout<<"0.0.0.0"<<endl;
}

if (%out ==nand1,==nand2){
<output var2 = 1;>
switch (Memx89x00F2AF) {

case(1):
    cout<<nand1;
    cout<<endl;
    break;

case(2):
    cout<<nand2;
    cout<<endl;
    break;

    }
}

FOR ASSEMBLY WITHOUT SOFTWARE :
{
open:
    show(gui.exe) {
        local address = C:/Windows/%LocalData%/Apps/gui.exe
            set (Win user to Admin) // Uso lo script in Javascript per questa funzione
            if ($user kill /gui.exe) {
                break;
                    goto open;
                system("pause");

            }

    }

}


*/



fine:
    cout << "Z80 SCRIPT FOR PERSONAL LANGUAGE" << endl;
    cout<<endl;
    cout<<"Builded for AXIC SCHOOL SYSTEM IT"<<endl;
    system("pause");
    return 0;
}
