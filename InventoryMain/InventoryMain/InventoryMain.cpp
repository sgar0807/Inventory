// InventoryMain.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>
#include <sstream>

int main()
{
	std::string ComputerName = ""; // Creates a variable for the name of the Computer
	std::string UserName = ""; // Creates a variable for the User who is logged into the computer
	std::string OperatingSystem = ""; // Creates a variable for tracking which operating system the computer uses
	std::FILE* ComputerInformation = std::tmpfile();
	std::string FirstName;
	std::string LastName;
	
	system("hostname >> ComputerInformation \n");
	
	ComputerInformation >> ComputerName;
	std::cout << ComputerName;
	 
	UserName = system("whoami");
	OperatingSystem = system("systeminfo | findstr /C:\"OS Name");

	
}

