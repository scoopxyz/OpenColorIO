add_subdirectory(pystring)

if(OCIO_BUILD_GPU_TESTS)
	add_subdirectory(openglbuilder)
endif()
