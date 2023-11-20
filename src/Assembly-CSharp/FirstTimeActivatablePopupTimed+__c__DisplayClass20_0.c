
/* Void <PushToStack>b__0(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::FirstTimeActivatablePopupTimed+<>c__DisplayClass20_0::
     FirstTimeActivatablePopupTimed_c_DisplayClass20_0__PushToStack_b__0
               (FirstTimeActivatablePopupTimed_c_DisplayClass20_0 *this,IUIStack *x,BaseEventData *y
               ,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__FirstTimeActivatablePopupTimed__OnPop__);
    func_?(&TypeInfo__UnityEngine__EventSystems__IUIStack);
    func_?(&TypeInfo__UnityEngine__Events__UnityAction);
    cRam_? = '\x01';
  }
  pFVar1 = (this->fields).__4__this;
  if ((pFVar1 != (FirstTimeActivatablePopupTimed *)0x0) &&
     (this_00 = (pFVar1->fields).createdPopup, this_00 != (CanvasGroup *)0x0)) {
    pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this_00,(MethodInfo *)0x0);
    iVar3 = (this->fields).options;
    pFVar1 = (this->fields).__4__this;
    this_01 = (NavMesh_OnNavMeshPreUpdate *)
              func_?(TypeInfo__UnityEngine__Events__UnityAction);
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (this_01,(Object *)pFVar1,MethodInfo__FirstTimeActivatablePopupTimed__OnPop__,
               (MethodInfo *)0x0);
    if (x != (IUIStack *)0x0) {
      func_?(1,TypeInfo__UnityEngine__EventSystems__IUIStack,x,pGVar2,iVar3,this_01,0x20);
      return;
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

