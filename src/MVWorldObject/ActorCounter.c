
/* Int32 Increment(Int32) */

int32_t MVWorldObject.dll::ActorCounter::ActorCounter_Increment
                  (ActorCounter *this,int32_t value,MethodInfo *method)

{
  iVar1 = value + (this->fields).count;
  (this->fields).count = iVar1;
  return iVar1;
}


/* String ToString() */

String * MVWorldObject.dll::ActorCounter::ActorCounter_ToString
                   (ActorCounter *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  value = (this->fields).count;
  if ((((uint)(TypeInfo__System__NumberFormatter->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__NumberFormatter->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__NumberFormatter);
  }
  pSVar1 = mscorlib.dll::System::NumberFormatter::NumberFormatter_NumberToString_12
                     (value,(IFormatProvider *)0x0,(MethodInfo *)0x0);
  return pSVar1;
}


/* ActorCounter(BytePacker) */

void MVWorldObject.dll::ActorCounter::ActorCounter__ctor_1
               (ActorCounter *this,BytePacker *bp,MethodInfo *method)

{
  Assembly-CSharp.dll::ScaleAnimationBase::ScaleAnimationBase_Play
            ((ScaleAnimationBase *)this,0.0,unaff_ESI);
  if (bp != (BytePacker *)0x0) {
    iVar1 = MV::WorldObject::BytePacker::BytePacker_ReadInt32(bp,(MethodInfo *)0x0);
    (this->fields).count = iVar1;
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

