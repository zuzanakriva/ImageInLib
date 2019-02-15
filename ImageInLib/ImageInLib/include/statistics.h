#pragma once
#include "shapeAnalysis_params.h"

void calcMeanShape(void **, Shapes *shapes, size_t height, size_t length, size_t width, size_t numShapes, shapeAnalysisParameters params);
void estimateSimilarShape(Shapes * inputShapes, void **, shapeAnalysisParameters shapeParam, dataType pcaThreshold, size_t height, size_t length, size_t width, size_t numShapes);
