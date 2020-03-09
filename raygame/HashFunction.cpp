#include "HashFunction.h"

namespace HashFunction {
	//implementation of a basic addition hash

	unsigned int badHash(const char* data, unsigned int length) {
		unsigned int hash = 0;

		for (unsigned int i = 0; i < length; i++) {
			hash += data[i];
		}

		return hash;
	}


	unsigned int BKDRHash(const char* data, unsigned int length) {
		unsigned int hash = 0;

		for (unsigned int i = 0; i < length; i++) {
			hash = (hash * 1313) + data[i];
		}

		return (hash & 0x7FFFFFFF);
	}


	unsigned int colorHash(const char* data, unsigned int length)
	{
		unsigned int hash = 0;
		for (unsigned int i = 0; i < length; i++) {
			hash = (hash * 1313) + data[i];
		}

		return (hash & 0xFFFFFF);
	}

	unsigned int seanHash(const char* data, unsigned int length)
	{
		unsigned int hash = 0;
		for (unsigned int i = 0; i < length; i++) {
			hash = (hash * 1313) + data[i] * 's' * 'e' * 'a' * 'n' * 484 ;
		}

		return (hash);
	}

}