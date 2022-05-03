myshell : myshell.cpp
	# Preparing
	mkdir -p ci/obj

	# Compiling libs
	g++ -c -o ci/obj/treatArgs.o lib/treatArgs.cpp
	g++ -c -o ci/obj/initMyshell.o lib/initMyshell.cpp
	g++ -c -o ci/obj/dealWithInput.o lib/dealWithInput.cpp

	# Building static libs
	ar rvs ci/myshell.a ci/obj/*.o

	# Compiling main program with all static libs
	g++ -o myshell myshell.cpp ci/myshell.a
