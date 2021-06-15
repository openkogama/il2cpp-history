
/* Void Awake() */

void Assembly-CSharp.dll::DesktopEditModeController::DesktopEditModeController_Awake
               (DesktopEditModeController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pCVar1 = (this->fields).chatController;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  pCVar1 = (ChatControllerUGUI *)
           UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                     ((XpBoostParticlePreviewer *)pCVar1,
                      ChatControllerUGUI_MethodInfo__UnityEngine__Object__Instantiate<ChatControllerUGUI>_ChatControllerUGUI_
                     );
  (this->fields).chatController = pCVar1;
  if (pCVar1 != (ChatControllerUGUI *)0x0) {
    this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                        ((Component_1 *)pCVar1,(MethodInfo *)0x0);
    this_00 = (this->fields).stackBottom;
    if (this_00 != (GameObject *)0x0) {
      parent = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                         (this_00,(MethodInfo *)0x0);
      if (this_01 != (Transform *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                  (this_01,parent,0,(MethodInfo *)0x0);
        pCVar1 = (this->fields).chatController;
        if (pCVar1 != (ChatControllerUGUI *)0x0) {
          ChatControllerUGUI::ChatControllerUGUI_SubscribeToMessages(pCVar1,(MethodInfo *)0x0);
          pUVar2 = (this->fields).uiStack;
          if (pUVar2 != (UIStack *)0x0) {
            UIStack::UIStack_Push
                      (pUVar2,(this->fields).stackBottom,UIPushOption__Enum_None,(UnityAction *)0x0,
                       UIGroupFlags__Enum_StackBottom,(MethodInfo *)0x0);
            MVGameControllerDesktop::MVGameControllerDesktop_RegisterEditModeController
                      (this,(MethodInfo *)0x0);
            if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0)
               && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
              func_?();
            }
            this_02 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
            if (this_02 != (MVNetworkGame *)0x0) {
              this_03 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_02,(MethodInfo *)0x0);
              if (this_03 != (MVLocalPlayer *)0x0) {
                bVar3 = MVPlayer::MVPlayer_get_IsReady((MVPlayer *)this_03,(MethodInfo *)0x0);
                if (bVar3 == 0) {
                  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000)
                       != 0) && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
                    func_?();
                  }
                  pAVar4 = MVGameControllerBase::
                           MVGameControllerBase_get_OnFirstFrameUpdateActorReady((MethodInfo *)0x0);
                  pUVar5 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                            *)func_?();
                  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
                  SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
                  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                            (pUVar5,(Object *)this,
                             MethodInfo__DesktopEditModeController__SetUIReady__,(MethodInfo *)0x0);
                  pDStack6 =
                       mscorlib.dll::System::Delegate::Delegate_Combine
                                 ((Delegate *)pAVar4,(Delegate *)pUVar5,(MethodInfo *)0x0);
                }
                else {
                  if (cRam_? == '\0') {
                    func_?();
                    cRam_? = '\x01';
                  }
                  pUVar2 = (this->fields).uiStack;
                  if (pUVar2 == (UIStack *)0x0) goto code_?;
                  UIStack::UIStack_SetStackReady(pUVar2,(MethodInfo *)0x0);
                  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000)
                       != 0) && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
                    func_?();
                  }
                  pAVar4 = MVGameControllerBase::
                           MVGameControllerBase_get_OnFirstFrameUpdateActorReady((MethodInfo *)0x0);
                  pUVar5 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                            *)func_?();
                  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
                  SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
                  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                            (pUVar5,(Object *)this,
                             MethodInfo__DesktopEditModeController__SetUIReady__,(MethodInfo *)0x0);
                  pDStack6 =
                       mscorlib.dll::System::Delegate::Delegate_Remove
                                 ((Delegate *)pAVar4,(Delegate *)pUVar5,(MethodInfo *)0x0);
                }
                if (pDStack6 == (Delegate *)0x0) {
Assembly_CSharp_dll_MVGameControllerBase_MVGameControllerBase_set_OnFirstFrameUpdateActorReady:
                  if (cRam_? == '\0') {
                    pMStack7 = (MVGameControllerBase__Class *)_UNK_?;
                    func_?();
                    cRam_? = '\x01';
                  }
                  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000)
                       != 0) && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
                    pMStack7 = TypeInfo__MVGameControllerBase;
                    func_?();
                  }
                  pMVar8 = TypeInfo__MVGameControllerBase->static_fields->instance;
                  if ((pMVar8 != (MVGameControllerBase *)0x0) &&
                     (pFVar9 = (pMVar8->fields).firstFrameUpdateActorReady,
                     pFVar9 != (FirstFrameUpdateActorReady *)0x0)) {
                    (pFVar9->fields).callbacks = in_stack_10;
                    return;
                  }
                  pMStack7 = (MVGameControllerBase__Class *)0x0;
                  func_?();
                  pcVar11 = (code *)swi(3);
                  (*pcVar11)();
                  return;
                }
                pDVar12 = (Delegate *)0x0;
                if ((Action__Class *)pDStack6->klass == TypeInfo__System__Action) {
                  pDVar12 = pDStack6;
                }
                pAStack13 = TypeInfo__System__Action;
                if (pDVar12 != (Delegate *)0x0)
                goto 
                Assembly_CSharp_dll_MVGameControllerBase_MVGameControllerBase_set_OnFirstFrameUpdateActorReady
                ;
                goto code_?;
              }
            }
          }
        }
      }
    }
  }
code_?:
  func_?();
  pDStack6 = extraout_ECX;
  pAStack13 = extraout_EDX;
code_?:
  func_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void ClearStateStack() */

