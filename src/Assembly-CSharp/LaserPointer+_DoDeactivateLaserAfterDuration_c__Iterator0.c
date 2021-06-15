
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::LaserPointer+<DoDeactivateLaserAfterDuration>c__Iterator0::
     LaserPointer_DoDeactivateLaserAfterDuration_c_Iterator0_MoveNext
               (LaserPointer_DoDeactivateLaserAfterDuration_c_Iterator0 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  iVar1 = (this->fields)._PC;
  (this->fields)._PC = -1;
  if (iVar1 == 0) {
    (this->fields)._t___0 = 0.0;
  }
  else if (iVar1 != 1) {
    return 0;
  }
  pLVar2 = (this->fields)._this;
  if (pLVar2 != (LaserPointer *)0x0) {
    if ((pLVar2->fields).isActive != 0) {
      if (pLVar2 == (LaserPointer *)0x0) goto code_?;
      fVar3 = (this->fields)._t___0;
      if (fVar3 < (pLVar2->fields).activeDuration) {
        fVar4 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                          ((MethodInfo *)0x0);
        uStack_5 = 0;
        (this->fields)._t___0 = fVar4 + fVar3;
        pOVar6 = (Object *)func_?(TypeInfo__System__Int32,&uStack_5);
        (this->fields)._current = pOVar6;
        if ((this->fields)._disposing == 0) {
          (this->fields)._PC = 1;
        }
        return 1;
      }
    }
    if (pLVar2 != (LaserPointer *)0x0) {
      (pLVar2->fields).activeDuration = 0.0;
      pLVar2 = (this->fields)._this;
      if (pLVar2 != (LaserPointer *)0x0) {
        (pLVar2->fields).isActive = 0;
        (this->fields)._PC = -1;
        return 0;
      }
    }
  }
code_?:
  func_?(0);
  pcVar7 = (code *)swi(3);
  bVar8 = (*pcVar7)();
  return bVar8;
}


/* Void Reset() */

void Assembly-CSharp.dll::LaserPointer+<DoDeactivateLaserAfterDuration>c__Iterator0::
     LaserPointer_DoDeactivateLaserAfterDuration_c_Iterator0_Reset
               (LaserPointer_DoDeactivateLaserAfterDuration_c_Iterator0 *this,MethodInfo *method)

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

