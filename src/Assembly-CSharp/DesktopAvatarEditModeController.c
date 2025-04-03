
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
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
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
        pIVar5 = &(this_00->_0).byval_arg;
        (pIVar5->data).typeHandle = (Il2CppMetadataTypeHandle)pIVar4;
        func_?();
        if ((InventoryController *)(pIVar5->data).typeHandle != (InventoryController *)0x0) {
          InventoryController::InventoryController_Initialize
                    ((InventoryController *)(pIVar5->data).typeHandle,
                     (this_00->_0).this_arg.data.__klassIndex,(MethodInfo *)0x0);
          pTVar6 = *(TabState **)&(this_00->_0).byval_arg.attrs;
          if ((pTVar6 != (TabState *)0x0) &&
             ((InventoryController *)(pIVar5->data).typeHandle != (InventoryController *)0x0)) {
            InventoryController::InventoryController_AddTab
                      ((InventoryController *)(pIVar5->data).typeHandle,0,(pTVar6->fields).name,
                       (MethodInfo *)0x0);
            if ((InventoryController *)(pIVar5->data).array != (InventoryController *)0x0) {
              a = (((InventoryController *)(pIVar5->data).array)->fields).OnPageTurned;
              this_01 = (UnityAction_1_System_Int32Enum_ *)func_?();
              UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
              UnityAction_1_System_Int32Enum___ctor
                        (this_01,(Object *)this_00,MethodInfo__AvatarShopController__PageTurned_int_
                         ,(MethodInfo *)0x0);
              iVar7 = 0;
              pDVar8 = mscorlib.dll::System::Delegate::Delegate_Combine
                                 ((Delegate *)a,(Delegate *)this_01,(MethodInfo *)0x0);
              if (pDVar8 != (Delegate *)0x0) {
                iVar9 = func_?();
                if (iVar9 != 0) {
                  *(int *)(iVar7 + 0x20) = iVar9;
                  iVar7 = func_?();
                  if (iVar7 != 0) goto code_?;
                  func_?();
                }
                func_?();
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              *(undefined4 *)(iVar7 + 0x20) = 0;
code_?:
              func_?();
              pGVar10 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                 ((Component *)this_00,(MethodInfo *)0x0);
              pGVar11 = pGVar10;
              if ((TypeInfo__AvatarShopController____c->_1).cctor_finished_or_no_cctor == 0) {
                func_?();
              }
              callbackFunction = TypeInfo__AvatarShopController____c->static_fields->__9__10_0;
              if (callbackFunction == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
                pGVar10 = pGVar11;
                if ((TypeInfo__AvatarShopController____c->_1).cctor_finished_or_no_cctor == 0) {
                  func_?();
                  pGVar10 = pGVar11;
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
                        (pGVar10,(BaseEventData *)0x0,
                         (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction,
                         UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                        );
              pGVar10 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
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
                        (pGVar10,(BaseEventData *)0x0,callbackFunction_00,
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
  uVar12 = func_?(&stack0xfffffff0);
  func_?(uVar12);
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
      ppAVar6 = &(this->fields).avatarSelectionController;
      pAVar7 = *ppAVar6;
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pAVar7 = (AvatarSelectionController *)
               UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                         ((Object *)pAVar7,
                          AvatarSelectionController_MethodInfo__UnityEngine__Object__Instantiate<AvatarSelectionController>_AvatarSelectionController_
                         );
      *ppAVar6 = pAVar7;
      func_?(ppAVar6);
      pUVar4 = (this->fields).uiStack;
      if ((*ppAVar6 == (AvatarSelectionController *)0x0) ||
         (pGVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                              ((Component *)*ppAVar6,(MethodInfo *)0x0), pUVar4 == (UIStack *)0x0))
      goto code_?;
      UIStack::UIStack_Push
                (pUVar4,pGVar5,UIPushOption__Enum_None,(UnityAction *)0x0,UIGroupFlags__Enum_MainUI
                 ,(MethodInfo *)0x0);
      MVGameControllerDesktop::MVGameControllerDesktop_RegisterAvaterEditModeController
                (this,(MethodInfo *)0x0);
      pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if ((pMVar1 == (MVNetworkGame *)0x0) ||
         (this_02 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar1,(MethodInfo *)0x0),
         this_02 == (MVLocalPlayer *)0x0)) goto code_?;
      bVar8 = MVPlayer::MVPlayer_get_IsReady((MVPlayer *)this_02,(MethodInfo *)0x0);
      if (bVar8 == 0) {
        pAVar9 = MVGameControllerBase::MVGameControllerBase_get_OnFirstFrameUpdateActorReady
                            ((MethodInfo *)0x0);
        pNVar10 = (NavMesh_OnNavMeshPreUpdate *)func_?(TypeInfo__System__Action);
        UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
        NavMesh_OnNavMeshPreUpdate__ctor
                  (pNVar10,(Object *)this,MethodInfo__DesktopAvatarEditModeController__SetUIReady__,
                   (MethodInfo *)0x0);
        pAVar11 = (Action *)
                  mscorlib.dll::System::Delegate::Delegate_Combine
                            ((Delegate *)pAVar9,(Delegate *)pNVar10,(MethodInfo *)0x0);
        pAVar9 = (Action *)0x0;
        if (pAVar11 == (Action *)0x0) goto code_?;
        if (pAVar11->klass == TypeInfo__System__Action) {
          pAVar9 = pAVar11;
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
        pAVar9 = MVGameControllerBase::MVGameControllerBase_get_OnFirstFrameUpdateActorReady
                            ((MethodInfo *)0x0);
        pNVar10 = (NavMesh_OnNavMeshPreUpdate *)func_?(TypeInfo__System__Action);
        UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
        NavMesh_OnNavMeshPreUpdate__ctor
                  (pNVar10,(Object *)this,MethodInfo__DesktopAvatarEditModeController__SetUIReady__,
                   (MethodInfo *)0x0);
        pAVar11 = (Action *)
                  mscorlib.dll::System::Delegate::Delegate_Remove
                            ((Delegate *)pAVar9,(Delegate *)pNVar10,(MethodInfo *)0x0);
        pAVar9 = (Action *)0x0;
        if (pAVar11 == (Action *)0x0) goto code_?;
        if (pAVar11->klass == TypeInfo__System__Action) {
          pAVar9 = pAVar11;
        }
      }
      if (pAVar9 != (Action *)0x0) {
code_?:
        MVGameControllerBase::MVGameControllerBase_set_OnFirstFrameUpdateActorReady
                  (pAVar9,(MethodInfo *)0x0);
        return;
      }
    }
    func_?();
  }
  else {
    pAVar2 = (Action_1_Int32_ *)func_?();
    if (pAVar2 == (Action_1_Int32_ *)0x0) goto code_?;
    (pMVar1->fields).OnActiveAvatar = pAVar2;
    iVar12 = func_?();
    if (iVar12 != 0) goto code_?;
  }
  func_?();
code_?:
  func_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
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
  pAVar1 = (this->fields).avatarEditModeBodyController;
  if (pAVar1 != (AvatarEditModeBodyController *)0x0) {
    if (cRam_? == '\0') {
      func_?(&MethodInfo__System__Collections__Generic__List<MVBody>__get_Item_int_);
      cRam_? = '\x01';
    }
    this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
              (pAVar1->fields).bodies;
    if (this_00 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
      RegexCharClass+SingleRange]::
      List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                (this_00,(pAVar1->fields).currentBodyIndex,
                 MethodInfo__System__Collections__Generic__List<MVBody>__get_Item_int_);
      if (callback != (Action_1_MVBody_ *)0x0) {
        (*(callback->fields)._._.invoke_impl)((callback->fields)._._.method_code);
        return;
      }
    }
  }
  func_?();
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
  pDVar1 = this;
  ModeControllerBase::ModeControllerBase_Initialize((ModeControllerBase *)this,(MethodInfo *)0x0);
  pAVar2 = (pDVar1->fields).avatarShopController;
  pAVar3 = (pDVar1->fields).avatarEditModeBodyController;
  if (pAVar2 != (AvatarShopController *)0x0) {
    if (cRam_? == '\0') {
      func_?(&TypeInfo__TabState);
      func_?(&StringLiteral_Avatars);
      cRam_? = '\x01';
    }
    ppAVar4 = &(pAVar2->fields).avatarEditModeBodyController;
    *ppAVar4 = pAVar3;
    func_?(ppAVar4,pAVar3);
    pMVar5 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (pMVar5 != (MVNetworkGame *)0x0) {
      pAVar6 = (pMVar5->fields)._AvatarShopRepository_k__BackingField;
      ppAVar7 = &(pAVar2->fields).avatarRepository;
      *ppAVar7 = pAVar6;
      func_?(ppAVar7,pAVar6);
      name = TM::TM__(StringLiteral_Avatars,(MethodInfo *)0x0);
      iVar8 = (pAVar2->fields).numberOfSlotsPrPage;
      this_03 = (TabState *)func_?(TypeInfo__TabState);
      TabState::TabState__ctor(this_03,1,name,iVar8,(MethodInfo *)0x0);
      pAVar6 = *ppAVar7;
      if (pAVar6 != (AvatarRepository *)0x0) {
        if (cRam_? == '\0') {
          func_?(&
                          MethodInfo__System__Collections__Generic__Dictionary<int,_AvatarRepositoryItem>__get_Count__
                         );
          cRam_? = '\x01';
        }
        this_00 = (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                   *)(pAVar6->fields).avatars;
        if ((this_00 !=
             (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
              *)0x0) &&
           (iVar8 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::
                     UIElements::StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
                     Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__get_Count
                               (this_00,
                                MethodInfo__System__Collections__Generic__Dictionary<int,_AvatarRepositoryItem>__get_Count__
                               ), this_03 != (TabState *)0x0)) {
          (this_03->fields).highestSlotIndex = iVar8 + -1;
          ppTVar9 = &(pAVar2->fields).tab;
          *ppTVar9 = this_03;
          func_?(ppTVar9,this_03);
          this_04 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager
                              ((MethodInfo *)0x0);
          if (this_04 != (MainCameraManager *)0x0) {
            MainCameraManager::MainCameraManager_set_IsLogicRendered(this_04,0,(MethodInfo *)0x0);
            pDVar1 = this;
            DesktopAvatarEditModeController_InitializeLocalAvatar(this,(MethodInfo *)0x0);
            pDVar10 = (pDVar1->fields).drawPlaneController;
            if (pDVar10 != (DrawPlaneControllerUUI *)0x0) {
              DrawPlaneControllerUUI::DrawPlaneControllerUUI_Initialize(pDVar10,(MethodInfo *)0x0);
              pDVar10 = (pDVar1->fields).drawPlaneController;
              if (cRam_? == '\0') {
                func_?(&TypeInfo__DrawPlane);
                cRam_? = '\x01';
              }
              TypeInfo__DrawPlane->static_fields->drawPlaneController = pDVar10;
              func_?(TypeInfo__DrawPlane->static_fields,pDVar10);
              ppNVar11 = &(pDVar1->fields).notificationsManager;
              pNVar12 = *ppNVar11;
              if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
                func_?(TypeInfo__UnityEngine__Object);
              }
              pNVar12 = (NotificationsManager *)
                        UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                                  ((Object *)pNVar12,
                                   NotificationsManager_MethodInfo__UnityEngine__Object__Instantiate<NotificationsManager>_NotificationsManager_
                                  );
              *ppNVar11 = pNVar12;
              func_?(ppNVar11,pNVar12);
              if (*ppNVar11 != (NotificationsManager *)0x0) {
                this_05 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                          Component_get_transform((Component *)*ppNVar11,(MethodInfo *)0x0);
                pGVar13 = (pDVar1->fields).stackBottom;
                if ((pGVar13 != (GameObject *)0x0) &&
                   (parent = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                             GameObject_get_transform(pGVar13,(MethodInfo *)0x0),
                   this_05 != (Transform *)0x0)) {
                  UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                            (this_05,parent,0,(MethodInfo *)0x0);
                  pAVar3 = (pDVar1->fields).avatarEditModeBodyController;
                  if (pAVar3 != (AvatarEditModeBodyController *)0x0) {
                    AvatarEditModeBodyController::AvatarEditModeBodyController_Initialize
                              (pAVar3,(MethodInfo *)0x0);
                    this = (DesktopAvatarEditModeController *)
                           UnityEngine.CoreModule.dll::UnityEngine::Component::
                           Component_get_gameObject((Component *)pDVar1,(MethodInfo *)0x0);
                    pAVar3 = (pDVar1->fields).avatarEditModeBodyController;
                    if (pAVar3 != (AvatarEditModeBodyController *)0x0) {
                      uVar14._0_4_ = (pAVar3->fields).displayPos.x;
                      uVar14._4_4_ = (pAVar3->fields).displayPos.y;
                      fVar15 = (pAVar3->fields).displayPos.z;
                      pEVar16 = (EditorStateMachine *)func_?(TypeInfo__EditorStateMachine);
                      avatarEditModeCenterPos.z = fVar15;
                      avatarEditModeCenterPos.x = (float)(int)uVar14;
                      avatarEditModeCenterPos.y = (float)(int)((ulonglong)uVar14 >> 0x20);
                      EditorStateMachine::EditorStateMachine__ctor_1
                                (pEVar16,(GameObject *)this,avatarEditModeCenterPos,
                                 (MethodInfo *)0x0);
                      ppEVar17 = &(pDVar1->fields).editorStateMachine;
                      *ppEVar17 = pEVar16;
                      func_?(ppEVar17,pEVar16);
                      if ((*ppEVar17 != (EditorStateMachine *)0x0) &&
                         (this_01 = (pDVar1->fields).materialsController,
                         this_01 != (MaterialsController *)0x0)) {
                        MaterialsController::MaterialsController_Initialize
                                  (this_01,((*ppEVar17)->fields).cubeModelingStateMachine,
                                   (MethodInfo *)0x0);
                        object = (pDVar1->fields).avatarSelectionController;
                        this = (DesktopAvatarEditModeController *)
                               (pDVar1->fields).avatarEditModeBodyController;
                        if (object != (AvatarSelectionController *)0x0) {
                          if (cRam_? == '\0') {
                            func_?(&TypeInfo__System__Action<int,_UnityEngine::Texture2D>);
                            func_?(&
                                            MethodInfo__AvatarSelectionController__OnPictureTakenCallback_int__UnityEngine__Texture2D_
                                           );
                            func_?(&TypeInfo__AvatarSelectionController);
                            cRam_? = '\x01';
                          }
                          TypeInfo__AvatarSelectionController->static_fields->instance = object;
                          func_?(TypeInfo__AvatarSelectionController->static_fields,object)
                          ;
                          ppAVar4 = &(object->fields).avatarBodyController;
                          *ppAVar4 = (AvatarEditModeBodyController *)this;
                          func_?(ppAVar4,this);
                          this = (DesktopAvatarEditModeController *)*ppAVar4;
                          if ((AvatarEditModeBodyController *)this !=
                              (AvatarEditModeBodyController *)0x0) {
                            pGVar13 = (object->fields).publishAvatarGO;
                            ppGVar18 = &(((AvatarEditModeBodyController *)this)->fields).
                                        publishAvatarBtn;
                            *ppGVar18 = pGVar13;
                            func_?(ppGVar18,pGVar13);
                            AvatarEditModeBodyController::
                            AvatarEditModeBodyController_SetPublishAvatarButtonActive
                                      ((AvatarEditModeBodyController *)this,(MethodInfo *)0x0);
                            pAVar3 = *ppAVar4;
                            this = (DesktopAvatarEditModeController *)
                                   func_?(
                                                  TypeInfo__System__Action<int,_UnityEngine::Texture2D>
                                                  );
                            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::
                            Int32,System::Int32]::UnityAction_2_System_Int32_System_Int32___ctor
                                      ((UnityAction_2_System_Int32_System_Int32_ *)this,
                                       (Object *)object,
                                       MethodInfo__AvatarSelectionController__OnPictureTakenCallback_int__UnityEngine__Texture2D_
                                       ,(MethodInfo *)0x0);
                            if (pAVar3 != (AvatarEditModeBodyController *)0x0) {
                              if (cRam_? == '\0') {
                                func_?(&
                                                MethodInfo__System__Collections__Generic__List<MVBody>__get_Count__
                                               );
                                cRam_? = '\x01';
                              }
                              ppAVar19 = &(pAVar3->fields).Picture2DTakenCallback;
                              *ppAVar19 = (Action_2_Int32_UnityEngine_Texture2D_ *)this;
                              func_?(ppAVar19,this);
                              iVar20 = 0;
                              pLVar21 = (pAVar3->fields).bodies;
                              while (pLVar21 != (List_1_MVBody_ *)0x0) {
                                if ((pLVar21->fields)._size <= iVar20) {
                                  this = (DesktopAvatarEditModeController *)
                                         (pDVar1->fields).firstTimeActiveAvatar;
                                  if (this == (DesktopAvatarEditModeController *)0xffffffff)
                                  goto code_?;
                                  pAVar3 = (pDVar1->fields).avatarEditModeBodyController;
                                  if (pAVar3 != (AvatarEditModeBodyController *)0x0) {
                                    if (cRam_? == '\0') {
                                      func_?(&
                                                  MethodInfo__System__Collections__Generic__List<MVBody>__get_Count__
                                                  );
                                      func_?(&
                                                  MethodInfo__System__Collections__Generic__List<MVBody>__get_Item_int_
                                                  );
                                      cRam_? = '\x01';
                                    }
                                    pLVar21 = (pAVar3->fields).bodies;
                                    iVar20 = 0;
                                    if (pLVar21 != (List_1_MVBody_ *)0x0) goto code_?;
                                  }
                                  break;
                                }
                                AvatarEditModeBodyController::
                                AvatarEditModeBodyController_GenerateIconForBody
                                          (pAVar3,iVar20,(MethodInfo *)0x0);
                                iVar20 = iVar20 + 1;
                                pLVar21 = (pAVar3->fields).bodies;
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
  goto code_?;
code_?:
  pAVar3 = (pDVar1->fields).avatarEditModeBodyController;
  pEVar16 = (pDVar1->fields).editorStateMachine;
  if (pAVar3 != (AvatarEditModeBodyController *)0x0) {
    if (cRam_? == '\0') {
      func_?(&MethodInfo__System__Collections__Generic__List<MVBody>__get_Item_int_);
      cRam_? = '\x01';
    }
    pLVar22 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
              (pAVar3->fields).bodies;
    if ((pLVar22 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) &&
       (RVar23 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions
                 ::RegexCharClass+SingleRange]::
                 List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                           (pLVar22,(pAVar3->fields).currentBodyIndex,
                            MethodInfo__System__Collections__Generic__List<MVBody>__get_Item_int_),
       pEVar16 != (EditorStateMachine *)0x0)) {
      EditorStateMachine::EditorStateMachine_EnterGroup(pEVar16,(MVGroup *)RVar23,(MethodInfo *)0x0)
      ;
      pEVar16 = (pDVar1->fields).editorStateMachine;
      this = (DesktopAvatarEditModeController *)0x34;
      value = (Object *)func_?(TypeInfo__EditorEvent,&this);
      if (pEVar16 != (EditorStateMachine *)0x0) {
        FSMEntity::FSMEntity_set_Event((FSMEntity *)pEVar16,value,(MethodInfo *)0x0);
        pEVar16 = (pDVar1->fields).editorStateMachine;
        if ((pEVar16 != (EditorStateMachine *)0x0) &&
           (pCVar24 = (pEVar16->fields).cubeModelingStateMachine,
           pCVar24 != (CubeModelingStateMachine *)0x0)) {
          CubeModelingStateMachine::CubeModelingStateMachine_set_CurrentMaterialId
                    (pCVar24,0x15,(MethodInfo *)0x0);
          pEVar16 = (pDVar1->fields).editorStateMachine;
          if ((pEVar16 != (EditorStateMachine *)0x0) &&
             (pSVar25 = (pDVar1->fields).setupCubeModelTutorialUI,
             pSVar25 != (SetupCubeModelTutorialUI *)0x0)) {
            pCVar24 = (pEVar16->fields).cubeModelingStateMachine;
            ppCVar26 = &(pSVar25->fields).cubeModelingStateMachine;
            *ppCVar26 = pCVar24;
            func_?(ppCVar26,pCVar24);
            this_02 = (pDVar1->fields).goldPurchasedTracker;
            if (this_02 != (GoldPurchasedTracker *)0x0) {
              GoldPurchasedTracker::GoldPurchasedTracker_Initialize(this_02,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
  goto code_?;
  while( true ) {
    if (*(DesktopAvatarEditModeController **)((int)RVar23 + 8) == this) {
      AvatarEditModeBodyController::AvatarEditModeBodyController_SetCurrentBody
                (pAVar3,iVar20,(MethodInfo *)0x0);
      AvatarSelectionController::AvatarSelectionController_set_CurrentlySelectedSlotIndex
                (iVar20,(MethodInfo *)0x0);
      goto code_?;
    }
    pLVar21 = (pAVar3->fields).bodies;
    iVar20 = iVar20 + 1;
    if (pLVar21 == (List_1_MVBody_ *)0x0) break;
code_?:
    if ((pLVar21->fields)._size <= iVar20) goto code_?;
    pLVar22 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
              (pAVar3->fields).bodies;
    if ((pLVar22 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) ||
       (RVar23 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions
                 ::RegexCharClass+SingleRange]::
                 List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                           (pLVar22,iVar20,
                            MethodInfo__System__Collections__Generic__List<MVBody>__get_Item_int_),
       RVar23 == (RegexCharClass_SingleRange)0x0)) break;
  }
code_?:
  func_?();
  pcVar27 = (code *)swi(3);
  (*pcVar27)();
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
    object = TypeInfo__DesktopAvatarEditModeController____c->static_fields->__9;
    this_02 = (Func_2_MVWorldObjectClient_Boolean_ *)
              func_?(TypeInfo__System__Func<MVWorldObjectClient,_bool>);
    mscorlib.dll::System::Func`2[Object,Boolean]::Func_2_Object_Boolean___ctor
              ((Func_2_Object_Boolean_ *)this_02,(Object *)object,
               MethodInfo__DesktopAvatarEditModeController____c___InitializeLocalAvatar_b__23_0_MVWorldObjectClient_
               ,(MethodInfo *)0x0);
    TypeInfo__DesktopAvatarEditModeController____c->static_fields->__9__23_0 = this_02;
    func_?(&TypeInfo__DesktopAvatarEditModeController____c->static_fields->__9__23_0,
                    this_02);
  }
  if (this_01 != (MVWorldObjectClientManager *)0x0) {
    this_03 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClientWhere
                        (this_01,this_02,(MethodInfo *)0x0);
    if (this_03 == (MVWorldObjectClient *)0x0) {
      this_03 = (MVWorldObjectClient *)0x0;
    }
    else {
      bVar1 = (TypeInfo__MVSpawnPointBlue->_1).naturalAligment;
      if (((this_03->klass->_1).naturalAligment < bVar1) ||
         ((MVSpawnPointBlue__Class *)(this_03->klass->_1).typeHierarchy[bVar1 - 1] !=
          TypeInfo__MVSpawnPointBlue)) goto code_?;
    }
    pGVar2 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
    if ((pGVar2 != (GameEventManager *)0x0) &&
       (this_00 = (pGVar2->fields).AvatarCommandsBuildMode, this_03 != (MVWorldObjectClient *)0x0))
    {
      puVar3 = (undefined8 *)
               (*(code *)(this_03->klass->vtable).get_WorldPosition_1.method)(&stack0xffffffd4);
      uStack_4 = *puVar3;
      fStack_5 = *(float *)(puVar3 + 1);
      if (cRam_? == '\0') {
        func_?(&TypeInfo__UnityEngine__Vector3);
        cRam_? = '\x01';
      }
      pVVar6 = TypeInfo__UnityEngine__Vector3->static_fields;
      QStack_7.y = (pVVar6->upVector).x;
      QStack_7.z = (pVVar6->upVector).y;
      QStack_7.w = (pVVar6->upVector).z;
      fVar8 = (float)uStack_4 - QStack_7.y;
      fVar9 = uStack_4._4_4_ - QStack_7.z;
      fVar10 = fStack_5 - QStack_7.w;
      pQVar11 = MVWorldObjectClient::MVWorldObjectClient_get_SyncRot
                         (&QStack_7,this_03,(MethodInfo *)0x0);
      if (this_00 != (GameEventManager_AvatarCommandsBuildModeManager *)0x0) {
        position.y = fVar9;
        position.x = fVar8;
        position.z = fVar10;
        GameEventManager+AvatarCommandsBuildModeManager::
        GameEventManager_AvatarCommandsBuildModeManager_SetSpawn
                  (this_00,position,*pQVar11,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  this_03 = extraout_EDX;
code_?:
  func_?(this_03);
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::DesktopAvatarEditModeController::DesktopAvatarEditModeController_OnDestroy
               (DesktopAvatarEditModeController *this,MethodInfo *method)

{
  ppAStack_1 = (AvatarSelectionController__Class **)&stack0xfffffffc;
  if ((this->fields).avatarSelectionController != (AvatarSelectionController *)0x0) {
    if (cRam_? == '\0') {
      ppAStack_1 = &TypeInfo__AvatarSelectionController;
      func_?();
      cRam_? = '\x01';
    }
    ppAStack_1 = (AvatarSelectionController__Class **)0x0;
    TypeInfo__AvatarSelectionController->static_fields->instance = (AvatarSelectionController *)0x0;
    pAStack_2 = TypeInfo__AvatarSelectionController->static_fields;
    func_?();
    return;
  }
  uVar3 = func_?(&puStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
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
  ppAVar3 = &(object->fields).accessoryDataToShow;
  *ppAVar3 = displayShopItems;
  func_?(ppAVar3,displayShopItems);
  (object->fields).pushOption = pushOption;
  pUVar4 = TypeInfo__AccessoryDataManager->static_fields->readyCallback;
  this_00 = (NavMesh_OnNavMeshPreUpdate *)
            func_?(TypeInfo__UnityEngine__Events__UnityAction);
  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
  NavMesh_OnNavMeshPreUpdate__ctor
            (this_00,(Object *)object,
             MethodInfo__AccessoryShopController__ReadyCallbackAccessoryView__,(MethodInfo *)0x0);
  pUVar4 = (UnityAction *)
           mscorlib.dll::System::Delegate::Delegate_Combine
                     ((Delegate *)pUVar4,(Delegate *)this_00,(MethodInfo *)0x0);
  if (pUVar4 == (UnityAction *)0x0) {
    TypeInfo__AccessoryDataManager->static_fields->readyCallback = (UnityAction *)0x0;
    pUVar5 = (UnityAction *)0x0;
code_?:
    pUStack6 = (UnityAction__Class *)pUVar5;
    func_?();
    AccessoryDataManager::AccessoryDataManager_SetReady((MethodInfo *)0x0);
    return;
  }
  pUVar5 = (UnityAction *)0x0;
  if (pUVar4->klass == TypeInfo__UnityEngine__Events__UnityAction) {
    pUVar5 = pUVar4;
  }
  if (pUVar5 == (UnityAction *)0x0) {
    pUStack6 = TypeInfo__UnityEngine__Events__UnityAction;
    func_?();
    pUStack6 = extraout_EDX;
  }
  else {
    TypeInfo__AccessoryDataManager->static_fields->readyCallback = pUVar5;
    pUVar5 = (UnityAction *)0x0;
    if (pUVar4->klass == TypeInfo__UnityEngine__Events__UnityAction) {
      pUVar5 = pUVar4;
    }
    pUStack6 = TypeInfo__UnityEngine__Events__UnityAction;
    if (pUVar5 != (UnityAction *)0x0) goto code_?;
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
  pEVar1 = (this->fields).editorStateMachine;
  if (pEVar1 != (EditorStateMachine *)0x0) {
    (*(code *)(pEVar1->klass->vtable).Update.method)(pEVar1);
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

