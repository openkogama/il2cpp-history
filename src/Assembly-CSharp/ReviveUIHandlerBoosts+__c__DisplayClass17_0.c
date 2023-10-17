
/* Void <OnRewardedAdWatched>b__0(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::ReviveUIHandlerBoosts+<>c__DisplayClass17_0::
     ReviveUIHandlerBoosts_c_DisplayClass17_0__OnRewardedAdWatched_b__0
               (ReviveUIHandlerBoosts_c_DisplayClass17_0 *this,IUIStack *x,BaseEventData *y,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__EventSystems__IUIStack);
    func_?(&MethodInfo__ReviveUIHandlerBoosts___OnRewardedAdWatched_b__17_1__);
    func_?(&TypeInfo__UnityEngine__Events__UnityAction);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).popup;
  if (this_00 != (NotificationPopup *)0x0) {
    pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this_00,(MethodInfo *)0x0);
    object = (this->fields).__4__this;
    this_01 = (NavMesh_OnNavMeshPreUpdate *)
              func_?(TypeInfo__UnityEngine__Events__UnityAction);
    if (this_01 != (NavMesh_OnNavMeshPreUpdate *)0x0) {
      UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
      NavMesh_OnNavMeshPreUpdate__ctor
                (this_01,(Object *)object,
                 MethodInfo__ReviveUIHandlerBoosts___OnRewardedAdWatched_b__17_1__,(MethodInfo *)0x0
                );
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

