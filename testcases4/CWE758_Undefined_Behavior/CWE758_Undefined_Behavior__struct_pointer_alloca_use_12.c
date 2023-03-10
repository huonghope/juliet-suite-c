/* TEMPLATE GENERATED TESTCASE FILE
Filename: CWE758_Undefined_Behavior__struct_pointer_alloca_use_12.c
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

void CWE758_Undefined_Behavior__struct_pointer_alloca_use_12_bad()
{
    if(globalReturnsTrueOrFalse())
    {
        {
            twoIntsStruct * * pointer = (twoIntsStruct * *)ALLOCA(sizeof(twoIntsStruct *));
            twoIntsStruct * data = *pointer; /* FLAW: the value pointed to by pointer is undefined */
            printIntLine(data->intOne);
            printIntLine(data->intTwo);
        }
    }
    else
    {
        {
            twoIntsStruct * data;
            twoIntsStruct * * pointer = (twoIntsStruct * *)ALLOCA(sizeof(twoIntsStruct *));
            /* initialize both the pointer and the data pointed to */
            data = (twoIntsStruct *)malloc(sizeof(twoIntsStruct));
            if (data == NULL) {exit(-1);}
            data->intOne = 5;
            data->intTwo = 6;
            *pointer = data; /* FIX: Assign a value to the thing pointed to by pointer */
            {
                twoIntsStruct * data = *pointer;
                printIntLine(data->intOne);
                printIntLine(data->intTwo);
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
            twoIntsStruct * data;
            twoIntsStruct * * pointer = (twoIntsStruct * *)ALLOCA(sizeof(twoIntsStruct *));
            /* initialize both the pointer and the data pointed to */
            data = (twoIntsStruct *)malloc(sizeof(twoIntsStruct));
            if (data == NULL) {exit(-1);}
            data->intOne = 5;
            data->intTwo = 6;
            *pointer = data; /* FIX: Assign a value to the thing pointed to by pointer */
            {
                twoIntsStruct * data = *pointer;
                printIntLine(data->intOne);
                printIntLine(data->intTwo);
            }
        }
    }
    else
    {
        {
            twoIntsStruct * data;
            twoIntsStruct * * pointer = (twoIntsStruct * *)ALLOCA(sizeof(twoIntsStruct *));
            /* initialize both the pointer and the data pointed to */
            data = (twoIntsStruct *)malloc(sizeof(twoIntsStruct));
            if (data == NULL) {exit(-1);}
            data->intOne = 5;
            data->intTwo = 6;
            *pointer = data; /* FIX: Assign a value to the thing pointed to by pointer */
            {
                twoIntsStruct * data = *pointer;
                printIntLine(data->intOne);
                printIntLine(data->intTwo);
            }
        }
    }
}

void CWE758_Undefined_Behavior__struct_pointer_alloca_use_12_good()
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
    CWE758_Undefined_Behavior__struct_pointer_alloca_use_12_good();
    printLine("Finished good()");
#endif /* OMITGOOD */
#ifndef OMITBAD
    printLine("Calling bad()...");
    CWE758_Undefined_Behavior__struct_pointer_alloca_use_12_bad();
    printLine("Finished bad()");
#endif /* OMITBAD */
    return 0;
}

#endif
['void CWE758_Undefined_Behavior__struct_pointer_alloca_use_12_bad()', '}'] , 1
['{\n', '    if(globalReturnsTrueOrFalse())\n', '    {\n', '        {\n', '            twoIntsStruct * * pointer = (twoIntsStruct * *)ALLOCA(sizeof(twoIntsStruct *));\n', '            twoIntsStruct * data = *pointer; /* FLAW: the value pointed to by pointer is undefined */\n', '            printIntLine(data->intOne);\n', '            printIntLine(data->intTwo);\n', '        }\n', '    }\n', '    else\n', '    {\n', '        {\n', '            twoIntsStruct * data;\n', '            twoIntsStruct * * pointer = (twoIntsStruct * *)ALLOCA(sizeof(twoIntsStruct *));\n', '            /* initialize both the pointer and the data pointed to */\n', '            data = (twoIntsStruct *)malloc(sizeof(twoIntsStruct));\n', '            if (data == NULL) {exit(-1);}\n', '            data->intOne = 5;\n', '            data->intTwo = 6;\n', '            *pointer = data; /* FIX: Assign a value to the thing pointed to by pointer */\n', '            {\n', '                twoIntsStruct * data = *pointer;\n', '                printIntLine(data->intOne);\n', '                printIntLine(data->intTwo);\n', '            }\n', '        }\n', '    }\n', '}\n'] , 1
