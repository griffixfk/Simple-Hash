#include <iostream>

#include <SHash/_Shash.h>


int main()
{
	const std::string text = "Hello bro";

	std::string salt = sHash._SimpleSalt();
	std::cout << salt << std::endl;

	unsigned int hash = sHash._SimpleHash(text + salt);

	return 0;
}