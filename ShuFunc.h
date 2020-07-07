#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>
#include <fstream>
namespace ShuFunc{
	#define Sstr std::string
	typedef Sstr str;
	typedef bool bin;
	typedef int num;
	typedef char chr;
	typedef float flt;
	typedef long ln;
	typedef long long lnlg;
	typedef const char* cstchr;
	typedef void ShuFunc;
	typedef void function;
	extern str rna;
	ShuFunc::cstchr SaveToFileName;
	ShuFunc::function WriteToFile(const ShuFunc::str text){
    std::ofstream log_file(
        "ShuRna.txt", std::ios_base::out | std::ios_base::app );
    	log_file << text;
	}
	ShuFunc::function DNAWriteToFile(const ShuFunc::str text){
    std::ofstream log_file(
        "ShuDna.txt", std::ios_base::out | std::ios_base::app );
    	log_file << text;
	}
	ShuFunc::str ShuRna(ShuFunc::num bases){
		srand (time (0));
		ShuFunc::num choice;
		for (; bases > 0 ; --bases){
			choice = rand() % 4;
			if (choice == 0) {
				printf ("A");
				WriteToFile ("A");
			}
			else if (choice == 1) {
				printf ("U");
				WriteToFile ("U");
			}
			else if (choice == 2) {
				printf ("C");
				WriteToFile ("C");
			}
			else if (choice == 3) {
				printf ("G");
				WriteToFile ("G");
			}
		}
		system ("ShuRna.txt");
		printf ("\nYour results are saved in ~/ShuRna.txt.");
	}
	ShuFunc::str ShuDna(ShuFunc::num bases){
		srand (time (0));
		ShuFunc::num choice;
		for (; bases > 0 ; --bases){
			choice = rand() % 4;
			if (choice == 0) {
				printf ("A");
				DNAWriteToFile ("A");
			}
			else if (choice == 1) {
				printf ("U");
				DNAWriteToFile ("U");
			}
			else if (choice == 2) {
				printf ("C");
				DNAWriteToFile ("C");
			}
			else if (choice == 3) {
				printf ("G");
				DNAWriteToFile ("G");
			}
		}
		system ("ShuDna.txt");
		printf ("\nYour results are saved in ~/ShuDna.txt.");
	}
	ShuFunc::num between(ShuFunc::num lowValue, ShuFunc::num highValue){
		srand (time (0));
		ShuFunc::num value;
		value = rand () % highValue;
		while (value <= lowValue){
			value = rand () % highValue;
		}
		return value;
	}
	ShuFunc::function NewLine(){
		printf ("\n");
	}
	ShuFunc::function timer(ShuFunc::num h, ShuFunc::num m, ShuFunc::num s){
		for (;;){
		if (m == 0){
			if (h != 0) {
				h = h - 1;
				m = m + 60;
			}
		if (s == 0){
			if ((h == 0)&&(m == 0)){
				printf (" -- : -- : --\n");
				printf (" h     m    s\n");
				Sleep (10000);
				system ("cls");
				break;
			}
			else {
			s = s + 60;
			m = m + 1;
			}
		}
		Sleep (1000);
		system ("cls");
		s = s - 1;
		printf (" %2d : %2d : %2d\n",h,m,s);
		printf (" h       m     s\n");
	}
	}
	}
} 
namespace ShuMath{
	#define Sstr std::string
	typedef Sstr str;
	typedef bool bin;
	typedef int num;
	typedef char chr;
	typedef float flt;
	typedef long ln;
	typedef long long lnlg;
	typedef const char* cstchr;
	typedef void ShuMathFc;
	typedef void function;
	ShuMath::num result;
	ShuMath::num add(ShuMath::num a, ShuMath::num b){
		result = a + b;
		return result;
	}
	ShuMath::num sub(ShuMath::num a, ShuMath::num b){
		result = a - b;
		return result;
	}
	ShuMath::num mul(ShuMath::num a, ShuMath::num b){
		result = a * b;
		return result;
	}
	ShuMath::num div(ShuMath::num a, ShuMath::num b){
		result = a / b;
		return result;
	}
	ShuMath::function calc(){
		system ("calc.exe"); 
	}
}
namespace ShuSci{
	#define Sstr std::string
	typedef Sstr str;
	typedef bool bin;
	typedef int num;
	typedef char chr;
	typedef float flt;
	typedef long ln;
	typedef long long lnlg;
	typedef const char* cstchr;
	typedef void ShuSciFc;
	typedef void function;
	ShuSci::chr *b = "A";
	int total;
	ShuSci::function SortRNA(){
		ShuSci::chr *a;
		std::cin >> a;
		int i,j,k=0,size_a,size_b,equal=0,cont=0;
		size_a = strlen(a); 
   		size_b = strlen(b);
   		j=0;
   		for(i = 0; i < size_b; i++){ 
    		 for(j = 0; j < size_a; j++){ 
        		k=0;
        		equal=0;
        			for(k=0; k<size_b; k++){
           				if(a[j+k] == b[i+k]) equal++;
           					if(equal==size_b) cont++;
        			} 
      			} 
   		}    
   		std::cout << "The sequence "<<"'"<<a<<"' has "<<cont<<" 'A's in it."<<std::endl;
   		total = cont + total;
   		b = "U";
   		cont = 0;
   		equal=0;
		size_a = strlen(a); 
   		size_b = strlen(b);
   		j=0;
   		for(i = 0; i < size_b; i++){ 
    		 for(j = 0; j < size_a; j++){ 
        		k=0;
        		equal=0;
        			for(k=0; k<size_b; k++){
           				if(a[j+k] == b[i+k]) equal++;
           					if(equal==size_b) cont++;
        			} 
      			} 
   		}
   		std::cout << "The sequence "<<"'"<<a<<"' has "<<cont<<" 'U's in it."<<std::endl;
   			total = cont + total;
   		b = "C";
   		cont = 0;
   		equal=0;
		size_a = strlen(a); 
   		size_b = strlen(b);
   		j=0;
   		for(i = 0; i < size_b; i++){ 
    		 for(j = 0; j < size_a; j++){ 
        		k=0;
        		equal=0;
        			for(k=0; k<size_b; k++){
           				if(a[j+k] == b[i+k]) equal++;
           					if(equal==size_b) cont++;
        			} 
      			} 
   		}
   		std::cout << "The sequence "<<"'"<<a<<"' has "<<cont<<" 'C's in it."<<std::endl;
   			total = cont + total;
   		b = "G";
   		equal=0;
   		cont = 0;
   		size_a = strlen(a); 
   		size_b = strlen(b);
   		j=0;
   		for(i = 0; i < size_b; i++){ 
    		 for(j = 0; j < size_a; j++){ 
        		k=0;
        		equal=0;
        			for(k=0; k<size_b; k++){
           				if(a[j+k] == b[i+k]) equal++;
           					if(equal==size_b) cont++;
        			} 
      			} 
   		}
   		std::cout << "The sequence "<<"'"<<a<<"' has "<<cont<<" 'G's in it."<<std::endl;
   			total = cont + total;
   		std::cout << "There are "<<total<<" bases in the sequence '"<<a<<"'"<<std::endl;
   		std::cout <<"Function 'ShuSci::SortRNA()' completed successfully."<<std::endl;
}
ShuSci::function SortDNA(){
		ShuSci::chr *a;
		std::cin >> a;
		int i,j,k=0,size_a,size_b,equal=0,cont=0;
		size_a = strlen(a); 
   		size_b = strlen(b);
   		j=0;
   		for(i = 0; i < size_b; i++){ 
    		 for(j = 0; j < size_a; j++){ 
        		k=0;
        		equal=0;
        			for(k=0; k<size_b; k++){
           				if(a[j+k] == b[i+k]) equal++;
           					if(equal==size_b) cont++;
        			} 
      			} 
   		}    
   		std::cout << "The sequence "<<"'"<<a<<"' has "<<cont<<" 'A's in it."<<std::endl;
   		total = cont + total;
   		b = "T";
   		cont = 0;
   		equal=0;
		size_a = strlen(a); 
   		size_b = strlen(b);
   		j=0;
   		for(i = 0; i < size_b; i++){ 
    		 for(j = 0; j < size_a; j++){ 
        		k=0;
        		equal=0;
        			for(k=0; k<size_b; k++){
           				if(a[j+k] == b[i+k]) equal++;
           					if(equal==size_b) cont++;
        			} 
      			} 
   		}
   		std::cout << "The sequence "<<"'"<<a<<"' has "<<cont<<" 'T's in it."<<std::endl;
   			total = cont + total;
   		b = "C";
   		cont = 0;
   		equal=0;
		size_a = strlen(a); 
   		size_b = strlen(b);
   		j=0;
   		for(i = 0; i < size_b; i++){ 
    		 for(j = 0; j < size_a; j++){ 
        		k=0;
        		equal=0;
        			for(k=0; k<size_b; k++){
           				if(a[j+k] == b[i+k]) equal++;
           					if(equal==size_b) cont++;
        			} 
      			} 
   		}
   		std::cout << "The sequence "<<"'"<<a<<"' has "<<cont<<" 'C's in it."<<std::endl;
   			total = cont + total;
   		b = "G";
   		equal=0;
   		cont = 0;
   		size_a = strlen(a); 
   		size_b = strlen(b);
   		j=0;
   		for(i = 0; i < size_b; i++){ 
    		 for(j = 0; j < size_a; j++){ 
        		k=0;
        		equal=0;
        			for(k=0; k<size_b; k++){
           				if(a[j+k] == b[i+k]) equal++;
           					if(equal==size_b) cont++;
        			} 
      			} 
   		}
   		std::cout << "The sequence "<<"'"<<a<<"' has "<<cont<<" 'G's in it."<<std::endl;
   			total = cont + total;
   		std::cout << "There are "<<total<<" bases in the sequence '"<<a<<"'"<<std::endl;
   		std::cout <<"Function 'ShuSci::SortDNA()' completed successfully."<<std::endl;
}
}
namespace SBrowser{
	#define Sstr std::string
	typedef Sstr str;
	typedef bool bin;
	typedef int num;
	typedef char chr;
	typedef float flt;
	typedef long ln;
	typedef long long lnlg;
	typedef const char* cstchr;
	typedef void ShuSciFc;
	typedef void function;
	typedef LPCSTR SUrl; 
	SBrowser::function OpenURL(SBrowser::SUrl URL){
		ShellExecute(NULL, "open", URL , NULL, NULL, SW_SHOWNORMAL);
	}
	SBrowser::function Help(SBrowser::str HelpForWhat){
		if (HelpForWhat == "NULL"){
			MessageBox(NULL,"Help\nbrowse Browses the web for the website.\nHelp Gets help about a command.","Help for Shuzhou Browser",NULL);
		}
		else if (HelpForWhat == "browse"){
			MessageBox(NULL,"Browses the web for the website.","Browse:",NULL);
		}
	}
	SBrowser::function GetFuncLPCSTR(LPCSTR URL){
		
	}
}