void Assembly-CSharp.dll::DesktopEditModeController::DesktopEditModeController_ClearStateStack
               (DesktopEditModeController *this,MethodInfo *method)

{
  pDVar1 = (DesktopEditModeController *)(this->fields)._EditModeStateMachine_k__BackingField;
  if (pDVar1 == (DesktopEditModeController *)0x0) {
    func_?(0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  method = (MethodInfo *)0x0;
  this = pDVar1;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pDVar1 = this;
  this_00 = (this->fields).editorWorldObjectCreation;
  if (this_00 != (EditorWorldObjectCreation *)0x0) {
    pOVar3 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
             Serialization::JsonProperty]::
             Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                       ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_00,
                        MethodInfo__System__Collections__Generic__Stack<EditorEvent>__get_Count__);
    if (0 < (int)pOVar3) {
      this_01 = (Stack_1_EditorEvent_ *)(pDVar1->fields).editorWorldObjectCreation;
      if (this_01 == (Stack_1_EditorEvent_ *)0x0) goto code_?;
      this = (DesktopEditModeController *)
             System.dll::System::Collections::Generic::Stack`1[EditorEvent]::
             Stack_1_EditorEvent__Pop
                       (this_01,MethodInfo__System__Collections__Generic__Stack<EditorEvent>__Pop__)
      ;
      *(undefined1 *)&(pDVar1->fields)._EditModeStateMachine_k__BackingField = 1;
      pOVar3 = (Object *)func_?(TypeInfo__EditorEvent,&this);
      FSMEntity::FSMEntity_set_Event((FSMEntity *)pDVar1,pOVar3,(MethodInfo *)0x0);
    }
    return;
  }
code_?:
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void DeleteWoid(Int32) */

void Assembly-CSharp.dll::DesktopEditModeController::DesktopEditModeController_DeleteWoid
               (DesktopEditModeController *this,int32_t woid,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__DesktopEditModeController___DeleteWoid_c__AnonStorey1;
  this_01 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this_01,0.0,(MethodInfo *)method_00);
  this_00 = (this->fields)._EditModeStateMachine_k__BackingField;
  if (this_00 != (EditorStateMachine *)0x0) {
    EditorStateMachine::EditorStateMachine_DeSelectAll(this_00,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?();
    }
    if (this_01 != (ScaleAnimationBase *)0x0) {
      (this_01->fields)._._._._.m_CachedPtr = TypeInfo__System__String->static_fields->Empty;
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?(TypeInfo__MVGameControllerBase);
      }
      pMVar1 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      if (pMVar1 != (MVWorldObjectClientManager *)0x0) {
        pMVar2 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                           (pMVar1,woid,(MethodInfo *)0x0);
        pMVar1 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
        if (pMVar2 != (MVWorldObject *)0x0) {
          cVar3 = (*(code *)pMVar2->klass[2]._0.byval_arg.data)(pMVar2,pMVar1,&this_01->fields);
          root_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                              ((Component_1 *)this,(MethodInfo *)0x0);
          if (cVar3 != '\0') {
            if (TypeInfo__DesktopEditModeController->static_fields->__f__am_cache0 ==
                (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
              pUVar4 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                        *)func_?();
              UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
              SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
              UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                        (pUVar4,(Object *)0x0,
                         MethodInfo__DesktopEditModeController___DeleteWoid_m__2_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                         ,
                         MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
                        );
              TypeInfo__DesktopEditModeController->static_fields->__f__am_cache0 =
                   (ExecuteEvents_EventFunction_1_IUIStack_ *)pUVar4;
            }
            callbackFunction =
                 (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)
                 TypeInfo__DesktopEditModeController->static_fields->__f__am_cache0;
            if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.
                        methodPtr & 0x2000000) != 0) &&
               ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
              func_?();
            }
            UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
            ExecuteEvents_ExecuteHierarchy_63
                      (root_00,(BaseEventData *)0x0,callbackFunction,
                       UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                      );
            return;
          }
          pUVar4 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                    *)func_?();
          root = 
          MethodInfo__DesktopEditModeController___DeleteWoid_c__AnonStorey1____m__0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
          ;
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
          SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
          UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                    (pUVar4,(Object *)this_01,
                     MethodInfo__DesktopEditModeController___DeleteWoid_c__AnonStorey1____m__0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                     ,
                     MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>__EventFunction_System__Object__void__
                    );
          if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr
               & 0x2000000) != 0) &&
             ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
            func_?();
          }
          UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
          ExecuteEvents_ExecuteHierarchy_63
                    ((GameObject *)root,(BaseEventData *)0x0,
                     (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)pUVar4,
                     UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
                    );
          return;
        }
      }
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void DisableEditMode() */

void Assembly-CSharp.dll::DesktopEditModeController::DesktopEditModeController_DisableEditMode
               (DesktopEditModeController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_01 = this;
  this_00 = (this->fields).desktopPlayModeController;
  (this->fields).isInPlayInEditMode = 1;
  if (this_00 != (DesktopPlayModeController *)0x0) {
    this_02 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                        ((Component_1 *)this_00,(MethodInfo *)0x0);
    if (this_02 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (this_02,1,(MethodInfo *)0x0);
      pDVar1 = (DesktopEditModeController *)
               UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                         ((Component_1 *)this_01,(MethodInfo *)0x0);
      if (pDVar1 != (DesktopEditModeController *)0x0) {
        method = (MethodInfo *)0x0;
        this = pDVar1;
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  ((GameObject *)pDVar1,0,(MethodInfo *)0x0);
        pDVar1 = (DesktopEditModeController *)(this_01->fields).editModeChange;
        if (pDVar1 != (DesktopEditModeController *)0x0) {
          uStack2 = 0;
          ppDStack3 = &this;
          this = (DesktopEditModeController *)((uint)this & 0xffffff00);
          uStack4 = 1;
          func_?();
          method = (MethodInfo *)this;
          pMVar5 = method;
          method._0_1_ = (bool)this;
          value = (bool)method;
          this = pDVar1;
          method = pMVar5;
          Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::
          SpawnRoleVariable`1[T]+SubDelegate[System::Boolean]::
          SpawnRoleVariable_1_T_SubDelegate_System_Boolean__Invoke
                    ((SpawnRoleVariable_1_T_SubDelegate_System_Boolean_ *)pDVar1,value,
                     MethodInfo__System__Action<EditModeChangeArgs>__Invoke_EditModeChangeArgs_);
        }
        (this_01->fields).enterBuildModeOnceGuard = 0;
        return;
      }
    }
  }
  func_?(0);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void EnterBuildMode() */

