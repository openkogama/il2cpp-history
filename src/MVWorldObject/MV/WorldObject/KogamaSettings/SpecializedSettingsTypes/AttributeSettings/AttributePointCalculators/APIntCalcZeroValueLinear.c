
/* Int32 Calc(Int32) */

int32_t MVWorldObject.dll::MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::
        AttributeSettings::AttributePointCalculators::APIntCalcZeroValueLinear::
        APIntCalcZeroValueLinear_Calc(APIntCalcZeroValueLinear *this,int32_t i,MethodInfo *method)

{
  iVar1 = i - this->zeroValue;
  if ((float)iVar1 < _UNK_?) {
    fVar2 = this->exchangeRateNegative;
  }
  else {
    fVar2 = this->exchangeRatePositive;
  }
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  fVar3 = (float10)func_?((double)((float)iVar1 * fVar2));
  return (int)fVar3;
}


/* String ToString() */

String * MVWorldObject.dll::MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::
         AttributeSettings::AttributePointCalculators::APIntCalcZeroValueLinear::
         APIntCalcZeroValueLinear_ToString(APIntCalcZeroValueLinear *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__System__Single);
    func_?(&StringLiteral_APIntCalcZeroValueLinear__exchan);
    cRam_? = '\x01';
  }
  pAVar1 = this;
  this = (APIntCalcZeroValueLinear *)this->exchangeRatePositive;
  arg0 = (Object *)func_?(TypeInfo__System__Single,&this);
  fStack_2 = pAVar1->exchangeRateNegative;
  arg1 = (Object *)func_?(TypeInfo__System__Single,&fStack_2);
  iStack_3 = pAVar1->zeroValue;
  arg2 = (Object *)func_?(TypeInfo__System__Int32,&iStack_3);
  pSVar4 = mscorlib.dll::System::String::String_Format_2
                     (StringLiteral_APIntCalcZeroValueLinear__exchan,arg0,arg1,arg2,
                      (MethodInfo *)0x0);
  return pSVar4;
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

