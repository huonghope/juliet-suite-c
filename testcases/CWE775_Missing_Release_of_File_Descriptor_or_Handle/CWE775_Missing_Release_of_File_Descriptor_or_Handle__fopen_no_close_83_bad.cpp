/* TEMPLATE GENERATED TESTCASE FILE
Filename: CWE775_Missing_Release_of_File_Descriptor_or_Handle__fopen_no_close_83_bad.cpp
Label Definition File: CWE775_Missing_Release_of_File_Descriptor_or_Handle__fopen_no_close.label.xml
Template File: source-sinks-83_bad.tmpl.cpp
*/
/*
 * @description
 * CWE: 775 Missing Release of File Descriptor or Handle After Effective Lifetime
 * BadSource:  Open a file using fopen()
 * Sinks:
 *    GoodSink: Close the file using fclose()
 *    BadSink : Do not close file
 * Flow Variant: 83 Data flow: data passed to class constructor and destructor by declaring the class object on the stack
 *
 * */
#ifndef OMITBAD

#include "std_testcase.h"
#include "CWE775_Missing_Release_of_File_Descriptor_or_Handle__fopen_no_close_83.h"

namespace CWE775_Missing_Release_of_File_Descriptor_or_Handle__fopen_no_close_83
{
CWE775_Missing_Release_of_File_Descriptor_or_Handle__fopen_no_close_83_bad::CWE775_Missing_Release_of_File_Descriptor_or_Handle__fopen_no_close_83_bad(FILE * dataCopy)
{
    data = dataCopy;
    /* POTENTIAL FLAW: Open a file without closing it */
    data = fopen("BadSource_fopen.txt", "w+");
}

CWE775_Missing_Release_of_File_Descriptor_or_Handle__fopen_no_close_83_bad::~CWE775_Missing_Release_of_File_Descriptor_or_Handle__fopen_no_close_83_bad()
{
    /* FLAW: No attempt to close the file */
    ; /* empty statement needed for some flow variants */
}
}
#endif /* OMITBAD */
