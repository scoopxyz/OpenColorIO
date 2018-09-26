if(OCIO_BUILD_APPS)
	add_subdirectory(apputils)
	add_subdirectory(ociobakelut)
	add_subdirectory(ociocheck)

	# CMake Feature Status
	set(BUILD_OCIOBAKELUT TRUE)
	set(BUILD_OCIOCHECK TRUE)

	if(OIIO_FOUND)
		add_subdirectory(ociolutimage)
		add_subdirectory(ocioconvert)
		add_subdirectory(ociodisplay)

		# CMake Feature Status
		set(BUILD_OCIOLUTIMAGE TRUE)
		set(BUILD_OCIOCONVERT TRUE)
		set(BUILD_OCIODISPLAY TRUE)
	endif()
endif()

###############################################################################
# CMake Features

add_feature_info("OCIO App ociobakelut" BUILD_OCIOBAKELUT "")
add_feature_info("OCIO App ociocheck" BUILD_OCIOCHECK "")
add_feature_info("OCIO App ociolutimage" BUILD_OCIOLUTIMAGE "")
add_feature_info("OCIO App ocioconvert" BUILD_OCIOCONVERT "")
add_feature_info("OCIO App ociodisplay" BUILD_OCIODISPLAY "")
