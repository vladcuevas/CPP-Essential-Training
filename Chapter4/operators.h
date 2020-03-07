#include <cstdio>
#include <cstdint>
using namespace std;

class bprint {
public:
	void execute();
	// unsigned 8-bit to string

	const char* u8_to_cstr(const uint8_t& x);
};

class newDelete
{
private:
	static constexpr size_t count = 128;
public:
	int execute();
};

class operators
{
private:
	struct A { int x; };
	struct B { int x; };

	A a1;
	B b1;

public:
	int pointerIncremental();
	void printp(char* p);
	int typeIdTest();
	int compoundOperators();
	int IncrementDecrementOperators();
};