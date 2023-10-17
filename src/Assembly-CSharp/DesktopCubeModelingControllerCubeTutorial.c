
/* Void DeactivateAllToolButtons() */

void Assembly-CSharp.dll::DesktopCubeModelingControllerCubeTutorial::
     DesktopCubeModelingControllerCubeTutorial_DeactivateAllToolButtons
               (DesktopCubeModelingControllerCubeTutorial *this,MethodInfo *method)

{
  pGVar1 = (this->fields).cubeTool;
  if (pGVar1 != (GameObject *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar1,0,(MethodInfo *)0x0);
    pGVar1 = (this->fields).paintTool;
    if (pGVar1 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar1,0,(MethodInfo *)0x0);
      pGVar1 = (this->fields).deleteTool;
      if (pGVar1 != (GameObject *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar1,0,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void DoSetMaterial(Byte) */

void Assembly-CSharp.dll::DesktopCubeModelingControllerCubeTutorial::
     DesktopCubeModelingControllerCubeTutorial_DoSetMaterial
               (DesktopCubeModelingControllerCubeTutorial *this,uint8_t materialId,
               MethodInfo *method)

{
  this_00 = (this->fields).materialsButtonImage;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVGameControllerBase);
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (((pMVar1 != (MVGameControllerBase *)0x0) &&
      (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
     (this_01 = (pMVar2->fields)._MaterialRepository_k__BackingField,
     this_01 != (MVMaterialRepository *)0x0)) {
    pMVar3 = MVMaterialRepository::MVMaterialRepository_GetMaterial
                       (this_01,materialId,(MethodInfo *)0x0);
    if ((pMVar3 != (MVMaterial *)0x0) && (this_00 != (RawImage *)0x0)) {
      UnityEngine.UI.dll::UnityEngine::UI::RawImage::RawImage_set_texture
                (this_00,(Texture *)(pMVar3->fields)._ButtonTexture_k__BackingField,
                 (MethodInfo *)0x0);
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
      if (((pMVar1 != (MVGameControllerBase *)0x0) &&
          (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
         ((pGVar4 = (pMVar2->fields).GameEventManager, pGVar4 != (GameEventManager *)0x0 &&
          ((pGVar5 = (pGVar4->fields).AvatarCommandsBuildMode,
           pGVar5 != (GameEventManager_AvatarCommandsBuildModeManager *)0x0 &&
           (pGVar6 = (pGVar5->fields).LaserCommands,
           pGVar6 != (GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager *)0x0))))
         )) {
        if ((pGVar6->fields).OnCubeMaterialChanged != (Action_1_Byte__1 *)0x0) {
          pAVar7 = (pGVar6->fields).OnCubeMaterialChanged;
          (*(pAVar7->fields)._._.invoke_impl)
                    ((pAVar7->fields)._._.method_code,_materialId,(pAVar7->fields)._._.method);
        }
        return;
      }
    }
  }
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void Initialize(CubeModelingStateMachine, MaterialsController) */

void Assembly-CSharp.dll::DesktopCubeModelingControllerCubeTutorial::
     DesktopCubeModelingControllerCubeTutorial_Initialize
               (DesktopCubeModelingControllerCubeTutorial *this,
               CubeModelingStateMachine *cubeModelingStateMachine,
               MaterialsController *materialsController,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__System__Action<MV::WorldObject::MetaData::FirstTimeState,_MV::WorldObject::MetaData::FirstTimeEvent>
                   );
    func_?(&MethodInfo__DesktopCubeModelingControllerCubeTutorial__MaterialsPop__);
    func_?(&
                    MethodInfo__DesktopCubeModelingControllerCubeTutorial__OnFirstTimeState_MV__WorldObject__MetaData__FirstTimeState__MV__WorldObject__MetaData__FirstTimeEvent_
                   );
    func_?(&
                    MethodInfo__DesktopCubeModelingControllerCubeTutorial__SetMaterial_unsigned_char_
                   );
    func_?(&TypeInfo__UnityEngine__Events__UnityAction<unsigned_char>);
    func_?(&TypeInfo__UnityEngine__Events__UnityAction);
    cRam_? = '\x01';
  }
  (this->fields).materialsController = materialsController;
  func_?(&(this->fields).materialsController,materialsController);
  (this->fields).cubeModelingStateMachine = cubeModelingStateMachine;
  func_?(&(this->fields).cubeModelingStateMachine,cubeModelingStateMachine);
  if (cubeModelingStateMachine == (CubeModelingStateMachine *)0x0) {
code_?:
    func_?();
  }
  else {
    uVar1 = CubeModelingStateMachine::CubeModelingStateMachine_get_CurrentMaterialId
                      (cubeModelingStateMachine,(MethodInfo *)0x0);
    (this->fields).defaultMaterial = uVar1;
    pDVar2 = (this->fields).desktopCubeModelingController;
    if (pDVar2 == (DesktopCubeModelingToolsController *)0x0) goto code_?;
    (pDVar2->fields).cubeModelingStateMachine = cubeModelingStateMachine;
    func_?(&(pDVar2->fields).cubeModelingStateMachine,cubeModelingStateMachine);
    this_00 = (Action_2_Object_Int32Enum_ *)
              func_?(
                             TypeInfo__System__Action<MV::WorldObject::MetaData::FirstTimeState,_MV::WorldObject::MetaData::FirstTimeEvent>
                             );
    if (this_00 == (Action_2_Object_Int32Enum_ *)0x0) goto code_?;
    mscorlib.dll::System::Action`2[Object,Int32Enum]::Action_2_Object_Int32Enum___ctor
              (this_00,(Object *)this,
               MethodInfo__DesktopCubeModelingControllerCubeTutorial__OnFirstTimeState_MV__WorldObject__MetaData__FirstTimeState__MV__WorldObject__MetaData__FirstTimeEvent_
               ,(MethodInfo *)0x0);
    FirstTimeEventManager::FirstTimeEventManager_SubscribeToFirstTimeState
              ((Action_2_MV_WorldObject_MetaData_FirstTimeState_MV_WorldObject_MetaData_FirstTimeEvent_
                *)this_00,(MethodInfo *)0x0);
    if (materialsController == (MaterialsController *)0x0) goto code_?;
    pUVar3 = (materialsController->fields).materialChange;
    this_01 = (UnityAction_1_System_ByteEnum_ *)
              func_?(TypeInfo__UnityEngine__Events__UnityAction<unsigned_char>);
    if (this_01 == (UnityAction_1_System_ByteEnum_ *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::ByteEnum]::
    UnityAction_1_System_ByteEnum___ctor
              (this_01,(Object *)this,
               MethodInfo__DesktopCubeModelingControllerCubeTutorial__SetMaterial_unsigned_char_,
               (MethodInfo *)0x0);
    pDVar4 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)pUVar3,(Delegate *)this_01,(MethodInfo *)0x0);
    if (pDVar4 == (Delegate *)0x0) {
      (materialsController->fields).materialChange = (UnityAction_1_System_Byte_ *)0x0;
    }
    else {
      pUVar3 = (UnityAction_1_System_Byte_ *)func_?();
      if (pUVar3 == (UnityAction_1_System_Byte_ *)0x0) goto code_?;
      (materialsController->fields).materialChange = pUVar3;
      iVar5 = func_?();
      if (iVar5 == 0) goto code_?;
    }
    func_?();
    pUVar6 = (materialsController->fields).materialsPop;
    this_02 = (NavMesh_OnNavMeshPreUpdate *)func_?();
    if (this_02 == (NavMesh_OnNavMeshPreUpdate *)0x0) goto code_?;
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (this_02,(Object *)this,
               MethodInfo__DesktopCubeModelingControllerCubeTutorial__MaterialsPop__,
               (MethodInfo *)0x0);
    pUVar6 = (UnityAction *)
             mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)pUVar6,(Delegate *)this_02,(MethodInfo *)0x0);
    if (pUVar6 == (UnityAction *)0x0) {
      (materialsController->fields).materialsPop = (UnityAction *)0x0;
      func_?();
      return;
    }
    pUVar7 = (UnityAction *)0x0;
    if (pUVar6->klass == TypeInfo__UnityEngine__Events__UnityAction) {
      pUVar7 = pUVar6;
    }
    if (pUVar7 != (UnityAction *)0x0) {
      (materialsController->fields).materialsPop = pUVar7;
      pUVar7 = (UnityAction *)0x0;
      if (pUVar6->klass == TypeInfo__UnityEngine__Events__UnityAction) {
        pUVar7 = pUVar6;
      }
      if (pUVar7 != (UnityAction *)0x0) {
        func_?();
        return;
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void MaterialsPop() */

void Assembly-CSharp.dll::DesktopCubeModelingControllerCubeTutorial::
     DesktopCubeModelingControllerCubeTutorial_MaterialsPop
               (DesktopCubeModelingControllerCubeTutorial *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__DesktopCubeModelingControllerCubeTutorial___OverRideIfDefaultMaterial_d__20
                   );
    cRam_? = '\x01';
  }
  value = (Object *)
          func_?(
                         TypeInfo__DesktopCubeModelingControllerCubeTutorial___OverRideIfDefaultMaterial_d__20
                         );
  if (value != (Object *)0x0) {
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              (value,ExceptionArgument__Enum_obj,unaff_EDI);
    value[1].klass = (Object__Class *)0x0;
    value[2].klass = (Object__Class *)this;
    func_?(value + 2,this);
    UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StartCoroutine_Auto
              ((MonoBehaviour *)this,(IEnumerator *)value,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::DesktopCubeModelingControllerCubeTutorial::
     DesktopCubeModelingControllerCubeTutorial_OnDestroy
               (DesktopCubeModelingControllerCubeTutorial *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__System__Action<MV::WorldObject::MetaData::FirstTimeState,_MV::WorldObject::MetaData::FirstTimeEvent>
                   );
    func_?(&MethodInfo__DesktopCubeModelingControllerCubeTutorial__MaterialsPop__);
    func_?(&
                    MethodInfo__DesktopCubeModelingControllerCubeTutorial__OnFirstTimeState_MV__WorldObject__MetaData__FirstTimeState__MV__WorldObject__MetaData__FirstTimeEvent_
                   );
    func_?(&
                    MethodInfo__DesktopCubeModelingControllerCubeTutorial__SetMaterial_unsigned_char_
                   );
    func_?(&TypeInfo__UnityEngine__Events__UnityAction<unsigned_char>);
    func_?(&TypeInfo__UnityEngine__Events__UnityAction);
    cRam_? = '\x01';
  }
  (this->fields).cubeModelingStateMachine = (CubeModelingStateMachine *)0x0;
  func_?(&(this->fields).cubeModelingStateMachine,0);
  this_02 = (Action_2_Object_Int32Enum_ *)
            func_?(
                           TypeInfo__System__Action<MV::WorldObject::MetaData::FirstTimeState,_MV::WorldObject::MetaData::FirstTimeEvent>
                           );
  if (this_02 == (Action_2_Object_Int32Enum_ *)0x0) {
code_?:
    func_?();
  }
  else {
    mscorlib.dll::System::Action`2[Object,Int32Enum]::Action_2_Object_Int32Enum___ctor
              (this_02,(Object *)this,
               MethodInfo__DesktopCubeModelingControllerCubeTutorial__OnFirstTimeState_MV__WorldObject__MetaData__FirstTimeState__MV__WorldObject__MetaData__FirstTimeEvent_
               ,(MethodInfo *)0x0);
    FirstTimeEventManager::FirstTimeEventManager_UnSubscribeToFirstTimeState
              ((Action_2_MV_WorldObject_MetaData_FirstTimeState_MV_WorldObject_MetaData_FirstTimeEvent_
                *)this_02,(MethodInfo *)0x0);
    pMVar1 = (this->fields).materialsController;
    if (pMVar1 == (MaterialsController *)0x0) goto code_?;
    this_03 = (UnityAction_1_System_ByteEnum_ *)func_?();
    if (this_03 == (UnityAction_1_System_ByteEnum_ *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::ByteEnum]::
    UnityAction_1_System_ByteEnum___ctor
              (this_03,(Object *)this,
               MethodInfo__DesktopCubeModelingControllerCubeTutorial__SetMaterial_unsigned_char_,
               (MethodInfo *)0x0);
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)0x0,(Delegate *)this_03,(MethodInfo *)0x0);
    if (pDVar2 == (Delegate *)0x0) {
      (pMVar1->fields).materialChange = (UnityAction_1_System_Byte_ *)0x0;
    }
    else {
      pUVar3 = (UnityAction_1_System_Byte_ *)func_?();
      if (pUVar3 == (UnityAction_1_System_Byte_ *)0x0) goto code_?;
      (pMVar1->fields).materialChange = pUVar3;
      iVar4 = func_?();
      if (iVar4 == 0) goto code_?;
    }
    func_?();
    pMVar1 = (this->fields).materialsController;
    if (pMVar1 == (MaterialsController *)0x0) goto code_?;
    this_04 = (NavMesh_OnNavMeshPreUpdate *)func_?();
    if (this_04 == (NavMesh_OnNavMeshPreUpdate *)0x0) goto code_?;
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (this_04,(Object *)this,
               MethodInfo__DesktopCubeModelingControllerCubeTutorial__MaterialsPop__,
               (MethodInfo *)0x0);
    pUVar5 = (UnityAction *)
             mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)0x0,(Delegate *)this_04,(MethodInfo *)0x0);
    if (pUVar5 == (UnityAction *)0x0) {
      (pMVar1->fields).materialsPop = (UnityAction *)0x0;
code_?:
      func_?();
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      this_00 = TypeInfo__FirstTimeEventManager->static_fields->firstTimeState;
      if (this_00 != (FirstTimeState *)0x0) {
        MVWorldObject.dll::MV::WorldObject::MetaData::FirstTimeState::
        FirstTimeState_SetFirstTimeEvent(this_00,in_stack_6,(MethodInfo *)0x0);
        if (TypeInfo__FirstTimeEventManager->static_fields->firstTimeStatePublisher !=
            (Action_2_MV_WorldObject_MetaData_FirstTimeState_MV_WorldObject_MetaData_FirstTimeEvent_
             *)0x0) {
          (*(TypeInfo__FirstTimeEventManager->static_fields->firstTimeStatePublisher->fields)._._.
            invoke_impl)();
        }
        pMVar7 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if ((pMVar7 != (MVNetworkGame *)0x0) &&
           (this_01 = (pMVar7->fields).operationRequests,
           this_01 != (MVNetworkGame_OperationRequests *)0x0)) {
          MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_SetFirstTimeEvent
                    (this_01,in_stack_6,(MethodInfo *)0x0);
          return;
        }
      }
      func_?();
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    pUVar9 = (UnityAction *)0x0;
    if (pUVar5->klass == TypeInfo__UnityEngine__Events__UnityAction) {
      pUVar9 = pUVar5;
    }
    if (pUVar9 != (UnityAction *)0x0) {
      (pMVar1->fields).materialsPop = pUVar9;
      pUVar9 = (UnityAction *)0x0;
      if (pUVar5->klass == TypeInfo__UnityEngine__Events__UnityAction) {
        pUVar9 = pUVar5;
      }
      if (pUVar9 != (UnityAction *)0x0) goto code_?;
    }
  }
  func_?();
code_?:
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void OnFirstTimeState(FirstTimeState, FirstTimeEvent) */

void Assembly-CSharp.dll::DesktopCubeModelingControllerCubeTutorial::
     DesktopCubeModelingControllerCubeTutorial_OnFirstTimeState
               (DesktopCubeModelingControllerCubeTutorial *this,FirstTimeState *firstTimeState,
               FirstTimeEvent__Enum firstTimeEvent,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    MethodInfo__DesktopCubeModelingControllerCubeTutorial___OnFirstTimeState_b__12_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&StringLiteral_Trying_to_pop);
    cRam_? = '\x01';
  }
  if (firstTimeEvent == (this->fields).exitFirstTimeEvent) {
    pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this,(MethodInfo *)0x0);
    callbackFunction =
         (ExecuteEvents_EventFunction_1_System_Object_ *)
         func_?(
                        TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                        );
    if (callbackFunction == (ExecuteEvents_EventFunction_1_System_Object_ *)0x0)
    goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)this,
               MethodInfo__DesktopCubeModelingControllerCubeTutorial___OnFirstTimeState_b__12_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
              (pGVar1,(BaseEventData *)0x0,callbackFunction,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
              );
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
              ((Object *)StringLiteral_Trying_to_pop,(MethodInfo *)0x0);
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&StringLiteral_delete_tool_set_active);
    cRam_? = '\x01';
  }
  pGVar1 = (this->fields).deleteTool;
  if (pGVar1 == (GameObject *)0x0) goto code_?;
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                    (pGVar1,(MethodInfo *)0x0);
  if ((bVar2 == 0) &&
     (bVar2 = FirstTimeEventManager::FirstTimeEventManager_HasFirstTimeEventOccured
                        (FirstTimeEvent__Enum_BM_CubeTutorialPaintedCubes,(MethodInfo *)0x0),
     bVar2 != 0)) {
    DesktopCubeModelingControllerCubeTutorial_DeactivateAllToolButtons(this,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
              ((Object *)StringLiteral_delete_tool_set_active,(MethodInfo *)0x0);
    pGVar1 = (this->fields).deleteTool;
    if (pGVar1 == (GameObject *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar1,1,(MethodInfo *)0x0);
    pDVar3 = (this->fields).desktopCubeModelingToolsController;
    if (pDVar3 == (DesktopCubeModelingToolsController *)0x0) goto code_?;
    DesktopCubeModelingToolsController::DesktopCubeModelingToolsController_SetAllToTransparent
              (pDVar3,(MethodInfo *)0x0);
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&StringLiteral_Activate_materials);
    cRam_? = '\x01';
  }
  bVar2 = FirstTimeEventManager::FirstTimeEventManager_HasFirstTimeEventOccured
                    (FirstTimeEvent__Enum_BM_CubeTutorialAddedCubes,(MethodInfo *)0x0);
  if (bVar2 == 0) {
    return;
  }
  bVar2 = FirstTimeEventManager::FirstTimeEventManager_HasFirstTimeEventOccured
                    (FirstTimeEvent__Enum_BM_ChangeToolToPaint,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    pFVar4 = (this->fields).materialButton;
    if (pFVar4 == (FirstTimeCubeEditFadeButtons *)0x0) goto code_?;
    bVar2 = FirstTimeCubeEditFadeButtons::FirstTimeCubeEditFadeButtons_IsEnabled
                      (pFVar4,(MethodInfo *)0x0);
    if (bVar2 == 0) {
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Debug);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                ((Object *)StringLiteral_Activate_materials,(MethodInfo *)0x0);
      pFVar4 = (this->fields).materialButton;
      if (pFVar4 == (FirstTimeCubeEditFadeButtons *)0x0) goto code_?;
      FirstTimeCubeEditFadeButtons::FirstTimeCubeEditFadeButtons_ActivateImmediate
                (pFVar4,(MethodInfo *)0x0);
    }
  }
  pGVar1 = (this->fields).paintTool;
  if (pGVar1 != (GameObject *)0x0) {
    bVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                      (pGVar1,(MethodInfo *)0x0);
    if (bVar2 != 0) {
      return;
    }
    if ((this->fields).paintHasBeenActivated != 0) {
      return;
    }
    DesktopCubeModelingControllerCubeTutorial_DeactivateAllToolButtons(this,(MethodInfo *)0x0);
    pGVar1 = (this->fields).paintTool;
    if (pGVar1 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar1,1,(MethodInfo *)0x0);
      pDVar3 = (this->fields).desktopCubeModelingToolsController;
      (this->fields).paintHasBeenActivated = 1;
      if (pDVar3 != (DesktopCubeModelingToolsController *)0x0) {
        DesktopCubeModelingToolsController::DesktopCubeModelingToolsController_SetAllToTransparent
                  (pDVar3,(MethodInfo *)0x0);
        return;
      }
    }
  }
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* IEnumerator OverRideIfDefaultMaterial() */

