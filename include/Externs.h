//
//  File.........: externs.h
//  Description..: some external statistic vars declaration
//
#ifndef _EXTERNS_
#define _EXTERNS_


#define TICKS_PER_SEC ((double)18.2)

//
//  Remark this and recompile to remove statistics code
//
#define STATISTICS

//
//  Options values
//
#define OPT_DISPLAY   1
#define OPT_DEBUG   128


extern unsigned long
    TotalRays,TotalPixels,
    BoxTestCount,BoxTestMisses,
    CylinderTestCount,CylinderTestMisses,
    SphereTestCount,SphereTestMisses,
    PlaneTestCount,PlaneTestMisses,
    RectTestCount,RectTestMisses,
    TriangleTestCount,TriangleTestMisses,
    // Noise routines
    NoiseCalls, Noise3dCalls,
    TurbulenceCalls, Turbulence3dCalls;

extern long
    Options;


#ifdef STATISTICS
#define STAT(x) x
#else
#define STAT(x)
#endif


#endif
