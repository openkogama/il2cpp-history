
/* Void <>m__0(IModalPopupCreator, BaseEventData) */

void Assembly-CSharp.dll::InventoryItemCubeModelHandler+<OnDeleteConfirmation>c__AnonStorey0::
     InventoryItemCubeModelHandler_OnDeleteConfirmation_c_AnonStorey0___m__0
               (InventoryItemCubeModelHandler_OnDeleteConfirmation_c_AnonStorey0 *this,
               IModalPopupCreator *x,BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  str0 = (this->fields).text;
  str1 = TM::TM__(StringLiteral__was_removed_from_inventory_,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__String);
  }
  mscorlib.dll::System::String::String_Concat_2(str0,str1,(MethodInfo *)0x0);
  if (x != (IModalPopupCreator *)0x0) {
    func_?(4);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

