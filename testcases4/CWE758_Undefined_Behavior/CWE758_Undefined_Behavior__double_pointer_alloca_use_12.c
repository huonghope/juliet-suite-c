/* TEMPLATE GENERATED TESTCASE FILE
Filename: CWE758_Undefined_Behavior__double_pointer_alloca_use_12.c
Label Definition File: CWE758_Undefined_Behavior.alloc.label.xml
Template File: point-flaw-12.tmpl.c
*/
/*
 * @description
 * CWE: 758 Undefined Behavior
 * Sinks: alloca_use
 *    GoodSink: Initialize then use data
 *    BadSink : Use data from alloca without initialization
 * Flow Variant: 12 Control flow: if(globalReturnsTrueOrFalse())
 *
 * */

#include "std_testcase.h"

#ifndef OMITBAD

void CWE758_Undefined_Behavior__double_pointer_alloca_use_12_bad()
{
    if(globalReturnsTrueOrFalse())
    {
        {
            double * * pointer = (double * *)ALLOCA(sizeof(double *));
            double * data = *pointer; /* FLAW: the value pointed to by pointer is undefined */
            printDoubleLine(*data);
        }
    }
    else
    {
        {
            double * data;
            double * * pointer = (double * *)ALLOCA(sizeof(double *));
            /* initialize both the pointer and the data pointed to */
            data = (double *)malloc(sizeof(double));
            if (data == NULL) {exit(-1);}
            *data = 5.0;
            *pointer = data; /* FIX: Assign a value to the thing pointed to by pointer */
            {
                double * data = *pointer;
                printDoubleLine(*data);
            }
        }
    }
}

#endif /* OMITBAD */

#ifndef OMITGOOD

/* good1() uses the GoodSink on both sides of the "if" statement */
static void good1()
{
    if(globalReturnsTrueOrFalse())
    {
        {
            double * data;
            double * * pointer = (double * *)ALLOCA(sizeof(double *));
            /* initialize both the pointer and the data pointed to */
            data = (double *)malloc(sizeof(double));
            if (data == NULL) {exit(-1);}
            *data = 5.0;
            *pointer = data; /* FIX: Assign a value to the thing pointed to by pointer */
            {
                double * data = *pointer;
                printDoubleLine(*data);
            }
        }
    }
    else
    {
        {
            double * data;
            double * * pointer = (double * *)ALLOCA(sizeof(double *));
            /* initialize both the pointer and the data pointed to */
            data = (double *)malloc(sizeof(double));
            if (data == NULL) {exit(-1);}
            *data = 5.0;
            *pointer = data; /* FIX: Assign a value to the thing pointed to by pointer */
            {
                double * data = *pointer;
                printDoubleLine(*data);
            }
        }
    }
}

void CWE758_Undefined_Behavior__double_pointer_alloca_use_12_good()
{
    good1();
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
    CWE758_Undefined_Behavior__double_pointer_alloca_use_12_good();
    printLine("Finished good()");
#endif /* OMITGOOD */
#ifndef OMITBAD
    printLine("Calling bad()...");
    CWE758_Undefined_Behavior__double_pointer_alloca_use_12_bad();
    printLine("Finished bad()");
#endif /* OMITBAD */
    return 0;
}

#endif
['void CWE758_Undefined_Behavior__double_pointer_alloca_use_12_bad()', '}'] , 1
['{\n', '    if(globalReturnsTrueOrFalse())\n', '    {\n', '        {\n', '            double * * pointer = (double * *)ALLOCA(sizeof(double *));\n', '            double * data = *pointer; /* FLAW: the value pointed to by pointer is undefined */\n', '            printDoubleLine(*data);\n', '        }\n', '    }\n', '    else\n', '    {\n', '        {\n', '            double * data;\n', '            double * * pointer = (double * *)ALLOCA(sizeof(double *));\n', '            /* initialize both the pointer and the data pointed to */\n', '            data = (double *)malloc(sizeof(double));\n', '            if (data == NULL) {exit(-1);}\n', '            *data = 5.0;\n', '            *pointer = data; /* FIX: Assign a value to the thing pointed to by pointer */\n', '            {\n', '                double * data = *pointer;\n', '                printDoubleLine(*data);\n', '            }\n', '        }\n', '    }\n', '}\n'] , 1