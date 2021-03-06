//
// Testing transient member setting
//

#include "Riostream.h"

class ACache {
protected:
   int   z;  // It is 1000*x + 10*y
   float c;  // It is x+y
   int   fN; // Size of fArray
   char *fArray; //[fN] Array that used to be an array of int
   double fValues[3];  // An array of double that used to be array of float.

 public:
   ACache() : z(-1),c(-1),fN(0),fArray(0) {}
   ~ACache() { delete [] fArray; }

   int GetX() { return z/1000; }
   int GetY() { return (z%1000)/10; }

   int GetZ() {
      return z;
   }
   
   float GetC() { 
      return c;
   }

   void Print() {
      cout << "ACache::x " << GetX() << endl;
      cout << "ACache::y " << GetY() << endl;
      cout << "ACache::z " << GetZ() << endl;
      cout << "ACache::c " << c << endl;
      cout << "ACache::fN    " << fN << endl;
      //cout << "ACache::fArray" << (void*)fArray << endl;
      if (fArray) for(int i = 0; i < fN; ++i) { 
         cout << "ACache::fArray["<<i<<"] "<< (short)fArray[i] << endl;
      }
      for(unsigned int j = 0; j < sizeof(fValues) / sizeof(fValues[0]); ++j) { 
         cout << "ACache::fValues["<<j<<"] "<< fValues[j] << endl;
         
      }
   }
};

class Container {
public:
   ACache a;
};

#ifdef __MAKECINT__
#pragma link C++ options=version(9) class ACache+;
#pragma read sourceClass="ACache" targetClass="ACache" source="int x; int y; char c"  version="[8]" target="z" include="TMath.h,math.h" \
   code="{ z = onfile.x*1000 + onfile.y*10; }"
#pragma read sourceClass = "ACache" targetClass = "ACache" version     = "[8]" \
   source      = "Int_t *fArray; Int_t fN;" \
   target      = "fArray" \
   code        = "{ fArray = new Char_t[onfile.fN]; Char_t* gtc=fArray; Int_t* gti=onfile.fArray; for(Int_t i=0; i<onfile.fN; i++) *(gtc+i) = *(gti+i)+10; }"
#pragma read sourceClass = "ACache" targetClass = "ACache" version     = "[8]" \
   source      = "float fValues[3]" \
   target      = "fValues" \
   code        = "{ for(Int_t i=0; i<3; i++) fValues[i] = 1+onfile.fValues[i]; }"
#pragma link C++ options=version(2) class Container+;
#endif

