add_executable(demo demo.cpp)
target_link_libraries(demo PRIVATE Libsort)

if(WIN32)
    add_custom_command(TARGET demo POST_BUILD
        COMMAND ${CMAKE_COMMAND} -E copy_if_different
        $<TARGET_FILE:Libsort>
        $<TARGET_FILE_DIR:demo>
    )
endif()