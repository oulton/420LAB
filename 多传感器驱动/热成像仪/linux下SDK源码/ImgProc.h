#ifndef __Q_IMG_PROC__
#define __Q_IMG_PROC__

#define TRUE	1
#define FALSE	0

//#include "../IpCam/cam_SDK/Clinet_API.h"

typedef unsigned long       DWORD;
//typedef int                 BOOL;
typedef unsigned char       BYTE;
typedef unsigned short      WORD;
typedef unsigned int      UINT;

typedef struct tagImgPara
{
	int nWidth; 	   //图像宽度
	int nHeight; 	   //图像高度
	WORD wBpps;		   //每个像素的深度，有效值：8，16，24，32
	WORD wChannel;	   //数据通道数
	void *pData; 	   //图像数据缓冲区
}ImgPara;

BOOL PlatEqual( ImgPara *pInImg,  ImgPara *pOutImg,  int nPlatLevel, int nPlatGrayLevel, int bAdjMinMax,int bInvertIMG, int bInvertVertical);
BOOL linear( ImgPara *pInImg,  ImgPara *pOutImg,  int nMin,int nMax);
void limit_minMaxAV( ImgPara *pInImg, int nMin,int nMax);
BOOL Change14bitTO8bit( ImgPara *pInImg,  ImgPara *pOutImg, int bInvertIMG, int bInvertVertical);

#endif
