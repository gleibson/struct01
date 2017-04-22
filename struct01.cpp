#include<iostream>
#include "struct01.h"


int main()
{
	inflatable guest =
	{
		"Glorious Gloria",
		1.88,
		29.99
	};
    
	inflatable pal =
	{
		"Audacious Arthur",
		3.12,
		32.99

	};

	// statc inflatable guest
	std::cout << "Expand your guest list with " << guest.name;
	std::cout << " and " << pal.name << "!\n";

	//pal.name is the name member of the pal variable
	std::cout << "You can have both fo $";
	std::cout << guest.price + pal.price << "!\n";
	
	
	return 0;
	
}


