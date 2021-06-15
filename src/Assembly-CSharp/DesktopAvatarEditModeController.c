
/* Void Activate(ActivateUIElement) */

void Assembly-CSharp.dll::DesktopAvatarEditModeController::DesktopAvatarEditModeController_Activate
               (DesktopAvatarEditModeController *this,ActivateUIElement__Enum element,
               MethodInfo *method)

{
  if (element == ActivateUIElement__Enum_AvatarAccessoryShop) {
    object = (this->fields).accessoryShopController;
    if (object != (AccessoryShopController *)0x0) {
      if (cRam_? == '\0') {
        func_?(_UNK_?);
        cRam_? = '\x01';
      }
      (object->fields).pushOption = 2;
      if ((((uint)(TypeInfo__AccessoryDataManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__AccessoryDataManager->_1).cctor_started == 0)) {
        func_?(TypeInfo__AccessoryDataManager);
      }
      pUVar1 = TypeInfo__AccessoryDataManager->static_fields->readyCallback;
      pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *
               )func_?(TypeInfo__UnityEngine__Events__UnityAction);
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (pUVar2,(Object *)object,MethodInfo__AccessoryShopController__ReadyCallback__,
                 (MethodInfo *)0x0);
      pUVar3 = (UnityAction *)
               mscorlib.dll::System::Delegate::Delegate_Combine
                         ((Delegate *)pUVar1,(Delegate *)pUVar2,(MethodInfo *)0x0);
      pUVar1 = (UnityAction *)0x0;
      if (pUVar3 != (UnityAction *)0x0) {
        if (pUVar3->klass == TypeInfo__UnityEngine__Events__UnityAction) {
          pUVar1 = pUVar3;
        }
        if (pUVar1 == (UnityAction *)0x0) {
          func_?();
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      TypeInfo__AccessoryDataManager->static_fields->readyCallback = pUVar1;
      AccessoryDataManager::AccessoryDataManager_SetReady((MethodInfo *)0x0);
      return;
    }
code_?:
    func_?(0);
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (element != ActivateUIElement__Enum_AvatarShop) {
    return;
  }
  this_00 = (this->fields).avatarShopController;
  if (this_00 == (AvatarShopController *)0x0) goto code_?;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__AvatarShopController___Activate_c__AnonStorey0;
  this_01 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this_01,0.0,(MethodInfo *)method_00);
  if (this_01 != (ScaleAnimationBase *)0x0) {
    (this_01->fields)._._._._.m_CachedPtr = (void *)0x1;
    (this_01->fields).state = (int32_t)this_00;
    pIVar5 = (this_00->fields).inventoryControllerPrefab;
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    pIVar5 = (InventoryController *)
             UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                       ((XpBoostParticlePreviewer *)pIVar5,
                        InventoryController_MethodInfo__UnityEngine__Object__Instantiate<InventoryController>_InventoryController_
                       );
    (this_00->fields).inventoryController = pIVar5;
    if (pIVar5 != (InventoryController *)0x0) {
      InventoryController::InventoryController_Initialize
                (pIVar5,(this_00->fields).numberOfSlotsPrPage,(MethodInfo *)0x0);
      pTVar6 = (this_00->fields).tab;
      if ((pTVar6 != (TabState *)0x0) &&
         (pIVar5 = (this_00->fields).inventoryController, pIVar5 != (InventoryController *)0x0)) {
        InventoryController::InventoryController_AddTab
                  (pIVar5,0,(pTVar6->fields).name,(MethodInfo *)0x0);
        pIVar7 = (this_00->fields).inventoryController;
        if (pIVar7 != (InventoryController *)0x0) {
          a = (pIVar7->fields).OnPageTurned;
          pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                    *)func_?();
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
          SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
          UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                    (pUVar2,(Object *)this_00,MethodInfo__AvatarShopController__PageTurned_int_,
                     MethodInfo__UnityEngine__Events__UnityAction<int>__UnityAction_System__Object__void__
                    );
          pDVar8 = mscorlib.dll::System::Delegate::Delegate_Combine
                             ((Delegate *)a,(Delegate *)pUVar2,(MethodInfo *)0x0);
          pDVar9 = (Delegate *)0x0;
          if (pDVar8 == (Delegate *)0x0) {
code_?:
            (a->fields)._._.method_code = pDVar9;
            pGVar10 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                               ((Component_1 *)this_00,(MethodInfo *)0x0);
            if (TypeInfo__AvatarShopController->static_fields->__f__am_cache0 ==
                (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
              pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                        *)func_?();
              UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
              SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
              UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                        (pUVar2,(Object *)0x0,
                         MethodInfo__AvatarShopController___Activate_m__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                         ,
                         MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
                        );
              TypeInfo__AvatarShopController->static_fields->__f__am_cache0 =
                   (ExecuteEvents_EventFunction_1_IUIStack_ *)pUVar2;
            }
            callbackFunction =
                 (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)
                 TypeInfo__AvatarShopController->static_fields->__f__am_cache0;
            if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.
                        methodPtr & 0x2000000) != 0) &&
               ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
              func_?();
            }
            UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
            ExecuteEvents_ExecuteHierarchy_63
                      (pGVar10,(BaseEventData *)0x0,callbackFunction,
                       UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                      );
            pGVar10 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                               ((Component_1 *)this_00,(MethodInfo *)0x0);
            pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                      *)func_?();
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
            SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
            UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                      (pUVar2,(Object *)pIVar5,
                       MethodInfo__AvatarShopController___Activate_c__AnonStorey0____m__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                       ,
                       MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
                      );
            UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
            ExecuteEvents_ExecuteHierarchy_63
                      (pGVar10,(BaseEventData *)0x0,
                       (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)pUVar2,
                       UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                      );
            AvatarShopController::AvatarShopController_UpdateContent(this_00,(MethodInfo *)0x0);
            return;
          }
          if ((UnityAction_1_System_Int32___Class *)pDVar8->klass ==
              TypeInfo__UnityEngine__Events__UnityAction<int>) {
            pDVar9 = pDVar8;
          }
          if (pDVar9 != (Delegate *)0x0) goto code_?;
          goto code_?;
        }
      }
    }
  }
  func_?(0);
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void Awake() */

