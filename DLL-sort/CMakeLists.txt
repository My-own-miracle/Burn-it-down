cmake_minimum_required(VERSION 3.15)
project(DLL-sort VERSION 1.0.0 LANGUAGES CXX)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# Требования к стандарту C++
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Создаём разделяемую библиотеку (SHARED)
add_library(Libsort SHARED
    src/Libsort.cpp
)

# Подключаем заголовочные файлы
target_include_directories(Libsort PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>
)

# Определяем макрос MYLIB_EXPORTS при сборке самой библиотеки
# (чтобы функции экспортировались, а не импортировались)
target_compile_definitions(Libsort PRIVATE LIBSORT_EXPORTS)

# На Linux и macOS по умолчанию все символы видимы.
# Чтобы скрыть всё, кроме помеченного MYLIB_API, можно установить:
set_target_properties(Libsort PROPERTIES
    CXX_VISIBILITY_PRESET hidden
    VISIBILITY_INLINES_HIDDEN ON
)

enable_testing()
add_subdirectory(examples)
add_subdirectory(tests)
