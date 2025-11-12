
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::PickupItemEditable+<DisableAnimatorCoroutine>d__39::
     PickupItemEditable_DisableAnimatorCoroutine_d_39_MoveNext
               (PickupItemEditable_DisableAnimatorCoroutine_d_39 *this,MethodInfo *method)

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
      if (this_00 == (PickupItemEditable *)0x0) goto code_?;
      bVar2 = iRam_? != 0;
      (this_00->fields).animatorRoutine = (IEnumerator *)0x0;
      if (bVar2) {
        uVar3 = (uint)((ulonglong)&(this_00->fields).animatorRoutine >> 0xc);
        uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
        do {
          uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
          puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
          LOCK();
          bVar2 = uVar5 == *puVar6;
          if (bVar2) {
            *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
          }
          UNLOCK();
        } while (!bVar2);
      }
      PickupItemEditable::PickupItemEditable_DisableAnimation(this_00,(MethodInfo *)0x0);
    }
    return 0;
  }
  (this->fields).__1__state = -1;
  if ((this_00 != (PickupItemEditable *)0x0) &&
     (pPVar7 = (this_00->fields)._Configuration_k__BackingField,
     pPVar7 != (PickupItemEditable_EditableItemConfiguration *)0x0)) {
    fVar8 = (pPVar7->fields).fireAnimationTime;
    pOVar9 = (Object *)FUN_?(TypeInfo__UnityEngine__WaitForSeconds);
    bVar2 = iRam_? != 0;
    *(float *)&pOVar9[1].klass = fVar8 + _UNK_?;
    (this->fields).__2__current = pOVar9;
    if (bVar2) {
      uVar3 = (uint)((ulonglong)&(this->fields).__2__current >> 0xc);
      uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
      do {
        uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
        puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
        LOCK();
        bVar2 = uVar5 == *puVar6;
        if (bVar2) {
          *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
        }
        UNLOCK();
      } while (!bVar2);
    }
    (this->fields).__1__state = 1;
    return 1;
  }
code_?:
  FUN_?();
  pcVar10 = (code *)swi(3);
  bVar11 = (*pcVar10)();
  return bVar11;
}


/* Void System.Collections.IEnumerator.Reset() */

void Assembly-CSharp.dll::PickupItemEditable+<DisableAnimatorCoroutine>d__39::
     PickupItemEditable_DisableAnimatorCoroutine_d_39_System_Collections_IEnumerator_Reset
               (PickupItemEditable_DisableAnimatorCoroutine_d_39 *this,MethodInfo *method)

{
  uVar1 = func_?(&TypeInfo__System__NotSupportedException);
  this_00 = (NotSupportedException *)func_?(uVar1);
  mscorlib.dll::System::NotSupportedException::NotSupportedException__ctor
            (this_00,(MethodInfo *)0x0);
  uVar1 = func_?(&
                              MethodInfo__PickupItemEditable___DisableAnimatorCoroutine_d__39__System_Collections_IEnumerator_Reset__
                             );
  FUN_?(this_00,uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

