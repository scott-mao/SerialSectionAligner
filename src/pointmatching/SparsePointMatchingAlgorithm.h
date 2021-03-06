/////////////////////////////////////////////////////////////////
// 
// SparsePointMatchingAlgorithm.h
//
// Main Authors: Baum
// 
/////////////////////////////////////////////////////////////////

#ifndef SPARSE_POINT_MATCHING_ALGORITHM_H
#define SPARSE_POINT_MATCHING_ALGORITHM_H

#include "PointMatchingAlgorithm.h"
#include "PointMatchingScoringFunction.h"
#include "api.h"

class Transformation;
class PointMatchingDataStruct;
class PointRepresentation;

class POINTMATCHING_API SparsePointMatchingAlgorithm : public PointMatchingAlgorithm {
    
public:
    SparsePointMatchingAlgorithm();
    
    virtual void computePointMatching(const PointRepresentation * pointRep1, 
                                      const PointRepresentation * pointRep2,
                                      const Transformation      * pointRep2Transform,
                                      PointMatchingDataStruct   * pointMatching);
};

#endif
