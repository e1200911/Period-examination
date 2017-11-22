GTEST_DIR = /u/f/e1200911/Skoleduunit/Embedded_Systems/googletest/googletest

my_test: test_case.c linked_list.c linked_list.h Gtest_main.c libgtest.a
	g++ -isystem $(GTEST_DIR)/include -pthread test_case.c linked_list.c Gtest_main.c libgtest.a -o my_test --coverage -g
	
libgtest.a:
	g++ -isystem $(GTEST_DIR)/include -I$(GTEST_DIR) -pthread -c $(GTEST_DIR)/src/gtest-all.cc
	ar -rv libgtest.a gtest-all.o
	
clean:
	rm -f my_test *.o