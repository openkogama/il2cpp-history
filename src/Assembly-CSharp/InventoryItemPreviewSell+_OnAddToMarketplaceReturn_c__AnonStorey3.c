
/* Void <>m__0(IModalPopupCreator, BaseEventData) */

void Assembly-CSharp.dll::InventoryItemPreviewSell+<OnAddToMarketplaceReturn>c__AnonStorey3::
     InventoryItemPreviewSell_OnAddToMarketplaceReturn_c_AnonStorey3___m__0
               (InventoryItemPreviewSell_OnAddToMarketplaceReturn_c_AnonStorey3 *this,
               IModalPopupCreator *x,BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pSVar1 = (this->fields).txt;
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__String);
  }
  if (x != (IModalPopupCreator *)0x0) {
    func_?(4,TypeInfo__UnityEngine__EventSystems__IModalPopupCreator,x,pSVar1,
                    TypeInfo__System__String->static_fields->Empty);
    return;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

