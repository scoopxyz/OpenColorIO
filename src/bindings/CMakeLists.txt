if(OCIO_BUILD_JAVA)
	add_subdirectory(java)
endif()

if(OCIO_BUILD_PYTHON)
	add_subdirectory(python)
endif()

###############################################################################
# CMake Features

add_feature_info("OCIO Java Bindings" OCIO_BUILD_JAVA "")
add_feature_info("OCIO Python Bindings" OCIO_BUILD_PYTHON "")
