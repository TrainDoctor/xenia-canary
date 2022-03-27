#if 0
//
// Generated by Microsoft (R) HLSL Shader Compiler 10.1
//
//
// Buffer Definitions: 
//
// cbuffer xesl_push_constants
// {
//
//   uint xe_host_depth_store_rectangle;// Offset:    0 Size:     4
//   uint xe_host_depth_store_render_target;// Offset:    4 Size:     4
//
// }
//
//
// Resource Bindings:
//
// Name                                 Type  Format         Dim      ID      HLSL Bind  Count
// ------------------------------ ---------- ------- ----------- ------- -------------- ------
// xe_host_depth_store_source        texture  float4        2dMS      T0             t0      1 
// xe_host_depth_store_dest              UAV   uint4         buf      U0             u0      1 
// xesl_push_constants               cbuffer      NA          NA     CB0            cb0      1 
//
//
//
// Input signature:
//
// Name                 Index   Mask Register SysValue  Format   Used
// -------------------- ----- ------ -------- -------- ------- ------
// no Input
//
// Output signature:
//
// Name                 Index   Mask Register SysValue  Format   Used
// -------------------- ----- ------ -------- -------- ------- ------
// no Output
cs_5_1
dcl_globalFlags refactoringAllowed
dcl_constantbuffer CB0[0:0][1], immediateIndexed, space=0
dcl_resource_texture2dms(0) (float,float,float,float) T0[0:0], space=0
dcl_uav_typed_buffer (uint,uint,uint,uint) U0[0:0], space=0
dcl_input vThreadID.xy
dcl_temps 5
dcl_thread_group 8, 8, 1
ushr r0.x, vThreadID.x, l(1)
ubfe r0.yz, l(0, 10, 2, 0), l(0, 20, 10, 0), CB0[0][0].xxyx
iadd r0.y, r0.y, l(1)
imul null, r0.y, r0.z, r0.y
uge r0.x, r0.x, r0.y
if_nz r0.x
  ret 
endif 
ushr r0.y, CB0[0][0].x, l(10)
mov r0.x, CB0[0][0].x
bfi r0.xy, l(10, 10, 0, 0), l(3, 3, 0, 0), r0.xyxx, l(0, 0, 0, 0)
ubfe r0.zw, l(0, 0, 2, 2), l(0, 0, 10, 12), CB0[0][0].yyyy
ishl r1.x, vThreadID.x, l(2)
ushr r1.y, vThreadID.y, l(1)
imad r1.xy, r0.xyxx, r0.zwzz, r1.xyxx
bfi r0.xy, l(31, 31, 0, 0), l(1, 1, 0, 0), r1.xyxx, vThreadID.xyxx
and r2.x, CB0[0][0].y, l(1023)
imul null, r0.zw, r0.zzzw, l(0, 0, 80, 16)
udiv r2.yz, null, r0.xxyx, r0.zzwz
imad r2.x, r2.z, r2.x, r2.y
imad r0.xy, -r2.yzyy, r0.zwzz, r0.xyxx
imul null, r0.w, r0.w, r0.z
imad r0.x, r0.y, r0.z, r0.x
imad r0.x, r2.x, r0.w, r0.x
ushr r0.x, r0.x, l(2)
bfi r0.y, l(1), l(1), vThreadID.y, l(0)
iadd r0.zw, r0.yyyx, l(0, 0, 1, 1)
mov r1.zw, l(0,0,0,0)
ldms r2.x, r1.xyww, T0[0].xyzw, r0.y
ldms r2.y, r1.xyzw, T0[0].yxzw, r0.z
iadd r3.xyzw, r1.xyxy, l(2, 0, 1, 0)
mov r4.xy, r3.zwzz
mov r4.zw, l(0,0,0,0)
ldms r2.z, r4.xyww, T0[0].yzxw, r0.y
ldms r2.w, r4.xyzw, T0[0].yzwx, r0.z
store_uav_typed U0[0].xyzw, r0.xxxx, r2.xyzw
mov r3.zw, l(0,0,0,0)
ldms r2.x, r3.xyww, T0[0].xyzw, r0.y
ldms r2.y, r3.xyzw, T0[0].yxzw, r0.z
iadd r1.xy, r1.xyxx, l(3, 0, 0, 0)
mov r1.zw, l(0,0,0,0)
ldms r2.z, r1.xyww, T0[0].yzxw, r0.y
ldms r2.w, r1.xyzw, T0[0].yzwx, r0.z
store_uav_typed U0[0].xyzw, r0.wwww, r2.xyzw
ret 
// Approximately 45 instruction slots used
#endif

