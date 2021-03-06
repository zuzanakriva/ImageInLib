#ifdef __cplusplus
extern "C" {
#endif

#pragma once
#include <stdio.h> // Standard lib for input and output functions
#include "common_functions.h"
#include "vtk_params.h"
#include <stdbool.h>

	typedef enum {
		LOAD_DATA_VTK = 1,
		LOAD_DATA_RAW,
		STORE_DATA_VTK,
		STORE_DATA_RAW
	} operationType;

	bool manageFile(void  ** imageDataPtr, const size_t length, const size_t width,
		const size_t height, unsigned char * pathPtr, VTKHeaderLines *lines, operationType operation, loadDataType dType, storageFlags flags);

	/*Converts to doulbe*/
	void convertTodataType(unsigned char ** dataPtrUC, dataType ** dataPtrD, const size_t dimXY, const size_t height);

#ifdef __cplusplus
}
#endif