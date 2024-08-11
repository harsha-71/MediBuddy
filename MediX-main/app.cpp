#include <bits/stdc++.h>
#include <iostream>
#include <windows.h>
#include <stdio.h>
#include <string.h>
#include <cstdlib>
#include <WinUser.h>


using namespace std;

void alter()
{
string name1,m;
a:
cout <<"\nENTER THE NAME OF MEDICINE IN SMALL CASE LIKE abc >> \n";
cout <<"\n*crocin,aspirin,zeintac etc.*\n";
cout <<"\n--TYPE (exit) for EXIT--\n";
cout <<"\n";
cin >> name1;

//CROCIN
if(name1 == "crocin")
{
cout <<"\n>CROCIN PAIN RELIEF TABLETS CAN BE USED FOR:\n";
cout <<"\nHEADACHE\nMIGRAINE\nTOOTHACHE\nMUSCULOSKELETAL PAIN\n";
cout <<"\n>EACH TABLET CONTAINS:\n";
cout <<"\nPARACETAMOL IP : 650MG\nCAFFEINE ANHYDROUS IP : 50 MG\n";
cout <<"\n>ALTERNATIVES:\n";
//https://www.1mg.com/drugs-substitutes/crocin-pain-relief-tablet-323789
cout <<"\nPACIMOL ACTIVE TABLET\nNOVALGIN NU TABLET\nDICLOWIN PLUS PR TABLET\nVELMOL ACTIVE 50MG/650MG TABLET\nMETACIN EXS TABLET\n";
cout <<"\n>TYPE M FOR MORE INFO OR ELSE PRESS ANY BUTTON\n";
cout <<"\n";
cin >> m;
if(m=="M")
{
ShellExecute(NULL, "open", "https://www.1mg.com/drugs-substitutes/crocin-pain-relief-tablet-323789", NULL, NULL, SW_SHOWNORMAL);
//------
goto a;
}
else{goto a;
}
if(name1=="exit")
{
system("app.exe");	
}
}

//ASPIRIN
else if(name1 == "aspirin")
{
cout <<"\n>ASPIRIN TABLETS CAN BE USED FOR:";
cout <<"\nTO PREVENT BLOOD CLOTS\nTHEY REDUCES THE RISK OF STROKE AND HEART ATTACK\nMUSCLE PAIN\nTOOTHACHE\nMENSTRUAL PAIN\n";
cout <<"\n>EACH TABLET CONTAINS:";
cout <<"\nASPIRIN 325 MG\nASPIRIN (ACETYSALICYLIC ACID) 325 MG (5GR.)\n";
cout <<"\n>ALTERNATIVES:\n";
//https://dailymed.nlm.nih.gov/dailymed/fda/fdaDrugXsl.cfm?setid=01cdc525-f51f-4779-9e3b-01a35dd3bcac&type=display
cout <<"\nTYLENOL\nTRAMADOL\nGABAPENTIN\n";
cout <<"\n>TYPE M FOR MORE INFO OR ELSE PRESS ANY BUTTON\n";
//link
cout <<"\n";
cin >> m;
if(m=="M")
{
ShellExecute(NULL, "open", "https://dailymed.nlm.nih.gov/dailymed/fda/fdaDrugXsl.cfm?setid=01cdc525-f51f-4779-9e3b-01a35dd3bcac&type=display", NULL, NULL, SW_SHOWNORMAL);
//------
goto a;
}
else{goto a;
}

if(name1=="exit")
{
system("app.exe");	
}
}


//Zientac
else if(name1 == "zeintac")
{
cout <<"\n>ZIENTAC TABLETS CAN BE USED FOR:";
cout <<"\nTREATMENT OF GASTROESOPHAGEAL REFLUX DISEASE (ACID REFLUX)\nTREATMENT OF PEPTIC ULCER DISEASE\n";
cout <<"\n>EACH TABLET CONTAINS:";
cout <<"\nRANITIDINE\nHYPROMELLOSE\nMAGNESIUM STEARATE\n";
cout <<"\n>ALTERNATIVES:";
cout <<"\nACILOC 150 TABLET\nRANTAC 150 TABLET\nMONORIN 150 TABLET\n";
cout <<"\n>TYPE MFOR MORE INFO OR ELSE PRESS ANY BUTTON\n";
//link
cout <<"\n";
cin >> m;
if(m=="M")
{
ShellExecute(NULL, "open", "https://www.1mg.com/drugs-substitutes/zinetac-150mg-tablet-30364", NULL, NULL, SW_SHOWNORMAL);
//------
goto a;
}
else{goto a;
}
}
//https://www.1mg.com/drugs-substitutes/zinetac-150mg-tablet-30364
if(name1=="exit")
{
system("app.exe");	
}

else if (name1!="crocin"&&"aspirin"&&"zeintac")
{
	cout<<"Enter correct name!";
	goto a;
}
}
void homeo()
{
int ch;
b:
cout <<"\nSELECT ISSUES FROM FOLLOWING:\n";
cout <<"\n1.FEVER";
cout <<"\n2.COLD";
cout <<"\n3.BODY PAIN";
cout <<"\n4.STOMACH PROBLEMS";
cout <<"\n5.EXIT\n";
cout <<"\nSELECT YOUR CHOICE >>\n";
cout <<"\n";
cin >> ch;
string n;
switch (ch)
	{
		
        case 1:
        	
        cout <<"\nSOME BEST HOMEOPATHIC MEDICINES FOR FEVER ARE>>\n";
	cout <<"\nACONITE";
	cout <<"\nBRYONIA ALBA";
	cout <<"\nNUX VOMICA";
	cout <<"\nGELSEMIUM";
	cout <<"\nRHUS TOX\n";   
	//https://www.lybrate.com/topic/homeopathic-medicines-for-fever-bbe8/02ca98eee4317ca693ca2dd925ed0075
	cout <<"\nTYPE M FOR MORE INFO OR PRESS ANYTHING\n";
	cout <<"\n";
	cin >> n;
	if(n=="M")
	{
	ShellExecute(NULL, "open", "https://www.lybrate.com/topic/how-homeopathy-boosts-immunity-and-why-it-should-be-the-first-line-of-treatment/a3c7bb26ae12f4c1a5b32839a3697c0f", NULL, NULL, SW_SHOWNORMAL);
	goto b;
	//system("app.exe");
	}
	else
	{
		cout<<"enter correct choice!";
		//system("app.exe");	
		goto b;
		 
	}
   break;
    case 2:
	cout <<"\nSOME BEST HOMEOPATHIC MEDICINES FOR COLD ARE>>\n";
	cout <<"\nARSENICUM ALBUM";
	cout <<"\nEUPHRASIA";
	cout <<"\nNATRUM MURIATICUM ";
	cout <<"\nNUX VOMICA ";  
	//https://wa.kaiserpermanente.org/kbase/topic.jhtml?docId=hn-2213002
	cout <<"\nTYPE M FOR MORE INFO OR PRESS ANYTHING\n";
	cout <<"\n";
	cin >> n;
	if(n=="M")
	{
	ShellExecute(NULL, "open", "https://wa.kaiserpermanente.org/kbase/topic.jhtml?docId=hn-2213002", NULL, NULL, SW_SHOWNORMAL);
	goto b;
	//system("app.exe");
	}
	else if (n!="M")
	{
	cout<<"Enter correct choice";
	goto b;	
	}
	
	break;
    case 3:
    	goto b;
	break;
    case 4:   
   goto b;
    break;
    case 5:
    system("app.exe");
    break;    
	default:
		cout<<"enter correct choice!";
	system("app.exe");
	goto b;
}	}

	/*void assis()
	{
		CreateProcess(TEXT("C:\\Users\\patil\\Desktop\\main\\assistant.exe"), NULL, NULL, NULL, FALSE, NULL, NULL, NULL, &startInfo, &processInfo);
	}*/

