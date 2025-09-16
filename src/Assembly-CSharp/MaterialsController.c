
/* Void Initialize(CubeModelingStateMachine) */

void Assembly-CSharp.dll::MaterialsController::MaterialsController_Initialize
               (MaterialsController *this,CubeModelingStateMachine *cubeModelingStateMachine,
               MethodInfo *method)

{
  (this->fields).cubeModelingStateMachine = cubeModelingStateMachine;
  func_?(&(this->fields).cubeModelingStateMachine,cubeModelingStateMachine);
  if (cRam_? == '\0') {
    func_?(&TypeInfo__TabState);
    func_?(&StringLiteral_Materials);
    cRam_? = '\x01';
  }
  name = TM::TM__(StringLiteral_Materials,(MethodInfo *)0x0);
  iVar1 = (this->fields).numberOfSlotsPrPage;
  this_01 = (TabState *)func_?(TypeInfo__TabState);
  TabState::TabState__ctor(this_01,1,name,iVar1,(MethodInfo *)0x0);
  pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((pMVar2 != (MVNetworkGame *)0x0) &&
     (this_00 = (pMVar2->fields)._MaterialRepository_k__BackingField,
     this_00 != (MVMaterialRepository *)0x0)) {
    iVar1 = MVMaterialRepository::MVMaterialRepository_get_MaterialCount(this_00,(MethodInfo *)0x0);
    if (this_01 != (TabState *)0x0) {
      (this_01->fields).highestSlotIndex = iVar1 + -1;
      ppTStack3 = &(this->fields).tab;
      (this->fields).tab = this_01;
      pTStack4 = this_01;
      func_?();
      return;
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void InitializeMaterialInventoryData() */

void Assembly-CSharp.dll::MaterialsController::MaterialsController_InitializeMaterialInventoryData
               (MaterialsController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__TabState);
    func_?(&StringLiteral_Materials);
    cRam_? = '\x01';
  }
  name = TM::TM__(StringLiteral_Materials,(MethodInfo *)0x0);
  iVar1 = (this->fields).numberOfSlotsPrPage;
  this_01 = (TabState *)func_?(TypeInfo__TabState);
  TabState::TabState__ctor(this_01,1,name,iVar1,(MethodInfo *)0x0);
  pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((pMVar2 != (MVNetworkGame *)0x0) &&
     (this_00 = (pMVar2->fields)._MaterialRepository_k__BackingField,
     this_00 != (MVMaterialRepository *)0x0)) {
    iVar1 = MVMaterialRepository::MVMaterialRepository_get_MaterialCount(this_00,(MethodInfo *)0x0);
    if (this_01 != (TabState *)0x0) {
      (this_01->fields).highestSlotIndex = iVar1 + -1;
      pTStack3 = this_01;
      _UNK_? = this_01;
      func_?();
      return;
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void OnMaterialChanged(Byte) */

void Assembly-CSharp.dll::MaterialsController::MaterialsController_OnMaterialChanged
               (MaterialsController *this,uint8_t id,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  pDVar1 = (this->fields).desktopCubeModelingController;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)pDVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    pDVar1 = (this->fields).desktopCubeModelingController;
    if (pDVar1 == (DesktopCubeModelingController *)0x0) {
      func_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    DesktopCubeModelingController::DesktopCubeModelingController_SetMaterial
              (pDVar1,id,(MethodInfo *)0x0);
  }
  pUVar4 = (this->fields).materialChange;
  if (pUVar4 != (UnityAction_1_System_Byte_ *)0x0) {
    (*(pUVar4->fields)._._.invoke_impl)();
  }
  return;
}


/* Void OnMaterialClicked(Byte) */

void Assembly-CSharp.dll::MaterialsController::MaterialsController_OnMaterialClicked
               (MaterialsController *this,uint8_t materialID,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&
                    MethodInfo__MaterialsController____c___OnMaterialClicked_b__16_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__MaterialsController____c);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).cubeModelingStateMachine;
  if (this_00 != (CubeModelingStateMachine *)0x0) {
    CubeModelingStateMachine::CubeModelingStateMachine_set_CurrentMaterialId
              (this_00,materialID,(MethodInfo *)0x0);
    this_01 = (this->fields).desktopCubeModelingController;
    if (this_01 != (DesktopCubeModelingController *)0x0) {
      DesktopCubeModelingController::DesktopCubeModelingController_SwitchToDefaultTool
                (this_01,(MethodInfo *)0x0);
      root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this,(MethodInfo *)0x0);
      if ((TypeInfo__MaterialsController____c->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      callbackFunction = TypeInfo__MaterialsController____c->static_fields->__9__16_0;
      if (callbackFunction == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
        if ((TypeInfo__MaterialsController____c->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        object = TypeInfo__MaterialsController____c->static_fields->__9;
        callbackFunction = (ExecuteEvents_EventFunction_1_IUIStack_ *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
        Object]::UnityAction_2_System_Object_System_Object___ctor
                  ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)object,
                   MethodInfo__MaterialsController____c___OnMaterialClicked_b__16_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   ,(MethodInfo *)0x0);
        TypeInfo__MaterialsController____c->static_fields->__9__16_0 = callbackFunction;
        func_?();
      }
      if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0)
      {
        func_?();
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                (root,(BaseEventData *)0x0,
                 (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                );
      return;
    }
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void OnPop() */

void Assembly-CSharp.dll::MaterialsController::MaterialsController_OnPop
               (MaterialsController *this,MethodInfo *method)

{
  pUVar1 = (this->fields).materialsPop;
  if (pUVar1 != (UnityAction *)0x0) {
    (*(pUVar1->fields)._._.invoke_impl)
              ((pUVar1->fields)._._.method_code,(pUVar1->fields)._._.method);
  }
  return;
}


/* Void PageTurned(Int32) */

void Assembly-CSharp.dll::MaterialsController::MaterialsController_PageTurned
               (MaterialsController *this,int32_t dir,MethodInfo *method)

{
  this_00 = (this->fields).tab;
  if (this_00 != (TabState *)0x0) {
    bVar1 = TabState::TabState_UpdatePage(this_00,dir,(MethodInfo *)0x0);
    if (bVar1 != 0) {
      MaterialsController_UpdateContent(this,(MethodInfo *)0x0);
    }
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void Push(UIPushOption, UnityAction) */

void Assembly-CSharp.dll::MaterialsController::MaterialsController_Push
               (MaterialsController *this,UIPushOption__Enum pushOption,UnityAction *onPop,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&
                    MethodInfo__MaterialsController____c__DisplayClass12_0___Push_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__MaterialsController____c__DisplayClass12_0);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__MaterialsController____c__DisplayClass12_0;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  if (value != (Object *)0x0) {
    value[1].klass = (Object__Class *)this;
    func_?(value + 1,this);
    value[1].monitor = (MonitorData *)pushOption;
    value[2].klass = (Object__Class *)onPop;
    func_?(value + 2,onPop);
    root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
    callbackFunction =
         (ExecuteEvents_EventFunction_1_System_Object_ *)
         func_?(
                        TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                        );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,value,
               MethodInfo__MaterialsController____c__DisplayClass12_0___Push_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
              (root,(BaseEventData *)0x0,callbackFunction,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
              );
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Transform SetActive() */

Transform *
Assembly-CSharp.dll::MaterialsController::MaterialsController_SetActive
          (MaterialsController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    DesktopCubeModelingController_MethodInfo__UnityEngine__Object__Instantiate<DesktopCubeModelingController>_DesktopCubeModelingController_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  pDVar1 = (this->fields).desktopCubeModelingControllerPrefab;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  pDVar1 = (DesktopCubeModelingController *)
           UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                     ((Object *)pDVar1,
                      DesktopCubeModelingController_MethodInfo__UnityEngine__Object__Instantiate<DesktopCubeModelingController>_DesktopCubeModelingController_
                     );
  (this->fields).desktopCubeModelingController = pDVar1;
  func_?(&(this->fields).desktopCubeModelingController,pDVar1);
  pDVar1 = (this->fields).desktopCubeModelingController;
  if (pDVar1 != (DesktopCubeModelingController *)0x0) {
    DesktopCubeModelingController::DesktopCubeModelingController_Initialize
              (pDVar1,(this->fields).cubeModelingStateMachine,(MethodInfo *)0x0);
    this_00 = (this->fields).cubeModelingStateMachine;
    if (this_00 != (CubeModelingStateMachine *)0x0) {
      CubeModelingStateMachine::CubeModelingStateMachine_get_CurrentMaterialId
                (this_00,(MethodInfo *)0x0);
      CubeModelingStateMachine::CubeModelingStateMachine_set_CurrentMaterialId
                (this_00,0,(MethodInfo *)0x0);
      if ((this->fields).desktopCubeModelingController != (DesktopCubeModelingController *)0x0) {
        if (pcRam_? == (code *)0x0) {
          pcRam_? = (code *)func_?();
        }
        pTVar2 = (Transform *)(*pcRam_?)();
        return pTVar2;
      }
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  pTVar2 = (Transform *)(*pcVar3)();
  return pTVar2;
}


/* Void ShowInventory(UIPushOption, Int32) */

void Assembly-CSharp.dll::MaterialsController::MaterialsController_ShowInventory
               (MaterialsController *this,UIPushOption__Enum pushOption,int32_t page,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&MethodInfo__MaterialsController__PageTurned_int_);
    func_?(&
                    InventoryController_MethodInfo__UnityEngine__Object__Instantiate<InventoryController>_InventoryController_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&
                    MethodInfo__MaterialsController____c___ShowInventory_b__17_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&
                    MethodInfo__MaterialsController____c__DisplayClass17_0___ShowInventory_b__1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__MaterialsController____c__DisplayClass17_0);
    func_?(&TypeInfo__MaterialsController____c);
    func_?(&TypeInfo__UnityEngine__Events__UnityAction<int>);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__MaterialsController____c__DisplayClass17_0;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  if (value == (Object *)0x0) {
code_?:
    func_?();
  }
  else {
    value[1].klass = (Object__Class *)this;
    func_?(value + 1,this);
    value[1].monitor = (MonitorData *)pushOption;
    pIVar1 = (this->fields).inventoryControllerPrefab;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    pIVar1 = (InventoryController *)
             UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                       ((Object *)pIVar1,
                        InventoryController_MethodInfo__UnityEngine__Object__Instantiate<InventoryController>_InventoryController_
                       );
    (this->fields).inventoryController = pIVar1;
    func_?(&(this->fields).inventoryController,pIVar1);
    pIVar1 = (this->fields).inventoryController;
    if (pIVar1 == (InventoryController *)0x0) goto code_?;
    pUVar2 = (pIVar1->fields).OnPageTurned;
    this_01 = (UnityAction_1_System_Int32Enum_ *)
              func_?(TypeInfo__UnityEngine__Events__UnityAction<int>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
    UnityAction_1_System_Int32Enum___ctor
              (this_01,(Object *)this,MethodInfo__MaterialsController__PageTurned_int_,
               (MethodInfo *)0x0);
    pDVar3 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)pUVar2,(Delegate *)this_01,(MethodInfo *)0x0);
    if (pDVar3 == (Delegate *)0x0) {
      (pIVar1->fields).OnPageTurned = (UnityAction_1_System_Int32_ *)0x0;
code_?:
      func_?();
      pIVar1 = (this->fields).inventoryController;
      numberOfSlots = (this->fields).numberOfSlotsPrPage;
      if (pIVar1 != (InventoryController *)0x0) {
        (pIVar1->fields).numberOfSlots = numberOfSlots;
        this_00 = (pIVar1->fields).inventorySlots;
        if (this_00 != (InventorySlots *)0x0) {
          InventorySlots::InventorySlots_Initialize(this_00,numberOfSlots,(MethodInfo *)0x0);
          pTVar4 = (this->fields).tab;
          if (pTVar4 != (TabState *)0x0) {
            (pTVar4->fields).currentPage = page;
            pTVar4 = (this->fields).tab;
            if (((pTVar4 != (TabState *)0x0) &&
                (pIVar1 = (this->fields).inventoryController, pIVar1 != (InventoryController *)0x0))
               && (pTVar5 = (pIVar1->fields).tabMenu, pTVar5 != (TabMenuBase *)0x0)) {
              (*(code *)(pTVar5->klass->vtable).__unknown.method)
                        (pTVar5,0,(pTVar4->fields).name,
                         (pTVar5->klass->vtable).__unknown_1.methodPtr);
              pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                 ((Component *)this,(MethodInfo *)0x0);
              if ((TypeInfo__MaterialsController____c->_1).cctor_finished_or_no_cctor == 0) {
                func_?(TypeInfo__MaterialsController____c);
              }
              callbackFunction = TypeInfo__MaterialsController____c->static_fields->__9__17_0;
              if (callbackFunction == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
                if ((TypeInfo__MaterialsController____c->_1).cctor_finished_or_no_cctor == 0) {
                  func_?(TypeInfo__MaterialsController____c);
                }
                object = TypeInfo__MaterialsController____c->static_fields->__9;
                callbackFunction =
                     (ExecuteEvents_EventFunction_1_IUIStack_ *)
                     func_?(
                                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                                    );
                UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System
                ::Object]::UnityAction_2_System_Object_System_Object___ctor
                          ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,
                           (Object *)object,
                           MethodInfo__MaterialsController____c___ShowInventory_b__17_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                           ,(MethodInfo *)0x0);
                TypeInfo__MaterialsController____c->static_fields->__9__17_0 = callbackFunction;
                func_?(&TypeInfo__MaterialsController____c->static_fields->__9__17_0,
                                callbackFunction);
              }
              if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).
                  cctor_finished_or_no_cctor == 0) {
                func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
              }
              UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
              ExecuteEvents_ExecuteHierarchy
                        (pGVar6,(BaseEventData *)0x0,
                         (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction,
                         UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                        );
              pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                 ((Component *)this,(MethodInfo *)0x0);
              object_00 = 
              TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
              ;
              callbackFunction_00 =
                   (ExecuteEvents_EventFunction_1_System_Object_ *)func_?();
              UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
              Object]::UnityAction_2_System_Object_System_Object___ctor
                        ((UnityAction_2_System_Object_System_Object_ *)callbackFunction_00,
                         (Object *)object_00,
                         MethodInfo__MaterialsController____c__DisplayClass17_0___ShowInventory_b__1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                         ,(MethodInfo *)0x0);
              UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
              ExecuteEvents_ExecuteHierarchy
                        (pGVar6,(BaseEventData *)0x0,callbackFunction_00,
                         UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                        );
              MaterialsController_UpdateContent(this,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
      goto code_?;
    }
    pUVar2 = (UnityAction_1_System_Int32_ *)func_?();
    if (pUVar2 == (UnityAction_1_System_Int32_ *)0x0) goto code_?;
    (pIVar1->fields).OnPageTurned = pUVar2;
    iVar7 = func_?();
    if (iVar7 != 0) goto code_?;
  }
  func_?();
code_?:
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void ShowMaterialInventory() */

void Assembly-CSharp.dll::MaterialsController::MaterialsController_ShowMaterialInventory
               (MaterialsController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  x = (this->fields).inventoryController;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)x,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    pTVar2 = (this->fields).tab;
    if (pTVar2 == (TabState *)0x0) {
      func_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    MaterialsController_ShowInventory
              (this,UIPushOption__Enum_Blocking,(pTVar2->fields).currentPage,(MethodInfo *)0x0);
  }
  return;
}


/* Void ShowMaterialInventoryFirstPage() */

void Assembly-CSharp.dll::MaterialsController::MaterialsController_ShowMaterialInventoryFirstPage
               (MaterialsController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  x = (this->fields).inventoryController;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)x,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    MaterialsController_ShowInventory(this,UIPushOption__Enum_Blocking,1,(MethodInfo *)0x0);
  }
  return;
}


/* Void UpdateContent() */

void Assembly-CSharp.dll::MaterialsController::MaterialsController_UpdateContent
               (MaterialsController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MaterialViewItem_MethodInfo__UnityEngine__Object__Instantiate<MaterialViewItem>_MaterialViewItem_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  pIVar1 = (this->fields).inventoryController;
  if ((pIVar1 != (InventoryController *)0x0) &&
     (pIVar2 = (pIVar1->fields).inventorySlots, pIVar2 != (InventorySlots *)0x0)) {
    InventorySlots::InventorySlots_Clear(pIVar2,(MethodInfo *)0x0);
    pTVar3 = (this->fields).tab;
    pIVar1 = (this->fields).inventoryController;
    if (pTVar3 != (TabState *)0x0) {
      iVar4 = (pTVar3->fields).currentPage;
      iVar5 = TabState::TabState_get_MaxPages(pTVar3,(MethodInfo *)0x0);
      if ((pIVar1 != (InventoryController *)0x0) &&
         (pTVar6 = (pIVar1->fields).tabMenu, pTVar6 != (TabMenuBase *)0x0)) {
        (*(code *)(pTVar6->klass->vtable).__unknown_1.method)
                  (pTVar6,0,iVar4,iVar5,pTVar6->klass[1]._0.image);
        pIVar2 = (pIVar1->fields).inventorySlots;
        if (pIVar2 != (InventorySlots *)0x0) {
          InventorySlots::InventorySlots_UpdateAbsoluteSlotValues
                    (pIVar2,iVar4,(pIVar1->fields).numberOfSlots,(MethodInfo *)0x0);
          uVar7 = 0;
          pMVar8 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          if (pMVar8 != (MVNetworkGame *)0x0) {
            while (pMVar9 = (pMVar8->fields)._MaterialRepository_k__BackingField,
                  pMVar9 != (MVMaterialRepository *)0x0) {
              iVar4 = MVMaterialRepository::MVMaterialRepository_get_MaterialCount
                                 (pMVar9,(MethodInfo *)0x0);
              if (iVar4 <= (int)(uVar7 >> 8)) {
                return;
              }
              pTVar3 = (this->fields).tab;
              if (pTVar3 == (TabState *)0x0) break;
              bVar10 = TabState::TabState_SlotIndexIsInRange(pTVar3,uVar7 & 0xff,(MethodInfo *)0x0);
              uVar11 = uVar7;
              if (bVar10 != 0) {
                pMVar8 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
                if ((pMVar8 == (MVNetworkGame *)0x0) ||
                   (pMVar9 = (pMVar8->fields)._MaterialRepository_k__BackingField,
                   pMVar9 == (MVMaterialRepository *)0x0)) break;
                this_01 = MVMaterialRepository::MVMaterialRepository_GetMaterial
                                    (pMVar9,0,(MethodInfo *)0x0);
                pMVar12 = (this->fields).materialViewItemPrefab;
                if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
                  func_?();
                }
                pMVar12 = (MaterialViewItem *)
                          UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                                    ((Object *)pMVar12,
                                     MaterialViewItem_MethodInfo__UnityEngine__Object__Instantiate<MaterialViewItem>_MaterialViewItem_
                                    );
                if (this_01 == (MVMaterial *)0x0) break;
                texture2D = (this_01->fields)._ButtonTexture_k__BackingField;
                bVar10 = (this_01->fields).isUnlocked;
                uVar11 = (uint)CONCAT11(bVar10,(uint8_t)uVar7);
                isAvailable = MVMaterial::MVMaterial_get_IsAvailable(this_01,(MethodInfo *)0x0);
                this_00 = (this->fields).cubeModelingStateMachine;
                if ((this_00 == (CubeModelingStateMachine *)0x0) ||
                   (uVar13 = CubeModelingStateMachine::CubeModelingStateMachine_get_CurrentMaterialId
                                      (this_00,(MethodInfo *)0x0),
                   pMVar12 == (MaterialViewItem *)0x0)) break;
                MaterialViewItem::MaterialViewItem_Initialize
                          (pMVar12,0,bVar10 == 0,texture2D,isAvailable,(uint8_t)uVar7 == uVar13,
                           (MethodInfo *)0x0);
                pIVar1 = (this->fields).inventoryController;
                item = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                 ((Component *)pMVar12,(MethodInfo *)0x0);
                if (pIVar1 == (InventoryController *)0x0) break;
                InventoryController::InventoryController_AddObject
                          (pIVar1,item,
                           (int32_t)((longlong)(ulonglong)(uVar7 & 0xff) %
                                    (longlong)(this->fields).numberOfSlotsPrPage),(MethodInfo *)0x0)
                ;
              }
              cVar14 = (char)uVar11 + '\x01';
              uVar7 = (uint)CONCAT11(cVar14,cVar14);
              pMVar8 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
              if (pMVar8 == (MVNetworkGame *)0x0) break;
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
  return;
}

