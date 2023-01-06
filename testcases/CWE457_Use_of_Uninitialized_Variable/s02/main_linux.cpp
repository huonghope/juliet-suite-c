/* NOTE - eventually this file will be automatically updated using a Perl script that understand
 * the naming of test case files, functions, and namespaces.
 */

#include <time.h>   /* for time() */
#include <stdlib.h> /* for srand() */

#include "std_testcase.h"
#include "testcases.h"

int main(int argc, char * argv[]) {

	/* seed randomness */

	srand( (unsigned)time(NULL) );

	globalArgc = argc;
	globalArgv = argv;

#ifndef OMITGOOD

	/* Calling C good functions */
	/* BEGIN-AUTOGENERATED-C-GOOD-FUNCTION-CALLS */

	/* END-AUTOGENERATED-C-GOOD-FUNCTION-CALLS */





#ifdef __cplusplus
	/* Calling C++ good functions */
	/* BEGIN-AUTOGENERATED-CPP-GOOD-FUNCTION-CALLS */
	printLine("Calling CWE457_Use_of_Uninitialized_Variable__twointsclass_array_new_no_init_17::good();");
	CWE457_Use_of_Uninitialized_Variable__twointsclass_array_new_no_init_17::good();

	printLine("Calling CWE457_Use_of_Uninitialized_Variable__twointsclass_array_new_partial_init_13::good();");
	CWE457_Use_of_Uninitialized_Variable__twointsclass_array_new_partial_init_13::good();

	printLine("Calling CWE457_Use_of_Uninitialized_Variable__twointsclass_array_new_partial_init_14::good();");
	CWE457_Use_of_Uninitialized_Variable__twointsclass_array_new_partial_init_14::good();

	printLine("Calling CWE457_Use_of_Uninitialized_Variable__twointsclass_array_new_no_init_14::good();");
	CWE457_Use_of_Uninitialized_Variable__twointsclass_array_new_no_init_14::good();

	printLine("Calling CWE457_Use_of_Uninitialized_Variable__twointsclass_array_new_no_init_11::good();");
	CWE457_Use_of_Uninitialized_Variable__twointsclass_array_new_no_init_11::good();

	printLine("Calling CWE457_Use_of_Uninitialized_Variable__twointsclass_array_malloc_partial_init_14::good();");
	CWE457_Use_of_Uninitialized_Variable__twointsclass_array_malloc_partial_init_14::good();

	printLine("Calling CWE457_Use_of_Uninitialized_Variable__twointsclass_array_new_no_init_05::good();");
	CWE457_Use_of_Uninitialized_Variable__twointsclass_array_new_no_init_05::good();

	printLine("Calling CWE457_Use_of_Uninitialized_Variable__twointsclass_array_malloc_partial_init_62::good();");
	CWE457_Use_of_Uninitialized_Variable__twointsclass_array_malloc_partial_init_62::good();

	printLine("Calling CWE457_Use_of_Uninitialized_Variable__twointsclass_array_new_no_init_18::good();");
	CWE457_Use_of_Uninitialized_Variable__twointsclass_array_new_no_init_18::good();

	printLine("Calling CWE457_Use_of_Uninitialized_Variable__twointsclass_array_new_partial_init_04::good();");
	CWE457_Use_of_Uninitialized_Variable__twointsclass_array_new_partial_init_04::good();

	printLine("Calling CWE457_Use_of_Uninitialized_Variable__twointsclass_array_new_no_init_08::good();");
	CWE457_Use_of_Uninitialized_Variable__twointsclass_array_new_no_init_08::good();

	printLine("Calling CWE457_Use_of_Uninitialized_Variable__twointsclass_array_new_no_init_12::good();");
	CWE457_Use_of_Uninitialized_Variable__twointsclass_array_new_no_init_12::good();

	printLine("Calling CWE457_Use_of_Uninitialized_Variable__twointsclass_array_new_partial_init_10::good();");
	CWE457_Use_of_Uninitialized_Variable__twointsclass_array_new_partial_init_10::good();

	printLine("Calling CWE457_Use_of_Uninitialized_Variable__twointsclass_array_new_partial_init_17::good();");
	CWE457_Use_of_Uninitialized_Variable__twointsclass_array_new_partial_init_17::good();

	printLine("Calling CWE457_Use_of_Uninitialized_Variable__twointsclass_array_new_partial_init_09::good();");
	CWE457_Use_of_Uninitialized_Variable__twointsclass_array_new_partial_init_09::good();

	printLine("Calling CWE457_Use_of_Uninitialized_Variable__twointsclass_array_new_partial_init_16::good();");
	CWE457_Use_of_Uninitialized_Variable__twointsclass_array_new_partial_init_16::good();

	printLine("Calling CWE457_Use_of_Uninitialized_Variable__twointsclass_array_new_partial_init_11::good();");
	CWE457_Use_of_Uninitialized_Variable__twointsclass_array_new_partial_init_11::good();

	printLine("Calling CWE457_Use_of_Uninitialized_Variable__twointsclass_array_new_partial_init_12::good();");
	CWE457_Use_of_Uninitialized_Variable__twointsclass_array_new_partial_init_12::good();

	printLine("Calling CWE457_Use_of_Uninitialized_Variable__twointsclass_array_new_partial_init_43::good();");
	CWE457_Use_of_Uninitialized_Variable__twointsclass_array_new_partial_init_43::good();

	printLine("Calling CWE457_Use_of_Uninitialized_Variable__twointsclass_array_new_no_init_09::good();");
	CWE457_Use_of_Uninitialized_Variable__twointsclass_array_new_no_init_09::good();

	printLine("Calling CWE457_Use_of_Uninitialized_Variable__twointsclass_array_new_partial_init_62::good();");
	CWE457_Use_of_Uninitialized_Variable__twointsclass_array_new_partial_init_62::good();

	printLine("Calling CWE457_Use_of_Uninitialized_Variable__twointsclass_array_malloc_partial_init_12::good();");
	CWE457_Use_of_Uninitialized_Variable__twointsclass_array_malloc_partial_init_12::good();

	printLine("Calling CWE457_Use_of_Uninitialized_Variable__twointsclass_array_new_partial_init_63::good();");
	CWE457_Use_of_Uninitialized_Variable__twointsclass_array_new_partial_init_63::good();

	printLine("Calling CWE457_Use_of_Uninitialized_Variable__twointsclass_array_malloc_partial_init_64::good();");
	CWE457_Use_of_Uninitialized_Variable__twointsclass_array_malloc_partial_init_64::good();

	printLine("Calling CWE457_Use_of_Uninitialized_Variable__twointsclass_array_new_partial_init_64::good();");
	CWE457_Use_of_Uninitialized_Variable__twointsclass_array_new_partial_init_64::good();

	printLine("Calling CWE457_Use_of_Uninitialized_Variable__twointsclass_array_new_no_init_13::good();");
	CWE457_Use_of_Uninitialized_Variable__twointsclass_array_new_no_init_13::good();

	printLine("Calling CWE457_Use_of_Uninitialized_Variable__twointsclass_array_new_no_init_03::good();");
	CWE457_Use_of_Uninitialized_Variable__twointsclass_array_new_no_init_03::good();

	printLine("Calling CWE457_Use_of_Uninitialized_Variable__twointsclass_array_malloc_partial_init_15::good();");
	CWE457_Use_of_Uninitialized_Variable__twointsclass_array_malloc_partial_init_15::good();

	printLine("Calling CWE457_Use_of_Uninitialized_Variable__twointsclass_array_new_no_init_01::good();");
	CWE457_Use_of_Uninitialized_Variable__twointsclass_array_new_no_init_01::good();

	printLine("Calling CWE457_Use_of_Uninitialized_Variable__twointsclass_array_new_partial_init_03::good();");
	CWE457_Use_of_Uninitialized_Variable__twointsclass_array_new_partial_init_03::good();

	printLine("Calling CWE457_Use_of_Uninitialized_Variable__twointsclass_array_malloc_partial_init_08::good();");
	CWE457_Use_of_Uninitialized_Variable__twointsclass_array_malloc_partial_init_08::good();

	printLine("Calling CWE457_Use_of_Uninitialized_Variable__twointsclass_array_new_partial_init_07::good();");
	CWE457_Use_of_Uninitialized_Variable__twointsclass_array_new_partial_init_07::good();

	printLine("Calling CWE457_Use_of_Uninitialized_Variable__twointsclass_array_malloc_partial_init_10::good();");
	CWE457_Use_of_Uninitialized_Variable__twointsclass_array_malloc_partial_init_10::good();

	printLine("Calling CWE457_Use_of_Uninitialized_Variable__twointsclass_array_new_partial_init_02::good();");
	CWE457_Use_of_Uninitialized_Variable__twointsclass_array_new_partial_init_02::good();

	printLine("Calling CWE457_Use_of_Uninitialized_Variable__twointsclass_array_new_no_init_02::good();");
	CWE457_Use_of_Uninitialized_Variable__twointsclass_array_new_no_init_02::good();

	printLine("Calling CWE457_Use_of_Uninitialized_Variable__twointsclass_array_new_partial_init_01::good();");
	CWE457_Use_of_Uninitialized_Variable__twointsclass_array_new_partial_init_01::good();

	printLine("Calling CWE457_Use_of_Uninitialized_Variable__twointsclass_array_new_partial_init_05::good();");
	CWE457_Use_of_Uninitialized_Variable__twointsclass_array_new_partial_init_05::good();

	printLine("Calling CWE457_Use_of_Uninitialized_Variable__twointsclass_array_new_no_init_15::good();");
	CWE457_Use_of_Uninitialized_Variable__twointsclass_array_new_no_init_15::good();

	printLine("Calling CWE457_Use_of_Uninitialized_Variable__twointsclass_array_malloc_partial_init_43::good();");
	CWE457_Use_of_Uninitialized_Variable__twointsclass_array_malloc_partial_init_43::good();

	printLine("Calling CWE457_Use_of_Uninitialized_Variable__twointsclass_array_malloc_partial_init_16::good();");
	CWE457_Use_of_Uninitialized_Variable__twointsclass_array_malloc_partial_init_16::good();

	printLine("Calling CWE457_Use_of_Uninitialized_Variable__twointsclass_array_new_no_init_16::good();");
	CWE457_Use_of_Uninitialized_Variable__twointsclass_array_new_no_init_16::good();

	printLine("Calling CWE457_Use_of_Uninitialized_Variable__twointsclass_array_malloc_partial_init_07::good();");
	CWE457_Use_of_Uninitialized_Variable__twointsclass_array_malloc_partial_init_07::good();

	printLine("Calling CWE457_Use_of_Uninitialized_Variable__twointsclass_array_malloc_partial_init_03::good();");
	CWE457_Use_of_Uninitialized_Variable__twointsclass_array_malloc_partial_init_03::good();

	printLine("Calling CWE457_Use_of_Uninitialized_Variable__twointsclass_array_new_no_init_06::good();");
	CWE457_Use_of_Uninitialized_Variable__twointsclass_array_new_no_init_06::good();

	printLine("Calling CWE457_Use_of_Uninitialized_Variable__twointsclass_array_malloc_partial_init_06::good();");
	CWE457_Use_of_Uninitialized_Variable__twointsclass_array_malloc_partial_init_06::good();

	printLine("Calling CWE457_Use_of_Uninitialized_Variable__twointsclass_array_malloc_partial_init_17::good();");
	CWE457_Use_of_Uninitialized_Variable__twointsclass_array_malloc_partial_init_17::good();

	printLine("Calling CWE457_Use_of_Uninitialized_Variable__twointsclass_array_new_no_init_63::good();");
	CWE457_Use_of_Uninitialized_Variable__twointsclass_array_new_no_init_63::good();

	printLine("Calling CWE457_Use_of_Uninitialized_Variable__twointsclass_array_malloc_partial_init_09::good();");
	CWE457_Use_of_Uninitialized_Variable__twointsclass_array_malloc_partial_init_09::good();

	printLine("Calling CWE457_Use_of_Uninitialized_Variable__twointsclass_array_malloc_partial_init_05::good();");
	CWE457_Use_of_Uninitialized_Variable__twointsclass_array_malloc_partial_init_05::good();

	printLine("Calling CWE457_Use_of_Uninitialized_Variable__twointsclass_array_malloc_partial_init_04::good();");
	CWE457_Use_of_Uninitialized_Variable__twointsclass_array_malloc_partial_init_04::good();

	printLine("Calling CWE457_Use_of_Uninitialized_Variable__twointsclass_array_new_partial_init_06::good();");
	CWE457_Use_of_Uninitialized_Variable__twointsclass_array_new_partial_init_06::good();

	printLine("Calling CWE457_Use_of_Uninitialized_Variable__twointsclass_array_new_no_init_04::good();");
	CWE457_Use_of_Uninitialized_Variable__twointsclass_array_new_no_init_04::good();

	printLine("Calling CWE457_Use_of_Uninitialized_Variable__twointsclass_array_malloc_partial_init_02::good();");
	CWE457_Use_of_Uninitialized_Variable__twointsclass_array_malloc_partial_init_02::good();

	printLine("Calling CWE457_Use_of_Uninitialized_Variable__twointsclass_array_malloc_partial_init_01::good();");
	CWE457_Use_of_Uninitialized_Variable__twointsclass_array_malloc_partial_init_01::good();

	printLine("Calling CWE457_Use_of_Uninitialized_Variable__twointsclass_array_new_no_init_43::good();");
	CWE457_Use_of_Uninitialized_Variable__twointsclass_array_new_no_init_43::good();

	printLine("Calling CWE457_Use_of_Uninitialized_Variable__twointsclass_array_new_partial_init_15::good();");
	CWE457_Use_of_Uninitialized_Variable__twointsclass_array_new_partial_init_15::good();

	printLine("Calling CWE457_Use_of_Uninitialized_Variable__twointsclass_array_malloc_partial_init_18::good();");
	CWE457_Use_of_Uninitialized_Variable__twointsclass_array_malloc_partial_init_18::good();

	printLine("Calling CWE457_Use_of_Uninitialized_Variable__twointsclass_array_malloc_partial_init_11::good();");
	CWE457_Use_of_Uninitialized_Variable__twointsclass_array_malloc_partial_init_11::good();

	printLine("Calling CWE457_Use_of_Uninitialized_Variable__twointsclass_array_new_partial_init_08::good();");
	CWE457_Use_of_Uninitialized_Variable__twointsclass_array_new_partial_init_08::good();

	printLine("Calling CWE457_Use_of_Uninitialized_Variable__twointsclass_array_new_partial_init_18::good();");
	CWE457_Use_of_Uninitialized_Variable__twointsclass_array_new_partial_init_18::good();

	printLine("Calling CWE457_Use_of_Uninitialized_Variable__twointsclass_array_malloc_partial_init_63::good();");
	CWE457_Use_of_Uninitialized_Variable__twointsclass_array_malloc_partial_init_63::good();

	printLine("Calling CWE457_Use_of_Uninitialized_Variable__twointsclass_array_new_no_init_10::good();");
	CWE457_Use_of_Uninitialized_Variable__twointsclass_array_new_no_init_10::good();

	printLine("Calling CWE457_Use_of_Uninitialized_Variable__twointsclass_array_new_no_init_64::good();");
	CWE457_Use_of_Uninitialized_Variable__twointsclass_array_new_no_init_64::good();

	printLine("Calling CWE457_Use_of_Uninitialized_Variable__twointsclass_array_malloc_partial_init_13::good();");
	CWE457_Use_of_Uninitialized_Variable__twointsclass_array_malloc_partial_init_13::good();

	printLine("Calling CWE457_Use_of_Uninitialized_Variable__twointsclass_array_new_no_init_07::good();");
	CWE457_Use_of_Uninitialized_Variable__twointsclass_array_new_no_init_07::good();

	printLine("Calling CWE457_Use_of_Uninitialized_Variable__twointsclass_array_new_no_init_62::good();");
	CWE457_Use_of_Uninitialized_Variable__twointsclass_array_new_no_init_62::good();

	/* END-AUTOGENERATED-CPP-GOOD-FUNCTION-CALLS */

#endif /* __cplusplus */

#endif /* OMITGOOD */

#ifndef OMITBAD

	/* Calling C bad functions */
	/* BEGIN-AUTOGENERATED-C-BAD-FUNCTION-CALLS */

	/* END-AUTOGENERATED-C-BAD-FUNCTION-CALLS */




	
#ifdef __cplusplus
	/* Calling C++ bad functions */
	/* BEGIN-AUTOGENERATED-CPP-BAD-FUNCTION-CALLS */
	printLine("Calling CWE457_Use_of_Uninitialized_Variable__twointsclass_array_new_no_init_17::bad();");
	CWE457_Use_of_Uninitialized_Variable__twointsclass_array_new_no_init_17::bad();

	printLine("Calling CWE457_Use_of_Uninitialized_Variable__twointsclass_array_new_partial_init_13::bad();");
	CWE457_Use_of_Uninitialized_Variable__twointsclass_array_new_partial_init_13::bad();

	printLine("Calling CWE457_Use_of_Uninitialized_Variable__twointsclass_array_new_partial_init_14::bad();");
	CWE457_Use_of_Uninitialized_Variable__twointsclass_array_new_partial_init_14::bad();

	printLine("Calling CWE457_Use_of_Uninitialized_Variable__twointsclass_array_new_no_init_14::bad();");
	CWE457_Use_of_Uninitialized_Variable__twointsclass_array_new_no_init_14::bad();

	printLine("Calling CWE457_Use_of_Uninitialized_Variable__twointsclass_array_new_no_init_11::bad();");
	CWE457_Use_of_Uninitialized_Variable__twointsclass_array_new_no_init_11::bad();

	printLine("Calling CWE457_Use_of_Uninitialized_Variable__twointsclass_array_malloc_partial_init_14::bad();");
	CWE457_Use_of_Uninitialized_Variable__twointsclass_array_malloc_partial_init_14::bad();

	printLine("Calling CWE457_Use_of_Uninitialized_Variable__twointsclass_array_new_no_init_05::bad();");
	CWE457_Use_of_Uninitialized_Variable__twointsclass_array_new_no_init_05::bad();

	printLine("Calling CWE457_Use_of_Uninitialized_Variable__twointsclass_array_malloc_partial_init_62::bad();");
	CWE457_Use_of_Uninitialized_Variable__twointsclass_array_malloc_partial_init_62::bad();

	printLine("Calling CWE457_Use_of_Uninitialized_Variable__twointsclass_array_new_no_init_18::bad();");
	CWE457_Use_of_Uninitialized_Variable__twointsclass_array_new_no_init_18::bad();

	printLine("Calling CWE457_Use_of_Uninitialized_Variable__twointsclass_array_new_partial_init_04::bad();");
	CWE457_Use_of_Uninitialized_Variable__twointsclass_array_new_partial_init_04::bad();

	printLine("Calling CWE457_Use_of_Uninitialized_Variable__twointsclass_array_new_no_init_08::bad();");
	CWE457_Use_of_Uninitialized_Variable__twointsclass_array_new_no_init_08::bad();

	printLine("Calling CWE457_Use_of_Uninitialized_Variable__twointsclass_array_new_no_init_12::bad();");
	CWE457_Use_of_Uninitialized_Variable__twointsclass_array_new_no_init_12::bad();

	printLine("Calling CWE457_Use_of_Uninitialized_Variable__twointsclass_array_new_partial_init_10::bad();");
	CWE457_Use_of_Uninitialized_Variable__twointsclass_array_new_partial_init_10::bad();

	printLine("Calling CWE457_Use_of_Uninitialized_Variable__twointsclass_array_new_partial_init_17::bad();");
	CWE457_Use_of_Uninitialized_Variable__twointsclass_array_new_partial_init_17::bad();

	printLine("Calling CWE457_Use_of_Uninitialized_Variable__twointsclass_array_new_partial_init_09::bad();");
	CWE457_Use_of_Uninitialized_Variable__twointsclass_array_new_partial_init_09::bad();

	printLine("Calling CWE457_Use_of_Uninitialized_Variable__twointsclass_array_new_partial_init_16::bad();");
	CWE457_Use_of_Uninitialized_Variable__twointsclass_array_new_partial_init_16::bad();

	printLine("Calling CWE457_Use_of_Uninitialized_Variable__twointsclass_array_new_partial_init_11::bad();");
	CWE457_Use_of_Uninitialized_Variable__twointsclass_array_new_partial_init_11::bad();

	printLine("Calling CWE457_Use_of_Uninitialized_Variable__twointsclass_array_new_partial_init_12::bad();");
	CWE457_Use_of_Uninitialized_Variable__twointsclass_array_new_partial_init_12::bad();

	printLine("Calling CWE457_Use_of_Uninitialized_Variable__twointsclass_array_new_partial_init_43::bad();");
	CWE457_Use_of_Uninitialized_Variable__twointsclass_array_new_partial_init_43::bad();

	printLine("Calling CWE457_Use_of_Uninitialized_Variable__twointsclass_array_new_no_init_09::bad();");
	CWE457_Use_of_Uninitialized_Variable__twointsclass_array_new_no_init_09::bad();

	printLine("Calling CWE457_Use_of_Uninitialized_Variable__twointsclass_array_new_partial_init_62::bad();");
	CWE457_Use_of_Uninitialized_Variable__twointsclass_array_new_partial_init_62::bad();

	printLine("Calling CWE457_Use_of_Uninitialized_Variable__twointsclass_array_malloc_partial_init_12::bad();");
	CWE457_Use_of_Uninitialized_Variable__twointsclass_array_malloc_partial_init_12::bad();

	printLine("Calling CWE457_Use_of_Uninitialized_Variable__twointsclass_array_new_partial_init_63::bad();");
	CWE457_Use_of_Uninitialized_Variable__twointsclass_array_new_partial_init_63::bad();

	printLine("Calling CWE457_Use_of_Uninitialized_Variable__twointsclass_array_malloc_partial_init_64::bad();");
	CWE457_Use_of_Uninitialized_Variable__twointsclass_array_malloc_partial_init_64::bad();

	printLine("Calling CWE457_Use_of_Uninitialized_Variable__twointsclass_array_new_partial_init_64::bad();");
	CWE457_Use_of_Uninitialized_Variable__twointsclass_array_new_partial_init_64::bad();

	printLine("Calling CWE457_Use_of_Uninitialized_Variable__twointsclass_array_new_no_init_13::bad();");
	CWE457_Use_of_Uninitialized_Variable__twointsclass_array_new_no_init_13::bad();

	printLine("Calling CWE457_Use_of_Uninitialized_Variable__twointsclass_array_new_no_init_03::bad();");
	CWE457_Use_of_Uninitialized_Variable__twointsclass_array_new_no_init_03::bad();

	printLine("Calling CWE457_Use_of_Uninitialized_Variable__twointsclass_array_malloc_partial_init_15::bad();");
	CWE457_Use_of_Uninitialized_Variable__twointsclass_array_malloc_partial_init_15::bad();

	printLine("Calling CWE457_Use_of_Uninitialized_Variable__twointsclass_array_new_no_init_01::bad();");
	CWE457_Use_of_Uninitialized_Variable__twointsclass_array_new_no_init_01::bad();

	printLine("Calling CWE457_Use_of_Uninitialized_Variable__twointsclass_array_new_partial_init_03::bad();");
	CWE457_Use_of_Uninitialized_Variable__twointsclass_array_new_partial_init_03::bad();

	printLine("Calling CWE457_Use_of_Uninitialized_Variable__twointsclass_array_malloc_partial_init_08::bad();");
	CWE457_Use_of_Uninitialized_Variable__twointsclass_array_malloc_partial_init_08::bad();

	printLine("Calling CWE457_Use_of_Uninitialized_Variable__twointsclass_array_new_partial_init_07::bad();");
	CWE457_Use_of_Uninitialized_Variable__twointsclass_array_new_partial_init_07::bad();

	printLine("Calling CWE457_Use_of_Uninitialized_Variable__twointsclass_array_malloc_partial_init_10::bad();");
	CWE457_Use_of_Uninitialized_Variable__twointsclass_array_malloc_partial_init_10::bad();

	printLine("Calling CWE457_Use_of_Uninitialized_Variable__twointsclass_array_new_partial_init_02::bad();");
	CWE457_Use_of_Uninitialized_Variable__twointsclass_array_new_partial_init_02::bad();

	printLine("Calling CWE457_Use_of_Uninitialized_Variable__twointsclass_array_new_no_init_02::bad();");
	CWE457_Use_of_Uninitialized_Variable__twointsclass_array_new_no_init_02::bad();

	printLine("Calling CWE457_Use_of_Uninitialized_Variable__twointsclass_array_new_partial_init_01::bad();");
	CWE457_Use_of_Uninitialized_Variable__twointsclass_array_new_partial_init_01::bad();

	printLine("Calling CWE457_Use_of_Uninitialized_Variable__twointsclass_array_new_partial_init_05::bad();");
	CWE457_Use_of_Uninitialized_Variable__twointsclass_array_new_partial_init_05::bad();

	printLine("Calling CWE457_Use_of_Uninitialized_Variable__twointsclass_array_new_no_init_15::bad();");
	CWE457_Use_of_Uninitialized_Variable__twointsclass_array_new_no_init_15::bad();

	printLine("Calling CWE457_Use_of_Uninitialized_Variable__twointsclass_array_malloc_partial_init_43::bad();");
	CWE457_Use_of_Uninitialized_Variable__twointsclass_array_malloc_partial_init_43::bad();

	printLine("Calling CWE457_Use_of_Uninitialized_Variable__twointsclass_array_malloc_partial_init_16::bad();");
	CWE457_Use_of_Uninitialized_Variable__twointsclass_array_malloc_partial_init_16::bad();

	printLine("Calling CWE457_Use_of_Uninitialized_Variable__twointsclass_array_new_no_init_16::bad();");
	CWE457_Use_of_Uninitialized_Variable__twointsclass_array_new_no_init_16::bad();

	printLine("Calling CWE457_Use_of_Uninitialized_Variable__twointsclass_array_malloc_partial_init_07::bad();");
	CWE457_Use_of_Uninitialized_Variable__twointsclass_array_malloc_partial_init_07::bad();

	printLine("Calling CWE457_Use_of_Uninitialized_Variable__twointsclass_array_malloc_partial_init_03::bad();");
	CWE457_Use_of_Uninitialized_Variable__twointsclass_array_malloc_partial_init_03::bad();

	printLine("Calling CWE457_Use_of_Uninitialized_Variable__twointsclass_array_new_no_init_06::bad();");
	CWE457_Use_of_Uninitialized_Variable__twointsclass_array_new_no_init_06::bad();

	printLine("Calling CWE457_Use_of_Uninitialized_Variable__twointsclass_array_malloc_partial_init_06::bad();");
	CWE457_Use_of_Uninitialized_Variable__twointsclass_array_malloc_partial_init_06::bad();

	printLine("Calling CWE457_Use_of_Uninitialized_Variable__twointsclass_array_malloc_partial_init_17::bad();");
	CWE457_Use_of_Uninitialized_Variable__twointsclass_array_malloc_partial_init_17::bad();

	printLine("Calling CWE457_Use_of_Uninitialized_Variable__twointsclass_array_new_no_init_63::bad();");
	CWE457_Use_of_Uninitialized_Variable__twointsclass_array_new_no_init_63::bad();

	printLine("Calling CWE457_Use_of_Uninitialized_Variable__twointsclass_array_malloc_partial_init_09::bad();");
	CWE457_Use_of_Uninitialized_Variable__twointsclass_array_malloc_partial_init_09::bad();

	printLine("Calling CWE457_Use_of_Uninitialized_Variable__twointsclass_array_malloc_partial_init_05::bad();");
	CWE457_Use_of_Uninitialized_Variable__twointsclass_array_malloc_partial_init_05::bad();

	printLine("Calling CWE457_Use_of_Uninitialized_Variable__twointsclass_array_malloc_partial_init_04::bad();");
	CWE457_Use_of_Uninitialized_Variable__twointsclass_array_malloc_partial_init_04::bad();

	printLine("Calling CWE457_Use_of_Uninitialized_Variable__twointsclass_array_new_partial_init_06::bad();");
	CWE457_Use_of_Uninitialized_Variable__twointsclass_array_new_partial_init_06::bad();

	printLine("Calling CWE457_Use_of_Uninitialized_Variable__twointsclass_array_new_no_init_04::bad();");
	CWE457_Use_of_Uninitialized_Variable__twointsclass_array_new_no_init_04::bad();

	printLine("Calling CWE457_Use_of_Uninitialized_Variable__twointsclass_array_malloc_partial_init_02::bad();");
	CWE457_Use_of_Uninitialized_Variable__twointsclass_array_malloc_partial_init_02::bad();

	printLine("Calling CWE457_Use_of_Uninitialized_Variable__twointsclass_array_malloc_partial_init_01::bad();");
	CWE457_Use_of_Uninitialized_Variable__twointsclass_array_malloc_partial_init_01::bad();

	printLine("Calling CWE457_Use_of_Uninitialized_Variable__twointsclass_array_new_no_init_43::bad();");
	CWE457_Use_of_Uninitialized_Variable__twointsclass_array_new_no_init_43::bad();

	printLine("Calling CWE457_Use_of_Uninitialized_Variable__twointsclass_array_new_partial_init_15::bad();");
	CWE457_Use_of_Uninitialized_Variable__twointsclass_array_new_partial_init_15::bad();

	printLine("Calling CWE457_Use_of_Uninitialized_Variable__twointsclass_array_malloc_partial_init_18::bad();");
	CWE457_Use_of_Uninitialized_Variable__twointsclass_array_malloc_partial_init_18::bad();

	printLine("Calling CWE457_Use_of_Uninitialized_Variable__twointsclass_array_malloc_partial_init_11::bad();");
	CWE457_Use_of_Uninitialized_Variable__twointsclass_array_malloc_partial_init_11::bad();

	printLine("Calling CWE457_Use_of_Uninitialized_Variable__twointsclass_array_new_partial_init_08::bad();");
	CWE457_Use_of_Uninitialized_Variable__twointsclass_array_new_partial_init_08::bad();

	printLine("Calling CWE457_Use_of_Uninitialized_Variable__twointsclass_array_new_partial_init_18::bad();");
	CWE457_Use_of_Uninitialized_Variable__twointsclass_array_new_partial_init_18::bad();

	printLine("Calling CWE457_Use_of_Uninitialized_Variable__twointsclass_array_malloc_partial_init_63::bad();");
	CWE457_Use_of_Uninitialized_Variable__twointsclass_array_malloc_partial_init_63::bad();

	printLine("Calling CWE457_Use_of_Uninitialized_Variable__twointsclass_array_new_no_init_10::bad();");
	CWE457_Use_of_Uninitialized_Variable__twointsclass_array_new_no_init_10::bad();

	printLine("Calling CWE457_Use_of_Uninitialized_Variable__twointsclass_array_new_no_init_64::bad();");
	CWE457_Use_of_Uninitialized_Variable__twointsclass_array_new_no_init_64::bad();

	printLine("Calling CWE457_Use_of_Uninitialized_Variable__twointsclass_array_malloc_partial_init_13::bad();");
	CWE457_Use_of_Uninitialized_Variable__twointsclass_array_malloc_partial_init_13::bad();

	printLine("Calling CWE457_Use_of_Uninitialized_Variable__twointsclass_array_new_no_init_07::bad();");
	CWE457_Use_of_Uninitialized_Variable__twointsclass_array_new_no_init_07::bad();

	printLine("Calling CWE457_Use_of_Uninitialized_Variable__twointsclass_array_new_no_init_62::bad();");
	CWE457_Use_of_Uninitialized_Variable__twointsclass_array_new_no_init_62::bad();

	/* END-AUTOGENERATED-CPP-BAD-FUNCTION-CALLS */
	
#endif /* __cplusplus */

#endif /* OMITBAD */

	return 0;

} 
