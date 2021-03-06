// information about our view of the world
// data expected to change at most once per frame
#ifndef View_hpp
#define View_hpp

#include "Geometry.hpp"
#include "Vec.hpp"
#include "Mat.hpp"

struct GLFWwindow;

class View {
// private data
private:
	// GL uniform buffer IDs
	unsigned int frameUniformBufferID;
	Geometry::FrameUniforms frameUniforms;

	Vec<3> view_position;
// public data
public:
	int width, height;		// current window dimensions
	Vec<3> viewSph;			// view position in spherical coordinates

// public methods
public:
	View(GLFWwindow *win, double distance);
	~View();

	void update(GLFWwindow *win, Vec<3> moveRate);	// update after data change
};

#endif
