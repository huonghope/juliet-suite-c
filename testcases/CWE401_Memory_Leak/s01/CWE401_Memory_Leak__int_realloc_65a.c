/* TEMPLATE GENERATED TESTCASE FILE
Filename: CWE401_Memory_Leak__int_realloc_65a.c
Label Definition File: CWE401_Memory_Leak.c.label.xml
Template File: sources-sinks-65a.tmpl.c
*/
/*
 * @description
 * CWE: 401 Memory Leak
 * BadSource: realloc Allocate data using realloc()
 * GoodSource: Allocate data on the stack
 * Sinks:
 *    GoodSink: call free() on data
 *    BadSink : no deallocation of data
 * Flow Variant: 65 Data/control flow: data passed as an argument from one function to a function in a different source file called via a function pointer
 *
 * */

#include "std_testcase.h"

#include <wchar.h>

#ifndef OMITBAD

/* bad function declaration */
void CWE401_Memory_Leak__int_realloc_65b_badSink(int * data);

void CWE401_Memory_Leak__int_realloc_65_bad()
{
    int * data;
    /* define a function pointer */
    void (*funcPtr) (int *) = CWE401_Memory_Leak__int_realloc_65b_badSink;
    data = NULL;
    /* POTENTIAL FLAW: Allocate memory on the heap */
    data = (int *)realloc(data, 100*sizeof(int));
    if (data == NULL) {exit(-1);}
    /* Initialize and make use of data */
    data[0] = 5;
    printIntLine(data[0]);
    /* use the function pointer */
    funcPtr(data);
}

#endif /* OMITBAD */

#ifndef OMITGOOD

/* goodG2B uses the GoodSource with the BadSink */
void CWE401_Memory_Leak__int_realloc_65b_goodG2BSink(int * data);

static void goodG2B()
{
    int * data;
    void (*funcPtr) (int *) = CWE401_Memory_Leak__int_realloc_65b_goodG2BSink;
    data = NULL;
    /* FIX: Use memory allocated on the stack with ALLOCA */
    data = (int *)ALLOCA(100*sizeof(int));
    /* Initialize and make use of data */
    data[0] = 5;
    printIntLine(data[0]);
    funcPtr(data);
}

/* goodB2G uses the BadSource with the GoodSink */
void CWE401_Memory_Leak__int_realloc_65b_goodB2GSink(int * data);

static void goodB2G()
{
    int * data;
    void (*funcPtr) (int *) = CWE401_Memory_Leak__int_realloc_65b_goodB2GSink;
    data = NULL;
    /* POTENTIAL FLAW: Allocate memory on the heap */
    data = (int *)realloc(data, 100*sizeof(int));
    if (data == NULL) {exit(-1);}
    /* Initialize and make use of data */
    data[0] = 5;
    printIntLine(data[0]);
    funcPtr(data);
}

void CWE401_Memory_Leak__int_realloc_65_good()
{
    goodG2B();
    goodB2G();
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
    CWE401_Memory_Leak__int_realloc_65_good();
    printLine("Finished good()");
#endif /* OMITGOOD */
#ifndef OMITBAD
    printLine("Calling bad()...");
    CWE401_Memory_Leak__int_realloc_65_bad();
    printLine("Finished bad()");
#endif /* OMITBAD */
    return 0;
}

#endif
