/*
 *  ofCamera.h
 *  openFrameworksLib
 *
 *  Created by Memo Akten on 10/01/2011.
 *  Copyright 2011 MSA Visuals Ltd. All rights reserved.
 *
 */

#pragma once

#include "ofRectangle.h"
#include "ofAppRunner.h"
#include "ofNode.h"

// Use the public API of ofNode for all transformations
//class ofCamera : public ofNodeWithTarget {
class ofCamera : public ofNode {
public:
	ofCamera();
	
	// projection properties:
	void setFov(float f);
	void setNearClip(float f);
	void setFarClip(float f);
	void setLensOffset(const ofVec2f & lensOffset);
	void setAspectRatio(float aspectRatio);
	void setForceAspectRatio(bool forceAspectRatio);

	float getFov() const { return fov; };
	float getNearClip() const { return nearClip; };
	float getFarClip() const { return farClip; };
	ofVec2f getLensOffset() const { return lensOffset; };
	
	void setupPerspective(bool vFlip = true, float fov = 60, float nearDist = 0, float farDist = 0, const ofVec2f & lensOffset = ofVec2f(0.0f, 0.0f));
	void setupOffAxisViewPortal(const ofVec3f & topLeft, const ofVec3f & bottomLeft, const ofVec3f & bottomRight);
	
	void enableOrtho();
	void disableOrtho();
	bool getOrtho() const;
	
	float getImagePlaneDistance(ofRectangle viewport = ofGetCurrentViewport()) const;
	
	// set the matrices
	virtual void begin(ofRectangle viewport = ofGetCurrentViewport());
	virtual void end();
	
	// for hardcore peeps, access to the projection matrix
	ofMatrix4x4 getProjectionMatrix(ofRectangle viewport = ofGetCurrentViewport());	
	ofMatrix4x4 getModelViewMatrix();
	ofMatrix4x4 getModelViewProjectionMatrix(ofRectangle viewport = ofGetCurrentViewport());
	
	// convert between spaces
	ofVec3f worldToScreen(ofVec3f WorldXYZ, ofRectangle viewport = ofGetCurrentViewport()); 
	ofVec3f screenToWorld(ofVec3f ScreenXYZ, ofRectangle viewport = ofGetCurrentViewport());
	ofVec3f worldToCamera(ofVec3f WorldXYZ, ofRectangle viewport = ofGetCurrentViewport());
	ofVec3f cameraToWorld(ofVec3f CameraXYZ, ofRectangle viewport = ofGetCurrentViewport());
};

