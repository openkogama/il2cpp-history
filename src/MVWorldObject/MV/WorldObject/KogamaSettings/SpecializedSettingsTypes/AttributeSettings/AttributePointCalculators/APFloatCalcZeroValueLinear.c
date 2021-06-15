
/* Int32 Calc(Single) */

int32_t MVWorldObject.dll::MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::
        AttributeSettings::AttributePointCalculators::APFloatCalcZeroValueLinear::
        APFloatCalcZeroValueLinear_Calc(APFloatCalcZeroValueLinear *this,float i,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  fVar1 = i - this[1].exchangeRateNegative;
  if (fVar1 < _UNK_?) {
    fVar2 = this[1].exchangeRatePositive;
  }
  else {
    fVar2 = this->zeroValue;
  }
  if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Mathf);
  }
  iVar3 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_RoundToInt
                    (fVar2 * fVar1,(MethodInfo *)0x0);
  return iVar3;
}


/* String ToString() */

String * MVWorldObject.dll::MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::
         AttributeSettings::AttributePointCalculators::APFloatCalcZeroValueLinear::
         APFloatCalcZeroValueLinear_ToString(APFloatCalcZeroValueLinear *this,MethodInfo *method)

{
  pAVar1 = this;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this = (APFloatCalcZeroValueLinear *)pAVar1->zeroValue;
  arg0 = (Object *)func_?(TypeInfo__System__Single,&this);
  fStack_2 = pAVar1[1].exchangeRatePositive;
  arg1 = (Object *)func_?(TypeInfo__System__Single,&fStack_2);
  fStack_3 = pAVar1[1].exchangeRateNegative;
  arg2 = (Object *)func_?(TypeInfo__System__Single,&fStack_3);
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__String);
  }
  pSVar4 = mscorlib.dll::System::String::String_Format_2
                     (StringLiteral_APFloatCalcZeroValueLinear__exch,arg0,arg1,arg2,
                      (MethodInfo *)0x0);
  return pSVar4;
}


/* APFloatCalcZeroValueLinear(Single, Single, Single) */

void MVWorldObject.dll::MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::AttributeSettings
     ::AttributePointCalculators::APFloatCalcZeroValueLinear::APFloatCalcZeroValueLinear__ctor
               (APFloatCalcZeroValueLinear *this,float zeroValue,float exchangeRatePositive,
               float exchangeRateNegative,MethodInfo *method)

{
  this->zeroValue = exchangeRatePositive;
  this[1].exchangeRatePositive = exchangeRateNegative;
  this[1].exchangeRateNegative = zeroValue;
  return;
}

