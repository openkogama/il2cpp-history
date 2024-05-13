
/* Int32 Calc(Single) */

int32_t MVWorldObject.dll::MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::
        AttributeSettings::AttributePointCalculators::APFloatCalcZeroValueLinear::
        APFloatCalcZeroValueLinear_Calc(APFloatCalcZeroValueLinear *this,float i,MethodInfo *method)

{
  fVar1 = i - this->zeroValue;
  if (fVar1 < _UNK_?) {
    fVar2 = this->exchangeRateNegative;
  }
  else {
    fVar2 = this->exchangeRatePositive;
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Math);
    cRam_? = '\x01';
  }
  if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__Math);
  }
  dVar3 = (double)(fVar1 * fVar2);
  if (dVar3 < _UNK_?) {
    fVar4 = (float10)func_?(dVar3,&dStack_5);
    if ((double)fVar4 == _UNK_?) {
      uVar6 = func_?();
      if ((uVar6 & 1) != 0) {
        return (int)(dStack_5 - _UNK_?);
      }
    }
    else {
      fVar4 = (float10)func_?(dVar3 - _UNK_?);
      dStack_5 = (double)fVar4;
    }
  }
  else {
    fVar4 = (float10)func_?(dVar3,&dStack_5);
    if ((double)fVar4 != _UNK_?) {
      fVar4 = (float10)func_?(dVar3 + _UNK_?);
      return (int)fVar4;
    }
    uVar6 = func_?();
    if ((uVar6 & 1) != 0) {
      return (int)(dStack_5 + _UNK_?);
    }
  }
  return (int)dStack_5;
}


/* String ToString() */

String * MVWorldObject.dll::MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::
         AttributeSettings::AttributePointCalculators::APFloatCalcZeroValueLinear::
         APFloatCalcZeroValueLinear_ToString(APFloatCalcZeroValueLinear *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Single);
    func_?(&StringLiteral_APFloatCalcZeroValueLinear__exch);
    cRam_? = '\x01';
  }
  pAVar1 = this;
  this = (APFloatCalcZeroValueLinear *)this->exchangeRatePositive;
  arg0 = (Object *)func_?(TypeInfo__System__Single,&this);
  fStack_2 = pAVar1->exchangeRateNegative;
  arg1 = (Object *)func_?(TypeInfo__System__Single,&fStack_2);
  fStack_3 = pAVar1->zeroValue;
  arg2 = (Object *)func_?(TypeInfo__System__Single,&fStack_3);
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
  this->exchangeRatePositive = exchangeRatePositive;
  this->exchangeRateNegative = exchangeRateNegative;
  this->zeroValue = zeroValue;
  return;
}

