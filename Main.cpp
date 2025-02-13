
// C++ Standard Library (& C with .h)
#include <iostream>

// External Library/ Engine/ API/ etc.
//#include <vulkan/vulkan.h>

// Custom Library or files 
#include "../Header/Car.h"



// Dog Class (in one file)
class Animal {};
class Dog : public Animal 
{
public: 

	// Constructor 
	Dog(std::string Name, int Health)
	{
		this->Name = Name; 
		this->Health = Health; 
	}

	// Destructor
	~Dog()
	{
		std::cout << "GAME OVER!!!" << std::endl;
	}

	void bark()
	{
		std::cout << "Whaf" << std::endl; 
	}

	void eat()
	{

	}

	void walk()
	{

	}
private:
	std::string Name;
	int Health;

protected: 

};

// Function Prototype
void displayGameInfo(std::string GameName); 

int main()
{
	Car MyCar("Tesla"); 
	MyCar.accelerate(50); 

	displayGameInfo("Test");

	return 0; 
}


void displayGameInfo(std::string GameName)
{
	std::string GameApp = "My App";
	std::cout << "Game App: " << GameApp << std::endl;
}
