
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
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).materialsButtonImage;
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_01 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (this_01 != (MVNetworkGame *)0x0) {
    this_02 = DayNightCycle::DayNightCycle_get_CurrentMoonParam
                        ((DayNightCycle *)this_01,(MethodInfo *)0x0);
    if (this_02 != (CelestialParam *)0x0) {
      this_03 = (GamePointGainEffect *)
                MVMaterialRepository::MVMaterialRepository_GetMaterial
                          ((MVMaterialRepository *)this_02,materialId,(MethodInfo *)0x0);
      if (this_03 != (GamePointGainEffect *)0x0) {
        value = (Texture *)
                GamePointGainEffect::GamePointGainEffect_get_ID(this_03,(MethodInfo *)0x0);
        if (this_00 != (RawImage *)0x0) {
          UnityEngine.UI.dll::UnityEngine::UI::RawImage::RawImage_set_texture
                    (this_00,value,(MethodInfo *)0x0);
          pGVar1 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager
                             ((MethodInfo *)0x0);
          if (((pGVar1 != (GameEventManager *)0x0) &&
              (pGVar2 = (pGVar1->fields).AvatarCommandsBuildMode,
              pGVar2 != (GameEventManager_AvatarCommandsBuildModeManager *)0x0)) &&
             ((pGVar2->fields).LaserCommands !=
              (GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager *)0x0)) {
            if (cRam_? == '\0') {
              func_?();
              cRam_? = '\x01';
            }
            if (*(Action_1_UIPushOption_ **)(in_stack_3 + 0xc) !=
                (Action_1_UIPushOption_ *)0x0) {
              mscorlib.dll::System::Action`1[UIPushOption]::Action_1_UIPushOption__Invoke
                        (*(Action_1_UIPushOption_ **)(in_stack_3 + 0xc),in_stack_4,
                         MethodInfo__System__Action<unsigned_char>__Invoke_unsigned_char_);
            }
            return;
          }
        }
      }
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  (this->fields).materialsController = materialsController;
  (this->fields).cubeModelingStateMachine = cubeModelingStateMachine;
  if (cubeModelingStateMachine == (CubeModelingStateMachine *)0x0) {
code_?:
    func_?(0);
  }
  else {
    uVar1 = CubeModelingStateMachine::CubeModelingStateMachine_get_CurrentMaterialId
                      (cubeModelingStateMachine,(MethodInfo *)0x0);
    (this->fields).defaultMaterial = uVar1;
    pDVar2 = (this->fields).desktopCubeModelingController;
    if (pDVar2 == (DesktopCubeModelingToolsController *)0x0) goto code_?;
    (pDVar2->fields).cubeModelingStateMachine = cubeModelingStateMachine;
    pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
             func_?(
                            TypeInfo__System__Action<MV::WorldObject::MetaData::FirstTimeState,_MV::WorldObject::MetaData::FirstTimeEvent>
                            );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (pUVar3,(Object *)this,
               MethodInfo__DesktopCubeModelingControllerCubeTutorial__OnFirstTimeState_MV__WorldObject__MetaData__FirstTimeState__MV__WorldObject__MetaData__FirstTimeEvent_
               ,
               MethodInfo__System__Action<MV::WorldObject::MetaData::FirstTimeState,_MV::WorldObject::MetaData::FirstTimeEvent>__Action_System__Object__void__
              );
    if ((((uint)(TypeInfo__FirstTimeEventManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__FirstTimeEventManager->_1).cctor_started == 0)) {
      func_?(TypeInfo__FirstTimeEventManager);
    }
    FirstTimeEventManager::FirstTimeEventManager_SubscribeToFirstTimeState
              ((Action_2_MV_WorldObject_MetaData_FirstTimeState_MV_WorldObject_MetaData_FirstTimeEvent_
                *)pUVar3,(MethodInfo *)0x0);
    if (materialsController == (MaterialsController *)0x0) goto code_?;
    pUVar4 = (materialsController->fields).materialChange;
    pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
             func_?(TypeInfo__UnityEngine__Events__UnityAction<unsigned_char>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (pUVar3,(Object *)this,
               MethodInfo__DesktopCubeModelingControllerCubeTutorial__SetMaterial_unsigned_char_,
               MethodInfo__UnityEngine__Events__UnityAction<unsigned_char>__UnityAction_System__Object__void__
              );
    pUVar5 = (UnityAction_1_System_Byte_ *)
             mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)pUVar4,(Delegate *)pUVar3,(MethodInfo *)0x0);
    pUVar4 = (UnityAction_1_System_Byte_ *)0x0;
    if (pUVar5 != (UnityAction_1_System_Byte_ *)0x0) {
      if (pUVar5->klass == TypeInfo__UnityEngine__Events__UnityAction<unsigned_char>) {
        pUVar4 = pUVar5;
      }
      if (pUVar4 == (UnityAction_1_System_Byte_ *)0x0) goto code_?;
    }
    (materialsController->fields).materialChange = pUVar4;
    a = (materialsController->fields).materialsPop;
    pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
             func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (pUVar3,(Object *)this,
               MethodInfo__DesktopCubeModelingControllerCubeTutorial__MaterialsPop__,
               (MethodInfo *)0x0);
    pDVar6 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)pUVar3,(MethodInfo *)0x0);
    if (pDVar6 == (Delegate *)0x0) {
      pDRam00000030 = (Delegate *)0x0;
      return;
    }
    pDVar7 = (Delegate *)0x0;
    if ((UnityAction__Class *)pDVar6->klass == TypeInfo__UnityEngine__Events__UnityAction) {
      pDVar7 = pDVar6;
    }
    if (pDVar7 != (Delegate *)0x0) {
      pDRam00000030 = pDVar7;
      return;
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = 
  TypeInfo__DesktopCubeModelingControllerCubeTutorial___OverRideIfDefaultMaterial_c__Iterator0;
  this_00 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,(MethodInfo *)method_00);
  if (this_00 != (ScaleAnimationBase *)0x0) {
    (this_00->fields)._._._._.m_CachedPtr = this;
    UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StartCoroutine_Auto
              ((MonoBehaviour *)this,(IEnumerator *)this_00,(MethodInfo *)0x0);
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  (this->fields).cubeModelingStateMachine = (CubeModelingStateMachine *)0x0;
  pUVar1 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
           func_?(
                          TypeInfo__System__Action<MV::WorldObject::MetaData::FirstTimeState,_MV::WorldObject::MetaData::FirstTimeEvent>
                          );
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (pUVar1,(Object *)this,
             MethodInfo__DesktopCubeModelingControllerCubeTutorial__OnFirstTimeState_MV__WorldObject__MetaData__FirstTimeState__MV__WorldObject__MetaData__FirstTimeEvent_
             ,
             MethodInfo__System__Action<MV::WorldObject::MetaData::FirstTimeState,_MV::WorldObject::MetaData::FirstTimeEvent>__Action_System__Object__void__
            );
  if ((((uint)(TypeInfo__FirstTimeEventManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__FirstTimeEventManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__FirstTimeEventManager);
  }
  FirstTimeEventManager::FirstTimeEventManager_UnSubscribeToFirstTimeState
            ((Action_2_MV_WorldObject_MetaData_FirstTimeState_MV_WorldObject_MetaData_FirstTimeEvent_
              *)pUVar1,(MethodInfo *)0x0);
  pUVar2 = TypeInfo__UnityEngine__Events__UnityAction<unsigned_char>;
  pMVar3 = (this->fields).materialsController;
  if (pMVar3 != (MaterialsController *)0x0) {
    source = (pMVar3->fields).materialChange;
    pUVar1 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
             func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (pUVar1,(Object *)this,
               MethodInfo__DesktopCubeModelingControllerCubeTutorial__SetMaterial_unsigned_char_,
               MethodInfo__UnityEngine__Events__UnityAction<unsigned_char>__UnityAction_System__Object__void__
              );
    pIVar4 = (Il2CppClass *)
             mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)pUVar1,(MethodInfo *)0x0);
    pIVar5 = (Il2CppClass *)0x0;
    if (pIVar4 != (Il2CppClass *)0x0) {
      if ((UnityAction_1_System_Byte___Class *)pIVar4->image ==
          TypeInfo__UnityEngine__Events__UnityAction<unsigned_char>) {
        pIVar5 = pIVar4;
      }
      if (pIVar5 == (Il2CppClass *)0x0) goto code_?;
    }
    (pUVar2->_0).parent = pIVar5;
    pUVar6 = TypeInfo__UnityEngine__Events__UnityAction;
    pMVar3 = (this->fields).materialsController;
    if (pMVar3 != (MaterialsController *)0x0) {
      source_00 = (pMVar3->fields).materialsPop;
      pUVar1 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *
               )func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (pUVar1,(Object *)this,
                 MethodInfo__DesktopCubeModelingControllerCubeTutorial__MaterialsPop__,
                 (MethodInfo *)0x0);
      pDVar7 = mscorlib.dll::System::Delegate::Delegate_Remove
                         ((Delegate *)source_00,(Delegate *)pUVar1,(MethodInfo *)0x0);
      pDVar8 = (Delegate *)0x0;
      if (pDVar7 != (Delegate *)0x0) {
        if ((UnityAction__Class *)pDVar7->klass == TypeInfo__UnityEngine__Events__UnityAction) {
          pDVar8 = pDVar7;
        }
        if (pDVar8 == (Delegate *)0x0) goto code_?;
      }
      (pUVar6->_0).generic_class = (Il2CppGenericClass *)pDVar8;
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      if ((((uint)(TypeInfo__FirstTimeEventManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__FirstTimeEventManager->_1).cctor_started == 0)) {
        func_?();
      }
      this_00 = TypeInfo__FirstTimeEventManager->static_fields->firstTimeState;
      if (this_00 != (FirstTimeState *)0x0) {
        MVWorldObject.dll::MV::WorldObject::MetaData::FirstTimeState::
        FirstTimeState_SetFirstTimeEvent(this_00,in_stack_9,(MethodInfo *)0x0);
        if (TypeInfo__FirstTimeEventManager->static_fields->firstTimeStatePublisher !=
            (Action_2_MV_WorldObject_MetaData_FirstTimeState_MV_WorldObject_MetaData_FirstTimeEvent_
             *)0x0) {
          if ((((uint)(TypeInfo__FirstTimeEventManager->vtable).Equals.methodPtr & 0x2000000) != 0)
             && ((TypeInfo__FirstTimeEventManager->_1).cctor_started == 0)) {
            func_?();
          }
          this_01 = (Action_2_Object_UnityEngine_ReflectionProbe_ReflectionProbeEvent_ *)
                    TypeInfo__FirstTimeEventManager->static_fields->firstTimeStatePublisher;
          if (this_01 == (Action_2_Object_UnityEngine_ReflectionProbe_ReflectionProbeEvent_ *)0x0)
          goto code_?;
          System.Core.dll::System::Action`2[Object,UnityEngine::
          ReflectionProbe+ReflectionProbeEvent]::
          Action_2_Object_UnityEngine_ReflectionProbe_ReflectionProbeEvent__Invoke
                    (this_01,(Object *)
                             TypeInfo__FirstTimeEventManager->static_fields->firstTimeState,
                     in_stack_9,
                     MethodInfo__System__Action<MV::WorldObject::MetaData::FirstTimeState,_MV::WorldObject::MetaData::FirstTimeEvent>__Invoke_MV__WorldObject__MetaData__FirstTimeState__MV__WorldObject__MetaData__FirstTimeEvent_
                    );
        }
        if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
          func_?(TypeInfo__MVGameControllerBase);
        }
        this_02 = (MVJetPack *)
                  MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if (this_02 != (MVJetPack *)0x0) {
          this_03 = MVJetPack::MVJetPack_get_Shield(this_02,(MethodInfo *)0x0);
          if (this_03 != (MVRuntimeDataVariableClampedFloat *)0x0) {
            MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_SetFirstTimeEvent
                      ((MVNetworkGame_OperationRequests *)this_03,in_stack_9,
                       (MethodInfo *)0x0);
            return;
          }
        }
      }
code_?:
      func_?();
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
  }
  func_?();
code_?:
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void OnFirstTimeState(FirstTimeState, FirstTimeEvent) */

void Assembly-CSharp.dll::DesktopCubeModelingControllerCubeTutorial::
     DesktopCubeModelingControllerCubeTutorial_OnFirstTimeState
               (DesktopCubeModelingControllerCubeTutorial *this,FirstTimeState *firstTimeState,
               FirstTimeEvent__Enum firstTimeEvent,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (firstTimeEvent == (this->fields).exitFirstTimeEvent) {
    pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                       ((Component_1 *)this,(MethodInfo *)0x0);
    this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?(
                             TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                             );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_00,(Object *)this,
               MethodInfo__DesktopCubeModelingControllerCubeTutorial___OnFirstTimeState_m__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,
               MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
              );
    if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
         0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy_63
              (pGVar1,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_IHandleToolTip_ *)this_00,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
              );
    if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Debug);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
              ((Object *)StringLiteral_Trying_to_pop,(MethodInfo *)0x0);
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pGVar1 = (this->fields).deleteTool;
  if (pGVar1 == (GameObject *)0x0) goto code_?;
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                    (pGVar1,(MethodInfo *)0x0);
  if (bVar2 == 0) {
    if ((((uint)(TypeInfo__FirstTimeEventManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__FirstTimeEventManager->_1).cctor_started == 0)) {
      func_?(TypeInfo__FirstTimeEventManager);
    }
    bVar2 = FirstTimeEventManager::FirstTimeEventManager_HasFirstTimeEventOccured
                      (FirstTimeEvent__Enum_BM_CubeTutorialPaintedCubes,(MethodInfo *)0x0);
    if (bVar2 != 0) {
      DesktopCubeModelingControllerCubeTutorial_DeactivateAllToolButtons(this,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Debug);
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
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__FirstTimeEventManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__FirstTimeEventManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__FirstTimeEventManager);
  }
  bVar2 = FirstTimeEventManager::FirstTimeEventManager_HasFirstTimeEventOccured
                    (FirstTimeEvent__Enum_BM_CubeTutorialAddedCubes,(MethodInfo *)0x0);
  if (bVar2 == 0) {
    return;
  }
  if ((((uint)(TypeInfo__FirstTimeEventManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__FirstTimeEventManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__FirstTimeEventManager);
  }
  bVar2 = FirstTimeEventManager::FirstTimeEventManager_HasFirstTimeEventOccured
                    (FirstTimeEvent__Enum_BM_ChangeToolToPaint,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    pFVar4 = (this->fields).materialButton;
    if (pFVar4 == (FirstTimeCubeEditFadeButtons *)0x0) goto code_?;
    bVar2 = FirstTimeCubeEditFadeButtons::FirstTimeCubeEditFadeButtons_IsEnabled
                      (pFVar4,(MethodInfo *)0x0);
    if (bVar2 == 0) {
      if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
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
  func_?(0);
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = 
  TypeInfo__DesktopCubeModelingControllerCubeTutorial___OverRideIfDefaultMaterial_c__Iterator0;
  this_00 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,(MethodInfo *)method_00);
  if (this_00 != (ScaleAnimationBase *)0x0) {
    (this_00->fields)._._._._.m_CachedPtr = this;
    return (IEnumerator *)this_00;
  }
  func_?(0);
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pGVar1 = (this->fields).deleteTool;
  if (pGVar1 != (GameObject *)0x0) {
    bVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                      (pGVar1,(MethodInfo *)0x0);
    if (bVar2 == 0) {
      if ((((uint)(TypeInfo__FirstTimeEventManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__FirstTimeEventManager->_1).cctor_started == 0)) {
        func_?(TypeInfo__FirstTimeEventManager);
      }
      bVar2 = FirstTimeEventManager::FirstTimeEventManager_HasFirstTimeEventOccured
                        (FirstTimeEvent__Enum_BM_CubeTutorialPaintedCubes,(MethodInfo *)0x0);
      if (bVar2 != 0) {
        DesktopCubeModelingControllerCubeTutorial_DeactivateAllToolButtons(this,(MethodInfo *)0x0);
        if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
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
            pBVar3 = (in_stack_4->fields).editCube;
            if (pBVar3 != (Button *)0x0) {
              pIVar5 = UnityEngine.UI.dll::UnityEngine::UI::Selectable::Selectable_get_image
                                 ((Selectable *)pBVar3,(MethodInfo *)0x0);
              DesktopCubeModelingToolsController::DesktopCubeModelingToolsController_SetAlpha
                        (in_stack_4,pIVar5,(in_stack_4->fields).disabledAlpha,
                         (MethodInfo *)0x0);
              pBVar3 = (in_stack_4->fields).deletecube;
              if (pBVar3 != (Button *)0x0) {
                pIVar5 = UnityEngine.UI.dll::UnityEngine::UI::Selectable::Selectable_get_image
                                   ((Selectable *)pBVar3,(MethodInfo *)0x0);
                DesktopCubeModelingToolsController::DesktopCubeModelingToolsController_SetAlpha
                          (in_stack_4,pIVar5,(in_stack_4->fields).disabledAlpha,
                           (MethodInfo *)0x0);
                pBVar3 = (in_stack_4->fields).paintCube;
                if (pBVar3 != (Button *)0x0) {
                  pIVar5 = UnityEngine.UI.dll::UnityEngine::UI::Selectable::Selectable_get_image
                                     ((Selectable *)pBVar3,(MethodInfo *)0x0);
                  DesktopCubeModelingToolsController::DesktopCubeModelingToolsController_SetAlpha
                            (in_stack_4,pIVar5,(in_stack_4->fields).disabledAlpha,
                             (MethodInfo *)0x0);
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__FirstTimeEventManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__FirstTimeEventManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__FirstTimeEventManager);
  }
  bVar1 = FirstTimeEventManager::FirstTimeEventManager_HasFirstTimeEventOccured
                    (FirstTimeEvent__Enum_BM_CubeTutorialAddedCubes,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    return;
  }
  if ((((uint)(TypeInfo__FirstTimeEventManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__FirstTimeEventManager->_1).cctor_started == 0)) {
    func_?();
  }
  bVar1 = FirstTimeEventManager::FirstTimeEventManager_HasFirstTimeEventOccured
                    (FirstTimeEvent__Enum_BM_ChangeToolToPaint,(MethodInfo *)0x0);
  if (bVar1 != 0) {
    pFVar2 = (this->fields).materialButton;
    if (pFVar2 == (FirstTimeCubeEditFadeButtons *)0x0) goto code_?;
    bVar1 = FirstTimeCubeEditFadeButtons::FirstTimeCubeEditFadeButtons_IsEnabled
                      (pFVar2,(MethodInfo *)0x0);
    if (bVar1 == 0) {
      if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
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
        pBVar4 = (in_stack_5->fields).editCube;
        if (pBVar4 != (Button *)0x0) {
          pIVar6 = UnityEngine.UI.dll::UnityEngine::UI::Selectable::Selectable_get_image
                             ((Selectable *)pBVar4,(MethodInfo *)0x0);
          DesktopCubeModelingToolsController::DesktopCubeModelingToolsController_SetAlpha
                    (in_stack_5,pIVar6,(in_stack_5->fields).disabledAlpha,
                     (MethodInfo *)0x0);
          pBVar4 = (in_stack_5->fields).deletecube;
          if (pBVar4 != (Button *)0x0) {
            pIVar6 = UnityEngine.UI.dll::UnityEngine::UI::Selectable::Selectable_get_image
                               ((Selectable *)pBVar4,(MethodInfo *)0x0);
            DesktopCubeModelingToolsController::DesktopCubeModelingToolsController_SetAlpha
                      (in_stack_5,pIVar6,(in_stack_5->fields).disabledAlpha,
                       (MethodInfo *)0x0);
            pBVar4 = (in_stack_5->fields).paintCube;
            if (pBVar4 != (Button *)0x0) {
              pIVar6 = UnityEngine.UI.dll::UnityEngine::UI::Selectable::Selectable_get_image
                                 ((Selectable *)pBVar4,(MethodInfo *)0x0);
              DesktopCubeModelingToolsController::DesktopCubeModelingToolsController_SetAlpha
                        (in_stack_5,pIVar6,(in_stack_5->fields).disabledAlpha,
                         (MethodInfo *)0x0);
              return;
            }
          }
        }
        func_?();
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
  }
code_?:
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void <OnFirstTimeState>m__0(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::DesktopCubeModelingControllerCubeTutorial::
     DesktopCubeModelingControllerCubeTutorial__OnFirstTimeState_m__0
               (DesktopCubeModelingControllerCubeTutorial *this,IUIStack *x,BaseEventData *y,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                     ((Component_1 *)this,(MethodInfo *)0x0);
  if (x != (IUIStack *)0x0) {
    cVar2 = func_?(5,TypeInfo__UnityEngine__EventSystems__IUIStack,x,pGVar1);
    if (cVar2 != '\0') {
      func_?(2,TypeInfo__UnityEngine__EventSystems__IUIStack,x);
    }
    return;
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

