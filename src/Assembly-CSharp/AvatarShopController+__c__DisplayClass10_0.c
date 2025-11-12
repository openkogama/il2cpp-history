
/* Void <Activate>b__1(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::AvatarShopController+<>c__DisplayClass10_0::
     AvatarShopController_c_DisplayClass10_0__Activate_b__1
               (AvatarShopController_c_DisplayClass10_0 *this,IUIStack *x,BaseEventData *y,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__AvatarShopController__OnPop__);
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
  pAVar1 = (this->fields).__4__this;
  if ((pAVar1 != (AvatarShopController *)0x0) &&
     (this_00 = (pAVar1->fields).inventoryController, this_00 != (InventoryController *)0x0)) {
    UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
              ((Component *)this_00,(MethodInfo *)0x0);
    pAVar1 = (this->fields).__4__this;
    this_01 = (NavMesh_OnNavMeshPreUpdate *)
              FUN_?(TypeInfo__UnityEngine__Events__UnityAction);
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (this_01,(Object *)pAVar1,MethodInfo__AvatarShopController__OnPop__,(MethodInfo *)0x0)
    ;
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

