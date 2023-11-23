
/* Void Activate(ActivateUIElement) */

void Assembly-CSharp.dll::DesktopAvatarEditModeController::DesktopAvatarEditModeController_Activate
               (DesktopAvatarEditModeController *this,ActivateUIElement__Enum element,
               MethodInfo *method)

{
  if (element == ActivateUIElement__Enum_AvatarAccessoryShop) {
    object_00 = (this->fields).accessoryShopController;
    if (object_00 != (AccessoryShopController *)0x0) {
      if (cRam_? == '\0') {
        func_?();
        func_?();
        func_?();
        cRam_? = '\x01';
      }
      (object_00->fields).pushOption = 2;
      pUVar1 = TypeInfo__AccessoryDataManager->static_fields->readyCallback;
      this_02 = (NavMesh_OnNavMeshPreUpdate *)
                func_?(TypeInfo__UnityEngine__Events__UnityAction);
      UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
      NavMesh_OnNavMeshPreUpdate__ctor
                (this_02,(Object *)object_00,MethodInfo__AccessoryShopController__ReadyCallback__,
                 (MethodInfo *)0x0);
      pUVar1 = (UnityAction *)
               mscorlib.dll::System::Delegate::Delegate_Combine
                         ((Delegate *)pUVar1,(Delegate *)this_02,(MethodInfo *)0x0);
      if (pUVar1 != (UnityAction *)0x0) {
        pUVar2 = (UnityAction *)0x0;
        if (pUVar1->klass == TypeInfo__UnityEngine__Events__UnityAction) {
          pUVar2 = pUVar1;
        }
        if (pUVar2 == (UnityAction *)0x0) {
          func_?();
        }
        else {
          TypeInfo__AccessoryDataManager->static_fields->readyCallback = pUVar2;
          pUVar2 = (UnityAction *)0x0;
          if (pUVar1->klass == TypeInfo__UnityEngine__Events__UnityAction) {
            pUVar2 = pUVar1;
          }
          if (pUVar2 != (UnityAction *)0x0) goto code_?;
        }
        func_?();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      TypeInfo__AccessoryDataManager->static_fields->readyCallback = (UnityAction *)0x0;
code_?:
      func_?();
      AccessoryDataManager::AccessoryDataManager_SetReady((MethodInfo *)0x0);
      return;
    }
  }
  else {
    if (element != ActivateUIElement__Enum_AvatarShop) {
      return;
    }
    this_00 = (Object__Class *)(this->fields).avatarShopController;
    if (this_00 != (Object__Class *)0x0) {
      if (cRam_? == '\0') {
        func_?();
        func_?(&
                        TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                       );
        func_?(&
                        UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                       );
        func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
        func_?(&
                        InventoryController_MethodInfo__UnityEngine__Object__Instantiate<InventoryController>_InventoryController_
                       );
        func_?(&TypeInfo__UnityEngine__Object);
        func_?(&
                        MethodInfo__AvatarShopController____c___Activate_b__10_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                       );
        func_?(&
                        MethodInfo__AvatarShopController____c__DisplayClass10_0___Activate_b__1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                       );
        func_?(&TypeInfo__AvatarShopController____c__DisplayClass10_0);
        func_?(&TypeInfo__AvatarShopController____c);
        func_?(&TypeInfo__UnityEngine__Events__UnityAction<int>);
        cRam_? = '\x01';
      }
      method_00 = (Object *)func_?(TypeInfo__AvatarShopController____c__DisplayClass10_0);
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                (method_00,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
      if (method_00 != (Object *)0x0) {
        method_00[1].klass = this_00;
        func_?();
        method_00[1].monitor = (MonitorData *)0x1;
        pIVar4 = *(InventoryController **)&(this_00->_0).this_arg.attrs;
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        pIVar4 = (InventoryController *)
                 UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                           ((Object *)pIVar4,
                            InventoryController_MethodInfo__UnityEngine__Object__Instantiate<InventoryController>_InventoryController_
                           );
        (this_00->_0).byval_arg.data.typeHandle = (Il2CppMetadataTypeHandle)pIVar4;
        func_?();
        pIVar4 = (InventoryController *)(this_00->_0).byval_arg.data.typeHandle;
        if (pIVar4 != (InventoryController *)0x0) {
          InventoryController::InventoryController_Initialize
                    (pIVar4,(this_00->_0).this_arg.data.__klassIndex,(MethodInfo *)0x0);
          pTVar5 = *(TabState **)&(this_00->_0).byval_arg.attrs;
          if ((pTVar5 != (TabState *)0x0) &&
             (pIVar4 = (InventoryController *)(this_00->_0).byval_arg.data.typeHandle,
             pIVar4 != (InventoryController *)0x0)) {
            InventoryController::InventoryController_AddTab
                      (pIVar4,0,(pTVar5->fields).name,(MethodInfo *)0x0);
            pIVar4 = (InventoryController *)(this_00->_0).byval_arg.data.array;
            if (pIVar4 != (InventoryController *)0x0) {
              a = (pIVar4->fields).OnPageTurned;
              this_01 = (UnityAction_1_System_Int32Enum_ *)func_?();
              UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
              UnityAction_1_System_Int32Enum___ctor
                        (this_01,(Object *)this_00,MethodInfo__AvatarShopController__PageTurned_int_
                         ,(MethodInfo *)0x0);
              iVar6 = 0;
              pDVar7 = mscorlib.dll::System::Delegate::Delegate_Combine
                                 ((Delegate *)a,(Delegate *)this_01,(MethodInfo *)0x0);
              if (pDVar7 != (Delegate *)0x0) {
                iVar8 = func_?();
                if (iVar8 != 0) {
                  *(int *)(iVar6 + 0x20) = iVar8;
                  iVar6 = func_?();
                  if (iVar6 != 0) goto code_?;
                  func_?();
                }
                func_?();
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              *(undefined4 *)(iVar6 + 0x20) = 0;
code_?:
              func_?();
              pGVar9 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                 ((Component *)this_00,(MethodInfo *)0x0);
              pGVar10 = pGVar9;
              if ((TypeInfo__AvatarShopController____c->_1).cctor_finished_or_no_cctor == 0) {
                func_?();
              }
              callbackFunction = TypeInfo__AvatarShopController____c->static_fields->__9__10_0;
              if (callbackFunction == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
                pGVar9 = pGVar10;
                if ((TypeInfo__AvatarShopController____c->_1).cctor_finished_or_no_cctor == 0) {
                  func_?();
                  pGVar9 = pGVar10;
                }
                object = TypeInfo__AvatarShopController____c->static_fields->__9;
                callbackFunction = (ExecuteEvents_EventFunction_1_IUIStack_ *)func_?();
                UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System
                ::Object]::UnityAction_2_System_Object_System_Object___ctor
                          ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,
                           (Object *)object,
                           MethodInfo__AvatarShopController____c___Activate_b__10_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                           ,(MethodInfo *)0x0);
                TypeInfo__AvatarShopController____c->static_fields->__9__10_0 = callbackFunction;
                func_?();
              }
              if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).
                  cctor_finished_or_no_cctor == 0) {
                func_?();
              }
              UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
              ExecuteEvents_ExecuteHierarchy
                        (pGVar9,(BaseEventData *)0x0,
                         (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction,
                         UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                        );
              pGVar9 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                 ((Component *)this_00,(MethodInfo *)0x0);
              callbackFunction_00 =
                   (ExecuteEvents_EventFunction_1_System_Object_ *)func_?();
              UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
              Object]::UnityAction_2_System_Object_System_Object___ctor
                        ((UnityAction_2_System_Object_System_Object_ *)callbackFunction_00,
                         (Object *)this_01,
                         MethodInfo__AvatarShopController____c__DisplayClass10_0___Activate_b__1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                         ,(MethodInfo *)0x0);
              UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
              ExecuteEvents_ExecuteHierarchy
                        (pGVar9,(BaseEventData *)0x0,callbackFunction_00,
                         UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                        );
              AvatarShopController::AvatarShopController_UpdateContent
                        ((AvatarShopController *)this_00,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
  uVar11 = func_?(&stack0xfffffff0);
  func_?(uVar11);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void Awake() */

void Assembly-CSharp.dll::DesktopAvatarEditModeController::DesktopAvatarEditModeController_Awake
               (DesktopAvatarEditModeController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<int>);
    func_?(&TypeInfo__System__Action);
    func_?(&MethodInfo__DesktopAvatarEditModeController__FirstTimeSetActiveAvatar_int_);
    func_?(&MethodInfo__DesktopAvatarEditModeController__SetUIReady__);
    func_?(&TypeInfo__DesktopPlayMode);
    func_?(&TypeInfo__MVInputWrapper);
    func_?(&
                    AvatarSelectionController_MethodInfo__UnityEngine__Object__Instantiate<AvatarSelectionController>_AvatarSelectionController_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  this_00 = (DesktopPlayMode *)func_?(TypeInfo__DesktopPlayMode);
  DesktopPlayMode::DesktopPlayMode__ctor(this_00,(MethodInfo *)0x0);
  if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__MVInputWrapper);
  }
  func_?(this_00,0);
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (pMVar1 == (MVNetworkGame *)0x0) goto code_?;
  pAVar2 = (pMVar1->fields).OnActiveAvatar;
  this_01 = (UnityAction_1_System_Int32Enum_ *)func_?(TypeInfo__System__Action<int>);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
  UnityAction_1_System_Int32Enum___ctor
            (this_01,(Object *)this,
             MethodInfo__DesktopAvatarEditModeController__FirstTimeSetActiveAvatar_int_,
             (MethodInfo *)0x0);
  pDVar3 = mscorlib.dll::System::Delegate::Delegate_Combine
                     ((Delegate *)pAVar2,(Delegate *)this_01,(MethodInfo *)0x0);
  if (pDVar3 == (Delegate *)0x0) {
    (pMVar1->fields).OnActiveAvatar = (Action_1_Int32_ *)0x0;
code_?:
    func_?();
    pUVar4 = (this->fields).uiStack;
    if (pUVar4 == (UIStack *)0x0) {
code_?:
      func_?();
    }
    else {
      UIStack::UIStack_Push
                (pUVar4,(this->fields).stackBottom,UIPushOption__Enum_None,(UnityAction *)0x0,
                 UIGroupFlags__Enum_StackBottom,(MethodInfo *)0x0);
      pGVar5 = (this->fields).stackBottom;
      if (pGVar5 == (GameObject *)0x0) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar5,1,(MethodInfo *)0x0);
      pAVar6 = (this->fields).avatarSelectionController;
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pAVar6 = (AvatarSelectionController *)
               UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                         ((Object *)pAVar6,
                          AvatarSelectionController_MethodInfo__UnityEngine__Object__Instantiate<AvatarSelectionController>_AvatarSelectionController_
                         );
      (this->fields).avatarSelectionController = pAVar6;
      func_?(&(this->fields).avatarSelectionController);
      pAVar6 = (this->fields).avatarSelectionController;
      pUVar4 = (this->fields).uiStack;
      if ((pAVar6 == (AvatarSelectionController *)0x0) ||
         (pGVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                             ((Component *)pAVar6,(MethodInfo *)0x0), pUVar4 == (UIStack *)0x0))
      goto code_?;
      UIStack::UIStack_Push
                (pUVar4,pGVar5,UIPushOption__Enum_None,(UnityAction *)0x0,UIGroupFlags__Enum_MainUI,
                 (MethodInfo *)0x0);
      MVGameControllerDesktop::MVGameControllerDesktop_RegisterAvaterEditModeController
                (this,(MethodInfo *)0x0);
      pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if ((pMVar1 == (MVNetworkGame *)0x0) ||
         (this_02 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar1,(MethodInfo *)0x0),
         this_02 == (MVLocalPlayer *)0x0)) goto code_?;
      bVar7 = MVPlayer::MVPlayer_get_IsReady((MVPlayer *)this_02,(MethodInfo *)0x0);
      if (bVar7 == 0) {
        pAVar8 = MVGameControllerBase::MVGameControllerBase_get_OnFirstFrameUpdateActorReady
                            ((MethodInfo *)0x0);
        pNVar9 = (NavMesh_OnNavMeshPreUpdate *)func_?(TypeInfo__System__Action);
        UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
        NavMesh_OnNavMeshPreUpdate__ctor
                  (pNVar9,(Object *)this,MethodInfo__DesktopAvatarEditModeController__SetUIReady__,
                   (MethodInfo *)0x0);
        pAVar10 = (Action *)
                  mscorlib.dll::System::Delegate::Delegate_Combine
                            ((Delegate *)pAVar8,(Delegate *)pNVar9,(MethodInfo *)0x0);
        pAVar8 = (Action *)0x0;
        if (pAVar10 == (Action *)0x0) goto code_?;
        if (pAVar10->klass == TypeInfo__System__Action) {
          pAVar8 = pAVar10;
        }
      }
      else {
        if (cRam_? == '\0') {
          func_?(&TypeInfo__System__Action);
          func_?(&MethodInfo__DesktopAvatarEditModeController__SetUIReady__);
          cRam_? = '\x01';
        }
        pUVar4 = (this->fields).uiStack;
        if (pUVar4 == (UIStack *)0x0) goto code_?;
        UIStack::UIStack_SetStackReady(pUVar4,(MethodInfo *)0x0);
        pAVar8 = MVGameControllerBase::MVGameControllerBase_get_OnFirstFrameUpdateActorReady
                            ((MethodInfo *)0x0);
        pNVar9 = (NavMesh_OnNavMeshPreUpdate *)func_?(TypeInfo__System__Action);
        UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
        NavMesh_OnNavMeshPreUpdate__ctor
                  (pNVar9,(Object *)this,MethodInfo__DesktopAvatarEditModeController__SetUIReady__,
                   (MethodInfo *)0x0);
        pAVar10 = (Action *)
                  mscorlib.dll::System::Delegate::Delegate_Remove
                            ((Delegate *)pAVar8,(Delegate *)pNVar9,(MethodInfo *)0x0);
        pAVar8 = (Action *)0x0;
        if (pAVar10 == (Action *)0x0) goto code_?;
        if (pAVar10->klass == TypeInfo__System__Action) {
          pAVar8 = pAVar10;
        }
      }
      if (pAVar8 != (Action *)0x0) {
code_?:
        MVGameControllerBase::MVGameControllerBase_set_OnFirstFrameUpdateActorReady
                  (pAVar8,(MethodInfo *)0x0);
        return;
      }
    }
    func_?();
  }
  else {
    pAVar2 = (Action_1_Int32_ *)func_?();
    if (pAVar2 == (Action_1_Int32_ *)0x0) goto code_?;
    (pMVar1->fields).OnActiveAvatar = pAVar2;
    iVar11 = func_?();
    if (iVar11 != 0) goto code_?;
  }
  func_?();
code_?:
  func_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void ClearStateStack() */

void Assembly-CSharp.dll::DesktopAvatarEditModeController::
     DesktopAvatarEditModeController_ClearStateStack
               (DesktopAvatarEditModeController *this,MethodInfo *method)

{
  this_01 = (this->fields).editorStateMachine;
  if (this_01 != (EditorStateMachine *)0x0) {
    if (cRam_? == '\0') {
      func_?();
      func_?();
      func_?();
      cRam_? = '\x01';
    }
    this_00 = (Stack_1_UnityEngine_UIElements_TextureId_ *)(this_01->fields)._.stateStack;
    if (this_00 != (Stack_1_UnityEngine_UIElements_TextureId_ *)0x0) {
      if (0 < (this_00->fields)._size) {
        mscorlib.dll::System::Collections::Generic::Stack`1[UnityEngine::UIElements::TextureId]::
        Stack_1_UnityEngine_UIElements_TextureId__Pop
                  (this_00,MethodInfo__System__Collections__Generic__Stack<EditorEvent>__Pop__);
        (this_01->fields)._.clearStack = 1;
        value = (Object *)func_?();
        FSMEntity::FSMEntity_set_Event((FSMEntity *)this_01,value,(MethodInfo *)0x0);
      }
      return;
    }
  }
  uVar1 = func_?(&stack0xfffffff0);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void GetCurrentBody(Action`1[MVBody]) */

void Assembly-CSharp.dll::DesktopAvatarEditModeController::
     DesktopAvatarEditModeController_GetCurrentBody
               (DesktopAvatarEditModeController *this,Action_1_MVBody_ *callback,MethodInfo *method)

{
  this_00 = (this->fields).avatarEditModeBodyController;
  if (this_00 != (AvatarEditModeBodyController *)0x0) {
    AvatarEditModeBodyController::AvatarEditModeBodyController_get_CurrentBody
              (this_00,(MethodInfo *)0x0);
    if (callback != (Action_1_MVBody_ *)0x0) {
      (*(callback->fields)._._.invoke_impl)();
      return;
    }
  }
  uVar1 = func_?(&stack0xfffffff8);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void Initialize() */

void Assembly-CSharp.dll::DesktopAvatarEditModeController::
     DesktopAvatarEditModeController_Initialize
               (DesktopAvatarEditModeController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__EditorEvent);
    func_?(&TypeInfo__EditorStateMachine);
    func_?(&
                    NotificationsManager_MethodInfo__UnityEngine__Object__Instantiate<NotificationsManager>_NotificationsManager_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  ModeControllerBase::ModeControllerBase_Initialize((ModeControllerBase *)this,(MethodInfo *)0x0);
  this_00 = (this->fields).avatarShopController;
  if (this_00 != (AvatarShopController *)0x0) {
    AvatarShopController::AvatarShopController_Initialize
              (this_00,(this->fields).avatarEditModeBodyController,(MethodInfo *)0x0);
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
        func_?();
        pNVar2 = (this->fields).notificationsManager;
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        pNVar2 = (NotificationsManager *)
                 UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                           ((Object *)pNVar2,
                            NotificationsManager_MethodInfo__UnityEngine__Object__Instantiate<NotificationsManager>_NotificationsManager_
                           );
        (this->fields).notificationsManager = pNVar2;
        func_?();
        pNVar2 = (this->fields).notificationsManager;
        if (pNVar2 != (NotificationsManager *)0x0) {
          this_06 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                              ((Component *)pNVar2,(MethodInfo *)0x0);
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
                         Component_get_gameObject((Component *)this,(MethodInfo *)0x0);
                pAVar4 = (this->fields).avatarEditModeBodyController;
                if (pAVar4 != (AvatarEditModeBodyController *)0x0) {
                  uVar5._0_4_ = (pAVar4->fields).displayPos.x;
                  uVar5._4_4_ = (pAVar4->fields).displayPos.y;
                  fVar6 = (pAVar4->fields).displayPos.z;
                  pEVar7 = (EditorStateMachine *)func_?();
                  avatarEditModeCenterPos.z = fVar6;
                  avatarEditModeCenterPos.x = (float)(int)uVar5;
                  avatarEditModeCenterPos.y = (float)(int)((ulonglong)uVar5 >> 0x20);
                  EditorStateMachine::EditorStateMachine__ctor_1
                            (pEVar7,pGVar3,avatarEditModeCenterPos,(MethodInfo *)0x0);
                  (this->fields).editorStateMachine = pEVar7;
                  func_?();
                  pEVar7 = (this->fields).editorStateMachine;
                  if ((pEVar7 != (EditorStateMachine *)0x0) &&
                     (this_01 = (this->fields).materialsController,
                     this_01 != (MaterialsController *)0x0)) {
                    MaterialsController::MaterialsController_Initialize
                              (this_01,(pEVar7->fields).cubeModelingStateMachine,(MethodInfo *)0x0);
                    this_02 = (this->fields).avatarSelectionController;
                    if (this_02 != (AvatarSelectionController *)0x0) {
                      AvatarSelectionController::AvatarSelectionController_Initialize
                                (this_02,(this->fields).avatarEditModeBodyController,
                                 (this->fields).editorStateMachine,(MethodInfo *)0x0);
                      if ((this->fields).firstTimeActiveAvatar != -1) {
                        pAVar4 = (this->fields).avatarEditModeBodyController;
                        if (pAVar4 == (AvatarEditModeBodyController *)0x0) goto code_?;
                        AvatarEditModeBodyController::
                        AvatarEditModeBodyController_SetCurrentBodyByWoId
                                  (pAVar4,(this->fields).firstTimeActiveAvatar,(MethodInfo *)0x0);
                      }
                      pAVar4 = (this->fields).avatarEditModeBodyController;
                      pEVar7 = (this->fields).editorStateMachine;
                      if (pAVar4 != (AvatarEditModeBodyController *)0x0) {
                        group = AvatarEditModeBodyController::
                                AvatarEditModeBodyController_get_CurrentBody
                                          (pAVar4,(MethodInfo *)0x0);
                        if (pEVar7 != (EditorStateMachine *)0x0) {
                          EditorStateMachine::EditorStateMachine_EnterGroup
                                    (pEVar7,(MVGroup *)group,(MethodInfo *)0x0);
                          pEVar7 = (this->fields).editorStateMachine;
                          value = (Object *)func_?();
                          if (pEVar7 != (EditorStateMachine *)0x0) {
                            FSMEntity::FSMEntity_set_Event
                                      ((FSMEntity *)pEVar7,value,(MethodInfo *)0x0);
                            pEVar7 = (this->fields).editorStateMachine;
                            if ((pEVar7 != (EditorStateMachine *)0x0) &&
                               (this_03 = (pEVar7->fields).cubeModelingStateMachine,
                               this_03 != (CubeModelingStateMachine *)0x0)) {
                              CubeModelingStateMachine::
                              CubeModelingStateMachine_set_CurrentMaterialId
                                        (this_03,0x15,(MethodInfo *)0x0);
                              pEVar7 = (this->fields).editorStateMachine;
                              if ((pEVar7 != (EditorStateMachine *)0x0) &&
                                 (pSVar8 = (this->fields).setupCubeModelTutorialUI,
                                 pSVar8 != (SetupCubeModelTutorialUI *)0x0)) {
                                (pSVar8->fields).cubeModelingStateMachine =
                                     (pEVar7->fields).cubeModelingStateMachine;
                                func_?();
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
code_?:
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void InitializeLocalAvatar() */

void Assembly-CSharp.dll::DesktopAvatarEditModeController::
     DesktopAvatarEditModeController_InitializeLocalAvatar
               (DesktopAvatarEditModeController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Func<MVWorldObjectClient,_bool>);
    func_?(&TypeInfo__MVSpawnPointBlue);
    func_?(&
                    MethodInfo__DesktopAvatarEditModeController____c___InitializeLocalAvatar_b__23_0_MVWorldObjectClient_
                   );
    func_?(&TypeInfo__DesktopAvatarEditModeController____c);
    cRam_? = '\x01';
  }
  this_01 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if ((TypeInfo__DesktopAvatarEditModeController____c->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__DesktopAvatarEditModeController____c);
  }
  this_02 = TypeInfo__DesktopAvatarEditModeController____c->static_fields->__9__23_0;
  if (this_02 == (Func_2_MVWorldObjectClient_Boolean_ *)0x0) {
    if ((TypeInfo__DesktopAvatarEditModeController____c->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__DesktopAvatarEditModeController____c);
    }
    unaff_ESI = (MVWorldObjectClient *)
                TypeInfo__DesktopAvatarEditModeController____c->static_fields->__9;
    this_02 = (Func_2_MVWorldObjectClient_Boolean_ *)
              func_?(TypeInfo__System__Func<MVWorldObjectClient,_bool>);
    mscorlib.dll::System::Func`2[Object,Boolean]::Func_2_Object_Boolean___ctor
              ((Func_2_Object_Boolean_ *)this_02,(Object *)unaff_ESI,
               MethodInfo__DesktopAvatarEditModeController____c___InitializeLocalAvatar_b__23_0_MVWorldObjectClient_
               ,(MethodInfo *)0x0);
    TypeInfo__DesktopAvatarEditModeController____c->static_fields->__9__23_0 = this_02;
    func_?(&TypeInfo__DesktopAvatarEditModeController____c->static_fields->__9__23_0,
                    this_02);
  }
  if (this_01 != (MVWorldObjectClientManager *)0x0) {
    unaff_ESI = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClientWhere
                          (this_01,this_02,(MethodInfo *)0x0);
    if ((unaff_ESI != (MVWorldObjectClient *)0x0) &&
       (((unaff_ESI->klass->_1).naturalAligment < (TypeInfo__MVSpawnPointBlue->_1).naturalAligment
        || ((MVSpawnPointBlue__Class *)
            (unaff_ESI->klass->_1).typeHierarchy
            [(TypeInfo__MVSpawnPointBlue->_1).naturalAligment - 1] != TypeInfo__MVSpawnPointBlue))))
    goto code_?;
    pGVar1 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
    if ((pGVar1 != (GameEventManager *)0x0) &&
       (this_00 = (pGVar1->fields).AvatarCommandsBuildMode, unaff_ESI != (MVWorldObjectClient *)0x0)
       ) {
      puVar2 = (undefined8 *)
               (*(code *)(unaff_ESI->klass->vtable).get_WorldPosition_1.method)(&stack0xffffffe0);
      QStack_3._4_8_ = *puVar2;
      QStack_3.w = *(float *)(puVar2 + 1);
      if (cRam_? == '\0') {
        func_?(&TypeInfo__UnityEngine__Vector3);
        cRam_? = '\x01';
      }
      pVVar4 = TypeInfo__UnityEngine__Vector3->static_fields;
      uVar5 = (pVVar4->upVector).x;
      uVar6 = (pVVar4->upVector).y;
      fVar7 = QStack_3.y - (float)uVar5;
      fVar8 = QStack_3.z - (float)uVar6;
      fVar9 = QStack_3.w - (pVVar4->upVector).z;
      pQVar10 = MVWorldObjectClient::MVWorldObjectClient_get_SyncRot
                         (&QStack_3,unaff_ESI,(MethodInfo *)0x0);
      if (this_00 != (GameEventManager_AvatarCommandsBuildModeManager *)0x0) {
        position.y = fVar8;
        position.x = fVar7;
        position.z = fVar9;
        GameEventManager+AvatarCommandsBuildModeManager::
        GameEventManager_AvatarCommandsBuildModeManager_SetSpawn
                  (this_00,position,*pQVar10,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
code_?:
  func_?(unaff_ESI);
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::DesktopAvatarEditModeController::DesktopAvatarEditModeController_OnDestroy
               (DesktopAvatarEditModeController *this,MethodInfo *method)

{
  pAStack_1 = (AvatarSelectionController__StaticFields *)&stack0xfffffffc;
  if ((this->fields).avatarSelectionController != (AvatarSelectionController *)0x0) {
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    TypeInfo__AvatarSelectionController->static_fields->instance = (AvatarSelectionController *)0x0;
    pAStack_1 = TypeInfo__AvatarSelectionController->static_fields;
    func_?();
    return;
  }
  uVar2 = func_?(auStack_3);
  func_?(uVar2);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void OnPopCubeModelingController() */

void Assembly-CSharp.dll::DesktopAvatarEditModeController::
     DesktopAvatarEditModeController_OnPopCubeModelingController
               (DesktopAvatarEditModeController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__EditorEvent);
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
    uVar1 = func_?(&stack0xfffffff0);
    func_?(uVar1);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (cRam_? == '\0') {
    func_?();
    func_?();
    func_?();
    cRam_? = '\x01';
  }
  (object->fields).accessoryDataToShow = displayShopItems;
  func_?(&(object->fields).accessoryDataToShow,displayShopItems);
  (object->fields).pushOption = pushOption;
  pUVar3 = TypeInfo__AccessoryDataManager->static_fields->readyCallback;
  this_00 = (NavMesh_OnNavMeshPreUpdate *)
            func_?(TypeInfo__UnityEngine__Events__UnityAction);
  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
  NavMesh_OnNavMeshPreUpdate__ctor
            (this_00,(Object *)object,
             MethodInfo__AccessoryShopController__ReadyCallbackAccessoryView__,(MethodInfo *)0x0);
  pUVar3 = (UnityAction *)
           mscorlib.dll::System::Delegate::Delegate_Combine
                     ((Delegate *)pUVar3,(Delegate *)this_00,(MethodInfo *)0x0);
  if (pUVar3 == (UnityAction *)0x0) {
    TypeInfo__AccessoryDataManager->static_fields->readyCallback = (UnityAction *)0x0;
    pUVar4 = (UnityAction *)0x0;
code_?:
    pUStack5 = (UnityAction__Class *)pUVar4;
    func_?();
    AccessoryDataManager::AccessoryDataManager_SetReady((MethodInfo *)0x0);
    return;
  }
  pUVar4 = (UnityAction *)0x0;
  if (pUVar3->klass == TypeInfo__UnityEngine__Events__UnityAction) {
    pUVar4 = pUVar3;
  }
  if (pUVar4 == (UnityAction *)0x0) {
    pUStack5 = TypeInfo__UnityEngine__Events__UnityAction;
    func_?();
    pUStack5 = extraout_EDX;
  }
  else {
    TypeInfo__AccessoryDataManager->static_fields->readyCallback = pUVar4;
    pUVar4 = (UnityAction *)0x0;
    if (pUVar3->klass == TypeInfo__UnityEngine__Events__UnityAction) {
      pUVar4 = pUVar3;
    }
    pUStack5 = TypeInfo__UnityEngine__Events__UnityAction;
    if (pUVar4 != (UnityAction *)0x0) goto code_?;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
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
      func_?();
      func_?();
      func_?();
      func_?(&
                      UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IAvatarSetBodyGroup>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAvatarSetBodyGroup>_
                     );
      func_?(&
                      UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<IEditStateCommands>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IEditStateCommands>_
                     );
      func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
      func_?(&
                      MethodInfo__AvatarSelectionController____c___SetStateToRoam_b__15_1_IEditStateCommands__UnityEngine__EventSystems__BaseEventData_
                     );
      func_?(&TypeInfo__AvatarSelectionController____c);
      cRam_? = '\x01';
    }
    pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this_00,(MethodInfo *)0x0);
    callbackFunction =
         (ExecuteEvents_EventFunction_1_System_Object_ *)
         func_?(
                        TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAvatarSetBodyGroup>
                        );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)this_00,
               MethodInfo__AvatarSelectionController___SetStateToRoam_b__15_0_UnityEngine__EventSystems__IAvatarSetBodyGroup__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
              (pGVar1,(BaseEventData *)0x0,callbackFunction,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IAvatarSetBodyGroup>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAvatarSetBodyGroup>_
              );
    pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this_00,(MethodInfo *)0x0);
    if ((TypeInfo__AvatarSelectionController____c->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    callbackFunction_00 = TypeInfo__AvatarSelectionController____c->static_fields->__9__15_1;
    if (callbackFunction_00 == (ExecuteEvents_EventFunction_1_IEditStateCommands_ *)0x0) {
      if ((TypeInfo__AvatarSelectionController____c->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      object = TypeInfo__AvatarSelectionController____c->static_fields->__9;
      callbackFunction_00 = (ExecuteEvents_EventFunction_1_IEditStateCommands_ *)func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                ((UnityAction_2_System_Object_System_Object_ *)callbackFunction_00,(Object *)object,
                 MethodInfo__AvatarSelectionController____c___SetStateToRoam_b__15_1_IEditStateCommands__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      TypeInfo__AvatarSelectionController____c->static_fields->__9__15_1 = callbackFunction_00;
      func_?();
    }
    if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
              (pGVar1,(BaseEventData *)0x0,
               (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction_00,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<IEditStateCommands>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IEditStateCommands>_
              );
    return;
  }
  uVar2 = func_?(&stack0xfffffff0);
  func_?(uVar2);
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
    func_?(&MethodInfo__DesktopAvatarEditModeController__OnPopCubeModelingController__);
    func_?(&TypeInfo__UnityEngine__Events__UnityAction);
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
    this_00 = (NavMesh_OnNavMeshPreUpdate *)
              func_?(TypeInfo__UnityEngine__Events__UnityAction);
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
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
  func_?();
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
  if ((pEVar1 != (EditorStateMachine *)0x0) &&
     (this_00 = (pEVar1->fields).selectionController, this_00 != (SelectionController *)0x0)) {
    SelectionController::SelectionController_DeSelectAll(this_00,(MethodInfo *)0x0);
    SelectionController::SelectionController_PushWOParents
              (this_00,(MVWorldObjectClient *)bodyGroup,1,(MethodInfo *)0x0);
    return;
  }
  uVar2 = func_?(&stack0xffffffe8);
  func_?(uVar2);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void SetState(EditorEvent) */

void Assembly-CSharp.dll::DesktopAvatarEditModeController::DesktopAvatarEditModeController_SetState
               (DesktopAvatarEditModeController *this,EditorEvent__Enum editorEvent,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__EditorEvent);
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
    func_?();
    func_?();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).uiStack;
  if (this_00 != (UIStack *)0x0) {
    UIStack::UIStack_SetStackReady(this_00,(MethodInfo *)0x0);
    source = MVGameControllerBase::MVGameControllerBase_get_OnFirstFrameUpdateActorReady
                       ((MethodInfo *)0x0);
    this_01 = (NavMesh_OnNavMeshPreUpdate *)func_?();
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (this_01,(Object *)this,MethodInfo__DesktopAvatarEditModeController__SetUIReady__,
               (MethodInfo *)0x0);
    pDVar1 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)this_01,(MethodInfo *)0x0);
    if (pDVar1 != (Delegate *)0x0) {
      pDVar2 = (Delegate *)0x0;
      if ((Action__Class *)pDVar1->klass == TypeInfo__System__Action) {
        pDVar2 = pDVar1;
      }
      if (pDVar2 == (Delegate *)0x0) {
        pDStack_3 = pDVar1;
        func_?();
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    pMVar5 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if ((pMVar5 != (MVGameControllerBase *)0x0) &&
       (pFVar6 = (pMVar5->fields).firstFrameUpdateActorReady,
       pFVar6 != (FirstFrameUpdateActorReady *)0x0)) {
      (pFVar6->fields).callbacks = unaff_ESI;
      func_?();
      return;
    }
  }
  uVar7 = func_?(&puStack_8);
  func_?(uVar7);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::DesktopAvatarEditModeController::DesktopAvatarEditModeController_Update
               (DesktopAvatarEditModeController *this,MethodInfo *method)

{
  ModeControllerBase::ModeControllerBase_HandleFpsShortcut
            ((ModeControllerBase *)this,(MethodInfo *)0x0);
  if ((this->fields).editorStateMachine != (EditorStateMachine *)0x0) {
    pEVar1 = (this->fields).editorStateMachine;
    pEVar2 = pEVar1->klass;
    (*(code *)(pEVar2->vtable).Update.method)(pEVar1,pEVar2[1]._0.image);
  }
  return;
}


/* DesktopAvatarEditModeController() */

void Assembly-CSharp.dll::DesktopAvatarEditModeController::DesktopAvatarEditModeController__ctor
               (DesktopAvatarEditModeController *this,MethodInfo *method)

{
  (this->fields).firstTimeActiveAvatar = -1;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  return;
}

