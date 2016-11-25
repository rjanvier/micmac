// File Automatically generated by eLiSe
#include "StdAfx.h"
#include "cREgDistDxx_Four7x2.h"


cREgDistDxx_Four7x2::cREgDistDxx_Four7x2():
    cElCompiledFonc(2)
{
   AddIntRef (cIncIntervale("Intr",0,14));
   Close(false);
}



void cREgDistDxx_Four7x2::ComputeVal()
{
   double tmp0_ = mLocRegDistuu1_x - mLocFour7x2_State_1_0;
   double tmp1_ = (tmp0_) / mLocFour7x2_State_0_0;
   double tmp2_ = mLocRegDistuu1_y - mLocFour7x2_State_2_0;
   double tmp3_ = (tmp2_) / mLocFour7x2_State_0_0;
   double tmp4_ = mCompCoord[9];
   double tmp5_ = tmp1_ - tmp4_;
   double tmp6_ = mCompCoord[10];
   double tmp7_ = tmp3_ - tmp6_;
   double tmp8_ = (tmp5_) * (tmp5_);
   double tmp9_ = (tmp7_) * (tmp7_);
   double tmp10_ = tmp8_ + tmp9_;
   double tmp11_ = (tmp10_) * (tmp10_);
   double tmp12_ = mCompCoord[3];
   double tmp13_ = 1 + tmp12_;
   double tmp14_ = mCompCoord[4];
   double tmp15_ = mCompCoord[5];
   double tmp16_ = tmp15_ * 2;
   double tmp17_ = mLocRegDistuu2_x - mLocFour7x2_State_1_0;
   double tmp18_ = (tmp17_) / mLocFour7x2_State_0_0;
   double tmp19_ = mCompCoord[6];
   double tmp20_ = mLocRegDistuu2_y - mLocFour7x2_State_2_0;
   double tmp21_ = (tmp20_) / mLocFour7x2_State_0_0;
   double tmp22_ = mCompCoord[7];
   double tmp23_ = mCompCoord[11];
   double tmp24_ = tmp18_ - tmp4_;
   double tmp25_ = tmp21_ - tmp6_;
   double tmp26_ = mCompCoord[12];
   double tmp27_ = (tmp24_) * (tmp24_);
   double tmp28_ = (tmp25_) * (tmp25_);
   double tmp29_ = tmp27_ + tmp28_;
   double tmp30_ = mCompCoord[13];
   double tmp31_ = (tmp29_) * (tmp29_);
   double tmp32_ = mLocRegDistuu3_x - mLocFour7x2_State_1_0;
   double tmp33_ = (tmp32_) / mLocFour7x2_State_0_0;
   double tmp34_ = mLocRegDistuu3_y - mLocFour7x2_State_2_0;
   double tmp35_ = (tmp34_) / mLocFour7x2_State_0_0;
   double tmp36_ = tmp33_ - tmp4_;
   double tmp37_ = tmp35_ - tmp6_;
   double tmp38_ = (tmp36_) * (tmp36_);
   double tmp39_ = (tmp37_) * (tmp37_);
   double tmp40_ = tmp38_ + tmp39_;
   double tmp41_ = (tmp40_) * (tmp40_);
   double tmp42_ = (tmp1_) * (tmp3_);
   double tmp43_ = (tmp3_) * (tmp3_);
   double tmp44_ = (tmp1_) * (tmp1_);
   double tmp45_ = tmp23_ * (tmp10_);
   double tmp46_ = tmp26_ * tmp11_;
   double tmp47_ = tmp45_ + tmp46_;
   double tmp48_ = tmp11_ * (tmp10_);
   double tmp49_ = tmp30_ * tmp48_;
   double tmp50_ = tmp47_ + tmp49_;
   double tmp51_ = 1 - tmp12_;
   double tmp52_ = (tmp18_) * (tmp21_);
   double tmp53_ = tmp19_ * 2;
   double tmp54_ = (tmp21_) * (tmp21_);
   double tmp55_ = mCompCoord[8];
   double tmp56_ = (tmp18_) * (tmp18_);
   double tmp57_ = tmp23_ * (tmp29_);
   double tmp58_ = tmp26_ * tmp31_;
   double tmp59_ = tmp57_ + tmp58_;
   double tmp60_ = tmp31_ * (tmp29_);
   double tmp61_ = tmp30_ * tmp60_;
   double tmp62_ = tmp59_ + tmp61_;
   double tmp63_ = (tmp33_) * (tmp35_);
   double tmp64_ = (tmp35_) * (tmp35_);
   double tmp65_ = (tmp33_) * (tmp33_);
   double tmp66_ = tmp23_ * (tmp40_);
   double tmp67_ = tmp26_ * tmp41_;
   double tmp68_ = tmp66_ + tmp67_;
   double tmp69_ = tmp41_ * (tmp40_);
   double tmp70_ = tmp30_ * tmp69_;
   double tmp71_ = tmp68_ + tmp70_;

  mVal[0] = (mLocFour7x2_State_1_0 + (((tmp13_) * (tmp1_) + tmp14_ * (tmp3_)) - tmp16_ * tmp44_ + tmp19_ * tmp42_ + tmp22_ * tmp43_ + (tmp5_) * (tmp50_)) * mLocFour7x2_State_0_0 + mLocFour7x2_State_1_0 + (((tmp13_) * (tmp18_) + tmp14_ * (tmp21_)) - tmp16_ * tmp56_ + tmp19_ * tmp52_ + tmp22_ * tmp54_ + (tmp24_) * (tmp62_)) * mLocFour7x2_State_0_0) - (mLocFour7x2_State_1_0 + (((tmp13_) * (tmp33_) + tmp14_ * (tmp35_)) - tmp16_ * tmp65_ + tmp19_ * tmp63_ + tmp22_ * tmp64_ + (tmp36_) * (tmp71_)) * mLocFour7x2_State_0_0) * 2.000000;

  mVal[1] = (mLocFour7x2_State_2_0 + (((tmp51_) * (tmp3_) + tmp14_ * (tmp1_) + tmp15_ * tmp42_) - tmp53_ * tmp43_ + tmp55_ * tmp44_ + (tmp7_) * (tmp50_)) * mLocFour7x2_State_0_0 + mLocFour7x2_State_2_0 + (((tmp51_) * (tmp21_) + tmp14_ * (tmp18_) + tmp15_ * tmp52_) - tmp53_ * tmp54_ + tmp55_ * tmp56_ + (tmp25_) * (tmp62_)) * mLocFour7x2_State_0_0) - (mLocFour7x2_State_2_0 + (((tmp51_) * (tmp35_) + tmp14_ * (tmp33_) + tmp15_ * tmp63_) - tmp53_ * tmp64_ + tmp55_ * tmp65_ + (tmp37_) * (tmp71_)) * mLocFour7x2_State_0_0) * 2.000000;

}


