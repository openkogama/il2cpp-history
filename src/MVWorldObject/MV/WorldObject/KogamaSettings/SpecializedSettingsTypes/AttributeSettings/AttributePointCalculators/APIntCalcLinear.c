
/* Int32 Calc(Int32) */

int32_t MVWorldObject.dll::MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::
        AttributeSettings::AttributePointCalculators::APIntCalcLinear::APIntCalcLinear_Calc
                  (APIntCalcLinear *this,int32_t i,MethodInfo *method)

{
  fVar1 = this->exchangeRate;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Math);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__System__Math->_1).field_0x1c == 0) {
    FUN_?();
  }
  dVar2 = (double)func_?((double)((float)i * fVar1));
  return (int)dVar2;
}


/* String ToString() */

String * MVWorldObject.dll::MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::
         AttributeSettings::AttributePointCalculators::APIntCalcLinear::APIntCalcLinear_ToString
                   (APIntCalcLinear *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_APIntCalcLinear__exchangeRate__0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  afStackX_8[0] = this->exchangeRate;
  arg0 = (Object *)FUN_?(uRam_?,afStackX_8);
  pSVar1 = StringLiteral_APIntCalcLinear__exchangeRate__0;
  PStack_2._arg0 = (Object *)0x0;
  PStack_2._arg1 = (Object *)0x0;
  PStack_2._arg2 = (Object *)0x0;
  PStack_2._args = (Object__Array *)0x0;
  mscorlib.dll::System::ParamsArray::ParamsArray__ctor(&PStack_2,arg0,(MethodInfo *)0x0);
  PStack_3._arg0 = PStack_2._arg0;
  PStack_3._arg1 = PStack_2._arg1;
  PStack_3._arg2 = PStack_2._arg2;
  PStack_3._args = PStack_2._args;
  pSVar1 = mscorlib.dll::System::String::String_FormatHelper
                     ((IFormatProvider *)0x0,pSVar1,&PStack_3,(MethodInfo *)0x0);
  return pSVar1;
}

