/* TEMPLATE GENERATED TESTCASE FILE
Filename: CWE758_Undefined_Behavior__char_new_use_12.cpp
Label Definition File: CWE758_Undefined_Behavior.new.label.xml
Template File: point-flaw-12.tmpl.cpp
*/
/*
 * @description
 * CWE: 758 Undefined Behavior
 * Sinks: new_use
 *    GoodSink: Initialize then use data
 *    BadSink : Use data
 * Flow Variant: 12 Control flow: if(globalReturnsTrueOrFalse())
 *
 * */

#include "std_testcase.h"

namespace CWE758_Undefined_Behavior__char_new_use_12
{

#ifndef OMITBAD

void bad()
{
    if(globalReturnsTrueOrFalse())
    {
        {
            char * pointer = new char;
            char data = *pointer; /* FLAW: the value pointed to by pointer is undefined */
            delete pointer;
            printHexCharLine(data);
        }
    }
    else
    {
        {
            char data;
            data = 5;
            char * pointer = new char;
            *pointer = data; /* FIX: Assign a value to the thing pointed to by pointer */
            {
                char data = *pointer;
                printHexCharLine(data);
            }
            delete pointer;
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
            data = 5;
            char * pointer = new char;
            *pointer = data; /* FIX: Assign a value to the thing pointed to by pointer */
            {
                char data = *pointer;
                printHexCharLine(data);
            }
            delete pointer;
        }
    }
    else
    {
        {
            char data;
            data = 5;
            char * pointer = new char;
            *pointer = data; /* FIX: Assign a value to the thing pointed to by pointer */
            {
                char data = *pointer;
                printHexCharLine(data);
            }
            delete pointer;
        }
    }
}

void good()
{
    good1();
}

#endif /* OMITGOOD */

} /* close namespace */

/* Below is the main(). It is only used when building this testcase on
   its own for testing or for building a binary to use in testing binary
   analysis tools. It is not used when compiling all the testcases as one
   application, which is how source code analysis tools are tested. */

#ifdef INCLUDEMAIN

using namespace CWE758_Undefined_Behavior__char_new_use_12; /* so that we can use good and bad easily */

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
['{\n', '    if(globalReturnsTrueOrFalse())\n', '    {\n', '        {\n', '            char * pointer = new char;\n', '            char data = *pointer; /* FLAW: the value pointed to by pointer is undefined */\n', '            delete pointer;\n', '            printHexCharLine(data);\n', '        }\n', '    }\n', '    else\n', '    {\n', '        {\n', '            char data;\n', '            data = 5;\n', '            char * pointer = new char;\n', '            *pointer = data; /* FIX: Assign a value to the thing pointed to by pointer */\n', '            {\n', '                char data = *pointer;\n', '                printHexCharLine(data);\n', '            }\n', '            delete pointer;\n', '        }\n', '    }\n', '}\n'] , 1