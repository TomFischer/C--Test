SET ( SOURCES
	Base.cpp
	Derived.cpp
	main.cpp
)

SET( HEADERS
	Base.h
	Derived.h
)

INCLUDE_DIRECTORIES(
	.
)

# Create the executable
ADD_EXECUTABLE( TestInheritance
        ${SOURCES}
        ${HEADERS}
)

