/* TEMPLATE GENERATED TESTCASE FILE
Filename: CWE789_Uncontrolled_Mem_Alloc__malloc_wchar_t_fscanf_83_bad.cpp
Label Definition File: CWE789_Uncontrolled_Mem_Alloc__malloc.label.xml
Template File: sources-sinks-83_bad.tmpl.cpp
*/
/*
 * @description
 * CWE: 789 Uncontrolled Memory Allocation
 * BadSource: fscanf Read data from the console using fscanf()
 * GoodSource: Small number greater than zero
 * Sinks:
 *    GoodSink: Allocate memory with malloc() and check the size of the memory to be allocated
 *    BadSink : Allocate memory with malloc(), but incorrectly check the size of the memory to be allocated
 * Flow Variant: 83 Data flow: data passed to class constructor and destructor by declaring the class object on the stack
 *
 * */
#ifndef OMITBAD

#include "std_testcase.h"
#include "CWE789_Uncontrolled_Mem_Alloc__malloc_wchar_t_fscanf_83.h"

#define HELLO_STRING L"hello"

namespace CWE789_Uncontrolled_Mem_Alloc__malloc_wchar_t_fscanf_83
{
CWE789_Uncontrolled_Mem_Alloc__malloc_wchar_t_fscanf_83_bad::CWE789_Uncontrolled_Mem_Alloc__malloc_wchar_t_fscanf_83_bad(size_t dataCopy)
{
    data = dataCopy;
    /* POTENTIAL FLAW: Read data from the console using fscanf() */
    fscanf(stdin, "%zu", &data);
}

CWE789_Uncontrolled_Mem_Alloc__malloc_wchar_t_fscanf_83_bad::~CWE789_Uncontrolled_Mem_Alloc__malloc_wchar_t_fscanf_83_bad()
{
    {
        wchar_t * myString;
        /* POTENTIAL FLAW: No MAXIMUM limitation for memory allocation, but ensure data is large enough
         * for the wcscpy() function to not cause a buffer overflow */
        /* INCIDENTAL FLAW: The source could cause a type overrun in data or in the memory allocation */
        if (data > wcslen(HELLO_STRING))
        {
            myString = (wchar_t *)malloc(data*sizeof(wchar_t));
            if (myString == NULL) {exit(-1);}
            /* Copy a small string into myString */
            wcscpy(myString, HELLO_STRING);
            printWLine(myString);
            free(myString);
        }
        else
        {
            printLine("Input is less than the length of the source string");
        }
    }
}
}
#endif /* OMITBAD */
