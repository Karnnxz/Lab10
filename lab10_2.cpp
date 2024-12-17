#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main (){
	ifstream source;
	ofstream dest;
	source.open("cheerbook.txt");
	dest.open("cheerbook_copy.txt");
	
	dest << "-------------------- BOOM ---------------------\n";
	
	string Textline;
	while(getline(source, Textline)) {
	    dest << Textline << "\n";
	}
	
	dest << "-------------------- HA!! ---------------------";

    source.close();
    dest.close();
	return 0;
}