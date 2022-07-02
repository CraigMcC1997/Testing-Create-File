#include <iostream>
#include <fstream> 

using namespace std;

void createFile(string& name, string& password)
{
	std::ofstream outfile("Accounts/" + name + ".txt");

	outfile << name << std::endl;
	outfile << password << std::endl;

	outfile.close();
}

int main(int arc, char* argv[])
{
	string name;
	string password;

	cout << "Name: " << endl;
	cin >> name;
	cout << "Password: " << endl;
	cin >> password;

	createFile(name, password);
	return 0;
}