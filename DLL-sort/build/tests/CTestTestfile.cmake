# CMake generated Testfile for 
# Source directory: C:/Proga/Burn-it-down/DLL-sort/tests
# Build directory: C:/Proga/Burn-it-down/DLL-sort/build/tests
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
if(CTEST_CONFIGURATION_TYPE MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
  add_test(libsort_tests "C:/Proga/Burn-it-down/DLL-sort/build/tests/Debug/tests.exe")
  set_tests_properties(libsort_tests PROPERTIES  _BACKTRACE_TRIPLES "C:/Proga/Burn-it-down/DLL-sort/tests/CMakeLists.txt;3;add_test;C:/Proga/Burn-it-down/DLL-sort/tests/CMakeLists.txt;0;")
elseif(CTEST_CONFIGURATION_TYPE MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
  add_test(libsort_tests "C:/Proga/Burn-it-down/DLL-sort/build/tests/Release/tests.exe")
  set_tests_properties(libsort_tests PROPERTIES  _BACKTRACE_TRIPLES "C:/Proga/Burn-it-down/DLL-sort/tests/CMakeLists.txt;3;add_test;C:/Proga/Burn-it-down/DLL-sort/tests/CMakeLists.txt;0;")
elseif(CTEST_CONFIGURATION_TYPE MATCHES "^([Mm][Ii][Nn][Ss][Ii][Zz][Ee][Rr][Ee][Ll])$")
  add_test(libsort_tests "C:/Proga/Burn-it-down/DLL-sort/build/tests/MinSizeRel/tests.exe")
  set_tests_properties(libsort_tests PROPERTIES  _BACKTRACE_TRIPLES "C:/Proga/Burn-it-down/DLL-sort/tests/CMakeLists.txt;3;add_test;C:/Proga/Burn-it-down/DLL-sort/tests/CMakeLists.txt;0;")
elseif(CTEST_CONFIGURATION_TYPE MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
  add_test(libsort_tests "C:/Proga/Burn-it-down/DLL-sort/build/tests/RelWithDebInfo/tests.exe")
  set_tests_properties(libsort_tests PROPERTIES  _BACKTRACE_TRIPLES "C:/Proga/Burn-it-down/DLL-sort/tests/CMakeLists.txt;3;add_test;C:/Proga/Burn-it-down/DLL-sort/tests/CMakeLists.txt;0;")
else()
  add_test(libsort_tests NOT_AVAILABLE)
endif()
