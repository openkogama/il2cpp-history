
/* SoundEmitterSettings+Keys() */

void Assembly-CSharp.dll::SoundEmitterSettings+Keys::SoundEmitterSettings_Keys__ctor
               (SoundEmitterSettings_Keys *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__String);
    func_?(&StringLiteral_range);
    func_?(&StringLiteral_pitch);
    func_?(&StringLiteral_volume);
    cRam_? = '\x01';
  }
  pSVar1 = (String__Array *)func_?(TypeInfo__System__String,3);
  pSVar2 = StringLiteral_volume;
  if (pSVar1 == (String__Array *)0x0) {
    func_?();
  }
  else if (pSVar1->max_length != 0) {
    pSVar1->vector[0] = StringLiteral_volume;
    func_?(pSVar1->vector,pSVar2);
    pSVar2 = StringLiteral_pitch;
    if (1 < pSVar1->max_length) {
      pSVar1->vector[1] = StringLiteral_pitch;
      func_?(pSVar1->vector + 1,pSVar2);
      pSVar2 = StringLiteral_range;
      if (2 < pSVar1->max_length) {
        pSVar1->vector[2] = StringLiteral_range;
        func_?(pSVar1->vector + 2,pSVar2);
        method_00 = (MethodInfo *)&this->fields;
        ((SoundEmitterSettings_Keys__Fields *)method_00)->keys = pSVar1;
        func_?(method_00,pSVar1);
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                  ((Object *)this,ExceptionArgument__Enum_obj,method_00);
        return;
      }
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