IEnumerator *
Assembly-CSharp.dll::DesktopCubeModelingControllerCubeTutorial::
DesktopCubeModelingControllerCubeTutorial_OverRideIfDefaultMaterial
          (DesktopCubeModelingControllerCubeTutorial *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__DesktopCubeModelingControllerCubeTutorial___OverRideIfDefaultMaterial_d__20
                   );
    cRam_? = '\x01';
  }
  value = (Object *)
          func_?(
                         TypeInfo__DesktopCubeModelingControllerCubeTutorial___OverRideIfDefaultMaterial_d__20
                         );
  if (value != (Object *)0x0) {
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              (value,ExceptionArgument__Enum_obj,unaff_ESI);
    value[1].klass = (Object__Class *)0x0;
    value[2].klass = (Object__Class *)this;
    func_?(value + 2,this);
    return (IEnumerator *)value;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  pIVar2 = (IEnumerator *)(*pcVar1)();
  return pIVar2;
}


/* Void SetMaterial(Byte) */

void Assembly-CSharp.dll::DesktopCubeModelingControllerCubeTutorial::
     DesktopCubeModelingControllerCubeTutorial_SetMaterial
               (DesktopCubeModelingControllerCubeTutorial *this,uint8_t materialId,
               MethodInfo *method)

{
  this_00 = (this->fields).cubeModelingStateMachine;
  if (this_00 != (CubeModelingStateMachine *)0x0) {
    materialId_00 =
         CubeModelingStateMachine::CubeModelingStateMachine_get_CurrentMaterialId
                   (this_00,(MethodInfo *)0x0);
    DesktopCubeModelingControllerCubeTutorial_DoSetMaterial(this,materialId_00,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void UpdateDelete() */

void Assembly-CSharp.dll::DesktopCubeModelingControllerCubeTutorial::
     DesktopCubeModelingControllerCubeTutorial_UpdateDelete
               (DesktopCubeModelingControllerCubeTutorial *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&StringLiteral_delete_tool_set_active);
    cRam_? = '\x01';
  }
  pGVar1 = (this->fields).deleteTool;
  if (pGVar1 != (GameObject *)0x0) {
    bVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                      (pGVar1,(MethodInfo *)0x0);
    if (bVar2 == 0) {
      bVar2 = FirstTimeEventManager::FirstTimeEventManager_HasFirstTimeEventOccured
                        (FirstTimeEvent__Enum_BM_CubeTutorialPaintedCubes,(MethodInfo *)0x0);
      if (bVar2 != 0) {
        DesktopCubeModelingControllerCubeTutorial_DeactivateAllToolButtons(this,(MethodInfo *)0x0);
        if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                  ((Object *)StringLiteral_delete_tool_set_active,(MethodInfo *)0x0);
        pGVar1 = (this->fields).deleteTool;
        if (pGVar1 != (GameObject *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar1,1,(MethodInfo *)0x0);
          if ((this->fields).desktopCubeModelingToolsController !=
              (DesktopCubeModelingToolsController *)0x0) {
            if (*(Selectable **)(in_stack_3 + 0x14) != (Selectable *)0x0) {
              pIVar4 = UnityEngine.UI.dll::UnityEngine::UI::Selectable::Selectable_get_image
                                 (*(Selectable **)(in_stack_3 + 0x14),(MethodInfo *)0x0);
              if (pIVar4 != (Image *)0x0) {
                (*(pIVar4->klass->vtable).get_color.methodPtr)();
                (*(pIVar4->klass->vtable).set_color.methodPtr)();
                if (*(Selectable **)(in_stack_3 + 0x18) != (Selectable *)0x0) {
                  pIVar4 = UnityEngine.UI.dll::UnityEngine::UI::Selectable::Selectable_get_image
                                     (*(Selectable **)(in_stack_3 + 0x18),(MethodInfo *)0x0);
                  if (pIVar4 != (Image *)0x0) {
                    puVar5 = (undefined4 *)(*(pIVar4->klass->vtable).get_color.methodPtr)();
                    (*(pIVar4->klass->vtable).set_color.methodPtr)(pIVar4,*puVar5);
                    if (*(Selectable **)(in_stack_3 + 0x1c) != (Selectable *)0x0) {
                      pIVar4 = UnityEngine.UI.dll::UnityEngine::UI::Selectable::Selectable_get_image
                                         (*(Selectable **)(in_stack_3 + 0x1c),
                                          (MethodInfo *)0x0);
                      if (pIVar4 != (Image *)0x0) {
                        puVar5 = (undefined4 *)(*(pIVar4->klass->vtable).get_color.methodPtr)();
                        (*(pIVar4->klass->vtable).set_color.methodPtr)(pIVar4,*puVar5);
                        return;
                      }
                    }
                  }
                }
              }
            }
            func_?();
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
        }
        goto code_?;
      }
    }
    return;
  }
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void UpdatePaint() */

void Assembly-CSharp.dll::DesktopCubeModelingControllerCubeTutorial::
     DesktopCubeModelingControllerCubeTutorial_UpdatePaint
               (DesktopCubeModelingControllerCubeTutorial *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&StringLiteral_Activate_materials);
    cRam_? = '\x01';
  }
  bVar1 = FirstTimeEventManager::FirstTimeEventManager_HasFirstTimeEventOccured
                    (FirstTimeEvent__Enum_BM_CubeTutorialAddedCubes,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    return;
  }
  bVar1 = FirstTimeEventManager::FirstTimeEventManager_HasFirstTimeEventOccured
                    (FirstTimeEvent__Enum_BM_ChangeToolToPaint,(MethodInfo *)0x0);
  if (bVar1 != 0) {
    pFVar2 = (this->fields).materialButton;
    if (pFVar2 == (FirstTimeCubeEditFadeButtons *)0x0) goto code_?;
    bVar1 = FirstTimeCubeEditFadeButtons::FirstTimeCubeEditFadeButtons_IsEnabled
                      (pFVar2,(MethodInfo *)0x0);
    if (bVar1 == 0) {
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                ((Object *)StringLiteral_Activate_materials,(MethodInfo *)0x0);
      pFVar2 = (this->fields).materialButton;
      if (pFVar2 == (FirstTimeCubeEditFadeButtons *)0x0) goto code_?;
      FirstTimeCubeEditFadeButtons::FirstTimeCubeEditFadeButtons_ActivateImmediate
                (pFVar2,(MethodInfo *)0x0);
    }
  }
  pGVar3 = (this->fields).paintTool;
  if (pGVar3 != (GameObject *)0x0) {
    bVar1 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                      (pGVar3,(MethodInfo *)0x0);
    if (bVar1 != 0) {
      return;
    }
    if ((this->fields).paintHasBeenActivated != 0) {
      return;
    }
    DesktopCubeModelingControllerCubeTutorial_DeactivateAllToolButtons(this,(MethodInfo *)0x0);
    pGVar3 = (this->fields).paintTool;
    if (pGVar3 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar3,1,(MethodInfo *)0x0);
      (this->fields).paintHasBeenActivated = 1;
      if ((this->fields).desktopCubeModelingToolsController !=
          (DesktopCubeModelingToolsController *)0x0) {
        if ((*(Selectable **)(in_stack_4 + 0x14) != (Selectable *)0x0) &&
           (pIVar5 = UnityEngine.UI.dll::UnityEngine::UI::Selectable::Selectable_get_image
                               (*(Selectable **)(in_stack_4 + 0x14),(MethodInfo *)0x0),
           pIVar5 != (Image *)0x0)) {
          (*(pIVar5->klass->vtable).get_color.methodPtr)();
          (*(pIVar5->klass->vtable).set_color.methodPtr)();
          if ((*(Selectable **)(in_stack_4 + 0x18) != (Selectable *)0x0) &&
             (pIVar5 = UnityEngine.UI.dll::UnityEngine::UI::Selectable::Selectable_get_image
                                 (*(Selectable **)(in_stack_4 + 0x18),(MethodInfo *)0x0),
             pIVar5 != (Image *)0x0)) {
            (*(pIVar5->klass->vtable).get_color.methodPtr)();
            (*(pIVar5->klass->vtable).set_color.methodPtr)();
            if ((*(Selectable **)(in_stack_4 + 0x1c) != (Selectable *)0x0) &&
               (pIVar5 = UnityEngine.UI.dll::UnityEngine::UI::Selectable::Selectable_get_image
                                   (*(Selectable **)(in_stack_4 + 0x1c),(MethodInfo *)0x0),
               pIVar5 != (Image *)0x0)) {
              (*(pIVar5->klass->vtable).get_color.methodPtr)();
              (*(pIVar5->klass->vtable).set_color.methodPtr)();
              return;
            }
          }
        }
        func_?();
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
  }
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void <OnFirstTimeState>b__12_0(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::DesktopCubeModelingControllerCubeTutorial::
     DesktopCubeModelingControllerCubeTutorial__OnFirstTimeState_b__12_0
               (DesktopCubeModelingControllerCubeTutorial *this,IUIStack *x,BaseEventData *y,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__EventSystems__IUIStack);
    cRam_? = '\x01';
  }
  UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
            ((Component *)this,(MethodInfo *)0x0);
  if (x == (IUIStack *)0x0) {
    func_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  uVar2 = 0;
  uVar3 = (x->klass->_1).interface_offsets_count;
  if (uVar3 != 0) {
    do {
      if (x->klass->interfaceOffsets[uVar2].interfaceType ==
          (Il2CppClass *)TypeInfo__UnityEngine__EventSystems__IUIStack) {
        pVVar4 = &(x->klass->vtable).PopToStackElement + x->klass->interfaceOffsets[uVar2].offset;
        goto code_?;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar3);
  }
  pVVar4 = (VirtualInvokeData *)func_?(x,TypeInfo__UnityEngine__EventSystems__IUIStack,5);
code_?:
  cVar5 = (*pVVar4->methodPtr)(x,unaff_EBX,pVVar4->method);
  if (cVar5 != '\0') {
    func_?(2,TypeInfo__UnityEngine__EventSystems__IUIStack,x);
  }
  return;
}

