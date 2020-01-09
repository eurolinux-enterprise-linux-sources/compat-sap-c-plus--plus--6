#include "harness.h"

extern vector unsigned char u8;
extern vector signed char s8;
extern vector bool char b8;
extern vector unsigned short u16;
extern vector signed short s16;
extern vector bool short b16;
extern vector unsigned int u32;
extern vector signed int s32;
extern vector bool int b32;
extern vector float f32;
extern vector pixel p16;
extern vector unsigned char const u8c;
extern vector signed char const s8c;
extern vector bool char const b8c;
extern vector unsigned short const u16c;
extern vector signed short const s16c;
extern vector bool short const b16c;
extern vector unsigned int const u32c;
extern vector signed int const s32c;
extern vector bool int const b32c;
extern vector float const f32c;
extern vector pixel const p16c;
extern vector unsigned char volatile u8v;
extern vector signed char volatile s8v;
extern vector bool char volatile b8v;
extern vector unsigned short volatile u16v;
extern vector signed short volatile s16v;
extern vector bool short volatile b16v;
extern vector unsigned int volatile u32v;
extern vector signed int volatile s32v;
extern vector bool int volatile b32v;
extern vector float volatile f32v;
extern vector pixel volatile p16v;
extern const vector unsigned char u8c_;
extern const vector signed char s8c_;
extern const vector bool char b8c_;
extern const vector unsigned short u16c_;
extern const vector signed short s16c_;
extern const vector bool short b16c_;
extern const vector unsigned int u32c_;
extern const vector signed int s32c_;
extern const vector bool int b32c_;
extern const vector float f32c_;
extern const vector pixel p16c_;
extern volatile vector unsigned char u8v_;
extern volatile vector signed char s8v_;
extern volatile vector bool char b8v_;
extern volatile vector unsigned short u16v_;
extern volatile vector signed short s16v_;
extern volatile vector bool short b16v_;
extern volatile vector unsigned int u32v_;
extern volatile vector signed int s32v_;
extern volatile vector bool int b32v_;
extern volatile vector float f32v_;
extern volatile vector pixel p16v_;
int i_u8 = vec_step(u8);
int i_s8 = vec_step(s8);
int i_b8 = vec_step(b8);
int i_u16 = vec_step(u16);
int i_s16 = vec_step(s16);
int i_b16 = vec_step(b16);
int i_u32 = vec_step(u32);
int i_s32 = vec_step(s32);
int i_b32 = vec_step(b32);
int i_f32 = vec_step(f32);
int i_p16 = vec_step(p16);
int i_u8c = vec_step(u8c);
int i_s8c = vec_step(s8c);
int i_b8c = vec_step(b8c);
int i_u16c = vec_step(u16c);
int i_s16c = vec_step(s16c);
int i_b16c = vec_step(b16c);
int i_u32c = vec_step(u32c);
int i_s32c = vec_step(s32c);
int i_b32c = vec_step(b32c);
int i_f32c = vec_step(f32c);
int i_p16c = vec_step(p16c);
int i_u8v = vec_step(u8v);
int i_s8v = vec_step(s8v);
int i_b8v = vec_step(b8v);
int i_u16v = vec_step(u16v);
int i_s16v = vec_step(s16v);
int i_b16v = vec_step(b16v);
int i_u32v = vec_step(u32v);
int i_s32v = vec_step(s32v);
int i_b32v = vec_step(b32v);
int i_f32v = vec_step(f32v);
int i_p16v = vec_step(p16v);
int i_u8c_ = vec_step(u8c_);
int i_s8c_ = vec_step(s8c_);
int i_b8c_ = vec_step(b8c_);
int i_u16c_ = vec_step(u16c_);
int i_s16c_ = vec_step(s16c_);
int i_b16c_ = vec_step(b16c_);
int i_u32c_ = vec_step(u32c_);
int i_s32c_ = vec_step(s32c_);
int i_b32c_ = vec_step(b32c_);
int i_f32c_ = vec_step(f32c_);
int i_p16c_ = vec_step(p16c_);
int i_u8v_ = vec_step(u8v_);
int i_s8v_ = vec_step(s8v_);
int i_b8v_ = vec_step(b8v_);
int i_u16v_ = vec_step(u16v_);
int i_s16v_ = vec_step(s16v_);
int i_b16v_ = vec_step(b16v_);
int i_u32v_ = vec_step(u32v_);
int i_s32v_ = vec_step(s32v_);
int i_b32v_ = vec_step(b32v_);
int i_f32v_ = vec_step(f32v_);
int i_p16v_ = vec_step(p16v_);
int j_u8 = vec_step(vector unsigned char);
int j_s8 = vec_step(vector signed char);
int j_b8 = vec_step(vector bool char);
int j_u16 = vec_step(vector unsigned short);
int j_s16 = vec_step(vector signed short);
int j_b16 = vec_step(vector bool short);
int j_u32 = vec_step(vector unsigned int);
int j_s32 = vec_step(vector signed int);
int j_b32 = vec_step(vector bool int);
int j_f32 = vec_step(vector float);
int j_p16 = vec_step(vector pixel);
int j_u8c = vec_step(vector unsigned char const);
int j_s8c = vec_step(vector signed char const);
int j_b8c = vec_step(vector bool char const);
int j_u16c = vec_step(vector unsigned short const);
int j_s16c = vec_step(vector signed short const);
int j_b16c = vec_step(vector bool short const);
int j_u32c = vec_step(vector unsigned int const);
int j_s32c = vec_step(vector signed int const);
int j_b32c = vec_step(vector bool int const);
int j_f32c = vec_step(vector float const);
int j_p16c = vec_step(vector pixel const);
int j_u8v = vec_step(vector unsigned char volatile);
int j_s8v = vec_step(vector signed char volatile);
int j_b8v = vec_step(vector bool char volatile);
int j_u16v = vec_step(vector unsigned short volatile);
int j_s16v = vec_step(vector signed short volatile);
int j_b16v = vec_step(vector bool short volatile);
int j_u32v = vec_step(vector unsigned int volatile);
int j_s32v = vec_step(vector signed int volatile);
int j_b32v = vec_step(vector bool int volatile);
int j_f32v = vec_step(vector float volatile);
int j_p16v = vec_step(vector pixel volatile);
int j_u8c_ = vec_step(const vector unsigned char);
int j_s8c_ = vec_step(const vector signed char);
int j_b8c_ = vec_step(const vector bool char);
int j_u16c_ = vec_step(const vector unsigned short);
int j_s16c_ = vec_step(const vector signed short);
int j_b16c_ = vec_step(const vector bool short);
int j_u32c_ = vec_step(const vector unsigned int);
int j_s32c_ = vec_step(const vector signed int);
int j_b32c_ = vec_step(const vector bool int);
int j_f32c_ = vec_step(const vector float);
int j_p16c_ = vec_step(const vector pixel);
int j_u8v_ = vec_step(volatile vector unsigned char);
int j_s8v_ = vec_step(volatile vector signed char);
int j_b8v_ = vec_step(volatile vector bool char);
int j_u16v_ = vec_step(volatile vector unsigned short);
int j_s16v_ = vec_step(volatile vector signed short);
int j_b16v_ = vec_step(volatile vector bool short);
int j_u32v_ = vec_step(volatile vector unsigned int);
int j_s32v_ = vec_step(volatile vector signed int);
int j_b32v_ = vec_step(volatile vector bool int);
int j_f32v_ = vec_step(volatile vector float);
int j_p16v_ = vec_step(volatile vector pixel);

