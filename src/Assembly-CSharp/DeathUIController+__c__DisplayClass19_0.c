
/* Void <ShowReviveMenu>b__0(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::DeathUIController+<>c__DisplayClass19_0::
     DeathUIController_c_DisplayClass19_0__ShowReviveMenu_b__0
               (DeathUIController_c_DisplayClass19_0 *this,IUIStack *x,BaseEventData *y,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__EventSystems__IUIStack);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__DeathUIController____c___ShowReviveMenu_b__19_1__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__DeathUIController____c);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Events__UnityAction);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).revivePopup;
  if (this_00 != (ReviveUIHandler *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
              ((Component *)this_00,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__DeathUIController____c->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__DeathUIController____c);
    }
    if (TypeInfo__DeathUIController____c->static_fields->__9__19_1 == (UnityAction *)0x0) {
      if (*(int *)&(TypeInfo__DeathUIController____c->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__DeathUIController____c);
      }
      object = TypeInfo__DeathUIController____c->static_fields->__9;
      this_01 = (NavMesh_OnNavMeshPreUpdate *)
                FUN_?(TypeInfo__UnityEngine__Events__UnityAction);
      UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
      NavMesh_OnNavMeshPreUpdate__ctor
                (this_01,(Object *)object,
                 MethodInfo__DeathUIController____c___ShowReviveMenu_b__19_1__,(MethodInfo *)0x0);
      TypeInfo__DeathUIController____c->static_fields->__9__19_1 = (UnityAction *)this_01;
      if (iRam_? != 0) {
        uVar1 = (uint)((ulonglong)&TypeInfo__DeathUIController____c->static_fields->__9__19_1 >> 0xc
                      );
        puVar2 = (ulonglong *)((ulonglong)((uVar1 & 0x1fffff) >> 6) * 8 + 0xADDR);
        do {
          uVar3 = *puVar2;
          LOCK();
          uVar4 = *puVar2;
          if (uVar3 == uVar4) {
            *puVar2 = uVar3 | 1L << (uVar1 & 0x3f);
          }
          UNLOCK();
        } while (uVar3 != uVar4);
      }
    }
    if (x != (IUIStack *)0x0) {
      FUN_?();
      return;
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

