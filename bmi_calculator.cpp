#include <string>
#include <iostream>
#include <fstream>
#include <sstream>
#include "a.h"
using namespace std;

int main(){
	
	BMI list[10];
	int i = 0;
	fstream fopen;
	string line;
	fopen.open("file.in",ios::in);
	while (getline(fopen, line))
	{
		stringstream linestream(line);
		int hei;
		int wei;
		linestream >> hei >> wei;
		if(hei !=0)
		{
			list[i] = BMI();
			list[i].set_height(hei);
			list[i].set_weight(wei);
			i++;
		}
		else
			break;
	}
	fstream fout;
	fout.open("file.out", ios::out);
	for(int i=0; i<5; i++)
	{
		fout<<list[i].return_BMI()<<" "<<list[i].return_status()<<endl;
	}

	return 0;
}
