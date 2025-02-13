
/* Void Initialize(CubeModelingStateMachine) */

void Assembly-CSharp.dll::DesktopCubeModelingController::DesktopCubeModelingController_Initialize
               (DesktopCubeModelingController *this,
               CubeModelingStateMachine *cubeModelingStateMachine,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  pDVar1 = (this->fields).desktopCubeModelingController;
  if (pDVar1 != (DesktopCubeModelingToolsController *)0x0) {
    (pDVar1->fields).cubeModelingStateMachine = cubeModelingStateMachine;
    func_?(&(pDVar1->fields).cubeModelingStateMachine,cubeModelingStateMachine);
    pDVar2 = (this->fields).togglesController;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                      ((Object_1 *)pDVar2,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar3 != 0) {
      pDVar2 = (this->fields).togglesController;
      if (pDVar2 == (DesktopCubeModelingTogglesController *)0x0) goto code_?;
      IngameController::CubeModeling::DesktopCubeModelingTogglesController::
      DesktopCubeModelingTogglesController_Initialize
                (pDVar2,cubeModelingStateMachine,(MethodInfo *)0x0);
    }
    return;
  }
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void OnPublishPlanetFinished(String) */

void Assembly-CSharp.dll::DesktopCubeModelingController::
     DesktopCubeModelingController_OnPublishPlanetFinished
               (DesktopCubeModelingController *this,String *completionMessage,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__DesktopCubeModelingController__OnPublishPlanetFinished_System__String_
                   );
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&TypeInfo__NotificationController);
    func_?(&
                    MethodInfo__DesktopCubeModelingController____c___OnPublishPlanetFinished_b__12_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__DesktopCubeModelingController____c);
    func_?(&TypeInfo__UnityEngine__Events__UnityAction<System::String>);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVGameControllerBase);
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if ((pMVar1 == (MVGameControllerBase *)0x0) ||
     (pMVar2 = (pMVar1->fields).game, pMVar2 == (MVNetworkGame *)0x0)) {
    func_?();
  }
  else {
    pUVar3 = (pMVar2->fields).OnPublishedPlanet;
    this_00 = (UnityAction_1_System_Object_ *)
              func_?(TypeInfo__UnityEngine__Events__UnityAction<System::String>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
    UnityAction_1_System_Object___ctor
              (this_00,(Object *)this,
               MethodInfo__DesktopCubeModelingController__OnPublishPlanetFinished_System__String_,
               (MethodInfo *)0x0);
    pDVar4 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)pUVar3,(Delegate *)this_00,(MethodInfo *)0x0);
    if (pDVar4 == (Delegate *)0x0) {
      (pMVar2->fields).OnPublishedPlanet = (UnityAction_1_System_String_ *)0x0;
code_?:
      func_?();
      text = (String *)
             UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)&(pMVar2->fields).OnPublishedPlanet,(MethodInfo *)0x0);
      if ((TypeInfo__DesktopCubeModelingController____c->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      callbackFunction = TypeInfo__DesktopCubeModelingController____c->static_fields->__9__12_0;
      if (callbackFunction == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
        if ((TypeInfo__DesktopCubeModelingController____c->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        object = TypeInfo__DesktopCubeModelingController____c->static_fields->__9;
        callbackFunction = (ExecuteEvents_EventFunction_1_IUIStack_ *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
        Object]::UnityAction_2_System_Object_System_Object___ctor
                  ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)object,
                   MethodInfo__DesktopCubeModelingController____c___OnPublishPlanetFinished_b__12_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   ,(MethodInfo *)0x0);
        TypeInfo__DesktopCubeModelingController____c->static_fields->__9__12_0 = callbackFunction;
        func_?();
      }
      if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0)
      {
        func_?();
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                ((GameObject *)text,(BaseEventData *)0x0,
                 (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                );
      if ((TypeInfo__NotificationController->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      NotificationController::NotificationController_PushNotification
                (text,(Sprite *)0x0,5,(MethodInfo *)0x0);
      return;
    }
    pUVar3 = (UnityAction_1_System_String_ *)func_?();
    if (pUVar3 != (UnityAction_1_System_String_ *)0x0) {
      (pMVar2->fields).OnPublishedPlanet = pUVar3;
      iVar5 = func_?();
      if (iVar5 != 0) goto code_?;
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void PublishCallback(Boolean, ConfirmationPopup) */

void Assembly-CSharp.dll::DesktopCubeModelingController::
     DesktopCubeModelingController_PublishCallback
               (DesktopCubeModelingController *this,bool confirmed,ConfirmationPopup *popup,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<System::String>);
    func_?(&
                    MethodInfo__DesktopCubeModelingController__OnPublishPlanetFinished_System__String_
                   );
    func_?(&
                    MethodInfo__DesktopCubeModelingController___PublishCallback_b__11_1_System__String_
                   );
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&
                    MethodInfo__DesktopCubeModelingController____c___PublishCallback_b__11_0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__DesktopCubeModelingController____c);
    func_?(&TypeInfo__UnityEngine__Events__UnityAction<System::String>);
    cRam_? = '\x01';
  }
  if (popup != (ConfirmationPopup *)0x0) {
    ConfirmationPopup::ConfirmationPopup_Pop(popup,(MethodInfo *)0x0);
    if (confirmed == 0) {
      return;
    }
    root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
    if ((TypeInfo__DesktopCubeModelingController____c->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__DesktopCubeModelingController____c);
    }
    callbackFunction = TypeInfo__DesktopCubeModelingController____c->static_fields->__9__11_0;
    if (callbackFunction == (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)0x0) {
      if ((TypeInfo__DesktopCubeModelingController____c->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__DesktopCubeModelingController____c);
      }
      object = TypeInfo__DesktopCubeModelingController____c->static_fields->__9;
      callbackFunction =
           (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)
           func_?(
                          TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                          );
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)object,
                 MethodInfo__DesktopCubeModelingController____c___PublishCallback_b__11_0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      TypeInfo__DesktopCubeModelingController____c->static_fields->__9__11_0 = callbackFunction;
      func_?(&TypeInfo__DesktopCubeModelingController____c->static_fields->__9__11_0,
                      callbackFunction);
    }
    if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
              (root,(BaseEventData *)0x0,
               (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
              );
    if (cRam_? == '\0') {
      func_?(&TypeInfo__MVGameControllerBase);
      cRam_? = '\x01';
    }
    pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if ((pMVar1 != (MVGameControllerBase *)0x0) &&
       (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) {
      pUVar3 = (pMVar2->fields).OnPublishedPlanet;
      this_01 = (UnityAction_1_System_Object_ *)
                func_?(TypeInfo__UnityEngine__Events__UnityAction<System::String>);
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
      UnityAction_1_System_Object___ctor
                (this_01,(Object *)this,
                 MethodInfo__DesktopCubeModelingController__OnPublishPlanetFinished_System__String_,
                 (MethodInfo *)0x0);
      pDVar4 = mscorlib.dll::System::Delegate::Delegate_Combine
                         ((Delegate *)pUVar3,(Delegate *)this_01,(MethodInfo *)0x0);
      if (pDVar4 == (Delegate *)0x0) {
        (pMVar2->fields).OnPublishedPlanet = (UnityAction_1_System_String_ *)0x0;
      }
      else {
        pUVar3 = (UnityAction_1_System_String_ *)func_?();
        if (pUVar3 == (UnityAction_1_System_String_ *)0x0) goto code_?;
        (pMVar2->fields).OnPublishedPlanet = pUVar3;
        iVar5 = func_?();
        if (iVar5 == 0) goto code_?;
      }
      func_?();
      if (cRam_? == '\0') {
        func_?(&TypeInfo__MVGameControllerBase);
        cRam_? = '\x01';
      }
      pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
      if ((pMVar1 != (MVGameControllerBase *)0x0) &&
         (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) {
        this_00 = (pMVar2->fields).operationRequests;
        this_02 = (SpawnRoleVariable_1_T_SubDelegate_System_Object_ *)
                  func_?(TypeInfo__System__Action<System::String>);
        Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::
        SpawnRoleVariable`1[T]+SubDelegate[System::Object]::
        SpawnRoleVariable_1_T_SubDelegate_System_Object___ctor
                  (this_02,(Object *)this,
                   MethodInfo__DesktopCubeModelingController___PublishCallback_b__11_1_System__String_
                   ,(MethodInfo *)0x0);
        if (this_00 != (MVNetworkGame_OperationRequests *)0x0) {
          MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_PublishPlanet
                    (this_00,(Action_1_String_ *)this_02,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void PublishGame() */

void Assembly-CSharp.dll::DesktopCubeModelingController::DesktopCubeModelingController_PublishGame
               (DesktopCubeModelingController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__DesktopCubeModelingController___PublishGame_b__10_0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&TypeInfo__NotificationController);
    func_?(&StringLiteral_You_must_be_the_owner_in_order_t);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVGameControllerBase);
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if ((pMVar1 != (MVGameControllerBase *)0x0) &&
     (this_00 = (pMVar1->fields).game, this_00 != (MVNetworkGame *)0x0)) {
    this_01 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_00,(MethodInfo *)0x0);
    if (this_01 != (MVLocalPlayer *)0x0) {
      PVar2 = MVLocalPlayer::MVLocalPlayer_get_PlanetOwnership(this_01,(MethodInfo *)0x0);
      if ((char)PVar2 != '\x02') {
        text = TM::TM__(StringLiteral_You_must_be_the_owner_in_order_t,(MethodInfo *)0x0);
        sprite = (this->fields).errorSprite;
        if ((TypeInfo__NotificationController->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        NotificationController::NotificationController_PushNotification
                  (text,sprite,3,(MethodInfo *)0x0);
        return;
      }
      root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this,(MethodInfo *)0x0);
      callbackFunction =
           (ExecuteEvents_EventFunction_1_System_Object_ *)
           func_?(
                          TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                          );
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)this,
                 MethodInfo__DesktopCubeModelingController___PublishGame_b__10_0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0)
      {
        func_?();
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                (root,(BaseEventData *)0x0,callbackFunction,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
                );
      return;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* IEnumerator SetButtonTextureRoutine(Byte) */

IEnumerator *
Assembly-CSharp.dll::DesktopCubeModelingController::
DesktopCubeModelingController_SetButtonTextureRoutine
          (DesktopCubeModelingController *this,uint8_t materialId,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__DesktopCubeModelingController___SetButtonTextureRoutine_d__8);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__DesktopCubeModelingController___SetButtonTextureRoutine_d__8;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  value[2].klass = (Object__Class *)this;
  value[1].klass = (Object__Class *)0x0;
  func_?(value + 2,this);
  *(uint8_t *)&value[2].monitor = materialId;
  return (IEnumerator *)value;
}


/* Void SetMaterial(Byte) */

void Assembly-CSharp.dll::DesktopCubeModelingController::DesktopCubeModelingController_SetMaterial
               (DesktopCubeModelingController *this,uint8_t materialId,MethodInfo *method)

{
  if ((this->fields).setButtonTextureRoutine != (IEnumerator *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StopCoroutine
              ((MonoBehaviour *)this,(this->fields).setButtonTextureRoutine,(MethodInfo *)0x0);
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__DesktopCubeModelingController___SetButtonTextureRoutine_d__8);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__DesktopCubeModelingController___SetButtonTextureRoutine_d__8;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  value[1].klass = (Object__Class *)0x0;
  value[2].klass = (Object__Class *)this;
  func_?(value + 2,this);
  *(uint8_t *)&value[2].monitor = materialId;
  (this->fields).setButtonTextureRoutine = (IEnumerator *)value;
  func_?(&(this->fields).setButtonTextureRoutine,value);
  UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StartCoroutine_Auto
            ((MonoBehaviour *)this,(this->fields).setButtonTextureRoutine,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if ((((pMVar1 != (MVGameControllerBase *)0x0) &&
       (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
      (pGVar3 = (pMVar2->fields).GameEventManager, pGVar3 != (GameEventManager *)0x0)) &&
     ((pGVar4 = (pGVar3->fields).AvatarCommandsBuildMode,
      pGVar4 != (GameEventManager_AvatarCommandsBuildModeManager *)0x0 &&
      (pGVar5 = (pGVar4->fields).LaserCommands,
      pGVar5 != (GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager *)0x0)))) {
    pAVar6 = (pGVar5->fields).OnCubeMaterialChanged;
    if (pAVar6 != (Action_1_Byte__1 *)0x0) {
      (*(pAVar6->fields)._._.invoke_impl)();
    }
    return;
  }
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void SwitchToDefaultTool() */

void Assembly-CSharp.dll::DesktopCubeModelingController::
     DesktopCubeModelingController_SwitchToDefaultTool
               (DesktopCubeModelingController *this,MethodInfo *method)

{
  pDVar1 = (this->fields).desktopCubeModelingController;
  if ((pDVar1 != (DesktopCubeModelingToolsController *)0x0) &&
     (pBVar2 = (pDVar1->fields).defaultTool, pBVar2 != (Button *)0x0)) {
    unityEventBase = (DesktopCubeModelingController *)(pBVar2->fields).m_OnClick;
    if (unityEventBase == (DesktopCubeModelingController *)0x0) {
      return;
    }
    if (cRam_? == '\0') {
      func_?();
      func_?();
      func_?();
      func_?(&TypeInfo__System__Object);
      cRam_? = '\x01';
    }
    if (*(bool *)&(unityEventBase->fields).materialsButtonImage != 0) {
      this_00 = (((UnityEvent__Fields *)&(unityEventBase->fields)._)->_).m_PersistentCalls;
      if (this_00 == (PersistentCallGroup *)0x0) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::Events::PersistentCallGroup::
      PersistentCallGroup_Initialize
                (this_00,(((UnityEvent__Fields *)&(unityEventBase->fields)._)->_).m_Calls,
                 (UnityEventBase *)unityEventBase,(MethodInfo *)0x0);
      *(bool *)&(unityEventBase->fields).materialsButtonImage = 0;
    }
    pIVar3 = (((UnityEvent__Fields *)&(unityEventBase->fields)._)->_).m_Calls;
    if (pIVar3 != (InvokableCallList *)0x0) {
      if (cRam_? == '\0') {
        func_?();
        func_?();
        cRam_? = '\x01';
      }
      this = unityEventBase;
      if ((pIVar3->fields).m_NeedsUpdate != 0) {
        pLVar4 = (pIVar3->fields).m_ExecutingCalls;
        if (pLVar4 == (List_1_UnityEngine_Events_BaseInvokableCall_ *)0x0) goto code_?;
        iVar5 = (pLVar4->fields)._size;
        piVar6 = &(pLVar4->fields)._version;
        *piVar6 = *piVar6 + 1;
        (pLVar4->fields)._size = 0;
        if (0 < iVar5) {
          mscorlib.dll::System::Array::Array_Clear
                    ((Array *)(pLVar4->fields)._items,0,iVar5,(MethodInfo *)0x0);
        }
        pLVar7 = (List_1_System_Object_ *)(pIVar3->fields).m_ExecutingCalls;
        if (pLVar7 == (List_1_System_Object_ *)0x0) goto code_?;
        mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
        List_1_System_Object__AddRange
                  (pLVar7,(IEnumerable_1_System_Object_ *)(pIVar3->fields).m_PersistentCalls,
                   MethodInfo__System__Collections__Generic__List<UnityEngine::Events::BaseInvokableCall>__AddRange_System__Collections__Generic__IEnumerable<UnityEngine::Events::BaseInvokableCall>_
                  );
        pLVar7 = (List_1_System_Object_ *)(pIVar3->fields).m_ExecutingCalls;
        if (pLVar7 == (List_1_System_Object_ *)0x0) goto code_?;
        this = (DesktopCubeModelingController *)
               MethodInfo__System__Collections__Generic__List<UnityEngine::Events::BaseInvokableCall>__AddRange_System__Collections__Generic__IEnumerable<UnityEngine::Events::BaseInvokableCall>_
        ;
        mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
        List_1_System_Object__AddRange
                  (pLVar7,(IEnumerable_1_System_Object_ *)(pIVar3->fields).m_RuntimeCalls,
                   MethodInfo__System__Collections__Generic__List<UnityEngine::Events::BaseInvokableCall>__AddRange_System__Collections__Generic__IEnumerable<UnityEngine::Events::BaseInvokableCall>_
                  );
        (pIVar3->fields).m_NeedsUpdate = 0;
      }
      pOVar8 = (Object__Array *)(pIVar3->fields).m_ExecutingCalls;
      iVar5 = 0;
      if (pOVar8 != (Object__Array *)0x0) {
        while( true ) {
          while( true ) {
            while( true ) {
              pDVar9 = this;
              if ((int)pOVar8->max_length <= iVar5) {
                return;
              }
              RVar10 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                       RegularExpressions::RegexCharClass+SingleRange]::
                       List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                 ((List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                                   *)pOVar8,iVar5,
                                  MethodInfo__System__Collections__Generic__List<UnityEngine::Events::BaseInvokableCall>__get_Item_int_
                                 );
              if (((RVar10 == (RegexCharClass_SingleRange)0x0) ||
                  (*(byte *)(*(int *)RVar10 + 0xb8) <
                   (TypeInfo__UnityEngine__Events__InvokableCall->_1).naturalAligment)) ||
                 (unityEventBase = this,
                 *(InvokableCall__Class **)
                  (*(int *)(*(int *)RVar10 + 100) + -4 +
                  (uint)(TypeInfo__UnityEngine__Events__InvokableCall->_1).naturalAligment * 4) !=
                 TypeInfo__UnityEngine__Events__InvokableCall)) break;
              this = (DesktopCubeModelingController *)0x0;
              UnityEngine.CoreModule.dll::UnityEngine::Events::InvokableCall::InvokableCall_Invoke_1
                        ((InvokableCall *)RVar10,(MethodInfo *)0x0);
              iVar5 = iVar5 + 1;
              unityEventBase = pDVar9;
            }
            mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
            RegexCharClass+SingleRange]::
            List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                      ((List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)pOVar8,
                       iVar5,
                       MethodInfo__System__Collections__Generic__List<UnityEngine::Events::BaseInvokableCall>__get_Item_int_
                      );
            this = (DesktopCubeModelingController *)TypeInfo__UnityEngine__Events__InvokableCall;
            this_01 = (InvokableCall *)func_?();
            if (this_01 == (InvokableCall *)0x0) break;
            UnityEngine.CoreModule.dll::UnityEngine::Events::InvokableCall::InvokableCall_Invoke_1
                      (this_01,(MethodInfo *)0x0);
            iVar5 = iVar5 + 1;
          }
          RVar10 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                   RegularExpressions::RegexCharClass+SingleRange]::
                   List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                             ((List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                              pOVar8,iVar5,
                              MethodInfo__System__Collections__Generic__List<UnityEngine::Events::BaseInvokableCall>__get_Item_int_
                             );
          if ((Object__Array *)(unityEventBase->fields).desktopCubeModelingController ==
              (Object__Array *)0x0) {
            pOVar8 = (Object__Array *)func_?();
            (unityEventBase->fields).desktopCubeModelingController =
                 (DesktopCubeModelingToolsController *)pOVar8;
            func_?();
          }
          if (RVar10 == (RegexCharClass_SingleRange)0x0) break;
          pOVar8 = (Object__Array *)(unityEventBase->fields).desktopCubeModelingController;
          func_?();
          iVar5 = iVar5 + 1;
        }
      }
    }
  }
code_?:
  uVar11 = func_?(&stack0xffffffec);
  func_?(uVar11);
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void TakeScreenshot() */

void Assembly-CSharp.dll::DesktopCubeModelingController::
     DesktopCubeModelingController_TakeScreenshot
               (DesktopCubeModelingController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&
                    MethodInfo__DesktopCubeModelingController____c___TakeScreenshot_b__13_0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__DesktopCubeModelingController____c);
    cRam_? = '\x01';
  }
  root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                   ((Component *)this,(MethodInfo *)0x0);
  if ((TypeInfo__DesktopCubeModelingController____c->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__DesktopCubeModelingController____c);
  }
  callbackFunction = TypeInfo__DesktopCubeModelingController____c->static_fields->__9__13_0;
  if (callbackFunction == (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)0x0) {
    if ((TypeInfo__DesktopCubeModelingController____c->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__DesktopCubeModelingController____c);
    }
    object = TypeInfo__DesktopCubeModelingController____c->static_fields->__9;
    callbackFunction =
         (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)
         func_?(
                        TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                        );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)object,
               MethodInfo__DesktopCubeModelingController____c___TakeScreenshot_b__13_0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    TypeInfo__DesktopCubeModelingController____c->static_fields->__9__13_0 = callbackFunction;
    func_?(&TypeInfo__DesktopCubeModelingController____c->static_fields->__9__13_0,
                    callbackFunction);
  }
  if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
            (root,(BaseEventData *)0x0,
             (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
            );
  return;
}


/* Void <PublishCallback>b__11_1(String) */

void Assembly-CSharp.dll::DesktopCubeModelingController::
     DesktopCubeModelingController__PublishCallback_b__11_1
               (DesktopCubeModelingController *this,String *errorText,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__DesktopCubeModelingController__OnPublishPlanetFinished_System__String_
                   );
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                   );
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&
                    MethodInfo__DesktopCubeModelingController____c___PublishCallback_b__11_2_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&
                    MethodInfo__DesktopCubeModelingController____c__DisplayClass11_0___PublishCallback_b__3_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__DesktopCubeModelingController____c__DisplayClass11_0);
    func_?(&TypeInfo__DesktopCubeModelingController____c);
    func_?(&TypeInfo__UnityEngine__Events__UnityAction<System::String>);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__DesktopCubeModelingController____c__DisplayClass11_0;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  if (value == (Object *)0x0) {
code_?:
    func_?();
  }
  else {
    value[1].klass = (Object__Class *)errorText;
    func_?(value + 1,errorText);
    if (cRam_? == '\0') {
      func_?(&TypeInfo__MVGameControllerBase);
      cRam_? = '\x01';
    }
    pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if (pMVar1 == (MVGameControllerBase *)0x0) goto code_?;
    pMVar2 = (pMVar1->fields).game;
    if (pMVar2 == (MVNetworkGame *)0x0) goto code_?;
    source = (pMVar2->fields).OnPublishedPlanet;
    this_00 = (UnityAction_1_System_Object_ *)
              func_?(TypeInfo__UnityEngine__Events__UnityAction<System::String>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
    UnityAction_1_System_Object___ctor
              (this_00,(Object *)this,
               MethodInfo__DesktopCubeModelingController__OnPublishPlanetFinished_System__String_,
               (MethodInfo *)0x0);
    pDVar3 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)this_00,(MethodInfo *)0x0);
    if (pDVar3 == (Delegate *)0x0) {
      (pMVar2->fields).OnPublishedPlanet = (UnityAction_1_System_String_ *)0x0;
code_?:
      func_?();
      errorText = (String *)
                  UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)this,(MethodInfo *)0x0);
      if ((TypeInfo__DesktopCubeModelingController____c->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      callbackFunction = TypeInfo__DesktopCubeModelingController____c->static_fields->__9__11_2;
      if (callbackFunction == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
        if ((TypeInfo__DesktopCubeModelingController____c->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        object = TypeInfo__DesktopCubeModelingController____c->static_fields->__9;
        callbackFunction = (ExecuteEvents_EventFunction_1_IUIStack_ *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
        Object]::UnityAction_2_System_Object_System_Object___ctor
                  ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)object,
                   MethodInfo__DesktopCubeModelingController____c___PublishCallback_b__11_2_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   ,(MethodInfo *)0x0);
        TypeInfo__DesktopCubeModelingController____c->static_fields->__9__11_2 = callbackFunction;
        func_?();
        this = (DesktopCubeModelingController *)&UNK_?;
        errorText = (String *)callbackFunction;
      }
      if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0)
      {
        func_?();
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                ((GameObject *)errorText,(BaseEventData *)0x0,
                 (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                );
      root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this,(MethodInfo *)0x0);
      callbackFunction_00 = (ExecuteEvents_EventFunction_1_System_Object_ *)func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                ((UnityAction_2_System_Object_System_Object_ *)callbackFunction_00,value,
                 MethodInfo__DesktopCubeModelingController____c__DisplayClass11_0___PublishCallback_b__3_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                (root,(BaseEventData *)0x0,callbackFunction_00,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
                );
      return;
    }
    iVar4 = func_?();
    if (iVar4 == 0) goto code_?;
    _UNK_? = iVar4;
    iVar4 = func_?();
    if (iVar4 != 0) goto code_?;
  }
  func_?();
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void <PublishGame>b__10_0(IModalPopupCreator, BaseEventData) */

void Assembly-CSharp.dll::DesktopCubeModelingController::
     DesktopCubeModelingController__PublishGame_b__10_0
               (DesktopCubeModelingController *this,IModalPopupCreator *x,BaseEventData *y,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__DesktopCubeModelingController__PublishCallback_bool__ConfirmationPopup_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__IModalPopupCreator);
    func_?(&TypeInfo__UnityEngine__Events__UnityAction<bool,_ConfirmationPopup>);
    func_?(&StringLiteral_Are_you_sure_you_wish_to_publish);
    func_?(&StringLiteral_Publish_Game_);
    cRam_? = '\x01';
  }
  pSVar1 = TM::TM__(StringLiteral_Are_you_sure_you_wish_to_publish,(MethodInfo *)0x0);
  this_00 = (UnityAction_2_System_Int32_System_Int32_ *)
            func_?(TypeInfo__UnityEngine__Events__UnityAction<bool,_ConfirmationPopup>);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Int32,System::Int32]::
  UnityAction_2_System_Int32_System_Int32___ctor
            (this_00,(Object *)this,
             MethodInfo__DesktopCubeModelingController__PublishCallback_bool__ConfirmationPopup_,
             (MethodInfo *)0x0);
  pSVar2 = TM::TM__(StringLiteral_Publish_Game_,(MethodInfo *)0x0);
  if (x == (IModalPopupCreator *)0x0) {
    func_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pIVar4 = x->klass;
  uVar5 = 0;
  uVar6._0_1_ = (pIVar4->_1).rank;
  uVar6._1_1_ = (pIVar4->_1).minimumAlignment;
  if (uVar6 != 0) {
    do {
      if (pIVar4->interfaceOffsets[uVar5].interfaceType ==
          (Il2CppClass *)TypeInfo__UnityEngine__EventSystems__IModalPopupCreator) {
        ppMVar7 = &(&(x->klass->vtable).Create_2)[x->klass->interfaceOffsets[uVar5].offset].method;
        goto code_?;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar6);
  }
  this_00 = (UnityAction_2_System_Int32_System_Int32_ *)&UNK_?;
  pSVar2 = (String *)x;
  ppMVar7 = (MethodInfo **)
            func_?(x,TypeInfo__UnityEngine__EventSystems__IModalPopupCreator);
code_?:
  (*(code *)*ppMVar7)(x,pSVar1,this_00,pSVar2);
  return;
}

