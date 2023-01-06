/* TEMPLATE GENERATED TESTCASE FILE
Filename: CWE369_Divide_by_Zero__int_fgets_divide_83_goodB2G.cpp
Label Definition File: CWE369_Divide_by_Zero__int.label.xml
Template File: sources-sinks-83_goodB2G.tmpl.cpp
*/
/*
 * @description
 * CWE: 369 Divide by Zero
 * BadSource: fgets Read data from the console using fgets()
 * GoodSource: Non-zero
 * Sinks: divide
 *    GoodSink: Check for zero before dividing
 *    BadSink : Divide a constant by data
 * Flow Variant: 83 Data flow: data passed to class constructor and destructor by declaring the class object on the stack
 *
 * */
#ifndef OMITGOOD

#include "std_testcase.h"
#include "CWE369_Divide_by_Zero__int_fgets_divide_83.h"

#define CHAR_ARRAY_SIZE (3 * sizeof(data) + 2)

namespace CWE369_Divide_by_Zero__int_fgets_divide_83
{
CWE369_Divide_by_Zero__int_fgets_divide_83_goodB2G::CWE369_Divide_by_Zero__int_fgets_divide_83_goodB2G(int dataCopy)
{
    data = dataCopy;
    {
        char inputBuffer[CHAR_ARRAY_SIZE] = "";
        /* POTENTIAL FLAW: Read data from the console using fgets() */
        if (fgets(inputBuffer, CHAR_ARRAY_SIZE, stdin) != NULL)
        {
            /* Convert to int */
            data = atoi(inputBuffer);
        }
        else
        {
            printLine("fgets() failed.");
        }
    }
}

CWE369_Divide_by_Zero__int_fgets_divide_83_goodB2G::~CWE369_Divide_by_Zero__int_fgets_divide_83_goodB2G()
{
    /* FIX: test for a zero denominator */
    if( data != 0 )
    {
        printIntLine(100 / data);
    }
    else
    {
        printLine("This would result in a divide by zero");
    }
}
}
#endif /* OMITGOOD */
