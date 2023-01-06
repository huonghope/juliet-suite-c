/* TEMPLATE GENERATED TESTCASE FILE
Filename: CWE590_Free_Memory_Not_on_Heap__delete_array_int64_t_static_54d.cpp
Label Definition File: CWE590_Free_Memory_Not_on_Heap__delete_array.label.xml
Template File: sources-sink-54d.tmpl.cpp
*/
/*
 * @description
 * CWE: 590 Free Memory Not on Heap
 * BadSource: static Data buffer is declared static on the stack
 * GoodSource: Allocate memory on the heap
 * Sink:
 *    BadSink : Print then free data
 * Flow Variant: 54 Data flow: data passed as an argument from one function through three others to a fifth; all five functions are in different source files
 *
 * */

#include "std_testcase.h"

#include <wchar.h>

namespace CWE590_Free_Memory_Not_on_Heap__delete_array_int64_t_static_54
{

/* all the sinks are the same, we just want to know where the hit originated if a tool flags one */

#ifndef OMITBAD

/* bad function declaration */
void badSink_e(int64_t * data);

void badSink_d(int64_t * data)
{
    badSink_e(data);
}

#endif /* OMITBAD */

#ifndef OMITGOOD

/* goodG2B uses the GoodSource with the BadSink */
void goodG2BSink_e(int64_t * data);

void goodG2BSink_d(int64_t * data)
{
    goodG2BSink_e(data);
}

#endif /* OMITGOOD */

} /* close namespace */
