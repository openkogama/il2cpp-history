
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
  if (this_01 != (TabState *)0x0) {
    TabState::TabState__ctor(this_01,1,name,iVar1,(MethodInfo *)0x0);
    pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if ((pMVar2 != (MVNetworkGame *)0x0) &&
       (this_00 = (pMVar2->fields)._MaterialRepository_k__BackingField,
       this_00 != (MVMaterialRepository *)0x0)) {
      iVar1 = MVMaterialRepository::MVMaterialRepository_get_MaterialCount
                        (this_00,(MethodInfo *)0x0);
      (this_01->fields).highestSlotIndex = iVar1 + -1;
      (this->fields).tab = this_01;
      func_?();
      return;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
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
  if (this_01 != (TabState *)0x0) {
    TabState::TabState__ctor(this_01,1,name,iVar1,(MethodInfo *)0x0);
    pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if ((pMVar2 != (MVNetworkGame *)0x0) &&
       (this_00 = (pMVar2->fields)._MaterialRepository_k__BackingField,
       this_00 != (MVMaterialRepository *)0x0)) {
      iVar1 = MVMaterialRepository::MVMaterialRepository_get_MaterialCount
                        (this_00,(MethodInfo *)0x0);
      (this_01->fields).highestSlotIndex = iVar1 + -1;
      (this->fields).tab = this_01;
      func_?();
      return;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
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
  if ((this->fields).materialChange != (UnityAction_1_System_Byte_ *)0x0) {
    (*(((this->fields).materialChange)->fields)._._.invoke_impl)();
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
      if (callbackFunction == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)object,
                 MethodInfo__MaterialsController____c___OnMaterialClicked_b__16_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      TypeInfo__MaterialsController____c->static_fields->__9__16_0 = callbackFunction;
      func_?(&TypeInfo__MaterialsController____c->static_fields->__9__16_0,callbackFunction
                     );
    }
    if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
              (root,(BaseEventData *)0x0,
               (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
              );
    return;
  }
code_?:
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void OnPop() */

void Assembly-CSharp.dll::MaterialsController::MaterialsController_OnPop
               (MaterialsController *this,MethodInfo *method)

{
  if ((this->fields).materialsPop != (UnityAction *)0x0) {
    pUVar1 = (this->fields).materialsPop;
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
  value = (Object *)func_?(TypeInfo__MaterialsController____c__DisplayClass12_0);
  if (value != (Object *)0x0) {
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              (value,ExceptionArgument__Enum_obj,unaff_EDI);
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
    if (callbackFunction != (ExecuteEvents_EventFunction_1_System_Object_ *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,value,
                 MethodInfo__MaterialsController____c__DisplayClass12_0___Push_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0)
      {
        func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                (root,(BaseEventData *)0x0,callbackFunction,
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
    pCVar2 = (this->fields).cubeModelingStateMachine;
    if (pCVar2 != (CubeModelingStateMachine *)0x0) {
      CubeModelingStateMachine::CubeModelingStateMachine_get_CurrentMaterialId
                (pCVar2,(MethodInfo *)0x0);
      CubeModelingStateMachine::CubeModelingStateMachine_set_CurrentMaterialId
                (pCVar2,0,(MethodInfo *)0x0);
      pCVar2 = (this->fields).cubeModelingStateMachine;
      if (pCVar2 != (CubeModelingStateMachine *)0x0) {
        CubeModelingStateMachine::CubeModelingStateMachine_get_CurrentMaterialId
                  (pCVar2,(MethodInfo *)0x0);
        (*(this->klass->vtable).OnMaterialChanged_1.methodPtr)();
        if ((this->fields).desktopCubeModelingController != (DesktopCubeModelingController *)0x0) {
          if (pcRam_? == (code *)0x0) {
            pcRam_? = (code *)func_?();
          }
          pTVar3 = (Transform *)(*pcRam_?)();
          return pTVar3;
        }
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  pTVar3 = (Transform *)(*pcVar4)();
  return pTVar3;
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
  value = (Object *)func_?(TypeInfo__MaterialsController____c__DisplayClass17_0);
  if (value != (Object *)0x0) {
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              (value,ExceptionArgument__Enum_obj,unaff_EDI);
    value[1].klass = (Object__Class *)this;
    func_?(value + 1,this);
    value[1].monitor = (MonitorData *)pushOption;
    unaff_EBX = (Delegate *)(this->fields).inventoryControllerPrefab;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    pIVar1 = (InventoryController *)
             UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                       ((Object *)unaff_EBX,
                        InventoryController_MethodInfo__UnityEngine__Object__Instantiate<InventoryController>_InventoryController_
                       );
    (this->fields).inventoryController = pIVar1;
    func_?(&(this->fields).inventoryController,pIVar1);
    pIVar1 = (this->fields).inventoryController;
    if (pIVar1 != (InventoryController *)0x0) {
      a = (pIVar1->fields).OnPageTurned;
      this_00 = (UnityAction_1_System_Int32Enum_ *)
                func_?(TypeInfo__UnityEngine__Events__UnityAction<int>);
      unaff_EBX = (Delegate *)0x0;
      if (this_00 != (UnityAction_1_System_Int32Enum_ *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
        UnityAction_1_System_Int32Enum___ctor
                  (this_00,(Object *)this,MethodInfo__MaterialsController__PageTurned_int_,
                   (MethodInfo *)0x0);
        unaff_EBX = mscorlib.dll::System::Delegate::Delegate_Combine
                              ((Delegate *)a,(Delegate *)this_00,(MethodInfo *)0x0);
        if (unaff_EBX == (Delegate *)0x0) {
          (pIVar1->fields).OnPageTurned = (UnityAction_1_System_Int32_ *)0x0;
        }
        else {
          puVar2 = &UNK_?;
          iVar3 = func_?(unaff_EBX);
          if (iVar3 == 0) goto code_?;
          *(int *)(puVar2 + 0x1c) = iVar3;
          pIVar1 = (InventoryController *)&UNK_?;
          iVar3 = func_?(unaff_EBX);
          if (iVar3 == 0) goto code_?;
        }
        func_?(&(pIVar1->fields).OnPageTurned);
        pIVar1 = (this->fields).inventoryController;
        if (pIVar1 != (InventoryController *)0x0) {
          InventoryController::InventoryController_Initialize
                    (pIVar1,(this->fields).numberOfSlotsPrPage,(MethodInfo *)0x0);
          pTVar4 = (this->fields).tab;
          if (pTVar4 != (TabState *)0x0) {
            (pTVar4->fields).currentPage = page;
            pTVar4 = (this->fields).tab;
            if ((pTVar4 != (TabState *)0x0) &&
               (pIVar1 = (this->fields).inventoryController, pIVar1 != (InventoryController *)0x0))
            {
              InventoryController::InventoryController_AddTab
                        (pIVar1,0,(pTVar4->fields).name,(MethodInfo *)0x0);
              UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
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
                unaff_EBX = (Delegate *)0x0;
                if (callbackFunction == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0)
                goto code_?;
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
                        ((GameObject *)callbackFunction,(BaseEventData *)0x0,
                         (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction,
                         UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                        );
              root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                               ((Component *)this,(MethodInfo *)0x0);
              callbackFunction_00 =
                   (ExecuteEvents_EventFunction_1_System_Object_ *)
                   func_?(
                                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                                  );
              unaff_EBX = (Delegate *)0x0;
              if (callbackFunction_00 != (ExecuteEvents_EventFunction_1_System_Object_ *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System
                ::Object]::UnityAction_2_System_Object_System_Object___ctor
                          ((UnityAction_2_System_Object_System_Object_ *)callbackFunction_00,value,
                           MethodInfo__MaterialsController____c__DisplayClass17_0___ShowInventory_b__1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                           ,(MethodInfo *)0x0);
                UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                ExecuteEvents_ExecuteHierarchy
                          (root,(BaseEventData *)0x0,callbackFunction_00,
                           UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                          );
                MaterialsController_UpdateContent(this,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
    }
  }
code_?:
  func_?();
code_?:
  func_?(unaff_EBX);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
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
  pMVar1 = this;
  if (cRam_? == '\0') {
    func_?(&
                    MaterialViewItem_MethodInfo__UnityEngine__Object__Instantiate<MaterialViewItem>_MaterialViewItem_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  pIVar2 = (this->fields).inventoryController;
  if (pIVar2 != (InventoryController *)0x0) {
    InventoryController::InventoryController_Clear(pIVar2,(MethodInfo *)0x0);
    pTVar3 = (this->fields).tab;
    pIVar2 = (this->fields).inventoryController;
    if (pTVar3 != (TabState *)0x0) {
      iVar4 = (pTVar3->fields).currentPage;
      maxPages = TabState::TabState_get_MaxPages(pTVar3,(MethodInfo *)0x0);
      if (pIVar2 != (InventoryController *)0x0) {
        InventoryController::InventoryController_SelectTab
                  (pIVar2,0,iVar4,maxPages,(MethodInfo *)0x0);
        uVar5 = 0;
        pMVar6 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if (pMVar6 != (MVNetworkGame *)0x0) {
          while (pMVar7 = (pMVar6->fields)._MaterialRepository_k__BackingField,
                pMVar7 != (MVMaterialRepository *)0x0) {
            iVar4 = MVMaterialRepository::MVMaterialRepository_get_MaterialCount
                              (pMVar7,(MethodInfo *)0x0);
            if (iVar4 <= (int)(uVar5 >> 8)) {
              return;
            }
            pTVar3 = (pMVar1->fields).tab;
            if (pTVar3 == (TabState *)0x0) break;
            bVar8 = TabState::TabState_SlotIndexIsInRange(pTVar3,uVar5 & 0xff,(MethodInfo *)0x0);
            uVar9 = uVar5;
            if (bVar8 != 0) {
              pMVar6 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
              if ((pMVar6 == (MVNetworkGame *)0x0) ||
                 (pMVar7 = (pMVar6->fields)._MaterialRepository_k__BackingField,
                 pMVar7 == (MVMaterialRepository *)0x0)) break;
              this_01 = MVMaterialRepository::MVMaterialRepository_GetMaterial
                                  (pMVar7,0x7d,(MethodInfo *)0x0);
              pMVar10 = (pMVar1->fields).materialViewItemPrefab;
              if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
                func_?();
              }
              pMVar10 = (MaterialViewItem *)
                       UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                                 ((Object *)pMVar10,
                                  MaterialViewItem_MethodInfo__UnityEngine__Object__Instantiate<MaterialViewItem>_MaterialViewItem_
                                 );
              if (this_01 == (MVMaterial *)0x0) break;
              texture2D = (this_01->fields)._ButtonTexture_k__BackingField;
              bVar8 = (this_01->fields).isUnlocked;
              uVar9 = (uint)CONCAT11(bVar8,(uint8_t)uVar5);
              isAvailable = MVMaterial::MVMaterial_get_IsAvailable(this_01,(MethodInfo *)0x0);
              this_00 = (pMVar1->fields).cubeModelingStateMachine;
              if ((this_00 == (CubeModelingStateMachine *)0x0) ||
                 (uVar11 = CubeModelingStateMachine::CubeModelingStateMachine_get_CurrentMaterialId
                                    (this_00,(MethodInfo *)0x0), pMVar10 == (MaterialViewItem *)0x0))
              break;
              MaterialViewItem::MaterialViewItem_Initialize
                        (pMVar10,0x7d,bVar8 == 0,texture2D,isAvailable,(uint8_t)uVar5 == uVar11,
                         (MethodInfo *)0x0);
              pIVar2 = (pMVar1->fields).inventoryController;
              item = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                               ((Component *)pMVar10,(MethodInfo *)0x0);
              if (pIVar2 == (InventoryController *)0x0) break;
              InventoryController::InventoryController_AddObject
                        (pIVar2,item,
                         (int32_t)((longlong)(ulonglong)(uVar5 & 0xff) %
                                  (longlong)(pMVar1->fields).numberOfSlotsPrPage),(MethodInfo *)0x0)
              ;
            }
            bVar12 = (char)uVar9 + 1;
            this = (MaterialsController *)(uint)bVar12;
            uVar5 = (uint)CONCAT11(bVar12,bVar12);
            pMVar6 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)this);
            if (pMVar6 == (MVNetworkGame *)0x0) break;
          }
        }
      }
    }
  }
  func_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}

