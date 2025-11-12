
/* Void <SuccessfulPopupCallBack>b__0(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::AvatarAccessoryPurchasePopup+<>c__DisplayClass23_0::
     AvatarAccessoryPurchasePopup_c_DisplayClass23_0__SuccessfulPopupCallBack_b__0
               (AvatarAccessoryPurchasePopup_c_DisplayClass23_0 *this,IUIStack *x,BaseEventData *y,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__AvatarAccessoryPurchasePopup__Pop__);
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
    object = (this->fields).__4__this;
    this_01 = (NavMesh_OnNavMeshPreUpdate *)
              FUN_?(TypeInfo__UnityEngine__Events__UnityAction);
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (this_01,(Object *)object,MethodInfo__AvatarAccessoryPurchasePopup__Pop__,
               (MethodInfo *)0x0);
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

