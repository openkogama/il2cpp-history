
/* Void <ShowPromotion>b__0(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::TouristAdController+<>c__DisplayClass19_0::
     TouristAdController_c_DisplayClass19_0__ShowPromotion_b__0
               (TouristAdController_c_DisplayClass19_0 *this,IUIStack *x,BaseEventData *_,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__EventSystems__IUIStack);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__TouristAdController__OnPromotionPopped__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Events__UnityAction);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).createdPromotion;
  if (this_00 != (TouristPromotion *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
              ((Component *)this_00,(MethodInfo *)0x0);
    object = (this->fields).__4__this;
    this_01 = (NavMesh_OnNavMeshPreUpdate *)
              FUN_?(TypeInfo__UnityEngine__Events__UnityAction);
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (this_01,(Object *)object,MethodInfo__TouristAdController__OnPromotionPopped__,
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

