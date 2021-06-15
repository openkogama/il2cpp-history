
/* Void <>m__0(IModalPopupCreator, BaseEventData) */

void Assembly-CSharp.dll::SellAvatarController+<OnAddToMarketplace>c__AnonStorey0::
     SellAvatarController_OnAddToMarketplace_c_AnonStorey0___m__0
               (SellAvatarController_OnAddToMarketplace_c_AnonStorey0 *this,IModalPopupCreator *x,
               BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pSVar1 = (this->fields).text;
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

