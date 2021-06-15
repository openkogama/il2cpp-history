
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::FirstTimeActivatableElementBase+<ShowDelay>c__Iterator0::
     FirstTimeActivatableElementBase_ShowDelay_c_Iterator0_MoveNext
               (FirstTimeActivatableElementBase_ShowDelay_c_Iterator0 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  iVar1 = (this->fields)._PC;
  (this->fields)._PC = -1;
  if (iVar1 == 0) {
    pFVar2 = (this->fields)._this;
    if (pFVar2 != (FirstTimeActivatableElementBase *)0x0) {
      (pFVar2->fields).waitingForDelay = 1;
      pFVar2 = (this->fields)._this;
      if (pFVar2 != (FirstTimeActivatableElementBase *)0x0) {
        seconds = (pFVar2->fields).delayBeforeShown;
        this_00 = (WaitForSeconds *)func_?(TypeInfo__UnityEngine__WaitForSeconds);
        UnityEngine.CoreModule.dll::UnityEngine::WaitForSeconds::WaitForSeconds__ctor
                  (this_00,seconds,(MethodInfo *)0x0);
        (this->fields)._current = (Object *)this_00;
        if ((this->fields)._disposing == 0) {
          (this->fields)._PC = 1;
        }
        return 1;
      }
    }
  }
  else {
    if (iVar1 != 1) {
      return 0;
    }
    pFVar2 = (this->fields)._this;
    if (pFVar2 != (FirstTimeActivatableElementBase *)0x0) {
      (pFVar2->fields).waitingForDelay = 0;
      pFVar2 = (this->fields)._this;
      if (pFVar2 != (FirstTimeActivatableElementBase *)0x0) {
        FirstTimeActivatableElementBase::FirstTimeActivatableElementBase_DoShow
                  (pFVar2,(MethodInfo *)0x0);
        (this->fields)._PC = -1;
        return 0;
      }
    }
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  bVar4 = (*pcVar3)();
  return bVar4;
}


/* Void Reset() */

void Assembly-CSharp.dll::FirstTimeActivatableElementBase+<ShowDelay>c__Iterator0::
     FirstTimeActivatableElementBase_ShowDelay_c_Iterator0_Reset
               (FirstTimeActivatableElementBase_ShowDelay_c_Iterator0 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (NotSupportedException *)func_?(TypeInfo__System__NotSupportedException);
  mscorlib.dll::System::NotSupportedException::NotSupportedException__ctor
            (this_00,(MethodInfo *)0x0);
  func_?(this_00,0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

