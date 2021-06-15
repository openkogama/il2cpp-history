
/* Void Awake() */

void Assembly-CSharp.dll::DeathUIController::DeathUIController_Awake
               (DeathUIController *this,MethodInfo *method)

{
  this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                      ((Component_1 *)this,(MethodInfo *)0x0);
  if (this_01 == (GameObject *)0x0) {
    func_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
            (this_01,0,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?();
  }
  pSVar2 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                     ((MethodInfo *)0x0);
  pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
           func_?(TypeInfo__System__Action<int,_int,_MV::Common::PlayerKilledByType>);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (pUVar3,in_stack_4,
             MethodInfo__DeathUIController__OnLocalPlayerKilled_int__int__MV__Common__PlayerKilledByType_
             ,
             MethodInfo__System__Action<int,_int,_MV::Common::PlayerKilledByType>__Action_System__Object__void__
            );
  if (pSVar2 != (SpawnRoleDataMediator *)0x0) {
    Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::Mediator::SpawnRoleDataMediator::
    SpawnRoleDataMediator_add_OnKilled
              (pSVar2,(Action_3_Int32_Int32_MV_Common_PlayerKilledByType_ *)pUVar3,(MethodInfo *)0x0
              );
    pSVar2 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                       ((MethodInfo *)0x0);
    if (pSVar2 != (SpawnRoleDataMediator *)0x0) {
      pAStack5 = TypeInfo__System__Action<MV::Common::SpawnRoleModeType>;
      this_00 = (pSVar2->fields).SpawnRoleModeTypeWrapper;
      pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *
               )func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (pUVar3,in_stack_4,
                 MethodInfo__DeathUIController__OnAvatarStateChanged_MV__Common__SpawnRoleModeType_,
                 MethodInfo__System__Action<MV::Common::SpawnRoleModeType>__Action_System__Object__void__
                );
      if (this_00 != (SpawnRoleModeTypeWrapper *)0x0) {
        SpawnRoleModeTypeWrapper::SpawnRoleModeTypeWrapper_add_OnChange
                  (this_00,(Action_1_MV_Common_SpawnRoleModeType_ *)pUVar3,(MethodInfo *)0x0);
        pFVar6 = MVGameControllerBase::MVGameControllerBase_get_FlagDebriefingControl
                           ((MethodInfo *)0x0);
        if (pFVar6 != (FlagDebriefingControl *)0x0) {
          pAStack5 = (Action_1_MV_Common_SpawnRoleModeType___Class *)TypeInfo__System__Action
          ;
          pAVar7 = (pFVar6->fields).OnFlagDebriefingEnd;
          pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                    *)func_?();
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
          SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
          UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                    (pUVar3,in_stack_4,MethodInfo__DeathUIController__EndDeathBriefing__,
                     (MethodInfo *)0x0);
          pAVar8 = (Action *)
                   mscorlib.dll::System::Delegate::Delegate_Combine
                             ((Delegate *)pAVar7,(Delegate *)pUVar3,(MethodInfo *)0x0);
          pAVar7 = (Action *)0x0;
          if (pAVar8 != (Action *)0x0) {
            if (pAVar8->klass == TypeInfo__System__Action) {
              pAVar7 = pAVar8;
            }
            if (pAVar7 == (Action *)0x0) goto code_?;
          }
          (pFVar6->fields).OnFlagDebriefingEnd = pAVar7;
          pMVar9 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          if (pMVar9 != (MVNetworkGame *)0x0) {
            pAStack5 =
                 (Action_1_MV_Common_SpawnRoleModeType___Class *)
                 TypeInfo__System__Action<IWinningCondition>;
            pAVar10 = (pMVar9->fields).OnWinningConditionFulfilled;
            pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                      *)func_?();
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
            SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
            UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                      (pUVar3,in_stack_4,
                       MethodInfo__DeathUIController__OnRoundEnd_IWinningCondition_,
                       MethodInfo__System__Action<IWinningCondition>__Action_System__Object__void__)
            ;
            pAVar11 = (Action_1_IWinningCondition_ *)
                     mscorlib.dll::System::Delegate::Delegate_Combine
                               ((Delegate *)pAVar10,(Delegate *)pUVar3,(MethodInfo *)0x0);
            pAVar10 = (Action_1_IWinningCondition_ *)0x0;
            if (pAVar11 != (Action_1_IWinningCondition_ *)0x0) {
              if (pAVar11->klass == TypeInfo__System__Action<IWinningCondition>) {
                pAVar10 = pAVar11;
              }
              if (pAVar10 == (Action_1_IWinningCondition_ *)0x0) goto code_?;
            }
            (pMVar9->fields).OnWinningConditionFulfilled = pAVar10;
            pSVar2 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                               ((MethodInfo *)0x0);
            pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                      *)func_?();
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
            SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
            UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                      (pUVar3,in_stack_4,
                       MethodInfo__DeathUIController__OnLocalAvatarSuicide__,(MethodInfo *)0x0);
            if (pSVar2 != (SpawnRoleDataMediator *)0x0) {
              Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::Mediator::
              SpawnRoleDataMediator::SpawnRoleDataMediator_add_OnSuicide
                        (pSVar2,(Action *)pUVar3,(MethodInfo *)0x0);
              pOVar12 = in_stack_4[2].klass;
              if (pOVar12 != (Object__Class *)0x0) {
                pAStack5 =
                     (Action_1_MV_Common_SpawnRoleModeType___Class *)TypeInfo__System__Action;
                pIVar13 = (pOVar12->_0).declaringType;
                pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                          *)func_?();
                UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
                SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
                UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                          (pUVar3,in_stack_4,MethodInfo__DeathUIController__OnFadeFinished__,
                           (MethodInfo *)0x0);
                pIVar14 = (Il2CppClass *)
                          mscorlib.dll::System::Delegate::Delegate_Combine
                                    ((Delegate *)pIVar13,(Delegate *)pUVar3,(MethodInfo *)0x0);
                pIVar13 = (Il2CppClass *)0x0;
                if (pIVar14 == (Il2CppClass *)0x0) {
code_?:
                  (pOVar12->_0).declaringType = pIVar13;
                  return;
                }
                if ((Action__Class *)pIVar14->image == TypeInfo__System__Action) {
                  pIVar13 = pIVar14;
                }
                if (pIVar13 != (Il2CppClass *)0x0) goto code_?;
                goto code_?;
              }
            }
          }
        }
      }
    }
  }
  pAStack5 = (Action_1_MV_Common_SpawnRoleModeType___Class *)0x0;
  func_?();
code_?:
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void EndDeathBriefing() */

void Assembly-CSharp.dll::DeathUIController::DeathUIController_EndDeathBriefing
               (DeathUIController *this,MethodInfo *method)

{
  pNVar1 = (this->fields).fader;
  if (pNVar1 != (NotificationFade *)0x0) {
    NotificationFade::NotificationFade_OnDisable(pNVar1,(MethodInfo *)0x0);
    pNVar1 = (this->fields).fader;
    if (pNVar1 != (NotificationFade *)0x0) {
      pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                         ((Component_1 *)pNVar1,(MethodInfo *)0x0);
      if (pGVar2 != (GameObject *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar2,0,(MethodInfo *)0x0);
        pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                           ((Component_1 *)this,(MethodInfo *)0x0);
        if (pGVar2 != (GameObject *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar2,0,(MethodInfo *)0x0);
          (this->fields).isDeathBriefActive = 0;
          return;
        }
      }
    }
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void Initialize() */

void Assembly-CSharp.dll::DeathUIController::DeathUIController_Initialize
               (DeathUIController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pSVar1 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                     ((MethodInfo *)0x0);
  pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
           func_?(TypeInfo__System__Action<int,_int,_MV::Common::PlayerKilledByType>);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (pUVar2,(Object *)this,
             MethodInfo__DeathUIController__OnLocalPlayerKilled_int__int__MV__Common__PlayerKilledByType_
             ,
             MethodInfo__System__Action<int,_int,_MV::Common::PlayerKilledByType>__Action_System__Object__void__
            );
  if (pSVar1 != (SpawnRoleDataMediator *)0x0) {
    Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::Mediator::SpawnRoleDataMediator::
    SpawnRoleDataMediator_add_OnKilled
              (pSVar1,(Action_3_Int32_Int32_MV_Common_PlayerKilledByType_ *)pUVar2,(MethodInfo *)0x0
              );
    pSVar1 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                       ((MethodInfo *)0x0);
    if (pSVar1 != (SpawnRoleDataMediator *)0x0) {
      pAStack3 = TypeInfo__System__Action<MV::Common::SpawnRoleModeType>;
      this_00 = (pSVar1->fields).SpawnRoleModeTypeWrapper;
      pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *
               )func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (pUVar2,(Object *)this,
                 MethodInfo__DeathUIController__OnAvatarStateChanged_MV__Common__SpawnRoleModeType_,
                 MethodInfo__System__Action<MV::Common::SpawnRoleModeType>__Action_System__Object__void__
                );
      if (this_00 != (SpawnRoleModeTypeWrapper *)0x0) {
        SpawnRoleModeTypeWrapper::SpawnRoleModeTypeWrapper_add_OnChange
                  (this_00,(Action_1_MV_Common_SpawnRoleModeType_ *)pUVar2,(MethodInfo *)0x0);
        pFVar4 = MVGameControllerBase::MVGameControllerBase_get_FlagDebriefingControl
                           ((MethodInfo *)0x0);
        if (pFVar4 != (FlagDebriefingControl *)0x0) {
          pAStack3 = (Action_1_MV_Common_SpawnRoleModeType___Class *)TypeInfo__System__Action
          ;
          pAVar5 = (pFVar4->fields).OnFlagDebriefingEnd;
          pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                    *)func_?();
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
          SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
          UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                    (pUVar2,(Object *)this,MethodInfo__DeathUIController__EndDeathBriefing__,
                     (MethodInfo *)0x0);
          pAVar6 = (Action *)
                   mscorlib.dll::System::Delegate::Delegate_Combine
                             ((Delegate *)pAVar5,(Delegate *)pUVar2,(MethodInfo *)0x0);
          pAVar5 = (Action *)0x0;
          if (pAVar6 != (Action *)0x0) {
            if (pAVar6->klass == TypeInfo__System__Action) {
              pAVar5 = pAVar6;
            }
            if (pAVar5 == (Action *)0x0) goto code_?;
          }
          (pFVar4->fields).OnFlagDebriefingEnd = pAVar5;
          pMVar7 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          if (pMVar7 != (MVNetworkGame *)0x0) {
            pAStack3 =
                 (Action_1_MV_Common_SpawnRoleModeType___Class *)
                 TypeInfo__System__Action<IWinningCondition>;
            pAVar8 = (pMVar7->fields).OnWinningConditionFulfilled;
            pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                      *)func_?();
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
            SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
            UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                      (pUVar2,(Object *)this,
                       MethodInfo__DeathUIController__OnRoundEnd_IWinningCondition_,
                       MethodInfo__System__Action<IWinningCondition>__Action_System__Object__void__)
            ;
            pAVar9 = (Action_1_IWinningCondition_ *)
                     mscorlib.dll::System::Delegate::Delegate_Combine
                               ((Delegate *)pAVar8,(Delegate *)pUVar2,(MethodInfo *)0x0);
            pAVar8 = (Action_1_IWinningCondition_ *)0x0;
            if (pAVar9 != (Action_1_IWinningCondition_ *)0x0) {
              if (pAVar9->klass == TypeInfo__System__Action<IWinningCondition>) {
                pAVar8 = pAVar9;
              }
              if (pAVar8 == (Action_1_IWinningCondition_ *)0x0) goto code_?;
            }
            (pMVar7->fields).OnWinningConditionFulfilled = pAVar8;
            pSVar1 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                               ((MethodInfo *)0x0);
            pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                      *)func_?();
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
            SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
            UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                      (pUVar2,(Object *)this,MethodInfo__DeathUIController__OnLocalAvatarSuicide__,
                       (MethodInfo *)0x0);
            if (pSVar1 != (SpawnRoleDataMediator *)0x0) {
              Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::Mediator::
              SpawnRoleDataMediator::SpawnRoleDataMediator_add_OnSuicide
                        (pSVar1,(Action *)pUVar2,(MethodInfo *)0x0);
              pNVar10 = (this->fields).fader;
              if (pNVar10 != (NotificationFade *)0x0) {
                pAStack3 =
                     (Action_1_MV_Common_SpawnRoleModeType___Class *)TypeInfo__System__Action;
                pAVar5 = (pNVar10->fields).OnFinished;
                pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                          *)func_?();
                UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
                SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
                UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                          (pUVar2,(Object *)this,MethodInfo__DeathUIController__OnFadeFinished__,
                           (MethodInfo *)0x0);
                pAVar6 = (Action *)
                         mscorlib.dll::System::Delegate::Delegate_Combine
                                   ((Delegate *)pAVar5,(Delegate *)pUVar2,(MethodInfo *)0x0);
                pAVar5 = (Action *)0x0;
                if (pAVar6 == (Action *)0x0) {
code_?:
                  (pNVar10->fields).OnFinished = pAVar5;
                  return;
                }
                if (pAVar6->klass == TypeInfo__System__Action) {
                  pAVar5 = pAVar6;
                }
                if (pAVar5 != (Action *)0x0) goto code_?;
                goto code_?;
              }
            }
          }
        }
      }
    }
  }
  pAStack3 = (Action_1_MV_Common_SpawnRoleModeType___Class *)0x0;
  func_?();
