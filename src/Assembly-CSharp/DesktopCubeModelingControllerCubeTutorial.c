
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
        pAVar7 = (pGVar6->fields).OnCubeMaterialChanged;
        if (pAVar7 != (Action_1_Byte__1 *)0x0) {
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
  ppMVar1 = &(this->fields).materialsController;
  *ppMVar1 = materialsController;
  func_?(ppMVar1,materialsController);
  ppCVar2 = &(this->fields).cubeModelingStateMachine;
  *ppCVar2 = cubeModelingStateMachine;
  func_?(ppCVar2,cubeModelingStateMachine);
  if (cubeModelingStateMachine == (CubeModelingStateMachine *)0x0) {
code_?:
    func_?();
code_?:
    func_?();
code_?:
    func_?();
  }
  else {
    uVar3 = CubeModelingStateMachine::CubeModelingStateMachine_get_CurrentMaterialId
                      (cubeModelingStateMachine,(MethodInfo *)0x0);
    (this->fields).defaultMaterial = uVar3;
    pDVar4 = (this->fields).desktopCubeModelingController;
    if (pDVar4 == (DesktopCubeModelingToolsController *)0x0) goto code_?;
    ppCVar2 = &(pDVar4->fields).cubeModelingStateMachine;
    *ppCVar2 = cubeModelingStateMachine;
    func_?(ppCVar2,cubeModelingStateMachine);
    this_00 = (EventHandler_1_Object_ *)
              func_?(
                             TypeInfo__System__Action<MV::WorldObject::MetaData::FirstTimeState,_MV::WorldObject::MetaData::FirstTimeEvent>
                             );
    mscorlib.dll::System::EventHandler`1[Object]::EventHandler_1_Object___ctor
              (this_00,(Object *)this,
               MethodInfo__DesktopCubeModelingControllerCubeTutorial__OnFirstTimeState_MV__WorldObject__MetaData__FirstTimeState__MV__WorldObject__MetaData__FirstTimeEvent_
               ,(MethodInfo *)0x0);
    FirstTimeEventManager::FirstTimeEventManager_SubscribeToFirstTimeState
              ((Action_2_MV_WorldObject_MetaData_FirstTimeState_MV_WorldObject_MetaData_FirstTimeEvent_
                *)this_00,(MethodInfo *)0x0);
    if (materialsController == (MaterialsController *)0x0) goto code_?;
    ppUVar5 = &(materialsController->fields).materialChange;
    pUVar6 = *ppUVar5;
    this_01 = (UnityAction_1_System_Int32Enum_ *)
              func_?(TypeInfo__UnityEngine__Events__UnityAction<unsigned_char>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
    UnityAction_1_System_Int32Enum___ctor
              (this_01,(Object *)this,
               MethodInfo__DesktopCubeModelingControllerCubeTutorial__SetMaterial_unsigned_char_,
               (MethodInfo *)0x0);
    pDVar7 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)pUVar6,(Delegate *)this_01,(MethodInfo *)0x0);
    if (pDVar7 == (Delegate *)0x0) {
      *ppUVar5 = (UnityAction_1_System_Byte_ *)0x0;
code_?:
      func_?();
      ppMVar8 = &materialsController[1].fields.materialViewItemPrefab;
      pDVar7 = (Delegate *)*ppMVar8;
      this_02 = (NavMesh_OnNavMeshPreUpdate *)func_?();
      UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
      NavMesh_OnNavMeshPreUpdate__ctor
                (this_02,(Object *)this,
                 MethodInfo__DesktopCubeModelingControllerCubeTutorial__MaterialsPop__,
                 (MethodInfo *)0x0);
      pDVar7 = mscorlib.dll::System::Delegate::Delegate_Combine
                         (pDVar7,(Delegate *)this_02,(MethodInfo *)0x0);
      if (pDVar7 == (Delegate *)0x0) {
        *ppMVar8 = (MaterialViewItem *)0x0;
        func_?();
        return;
      }
      pDVar9 = (Delegate *)0x0;
      if ((UnityAction__Class *)pDVar7->klass == TypeInfo__UnityEngine__Events__UnityAction) {
        pDVar9 = pDVar7;
      }
      if (pDVar9 != (Delegate *)0x0) {
        *ppMVar8 = (MaterialViewItem *)pDVar9;
        pDVar9 = (Delegate *)0x0;
        if ((UnityAction__Class *)pDVar7->klass == TypeInfo__UnityEngine__Events__UnityAction) {
          pDVar9 = pDVar7;
        }
        if (pDVar9 != (Delegate *)0x0) {
          func_?();
          return;
        }
        goto code_?;
      }
      goto code_?;
    }
    pUVar6 = (UnityAction_1_System_Byte_ *)func_?();
    if (pUVar6 == (UnityAction_1_System_Byte_ *)0x0) goto code_?;
    *ppUVar5 = pUVar6;
    iVar10 = func_?();
    if (iVar10 != 0) goto code_?;
  }
  func_?();
code_?:
  func_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
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
  method_00 = TypeInfo__DesktopCubeModelingControllerCubeTutorial___OverRideIfDefaultMaterial_d__20;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  value[1].klass = (Object__Class *)0x0;
  value[2].klass = (Object__Class *)this;
  func_?(value + 2,this);
  UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StartCoroutine_Auto
            ((MonoBehaviour *)this,(IEnumerator *)value,(MethodInfo *)0x0);
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
  ppCVar1 = &(this->fields).cubeModelingStateMachine;
  *ppCVar1 = (CubeModelingStateMachine *)0x0;
  func_?(ppCVar1,0);
  this_02 = (EventHandler_1_Object_ *)
            func_?(
                           TypeInfo__System__Action<MV::WorldObject::MetaData::FirstTimeState,_MV::WorldObject::MetaData::FirstTimeEvent>
                           );
  mscorlib.dll::System::EventHandler`1[Object]::EventHandler_1_Object___ctor
            (this_02,(Object *)this,
             MethodInfo__DesktopCubeModelingControllerCubeTutorial__OnFirstTimeState_MV__WorldObject__MetaData__FirstTimeState__MV__WorldObject__MetaData__FirstTimeEvent_
             ,(MethodInfo *)0x0);
  FirstTimeEventManager::FirstTimeEventManager_UnSubscribeToFirstTimeState
            ((Action_2_MV_WorldObject_MetaData_FirstTimeState_MV_WorldObject_MetaData_FirstTimeEvent_
              *)this_02,(MethodInfo *)0x0);
  pUVar2 = TypeInfo__UnityEngine__Events__UnityAction<unsigned_char>;
  pMVar3 = (this->fields).materialsController;
  if (pMVar3 == (MaterialsController *)0x0) {
code_?:
    func_?();
code_?:
    func_?();
code_?:
    func_?();
  }
  else {
    source = (pMVar3->fields).materialChange;
    this_03 = (UnityAction_1_System_Int32Enum_ *)func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
    UnityAction_1_System_Int32Enum___ctor
              (this_03,(Object *)this,
               MethodInfo__DesktopCubeModelingControllerCubeTutorial__SetMaterial_unsigned_char_,
               (MethodInfo *)0x0);
    pDVar4 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)this_03,(MethodInfo *)0x0);
    if (pDVar4 == (Delegate *)0x0) {
      (pUVar2->_0).generic_class = (Il2CppGenericClass *)0x0;
code_?:
      func_?();
      pUVar5 = TypeInfo__UnityEngine__Events__UnityAction;
      pMVar3 = (this->fields).materialsController;
      if (pMVar3 == (MaterialsController *)0x0) goto code_?;
      source_00 = (pMVar3->fields).materialsPop;
      this_04 = (NavMesh_OnNavMeshPreUpdate *)func_?();
      UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
      NavMesh_OnNavMeshPreUpdate__ctor
                (this_04,(Object *)this,
                 MethodInfo__DesktopCubeModelingControllerCubeTutorial__MaterialsPop__,
                 (MethodInfo *)0x0);
      pDVar4 = mscorlib.dll::System::Delegate::Delegate_Remove
                         ((Delegate *)source_00,(Delegate *)this_04,(MethodInfo *)0x0);
      if (pDVar4 == (Delegate *)0x0) {
        (pUVar5->_0).typeMetadataHandle = (Il2CppMetadataTypeHandle)0x0;
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
          pAVar7 = TypeInfo__FirstTimeEventManager->static_fields->firstTimeStatePublisher;
          if (pAVar7 != (Action_2_MV_WorldObject_MetaData_FirstTimeState_MV_WorldObject_MetaData_FirstTimeEvent_
                         *)0x0) {
            (*(pAVar7->fields)._._.invoke_impl)();
          }
          pMVar8 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          if ((pMVar8 != (MVNetworkGame *)0x0) &&
             (this_01 = (pMVar8->fields).operationRequests,
             this_01 != (MVNetworkGame_OperationRequests *)0x0)) {
            MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_SetFirstTimeEvent
                      (this_01,in_stack_6,(MethodInfo *)0x0);
            return;
          }
        }
        func_?();
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      pDVar10 = (Delegate *)0x0;
      if ((UnityAction__Class *)pDVar4->klass == TypeInfo__UnityEngine__Events__UnityAction) {
        pDVar10 = pDVar4;
      }
      if (pDVar10 != (Delegate *)0x0) {
        (pUVar5->_0).typeMetadataHandle = (Il2CppMetadataTypeHandle)pDVar10;
        pDVar10 = (Delegate *)0x0;
        if ((UnityAction__Class *)pDVar4->klass == TypeInfo__UnityEngine__Events__UnityAction) {
          pDVar10 = pDVar4;
        }
        if (pDVar10 != (Delegate *)0x0) goto code_?;
        goto code_?;
      }
      goto code_?;
    }
    pIVar11 = (Il2CppGenericClass *)func_?();
    if (pIVar11 == (Il2CppGenericClass *)0x0) goto code_?;
    (pUVar2->_0).generic_class = pIVar11;
    iVar12 = func_?();
    if (iVar12 != 0) goto code_?;
  }
  func_?();