void Assembly-CSharp.dll::DesktopAvatarEditModeController::DesktopAvatarEditModeController_Awake
               (DesktopAvatarEditModeController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (DesktopPlayMode *)func_?(TypeInfo__DesktopPlayMode);
  DesktopPlayMode::DesktopPlayMode__ctor(this_00,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__MVInputWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVInputWrapper->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVInputWrapper);
  }
  MVInputWrapper::MVInputWrapper_SetInputMap((IKogamaInputMap *)this_00,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (pMVar1 != (MVNetworkGame *)0x0) {
    a = (pMVar1->fields).OnActiveAvatar;
    puVar2 = &UNK_?;
    pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
             func_?(TypeInfo__System__Action<int>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (pUVar3,(Object *)this,
               MethodInfo__DesktopAvatarEditModeController__FirstTimeSetActiveAvatar_int_,
               MethodInfo__System__Action<int>__Action_System__Object__void__);
    pAVar4 = (Action *)
             mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)pUVar3,(MethodInfo *)0x0);
    pAVar5 = (Action *)0x0;
    if (pAVar4 != (Action *)0x0) {
      if ((Action_1_Int32___Class *)pAVar4->klass == TypeInfo__System__Action<int>) {
        pAVar5 = pAVar4;
      }
      pAVar6 = (Action__Class *)TypeInfo__System__Action<int>;
      if (pAVar5 == (Action *)0x0) goto code_?;
    }
    *(Action **)(puVar2 + 0xbc) = pAVar5;
    pUVar7 = (this->fields).uiStack;
    if (pUVar7 != (UIStack *)0x0) {
      UIStack::UIStack_Push
                (pUVar7,(this->fields).stackBottom,UIPushOption__Enum_None,(UnityAction *)0x0,
                 UIGroupFlags__Enum_StackBottom,(MethodInfo *)0x0);
      pGVar8 = (this->fields).stackBottom;
      if (pGVar8 != (GameObject *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar8,1,(MethodInfo *)0x0);
        pAVar9 = (this->fields).avatarSelectionController;
        if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
          func_?(TypeInfo__UnityEngine__Object);
        }
        pAVar9 = (AvatarSelectionController *)
                 UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                           ((XpBoostParticlePreviewer *)pAVar9,
                            AvatarSelectionController_MethodInfo__UnityEngine__Object__Instantiate<AvatarSelectionController>_AvatarSelectionController_
                           );
        pUVar7 = (this->fields).uiStack;
        (this->fields).avatarSelectionController = pAVar9;
        if (pAVar9 != (AvatarSelectionController *)0x0) {
          pGVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                             ((Component_1 *)pAVar9,(MethodInfo *)0x0);
          if (pUVar7 != (UIStack *)0x0) {
            UIStack::UIStack_Push
                      (pUVar7,pGVar8,UIPushOption__Enum_None,(UnityAction *)0x0,
                       UIGroupFlags__Enum_MainUI,(MethodInfo *)0x0);
            MVGameControllerDesktop::MVGameControllerDesktop_RegisterAvaterEditModeController
                      (this,(MethodInfo *)0x0);
            pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
            if (pMVar1 != (MVNetworkGame *)0x0) {
              this_01 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar1,(MethodInfo *)0x0);
              if (this_01 != (MVLocalPlayer *)0x0) {
                bVar10 = MVPlayer::MVPlayer_get_IsReady((MVPlayer *)this_01,(MethodInfo *)0x0);
                if (bVar10 == 0) {
                  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000)
                       != 0) && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
                    func_?(TypeInfo__MVGameControllerBase);
                  }
                  pAVar5 = MVGameControllerBase::
                           MVGameControllerBase_get_OnFirstFrameUpdateActorReady((MethodInfo *)0x0);
                  pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                            *)func_?(TypeInfo__System__Action);
                  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
                  SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
                  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                            (pUVar3,(Object *)this,
                             MethodInfo__DesktopAvatarEditModeController__SetUIReady__,
                             (MethodInfo *)0x0);
                  pAVar4 = (Action *)
                           mscorlib.dll::System::Delegate::Delegate_Combine
                                     ((Delegate *)pAVar5,(Delegate *)pUVar3,(MethodInfo *)0x0);
                }
                else {
                  if (cRam_? == '\0') {
                    func_?(_UNK_?);
                    cRam_? = '\x01';
                  }
                  pUVar7 = (this->fields).uiStack;
                  if (pUVar7 == (UIStack *)0x0) goto code_?;
                  UIStack::UIStack_SetStackReady(pUVar7,(MethodInfo *)0x0);
                  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000)
                       != 0) && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
                    func_?();
                  }
                  pAVar5 = MVGameControllerBase::
                           MVGameControllerBase_get_OnFirstFrameUpdateActorReady((MethodInfo *)0x0);
                  pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                            *)func_?();
                  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
                  SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
                  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                            (pUVar3,(Object *)this,
                             MethodInfo__DesktopAvatarEditModeController__SetUIReady__,
                             (MethodInfo *)0x0);
                  pAVar4 = (Action *)
                           mscorlib.dll::System::Delegate::Delegate_Remove
                                     ((Delegate *)pAVar5,(Delegate *)pUVar3,(MethodInfo *)0x0);
                }
                pAVar5 = (Action *)0x0;
                if (pAVar4 == (Action *)0x0) {
code_?:
                  MVGameControllerBase::MVGameControllerBase_set_OnFirstFrameUpdateActorReady
                            (pAVar5,(MethodInfo *)0x0);
                  return;
                }
                if (pAVar4->klass == TypeInfo__System__Action) {
                  pAVar5 = pAVar4;
                }
                pAVar6 = TypeInfo__System__Action;
                if (pAVar5 != (Action *)0x0) goto code_?;
                goto code_?;
              }
            }
          }
        }
      }
    }
  }
