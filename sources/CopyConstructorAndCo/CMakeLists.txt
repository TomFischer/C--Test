SET ( SOURCES
	MyClass.cpp
	SimpleTest.cpp
)

SET( HEADERS
	MyClass.h
)

INCLUDE_DIRECTORIES(
	.
)

# Create the executable
ADD_EXECUTABLE( SimpleTest
        ${SOURCES}
        ${HEADERS}
)

