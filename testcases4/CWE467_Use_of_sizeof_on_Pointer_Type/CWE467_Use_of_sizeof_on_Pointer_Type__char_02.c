/* TEMPLATE GENERATED TESTCASE FILE
Filename: CWE467_Use_of_sizeof_on_Pointer_Type__char_02.c
Label Definition File: CWE467_Use_of_sizeof_on_Pointer_Type.label.xml
Template File: point-flaw-02.tmpl.c
*/
/*
 * @description
 * CWE: 467 Use of sizeof() on a Pointer Type
 * Sinks: char
 *    GoodSink: Use sizeof() the data type
 *    BadSink : Use sizeof() the pointer and not the data type
 * Flow Variant: 02 Control flow: if(1) and if(0)
 *
 * */

#include "std_testcase.h"

#ifndef OMITBAD

void CWE467_Use_of_sizeof_on_Pointer_Type__char_02_bad()
{
    if(1)
    {
        {
            char * badChar = NULL;
            /* FLAW: Using sizeof the pointer and not the data type in malloc() */
            badChar = (char *)malloc(sizeof(badChar));
            if (badChar == NULL) {exit(-1);}
            *badChar = 'B';
            printHexCharLine(*badChar);
            free(badChar);
        }
    }
}

#endif /* OMITBAD */

#ifndef OMITGOOD




/* good1() uses if(0) instead of if(1) */
static void good1()
{
    if(0)
    {
        /* INCIDENTAL: CWE 561 Dead Code, the code below will never run */
        printLine("Benign, fixed string");
    }
    else
    {
        {
            char * goodChar = NULL;
            /* FIX: Using sizeof the data type in malloc() */
            goodChar = (char *)malloc(sizeof(*goodChar));
            if (goodChar == NULL) {exit(-1);}
            *goodChar = 'G';
            printHexCharLine(*goodChar);
            free(goodChar);
        }
    }
}

/* good2() reverses the bodies in the if statement */
static void good2()
{
    if(1)
    {
        {
            char * goodChar = NULL;
            /* FIX: Using sizeof the data type in malloc() */
            goodChar = (char *)malloc(sizeof(*goodChar));
            if (goodChar == NULL) {exit(-1);}
            *goodChar = 'G';
            printHexCharLine(*goodChar);
            free(goodChar);
        }
    }
}

void CWE467_Use_of_sizeof_on_Pointer_Type__char_02_good()
{
    good1();
    good2();
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
    CWE467_Use_of_sizeof_on_Pointer_Type__char_02_good();
    printLine("Finished good()");
#endif /* OMITGOOD */
#ifndef OMITBAD
    printLine("Calling bad()...");
    CWE467_Use_of_sizeof_on_Pointer_Type__char_02_bad();
    printLine("Finished bad()");
#endif /* OMITBAD */
    return 0;
}

#endif
