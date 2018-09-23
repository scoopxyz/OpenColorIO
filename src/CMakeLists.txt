add_subdirectory(OpenColorIO)
add_subdirectory(util)

if(OCIO_BUILD_JAVA OR OCIO_BUILD_PYTHON)
	add_subdirectory(bindings)
endif()

if(OCIO_BUILD_APPS)
	add_subdirectory(apps)
endif()
