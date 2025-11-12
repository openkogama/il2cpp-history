
/* Void <InitializeHierarchy>b__0(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::SettingsBase+<>c__DisplayClass6_0::
     SettingsBase_c_DisplayClass6_0__InitializeHierarchy_b__0
               (SettingsBase_c_DisplayClass6_0 *this,IUIStack *handler,BaseEventData *data,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__EventSystems__IUIStack);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (handler == (IUIStack *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  uVar2 = (this->fields).GroupFlags;
  uVar3 = 0;
  pIVar4 = handler->klass;
  uVar5._0_1_ = (pIVar4->_1).rank;
  uVar5._1_1_ = (pIVar4->_1).minimumAlignment;
  if (uVar5 != 0) {
    do {
      if (pIVar4->interfaceOffsets[uVar3].interfaceType ==
          (Il2CppClass *)TypeInfo__UnityEngine__EventSystems__IUIStack) {
        pVVar6 = &(pIVar4->vtable).get_StackReady + (pIVar4->interfaceOffsets[uVar3].offset + 3);
        goto code_?;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar5);
  }
  pVVar6 = (VirtualInvokeData *)FUN_?(handler);
code_?:
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pVVar6->methodPtr)(handler,(ulonglong)uVar2,pVVar6->method,pVVar6->methodPtr);
  return;
}


/* Void <InitializeHierarchy>b__1(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::SettingsBase+<>c__DisplayClass6_0::
     SettingsBase_c_DisplayClass6_0__InitializeHierarchy_b__1
               (SettingsBase_c_DisplayClass6_0 *this,IUIStack *handler,BaseEventData *data,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__EventSystems__IUIStack);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__SettingsBase__OnPop__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Events__UnityAction);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar1 = (this->fields).__4__this;
  if (pSVar1 != (SettingsBase *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
              ((Component *)pSVar1,(MethodInfo *)0x0);
    pSVar1 = (this->fields).__4__this;
    this_00 = (NavMesh_OnNavMeshPreUpdate *)
              FUN_?(TypeInfo__UnityEngine__Events__UnityAction);
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (this_00,(Object *)pSVar1,MethodInfo__SettingsBase__OnPop__,(MethodInfo *)0x0);
    if (handler != (IUIStack *)0x0) {
      FUN_?();
      return;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

