
/* Int32 Increment(Int32) */

int32_t MVWorldObject.dll::ActorCounter::ActorCounter_Increment
                  (ActorCounter *this,int32_t value,MethodInfo *method)

{
  (this->fields).count = (this->fields).count + value;
  return (this->fields).count;
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
  format = mscorlib.dll::System::Span`1[UnityEngine::jvalue]::
           Span_1_UnityEngine_jvalue__op_Implicit_1
                     ((jvalue__Array *)0x0,
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
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
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

