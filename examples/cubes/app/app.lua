app = ofLuaApp()

function app:setup()
   ofSetVerticalSync(true);
end

function app:update()
  
end

function app:draw()

    ofBackground(0, 0, 0);
	
	movementSpeed = .1;
	cloudSize = ofGetWidth() / 2;
	maxBoxSize = 100;
	spacing = 1;
	boxCount = 100;

	for i = 1,boxCount do

		ofPushMatrix();
        ofTranslate(400, 0)
		
		t = (ofGetElapsedTimef() + i * spacing) * movementSpeed;
        
		pos = ofVec3f(
			ofSignedNoise(t, 0, 0),
			ofSignedNoise(0, t, 0),
			ofSignedNoise(0, 0, t));
		
		boxSize = maxBoxSize * ofNoise(pos.x, pos.y, pos.z);
		
		pos =pos * cloudSize;
		ofTranslate(pos);
		ofRotateX(pos.x);
		ofRotateY(pos.y);
		ofRotateZ(pos.z);
		
		ofFill();
		ofSetColor(ofColor(math.random(0, 255), math.random(0, 255), math.random(0, 255)));
		ofBox(boxSize);
		
		ofNoFill();
		ofSetColor(ofColor().fromHsb(math.sin(t) * 128 + 128, 255, 255));
		ofBox(boxSize * 1.1);
		
		ofPopMatrix()
	end

end