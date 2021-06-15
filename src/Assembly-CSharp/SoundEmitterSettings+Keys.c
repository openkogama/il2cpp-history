
/* SoundEmitterSettings+Keys() */

void Assembly-CSharp.dll::SoundEmitterSettings+Keys::SoundEmitterSettings_Keys__ctor
               (SoundEmitterSettings_Keys *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pSVar1 = (String__Array *)func_?(TypeInfo__System__String,3);
  if (pSVar1 == (String__Array *)0x0) {
    func_?(0);
code_?:
    uVar2 = func_?(0,0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0,0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0,0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0,0);
    func_?(uVar2);
  }
  else {
    if ((StringLiteral_volume != (String *)0x0) &&
       (iVar3 = func_?(StringLiteral_volume,(pSVar1->klass->_0).element_class), iVar3 == 0)
       ) goto code_?;
    if (pSVar1->max_length == 0) goto code_?;
    pSVar1->vector[0] = StringLiteral_volume;
    if ((StringLiteral_pitch != (String *)0x0) &&
       (iVar3 = func_?(StringLiteral_pitch,(pSVar1->klass->_0).element_class), iVar3 == 0))
    goto code_?;
    if (pSVar1->max_length < 2) goto code_?;
    pSVar1->vector[1] = StringLiteral_pitch;
    if ((StringLiteral_range == (String *)0x0) ||
       (iVar3 = func_?(StringLiteral_range,(pSVar1->klass->_0).element_class), iVar3 != 0))
    {
      if (2 < pSVar1->max_length) {
        pSVar1->vector[2] = StringLiteral_range;
        (this->fields).keys = pSVar1;
        return;
      }
      goto code_?;
    }
  }
  uVar2 = func_?(0,0);
  func_?(uVar2);
code_?:
  uVar2 = func_?(0,0);
  func_?(uVar2);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* String get_Item(SoundEmitterSettings+Keys+Key) */

String * Assembly-CSharp.dll::SoundEmitterSettings+Keys::SoundEmitterSettings_Keys_get_Item
                   (SoundEmitterSettings_Keys *this,SoundEmitterSettings_Keys_Key__Enum key,
                   MethodInfo *method)

{
  pSVar1 = (this->fields).keys;
  if (pSVar1 == (String__Array *)0x0) {
    func_?(0);
  }
  else if (key < pSVar1->max_length) {
    return pSVar1->vector[key];
  }
  uVar2 = func_?(0,0);
  func_?(uVar2);
  pcVar3 = (code *)swi(3);
  pSVar4 = (String *)(*pcVar3)();
  return pSVar4;
}

