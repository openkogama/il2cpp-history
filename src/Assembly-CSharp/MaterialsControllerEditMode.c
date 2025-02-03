
/* Void Close() */

void Assembly-CSharp.dll::MaterialsControllerEditMode::MaterialsControllerEditMode_Close
               (MaterialsControllerEditMode *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pUVar2 = (this->fields).closeCallback;
  if (pUVar2 != (UnityAction *)0x0) {
    puStack_1 = (pUVar2->fields)._._.method;
    pvStack_3 = (pUVar2->fields)._._.method_code;
    (*(pUVar2->fields)._._.invoke_impl)();
    return;
  }
  uVar4 = func_?(&puStack_5);
  func_?(uVar4);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void OnEnable() */

void Assembly-CSharp.dll::MaterialsControllerEditMode::MaterialsControllerEditMode_OnEnable
               (MaterialsControllerEditMode *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MaterialsControllerEditMode);
    cRam_? = '\x01';
  }
  if ((this->fields).prevMaterial !=
      TypeInfo__MaterialsControllerEditMode->static_fields->targetMaterial) {
    (*(code *)(this->klass->vtable).OnMaterialChanged_1.method)
              (this,TypeInfo__MaterialsControllerEditMode->static_fields->targetMaterial,
               (this->klass->vtable).Open.methodPtr);
  }
  return;
}


/* Void OnMaterialChanged(Byte) */

void Assembly-CSharp.dll::MaterialsControllerEditMode::MaterialsControllerEditMode_OnMaterialChanged
               (MaterialsControllerEditMode *this,uint8_t id,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  (this->fields).prevMaterial = id;
  MaterialsController::MaterialsController_OnMaterialChanged
            ((MaterialsController *)this,id,(MethodInfo *)0x0);
  x = (this->fields).desktopCubeModelingControllerEditMode;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)x,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar1 != 0) {
    this_00 = (DesktopCubeModelingControllerCubeTutorial *)
              (this->fields).desktopCubeModelingControllerEditMode;
    if (this_00 == (DesktopCubeModelingControllerCubeTutorial *)0x0) {
      func_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    DesktopCubeModelingControllerCubeTutorial::
    DesktopCubeModelingControllerCubeTutorial_DoSetMaterial(this_00,id,(MethodInfo *)0x0);
  }
  return;
}


/* Void OnPop() */

