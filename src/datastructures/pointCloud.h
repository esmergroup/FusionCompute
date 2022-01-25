#pragma once
#include <ofMain.h>
#include <ofxKinect.h>

class PointCloud
{
public: 
	PointCloud();

	void fillPointCloud(ofxKinect& kinect, int downsample);

	void fillPointCloud(ofImage& depthImage, float maxDepth, int downsample = 0);

	void draw();

	glm::vec4* getPoints();
	int getSize();
	ofMesh& getMesh();

private:
	glm::vec4 points[640 * 480];
	int size;
	ofMesh mesh;
	bool generated;
};

