
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::FirstTimeActivatableElementBase+<ShowDelay>d__26::
     FirstTimeActivatableElementBase_ShowDelay_d_26_MoveNext
               (FirstTimeActivatableElementBase_ShowDelay_d_26 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__WaitForSeconds);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  iVar1 = (this->fields).__1__state;
  this_00 = (this->fields).__4__this;
  if (iVar1 != 0) {
    if (iVar1 == 1) {
      (this->fields).__1__state = -1;
      if (this_00 == (FirstTimeActivatableElementBase *)0x0) goto code_?;
      (this_00->fields).waitingForDelay = 0;
      FirstTimeActivatableElementBase::FirstTimeActivatableElementBase_DoShow
                (this_00,(MethodInfo *)0x0);
    }
    return 0;
  }
  (this->fields).__1__state = -1;
  if (this_00 != (FirstTimeActivatableElementBase *)0x0) {
    fVar2 = (this_00->fields).delayBeforeShown;
    (this_00->fields).waitingForDelay = 1;
    pOVar3 = (Object *)FUN_?(TypeInfo__UnityEngine__WaitForSeconds);
    bVar4 = iRam_? != 0;
    *(float *)&pOVar3[1].klass = fVar2;
    (this->fields).__2__current = pOVar3;
    if (bVar4) {
      uVar5 = (uint)((ulonglong)&(this->fields).__2__current >> 0xc);
      uVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6);
      do {
        uVar7 = *(ulonglong *)(uVar6 * 8 + 0xADDR);
        puVar8 = (ulonglong *)(uVar6 * 8 + 0xADDR);
        LOCK();
        bVar4 = uVar7 == *puVar8;
        if (bVar4) {
          *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
        }
        UNLOCK();
      } while (!bVar4);
    }
    (this->fields).__1__state = 1;
    return 1;
  }
code_?:
  FUN_?();
  pcVar9 = (code *)swi(3);
  bVar10 = (*pcVar9)();
  return bVar10;
}


/* Void System.Collections.IEnumerator.Reset() */

void Assembly-CSharp.dll::FirstTimeActivatableElementBase+<ShowDelay>d__26::
     FirstTimeActivatableElementBase_ShowDelay_d_26_System_Collections_IEnumerator_Reset
               (FirstTimeActivatableElementBase_ShowDelay_d_26 *this,MethodInfo *method)

{
  uVar1 = func_?(&TypeInfo__System__NotSupportedException);
  this_00 = (NotSupportedException *)func_?(uVar1);
  mscorlib.dll::System::NotSupportedException::NotSupportedException__ctor
            (this_00,(MethodInfo *)0x0);
  uVar1 = func_?(&
                              MethodInfo__FirstTimeActivatableElementBase___ShowDelay_d__26__System_Collections_IEnumerator_Reset__
                             );
  FUN_?(this_00,uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

