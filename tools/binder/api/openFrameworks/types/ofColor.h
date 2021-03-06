#pragma once
#include <limits>
#include "ofMath.h"

//----------------------------------------------------------
// ofColor
//----------------------------------------------------------

class ofColor{
	public:
	
		ofColor ();
		~ofColor ();
		
		ofColor (float _r, float _g, float _b, float _a = limit());
		ofColor (const ofColor & color);
		ofColor (const ofColor & color, float _a);
		ofColor (float gray, float _a = limit());

		static ofColor fromHsb (float hue, float saturation, float brightness, float alpha = limit());
		static ofColor fromHex (int hexColor, float alpha = limit());
    
		void set (float _r, float _g, float _b, float _a = limit());
		void set (float _gray, float _a = limit());
		void set (ofColor const & color);

		void setHex (int hexColor, float alpha = limit());
		int getHex () const;
		
		ofColor& clamp ();
		ofColor& invert ();
		ofColor& normalize ();
		ofColor& lerp(const ofColor& target, float amount);
		
		ofColor getClamped () const;
		ofColor getInverted () const;
		ofColor getNormalized () const;
		ofColor getLerped(const ofColor& target, float amount) const;
		
		float getHue () const;
		float getSaturation () const;
		float getBrightness () const; // brightest component
		float getLightness () const; // average of the components
		void getHsb(float& hue, float& saturation, float& brightness) const;
		
		void setHue (float hue);
		void setSaturation (float saturation);
		void setBrightness (float brightness);
		void setHsb(float hue, float saturation, float brightness, float alpha = limit() );
		
		ofColor & operator = (ofColor const & color);

		ofColor & operator = (float const & val);
		bool operator == (ofColor const & color);
		bool operator != (ofColor const & color);
		ofColor operator + (ofColor const & color) const;
		ofColor operator + (float const & val) const;
		ofColor & operator += (ofColor const & color);
		ofColor & operator += (float const & val);
		ofColor operator - (ofColor const & color) const;
		ofColor operator - (float const & val) const;
		ofColor & operator -= (ofColor const & color);
		ofColor & operator -= (float const & val);
		ofColor operator * (ofColor const & color) const;
		ofColor operator * (float const & val) const;
		ofColor & operator *= (ofColor const & color);
		ofColor & operator *= (float const & val);
		ofColor operator / (ofColor const & color) const;
		ofColor operator / (float const & val) const;
		ofColor & operator /= (ofColor const & color);
		ofColor & operator /= (float const & val);
		const unsigned char & operator [] (int n) const;
		unsigned char & operator [] (int n);
				
		static float limit();
		
		union  {
			struct {
				unsigned char r, g, b, a;
			};
		};
};
