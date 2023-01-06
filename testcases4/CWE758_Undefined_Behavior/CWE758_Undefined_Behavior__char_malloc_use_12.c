/* TEMPLATE GENERATED TESTCASE FILE
Filename: CWE758_Undefined_Behavior__char_malloc_use_12.c
Label Definition File: CWE758_Undefined_Behavior.alloc.label.xml
Template File: point-flaw-12.tmpl.c
*/
/*
 * @description
 * CWE: 758 Undefined Behavior
 * Sinks: malloc_use
 *    GoodSink: Initialize then use data
 *    BadSink : Use data from malloc without initialization
 * Flow Variant: 12 Control flow: if(globalReturnsTrueOrFalse())
 *
 * */

#include "std_testcase.h"

#ifndef OMITBAD

void CWE758_Undefined_Behavior__char_malloc_use_12_bad()
{
    if(globalReturnsTrueOrFalse())
    {
        {
            char * pointer = (char *)malloc(sizeof(char));
            if (pointer == NULL) {exit(-1);}
            char data = *pointer; /* FLAW: the value pointed to by pointer is undefined */
            free(pointer);
            printHexCharLine(data);
        }
    }
    else
    {
        {
            char data;
            char * pointer = (char *)malloc(sizeof(char));
            if (pointer == NULL) {exit(-1);}
            data = 5;
            *pointer = data; /* FIX: Assign a value to the thing pointed to by pointer */
            {
                char data = *pointer;
                printHexCharLine(data);
            }
            free(pointer);
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
            char data;
            char * pointer = (char *)malloc(sizeof(char));
            if (pointer == NULL) {exit(-1);}
            data = 5;
            *pointer = data; /* FIX: Assign a value to the thing pointed to by pointer */
            {
                char data = *pointer;
                printHexCharLine(data);
            }
            free(pointer);
        }
    }
    else
    {
        {
            char data;
            char * pointer = (char *)malloc(sizeof(char));
            if (pointer == NULL) {exit(-1);}
            data = 5;
            *pointer = data; /* FIX: Assign a value to the thing pointed to by pointer */
            {
                char data = *pointer;
                printHexCharLine(data);
            }
            free(pointer);
        }
    }
}

void CWE758_Undefined_Behavior__char_malloc_use_12_good()
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
    CWE758_Undefined_Behavior__char_malloc_use_12_good();
    printLine("Finished good()");
#endif /* OMITGOOD */
#ifndef OMITBAD
    printLine("Calling bad()...");
    CWE758_Undefined_Behavior__char_malloc_use_12_bad();
    printLine("Finished bad()");
#endif /* OMITBAD */
    return 0;
}

#endif
['void CWE758_Undefined_Behavior__char_malloc_use_12_bad()', '}'] , 1
['{\n', '    if(globalReturnsTrueOrFalse())\n', '    {\n', '        {\n', '            char * pointer = (char *)malloc(sizeof(char));\n', '            if (pointer == NULL) {exit(-1);}\n', '            char data = *pointer; /* FLAW: the value pointed to by pointer is undefined */\n', '            free(pointer);\n', '            printHexCharLine(data);\n', '        }\n', '    }\n', '    else\n', '    {\n', '        {\n', '            char data;\n', '            char * pointer = (char *)malloc(sizeof(char));\n', '            if (pointer == NULL) {exit(-1);}\n', '            data = 5;\n', '            *pointer = data; /* FIX: Assign a value to the thing pointed to by pointer */\n', '            {\n', '                char data = *pointer;\n', '                printHexCharLine(data);\n', '            }\n', '            free(pointer);\n', '        }\n', '    }\n', '}\n'] , 1
