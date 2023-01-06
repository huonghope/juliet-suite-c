/* TEMPLATE GENERATED TESTCASE FILE
Filename: CWE762_Mismatched_Memory_Management_Routines__strdup_delete_array_char_83_goodB2G.cpp
Label Definition File: CWE762_Mismatched_Memory_Management_Routines__strdup_delete_array.label.xml
Template File: sources-sinks-83_goodB2G.tmpl.cpp
*/
/*
 * @description
 * CWE: 762 Mismatched Memory Management Routines
 * BadSource:  Allocate data using strdup()
 * GoodSource: Allocate data using new []
 * Sinks:
 *    GoodSink: Deallocate data using free()
 *    BadSink : Deallocate data using delete []
 * Flow Variant: 83 Data flow: data passed to class constructor and destructor by declaring the class object on the stack
 *
 * */
#ifndef OMITGOOD

#include "std_testcase.h"
#include "CWE762_Mismatched_Memory_Management_Routines__strdup_delete_array_char_83.h"

namespace CWE762_Mismatched_Memory_Management_Routines__strdup_delete_array_char_83
{
CWE762_Mismatched_Memory_Management_Routines__strdup_delete_array_char_83_goodB2G::CWE762_Mismatched_Memory_Management_Routines__strdup_delete_array_char_83_goodB2G(char * dataCopy)
{
    data = dataCopy;
    {
        char myString[] = "myString";
        /* POTENTIAL FLAW: Allocate memory with a function that requires free() to free the memory */
        data = strdup(myString);
    }
}

CWE762_Mismatched_Memory_Management_Routines__strdup_delete_array_char_83_goodB2G::~CWE762_Mismatched_Memory_Management_Routines__strdup_delete_array_char_83_goodB2G()
{
    /* FIX: Deallocate the memory using free() */
    free(data);
}
}
#endif /* OMITGOOD */
