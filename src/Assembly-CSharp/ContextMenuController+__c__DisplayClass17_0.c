
/* Void <ShowContextMenuLink>b__0() */

void Assembly-CSharp.dll::ContextMenuController+<>c__DisplayClass17_0::
     ContextMenuController_c_DisplayClass17_0__ShowContextMenuLink_b__0
               (ContextMenuController_c_DisplayClass17_0 *this,MethodInfo *method)

{
  this_00 = (this->fields).__4__this;
  if (this_00 != (ContextMenuController *)0x0) {
    ContextMenuController::ContextMenuController_DeleteLink
              (this_00,(this->fields).linkID,(this->fields).isObjectLink,(MethodInfo *)0x0);
    return;
  }
  uVar1 = func_?(&stack0xfffffff0);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void <ShowContextMenuLink>b__1(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::ContextMenuController+<>c__DisplayClass17_0::
     ContextMenuController_c_DisplayClass17_0__ShowContextMenuLink_b__1
               (ContextMenuController_c_DisplayClass17_0 *this,IUIStack *x,BaseEventData *y,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__ContextMenuController__OnContextMenuPop__);
    func_?(&TypeInfo__UnityEngine__EventSystems__IUIStack);
    func_?(&TypeInfo__UnityEngine__Events__UnityAction);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).contextMenu;
  if (this_00 != (ContextMenu *)0x0) {
    pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this_00,(MethodInfo *)0x0);
    object = (this->fields).__4__this;
    this_01 = (NavMesh_OnNavMeshPreUpdate *)
              func_?(TypeInfo__UnityEngine__Events__UnityAction);
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (this_01,(Object *)object,MethodInfo__ContextMenuController__OnContextMenuPop__,
               (MethodInfo *)0x0);
    if (x != (IUIStack *)0x0) {
      func_?(1,TypeInfo__UnityEngine__EventSystems__IUIStack,x,pGVar1,0,this_01,2);
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

