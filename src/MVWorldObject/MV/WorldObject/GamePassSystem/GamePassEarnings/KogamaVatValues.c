
/* String ToString() */

String * MVWorldObject.dll::MV::WorldObject::GamePassSystem::GamePassEarnings::KogamaVatValues::
         KogamaVatValues_ToString(KogamaVatValues *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Single);
    func_?(&StringLiteral_regularUserVat__0___subscribedUs);
    cRam_? = '\x01';
  }
  pKVar1 = this;
  this = (KogamaVatValues *)(this->fields).regularUserVat;
  arg0 = (Object *)func_?(TypeInfo__System__Single,&this);
  fStack_2 = (pKVar1->fields).subscribedUserVat;
  arg1 = (Object *)func_?(TypeInfo__System__Single,&fStack_2);
  pSVar3 = mscorlib.dll::System::String::String_Format_1
                     (StringLiteral_regularUserVat__0___subscribedUs,arg0,arg1,(MethodInfo *)0x0);
  return pSVar3;
}

