diff --git a/mm-core/inc/QOMX_AudioExtensions.h b/mm-core/inc/QOMX_AudioExtensions.h
index a0c5dc8..5e48656 100644
--- a/mm-core/inc/QOMX_AudioExtensions.h
+++ b/mm-core/inc/QOMX_AudioExtensions.h
@@ -77,6 +77,7 @@
 #define OMX_QCOM_INDEX_CONFIG_AAC_SEL_MIX_COEF "OMX.Qualcomm.index.audio.aac_sel_mix_coef"
 #define OMX_QCOM_INDEX_PARAM_ALAC            "OMX.Qualcomm.index.audio.alac"
 #define OMX_QCOM_INDEX_PARAM_APE             "OMX.Qualcomm.index.audio.ape"
+#define OMX_QCOM_INDEX_PARAM_DSD             "OMX.Qualcomm.index.audio.dsd"
 #define OMX_QCOM_INDEX_PARAM_FLAC_DEC        "OMX.Qualcomm.index.audio.flacdec"
 
 #define ALAC_CSD_SIZE 24
@@ -545,6 +546,17 @@
     OMX_U32 nSeekTablePresent; /* Flag to indicate if seek table is present or not */
 } QOMX_AUDIO_PARAM_APETYPE;
 
+typedef struct QOMX_AUDIO_PARAM_DSD_TYPE {
+    OMX_U32 nSize;
+    OMX_VERSIONTYPE nVersion;
+    OMX_U32 nPortIndex;
+    OMX_BOOL bBytesStreamMode; /*enable byte stream mode*/
+    OMX_U32 nSampleRate;
+    OMX_U32 nOutSamplePerCh;
+    OMX_U32 nChannels;
+    OMX_U32 nBitsPerSample;
+} QOMX_AUDIO_PARAM_DSD_TYPE;
+
 enum {
     kKeyIndexAlacFrameLength = 0,
     kKeyIndexAlacCompatibleVersion = 4,
