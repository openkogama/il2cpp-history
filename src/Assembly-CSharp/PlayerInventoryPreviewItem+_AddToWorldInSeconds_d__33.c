
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
    this_01 = (SubscribableVariable_1_System_Single_ *)
              func_?(TypeInfo__UnityEngine__WaitForSeconds);
    SubscribableVariable`1[System::Single]::SubscribableVariable_1_System_Single___ctor
              (this_01,(float)iVar1,(MethodInfo *)0x0);
    ppOVar2 = &(this->fields).__2__current;
    *ppOVar2 = (Object *)this_01;
    func_?(ppOVar2,this_01);
    (this->fields).__1__state = 1;
    return 1;
  }
  if (iVar1 != 1) {
    return 0;
  }
  (this->fields).__1__state = -1;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVGameControllerBase);
    cRam_? = '\x01';
  }
  pIVar3 = TypeInfo__MVGameControllerBase->static_fields->_EditModeUI_k__BackingField;
  if (((pIVar3 != (IEditModeUI *)0x0) &&
      (iVar1 = func_?(4,TypeInfo__IEditModeUI,pIVar3), iVar1 != 0)) &&
     (*(undefined4 *)(iVar1 + 0x18) = 0xff7fffff, this_00 != (PlayerInventoryPreviewItem *)0x0)) {
    PlayerInventoryPreviewItem::PlayerInventoryPreviewItem_AddItemToWorldFromInventory
              (this_00,(MethodInfo *)0x0);
    return 0;
  }
  func_?();
  pcVar4 = (code *)swi(3);
  bVar5 = (*pcVar4)();
  return bVar5;
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
  func_?(&
                  MethodInfo__PlayerInventoryPreviewItem___AddToWorldInSeconds_d__33__System_Collections_IEnumerator_Reset__
                 );
  func_?(this_00);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

