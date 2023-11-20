#pragma once
#include <fstream>
#include <string>
#include <vector>
#include <sstream>
#include <iostream>
using namespace std;
class employee
{
public:
	employee(string, string);
	void ReadFromFile();
	void AddToRow(string);
	void AddToLine();
	void WriteToFile();
	void CloseFile();
	void Test();
protected:
	vector <string> temp;
	vector <vector<string>> emp;
	ifstream empin;
	ofstream empout;


};

