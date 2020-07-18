#########################################################################
# FILE		: Makefile
# DESCRIPTION	: Program to find the GCD of two numbers using recursion.
# AUTHOR	: GLADSON HANSDA
# DATED		: 18/07/2020
# #######################################################################


execute_file:	GCD_of_two_numbers_using_recursion.o findGCD.o
		gcc -o execute_file GCD_of_two_numbers_using_recursion.o findGCD.o

GCD_of_two_numbers_using_recursion.o:	GCD_of_two_numbers_using_recursion.c
					gcc -c GCD_of_two_numbers_using_recursion.c

findGCD.o:	findGCD.c
		gcc -c findGCD.c

clean:	
	rm -rf execute_file
	rm -rf /home/gladson/Desktop/Practice/program_practice/recursion/GCD_Of_two_numbers_using_recursion/obj/*.o

putobj:	
	mv *.o /home/gladson/Desktop/Practice/program_practice/recursion/GCD_Of_two_numbers_using_recursion/obj/



##########################################################################
			#End of file: Makefile#
##########################################################################
