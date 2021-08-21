# # Trouver un package avec find_package
# find_package(GTK2 REQUIRED)

# # On construit notre binaire
# add_executable (mainDemo main.cpp) 
# target_link_libraries (mainDemo ${GTK2_LIBRARIES})
# target_include_directories(mainDemo PUBLIC ${GTK2_INCLUDE_DIRS})


# Trouver un package avec pkg-config 
find_package(PkgConfig)
pkg_check_modules(GTK2 gtk+-2.0 REQUIRED)

# On construit notre binaire
add_executable (mainDemo main.cpp) 
target_link_libraries (mainDemo ${GTK2_LIBRARIES})
target_compile_options(mainDemo PUBLIC ${GTK2_CFLAGS_OTHER} -std=c++11)
target_include_directories(mainDemo PUBLIC ${GTK2_INCLUDE_DIRS})