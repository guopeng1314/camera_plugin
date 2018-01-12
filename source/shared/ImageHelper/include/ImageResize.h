#ifndef _Image_Resize_h_
#define _Image_Resize_h_

#ifdef __cplusplus
extern "C"
{
#endif

    /**
      * @brief 对unsigned char数据类型的图像进行临近插值
      * @param srcImage: 输入unsigned char数据类型的图像
      * @param destImage: 临近插值后输出的unsigned char数据类型的图像
      * @param srcW: 输入图像的宽
      * @param srcH: 输入图像的高
      * @param destW: 输出图像的宽
      * @param destH: 输出图像的高
      * @param channels: 图像的维度
      * @return: 0
      */
    int ImageResize(unsigned char * srcImage, unsigned char * destImage, int srcW, int srcH, int destW, int destH, int channels);

    /**
      * @brief 宽或高最大为1280
      * @param width: 输入的宽
      * @param height: 输入的高
      * @param owidth: 输出图像的宽
      * @param srcH: 输出图像的高
      * @param platform: 平台0:android   其它windows
      * @return: 0
      */
    int getSystemImageSize(int width, int height, int* owidth, int* oheight, int platform);
#ifdef __cplusplus
}
#endif

#endif