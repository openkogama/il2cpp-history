
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::AccessoryInventoryViewItem+<OnAndroidEndHoverEvent>d__41::
     AccessoryInventoryViewItem_OnAndroidEndHoverEvent_d_41_MoveNext
               (AccessoryInventoryViewItem_OnAndroidEndHoverEvent_d_41 *this,MethodInfo *method)

{
  pcVar1 = pcRam_?;
  iVar2 = (this->fields).__1__state;
  this_00 = (this->fields).__4__this;
  if (iVar2 == 0) {
    (this->fields).__1__state = -1;
    pcVar3 = pcRam_?;
    if ((pcVar1 == (code *)0x0) &&
       (pcVar1 = (code *)FUN_?(&UNK_?), pcVar3 = pcVar1, pcVar1 == (code *)0x0)) {
      uVar4 = func_?(&UNK_?);
      FUN_?(uVar4,0);
      pcVar1 = (code *)swi(3);
      bVar5 = (*pcVar1)();
      return bVar5;
    }
    pcRam_? = pcVar3;
    fVar6 = (float)(*pcVar1)();
    (this->fields)._androidStartTime_5__2 = fVar6;
  }
  else {
    if (iVar2 != 1) {
      return 0;
    }
    (this->fields).__1__state = -1;
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar4 = func_?(&UNK_?);
    FUN_?(uVar4,0);
    pcVar1 = (code *)swi(3);
    bVar5 = (*pcVar1)();
    return bVar5;
  }
  pcRam_? = pcVar1;
  fVar6 = (float)(*pcRam_?)();
  if (fVar6 - (this->fields)._androidStartTime_5__2 < _UNK_?) {
    bVar7 = iRam_? != 0;
    (this->fields).__2__current = (Object *)0x0;
    if (bVar7) {
      uVar8 = (uint)((ulonglong)&(this->fields).__2__current >> 0xc);
      uVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6);
      do {
        uVar10 = *(ulonglong *)(uVar9 * 8 + 0xADDR);
        puVar11 = (ulonglong *)(uVar9 * 8 + 0xADDR);
        LOCK();
        bVar7 = uVar10 == *puVar11;
        if (bVar7) {
          *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
        }
        UNLOCK();
      } while (!bVar7);
    }
    (this->fields).__1__state = 1;
    return 1;
  }
  if (this_00 != (AccessoryInventoryViewItem *)0x0) {
    routine = AccessoryInventoryViewItem::AccessoryInventoryViewItem_OnHoverEvent
                        (this_00,_UNK_?,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StartCoroutine_2
              ((MonoBehaviour *)this_00,routine,(MethodInfo *)0x0);
    return 0;
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  bVar5 = (*pcVar1)();
  return bVar5;
}


/* Void System.Collections.IEnumerator.Reset() */

void Assembly-CSharp.dll::AccessoryInventoryViewItem+<OnAndroidEndHoverEvent>d__41::
     AccessoryInventoryViewItem_OnAndroidEndHoverEvent_d_41_System_Collections_IEnumerator_Reset
               (AccessoryInventoryViewItem_OnAndroidEndHoverEvent_d_41 *this,MethodInfo *method)

{
  uVar1 = func_?(&TypeInfo__System__NotSupportedException);
  this_00 = (NotSupportedException *)func_?(uVar1);
  mscorlib.dll::System::NotSupportedException::NotSupportedException__ctor
            (this_00,(MethodInfo *)0x0);
  uVar1 = func_?(&
                              MethodInfo__AccessoryInventoryViewItem___OnAndroidEndHoverEvent_d__41__System_Collections_IEnumerator_Reset__
                             );
  FUN_?(this_00,uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