code_?:
  func_?(0);
  pAVar4 = extraout_ECX;
  pAVar6 = extraout_EDX;
code_?:
  func_?(pAVar4,pAVar6);
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void ClearStateStack() */

void Assembly-CSharp.dll::DesktopAvatarEditModeController::
     DesktopAvatarEditModeController_ClearStateStack
               (DesktopAvatarEditModeController *this,MethodInfo *method)

{
  pDVar1 = (DesktopAvatarEditModeController *)(this->fields).editorStateMachine;
  if (pDVar1 == (DesktopAvatarEditModeController *)0x0) {
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
  pAVar3 = (this->fields).accessoryShopController;
  if (pAVar3 != (AccessoryShopController *)0x0) {
    pOVar4 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
             Serialization::JsonProperty]::
             Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                       ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pAVar3,
                        MethodInfo__System__Collections__Generic__Stack<EditorEvent>__get_Count__);
    if (0 < (int)pOVar4) {
      pAVar3 = (pDVar1->fields).accessoryShopController;
      if (pAVar3 == (AccessoryShopController *)0x0) goto code_?;
      this = (DesktopAvatarEditModeController *)
             System.dll::System::Collections::Generic::Stack`1[EditorEvent]::
             Stack_1_EditorEvent__Pop
                       ((Stack_1_EditorEvent_ *)pAVar3,
                        MethodInfo__System__Collections__Generic__Stack<EditorEvent>__Pop__);
      *(undefined1 *)&(pDVar1->fields).stackBottom = 1;
      pOVar4 = (Object *)func_?(TypeInfo__EditorEvent,&this);
      FSMEntity::FSMEntity_set_Event((FSMEntity *)pDVar1,pOVar4,(MethodInfo *)0x0);
    }
    return;
  }
code_?:
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void GetCurrentBody(Action`1[MVBody]) */

void Assembly-CSharp.dll::DesktopAvatarEditModeController::
     DesktopAvatarEditModeController_GetCurrentBody
               (DesktopAvatarEditModeController *this,Action_1_MVBody_ *callback,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).avatarEditModeBodyController;
  if (this_00 != (AvatarEditModeBodyController *)0x0) {
    obj = AvatarEditModeBodyController::AvatarEditModeBodyController_get_CurrentBody
                    (this_00,(MethodInfo *)0x0);
    if (callback != (Action_1_MVBody_ *)0x0) {
      mscorlib.dll::System::Action`1[System::Collections::Generic::Dictionary`2[System::
      String,System::Object]]::
      Action_1_System_Collections_Generic_Dictionary_2_System_String_System_Object__Invoke
                ((Action_1_System_Collections_Generic_Dictionary_2_System_String_System_Object_ *)
                 callback,(Dictionary_2_System_String_System_Object_ *)obj,
                 MethodInfo__System__Action<MVBody>__Invoke_MVBody_);
      return;
    }
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void Initialize() */

void Assembly-CSharp.dll::DesktopAvatarEditModeController::
     DesktopAvatarEditModeController_Initialize
               (DesktopAvatarEditModeController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  ModeControllerBase::ModeControllerBase_Initialize((ModeControllerBase *)this,(MethodInfo *)0x0);
  this_00 = (this->fields).avatarShopController;
  if (this_00 != (AvatarShopController *)0x0) {
    AvatarShopController::AvatarShopController_Initialize
              (this_00,(this->fields).avatarEditModeBodyController,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?();
    }
    this_05 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
    if (this_05 != (MainCameraManager *)0x0) {
      MainCameraManager::MainCameraManager_set_IsLogicRendered(this_05,0,(MethodInfo *)0x0);
      DesktopAvatarEditModeController_InitializeLocalAvatar(this,(MethodInfo *)0x0);
      pDVar1 = (this->fields).drawPlaneController;
      if (pDVar1 != (DrawPlaneControllerUUI *)0x0) {
        DrawPlaneControllerUUI::DrawPlaneControllerUUI_Initialize(pDVar1,(MethodInfo *)0x0);
        pDVar1 = (this->fields).drawPlaneController;
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        TypeInfo__DrawPlane->static_fields->drawPlaneController = pDVar1;
        pXVar2 = (XpBoostParticlePreviewer *)(this->fields).notificationsManager;
        if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
          func_?();
        }
        pXVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                           (pXVar2,
                            NotificationsManager_MethodInfo__UnityEngine__Object__Instantiate<NotificationsManager>_NotificationsManager_
                           );
        (this->fields).notificationsManager = (NotificationsManager *)pXVar2;
        if (pXVar2 != (XpBoostParticlePreviewer *)0x0) {
          this_06 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                              ((Component_1 *)pXVar2,(MethodInfo *)0x0);
          pGVar3 = (this->fields).stackBottom;
          if (pGVar3 != (GameObject *)0x0) {
            parent = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                               (pGVar3,(MethodInfo *)0x0);
            if (this_06 != (Transform *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                        (this_06,parent,0,(MethodInfo *)0x0);
              pAVar4 = (this->fields).avatarEditModeBodyController;
              if (pAVar4 != (AvatarEditModeBodyController *)0x0) {
                AvatarEditModeBodyController::AvatarEditModeBodyController_Initialize
                          (pAVar4,(MethodInfo *)0x0);
                pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                         Component_1_get_gameObject((Component_1 *)this,(MethodInfo *)0x0);
                pAVar4 = (this->fields).avatarEditModeBodyController;
                if (pAVar4 != (AvatarEditModeBodyController *)0x0) {
                  pVVar5 = InventoryItem+ItemDescription::
                           InventoryItem_ItemDescription_get_CameraPreviewerOffset
                                     ((Vector3 *)&stack0xffffffe8,
                                      (InventoryItem_ItemDescription *)pAVar4,(MethodInfo *)0x0);
                  uVar6 = pVVar5->x;
                  uVar7 = pVVar5->y;
                  fVar8 = pVVar5->z;
                  pEVar9 = (EditorStateMachine *)func_?();
                  avatarEditModeCenterPos.y = (float)uVar7;
                  avatarEditModeCenterPos.x = (float)uVar6;
                  avatarEditModeCenterPos.z = fVar8;
                  EditorStateMachine::EditorStateMachine__ctor_1
                            (pEVar9,pGVar3,avatarEditModeCenterPos,(MethodInfo *)0x0);
                  this_01 = (this->fields).materialsController;
                  (this->fields).editorStateMachine = pEVar9;
                  if (pEVar9 != (EditorStateMachine *)0x0) {
                    pCVar10 = (CubeModelingStateMachine *)
                              PlayerListsLayout+<CreatePlayerLists>c__Iterator0::
                              PlayerListsLayout_CreatePlayerLists_c_Iterator0_System_Collections_IEnumerator_get_Current
                                        ((PlayerListsLayout_CreatePlayerLists_c_Iterator0 *)pEVar9,
                                         (MethodInfo *)0x0);
                    if (this_01 != (MaterialsController *)0x0) {
                      MaterialsController::MaterialsController_Initialize
                                (this_01,pCVar10,(MethodInfo *)0x0);
                      this_02 = (this->fields).avatarSelectionController;
                      if (this_02 != (AvatarSelectionController *)0x0) {
                        AvatarSelectionController::AvatarSelectionController_Initialize
                                  (this_02,(this->fields).avatarEditModeBodyController,
                                   (this->fields).editorStateMachine,(MethodInfo *)0x0);
                        woId = (this->fields).firstTimeActiveAvatar;
                        if (woId != -1) {
                          pAVar4 = (this->fields).avatarEditModeBodyController;
                          if (pAVar4 == (AvatarEditModeBodyController *)0x0) goto code_?;
                          AvatarEditModeBodyController::
                          AvatarEditModeBodyController_SetCurrentBodyByWoId
                                    (pAVar4,woId,(MethodInfo *)0x0);
                        }
                        pAVar4 = (this->fields).avatarEditModeBodyController;
                        pEVar9 = (this->fields).editorStateMachine;
                        if (pAVar4 != (AvatarEditModeBodyController *)0x0) {
                          group = AvatarEditModeBodyController::
                                  AvatarEditModeBodyController_get_CurrentBody
                                            (pAVar4,(MethodInfo *)0x0);
                          if (pEVar9 != (EditorStateMachine *)0x0) {
                            EditorStateMachine::EditorStateMachine_EnterGroup
                                      (pEVar9,(MVGroup *)group,(MethodInfo *)0x0);
                            pEVar9 = (this->fields).editorStateMachine;
                            value = (Object *)func_?();
                            if (pEVar9 != (EditorStateMachine *)0x0) {
                              FSMEntity::FSMEntity_set_Event
                                        ((FSMEntity *)pEVar9,value,(MethodInfo *)0x0);
                              pEVar9 = (this->fields).editorStateMachine;
                              if (pEVar9 != (EditorStateMachine *)0x0) {
                                pCVar10 = (CubeModelingStateMachine *)
                                          PlayerListsLayout+<CreatePlayerLists>c__Iterator0::
                                          PlayerListsLayout_CreatePlayerLists_c_Iterator0_System_Collections_IEnumerator_get_Current
                                                    ((
                                                  PlayerListsLayout_CreatePlayerLists_c_Iterator0 *)
                                                  pEVar9,(MethodInfo *)0x0);
                                if (pCVar10 != (CubeModelingStateMachine *)0x0) {
                                  CubeModelingStateMachine::
                                  CubeModelingStateMachine_set_CurrentMaterialId
                                            (pCVar10,0x15,(MethodInfo *)0x0);
                                  pEVar9 = (this->fields).editorStateMachine;
                                  this_03 = (this->fields).setupCubeModelTutorialUI;
                                  if (pEVar9 != (EditorStateMachine *)0x0) {
                                    value_00 = (Action_1_Boolean_ *)
                                               PlayerListsLayout+<CreatePlayerLists>c__Iterator0::
                                               PlayerListsLayout_CreatePlayerLists_c_Iterator0_System_Collections_IEnumerator_get_Current
                                                         ((
                                                  PlayerListsLayout_CreatePlayerLists_c_Iterator0 *)
                                                  pEVar9,(MethodInfo *)0x0);
                                    if (this_03 != (SetupCubeModelTutorialUI *)0x0) {
                                      LockCursorManager3DMode::
                                      LockCursorManager3DMode_set_OnCursorLockChanged
                                                ((LockCursorManager3DMode *)this_03,value_00,
                                                 (MethodInfo *)0x0);
                                      this_04 = (this->fields).goldPurchasedTracker;
                                      if (this_04 != (GoldPurchasedTracker *)0x0) {
                                        GoldPurchasedTracker::GoldPurchasedTracker_Initialize
                                                  (this_04,(MethodInfo *)0x0);
                                        return;
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
code_?:
  func_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void InitializeLocalAvatar() */

void Assembly-CSharp.dll::DesktopAvatarEditModeController::
     DesktopAvatarEditModeController_InitializeLocalAvatar
               (DesktopAvatarEditModeController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (TypeInfo__DesktopAvatarEditModeController->static_fields->__f__am_cache0 ==
      (Func_2_MVWorldObjectClient_Boolean_ *)0x0) {
    this_01 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?(TypeInfo__System__Func<MVWorldObjectClient,_bool>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_01,(Object *)0x0,
               MethodInfo__DesktopAvatarEditModeController___InitializeLocalAvatar_m__0_MVWorldObjectClient_
               ,MethodInfo__System__Func<MVWorldObjectClient,_bool>__Func_System__Object__void__);
    TypeInfo__DesktopAvatarEditModeController->static_fields->__f__am_cache0 =
         (Func_2_MVWorldObjectClient_Boolean_ *)this_01;
  }
  this_03 = (MVSpawnPointBlue__Class *)0x0;
  if (this_00 != (MVWorldObjectClientManager *)0x0) {
    pMVar1 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClientWhere
                       (this_00,TypeInfo__DesktopAvatarEditModeController->static_fields->
                                __f__am_cache0,(MethodInfo *)0x0);
    this_03 = TypeInfo__MVSpawnPointBlue;
    if (pMVar1 == (MVWorldObjectClient *)0x0) {
      this_02 = (MVWorldObjectClient *)0x0;
    }
    else {
      bVar2 = (TypeInfo__MVSpawnPointBlue->_1).naturalAligment;
      if (((pMVar1->klass->_1).naturalAligment < bVar2) ||
         ((MVSpawnPointBlue__Class *)(pMVar1->klass->_1).typeHierarchy[bVar2 - 1] !=
          TypeInfo__MVSpawnPointBlue)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      this_02 = (MVWorldObjectClient *)0x0;
      if (bVar3) {
        this_02 = pMVar1;
      }
      if (this_02 == (MVWorldObjectClient *)0x0) goto code_?;
    }
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      auStack_4._0_4_ = TypeInfo__MVGameControllerBase;
      func_?();
    }
    pGVar5 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
    if ((pGVar5 != (GameEventManager *)0x0) &&
       (this_03 = (MVSpawnPointBlue__Class *)(pGVar5->fields).AvatarCommandsBuildMode,
       this_02 != (MVWorldObjectClient *)0x0)) {
      puVar6 = (undefined8 *)
               (*(code *)(this_02->klass->vtable).get_WorldPosition_1.method)
                         (auStack_4 + 4,this_02,
                          (this_02->klass->vtable).set_WorldPosition.methodPtr);
      uStack_7 = *puVar6;
      fVar8 = *(float *)(puVar6 + 1);
      if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Vector3);
      }
      pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_up
                         ((Vector3 *)(auStack_4 + 4),(MethodInfo *)0x0);
      a.z = fVar8;
      a.x = (float)(undefined4)uStack_7;
      a.y = (float)uStack_7._4_4_;
      pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
                         ((Vector3 *)(auStack_4 + 4),a,*pVVar9,(MethodInfo *)0x0);
      uStack_7._0_4_ = pVVar9->x;
      uStack_7._4_4_ = pVVar9->y;
      fVar8 = pVVar9->z;
      pQVar10 = MVWorldObjectClient::MVWorldObjectClient_get_SyncRot
                         ((Quaternion *)auStack_4,this_02,(MethodInfo *)0x0);
      if (this_03 != (MVSpawnPointBlue__Class *)0x0) {
        position.z = fVar8;
        position.x = (float)(undefined4)uStack_7;
        position.y = (float)uStack_7._4_4_;
        GameEventManager+AvatarCommandsBuildModeManager::
        GameEventManager_AvatarCommandsBuildModeManager_SetSpawn
                  ((GameEventManager_AvatarCommandsBuildModeManager *)this_03,position,*pQVar10,
                   (MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?(0);
  pMVar1 = extraout_EDX;
code_?:
  auStack_4._0_4_ = this_03;
  func_?(pMVar1);
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::DesktopAvatarEditModeController::DesktopAvatarEditModeController_OnDestroy
               (DesktopAvatarEditModeController *this,MethodInfo *method)

{
  if ((this->fields).avatarSelectionController != (AvatarSelectionController *)0x0) {
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    TypeInfo__AvatarSelectionController->static_fields->instance = (AvatarSelectionController *)0x0;
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void OnPopCubeModelingController() */

void Assembly-CSharp.dll::DesktopAvatarEditModeController::
     DesktopAvatarEditModeController_OnPopCubeModelingController
               (DesktopAvatarEditModeController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pDVar1 = this;
  this = (DesktopAvatarEditModeController *)0x34;
  this_00 = (pDVar1->fields).editorStateMachine;
  value = (Object *)func_?(TypeInfo__EditorEvent,&this);
  if (this_00 != (EditorStateMachine *)0x0) {
    FSMEntity::FSMEntity_set_Event((FSMEntity *)this_00,value,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void OpenInventoryAtItem(UIPushOption, AccessoryDataClient) */

void Assembly-CSharp.dll::DesktopAvatarEditModeController::
     DesktopAvatarEditModeController_OpenInventoryAtItem
               (DesktopAvatarEditModeController *this,UIPushOption__Enum pushOption,
               AccessoryDataClient *displayShopItems,MethodInfo *method)

{
  object = (this->fields).accessoryShopController;
  if (object == (AccessoryShopController *)0x0) {
    func_?(0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  (object->fields).accessoryDataToShow = displayShopItems;
  (object->fields).pushOption = pushOption;
  if ((((uint)(TypeInfo__AccessoryDataManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__AccessoryDataManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__AccessoryDataManager);
  }
  pUVar2 = TypeInfo__AccessoryDataManager->static_fields->readyCallback;
  this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
            func_?(TypeInfo__UnityEngine__Events__UnityAction);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (this_00,(Object *)object,
             MethodInfo__AccessoryShopController__ReadyCallbackAccessoryView__,(MethodInfo *)0x0);
  pUVar3 = (UnityAction *)
           mscorlib.dll::System::Delegate::Delegate_Combine
                     ((Delegate *)pUVar2,(Delegate *)this_00,(MethodInfo *)0x0);
  pUVar2 = (UnityAction *)0x0;
  if (pUVar3 != (UnityAction *)0x0) {
    if (pUVar3->klass == TypeInfo__UnityEngine__Events__UnityAction) {
      pUVar2 = pUVar3;
    }
    if (pUVar2 == (UnityAction *)0x0) {
      func_?();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TypeInfo__AccessoryDataManager->static_fields->readyCallback = pUVar2;
  AccessoryDataManager::AccessoryDataManager_SetReady((MethodInfo *)0x0);
  return;
}


/* Void SelectEditorStateMachineToBodyGroup() */

void Assembly-CSharp.dll::DesktopAvatarEditModeController::
     DesktopAvatarEditModeController_SelectEditorStateMachineToBodyGroup
               (DesktopAvatarEditModeController *this,MethodInfo *method)

{
  this_00 = (this->fields).avatarSelectionController;
  if (this_00 != (AvatarSelectionController *)0x0) {
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                       ((Component_1 *)this_00,(MethodInfo *)0x0);
    pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
             func_?(
                            TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAvatarSetBodyGroup>
                            );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (pUVar2,(Object *)this_00,
               MethodInfo__AvatarSelectionController___SetStateToRoam_m__0_UnityEngine__EventSystems__IAvatarSetBodyGroup__UnityEngine__EventSystems__BaseEventData_
               ,
               MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAvatarSetBodyGroup>__EventFunction_System__Object__void__
              );
    if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
         0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
      func_?();
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy_63
              (pGVar1,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_IHandleToolTip_ *)pUVar2,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IAvatarSetBodyGroup>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAvatarSetBodyGroup>_
              );
    pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                       ((Component_1 *)this_00,(MethodInfo *)0x0);
    if (TypeInfo__AvatarSelectionController->static_fields->__f__am_cache0 ==
        (ExecuteEvents_EventFunction_1_IEditStateCommands_ *)0x0) {
      pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *
               )func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (pUVar2,(Object *)0x0,
                 MethodInfo__AvatarSelectionController___SetStateToRoam_m__1_IEditStateCommands__UnityEngine__EventSystems__BaseEventData_
                 ,
                 MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IEditStateCommands>__EventFunction_System__Object__void__
                );
      TypeInfo__AvatarSelectionController->static_fields->__f__am_cache0 =
           (ExecuteEvents_EventFunction_1_IEditStateCommands_ *)pUVar2;
    }
    callbackFunction =
         (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)
         TypeInfo__AvatarSelectionController->static_fields->__f__am_cache0;
    if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
         0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
      func_?();
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy_63
              (pGVar1,(BaseEventData *)0x0,callbackFunction,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<IEditStateCommands>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IEditStateCommands>_
              );
    return;
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void Set(ActiveEditStateUI) */

void Assembly-CSharp.dll::DesktopAvatarEditModeController::DesktopAvatarEditModeController_Set
               (DesktopAvatarEditModeController *this,ActiveEditStateUI__Enum activeUIElements,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((activeUIElements & ActiveEditStateUI__Enum_CubeModelTools) == ActiveEditStateUI__Enum_None) {
    return;
  }
  pMVar1 = (this->fields).materialsController;
  if (pMVar1 != (MaterialsController *)0x0) {
    (*(code *)(pMVar1->klass->vtable).SetActive.method)
              (pMVar1,(pMVar1->klass->vtable).OnMaterialChanged_1.methodPtr);
    pMVar1 = (this->fields).materialsController;
    this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?(TypeInfo__UnityEngine__Events__UnityAction);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_00,(Object *)this,
               MethodInfo__DesktopAvatarEditModeController__OnPopCubeModelingController__,
               (MethodInfo *)0x0);
    if (pMVar1 != (MaterialsController *)0x0) {
      MaterialsController::MaterialsController_Push
                (pMVar1,UIPushOption__Enum_HideAllExceptStackBottom,(UnityAction *)this_00,
                 (MethodInfo *)0x0);
      return;
    }
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SetBodyGroup(MVBody) */

void Assembly-CSharp.dll::DesktopAvatarEditModeController::
     DesktopAvatarEditModeController_SetBodyGroup
               (DesktopAvatarEditModeController *this,MVBody *bodyGroup,MethodInfo *method)

{
  pEVar1 = (this->fields).editorStateMachine;
  if (pEVar1 == (EditorStateMachine *)0x0) {
    func_?(0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  this_00 = (pEVar1->fields).selectionController;
  if (this_00 != (SelectionController *)0x0) {
    SelectionController::SelectionController_DeSelectAll(this_00,(MethodInfo *)0x0);
    SelectionController::SelectionController_PushWOParents
              (this_00,(MVWorldObjectClient *)bodyGroup,1,(MethodInfo *)0x0);
    return;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SetState(EditorEvent) */

void Assembly-CSharp.dll::DesktopAvatarEditModeController::DesktopAvatarEditModeController_SetState
               (DesktopAvatarEditModeController *this,EditorEvent__Enum editorEvent,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).editorStateMachine;
  this = (DesktopAvatarEditModeController *)editorEvent;
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

void Assembly-CSharp.dll::DesktopAvatarEditModeController::
     DesktopAvatarEditModeController_SetUIReady
               (DesktopAvatarEditModeController *this,MethodInfo *method)

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
              (this_01,(Object *)this,MethodInfo__DesktopAvatarEditModeController__SetUIReady__,
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


/* Void Update() */

void Assembly-CSharp.dll::DesktopAvatarEditModeController::DesktopAvatarEditModeController_Update
               (DesktopAvatarEditModeController *this,MethodInfo *method)

{
  ModeControllerBase::ModeControllerBase_HandleFpsShortcut
            ((ModeControllerBase *)this,(MethodInfo *)0x0);
  pEVar1 = (this->fields).editorStateMachine;
  if (pEVar1 != (EditorStateMachine *)0x0) {
    (*(code *)(pEVar1->klass->vtable).Update.method)(pEVar1);
  }
  return;
}


/* Boolean <InitializeLocalAvatar>m__0(MVWorldObjectClient) */

bool Assembly-CSharp.dll::DesktopAvatarEditModeController::
     DesktopAvatarEditModeController__InitializeLocalAvatar_m__0
               (MVWorldObjectClient *wo,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (wo != (MVWorldObjectClient *)0x0) {
    bVar1 = (TypeInfo__MVSpawnPointBlue->_1).naturalAligment;
    if ((bVar1 <= (wo->klass->_1).naturalAligment) &&
       ((MVSpawnPointBlue__Class *)(wo->klass->_1).typeHierarchy[bVar1 - 1] ==
        TypeInfo__MVSpawnPointBlue)) {
      return wo != (MVWorldObjectClient *)0x0;
    }
    return 0;
  }
  return 0;
}


/* DesktopAvatarEditModeController() */

void Assembly-CSharp.dll::DesktopAvatarEditModeController::DesktopAvatarEditModeController__ctor
               (DesktopAvatarEditModeController *this,MethodInfo *method)

{
  (this->fields).firstTimeActiveAvatar = -1;
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

