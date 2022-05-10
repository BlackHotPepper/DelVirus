#include <iostream>

using namespace std;

int main()
{
	//MENU
	usleep(100000);
	std::cout << "\n      ___  ___  _     _ _  _  ___  _ _  ___        " << std::endl;
	usleep(100000);
	std::cout << "     | . ||  _|| |   | | || || . || | ||  _|       " << std::endl;
	usleep(100000);
	std::cout << "     | | ||  _|| |_  | | || ||   /| | ||_  |       " << std::endl;
	usleep(100000);
	std::cout << "     |___/|___||___| |___/|_||_|_||___||___|     CREATED BY: black-hot-pepper   \n"<< std::endl;
	usleep(100000);
	
	
	int var = 0;
	std::cout << "____________________________________________________________________________________________________ \n" << std::endl;
	
	std::cout << " The program will delete all files with the following extensions:" << std::endl;
	std::cout << " BAT, VBS, WS, SCR, HTA, PIF, MSI and MSP" << std::endl;
	std::cout << " If you are aware of any specific files, please save it \n\n" << std::endl;
	
	std::cout << " O programa ira excluir os arquivos com as seguintes extensoes:" << std::endl;
	std::cout << " BAT, VBS, WS, SCR, HTA, PIF, MSI e MSP" << std::endl;
	std::cout << " Caso voce esteja ciente sobre um arquivo especifco, por favor salve-o \n\n" << std::endl;
	
	std::cout << "____________________________________________________________________________________________________ \n" << std::endl;
	
	std::cout << " To start, please type           (1)          To see the informations about your system, type    (2)  "<< std::endl;
	std::cout << " Para comecar, por favor digite  (1)          Para ver as informacoes do seu sistema, digite     (2)  " << std::endl;
	std::cout << "____________________________________________________________________________________________________\n" << std::endl;
	std::cout << " [TYPE]: ";
	std::cin >> var;
	
	switch (var){
		case 1:
			std::cout<< "\nStarting the process...Please, wait";
			system("ver");
			usleep(1000000);
			
			std::cout<< "\n______Deleting bat files...";
			usleep(1000000);
			system("del/q//s/a *.bat");
			
			std::cout<< "\n______Deleting vbs files...";
			usleep(1000000);
			system("del/q/f/s/a *.vbs");
			
			std::cout<< "\n______Deleting ws files...";
			usleep(1000000);
			system("del/q/f/s/a *.ws");
			
			std::cout<< "\n______Deleting scr files...";
			usleep(1000000);
			system("del/q/f/s/a *.scr");
			
			std::cout<< "\n______Deleting hta files...";
			usleep(1000000);
			system("del/q/f/s/a *.hta");
			
			std::cout<< "\n______Deleting pif files...";
			usleep(1000000);
			system("del/q/f/s/a *.pif");
			
			std::cout<< "\n______Deleting msi files...";
			usleep(1000000);
			system("del/q/f/s/a *.msi");
			
			std::cout<< "\n______Deleting msp files...";
			usleep(1000000);
			system("del/q/f/s/a *.msp");
		case 2:
			std::cout << "\n______Running right now...";
			usleep(1000000);
			system("tasklist");
			
			std::cout << "\n______Drivers";
			usleep(1000000);
			system("driverquery"); 
		default:
			std::cout << "Please, type a correct answer" << std::endl;
			std::cout << "Por favor, digite uma resposta valida" << std::endl;
	}
	
	return 0;
}