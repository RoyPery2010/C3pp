# Set the minimum required CMake version
cmake_minimum_required(VERSION 3.10)

# Project name
project(C3ppCompiler)

# Set the C++ standard
set(CMAKE_CXX_STANDARD 17)

# Manually set the ANTLR4 runtime directory (adjust these paths to where ANTLR4 is installed)
set(ANTLR4_INCLUDE_DIR "/usr/local/include/antlr4-runtime")  # Replace with correct path
set(ANTLR4_LIB_DIR "/usr/local/lib/antlr4-runtime")  # Replace with correct path

# Include directories for generated code and ANTLR runtime
include_directories(${CMAKE_SOURCE_DIR}/generated)
include_directories(${ANTLR4_INCLUDE_DIR})

# Add the source files
set(SOURCES
    src/main.cpp
    ${CMAKE_SOURCE_DIR}/generated/C3ppLexer.cpp
    ${CMAKE_SOURCE_DIR}/generated/C3ppParser.cpp
    ${CMAKE_SOURCE_DIR}/generated/C3ppBaseListener.cpp
    ${CMAKE_SOURCE_DIR}/generated/C3ppBaseVisitor.cpp
    # Add other generated files if needed
)

# Add the executable target
add_executable(c3++c ${SOURCES})

# Link the ANTLR runtime libraries
target_link_libraries(c3++c ${ANTLR4_LIB_DIR}/libantlr4-runtime.a)  # Adjust path if needed
