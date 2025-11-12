
/* Int32 Calc(Int32) */

int32_t MVWorldObject.dll::MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::
        AttributeSettings::AttributePointCalculators::APIntCalcZeroValueLinear::
        APIntCalcZeroValueLinear_Calc(APIntCalcZeroValueLinear *this,int32_t i,MethodInfo *method)

{
  iVar1 = i - this->zeroValue;
  if ((float)iVar1 < 0.0) {
    this = (APIntCalcZeroValueLinear *)&this->exchangeRateNegative;
  }
  fVar2 = this->exchangeRatePositive;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Math);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__System__Math->_1).field_0x1c == 0) {
    FUN_?();
  }
  dVar3 = (double)func_?((double)((float)iVar1 * fVar2));
  return (int)dVar3;
}


/* String ToString() */

String * MVWorldObject.dll::MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::
         AttributeSettings::AttributePointCalculators::APIntCalcZeroValueLinear::
         APIntCalcZeroValueLinear_ToString(APIntCalcZeroValueLinear *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_APIntCalcZeroValueLinear__exchan);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  afStackX_8[0] = this->exchangeRatePositive;
  arg0 = (Object *)FUN_?(uRam_?,afStackX_8);
  afStackX_8[0] = this->exchangeRateNegative;
  arg1 = (Object *)FUN_?(uRam_?,afStackX_8);
  afStackX_8[0] = (float)this->zeroValue;
  arg2 = (Object *)FUN_?(uRam_?,afStackX_8);
  pSVar1 = StringLiteral_APIntCalcZeroValueLinear__exchan;
  PStack_2._arg0 = (Object *)0x0;
  PStack_2._arg1 = (Object *)0x0;
  PStack_2._arg2 = (Object *)0x0;
  PStack_2._args = (Object__Array *)0x0;
  mscorlib.dll::System::ParamsArray::ParamsArray__ctor_2
            (&PStack_2,arg0,arg1,arg2,(MethodInfo *)0x0);
  PStack_3._arg0 = PStack_2._arg0;
  PStack_3._arg1 = PStack_2._arg1;
  PStack_3._arg2 = PStack_2._arg2;
  PStack_3._args = PStack_2._args;
  pSVar1 = mscorlib.dll::System::String::String_FormatHelper
                     ((IFormatProvider *)0x0,pSVar1,&PStack_3,(MethodInfo *)0x0);
  return pSVar1;
}


/* APIntCalcZeroValueLinear(Int32, Single) */

void MVWorldObject.dll::MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::AttributeSettings
     ::AttributePointCalculators::APIntCalcZeroValueLinear::APIntCalcZeroValueLinear__ctor
               (APIntCalcZeroValueLinear *this,int32_t zeroValue,float exchangeRate,
               MethodInfo *method)

{
  this->exchangeRatePositive = exchangeRate;
  this->exchangeRateNegative = exchangeRate;
  this->zeroValue = zeroValue;
  return;
}


/* APIntCalcZeroValueLinear(Int32, Single, Single) */

void MVWorldObject.dll::MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::AttributeSettings
     ::AttributePointCalculators::APIntCalcZeroValueLinear::APIntCalcZeroValueLinear__ctor_1
               (APIntCalcZeroValueLinear *this,int32_t zeroValue,float exchangeRatePositive,
               float exchangeRateNegative,MethodInfo *method)

{
  this->exchangeRatePositive = exchangeRatePositive;
  this->exchangeRateNegative = exchangeRateNegative;
  this->zeroValue = zeroValue;
  return;
}