code_?:
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void OnFirstTimeState(FirstTimeState, FirstTimeEvent) */

void Assembly-CSharp.dll::DesktopCubeModelingControllerCubeTutorial::
     DesktopCubeModelingControllerCubeTutorial_OnFirstTimeState
               (DesktopCubeModelingControllerCubeTutorial *this,FirstTimeState *firstTimeState,
               FirstTimeEvent__Enum firstTimeEvent,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__DesktopCubeModelingControllerCubeTutorial___OnFirstTimeState_b__13_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
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
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)this,
               MethodInfo__DesktopCubeModelingControllerCubeTutorial___OnFirstTimeState_b__13_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
              (pGVar1,(BaseEventData *)0x0,callbackFunction,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
              );
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
    pGVar1 = (this->fields).deleteTool;
    if (pGVar1 == (GameObject *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar1,1,(MethodInfo *)0x0);
    pDVar3 = (this->fields).desktopCubeModelingToolsController;
    if (pDVar3 == (DesktopCubeModelingToolsController *)0x0) goto code_?;
    DesktopCubeModelingToolsController::DesktopCubeModelingToolsController_SetAllToTransparent
              (pDVar3,(MethodInfo *)0x0);
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
  method_00 = TypeInfo__DesktopCubeModelingControllerCubeTutorial___OverRideIfDefaultMaterial_d__20;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  value[1].klass = (Object__Class *)0x0;
  value[2].klass = (Object__Class *)this;
  func_?(value + 2,this);
  return (IEnumerator *)value;
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
  pGVar1 = (this->fields).deleteTool;
  if (pGVar1 == (GameObject *)0x0) {
code_?:
    func_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  bVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                    (pGVar1,(MethodInfo *)0x0);
  if (bVar3 == 0) {
    bVar3 = FirstTimeEventManager::FirstTimeEventManager_HasFirstTimeEventOccured
                      (FirstTimeEvent__Enum_BM_CubeTutorialPaintedCubes,(MethodInfo *)0x0);
    if (bVar3 != 0) {
      DesktopCubeModelingControllerCubeTutorial_DeactivateAllToolButtons(this,(MethodInfo *)0x0);
      pGVar1 = (this->fields).deleteTool;
      if (pGVar1 != (GameObject *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar1,1,(MethodInfo *)0x0);
        if ((this->fields).desktopCubeModelingToolsController !=
            (DesktopCubeModelingToolsController *)0x0) {
          if (*(Selectable **)(in_stack_4 + 0x14) != (Selectable *)0x0) {
            pIVar5 = UnityEngine.UI.dll::UnityEngine::UI::Selectable::Selectable_get_image
                               (*(Selectable **)(in_stack_4 + 0x14),(MethodInfo *)0x0);
            if (pIVar5 != (Image *)0x0) {
              puVar6 = (undefined4 *)(*(code *)(pIVar5->klass->vtable).get_color.method)();
              (*(code *)(pIVar5->klass->vtable).set_color.method)(pIVar5,*puVar6);
              if (*(Selectable **)(in_stack_4 + 0x18) != (Selectable *)0x0) {
                pIVar5 = UnityEngine.UI.dll::UnityEngine::UI::Selectable::Selectable_get_image
                                   (*(Selectable **)(in_stack_4 + 0x18),(MethodInfo *)0x0);
                if (pIVar5 != (Image *)0x0) {
                  puVar6 = (undefined4 *)(*(code *)(pIVar5->klass->vtable).get_color.method)();
                  (*(code *)(pIVar5->klass->vtable).set_color.method)(pIVar5,*puVar6);
                  if (*(Selectable **)(in_stack_4 + 0x1c) != (Selectable *)0x0) {
                    pIVar5 = UnityEngine.UI.dll::UnityEngine::UI::Selectable::Selectable_get_image
                                       (*(Selectable **)(in_stack_4 + 0x1c),(MethodInfo *)0x0
                                       );
                    if (pIVar5 != (Image *)0x0) {
                      puVar6 = (undefined4 *)(*(code *)(pIVar5->klass->vtable).get_color.method)();
                      (*(code *)(pIVar5->klass->vtable).set_color.method)(pIVar5,*puVar6);
                      if (*(Selectable **)(in_stack_4 + 0x20) != (Selectable *)0x0) {
                        pIVar5 = UnityEngine.UI.dll::UnityEngine::UI::Selectable::
                                 Selectable_get_image
                                           (*(Selectable **)(in_stack_4 + 0x20),
                                            (MethodInfo *)0x0);
                        if (pIVar5 != (Image *)0x0) {
                          puVar6 = (undefined4 *)
                                   (*(code *)(pIVar5->klass->vtable).get_color.method)();
                          (*(code *)(pIVar5->klass->vtable).set_color.method)(pIVar5,*puVar6);
                          return;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          func_?();
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      goto code_?;
    }
  }
  return;
}


/* Void UpdatePaint() */

void Assembly-CSharp.dll::DesktopCubeModelingControllerCubeTutorial::
     DesktopCubeModelingControllerCubeTutorial_UpdatePaint
               (DesktopCubeModelingControllerCubeTutorial *this,MethodInfo *method)

{
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
          (*(code *)(pIVar5->klass->vtable).get_color.method)();
          (*(code *)(pIVar5->klass->vtable).set_color.method)();
          if ((*(Selectable **)(in_stack_4 + 0x18) != (Selectable *)0x0) &&
             (pIVar5 = UnityEngine.UI.dll::UnityEngine::UI::Selectable::Selectable_get_image
                                 (*(Selectable **)(in_stack_4 + 0x18),(MethodInfo *)0x0),
             pIVar5 != (Image *)0x0)) {
            (*(code *)(pIVar5->klass->vtable).get_color.method)();
            (*(code *)(pIVar5->klass->vtable).set_color.method)();
            if ((*(Selectable **)(in_stack_4 + 0x1c) != (Selectable *)0x0) &&
               (pIVar5 = UnityEngine.UI.dll::UnityEngine::UI::Selectable::Selectable_get_image
                                   (*(Selectable **)(in_stack_4 + 0x1c),(MethodInfo *)0x0),
               pIVar5 != (Image *)0x0)) {
              (*(code *)(pIVar5->klass->vtable).get_color.method)();
              (*(code *)(pIVar5->klass->vtable).set_color.method)();
              if ((*(Selectable **)(in_stack_4 + 0x20) != (Selectable *)0x0) &&
                 (pIVar5 = UnityEngine.UI.dll::UnityEngine::UI::Selectable::Selectable_get_image
                                     (*(Selectable **)(in_stack_4 + 0x20),(MethodInfo *)0x0),
                 pIVar5 != (Image *)0x0)) {
                (*(code *)(pIVar5->klass->vtable).get_color.method)();
                (*(code *)(pIVar5->klass->vtable).set_color.method)();
                return;
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
  }
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void <OnFirstTimeState>b__13_0(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::DesktopCubeModelingControllerCubeTutorial::
     DesktopCubeModelingControllerCubeTutorial__OnFirstTimeState_b__13_0
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
  pIVar2 = x->klass;
  uVar3 = 0;
  uVar4._0_1_ = (pIVar2->_1).rank;
  uVar4._1_1_ = (pIVar2->_1).minimumAlignment;
  if (uVar4 != 0) {
    do {
      if (pIVar2->interfaceOffsets[uVar3].interfaceType ==
          (Il2CppClass *)TypeInfo__UnityEngine__EventSystems__IUIStack) {
        ppMVar5 = &(&(x->klass->vtable).PopToStackElement)[pIVar2->interfaceOffsets[uVar3].offset].
                   method;
        goto code_?;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar4);
  }
  ppMVar5 = (MethodInfo **)func_?(x,TypeInfo__UnityEngine__EventSystems__IUIStack,5);
code_?:
  cVar6 = (*(code *)*ppMVar5)(x,unaff_EBX,ppMVar5[1]);
  if (cVar6 != '\0') {
    func_?(2,TypeInfo__UnityEngine__EventSystems__IUIStack,x);
  }
  return;
}

