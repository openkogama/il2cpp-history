
/* Void Update() */

void Assembly-CSharp.dll::EnterPlaySessionRoundCountDown::EnterPlaySessionRoundCountDown_Update
               (EnterPlaySessionRoundCountDown *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&TypeInfo__IPlayModeUI);
    func_?(&
                    MethodInfo__EnterPlaySessionRoundCountDown____c___Update_b__1_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__EnterPlaySessionRoundCountDown____c);
    func_?(&StringLiteral_Round_starts_in__);
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields).text;
  str0 = TM::TM__(StringLiteral_Round_starts_in__,(MethodInfo *)0x0);
  pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((pMVar2 != (MVNetworkGame *)0x0) &&
     (pMVar3 = (pMVar2->fields)._NetworkGameStateListener_k__BackingField,
     pMVar3 != (MVNetworkGameStateListener *)0x0)) {
    IStack_4.m_value =
         MVNetworkGameStateListener::MVNetworkGameStateListener_get_CountdownInSeconds
                   (pMVar3,(MethodInfo *)0x0);
    str1 = mscorlib.dll::System::Int32::Int32_ToString(&IStack_4,(MethodInfo *)0x0);
    mscorlib.dll::System::String::String_Concat_3(str0,str1,(MethodInfo *)0x0);
    if (pTVar1 != (Text *)0x0) {
      (*(code *)(pTVar1->klass->vtable).set_text.method)();
      pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if ((pMVar2 != (MVNetworkGame *)0x0) &&
         (pMVar3 = (pMVar2->fields)._NetworkGameStateListener_k__BackingField,
         pMVar3 != (MVNetworkGameStateListener *)0x0)) {
        if ((pMVar3->fields).currentGameState != 1) {
          return;
        }
        root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)this,(MethodInfo *)0x0);
        if ((TypeInfo__EnterPlaySessionRoundCountDown____c->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__EnterPlaySessionRoundCountDown____c);
        }
        callbackFunction = TypeInfo__EnterPlaySessionRoundCountDown____c->static_fields->__9__1_0;
        if (callbackFunction == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
          if ((TypeInfo__EnterPlaySessionRoundCountDown____c->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__EnterPlaySessionRoundCountDown____c);
          }
          object = TypeInfo__EnterPlaySessionRoundCountDown____c->static_fields->__9;
          callbackFunction =
               (ExecuteEvents_EventFunction_1_IUIStack_ *)
               func_?(
                              TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                              );
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
          Object]::UnityAction_2_System_Object_System_Object___ctor
                    ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)object
                     ,
                     MethodInfo__EnterPlaySessionRoundCountDown____c___Update_b__1_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                     ,(MethodInfo *)0x0);
          TypeInfo__EnterPlaySessionRoundCountDown____c->static_fields->__9__1_0 = callbackFunction;
          func_?(&TypeInfo__EnterPlaySessionRoundCountDown____c->static_fields->__9__1_0,
                          callbackFunction);
        }
        if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0
           ) {
          func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
        }
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                  (root,(BaseEventData *)0x0,
                   (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction,
                   UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                  );
        if (cRam_? == '\0') {
          func_?(&TypeInfo__MVGameControllerBase);
          cRam_? = '\x01';
        }
        pIVar5 = TypeInfo__MVGameControllerBase->static_fields->_PlayModeUI_k__BackingField;
        if (pIVar5 != (IPlayModeUI *)0x0) {
          func_?(6,TypeInfo__IPlayModeUI,pIVar5,0);
          pSVar6 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                             ((MethodInfo *)0x0);
          if ((pSVar6 != (SpawnRoleDataMediator *)0x0) &&
             (this_00 = (pSVar6->fields).SpawnRoleModeTypeWrapper,
             this_00 != (SpawnRoleModeTypeWrapper *)0x0)) {
            bVar7 = SpawnRoleModeTypeWrapper::SpawnRoleModeTypeWrapper_IsInMode
                              (this_00,SpawnRoleModeType__Enum_Hidden,(MethodInfo *)0x0);
            if (bVar7 != 0) {
              pGVar8 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager
                                 ((MethodInfo *)0x0);
              if ((pGVar8 == (GameEventManager *)0x0) ||
                 (this_01 = (pGVar8->fields).AvatarCommandsPlayMode,
                 this_01 == (GameEventManager_AvatarCommandsPlayModeManager *)0x0))
              goto code_?;
              GoogleMobileAds.dll::GoogleMobileAds::Api::RewardedAd::
              RewardedAd__RegisterAdEvents_m__9((RewardedAd *)this_01,(MethodInfo *)0x0);
            }
            return;
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

