#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

int main()
{
	std::string ComputerName = ""; // Creates a variable for the name of the Computer
	std::string UserName = ""; // Creates a variable for the User who is logged into the computer
	std::string OperatingSystem = ""; // Creates a variable for tracking which operating system the computer uses
	std::FILE *ComputerInformation = tmpfile(); // Creates a temporary file to input the system information into
	std::string FirstName; // declares a string for first name
	std::string LastName; // declares a string for last name
	
	system("hostname > ComputerInformation");
	
	//ComputerInformation >> ComputerName;
	std::cout << ComputerName;
	 
	UserName = system("whoami > ComputerInformation");
	OperatingSystem = system("systeminfo | findstr /C:\"OS Name");

	std::ofstream &ComputerInformation;
	ComputerInformation->is_open();

	
}

