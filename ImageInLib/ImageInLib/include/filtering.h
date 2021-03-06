#ifdef __cplusplus
extern "C" {
#endif

#pragma once
#include "common_functions.h"
#include "filter_params.h"

	typedef enum
	{
		LINEAR_HEATEQUATION_EXPLICIT = 1,
		LINEAR_HEATEQUATION_IMPLICIT = 2,
		NONLINEAR_HEATEQUATION_EXPLICIT = 3,
		NONLINEAR_HEATEQUATION_IMPLICIT = 4,
		MEAN_CURVATURE_FILTER = 5,
		GEODESIC_MEAN_CURVATURE_FILTER = 6
	} filterMethod;

	void filterImage(ImageData inputImageData, FilterParameters filterParameters, const size_t maxNumberOfSolverIteration,
		dataType  coef, dataType  eps2, size_t numberOfTimeStep, const filterMethod method);

#ifdef __cplusplus
}
#endif