void ayu()
{
int ch1;
c:
cout <<"\nSELECT ISSUES FROM FOLLOWING:\n";
cout <<"\n1.FEVER";
cout <<"\n2.HEADACHE";
cout <<"\n3.COLD";
cout <<"\n4.STOMACH PROBLEMS";
cout <<"\n5.BODY PAIN";
cout <<"\n5.EXIT\n";
cout <<"\nSELECT YOUR CHOICE >>\n";
cout <<"\n";
cin >> ch1;
string n;
switch (ch1)
	{
        case 1:
        cout <<"\nSOME BEST AYURVEDIC MEDICINES FOR FEVER ARE>>\n";
	cout <<"\nDevavati - Fever due to Indigestion or food poisoning";
	cout <<"\nSudarsana Vati - cold and fever";
	cout <<"\nTulsi - Infections";
	cout <<"\nYastimadhu";
	cout <<"\nJvarakeerti\n";   
	//https://www.lybrate.com/topic/homeopathic-medicines-for-fever-bbe8/02ca98eee4317ca693ca2dd925ed0075
	cout <<"\nTYPE M FOR MORE INFO AND PRESS V FOR VIDEO OR PRESS ANYTHING\n";
	cout <<"\n";
	cin >> n;
	if(n=="M")
	{
	ShellExecute(NULL, "open", "https://www.srisritattva.com/blogs/ageing-with-grace-and-ayurveda/get-rid-of-common-cold-and-fever-with-ayurveda", NULL, NULL, SW_SHOWNORMAL);
	goto c;
	//system("app.exe");
	}
	else if(n=="V")
	{
	ShellExecute(NULL, "open", "https://www.youtube.com/watch?v=hfOHg640RAU", NULL, NULL, SW_SHOWNORMAL);
	goto c;	
	}
	else
	{
		cout<<"enter correct choice";
		goto c;
		
	}
    break;
    case 2:
	cout <<"\nSOME BEST HOMEOPATHIC MEDICINES FOR HEAD ACHE ARE>>\n";
	cout <<"\nBrahmi ghritam";
	cout <<"\nSarapgandha vati";
	cout <<"\nTriphala churna";
	cout <<"\nBalarishtam\n";  
	//https://wa.kaiserpermanente.org/kbase/topic.jhtml?docId=hn-2213002
	cout <<"\nTYPE M FOR MORE INFO AND PRESS V FOR VIDEO OR PRESS ANYTHING\n";
	cout <<"\n";
	cin >> n;
	if(n=="M")
	{
	ShellExecute(NULL, "open", "https://www.myupchar.com/en/disease/headache/ayurveda", NULL, NULL, SW_SHOWNORMAL);
	goto c;
	//system("app.exe");
	}
		else if(n=="V")
	{
	ShellExecute(NULL, "open", "https://www.youtube.com/watch?v=orqcVqMRkNI", NULL, NULL, SW_SHOWNORMAL);
	goto c;	
	}
	else
	{
		cout<<"enter correct choice";
		goto c;
	}
	break;
    case 3:
    	goto c;
	break;
    case 4:   
    goto c;
    break;
    case 5:
    system("app.exe");
    default:
    	cout<<"Please enter correct choice!";
    	system("app.exe");
    break;      
	}
}


