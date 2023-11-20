
/* Void <OpenSelection>b__0(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::ThemeMenuController+<>c__DisplayClass4_0::
     ThemeMenuController_c_DisplayClass4_0__OpenSelection_b__0
               (ThemeMenuController_c_DisplayClass4_0 *this,IUIStack *x,BaseEventData *y,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__EventSystems__IUIStack);
    func_?(&MethodInfo__ThemeMenuController____c___OpenSelection_b__4_1__);
    func_?(&TypeInfo__ThemeMenuController____c);
    func_?(&TypeInfo__UnityEngine__Events__UnityAction);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).menu;
  if (this_00 != (ThemeSelection *)0x0) {
    pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this_00,(MethodInfo *)0x0);
    if ((TypeInfo__ThemeMenuController____c->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__ThemeMenuController____c);
    }
    this_01 = TypeInfo__ThemeMenuController____c->static_fields->__9__4_1;
    if (this_01 == (UnityAction *)0x0) {
      if ((TypeInfo__ThemeMenuController____c->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__ThemeMenuController____c);
      }
      object = TypeInfo__ThemeMenuController____c->static_fields->__9;
      this_01 = (UnityAction *)func_?(TypeInfo__UnityEngine__Events__UnityAction);
      UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
      NavMesh_OnNavMeshPreUpdate__ctor
                ((NavMesh_OnNavMeshPreUpdate *)this_01,(Object *)object,
                 MethodInfo__ThemeMenuController____c___OpenSelection_b__4_1__,(MethodInfo *)0x0);
      TypeInfo__ThemeMenuController____c->static_fields->__9__4_1 = this_01;
      func_?(&TypeInfo__ThemeMenuController____c->static_fields->__9__4_1,this_01);
    }
    if (x != (IUIStack *)0x0) {
      func_?(1,TypeInfo__UnityEngine__EventSystems__IUIStack,x,pGVar1,1,this_01,4);
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

