
/* Int32 Calc(Single) */

int32_t MVWorldObject.dll::MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::
        AttributeSettings::AttributePointCalculators::APFloatCalcZeroValueLinear::
        APFloatCalcZeroValueLinear_Calc(APFloatCalcZeroValueLinear *this,float i,MethodInfo *method)

{
  fVar1 = i - this->zeroValue;
  if (fVar1 < 0.0) {
    this = (APFloatCalcZeroValueLinear *)&this->exchangeRateNegative;
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
  dVar3 = (double)FUN_?((double)(fVar1 * fVar2));
  return (int)dVar3;
}


/* String ToString() */

String * MVWorldObject.dll::MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::
         AttributeSettings::AttributePointCalculators::APFloatCalcZeroValueLinear::
         APFloatCalcZeroValueLinear_ToString(APFloatCalcZeroValueLinear *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_APFloatCalcZeroValueLinear__exch);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  afStackX_8[0] = this->exchangeRatePositive;
  arg0 = (Object *)FUN_?(uRam_?,afStackX_8);
  afStackX_8[0] = this->exchangeRateNegative;
  arg1 = (Object *)FUN_?(uRam_?,afStackX_8);
  afStackX_8[0] = this->zeroValue;
  arg2 = (Object *)FUN_?(uRam_?,afStackX_8);
  pSVar1 = StringLiteral_APFloatCalcZeroValueLinear__exch;
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


/* APFloatCalcZeroValueLinear(Single, Single, Single) */

void MVWorldObject.dll::MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::AttributeSettings
     ::AttributePointCalculators::APFloatCalcZeroValueLinear::APFloatCalcZeroValueLinear__ctor
               (APFloatCalcZeroValueLinear *this,float zeroValue,float exchangeRatePositive,
               float exchangeRateNegative,MethodInfo *method)

{
  this->exchangeRatePositive = exchangeRatePositive;
  this->exchangeRateNegative = exchangeRateNegative;
  this->zeroValue = zeroValue;
  return;
}

