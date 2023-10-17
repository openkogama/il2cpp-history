
/* Void <ShowTierUnlockedPopup>b__0(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::DeathUIController+<>c__DisplayClass28_0::
     DeathUIController_c_DisplayClass28_0__ShowTierUnlockedPopup_b__0
               (DeathUIController_c_DisplayClass28_0 *this,IUIStack *x,BaseEventData *y,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__DeathUIController__OnTierUnlockedPop__);
    func_?(&TypeInfo__UnityEngine__EventSystems__IUIStack);
    func_?(&TypeInfo__UnityEngine__Events__UnityAction);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).tierUnlockedPopupController;
  if (this_00 != (TierUnlockedPopupController *)0x0) {
    pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this_00,(MethodInfo *)0x0);
    object = (this->fields).__4__this;
    this_01 = (NavMesh_OnNavMeshPreUpdate *)
              func_?(TypeInfo__UnityEngine__Events__UnityAction);
    if (this_01 != (NavMesh_OnNavMeshPreUpdate *)0x0) {
      UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
      NavMesh_OnNavMeshPreUpdate__ctor
                (this_01,(Object *)object,MethodInfo__DeathUIController__OnTierUnlockedPop__,
                 (MethodInfo *)0x0);
      if (x != (IUIStack *)0x0) {
        func_?(1,TypeInfo__UnityEngine__EventSystems__IUIStack,x,pGVar1,4,this_01,4);
        return;
      }
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

