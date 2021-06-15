
/* Int32 Calc(Int32) */

int32_t MVWorldObject.dll::MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::
        AttributeSettings::AttributePointCalculators::APIntCalcZeroValueLinear::
        APIntCalcZeroValueLinear_Calc(APIntCalcZeroValueLinear *this,int32_t i,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  fVar1 = (float)(i - (int)this[1].exchangeRateNegative);
  if (fVar1 < _UNK_?) {
    fVar2 = this[1].exchangeRatePositive;
  }
  else {
    fVar2 = (float)this->zeroValue;
  }
  if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Mathf);
  }
  iVar3 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_FloorToInt
                    (fVar1 * fVar2,(MethodInfo *)0x0);
  return iVar3;
}


/* String ToString() */

String * MVWorldObject.dll::MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::
         AttributeSettings::AttributePointCalculators::APIntCalcZeroValueLinear::
         APIntCalcZeroValueLinear_ToString(APIntCalcZeroValueLinear *this,MethodInfo *method)

{
  pAVar1 = this;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this = (APIntCalcZeroValueLinear *)pAVar1->zeroValue;
  arg0 = (Object *)func_?(TypeInfo__System__Single,&this);
  fStack_2 = pAVar1[1].exchangeRatePositive;
  arg1 = (Object *)func_?(TypeInfo__System__Single,&fStack_2);
  fStack_3 = pAVar1[1].exchangeRateNegative;
  arg2 = (Object *)func_?(TypeInfo__System__Int32,&fStack_3);
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__String);
  }
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
  this->zeroValue = (int32_t)exchangeRate;
  this[1].exchangeRatePositive = exchangeRate;
  this[1].exchangeRateNegative = (float)zeroValue;
  return;
}


/* APIntCalcZeroValueLinear(Int32, Single, Single) */

void MVWorldObject.dll::MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::AttributeSettings
     ::AttributePointCalculators::APIntCalcZeroValueLinear::APIntCalcZeroValueLinear__ctor_1
               (APIntCalcZeroValueLinear *this,int32_t zeroValue,float exchangeRatePositive,
               float exchangeRateNegative,MethodInfo *method)

{
  this->zeroValue = (int32_t)exchangeRatePositive;
  this[1].exchangeRatePositive = exchangeRateNegative;
  this[1].exchangeRateNegative = (float)zeroValue;
  return;
}

