/* TEMPLATE GENERATED TESTCASE FILE
Filename: CWE758_Undefined_Behavior__char_pointer_new_use_14.cpp
Label Definition File: CWE758_Undefined_Behavior.new.label.xml
Template File: point-flaw-14.tmpl.cpp
*/
/*
 * @description
 * CWE: 758 Undefined Behavior
 * Sinks: new_use
 *    GoodSink: Initialize then use data
 *    BadSink : Use data
 * Flow Variant: 14 Control flow: if(globalFive==5) and if(globalFive!=5)
 *
 * */

#include "std_testcase.h"

namespace CWE758_Undefined_Behavior__char_pointer_new_use_14
{

#ifndef OMITBAD

void bad()
{
    if(globalFive==5)
    {
        {
            char * * pointer = new char *;
            char * data = *pointer; /* FLAW: the value pointed to by pointer is undefined */
            delete pointer;
            printLine(data);
        }
    }
}

#endif /* OMITBAD */

#ifndef OMITGOOD

/* good1() uses if(globalFive!=5) instead of if(globalFive==5) */
static void good1()
{
    if(globalFive!=5)
    {
        /* INCIDENTAL: CWE 561 Dead Code, the code below will never run */
        printLine("Benign, fixed string");
    }
    else
    {
        {
            char * data;
            data = "string";
            char * * pointer = new char *;
            *pointer = data; /* FIX: Assign a value to the thing pointed to by pointer */
            {
                char * data = *pointer;
                printLine(data);
            }
            delete pointer;
        }
    }
}

/* good2() reverses the bodies in the if statement */
static void good2()
{
    if(globalFive==5)
    {
        {
            char * data;
            data = "string";
            char * * pointer = new char *;
            *pointer = data; /* FIX: Assign a value to the thing pointed to by pointer */
            {
                char * data = *pointer;
                printLine(data);
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

using namespace CWE758_Undefined_Behavior__char_pointer_new_use_14; /* so that we can use good and bad easily */

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
['{\n', '    if(globalFive==5)\n', '    {\n', '        {\n', '            char * * pointer = new char *;\n', '            char * data = *pointer; /* FLAW: the value pointed to by pointer is undefined */\n', '            delete pointer;\n', '            printLine(data);\n', '        }\n', '    }\n', '}\n'] , 1
