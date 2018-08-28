#include <iostream>
#include <string>
#include <windows.h>
#include "xpoc.cpp"
#include "axic-os.h" //You have this on your AXIC mainboard
#include "../res/go-axic.go"

using namespace std;

int main() {

    int x86system;
    int x64system;
    int osaxic;
    int memory_address;
    int GO;

    string display;
    string mainboard;
    string axic;
    string z80-compatibility;
    string IDE;
    string xpocX86;
    string xpocX64;
    string WIN64AXIC;
    string WIN32AXIC;
    string UNIX32AXIC;
    string UNIX64AXIC;
    string __MACOSAXIC;

    //On Windows
    if (os.type = &IsWindows){
        CALL:(../res/XPOC.cpp);
        cin>>memory_address;
        cout<<"M | M | M | M "<<endl; //display address
        get_data for (memory_address){
            console.report(get_data);
            get_temporary_buffer for (mainboard){
                save_data;
                save_address;
                save_mem_location;
                save_mem_address_location;
                function:CALL(go.createpath:("temp/&storage;%mp,e,f,g,a,f");)
                function:CALL(display);
                data.display == go.createmem;
                GO == xpocX64;
                GO == xpocX86;
                xpocX64,xpocX86(../xpoc.cpp);
                get_mem_address;
                    transform data_mem_address to (WIN64AXIC); //you need axic mainboard to call this function
                    transform data_address to (WIN64AXIC);
                    const_mem_fun_ref_t;
            }
            z80-compatibility(){
                cout<<"COMPATIBILITY LIST . . . "<<endl;
                function:CALL(display);
                function:CALL(console);
                console.output("Z80 MCP WITH LATEST AXIC GO SCRIPT");
                string comp;
                    go.createlist(){
                        &sysversion;
                        &IsWindows10 == true;
                        &IsWindows10NT == true;
                        &IsLinuxUbuntu == true;
                        &IsWindows8 == false;
                        &IsWindows8_Server == true;
                        &IsWindows81 == true;
                        &IsWindows7 == false;
                        &Is__MacOsMojave == true;
                        &Is__MacOsHighSierra == true;
                        &* == false;
                    }

                    if(createlist != list){
                        comp == IDE;
                        IDE(){
                            go.createlist();
                        }
                    }
            }
        }
    }

                axic(){ //By It Software (wRITTED WIth Go For Axic)
                    go.merge("z80-compatibility");
                    go.merge(xpocX64,xpocX32,comp,list);
                    go.merge(mem_address, mem_path, mem_location);
                    go.merge(GO);
                    go.merge.axicOS;
                    go.createscript(){
                        //Create script
                        int convert == function;
                        int transform go.redirect to (mem_path);
                            console.status(display:ON);
                            console.status(read-only:OFF);
                            console.output(report(address));
                            console.output(report(memory_location));
                            go.createmerge(cpp_to_go_axic);
                            function:call(transform== .aligned_storage, .cpp, .go);
                            function:call(go.createfile);
                            go.createfile(){
                                void script (); //your personal script load here
                                go.createfileex == ".go";
                                function:call(transform(file.axic == file.go));
                                go.createtag(){
                                    string author;
                                    string version;
                                    string description;
                                    string language;
                                    string os-compatibility;
                                    go.tag_author: (author);
                                    go.tag_version: (version);
                                    go.tag_description: (description);
                                    go.tag_language: (language);
                                }
                                go.insert(tag){
                                    cout<<"Author Name ... "<<endl;
                                    cout<<endl;
                                    cin>>author;
                                    cout<<endl;
                                    cout<<"Description (max 200ch) "<<endl;
                                    cout<<endl;
                                    cin>>description;
                                    cout<<endl;
                                    cout<<"Version Of Your Script "<<endl;
                                    cout<<endl;
                                    cin>>version;
                                    cout<<endl;
                                    cout<<"Script Language (cpp or Go)"<<endl;
                                    cout<<endl;
                                    cin>>language;
                                    cout<<endl;
                                    cout<<"Os Compatibility or Os Tested"<<endl;
                                    cout<<endl;
                                    cin>>os-compatibility;
                                    cout<<endl;
                                }

                                go.createscript(release){
                                    insert on (script){
                                        display: tag_version;
                                        display: tag_author;
                                        display: description;
                                        display: os-compatibility;
                                        display: language;
                                    }
                                }
                            }
                    }
                        go.createmem(){
                            //Written in AXIC
                            get_mem;
                            get_address;
                            load.mainboard_data;
                            save_mainboard_data (path: ../temp/%data/mem_storage);
                            pause == 0.5s;
                            service.creatememory(){
                                mainboard.input(memory_01);
                                mainboard.input(memory_02);
                                mainboard.input(memory_03);
                                mainboard.input(memory_04);
                            }
                           service.create_address(){
                               console.input(user_input);
                               function:call(service.creatememory);
                               go.createin: (service.creatememory){
                                   insert (__memory_01 + address_01);
                                   insert (__memory_02 + address_02);
                                   insert (__memory_03 + address_03);
                                   insert (__memory_04 + address_04);
                                    go.addresslist(){
                                        address_01 == insert.1;
                                        address_02 == insert.2;
                                        address_03 == insert.3;
                                        address_04 == insert.4;
                                    }
                               }
                           }
                        }
                }
}
