/* TEMPLATE GENERATED TESTCASE FILE
Filename: CWE401_Memory_Leak__strdup_wchar_t_17.c
Label Definition File: CWE401_Memory_Leak__strdup.label.xml
Template File: sources-sinks-17.tmpl.c
*/
/*
 * @description
 * CWE: 401 Memory Leak
 * BadSource:  Allocate data using wcsdup()
 * GoodSource: Allocate data on the stack
 * Sinks:
 *    GoodSink: call free() on data
 *    BadSink : no deallocation of data
 * Flow Variant: 17 Control flow: for loops
 *
 * */

#include "std_testcase.h"

#include <wchar.h>

#ifndef OMITBAD

void CWE401_Memory_Leak__strdup_wchar_t_17_bad()
{
    int i,j;
    wchar_t * data;
    data = NULL;
    for(i = 0; i < 1; i++)
    {
        {
            wchar_t myString[] = L"myString";
            /* POTENTIAL FLAW: Allocate memory from the heap using a function that requires free() for deallocation */
            data = wcsdup(myString);
            /* Use data */
            printWLine(data);
        }
    }
    for(j = 0; j < 1; j++)
    {
        /* POTENTIAL FLAW: No deallocation of memory */
        /* no deallocation */
        ; /* empty statement needed for some flow variants */
    }
}

#endif /* OMITBAD */

#ifndef OMITGOOD

/* goodB2G() - use badsource and goodsink in the for statements */
static void goodB2G()
{
    int i,k;
    wchar_t * data;
    data = NULL;
    for(i = 0; i < 1; i++)
    {
        {
            wchar_t myString[] = L"myString";
            /* POTENTIAL FLAW: Allocate memory from the heap using a function that requires free() for deallocation */
            data = wcsdup(myString);
            /* Use data */
            printWLine(data);
        }
    }
    for(k = 0; k < 1; k++)
    {
        /* FIX: Deallocate memory initialized in the source */
        free(data);
    }
}

/* goodG2B() - use goodsource and badsink in the for statements */
static void goodG2B()
{
    int h,j;
    wchar_t * data;
    data = NULL;
    for(h = 0; h < 1; h++)
    {
        /* FIX: Use memory allocated on the stack with ALLOCA */
        data = (wchar_t *)ALLOCA(100*sizeof(wchar_t));
        /* Initialize then use data */
        wcscpy(data, L"a string");
        printWLine(data);
    }
    for(j = 0; j < 1; j++)
    {
        /* POTENTIAL FLAW: No deallocation of memory */
        /* no deallocation */
        ; /* empty statement needed for some flow variants */
    }
}

void CWE401_Memory_Leak__strdup_wchar_t_17_good()
{
    goodB2G();
    goodG2B();
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
    CWE401_Memory_Leak__strdup_wchar_t_17_good();
    printLine("Finished good()");
#endif /* OMITGOOD */
#ifndef OMITBAD
    printLine("Calling bad()...");
    CWE401_Memory_Leak__strdup_wchar_t_17_bad();
    printLine("Finished bad()");
#endif /* OMITBAD */
    return 0;
}

#endif
