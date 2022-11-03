cmake_minimum_required(VERSION 3.16)

project(DinnerDashC LANGUAGES C)

#Remove/Comment before final build or before using Valgrind (CLion specific sanitizer options)
#set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -fsanitize=address -fsanitize-address-use-after-scope  -fno-omit-frame-pointer -g")
#set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -fsanitize=memory -fPIE -pie -fno-omit-frame-pointer -g")

#Uncomment below line in order to run the Clion profiler:
#set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -O0")

#Set directories below
set(BASE_DIR ${CMAKE_CURRENT_SOURCE_DIR})
set(HEADERS_DIR ${BASE_DIR}/include)
set(SOURCES_DIR ${BASE_DIR}/src)

add_executable(
        ${PROJECT_NAME}

        ${HEADERS_DIR}/tables.h
        ${HEADERS_DIR}/restaurant.h
        ${HEADERS_DIR}/Kitchen.h
        ${HEADERS_DIR}/Dish.h
        ${HEADERS_DIR}/defines.h
        ${HEADERS_DIR}/Customer.h

        ${SOURCES_DIR}/main.c
        ${SOURCES_DIR}/tables.c
        ${SOURCES_DIR}/restaurant.c
        ${SOURCES_DIR}/Kitchen.c
        ${SOURCES_DIR}/Dish.c
        ${SOURCES_DIR}/Customer.c
)

target_include_directories (
        ${PROJECT_NAME}

        PUBLIC
        ${BASE_DIR}
        ${HEADERS_DIR}
        ${SOURCES_DIR}
)

#[[target_compile_options(
        ${PROJECT_NAME}

        PUBLIC
        -Wall
        -Wextra
        -Werror
        -Wundef
        -Wuninitialized
        -Wshadow
        -Wpointer-arith
        -Wunused-parameter
        -Wnull-dereference
)]]
