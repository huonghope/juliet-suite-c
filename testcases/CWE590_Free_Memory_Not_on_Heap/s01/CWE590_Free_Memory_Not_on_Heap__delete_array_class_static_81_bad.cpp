/* TEMPLATE GENERATED TESTCASE FILE
Filename: CWE590_Free_Memory_Not_on_Heap__delete_array_class_static_81_bad.cpp
Label Definition File: CWE590_Free_Memory_Not_on_Heap__delete_array.label.xml
Template File: sources-sink-81_bad.tmpl.cpp
*/
/*
 * @description
 * CWE: 590 Free Memory Not on Heap
 * BadSource: static Data buffer is declared static on the stack
 * GoodSource: Allocate memory on the heap
 * Sinks:
 *    BadSink : Print then free data
 * Flow Variant: 81 Data flow: data passed in a parameter to a virtual method called via a reference
 *
 * */
#ifndef OMITBAD

#include "std_testcase.h"
#include "CWE590_Free_Memory_Not_on_Heap__delete_array_class_static_81.h"

namespace CWE590_Free_Memory_Not_on_Heap__delete_array_class_static_81
{

void CWE590_Free_Memory_Not_on_Heap__delete_array_class_static_81_bad::action(TwoIntsClass * data) const
{
    printIntLine(data[0].intOne);
    /* POTENTIAL FLAW: Possibly deallocating memory allocated on the stack */
    delete [] data;
}

}
#endif /* OMITBAD */
