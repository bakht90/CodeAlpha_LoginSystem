#include<iostream>
#include<fstream>
#include<string>

using namespace std;
int main()
{
	ofstream file("users.txt");
	file<<"ali";
	file.close();
	
}
