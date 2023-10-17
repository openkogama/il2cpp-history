
/* GlobalSoundEmitterSettings+Keys() */

void Assembly-CSharp.dll::GlobalSoundEmitterSettings+Keys::GlobalSoundEmitterSettings_Keys__ctor
               (GlobalSoundEmitterSettings_Keys *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__String);
    func_?(&StringLiteral_pitch);
    func_?(&StringLiteral_volume);
    cRam_? = '\x01';
  }
  pSVar1 = (String__Array *)func_?(TypeInfo__System__String,2);
  if (pSVar1 == (String__Array *)0x0) {
    func_?();
code_?:
    uVar2 = func_?(0);
    func_?(uVar2);
  }
  else {
    if ((StringLiteral_volume != (String *)0x0) &&
       (iVar3 = func_?(StringLiteral_volume,(pSVar1->klass->_0).element_class), iVar3 == 0)
       ) goto code_?;
    pSVar4 = StringLiteral_volume;
    if (pSVar1->max_length == 0) goto code_?;
    pSVar1->vector[0] = StringLiteral_volume;
    func_?(pSVar1->vector,pSVar4);
    if ((StringLiteral_pitch == (String *)0x0) ||
       (iVar3 = func_?(StringLiteral_pitch,(pSVar1->klass->_0).element_class), iVar3 != 0))
    {
      pSVar4 = StringLiteral_pitch;
      if (1 < pSVar1->max_length) {
        pSVar1->vector[1] = StringLiteral_pitch;
        func_?(pSVar1->vector + 1,pSVar4);
        method_00 = (MethodInfo *)&this->fields;
        (this->fields).keys = pSVar1;
        func_?(method_00,pSVar1);
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                  ((Object *)this,ExceptionArgument__Enum_obj,method_00);
        return;
      }
      goto code_?;
    }
  }
  uVar2 = func_?(0);
  func_?(uVar2);
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

