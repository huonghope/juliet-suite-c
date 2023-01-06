/* TEMPLATE GENERATED TESTCASE FILE
Filename: CWE563_Unused_Variable__unused_value_int64_t_43.cpp
Label Definition File: CWE563_Unused_Variable__unused_value.label.xml
Template File: sources-sinks-43.tmpl.cpp
*/
/*
 * @description
 * CWE: 563 Unused Variable
 * BadSource:  Initialize data
 * GoodSource: Initialize and use data
 * Sinks:
 *    GoodSink: Use data
 *    BadSink : Initialize and use data
 * Flow Variant: 43 Data flow: data flows using a C++ reference from one function to another in the same source file
 *
 * */

#include "std_testcase.h"

#include <wchar.h>

namespace CWE563_Unused_Variable__unused_value_int64_t_43
{

#ifndef OMITBAD

static void badSource(int64_t &data)
{
    /* POTENTIAL FLAW: Initialize, but do not use data */
    data = 5LL;
}

void bad()
{
    int64_t data;
    badSource(data);
    /* POTENTIAL FLAW: Possibly over-write the initial value of data before using it */
    data = 10LL;
    printLongLongLine(data);
}

#endif /* OMITBAD */

#ifndef OMITGOOD

/* goodG2B() uses the GoodSource with the BadSink */
static void goodG2BSource(int64_t &data)
{
    /* FIX: Initialize and use data before it is overwritten */
    data = 5LL;
    printLongLongLine(data);
}

static void goodG2B()
{
    int64_t data;
    goodG2BSource(data);
    /* POTENTIAL FLAW: Possibly over-write the initial value of data before using it */
    data = 10LL;
    printLongLongLine(data);
}

/* goodB2G() uses the BadSource with the GoodSink */
static void goodB2GSource(int64_t &data)
{
    /* POTENTIAL FLAW: Initialize, but do not use data */
    data = 5LL;
}

static void goodB2G()
{
    int64_t data;
    goodB2GSource(data);
    /* FIX: Use data without over-writing its value */
    printLongLongLine(data);
}

void good()
{
    goodG2B();
    goodB2G();
}

#endif /* OMITGOOD */

} /* close namespace */

/* Below is the main(). It is only used when building this testcase on
   its own for testing or for building a binary to use in testing binary
   analysis tools. It is not used when compiling all the testcases as one
   application, which is how source code analysis tools are tested. */

#ifdef INCLUDEMAIN

using namespace CWE563_Unused_Variable__unused_value_int64_t_43; /* so that we can use good and bad easily */

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
