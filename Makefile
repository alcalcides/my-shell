myshell : myshell.cpp
	# Preparing
	mkdir -p ci/lib
	mkdir ci/obj

	# Compiling libs
	g++ -c lib/treatArgs.cpp -o ci/obj/treatArgs.o
	g++ -c lib/initMyshell.cpp -o ci/obj/initMyshell.o

	# Building static libs
	ar rvs ci/lib/treatArgs.a ci/obj/treatArgs.o
	ar rvs ci/lib/initMyshell.a ci/obj/initMyshell.o

	# Compiling main program with all static libs
	g++ -o myshell myshell.cpp ci/lib/treatArgs.a ci/lib/initMyshell.a
