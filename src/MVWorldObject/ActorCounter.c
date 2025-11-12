
/* Int32 Increment(Int32) */

int32_t MVWorldObject.dll::ActorCounter::ActorCounter_Increment
                  (ActorCounter *this,int32_t value,MethodInfo *method)

{
  iVar1 = (this->fields).count + value;
  (this->fields).count = iVar1;
  return iVar1;
}


/* String ToString() */

String * MVWorldObject.dll::ActorCounter::ActorCounter_ToString
                   (ActorCounter *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Number,0);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  value = (this->fields).count;
  if ((MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____->klass->field_0x135 &
      1) == 0) {
    FUN_?();
  }
  if (*(int *)&(TypeInfo__System__Number->_1).field_0x1c == 0) {
    FUN_?();
  }
  aRStack_1[0]._pointer._value = (void *)0x0;
  aRStack_1[0]._length = 0;
  aRStack_1[0]._12_4_ = 0;
  pSVar2 = mscorlib.dll::System::Number::Number_FormatInt32
                     (value,aRStack_1,(IFormatProvider *)0x0,(MethodInfo *)0x0);
  return pSVar2;
}


/* ActorCounter(BytePacker) */

void MVWorldObject.dll::ActorCounter::ActorCounter__ctor_1
               (ActorCounter *this,BytePacker *bp,MethodInfo *method)

{
  if (bp != (BytePacker *)0x0) {
    iVar1 = MV::WorldObject::BytePacker::BytePacker_ReadInt32(bp,(MethodInfo *)0x0);
    (this->fields).count = iVar1;
    return;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

