# CMake minimum version required
cmake_minimum_required(VERSION 3.16)

# Project name
project(HonorsApp)
# Find Qt5 or Qt6, depending on which you are using
find_package(Qt6 REQUIRED COMPONENTS Widgets)

# Set the location for source files
set(SOURCES
    src/main.cpp
    src/User.cpp
    src/Nutrition.cpp
    src/Food.cpp
    src/Exercise.cpp
    src/LogManager.cpp
    src/Tutorials.cpp
)

# Set the location for header files (optional, if you have a separate include directory)
set(HEADERS
    include/User.h
    include/Nutrition.h
    include/Food.h
    include/Exercise.h
    include/LogManager.h
    include/Tutorials.h
    include/Records.h
)

# Add executable target
add_executable(${PROJECT_NAME} ${SOURCES} ${HEADERS})

# Link Qt libraries
target_link_libraries(${PROJECT_NAME} Qt6::Widgets)
