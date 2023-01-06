/* TEMPLATE GENERATED TESTCASE FILE
Filename: CWE758_Undefined_Behavior__class_pointer_new_use_12.cpp
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

namespace CWE758_Undefined_Behavior__class_pointer_new_use_12
{

#ifndef OMITBAD

void bad()
{
    if(globalReturnsTrueOrFalse())
    {
        {
            TwoIntsClass * * pointer = new TwoIntsClass *;
            TwoIntsClass * data = *pointer; /* FLAW: the value pointed to by pointer is undefined */
            delete pointer;
            printIntLine(data->intOne);
            printIntLine(data->intTwo);
        }
    }
    else
    {
        {
            TwoIntsClass * data;
            /* initialize both the pointer and the data pointed to */
            data = new TwoIntsClass;
            data->intOne = 5;
            data->intTwo = 6;
            TwoIntsClass * * pointer = new TwoIntsClass *;
            *pointer = data; /* FIX: Assign a value to the thing pointed to by pointer */
            {
                TwoIntsClass * data = *pointer;
                printIntLine(data->intOne);
                printIntLine(data->intTwo);
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
            TwoIntsClass * data;
            /* initialize both the pointer and the data pointed to */
            data = new TwoIntsClass;
            data->intOne = 5;
            data->intTwo = 6;
            TwoIntsClass * * pointer = new TwoIntsClass *;
            *pointer = data; /* FIX: Assign a value to the thing pointed to by pointer */
            {
                TwoIntsClass * data = *pointer;
                printIntLine(data->intOne);
                printIntLine(data->intTwo);
            }
            delete pointer;
        }
    }
    else
    {
        {
            TwoIntsClass * data;
            /* initialize both the pointer and the data pointed to */
            data = new TwoIntsClass;
            data->intOne = 5;
            data->intTwo = 6;
            TwoIntsClass * * pointer = new TwoIntsClass *;
            *pointer = data; /* FIX: Assign a value to the thing pointed to by pointer */
            {
                TwoIntsClass * data = *pointer;
                printIntLine(data->intOne);
                printIntLine(data->intTwo);
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

using namespace CWE758_Undefined_Behavior__class_pointer_new_use_12; /* so that we can use good and bad easily */

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
['{\n', '    if(globalReturnsTrueOrFalse())\n', '    {\n', '        {\n', '            TwoIntsClass * * pointer = new TwoIntsClass *;\n', '            TwoIntsClass * data = *pointer; /* FLAW: the value pointed to by pointer is undefined */\n', '            delete pointer;\n', '            printIntLine(data->intOne);\n', '            printIntLine(data->intTwo);\n', '        }\n', '    }\n', '    else\n', '    {\n', '        {\n', '            TwoIntsClass * data;\n', '            /* initialize both the pointer and the data pointed to */\n', '            data = new TwoIntsClass;\n', '            data->intOne = 5;\n', '            data->intTwo = 6;\n', '            TwoIntsClass * * pointer = new TwoIntsClass *;\n', '            *pointer = data; /* FIX: Assign a value to the thing pointed to by pointer */\n', '            {\n', '                TwoIntsClass * data = *pointer;\n', '                printIntLine(data->intOne);\n', '                printIntLine(data->intTwo);\n', '            }\n', '            delete pointer;\n', '        }\n', '    }\n', '}\n'] , 1
