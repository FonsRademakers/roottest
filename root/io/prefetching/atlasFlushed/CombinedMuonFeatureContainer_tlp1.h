//////////////////////////////////////////////////////////
//   This class has been generated by TFile::MakeProject
//     (Tue Jun 14 15:33:00 2011 by ROOT version 5.31/01)
//      from the StreamerInfo in file http://root.cern.ch/files/atlasFlushed.root
//////////////////////////////////////////////////////////


#ifndef CombinedMuonFeatureContainer_tlp1_h
#define CombinedMuonFeatureContainer_tlp1_h
class CombinedMuonFeatureContainer_tlp1;

#include "Riostream.h"
#include <vector>
#include "CombinedMuonFeatureContainer_p1.h"
#include "CombinedMuonFeature_p1.h"
#include "CombinedMuonFeature_p2.h"

class CombinedMuonFeatureContainer_tlp1 {

public:
// Nested classes declaration.

public:
// Data Members.
   vector<CombinedMuonFeatureContainer_p1> m_combinedMuonFeatureContainerVec;    //(CombinedMuonFeatureContainer_p1)
   vector<CombinedMuonFeature_p1>          m_combinedMuonFeatureVec;             //(CombinedMuonFeature_p1)
   vector<CombinedMuonFeature_p2>          m_combinedMuonFeatureVec_p2;          //(CombinedMuonFeature_p2)

   CombinedMuonFeatureContainer_tlp1();
   CombinedMuonFeatureContainer_tlp1(const CombinedMuonFeatureContainer_tlp1 & );
   virtual ~CombinedMuonFeatureContainer_tlp1();

};
#endif
