#pragma once
#include <functional>
namespace HashFunction
{
	typedef std::function<unsigned int(const char*, unsigned int)> HashFunc;


	//basic addition hash
	unsigned int badHash(const char* data, unsigned int length);


	//Hash function by Brian Kernighan and Dennis Ritchie
	unsigned int BKDRHash(const char* data, unsigned int length);

	//Add your functions here

	unsigned int colorHash(const char* data, unsigned int length);


	unsigned int seanHash(const char* data, unsigned int length);

	//a helper to access a default hash function
	static HashFunc defaultHash = seanHash;
};

