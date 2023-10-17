
/* Void <OnDeleteConfirmation>b__1(IModalPopupCreator, BaseEventData) */

void Assembly-CSharp.dll::InventoryItemCubeModelHandler+<>c__DisplayClass7_0::
     InventoryItemCubeModelHandler_c_DisplayClass7_0__OnDeleteConfirmation_b__1
               (InventoryItemCubeModelHandler_c_DisplayClass7_0 *this,IModalPopupCreator *x,
               BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__EventSystems__IModalPopupCreator);
    func_?(&StringLiteral__was_removed_from_inventory_);
    func_?(&::StringLiteral__);
    cRam_? = '\x01';
  }
  str0 = (this->fields).text;
  str1 = TM::TM__(StringLiteral__was_removed_from_inventory_,(MethodInfo *)0x0);
  mscorlib.dll::System::String::String_Concat_3(str0,str1,(MethodInfo *)0x0);
  if (x != (IModalPopupCreator *)0x0) {
    func_?(4);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

