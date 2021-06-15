
/* String ToString() */

String * MVWorldObject.dll::MV::WorldObject::GamePassSystem::GamePassEarnings::KogamaVatValues::
         KogamaVatValues_ToString(KogamaVatValues *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pKVar1 = this;
  this = (KogamaVatValues *)(this->fields).regularUserVat;
  arg0 = (Object *)func_?(TypeInfo__System__Single,&this);
  fStack_2 = (pKVar1->fields).subscribedUserVat;
  arg1 = (Object *)func_?(TypeInfo__System__Single,&fStack_2);
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__String);
  }
  pSVar3 = mscorlib.dll::System::String::String_Format_1
                     (StringLiteral_regularUserVat__0___subscribedUs,arg0,arg1,(MethodInfo *)0x0);
  return pSVar3;
}


/* KogamaVatValues(Single, Single) */

void MVWorldObject.dll::MV::WorldObject::GamePassSystem::GamePassEarnings::KogamaVatValues::
     KogamaVatValues__ctor_1
               (KogamaVatValues *this,float regularUserVat,float subscribedUserVat,
               MethodInfo *method)

{
  Assembly-CSharp.dll::ScaleAnimationBase::ScaleAnimationBase_Play
            ((ScaleAnimationBase *)this,0.0,unaff_ESI);
  (this->fields).regularUserVat = regularUserVat;
  (this->fields).subscribedUserVat = subscribedUserVat;
  return;
}

