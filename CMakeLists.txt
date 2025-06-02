cmake_minimum_required(VERSION 3.10)
project(PacmanGame)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Include-Verzeichnis hinzufügen
include_directories(${PROJECT_SOURCE_DIR}/include)

# Alle CPP-Dateien im src-Ordner sammeln
file(GLOB SOURCES "${PROJECT_SOURCE_DIR}/src/*.cpp")

# Erzeuge das ausführbare Ziel
add_executable(PacmanGame ${SOURCES})
