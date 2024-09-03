
/* Void <InitializeHierarchy>b__0(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::SettingsBase+<>c__DisplayClass6_0::
     SettingsBase_c_DisplayClass6_0__InitializeHierarchy_b__0
               (SettingsBase_c_DisplayClass6_0 *this,IUIStack *handler,BaseEventData *data,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    ppIStack_1 = &TypeInfo__UnityEngine__EventSystems__IUIStack;
    func_?();
    cRam_? = '\x01';
  }
  if (handler != (IUIStack *)0x0) {
    ppIStack_1 = (IUIStack__Class **)(this->fields).GroupFlags;
    pIStack_2 = handler;
    pIStack_3 = TypeInfo__UnityEngine__EventSystems__IUIStack;
    func_?(3);
    return;
  }
  ppIStack_1 = (IUIStack__Class **)&stack0xfffffffc;
  uVar4 = func_?(&pIStack_3);
  func_?(uVar4);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void <InitializeHierarchy>b__1(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::SettingsBase+<>c__DisplayClass6_0::
     SettingsBase_c_DisplayClass6_0__InitializeHierarchy_b__1
               (SettingsBase_c_DisplayClass6_0 *this,IUIStack *handler,BaseEventData *data,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__EventSystems__IUIStack);
    func_?(&MethodInfo__SettingsBase__OnPop__);
    func_?(&TypeInfo__UnityEngine__Events__UnityAction);
    cRam_? = '\x01';
  }
  pSVar1 = (this->fields).__4__this;
  if (pSVar1 != (SettingsBase *)0x0) {
    pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)pSVar1,(MethodInfo *)0x0);
    pSVar1 = (this->fields).__4__this;
    iVar3 = (this->fields).PushOptions;
    this_00 = (NavMesh_OnNavMeshPreUpdate *)
              func_?(TypeInfo__UnityEngine__Events__UnityAction);
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (this_00,(Object *)pSVar1,MethodInfo__SettingsBase__OnPop__,(MethodInfo *)0x0);
    if (handler != (IUIStack *)0x0) {
      func_?(1,TypeInfo__UnityEngine__EventSystems__IUIStack,handler,pGVar2,iVar3,this_00,
                      (this->fields).GroupFlags);
      return;
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

