
/* Int32 Increment(Int32) */

int32_t MVWorldObject.dll::ActorCounter::ActorCounter_Increment
                  (ActorCounter *this,int32_t value,MethodInfo *method)

{
  iVar1 = value + (this->fields).count;
  (this->fields).count = iVar1;
  return iVar1;
}


/* Byte[] ToByteArray() */

Byte__Array *
MVWorldObject.dll::ActorCounter::ActorCounter_ToByteArray(ActorCounter *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MV__WorldObject__BytePacker);
    cRam_? = '\x01';
  }
  this_00 = (BytePacker *)func_?(TypeInfo__MV__WorldObject__BytePacker);
  if (this_00 != (BytePacker *)0x0) {
    MV::WorldObject::BytePacker::BytePacker__ctor(this_00,(MethodInfo *)0x0);
    MV::WorldObject::BytePacker::BytePacker_Write_7(this_00,(this->fields).count,(MethodInfo *)0x0);
    pBVar1 = MV::WorldObject::BytePacker::BytePacker_ToArray(this_00,(MethodInfo *)0x0);
    return pBVar1;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  pBVar1 = (Byte__Array *)(*pcVar2)();
  return pBVar1;
}


/* String ToString() */

String * MVWorldObject.dll::ActorCounter::ActorCounter_ToString
                   (ActorCounter *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Number);
    func_?(&MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____);
    cRam_? = '\x01';
  }
  value = (this->fields).count;
  format = mscorlib.dll::System::ReadOnlySpan`1[UInt32]::ReadOnlySpan_1_UInt32__op_Implicit
                     ((UInt32__Array *)0x0,
                      MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____);
  if ((TypeInfo__System__Number->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__Number);
  }
  pSVar1 = mscorlib.dll::System::Number::Number_FormatInt32
                     (value,(ReadOnlySpan_1_Char_)format,(IFormatProvider *)0x0,(MethodInfo *)0x0);
  return pSVar1;
}


/* ActorCounter(BytePacker) */

void MVWorldObject.dll::ActorCounter::ActorCounter__ctor_1
               (ActorCounter *this,BytePacker *bp,MethodInfo *method)

{
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_ESI);
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

