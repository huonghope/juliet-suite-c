/* TEMPLATE GENERATED TESTCASE FILE
Filename: CWE758_Undefined_Behavior__struct_alloca_use_07.c
Label Definition File: CWE758_Undefined_Behavior.alloc.label.xml
Template File: point-flaw-07.tmpl.c
*/
/*
 * @description
 * CWE: 758 Undefined Behavior
 * Sinks: alloca_use
 *    GoodSink: Initialize then use data
 *    BadSink : Use data from alloca without initialization
 * Flow Variant: 07 Control flow: if(staticFive==5) and if(staticFive!=5)
 *
 * */

#include "std_testcase.h"

/* The variable below is not declared "const", but is never assigned
   any other value so a tool should be able to identify that reads of
   this will always give its initialized value. */
static int staticFive = 5;

#ifndef OMITBAD

void CWE758_Undefined_Behavior__struct_alloca_use_07_bad()
{
    if(staticFive==5)
    {
        {
            twoIntsStruct * pointer = (twoIntsStruct *)ALLOCA(sizeof(twoIntsStruct));
            twoIntsStruct data = *pointer; /* FLAW: the value pointed to by pointer is undefined */
            printIntLine(data.intOne);
            printIntLine(data.intTwo);
        }
    }
}

#endif /* OMITBAD */

#ifndef OMITGOOD

/* good1() uses if(staticFive!=5) instead of if(staticFive==5) */
static void good1()
{
    if(staticFive!=5)
    {
        /* INCIDENTAL: CWE 561 Dead Code, the code below will never run */
        printLine("Benign, fixed string");
    }
    else
    {
        {
            twoIntsStruct data;
            twoIntsStruct * pointer = (twoIntsStruct *)ALLOCA(sizeof(twoIntsStruct));
            data.intOne = 1;
            data.intTwo = 2;
            *pointer = data; /* FIX: Assign a value to the thing pointed to by pointer */
            {
                twoIntsStruct data = *pointer;
                printIntLine(data.intOne);
                printIntLine(data.intTwo);
            }
        }
    }
}

/* good2() reverses the bodies in the if statement */
static void good2()
{
    if(staticFive==5)
    {
        {
            twoIntsStruct data;
            twoIntsStruct * pointer = (twoIntsStruct *)ALLOCA(sizeof(twoIntsStruct));
            data.intOne = 1;
            data.intTwo = 2;
            *pointer = data; /* FIX: Assign a value to the thing pointed to by pointer */
            {
                twoIntsStruct data = *pointer;
                printIntLine(data.intOne);
                printIntLine(data.intTwo);
            }
        }
    }
}

void CWE758_Undefined_Behavior__struct_alloca_use_07_good()
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
    CWE758_Undefined_Behavior__struct_alloca_use_07_good();
    printLine("Finished good()");
#endif /* OMITGOOD */
#ifndef OMITBAD
    printLine("Calling bad()...");
    CWE758_Undefined_Behavior__struct_alloca_use_07_bad();
    printLine("Finished bad()");
#endif /* OMITBAD */
    return 0;
}

#endif
['void CWE758_Undefined_Behavior__struct_alloca_use_07_bad()', '}'] , 1
['{\n', '    if(staticFive==5)\n', '    {\n', '        {\n', '            twoIntsStruct * pointer = (twoIntsStruct *)ALLOCA(sizeof(twoIntsStruct));\n', '            twoIntsStruct data = *pointer; /* FLAW: the value pointed to by pointer is undefined */\n', '            printIntLine(data.intOne);\n', '            printIntLine(data.intTwo);\n', '        }\n', '    }\n', '}\n'] , 1
