if(OCIO_BUILD_GPU_TESTS OR OCIO_BUILD_APPS AND OIIO_FOUND)
	add_subdirectory(openglbuilder)
endif()
add_subdirectory(pystring)
