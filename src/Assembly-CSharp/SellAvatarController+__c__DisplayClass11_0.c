
/* Void <OnAddToMarketplace>b__2(IModalPopupCreator, BaseEventData) */

void Assembly-CSharp.dll::SellAvatarController+<>c__DisplayClass11_0::
     SellAvatarController_c_DisplayClass11_0__OnAddToMarketplace_b__2
               (SellAvatarController_c_DisplayClass11_0 *this,IModalPopupCreator *x,BaseEventData *y
               ,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__EventSystems__IModalPopupCreator);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (x != (IModalPopupCreator *)0x0) {
    FUN_?();
    return;
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

