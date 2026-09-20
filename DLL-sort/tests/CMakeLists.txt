add_executable(tests test.cpp)
target_link_libraries(tests PRIVATE Libsort)
add_test(NAME libsort_tests COMMAND tests)

if(WIN32)
    add_custom_command(TARGET tests POST_BUILD
        COMMAND ${CMAKE_COMMAND} -E copy_if_different
        $<TARGET_FILE:Libsort>
        $<TARGET_FILE_DIR:tests>
    )
endif()