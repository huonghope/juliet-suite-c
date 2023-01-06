/* TEMPLATE GENERATED TESTCASE FILE
Filename: CWE758_Undefined_Behavior__int_pointer_alloca_use_13.c
Label Definition File: CWE758_Undefined_Behavior.alloc.label.xml
Template File: point-flaw-13.tmpl.c
*/
/*
 * @description
 * CWE: 758 Undefined Behavior
 * Sinks: alloca_use
 *    GoodSink: Initialize then use data
 *    BadSink : Use data from alloca without initialization
 * Flow Variant: 13 Control flow: if(GLOBAL_CONST_FIVE==5) and if(GLOBAL_CONST_FIVE!=5)
 *
 * */

#include "std_testcase.h"

#ifndef OMITBAD

void CWE758_Undefined_Behavior__int_pointer_alloca_use_13_bad()
{
    if(GLOBAL_CONST_FIVE==5)
    {
        {
            int * * pointer = (int * *)ALLOCA(sizeof(int *));
            int * data = *pointer; /* FLAW: the value pointed to by pointer is undefined */
            printIntLine(*data);
        }
    }
}

#endif /* OMITBAD */

#ifndef OMITGOOD

/* good1() uses if(GLOBAL_CONST_FIVE!=5) instead of if(GLOBAL_CONST_FIVE==5) */
static void good1()
{
    if(GLOBAL_CONST_FIVE!=5)
    {
        /* INCIDENTAL: CWE 561 Dead Code, the code below will never run */
        printLine("Benign, fixed string");
    }
    else
    {
        {
            int * data;
            int * * pointer = (int * *)ALLOCA(sizeof(int *));
            /* initialize both the pointer and the data pointed to */
            data = (int *)malloc(sizeof(int));
            if (data == NULL) {exit(-1);}
            *data = 5;
            *pointer = data; /* FIX: Assign a value to the thing pointed to by pointer */
            {
                int * data = *pointer;
                printIntLine(*data);
            }
        }
    }
}

/* good2() reverses the bodies in the if statement */
static void good2()
{
    if(GLOBAL_CONST_FIVE==5)
    {
        {
            int * data;
            int * * pointer = (int * *)ALLOCA(sizeof(int *));
            /* initialize both the pointer and the data pointed to */
            data = (int *)malloc(sizeof(int));
            if (data == NULL) {exit(-1);}
            *data = 5;
            *pointer = data; /* FIX: Assign a value to the thing pointed to by pointer */
            {
                int * data = *pointer;
                printIntLine(*data);
            }
        }
    }
}

void CWE758_Undefined_Behavior__int_pointer_alloca_use_13_good()
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
    CWE758_Undefined_Behavior__int_pointer_alloca_use_13_good();
    printLine("Finished good()");
#endif /* OMITGOOD */
#ifndef OMITBAD
    printLine("Calling bad()...");
    CWE758_Undefined_Behavior__int_pointer_alloca_use_13_bad();
    printLine("Finished bad()");
#endif /* OMITBAD */
    return 0;
}

#endif
['void CWE758_Undefined_Behavior__int_pointer_alloca_use_13_bad()', '}'] , 1
['{\n', '    if(GLOBAL_CONST_FIVE==5)\n', '    {\n', '        {\n', '            int * * pointer = (int * *)ALLOCA(sizeof(int *));\n', '            int * data = *pointer; /* FLAW: the value pointed to by pointer is undefined */\n', '            printIntLine(*data);\n', '        }\n', '    }\n', '}\n'] , 1
