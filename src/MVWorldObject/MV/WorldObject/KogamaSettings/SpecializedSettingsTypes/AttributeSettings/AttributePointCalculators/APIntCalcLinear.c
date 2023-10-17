
/* Int32 Calc(Int32) */

int32_t MVWorldObject.dll::MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::
        AttributeSettings::AttributePointCalculators::APIntCalcLinear::APIntCalcLinear_Calc
                  (APIntCalcLinear *this,int32_t i,MethodInfo *method)

{
  fVar1 = this->exchangeRate;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  fVar2 = (float10)func_?((double)((float)i * fVar1));
  return (int)fVar2;
}


/* String ToString() */

String * MVWorldObject.dll::MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::
         AttributeSettings::AttributePointCalculators::APIntCalcLinear::APIntCalcLinear_ToString
                   (APIntCalcLinear *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Single);
    func_?(&StringLiteral_APIntCalcLinear__exchangeRate__0);
    cRam_? = '\x01';
  }
  this = (APIntCalcLinear *)this->exchangeRate;
  arg0 = (Object *)func_?(TypeInfo__System__Single,&this);
  pSVar1 = mscorlib.dll::System::String::String_Format
                     (StringLiteral_APIntCalcLinear__exchangeRate__0,arg0,(MethodInfo *)0x0);
  return pSVar1;
}

