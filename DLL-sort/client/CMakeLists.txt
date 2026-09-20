cmake_minimum_required(VERSION 3.15)
project(Client LANGUAGES CXX)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

set(CMAKE_CXX_STANDARD 17)

# Подключаем библиотеку как подпроект
add_subdirectory(../ ${CMAKE_BINARY_DIR}/libsort_build)

add_executable(client main.cpp)
target_link_libraries(client PRIVATE Libsort)

# На Windows копируем DLL рядом с exe, чтобы она нашлась при запуске
if(WIN32)
    add_custom_command(TARGET client POST_BUILD
        COMMAND ${CMAKE_COMMAND} -E copy_if_different
        $<TARGET_FILE:Libsort>
        $<TARGET_FILE_DIR:client>
    )
endif()