static void test()
{
  int i_u8 = vec_step(u8);
  int i_s8 = vec_step(s8);
  int i_b8 = vec_step(b8);
  int i_u16 = vec_step(u16);
  int i_s16 = vec_step(s16);
  int i_b16 = vec_step(b16);
  int i_u32 = vec_step(u32);
  int i_s32 = vec_step(s32);
  int i_b32 = vec_step(b32);
  int i_f32 = vec_step(f32);
  int i_p16 = vec_step(p16);
  int i_u8c = vec_step(u8c);
  int i_s8c = vec_step(s8c);
  int i_b8c = vec_step(b8c);
  int i_u16c = vec_step(u16c);
  int i_s16c = vec_step(s16c);
  int i_b16c = vec_step(b16c);
  int i_u32c = vec_step(u32c);
  int i_s32c = vec_step(s32c);
  int i_b32c = vec_step(b32c);
  int i_f32c = vec_step(f32c);
  int i_p16c = vec_step(p16c);
  int i_u8v = vec_step(u8v);
  int i_s8v = vec_step(s8v);
  int i_b8v = vec_step(b8v);
  int i_u16v = vec_step(u16v);
  int i_s16v = vec_step(s16v);
  int i_b16v = vec_step(b16v);
  int i_u32v = vec_step(u32v);
  int i_s32v = vec_step(s32v);
  int i_b32v = vec_step(b32v);
  int i_f32v = vec_step(f32v);
  int i_p16v = vec_step(p16v);
  int i_u8c_ = vec_step(u8c_);
  int i_s8c_ = vec_step(s8c_);
  int i_b8c_ = vec_step(b8c_);
  int i_u16c_ = vec_step(u16c_);
  int i_s16c_ = vec_step(s16c_);
  int i_b16c_ = vec_step(b16c_);
  int i_u32c_ = vec_step(u32c_);
  int i_s32c_ = vec_step(s32c_);
  int i_b32c_ = vec_step(b32c_);
  int i_f32c_ = vec_step(f32c_);
  int i_p16c_ = vec_step(p16c_);
  int i_u8v_ = vec_step(u8v_);
  int i_s8v_ = vec_step(s8v_);
  int i_b8v_ = vec_step(b8v_);
  int i_u16v_ = vec_step(u16v_);
  int i_s16v_ = vec_step(s16v_);
  int i_b16v_ = vec_step(b16v_);
  int i_u32v_ = vec_step(u32v_);
  int i_s32v_ = vec_step(s32v_);
  int i_b32v_ = vec_step(b32v_);
  int i_f32v_ = vec_step(f32v_);
  int i_p16v_ = vec_step(p16v_);
  int j_u8 = vec_step(vector unsigned char);
  int j_s8 = vec_step(vector signed char);
  int j_b8 = vec_step(vector bool char);
  int j_u16 = vec_step(vector unsigned short);
  int j_s16 = vec_step(vector signed short);
  int j_b16 = vec_step(vector bool short);
  int j_u32 = vec_step(vector unsigned int);
  int j_s32 = vec_step(vector signed int);
  int j_b32 = vec_step(vector bool int);
  int j_f32 = vec_step(vector float);
  int j_p16 = vec_step(vector pixel);
  int j_u8c = vec_step(vector unsigned char const);
  int j_s8c = vec_step(vector signed char const);
  int j_b8c = vec_step(vector bool char const);
  int j_u16c = vec_step(vector unsigned short const);
  int j_s16c = vec_step(vector signed short const);
  int j_b16c = vec_step(vector bool short const);
  int j_u32c = vec_step(vector unsigned int const);
  int j_s32c = vec_step(vector signed int const);
  int j_b32c = vec_step(vector bool int const);
  int j_f32c = vec_step(vector float const);
  int j_p16c = vec_step(vector pixel const);
  int j_u8v = vec_step(vector unsigned char volatile);
  int j_s8v = vec_step(vector signed char volatile);
  int j_b8v = vec_step(vector bool char volatile);
  int j_u16v = vec_step(vector unsigned short volatile);
  int j_s16v = vec_step(vector signed short volatile);
  int j_b16v = vec_step(vector bool short volatile);
  int j_u32v = vec_step(vector unsigned int volatile);
  int j_s32v = vec_step(vector signed int volatile);
  int j_b32v = vec_step(vector bool int volatile);
  int j_f32v = vec_step(vector float volatile);
  int j_p16v = vec_step(vector pixel volatile);
  int j_u8c_ = vec_step(const vector unsigned char);
  int j_s8c_ = vec_step(const vector signed char);
  int j_b8c_ = vec_step(const vector bool char);
  int j_u16c_ = vec_step(const vector unsigned short);
  int j_s16c_ = vec_step(const vector signed short);
  int j_b16c_ = vec_step(const vector bool short);
  int j_u32c_ = vec_step(const vector unsigned int);
  int j_s32c_ = vec_step(const vector signed int);
  int j_b32c_ = vec_step(const vector bool int);
  int j_f32c_ = vec_step(const vector float);
  int j_p16c_ = vec_step(const vector pixel);
  int j_u8v_ = vec_step(volatile vector unsigned char);
  int j_s8v_ = vec_step(volatile vector signed char);
  int j_b8v_ = vec_step(volatile vector bool char);
  int j_u16v_ = vec_step(volatile vector unsigned short);
  int j_s16v_ = vec_step(volatile vector signed short);
  int j_b16v_ = vec_step(volatile vector bool short);
  int j_u32v_ = vec_step(volatile vector unsigned int);
  int j_s32v_ = vec_step(volatile vector signed int);
  int j_b32v_ = vec_step(volatile vector bool int);
  int j_f32v_ = vec_step(volatile vector float);
  int j_p16v_ = vec_step(volatile vector pixel);
  check((i_u8 + i_s8 + i_b8 + i_u16 + i_s16 + i_b16 + i_u32 + i_s32 +
	 i_b32 + i_f32 + i_p16 + i_u8c + i_s8c + i_b8c + i_u16c +
	 i_s16c + i_b16c + i_u32c + i_s32c + i_b32c + i_f32c + i_p16c
	 + i_u8v + i_s8v + i_b8v + i_u16v + i_s16v + i_b16v + i_u32v
	 + i_s32v + i_b32v + i_f32v + i_p16v + i_u8c_ + i_s8c_ +
	 i_b8c_ + i_u16c_ + i_s16c_ + i_b16c_ + i_u32c_ + i_s32c_ +
	 i_b32c_ + i_f32c_ + i_p16c_ + i_u8v_ + i_s8v_ + i_b8v_ +
	 i_u16v_ + i_s16v_ + i_b16v_ + i_u32v_ + i_s32v_ + i_b32v_ +
	 i_f32v_ + i_p16v_ + j_u8 + j_s8 + j_b8 + j_u16 + j_s16 +
	 j_b16 + j_u32 + j_s32 + j_b32 + j_f32 + j_p16 + j_u8c +
	 j_s8c + j_b8c + j_u16c + j_s16c + j_b16c + j_u32c + j_s32c +
	 j_b32c + j_f32c + j_p16c + j_u8v + j_s8v + j_b8v + j_u16v +
	 j_s16v + j_b16v + j_u32v + j_s32v + j_b32v + j_f32v + j_p16v
	 + j_u8c_ + j_s8c_ + j_b8c_ + j_u16c_ + j_s16c_ + j_b16c_ +
	 j_u32c_ + j_s32c_ + j_b32c_ + j_f32c_ + j_p16c_ + j_u8v_ +
	 j_s8v_ + j_b8v_ + j_u16v_ + j_s16v_ + j_b16v_ + j_u32v_ +
	 j_s32v_ + j_b32v_ + j_f32v_ + j_p16v_) == 960,
	"vec_step");
}
