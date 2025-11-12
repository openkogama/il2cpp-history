
/* Void <OnConfirmation>b__1(IModalPopupCreator, BaseEventData) */

void Assembly-CSharp.dll::ItemInventoryDeleteTab+<>c__DisplayClass5_0::
     ItemInventoryDeleteTab_c_DisplayClass5_0__OnConfirmation_b__1
               (ItemInventoryDeleteTab_c_DisplayClass5_0 *this,IModalPopupCreator *x,
               BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__EventSystems__IModalPopupCreator);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__was_removed_from_inventory_);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  str0 = (this->fields).text;
  str1 = TM::TM__(StringLiteral__was_removed_from_inventory_,(MethodInfo *)0x0);
  mscorlib.dll::System::String::String_Concat_4(str0,str1,(MethodInfo *)0x0);
  if (x != (IModalPopupCreator *)0x0) {
    FUN_?();
    return;
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

