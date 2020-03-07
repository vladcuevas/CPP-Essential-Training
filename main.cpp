#include <cstdio>

#include "Chapter2/cpp11.h"
#include "Chapter2/for.h"
#include "Chapter2/hello.h"
#include "Chapter2/hello-cout.h"
#include "Chapter2/loop.h"
#include "Chapter2/switch.h"
#include "Chapter2/while.h"
#include "Chapter2/basicSyntax.h"

#include "Chapter3/dataTypes.h"
#include "Chapter4/operators.h"

using namespace std;

int main()
{
	hello hw;
	hw.sayHello();

	puts("");

	cpp11 cpp11;
	cpp11.checkCPP11();

	puts("");

	basicSyntax bs;

	bs.pointer();
	bs.reference();
	bs.primitiveArray();
	bs.primitiveString();
	bs.conditionals();

	switchMe();

	basicLoop();

	basicFor();

	rangeBasedForLoop();

	bs.coutTest();

	integerTypes intTypes;
	intTypes.execute();
	intTypes.executeFixedSize();

	floatTypes floatTypes;
	floatTypes.execute();

	charAndStringsTypes cas;
	cas.execute();

	//Structured Data
	Employee vlad = { 1, "Vladimir Cuevas", "Principal Software Engineer" };
	Employee* e = &vlad;

	printf("\n%s is the %s and has id %d\n", vlad.name, vlad.role, vlad.id);
	printf("\n%s is the %s and has id %d\n", e->name, e->role, e->id);

	preferences pref;
	pref.execute();

	autoType aty;
	aty.execute();

	nullPointer np;
	np.execute();

	bprint bp;
	bp.execute();

	newDelete nd;
	nd.execute();

	operators ops;
	ops.pointerIncremental();
	ops.typeIdTest();
	ops.compoundOperators();
	ops.IncrementDecrementOperators();
}
