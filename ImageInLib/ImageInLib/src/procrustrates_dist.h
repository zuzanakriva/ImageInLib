#pragma once
#ifndef PROCRUSTATESSDIST
#define PROCRUSTATESSDIST
//==============================================================================
#include "common_functions.h"
#include "pca.h"
#include "shape_registration.h"
#include "shapeAnalysis_params.h"
//==============================================================================
// Container for Eigen shapes, in descending order to their eigenvalues
typedef struct {
	dataType * eigenShape;
} EigenShapes;
//==============================================================================
// Generalized Procrustes Analysis - Returns the Mean Shape
void genProcMeanShape(dataType ** dtaMnShp, Shapes *shapes, size_t height, size_t length, size_t width, size_t numShapes, shapeAnalysisParameters params);
//==============================================================================
void pca_analysis(dataType ** dtaMeanShape, dataType *** eigvectors, dataType ** eigvalues, size_t * princomp, Shapes *shapes, size_t height, size_t length, size_t width, size_t numShapes, dataType pca_Threshold);
//==============================================================================
// Procrustates distance i s a least square type shape metric that requires two aligned shapes with one-to-one point correspondence
// Two shapes are equivalent if one can be obtained from the other by translating, scaling and rotating
// Registered shapes!
dataType procDist(dataType ** dta1, dataType ** dta2, size_t height, size_t length, size_t width);
//==============================================================================
void estimateShape(Shapes *atlasShapes, dataType ** shapeToEstimate, shapeAnalysisParameters shapeParam, size_t height, size_t length, size_t width, size_t numShapes, dataType pca_Threshold);
//==============================================================================
#endif // !PROCRUSTATESSDIST