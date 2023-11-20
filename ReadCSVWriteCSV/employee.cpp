#include "employee.h"
employee::employee(string FIn, string FOut) {
	this->empin.open(FIn);
	this->empout.open(FOut);
}

void employee::ReadFromFile() {
	string line;
	string token;
	if (this->empin.is_open()) {
		while (getline(this->empin, line)) {
			stringstream superline(line);
			while (getline(superline, token, ',')) {
				AddToRow(token);
			}
			AddToLine();
		}
	}
}


void employee::AddToRow(string token) {
	this->temp.push_back(token);
}

void employee::AddToLine() {
	this->emp.push_back(this->temp);
	this->temp.clear();
}

void employee::WriteToFile() {
	//string temp;
	//for (int i = 0; i < size; i++) {
	//	temp = this->temp[i];
	//	this->empout << temp << "\n";
	//	temp.clear();
	//}
	for (int i = 0; i < this->emp.size(); i++)
	{
		for (int j = 0; j < this->emp[i].size(); j++)
		{
			if (j == 0) {
				string temp;
				temp = emp[i][j];
				emp[i][j] = emp[i][j + 1];
				emp[i][j + 1] = temp;
				this->empout << emp[i][j] << " ";
			}
			else {
				this->empout << emp[i][j] << ",";
			}
			
		}
		this->empout << endl;
	}
}



void employee::CloseFile() {
	this->empin.close();
	this->empout.close();
}


void employee::Test() {

}