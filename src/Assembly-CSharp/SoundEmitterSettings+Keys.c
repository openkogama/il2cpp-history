
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
  if (pSVar1 == (String__Array *)0x0) {
    func_?();
code_?:
    uVar2 = func_?(0);
    func_?(uVar2);
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
    if ((StringLiteral_pitch != (String *)0x0) &&
       (iVar3 = func_?(StringLiteral_pitch,(pSVar1->klass->_0).element_class), iVar3 == 0))
    goto code_?;
    pSVar4 = StringLiteral_pitch;
    if (pSVar1->max_length < 2) goto code_?;
    pSVar1->vector[1] = StringLiteral_pitch;
    func_?(pSVar1->vector + 1,pSVar4);
    if ((StringLiteral_range == (String *)0x0) ||
       (iVar3 = func_?(StringLiteral_range,(pSVar1->klass->_0).element_class), iVar3 != 0))
    {
      pSVar4 = StringLiteral_range;
      if (2 < pSVar1->max_length) {
        pSVar1->vector[2] = StringLiteral_range;
        func_?(pSVar1->vector + 2,pSVar4);
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


/* String get_Item(SoundEmitterSettings+Keys+Key) */

String * Assembly-CSharp.dll::SoundEmitterSettings+Keys::SoundEmitterSettings_Keys_get_Item
                   (SoundEmitterSettings_Keys *this,SoundEmitterSettings_Keys_Key__Enum key,
                   MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pSVar2 = (this->fields).keys;
  if (pSVar2 == (String__Array *)0x0) {
    uVar3 = func_?(&puStack_4);
    func_?(uVar3);
    pcVar5 = (code *)swi(3);
    pSVar6 = (String *)(*pcVar5)();
    return pSVar6;
  }
  if (key < pSVar2->max_length) {
    return pSVar2->vector[key];
  }
  puStack_1 = (undefined1 *)0x0;
  puStack_7 = (undefined *)func_?();
  func_?();
  pcVar5 = (code *)swi(3);
  pSVar6 = (String *)(*pcVar5)();
  return pSVar6;
}

