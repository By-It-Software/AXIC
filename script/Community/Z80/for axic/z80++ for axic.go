//Go script for AXIC

//Z80++ For AXIC By Anonik with AXIC Language



//..resources
#include <iostream>
#include <string>
#include <windows.h>
#include "xpoc.cpp"
#include "axic-os.h"
#include "../res/go-axic.go"
#include "main.cpp"

//main
using namespace std;

int script(){
	void script(){
		go.axic(start){
			function:call(incremento, somma, indirizzo, scelta, scelta2, ide);
			function:call(go.createscript);
			function:call(z80.compatibility);
			function:call(z80list());
			function:call(transform);
			console.output("z80++ By Nicholas Impieri Aka Anonik");
			function:call(go.merge(main.cpp);
			function:call(go.merge(main.h);
			go.cpptogo(axic){
			
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
			
			go.setattribute(tag){
				tag_version = ("build-r13378");
				tag_author = ("Nicholas Impieri");
				tag_description = ("Z80-microprocessor-personal-script");
				tag_language = ("cpp");
				tag_os-compatibility = ("Windows 10, __MacOsHighSierra, Linux");
				__script:name = ("Z80++ By Anonik");
			}
			
			go.startscript(__scriptname){
				go.path("../res/script/z80++");
				if go.path == true{
					go.startscript();
				}
				else{
					console.output("No software detected");
				}
			}
		}
	}
}