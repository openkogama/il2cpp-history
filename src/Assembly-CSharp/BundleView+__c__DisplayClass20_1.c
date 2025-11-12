
/* Void <ProductPurchaseResponseHandler>b__2(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::BundleView+<>c__DisplayClass20_1::
     BundleView_c_DisplayClass20_1__ProductPurchaseResponseHandler_b__2
               (BundleView_c_DisplayClass20_1 *this,IUIStack *x,BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__BundleView__OnPop__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__EventSystems__IUIStack);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Events__UnityAction);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).popup;
  if (this_00 != (PurchasedAccessoryPreviewer *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
              ((Component *)this_00,(MethodInfo *)0x0);
    pBVar1 = (this->fields).CS___8__locals1;
    if (pBVar1 != (BundleView_c_DisplayClass20_0 *)0x0) {
      object = (pBVar1->fields).__4__this;
      this_01 = (NavMesh_OnNavMeshPreUpdate *)
                FUN_?(TypeInfo__UnityEngine__Events__UnityAction);
      UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
      NavMesh_OnNavMeshPreUpdate__ctor
                (this_01,(Object *)object,MethodInfo__BundleView__OnPop__,(MethodInfo *)0x0);
      if (x != (IUIStack *)0x0) {
        FUN_?();
        return;
      }
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

