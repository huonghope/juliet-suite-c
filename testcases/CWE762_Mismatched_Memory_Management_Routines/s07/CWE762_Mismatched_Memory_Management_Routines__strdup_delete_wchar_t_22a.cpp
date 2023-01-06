/* TEMPLATE GENERATED TESTCASE FILE
Filename: CWE762_Mismatched_Memory_Management_Routines__strdup_delete_wchar_t_22a.cpp
Label Definition File: CWE762_Mismatched_Memory_Management_Routines__strdup_delete.label.xml
Template File: sources-sinks-22a.tmpl.cpp
*/
/*
 * @description
 * CWE: 762 Mismatched Memory Management Routines
 * BadSource:  Allocate data using wcsdup()
 * GoodSource: Allocate data using new
 * Sinks:
 *    GoodSink: Deallocate data using free()
 *    BadSink : Deallocate data using delete
 * Flow Variant: 22 Control flow: Flow controlled by value of a global variable. Sink functions are in a separate file from sources.
 *
 * */

#include "std_testcase.h"

#include <wchar.h>

namespace CWE762_Mismatched_Memory_Management_Routines__strdup_delete_wchar_t_22
{

#ifndef OMITBAD

/* The global variable below is used to drive control flow in the sink function. Since it is in
a C++ namespace, it doesn't need a globally unique name. */
int badGlobal = 0;

void badSink(wchar_t * data);

void bad()
{
    wchar_t * data;
    /* Initialize data*/
    data = NULL;
    {
        wchar_t myString[] = L"myString";
        /* POTENTIAL FLAW: Allocate memory from the heap using a function that requires free() for deallocation */
        data = wcsdup(myString);
    }
    badGlobal = 1; /* true */
    badSink(data);
}

#endif /* OMITBAD */

#ifndef OMITGOOD

/* The global variables below are used to drive control flow in the sink functions. Since they are in
a C++ namespace, they don't need globally unique names. */
int goodB2G1Global = 0;
int goodB2G2Global = 0;
int goodG2B1Global = 0;

/* goodB2G1() - use badsource and goodsink by setting the static variable to false instead of true */
void goodB2G1Sink(wchar_t * data);

static void goodB2G1()
{
    wchar_t * data;
    /* Initialize data*/
    data = NULL;
    {
        wchar_t myString[] = L"myString";
        /* POTENTIAL FLAW: Allocate memory from the heap using a function that requires free() for deallocation */
        data = wcsdup(myString);
    }
    goodB2G1Global = 0; /* false */
    goodB2G1Sink(data);
}

/* goodB2G2() - use badsource and goodsink by reversing the blocks in the if in the sink function */
void goodB2G2Sink(wchar_t * data);

static void goodB2G2()
{
    wchar_t * data;
    /* Initialize data*/
    data = NULL;
    {
        wchar_t myString[] = L"myString";
        /* POTENTIAL FLAW: Allocate memory from the heap using a function that requires free() for deallocation */
        data = wcsdup(myString);
    }
    goodB2G2Global = 1; /* true */
    goodB2G2Sink(data);
}

/* goodG2B1() - use goodsource and badsink */
void goodG2B1Sink(wchar_t * data);

static void goodG2B1()
{
    wchar_t * data;
    /* Initialize data*/
    data = NULL;
    /* FIX: Allocate memory from the heap using new */
    data = new wchar_t;
    goodG2B1Global = 1; /* true */
    goodG2B1Sink(data);
}

void good()
{
    goodB2G1();
    goodB2G2();
    goodG2B1();
}

#endif /* OMITGOOD */

} /* close namespace */

/* Below is the main(). It is only used when building this testcase on
   its own for testing or for building a binary to use in testing binary
   analysis tools. It is not used when compiling all the testcases as one
   application, which is how source code analysis tools are tested. */

#ifdef INCLUDEMAIN

using namespace CWE762_Mismatched_Memory_Management_Routines__strdup_delete_wchar_t_22; /* so that we can use good and bad easily */

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
