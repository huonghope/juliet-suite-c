/* TEMPLATE GENERATED TESTCASE FILE
Filename: CWE590_Free_Memory_Not_on_Heap__delete_struct_placement_new_54a.cpp
Label Definition File: CWE590_Free_Memory_Not_on_Heap__delete.pointer.label.xml
Template File: sources-sink-54a.tmpl.cpp
*/
/*
 * @description
 * CWE: 590 Free Memory Not on Heap
 * BadSource: placement_new Data buffer is declared on the stack
 * GoodSource: Allocate memory on the heap
 * Sink:
 *    BadSink : Print then free data
 * Flow Variant: 54 Data flow: data passed as an argument from one function through three others to a fifth; all five functions are in different source files
 *
 * */

#include "std_testcase.h"

#include <wchar.h>

namespace CWE590_Free_Memory_Not_on_Heap__delete_struct_placement_new_54
{

#ifndef OMITBAD

/* bad function declaration */
void badSink_b(twoIntsStruct * data);

void bad()
{
    twoIntsStruct * data;
    data = NULL; /* Initialize data */
    {
        /* FLAW: data is allocated on the stack and deallocated in the BadSink */
        char buffer[sizeof(twoIntsStruct)];
        twoIntsStruct * dataBuffer = new(buffer) twoIntsStruct;
        dataBuffer->intOne = 1;
        dataBuffer->intTwo = 1;
        data = dataBuffer;
    }
    badSink_b(data);
}

#endif /* OMITBAD */

#ifndef OMITGOOD

/* good function declarations */
void goodG2BSink_b(twoIntsStruct * data);

/* goodG2B uses the GoodSource with the BadSink */
static void goodG2B()
{
    twoIntsStruct * data;
    data = NULL; /* Initialize data */
    {
        /* FIX: data is allocated on the heap and deallocated in the BadSink */
        twoIntsStruct * dataBuffer = new twoIntsStruct;
        dataBuffer->intOne = 1;
        dataBuffer->intTwo = 1;
        data = dataBuffer;
    }
    goodG2BSink_b(data);
}

void good()
{
    goodG2B();
}

#endif /* OMITGOOD */

} /* close namespace */

/* Below is the main(). It is only used when building this testcase on
   its own for testing or for building a binary to use in testing binary
   analysis tools. It is not used when compiling all the testcases as one
   application, which is how source code analysis tools are tested. */

#ifdef INCLUDEMAIN

using namespace CWE590_Free_Memory_Not_on_Heap__delete_struct_placement_new_54; /* so that we can use good and bad easily */

int main(int argc, char * argv[])
{
    /* seed randomness */
    srand( (unsigned)time(NULL) );
#ifndef OMITGOOD
    printLine("Calling good()...");
    good();
    printLine("Finished good()");
#endif /* OMITGOOD */
#ifndef OMITBAD
    printLine("Calling bad()...");
    bad();
    printLine("Finished bad()");
#endif /* OMITBAD */
    return 0;
}

#endif
