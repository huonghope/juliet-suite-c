/* TEMPLATE GENERATED TESTCASE FILE
Filename: CWE197_Numeric_Truncation_Error__int_rand_to_short_52a.c
Label Definition File: CWE197_Numeric_Truncation_Error__int.label.xml
Template File: sources-sink-52a.tmpl.c
*/
/*
 * @description
 * CWE: 197 Numeric Truncation Error
 * BadSource: rand Set data to result of rand(), which may be zero
 * GoodSource: Less than CHAR_MAX
 * Sink: to_short
 *    BadSink : Convert data to a short
 * Flow Variant: 52 Data flow: data passed as an argument from one function to another to another in three different source files
 *
 * */

#include "std_testcase.h"

#ifndef OMITBAD

/* bad function declaration */
void CWE197_Numeric_Truncation_Error__int_rand_to_short_52b_badSink(int data);

void CWE197_Numeric_Truncation_Error__int_rand_to_short_52_bad()
{
    int data;
    /* Initialize data */
    data = -1;
    /* POTENTIAL FLAW: Set data to a random value */
    data = RAND32();
    CWE197_Numeric_Truncation_Error__int_rand_to_short_52b_badSink(data);
}

#endif /* OMITBAD */

#ifndef OMITGOOD

/* good function declaration */
void CWE197_Numeric_Truncation_Error__int_rand_to_short_52b_goodG2BSink(int data);

/* goodG2B uses the GoodSource with the BadSink */
static void goodG2B()
{
    int data;
    /* Initialize data */
    data = -1;
    /* FIX: Use a positive integer less than CHAR_MAX*/
    data = CHAR_MAX-5;
    CWE197_Numeric_Truncation_Error__int_rand_to_short_52b_goodG2BSink(data);
}

void CWE197_Numeric_Truncation_Error__int_rand_to_short_52_good()
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
    CWE197_Numeric_Truncation_Error__int_rand_to_short_52_good();
    printLine("Finished good()");
#endif /* OMITGOOD */
#ifndef OMITBAD
    printLine("Calling bad()...");
    CWE197_Numeric_Truncation_Error__int_rand_to_short_52_bad();
    printLine("Finished bad()");
#endif /* OMITBAD */
    return 0;
}

#endif