int main()
{
	system("Color 0B");
	cout <<"\t\t\t\t\t\t\t    HEALTH ASSISTANT";
    cout <<"\n\t\t\t\t\t*-------------------------------------------------------*";
    cout << "\n\t\t\t\t\t|\t1. ALTERNATIVE\t\t\t\t\t|\n" << "\t\t\t\t\t|\t2. HOMEOPATHIC SOLUTION FOR PHARMACEUTICAL\t|\n" << "\t\t\t\t\t|\t3. AYURVEDIC SOLUTION\t\t\t\t|\n" <<"\t\t\t\t\t|\t4. HEALTH ASSISTANT\t\t\t\t|\n" << "\t\t\t\t\t|\t5. EXIT\t\t\t\t\t\t|\n"; 
    cout <<"\t\t\t\t\t*-------------------------------------------------------*";  
    int option;
    cout << "\nSELECT YOUR CHOICE >>\n" << endl;
    cin >> option;  
	
    switch (option)
    {
        case 1:
        alter();
        break;
        case 2:
	    homeo();
	    break;
	    case 3:
	    ayu();
	    break;
        case 4:
	    cout <<"HEALTH ASSISTANT";
	    system("assistant.exe");
		//ShellExecute(NULL, "open", "C:\Users\patil\Desktop\Project\assistant", NULL, NULL, SW_SHOWNORMAL);
	    break;
        case 5:
        ShowWindow(GetConsoleWindow(), SW_HIDE);
        //exit(0);
        break;
        default:
        cout<<"Please enter correct choice!";
        system("app.exe");
    }
    return 0;
}
