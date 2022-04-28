myshell : myshell.cpp
	# Compiles libs
	g++ -c lib/treatArgs.cpp -o lib/treatArgs.o

	# Builds static libs
	ar rvs lib/treatArgs.a lib/treatArgs.o

	# Compiles main program with all static libs
	g++ -o myshell myshell.cpp lib/treatArgs.a