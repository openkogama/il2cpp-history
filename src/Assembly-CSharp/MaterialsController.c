
/* Void Initialize(CubeModelingStateMachine) */

void Assembly-CSharp.dll::MaterialsController::MaterialsController_Initialize
               (MaterialsController *this,CubeModelingStateMachine *cubeModelingStateMachine,
               MethodInfo *method)

{
  bVar1 = cRam_? == '\0';
  (this->fields).cubeModelingStateMachine = cubeModelingStateMachine;
  if (bVar1) {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  name = TM::TM__(StringLiteral_Materials,(MethodInfo *)0x0);
  iVar2 = (this->fields).numberOfSlotsPrPage;
  this_00 = (TabState *)func_?(TypeInfo__TabState);
  TabState::TabState__ctor(this_00,name,iVar2,(MethodInfo *)0x0);
  (this->fields).tab = this_00;
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?();
  }
  this_01 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (this_01 != (MVNetworkGame *)0x0) {
    this_02 = DayNightCycle::DayNightCycle_get_CurrentMoonParam
                        ((DayNightCycle *)this_01,(MethodInfo *)0x0);
    if (this_02 != (CelestialParam *)0x0) {
      iVar2 = MVMaterialRepository::MVMaterialRepository_get_MaterialCount
                        ((MVMaterialRepository *)this_02,(MethodInfo *)0x0);
      if (this_00 != (TabState *)0x0) {
        (this_00->fields).highestSlotIndex = iVar2 + -1;
        return;
      }
    }
  }
  uStack3 = 0;
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void InitializeMaterialInventoryData() */

void Assembly-CSharp.dll::MaterialsController::MaterialsController_InitializeMaterialInventoryData
               (MaterialsController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  name = TM::TM__(StringLiteral_Materials,(MethodInfo *)0x0);
  iVar1 = (this->fields).numberOfSlotsPrPage;
  this_00 = (TabState *)func_?(TypeInfo__TabState);
  TabState::TabState__ctor(this_00,name,iVar1,(MethodInfo *)0x0);
  (this->fields).tab = this_00;
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?();
  }
  this_01 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (this_01 != (MVNetworkGame *)0x0) {
    this_02 = DayNightCycle::DayNightCycle_get_CurrentMoonParam
                        ((DayNightCycle *)this_01,(MethodInfo *)0x0);
    if (this_02 != (CelestialParam *)0x0) {
      iVar1 = MVMaterialRepository::MVMaterialRepository_get_MaterialCount
                        ((MVMaterialRepository *)this_02,(MethodInfo *)0x0);
      if (this_00 != (TabState *)0x0) {
        (this_00->fields).highestSlotIndex = iVar1 + -1;
        return;
      }
    }
  }
  uStack2 = 0;
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pDVar1 = (this->fields).desktopCubeModelingController;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
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
  this_00 = (Action_1_UIPushOption_ *)(this->fields).materialChange;
  if (this_00 != (Action_1_UIPushOption_ *)0x0) {
    mscorlib.dll::System::Action`1[UIPushOption]::Action_1_UIPushOption__Invoke
              (this_00,_id,
               MethodInfo__UnityEngine__Events__UnityAction<unsigned_char>__Invoke_unsigned_char_);
  }
  return;
}


/* Void OnMaterialClicked(Byte) */

void Assembly-CSharp.dll::MaterialsController::MaterialsController_OnMaterialClicked
               (MaterialsController *this,uint8_t materialID,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).cubeModelingStateMachine;
  if (this_00 != (CubeModelingStateMachine *)0x0) {
    CubeModelingStateMachine::CubeModelingStateMachine_set_CurrentMaterialId
              (this_00,materialID,(MethodInfo *)0x0);
    root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                     ((Component_1 *)this,(MethodInfo *)0x0);
    if (TypeInfo__MaterialsController->static_fields->__f__am_cache0 ==
        (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
      this_01 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                 *)func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (this_01,(Object *)0x0,
                 MethodInfo__MaterialsController___OnMaterialClicked_m__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 ,
                 MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
                );
      TypeInfo__MaterialsController->static_fields->__f__am_cache0 =
           (ExecuteEvents_EventFunction_1_IUIStack_ *)this_01;
    }
    callbackFunction =
         (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)
         TypeInfo__MaterialsController->static_fields->__f__am_cache0;
    if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
         0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
      func_?();
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy_63
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


/* Void OnPop() */

void Assembly-CSharp.dll::MaterialsController::MaterialsController_OnPop
               (MaterialsController *this,MethodInfo *method)

{
  pUVar1 = (this->fields).materialsPop;
  if (pUVar1 == (UnityAction *)0x0) {
    return;
  }
  this_00 = (AvatarMotor_OnActiveBounceDelegate *)(pUVar1->fields)._.prev;
  if (this_00 != (AvatarMotor_OnActiveBounceDelegate *)0x0) {
    AvatarMotor+OnActiveBounceDelegate::AvatarMotor_OnActiveBounceDelegate_Invoke
              (this_00,(MethodInfo *)0x0);
  }
  pcVar2 = (pUVar1->fields)._._.method_ptr;
  this_01 = (pUVar1->fields)._._.method;
  pOVar3 = (pUVar1->fields)._._.m_target;
  if (this_01->flags == 0xffff) {
    func_?(this_01);
  }
  cVar4 = func_?(this_01);
  if (cVar4 == '\0') {
    if ((char)this_01->iflags == '\0') {
      (*pcVar2)();
      return;
    }
  }
  else if ((this_01->flags != 0xffff) &&
          (((pOVar3 == (Object *)0x0 || (((pOVar3->klass->_1).token & 0x100) == 0)) &&
           ((pUVar1->fields)._._.invoke_impl != (void *)0x0)))) {
    cVar4 = func_?(pOVar3);
    if (cVar4 != '\0') {
      return;
    }
    method_00 = this_01;
    cVar4 = func_?();
    pOVar5 = mscorlib.dll::System::Collections::Generic::KeyValuePair`2[WinningConditionType,System
             ::Object]::KeyValuePair_2_WinningConditionType_System_Object__get_Value
                       ((KeyValuePair_2_WinningConditionType_System_Object_ *)this_01,method_00);
    cVar6 = func_?(pOVar5);
    if (cVar4 != '\0') {
      if (cVar6 != '\0') {
        func_?();
        return;
      }
      func_?(this_01,pOVar3);
      return;
    }
    if (cVar6 != '\0') {
      pOVar3 = mscorlib.dll::System::Collections::Generic::
               KeyValuePair`2[WinningConditionType,System::Object]::
               KeyValuePair_2_WinningConditionType_System_Object__get_Value
                         ((KeyValuePair_2_WinningConditionType_System_Object_ *)this_01,
                          unaff_retaddr);
      func_?(this_01->flags,pOVar3);
      return;
    }
    func_?(this_01->flags,pOVar3);
    return;
  }
  (*pcVar2)(pOVar3,this_01);
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__MaterialsController___Push_c__AnonStorey0;
  this_00 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,(MethodInfo *)method_00);
  if (this_00 != (ScaleAnimationBase *)0x0) {
    (this_00->fields).state = (int32_t)onPop;
    (this_00->fields)._._._._.m_CachedPtr = (void *)pushOption;
    (this_00->fields).originalScale.x = (float)this;
    root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                     ((Component_1 *)this,(MethodInfo *)0x0);
    this_01 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?(
                             TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                             );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_01,(Object *)this_00,
               MethodInfo__MaterialsController___Push_c__AnonStorey0____m__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,
               MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
              );
    if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
         0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
      func_?();
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy_63
              (root,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_IHandleToolTip_ *)this_01,
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pXVar1 = (XpBoostParticlePreviewer *)(this->fields).desktopCubeModelingControllerPrefab;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  pXVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                     (pXVar1,
                      DesktopCubeModelingController_MethodInfo__UnityEngine__Object__Instantiate<DesktopCubeModelingController>_DesktopCubeModelingController_
                     );
  (this->fields).desktopCubeModelingController = (DesktopCubeModelingController *)pXVar1;
  if (pXVar1 != (XpBoostParticlePreviewer *)0x0) {
    DesktopCubeModelingController::DesktopCubeModelingController_Initialize
              ((DesktopCubeModelingController *)pXVar1,(this->fields).cubeModelingStateMachine,
               (MethodInfo *)0x0);
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
        (*(code *)(this->klass->vtable).OnMaterialChanged_1.method)();
        if ((this->fields).desktopCubeModelingController != (DesktopCubeModelingController *)0x0) {
          pcVar3 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar3 = (code *)func_?(), pcVar3 == (code *)0x0)) {
            func_?();
            func_?();
            pcVar3 = (code *)swi(3);
            pTVar4 = (Transform *)(*pcVar3)();
            return pTVar4;
          }
          pcRam_? = pcVar3;
          pTVar4 = (Transform *)(*pcRam_?)();
          return pTVar4;
        }
      }
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  pTVar4 = (Transform *)(*pcVar3)();
  return pTVar4;
}


/* Void ShowInventory(UIPushOption, Int32) */

void Assembly-CSharp.dll::MaterialsController::MaterialsController_ShowInventory
               (MaterialsController *this,UIPushOption__Enum pushOption,int32_t page,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__MaterialsController___ShowInventory_c__AnonStorey1;
  this_00 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,(MethodInfo *)method_00);
  if (this_00 != (ScaleAnimationBase *)0x0) {
    (this_00->fields)._._._._.m_CachedPtr = (void *)pushOption;
    (this_00->fields).state = (int32_t)this;
    pIVar1 = (this->fields).inventoryControllerPrefab;
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    pIVar1 = (InventoryController *)
             UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                       ((XpBoostParticlePreviewer *)pIVar1,
                        InventoryController_MethodInfo__UnityEngine__Object__Instantiate<InventoryController>_InventoryController_
                       );
    (this->fields).inventoryController = pIVar1;
    if (pIVar1 != (InventoryController *)0x0) {
      pUVar2 = (pIVar1->fields).OnPageTurned;
      pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *
               )func_?(TypeInfo__UnityEngine__Events__UnityAction<int>);
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (pUVar3,(Object *)this,MethodInfo__MaterialsController__PageTurned_int_,
                 MethodInfo__UnityEngine__Events__UnityAction<int>__UnityAction_System__Object__void__
                );
      pUVar4 = (UnityAction_1_System_Int32_ *)
               mscorlib.dll::System::Delegate::Delegate_Combine
                         ((Delegate *)pUVar2,(Delegate *)pUVar3,(MethodInfo *)0x0);
      pUVar2 = (UnityAction_1_System_Int32_ *)0x0;
      if (pUVar4 != (UnityAction_1_System_Int32_ *)0x0) {
        if (pUVar4->klass == TypeInfo__UnityEngine__Events__UnityAction<int>) {
          pUVar2 = pUVar4;
        }
        pUVar5 = TypeInfo__UnityEngine__Events__UnityAction<int>;
        if (pUVar2 == (UnityAction_1_System_Int32_ *)0x0) goto code_?;
      }
      (pIVar1->fields).OnPageTurned = pUVar2;
      pIVar1 = (this->fields).inventoryController;
      if (pIVar1 != (InventoryController *)0x0) {
        InventoryController::InventoryController_Initialize
                  (pIVar1,(this->fields).numberOfSlotsPrPage,(MethodInfo *)0x0);
        pTVar6 = (this->fields).tab;
        if (pTVar6 != (TabState *)0x0) {
          (pTVar6->fields).currentPage = page;
          pTVar6 = (this->fields).tab;
          if ((pTVar6 != (TabState *)0x0) &&
             (pIVar1 = (this->fields).inventoryController, pIVar1 != (InventoryController *)0x0)) {
            InventoryController::InventoryController_AddTab
                      (pIVar1,0,(pTVar6->fields).name,(MethodInfo *)0x0);
            pGVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                               ((Component_1 *)this,(MethodInfo *)0x0);
            if (TypeInfo__MaterialsController->static_fields->__f__am_cache1 ==
                (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
              pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                        *)func_?();
              UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
              SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
              UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                        (pUVar3,(Object *)0x0,
                         MethodInfo__MaterialsController___ShowInventory_m__1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                         ,
                         MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
                        );
              TypeInfo__MaterialsController->static_fields->__f__am_cache1 =
                   (ExecuteEvents_EventFunction_1_IUIStack_ *)pUVar3;
            }
            callbackFunction =
                 (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)
                 TypeInfo__MaterialsController->static_fields->__f__am_cache1;
            if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.
                        methodPtr & 0x2000000) != 0) &&
               ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
              func_?();
            }
            object = (Object *)&UNK_?;
            UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
            ExecuteEvents_ExecuteHierarchy_63
                      (pGVar7,(BaseEventData *)0x0,callbackFunction,
                       UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                      );
            pGVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                               ((Component_1 *)this,(MethodInfo *)0x0);
            pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                      *)func_?();
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
            SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
            UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                      (pUVar3,object,
                       MethodInfo__MaterialsController___ShowInventory_c__AnonStorey1____m__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                       ,
                       MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
                      );
            UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
            ExecuteEvents_ExecuteHierarchy_63
                      (pGVar7,(BaseEventData *)0x0,
                       (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)pUVar3,
                       UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                      );
            MaterialsController_UpdateContent(this,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  func_?(0);
  pUVar4 = extraout_ECX;
  pUVar5 = extraout_EDX;
code_?:
  func_?(pUVar4,pUVar5);
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void ShowMaterialInventory() */

void Assembly-CSharp.dll::MaterialsController::MaterialsController_ShowMaterialInventory
               (MaterialsController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  x = (this->fields).inventoryController;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  x = (this->fields).inventoryController;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
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
    func_?(_UNK_?);
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
        slotIndex = 0;
        do {
          uVar4 = (uint8_t)slotIndex;
          if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0)
             && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
            func_?();
          }
          pMVar5 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          if (pMVar5 == (MVNetworkGame *)0x0) break;
          pCVar6 = DayNightCycle::DayNightCycle_get_CurrentMoonParam
                             ((DayNightCycle *)pMVar5,(MethodInfo *)0x0);
          if (pCVar6 == (CelestialParam *)0x0) break;
          uVar7 = slotIndex;
          iVar3 = MVMaterialRepository::MVMaterialRepository_get_MaterialCount
                            ((MVMaterialRepository *)pCVar6,(MethodInfo *)0x0);
          if (iVar3 <= (int)slotIndex) {
            return;
          }
          pTVar2 = (this->fields).tab;
          if (pTVar2 == (TabState *)0x0) break;
          bVar8 = TabState::TabState_SlotIndexIsInRange(pTVar2,slotIndex,(MethodInfo *)0x0);
          if (bVar8 != 0) {
            if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0)
               && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
              func_?();
            }
            pMVar5 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
            if (pMVar5 == (MVNetworkGame *)0x0) break;
            pCVar6 = DayNightCycle::DayNightCycle_get_CurrentMoonParam
                               ((DayNightCycle *)pMVar5,(MethodInfo *)0x0);
            if (pCVar6 == (CelestialParam *)0x0) break;
            this_01 = (GamePointGainEffect *)
                      MVMaterialRepository::MVMaterialRepository_GetMaterial
                                ((MVMaterialRepository *)pCVar6,0xb0,(MethodInfo *)0x0);
            pMVar9 = (this->fields).materialViewItemPrefab;
            if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0)
               && ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
              func_?();
            }
            pMVar9 = (MaterialViewItem *)
                      UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                                ((XpBoostParticlePreviewer *)pMVar9,
                                 MaterialViewItem_MethodInfo__UnityEngine__Object__Instantiate<MaterialViewItem>_MaterialViewItem_
                                );
            if (this_01 == (GamePointGainEffect *)0x0) break;
            cVar10 = *(char *)&(this_01->fields).targetSpeedAccelerationPerSec;
            slotIndex = (uint)CONCAT11(cVar10,uVar4);
            texture2D = (Texture2D *)
                        GamePointGainEffect::GamePointGainEffect_get_ID(this_01,(MethodInfo *)0x0);
            bVar8 = MVMaterial::MVMaterial_get_IsAvailable((MVMaterial *)this_01,(MethodInfo *)0x0);
            this_00 = (this->fields).cubeModelingStateMachine;
            if (this_00 == (CubeModelingStateMachine *)0x0) break;
            uVar11 = CubeModelingStateMachine::CubeModelingStateMachine_get_CurrentMaterialId
                              (this_00,(MethodInfo *)0x0);
            if (pMVar9 == (MaterialViewItem *)0x0) break;
            MaterialViewItem::MaterialViewItem_Initialize
                      (pMVar9,0xb0,cVar10 == '\0',texture2D,bVar8,uVar4 == uVar11,(MethodInfo *)0x0)
            ;
            pIVar1 = (this->fields).inventoryController;
            item = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                             ((Component_1 *)pMVar9,(MethodInfo *)0x0);
            if (pIVar1 == (InventoryController *)0x0) break;
            InventoryController::InventoryController_AddObject
                      (pIVar1,item,(int)uVar7 % (this->fields).numberOfSlotsPrPage,
                       (MethodInfo *)0x0);
          }
          slotIndex = (uint)(byte)((char)slotIndex + 1);
        } while( true );
      }
    }
  }
  func_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void <OnMaterialClicked>m__0(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::MaterialsController::MaterialsController__OnMaterialClicked_m__0
               (IUIStack *x,BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (x != (IUIStack *)0x0) {
    func_?(3,TypeInfo__UnityEngine__EventSystems__IUIStack,x,0xc);
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void <ShowInventory>m__1(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::MaterialsController::MaterialsController__ShowInventory_m__1
               (IUIStack *handler,BaseEventData *data,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (handler != (IUIStack *)0x0) {
    func_?(3,TypeInfo__UnityEngine__EventSystems__IUIStack,handler,0xc);
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

