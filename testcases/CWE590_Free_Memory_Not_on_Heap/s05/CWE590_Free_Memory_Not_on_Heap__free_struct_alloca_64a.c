/* TEMPLATE GENERATED TESTCASE FILE
Filename: CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_64a.c
Label Definition File: CWE590_Free_Memory_Not_on_Heap__free.label.xml
Template File: sources-sink-64a.tmpl.c
*/
/*
 * @description
 * CWE: 590 Free Memory Not on Heap
 * BadSource: alloca Data buffer is allocated on the stack with alloca()
 * GoodSource: Allocate memory on the heap
 * Sinks:
 *    BadSink : Print then free data
 * Flow Variant: 64 Data flow: void pointer to data passed from one function to another in different source files
 *
 * */

#include "std_testcase.h"

#include <wchar.h>

#ifndef OMITBAD

/* bad function declaration */
void CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_64b_badSink(void * dataVoidPtr);

void CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_64_bad()
{
    twoIntsStruct * data;
    data = NULL; /* Initialize data */
    {
        /* FLAW: data is allocated on the stack and deallocated in the BadSink */
        twoIntsStruct * dataBuffer = (twoIntsStruct *)ALLOCA(100*sizeof(twoIntsStruct));
        {
            size_t i;
            for (i = 0; i < 100; i++)
            {
                dataBuffer[i].intOne = 1;
                dataBuffer[i].intTwo = 1;
            }
        }
        data = dataBuffer;
    }
    CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_64b_badSink(&data);
}

#endif /* OMITBAD */

#ifndef OMITGOOD

/* goodG2B uses the GoodSource with the BadSink */
void CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_64b_goodG2BSink(void * dataVoidPtr);

static void goodG2B()
{
    twoIntsStruct * data;
    data = NULL; /* Initialize data */
    {
        /* FIX: data is allocated on the heap and deallocated in the BadSink */
        twoIntsStruct * dataBuffer = (twoIntsStruct *)malloc(100*sizeof(twoIntsStruct));
        if (dataBuffer == NULL)
        {
            printLine("malloc() failed");
            exit(1);
        }
        {
            size_t i;
            for (i = 0; i < 100; i++)
            {
                dataBuffer[i].intOne = 1;
                dataBuffer[i].intTwo = 1;
            }
        }
        data = dataBuffer;
    }
    CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_64b_goodG2BSink(&data);
}

void CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_64_good()
{
    goodG2B();
}

#endif /* OMITGOOD */

/* Below is the main(). It is only used when building this testcase on
 * its own for testing or for building a binary to use in testing binary
 * analysis tools. It is not used when compiling all the testcases as one
 * application, which is how source code analysis tools are tested.
 */

#ifdef INCLUDEMAIN

int main(int argc, char * argv[])
{
    /* seed randomness */
    srand( (unsigned)time(NULL) );
#ifndef OMITGOOD
    printLine("Calling good()...");
    CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_64_good();
    printLine("Finished good()");
#endif /* OMITGOOD */
#ifndef OMITBAD
    printLine("Calling bad()...");
    CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_64_bad();
    printLine("Finished bad()");
#endif /* OMITBAD */
    return 0;
}

#endif
