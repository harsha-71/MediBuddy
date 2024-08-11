#include <bits/stdc++.h>
#include <iostream>
#include <windows.h>
#include <stdio.h>
#include <string.h>
#include <cstdlib>
#include <ctime>
#include <WinUser.h>

using namespace std;

// function to greet the user according to time
void greetings(){
    // current date  and time based on your system timezone
    time_t now = time(0);
    tm *time = localtime(&now);

    if (time-> tm_hour < 12){
        cout<< "Good Morning..."<<endl;
        string phrase = "Good Morning";
        string command = "espeak \"" + phrase + "\"";
        const char *charCommand = command.c_str();
        system(charCommand);
    }

    else if (time-> tm_hour >= 12 && time->tm_hour <= 16){
        cout<< "Good Afternoon..."<<endl;
        string phrase = "Good Afternoon";
        string command = "espeak \"" + phrase + "\"";
        const char *charCommand = command.c_str();
        system(charCommand);
    }

    else if (time-> tm_hour > 16 && time->tm_hour < 24){
        cout<< "Good Evening..."<<endl;
        string phrase = "Good Evening";
        string command = "espeak \"" + phrase + "\"";
        const char *charCommand = command.c_str();
        system(charCommand);
    }
}

void datetime(){
    time_t now = time(0);
    char *dt = ctime(&now);
    cout<<"The date and time is "<<endl<<dt<<endl;
}

int main()
{
	int v;
	system("Color 0A");
    system("cls");
    cout<<"\t<###################################  PERSONAL HEALTH ASSISSTANT ########################################"<<endl<<endl;

    //string password; //to take password
    string command; // to take command from the user

            greetings();
            do{
                cout<<"\n<**********************************************************************************************>\n";
                cout<<endl<<"How can i help you buddy...."<<endl<<endl;

                string phrase = "How can i help you buddy";
                string command = "espeak \"" + phrase + "\"";
                const char *charCommand = command.c_str();
                system(charCommand);

                cout<<"Ask your doubt ===> ";
                getline(cin,command);
                cout<<endl;
                //cout<<"Answer to your question is ===> ";

                if(command=="hello" || command=="hi")
                {
                    cout<<"Hello..."<<endl;
                    string phrase = "Hello";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                }

                 else if(command=="what is the time")
                {

                    datetime();
                }
                
                else if(command=="Good bye" || command=="Goodbye")
                {
                
                //break;
                cout<<"Good bye!"<<endl;
                    string phrase = "Good bye";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                system("app.exe");
				}


                else if(command=="I have back pain" || command=="who is speaking")
                {
                	
                    cout<<"Following can help you"<<endl;
                    string phrase = "Following can help you";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    /*cout <<"Press V for video";
                    cin >> v;
                	if(v == "V")*/
                    	ShellExecute(NULL, "open", "https://www.youtube.com/watch?v=HjB742eIp4w", NULL, NULL, SW_SHOWNORMAL);
					
                    //ShellExecute(NULL, "open", "https://www.mayoclinic.org/diseases-conditions/back-pain/diagnosis-treatment/drc-20369911", NULL, NULL, SW_SHOWNORMAL);
                }
            
                //-------------------------------------------------------------------------------
                else if(command=="I have fever")
                {
                    cout<<"Following can help you"<<endl;
                    string phrase = "Following can help you";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    ShellExecute(NULL, "open", "https://www.mayoclinic.org/diseases-conditions/fever/diagnosis-treatment/drc-20352764", NULL, NULL, SW_SHOWNORMAL);
                }
                else if(command=="I have stomach ache")
                {
                    cout<<"Following can help you"<<endl;
                    string phrase = "Following can help you";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    ShellExecute(NULL, "open", "https://my.clevelandclinic.org/health/symptoms/4167-abdominal-pain", NULL, NULL, SW_SHOWNORMAL);
                }
				
				else
                {
                    cout<<"Sorry could not understand your command please try again !!!"<<endl;
                    string phrase = "Sorry could not understand your command please try again";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                }
            }while(1);


    return 0;
}