code_?:
  func_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void NotReviving() */

void Assembly-CSharp.dll::DeathUIController::DeathUIController_NotReviving
               (DeathUIController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_01 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (this_01 != (MVNetworkGame *)0x0) {
    this_02 = (PrefabPool *)MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_01,(MethodInfo *)0x0);
    if (this_02 != (PrefabPool *)0x0) {
      this_03 = PrefabPool::PrefabPool_get_CollectTheItemDropOffArrowPrefab
                          (this_02,(MethodInfo *)0x0);
      if (this_03 != (ObjectiveArrow *)0x0) {
        BoostController::BoostController_RemoveAllBoosts
                  ((BoostController *)this_03,(MethodInfo *)0x0);
        this_00 = (TierBoostStateHandler *)unaff_EDI[5].monitor;
        this_04 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                   *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  (this_04,unaff_EDI,MethodInfo__DeathUIController__OnFinishPreviewTier_bool_,
                   MethodInfo__System__Action<bool>__Action_System__Object__void__);
        if (this_00 != (TierBoostStateHandler *)0x0) {
          TierBoostStateHandler::TierBoostStateHandler_StopPreviewTier
                    (this_00,(Action_1_Boolean_ *)this_04,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void OnAvatarStateChanged(SpawnRoleModeType) */

void Assembly-CSharp.dll::DeathUIController::DeathUIController_OnAvatarStateChanged
               (DeathUIController *this,SpawnRoleModeType__Enum mode,MethodInfo *method)

{
  if ((((this->fields).isDeathBriefActive != 0) && (mode != SpawnRoleModeType__Enum_Hidden)) &&
     (mode != SpawnRoleModeType__Enum_Dead)) {
    DeathUIController_EndDeathBriefing(this,(MethodInfo *)0x0);
  }
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::DeathUIController::DeathUIController_OnDestroy
               (DeathUIController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  bVar1 = MVGameControllerBase::MVGameControllerBase_get_IsAlive((MethodInfo *)0x0);
  if (bVar1 == 0) {
    return;
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pSVar2 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                     ((MethodInfo *)0x0);
  pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
           func_?(TypeInfo__System__Action);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (pUVar3,(Object *)this,MethodInfo__DeathUIController__OnLocalAvatarSuicide__,
             (MethodInfo *)0x0);
  if (pSVar2 != (SpawnRoleDataMediator *)0x0) {
    Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::Mediator::SpawnRoleDataMediator::
    SpawnRoleDataMediator_remove_OnSuicide(pSVar2,(Action *)pUVar3,(MethodInfo *)0x0);
    pSVar2 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                       ((MethodInfo *)0x0);
    pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
             func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (pUVar3,(Object *)this,
               MethodInfo__DeathUIController__OnLocalPlayerKilled_int__int__MV__Common__PlayerKilledByType_
               ,
               MethodInfo__System__Action<int,_int,_MV::Common::PlayerKilledByType>__Action_System__Object__void__
              );
    if (pSVar2 != (SpawnRoleDataMediator *)0x0) {
      Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::Mediator::SpawnRoleDataMediator::
      SpawnRoleDataMediator_remove_OnKilled
                (pSVar2,(Action_3_Int32_Int32_MV_Common_PlayerKilledByType_ *)pUVar3,
                 (MethodInfo *)0x0);
      pSVar2 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                         ((MethodInfo *)0x0);
      if (pSVar2 != (SpawnRoleDataMediator *)0x0) {
        this_00 = (pSVar2->fields).SpawnRoleModeTypeWrapper;
        pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                  *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  (pUVar3,(Object *)this,
                   MethodInfo__DeathUIController__OnAvatarStateChanged_MV__Common__SpawnRoleModeType_
                   ,
                   MethodInfo__System__Action<MV::Common::SpawnRoleModeType>__Action_System__Object__void__
                  );
        if (this_00 != (SpawnRoleModeTypeWrapper *)0x0) {
          SpawnRoleModeTypeWrapper::SpawnRoleModeTypeWrapper_remove_OnChange
                    (this_00,(Action_1_MV_Common_SpawnRoleModeType_ *)pUVar3,(MethodInfo *)0x0);
          pFVar4 = MVGameControllerBase::MVGameControllerBase_get_FlagDebriefingControl
                             ((MethodInfo *)0x0);
          if (pFVar4 != (FlagDebriefingControl *)0x0) {
            pAVar5 = (pFVar4->fields).OnFlagDebriefingEnd;
            pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                      *)func_?();
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
            SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
            UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                      (pUVar3,(Object *)this,MethodInfo__DeathUIController__EndDeathBriefing__,
                       (MethodInfo *)0x0);
            pAVar6 = (Action *)
                     mscorlib.dll::System::Delegate::Delegate_Remove
                               ((Delegate *)pAVar5,(Delegate *)pUVar3,(MethodInfo *)0x0);
            pAVar5 = (Action *)0x0;
            if (pAVar6 != (Action *)0x0) {
              if (pAVar6->klass == TypeInfo__System__Action) {
                pAVar5 = pAVar6;
              }
              if (pAVar5 == (Action *)0x0) goto code_?;
            }
            (pFVar4->fields).OnFlagDebriefingEnd = pAVar5;
            pMVar7 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
            if (pMVar7 != (MVNetworkGame *)0x0) {
              source = (pMVar7->fields).OnWinningConditionFulfilled;
              pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                        *)func_?();
              UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
              SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
              UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                        (pUVar3,(Object *)this,
                         MethodInfo__DeathUIController__OnRoundEnd_IWinningCondition_,
                         MethodInfo__System__Action<IWinningCondition>__Action_System__Object__void__
                        );
              pAVar6 = (Action *)
                       mscorlib.dll::System::Delegate::Delegate_Remove
                                 ((Delegate *)source,(Delegate *)pUVar3,(MethodInfo *)0x0);
              pAVar5 = (Action *)0x0;
              if (pAVar6 != (Action *)0x0) {
                if ((Action_1_IWinningCondition___Class *)pAVar6->klass ==
                    TypeInfo__System__Action<IWinningCondition>) {
                  pAVar5 = pAVar6;
                }
                if (pAVar5 == (Action *)0x0) goto code_?;
              }
              (pMVar7->fields).OnWinningConditionFulfilled = (Action_1_IWinningCondition_ *)pAVar5;
              pNVar8 = (this->fields).fader;
              if (pNVar8 != (NotificationFade *)0x0) {
                pAVar5 = (pNVar8->fields).OnFinished;
                pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                          *)func_?();
                UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
                SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
                UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                          (pUVar3,(Object *)this,MethodInfo__DeathUIController__OnFadeFinished__,
                           (MethodInfo *)0x0);
                pAVar6 = (Action *)
                         mscorlib.dll::System::Delegate::Delegate_Remove
                                   ((Delegate *)pAVar5,(Delegate *)pUVar3,(MethodInfo *)0x0);
                pAVar5 = (Action *)0x0;
                if (pAVar6 == (Action *)0x0) {
code_?:
                  (pNVar8->fields).OnFinished = pAVar5;
                  return;
                }
                if (pAVar6->klass == TypeInfo__System__Action) {
                  pAVar5 = pAVar6;
                }
                if (pAVar5 != (Action *)0x0) goto code_?;
                goto code_?;
              }
            }
          }
        }
      }
    }
  }
  func_?();
  pAVar6 = extraout_ECX;
code_?:
  func_?(pAVar6);
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void OnDisable() */

void Assembly-CSharp.dll::DeathUIController::DeathUIController_OnDisable
               (DeathUIController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Debug);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
            ((Object *)StringLiteral_Disabled,(MethodInfo *)0x0);
  pNVar1 = (this->fields).fader;
  if (pNVar1 != (NotificationFade *)0x0) {
    NotificationFade::NotificationFade_PauseAt(pNVar1,0.0,(MethodInfo *)0x0);
    pNVar1 = (this->fields).fader;
    if (pNVar1 != (NotificationFade *)0x0) {
      NotificationFade::NotificationFade_OnDisable(pNVar1,(MethodInfo *)0x0);
      pNVar1 = (this->fields).fader;
      if (pNVar1 != (NotificationFade *)0x0) {
        this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                            ((Component_1 *)pNVar1,(MethodInfo *)0x0);
        if (this_00 != (GameObject *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (this_00,0,(MethodInfo *)0x0);
          (this->fields).isDeathBriefActive = 0;
          return;
        }
      }
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void OnFadeFinished() */

void Assembly-CSharp.dll::DeathUIController::DeathUIController_OnFadeFinished
               (DeathUIController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pNVar1 = (this->fields).fader;
  if ((pNVar1 == (NotificationFade *)0x0) ||
     (pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                         ((Component_1 *)pNVar1,(MethodInfo *)0x0), pGVar2 == (GameObject *)0x0))
  goto code_?;
  bVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                    (pGVar2,(MethodInfo *)0x0);
  if (bVar3 == 0) {
    return;
  }
  pNVar1 = (this->fields).fader;
  if ((pNVar1 == (NotificationFade *)0x0) ||
     (pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                         ((Component_1 *)pNVar1,(MethodInfo *)0x0), pGVar2 == (GameObject *)0x0))
  goto code_?;
  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
            (pGVar2,0,(MethodInfo *)0x0);
  (this->fields).isDeathBriefActive = 0;
  pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                     ((Component_1 *)this,(MethodInfo *)0x0);
  if (pGVar2 == (GameObject *)0x0) goto code_?;
  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
            (pGVar2,0,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
    func_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
            ((Object *)StringLiteral_Fade_finished,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pIVar4 = MVGameControllerBase::MVGameControllerBase_get_PlayModeUI((MethodInfo *)0x0);
  if (pIVar4 == (IPlayModeUI *)0x0) goto code_?;
  cVar5 = func_?(3,TypeInfo__IPlayModeUI,pIVar4);
  if (cVar5 != '\0') goto code_?;
  if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__GamePassesManager);
  }
  bVar3 = GamePassesManager::GamePassesManager_get_GamePassesActive((MethodInfo *)0x0);
  if (bVar3 == 0) goto code_?;
  if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__GamePassesManager);
  }
  pPVar6 = GamePassesManager::GamePassesManager_get_PlayerPlanetData((MethodInfo *)0x0);
  if (pPVar6 == (PlayerPlanetData *)0x0) goto code_?;
  bVar7 = (pPVar6->fields).gamePassTier;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pGVar8 = MVGameControllerBase::MVGameControllerBase_get_GameSessionData((MethodInfo *)0x0);
  if (pGVar8 == (GameSessionData *)0x0) goto code_?;
  if ((pGVar8->fields).gameMode == 0) goto code_?;
  if ((((uint)(TypeInfo__TierUnlockedPopupController->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__TierUnlockedPopupController->_1).cctor_started == 0)) {
    func_?(TypeInfo__TierUnlockedPopupController);
  }
  bVar9 = TypeInfo__TierUnlockedPopupController->static_fields->HighestTierRewardShown;
  if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__GamePassesManager);
  }
  pPVar6 = GamePassesManager::GamePassesManager_get_PlayerPlanetData((MethodInfo *)0x0);
  if (pPVar6 == (PlayerPlanetData *)0x0) goto code_?;
  if (bVar9 < (pPVar6->fields).gamePassTier) {
    if ((((uint)(TypeInfo__TierUnlockedPopupController->vtable).Equals.methodPtr & 0x2000000) != 0)
       && ((TypeInfo__TierUnlockedPopupController->_1).cctor_started == 0)) {
      func_?(TypeInfo__TierUnlockedPopupController);
    }
    if (bVar7 <= TypeInfo__TierUnlockedPopupController->static_fields->HighestTierRewardShown)
    goto code_?;
    if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
      func_?(TypeInfo__GamePassesManager);
    }
    pPVar6 = GamePassesManager::GamePassesManager_get_PlayerPlanetData((MethodInfo *)0x0);
    if (pPVar6 == (PlayerPlanetData *)0x0) goto code_?;
    cVar5 = '\x01' - ((pPVar6->fields).gamePassTier < bVar7);
  }
  else {
code_?:
    cVar5 = '\0';
  }
  if (cVar5 == '\0') {
code_?:
    bVar3 = DeathUIController_ShowingClaimGold(this,(MethodInfo *)0x0);
    if (bVar3 != 0) {
      return;
    }
    DeathUIController_ShowDeadmodeUI(this,(MethodInfo *)0x0);
    return;
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = (MethodInfo *)&UNK_?;
  this_00 = (ScaleAnimationBase *)
            func_?(TypeInfo__DeathUIController___ShowTierUnlockedPopup_c__AnonStorey3);
  ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,method_00);
  if (this_00 != (ScaleAnimationBase *)0x0) {
    (this_00->fields).state = (int32_t)this;
    pTVar10 = (this->fields).tierUnlockedPopupControllerPrefab;
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    pXVar11 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                        ((XpBoostParticlePreviewer *)pTVar10,
                         TierUnlockedPopupController_MethodInfo__UnityEngine__Object__Instantiate<TierUnlockedPopupController>_TierUnlockedPopupController_
                        );
    (this_00->fields)._._._._.m_CachedPtr = pXVar11;
    pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                       ((Component_1 *)this,(MethodInfo *)0x0);
    this_01 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?(
                             TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                             );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_01,(Object *)this_00,
               MethodInfo__DeathUIController___ShowTierUnlockedPopup_c__AnonStorey3____m__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,
               MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
              );
    if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
         0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy_63
              (pGVar2,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_IHandleToolTip_ *)this_01,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
              );
    pTVar10 = (this_00->fields)._._._._.m_CachedPtr;
    if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
      func_?(TypeInfo__GamePassesManager);
    }
    pPVar6 = GamePassesManager::GamePassesManager_get_PlayerPlanetData((MethodInfo *)0x0);
    if ((pPVar6 != (PlayerPlanetData *)0x0) && (pTVar10 != (TierUnlockedPopupController *)0x0)) {
      TierUnlockedPopupController::TierUnlockedPopupController_Initialize
                (pTVar10,(uint)(pPVar6->fields).gamePassTier,0,0,(MethodInfo *)0x0);
      return;
    }
  }
code_?:
  func_?(0);
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void OnFinishPreviewTier(Boolean) */

void Assembly-CSharp.dll::DeathUIController::DeathUIController_OnFinishPreviewTier
               (DeathUIController *this,bool openBoostMenu,MethodInfo *method)

{
  if (openBoostMenu != 0) {
    DeathUIController_ShowBoostMenu(this,(MethodInfo *)0x0);
  }
  return;
}


/* Void OnLocalAvatarSuicide() */

void Assembly-CSharp.dll::DeathUIController::DeathUIController_OnLocalAvatarSuicide
               (DeathUIController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pFVar1 = MVGameControllerBase::MVGameControllerBase_get_FlagDebriefingControl((MethodInfo *)0x0);
  if (pFVar1 != (FlagDebriefingControl *)0x0) {
    if ((pFVar1->fields).IsInFlagDebriefing != 0) {
      return;
    }
    if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Debug);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
              ((Object *)StringLiteral_LocalSuicide,(MethodInfo *)0x0);
    pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                       ((Component_1 *)this,(MethodInfo *)0x0);
    if (pGVar2 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar2,1,(MethodInfo *)0x0);
      deathText = TM::TM__(StringLiteral_Respawning__,(MethodInfo *)0x0);
      pGVar2 = (this->fields).deathMessageBar;
      if (pGVar2 != (GameObject *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar2,0,(MethodInfo *)0x0);
        DeathUIController_StartDeathBriefing(this,deathText,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void OnLocalPlayerKilled(Int32, Int32, PlayerKilledByType) */

void Assembly-CSharp.dll::DeathUIController::DeathUIController_OnLocalPlayerKilled
               (DeathUIController *this,int32_t localPlayerActorNr,int32_t dmgDealerActorNr,
               PlayerKilledByType__Enum damageType,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_01 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (((this_01 == (MVNetworkGame *)0x0) ||
      (this_02 = DayNightCycle::DayNightCycle_get_CurrentSkyParam
                           ((DayNightCycle *)this_01,(MethodInfo *)0x0), this_02 == (SkyParam *)0x0)
      ) || (this_03 = MVTeamManager::MVTeamManager_GetTeamList
                                ((MVTeamManager *)this_02,(MethodInfo *)0x0),
           this_03 == (List_1_MV_WorldObject_MVTeam_ *)0x0)) {
code_?:
    func_?();
code_?:
    func_?();
    func_?();
code_?:
    func_?();
    func_?();
code_?:
    func_?();
    func_?();
code_?:
    func_?();
    func_?();
code_?:
    func_?();
    func_?();
code_?:
    func_?();
    func_?();
  }
  else {
    pOVar1 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
             Serialization::JsonProperty]::
             Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                       ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_03,
                        MethodInfo__System__Collections__Generic__List<MV::WorldObject::MVTeam>__get_Count__
                       );
    if (1 < (int)pOVar1) {
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?();
      }
      pMVar2 = (MVAvatar *)MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if (((pMVar2 != (MVAvatar *)0x0) &&
          (pMVar3 = MVAvatar::MVAvatar_get_Shield(pMVar2,(MethodInfo *)0x0),
          pMVar3 != (MVRuntimeDataVariableClampedFloat *)0x0)) &&
         (pMVar4 = MVPlayerContainer::MVPlayerContainer_get_Item
                             ((MVPlayerContainer *)pMVar3,localPlayerActorNr,(MethodInfo *)0x0),
         pMVar4 != (MVPlayer *)0x0)) {
        pIVar5 = MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::
                 KogamaSettingTypes::KogamaSettingNumericBase`1[System::Single]::
                 KogamaSettingNumericBase_1_System_Single__get_KogamaSetting
                           ((KogamaSettingNumericBase_1_System_Single_ *)pMVar4,(MethodInfo *)0x0);
        if ((((uint)(TypeInfo__Styles->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__Styles->_1).cctor_started == 0)) {
          func_?();
        }
        pCVar6 = Styles::Styles_GetTeamColor
                           ((Color *)&stack0xffffffdc,(MVTeam__Enum)pIVar5,0,(MethodInfo *)0x0);
        fVar7 = pCVar6->r;
        method_00 = (MethodInfo *)pCVar6->g;
        fVar8 = pCVar6->b;
        fStack_9 = pCVar6->a;
        this = (DeathUIController *)&UNK_?;
        pMVar2 = (MVAvatar *)MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if (((pMVar2 != (MVAvatar *)0x0) &&
            (pMVar3 = MVAvatar::MVAvatar_get_Shield(pMVar2,(MethodInfo *)0x0),
            pMVar3 != (MVRuntimeDataVariableClampedFloat *)0x0)) &&
           (pMVar4 = MVPlayerContainer::MVPlayerContainer_get_Item
                               ((MVPlayerContainer *)pMVar3,dmgDealerActorNr,(MethodInfo *)0x0),
           pMVar4 != (MVPlayer *)0x0)) {
          pIVar5 = MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::
                   KogamaSettingTypes::KogamaSettingNumericBase`1[System::Single]::
                   KogamaSettingNumericBase_1_System_Single__get_KogamaSetting
                             ((KogamaSettingNumericBase_1_System_Single_ *)pMVar4,(MethodInfo *)0x0)
          ;
          pCVar6 = Styles::Styles_GetTeamColor
                             ((Color *)&stack0xffffffdc,(MVTeam__Enum)pIVar5,0,(MethodInfo *)0x0);
          goto code_?;
        }
      }
      goto code_?;
    }
    if ((((uint)(TypeInfo__Styles->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__Styles->_1).cctor_started == 0)) {
      func_?();
    }
    pCVar6 = Styles::Styles_GetColor
                       ((Color *)&stack0xffffffdc,ColorStyle__Enum_Gray,(MethodInfo *)0x0);
    fVar7 = pCVar6->r;
    method_00 = (MethodInfo *)pCVar6->g;
    fVar8 = pCVar6->b;
    fStack_9 = pCVar6->a;
    pCVar6 = Styles::Styles_GetColor
                       ((Color *)&stack0xffffffdc,ColorStyle__Enum_Gray,(MethodInfo *)0x0);
code_?:
    fVar10 = pCVar6->r;
    fVar11 = pCVar6->g;
    fVar12 = pCVar6->b;
    fVar13 = pCVar6->a;
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?();
    }
    pMVar2 = (MVAvatar *)MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if ((((pMVar2 == (MVAvatar *)0x0) ||
         (pMVar3 = MVAvatar::MVAvatar_get_Shield(pMVar2,(MethodInfo *)0x0),
         pMVar3 == (MVRuntimeDataVariableClampedFloat *)0x0)) ||
        (pMVar4 = MVPlayerContainer::MVPlayerContainer_get_Item
                            ((MVPlayerContainer *)pMVar3,localPlayerActorNr,(MethodInfo *)0x0),
        pMVar4 == (MVPlayer *)0x0)) ||
       (iVar14 = GamePointGainEffect::GamePointGainEffect_get_ID
                          ((GamePointGainEffect *)pMVar4,(MethodInfo *)0x0), iVar14 == 0))
    goto code_?;
    pOVar1 = *(Object **)(iVar14 + 0xc);
    pMVar2 = (MVAvatar *)MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (((pMVar2 == (MVAvatar *)0x0) ||
        (pMVar3 = MVAvatar::MVAvatar_get_Shield(pMVar2,(MethodInfo *)0x0),
        pMVar3 == (MVRuntimeDataVariableClampedFloat *)0x0)) ||
       ((pMVar4 = MVPlayerContainer::MVPlayerContainer_get_Item
                            ((MVPlayerContainer *)pMVar3,dmgDealerActorNr,(MethodInfo *)0x0),
        pMVar4 == (MVPlayer *)0x0 ||
        (iVar14 = GamePointGainEffect::GamePointGainEffect_get_ID
                           ((GamePointGainEffect *)pMVar4,(MethodInfo *)0x0), iVar14 == 0))))
    goto code_?;
    pOVar15 = *(Object **)(iVar14 + 0xc);
    pSVar16 = KillNotification::KillNotification_GetKillText_1
                        (damageType,localPlayerActorNr == dmgDealerActorNr,(MethodInfo *)0x0);
    args = (Object__Array *)func_?();
    c_00.g = (float)method_00;
    c_00.r = fVar7;
    c_00.b = fVar8;
    c_00.a = fStack_9;
    CVar17 = UnityEngine.CoreModule.dll::UnityEngine::Color32::Color32_op_Implicit
                       (c_00,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__Styles->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__Styles->_1).cctor_started == 0)) {
      func_?();
    }
    pSVar18 = Styles::Styles_ColorToHex
                        ((Color32)((ulonglong)CVar17 & 0xffffffff),(MethodInfo *)&UNK_?);
    if (args == (Object__Array *)0x0) goto code_?;
    if ((pSVar18 != (String *)0x0) && (iVar19 = func_?(), iVar19 == 0))
    goto code_?;
    if (args->max_length == 0) goto code_?;
    args->vector[0] = (Object *)pSVar18;
    if ((pOVar1 != (Object *)0x0) && (iVar19 = func_?(), iVar19 == 0))
    goto code_?;
    if (args->max_length < 2) goto code_?;
    args->vector[1] = pOVar1;
    c.g = fVar11;
    c.r = fVar10;
    c.b = fVar12;
    c.a = fVar13;
    CVar17 = UnityEngine.CoreModule.dll::UnityEngine::Color32::Color32_op_Implicit
                       (c,(MethodInfo *)0x0);
    pSVar18 = Styles::Styles_ColorToHex((Color32)((ulonglong)CVar17 & 0xffffffff),method_00);
    if ((pSVar18 != (String *)0x0) && (iVar19 = func_?(), iVar19 == 0))
    goto code_?;
    if (args->max_length < 3) goto code_?;
    args->vector[2] = (Object *)pSVar18;
    if ((pOVar15 == (Object *)0x0) || (iVar19 = func_?(), iVar19 != 0)) {
      if (args->max_length < 4) goto code_?;
      args->vector[3] = pOVar15;
      if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__String->_1).cctor_started == 0)) {
        func_?();
      }
      pSVar16 = mscorlib.dll::System::String::String_Format_3(pSVar16,args,(MethodInfo *)0x0);
      pFVar20 = MVGameControllerBase::MVGameControllerBase_get_FlagDebriefingControl
                          ((MethodInfo *)0x0);
      if (pFVar20 != (FlagDebriefingControl *)0x0) {
        if ((pFVar20->fields).IsInFlagDebriefing != 0) {
          return;
        }
        this_00 = (this->fields).deathMessageBar;
        if (this_00 != (GameObject *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (this_00,1,(MethodInfo *)0x0);
          DeathUIController_StartDeathBriefing(this,pSVar16,(MethodInfo *)0x0);
          return;
        }
      }
      goto code_?;
    }
  }
  func_?();
  func_?();