void Assembly-CSharp.dll::DesktopEditModeController::DesktopEditModeController_EnterBuildMode
               (DesktopEditModeController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_01 = this;
  bVar1 = cRam_? == '\0';
  (this->fields).isInPlayInEditMode = 0;
  if (bVar1) {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__DesktopEditModeController___HandleCursorVisible_c__Iterator0;
  this_02 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this_02,0.0,(MethodInfo *)method_00);
  UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StartCoroutine_Auto
            ((MonoBehaviour *)this_01,(IEnumerator *)this_02,(MethodInfo *)0x0);
  this_00 = (SpawnRoleVariable_1_T_SubDelegate_System_Boolean_ *)(this_01->fields).editModeChange;
  if (this_00 != (SpawnRoleVariable_1_T_SubDelegate_System_Boolean_ *)0x0) {
    this = (DesktopEditModeController *)0x0;
    func_?(&this);
    Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::
    SpawnRoleVariable`1[T]+SubDelegate[System::Boolean]::
    SpawnRoleVariable_1_T_SubDelegate_System_Boolean__Invoke
              (this_00,(bool)this,
               MethodInfo__System__Action<EditModeChangeArgs>__Invoke_EditModeChangeArgs_);
  }
  (this_01->fields).enterPlayModeOnceGuard = 0;
  return;
}


/* Void EnterPlayMode() */

void Assembly-CSharp.dll::DesktopEditModeController::DesktopEditModeController_EnterPlayMode
               (DesktopEditModeController *this,MethodInfo *method)

{
  pDVar1 = this;
  if ((this->fields).enterPlayModeOnceGuard != 0) {
    return;
  }
  pEVar2 = (this->fields)._EditModeStateMachine_k__BackingField;
  if (pEVar2 != (EditorStateMachine *)0x0) {
    FSMEntity::FSMEntity_ClearStateStack((FSMEntity *)pEVar2,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    pEVar2 = (pDVar1->fields)._EditModeStateMachine_k__BackingField;
    this = (DesktopEditModeController *)0x3a;
    value = (Object *)func_?(TypeInfo__EditorEvent,&this);
    if (pEVar2 != (EditorStateMachine *)0x0) {
      FSMEntity::FSMEntity_set_Event((FSMEntity *)pEVar2,value,(MethodInfo *)0x0);
      (pDVar1->fields).enterPlayModeOnceGuard = 1;
      return;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* IEnumerator HandleCursorVisible() */

IEnumerator *
Assembly-CSharp.dll::DesktopEditModeController::DesktopEditModeController_HandleCursorVisible
          (DesktopEditModeController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__DesktopEditModeController___HandleCursorVisible_c__Iterator0;
  this_00 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,(MethodInfo *)method_00);
  return (IEnumerator *)this_00;
}


/* Void HandleFocusInputSupress() */

void Assembly-CSharp.dll::DesktopEditModeController::
     DesktopEditModeController_HandleFocusInputSupress
               (DesktopEditModeController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((this->fields).focusSuppressInput != 0) {
    bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Input::Input_GetKeyUp
                      (KeyCode__Enum_Mouse0,(MethodInfo *)0x0);
    if (bVar1 == 0) {
      bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Input::Input_GetKeyDown
                        (KeyCode__Enum_Mouse1,(MethodInfo *)0x0);
    }
    else {
      bVar1 = 1;
    }
    fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_realtimeSinceStartup
                      ((MethodInfo *)0x0);
    if ((bVar1 == 0) && (fVar2 - (this->fields).focusTime <= _UNK_?)) {
      if ((((uint)(TypeInfo__MVInputWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVInputWrapper->_1).cctor_started == 0)) {
        func_?();
      }
      MVInputWrapper::MVInputWrapper_SuppressAllInput((MethodInfo *)0x0);
      return;
    }
    (this->fields).focusSuppressInput = 0;
  }
  return;
}


/* Void Initialize() */

void Assembly-CSharp.dll::DesktopEditModeController::DesktopEditModeController_Initialize
               (DesktopEditModeController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  ModeControllerBase::ModeControllerBase_Initialize((ModeControllerBase *)this,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_04 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
  if (this_04 != (MainCameraManager *)0x0) {
    MainCameraManager::MainCameraManager_set_IsLogicRendered(this_04,1,(MethodInfo *)0x0);
    pDVar1 = (this->fields).drawPlaneController;
    if (pDVar1 != (DrawPlaneControllerUUI *)0x0) {
      DrawPlaneControllerUUI::DrawPlaneControllerUUI_Initialize(pDVar1,(MethodInfo *)0x0);
      pDVar1 = (this->fields).drawPlaneController;
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      TypeInfo__DrawPlane->static_fields->drawPlaneController = pDVar1;
      pXVar2 = (XpBoostParticlePreviewer *)(this->fields).chatBubbleController;
      if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
        func_?();
      }
      pXVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                         (pXVar2,
                          ChatBubbleController_MethodInfo__UnityEngine__Object__Instantiate<ChatBubbleController>_ChatBubbleController_
                         );
      (this->fields).chatBubbleController = (ChatBubbleController *)pXVar2;
      if (pXVar2 != (XpBoostParticlePreviewer *)0x0) {
        pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                           ((Component_1 *)pXVar2,(MethodInfo *)0x0);
        pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                           ((Component_1 *)this,(MethodInfo *)0x0);
        if (pTVar3 != (Transform *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                    (pTVar3,pTVar4,0,(MethodInfo *)0x0);
          pGVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                             ((Component_1 *)this,(MethodInfo *)0x0);
          contextMenuController = (this->fields).contextMenuController;
          gizmoController = (this->fields).gizmoController;
          pEVar6 = (EditorStateMachine *)func_?();
          EditorStateMachine::EditorStateMachine__ctor_2
                    (pEVar6,pGVar5,contextMenuController,gizmoController,(MethodInfo *)0x0);
          _UNK_? = pEVar6;
          if (_UNK_? != (EditorWorldObjectCreation *)0x0) {
            EditorWorldObjectCreation::EditorWorldObjectCreation_Initialize
                      (_UNK_?,pEVar6,(MethodInfo *)0x0);
            this_01 = _UNK_?;
            if (_UNK_? != (EditorStateMachine *)0x0) {
              pCVar7 = (CubeModelingStateMachine *)
                       PlayerListsLayout+<CreatePlayerLists>c__Iterator0::
                       PlayerListsLayout_CreatePlayerLists_c_Iterator0_System_Collections_IEnumerator_get_Current
                                 ((PlayerListsLayout_CreatePlayerLists_c_Iterator0 *)_UNK_?,
                                  (MethodInfo *)0x0);
              if (this_01 != (MaterialsController *)0x0) {
                MaterialsController::MaterialsController_Initialize
                          (this_01,pCVar7,(MethodInfo *)0x0);
                this_00 = _UNK_?;
                if (_UNK_? != (MaterialsController *)0x0) {
                  this_05 = (Component_1 *)
                            (*(code *)(_UNK_?->klass->vtable).SetActive.method)();
                  if (this_05 != (Component_1 *)0x0) {
                    pGVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                             Component_1_get_gameObject(this_05,(MethodInfo *)0x0);
                    if (this_00 != (UIStack *)0x0) {
                      UIStack::UIStack_Push
                                (this_00,pGVar5,UIPushOption__Enum_None,(UnityAction *)0x0,
                                 UIGroupFlags__Enum_MainUI,(MethodInfo *)0x0);
                      if (_UNK_? != (EditorStateMachine *)0x0) {
                        pCVar7 = (CubeModelingStateMachine *)
                                 PlayerListsLayout+<CreatePlayerLists>c__Iterator0::
                                 PlayerListsLayout_CreatePlayerLists_c_Iterator0_System_Collections_IEnumerator_get_Current
                                           ((PlayerListsLayout_CreatePlayerLists_c_Iterator0 *)
                                            _UNK_?,(MethodInfo *)0x0);
                        if (pCVar7 != (CubeModelingStateMachine *)0x0) {
                          CubeModelingStateMachine::CubeModelingStateMachine_set_CurrentMaterialId
                                    (pCVar7,0x15,(MethodInfo *)0x0);
                          if (_UNK_? != (ChatControllerUGUI *)0x0) {
                            ChatControllerUGUI::ChatControllerUGUI_Initialize
                                      (_UNK_?,(MethodInfo *)0x0);
                            if (_UNK_? != (ContextMenuController *)0x0) {
                              ContextMenuController::ContextMenuController_Initialize
                                        (_UNK_?,_UNK_?,(MethodInfo *)0x0);
                              if (_UNK_? != (MaterialDescription *)0x0) {
                                MaterialDescription::MaterialDescription_set_SpecialProperties
                                          (_UNK_?,(BitArray *)_UNK_?,(MethodInfo *)0x0
                                          );
                                this_06 = (DesktopPlayMode *)func_?();
                                DesktopPlayMode::DesktopPlayMode__ctor(this_06,(MethodInfo *)0x0);
                                if ((((uint)(TypeInfo__MVInputWrapper->vtable).Equals.methodPtr &
                                     0x2000000) != 0) &&
                                   ((TypeInfo__MVInputWrapper->_1).cctor_started == 0)) {
                                  func_?();
                                }
                                MVInputWrapper::MVInputWrapper_SetInputMap
                                          ((IKogamaInputMap *)this_06,(MethodInfo *)0x0);
                                pEVar6 = _UNK_?;
                                value = (Object *)func_?();
                                if (pEVar6 != (EditorStateMachine *)0x0) {
                                  FSMEntity::FSMEntity_set_Event
                                            ((FSMEntity *)pEVar6,value,(MethodInfo *)0x0);
                                  if (_UNK_? != (EditModeClientShopController *)0x0) {
                                    EditModeClientShopController::
                                    EditModeClientShopController_Initialize
                                              (_UNK_?,_UNK_?,(MethodInfo *)0x0);
                                    if (_UNK_? != (PlayerInventoryController *)0x0) {
                                      PlayerInventoryController::
                                      PlayerInventoryController_Initialize
                                                (_UNK_?,(MethodInfo *)0x0);
                                      if (_UNK_? != (int *)0x0) {
                                        (**(code **)(*_UNK_? + 0xe8))();
                                        this_07 = MVGameControllerBase::
                                                  MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
                                        if (this_07 != (MVWorldObjectClientManager *)0x0) {
                                          pMVar8 = MVWorldObjectClientManager::
                                                   MVWorldObjectClientManager_get_RootGroup
                                                             (this_07,(MethodInfo *)0x0);
                                          if (pMVar8 != (MVGroup *)0x0) {
                                            (*(code *)(pMVar8->klass->vtable).PlayModeInitialize.
                                                      method)();
                                            if (_UNK_? != (GoldPurchasedTracker *)0x0) {
                                              GoldPurchasedTracker::GoldPurchasedTracker_Initialize
                                                        (_UNK_?,(MethodInfo *)0x0);
                                              _UNK_? =
                                                   UnityEngine.CoreModule.dll::UnityEngine::Object::
                                                   Object_1_Instantiate_251
                                                             (_UNK_?,
                                                                                                                            
                                                  UnityEngine__RectTransform_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::RectTransform>_UnityEngine__RectTransform_
                                                  );
                                              if (_UNK_? != (XpBoostParticlePreviewer *)0x0)
                                              {
                                                pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::
                                                         Component::Component_1_get_transform
                                                                   ((Component_1 *)_UNK_?,
                                                                    (MethodInfo *)0x0);
                                                if (_UNK_? != (GameObject *)0x0) {
                                                  pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::
                                                           GameObject::GameObject_get_transform
                                                                     (_UNK_?,
                                                                      (MethodInfo *)0x0);
                                                  if (pTVar3 != (Transform *)0x0) {
                                                    UnityEngine.CoreModule.dll::UnityEngine::
                                                    Transform::Transform_SetParent_1
                                                              (pTVar3,pTVar4,0,(MethodInfo *)0x0);
                                                    this_02 = _UNK_?;
                                                    if (_UNK_? != (EditorStateMachine *)0x0)
                                                    {
                                                      pCVar7 = (CubeModelingStateMachine *)
                                                                                                                              
                                                  PlayerListsLayout+<CreatePlayerLists>c__Iterator0
                                                  ::
                                                  PlayerListsLayout_CreatePlayerLists_c_Iterator0_System_Collections_IEnumerator_get_Current
                                                            ((
                                                  PlayerListsLayout_CreatePlayerLists_c_Iterator0 *)
                                                  _UNK_?,(MethodInfo *)0x0);
                                                  if (this_02 !=
                                                      (FirstTimeSetupTerrainEditTutorial *)0x0) {
                                                    FirstTimeSetupTerrainEditTutorial::
                                                    FirstTimeSetupTerrainEditTutorial_Initialize
                                                              (this_02,pCVar7,_UNK_?,
                                                               (MethodInfo *)0x0);
                                                    this_03 = _UNK_?;
                                                    if (_UNK_? != (EditorStateMachine *)0x0)
                                                    {
                                                      value_00 = (Action_1_Boolean_ *)
                                                                                                                                  
                                                  PlayerListsLayout+<CreatePlayerLists>c__Iterator0
                                                  ::
                                                  PlayerListsLayout_CreatePlayerLists_c_Iterator0_System_Collections_IEnumerator_get_Current
                                                            ((
                                                  PlayerListsLayout_CreatePlayerLists_c_Iterator0 *)
                                                  _UNK_?,(MethodInfo *)0x0);
                                                  if (this_03 != (LockCursorManager3DMode *)0x0) {
                                                    LockCursorManager3DMode::
                                                    LockCursorManager3DMode_set_OnCursorLockChanged
                                                              (this_03,value_00,(MethodInfo *)0x0);
                                                    if ((((uint)(TypeInfo__ChatCommandManager->
                                                                vtable).Equals.methodPtr & 0x2000000
                                                         ) != 0) &&
                                                       ((TypeInfo__ChatCommandManager->_1).
                                                        cctor_started == 0)) {
                                                      func_?();
                                                    }
                                                    pAVar9 = ChatCommandManager::
                                                                                                                            
                                                  ChatCommandManager_GetChatCommandCallback
                                                            (ChatCommand__Enum_HideAllUI,
                                                             (MethodInfo *)0x0);
                                                  this_08 = (
                                                  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                                                  *)func_?();
                                                  UnityEngine.CoreModule.dll::UnityEngine::Events::
                                                  UnityAction`2[UnityEngine::SceneManagement::
                                                  Scene,UnityEngine::SceneManagement::Scene]::
                                                  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                                                            (this_08,(Object *)&UNK_?,
                                                                                                                          
                                                  MethodInfo__DesktopEditModeController__HideUI__,
                                                  (MethodInfo *)0x0);
                                                  pAVar10 = (Action *)
                                                            mscorlib.dll::System::Delegate::
                                                            Delegate_Combine((Delegate *)pAVar9,
                                                                             (Delegate *)this_08,
                                                                             (MethodInfo *)0x0);
                                                  pAVar9 = (Action *)0x0;
                                                  if (pAVar10 == (Action *)0x0) {
code_?:
                                                    ChatCommandManager::
                                                    ChatCommandManager_UpdateChatCommandCallback
                                                              (ChatCommand__Enum_HideAllUI,pAVar9,
                                                               (MethodInfo *)0x0);
                                                    return;
                                                  }
                                                  if (pAVar10->klass == TypeInfo__System__Action) {
                                                    pAVar9 = pAVar10;
                                                  }
                                                  if (pAVar9 != (Action *)0x0)
                                                  goto code_?;
                                                  goto code_?;
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Boolean IsGridSnap() */

bool Assembly-CSharp.dll::DesktopEditModeController::DesktopEditModeController_IsGridSnap
               (DesktopEditModeController *this,MethodInfo *method)

{
  return (this->fields).gridSnap;
}


/* Void LeaveEditPlayMode() */

void Assembly-CSharp.dll::DesktopEditModeController::DesktopEditModeController_LeaveEditPlayMode
               (DesktopEditModeController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((this->fields).enterBuildModeOnceGuard != 0) {
    return;
  }
  this_00 = (this->fields).desktopPlayModeController;
  if ((this_00 != (DesktopPlayModeController *)0x0) &&
     (pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                         ((Component_1 *)this_00,(MethodInfo *)0x0), pGVar1 != (GameObject *)0x0)) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar1,0,(MethodInfo *)0x0);
    pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                       ((Component_1 *)this,(MethodInfo *)0x0);
    if (pGVar1 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar1,1,(MethodInfo *)0x0);
      this_01 = (this->fields)._EditModeStateMachine_k__BackingField;
      value = (Object *)func_?();
      if (this_01 != (EditorStateMachine *)0x0) {
        FSMEntity::FSMEntity_set_Event((FSMEntity *)this_01,value,(MethodInfo *)0x0);
        (this->fields).enterBuildModeOnceGuard = 1;
        return;
      }
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void MoveToSelectedObject() */

void Assembly-CSharp.dll::DesktopEditModeController::DesktopEditModeController_MoveToSelectedObject
               (DesktopEditModeController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields)._EditModeStateMachine_k__BackingField;
  if (this_00 != (EditorStateMachine *)0x0) {
    pMVar1 = EditorStateMachine::EditorStateMachine_get_SingleSelectedWO(this_00,(MethodInfo *)0x0);
    if (pMVar1 == (MVWorldObjectClient *)0x0) {
      return;
    }
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    this_01 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
    if ((this_01 != (MainCameraManager *)0x0) &&
       (pMVar2 = MainCameraManager::MainCameraManager_get_CurrentCamera(this_01,(MethodInfo *)0x0),
       pMVar2 != (MVCameraBase *)0x0)) {
      (*(code *)(pMVar2->klass->vtable).FocusOnObject.method)
                (pMVar2,pMVar1,0x40000000,0,0,0,0,(pMVar2->klass->vtable).Activate.methodPtr);
      return;
    }
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void OnApplicationFocus(Boolean) */

void Assembly-CSharp.dll::DesktopEditModeController::DesktopEditModeController_OnApplicationFocus
               (DesktopEditModeController *this,bool focus,MethodInfo *method)

{
  if (focus != 0) {
    (this->fields).focusSuppressInput = 1;
    fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_realtimeSinceStartup
                      ((MethodInfo *)0x0);
    (this->fields).focusTime = fVar1;
  }
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::DesktopEditModeController::DesktopEditModeController_OnDestroy
               (DesktopEditModeController *this,MethodInfo *method)

{
  MVGameControllerDesktop::MVGameControllerDesktop_UnregisterEditModeController((MethodInfo *)0x0);
  return;
}


/* Void RegisterPlayModeController(DesktopPlayModeController) */

void Assembly-CSharp.dll::DesktopEditModeController::
     DesktopEditModeController_RegisterPlayModeController
               (DesktopEditModeController *this,DesktopPlayModeController *desktopPlayModeController
               ,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  (this->fields).desktopPlayModeController = desktopPlayModeController;
  if (desktopPlayModeController != (DesktopPlayModeController *)0x0) {
    this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                        ((Component_1 *)desktopPlayModeController,(MethodInfo *)0x0);
    if (this_00 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (this_00,0,(MethodInfo *)0x0);
      pUVar1 = (desktopPlayModeController->fields).OnLeaveEditPlayMode;
      this_01 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                 *)func_?(TypeInfo__UnityEngine__Events__UnityAction);
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (this_01,(Object *)this,MethodInfo__DesktopEditModeController__LeaveEditPlayMode__,
                 (MethodInfo *)0x0);
      pUStack2 =
           (UnityAction *)
           mscorlib.dll::System::Delegate::Delegate_Combine
                     ((Delegate *)pUVar1,(Delegate *)this_01,(MethodInfo *)0x0);
      pUVar1 = (UnityAction *)0x0;
      if (pUStack2 == (UnityAction *)0x0) {
code_?:
        (desktopPlayModeController->fields).OnLeaveEditPlayMode = pUVar1;
        return;
      }
      if (pUStack2->klass == TypeInfo__UnityEngine__Events__UnityAction) {
        pUVar1 = pUStack2;
      }
      pUStack3 = TypeInfo__UnityEngine__Events__UnityAction;
      if (pUVar1 != (UnityAction *)0x0) goto code_?;
      goto code_?;
    }
  }
  func_?(0);
  pUStack2 = extraout_ECX;
  pUStack3 = extraout_EDX;
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void RegisterShortcuts() */

void Assembly-CSharp.dll::DesktopEditModeController::DesktopEditModeController_RegisterShortcuts
               (DesktopEditModeController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                     ((Component_1 *)this,(MethodInfo *)0x0);
  pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
           func_?(
                          TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IShortcutKeyRegister>
                          );
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (pUVar2,(Object *)this,
             MethodInfo__DesktopEditModeController___RegisterShortcuts_m__0_UnityEngine__EventSystems__IShortcutKeyRegister__UnityEngine__EventSystems__BaseEventData_
             ,
             MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IShortcutKeyRegister>__EventFunction_System__Object__void__
            );
  if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
       0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
    func_?();
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy_63
            (pGVar1,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_IHandleToolTip_ *)pUVar2,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IShortcutKeyRegister>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IShortcutKeyRegister>_
            );
  pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                     ((Component_1 *)this,(MethodInfo *)0x0);
  pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
           func_?();
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (pUVar2,(Object *)this,
             MethodInfo__DesktopEditModeController___RegisterShortcuts_m__1_UnityEngine__EventSystems__IShortcutKeyRegister__UnityEngine__EventSystems__BaseEventData_
             ,
             MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IShortcutKeyRegister>__EventFunction_System__Object__void__
            );
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy_63
            (pGVar1,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_IHandleToolTip_ *)pUVar2,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IShortcutKeyRegister>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IShortcutKeyRegister>_
            );
  return;
}


/* Void Respawn() */

void Assembly-CSharp.dll::DesktopEditModeController::DesktopEditModeController_Respawn
               (DesktopEditModeController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pGVar1 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
  if ((pGVar1 != (GameEventManager *)0x0) &&
     (this_00 = (pGVar1->fields).AvatarCommandsPlayMode,
     this_00 != (GameEventManager_AvatarCommandsPlayModeManager *)0x0)) {
    GameEventManager+AvatarCommandsPlayModeManager::
    GameEventManager_AvatarCommandsPlayModeManager_KillSelf(this_00,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void Set(Boolean) */

void Assembly-CSharp.dll::DesktopEditModeController::DesktopEditModeController_Set
               (DesktopEditModeController *this,bool snap,MethodInfo *method)

{
  (this->fields).gridSnap = snap;
  return;
}


/* Void SetState(EditorEvent) */

void Assembly-CSharp.dll::DesktopEditModeController::DesktopEditModeController_SetState
               (DesktopEditModeController *this,EditorEvent__Enum editorEvent,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields)._EditModeStateMachine_k__BackingField;
  this = (DesktopEditModeController *)editorEvent;
  value = (Object *)func_?(TypeInfo__EditorEvent,&this);
  if (this_00 != (EditorStateMachine *)0x0) {
    FSMEntity::FSMEntity_set_Event((FSMEntity *)this_00,value,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void SetUIReady() */

void Assembly-CSharp.dll::DesktopEditModeController::DesktopEditModeController_SetUIReady
               (DesktopEditModeController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).uiStack;
  if (this_00 != (UIStack *)0x0) {
    UIStack::UIStack_SetStackReady(this_00,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    source = MVGameControllerBase::MVGameControllerBase_get_OnFirstFrameUpdateActorReady
                       ((MethodInfo *)0x0);
    this_01 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?(TypeInfo__System__Action);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_01,(Object *)this,MethodInfo__DesktopEditModeController__SetUIReady__,
               (MethodInfo *)0x0);
    pDStack1 =
         mscorlib.dll::System::Delegate::Delegate_Remove
                   ((Delegate *)source,(Delegate *)this_01,(MethodInfo *)0x0);
    if (pDStack1 != (Delegate *)0x0) {
      pDVar2 = (Delegate *)0x0;
      if ((Action__Class *)pDStack1->klass == TypeInfo__System__Action) {
        pDVar2 = pDStack1;
      }
      pMStack3 = (MVGameControllerBase__Class *)TypeInfo__System__Action;
      if (pDVar2 == (Delegate *)0x0) goto code_?;
    }
    if (cRam_? == '\0') {
      pMStack3 = (MVGameControllerBase__Class *)_UNK_?;
      func_?();
      cRam_? = '\x01';
    }
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      pMStack3 = TypeInfo__MVGameControllerBase;
      func_?();
    }
    pMVar4 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if ((pMVar4 != (MVGameControllerBase *)0x0) &&
       (pFVar5 = (pMVar4->fields).firstFrameUpdateActorReady,
       pFVar5 != (FirstFrameUpdateActorReady *)0x0)) {
      (pFVar5->fields).callbacks = in_stack_6;
      return;
    }
    pMStack3 = (MVGameControllerBase__Class *)0x0;
    func_?();
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  func_?();
  pDStack1 = extraout_ECX;
  pMStack3 = (MVGameControllerBase__Class *)extraout_EDX;
code_?:
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void ToggleHD() */

void Assembly-CSharp.dll::DesktopEditModeController::DesktopEditModeController_ToggleHD
               (DesktopEditModeController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVQualitySettings->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVQualitySettings->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVQualitySettings);
  }
  iVar1 = MVQualitySettings::MVQualitySettings_get_CurrentLevel((MethodInfo *)0x0);
  if ((((uint)(TypeInfo__MVQualitySettings->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVQualitySettings->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVQualitySettings);
  }
  MVQualitySettings::MVQualitySettings_set_CurrentLevel((uint)(iVar1 == 0),(MethodInfo *)0x0);
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::DesktopEditModeController::DesktopEditModeController_Update
               (DesktopEditModeController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  ModeControllerBase::ModeControllerBase_HandleFpsShortcut
            ((ModeControllerBase *)this,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((this->fields).focusSuppressInput != 0) {
    bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Input::Input_GetKeyUp
                      (KeyCode__Enum_Mouse0,(MethodInfo *)0x0);
    if (bVar1 == 0) {
      bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Input::Input_GetKeyDown
                        (KeyCode__Enum_Mouse1,(MethodInfo *)0x0);
    }
    else {
      bVar1 = 1;
    }
    fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_realtimeSinceStartup
                      ((MethodInfo *)0x0);
    if ((bVar1 != 0) || (_UNK_? < fVar2 - (this->fields).focusTime)) {
      (this->fields).focusSuppressInput = 0;
    }
    else {
      if ((((uint)(TypeInfo__MVInputWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVInputWrapper->_1).cctor_started == 0)) {
        func_?(TypeInfo__MVInputWrapper);
      }
      MVInputWrapper::MVInputWrapper_SuppressAllInput((MethodInfo *)0x0);
    }
  }
  pEVar3 = (this->fields)._EditModeStateMachine_k__BackingField;
  if (pEVar3 != (EditorStateMachine *)0x0) {
    (*(code *)(pEVar3->klass->vtable).Update.method)(pEVar3,pEVar3->klass[1]._0.image);
  }
  if ((((uint)(TypeInfo__MVInputWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVInputWrapper->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVInputWrapper);
  }
  bVar1 = MVInputWrapper::MVInputWrapper_GetBooleanControlDown
                    (KogamaControls__Enum_ToggleHD,(MethodInfo *)0x0);
  if (bVar1 != 0) {
    this_00 = (this->fields).uiStack;
    if (this_00 == (UIStack *)0x0) {
      func_?();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    bVar1 = UIStack::UIStack_IsStackEmpty(this_00,(MethodInfo *)0x0);
    if (bVar1 != 0) {
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      if ((((uint)(TypeInfo__MVQualitySettings->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVQualitySettings->_1).cctor_started == 0)) {
        func_?();
      }
      iVar5 = MVQualitySettings::MVQualitySettings_get_CurrentLevel((MethodInfo *)0x0);
      if ((((uint)(TypeInfo__MVQualitySettings->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVQualitySettings->_1).cctor_started == 0)) {
        func_?();
      }
      MVQualitySettings::MVQualitySettings_set_CurrentLevel((uint)(iVar5 == 0),(MethodInfo *)0x0);
    }
  }
  return;
}


/* Void <DeleteWoid>m__2(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::DesktopEditModeController::DesktopEditModeController__DeleteWoid_m__2
               (IUIStack *handler,BaseEventData *data,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (handler != (IUIStack *)0x0) {
    func_?(2,TypeInfo__UnityEngine__EventSystems__IUIStack,handler);
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void <RegisterShortcuts>m__0(IShortcutKeyRegister, BaseEventData) */

void Assembly-CSharp.dll::DesktopEditModeController::
     DesktopEditModeController__RegisterShortcuts_m__0
               (DesktopEditModeController *this,IShortcutKeyRegister *x,BaseEventData *y,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
            func_?(TypeInfo__UnityEngine__Events__UnityAction);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (this_00,(Object *)this,MethodInfo__DesktopEditModeController__Respawn__,
             (MethodInfo *)0x0);
  if (x != (IShortcutKeyRegister *)0x0) {
    func_?(0,TypeInfo__UnityEngine__EventSystems__IShortcutKeyRegister,x,0x10);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void <RegisterShortcuts>m__1(IShortcutKeyRegister, BaseEventData) */

void Assembly-CSharp.dll::DesktopEditModeController::
     DesktopEditModeController__RegisterShortcuts_m__1
               (DesktopEditModeController *this,IShortcutKeyRegister *x,BaseEventData *y,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
            func_?(TypeInfo__UnityEngine__Events__UnityAction);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (this_00,(Object *)this,MethodInfo__DesktopEditModeController__MoveToSelectedObject__,
             (MethodInfo *)0x0);
  if (x != (IShortcutKeyRegister *)0x0) {
    func_?(0,TypeInfo__UnityEngine__EventSystems__IShortcutKeyRegister,x,0x15);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* DesktopEditModeController() */

void Assembly-CSharp.dll::DesktopEditModeController::DesktopEditModeController__ctor
               (DesktopEditModeController *this,MethodInfo *method)

{
  (this->fields).enterBuildModeOnceGuard = 1;
  (this->fields).focusSuppressInput = 1;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  return;
}


/* ClientShopRepository get_ClientShopRepository() */

ClientShopRepository *
Assembly-CSharp.dll::DesktopEditModeController::DesktopEditModeController_get_ClientShopRepository
          (DesktopEditModeController *this,MethodInfo *method)

{
  return (this->fields)._ClientShopRepository_k__BackingField;
}


/* Boolean get_IsInPlayInEditMode() */

bool Assembly-CSharp.dll::DesktopEditModeController::
     DesktopEditModeController_get_IsInPlayInEditMode
               (DesktopEditModeController *this,MethodInfo *method)

{
  return (this->fields).isInPlayInEditMode;
}


/* Void set_ClientShopRepository(ClientShopRepository) */

void Assembly-CSharp.dll::DesktopEditModeController::
     DesktopEditModeController_set_ClientShopRepository
               (DesktopEditModeController *this,ClientShopRepository *value,MethodInfo *method)

{
  (this->fields)._ClientShopRepository_k__BackingField = value;
  return;
}


/* Void set_EditModeStateMachine(EditorStateMachine) */

void Assembly-CSharp.dll::DesktopEditModeController::
     DesktopEditModeController_set_EditModeStateMachine
               (DesktopEditModeController *this,EditorStateMachine *value,MethodInfo *method)

{
  (this->fields)._EditModeStateMachine_k__BackingField = value;
  return;
}


/* Void set_PlayerInventoryRepository(PlayerInventoryRepository) */

void Assembly-CSharp.dll::DesktopEditModeController::
     DesktopEditModeController_set_PlayerInventoryRepository
               (DesktopEditModeController *this,PlayerInventoryRepository *value,MethodInfo *method)

{
  (this->fields)._PlayerInventoryRepository_k__BackingField = value;
  return;
}

