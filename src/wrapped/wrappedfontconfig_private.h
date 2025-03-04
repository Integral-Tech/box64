#if !(defined(GO) && defined(GOM) && defined(GO2) && defined(DATA))
#error meh!
#endif

GO(FcAtomicCreate, pFp)
GO(FcAtomicDeleteNew, vFp)
GO(FcAtomicDestroy, vFp)
GO(FcAtomicLock, iFp)
//GO(FcAtomicNewFile, 
GO(FcAtomicOrigFile, pFp)
GO(FcAtomicReplaceOrig, iFp)
//GO(FcAtomicUnlock, 
//GO(FcBlanksAdd, 
GO(FcBlanksCreate, pFv)
GO(FcBlanksDestroy, vFp)
GO(FcBlanksIsMember, iFpu)
GO(FcCacheCopySet, pFp)
GO(FcCacheDir, pFp)
GO(FcCacheNumFont, iFp)
GO(FcCacheNumSubdir, iFp)
GO(FcCacheSubdir, pFpi)
GO(FcCharSetAddChar, iFpu)
GO(FcCharSetCopy, pFp)
GO(FcCharSetCount, uFp)
GO(FcCharSetCoverage, uFpup)
GO(FcCharSetCreate, pFv)
GO(FcCharSetDestroy, vFp)
//GO(FcCharSetEqual, 
GO(FcCharSetFirstPage, iFppp)   // second p is a fixed sized array
GO(FcCharSetHasChar, iFpu)
//GO(FcCharSetIntersect, 
//GO(FcCharSetIntersectCount, 
GO(FcCharSetIsSubset, iFpp)
GO(FcCharSetMerge, iFppp)
GO(FcCharSetNew, pFv)
GO(FcCharSetNextPage, uFppp)
GO(FcCharSetSubtract, pFpp)
GO(FcCharSetSubtractCount, uFpp)
GO(FcCharSetUnion, pFpp)
GO(FcConfigAppFontAddDir, iFpp)
GO(FcConfigAppFontAddFile, iFpp)
GO(FcConfigAppFontClear, vFp)
GO(FcConfigBuildFonts, iFp)
//GO(FcConfigCreate, 
GO(FcConfigDestroy, vFp)
GO(FcConfigEnableHome, iFi)
//GO(FcConfigFilename, 
GO(FcConfigGetBlanks, pFp)
GO(FcConfigGetCache, pFp)
GO(FcConfigGetCacheDirs, pFp)
//GO(FcConfigGetConfigDirs, 
//GO(FcConfigGetConfigFiles, 
GO(FcConfigGetCurrent, pFv)
GO(FcConfigGetFontDirs, pFp)
GO(FcConfigGetFonts, pFpu)
GO(FcConfigGetRescanInterval, iFp)
//GO(FcConfigGetRescanInverval, 
GO(FcConfigGetSysRoot, pFp)
GO(FcConfigHome, pFv)
//GO(FcConfigParseAndLoad, 
GO(FcConfigReference, pFp)
//GO(FcConfigSetCurrent, 
GO(FcConfigSetRescanInterval, iFpi)
//GO(FcConfigSetRescanInverval, 
GO(FcConfigSubstitute, iFppu)
GO(FcConfigSubstituteWithPat, iFpppu)
//GO(FcConfigUptoDate, 
GO(FcDefaultSubstitute, vFp)
GO(FcDirCacheLoad, pFppp)
GO(FcDirCacheLoadFile, pFpp)
GO(FcDirCacheRead, pFpip)
//GO(FcDirCacheUnlink, 
GO(FcDirCacheUnload, vFp)
//GO(FcDirCacheValid, 
GO(FcDirSave, iFppp)
GO(FcDirScan, iFpppppi)
GO(FcFileIsDir, iFp)
//GO(FcFileScan, 
GO(FcFini, vFv)
GO(FcFontList, pFppp)
GO(FcFontMatch, pFppp)
GO(FcFontRenderPrepare, pFppp)
GO(FcFontSetAdd, iFpp)
GO(FcFontSetCreate, pFv)
GO(FcFontSetDestroy, vFp)
GO(FcFontSetList, pFppipp)
GO(FcFontSetMatch, pFppipp)
GO(FcFontSetPrint, vFp)
GO(FcFontSetSort, pFppipipp)
GO(FcFontSetSortDestroy, vFp)
GO(FcFontSort, pFppipp)
//GO(FcFreeTypeCharIndex, 
//GO(FcFreeTypeCharSet, 
//GO(FcFreeTypeCharSetAndSpacing, 
GO(FcFreeTypeQuery, pFpupp)
GO(FcFreeTypeQueryFace, pFppip)
//GO(FcGetLangs, 
GO(FcGetVersion, iFv)
GO(FcInit, iFv)
GO(FcInitBringUptoDate, iFv)
//GO(FcInitLoadConfig, 
GO(FcInitLoadConfigAndFonts, pFv)
GO(FcInitReinitialize, iFv)
GO(FcLangGetCharSet, pFp)
GO(FcLangSetAdd, iFpp)
GO(FcLangSetCompare, uFpp)
//GO(FcLangSetContains, 
GO(FcLangSetCopy, pFp)
GO(FcLangSetCreate, pFv)
GO(FcLangSetDestroy, vFp)
GO(FcLangSetEqual, iFpp)
GO(FcLangSetGetLangs, pFp)
GO(FcLangSetHash, uFp)
GO(FcLangSetHasLang, uFpp)
GO(FcMatrixCopy, pFp)
GO(FcMatrixEqual, iFpp)
GO(FcMatrixMultiply, vFppp)
//GO(FcMatrixRotate, 
//GO(FcMatrixScale, 
GO(FcMatrixShear, vFpdd)
GO(FcNameConstant, iFpp)
GO(FcNameGetConstant, pFp)
GO(FcNameGetObjectType, pFp)
GO(FcNameParse, pFp)
//GO(FcNameRegisterConstants, 
//GO(FcNameRegisterObjectTypes, 
GO(FcNameUnparse, pFp)
GO(FcNameUnregisterConstants, iFpi)
GO(FcNameUnregisterObjectTypes, iFpi)
GO(FcObjectSetAdd, iFpp)
GOM(FcObjectSetBuild, pFEpV)
GO(FcObjectSetCreate, pFv)
GO(FcObjectSetDestroy, vFp)
GOM(FcObjectSetVaBuild, pFEpA)
GO(FcPatternAdd, iFppiLi)  // FcValue is a typedef with int+union, with biggest part is a double => so 1 int and 1"L"
GO(FcPatternAddBool, iFppi)
GO(FcPatternAddCharSet, iFppp)
GO(FcPatternAddDouble, iFppd)
GO(FcPatternAddFTFace, iFppp)
GO(FcPatternAddInteger, iFppi)
GO(FcPatternAddLangSet, iFppp)
GO(FcPatternAddMatrix, iFppp)
GO(FcPatternAddString, iFppp)
GO(FcPatternAddWeak, iFppiLi)
//GO2(FcPatternBuild, pFpV, FcPatternVaBuild)
GO(FcPatternCreate, pFv)
GO(FcPatternDel, iFpp)
GO(FcPatternDestroy, vFp)
GO(FcPatternDuplicate, pFp)
GO(FcPatternEqual, iFpp)
GO(FcPatternEqualSubset, iFppp)
GO(FcPatternFilter, pFpp)
GO(FcPatternFormat, pFpp)
GO(FcPatternGet, uFppip)
GO(FcPatternGetBool, uFppip)
GO(FcPatternGetCharSet, uFppip)
GO(FcPatternGetDouble, uFppip)
GO(FcPatternGetFTFace, iFppip)
GO(FcPatternGetInteger, uFppip)
GO(FcPatternGetLangSet, uFppip)
GO(FcPatternGetMatrix, uFppip)
GO(FcPatternGetString, uFppip)
GO(FcPatternHash, uFp)
GO(FcPatternPrint, vFp)
GO(FcPatternReference, vFp)
//GO(FcPatternRemove, 
GO(FcPatternVaBuild, pFpp)
GO(FcStrBasename, pFp)
GO(FcStrCmp, iFpp)
GO(FcStrCmpIgnoreCase, iFpp)
GO(FcStrCopy, pFp)
GO(FcStrCopyFilename, pFp)
GO(FcStrDirname, pFp)
GO(FcStrDowncase, pFp)
GO(FcStrFree, vFp)
GO(FcStrListCreate, pFp)
GO(FcStrListDone, vFp)
GO(FcStrListFirst, vFp) //2.11.0+
GO(FcStrListNext, pFp)
GO(FcStrPlus, pFpp)
GO(FcStrSetAdd, iFpp)
GO(FcStrSetAddFilename, iFpp)
GO(FcStrSetCreate, pFv)
GO(FcStrSetDel, iFpp)
GO(FcStrSetDestroy, vFp)
GO(FcStrSetEqual, iFpp)
GO(FcStrSetMember, iFpp)
GO(FcStrStr, pFpp)
GO(FcStrStrIgnoreCase, pFpp)
GO(FcUcs4ToUtf8, iFup)
GO(FcUtf16Len, iFpuipp)
GO(FcUtf16ToUcs4, iFpupi)
GO(FcUtf8Len, iFpipp)
GO(FcUtf8ToUcs4, iFppi)
//GO(FcValueDestroy, 
//GO(FcValueEqual, 
//GO(FcValuePrint, 
//GO(FcValueSave, 
//GO(_fini, 
//GO(_init, 
