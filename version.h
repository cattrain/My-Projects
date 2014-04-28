#ifndef VERSION_H
#define VERSION_H

namespace AutoVersion{
	
	//Date Version Types
	static const char DATE[] = "28";
	static const char MONTH[] = "04";
	static const char YEAR[] = "2014";
	static const char UBUNTU_VERSION_STYLE[] =  "14.04";
	
	//Software Status
	static const char STATUS[] =  "Alpha";
	static const char STATUS_SHORT[] =  "a";
	
	//Standard Version Type
	static const long MAJOR  = 0;
	static const long MINOR  = 1;
	static const long BUILD  = 14;
	static const long REVISION  = 94;
	
	//Miscellaneous Version Types
	static const long BUILDS_COUNT  = 150;
	#define RC_FILEVERSION 0,1,14,94
	#define RC_FILEVERSION_STRING "0, 1, 14, 94\0"
	static const char FULLVERSION_STRING [] = "0.1.14.94";
	
	//These values are to keep track of your versioning state, don't modify them.
	static const long BUILD_HISTORY  = 15;
	

}
#endif //VERSION_H
