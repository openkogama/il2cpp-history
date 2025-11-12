
/* Void <PushToStack>b__0(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::FirstTimeActivatablePopupTimed+<>c__DisplayClass20_0::
     FirstTimeActivatablePopupTimed_c_DisplayClass20_0__PushToStack_b__0
               (FirstTimeActivatablePopupTimed_c_DisplayClass20_0 *this,IUIStack *x,BaseEventData *y
               ,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__FirstTimeActivatablePopupTimed__OnPop__);
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
  pFVar1 = (this->fields).__4__this;
  if ((pFVar1 != (FirstTimeActivatablePopupTimed *)0x0) &&
     (this_00 = (pFVar1->fields).createdPopup, this_00 != (CanvasGroup *)0x0)) {
    UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
              ((Component *)this_00,(MethodInfo *)0x0);
    pFVar1 = (this->fields).__4__this;
    this_01 = (NavMesh_OnNavMeshPreUpdate *)
              FUN_?(TypeInfo__UnityEngine__Events__UnityAction);
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (this_01,(Object *)pFVar1,MethodInfo__FirstTimeActivatablePopupTimed__OnPop__,
               (MethodInfo *)0x0);
    if (x != (IUIStack *)0x0) {
      FUN_?();
      return;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

