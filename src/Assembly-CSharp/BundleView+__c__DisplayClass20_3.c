
/* Void <ProductPurchaseResponseHandler>b__4(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::BundleView+<>c__DisplayClass20_3::
     BundleView_c_DisplayClass20_3__ProductPurchaseResponseHandler_b__4
               (BundleView_c_DisplayClass20_3 *this,IUIStack *x,BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__EventSystems__IUIStack);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).errorPopup;
  if (this_00 != (BundleErrorPopUp *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
              ((Component *)this_00,(MethodInfo *)0x0);
    if (x != (IUIStack *)0x0) {
      FUN_?();
      return;
    }
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

