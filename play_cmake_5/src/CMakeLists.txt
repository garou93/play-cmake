add_library(totoplus1
  SHARED
  fonct_exp.cpp seqret.cpp)

install (TARGETS totoplus1
	 DESTINATION lib)

file(
	GLOB 
	headers
	*.hpp
)

install(FILES ${headers}
  DESTINATION include/${CMAKE_PROJECT_NAME})
