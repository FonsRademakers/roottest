//////////////////////////////////////////////////////////
//   This class has been generated by TFile::MakeProject
//     (Tue Jun 14 15:33:00 2011 by ROOT version 5.31/01)
//      from the StreamerInfo in file http://root.cern.ch/files/atlasFlushed.root
//////////////////////////////////////////////////////////


#ifndef Trk__TrackCollection_tlp3_h
#define Trk__TrackCollection_tlp3_h
namespace Trk {
class TrackCollection_tlp3;
} // end of namespace.

#include "TPCnvTokenList_p1.h"
#include "Riostream.h"
#include <vector>
#include "Trk__TrackCollection_p1.h"
#include "Trk__Track_p2.h"
#include "Trk__TrackStateOnSurface_p2.h"
#include "Trk__CompetingRIOsOnTrack_p1.h"
#include "Trk__RIO_OnTrack_p1.h"
#include "Trk__PseudoMeasurementOnTrack_p1.h"
#include "Trk__TrackParameters_p1.h"
#include "Trk__AtaSurface_p1.h"
#include "Trk__MeasuredAtaSurface_p1.h"
#include "Trk__Perigee_p1.h"
#include "Trk__MeasuredPerigee_p1.h"
#include "Trk__BoundSurface_p1.h"
#include "Trk__Surface_p1.h"
#include "Trk__CylinderBounds_p1.h"
#include "Trk__DiamondBounds_p1.h"
#include "Trk__DiscBounds_p1.h"
#include "Trk__RectangleBounds_p1.h"
#include "Trk__TrapezoidBounds_p1.h"
#include "Trk__RotatedTrapezoidBounds_p1.h"
#include "Trk__DetElementSurface_p1.h"
#include "Trk__FitQuality_p1.h"
#include "Trk__HepSymMatrix_p1.h"
#include "Trk__MaterialEffectsBase_p1.h"
#include "Trk__EnergyLoss_p1.h"
#include "Trk__MaterialEffectsOnTrack_p2.h"
#include "Trk__EstimatedBremOnTrack_p1.h"
#include "Trk__LocalDirection_p1.h"
#include "Trk__LocalPosition_p1.h"
#include "Trk__LocalParameters_p1.h"
#include "Trk__TrackInfo_p1.h"

namespace Trk {
class TrackCollection_tlp3 {

public:
// Nested classes declaration.

public:
// Data Members.
   TPCnvTokenList_p1 m_tokenList;    //
   vector<Trk::TrackCollection_p1> m_trackCollections;    //(Trk::TrackCollection_p1)
   vector<Trk::Track_p2>           m_tracks;              //(Trk::Track_p2)
   vector<Trk::TrackStateOnSurface_p2> m_trackStates;         //(Trk::TrackStateOnSurface_p2)
   vector<Trk::CompetingRIOsOnTrack_p1> m_competingRotsOnTrack;    //(Trk::CompetingRIOsOnTrack_p1)
   vector<Trk::RIO_OnTrack_p1>          m_RIOs;                    //(Trk::RIO_OnTrack_p1)
   vector<Trk::PseudoMeasurementOnTrack_p1> m_pseudoMeasurementOnTrack;    //(Trk::PseudoMeasurementOnTrack_p1)
   vector<Trk::TrackParameters_p1>          m_parameters;                  //(Trk::TrackParameters_p1)
   vector<Trk::AtaSurface_p1>               m_ataSurfaces;                 //(Trk::AtaSurface_p1)
   vector<Trk::MeasuredAtaSurface_p1>       m_measuredAtaSurfaces;         //(Trk::MeasuredAtaSurface_p1)
   vector<Trk::Perigee_p1>                  m_perigees;                    //(Trk::Perigee_p1)
   vector<Trk::MeasuredPerigee_p1>          m_measuredPerigees;            //(Trk::MeasuredPerigee_p1)
   vector<Trk::BoundSurface_p1>             m_boundSurfaces;               //(Trk::BoundSurface_p1)
   vector<Trk::Surface_p1>                  m_surfaces;                    //(Trk::Surface_p1)
   vector<Trk::CylinderBounds_p1>           m_cylinderBounds;              //(Trk::CylinderBounds_p1)
   vector<Trk::DiamondBounds_p1>            m_diamondBounds;               //(Trk::DiamondBounds_p1)
   vector<Trk::DiscBounds_p1>               m_discBounds;                  //(Trk::DiscBounds_p1)
   vector<Trk::RectangleBounds_p1>          m_rectangleBounds;             //(Trk::RectangleBounds_p1)
   vector<Trk::TrapezoidBounds_p1>          m_trapesoidBounds;             //(Trk::TrapezoidBounds_p1)
   vector<Trk::RotatedTrapezoidBounds_p1>   m_rotatedTrapesoidBounds;      //(Trk::RotatedTrapezoidBounds_p1)
   vector<Trk::DetElementSurface_p1>        m_detElementSurfaces;          //(Trk::DetElementSurface_p1)
   vector<Trk::FitQuality_p1>               m_fitQualities;                //(Trk::FitQuality_p1)
   vector<Trk::HepSymMatrix_p1>             m_hepSymMatrices;              //(Trk::HepSymMatrix_p1)
   vector<Trk::MaterialEffectsBase_p1>      m_matEffectsBases;             //(Trk::MaterialEffectsBase_p1)
   vector<Trk::EnergyLoss_p1>               m_energyLosses;                //(Trk::EnergyLoss_p1)
   vector<Trk::MaterialEffectsOnTrack_p2>   m_materialEffects;             //(Trk::MaterialEffectsOnTrack_p2)
   vector<Trk::EstimatedBremOnTrack_p1>     m_estimatedBrems;              //(Trk::EstimatedBremOnTrack_p1)
   vector<Trk::LocalDirection_p1>           m_localDirections;             //(Trk::LocalDirection_p1)
   vector<Trk::LocalPosition_p1>            m_localPositions;              //(Trk::LocalPosition_p1)
   vector<Trk::LocalParameters_p1>          m_localParameters;             //(Trk::LocalParameters_p1)
   vector<Trk::TrackInfo_p1>                m_trackInfos;                  //(Trk::TrackInfo_p1)

   TrackCollection_tlp3();
   TrackCollection_tlp3(const TrackCollection_tlp3 & );
   virtual ~TrackCollection_tlp3();

};
} // namespace
#endif