void cREgDistDxx_Four7x2::ComputeValDeriv()
{
   double tmp0_ = mLocRegDistuu1_x - mLocFour7x2_State_1_0;
   double tmp1_ = (tmp0_) / mLocFour7x2_State_0_0;
   double tmp2_ = mLocRegDistuu1_y - mLocFour7x2_State_2_0;
   double tmp3_ = (tmp2_) / mLocFour7x2_State_0_0;
   double tmp4_ = mCompCoord[9];
   double tmp5_ = tmp1_ - tmp4_;
   double tmp6_ = mCompCoord[10];
   double tmp7_ = tmp3_ - tmp6_;
   double tmp8_ = (tmp5_) * (tmp5_);
   double tmp9_ = (tmp7_) * (tmp7_);
   double tmp10_ = tmp8_ + tmp9_;
   double tmp11_ = (tmp10_) * (tmp10_);
   double tmp12_ = mCompCoord[3];
   double tmp13_ = 1 + tmp12_;
   double tmp14_ = mCompCoord[4];
   double tmp15_ = mCompCoord[5];
   double tmp16_ = tmp15_ * 2;
   double tmp17_ = mLocRegDistuu2_x - mLocFour7x2_State_1_0;
   double tmp18_ = (tmp17_) / mLocFour7x2_State_0_0;
   double tmp19_ = mCompCoord[6];
   double tmp20_ = mLocRegDistuu2_y - mLocFour7x2_State_2_0;
   double tmp21_ = (tmp20_) / mLocFour7x2_State_0_0;
   double tmp22_ = mCompCoord[7];
   double tmp23_ = mCompCoord[11];
   double tmp24_ = tmp18_ - tmp4_;
   double tmp25_ = tmp21_ - tmp6_;
   double tmp26_ = mCompCoord[12];
   double tmp27_ = (tmp24_) * (tmp24_);
   double tmp28_ = (tmp25_) * (tmp25_);
   double tmp29_ = tmp27_ + tmp28_;
   double tmp30_ = mCompCoord[13];
   double tmp31_ = (tmp29_) * (tmp29_);
   double tmp32_ = mLocRegDistuu3_x - mLocFour7x2_State_1_0;
   double tmp33_ = (tmp32_) / mLocFour7x2_State_0_0;
   double tmp34_ = mLocRegDistuu3_y - mLocFour7x2_State_2_0;
   double tmp35_ = (tmp34_) / mLocFour7x2_State_0_0;
   double tmp36_ = tmp33_ - tmp4_;
   double tmp37_ = tmp35_ - tmp6_;
   double tmp38_ = (tmp36_) * (tmp36_);
   double tmp39_ = (tmp37_) * (tmp37_);
   double tmp40_ = tmp38_ + tmp39_;
   double tmp41_ = (tmp40_) * (tmp40_);
   double tmp42_ = (tmp1_) * (tmp1_);
   double tmp43_ = (tmp18_) * (tmp18_);
   double tmp44_ = (tmp33_) * (tmp33_);
   double tmp45_ = (tmp1_) * (tmp3_);
   double tmp46_ = (tmp18_) * (tmp21_);
   double tmp47_ = (tmp33_) * (tmp35_);
   double tmp48_ = (tmp3_) * (tmp3_);
   double tmp49_ = (tmp21_) * (tmp21_);
   double tmp50_ = (tmp35_) * (tmp35_);
   double tmp51_ = tmp23_ * (tmp10_);
   double tmp52_ = tmp26_ * tmp11_;
   double tmp53_ = tmp51_ + tmp52_;
   double tmp54_ = tmp11_ * (tmp10_);
   double tmp55_ = tmp30_ * tmp54_;
   double tmp56_ = tmp53_ + tmp55_;
   double tmp57_ = -(1);
   double tmp58_ = tmp57_ * (tmp5_);
   double tmp59_ = tmp58_ + tmp58_;
   double tmp60_ = (tmp59_) * (tmp10_);
   double tmp61_ = tmp60_ + tmp60_;
   double tmp62_ = tmp23_ * (tmp29_);
   double tmp63_ = tmp26_ * tmp31_;
   double tmp64_ = tmp62_ + tmp63_;
   double tmp65_ = tmp31_ * (tmp29_);
   double tmp66_ = tmp30_ * tmp65_;
   double tmp67_ = tmp64_ + tmp66_;
   double tmp68_ = tmp57_ * (tmp24_);
   double tmp69_ = tmp68_ + tmp68_;
   double tmp70_ = (tmp69_) * (tmp29_);
   double tmp71_ = tmp70_ + tmp70_;
   double tmp72_ = tmp23_ * (tmp40_);
   double tmp73_ = tmp26_ * tmp41_;
   double tmp74_ = tmp72_ + tmp73_;
   double tmp75_ = tmp41_ * (tmp40_);
   double tmp76_ = tmp30_ * tmp75_;
   double tmp77_ = tmp74_ + tmp76_;
   double tmp78_ = tmp57_ * (tmp36_);
   double tmp79_ = tmp78_ + tmp78_;
   double tmp80_ = (tmp79_) * (tmp40_);
   double tmp81_ = tmp80_ + tmp80_;
   double tmp82_ = tmp57_ * (tmp7_);
   double tmp83_ = tmp82_ + tmp82_;
   double tmp84_ = (tmp83_) * (tmp10_);
   double tmp85_ = tmp84_ + tmp84_;
   double tmp86_ = tmp57_ * (tmp25_);
   double tmp87_ = tmp86_ + tmp86_;
   double tmp88_ = (tmp87_) * (tmp29_);
   double tmp89_ = tmp88_ + tmp88_;
   double tmp90_ = tmp57_ * (tmp37_);
   double tmp91_ = tmp90_ + tmp90_;
   double tmp92_ = (tmp91_) * (tmp40_);
   double tmp93_ = tmp92_ + tmp92_;
   double tmp94_ = 1 - tmp12_;
   double tmp95_ = tmp19_ * 2;
   double tmp96_ = mCompCoord[8];
   double tmp97_ = (tmp1_) * mLocFour7x2_State_0_0;
   double tmp98_ = (tmp18_) * mLocFour7x2_State_0_0;
   double tmp99_ = tmp97_ + tmp98_;
   double tmp100_ = (tmp33_) * mLocFour7x2_State_0_0;
   double tmp101_ = tmp100_ * 2.000000;
   double tmp102_ = (tmp99_) - tmp101_;
   double tmp103_ = tmp45_ * mLocFour7x2_State_0_0;
   double tmp104_ = tmp46_ * mLocFour7x2_State_0_0;
   double tmp105_ = tmp103_ + tmp104_;
   double tmp106_ = tmp47_ * mLocFour7x2_State_0_0;
   double tmp107_ = tmp106_ * 2.000000;
   double tmp108_ = (tmp105_) - tmp107_;
   double tmp109_ = (tmp59_) * tmp23_;
   double tmp110_ = (tmp61_) * tmp26_;
   double tmp111_ = tmp109_ + tmp110_;
   double tmp112_ = (tmp61_) * (tmp10_);
   double tmp113_ = (tmp59_) * tmp11_;
   double tmp114_ = tmp112_ + tmp113_;
   double tmp115_ = (tmp114_) * tmp30_;
   double tmp116_ = tmp111_ + tmp115_;
   double tmp117_ = (tmp69_) * tmp23_;
   double tmp118_ = (tmp71_) * tmp26_;
   double tmp119_ = tmp117_ + tmp118_;
   double tmp120_ = (tmp71_) * (tmp29_);
   double tmp121_ = (tmp69_) * tmp31_;
   double tmp122_ = tmp120_ + tmp121_;
   double tmp123_ = (tmp122_) * tmp30_;
   double tmp124_ = tmp119_ + tmp123_;
   double tmp125_ = (tmp79_) * tmp23_;
   double tmp126_ = (tmp81_) * tmp26_;
   double tmp127_ = tmp125_ + tmp126_;
   double tmp128_ = (tmp81_) * (tmp40_);
   double tmp129_ = (tmp79_) * tmp41_;
   double tmp130_ = tmp128_ + tmp129_;
   double tmp131_ = (tmp130_) * tmp30_;
   double tmp132_ = tmp127_ + tmp131_;
   double tmp133_ = tmp57_ * (tmp56_);
   double tmp134_ = (tmp83_) * tmp23_;
   double tmp135_ = (tmp85_) * tmp26_;
   double tmp136_ = tmp134_ + tmp135_;
   double tmp137_ = (tmp85_) * (tmp10_);
   double tmp138_ = (tmp83_) * tmp11_;
   double tmp139_ = tmp137_ + tmp138_;
   double tmp140_ = (tmp139_) * tmp30_;
   double tmp141_ = tmp136_ + tmp140_;
   double tmp142_ = tmp57_ * (tmp67_);
   double tmp143_ = (tmp87_) * tmp23_;
   double tmp144_ = (tmp89_) * tmp26_;
   double tmp145_ = tmp143_ + tmp144_;
   double tmp146_ = (tmp89_) * (tmp29_);
   double tmp147_ = (tmp87_) * tmp31_;
   double tmp148_ = tmp146_ + tmp147_;
   double tmp149_ = (tmp148_) * tmp30_;
   double tmp150_ = tmp145_ + tmp149_;
   double tmp151_ = tmp57_ * (tmp77_);
   double tmp152_ = (tmp91_) * tmp23_;
   double tmp153_ = (tmp93_) * tmp26_;
   double tmp154_ = tmp152_ + tmp153_;
   double tmp155_ = (tmp93_) * (tmp40_);
   double tmp156_ = (tmp91_) * tmp41_;
   double tmp157_ = tmp155_ + tmp156_;
   double tmp158_ = (tmp157_) * tmp30_;
   double tmp159_ = tmp154_ + tmp158_;

  mVal[0] = (mLocFour7x2_State_1_0 + (((tmp13_) * (tmp1_) + tmp14_ * (tmp3_)) - tmp16_ * tmp42_ + tmp19_ * tmp45_ + tmp22_ * tmp48_ + (tmp5_) * (tmp56_)) * mLocFour7x2_State_0_0 + mLocFour7x2_State_1_0 + (((tmp13_) * (tmp18_) + tmp14_ * (tmp21_)) - tmp16_ * tmp43_ + tmp19_ * tmp46_ + tmp22_ * tmp49_ + (tmp24_) * (tmp67_)) * mLocFour7x2_State_0_0) - (mLocFour7x2_State_1_0 + (((tmp13_) * (tmp33_) + tmp14_ * (tmp35_)) - tmp16_ * tmp44_ + tmp19_ * tmp47_ + tmp22_ * tmp50_ + (tmp36_) * (tmp77_)) * mLocFour7x2_State_0_0) * 2.000000;

  mCompDer[0][0] = 0;
  mCompDer[0][1] = 0;
  mCompDer[0][2] = 0;
  mCompDer[0][3] = tmp102_;
  mCompDer[0][4] = ((tmp3_) * mLocFour7x2_State_0_0 + (tmp21_) * mLocFour7x2_State_0_0) - (tmp35_) * mLocFour7x2_State_0_0 * 2.000000;
  mCompDer[0][5] = (-(2 * tmp42_) * mLocFour7x2_State_0_0 + -(2 * tmp43_) * mLocFour7x2_State_0_0) - -(2 * tmp44_) * mLocFour7x2_State_0_0 * 2.000000;
  mCompDer[0][6] = tmp108_;
  mCompDer[0][7] = (tmp48_ * mLocFour7x2_State_0_0 + tmp49_ * mLocFour7x2_State_0_0) - tmp50_ * mLocFour7x2_State_0_0 * 2.000000;
  mCompDer[0][8] = 0;
  mCompDer[0][9] = ((tmp133_ + (tmp116_) * (tmp5_)) * mLocFour7x2_State_0_0 + (tmp142_ + (tmp124_) * (tmp24_)) * mLocFour7x2_State_0_0) - (tmp151_ + (tmp132_) * (tmp36_)) * mLocFour7x2_State_0_0 * 2.000000;
  mCompDer[0][10] = ((tmp141_) * (tmp5_) * mLocFour7x2_State_0_0 + (tmp150_) * (tmp24_) * mLocFour7x2_State_0_0) - (tmp159_) * (tmp36_) * mLocFour7x2_State_0_0 * 2.000000;
  mCompDer[0][11] = ((tmp10_) * (tmp5_) * mLocFour7x2_State_0_0 + (tmp29_) * (tmp24_) * mLocFour7x2_State_0_0) - (tmp40_) * (tmp36_) * mLocFour7x2_State_0_0 * 2.000000;
  mCompDer[0][12] = (tmp11_ * (tmp5_) * mLocFour7x2_State_0_0 + tmp31_ * (tmp24_) * mLocFour7x2_State_0_0) - tmp41_ * (tmp36_) * mLocFour7x2_State_0_0 * 2.000000;
  mCompDer[0][13] = (tmp54_ * (tmp5_) * mLocFour7x2_State_0_0 + tmp65_ * (tmp24_) * mLocFour7x2_State_0_0) - tmp75_ * (tmp36_) * mLocFour7x2_State_0_0 * 2.000000;
  mVal[1] = (mLocFour7x2_State_2_0 + (((tmp94_) * (tmp3_) + tmp14_ * (tmp1_) + tmp15_ * tmp45_) - tmp95_ * tmp48_ + tmp96_ * tmp42_ + (tmp7_) * (tmp56_)) * mLocFour7x2_State_0_0 + mLocFour7x2_State_2_0 + (((tmp94_) * (tmp21_) + tmp14_ * (tmp18_) + tmp15_ * tmp46_) - tmp95_ * tmp49_ + tmp96_ * tmp43_ + (tmp25_) * (tmp67_)) * mLocFour7x2_State_0_0) - (mLocFour7x2_State_2_0 + (((tmp94_) * (tmp35_) + tmp14_ * (tmp33_) + tmp15_ * tmp47_) - tmp95_ * tmp50_ + tmp96_ * tmp44_ + (tmp37_) * (tmp77_)) * mLocFour7x2_State_0_0) * 2.000000;

  mCompDer[1][0] = 0;
  mCompDer[1][1] = 0;
  mCompDer[1][2] = 0;
  mCompDer[1][3] = (tmp57_ * (tmp3_) * mLocFour7x2_State_0_0 + tmp57_ * (tmp21_) * mLocFour7x2_State_0_0) - tmp57_ * (tmp35_) * mLocFour7x2_State_0_0 * 2.000000;
  mCompDer[1][4] = tmp102_;
  mCompDer[1][5] = tmp108_;
  mCompDer[1][6] = (-(2 * tmp48_) * mLocFour7x2_State_0_0 + -(2 * tmp49_) * mLocFour7x2_State_0_0) - -(2 * tmp50_) * mLocFour7x2_State_0_0 * 2.000000;
  mCompDer[1][7] = 0;
  mCompDer[1][8] = (tmp42_ * mLocFour7x2_State_0_0 + tmp43_ * mLocFour7x2_State_0_0) - tmp44_ * mLocFour7x2_State_0_0 * 2.000000;
  mCompDer[1][9] = ((tmp116_) * (tmp7_) * mLocFour7x2_State_0_0 + (tmp124_) * (tmp25_) * mLocFour7x2_State_0_0) - (tmp132_) * (tmp37_) * mLocFour7x2_State_0_0 * 2.000000;
  mCompDer[1][10] = ((tmp133_ + (tmp141_) * (tmp7_)) * mLocFour7x2_State_0_0 + (tmp142_ + (tmp150_) * (tmp25_)) * mLocFour7x2_State_0_0) - (tmp151_ + (tmp159_) * (tmp37_)) * mLocFour7x2_State_0_0 * 2.000000;
  mCompDer[1][11] = ((tmp10_) * (tmp7_) * mLocFour7x2_State_0_0 + (tmp29_) * (tmp25_) * mLocFour7x2_State_0_0) - (tmp40_) * (tmp37_) * mLocFour7x2_State_0_0 * 2.000000;
  mCompDer[1][12] = (tmp11_ * (tmp7_) * mLocFour7x2_State_0_0 + tmp31_ * (tmp25_) * mLocFour7x2_State_0_0) - tmp41_ * (tmp37_) * mLocFour7x2_State_0_0 * 2.000000;
  mCompDer[1][13] = (tmp54_ * (tmp7_) * mLocFour7x2_State_0_0 + tmp65_ * (tmp25_) * mLocFour7x2_State_0_0) - tmp75_ * (tmp37_) * mLocFour7x2_State_0_0 * 2.000000;
}


