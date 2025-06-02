cmake_minimum_required(VERSION 3.20)

# Define the project name and version
project(basics_in_Cpp VERSION 1.0 LANGUAGES CXX)

# Set the C++ standard
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Compiler definition for the logo file path (e.g., the "logos" folder)
add_compile_definitions(LOGO_PATH="logos/")

# Create the library with the source files
add_library(developerLib
    src/developer.cpp
    src/junior_developer.cpp
    src/senior_developer.cpp
)

target_include_directories(developerLib PUBLIC include)

# Main application executable
add_executable(MainApplication src/main.cpp)
target_link_libraries(MainApplication developerLib)

# Kopiere die Logo-Dateien ins Build-Verzeichnis, damit sie zur Laufzeit gefunden werden
add_custom_command(
    TARGET MainApplication POST_BUILD
    COMMAND ${CMAKE_COMMAND} -E make_directory $<TARGET_FILE_DIR:MainApplication>/logos
    COMMAND ${CMAKE_COMMAND} -E copy_if_different
        ${CMAKE_SOURCE_DIR}/logos/logo_junior.txt
        ${CMAKE_SOURCE_DIR}/logos/logo_senior.txt
        $<TARGET_FILE_DIR:MainApplication>/logos
)

# --- Test configuration with GoogleTest ---
enable_testing()
find_package(GTest REQUIRED)
include(GoogleTest)

# Create the test executable (test files are in the "test" folder)
add_executable(tests test/test_functions.cpp)
target_link_libraries(tests PRIVATE GTest::GTest GTest::Main developerLib)
target_include_directories(tests PUBLIC include)
gtest_discover_tests(tests)