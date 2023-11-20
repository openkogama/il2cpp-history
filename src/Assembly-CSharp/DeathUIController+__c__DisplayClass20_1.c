
/* Void <ShowReviveMenu>b__1(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::DeathUIController+<>c__DisplayClass20_1::
     DeathUIController_c_DisplayClass20_1__ShowReviveMenu_b__1
               (DeathUIController_c_DisplayClass20_1 *this,IUIStack *x,BaseEventData *y,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__EventSystems__IUIStack);
    func_?(&MethodInfo__DeathUIController____c___ShowReviveMenu_b__20_2__);
    func_?(&TypeInfo__DeathUIController____c);
    func_?(&TypeInfo__UnityEngine__Events__UnityAction);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).revivePopup;
  if (this_00 != (ReviveUIHandler *)0x0) {
    pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this_00,(MethodInfo *)0x0);
    if ((TypeInfo__DeathUIController____c->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__DeathUIController____c);
    }
    this_01 = TypeInfo__DeathUIController____c->static_fields->__9__20_2;
    if (this_01 == (UnityAction *)0x0) {
      if ((TypeInfo__DeathUIController____c->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__DeathUIController____c);
      }
      object = TypeInfo__DeathUIController____c->static_fields->__9;
      this_01 = (UnityAction *)func_?(TypeInfo__UnityEngine__Events__UnityAction);
      UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
      NavMesh_OnNavMeshPreUpdate__ctor
                ((NavMesh_OnNavMeshPreUpdate *)this_01,(Object *)object,
                 MethodInfo__DeathUIController____c___ShowReviveMenu_b__20_2__,(MethodInfo *)0x0);
      TypeInfo__DeathUIController____c->static_fields->__9__20_2 = this_01;
      func_?(&TypeInfo__DeathUIController____c->static_fields->__9__20_2,this_01);
    }
    if (x != (IUIStack *)0x0) {
      func_?(1,TypeInfo__UnityEngine__EventSystems__IUIStack,x,pGVar1,2,this_01,2);
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

