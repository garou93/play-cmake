cmake_minimum_required(VERSION 2.8)

set(CMAKE_BUILD_TYPE Release)

project(ex6)


add_subdirectory(src)
add_subdirectory(examples)
add_subdirectory(doc)

add_subdirectory(tests)
enable_testing ()
add_test (NAME MyTest  
          COMMAND test_mylib
	  )
