#include "ShuFunc.h"
using namespace std;
ShuSci::function about(){
	MessageBox(NULL,"Shuzhou BioLab [Version 1.001.200706]\n(c)2020 Shuzhou Foundation. All rights reserved.","Help >> About - Shuzhou Biolab",MB_ICONINFORMATION|MB_OK);
	cout <<"Function 'about()' completed successfully."<<endl;
}
int main(){
	cout <<"Welcome to Shuzhou Biolab v1.0."<<endl<<"Type 'help' for more information."<<endl;
	while(1){
		cout <<">>>";
		ShuSci::str choice;
		cin >> choice;
		if (choice == "help"){
			MessageBox(NULL,"Help is not avaliable now.","Help - Shuzhou BioLab",MB_OK);
			cout <<"Function 'help()' completed successfully."<<endl;
		}
		else if (choice == "about"){
			about();
		}
		else if (choice == "sort"){
			cin >> choice;
			if (choice == "rna"){
				ShuSci::SortRNA();
				return 0;
			}
			else if (choice == "dna"){
				ShuSci::SortDNA();
			}
		}
		else if (choice == "generate"){
			cin >> choice;
			if (choice == "rna"){
				ShuSci::num bases;
				cin >> bases;
				ShuFunc::ShuRna(bases);
			}
			else if (choice == "dna"){
				ShuSci::num bases;
				cin >> bases;
				ShuFunc::ShuDna(bases);
			}
		}
	}
}
