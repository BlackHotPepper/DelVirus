#include <iostream>

using namespace std;

int main()
{
	//MENU
	usleep(100000);
	cout << "\n      ___  ___  _     _ _  _  ___  _ _  ___        " <<endl;
	usleep(100000);
	cout << "     | . ||  _|| |   | | || || . || | ||  _|       " << endl;
	usleep(100000);
	cout << "     | | ||  _|| |_  | | || ||   /| | ||_  |       " <<endl;
	usleep(100000);
	cout << "     |___/|___||___| |___/|_||_|_||___||___|     CREATED BY: black-hot-pepper   \n"<<endl;
	usleep(100000);
	
	
	int var = 0;
	cout << "____________________________________________________________________________________________________ \n" << endl;
	
	cout << " The program will delete all files with the following extensions:" << endl;
	cout << " BAT, VBS, WS, SCR, HTA, PIF, MSI and MSP" << endl;
	cout << " If you are aware of any specific files, please save it \n\n" << endl;
	
	cout << " O programa ira excluir os arquivos com as seguintes extensoes:" << endl;
	cout << " BAT, VBS, WS, SCR, HTA, PIF, MSI e MSP" << endl;
	cout << " Caso voce esteja ciente sobre um arquivo especifco, por favor salve-o \n\n" << endl;
	
	cout << "____________________________________________________________________________________________________ \n" << endl;
	
	cout << " To start, please type           (1)          To see the informations about your system, type    (2)  "<< endl;
	cout << " Para comecar, por favor digite  (1)          Para ver as informacoes do seu sistema, digite     (2)  " << endl;
	cout << "____________________________________________________________________________________________________\n" << endl;
	cout << " [TYPE]: ";
	cin >> var;
	
	switch (var){
		case 1:
			cout<< "\nStarting the process...Please, wait";
			system("ver");
			usleep(1000000);
			
			cout<< "\n______Deleting bat files...";
			usleep(1000000);
			system("del/q//s/a *.bat");
			
			cout<< "\n______Deleting vbs files...";
			usleep(1000000);
			system("del/q/f/s/a *.vbs");
			
			cout<< "\n______Deleting ws files...";
			usleep(1000000);
			system("del/q/f/s/a *.ws");
			
			cout<< "\n______Deleting scr files...";
			usleep(1000000);
			system("del/q/f/s/a *.scr");
			
			cout<< "\n______Deleting hta files...";
			usleep(1000000);
			system("del/q/f/s/a *.hta");
			
			cout<< "\n______Deleting pif files...";
			usleep(1000000);
			system("del/q/f/s/a *.pif");
			
			cout<< "\n______Deleting msi files...";
			usleep(1000000);
			system("del/q/f/s/a *.msi");
			
			cout<< "\n______Deleting msp files...";
			usleep(1000000);
			system("del/q/f/s/a *.msp");
		case 2:
			cout << "\n______Running right now...";
			usleep(1000000);
			system("tasklist");
			
			cout << "\n______Drivers";
			usleep(1000000);
			system("driverquery"); 
		default:
			cout << "Please, type a correct answer" << endl;
			cout << "Por favor, digite uma resposta valida" << endl;
	}
	
	return 0;
}