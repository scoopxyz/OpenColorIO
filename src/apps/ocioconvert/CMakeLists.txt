find_package(GLEW REQUIRED)
find_package(GLUT REQUIRED)
set(SOURCES
	main.cpp
)

add_executable(ocioconvert ${SOURCES})
target_include_directories(ocioconvert 
	SYSTEM
	PRIVATE
		${GLEW_INCLUDE_DIRS}
		${GLUT_INCLUDE_DIR}
)
target_link_libraries(ocioconvert
	PRIVATE 
		apputils
	PUBLIC
		OpenColorIO
		OpenImageIO
		${GLEW_LIBRARIES}
		${GLUT_LIBRARIES}
)
install(TARGETS ocioconvert
	RUNTIME DESTINATION bin
)

