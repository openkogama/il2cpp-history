
/* Void <OpenThemesMenu>b__0(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::ThemeMenuController+<>c__DisplayClass3_0::
     ThemeMenuController_c_DisplayClass3_0__OpenThemesMenu_b__0
               (ThemeMenuController_c_DisplayClass3_0 *this,IUIStack *x,BaseEventData *y,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__EventSystems__IUIStack);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__ThemeMenuController____c___OpenThemesMenu_b__3_1__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ThemeMenuController____c);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Events__UnityAction);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).menu;
  if (this_00 != (ThemeSelection *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
              ((Component *)this_00,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__ThemeMenuController____c->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__ThemeMenuController____c);
    }
    if (TypeInfo__ThemeMenuController____c->static_fields->__9__3_1 == (UnityAction *)0x0) {
      if (*(int *)&(TypeInfo__ThemeMenuController____c->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__ThemeMenuController____c);
      }
      object = TypeInfo__ThemeMenuController____c->static_fields->__9;
      this_01 = (NavMesh_OnNavMeshPreUpdate *)
                FUN_?(TypeInfo__UnityEngine__Events__UnityAction);
      UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
      NavMesh_OnNavMeshPreUpdate__ctor
                (this_01,(Object *)object,
                 MethodInfo__ThemeMenuController____c___OpenThemesMenu_b__3_1__,(MethodInfo *)0x0);
      TypeInfo__ThemeMenuController____c->static_fields->__9__3_1 = (UnityAction *)this_01;
      if (iRam_? != 0) {
        uVar1 = (uint)((ulonglong)&TypeInfo__ThemeMenuController____c->static_fields->__9__3_1 >>
                      0xc);
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

