#ifndef VERSION_H
#define VERSION_H

namespace AutoVersion{
	
	//Date Version Types
	static const char DATE[] = "26";
	static const char MONTH[] = "04";
	static const char YEAR[] = "2014";
	static const char UBUNTU_VERSION_STYLE[] =  "14.04";
	
	//Software Status
	static const char STATUS[] =  "Alpha";
	static const char STATUS_SHORT[] =  "a";
	
	//Standard Version Type
	static const long MAJOR  = 0;
	static const long MINOR  = 0;
	static const long BUILD  = 72;
	static const long REVISION  = 69;
	
	//Miscellaneous Version Types
	static const long BUILDS_COUNT  = 88;
	#define RC_FILEVERSION 0,0,72,69
	#define RC_FILEVERSION_STRING "0, 0, 72, 69\0"
	static const char FULLVERSION_STRING [] = "0.0.72.69";
	
	//These values are to keep track of your versioning state, don't modify them.
	static const long BUILD_HISTORY  = 72;
	

}
#endif //VERSION_H
