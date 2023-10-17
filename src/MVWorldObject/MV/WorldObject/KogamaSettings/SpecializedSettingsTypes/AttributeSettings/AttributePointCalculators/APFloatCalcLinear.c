
/* Int32 Calc(Single) */

int32_t MVWorldObject.dll::MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::
        AttributeSettings::AttributePointCalculators::APFloatCalcLinear::APFloatCalcLinear_Calc
                  (APFloatCalcLinear *this,float f,MethodInfo *method)

{
  fVar1 = this->exchangeRate;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  fVar2 = (float10)func_?((double)(fVar1 * f));
  return (int)fVar2;
}


/* String ToString() */

String * MVWorldObject.dll::MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::
         AttributeSettings::AttributePointCalculators::APFloatCalcLinear::APFloatCalcLinear_ToString
                   (APFloatCalcLinear *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Single);
    func_?(&StringLiteral_APFloatCalcLinear__exchangeRate_);
    cRam_? = '\x01';
  }
  this = (APFloatCalcLinear *)this->exchangeRate;
  arg0 = (Object *)func_?(TypeInfo__System__Single,&this);
  pSVar1 = mscorlib.dll::System::String::String_Format
                     (StringLiteral_APFloatCalcLinear__exchangeRate_,arg0,(MethodInfo *)0x0);
  return pSVar1;
}

