
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::PlayerInventoryPreviewItem+<AddToWorldInSeconds>d__33::
     PlayerInventoryPreviewItem_AddToWorldInSeconds_d_33_MoveNext
               (PlayerInventoryPreviewItem_AddToWorldInSeconds_d_33 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__IEditModeUI);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__WaitForSeconds);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  iVar1 = (this->fields).__1__state;
  this_00 = (this->fields).__4__this;
  if (iVar1 == 0) {
    iVar1 = (this->fields).seconds;
    (this->fields).__1__state = -1;
    pOVar2 = (Object *)FUN_?(TypeInfo__UnityEngine__WaitForSeconds);
    bVar3 = iRam_? != 0;
    *(float *)&pOVar2[1].klass = (float)iVar1;
    (this->fields).__2__current = pOVar2;
    if (bVar3) {
      uVar4 = (uint)((ulonglong)&(this->fields).__2__current >> 0xc);
      uVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
      do {
        uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
        puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
        LOCK();
        bVar3 = uVar6 == *puVar7;
        if (bVar3) {
          *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
        }
        UNLOCK();
      } while (!bVar3);
    }
    (this->fields).__1__state = 1;
    return 1;
  }
  if (iVar1 == 1) {
    bVar3 = cRam_? == '\0';
    (this->fields).__1__state = -1;
    if (bVar3) {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (((TypeInfo__MVGameControllerBase->static_fields->_EditModeUI_k__BackingField ==
          (IEditModeUI *)0x0) || (lVar8 = FUN_?(), lVar8 == 0)) ||
       (*(undefined4 *)(lVar8 + 0x30) = 0xff7fffff, this_00 == (PlayerInventoryPreviewItem *)0x0)) {
      FUN_?();
      pcVar9 = (code *)swi(3);
      bVar10 = (*pcVar9)();
      return bVar10;
    }
    PlayerInventoryPreviewItem::PlayerInventoryPreviewItem_AddItemToWorldFromInventory
              (this_00,(MethodInfo *)0x0);
  }
  return 0;
}


/* Void System.Collections.IEnumerator.Reset() */

void Assembly-CSharp.dll::PlayerInventoryPreviewItem+<AddToWorldInSeconds>d__33::
     PlayerInventoryPreviewItem_AddToWorldInSeconds_d_33_System_Collections_IEnumerator_Reset
               (PlayerInventoryPreviewItem_AddToWorldInSeconds_d_33 *this,MethodInfo *method)

{
  uVar1 = func_?(&TypeInfo__System__NotSupportedException);
  this_00 = (NotSupportedException *)func_?(uVar1);
  mscorlib.dll::System::NotSupportedException::NotSupportedException__ctor
            (this_00,(MethodInfo *)0x0);
  uVar1 = func_?(&
                              MethodInfo__PlayerInventoryPreviewItem___AddToWorldInSeconds_d__33__System_Collections_IEnumerator_Reset__
                             );
  FUN_?(this_00,uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

