
/* Void OnConfirmPlay() */

void Assembly-CSharp.dll::BriefingPlayButtonTouch::BriefingPlayButtonTouch_OnConfirmPlay
               (BriefingPlayButtonTouch *this,MethodInfo *method)

{
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((pMVar1 != (MVNetworkGame *)0x0) &&
     (pMVar2 = (pMVar1->fields)._NetworkGameStateListener_k__BackingField,
     pMVar2 != (MVNetworkGameStateListener *)0x0)) {
    iVar3 = (pMVar2->fields).currentGameState;
    fVar4 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
    pMVar5 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
    if (pMVar5 != (MVLocalPlayer *)0x0) {
      if ((iVar3 != 2) && ((pMVar5->fields).respawnTime <= fVar4)) {
        pAVar6 = (this->fields)._.OnPlayButtonPressed;
        if (pAVar6 != (Action *)0x0) {
          (*(pAVar6->fields)._._.invoke_impl)((pAVar6->fields)._._.method_code);
        }
        return;
      }
      this_00 = (this->fields)._.button;
      if (this_00 != (Button *)0x0) {
        UnityEngine.UI.dll::UnityEngine::UI::Selectable::Selectable_set_interactable
                  ((Selectable *)this_00,0,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void StartPlaying() */

void Assembly-CSharp.dll::BriefingPlayButtonTouch::BriefingPlayButtonTouch_StartPlaying
               (BriefingPlayButtonTouch *this,MethodInfo *method)

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
                    MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<int>__op_Inequality_MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<int>__int_
                   );
    func_?(&
                    MethodInfo__BriefingPlayButtonTouch____c___StartPlaying_b__2_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__BriefingPlayButtonTouch____c);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVGameControllerBase);
    cRam_? = '\x01';
  }
  pIVar1 = TypeInfo__MVGameControllerBase->static_fields->_PlayModeUI_k__BackingField;
  if (pIVar1 != (IPlayModeUI *)0x0) {
    func_?(8,TypeInfo__IPlayModeUI,pIVar1,0);
    pMVar2 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
    if ((pMVar2 != (MVLocalPlayer *)0x0) &&
       (pSVar3 = (pMVar2->fields).spawnRoleDataMediator, pSVar3 != (SpawnRoleDataMediator *)0x0)) {
      a = (SpawnRoleVariable_1_System_Int32_ *)(pSVar3->fields).woId;
      pMVar2 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
      if (pMVar2 != (MVLocalPlayer *)0x0) {
        iVar4 = MVLocalPlayer::MVLocalPlayer_get_DefaultSpawnRoleId(pMVar2,(MethodInfo *)0x0);
        bVar5 = Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes
                ::SpawnRoleVariable`1[System::Int32]::
                SpawnRoleVariable_1_System_Int32__op_Inequality_1
                          (a,iVar4,
                           MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<int>__op_Inequality_MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<int>__int_
                          );
        if (bVar5 == 0) {
          pSVar3 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                             ((MethodInfo *)0x0);
          if ((pSVar3 != (SpawnRoleDataMediator *)0x0) &&
             (this_00 = (pSVar3->fields).SpawnRoleModeTypeWrapper,
             this_00 != (SpawnRoleModeTypeWrapper *)0x0)) {
            bVar5 = SpawnRoleModeTypeWrapper::SpawnRoleModeTypeWrapper_IsInMode
                              (this_00,SpawnRoleModeType__Enum_Hidden,(MethodInfo *)0x0);
            if (bVar5 != 0) {
              pGVar6 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager
                                 ((MethodInfo *)0x0);
              if ((pGVar6 == (GameEventManager *)0x0) ||
                 (this_01 = (pGVar6->fields).AvatarCommandsPlayMode,
                 this_01 == (GameEventManager_AvatarCommandsPlayModeManager *)0x0))
              goto code_?;
              GoogleMobileAds.dll::GoogleMobileAds::Api::RewardedAd::
              RewardedAd__RegisterAdEvents_m__9((RewardedAd *)this_01,(MethodInfo *)0x0);
            }
code_?:
            if ((this->fields)._.shouldPop != 0) {
              root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                               ((Component *)this,(MethodInfo *)0x0);
              if ((TypeInfo__BriefingPlayButtonTouch____c->_1).cctor_finished_or_no_cctor == 0) {
                func_?();
              }
              callbackFunction = TypeInfo__BriefingPlayButtonTouch____c->static_fields->__9__2_0;
              if (callbackFunction == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
                if ((TypeInfo__BriefingPlayButtonTouch____c->_1).cctor_finished_or_no_cctor == 0) {
                  func_?();
                }
                object = TypeInfo__BriefingPlayButtonTouch____c->static_fields->__9;
                callbackFunction = (ExecuteEvents_EventFunction_1_IUIStack_ *)func_?();
                UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System
                ::Object]::UnityAction_2_System_Object_System_Object___ctor
                          ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,
                           (Object *)object,
                           MethodInfo__BriefingPlayButtonTouch____c___StartPlaying_b__2_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                           ,(MethodInfo *)0x0);
                TypeInfo__BriefingPlayButtonTouch____c->static_fields->__9__2_0 = callbackFunction;
                func_?(&TypeInfo__BriefingPlayButtonTouch____c->static_fields->__9__2_0);
              }
              if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).
                  cctor_finished_or_no_cctor == 0) {
                func_?();
              }
              UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
              ExecuteEvents_ExecuteHierarchy
                        (root,(BaseEventData *)0x0,
                         (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction,
                         UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                        );
            }
            return;
          }
        }
        else {
          pMVar2 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
          this_02 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
          if (this_02 != (MVLocalPlayer *)0x0) {
            iVar4 = MVLocalPlayer::MVLocalPlayer_get_DefaultSpawnRoleId(this_02,(MethodInfo *)0x0);
            if (pMVar2 != (MVLocalPlayer *)0x0) {
              MVLocalPlayer::MVLocalPlayer_SetActiveSpawnRole(pMVar2,iVar4,(MethodInfo *)0x0);
              goto code_?;
            }
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}

