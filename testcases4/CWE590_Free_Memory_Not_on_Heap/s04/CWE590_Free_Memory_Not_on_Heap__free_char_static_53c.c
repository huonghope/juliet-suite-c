/* TEMPLATE GENERATED TESTCASE FILE
Filename: CWE590_Free_Memory_Not_on_Heap__free_char_static_53c.c
Label Definition File: CWE590_Free_Memory_Not_on_Heap__free.label.xml
Template File: sources-sink-53c.tmpl.c
*/
/*
 * @description
 * CWE: 590 Free Memory Not on Heap
 * BadSource: static Data buffer is declared static on the stack
 * GoodSource: Allocate memory on the heap
 * Sink:
 *    BadSink : Print then free data
 * Flow Variant: 53 Data flow: data passed as an argument from one function through two others to a fourth; all four functions are in different source files
 *
 * */

#include "std_testcase.h"

#include <wchar.h>

/* all the sinks are the same, we just want to know where the hit originated if a tool flags one */

#ifndef OMITBAD

/* bad function declaration */
void CWE590_Free_Memory_Not_on_Heap__free_char_static_53d_badSink(char * data);

void CWE590_Free_Memory_Not_on_Heap__free_char_static_53c_badSink(char * data)
{
    CWE590_Free_Memory_Not_on_Heap__free_char_static_53d_badSink(data);
}

#endif /* OMITBAD */

#ifndef OMITGOOD

/* good function declaration */
void CWE590_Free_Memory_Not_on_Heap__free_char_static_53d_goodG2BSink(char * data);

/* goodG2B uses the GoodSource with the BadSink */
void CWE590_Free_Memory_Not_on_Heap__free_char_static_53c_goodG2BSink(char * data)
{
    CWE590_Free_Memory_Not_on_Heap__free_char_static_53d_goodG2BSink(data);
}

#endif /* OMITGOOD */
