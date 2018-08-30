#ifndef ALIGN4
#define ALIGN4 __attribute__ ((aligned (4))) ///< align to 4 bytes
#endif

const int16_t hannWindow[512] = {
	0,1,4,11,19,30,44,60,79,100,123,149,178,208,242,277,316,356,399,445,492,543,595,650,708,767,830,894,961,1030,1102,1175,1251,1330,1410,1493,1579,1666,1756,1847,1941,2038,2136,2237,2339,2444,2551,2660,2771,2884,2999,3117,3236,3357,3480,3605,3732,3861,3992,4125,4259,4396,4534,4674,4816,4959,5105,5252,5400,5551,5703,5856,6011,6168,6326,6486,6647,6810,6974,7140,7307,7475,7645,7816,7989,8162,8337,8513,8690,8869,9048,9229,9411,9594,9778,9962,10148,10335,10523,10711,10901,11091,11282,11474,11666,11860,12054,12248,12443,12639,12836,13033,13230,13428,13626,13825,14024,14224,14424,14624,14824,15025,15226,15427,15628,15829,16030,16232,16433,16635,16836,17038,17239,17440,17641,17842,18042,18242,18442,18642,18841,19040,19239,19437,19635,19832,20029,20225,20420,20615,20810,21003,21196,21388,21580,21770,21960,22149,22337,22525,22711,22896,23080,23264,23446,23627,23807,23986,24164,24341,24517,24691,24864,25035,25206,25375,25543,25709,25874,26037,26199,26360,26519,26677,26832,26987,27140,27291,27440,27588,27734,27879,28021,28162,28301,28439,28574,28708,28839,28969,29097,29223,29348,29470,29590,29708,29824,29939,30051,30161,30269,30375,30478,30580,30679,30777,30872,30965,31056,31144,31230,31314,31396,31476,31553,31628,31700,31771,31839,31904,31968,32029,32087,32144,32197,32249,32298,32344,32389,32430,32470,32507,32541,32573,32603,32630,32655,32677,32697,32714,32729,32741,32751,32759,32764,32766,32766,32764,32759,32751,32741,32729,32714,32697,32677,32655,32630,32603,32573,32541,32507,32470,32430,32389,32344,32298,32249,32197,32144,32087,32029,31968,31904,31839,31771,31700,31628,31553,31476,31396,31314,31230,31144,31056,30965,30872,30777,30679,30580,30478,30375,30269,30161,30051,29939,29824,29708,29590,29470,29348,29223,29097,28969,28839,28708,28574,28439,28301,28162,28021,27879,27734,27588,27440,27291,27140,26987,26832,26677,26519,26360,26199,26037,25874,25709,25543,25375,25206,25035,24864,24691,24517,24341,24164,23986,23807,23627,23446,23264,23080,22896,22711,22525,22337,22149,21960,21770,21580,21388,21196,21003,20810,20615,20420,20225,20029,19832,19635,19437,19239,19040,18841,18642,18442,18242,18042,17842,17641,17440,17239,17038,16836,16635,16433,16232,16030,15829,15628,15427,15226,15025,14824,14624,14424,14224,14024,13825,13626,13428,13230,13033,12836,12639,12443,12248,12054,11860,11666,11474,11282,11091,10901,10711,10523,10335,10148,9962,9778,9594,9411,9229,9048,8869,8690,8513,8337,8162,7989,7816,7645,7475,7307,7140,6974,6810,6647,6486,6326,6168,6011,5856,5703,5551,5400,5252,5105,4959,4816,4674,4534,4396,4259,4125,3992,3861,3732,3605,3480,3357,3236,3117,2999,2884,2771,2660,2551,2444,2339,2237,2136,2038,1941,1847,1756,1666,1579,1493,1410,1330,1251,1175,1102,1030,961,894,830,767,708,650,595,543,492,445,399,356,316,277,242,208,178,149,123,100,79,60,44,30,19,11,4,1,0
};

const uint16_t armBitRevTable8[128] = {
0x80,0x40,0xC0,0x20,0xA0,0x60,0xE0,0x10,0x90,0x50,0xD0,0x30,0xB0,0x70,0xF0,0x8,0x88,0x48,0xC8,0x28,0xA8,0x68,0xE8,0x18,0x98,0x58,0xD8,0x38,0xB8,0x78,0xF8,0x4,0x84,0x44,0xC4,0x24,0xA4,0x64,0xE4,0x14,0x94,0x54,0xD4,0x34,0xB4,0x74,0xF4,0xC,0x8C,0x4C,0xCC,0x2C,0xAC,0x6C,0xEC,0x1C,0x9C,0x5C,0xDC,0x3C,0xBC,0x7C,0xFC,0x2,0x82,0x42,0xC2,0x22,0xA2,0x62,0xE2,0x12,0x92,0x52,0xD2,0x32,0xB2,0x72,0xF2,0xA,0x8A,0x4A,0xCA,0x2A,0xAA,0x6A,0xEA,0x1A,0x9A,0x5A,0xDA,0x3A,0xBA,0x7A,0xFA,0x6,0x86,0x46,0xC6,0x26,0xA6,0x66,0xE6,0x16,0x96,0x56,0xD6,0x36,0xB6,0x76,0xF6,0xE,0x8E,0x4E,0xCE,0x2E,0xAE,0x6E,0xEE,0x1E,0x9E,0x5E,0xDE,0x3E,0xBE,0x7E,0xFE,0x1
};

