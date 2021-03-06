#ifdef __cplusplus
extern "C" {
#endif

#pragma once
#include "common_functions.h"
#include "segmentation3D_subsurf.h"

	typedef enum
	{
		SUBSURF_MODEL = 1,
		GSUBSURF_ATLAS_MODEL
	} segmentationMethod;

	void segmentImage(ImageData inputImageData, SegParameters segParameters, FilterParameters explicit_lhe_Parameters,
		Point3D * centers, size_t no_of_centers, unsigned char * outputPathPtr, const segmentationMethod model);

#ifdef __cplusplus
}
#endif