const BYTE host_depth_store_4xmsaa_cs[] =
{
     68,  88,  66,  67,  40, 223, 
    121, 252,  88,   5, 117, 190, 
    136,   7,   3,   6, 127, 125, 
    212,  65,   1,   0,   0,   0, 
    160,   9,   0,   0,   5,   0, 
      0,   0,  52,   0,   0,   0, 
     52,   2,   0,   0,  68,   2, 
      0,   0,  84,   2,   0,   0, 
      4,   9,   0,   0,  82,  68, 
     69,  70, 248,   1,   0,   0, 
      1,   0,   0,   0, 252,   0, 
      0,   0,   3,   0,   0,   0, 
     60,   0,   0,   0,   1,   5, 
     83,  67,   0,   5,   0,   0, 
    206,   1,   0,   0,  19,  19, 
     68,  37,  60,   0,   0,   0, 
     24,   0,   0,   0,  40,   0, 
      0,   0,  40,   0,   0,   0, 
     36,   0,   0,   0,  12,   0, 
      0,   0,   0,   0,   0,   0, 
    180,   0,   0,   0,   2,   0, 
      0,   0,   5,   0,   0,   0, 
      6,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      1,   0,   0,   0,  12,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0, 207,   0, 
      0,   0,   4,   0,   0,   0, 
      4,   0,   0,   0,   1,   0, 
      0,   0, 255, 255, 255, 255, 
      0,   0,   0,   0,   1,   0, 
      0,   0,  12,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0, 232,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   1,   0,   0,   0, 
      1,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
    120, 101,  95, 104, 111, 115, 
    116,  95, 100, 101, 112, 116, 
    104,  95, 115, 116, 111, 114, 
    101,  95, 115, 111, 117, 114, 
     99, 101,   0, 120, 101,  95, 
    104, 111, 115, 116,  95, 100, 
    101, 112, 116, 104,  95, 115, 
    116, 111, 114, 101,  95, 100, 
    101, 115, 116,   0, 120, 101, 
    115, 108,  95, 112, 117, 115, 
    104,  95,  99, 111, 110, 115, 
    116,  97, 110, 116, 115,   0, 
    232,   0,   0,   0,   2,   0, 
      0,   0,  20,   1,   0,   0, 
     16,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
    100,   1,   0,   0,   0,   0, 
      0,   0,   4,   0,   0,   0, 
      2,   0,   0,   0, 136,   1, 
      0,   0,   0,   0,   0,   0, 
    255, 255, 255, 255,   0,   0, 
      0,   0, 255, 255, 255, 255, 
      0,   0,   0,   0, 172,   1, 
      0,   0,   4,   0,   0,   0, 
      4,   0,   0,   0,   2,   0, 
      0,   0, 136,   1,   0,   0, 
      0,   0,   0,   0, 255, 255, 
    255, 255,   0,   0,   0,   0, 
    255, 255, 255, 255,   0,   0, 
      0,   0, 120, 101,  95, 104, 
    111, 115, 116,  95, 100, 101, 
    112, 116, 104,  95, 115, 116, 
    111, 114, 101,  95, 114, 101, 
     99, 116,  97, 110, 103, 108, 
    101,   0, 100, 119, 111, 114, 
    100,   0,   0,   0,  19,   0, 
      1,   0,   1,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0, 130,   1, 
      0,   0, 120, 101,  95, 104, 
    111, 115, 116,  95, 100, 101, 
    112, 116, 104,  95, 115, 116, 
    111, 114, 101,  95, 114, 101, 
    110, 100, 101, 114,  95, 116, 
     97, 114, 103, 101, 116,   0, 
     77, 105,  99, 114, 111, 115, 
    111, 102, 116,  32,  40,  82, 
     41,  32,  72,  76,  83,  76, 
     32,  83, 104,  97, 100, 101, 
    114,  32,  67, 111, 109, 112, 
    105, 108, 101, 114,  32,  49, 
     48,  46,  49,   0, 171, 171, 
     73,  83,  71,  78,   8,   0, 
      0,   0,   0,   0,   0,   0, 
      8,   0,   0,   0,  79,  83, 
     71,  78,   8,   0,   0,   0, 
      0,   0,   0,   0,   8,   0, 
      0,   0,  83,  72,  69,  88, 
    168,   6,   0,   0,  81,   0, 
      5,   0, 170,   1,   0,   0, 
    106,   8,   0,   1,  89,   0, 
      0,   7,  70, 142,  48,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      1,   0,   0,   0,   0,   0, 
      0,   0,  88,  32,   0,   7, 
     70, 126,  48,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,  85,  85, 
      0,   0,   0,   0,   0,   0, 
    156,   8,   0,   7,  70, 238, 
     49,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,  68,  68,   0,   0, 
      0,   0,   0,   0,  95,   0, 
      0,   2,  50,   0,   2,   0, 
    104,   0,   0,   2,   5,   0, 
      0,   0, 155,   0,   0,   4, 
      8,   0,   0,   0,   8,   0, 
      0,   0,   1,   0,   0,   0, 
     85,   0,   0,   6,  18,   0, 
     16,   0,   0,   0,   0,   0, 
     10,   0,   2,   0,   1,  64, 
      0,   0,   1,   0,   0,   0, 
    138,   0,   0,  17,  98,   0, 
     16,   0,   0,   0,   0,   0, 
      2,  64,   0,   0,   0,   0, 
      0,   0,  10,   0,   0,   0, 
      2,   0,   0,   0,   0,   0, 
      0,   0,   2,  64,   0,   0, 
      0,   0,   0,   0,  20,   0, 
      0,   0,  10,   0,   0,   0, 
      0,   0,   0,   0,   6, 129, 
     48,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,  30,   0,   0,   7, 
     34,   0,  16,   0,   0,   0, 
      0,   0,  26,   0,  16,   0, 
      0,   0,   0,   0,   1,  64, 
      0,   0,   1,   0,   0,   0, 
     38,   0,   0,   8,   0, 208, 
      0,   0,  34,   0,  16,   0, 
      0,   0,   0,   0,  42,   0, 
     16,   0,   0,   0,   0,   0, 
     26,   0,  16,   0,   0,   0, 
      0,   0,  80,   0,   0,   7, 
     18,   0,  16,   0,   0,   0, 
      0,   0,  10,   0,  16,   0, 
      0,   0,   0,   0,  26,   0, 
     16,   0,   0,   0,   0,   0, 
     31,   0,   4,   3,  10,   0, 
     16,   0,   0,   0,   0,   0, 
     62,   0,   0,   1,  21,   0, 
      0,   1,  85,   0,   0,   9, 
     34,   0,  16,   0,   0,   0, 
      0,   0,  10, 128,  48,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      1,  64,   0,   0,  10,   0, 
      0,   0,  54,   0,   0,   7, 
     18,   0,  16,   0,   0,   0, 
      0,   0,  10, 128,  48,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
    140,   0,   0,  20,  50,   0, 
     16,   0,   0,   0,   0,   0, 
      2,  64,   0,   0,  10,   0, 
      0,   0,  10,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   2,  64,   0,   0, 
      3,   0,   0,   0,   3,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,  70,   0, 
     16,   0,   0,   0,   0,   0, 
      2,  64,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0, 138,   0,   0,  17, 
    194,   0,  16,   0,   0,   0, 
      0,   0,   2,  64,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   2,   0,   0,   0, 
      2,   0,   0,   0,   2,  64, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,  10,   0, 
      0,   0,  12,   0,   0,   0, 
     86, 133,  48,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,  41,   0, 
      0,   6,  18,   0,  16,   0, 
      1,   0,   0,   0,  10,   0, 
      2,   0,   1,  64,   0,   0, 
      2,   0,   0,   0,  85,   0, 
      0,   6,  34,   0,  16,   0, 
      1,   0,   0,   0,  26,   0, 
      2,   0,   1,  64,   0,   0, 
      1,   0,   0,   0,  35,   0, 
      0,   9,  50,   0,  16,   0, 
      1,   0,   0,   0,  70,   0, 
     16,   0,   0,   0,   0,   0, 
    230,  10,  16,   0,   0,   0, 
      0,   0,  70,   0,  16,   0, 
      1,   0,   0,   0, 140,   0, 
      0,  16,  50,   0,  16,   0, 
      0,   0,   0,   0,   2,  64, 
      0,   0,  31,   0,   0,   0, 
     31,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      2,  64,   0,   0,   1,   0, 
      0,   0,   1,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,  70,   0,  16,   0, 
      1,   0,   0,   0,  70,   0, 
      2,   0,   1,   0,   0,   9, 
     18,   0,  16,   0,   2,   0, 
      0,   0,  26, 128,  48,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      1,  64,   0,   0, 255,   3, 
      0,   0,  38,   0,   0,  11, 
      0, 208,   0,   0, 194,   0, 
     16,   0,   0,   0,   0,   0, 
    166,  14,  16,   0,   0,   0, 
      0,   0,   2,  64,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,  80,   0,   0,   0, 
     16,   0,   0,   0,  78,   0, 
      0,   8,  98,   0,  16,   0, 
      2,   0,   0,   0,   0, 208, 
      0,   0,   6,   1,  16,   0, 
      0,   0,   0,   0, 166,  11, 
     16,   0,   0,   0,   0,   0, 
     35,   0,   0,   9,  18,   0, 
     16,   0,   2,   0,   0,   0, 
     42,   0,  16,   0,   2,   0, 
      0,   0,  10,   0,  16,   0, 
      2,   0,   0,   0,  26,   0, 
     16,   0,   2,   0,   0,   0, 
     35,   0,   0,  10,  50,   0, 
     16,   0,   0,   0,   0,   0, 
    150,   5,  16, 128,  65,   0, 
      0,   0,   2,   0,   0,   0, 
    230,  10,  16,   0,   0,   0, 
      0,   0,  70,   0,  16,   0, 
      0,   0,   0,   0,  38,   0, 
      0,   8,   0, 208,   0,   0, 
    130,   0,  16,   0,   0,   0, 
      0,   0,  58,   0,  16,   0, 
      0,   0,   0,   0,  42,   0, 
     16,   0,   0,   0,   0,   0, 
     35,   0,   0,   9,  18,   0, 
     16,   0,   0,   0,   0,   0, 
     26,   0,  16,   0,   0,   0, 
      0,   0,  42,   0,  16,   0, 
      0,   0,   0,   0,  10,   0, 
     16,   0,   0,   0,   0,   0, 
     35,   0,   0,   9,  18,   0, 
     16,   0,   0,   0,   0,   0, 
     10,   0,  16,   0,   2,   0, 
      0,   0,  58,   0,  16,   0, 
      0,   0,   0,   0,  10,   0, 
     16,   0,   0,   0,   0,   0, 
     85,   0,   0,   7,  18,   0, 
     16,   0,   0,   0,   0,   0, 
     10,   0,  16,   0,   0,   0, 
      0,   0,   1,  64,   0,   0, 
      2,   0,   0,   0, 140,   0, 
      0,  10,  34,   0,  16,   0, 
      0,   0,   0,   0,   1,  64, 
      0,   0,   1,   0,   0,   0, 
      1,  64,   0,   0,   1,   0, 
      0,   0,  26,   0,   2,   0, 
      1,  64,   0,   0,   0,   0, 
      0,   0,  30,   0,   0,  10, 
    194,   0,  16,   0,   0,   0, 
      0,   0,  86,   1,  16,   0, 
      0,   0,   0,   0,   2,  64, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   1,   0, 
      0,   0,   1,   0,   0,   0, 
     54,   0,   0,   8, 194,   0, 
     16,   0,   1,   0,   0,   0, 
      2,  64,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,  46,   0,   0,  10, 
     18,   0,  16,   0,   2,   0, 
      0,   0,  70,  15,  16,   0, 
      1,   0,   0,   0,  70, 126, 
     32,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,  26,   0, 
     16,   0,   0,   0,   0,   0, 
     46,   0,   0,  10,  34,   0, 
     16,   0,   2,   0,   0,   0, 
     70,  14,  16,   0,   1,   0, 
      0,   0,  22, 126,  32,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,  42,   0,  16,   0, 
      0,   0,   0,   0,  30,   0, 
      0,  10, 242,   0,  16,   0, 
      3,   0,   0,   0,  70,   4, 
     16,   0,   1,   0,   0,   0, 
      2,  64,   0,   0,   2,   0, 
      0,   0,   0,   0,   0,   0, 
      1,   0,   0,   0,   0,   0, 
      0,   0,  54,   0,   0,   5, 
     50,   0,  16,   0,   4,   0, 
      0,   0, 230,  10,  16,   0, 
      3,   0,   0,   0,  54,   0, 
      0,   8, 194,   0,  16,   0, 
      4,   0,   0,   0,   2,  64, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
     46,   0,   0,  10,  66,   0, 
     16,   0,   2,   0,   0,   0, 
     70,  15,  16,   0,   4,   0, 
      0,   0, 150, 124,  32,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,  26,   0,  16,   0, 
      0,   0,   0,   0,  46,   0, 
      0,  10, 130,   0,  16,   0, 
      2,   0,   0,   0,  70,  14, 
     16,   0,   4,   0,   0,   0, 
    150, 115,  32,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
     42,   0,  16,   0,   0,   0, 
      0,   0, 164,   0,   0,   8, 
    242, 224,  33,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      6,   0,  16,   0,   0,   0, 
      0,   0,  70,  14,  16,   0, 
      2,   0,   0,   0,  54,   0, 
      0,   8, 194,   0,  16,   0, 
      3,   0,   0,   0,   2,  64, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
     46,   0,   0,  10,  18,   0, 
     16,   0,   2,   0,   0,   0, 
     70,  15,  16,   0,   3,   0, 
      0,   0,  70, 126,  32,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,  26,   0,  16,   0, 
      0,   0,   0,   0,  46,   0, 
      0,  10,  34,   0,  16,   0, 
      2,   0,   0,   0,  70,  14, 
     16,   0,   3,   0,   0,   0, 
     22, 126,  32,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
     42,   0,  16,   0,   0,   0, 
      0,   0,  30,   0,   0,  10, 
     50,   0,  16,   0,   1,   0, 
      0,   0,  70,   0,  16,   0, 
      1,   0,   0,   0,   2,  64, 
      0,   0,   3,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
     54,   0,   0,   8, 194,   0, 
     16,   0,   1,   0,   0,   0, 
      2,  64,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,  46,   0,   0,  10, 
     66,   0,  16,   0,   2,   0, 
      0,   0,  70,  15,  16,   0, 
      1,   0,   0,   0, 150, 124, 
     32,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,  26,   0, 
     16,   0,   0,   0,   0,   0, 
     46,   0,   0,  10, 130,   0, 
     16,   0,   2,   0,   0,   0, 
     70,  14,  16,   0,   1,   0, 
      0,   0, 150, 115,  32,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,  42,   0,  16,   0, 
      0,   0,   0,   0, 164,   0, 
      0,   8, 242, 224,  33,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0, 246,  15,  16,   0, 
      0,   0,   0,   0,  70,  14, 
     16,   0,   2,   0,   0,   0, 
     62,   0,   0,   1,  83,  84, 
     65,  84, 148,   0,   0,   0, 
     45,   0,   0,   0,   5,   0, 
      0,   0,   0,   0,   0,   0, 
      1,   0,   0,   0,   0,   0, 
      0,   0,  13,   0,   0,   0, 
      7,   0,   0,   0,   2,   0, 
      0,   0,   1,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      8,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   6,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      2,   0,   0,   0
};