const int16_t ALIGN4 twiddleCoefQ15_512[512] =
{
32767,0,32766,402,32758,804,32746,1206,32729,1608,32706,2009,32679,2411,32647,2811,32610,3212,32568,3612,32522,4011,32470,4410,32413,4808,32352,5205,32286,5602,32214,5998,32138,6393,32058,6787,31972,7180,31881,7571,31786,7962,31686,8351,31581,8740,31471,9127,31357,9512,31238,9896,31114,10279,30986,10660,30853,11039,30715,11417,30572,11793,30425,12167,30274,12540,30118,12910,29957,13279,29792,13646,29622,14010,29448,14373,29269,14733,29086,15091,28899,15447,28707,15800,28511,16151,28311,16500,28106,16846,27897,17190,27684,17531,27467,17869,27246,18205,27020,18538,26791,18868,26557,19195,26320,19520,26078,19841,25833,20160,25583,20475,25330,20788,25073,21097,24812,21403,24548,21706,24279,22006,24008,22302,23732,22595,23453,22884,23170,23170,22884,23453,22595,23732,22302,24008,22006,24279,21706,24548,21403,24812,21097,25073,20788,25330,20475,25583,20160,25833,19841,26078,19520,26320,19195,26557,18868,26791,18538,27020,18205,27246,17869,27467,17531,27684,17190,27897,16846,28106,16500,28311,16151,28511,15800,28707,15447,28899,15091,29086,14733,29269,14373,29448,14010,29622,13646,29792,13279,29957,12910,30118,12540,30274,12167,30425,11793,30572,11417,30715,11039,30853,10660,30986,10279,31114,9896,31238,9512,31357,9127,31471,8740,31581,8351,31686,7962,31786,7571,31881,7180,31972,6787,32058,6393,32138,5998,32214,5602,32286,5205,32352,4808,32413,4410,32470,4011,32522,3612,32568,3212,32610,2811,32647,2411,32679,2009,32706,1608,32729,1206,32746,804,32758,402,32766,0,32767,-402,32766,-804,32758,-1206,32746,-1608,32729,-2009,32706,-2411,32679,-2811,32647,-3212,32610,-3612,32568,-4011,32522,-4410,32470,-4808,32413,-5205,32352,-5602,32286,-5998,32214,-6393,32138,-6787,32058,-7180,31972,-7571,31881,-7962,31786,-8351,31686,-8740,31581,-9127,31471,-9512,31357,-9896,31238,-10279,31114,-10660,30986,-11039,30853,-11417,30715,-11793,30572,-12167,30425,-12540,30274,-12910,30118,-13279,29957,-13646,29792,-14010,29622,-14373,29448,-14733,29269,-15091,29086,-15447,28899,-15800,28707,-16151,28511,-16500,28311,-16846,28106,-17190,27897,-17531,27684,-17869,27467,-18205,27246,-18538,27020,-18868,26791,-19195,26557,-19520,26320,-19841,26078,-20160,25833,-20475,25583,-20788,25330,-21097,25073,-21403,24812,-21706,24548,-22006,24279,-22302,24008,-22595,23732,-22884,23453,-23170,23170,-23453,22884,-23732,22595,-24008,22302,-24279,22006,-24548,21706,-24812,21403,-25073,21097,-25330,20788,-25583,20475,-25833,20160,-26078,19841,-26320,19520,-26557,19195,-26791,18868,-27020,18538,-27246,18205,-27467,17869,-27684,17531,-27897,17190,-28106,16846,-28311,16500,-28511,16151,-28707,15800,-28899,15447,-29086,15091,-29269,14733,-29448,14373,-29622,14010,-29792,13646,-29957,13279,-30118,12910,-30274,12540,-30425,12167,-30572,11793,-30715,11417,-30853,11039,-30986,10660,-31114,10279,-31238,9896,-31357,9512,-31471,9127,-31581,8740,-31686,8351,-31786,7962,-31881,7571,-31972,7180,-32058,6787,-32138,6393,-32214,5998,-32286,5602,-32352,5205,-32413,4808,-32470,4410,-32522,4011,-32568,3612,-32610,3212,-32647,2811,-32679,2411,-32706,2009,-32729,1608,-32746,1206,-32758,804,-32766,402
};