void Assembly-CSharp.dll::MaterialsControllerEditMode::MaterialsControllerEditMode_OnPop
               (MaterialsControllerEditMode *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IShortcutKeyUnRegister>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IShortcutKeyUnRegister>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IShortcutKeyUnRegister>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&
                    MethodInfo__MaterialsControllerEditMode____c___OnPop_b__14_0_UnityEngine__EventSystems__IShortcutKeyUnRegister__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__MaterialsControllerEditMode____c);
    cRam_? = '\x01';
  }
  pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
  if ((TypeInfo__MaterialsControllerEditMode____c->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__MaterialsControllerEditMode____c);
  }
  callbackFunction = TypeInfo__MaterialsControllerEditMode____c->static_fields->__9__14_0;
  if (callbackFunction == (ExecuteEvents_EventFunction_1_IShortcutKeyUnRegister_ *)0x0) {
    if ((TypeInfo__MaterialsControllerEditMode____c->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__MaterialsControllerEditMode____c);
    }
    object = TypeInfo__MaterialsControllerEditMode____c->static_fields->__9;
    callbackFunction =
         (ExecuteEvents_EventFunction_1_IShortcutKeyUnRegister_ *)
         func_?(
                        TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IShortcutKeyUnRegister>
                        );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)object,
               MethodInfo__MaterialsControllerEditMode____c___OnPop_b__14_0_UnityEngine__EventSystems__IShortcutKeyUnRegister__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    TypeInfo__MaterialsControllerEditMode____c->static_fields->__9__14_0 = callbackFunction;
    func_?(&TypeInfo__MaterialsControllerEditMode____c->static_fields->__9__14_0,
                    callbackFunction);
  }
  if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
            (pGVar1,(BaseEventData *)0x0,
             (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IShortcutKeyUnRegister>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IShortcutKeyUnRegister>_
            );
  this_00 = (this->fields)._.desktopCubeModelingController;
  if (this_00 != (DesktopCubeModelingController *)0x0) {
    pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this_00,(MethodInfo *)0x0);
    if (pGVar1 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar1,1,(MethodInfo *)0x0);
      (this->fields).desktopCubeModelingControllerEditMode = (DesktopCubeModelingController *)0x0;
      func_?();
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void Open(UnityAction) */

void Assembly-CSharp.dll::MaterialsControllerEditMode::MaterialsControllerEditMode_Open
               (MaterialsControllerEditMode *this,UnityAction *closeCallback,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                   );
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IShortcutKeyRegister>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IShortcutKeyRegister>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IShortcutKeyRegister>_
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&
                    MethodInfo__MaterialsControllerEditMode___Open_b__10_0_UnityEngine__EventSystems__IShortcutKeyRegister__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&
                    MethodInfo__MaterialsControllerEditMode___Open_b__10_2_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&
                    DesktopCubeModelingController_MethodInfo__UnityEngine__Object__Instantiate<DesktopCubeModelingController>_DesktopCubeModelingController_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&
                    MethodInfo__MaterialsControllerEditMode____c___Open_b__10_1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__MaterialsControllerEditMode____c);
    cRam_? = '\x01';
  }
  pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
  pEVar2 = (ExecuteEvents_EventFunction_1_System_Object_ *)
           func_?(
                          TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IShortcutKeyRegister>
                          );
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
  UnityAction_2_System_Object_System_Object___ctor
            ((UnityAction_2_System_Object_System_Object_ *)pEVar2,(Object *)this,
             MethodInfo__MaterialsControllerEditMode___Open_b__10_0_UnityEngine__EventSystems__IShortcutKeyRegister__UnityEngine__EventSystems__BaseEventData_
             ,(MethodInfo *)0x0);
  if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
            (pGVar1,(BaseEventData *)0x0,pEVar2,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IShortcutKeyRegister>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IShortcutKeyRegister>_
            );
  pDVar3 = (this->fields)._.desktopCubeModelingController;
  if (pDVar3 != (DesktopCubeModelingController *)0x0) {
    pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)pDVar3,(MethodInfo *)0x0);
    if (pGVar1 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar1,0,(MethodInfo *)0x0);
      (this->fields).closeCallback = closeCallback;
      func_?();
      pDVar3 = (this->fields).desktopCubeModelingControllerEditCubeModelPrefab;
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pDVar3 = (DesktopCubeModelingController *)
               UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                         ((Object *)pDVar3,
                          DesktopCubeModelingController_MethodInfo__UnityEngine__Object__Instantiate<DesktopCubeModelingController>_DesktopCubeModelingController_
                         );
      (this->fields).desktopCubeModelingControllerEditMode = pDVar3;
      func_?();
      pDVar3 = (this->fields).desktopCubeModelingControllerEditMode;
      if (pDVar3 != (DesktopCubeModelingController *)0x0) {
        DesktopCubeModelingController::DesktopCubeModelingController_Initialize
                  (pDVar3,(this->fields)._.cubeModelingStateMachine,(MethodInfo *)0x0);
        pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)this,(MethodInfo *)0x0);
        if ((TypeInfo__MaterialsControllerEditMode____c->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        callbackFunction = TypeInfo__MaterialsControllerEditMode____c->static_fields->__9__10_1;
        if (callbackFunction == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
          if ((TypeInfo__MaterialsControllerEditMode____c->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          object = TypeInfo__MaterialsControllerEditMode____c->static_fields->__9;
          callbackFunction = (ExecuteEvents_EventFunction_1_IUIStack_ *)func_?();
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
          Object]::UnityAction_2_System_Object_System_Object___ctor
                    ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)object
                     ,
                     MethodInfo__MaterialsControllerEditMode____c___Open_b__10_1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                     ,(MethodInfo *)0x0);
          TypeInfo__MaterialsControllerEditMode____c->static_fields->__9__10_1 = callbackFunction;
          func_?();
        }
        if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0
           ) {
          func_?();
        }
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                  (pGVar1,(BaseEventData *)0x0,
                   (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction,
                   UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                  );
        pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)this,(MethodInfo *)0x0);
        pEVar2 = (ExecuteEvents_EventFunction_1_System_Object_ *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
        Object]::UnityAction_2_System_Object_System_Object___ctor
                  ((UnityAction_2_System_Object_System_Object_ *)pEVar2,(Object *)this,
                   MethodInfo__MaterialsControllerEditMode___Open_b__10_2_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   ,(MethodInfo *)0x0);
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                  (pGVar1,(BaseEventData *)0x0,pEVar2,
                   UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                  );
        this_00 = (this->fields)._.cubeModelingStateMachine;
        if (this_00 != (CubeModelingStateMachine *)0x0) {
          value = CubeModelingStateMachine::CubeModelingStateMachine_get_CurrentMaterialId
                            (this_00,(MethodInfo *)0x0);
          CubeModelingStateMachine::CubeModelingStateMachine_set_CurrentMaterialId
                    (this_00,value,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void PlayModeToggleOverwrite() */

void Assembly-CSharp.dll::MaterialsControllerEditMode::
     MaterialsControllerEditMode_PlayModeToggleOverwrite
               (MaterialsControllerEditMode *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&StringLiteral_Ignoring);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Debug);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
            ((Object *)StringLiteral_Ignoring,(MethodInfo *)0x0);
  return;
}


/* Transform SetActive() */

