/* TEMPLATE GENERATED TESTCASE FILE
Filename: CWE758_Undefined_Behavior__int_pointer_new_use_11.cpp
Label Definition File: CWE758_Undefined_Behavior.new.label.xml
Template File: point-flaw-11.tmpl.cpp
*/
/*
 * @description
 * CWE: 758 Undefined Behavior
 * Sinks: new_use
 *    GoodSink: Initialize then use data
 *    BadSink : Use data
 * Flow Variant: 11 Control flow: if(globalReturnsTrue()) and if(globalReturnsFalse())
 *
 * */

#include "std_testcase.h"

namespace CWE758_Undefined_Behavior__int_pointer_new_use_11
{

#ifndef OMITBAD

void bad()
{
    if(globalReturnsTrue())
    {
        {
            int * * pointer = new int *;
            int * data = *pointer; /* FLAW: the value pointed to by pointer is undefined */
            delete pointer;
            printIntLine(*data);
        }
    }
}

#endif /* OMITBAD */

#ifndef OMITGOOD

/* good1() uses if(globalReturnsFalse()) instead of if(globalReturnsTrue()) */
static void good1()
{
    if(globalReturnsFalse())
    {
        /* INCIDENTAL: CWE 561 Dead Code, the code below will never run */
        printLine("Benign, fixed string");
    }
    else
    {
        {
            int * data;
            /* initialize both the pointer and the data pointed to */
            data = new int;
            *data = 5;
            int * * pointer = new int *;
            *pointer = data; /* FIX: Assign a value to the thing pointed to by pointer */
            {
                int * data = *pointer;
                printIntLine(*data);
            }
            delete pointer;
        }
    }
}

/* good2() reverses the bodies in the if statement */
static void good2()
{
    if(globalReturnsTrue())
    {
        {
            int * data;
            /* initialize both the pointer and the data pointed to */
            data = new int;
            *data = 5;
            int * * pointer = new int *;
            *pointer = data; /* FIX: Assign a value to the thing pointed to by pointer */
            {
                int * data = *pointer;
                printIntLine(*data);
            }
            delete pointer;
        }
    }
}

void good()
{
    good1();
    good2();
}

#endif /* OMITGOOD */

} /* close namespace */

/* Below is the main(). It is only used when building this testcase on
   its own for testing or for building a binary to use in testing binary
   analysis tools. It is not used when compiling all the testcases as one
   application, which is how source code analysis tools are tested. */

#ifdef INCLUDEMAIN

using namespace CWE758_Undefined_Behavior__int_pointer_new_use_11; /* so that we can use good and bad easily */

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
['void bad()', '}'] , 1
['{\n', '    if(globalReturnsTrue())\n', '    {\n', '        {\n', '            int * * pointer = new int *;\n', '            int * data = *pointer; /* FLAW: the value pointed to by pointer is undefined */\n', '            delete pointer;\n', '            printIntLine(*data);\n', '        }\n', '    }\n', '}\n'] , 1
