#pragma once
#include <HumanLibrary.h>
#ifdef CUMTROL_EXPORTS

#define CUMTROL_API __declspec(dllexport)

#else

#define CUMTROL_API __declspec(dllimport)

#endif 


class Main {

private:

	// working method
	void deleteOneElement(Human** List, int& size, int check);
	void addOneElement(Human** List, int& size, int check);
	void rewriteOneElement(Human** List, int& size, int check);
	void Sort(Human** List, int size, int button);
	void create(Human** List, int size);
	void printList(Human** List, int size);

public:
	void main();
	~Main() {};
};


extern "C++" CUMTROL_API void cumtrol();