
/* Void <Activate>b__1(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::PlayerInventoryController+<>c__DisplayClass20_0::
     PlayerInventoryController_c_DisplayClass20_0__Activate_b__1
               (PlayerInventoryController_c_DisplayClass20_0 *this,IUIStack *x,BaseEventData *y,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__EventSystems__IUIStack);
    func_?(&MethodInfo__PlayerInventoryController__OnPop__);
    func_?(&TypeInfo__UnityEngine__Events__UnityAction);
    cRam_? = '\x01';
  }
  pPVar1 = (this->fields).__4__this;
  if ((pPVar1 != (PlayerInventoryController *)0x0) &&
     (this_00 = (pPVar1->fields).inventoryController, this_00 != (InventoryController *)0x0)) {
    pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this_00,(MethodInfo *)0x0);
    iVar3 = (this->fields).options;
    pPVar1 = (this->fields).__4__this;
    this_01 = (NavMesh_OnNavMeshPreUpdate *)
              func_?(TypeInfo__UnityEngine__Events__UnityAction);
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (this_01,(Object *)pPVar1,MethodInfo__PlayerInventoryController__OnPop__,
               (MethodInfo *)0x0);
    if (x != (IUIStack *)0x0) {
      func_?(1,TypeInfo__UnityEngine__EventSystems__IUIStack,x,pGVar2,iVar3,this_01,4);
      return;
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