Transform *
Assembly-CSharp.dll::MaterialsControllerEditMode::MaterialsControllerEditMode_SetActive
          (MaterialsControllerEditMode *this,MethodInfo *method)

{
  pTVar1 = MaterialsController::MaterialsController_SetActive
                     ((MaterialsController *)this,(MethodInfo *)0x0);
  this_00 = (this->fields)._.cubeModelingStateMachine;
  this_01 = (this->fields).createCubeModelController;
  if (this_00 != (CubeModelingStateMachine *)0x0) {
    materialId = CubeModelingStateMachine::CubeModelingStateMachine_get_CurrentMaterialId
                           (this_00,(MethodInfo *)0x0);
    if (this_01 != (CreateCubeModelController *)0x0) {
      CreateCubeModelController::CreateCubeModelController_Initialize
                (this_01,(MaterialsController *)this,pTVar1,materialId,(MethodInfo *)0x0);
      return pTVar1;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  pTVar1 = (Transform *)(*pcVar2)();
  return pTVar1;
}


/* Void <Open>b__10_0(IShortcutKeyRegister, BaseEventData) */

void Assembly-CSharp.dll::MaterialsControllerEditMode::MaterialsControllerEditMode__Open_b__10_0
               (MaterialsControllerEditMode *this,IShortcutKeyRegister *x,BaseEventData *y,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__EventSystems__IShortcutKeyRegister);
    func_?(&MethodInfo__MaterialsControllerEditMode__PlayModeToggleOverwrite__);
    func_?(&TypeInfo__UnityEngine__Events__UnityAction);
    cRam_? = '\x01';
  }
  this_00 = (NavMesh_OnNavMeshPreUpdate *)
            func_?(TypeInfo__UnityEngine__Events__UnityAction);
  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
  NavMesh_OnNavMeshPreUpdate__ctor
            (this_00,(Object *)this,
             MethodInfo__MaterialsControllerEditMode__PlayModeToggleOverwrite__,(MethodInfo *)0x0);
  if (x == (IShortcutKeyRegister *)0x0) {
    func_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pIVar2 = x->klass;
  uVar3 = 0;
  uVar4._0_1_ = (pIVar2->_1).rank;
  uVar4._1_1_ = (pIVar2->_1).minimumAlignment;
  if (uVar4 != 0) {
    do {
      if (pIVar2->interfaceOffsets[uVar3].interfaceType ==
          (Il2CppClass *)TypeInfo__UnityEngine__EventSystems__IShortcutKeyRegister) {
        ppMVar5 = &(&x->klass->vtable)[x->klass->interfaceOffsets[uVar3].offset].RegisterShortcutKey
                   .method;
        goto code_?;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar4);
  }
  ppMVar5 = (MethodInfo **)
            func_?(x,TypeInfo__UnityEngine__EventSystems__IShortcutKeyRegister,0);
code_?:
  (*(code *)*ppMVar5)(x,0x16,0,ppMVar5[1]);
  return;
}


/* Void <Open>b__10_2(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::MaterialsControllerEditMode::MaterialsControllerEditMode__Open_b__10_2
               (MaterialsControllerEditMode *this,IUIStack *x,BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__EventSystems__IUIStack);
    func_?(&MethodInfo__MaterialsControllerEditMode__OnPop__);
    func_?(&TypeInfo__UnityEngine__Events__UnityAction);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).desktopCubeModelingControllerEditMode;
  if (this_00 != (DesktopCubeModelingController *)0x0) {
    pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this_00,(MethodInfo *)0x0);
    this_01 = (NavMesh_OnNavMeshPreUpdate *)
              func_?(TypeInfo__UnityEngine__Events__UnityAction);
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (this_01,(Object *)this,MethodInfo__MaterialsControllerEditMode__OnPop__,
               (MethodInfo *)0x0);
    if (x != (IUIStack *)0x0) {
      func_?(1,TypeInfo__UnityEngine__EventSystems__IUIStack,x,pGVar1,8,this_01,1);
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Transform get_CubeModelingControllerTransform() */

Transform *
Assembly-CSharp.dll::MaterialsControllerEditMode::
MaterialsControllerEditMode_get_CubeModelingControllerTransform
          (MaterialsControllerEditMode *this,MethodInfo *method)

{
  pDStack_1 = (DesktopCubeModelingController *)&stack0xfffffffc;
  pDVar2 = (this->fields)._.desktopCubeModelingController;
  if (pDVar2 != (DesktopCubeModelingController *)0x0) {
    if (pcRam_? == (code *)0x0) {
      pcRam_? = (code *)func_?();
    }
    pDStack_1 = pDVar2;
    pTVar3 = (Transform *)(*pcRam_?)();
    return pTVar3;
  }
  uVar4 = func_?(auStack_5);
  func_?(uVar4);
  pcVar6 = (code *)swi(3);
  pTVar3 = (Transform *)(*pcVar6)();
  return pTVar3;
}

