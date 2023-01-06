/* TEMPLATE GENERATED TESTCASE FILE
Filename: CWE758_Undefined_Behavior__char_alloca_use_10.c
Label Definition File: CWE758_Undefined_Behavior.alloc.label.xml
Template File: point-flaw-10.tmpl.c
*/
/*
 * @description
 * CWE: 758 Undefined Behavior
 * Sinks: alloca_use
 *    GoodSink: Initialize then use data
 *    BadSink : Use data from alloca without initialization
 * Flow Variant: 10 Control flow: if(globalTrue) and if(globalFalse)
 *
 * */

#include "std_testcase.h"

#ifndef OMITBAD

void CWE758_Undefined_Behavior__char_alloca_use_10_bad()
{
    if(globalTrue)
    {
        {
            char * pointer = (char *)ALLOCA(sizeof(char));
            char data = *pointer; /* FLAW: the value pointed to by pointer is undefined */
            printHexCharLine(data);
        }
    }
}

#endif /* OMITBAD */

#ifndef OMITGOOD

/* good1() uses if(globalFalse) instead of if(globalTrue) */
static void good1()
{
    if(globalFalse)
    {
        /* INCIDENTAL: CWE 561 Dead Code, the code below will never run */
        printLine("Benign, fixed string");
    }
    else
    {
        {
            char data;
            char * pointer = (char *)ALLOCA(sizeof(char));
            data = 5;
            *pointer = data; /* FIX: Assign a value to the thing pointed to by pointer */
            {
                char data = *pointer;
                printHexCharLine(data);
            }
        }
    }
}

/* good2() reverses the bodies in the if statement */
static void good2()
{
    if(globalTrue)
    {
        {
            char data;
            char * pointer = (char *)ALLOCA(sizeof(char));
            data = 5;
            *pointer = data; /* FIX: Assign a value to the thing pointed to by pointer */
            {
                char data = *pointer;
                printHexCharLine(data);
            }
        }
    }
}

void CWE758_Undefined_Behavior__char_alloca_use_10_good()
{
    good1();
    good2();
}

#endif /* OMITGOOD */

/* Below is the main(). It is only used when building this testcase on
   its own for testing or for building a binary to use in testing binary
   analysis tools. It is not used when compiling all the testcases as one
   application, which is how source code analysis tools are tested. */

#ifdef INCLUDEMAIN

int main(int argc, char * argv[])
{
    /* seed randomness */
    srand( (unsigned)time(NULL) );
#ifndef OMITGOOD
    printLine("Calling good()...");
    CWE758_Undefined_Behavior__char_alloca_use_10_good();
    printLine("Finished good()");
#endif /* OMITGOOD */
#ifndef OMITBAD
    printLine("Calling bad()...");
    CWE758_Undefined_Behavior__char_alloca_use_10_bad();
    printLine("Finished bad()");
#endif /* OMITBAD */
    return 0;
}

#endif
