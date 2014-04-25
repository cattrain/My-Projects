#ifndef VERSION_H
#define VERSION_H

namespace AutoVersion{
	
	//Date Version Types
	static const char DATE[] = "25";
	static const char MONTH[] = "04";
	static const char YEAR[] = "2014";
	static const char UBUNTU_VERSION_STYLE[] =  "14.04";
	
	//Software Status
	static const char STATUS[] =  "Alpha";
	static const char STATUS_SHORT[] =  "a";
	
	//Standard Version Type
	static const long MAJOR  = 0;
	static const long MINOR  = 0;
	static const long BUILD  = 31;
	static const long REVISION  = 82;
	
	//Miscellaneous Version Types
	static const long BUILDS_COUNT  = 32;
	#define RC_FILEVERSION 0,0,31,82
	#define RC_FILEVERSION_STRING "0, 0, 31, 82\0"
	static const char FULLVERSION_STRING [] = "0.0.31.82";
	
	//These values are to keep track of your versioning state, don't modify them.
	static const long BUILD_HISTORY  = 31;
	

}
#endif //VERSION_H
