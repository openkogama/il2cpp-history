
/* Boolean <ShowContextMenu>b__2() */

bool Assembly-CSharp.dll::ContextMenuController+<>c__DisplayClass12_0::
     ContextMenuController_c_DisplayClass12_0__ShowContextMenu_b__2
               (ContextMenuController_c_DisplayClass12_0 *this,MethodInfo *method)

{
  if ((this->fields).isPreview != 0) {
    return 0;
  }
  return (this->fields).isPendingPrototype == 0;
}


/* Boolean <ShowContextMenu>b__3() */

bool Assembly-CSharp.dll::ContextMenuController+<>c__DisplayClass12_0::
     ContextMenuController_c_DisplayClass12_0__ShowContextMenu_b__3
               (ContextMenuController_c_DisplayClass12_0 *this,MethodInfo *method)

{
  return (this->fields).isPreview == 0;
}


/* Void <ShowContextMenu>b__4(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::ContextMenuController+<>c__DisplayClass12_0::
     ContextMenuController_c_DisplayClass12_0__ShowContextMenu_b__4
               (ContextMenuController_c_DisplayClass12_0 *this,IUIStack *x,BaseEventData *y,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__ContextMenuController__OnContextMenuPop__);
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
  pCVar1 = (this->fields).__4__this;
  if ((pCVar1 != (ContextMenuController *)0x0) &&
     (this_00 = (pCVar1->fields).currentContextMenu, this_00 != (ContextMenu *)0x0)) {
    UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
              ((Component *)this_00,(MethodInfo *)0x0);
    pCVar1 = (this->fields).__4__this;
    this_01 = (NavMesh_OnNavMeshPreUpdate *)
              FUN_?(TypeInfo__UnityEngine__Events__UnityAction);
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (this_01,(Object *)pCVar1,MethodInfo__ContextMenuController__OnContextMenuPop__,
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

