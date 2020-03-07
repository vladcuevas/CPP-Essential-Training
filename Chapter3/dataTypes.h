#include <cstdio>
#include <cstdint>
using namespace std;

class integerTypes {
private:
	// a byte is 8 bits
	static constexpr size_t byte = 8;
public:
	void execute();
	int executeFixedSize();
};

class floatTypes {
private:
	// a byte is 8 bits
	static constexpr size_t byte = 8;
public:
	int execute();
};

class charAndStringsTypes {
private:
	// a byte is 8 bits
	static constexpr size_t byte = 8;
public:
	int execute();
};

//Structured Data
struct Employee {
	int id;
	const char* name;
	const char* role;
};

class preferences {
private:
    bool likesMusic : 1;
    bool hasHair : 1;
    bool hasInternet : 1;
    bool hasDinosaur : 1;
    unsigned int numberOfChildren : 4;
public:
    void execute(void);
};

//Structured Data
#include <string>
#include <typeinfo>
class autoType {
public:
	void execute();
	string func();
};

class nullPointer {
public:
	void execute();
	void f(int i);
	void f(const char* s);
};

