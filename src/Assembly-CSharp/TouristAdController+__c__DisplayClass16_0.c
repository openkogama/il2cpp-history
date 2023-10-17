
/* Void <ShowPromotion>b__0(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::TouristAdController+<>c__DisplayClass16_0::
     TouristAdController_c_DisplayClass16_0__ShowPromotion_b__0
               (TouristAdController_c_DisplayClass16_0 *this,IUIStack *x,BaseEventData *_,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__EventSystems__IUIStack);
    func_?(&MethodInfo__TouristAdController__OnPromotionPopped__);
    func_?(&TypeInfo__UnityEngine__Events__UnityAction);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).createdPromotion;
  if (this_00 != (TouristPromotion *)0x0) {
    pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this_00,(MethodInfo *)0x0);
    object = (this->fields).__4__this;
    this_01 = (NavMesh_OnNavMeshPreUpdate *)
              func_?(TypeInfo__UnityEngine__Events__UnityAction);
    if (this_01 != (NavMesh_OnNavMeshPreUpdate *)0x0) {
      UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
      NavMesh_OnNavMeshPreUpdate__ctor
                (this_01,(Object *)object,MethodInfo__TouristAdController__OnPromotionPopped__,
                 (MethodInfo *)0x0);
      if (x != (IUIStack *)0x0) {
        func_?(1,TypeInfo__UnityEngine__EventSystems__IUIStack,x,pGVar1,1,this_01,0x20);
        return;
      }
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

