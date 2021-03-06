//////////////////////////////////////////////////////////
//   This class has been generated by TFile::MakeProject
//     (Tue Jun 14 15:33:00 2011 by ROOT version 5.31/01)
//      from the StreamerInfo in file http://root.cern.ch/files/atlasFlushed.root
//////////////////////////////////////////////////////////


#ifndef TrigMuonEFInfo_p3_h
#define TrigMuonEFInfo_p3_h
class TrigMuonEFInfo_p3;

#include "TPObjRef.h"

class TrigMuonEFInfo_p3 {

public:
// Nested classes declaration.

public:
// Data Members.
   unsigned short m_roi;       //
   unsigned short m_nSegments;    //
   unsigned short m_nMdtHits;     //
   unsigned short m_nRpcHits;     //
   unsigned short m_nTgcHits;     //
   unsigned short m_nCscHits;     //
   double         m_etaPreviousLevel;    //
   double         m_phiPreviousLevel;    //
   TPObjRef       m_spectrometerTrack;    //
   TPObjRef       m_extrapolatedTrack;    //
   TPObjRef       m_combinedTrack;        //
   TPObjRef       m_trackContainer;       //

   TrigMuonEFInfo_p3();
   TrigMuonEFInfo_p3(const TrigMuonEFInfo_p3 & );
   virtual ~TrigMuonEFInfo_p3();

};
#endif
