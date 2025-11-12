
/* Void <Activate>b__0(IEditModeController, BaseEventData) */

void Assembly-CSharp.dll::PlayerInventoryController+<>c__DisplayClass20_0::
     PlayerInventoryController_c_DisplayClass20_0__Activate_b__0
               (PlayerInventoryController_c_DisplayClass20_0 *this,IEditModeController *x,
               BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__EventSystems__IEditModeController);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (x == (IEditModeController *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pIVar2 = (IState *)FUN_?(4,TypeInfo__UnityEngine__EventSystems__IEditModeController,x);
  bVar3 = iRam_? != 0;
  (this->fields).currentState = pIVar2;
  if (bVar3) {
    uVar4 = (uint)((ulonglong)&this->fields >> 0xc);
    puVar5 = (ulonglong *)((ulonglong)((uVar4 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar6 = *puVar5;
      LOCK();
      uVar7 = *puVar5;
      if (uVar6 == uVar7) {
        *puVar5 = uVar6 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
    } while (uVar6 != uVar7);
  }
  return;
}


/* Void <Activate>b__2(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::PlayerInventoryController+<>c__DisplayClass20_0::
     PlayerInventoryController_c_DisplayClass20_0__Activate_b__2
               (PlayerInventoryController_c_DisplayClass20_0 *this,IUIStack *x,BaseEventData *y,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__EventSystems__IUIStack);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__PlayerInventoryController__OnPop__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Events__UnityAction);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pPVar1 = (this->fields).__4__this;
  if ((pPVar1 != (PlayerInventoryController *)0x0) &&
     (this_00 = (pPVar1->fields).inventoryController, this_00 != (InventoryController *)0x0)) {
    UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
              ((Component *)this_00,(MethodInfo *)0x0);
    pPVar1 = (this->fields).__4__this;
    this_01 = (NavMesh_OnNavMeshPreUpdate *)
              FUN_?(TypeInfo__UnityEngine__Events__UnityAction);
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (this_01,(Object *)pPVar1,MethodInfo__PlayerInventoryController__OnPop__,
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

