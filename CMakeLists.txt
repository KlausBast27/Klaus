cmake_minimum_required(VERSION 3.20)
project(DeveloperGroup C)

# Setze den Standard-C-Standard
set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED True)

# Füge Compiler-Optionen hinzu
add_compile_options(-Wall -Wextra -pedantic -O0)

# Erstelle eine statische Bibliothek aus den Developer-Quellen
add_library(devgroup STATIC src/developer.c src/developer_group.c)

# Füge das Verzeichnis mit Header-Dateien hinzu
target_include_directories(devgroup PUBLIC include)

# Erstelle die ausführbare Datei "main"
add_executable(main src/main.c)

# Füge das Verzeichnis mit Header-Dateien hinzu
target_include_directories(main PUBLIC include)

# Verlinke die Bibliothek mit der ausführbaren Datei
target_link_libraries(main devgroup)