void cREgDistDxx_Four7x2::ComputeValDerivHessian()
{
  ELISE_ASSERT(false,"Foncteur cREgDistDxx_Four7x2 Has no Der Sec");
}

void cREgDistDxx_Four7x2::SetFour7x2_State_0_0(double aVal){ mLocFour7x2_State_0_0 = aVal;}
void cREgDistDxx_Four7x2::SetFour7x2_State_1_0(double aVal){ mLocFour7x2_State_1_0 = aVal;}
void cREgDistDxx_Four7x2::SetFour7x2_State_2_0(double aVal){ mLocFour7x2_State_2_0 = aVal;}
void cREgDistDxx_Four7x2::SetRegDistuu1_x(double aVal){ mLocRegDistuu1_x = aVal;}
void cREgDistDxx_Four7x2::SetRegDistuu1_y(double aVal){ mLocRegDistuu1_y = aVal;}
void cREgDistDxx_Four7x2::SetRegDistuu2_x(double aVal){ mLocRegDistuu2_x = aVal;}
void cREgDistDxx_Four7x2::SetRegDistuu2_y(double aVal){ mLocRegDistuu2_y = aVal;}
void cREgDistDxx_Four7x2::SetRegDistuu3_x(double aVal){ mLocRegDistuu3_x = aVal;}
void cREgDistDxx_Four7x2::SetRegDistuu3_y(double aVal){ mLocRegDistuu3_y = aVal;}



double * cREgDistDxx_Four7x2::AdrVarLocFromString(const std::string & aName)
{
   if (aName == "Four7x2_State_0_0") return & mLocFour7x2_State_0_0;
   if (aName == "Four7x2_State_1_0") return & mLocFour7x2_State_1_0;
   if (aName == "Four7x2_State_2_0") return & mLocFour7x2_State_2_0;
   if (aName == "RegDistuu1_x") return & mLocRegDistuu1_x;
   if (aName == "RegDistuu1_y") return & mLocRegDistuu1_y;
   if (aName == "RegDistuu2_x") return & mLocRegDistuu2_x;
   if (aName == "RegDistuu2_y") return & mLocRegDistuu2_y;
   if (aName == "RegDistuu3_x") return & mLocRegDistuu3_x;
   if (aName == "RegDistuu3_y") return & mLocRegDistuu3_y;
   return 0;
}


cElCompiledFonc::cAutoAddEntry cREgDistDxx_Four7x2::mTheAuto("cREgDistDxx_Four7x2",cREgDistDxx_Four7x2::Alloc);


cElCompiledFonc *  cREgDistDxx_Four7x2::Alloc()
{  return new cREgDistDxx_Four7x2();
}

