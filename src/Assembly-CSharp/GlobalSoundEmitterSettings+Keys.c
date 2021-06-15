
/* GlobalSoundEmitterSettings+Keys() */

void Assembly-CSharp.dll::GlobalSoundEmitterSettings+Keys::GlobalSoundEmitterSettings_Keys__ctor
               (GlobalSoundEmitterSettings_Keys *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pSVar1 = (String__Array *)func_?(TypeInfo__System__String,2);
  if (pSVar1 == (String__Array *)0x0) {
    func_?(0);
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
    if ((StringLiteral_pitch == (String *)0x0) ||
       (iVar3 = func_?(StringLiteral_pitch,(pSVar1->klass->_0).element_class), iVar3 != 0))
    {
      if (1 < pSVar1->max_length) {
        pSVar1->vector[1] = StringLiteral_pitch;
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

