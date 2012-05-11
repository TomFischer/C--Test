SET ( SOURCES
	Point.cpp
	main.cpp
)

SET( HEADERS
	GeoObject.h
	TemplatePoint.h
	Point.h
	PointWithID.h
	Node.h
)

INCLUDE_DIRECTORIES(
	.
)

# Create the executable
ADD_EXECUTABLE( TestInheritanceAndMemoryConsumption
        ${SOURCES}
        ${HEADERS}
)

