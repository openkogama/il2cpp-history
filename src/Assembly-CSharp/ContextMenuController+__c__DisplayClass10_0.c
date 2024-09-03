
/* Boolean <ShowContextMenu>b__2() */

bool Assembly-CSharp.dll::ContextMenuController+<>c__DisplayClass10_0::
     ContextMenuController_c_DisplayClass10_0__ShowContextMenu_b__2
               (ContextMenuController_c_DisplayClass10_0 *this,MethodInfo *method)

{
  if ((this->fields).isPreview != 0) {
    return 0;
  }
  return (this->fields).isPendingPrototype == 0;
}


/* Void <ShowContextMenu>b__4(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::ContextMenuController+<>c__DisplayClass10_0::
     ContextMenuController_c_DisplayClass10_0__ShowContextMenu_b__4
               (ContextMenuController_c_DisplayClass10_0 *this,IUIStack *x,BaseEventData *y,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__ContextMenuController__OnContextMenuPop__);
    func_?(&TypeInfo__UnityEngine__EventSystems__IUIStack);
    func_?(&TypeInfo__UnityEngine__Events__UnityAction);
    cRam_? = '\x01';
  }
  pCVar1 = (this->fields).__4__this;
  if ((pCVar1 != (ContextMenuController *)0x0) &&
     (this_00 = (pCVar1->fields).currentContextMenu, this_00 != (ContextMenu *)0x0)) {
    pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this_00,(MethodInfo *)0x0);
    pCVar1 = (this->fields).__4__this;
    this_01 = (NavMesh_OnNavMeshPreUpdate *)
              func_?(TypeInfo__UnityEngine__Events__UnityAction);
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (this_01,(Object *)pCVar1,MethodInfo__ContextMenuController__OnContextMenuPop__,
               (MethodInfo *)0x0);
    if (x != (IUIStack *)0x0) {
      func_?(1,TypeInfo__UnityEngine__EventSystems__IUIStack,x,pGVar2,0,this_01,2);
      return;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