code_?:
  func_?();
  func_?();
  pcVar21 = (code *)swi(3);
  (*pcVar21)();
  return;
}


/* Void OnPressPlay() */

void Assembly-CSharp.dll::DeathUIController::DeathUIController_OnPressPlay
               (DeathUIController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pIVar1 = MVGameControllerDesktop::MVGameControllerDesktop_get_LockCursorManager((MethodInfo *)0x0)
  ;
  if (pIVar1 != (ILockCursorManager *)0x0) {
    func_?(3,TypeInfo__ILockCursorManager,pIVar1);
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    pGVar2 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
    if ((pGVar2 != (GameEventManager *)0x0) &&
       (this_00 = (pGVar2->fields).AvatarCommandsPlayMode,
       this_00 != (GameEventManager_AvatarCommandsPlayModeManager *)0x0)) {
      FirstTimeChildDestroyedCallback::FirstTimeChildDestroyedCallback_OnDestroy
                ((FirstTimeChildDestroyedCallback *)this_00,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void OnRoundEnd(IWinningCondition) */

void Assembly-CSharp.dll::DeathUIController::DeathUIController_OnRoundEnd
               (DeathUIController *this,IWinningCondition *winningCondition,MethodInfo *method)

{
  DeathUIController_EndDeathBriefing(this,(MethodInfo *)0x0);
  return;
}


/* Void OnTierUnlockedPop() */

void Assembly-CSharp.dll::DeathUIController::DeathUIController_OnTierUnlockedPop
               (DeathUIController *this,MethodInfo *method)

{
  bVar1 = DeathUIController_ShowingClaimGold(this,(MethodInfo *)0x0);
  if (bVar1 != 0) {
    return;
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Debug);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
            ((Object *)StringLiteral_ShowDeadmodeUI,(MethodInfo *)0x0);
  root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                   ((Component_1 *)in_stack_2,(MethodInfo *)0x0);
  if (TypeInfo__DeathUIController->static_fields->__f__am_cache2 ==
      (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
    pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
             func_?(
                            TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                            );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (pUVar3,(Object *)0x0,
               MethodInfo__DeathUIController___ShowDeadmodeUI_m__2_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,
               MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
              );
    TypeInfo__DeathUIController->static_fields->__f__am_cache2 =
         (ExecuteEvents_EventFunction_1_IUIStack_ *)pUVar3;
  }
  callbackFunction =
       (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)
       TypeInfo__DeathUIController->static_fields->__f__am_cache2;
  if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
       0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy_63
            (root,(BaseEventData *)0x0,callbackFunction,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
            );
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?();
  }
  this_00 = (Enumerable_CreateGroupByIterator_c_Iterator5_2_System_Object_System_Object_ *)
            MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                      ((MethodInfo *)0x0);
  if (this_00 == (Enumerable_CreateGroupByIterator_c_Iterator5_2_System_Object_System_Object_ *)0x0)
  goto code_?;
  this_01 = (Dictionary_2_TKey_TValue_ValueCollection_WinningConditionType_System_Object_ *)
            System.Core.dll::System::Linq::Enumerable+<CreateGroupByIterator>c__Iterator5`2[System::
            Object,System::Object]::
            Enumerable_CreateGroupByIterator_c_Iterator5_2_System_Object_System_Object__System_Collections_IEnumerator_get_Current
                      (this_00,(MethodInfo *)0x0);
  if (this_01 == (Dictionary_2_TKey_TValue_ValueCollection_WinningConditionType_System_Object_ *)0x0
     ) goto code_?;
  this_02 = (ReviveState *)
            mscorlib.dll::System::Collections::Generic::
            Dictionary`2[TKey,TValue]+ValueCollection[WinningConditionType,System::Object]::
            Dictionary_2_TKey_TValue_ValueCollection_WinningConditionType_System_Object__get_Count
                      (this_01,
                       MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<ReviveState>__get_Value__
                      );
  if (this_02 == (ReviveState *)0x0) goto code_?;
  bVar1 = ReviveState::ReviveState_get_CanSafelySpawn(this_02,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
    func_?();
  }
  bVar4 = GamePassesManager::GamePassesManager_get_GamePassesActive((MethodInfo *)0x0);
  if (bVar4 == 0) {
code_?:
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?();
    }
    pPVar5 = (PrefabPool *)
             MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
    if (pPVar5 == (PrefabPool *)0x0) goto code_?;
    in_stack_6 = (MethodInfo *)&UNK_?;
    pOVar7 = PrefabPool::PrefabPool_get_CollectTheItemDropOffArrowPrefab(pPVar5,(MethodInfo *)0x0);
    if (pOVar7 == (ObjectiveArrow *)0x0) goto code_?;
    this_03 = BoostController::BoostController_GetActiveBoosts
                        ((BoostController *)pOVar7,(MethodInfo *)0x0);
    if (this_03 == (Dictionary_2_TKey_TValue_ValueCollection_BoostType_Boost_ *)0x0)
    goto code_?;
    iVar8 = mscorlib.dll::System::Collections::Generic::
            Dictionary`2[TKey,TValue]+ValueCollection[WinningConditionType,System::Object]::
            Dictionary_2_TKey_TValue_ValueCollection_WinningConditionType_System_Object__get_Count
                      ((Dictionary_2_TKey_TValue_ValueCollection_WinningConditionType_System_Object_
                        *)this_03,
                       MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<BoostType,_Boost>__get_Count__
                      );
    if (0 < iVar8) goto code_?;
    bVar9 = false;
  }
  else {
    pTVar10 = (in_stack_2->fields).tierHandler;
    if (pTVar10 == (TierBoostStateHandler *)0x0) goto code_?;
    bVar4 = TierBoostStateHandler::TierBoostStateHandler_IsInTempTier(pTVar10,(MethodInfo *)0x0);
    if (bVar4 == 0) goto code_?;
code_?:
    bVar9 = bVar1 == 0;
  }
  iVar11 = (uint)bVar9 << 0x18;
  if ((((uint)(TypeInfo__MVClientSettings->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVClientSettings->_1).cctor_started == 0)) {
    func_?();
  }
  bVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
          Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
          Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__System_Collections_IDictionary_get_IsReadOnly
                    ((Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                      *)0x0,in_stack_6);
  if (bVar4 != 0) {
    if ((((uint)(TypeInfo__MVClientSettings->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVClientSettings->_1).cctor_started == 0)) {
      func_?();
    }
    bVar4 = MVClientSettings::MVClientSettings_get_ReviveEnabled((MethodInfo *)0x0);
    if (((bVar4 != 0) && (bVar1 != 0)) || (bVar9 != false)) {
      DeathUIController_ShowReviveMenu
                (in_stack_2,(bool)((uint)iVar11 >> 0x18),(MethodInfo *)0x0);
      return;
    }
  }
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?();
  }
  this_04 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (this_04 != (MVNetworkGame *)0x0) {
    pPVar5 = (PrefabPool *)MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_04,(MethodInfo *)0x0);
    if (pPVar5 != (PrefabPool *)0x0) {
      pOVar7 = PrefabPool::PrefabPool_get_CollectTheItemDropOffArrowPrefab(pPVar5,(MethodInfo *)0x0)
      ;
      if (pOVar7 != (ObjectiveArrow *)0x0) {
        BoostController::BoostController_RemoveAllBoosts
                  ((BoostController *)pOVar7,(MethodInfo *)0x0);
        pTVar10 = (in_stack_2->fields).tierHandler;
        pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                  *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  (pUVar3,(Object *)in_stack_2,
                   MethodInfo__DeathUIController__OnFinishPreviewTier_bool_,
                   MethodInfo__System__Action<bool>__Action_System__Object__void__);
        if (pTVar10 != (TierBoostStateHandler *)0x0) {
          TierBoostStateHandler::TierBoostStateHandler_StopPreviewTier
                    (pTVar10,(Action_1_Boolean_ *)pUVar3,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
code_?:
  func_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void ReboostNotClicked() */

void Assembly-CSharp.dll::DeathUIController::DeathUIController_ReboostNotClicked
               (DeathUIController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_01 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                      ((MethodInfo *)0x0);
  if (this_01 != (SpawnRoleDataMediator *)0x0) {
    this_02 = (Dictionary_2_TKey_TValue_ValueCollection_WinningConditionType_System_Object_ *)
              System.Core.dll::System::Linq::
              Enumerable+<CreateWhereIterator>c__Iterator1D`1[Newtonsoft::Json::Schema::
              JsonSchemaType]::
              Enumerable_CreateWhereIterator_c_Iterator1D_1_Newtonsoft_Json_Schema_JsonSchemaType__System_Collections_Generic_IEnumerator_TSource__get_Current
                        ((Enumerable_CreateWhereIterator_c_Iterator1D_1_Newtonsoft_Json_Schema_JsonSchemaType_
                          *)this_01,(MethodInfo *)0x0);
    if (this_02 !=
        (Dictionary_2_TKey_TValue_ValueCollection_WinningConditionType_System_Object_ *)0x0) {
      iVar1 = mscorlib.dll::System::Collections::Generic::
              Dictionary`2[TKey,TValue]+ValueCollection[WinningConditionType,System::Object]::
              Dictionary_2_TKey_TValue_ValueCollection_WinningConditionType_System_Object__get_Count
                        (this_02,
                         MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<MV::Common::SpawnRoleModeType>__get_Value__
                        );
      if (iVar1 == 2) {
        if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
          func_?();
        }
        pGVar2 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
        if ((pGVar2 == (GameEventManager *)0x0) ||
           (this_00 = (pGVar2->fields).AvatarCommandsPlayMode,
           this_00 == (GameEventManager_AvatarCommandsPlayModeManager *)0x0)) goto code_?;
        GameEventManager+AvatarCommandsPlayModeManager::
        GameEventManager_AvatarCommandsPlayModeManager_SetToDeadMode(this_00,(MethodInfo *)0x0);
      }
      root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                       ((Component_1 *)this,(MethodInfo *)0x0);
      if (TypeInfo__DeathUIController->static_fields->__f__am_cache0 ==
          (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
        pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                  *)func_?(
                                   TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                                   );
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  (pUVar3,(Object *)0x0,
                   MethodInfo__DeathUIController___ReboostNotClicked_m__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   ,
                   MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
                  );
        TypeInfo__DeathUIController->static_fields->__f__am_cache0 =
             (ExecuteEvents_EventFunction_1_IUIStack_ *)pUVar3;
      }
      callbackFunction =
           (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)
           TypeInfo__DeathUIController->static_fields->__f__am_cache0;
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
      this_03 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if (this_03 != (MVNetworkGame *)0x0) {
        this_04 = (PrefabPool *)
                  MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_03,(MethodInfo *)0x0);
        if (this_04 != (PrefabPool *)0x0) {
          this_05 = PrefabPool::PrefabPool_get_CollectTheItemDropOffArrowPrefab
                              (this_04,(MethodInfo *)0x0);
          if (this_05 != (ObjectiveArrow *)0x0) {
            BoostController::BoostController_RemoveAllBoosts
                      ((BoostController *)this_05,(MethodInfo *)0x0);
            if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
               ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
              func_?(TypeInfo__GamePassesManager);
            }
            bVar4 = GamePassesManager::GamePassesManager_get_GamePassesActive((MethodInfo *)0x0);
            if (bVar4 == 0) {
code_?:
              DeathUIController_ShowBoostMenu(this,(MethodInfo *)0x0);
              return;
            }
            pTVar5 = (this->fields).tierHandler;
            if (pTVar5 != (TierBoostStateHandler *)0x0) {
              bVar4 = TierBoostStateHandler::TierBoostStateHandler_IsInTempTier
                                (pTVar5,(MethodInfo *)0x0);
              if (bVar4 == 0) goto code_?;
              pTVar5 = (this->fields).tierHandler;
              pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                        *)func_?();
              UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
              SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
              UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                        (pUVar3,(Object *)this,
                         MethodInfo__DeathUIController__OnFinishPreviewTier_bool_,
                         MethodInfo__System__Action<bool>__Action_System__Object__void__);
              if (pTVar5 != (TierBoostStateHandler *)0x0) {
                TierBoostStateHandler::TierBoostStateHandler_StopPreviewTier
                          (pTVar5,(Action_1_Boolean_ *)pUVar3,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
    }
  }
code_?:
  func_?(0);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void ReviveNotClicked() */

void Assembly-CSharp.dll::DeathUIController::DeathUIController_ReviveNotClicked
               (DeathUIController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVClientSettings->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVClientSettings->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVClientSettings);
  }
  bVar1 = MVClientSettings::MVClientSettings_get_ReviveEnabled((MethodInfo *)0x0);
  if (bVar1 != 0) {
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    this_02 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                        ((MethodInfo *)0x0);
    if (this_02 == (SpawnRoleDataMediator *)0x0) goto code_?;
    this = (DeathUIController *)
           System.Core.dll::System::Linq::Enumerable+<CreateWhereIterator>c__Iterator1D`1[Newtonsoft
           ::Json::Schema::JsonSchemaType]::
           Enumerable_CreateWhereIterator_c_Iterator1D_1_Newtonsoft_Json_Schema_JsonSchemaType__System_Collections_Generic_IEnumerator_TSource__get_Current
                     ((Enumerable_CreateWhereIterator_c_Iterator1D_1_Newtonsoft_Json_Schema_JsonSchemaType_
                       *)this_02,(MethodInfo *)0x0);
    if (this == (DeathUIController *)0x0) goto code_?;
    iVar2 = mscorlib.dll::System::Collections::Generic::
            Dictionary`2[TKey,TValue]+ValueCollection[WinningConditionType,System::Object]::
            Dictionary_2_TKey_TValue_ValueCollection_WinningConditionType_System_Object__get_Count
                      ((Dictionary_2_TKey_TValue_ValueCollection_WinningConditionType_System_Object_
                        *)this,
                       MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<MV::Common::SpawnRoleModeType>__get_Value__
                      );
    if (iVar2 == 2) {
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?();
      }
      pGVar3 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
      if ((pGVar3 == (GameEventManager *)0x0) ||
         (this_00 = (pGVar3->fields).AvatarCommandsPlayMode,
         this_00 == (GameEventManager_AvatarCommandsPlayModeManager *)0x0)) goto code_?;
      GameEventManager+AvatarCommandsPlayModeManager::
      GameEventManager_AvatarCommandsPlayModeManager_SetToDeadMode(this_00,(MethodInfo *)0x0);
    }
  }
  root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                   ((Component_1 *)this,(MethodInfo *)0x0);
  if (TypeInfo__DeathUIController->static_fields->__f__am_cache1 ==
      (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
    pUVar4 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
             func_?(
                            TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                            );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (pUVar4,(Object *)0x0,
               MethodInfo__DeathUIController___ReviveNotClicked_m__1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,
               MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
              );
    TypeInfo__DeathUIController->static_fields->__f__am_cache1 =
         (ExecuteEvents_EventFunction_1_IUIStack_ *)pUVar4;
  }
  callbackFunction =
       (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)
       TypeInfo__DeathUIController->static_fields->__f__am_cache1;
  if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
       0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy_63
            (root,(BaseEventData *)0x0,callbackFunction,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
            );
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?();
  }
  this_03 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (this_03 != (MVNetworkGame *)0x0) {
    this_04 = (PrefabPool *)MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_03,(MethodInfo *)0x0);
    if (this_04 != (PrefabPool *)0x0) {
      this_05 = PrefabPool::PrefabPool_get_CollectTheItemDropOffArrowPrefab
                          (this_04,(MethodInfo *)0x0);
      if (this_05 != (ObjectiveArrow *)0x0) {
        BoostController::BoostController_RemoveAllBoosts
                  ((BoostController *)this_05,(MethodInfo *)0x0);
        this_01 = (this->fields).tierHandler;
        pUVar4 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                  *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  (pUVar4,(Object *)this,MethodInfo__DeathUIController__OnFinishPreviewTier_bool_,
                   MethodInfo__System__Action<bool>__Action_System__Object__void__);
        if (this_01 != (TierBoostStateHandler *)0x0) {
          TierBoostStateHandler::TierBoostStateHandler_StopPreviewTier
                    (this_01,(Action_1_Boolean_ *)pUVar4,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void SendCurrentProgressNotification() */

void Assembly-CSharp.dll::DeathUIController::DeathUIController_SendCurrentProgressNotification
               (DeathUIController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  uVar1 = GameStatCounterType__Enum_None;
  WinningConditionControl::WinningConditionControl_TryGetPrioritizedStat
            ((GameStatCounterType__Enum *)&stack0xfffffffb,(MethodInfo *)0x0);
  if (uVar1 != GameStatCounterType__Enum_None) {
    data = (Dictionary_2_System_Object_System_Object_ *)
           func_?(
                          TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                          );
    System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
    HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
              ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)data,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
              );
    if ((((uint)(TypeInfo__NotificationController->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__NotificationController->_1).cctor_started == 0)) {
      func_?();
    }
    NotificationController::NotificationController_PushNotification_2
              (NotificationType__Enum_CurrentProgress,data,NotificationLifetime__Enum_High,
               (MethodInfo *)0x0);
  }
  return;
}


/* Boolean ShouldShowTierReward(GamePassTier) */

bool Assembly-CSharp.dll::DeathUIController::DeathUIController_ShouldShowTierReward
               (DeathUIController *this,GamePassTier__Enum tierToShow,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pGVar1 = MVGameControllerBase::MVGameControllerBase_get_GameSessionData((MethodInfo *)0x0);
  if (pGVar1 != (GameSessionData *)0x0) {
    if ((pGVar1->fields).gameMode == 0) {
      return 0;
    }
    if ((((uint)(TypeInfo__TierUnlockedPopupController->vtable).Equals.methodPtr & 0x2000000) != 0)
       && ((TypeInfo__TierUnlockedPopupController->_1).cctor_started == 0)) {
      func_?(TypeInfo__TierUnlockedPopupController);
    }
    bVar2 = TypeInfo__TierUnlockedPopupController->static_fields->HighestTierRewardShown;
    if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
      func_?(TypeInfo__GamePassesManager);
    }
    pPVar3 = GamePassesManager::GamePassesManager_get_PlayerPlanetData((MethodInfo *)0x0);
    if (pPVar3 != (PlayerPlanetData *)0x0) {
      if (bVar2 < (pPVar3->fields).gamePassTier) {
        if ((((uint)(TypeInfo__TierUnlockedPopupController->vtable).Equals.methodPtr & 0x2000000) !=
             0) && ((TypeInfo__TierUnlockedPopupController->_1).cctor_started == 0)) {
          func_?(TypeInfo__TierUnlockedPopupController);
        }
        if (TypeInfo__TierUnlockedPopupController->static_fields->HighestTierRewardShown <
            (byte)(undefined1)tierToShow) {
          if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
            func_?(TypeInfo__GamePassesManager);
          }
          pPVar3 = GamePassesManager::GamePassesManager_get_PlayerPlanetData((MethodInfo *)0x0);
          if (pPVar3 != (PlayerPlanetData *)0x0) {
            return 1 - ((pPVar3->fields).gamePassTier < (byte)(undefined1)tierToShow);
          }
          goto code_?;
        }
      }
      return 0;
    }
  }
code_?:
  func_?(0);
  pcVar4 = (code *)swi(3);
  bVar5 = (*pcVar4)();
  return bVar5;
}


/* Void ShowBoostMenu() */

void Assembly-CSharp.dll::DeathUIController::DeathUIController_ShowBoostMenu
               (DeathUIController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  method_01 = TypeInfo__DeathUIController___ShowBoostMenu_c__AnonStorey2;
  pSVar1 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(pSVar1,0.0,(MethodInfo *)method_01);
  original = (this->fields).boostMenuPrefab;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?();
  }
  pXVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                      ((XpBoostParticlePreviewer *)original,
                       DeathUIBoostMenuController_MethodInfo__UnityEngine__Object__Instantiate<DeathUIBoostMenuController>_DeathUIBoostMenuController_
                      );
  if (pSVar1 == (ScaleAnimationBase *)0x0) {
code_?:
    func_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  (pSVar1->fields)._._._._.m_CachedPtr = pXVar2;
  puVar4 = &UNK_?;
  pGVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                      ((Component_1 *)this,(MethodInfo *)0x0);
  puVar6 = &UNK_?;
  pUVar7 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
            func_?();
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (pUVar7,(Object *)pSVar1,
             MethodInfo__DeathUIController___ShowBoostMenu_c__AnonStorey2____m__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
             ,
             MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
            );
  if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
       0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy_63
            (pGVar5,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_IHandleToolTip_ *)pUVar7,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
            );
  if ((pSVar1->fields)._._._._.m_CachedPtr == (void *)0x0) goto code_?;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__DeathUIBoostMenuController___Initialize_c__AnonStorey0;
  pSVar1 = (ScaleAnimationBase *)
            func_?(TypeInfo__DeathUIBoostMenuController___Initialize_c__AnonStorey0,puVar4
                            ,puVar6);
  ScaleAnimationBase::ScaleAnimationBase_Play(pSVar1,0.0,(MethodInfo *)method_00);
  if (fRam00000054 <= 0.0) {
    if (pCRam00000028 == (Component_1 *)0x0) goto code_?;
    pGVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                        (pCRam00000028,(MethodInfo *)0x0);
    if (pGVar5 == (GameObject *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar5,0,(MethodInfo *)0x0);
    if (pCRam0000000c == (Component_1 *)0x0) goto code_?;
    pGVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                        (pCRam0000000c,(MethodInfo *)0x0);
    if (pGVar5 == (GameObject *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar5,0,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?();
    }
    pSVar8 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                       ((MethodInfo *)0x0);
    if (pSVar8 == (SpawnRoleDataMediator *)0x0) goto code_?;
    this_02 = (Dictionary_2_TKey_TValue_ValueCollection_WinningConditionType_System_Object_ *)
              System.Core.dll::System::Linq::
              Enumerable+<CreateWhereIterator>c__Iterator1D`1[Newtonsoft::Json::Schema::
              JsonSchemaType]::
              Enumerable_CreateWhereIterator_c_Iterator1D_1_Newtonsoft_Json_Schema_JsonSchemaType__System_Collections_Generic_IEnumerator_TSource__get_Current
                        ((Enumerable_CreateWhereIterator_c_Iterator1D_1_Newtonsoft_Json_Schema_JsonSchemaType_
                          *)pSVar8,(MethodInfo *)0x0);
    if (this_02 ==
        (Dictionary_2_TKey_TValue_ValueCollection_WinningConditionType_System_Object_ *)0x0)
    goto code_?;
    iVar9 = mscorlib.dll::System::Collections::Generic::
            Dictionary`2[TKey,TValue]+ValueCollection[WinningConditionType,System::Object]::
            Dictionary_2_TKey_TValue_ValueCollection_WinningConditionType_System_Object__get_Count
                      (this_02,
                       MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<MV::Common::SpawnRoleModeType>__get_Value__
                      );
    if (iVar9 != 4) {
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?();
      }
      pGVar10 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
      if ((pGVar10 == (GameEventManager *)0x0) ||
         (this_00 = (pGVar10->fields).AvatarCommandsPlayMode,
         this_00 == (GameEventManager_AvatarCommandsPlayModeManager *)0x0)) goto code_?;
      GameEventManager+AvatarCommandsPlayModeManager::
      GameEventManager_AvatarCommandsPlayModeManager_SpawnAsGhost(this_00,(MethodInfo *)0x0);
    }
    uRam_? = 1;
  }
  fRam00000050 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  if (pNRam00000014 == (NotificationFade *)0x0) goto code_?;
  NotificationFade::NotificationFade_Activate(pNRam00000014,(MethodInfo *)0x0);
  if (pNRam00000014 == (NotificationFade *)0x0) goto code_?;
  NotificationFade::NotificationFade_set_ShouldHideWhenDone(pNRam00000014,0,(MethodInfo *)0x0);
  if (pERam0000004c == (EmbeddedPlayerConfig *)0x0) goto code_?;
  pEVar11 = EmbeddedPlayerConfig::EmbeddedPlayerConfig_GetCurrentSiteData
                     ((EmbeddedSiteConfigData *)&stack0xfffffff0,pERam0000004c,(MethodInfo *)0x0);
  bVar12 = pEVar11->showTouristPromotion;
  if (pSVar1 == (ScaleAnimationBase *)0x0) goto code_?;
  *(undefined1 *)&(pSVar1->fields)._._._._.m_CachedPtr = 0;
  pGVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                      ((Component_1 *)0x0,(MethodInfo *)0x0);
  pUVar7 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
            func_?();
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (pUVar7,(Object *)pSVar1,
             MethodInfo__DeathUIBoostMenuController___Initialize_c__AnonStorey0____m__0_IDeathPromotionSelector__UnityEngine__EventSystems__BaseEventData_
             ,
             MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IDeathPromotionSelector>__EventFunction_System__Object__void__
            );
  if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
       0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
    func_?();
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy_63
            (pGVar5,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_IHandleToolTip_ *)pUVar7,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<IDeathPromotionSelector>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IDeathPromotionSelector>_
            );
  if (bVar12 == 0) {
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?();
    }
    pIVar13 = MVGameControllerBase::MVGameControllerBase_get_AdManager((MethodInfo *)0x0);
    if (pIVar13 == (IAdManager *)0x0) goto code_?;
    cVar14 = func_?();
    if (cVar14 == '\0') goto code_?;
    cVar14 = *(char *)&(pSVar1->fields)._._._._.m_CachedPtr;
  }
  else {
code_?:
    cVar14 = '\0';
  }
  if (pCRam00000044 != (Component_1 *)0x0) {
    pGVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                        (pCRam00000044,(MethodInfo *)0x0);
    if (pGVar5 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar5,cVar14 != '\0',(MethodInfo *)0x0);
      if (pCRam00000048 != (Component_1 *)0x0) {
        pGVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                            (pCRam00000048,(MethodInfo *)0x0);
        if (pGVar5 != (GameObject *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar5,cVar14 == '\0',(MethodInfo *)0x0);
          if (pCRam00000028 != (Component_1 *)0x0) {
            pGVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                                (pCRam00000028,(MethodInfo *)0x0);
            if (pGVar5 != (GameObject *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                        (pGVar5,cVar14 == '\0',(MethodInfo *)0x0);
              pPVar15 = pPRam00000030;
              pUVar7 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                         *)func_?();
              UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
              SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
              UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                        (pUVar7,(Object *)0x0,MethodInfo__DeathUIBoostMenuController__OnRespawn__,
                         (MethodInfo *)0x0);
              if (pPVar15 != (PointerDownController *)0x0) {
                PointerDownController::PointerDownController_Initialize
                          (pPVar15,(UnityAction *)pUVar7,(MethodInfo *)0x0);
                pPVar15 = pPRam00000034;
                pUVar7 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                           *)func_?();
                UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
                SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
                UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                          (pUVar7,(Object *)0x0,
                           MethodInfo__DeathUIBoostMenuController__OnResetToSpawnPoint__,
                           (MethodInfo *)0x0);
                if (pPVar15 != (PointerDownController *)0x0) {
                  PointerDownController::PointerDownController_Initialize
                            (pPVar15,(UnityAction *)pUVar7,(MethodInfo *)0x0);
                  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000)
                       != 0) && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
                    func_?();
                  }
                  pSVar8 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                                     ((MethodInfo *)0x0);
                  if (pSVar8 != (SpawnRoleDataMediator *)0x0) {
                    this_01 = (pSVar8->fields).SpawnRoleModeTypeWrapper;
                    pUVar7 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                               *)func_?();
                    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
                    SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
                    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                              (pUVar7,(Object *)0x0,
                               MethodInfo__DeathUIBoostMenuController__OnAvatarStateChanged_MV__Common__SpawnRoleModeType_
                               ,
                               MethodInfo__System__Action<MV::Common::SpawnRoleModeType>__Action_System__Object__void__
                              );
                    if (this_01 != (SpawnRoleModeTypeWrapper *)0x0) {
                      SpawnRoleModeTypeWrapper::SpawnRoleModeTypeWrapper_add_OnChange
                                (this_01,(Action_1_MV_Common_SpawnRoleModeType_ *)pUVar7,
                                 (MethodInfo *)0x0);
                      if (pBRam00000038 != (BoostMenuController *)0x0) {
                        BoostMenuController::BoostMenuController_Initialize
                                  (pBRam00000038,(MethodInfo *)0x0);
                        this_03 = MVGameControllerBase::MVGameControllerBase_get_Game
                                            ((MethodInfo *)0x0);
                        if (this_03 != (MVNetworkGame *)0x0) {
                          this_04 = MVNetworkGame::MVNetworkGame_get_LocalPlayer
                                              (this_03,(MethodInfo *)0x0);
                          if (this_04 != (MVLocalPlayer *)0x0) {
                            pMVar16 = MVPlayer::MVPlayer_GetCheckpoint
                                                ((MVPlayer *)this_04,(MethodInfo *)0x0);
                            if (pNRam00000018 != (NotificationFade *)0x0) {
                              NotificationFade::NotificationFade_Activate
                                        (pNRam00000018,(MethodInfo *)0x0);
                              if (pNRam00000018 != (NotificationFade *)0x0) {
                                NotificationFade::NotificationFade_PauseAt
                                          (pNRam00000018,0.0,(MethodInfo *)0x0);
                                if (pGRam0000002c != (GameObject *)0x0) {
                                  UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                  GameObject_SetActive(pGRam0000002c,0,(MethodInfo *)0x0);
                                  if (pMVar16 == (MVCheckpoint *)0x0) {
                                    if (pCRam0000001c != (Component_1 *)0x0) {
                                      pGVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                                Component_1_get_gameObject
                                                          (pCRam0000001c,(MethodInfo *)0x0);
                                      if (pGVar5 != (GameObject *)0x0) {
                                        UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                        GameObject_SetActive(pGVar5,0,(MethodInfo *)0x0);
                                        if (piRam_? != (int *)0x0) {
                                          iVar17 = *piRam_?;
                                          goto code_?;
                                        }
                                      }
                                    }
                                  }
                                  else if (piRam_? != (int *)0x0) {
                                    iVar17 = *piRam_?;
code_?:
                                    (**(code **)(iVar17 + 0x308))();
                                    if ((((uint)(TypeInfo__GamePointGainEffectManager->vtable).
                                                Equals.methodPtr & 0x2000000) != 0) &&
                                       ((TypeInfo__GamePointGainEffectManager->_1).cctor_started ==
                                        0)) {
                                      func_?();
                                    }
                                    GamePointGainEffectManager::
                                    GamePointGainEffectManager_get_GamePointAmountShown
                                              ((MethodInfo *)0x0);
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
code_?:
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void ShowDeadmodeUI() */

void Assembly-CSharp.dll::DeathUIController::DeathUIController_ShowDeadmodeUI
               (DeathUIController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Debug);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
            ((Object *)StringLiteral_ShowDeadmodeUI,(MethodInfo *)0x0);
  root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                   ((Component_1 *)this,(MethodInfo *)0x0);
  if (TypeInfo__DeathUIController->static_fields->__f__am_cache2 ==
      (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
    pUVar1 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
             func_?(
                            TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                            );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (pUVar1,(Object *)0x0,
               MethodInfo__DeathUIController___ShowDeadmodeUI_m__2_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,
               MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
              );
    TypeInfo__DeathUIController->static_fields->__f__am_cache2 =
         (ExecuteEvents_EventFunction_1_IUIStack_ *)pUVar1;
  }
  callbackFunction =
       (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)
       TypeInfo__DeathUIController->static_fields->__f__am_cache2;
  if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
       0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy_63
            (root,(BaseEventData *)0x0,callbackFunction,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
            );
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?();
  }
  this_00 = (Enumerable_CreateGroupByIterator_c_Iterator5_2_System_Object_System_Object_ *)
            MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                      ((MethodInfo *)0x0);
  if (this_00 == (Enumerable_CreateGroupByIterator_c_Iterator5_2_System_Object_System_Object_ *)0x0)
  goto code_?;
  this_01 = (Dictionary_2_TKey_TValue_ValueCollection_WinningConditionType_System_Object_ *)
            System.Core.dll::System::Linq::Enumerable+<CreateGroupByIterator>c__Iterator5`2[System::
            Object,System::Object]::
            Enumerable_CreateGroupByIterator_c_Iterator5_2_System_Object_System_Object__System_Collections_IEnumerator_get_Current
                      (this_00,(MethodInfo *)0x0);
  if (this_01 == (Dictionary_2_TKey_TValue_ValueCollection_WinningConditionType_System_Object_ *)0x0
     ) goto code_?;
  this_02 = (ReviveState *)
            mscorlib.dll::System::Collections::Generic::
            Dictionary`2[TKey,TValue]+ValueCollection[WinningConditionType,System::Object]::
            Dictionary_2_TKey_TValue_ValueCollection_WinningConditionType_System_Object__get_Count
                      (this_01,
                       MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<ReviveState>__get_Value__
                      );
  if (this_02 == (ReviveState *)0x0) goto code_?;
  bVar2 = ReviveState::ReviveState_get_CanSafelySpawn(this_02,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
    func_?();
  }
  bVar3 = GamePassesManager::GamePassesManager_get_GamePassesActive((MethodInfo *)0x0);
  if (bVar3 == 0) {
code_?:
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?();
    }
    pPVar4 = (PrefabPool *)
             MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
    if (pPVar4 == (PrefabPool *)0x0) goto code_?;
    in_stack_5 = (MethodInfo *)&UNK_?;
    pOVar6 = PrefabPool::PrefabPool_get_CollectTheItemDropOffArrowPrefab(pPVar4,(MethodInfo *)0x0);
    if (pOVar6 == (ObjectiveArrow *)0x0) goto code_?;
    this_03 = BoostController::BoostController_GetActiveBoosts
                        ((BoostController *)pOVar6,(MethodInfo *)0x0);
    if (this_03 == (Dictionary_2_TKey_TValue_ValueCollection_BoostType_Boost_ *)0x0)
    goto code_?;
    iVar7 = mscorlib.dll::System::Collections::Generic::
            Dictionary`2[TKey,TValue]+ValueCollection[WinningConditionType,System::Object]::
            Dictionary_2_TKey_TValue_ValueCollection_WinningConditionType_System_Object__get_Count
                      ((Dictionary_2_TKey_TValue_ValueCollection_WinningConditionType_System_Object_
                        *)this_03,
                       MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<BoostType,_Boost>__get_Count__
                      );
    if (0 < iVar7) goto code_?;
    bVar8 = false;
  }
  else {
    pTVar9 = (this->fields).tierHandler;
    if (pTVar9 == (TierBoostStateHandler *)0x0) goto code_?;
    bVar3 = TierBoostStateHandler::TierBoostStateHandler_IsInTempTier(pTVar9,(MethodInfo *)0x0);
    if (bVar3 == 0) goto code_?;
code_?:
    bVar8 = bVar2 == 0;
  }
  bVar3 = bVar8;
  if ((((uint)(TypeInfo__MVClientSettings->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVClientSettings->_1).cctor_started == 0)) {
    func_?();
  }
  bVar10 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
          Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
          Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__System_Collections_IDictionary_get_IsReadOnly
                    ((Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                      *)0x0,in_stack_5);
  if (bVar10 != 0) {
    if ((((uint)(TypeInfo__MVClientSettings->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVClientSettings->_1).cctor_started == 0)) {
      func_?();
    }
    bVar10 = MVClientSettings::MVClientSettings_get_ReviveEnabled((MethodInfo *)0x0);
    if (((bVar10 != 0) && (bVar2 != 0)) || (bVar8 != false)) {
      DeathUIController_ShowReviveMenu(this,bVar3,(MethodInfo *)0x0);
      return;
    }
  }
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?();
  }
  this_04 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (this_04 != (MVNetworkGame *)0x0) {
    pPVar4 = (PrefabPool *)MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_04,(MethodInfo *)0x0);
    if (pPVar4 != (PrefabPool *)0x0) {
      pOVar6 = PrefabPool::PrefabPool_get_CollectTheItemDropOffArrowPrefab(pPVar4,(MethodInfo *)0x0)
      ;
      if (pOVar6 != (ObjectiveArrow *)0x0) {
        BoostController::BoostController_RemoveAllBoosts
                  ((BoostController *)pOVar6,(MethodInfo *)0x0);
        pTVar9 = (this->fields).tierHandler;
        pUVar1 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                  *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  (pUVar1,(Object *)this,MethodInfo__DeathUIController__OnFinishPreviewTier_bool_,
                   MethodInfo__System__Action<bool>__Action_System__Object__void__);
        if (pTVar9 != (TierBoostStateHandler *)0x0) {
          TierBoostStateHandler::TierBoostStateHandler_StopPreviewTier
                    (pTVar9,(Action_1_Boolean_ *)pUVar1,(MethodInfo *)0x0);
          return;
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


/* Void ShowReviveMenu(Boolean) */

void Assembly-CSharp.dll::DeathUIController::DeathUIController_ShowReviveMenu
               (DeathUIController *this,bool reboostOnly,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (reboostOnly == 0) {
    method_00 = TypeInfo__DeathUIController___ShowReviveMenu_c__AnonStorey1;
    pSVar1 = (ScaleAnimationBase *)func_?();
    ScaleAnimationBase::ScaleAnimationBase_Play(pSVar1,0.0,(MethodInfo *)method_00);
    original = (this->fields).reviveHandler;
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    pXVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                       ((XpBoostParticlePreviewer *)original,
                        ReviveUIHandler_MethodInfo__UnityEngine__Object__Instantiate<ReviveUIHandler>_ReviveUIHandler_
                       );
    if (pSVar1 == (ScaleAnimationBase *)0x0) goto code_?;
    (pSVar1->fields)._._._._.m_CachedPtr = pXVar2;
    pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                       ((Component_1 *)this,(MethodInfo *)0x0);
    pUVar4 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
             func_?(
                            TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                            );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (pUVar4,(Object *)pSVar1,
               MethodInfo__DeathUIController___ShowReviveMenu_c__AnonStorey1____m__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,
               MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
              );
    if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
         0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
      func_?();
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy_63
              (pGVar3,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_IHandleToolTip_ *)pUVar4,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
              );
    piVar5 = (pSVar1->fields)._._._._.m_CachedPtr;
    pUVar4 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
             func_?();
    method_1 = MethodInfo__DeathUIController__ReviveNotClicked__;
  }
  else {
    method_01 = TypeInfo__DeathUIController___ShowReviveMenu_c__AnonStorey0;
    pSVar1 = (ScaleAnimationBase *)func_?();
    ScaleAnimationBase::ScaleAnimationBase_Play(pSVar1,0.0,(MethodInfo *)method_01);
    original_00 = (this->fields).reviveHandlerBoosts;
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    pXVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                       ((XpBoostParticlePreviewer *)original_00,
                        ReviveUIHandlerBoosts_MethodInfo__UnityEngine__Object__Instantiate<ReviveUIHandlerBoosts>_ReviveUIHandlerBoosts_
                       );
    if (pSVar1 == (ScaleAnimationBase *)0x0) goto code_?;
    (pSVar1->fields)._._._._.m_CachedPtr = pXVar2;
    pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                       ((Component_1 *)this,(MethodInfo *)0x0);
    pUVar4 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
             func_?(
                            TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                            );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (pUVar4,(Object *)pSVar1,
               MethodInfo__DeathUIController___ShowReviveMenu_c__AnonStorey0____m__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,
               MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
              );
    if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
         0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
      func_?();
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy_63
              (pGVar3,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_IHandleToolTip_ *)pUVar4,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
              );
    piVar5 = (pSVar1->fields)._._._._.m_CachedPtr;
    pUVar4 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
             func_?();
    method_1 = MethodInfo__DeathUIController__ReboostNotClicked__;
  }
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (pUVar4,(Object *)this,method_1,(MethodInfo *)0x0);
  if (piVar5 != (int *)0x0) {
    (**(code **)(*piVar5 + 0xf8))(piVar5,pUVar4,*(undefined4 *)(*piVar5 + 0xfc));
    return;
  }
code_?:
  func_?(0);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void ShowTierUnlockedPopup(Boolean, Boolean) */

void Assembly-CSharp.dll::DeathUIController::DeathUIController_ShowTierUnlockedPopup
               (DeathUIController *this,bool wasPurchased,bool wasTempUnlocked,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__DeathUIController___ShowTierUnlockedPopup_c__AnonStorey3;
  this_00 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,(MethodInfo *)method_00);
  if (this_00 != (ScaleAnimationBase *)0x0) {
    (this_00->fields).state = (int32_t)this;
    pTVar1 = (this->fields).tierUnlockedPopupControllerPrefab;
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    pXVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                       ((XpBoostParticlePreviewer *)pTVar1,
                        TierUnlockedPopupController_MethodInfo__UnityEngine__Object__Instantiate<TierUnlockedPopupController>_TierUnlockedPopupController_
                       );
    (this_00->fields)._._._._.m_CachedPtr = pXVar2;
    root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                     ((Component_1 *)this,(MethodInfo *)0x0);
    this_01 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?(
                             TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                             );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_01,(Object *)this_00,
               MethodInfo__DeathUIController___ShowTierUnlockedPopup_c__AnonStorey3____m__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,
               MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
              );
    if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
         0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy_63
              (root,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_IHandleToolTip_ *)this_01,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
              );
    pTVar1 = (this_00->fields)._._._._.m_CachedPtr;
    if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
      func_?(TypeInfo__GamePassesManager);
    }
    pPVar3 = GamePassesManager::GamePassesManager_get_PlayerPlanetData((MethodInfo *)0x0);
    if ((pPVar3 != (PlayerPlanetData *)0x0) && (pTVar1 != (TierUnlockedPopupController *)0x0)) {
      TierUnlockedPopupController::TierUnlockedPopupController_Initialize
                (pTVar1,(uint)(pPVar3->fields).gamePassTier,wasPurchased,wasTempUnlocked,
                 (MethodInfo *)0x0);
      return;
    }
  }
  func_?(0);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Boolean ShowingClaimGold() */

bool Assembly-CSharp.dll::DeathUIController::DeathUIController_ShowingClaimGold
               (DeathUIController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pGVar1 = MVGameControllerBase::MVGameControllerBase_get_GoldRewardManager((MethodInfo *)0x0);
  if (pGVar1 != (GoldRewardManager *)0x0) {
    bVar2 = GoldRewardManager::GoldRewardManager_CanGetGoldReward(pGVar1,(MethodInfo *)0x0);
    if (bVar2 == 0) {
      return 0;
    }
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?();
    }
    pGVar1 = MVGameControllerBase::MVGameControllerBase_get_GoldRewardManager((MethodInfo *)0x0);
    if (pGVar1 != (GoldRewardManager *)0x0) {
      fVar3 = GoldRewardManager::GoldRewardManager_GetGoldRewardTimeLeft(pGVar1,(MethodInfo *)0x0);
      if (0.0 < fVar3) {
        return 0;
      }
      method_00 = (MethodInfo *)&UNK_?;
      this_00 = (ScaleAnimationBase *)func_?();
      ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,method_00);
      if (this_00 != (ScaleAnimationBase *)0x0) {
        (this_00->fields).state = (int32_t)unaff_EDI;
        pXVar4 = (XpBoostParticlePreviewer *)unaff_EDI[3].monitor;
        if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
          func_?();
        }
        pXVar4 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                           (pXVar4,
                            UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                           );
        (this_00->fields)._._._._.m_CachedPtr = pXVar4;
        root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                         (unaff_EDI,(MethodInfo *)0x0);
        this_01 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                   *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  (this_01,(Object *)this_00,
                   MethodInfo__DeathUIController___ShowingClaimGold_c__AnonStorey4____m__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   ,
                   MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
                  );
        if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
             0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
          func_?();
        }
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
        ExecuteEvents_ExecuteHierarchy_63
                  (root,(BaseEventData *)0x0,
                   (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)this_01,
                   UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                  );
        return 1;
      }
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  bVar2 = (*pcVar5)();
  return bVar2;
}


/* Void StartDeathBriefing(String) */

void Assembly-CSharp.dll::DeathUIController::DeathUIController_StartDeathBriefing
               (DeathUIController *this,String *deathText,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
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
             MethodInfo__DeathUIController___StartDeathBriefing_m__3_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
             ,
             MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
            );
  if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
       0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
    func_?();
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy_63
            (pGVar1,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_IHandleToolTip_ *)this_00,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
            );
  if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
    func_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
            ((Object *)StringLiteral_StartDeathBriefing,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?();
  }
  pIStack2 = MVGameControllerBase::MVGameControllerBase_get_PlayModeUI((MethodInfo *)0x0);
  if (pIStack2 != (IPlayModeUI *)0x0) {
    pTStack3 = (Text *)0x3;
    cVar4 = func_?();
    if (cVar4 != '\0') {
      DeathUIController_ShowDeadmodeUI(this,(MethodInfo *)0x0);
      return;
    }
    fVar5 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
    (this->fields).waitTime = fVar5;
    pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                       ((Component_1 *)this,(MethodInfo *)0x0);
    if (pGVar1 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar1,1,(MethodInfo *)0x0);
      pTVar6 = (this->fields).deathReason;
      if (pTVar6 != (Text *)0x0) {
        pIStack2 =
             (IPlayModeUI *)(pTVar6->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr;
        pTStack3 = pTVar6;
        (*(code *)(pTVar6->klass->vtable).set_text.method)();
        return;
      }
    }
  }
  pIStack2 = (IPlayModeUI *)0x0;
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void TierProgress() */

void Assembly-CSharp.dll::DeathUIController::DeathUIController_TierProgress
               (DeathUIController *this,MethodInfo *method)

{
  pTVar1 = in_stack_2;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
    func_?();
  }
  bVar3 = GamePassesManager::GamePassesManager_get_GamePassesActive((MethodInfo *)0x0);
  if (bVar3 == 0) {
    pTVar1 = (this->fields).tierOnDeathProgress;
    if ((pTVar1 != (TierOnDeathProgress *)0x0) &&
       (pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                            ((Component_1 *)pTVar1,(MethodInfo *)0x0), pGVar4 != (GameObject *)0x0)
       ) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar4,0,(MethodInfo *)0x0);
      return;
    }
code_?:
    func_?();
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__GamePassesManager);
  }
  pPVar6 = GamePassesManager::GamePassesManager_get_PlayerPlanetData((MethodInfo *)0x0);
  if (pPVar6 == (PlayerPlanetData *)0x0) goto code_?;
  uVar7 = (pPVar6->fields).gamePassTier;
  if ((((uint)(TypeInfo__TierUnlockedPopupController->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__TierUnlockedPopupController->_1).cctor_started == 0)) {
    func_?();
  }
  if ((TypeInfo__TierUnlockedPopupController->static_fields->HighestTierRewardShown == uVar7) &&
     (uVar7 == 3)) {
    bVar3 = 0;
  }
  else {
    if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
      func_?();
    }
    pPVar8 = TypeInfo__GamePassesManager->static_fields->playerTierStateCalculator;
    if (pPVar8 == (PlayerTierStateCalculator *)0x0) goto code_?;
    bVar3 = (pPVar8->fields).gamePassRewardsActivated;
  }
  this_00 = (this->fields).tierOnDeathProgress;
  if ((this_00 == (TierOnDeathProgress *)0x0) ||
     (pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                          ((Component_1 *)this_00,(MethodInfo *)0x0), pGVar4 == (GameObject *)0x0))
  goto code_?;
  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
            (pGVar4,bVar3 != 0,(MethodInfo *)0x0);
  if (bVar3 == 0) {
    return;
  }
  if ((this->fields).tierOnDeathProgress == (TierOnDeathProgress *)0x0) goto code_?;
  method = (MethodInfo *)0x0;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  (in_stack_2->fields)._IsShowingTierProgress_k__BackingField = 1;
  if ((((uint)(TypeInfo__GamePointGainEffectManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__GamePointGainEffectManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__GamePointGainEffectManager,in_stack_9);
  }
  iVar10 = GamePointGainEffectManager::GamePointGainEffectManager_get_GamePointAmountShown
                     ((MethodInfo *)0x0);
  fVar11 = TierOnDeathProgress::TierOnDeathProgress_CalculateTotalProgressValue
                     (in_stack_2,iVar10,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
    func_?();
  }
  iVar10 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_FloorToInt
                     (fVar11,(MethodInfo *)0x0);
  (in_stack_2->fields).tierToInterpolateFrom = (float)iVar10;
  if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
    func_?();
  }
  pPVar6 = GamePassesManager::GamePassesManager_get_PlayerPlanetData((MethodInfo *)0x0);
  if (pPVar6 == (PlayerPlanetData *)0x0) {
code_?:
    func_?();
code_?:
    func_?();
    func_?();
code_?:
    func_?();
    func_?();
code_?:
    func_?();
    func_?();
code_?:
    func_?();
    func_?();
code_?:
    func_?();
    func_?();
code_?:
    func_?();
    func_?();
  }
  else {
    fVar11 = TierOnDeathProgress::TierOnDeathProgress_CalculateTotalProgressValue
                       (in_stack_2,(pPVar6->fields).progressionGamePoints,(MethodInfo *)0x0)
    ;
    method = (MethodInfo *)&UNK_?;
    iVar10 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_FloorToInt
                       (fVar11,(MethodInfo *)0x0);
    pTVar12 = (in_stack_2->fields).nextTierText;
    (in_stack_2->fields).tierToInterpolateTo = (float)iVar10;
    method = (MethodInfo *)&UNK_?;
    func_?();
    if (pTVar12 == (Text *)0x0) goto code_?;
    (*(code *)(pTVar12->klass->vtable).set_text.method)();
    args = (Object__Array *)func_?(TypeInfo__System__Object);
    if (args == (Object__Array *)0x0) goto code_?;
    if ((StringLiteral_from_to__ != (String *)0x0) && (iVar13 = func_?(), iVar13 == 0))
    goto code_?;
    if (args->max_length == 0) goto code_?;
    args->vector[0] = (Object *)StringLiteral_from_to__;
    pOVar14 = (Object *)func_?();
    if ((pOVar14 != (Object *)0x0) && (iVar13 = func_?(), iVar13 == 0))
    goto code_?;
    if (args->max_length < 2) goto code_?;
    args->vector[1] = pOVar14;
    if ((StringLiteral____ != (String *)0x0) && (iVar13 = func_?(), iVar13 == 0))
    goto code_?;
    if (args->max_length < 3) goto code_?;
    args->vector[2] = (Object *)StringLiteral____;
    pOVar14 = (Object *)func_?();
    if ((pOVar14 == (Object *)0x0) ||
       (iVar13 = func_?(pOVar14,(args->klass->_0).element_class), iVar13 != 0)) {
      if (args->max_length < 4) goto code_?;
      args->vector[3] = pOVar14;
      if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__String->_1).cctor_started == 0)) {
        func_?(TypeInfo__System__String);
      }
      message = mscorlib.dll::System::String::String_Concat_5(args,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Debug);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                ((Object *)message,(MethodInfo *)0x0);
      fVar15 = (in_stack_2->fields).timeBeforeStartLerp;
      (in_stack_2->fields).timer = fVar15;
      (in_stack_2->fields).crystalTimer = fVar15;
      pPVar6 = GamePassesManager::GamePassesManager_get_PlayerPlanetData((MethodInfo *)0x0);
      if (pPVar6 != (PlayerPlanetData *)0x0) {
        (in_stack_2->fields).currentTier = (pPVar6->fields).gamePassTier;
        iVar10 = GamePointGainEffectManager::GamePointGainEffectManager_get_GamePointAmountShown
                           ((MethodInfo *)0x0);
        pPVar6 = GamePassesManager::GamePassesManager_get_PlayerPlanetData((MethodInfo *)0x0);
        if (pPVar6 != (PlayerPlanetData *)0x0) {
          pTVar12 = (in_stack_2->fields).crystalsGainedSinceDeath;
          iVar13 = (pPVar6->fields).progressionGamePoints - iVar10;
          piVar16 = &(in_stack_2->fields).crystalValue;
          *piVar16 = iVar13;
          (in_stack_2->fields).currentCrystalValue = (float)iVar13;
          func_?();
          if (pTVar12 != (Text *)0x0) {
            (*(code *)(pTVar12->klass->vtable).set_text.method)();
            pPVar6 = GamePassesManager::GamePassesManager_get_PlayerPlanetData((MethodInfo *)0x0);
            if ((pPVar6 != (PlayerPlanetData *)0x0) &&
               (pPVar8 = TypeInfo__GamePassesManager->static_fields->playerTierStateCalculator,
               pPVar8 != (PlayerTierStateCalculator *)0x0)) {
              pTVar17 = &in_stack_2->fields;
              in_stack_2._1_3_ = (undefined3)((uint)fVar11 >> 8);
              in_stack_2 =
                   (TierOnDeathProgress *)CONCAT31(in_stack_2._1_3_,pTVar17->currentTier);
              this_04 = MVWorldObject.dll::MV::WorldObject::GamePassSystem::
                        PlayerTierStateCalculator::PlayerTierStateCalculator_GetTierPricingState
                                  (pPVar8,(pPVar6->fields).progressionGamePoints,
                                   (GamePassTier__Enum)in_stack_2,(MethodInfo *)0x0);
              (pTVar1->fields).currentGamePoints = *piVar16;
              if (this_04 !=
                  (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierState_
                   *)0x0) {
                in_stack_2 =
                     (TierOnDeathProgress *)
                     CONCAT31(in_stack_2._1_3_,(pTVar1->fields).currentTier);
                pOVar14 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::Common::
                          GamePassTier,System::Object]::
                          Dictionary_2_MV_Common_GamePassTier_System_Object__get_Item
                                    ((Dictionary_2_MV_Common_GamePassTier_System_Object_ *)this_04,
                                     (GamePassTier__Enum)in_stack_2,
                                     MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                                    );
                if (pOVar14 != (Object *)0x0) {
                  iVar10 = *piVar16;
                  (pTVar1->fields).gamePointsRequired = (int32_t)pOVar14[3].klass;
                  iVar10 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Clamp_1
                                     ((pTVar1->fields).currentGamePoints,0,iVar10,(MethodInfo *)0x0)
                  ;
                  (pTVar1->fields).currentGamePoints = iVar10;
                  this_01 = (pTVar1->fields).lockImage;
                  if ((this_01 != (RectTransform *)0x0) &&
                     (pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                Component_1_get_gameObject((Component_1 *)this_01,(MethodInfo *)0x0)
                     , pGVar4 != (GameObject *)0x0)) {
                    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                              (pGVar4,1,(MethodInfo *)0x0);
                    this_02 = (pTVar1->fields).unlockImage;
                    if ((this_02 != (CanvasGroup *)0x0) &&
                       (pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                  Component_1_get_gameObject
                                            ((Component_1 *)this_02,(MethodInfo *)0x0),
                       pGVar4 != (GameObject *)0x0)) {
                      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                                (pGVar4,0,(MethodInfo *)0x0);
                      (pTVar1->fields).intensity = 0.0;
                      if (*piVar16 != 0) {
                        (pTVar1->fields).intensity = 1.0;
                      }
                      this_03 = (Transform *)(pTVar1->fields).lockImage;
                      if (this_03 != (Transform *)0x0) {
                        UnityEngine.CoreModule.dll::UnityEngine::Transform::
                        Transform_get_localRotation((Quaternion *)&method,this_03,(MethodInfo *)0x0)
                        ;
                        puVar18 = (undefined8 *)func_?();
                        uVar19 = *puVar18;
                        fVar11 = *(float *)(puVar18 + 1);
                        (pTVar1->fields).lockStartRot.x = (float)(int)uVar19;
                        (pTVar1->fields).lockStartRot.y = (float)(int)((ulonglong)uVar19 >> 0x20);
                        (pTVar1->fields).lockStartRot.z = fVar11;
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
      goto code_?;
    }
  }
  uVar20 = func_?(0,0);
  func_?(uVar20);
code_?:
  uVar20 = func_?(0,0);
  func_?(uVar20);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::DeathUIController::DeathUIController_Update
               (DeathUIController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  fVar1 = (this->fields).waitTime;
  fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  if (fVar2 <= fVar1) {
    return;
  }
  if ((this->fields).isDeathBriefActive == 0) {
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    this_00 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if ((this_00 == (MVNetworkGame *)0x0) ||
       (this_01 = (SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
                   *)InventoryItemPreviewer::InventoryItemPreviewer_get_PreviewGameObject
                               ((InventoryItemPreviewer *)this_00,(MethodInfo *)0x0),
       this_01 ==
       (SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
        *)0x0)) goto code_?;
    pOVar3 = System.dll::System::Collections::Generic::
             SortedList`2[TKey,TValue]+ListValues[TKey,TValue]+GetEnumerator>c__Iterator3[System::
             Single,System::Object]::
             SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object__System_Collections_IEnumerator_get_Current
                       (this_01,(MethodInfo *)0x0);
    if (pOVar3 != (Object *)0x2) {
      (this->fields).isDeathBriefActive = 1;
      DeathUIController_TierProgress(this,(MethodInfo *)0x0);
      pNVar4 = (this->fields).fader;
      if ((pNVar4 == (NotificationFade *)0x0) ||
         (pGVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                             ((Component_1 *)pNVar4,(MethodInfo *)0x0), pGVar5 == (GameObject *)0x0)
         ) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar5,1,(MethodInfo *)0x0);
      pNVar4 = (this->fields).fader;
      if (pNVar4 == (NotificationFade *)0x0) goto code_?;
      NotificationFade::NotificationFade_Activate(pNVar4,(MethodInfo *)0x0);
    }
  }
  pTVar6 = (this->fields).tierOnDeathProgress;
  if ((pTVar6 != (TierOnDeathProgress *)0x0) &&
     (pGVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                         ((Component_1 *)pTVar6,(MethodInfo *)0x0), pGVar5 != (GameObject *)0x0)) {
    bVar7 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeInHierarchy
                      (pGVar5,(MethodInfo *)0x0);
    if (bVar7 == 0) {
      return;
    }
    pTVar6 = (this->fields).tierOnDeathProgress;
    if (pTVar6 != (TierOnDeathProgress *)0x0) {
      bVar7 = TierOnDeathProgress::TierOnDeathProgress_get_IsShowingTierProgress
                        (pTVar6,(MethodInfo *)0x0);
      pNVar4 = (this->fields).fader;
      if (bVar7 == 0) {
        if (pNVar4 != (NotificationFade *)0x0) {
          bVar7 = NotificationFade::NotificationFade_get_IsPaused(pNVar4,(MethodInfo *)0x0);
          if (bVar7 != 0) {
            pNVar4 = (this->fields).fader;
            if (pNVar4 == (NotificationFade *)0x0) goto code_?;
            NotificationFade::NotificationFade_Unpause(pNVar4,(MethodInfo *)0x0);
          }
          return;
        }
      }
      else if (pNVar4 != (NotificationFade *)0x0) {
        NotificationFade::NotificationFade_PauseAt(pNVar4,0.99,(MethodInfo *)0x0);
        return;
      }
    }
  }
code_?:
  func_?(0);
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void <ReboostNotClicked>m__0(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::DeathUIController::DeathUIController__ReboostNotClicked_m__0
               (IUIStack *x,BaseEventData *y,MethodInfo *method)

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


/* Void <ReviveNotClicked>m__1(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::DeathUIController::DeathUIController__ReviveNotClicked_m__1
               (IUIStack *x,BaseEventData *y,MethodInfo *method)

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


/* Void <ShowDeadmodeUI>m__2(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::DeathUIController::DeathUIController__ShowDeadmodeUI_m__2
               (IUIStack *x,BaseEventData *y,MethodInfo *method)

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


/* Void <StartDeathBriefing>m__3(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::DeathUIController::DeathUIController__StartDeathBriefing_m__3
               (DeathUIController *this,IUIStack *x,BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pXVar1 = (XpBoostParticlePreviewer *)(this->fields).invisibleBlocker;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  pXVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                     (pXVar1,
                      UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                     );
  if (x != (IUIStack *)0x0) {
    func_?(1,TypeInfo__UnityEngine__EventSystems__IUIStack,x,pXVar1,0x14,0);
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

