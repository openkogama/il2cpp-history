
/* Void <>m__0(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::BundleView+<ProductPurchaseResponseHandler>c__AnonStorey3::
     BundleView_ProductPurchaseResponseHandler_c_AnonStorey3___m__0
               (BundleView_ProductPurchaseResponseHandler_c_AnonStorey3 *this,IUIStack *x,
               BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).popup;
  if (this_00 != (PurchasedAccessoryPreviewer *)0x0) {
    pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                       ((Component_1 *)this_00,(MethodInfo *)0x0);
    pBVar2 = (this->fields).__f__ref_6;
    if (pBVar2 != (BundleView_ProductPurchaseResponseHandler_c_AnonStorey6 *)0x0) {
      object = (pBVar2->fields)._this;
      this_01 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                 *)func_?(TypeInfo__UnityEngine__Events__UnityAction);
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (this_01,(Object *)object,MethodInfo__BundleView__OnPop__,(MethodInfo *)0x0);
      if (x != (IUIStack *)0x0) {
        func_?(1,TypeInfo__UnityEngine__EventSystems__IUIStack,x,pGVar1,1,this_01,0x20);
        return;
      }
    }
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

