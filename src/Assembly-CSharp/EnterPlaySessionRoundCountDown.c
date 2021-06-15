
/* Void Update() */

void Assembly-CSharp.dll::EnterPlaySessionRoundCountDown::EnterPlaySessionRoundCountDown_Update
               (EnterPlaySessionRoundCountDown *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_01 = this;
  pTVar1 = (this->fields).text;
  pSVar2 = TM::TM__(StringLiteral_Round_starts_in__,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pMVar3 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((pMVar3 != (MVNetworkGame *)0x0) &&
     (this_02 = (MVNetworkGameStateListener *)
                InventoryItemPreviewer::InventoryItemPreviewer_get_PreviewGameObject
                          ((InventoryItemPreviewer *)pMVar3,(MethodInfo *)0x0),
     this_02 != (MVNetworkGameStateListener *)0x0)) {
    this = (EnterPlaySessionRoundCountDown *)
           MVNetworkGameStateListener::MVNetworkGameStateListener_get_CountdownInSeconds
                     (this_02,(MethodInfo *)0x0);
    pOVar4 = (Object *)func_?(TypeInfo__System__Int32,&this);
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__String);
    }
    pSVar2 = mscorlib.dll::System::String::String_Concat((Object *)pSVar2,pOVar4,(MethodInfo *)0x0);
    if (pTVar1 != (Text *)0x0) {
      (*(code *)(pTVar1->klass->vtable).set_text.method)
                (pTVar1,pSVar2,(pTVar1->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
      pMVar3 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if ((pMVar3 != (MVNetworkGame *)0x0) &&
         (this_03 = (SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
                     *)InventoryItemPreviewer::InventoryItemPreviewer_get_PreviewGameObject
                                 ((InventoryItemPreviewer *)pMVar3,(MethodInfo *)0x0),
         this_03 !=
         (SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
          *)0x0)) {
        pOVar4 = System.dll::System::Collections::Generic::
                 SortedList`2[TKey,TValue]+ListValues[TKey,TValue]+GetEnumerator>c__Iterator3[System
                 ::Single,System::Object]::
                 SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object__System_Collections_IEnumerator_get_Current
                           (this_03,(MethodInfo *)0x0);
        if (pOVar4 != (Object *)0x1) {
          return;
        }
        root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                         ((Component_1 *)this_01,(MethodInfo *)0x0);
        if (TypeInfo__EnterPlaySessionRoundCountDown->static_fields->__f__am_cache0 ==
            (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
          this_04 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                     *)func_?(
                                      TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                                      );
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
          SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
          UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                    (this_04,(Object *)0x0,
                     MethodInfo__EnterPlaySessionRoundCountDown___Update_m__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                     ,
                     MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
                    );
          TypeInfo__EnterPlaySessionRoundCountDown->static_fields->__f__am_cache0 =
               (ExecuteEvents_EventFunction_1_IUIStack_ *)this_04;
        }
        callbackFunction =
             (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)
             TypeInfo__EnterPlaySessionRoundCountDown->static_fields->__f__am_cache0;
        if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
             0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
          func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
        }
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
        ExecuteEvents_ExecuteHierarchy_63
                  (root,(BaseEventData *)0x0,callbackFunction,
                   UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                  );
        if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
          func_?(TypeInfo__MVGameControllerBase);
        }
        pIVar5 = MVGameControllerBase::MVGameControllerBase_get_PlayModeUI((MethodInfo *)0x0);
        if (pIVar5 != (IPlayModeUI *)0x0) {
          func_?(4,TypeInfo__IPlayModeUI,pIVar5,0);
          pSVar6 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                             ((MethodInfo *)0x0);
          if ((pSVar6 != (SpawnRoleDataMediator *)0x0) &&
             (this_00 = (pSVar6->fields).SpawnRoleModeTypeWrapper,
             this_00 != (SpawnRoleModeTypeWrapper *)0x0)) {
            bVar7 = SpawnRoleModeTypeWrapper::SpawnRoleModeTypeWrapper_IsInMode
                              (this_00,SpawnRoleModeType__Enum_Hidden,(MethodInfo *)0x0);
            if (bVar7 != 0) {
              if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) !=
                   0) && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
                func_?(TypeInfo__MVGameControllerBase);
              }
              pGVar8 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager
                                 ((MethodInfo *)0x0);
              if ((pGVar8 == (GameEventManager *)0x0) ||
                 (pSVar6 = (SpawnRoleDataMediator *)(pGVar8->fields).AvatarCommandsPlayMode,
                 pSVar6 == (SpawnRoleDataMediator *)0x0)) goto code_?;
              Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::Mediator::
              SpawnRoleDataMediator::SpawnRoleDataMediator_SpawnRoleDataReceiverOnOnSuicide
                        (pSVar6,(MethodInfo *)0x0);
            }
            return;
          }
        }
      }
    }
  }
code_?:
  func_?(0);
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void <Update>m__0(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::EnterPlaySessionRoundCountDown::
     EnterPlaySessionRoundCountDown__Update_m__0(IUIStack *x,BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (x != (IUIStack *)0x0) {
    func_?(2,TypeInfo__UnityEngine__EventSystems__IUIStack,x);
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

