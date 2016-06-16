#
# Makefile
#

VENDOR_DIR = ../../../vendor
GTEST_DIR = $(VENDOR_DIR)/gtest-1.7.0
SUT_SRC_DIR = ../../../src/iperf-2.0.2/src
SUT_OBJ_DIR = build
TEST_SRC_DIR = test
TEST_OBJ_DIR = build
STUB_SRC_DIR = stub
STUB_OBJ_DIR = build
TEST_EXE_DIR = build

GTEST_CXXFLAGS = -I$(GTEST_DIR) -I$(GTEST_DIR)/include
EXTRA_LDFLAGS = -lpthread

TESTS =  \
	$(TEST_EXE_DIR)/test_Client \
	$(TEST_EXE_DIR)/test_Server
GCNOS =  \
	$(TEST_OBJ_DIR)/Client.gcno \
	$(TEST_OBJ_DIR)/Server.gcno

all: $(TESTS)

.PHONY: test cov clean
test: $(TESTS)
	@for test in $(TESTS); do \
		echo "   Info: Running $$test"; \
		$$test; \
	done
cov: $(GCNOS)
	@for gcno in $(GCNOS); do \
		gcov -b $$gcno; \
	done

$(TEST_OBJ_DIR)/gtest-all.o: $(GTEST_DIR)/src/gtest-all.cc
	@if test ! -d $(TEST_OBJ_DIR); then \
		mkdir -p $(TEST_OBJ_DIR); \
	fi
	$(CXX) $(GTEST_CXXFLAGS) -c $< -o $@

$(TEST_OBJ_DIR)/gtest_main.o: $(GTEST_DIR)/src/gtest_main.cc
	@if test ! -d $(TEST_OBJ_DIR); then \
		mkdir -p $(TEST_OBJ_DIR); \
	fi
	$(CXX) $(GTEST_CXXFLAGS) -c $< -o $@

$(SUT_OBJ_DIR)/Client.o: $(SUT_SRC_DIR)/Client.cpp
	@if test ! -d $(TEST_OBJ_DIR); then \
		mkdir -p $(TEST_OBJ_DIR); \
	fi
	$(CXX) -DHAVE_CONFIG_H -I. -I$(SUT_SRC_DIR) -I$(SUT_SRC_DIR)/../include -g --coverage -Dmain=fsx_original_main -D__FSX__ -fno-access-control -c $< -o $@

$(TEST_OBJ_DIR)/test_Client.o: $(TEST_SRC_DIR)/test_Client.cc
	@if test ! -d $(TEST_OBJ_DIR); then \
		mkdir -p $(TEST_OBJ_DIR); \
	fi
	$(CXX) -DHAVE_CONFIG_H -I. -I$(SUT_SRC_DIR) -I$(SUT_SRC_DIR)/../include -g --coverage -Dmain=fsx_original_main -fno-access-control $(GTEST_CXXFLAGS) -c $< -o $@

$(STUB_OBJ_DIR)/stub_Client.o: $(STUB_SRC_DIR)/stub_Client.cpp
	@if test ! -d $(STUB_OBJ_DIR); then \
		mkdir -p $(STUB_OBJ_DIR); \
	fi
	$(CXX) -DHAVE_CONFIG_H -I. -I$(SUT_SRC_DIR) -I$(SUT_SRC_DIR)/../include -g --coverage -Dmain=fsx_original_main -fno-access-control -c $< -o $@

$(TEST_EXE_DIR)/test_Client: $(SUT_OBJ_DIR)/Client.o $(TEST_OBJ_DIR)/test_Client.o $(STUB_OBJ_DIR)/stub_Client.o $(TEST_OBJ_DIR)/gtest-all.o $(TEST_OBJ_DIR)/gtest_main.o
	$(CXX) --coverage $(LDFLAGS) $^ $(EXTRA_LDFLAGS) -o $@

$(SUT_OBJ_DIR)/Server.o: $(SUT_SRC_DIR)/Server.cpp
	@if test ! -d $(TEST_OBJ_DIR); then \
		mkdir -p $(TEST_OBJ_DIR); \
	fi
	$(CXX) -DHAVE_CONFIG_H -I. -I$(SUT_SRC_DIR) -I$(SUT_SRC_DIR)/../include -g --coverage -Dmain=fsx_original_main -D__FSX__ -fno-access-control -c $< -o $@

$(TEST_OBJ_DIR)/test_Server.o: $(TEST_SRC_DIR)/test_Server.cc
	@if test ! -d $(TEST_OBJ_DIR); then \
		mkdir -p $(TEST_OBJ_DIR); \
	fi
	$(CXX) -DHAVE_CONFIG_H -I. -I$(SUT_SRC_DIR) -I$(SUT_SRC_DIR)/../include -g --coverage -Dmain=fsx_original_main -fno-access-control $(GTEST_CXXFLAGS) -c $< -o $@

$(STUB_OBJ_DIR)/stub_Server.o: $(STUB_SRC_DIR)/stub_Server.cpp
	@if test ! -d $(STUB_OBJ_DIR); then \
		mkdir -p $(STUB_OBJ_DIR); \
	fi
	$(CXX) -DHAVE_CONFIG_H -I. -I$(SUT_SRC_DIR) -I$(SUT_SRC_DIR)/../include -g --coverage -Dmain=fsx_original_main -fno-access-control -c $< -o $@

$(TEST_EXE_DIR)/test_Server: $(SUT_OBJ_DIR)/Server.o $(TEST_OBJ_DIR)/test_Server.o $(STUB_OBJ_DIR)/stub_Server.o $(TEST_OBJ_DIR)/gtest-all.o $(TEST_OBJ_DIR)/gtest_main.o
	$(CXX) --coverage $(LDFLAGS) $^ $(EXTRA_LDFLAGS) -o $@

clean:
	rm -rf build
	rm -f *.gcov
	rm -f $(TESTS)
	rm -f $(SUT_OBJ_DIR)/*.o
	rm -f $(TEST_OBJ_DIR)/*.o
	rm -f $(STUB_OBJ_DIR)/*.o

# End of file
