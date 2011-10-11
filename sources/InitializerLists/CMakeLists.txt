SET ( SOURCES
	ComponentClass.cpp
	ClassUsingComponents.cpp
	main.cpp
)

SET( HEADERS
	ComponentClass.cpp
	ClassUsingComponents.cpp
)

INCLUDE_DIRECTORIES(
	.
)

# Create the executable
ADD_EXECUTABLE( TestIntializerList
        ${SOURCES}
        ${HEADERS}
)

