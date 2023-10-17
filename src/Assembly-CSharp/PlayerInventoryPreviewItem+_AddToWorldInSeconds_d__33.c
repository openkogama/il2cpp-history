
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::PlayerInventoryPreviewItem+<AddToWorldInSeconds>d__33::
     PlayerInventoryPreviewItem_AddToWorldInSeconds_d_33_MoveNext
               (PlayerInventoryPreviewItem_AddToWorldInSeconds_d_33 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__IEditModeUI);
    func_?(&TypeInfo__UnityEngine__WaitForSeconds);
    cRam_? = '\x01';
  }
  iVar1 = (this->fields).__1__state;
  this_00 = (this->fields).__4__this;
  if (iVar1 == 0) {
    iVar1 = (this->fields).seconds;
    (this->fields).__1__state = -1;
    this_01 = (SubscribableVariableBase_1_System_Single_ *)
              func_?(TypeInfo__UnityEngine__WaitForSeconds);
    if (this_01 != (SubscribableVariableBase_1_System_Single_ *)0x0) {
      SubscribableVariableBase`1[System::Single]::SubscribableVariableBase_1_System_Single___ctor
                (this_01,(float)iVar1,(MethodInfo *)0x0);
      (this->fields).__2__current = (Object *)this_01;
      func_?(&(this->fields).__2__current,this_01);
      (this->fields).__1__state = 1;
      return 1;
    }
  }
  else {
    if (iVar1 != 1) {
      return 0;
    }
    (this->fields).__1__state = -1;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__MVGameControllerBase);
      cRam_? = '\x01';
    }
    pIVar2 = TypeInfo__MVGameControllerBase->static_fields->_EditModeUI_k__BackingField;
    if (((pIVar2 != (IEditModeUI *)0x0) &&
        (iVar1 = func_?(4,TypeInfo__IEditModeUI,pIVar2), iVar1 != 0)) &&
       (*(undefined4 *)(iVar1 + 0x18) = 0xff7fffff, this_00 != (PlayerInventoryPreviewItem *)0x0)) {
      PlayerInventoryPreviewItem::PlayerInventoryPreviewItem_AddItemToWorldFromInventory
                (this_00,(MethodInfo *)0x0);
      return 0;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  bVar4 = (*pcVar3)();
  return bVar4;
}


/* Void System.Collections.IEnumerator.Reset() */

void Assembly-CSharp.dll::PlayerInventoryPreviewItem+<AddToWorldInSeconds>d__33::
     PlayerInventoryPreviewItem_AddToWorldInSeconds_d_33_System_Collections_IEnumerator_Reset
               (PlayerInventoryPreviewItem_AddToWorldInSeconds_d_33 *this,MethodInfo *method)

{
  uVar1 = func_?(&TypeInfo__System__NotSupportedException);
  this_00 = (NotSupportedException *)func_?(uVar1);
  func_?(this_00);
  mscorlib.dll::System::NotSupportedException::NotSupportedException__ctor
            (this_00,(MethodInfo *)0x0);
  func_?(&
                  MethodInfo__PlayerInventoryPreviewItem___AddToWorldInSeconds_d__33__System_Collections_IEnumerator_Reset__
                 );
  func_?(this_00);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

