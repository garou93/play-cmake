file(WRITE ${CMAKE_CURRENT_BINARY_DIR}/${CMAKE_PROJECT_NAME}.pc
	  "
	  Name: ${CMAKE_PROJECT_NAME}
	  Description: C'est une super librairie qui utilise gtk2
	  Version: 0.0.1
	  Requires: gtk2
	  Libs: -L${CMAKE_INSTALL_PREFIX}/lib
	  Cflags: -I${CMAKE_INSTALL_PREIFX}/include
	  "
	  )


	  install(FILES ${CMAKE_CURRENT_BINARY_DIR}/${CMAKE_PROJECT_NAME}.pc
    	          DESTINATION ${CMAKE_INSTALL_PREFIX}/lib/pkgconfig)