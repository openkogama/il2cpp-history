
/* Void Initialize(CubeModelingStateMachine) */

void Assembly-CSharp.dll::MaterialsController::MaterialsController_Initialize
               (MaterialsController *this,CubeModelingStateMachine *cubeModelingStateMachine,
               MethodInfo *method)

{
  ppCVar1 = &(this->fields).cubeModelingStateMachine;
  *ppCVar1 = cubeModelingStateMachine;
  func_?(ppCVar1,cubeModelingStateMachine);
  if (cRam_? == '\0') {
    func_?(&TypeInfo__TabState);
    func_?(&StringLiteral_Materials);
    cRam_? = '\x01';
  }
  name = TM::TM__(StringLiteral_Materials,(MethodInfo *)0x0);
  iVar2 = (this->fields).numberOfSlotsPrPage;
  this_01 = (TabState *)func_?(TypeInfo__TabState);
  TabState::TabState__ctor(this_01,1,name,iVar2,(MethodInfo *)0x0);
  pMVar3 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((pMVar3 != (MVNetworkGame *)0x0) &&
     (this_00 = (pMVar3->fields)._MaterialRepository_k__BackingField,
     this_00 != (MVMaterialRepository *)0x0)) {
    iVar2 = MVMaterialRepository::MVMaterialRepository_get_MaterialCount(this_00,(MethodInfo *)0x0);
    if (this_01 != (TabState *)0x0) {
      (this_01->fields).highestSlotIndex = iVar2 + -1;
      ppTStack4 = &(this->fields).tab;
      *ppTStack4 = this_01;
      pTStack5 = this_01;
      func_?();
      return;
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
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
  x = (this->fields).desktopCubeModelingController;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)x,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar1 != 0) {
    this_00 = (DesktopCubeModelingControllerCubeTutorial *)
              (this->fields).desktopCubeModelingController;
    if (this_00 == (DesktopCubeModelingControllerCubeTutorial *)0x0) {
      func_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    DesktopCubeModelingControllerCubeTutorial::
    DesktopCubeModelingControllerCubeTutorial_DoSetMaterial(this_00,id,(MethodInfo *)0x0);
  }
  pUVar3 = (this->fields).materialChange;
  if (pUVar3 != (UnityAction_1_System_Byte_ *)0x0) {
    (*(pUVar3->fields)._._.invoke_impl)();
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
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
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
  ppDVar2 = &(this->fields).desktopCubeModelingController;
  *ppDVar2 = pDVar1;
  func_?(ppDVar2,pDVar1);
  if (*ppDVar2 != (DesktopCubeModelingController *)0x0) {
    DesktopCubeModelingController::DesktopCubeModelingController_Initialize
              (*ppDVar2,(this->fields).cubeModelingStateMachine,(MethodInfo *)0x0);
    pCVar3 = (this->fields).cubeModelingStateMachine;
    if (pCVar3 != (CubeModelingStateMachine *)0x0) {
      value = CubeModelingStateMachine::CubeModelingStateMachine_get_CurrentMaterialId
                        (pCVar3,(MethodInfo *)0x0);
      CubeModelingStateMachine::CubeModelingStateMachine_set_CurrentMaterialId
                (pCVar3,value,(MethodInfo *)0x0);
      pCVar3 = (this->fields).cubeModelingStateMachine;
      if (pCVar3 != (CubeModelingStateMachine *)0x0) {
        CubeModelingStateMachine::CubeModelingStateMachine_get_CurrentMaterialId
                  (pCVar3,(MethodInfo *)0x0);
        (*(code *)(this->klass->vtable).OnMaterialChanged_1.method)();
        if (*ppDVar2 != (DesktopCubeModelingController *)0x0) {
          if (pcRam_? == (code *)0x0) {
            pcRam_? = (code *)func_?();
          }
          pTVar4 = (Transform *)(*pcRam_?)();
          return pTVar4;
        }
      }
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  pTVar4 = (Transform *)(*pcVar5)();
  return pTVar4;
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
  pOVar1 = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            (pOVar1,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  if (pOVar1 == (Object *)0x0) {
code_?:
    func_?();
  }
  else {
    pOVar1[1].klass = (Object__Class *)this;
    func_?(pOVar1 + 1,this);
    pOVar1[1].monitor = (MonitorData *)pushOption;
    pIVar2 = (this->fields).inventoryControllerPrefab;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    pIVar2 = (InventoryController *)
             UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                       ((Object *)pIVar2,
                        InventoryController_MethodInfo__UnityEngine__Object__Instantiate<InventoryController>_InventoryController_
                       );
    ppIVar3 = &(this->fields).inventoryController;
    *ppIVar3 = pIVar2;
    func_?(ppIVar3,pIVar2);
    pIVar2 = *ppIVar3;
    if (pIVar2 == (InventoryController *)0x0) goto code_?;
    pUVar4 = (pIVar2->fields).OnPageTurned;
    this_00 = (UnityAction_1_System_Int32Enum_ *)
              func_?(TypeInfo__UnityEngine__Events__UnityAction<int>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
    UnityAction_1_System_Int32Enum___ctor
              (this_00,(Object *)this,MethodInfo__MaterialsController__PageTurned_int_,
               (MethodInfo *)0x0);
    pDVar5 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)pUVar4,(Delegate *)this_00,(MethodInfo *)0x0);
    if (pDVar5 == (Delegate *)0x0) {
      (pIVar2->fields).OnPageTurned = (UnityAction_1_System_Int32_ *)0x0;
code_?:
      func_?();
      pIVar2 = (this->fields).inventoryController;
      if (pIVar2 != (InventoryController *)0x0) {
        InventoryController::InventoryController_Initialize
                  (pIVar2,(this->fields).numberOfSlotsPrPage,(MethodInfo *)0x0);
        pTVar6 = (this->fields).tab;
        if (pTVar6 != (TabState *)0x0) {
          (pTVar6->fields).currentPage = page;
          pTVar6 = (this->fields).tab;
          if ((pTVar6 != (TabState *)0x0) &&
             (pIVar2 = (this->fields).inventoryController, pIVar2 != (InventoryController *)0x0)) {
            InventoryController::InventoryController_AddTab
                      (pIVar2,0,(pTVar6->fields).name,(MethodInfo *)0x0);
            pGVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                               ((Component *)this,(MethodInfo *)0x0);
            if ((TypeInfo__MaterialsController____c->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            callbackFunction = TypeInfo__MaterialsController____c->static_fields->__9__17_0;
            if (callbackFunction == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
              if ((TypeInfo__MaterialsController____c->_1).cctor_finished_or_no_cctor == 0) {
                func_?();
              }
              object = TypeInfo__MaterialsController____c->static_fields->__9;
              callbackFunction = (ExecuteEvents_EventFunction_1_IUIStack_ *)func_?();
              UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
              Object]::UnityAction_2_System_Object_System_Object___ctor
                        ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,
                         (Object *)object,
                         MethodInfo__MaterialsController____c___ShowInventory_b__17_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                         ,(MethodInfo *)0x0);
              TypeInfo__MaterialsController____c->static_fields->__9__17_0 = callbackFunction;
              pGVar7 = (GameObject *)&UNK_?;
              func_?(&TypeInfo__MaterialsController____c->static_fields->__9__17_0);
            }
            if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor
                == 0) {
              func_?();
            }
            pOVar1 = (Object *)&UNK_?;
            UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
            ExecuteEvents_ExecuteHierarchy
                      (pGVar7,(BaseEventData *)0x0,
                       (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction,
                       UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                      );
            pGVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                               ((Component *)this,(MethodInfo *)0x0);
            callbackFunction_00 = (ExecuteEvents_EventFunction_1_System_Object_ *)func_?();
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
            Object]::UnityAction_2_System_Object_System_Object___ctor
                      ((UnityAction_2_System_Object_System_Object_ *)callbackFunction_00,pOVar1,
                       MethodInfo__MaterialsController____c__DisplayClass17_0___ShowInventory_b__1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                       ,(MethodInfo *)0x0);
            UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
            ExecuteEvents_ExecuteHierarchy
                      (pGVar7,(BaseEventData *)0x0,callbackFunction_00,
                       UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                      );
            MaterialsController_UpdateContent(this,(MethodInfo *)0x0);
            return;
          }
        }
      }
      goto code_?;
    }
    pUVar4 = (UnityAction_1_System_Int32_ *)func_?();
    if (pUVar4 == (UnityAction_1_System_Int32_ *)0x0) goto code_?;
    (pIVar2->fields).OnPageTurned = pUVar4;
    iVar8 = func_?();
    if (iVar8 != 0) goto code_?;
  }
  func_?();
code_?:
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
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
  if (pIVar1 != (InventoryController *)0x0) {
    InventoryController::InventoryController_Clear(pIVar1,(MethodInfo *)0x0);
    pTVar2 = (this->fields).tab;
    pIVar1 = (this->fields).inventoryController;
    if (pTVar2 != (TabState *)0x0) {
      iVar3 = (pTVar2->fields).currentPage;
      maxPages = TabState::TabState_get_MaxPages(pTVar2,(MethodInfo *)0x0);
      if (pIVar1 != (InventoryController *)0x0) {
        InventoryController::InventoryController_SelectTab
                  (pIVar1,0,iVar3,maxPages,(MethodInfo *)0x0);
        uVar4 = 0;
        pMVar5 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if (pMVar5 != (MVNetworkGame *)0x0) {
          while (pMVar6 = (pMVar5->fields)._MaterialRepository_k__BackingField,
                pMVar6 != (MVMaterialRepository *)0x0) {
            iVar3 = MVMaterialRepository::MVMaterialRepository_get_MaterialCount
                              (pMVar6,(MethodInfo *)0x0);
            if (iVar3 <= (int)(uVar4 >> 8)) {
              return;
            }
            pTVar2 = (this->fields).tab;
            if (pTVar2 == (TabState *)0x0) break;
            slotIndex = uVar4 & 0xff;
            bVar7 = TabState::TabState_SlotIndexIsInRange(pTVar2,slotIndex,(MethodInfo *)0x0);
            if (bVar7 != 0) {
              pMVar5 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
              if ((pMVar5 == (MVNetworkGame *)0x0) ||
                 (pMVar6 = (pMVar5->fields)._MaterialRepository_k__BackingField,
                 pMVar6 == (MVMaterialRepository *)0x0)) break;
              this_01 = MVMaterialRepository::MVMaterialRepository_GetMaterial
                                  (pMVar6,(uint8_t)pTVar2,(MethodInfo *)0x0);
              pMVar8 = (this->fields).materialViewItemPrefab;
              if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
                func_?();
              }
              pMVar8 = (MaterialViewItem *)
                       UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                                 ((Object *)pMVar8,
                                  MaterialViewItem_MethodInfo__UnityEngine__Object__Instantiate<MaterialViewItem>_MaterialViewItem_
                                 );
              if (this_01 == (MVMaterial *)0x0) break;
              texture2D = (this_01->fields)._ButtonTexture_k__BackingField;
              bVar7 = (this_01->fields).isUnlocked;
              uVar9 = (uint8_t)uVar4;
              uVar4 = (uint)CONCAT11(bVar7,uVar9);
              isAvailable = MVMaterial::MVMaterial_get_IsAvailable(this_01,(MethodInfo *)0x0);
              this_00 = (this->fields).cubeModelingStateMachine;
              if ((this_00 == (CubeModelingStateMachine *)0x0) ||
                 (uVar10 = CubeModelingStateMachine::CubeModelingStateMachine_get_CurrentMaterialId
                                    (this_00,(MethodInfo *)0x0), pMVar8 == (MaterialViewItem *)0x0))
              break;
              MaterialViewItem::MaterialViewItem_Initialize
                        (pMVar8,(uint8_t)pTVar2,bVar7 == 0,texture2D,isAvailable,uVar9 == uVar10,
                         (MethodInfo *)0x0);
              pIVar1 = (this->fields).inventoryController;
              item = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                               ((Component *)pMVar8,(MethodInfo *)0x0);
              if (pIVar1 == (InventoryController *)0x0) break;
              InventoryController::InventoryController_AddObject
                        (pIVar1,item,(int)slotIndex % (this->fields).numberOfSlotsPrPage,
                         (MethodInfo *)0x0);
            }
            cVar11 = (char)uVar4 + '\x01';
            uVar4 = (uint)CONCAT11(cVar11,cVar11);
            pMVar5 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
            if (pMVar5 == (MVNetworkGame *)0x0) break;
          }
        }
      }
    }
  }
  func_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}

