
/* Void Awake() */

void Assembly-CSharp.dll::DeathUIController::DeathUIController_Awake
               (DeathUIController *this,MethodInfo *method)

{
  this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                      ((Component *)this,(MethodInfo *)0x0);
  if (this_01 == (GameObject *)0x0) goto code_?;
  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
            (this_01,0,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?(&
                    MethodInfo__DeathUIController__OnAvatarStateChanged_MV__Common__SpawnRoleModeType_
                   );
    func_?(&MethodInfo__DeathUIController__OnFadeFinished__);
    func_?(&MethodInfo__DeathUIController__OnLocalAvatarSuicide__);
    func_?(&
                    MethodInfo__DeathUIController__OnLocalPlayerKilled_int__int__MV__Common__PlayerKilledByType_
                   );
    func_?(&MethodInfo__DeathUIController__OnRoundEnd_IWinningCondition_);
    cRam_? = '\x01';
  }
  pSVar1 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                     ((MethodInfo *)0x0);
  this_02 = (Action_3_Int32_Int32_ByteEnum_ *)func_?();
  mscorlib.dll::System::Action`3[Int32,Int32,ByteEnum]::Action_3_Int32_Int32_ByteEnum___ctor
            (this_02,in_stack_2,
             MethodInfo__DeathUIController__OnLocalPlayerKilled_int__int__MV__Common__PlayerKilledByType_
             ,(MethodInfo *)0x0);
  if (pSVar1 == (SpawnRoleDataMediator *)0x0) goto code_?;
  Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::Mediator::SpawnRoleDataMediator::
  SpawnRoleDataMediator_add_OnKilled
            (pSVar1,(Action_3_Int32_Int32_MV_Common_PlayerKilledByType_ *)this_02,(MethodInfo *)0x0)
  ;
  pSVar1 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                     ((MethodInfo *)0x0);
  if (pSVar1 == (SpawnRoleDataMediator *)0x0) goto code_?;
  this_00 = (pSVar1->fields).SpawnRoleModeTypeWrapper;
  this_03 = (UnityAction_1_System_Int32Enum_ *)func_?();
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
  UnityAction_1_System_Int32Enum___ctor
            (this_03,in_stack_2,
             MethodInfo__DeathUIController__OnAvatarStateChanged_MV__Common__SpawnRoleModeType_,
             (MethodInfo *)0x0);
  if (this_00 == (SpawnRoleModeTypeWrapper *)0x0) goto code_?;
  SpawnRoleModeTypeWrapper::SpawnRoleModeTypeWrapper_add_OnChange
            (this_00,(Action_1_MV_Common_SpawnRoleModeType_ *)this_03,(MethodInfo *)0x0);
  pFVar3 = MVGameControllerBase::MVGameControllerBase_get_FlagDebriefingControl((MethodInfo *)0x0);
  if (pFVar3 == (FlagDebriefingControl *)0x0) goto code_?;
  pAVar4 = (pFVar3->fields).OnFlagDebriefingEnd;
  pNVar5 = (NavMesh_OnNavMeshPreUpdate *)func_?();
  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
  NavMesh_OnNavMeshPreUpdate__ctor
            (pNVar5,in_stack_2,MethodInfo__DeathUIController__EndDeathBriefing__,
             (MethodInfo *)0x0);
  pAVar4 = (Action *)
           mscorlib.dll::System::Delegate::Delegate_Combine
                     ((Delegate *)pAVar4,(Delegate *)pNVar5,(MethodInfo *)0x0);
  if (pAVar4 == (Action *)0x0) {
    (pFVar3->fields).OnFlagDebriefingEnd = (Action *)0x0;
code_?:
    func_?();
    pMVar6 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (pMVar6 == (MVNetworkGame *)0x0) goto code_?;
    pAVar7 = (pMVar6->fields).OnWinningConditionFulfilled;
    this_04 = (DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
               *)func_?();
    DictionaryWithChangeEvent`2[TKey,TValue]+OnDictionaryChangeDelegate[Unity::IL2CPP::Metadata::
    __Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]::
    DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
              (this_04,in_stack_2,
               MethodInfo__DeathUIController__OnRoundEnd_IWinningCondition_,(MethodInfo *)0x0);
    pDVar8 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)pAVar7,(Delegate *)this_04,(MethodInfo *)0x0);
    if (pDVar8 == (Delegate *)0x0) {
      (pMVar6->fields).OnWinningConditionFulfilled = (Action_1_IWinningCondition_ *)0x0;
code_?:
      func_?();
      pSVar1 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                         ((MethodInfo *)0x0);
      pNVar5 = (NavMesh_OnNavMeshPreUpdate *)func_?();
      UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
      NavMesh_OnNavMeshPreUpdate__ctor
                (pNVar5,in_stack_2,MethodInfo__DeathUIController__OnLocalAvatarSuicide__,
                 (MethodInfo *)0x0);
      if (pSVar1 == (SpawnRoleDataMediator *)0x0) {
code_?:
        uVar9 = func_?(&stack0xfffffff8);
        func_?(uVar9);
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::Mediator::SpawnRoleDataMediator::
      SpawnRoleDataMediator_add_OnSuicide(pSVar1,(Action *)pNVar5,(MethodInfo *)0x0);
      pMVar11 = in_stack_2[2].monitor;
      if (pMVar11 == (MonitorData *)0x0) goto code_?;
      pDVar8 = *(Delegate **)(pMVar11 + 0x2c);
      pNVar5 = (NavMesh_OnNavMeshPreUpdate *)func_?();
      UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
      NavMesh_OnNavMeshPreUpdate__ctor
                (pNVar5,in_stack_2,MethodInfo__DeathUIController__OnFadeFinished__,
                 (MethodInfo *)0x0);
      pDVar8 = mscorlib.dll::System::Delegate::Delegate_Combine
                         (pDVar8,(Delegate *)pNVar5,(MethodInfo *)0x0);
      if (pDVar8 == (Delegate *)0x0) {
        *(undefined4 *)(pMVar11 + 0x2c) = 0;
        func_?();
        return;
      }
      pDVar12 = (Delegate *)0x0;
      if ((Action__Class *)pDVar8->klass == TypeInfo__System__Action) {
        pDVar12 = pDVar8;
      }
      if (pDVar12 != (Delegate *)0x0) {
        *(Delegate **)(pMVar11 + 0x2c) = pDVar12;
        pDVar12 = (Delegate *)0x0;
        if ((Action__Class *)pDVar8->klass == TypeInfo__System__Action) {
          pDVar12 = pDVar8;
        }
        if (pDVar12 != (Delegate *)0x0) {
          func_?();
          return;
        }
        goto code_?;
      }
      goto code_?;
    }
    pAVar7 = (Action_1_IWinningCondition_ *)func_?();
    if (pAVar7 == (Action_1_IWinningCondition_ *)0x0) goto code_?;
    (pMVar6->fields).OnWinningConditionFulfilled = pAVar7;
    iVar13 = func_?();
    if (iVar13 != 0) goto code_?;
  }
  else {
    pAVar14 = (Action *)0x0;
    if (pAVar4->klass == TypeInfo__System__Action) {
      pAVar14 = pAVar4;
    }
    if (pAVar14 != (Action *)0x0) {
      (pFVar3->fields).OnFlagDebriefingEnd = pAVar14;
      pAVar14 = (Action *)0x0;
      if (pAVar4->klass == TypeInfo__System__Action) {
        pAVar14 = pAVar4;
      }
      if (pAVar14 != (Action *)0x0) goto code_?;
code_?:
      func_?();
    }
code_?:
    func_?();
  }
  func_?();
code_?:
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void EndDeathBriefing() */

void Assembly-CSharp.dll::DeathUIController::DeathUIController_EndDeathBriefing
               (DeathUIController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  pNVar1 = (this->fields).fader;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)pNVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    pNVar1 = (this->fields).fader;
    if (pNVar1 == (NotificationFade *)0x0) goto code_?;
    NotificationFade::NotificationFade_OnDisable(pNVar1,(MethodInfo *)0x0);
    pNVar1 = (this->fields).fader;
    if (pNVar1 == (NotificationFade *)0x0) goto code_?;
    pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)pNVar1,(MethodInfo *)0x0);
    if (pGVar3 == (GameObject *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar3,0,(MethodInfo *)0x0);
  }
  pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)pGVar3,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this,(MethodInfo *)0x0);
    if (pGVar3 == (GameObject *)0x0) {
code_?:
      func_?();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar3,0,(MethodInfo *)0x0);
  }
  (this->fields).isDeathBriefActive = 0;
  return;
}


/* String ExtractWeaponName(Int32, PlayerKilledByType) */

String * Assembly-CSharp.dll::DeathUIController::DeathUIController_ExtractWeaponName
                   (DeathUIController *this,int32_t dmgDealerActorNr,
                   PlayerKilledByType__Enum damageType,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVAvatar);
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&TypeInfo__PickupItemEditable);
    func_?(&::StringLiteral__);
    cRam_? = '\x01';
  }
  if (((undefined1)damageType != PlayerKilledByType__Enum_MeleeWeapon) &&
     ((undefined1)damageType != PlayerKilledByType__Enum_CustomGun)) {
    return ::StringLiteral__;
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((pMVar1 != (MVNetworkGame *)0x0) &&
     (this_00 = (pMVar1->fields).playerContainer, this_00 != (MVPlayerContainer *)0x0)) {
    pMVar2 = MVPlayerContainer::MVPlayerContainer_GetPlayerUnsafe
                       (this_00,dmgDealerActorNr,(MethodInfo *)0x0);
    this_02 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if ((pMVar2 != (MVPlayer *)0x0) &&
       (((this_01 = (pMVar2->fields).spawnRolesManager, this_01 != (SpawnRolesManager *)0x0 &&
         (id = System.dll::System::Net::WebCompletionSource`1[System::Object]::
               WebCompletionSource_1_System_Object__get_Task
                         ((WebCompletionSource_1_System_Object_ *)this_01,(MethodInfo *)0x0),
         this_02 != (MVWorldObjectClientManager *)0x0)) &&
        (this_03 = (MVAvatar *)
                   MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                             (this_02,(int32_t)id,(MethodInfo *)0x0), this_03 != (MVAvatar *)0x0))))
    {
      bVar3 = (TypeInfo__MVAvatar->_1).naturalAligment;
      if ((bVar3 <= (this_03->klass->_1).naturalAligment) &&
         ((MVAvatar__Class *)(this_03->klass->_1).typeHierarchy[bVar3 - 1] == TypeInfo__MVAvatar)) {
        x = MVAvatar::MVAvatar_get_CurrentPickup(this_03,(MethodInfo *)0x0);
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        bVar4 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                          ((Object_1 *)x,(Object_1 *)0x0,(MethodInfo *)0x0);
        if (bVar4 != 0) {
          return ::StringLiteral__;
        }
        if (x == (PickupItem *)0x0) {
          return ::StringLiteral__;
        }
        bVar3 = (TypeInfo__PickupItemEditable->_1).naturalAligment;
        if ((x->klass->_1).naturalAligment < bVar3) {
          return ::StringLiteral__;
        }
        if ((PickupItemEditable__Class *)(x->klass->_1).typeHierarchy[bVar3 - 1] !=
            TypeInfo__PickupItemEditable) {
          return ::StringLiteral__;
        }
        pIStack5 = x->klass[1]._0.declaringType;
        pPStack6 = x;
        pSVar7 = (String *)(*(code *)x->klass[1]._0.castClass)();
        return pSVar7;
      }
      goto code_?;
    }
  }
  func_?();
code_?:
  func_?();
  pcVar8 = (code *)swi(3);
  pSVar7 = (String *)(*pcVar8)();
  return pSVar7;
}


/* Void Initialize() */

void Assembly-CSharp.dll::DeathUIController::DeathUIController_Initialize
               (DeathUIController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<MV::Common::SpawnRoleModeType>);
    func_?(&TypeInfo__System__Action<IWinningCondition>);
    func_?(&TypeInfo__System__Action<int,_int,_MV::Common::PlayerKilledByType>);
    func_?(&TypeInfo__System__Action);
    func_?(&MethodInfo__DeathUIController__EndDeathBriefing__);
    func_?(&
                    MethodInfo__DeathUIController__OnAvatarStateChanged_MV__Common__SpawnRoleModeType_
                   );
    func_?(&MethodInfo__DeathUIController__OnFadeFinished__);
    func_?(&MethodInfo__DeathUIController__OnLocalAvatarSuicide__);
    func_?(&
                    MethodInfo__DeathUIController__OnLocalPlayerKilled_int__int__MV__Common__PlayerKilledByType_
                   );
    func_?(&MethodInfo__DeathUIController__OnRoundEnd_IWinningCondition_);
    cRam_? = '\x01';
  }
  pSVar1 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                     ((MethodInfo *)0x0);
  this_01 = (Action_3_Int32_Int32_ByteEnum_ *)
            func_?(TypeInfo__System__Action<int,_int,_MV::Common::PlayerKilledByType>);
  mscorlib.dll::System::Action`3[Int32,Int32,ByteEnum]::Action_3_Int32_Int32_ByteEnum___ctor
            (this_01,(Object *)this,
             MethodInfo__DeathUIController__OnLocalPlayerKilled_int__int__MV__Common__PlayerKilledByType_
             ,(MethodInfo *)0x0);
  if (pSVar1 == (SpawnRoleDataMediator *)0x0) {
code_?:
    func_?();
code_?:
    func_?();
code_?:
    func_?();
  }
  else {
    Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::Mediator::SpawnRoleDataMediator::
    SpawnRoleDataMediator_add_OnKilled
              (pSVar1,(Action_3_Int32_Int32_MV_Common_PlayerKilledByType_ *)this_01,
               (MethodInfo *)0x0);
    pSVar1 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                       ((MethodInfo *)0x0);
    if (pSVar1 == (SpawnRoleDataMediator *)0x0) goto code_?;
    pAStack2 = TypeInfo__System__Action<MV::Common::SpawnRoleModeType>;
    this_00 = (pSVar1->fields).SpawnRoleModeTypeWrapper;
    this_02 = (UnityAction_1_System_Int32Enum_ *)func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
    UnityAction_1_System_Int32Enum___ctor
              (this_02,(Object *)this,
               MethodInfo__DeathUIController__OnAvatarStateChanged_MV__Common__SpawnRoleModeType_,
               (MethodInfo *)0x0);
    if (this_00 == (SpawnRoleModeTypeWrapper *)0x0) goto code_?;
    SpawnRoleModeTypeWrapper::SpawnRoleModeTypeWrapper_add_OnChange
              (this_00,(Action_1_MV_Common_SpawnRoleModeType_ *)this_02,(MethodInfo *)0x0);
    pFVar3 = MVGameControllerBase::MVGameControllerBase_get_FlagDebriefingControl((MethodInfo *)0x0)
    ;
    if (pFVar3 == (FlagDebriefingControl *)0x0) goto code_?;
    pAStack2 = (Action_1_MV_Common_SpawnRoleModeType___Class *)TypeInfo__System__Action;
    pAVar4 = (pFVar3->fields).OnFlagDebriefingEnd;
    pNVar5 = (NavMesh_OnNavMeshPreUpdate *)func_?();
    puVar6 = &UNK_?;
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (pNVar5,(Object *)this,MethodInfo__DeathUIController__EndDeathBriefing__,
               (MethodInfo *)0x0);
    pDVar7 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)pAVar4,(Delegate *)pNVar5,(MethodInfo *)0x0);
    if (pDVar7 != (Delegate *)0x0) {
      pDVar8 = (Delegate *)0x0;
      if ((Action__Class *)pDVar7->klass == TypeInfo__System__Action) {
        pDVar8 = pDVar7;
      }
      if (pDVar8 != (Delegate *)0x0) {
        *(Delegate **)(puVar6 + 0x18) = pDVar8;
        pDVar8 = (Delegate *)0x0;
        if ((Action__Class *)pDVar7->klass == TypeInfo__System__Action) {
          pDVar8 = pDVar7;
        }
        if (pDVar8 != (Delegate *)0x0) goto code_?;
        goto code_?;
      }
      goto code_?;
    }
    *(undefined4 *)(puVar6 + 0x18) = 0;
code_?:
    func_?();
    pMVar9 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (pMVar9 == (MVNetworkGame *)0x0) goto code_?;
    pAStack2 =
         (Action_1_MV_Common_SpawnRoleModeType___Class *)TypeInfo__System__Action<IWinningCondition>
    ;
    a = (pMVar9->fields).OnWinningConditionFulfilled;
    this_03 = (DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
               *)func_?();
    puVar6 = &UNK_?;
    DictionaryWithChangeEvent`2[TKey,TValue]+OnDictionaryChangeDelegate[Unity::IL2CPP::Metadata::
    __Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]::
    DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
              (this_03,(Object *)this,MethodInfo__DeathUIController__OnRoundEnd_IWinningCondition_,
               (MethodInfo *)0x0);
    pDVar7 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)this_03,(MethodInfo *)0x0);
    if (pDVar7 == (Delegate *)0x0) {
      *(undefined4 *)(puVar6 + 0xc0) = 0;
code_?:
      func_?();
      pSVar1 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                         ((MethodInfo *)0x0);
      pNVar5 = (NavMesh_OnNavMeshPreUpdate *)func_?();
      UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
      NavMesh_OnNavMeshPreUpdate__ctor
                (pNVar5,(Object *)this,MethodInfo__DeathUIController__OnLocalAvatarSuicide__,
                 (MethodInfo *)0x0);
      if (pSVar1 != (SpawnRoleDataMediator *)0x0) {
        Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::Mediator::SpawnRoleDataMediator
        ::SpawnRoleDataMediator_add_OnSuicide(pSVar1,(Action *)pNVar5,(MethodInfo *)0x0);
        pNVar10 = (this->fields).fader;
        if (pNVar10 != (NotificationFade *)0x0) {
          pAStack2 = (Action_1_MV_Common_SpawnRoleModeType___Class *)TypeInfo__System__Action
          ;
          pAVar4 = (pNVar10->fields).OnFinished;
          pNVar5 = (NavMesh_OnNavMeshPreUpdate *)func_?();
          puVar6 = &UNK_?;
          UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
          NavMesh_OnNavMeshPreUpdate__ctor
                    (pNVar5,(Object *)this,MethodInfo__DeathUIController__OnFadeFinished__,
                     (MethodInfo *)0x0);
          pDVar7 = mscorlib.dll::System::Delegate::Delegate_Combine
                             ((Delegate *)pAVar4,(Delegate *)pNVar5,(MethodInfo *)0x0);
          if (pDVar7 == (Delegate *)0x0) {
            *(undefined4 *)(puVar6 + 0x2c) = 0;
            func_?();
            return;
          }
          pDVar8 = (Delegate *)0x0;
          if ((Action__Class *)pDVar7->klass == TypeInfo__System__Action) {
            pDVar8 = pDVar7;
          }
          if (pDVar8 != (Delegate *)0x0) {
            *(Delegate **)(puVar6 + 0x2c) = pDVar8;
            pDVar8 = (Delegate *)0x0;
            if ((Action__Class *)pDVar7->klass == TypeInfo__System__Action) {
              pDVar8 = pDVar7;
            }
            if (pDVar8 != (Delegate *)0x0) {
              func_?();
              return;
            }
            goto code_?;
          }
          goto code_?;
        }
      }
      goto code_?;
    }
    iVar11 = func_?();
    if (iVar11 == 0) goto code_?;
    *(int *)(puVar6 + 0xc0) = iVar11;
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


/* Void NotReviving() */

void Assembly-CSharp.dll::DeathUIController::DeathUIController_NotReviving
               (DeathUIController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<bool>);
    func_?(&MethodInfo__DeathUIController__OnFinishPreviewTier_bool_);
    cRam_? = '\x01';
  }
  this_02 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (this_02 != (MVNetworkGame *)0x0) {
    pMVar1 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_02,(MethodInfo *)0x0);
    if ((pMVar1 != (MVLocalPlayer *)0x0) &&
       (this_00 = (pMVar1->fields).boostController, this_00 != (BoostController *)0x0)) {
      BoostController::BoostController_RemoveAllBoosts(this_00,(MethodInfo *)0x0);
      this_01 = unaff_EBX[6].klass;
      this_03 = (UnityAction_1_System_Int32Enum_ *)func_?(TypeInfo__System__Action<bool>);
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
      UnityAction_1_System_Int32Enum___ctor
                (this_03,unaff_EBX,MethodInfo__DeathUIController__OnFinishPreviewTier_bool_,
                 (MethodInfo *)0x0);
      if (this_01 != (Object__Class *)0x0) {
        TierBoostStateHandler::TierBoostStateHandler_StopPreviewTier
                  ((TierBoostStateHandler *)this_01,(Action_1_Boolean_ *)this_03,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
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
    func_?(&TypeInfo__System__Action<MV::Common::SpawnRoleModeType>);
    func_?(&TypeInfo__System__Action<IWinningCondition>);
    func_?(&TypeInfo__System__Action<int,_int,_MV::Common::PlayerKilledByType>);
    func_?(&TypeInfo__System__Action);
    func_?(&MethodInfo__DeathUIController__EndDeathBriefing__);
    func_?(&
                    MethodInfo__DeathUIController__OnAvatarStateChanged_MV__Common__SpawnRoleModeType_
                   );
    func_?(&MethodInfo__DeathUIController__OnFadeFinished__);
    func_?(&MethodInfo__DeathUIController__OnLocalAvatarSuicide__);
    func_?(&
                    MethodInfo__DeathUIController__OnLocalPlayerKilled_int__int__MV__Common__PlayerKilledByType_
                   );
    func_?(&MethodInfo__DeathUIController__OnRoundEnd_IWinningCondition_);
    cRam_? = '\x01';
  }
  bVar1 = MVGameControllerBase::MVGameControllerBase_get_IsAlive((MethodInfo *)0x0);
  if (bVar1 == 0) {
    return;
  }
  pSVar2 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                     ((MethodInfo *)0x0);
  pNVar3 = (NavMesh_OnNavMeshPreUpdate *)func_?(TypeInfo__System__Action);
  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
  NavMesh_OnNavMeshPreUpdate__ctor
            (pNVar3,(Object *)this,MethodInfo__DeathUIController__OnLocalAvatarSuicide__,
             (MethodInfo *)0x0);
  if (pSVar2 == (SpawnRoleDataMediator *)0x0) {
code_?:
    func_?();
code_?:
    func_?();
code_?:
    func_?();
  }
  else {
    Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::Mediator::SpawnRoleDataMediator::
    SpawnRoleDataMediator_remove_OnSuicide(pSVar2,(Action *)pNVar3,(MethodInfo *)0x0);
    pSVar2 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                       ((MethodInfo *)0x0);
    this_01 = (Action_3_Int32_Int32_ByteEnum_ *)func_?();
    mscorlib.dll::System::Action`3[Int32,Int32,ByteEnum]::Action_3_Int32_Int32_ByteEnum___ctor
              (this_01,(Object *)this,
               MethodInfo__DeathUIController__OnLocalPlayerKilled_int__int__MV__Common__PlayerKilledByType_
               ,(MethodInfo *)0x0);
    if (pSVar2 == (SpawnRoleDataMediator *)0x0) goto code_?;
    Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::Mediator::SpawnRoleDataMediator::
    SpawnRoleDataMediator_remove_OnKilled
              (pSVar2,(Action_3_Int32_Int32_MV_Common_PlayerKilledByType_ *)this_01,
               (MethodInfo *)0x0);
    pSVar2 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                       ((MethodInfo *)0x0);
    if (pSVar2 == (SpawnRoleDataMediator *)0x0) goto code_?;
    this_00 = (pSVar2->fields).SpawnRoleModeTypeWrapper;
    this_02 = (UnityAction_1_System_Int32Enum_ *)func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
    UnityAction_1_System_Int32Enum___ctor
              (this_02,(Object *)this,
               MethodInfo__DeathUIController__OnAvatarStateChanged_MV__Common__SpawnRoleModeType_,
               (MethodInfo *)0x0);
    if (this_00 == (SpawnRoleModeTypeWrapper *)0x0) goto code_?;
    SpawnRoleModeTypeWrapper::SpawnRoleModeTypeWrapper_remove_OnChange
              (this_00,(Action_1_MV_Common_SpawnRoleModeType_ *)this_02,(MethodInfo *)0x0);
    pFVar4 = MVGameControllerBase::MVGameControllerBase_get_FlagDebriefingControl((MethodInfo *)0x0)
    ;
    if (pFVar4 == (FlagDebriefingControl *)0x0) goto code_?;
    pAVar5 = (pFVar4->fields).OnFlagDebriefingEnd;
    pNVar3 = (NavMesh_OnNavMeshPreUpdate *)func_?();
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (pNVar3,(Object *)this,MethodInfo__DeathUIController__EndDeathBriefing__,
               (MethodInfo *)0x0);
    pDVar6 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)pAVar5,(Delegate *)pNVar3,(MethodInfo *)0x0);
    if (pDVar6 != (Delegate *)0x0) {
      pDVar7 = (Delegate *)0x0;
      if ((Action__Class *)pDVar6->klass == TypeInfo__System__Action) {
        pDVar7 = pDVar6;
      }
      if (pDVar7 != (Delegate *)0x0) {
        (pNVar3->fields)._._.delegate_trampoline = pDVar7;
        pDVar7 = (Delegate *)0x0;
        if ((Action__Class *)pDVar6->klass == TypeInfo__System__Action) {
          pDVar7 = pDVar6;
        }
        if (pDVar7 != (Delegate *)0x0) goto code_?;
        goto code_?;
      }
      goto code_?;
    }
    (pNVar3->fields)._._.delegate_trampoline = (void *)0x0;
code_?:
    func_?();
    pMVar8 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (pMVar8 == (MVNetworkGame *)0x0) goto code_?;
    source = (pMVar8->fields).OnWinningConditionFulfilled;
    this_03 = (DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
               *)func_?();
    DictionaryWithChangeEvent`2[TKey,TValue]+OnDictionaryChangeDelegate[Unity::IL2CPP::Metadata::
    __Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]::
    DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
              (this_03,(Object *)this,MethodInfo__DeathUIController__OnRoundEnd_IWinningCondition_,
               (MethodInfo *)0x0);
    pDVar6 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)this_03,(MethodInfo *)0x0);
    if (pDVar6 == (Delegate *)0x0) {
      this_03[3].klass =
           (DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___Class
            *)0x0;
code_?:
      func_?();
      pNVar9 = (this->fields).fader;
      if (pNVar9 != (NotificationFade *)0x0) {
        pAVar5 = (pNVar9->fields).OnFinished;
        pNVar3 = (NavMesh_OnNavMeshPreUpdate *)func_?();
        UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
        NavMesh_OnNavMeshPreUpdate__ctor
                  (pNVar3,(Object *)this,MethodInfo__DeathUIController__OnFadeFinished__,
                   (MethodInfo *)0x0);
        pDVar6 = mscorlib.dll::System::Delegate::Delegate_Remove
                           ((Delegate *)pAVar5,(Delegate *)pNVar3,(MethodInfo *)0x0);
        if (pDVar6 == (Delegate *)0x0) {
          (pNVar3->fields)._._.method_info = (MethodInfo_1 *)0x0;
          func_?();
          return;
        }
        pDVar7 = (Delegate *)0x0;
        if ((Action__Class *)pDVar6->klass == TypeInfo__System__Action) {
          pDVar7 = pDVar6;
        }
        if (pDVar7 != (Delegate *)0x0) {
          (pNVar3->fields)._._.method_info = (MethodInfo_1 *)pDVar7;
          pDVar7 = (Delegate *)0x0;
          if ((Action__Class *)pDVar6->klass == TypeInfo__System__Action) {
            pDVar7 = pDVar6;
          }
          if (pDVar7 != (Delegate *)0x0) {
            func_?();
            return;
          }
          goto code_?;
        }
        goto code_?;
      }
      goto code_?;
    }
    pDVar10 = (DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___Class
               *)func_?();
    if (pDVar10 ==
        (DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___Class
         *)0x0) goto code_?;
    this_03[3].klass = pDVar10;
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


/* Void OnDisable() */

void Assembly-CSharp.dll::DeathUIController::DeathUIController_OnDisable
               (DeathUIController *this,MethodInfo *method)

{
  pNVar1 = (this->fields).fader;
  if (pNVar1 != (NotificationFade *)0x0) {
    (pNVar1->fields).pauseAt = 0.0;
    pNVar1 = (this->fields).fader;
    if (pNVar1 != (NotificationFade *)0x0) {
      NotificationFade::NotificationFade_OnDisable(pNVar1,(MethodInfo *)0x0);
      pNVar1 = (this->fields).fader;
      if (pNVar1 != (NotificationFade *)0x0) {
        this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)pNVar1,(MethodInfo *)0x0);
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
    func_?(&TypeInfo__IPlayModeUI);
    cRam_? = '\x01';
  }
  pNVar1 = (this->fields).fader;
  if ((pNVar1 != (NotificationFade *)0x0) &&
     (pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)pNVar1,(MethodInfo *)0x0), pGVar2 != (GameObject *)0x0)) {
    bVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                      (pGVar2,(MethodInfo *)0x0);
    if (bVar3 == 0) {
      return;
    }
    pNVar1 = (this->fields).fader;
    if ((pNVar1 != (NotificationFade *)0x0) &&
       (pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)pNVar1,(MethodInfo *)0x0), pGVar2 != (GameObject *)0x0))
    {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar2,0,(MethodInfo *)0x0);
      (this->fields).isDeathBriefActive = 0;
      pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)this,(MethodInfo *)0x0);
      if (pGVar2 != (GameObject *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar2,0,(MethodInfo *)0x0);
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        pIVar4 = TypeInfo__MVGameControllerBase->static_fields->_PlayModeUI_k__BackingField;
        if (pIVar4 != (IPlayModeUI *)0x0) {
          cVar5 = func_?(3,TypeInfo__IPlayModeUI,pIVar4);
          if (cVar5 == '\0') {
            if (cRam_? == '\0') {
              func_?(&TypeInfo__GamePassesManager);
              cRam_? = '\x01';
            }
            if (TypeInfo__GamePassesManager->static_fields->_GamePassesActive_k__BackingField != 0)
            {
              if (cRam_? == '\0') {
                func_?(&TypeInfo__GamePassesManager);
                cRam_? = '\x01';
              }
              pPVar6 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
              if (pPVar6 != (PlayerPlanetData *)0x0) {
                bVar7 = (pPVar6->fields).gamePassTier;
                if (cRam_? == '\0') {
                  func_?(&TypeInfo__TierUnlockedPopupController);
                  cRam_? = '\x01';
                }
                if (cRam_? == '\0') {
                  func_?(&TypeInfo__MVGameControllerBase);
                  cRam_? = '\x01';
                }
                pGVar8 = TypeInfo__MVGameControllerBase->static_fields->
                         _GameSessionData_k__BackingField;
                if (pGVar8 != (GameSessionData *)0x0) {
                  if ((pGVar8->fields).gameMode == 0) goto code_?;
                  bVar9 = TypeInfo__TierUnlockedPopupController->static_fields->
                          HighestTierRewardShown;
                  if (cRam_? == '\0') {
                    func_?(&TypeInfo__GamePassesManager);
                    cRam_? = '\x01';
                  }
                  pPVar6 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
                  if (pPVar6 != (PlayerPlanetData *)0x0) {
                    if (((pPVar6->fields).gamePassTier <= bVar9) ||
                       (bVar7 <= TypeInfo__TierUnlockedPopupController->static_fields->
                                 HighestTierRewardShown)) goto code_?;
                    if (cRam_? == '\0') {
                      func_?(&TypeInfo__GamePassesManager);
                      cRam_? = '\x01';
                    }
                    pPVar6 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
                    if (pPVar6 != (PlayerPlanetData *)0x0) {
                      if ((pPVar6->fields).gamePassTier < bVar7) goto code_?;
                      if (cRam_? == '\0') {
                        func_?(&
                                        TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                                       );
                        func_?(&
                                        UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                                       );
                        func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
                        func_?(&
                                        TierUnlockedPopupController_MethodInfo__UnityEngine__Object__Instantiate<TierUnlockedPopupController>_TierUnlockedPopupController_
                                       );
                        func_?(&TypeInfo__UnityEngine__Object);
                        func_?(&
                                        MethodInfo__DeathUIController____c__DisplayClass28_0___ShowTierUnlockedPopup_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                                       );
                        func_?(&TypeInfo__DeathUIController____c__DisplayClass28_0);
                        cRam_? = '\x01';
                      }
                      method_00 = (MethodInfo *)&UNK_?;
                      value = (Object *)
                              func_?(TypeInfo__DeathUIController____c__DisplayClass28_0);
                      mscorlib.dll::System::ThrowHelper::
                      ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                                (value,ExceptionArgument__Enum_obj,method_00);
                      if (value != (Object *)0x0) {
                        value[1].monitor = (MonitorData *)this;
                        func_?(&value[1].monitor,this);
                        original = (this->fields).tierUnlockedPopupControllerPrefab;
                        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
                          func_?(TypeInfo__UnityEngine__Object);
                        }
                        pOVar10 = (Object__Class *)
                                  UnityEngine.CoreModule.dll::UnityEngine::Object::
                                  Object_1_Instantiate_4
                                            ((Object *)original,
                                             TierUnlockedPopupController_MethodInfo__UnityEngine__Object__Instantiate<TierUnlockedPopupController>_TierUnlockedPopupController_
                                            );
                        pOVar11 = value + 1;
                        pOVar11->klass = pOVar10;
                        func_?(pOVar11,pOVar10);
                        pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                  Component_get_gameObject((Component *)this,(MethodInfo *)0x0);
                        callbackFunction =
                             (ExecuteEvents_EventFunction_1_System_Object_ *)
                             func_?(
                                            TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                                            );
                        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::
                        Object,System::Object]::UnityAction_2_System_Object_System_Object___ctor
                                  ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,
                                   value,
                                   MethodInfo__DeathUIController____c__DisplayClass28_0___ShowTierUnlockedPopup_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                                   ,(MethodInfo *)0x0);
                        if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).
                            cctor_finished_or_no_cctor == 0) {
                          func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
                        }
                        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                        ExecuteEvents_ExecuteHierarchy
                                  (pGVar2,(BaseEventData *)0x0,callbackFunction,
                                   UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                                  );
                        pOVar10 = pOVar11->klass;
                        if (cRam_? == '\0') {
                          func_?(&TypeInfo__GamePassesManager);
                          cRam_? = '\x01';
                        }
                        pPVar6 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
                        if ((pPVar6 != (PlayerPlanetData *)0x0) && (pOVar10 != (Object__Class *)0x0)
                           ) {
                          TierUnlockedPopupController::TierUnlockedPopupController_Initialize
                                    ((TierUnlockedPopupController *)pOVar10,
                                     (uint)(pPVar6->fields).gamePassTier,0,0,(MethodInfo *)0x0);
                          return;
                        }
                      }
                    }
                  }
                }
              }
              goto code_?;
            }
          }
code_?:
          bVar3 = DeathUIController_ShowingClaimGold(this,(MethodInfo *)0x0);
          if (bVar3 != 0) {
            return;
          }
          DeathUIController_ShowDeadmodeUI(this,(MethodInfo *)0x0);
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
    func_?(&StringLiteral_Respawning__);
    cRam_? = '\x01';
  }
  pFVar1 = MVGameControllerBase::MVGameControllerBase_get_FlagDebriefingControl((MethodInfo *)0x0);
  if (pFVar1 != (FlagDebriefingControl *)0x0) {
    if ((pFVar1->fields).IsInFlagDebriefing != 0) {
      return;
    }
    pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this,(MethodInfo *)0x0);
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
  func_?();
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
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MV::WorldObject::MVTeam>__get_Count__
                   );
    func_?(&TypeInfo__System__Object);
    func_?(&TypeInfo__Styles);
    cRam_? = '\x01';
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (((pMVar1 == (MVNetworkGame *)0x0) ||
      (this_00 = (pMVar1->fields).teamManager, this_00 == (MVTeamManager *)0x0)) ||
     (pLVar2 = MVTeamManager::MVTeamManager_GetTeamList(this_00,(MethodInfo *)0x0),
     pLVar2 == (List_1_MV_WorldObject_MVTeam_ *)0x0)) {
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
  }
  else {
    if (1 < (pLVar2->fields)._size) {
      pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if (((pMVar1 != (MVNetworkGame *)0x0) &&
          (pMVar3 = (pMVar1->fields).playerContainer, pMVar3 != (MVPlayerContainer *)0x0)) &&
         (pMVar4 = MVPlayerContainer::MVPlayerContainer_get_Item
                             (pMVar3,localPlayerActorNr,(MethodInfo *)0x0),
         pMVar4 != (MVPlayer *)0x0)) {
        team = (pMVar4->fields)._Team_k__BackingField;
        if ((TypeInfo__Styles->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        pCVar5 = Styles::Styles_GetTeamColor((Color *)&stack0xffffffdc,team,0,(MethodInfo *)0x0);
        fStack_6 = pCVar5->r;
        pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if ((pMVar1 != (MVNetworkGame *)0x0) &&
           (pMVar3 = (pMVar1->fields).playerContainer, pMVar3 != (MVPlayerContainer *)0x0)) {
          pMVar4 = MVPlayerContainer::MVPlayerContainer_get_Item
                             (pMVar3,dmgDealerActorNr,(MethodInfo *)0x0);
          if (pMVar4 != (MVPlayer *)0x0) {
            this = (DeathUIController *)0x0;
            puVar7 = &UNK_?;
            Styles::Styles_GetTeamColor
                      ((Color *)&stack0xffffffdc,(pMVar4->fields)._Team_k__BackingField,0,
                       (MethodInfo *)0x0);
            goto code_?;
          }
        }
      }
      goto code_?;
    }
    if ((TypeInfo__Styles->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__Styles);
    }
    pCVar5 = Styles::Styles_GetColor
                       ((Color *)&stack0xffffffdc,ColorStyle__Enum_Gray,(MethodInfo *)0x0);
    fStack_6 = pCVar5->r;
    puStack_8 = (undefined *)pCVar5->g;
    pMVar3 = (MVPlayerContainer *)pCVar5->b;
    puVar7 = (undefined *)pCVar5->a;
    Styles::Styles_GetColor((Color *)&stack0xffffffdc,ColorStyle__Enum_Gray,(MethodInfo *)0x0);
code_?:
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if ((pMVar1 == (MVNetworkGame *)0x0) ||
       (pMVar9 = (pMVar1->fields).playerContainer, pMVar9 == (MVPlayerContainer *)0x0))
    goto code_?;
    method_00 = (MethodInfo *)0x0;
    pMVar4 = MVPlayerContainer::MVPlayerContainer_get_Item
                       (pMVar9,localPlayerActorNr,(MethodInfo *)0x0);
    if ((pMVar4 == (MVPlayer *)0x0) ||
       (pUVar10 = (pMVar4->fields)._UserProfileData_k__BackingField, pUVar10 == (UserProfileData *)0x0
       )) goto code_?;
    pSVar11 = (pUVar10->fields).UserName;
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if ((((pMVar1 == (MVNetworkGame *)0x0) ||
         (pMVar9 = (pMVar1->fields).playerContainer, pMVar9 == (MVPlayerContainer *)0x0)) ||
        (pMVar4 = MVPlayerContainer::MVPlayerContainer_get_Item
                            (pMVar9,dmgDealerActorNr,(MethodInfo *)0x0), pMVar4 == (MVPlayer *)0x0))
       || (pUVar10 = (pMVar4->fields)._UserProfileData_k__BackingField,
          pUVar10 == (UserProfileData *)0x0)) goto code_?;
    pSVar12 = (pUVar10->fields).UserName;
    pSVar13 = DeathUIController_ExtractWeaponName(this,dmgDealerActorNr,damageType,(MethodInfo *)0x0)
    ;
    pSVar13 = KillNotification::KillNotification_GetKillText_1
                       (damageType,localPlayerActorNr == dmgDealerActorNr,pSVar13,(MethodInfo *)0x0);
    method_01 = (MethodInfo *)&UNK_?;
    args = (Object__Array *)func_?();
    c.g = (float)puStack_8;
    c.r = fStack_6;
    c.b = (float)pMVar3;
    c.a = (float)puVar7;
    CVar14 = UnityEngine.CoreModule.dll::UnityEngine::Color32::Color32_op_Implicit
                       (c,(MethodInfo *)0x0);
    if ((TypeInfo__Styles->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    fVar15 = 0.0;
    pSVar16 = Styles::Styles_ColorToHex((Color32)((ulonglong)CVar14 & 0xffffffff),method_01);
    if (args == (Object__Array *)0x0) goto code_?;
    if ((pSVar16 != (String *)0x0) && (iVar17 = func_?(), iVar17 == 0))
    goto code_?;
    if (args->max_length == 0) goto code_?;
    args->vector[0] = (Object *)pSVar16;
    func_?();
    if ((pSVar11 != (String *)0x0) && (iVar17 = func_?(), iVar17 == 0))
    goto code_?;
    if (args->max_length < 2) goto code_?;
    ppOVar18 = args->vector + 1;
    *ppOVar18 = (Object *)pSVar11;
    puVar7 = &UNK_?;
    func_?();
    c_00.g = (float)puVar7;
    c_00.r = fVar15;
    c_00.b = (float)ppOVar18;
    c_00.a = (float)pSVar11;
    CVar14 = UnityEngine.CoreModule.dll::UnityEngine::Color32::Color32_op_Implicit
                       (c_00,(MethodInfo *)0x0);
    pSVar11 = Styles::Styles_ColorToHex((Color32)((ulonglong)CVar14 & 0xffffffff),method_00);
    if ((pSVar11 != (String *)0x0) && (iVar17 = func_?(), iVar17 == 0))
    goto code_?;
    if (args->max_length < 3) goto code_?;
    args->vector[2] = (Object *)pSVar11;
    func_?();
    if ((pSVar12 == (String *)0x0) || (iVar17 = func_?(), iVar17 != 0)) {
      if (args->max_length < 4) goto code_?;
      args->vector[3] = (Object *)pSVar12;
      func_?();
      pSVar11 = mscorlib.dll::System::String::String_Format_3(pSVar13,args,(MethodInfo *)0x0);
      pFVar19 = MVGameControllerBase::MVGameControllerBase_get_FlagDebriefingControl
                          ((MethodInfo *)0x0);
      if (pFVar19 != (FlagDebriefingControl *)0x0) {
        if ((pFVar19->fields).IsInFlagDebriefing != 0) {
          return;
        }
        this_01 = (this->fields).deathMessageBar;
        if (this_01 != (GameObject *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (this_01,1,(MethodInfo *)0x0);
          DeathUIController_StartDeathBriefing(this,pSVar11,(MethodInfo *)0x0);
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
  pcVar20 = (code *)swi(3);
  (*pcVar20)();
  return;
}


/* Void OnPressPlay() */

void Assembly-CSharp.dll::DeathUIController::DeathUIController_OnPressPlay
               (DeathUIController *this,MethodInfo *method)

{
  MVGameControllerDesktop::MVGameControllerDesktop_CursorLock(1,0,(MethodInfo *)0x0);
  pGVar1 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
  if ((pGVar1 != (GameEventManager *)0x0) &&
     (this_00 = (pGVar1->fields).AvatarCommandsPlayMode,
     this_00 != (GameEventManager_AvatarCommandsPlayModeManager *)0x0)) {
    GoogleMobileAds.dll::GoogleMobileAds::Api::RewardedAd::RewardedAd__RegisterAdEvents_m__7
              ((RewardedAd *)this_00,(MethodInfo *)0x0);
    return;
  }
  func_?();
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
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
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&
                    MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<ReviveState>__get_Value__
                   );
    func_?(&
                    MethodInfo__DeathUIController____c___ShowDeadmodeUI_b__31_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__DeathUIController____c);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<BoostType,_Boost>__get_Count__
                   );
    cRam_? = '\x01';
  }
  root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                   ((Component *)in_stack_2,(MethodInfo *)0x0);
  pGVar3 = root;
  if ((TypeInfo__DeathUIController____c->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__DeathUIController____c);
  }
  callbackFunction = TypeInfo__DeathUIController____c->static_fields->__9__31_0;
  if (callbackFunction == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
    root = pGVar3;
    if ((TypeInfo__DeathUIController____c->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__DeathUIController____c);
      root = pGVar3;
    }
    object = TypeInfo__DeathUIController____c->static_fields->__9;
    callbackFunction =
         (ExecuteEvents_EventFunction_1_IUIStack_ *)
         func_?(
                        TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                        );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)object,
               MethodInfo__DeathUIController____c___ShowDeadmodeUI_b__31_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    TypeInfo__DeathUIController____c->static_fields->__9__31_0 = callbackFunction;
    func_?(&TypeInfo__DeathUIController____c->static_fields->__9__31_0,callbackFunction);
  }
  if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
            (root,(BaseEventData *)0x0,
             (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
            );
  pSVar4 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                     ((MethodInfo *)0x0);
  if ((pSVar4 == (SpawnRoleDataMediator *)0x0) ||
     (this_00 = (WebCompletionSource_1_System_Object_ *)(pSVar4->fields).reviveState,
     this_00 == (WebCompletionSource_1_System_Object_ *)0x0)) goto code_?;
  this_01 = System.dll::System::Net::WebCompletionSource`1[System::Object]::
            WebCompletionSource_1_System_Object__get_Task
                      (this_00,
                       MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<ReviveState>__get_Value__
                      );
  if (this_01 == (Task *)0x0) goto code_?;
  bVar1 = ReviveState::ReviveState_get_CanSafelySpawn((ReviveState *)this_01,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if (TypeInfo__GamePassesManager->static_fields->_GamePassesActive_k__BackingField == 0) {
code_?:
    pMVar5 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
    if ((pMVar5 == (MVLocalPlayer *)0x0) ||
       (pBVar6 = (pMVar5->fields).boostController, pBVar6 == (BoostController *)0x0))
    goto code_?;
    this_02 = (Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
               *)BoostController::BoostController_GetActiveBoosts(pBVar6,(MethodInfo *)0x0);
    if (this_02 ==
        (Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
         *)0x0) goto code_?;
    iVar7 = mscorlib.dll::System::Collections::Generic::
            Dictionary`2[TKey,TValue]+ValueCollection[UnityEngine::UIElements::StyleSheets::
            StyleSheetCache+SheetHandleKey,System::Object]::
            Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__get_Count
                      (this_02,
                       MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<BoostType,_Boost>__get_Count__
                      );
    if (0 < iVar7) goto code_?;
    bVar8 = false;
  }
  else {
    pTVar9 = (in_stack_2->fields).tierHandler;
    if (pTVar9 == (TierBoostStateHandler *)0x0) goto code_?;
    bVar10 = TierBoostStateHandler::TierBoostStateHandler_IsInTempTier(pTVar9,(MethodInfo *)0x0);
    if (bVar10 == 0) goto code_?;
code_?:
    bVar8 = bVar1 == 0;
  }
  bVar1 = bVar8;
  bVar10 = MVClientSettings::MVClientSettings_get_RewardedAdsEnabled((MethodInfo *)0x0);
  if (bVar10 == 0) {
    bVar10 = MVClientSettings::MVClientSettings_get_IsSubscriber((MethodInfo *)0x0);
    if (bVar10 != 0) goto code_?;
  }
  else {
code_?:
    bVar10 = MVClientSettings::MVClientSettings_get_ReviveEnabled((MethodInfo *)0x0);
    if ((bVar10 & 0x10) != 0 || bVar8 != false) {
      DeathUIController_ShowReviveMenu(in_stack_2,bVar1,(MethodInfo *)0x0);
      return;
    }
  }
  if (cRam_? == '\0') {
    func_?();
    func_?();
    cRam_? = '\x01';
  }
  this_03 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (this_03 != (MVNetworkGame *)0x0) {
    pMVar5 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_03,(MethodInfo *)0x0);
    if ((pMVar5 != (MVLocalPlayer *)0x0) &&
       (pBVar6 = (pMVar5->fields).boostController, pBVar6 != (BoostController *)0x0)) {
      BoostController::BoostController_RemoveAllBoosts(pBVar6,(MethodInfo *)0x0);
      pTVar9 = (in_stack_2->fields).tierHandler;
      this_04 = (UnityAction_1_System_Int32Enum_ *)func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
      UnityAction_1_System_Int32Enum___ctor
                (this_04,(Object *)in_stack_2,
                 MethodInfo__DeathUIController__OnFinishPreviewTier_bool_,(MethodInfo *)0x0);
      if (pTVar9 != (TierBoostStateHandler *)0x0) {
        TierBoostStateHandler::TierBoostStateHandler_StopPreviewTier
                  (pTVar9,(Action_1_Boolean_ *)this_04,(MethodInfo *)0x0);
        return;
      }
    }
  }
code_?:
  func_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void ReboostNotClicked() */

void Assembly-CSharp.dll::DeathUIController::DeathUIController_ReboostNotClicked
               (DeathUIController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<bool>);
    func_?(&MethodInfo__DeathUIController__OnFinishPreviewTier_bool_);
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&
                    MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<MV::Common::SpawnRoleModeType>__get_Value__
                   );
    func_?(&
                    MethodInfo__DeathUIController____c___ReboostNotClicked_b__21_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__DeathUIController____c);
    cRam_? = '\x01';
  }
  pSVar1 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                     ((MethodInfo *)0x0);
  if ((pSVar1 != (SpawnRoleDataMediator *)0x0) &&
     (this_00 = (WebCompletionSource_1_System_Object_ *)(pSVar1->fields).spawnRoleMode,
     this_00 != (WebCompletionSource_1_System_Object_ *)0x0)) {
    pTVar2 = System.dll::System::Net::WebCompletionSource`1[System::Object]::
             WebCompletionSource_1_System_Object__get_Task
                       (this_00,
                        MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<MV::Common::SpawnRoleModeType>__get_Value__
                       );
    if (pTVar2 == (Task *)0x2) {
      pGVar3 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
      if ((pGVar3 == (GameEventManager *)0x0) ||
         (this_01 = (pGVar3->fields).AvatarCommandsPlayMode,
         this_01 == (GameEventManager_AvatarCommandsPlayModeManager *)0x0)) goto code_?;
      GameEventManager+AvatarCommandsPlayModeManager::
      GameEventManager_AvatarCommandsPlayModeManager_SetToDeadMode(this_01,(MethodInfo *)0x0);
    }
    root = (ExecuteEvents_EventFunction_1_IUIStack_ *)
           UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
    if ((TypeInfo__DeathUIController____c->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__DeathUIController____c);
    }
    callbackFunction = TypeInfo__DeathUIController____c->static_fields->__9__21_0;
    if (callbackFunction == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
      if ((TypeInfo__DeathUIController____c->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__DeathUIController____c);
      }
      object = TypeInfo__DeathUIController____c->static_fields->__9;
      callbackFunction =
           (ExecuteEvents_EventFunction_1_IUIStack_ *)
           func_?(
                          TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                          );
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)object,
                 MethodInfo__DeathUIController____c___ReboostNotClicked_b__21_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      TypeInfo__DeathUIController____c->static_fields->__9__21_0 = callbackFunction;
      root = callbackFunction;
      func_?(&TypeInfo__DeathUIController____c->static_fields->__9__21_0);
    }
    if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
              ((GameObject *)root,(BaseEventData *)0x0,
               (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
              );
    this_03 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (this_03 != (MVNetworkGame *)0x0) {
      pMVar4 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_03,(MethodInfo *)0x0);
      if ((pMVar4 != (MVLocalPlayer *)0x0) &&
         (this_02 = (pMVar4->fields).boostController, this_02 != (BoostController *)0x0)) {
        BoostController::BoostController_RemoveAllBoosts(this_02,(MethodInfo *)0x0);
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        if (TypeInfo__GamePassesManager->static_fields->_GamePassesActive_k__BackingField == 0) {
code_?:
          DeathUIController_ShowBoostMenu(this,(MethodInfo *)0x0);
          return;
        }
        pTVar5 = (this->fields).tierHandler;
        if (pTVar5 != (TierBoostStateHandler *)0x0) {
          bVar6 = TierBoostStateHandler::TierBoostStateHandler_IsInTempTier
                            (pTVar5,(MethodInfo *)0x0);
          if (bVar6 == 0) goto code_?;
          pTVar5 = (this->fields).tierHandler;
          this_04 = (UnityAction_1_System_Int32Enum_ *)func_?();
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
          UnityAction_1_System_Int32Enum___ctor
                    (this_04,(Object *)this,MethodInfo__DeathUIController__OnFinishPreviewTier_bool_
                     ,(MethodInfo *)0x0);
          if (pTVar5 != (TierBoostStateHandler *)0x0) {
            TierBoostStateHandler::TierBoostStateHandler_StopPreviewTier
                      (pTVar5,(Action_1_Boolean_ *)this_04,(MethodInfo *)0x0);
            return;
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


/* Void ReviveNotClicked() */

void Assembly-CSharp.dll::DeathUIController::DeathUIController_ReviveNotClicked
               (DeathUIController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<bool>);
    func_?(&MethodInfo__DeathUIController__OnFinishPreviewTier_bool_);
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&
                    MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<MV::Common::SpawnRoleModeType>__get_Value__
                   );
    func_?(&
                    MethodInfo__DeathUIController____c___ReviveNotClicked_b__22_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__DeathUIController____c);
    cRam_? = '\x01';
  }
  bVar1 = MVClientSettings::MVClientSettings_get_ReviveEnabled((MethodInfo *)0x0);
  if (bVar1 != 0) {
    pSVar2 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                       ((MethodInfo *)0x0);
    if ((pSVar2 == (SpawnRoleDataMediator *)0x0) ||
       (this_00 = (WebCompletionSource_1_System_Object_ *)(pSVar2->fields).spawnRoleMode,
       this_00 == (WebCompletionSource_1_System_Object_ *)0x0)) goto code_?;
    pTVar3 = System.dll::System::Net::WebCompletionSource`1[System::Object]::
             WebCompletionSource_1_System_Object__get_Task
                       (this_00,
                        MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<MV::Common::SpawnRoleModeType>__get_Value__
                       );
    if (pTVar3 == (Task *)0x2) {
      pGVar4 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
      if ((pGVar4 == (GameEventManager *)0x0) ||
         (this = (DeathUIController *)(pGVar4->fields).AvatarCommandsPlayMode,
         this == (DeathUIController *)0x0)) goto code_?;
      GameEventManager+AvatarCommandsPlayModeManager::
      GameEventManager_AvatarCommandsPlayModeManager_SetToDeadMode
                ((GameEventManager_AvatarCommandsPlayModeManager *)this,(MethodInfo *)0x0);
    }
  }
  root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                   ((Component *)this,(MethodInfo *)0x0);
  if ((TypeInfo__DeathUIController____c->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  callbackFunction = TypeInfo__DeathUIController____c->static_fields->__9__22_0;
  if (callbackFunction == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
    if ((TypeInfo__DeathUIController____c->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    object = TypeInfo__DeathUIController____c->static_fields->__9;
    callbackFunction = (ExecuteEvents_EventFunction_1_IUIStack_ *)func_?();
    root = (GameObject *)&UNK_?;
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)object,
               MethodInfo__DeathUIController____c___ReviveNotClicked_b__22_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    TypeInfo__DeathUIController____c->static_fields->__9__22_0 = callbackFunction;
    func_?();
  }
  if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
            (root,(BaseEventData *)0x0,
             (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
            );
  this_03 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (this_03 != (MVNetworkGame *)0x0) {
    pMVar5 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_03,(MethodInfo *)0x0);
    if ((pMVar5 != (MVLocalPlayer *)0x0) &&
       (this_01 = (pMVar5->fields).boostController, this_01 != (BoostController *)0x0)) {
      BoostController::BoostController_RemoveAllBoosts(this_01,(MethodInfo *)0x0);
      this_02 = (this->fields).tierHandler;
      this_04 = (UnityAction_1_System_Int32Enum_ *)func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
      UnityAction_1_System_Int32Enum___ctor
                (this_04,(Object *)this,MethodInfo__DeathUIController__OnFinishPreviewTier_bool_,
                 (MethodInfo *)0x0);
      if (this_02 != (TierBoostStateHandler *)0x0) {
        TierBoostStateHandler::TierBoostStateHandler_StopPreviewTier
                  (this_02,(Action_1_Boolean_ *)this_04,(MethodInfo *)0x0);
        return;
      }
    }
  }
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void SendCurrentProgressNotification() */

void Assembly-CSharp.dll::DeathUIController::DeathUIController_SendCurrentProgressNotification
               (DeathUIController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   );
    func_?(&TypeInfo__NotificationController);
    cRam_? = '\x01';
  }
  uVar1 = GameStatCounterType__Enum_None;
  WinningConditionControl::WinningConditionControl_TryGetPrioritizedStat
            ((GameStatCounterType__Enum *)&stack0xfffffffb,(MethodInfo *)0x0);
  if (uVar1 != GameStatCounterType__Enum_None) {
    this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
               *)func_?(
                                TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                                );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements
    ::StyleComplexSelector+PseudoStateData]::
    Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___ctor
              (this_00,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
              );
    if ((TypeInfo__NotificationController->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    NotificationController::NotificationController_PushNotification_2
              (NotificationType__Enum_CurrentProgress,
               (Dictionary_2_System_Object_System_Object_ *)this_00,NotificationLifetime__Enum_High,
               (MethodInfo *)0x0);
  }
  return;
}


/* Boolean ShouldShowTierReward(GamePassTier) */

bool Assembly-CSharp.dll::DeathUIController::DeathUIController_ShouldShowTierReward
               (DeathUIController *this,GamePassTier__Enum tierToShow,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__TierUnlockedPopupController);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVGameControllerBase);
    cRam_? = '\x01';
  }
  pGVar1 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
  if (pGVar1 != (GameSessionData *)0x0) {
    if ((pGVar1->fields).gameMode == 0) {
      return 0;
    }
    bVar2 = TypeInfo__TierUnlockedPopupController->static_fields->HighestTierRewardShown;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__GamePassesManager);
      cRam_? = '\x01';
    }
    pPVar3 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
    if (pPVar3 != (PlayerPlanetData *)0x0) {
      if (((pPVar3->fields).gamePassTier <= bVar2) ||
         ((byte)(undefined1)tierToShow <=
          TypeInfo__TierUnlockedPopupController->static_fields->HighestTierRewardShown)) {
        return 0;
      }
      if (cRam_? == '\0') {
        func_?(&TypeInfo__GamePassesManager);
        cRam_? = '\x01';
      }
      pPVar3 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
      if (pPVar3 != (PlayerPlanetData *)0x0) {
        return (byte)(undefined1)tierToShow <= (pPVar3->fields).gamePassTier;
      }
    }
  }
  func_?();
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
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    cRam_? = '\x01';
  }
  method_01 = TypeInfo__DeathUIController____c__DisplayClass26_0;
  pOVar1 = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            (pOVar1,ExceptionArgument__Enum_obj,(MethodInfo *)method_01);
  original = (this->fields).boostMenuPrefab;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  pOVar2 = (Object__Class *)
            UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                      ((Object *)original,
                       DeathUIBoostMenuController_MethodInfo__UnityEngine__Object__Instantiate<DeathUIBoostMenuController>_DeathUIBoostMenuController_
                      );
  if (pOVar1 == (Object *)0x0) {
code_?:
    func_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pOVar4 = pOVar1 + 1;
  pOVar4->klass = pOVar2;
  pOVar5 = pOVar4;
  func_?();
  pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                      ((Component *)this,(MethodInfo *)0x0);
  pEVar7 = 
  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
  ;
  pEVar8 = (ExecuteEvents_EventFunction_1_System_Object_ *)func_?();
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
  UnityAction_2_System_Object_System_Object___ctor
            ((UnityAction_2_System_Object_System_Object_ *)pEVar8,pOVar1,
             MethodInfo__DeathUIController____c__DisplayClass26_0___ShowBoostMenu_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
             ,(MethodInfo *)0x0);
  if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
            (pGVar6,(BaseEventData *)0x0,pEVar8,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
            );
  if (pOVar4->klass == (Object__Class *)0x0) goto code_?;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<MV::Common::SpawnRoleModeType>);
    func_?(&
                    MethodInfo__DeathUIBoostMenuController__OnAvatarStateChanged_MV__Common__SpawnRoleModeType_
                   );
    func_?(&MethodInfo__DeathUIBoostMenuController__OnResetToSpawnPoint__);
    func_?(&MethodInfo__DeathUIBoostMenuController__OnRespawn__);
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IDeathPromotionSelector>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<IDeathPromotionSelector>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IDeathPromotionSelector>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&TypeInfo__Assets__Scripts__AdIntegration__IAdManager);
    func_?(&
                    MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<MV::Common::SpawnRoleModeType>__get_Value__
                   );
    func_?(&
                    MethodInfo__DeathUIBoostMenuController____c__DisplayClass22_0___Initialize_b__0_IDeathPromotionSelector__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__DeathUIBoostMenuController____c__DisplayClass22_0);
    func_?(&TypeInfo__UnityEngine__Events__UnityAction);
    func_?(&StringLiteral_Respawning_at_start___);
    func_?(&StringLiteral_Respawning_at_checkpoint___);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__DeathUIBoostMenuController____c__DisplayClass22_0;
  pOVar1 = (Object *)
            func_?(TypeInfo__DeathUIBoostMenuController____c__DisplayClass22_0,pEVar7,
                            pOVar5);
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            (pOVar1,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  if (fRam00000058 <= 0.0) {
    if (pCRam0000002c == (Component *)0x0) goto code_?;
    pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        (pCRam0000002c,(MethodInfo *)0x0);
    if (pGVar6 == (GameObject *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar6,0,(MethodInfo *)0x0);
    if (pCRam00000010 == (Component *)0x0) goto code_?;
    pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        (pCRam00000010,(MethodInfo *)0x0);
    if (pGVar6 == (GameObject *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar6,0,(MethodInfo *)0x0);
    pSVar9 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                       ((MethodInfo *)0x0);
    if ((pSVar9 == (SpawnRoleDataMediator *)0x0) ||
       (this_00 = (WebCompletionSource_1_System_Object_ *)(pSVar9->fields).spawnRoleMode,
       this_00 == (WebCompletionSource_1_System_Object_ *)0x0)) goto code_?;
    pTVar10 = System.dll::System::Net::WebCompletionSource`1[System::Object]::
             WebCompletionSource_1_System_Object__get_Task
                       (this_00,
                        MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<MV::Common::SpawnRoleModeType>__get_Value__
                       );
    if (pTVar10 != (Task *)0x4) {
      pGVar11 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
      if ((pGVar11 == (GameEventManager *)0x0) ||
         (this_01 = (pGVar11->fields).AvatarCommandsPlayMode,
         this_01 == (GameEventManager_AvatarCommandsPlayModeManager *)0x0)) goto code_?;
      GameEventManager+AvatarCommandsPlayModeManager::
      GameEventManager_AvatarCommandsPlayModeManager_SpawnAsGhost(this_01,(MethodInfo *)0x0);
    }
    uRam_? = 1;
  }
  fRam00000054 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  if (pNRam00000018 != (NotificationFade *)0x0) {
    NotificationFade::NotificationFade_Activate(pNRam00000018,(MethodInfo *)0x0);
    if (pNRam00000018 != (NotificationFade *)0x0) {
      (pNRam00000018->fields).shouldHideWhenDone = 0;
      if (pERam00000050 != (EmbeddedPlayerConfig *)0x0) {
        pEVar12 = EmbeddedPlayerConfig::EmbeddedPlayerConfig_GetCurrentSiteData
                           ((EmbeddedSiteConfigData *)&stack0xffffffd4,pERam00000050,
                            (MethodInfo *)0x0);
        uVar13 = pEVar12->noPlayButtonVideoIcon;
        if (pOVar1 != (Object *)0x0) {
          *(undefined1 *)&pOVar1[1].klass = 0;
          pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                              ((Component *)0x0,(MethodInfo *)0x0);
          pEVar8 = (ExecuteEvents_EventFunction_1_System_Object_ *)func_?();
          pOVar4 = pOVar1;
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
          Object]::UnityAction_2_System_Object_System_Object___ctor
                    ((UnityAction_2_System_Object_System_Object_ *)pEVar8,pOVar1,
                     MethodInfo__DeathUIBoostMenuController____c__DisplayClass22_0___Initialize_b__0_IDeathPromotionSelector__UnityEngine__EventSystems__BaseEventData_
                     ,(MethodInfo *)0x0);
          cVar14 = (char)pOVar4;
          if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor ==
              0) {
            func_?();
          }
          UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
          ExecuteEvents_ExecuteHierarchy
                    (pGVar6,(BaseEventData *)0x0,pEVar8,
                     UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<IDeathPromotionSelector>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IDeathPromotionSelector>_
                    );
          if ((uVar13 == '\0') && (cVar14 == '\0')) {
            pIVar15 = MVGameControllerBase::MVGameControllerBase_get_AdManager((MethodInfo *)0x0);
            if (pIVar15 == (IAdManager *)0x0) goto code_?;
            bVar16 = func_?();
          }
          else {
            bVar16 = 0;
          }
          bVar16 = *(byte *)&pOVar1[1].klass & bVar16;
          if (pCRam00000048 != (Component *)0x0) {
            pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                (pCRam00000048,(MethodInfo *)0x0);
            if (pGVar6 != (GameObject *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                        (pGVar6,bVar16,(MethodInfo *)0x0);
              if (pCRam0000004c != (Component *)0x0) {
                pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                          Component_get_gameObject(pCRam0000004c,(MethodInfo *)0x0);
                if (pGVar6 != (GameObject *)0x0) {
                  bVar16 = bVar16 ^ 1;
                  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                            (pGVar6,bVar16,(MethodInfo *)0x0);
                  if (pCRam0000002c != (Component *)0x0) {
                    pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                              Component_get_gameObject(pCRam0000002c,(MethodInfo *)0x0);
                    if (pGVar6 != (GameObject *)0x0) {
                      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                                (pGVar6,bVar16,(MethodInfo *)0x0);
                      pPVar17 = pPRam00000034;
                      pNVar18 = (NavMesh_OnNavMeshPreUpdate *)func_?();
                      UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
                      NavMesh_OnNavMeshPreUpdate__ctor
                                (pNVar18,(Object *)0x0,
                                 MethodInfo__DeathUIBoostMenuController__OnRespawn__,
                                 (MethodInfo *)0x0);
                      if (pPVar17 != (PointerDownController *)0x0) {
                        PointerDownController::PointerDownController_Initialize
                                  (pPVar17,(UnityAction *)pNVar18,(MethodInfo *)0x0);
                        pPVar17 = pPRam00000038;
                        pNVar18 = (NavMesh_OnNavMeshPreUpdate *)func_?();
                        UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
                        NavMesh_OnNavMeshPreUpdate__ctor
                                  (pNVar18,(Object *)0x0,
                                   MethodInfo__DeathUIBoostMenuController__OnResetToSpawnPoint__,
                                   (MethodInfo *)0x0);
                        if (pPVar17 != (PointerDownController *)0x0) {
                          PointerDownController::PointerDownController_Initialize
                                    (pPVar17,(UnityAction *)pNVar18,(MethodInfo *)0x0);
                          pSVar9 = MVGameControllerBase::
                                   MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                                             ((MethodInfo *)0x0);
                          if (pSVar9 != (SpawnRoleDataMediator *)0x0) {
                            this_02 = (pSVar9->fields).SpawnRoleModeTypeWrapper;
                            this_03 = (UnityAction_1_System_Int32Enum_ *)func_?();
                            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::
                            Int32Enum]::UnityAction_1_System_Int32Enum___ctor
                                      (this_03,(Object *)0x0,
                                       MethodInfo__DeathUIBoostMenuController__OnAvatarStateChanged_MV__Common__SpawnRoleModeType_
                                       ,(MethodInfo *)0x0);
                            if (this_02 != (SpawnRoleModeTypeWrapper *)0x0) {
                              SpawnRoleModeTypeWrapper::SpawnRoleModeTypeWrapper_add_OnChange
                                        (this_02,(Action_1_MV_Common_SpawnRoleModeType_ *)this_03,
                                         (MethodInfo *)0x0);
                              if (pBRam0000003c != (BoostMenuController *)0x0) {
                                BoostMenuController::BoostMenuController_Initialize
                                          (pBRam0000003c,(MethodInfo *)0x0);
                                this_04 = MVGameControllerBase::MVGameControllerBase_get_Game
                                                    ((MethodInfo *)0x0);
                                if (this_04 != (MVNetworkGame *)0x0) {
                                  this_05 = MVNetworkGame::MVNetworkGame_get_LocalPlayer
                                                      (this_04,(MethodInfo *)0x0);
                                  if (this_05 != (MVLocalPlayer *)0x0) {
                                    pMVar19 = MVPlayer::MVPlayer_GetCheckpoint
                                                        ((MVPlayer *)this_05,(MethodInfo *)0x0);
                                    if (pNRam0000001c != (NotificationFade *)0x0) {
                                      NotificationFade::NotificationFade_Activate
                                                (pNRam0000001c,(MethodInfo *)0x0);
                                      if (pNRam0000001c != (NotificationFade *)0x0) {
                                        (pNRam0000001c->fields).pauseAt = 0.0;
                                        if (pGRam00000030 != (GameObject *)0x0) {
                                          UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                          GameObject_SetActive(pGRam00000030,0,(MethodInfo *)0x0);
                                          if (pMVar19 == (MVCheckpoint *)0x0) {
                                            if (pCRam00000020 != (Component *)0x0) {
                                              pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::
                                                        Component::Component_get_gameObject
                                                                  (pCRam00000020,(MethodInfo *)0x0);
                                              if (pGVar6 != (GameObject *)0x0) {
                                                UnityEngine.CoreModule.dll::UnityEngine::GameObject
                                                ::GameObject_SetActive(pGVar6,0,(MethodInfo *)0x0);
                                                if (piRam_? != (int *)0x0) {
                                                  iVar20 = *piRam_?;
                                                  goto code_?;
                                                }
                                              }
                                            }
                                          }
                                          else if (piRam_? != (int *)0x0) {
                                            iVar20 = *piRam_?;
code_?:
                                            (**(code **)(iVar20 + 0x318))();
                                            if (cRam_? == '\0') {
                                              func_?();
                                              cRam_? = '\x01';
                                            }
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
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&
                    MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<ReviveState>__get_Value__
                   );
    func_?(&
                    MethodInfo__DeathUIController____c___ShowDeadmodeUI_b__31_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__DeathUIController____c);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<BoostType,_Boost>__get_Count__
                   );
    cRam_? = '\x01';
  }
  root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                   ((Component *)this,(MethodInfo *)0x0);
  pGVar1 = root;
  if ((TypeInfo__DeathUIController____c->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__DeathUIController____c);
  }
  callbackFunction = TypeInfo__DeathUIController____c->static_fields->__9__31_0;
  if (callbackFunction == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
    root = pGVar1;
    if ((TypeInfo__DeathUIController____c->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__DeathUIController____c);
      root = pGVar1;
    }
    object = TypeInfo__DeathUIController____c->static_fields->__9;
    callbackFunction =
         (ExecuteEvents_EventFunction_1_IUIStack_ *)
         func_?(
                        TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                        );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)object,
               MethodInfo__DeathUIController____c___ShowDeadmodeUI_b__31_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    TypeInfo__DeathUIController____c->static_fields->__9__31_0 = callbackFunction;
    func_?(&TypeInfo__DeathUIController____c->static_fields->__9__31_0,callbackFunction);
  }
  if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
            (root,(BaseEventData *)0x0,
             (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
            );
  pSVar2 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                     ((MethodInfo *)0x0);
  if ((pSVar2 == (SpawnRoleDataMediator *)0x0) ||
     (this_00 = (WebCompletionSource_1_System_Object_ *)(pSVar2->fields).reviveState,
     this_00 == (WebCompletionSource_1_System_Object_ *)0x0)) goto code_?;
  this_01 = System.dll::System::Net::WebCompletionSource`1[System::Object]::
            WebCompletionSource_1_System_Object__get_Task
                      (this_00,
                       MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<ReviveState>__get_Value__
                      );
  if (this_01 == (Task *)0x0) goto code_?;
  bVar3 = ReviveState::ReviveState_get_CanSafelySpawn((ReviveState *)this_01,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if (TypeInfo__GamePassesManager->static_fields->_GamePassesActive_k__BackingField == 0) {
code_?:
    pMVar4 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
    if ((pMVar4 == (MVLocalPlayer *)0x0) ||
       (pBVar5 = (pMVar4->fields).boostController, pBVar5 == (BoostController *)0x0))
    goto code_?;
    this_02 = (Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
               *)BoostController::BoostController_GetActiveBoosts(pBVar5,(MethodInfo *)0x0);
    if (this_02 ==
        (Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
         *)0x0) goto code_?;
    iVar6 = mscorlib.dll::System::Collections::Generic::
            Dictionary`2[TKey,TValue]+ValueCollection[UnityEngine::UIElements::StyleSheets::
            StyleSheetCache+SheetHandleKey,System::Object]::
            Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__get_Count
                      (this_02,
                       MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<BoostType,_Boost>__get_Count__
                      );
    if (0 < iVar6) goto code_?;
    bVar7 = false;
  }
  else {
    pTVar8 = (this->fields).tierHandler;
    if (pTVar8 == (TierBoostStateHandler *)0x0) goto code_?;
    bVar9 = TierBoostStateHandler::TierBoostStateHandler_IsInTempTier(pTVar8,(MethodInfo *)0x0);
    if (bVar9 == 0) goto code_?;
code_?:
    bVar7 = bVar3 == 0;
  }
  bVar3 = bVar7;
  bVar9 = MVClientSettings::MVClientSettings_get_RewardedAdsEnabled((MethodInfo *)0x0);
  if (bVar9 == 0) {
    bVar9 = MVClientSettings::MVClientSettings_get_IsSubscriber((MethodInfo *)0x0);
    if (bVar9 != 0) goto code_?;
  }
  else {
code_?:
    bVar9 = MVClientSettings::MVClientSettings_get_ReviveEnabled((MethodInfo *)0x0);
    if ((bVar9 & 0x10) != 0 || bVar7 != false) {
      DeathUIController_ShowReviveMenu(this,bVar3,(MethodInfo *)0x0);
      return;
    }
  }
  if (cRam_? == '\0') {
    func_?();
    func_?();
    cRam_? = '\x01';
  }
  this_03 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (this_03 != (MVNetworkGame *)0x0) {
    pMVar4 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_03,(MethodInfo *)0x0);
    if ((pMVar4 != (MVLocalPlayer *)0x0) &&
       (pBVar5 = (pMVar4->fields).boostController, pBVar5 != (BoostController *)0x0)) {
      BoostController::BoostController_RemoveAllBoosts(pBVar5,(MethodInfo *)0x0);
      pTVar8 = (this->fields).tierHandler;
      this_04 = (UnityAction_1_System_Int32Enum_ *)func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
      UnityAction_1_System_Int32Enum___ctor
                (this_04,(Object *)this,MethodInfo__DeathUIController__OnFinishPreviewTier_bool_,
                 (MethodInfo *)0x0);
      if (pTVar8 != (TierBoostStateHandler *)0x0) {
        TierBoostStateHandler::TierBoostStateHandler_StopPreviewTier
                  (pTVar8,(Action_1_Boolean_ *)this_04,(MethodInfo *)0x0);
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


/* Void ShowReviveMenu(Boolean) */

void Assembly-CSharp.dll::DeathUIController::DeathUIController_ShowReviveMenu
               (DeathUIController *this,bool reboostOnly,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__DeathUIController__ReboostNotClicked__);
    func_?(&MethodInfo__DeathUIController__ReviveNotClicked__);
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&
                    ReviveUIHandlerBoosts_MethodInfo__UnityEngine__Object__Instantiate<ReviveUIHandlerBoosts>_ReviveUIHandlerBoosts_
                   );
    func_?(&
                    ReviveUIHandler_MethodInfo__UnityEngine__Object__Instantiate<ReviveUIHandler>_ReviveUIHandler_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&
                    MethodInfo__DeathUIController____c__DisplayClass20_0___ShowReviveMenu_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__DeathUIController____c__DisplayClass20_0);
    func_?(&
                    MethodInfo__DeathUIController____c__DisplayClass20_1___ShowReviveMenu_b__1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__DeathUIController____c__DisplayClass20_1);
    func_?(&TypeInfo__UnityEngine__Events__UnityAction);
    cRam_? = '\x01';
  }
  if (reboostOnly == 0) {
    method_00 = TypeInfo__DeathUIController____c__DisplayClass20_1;
    pOVar1 = (Object *)func_?();
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              (pOVar1,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
    original = (this->fields).reviveHandler;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    pOVar2 = (Object__Class *)
             UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                       ((Object *)original,
                        ReviveUIHandler_MethodInfo__UnityEngine__Object__Instantiate<ReviveUIHandler>_ReviveUIHandler_
                       );
    if (pOVar1 == (Object *)0x0) goto code_?;
    pOVar3 = pOVar1 + 1;
    pOVar3->klass = pOVar2;
    func_?(pOVar3,pOVar2);
    pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this,(MethodInfo *)0x0);
    pEVar5 = (ExecuteEvents_EventFunction_1_System_Object_ *)
             func_?(
                            TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                            );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              ((UnityAction_2_System_Object_System_Object_ *)pEVar5,pOVar1,
               MethodInfo__DeathUIController____c__DisplayClass20_1___ShowReviveMenu_b__1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
              (pGVar4,(BaseEventData *)0x0,pEVar5,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
              );
    pOVar2 = pOVar3->klass;
    this_00 = (NavMesh_OnNavMeshPreUpdate *)func_?();
    method_1 = MethodInfo__DeathUIController__ReviveNotClicked__;
  }
  else {
    method_01 = TypeInfo__DeathUIController____c__DisplayClass20_0;
    pOVar1 = (Object *)func_?();
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              (pOVar1,ExceptionArgument__Enum_obj,(MethodInfo *)method_01);
    original_00 = (this->fields).reviveHandlerBoosts;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    pOVar2 = (Object__Class *)
             UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                       ((Object *)original_00,
                        ReviveUIHandlerBoosts_MethodInfo__UnityEngine__Object__Instantiate<ReviveUIHandlerBoosts>_ReviveUIHandlerBoosts_
                       );
    if (pOVar1 == (Object *)0x0) goto code_?;
    pOVar3 = pOVar1 + 1;
    pOVar3->klass = pOVar2;
    func_?(pOVar3,pOVar2);
    pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this,(MethodInfo *)0x0);
    pEVar5 = (ExecuteEvents_EventFunction_1_System_Object_ *)
             func_?(
                            TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                            );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              ((UnityAction_2_System_Object_System_Object_ *)pEVar5,pOVar1,
               MethodInfo__DeathUIController____c__DisplayClass20_0___ShowReviveMenu_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
              (pGVar4,(BaseEventData *)0x0,pEVar5,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
              );
    pOVar2 = pOVar3->klass;
    this_00 = (NavMesh_OnNavMeshPreUpdate *)func_?();
    method_1 = MethodInfo__DeathUIController__ReboostNotClicked__;
  }
  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
  NavMesh_OnNavMeshPreUpdate__ctor(this_00,(Object *)this,method_1,(MethodInfo *)0x0);
  if (pOVar2 != (Object__Class *)0x0) {
    pIVar6 = (pOVar2->_0).image;
    (*(code *)pIVar6[5].nameToClassHashTable)(pOVar2,this_00,pIVar6[5].codeGenModule);
    return;
  }
code_?:
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void ShowTierUnlockedPopup(Boolean, Boolean) */

void Assembly-CSharp.dll::DeathUIController::DeathUIController_ShowTierUnlockedPopup
               (DeathUIController *this,bool wasPurchased,bool wasTempUnlocked,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&
                    TierUnlockedPopupController_MethodInfo__UnityEngine__Object__Instantiate<TierUnlockedPopupController>_TierUnlockedPopupController_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&
                    MethodInfo__DeathUIController____c__DisplayClass28_0___ShowTierUnlockedPopup_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__DeathUIController____c__DisplayClass28_0);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__DeathUIController____c__DisplayClass28_0;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  if (value != (Object *)0x0) {
    value[1].monitor = (MonitorData *)this;
    func_?(&value[1].monitor,this);
    original = (this->fields).tierUnlockedPopupControllerPrefab;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    pOVar1 = (Object__Class *)
             UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                       ((Object *)original,
                        TierUnlockedPopupController_MethodInfo__UnityEngine__Object__Instantiate<TierUnlockedPopupController>_TierUnlockedPopupController_
                       );
    pOVar2 = value + 1;
    pOVar2->klass = pOVar1;
    func_?(pOVar2,pOVar1);
    root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
    callbackFunction =
         (ExecuteEvents_EventFunction_1_System_Object_ *)
         func_?(
                        TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                        );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,value,
               MethodInfo__DeathUIController____c__DisplayClass28_0___ShowTierUnlockedPopup_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
              (root,(BaseEventData *)0x0,callbackFunction,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
              );
    pOVar1 = pOVar2->klass;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__GamePassesManager);
      cRam_? = '\x01';
    }
    pPVar3 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
    if ((pPVar3 != (PlayerPlanetData *)0x0) && (pOVar1 != (Object__Class *)0x0)) {
      TierUnlockedPopupController::TierUnlockedPopupController_Initialize
                ((TierUnlockedPopupController *)pOVar1,(uint)(pPVar3->fields).gamePassTier,
                 wasPurchased,wasTempUnlocked,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Boolean ShowingClaimGold() */

bool Assembly-CSharp.dll::DeathUIController::DeathUIController_ShowingClaimGold
               (DeathUIController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&
                    MethodInfo__DeathUIController____c__DisplayClass30_0___ShowingClaimGold_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__DeathUIController____c__DisplayClass30_0);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__DeathUIController____c__DisplayClass30_0;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  if (value != (Object *)0x0) {
    value[1].klass = (Object__Class *)this;
    func_?(value + 1,this);
    pGVar1 = MVGameControllerBase::MVGameControllerBase_get_GoldRewardManager((MethodInfo *)0x0);
    if (pGVar1 != (GoldRewardManager *)0x0) {
      bVar2 = GoldRewardManager::GoldRewardManager_CanGetGoldReward(pGVar1,(MethodInfo *)0x0);
      if (bVar2 != 0) {
        pGVar1 = MVGameControllerBase::MVGameControllerBase_get_GoldRewardManager((MethodInfo *)0x0)
        ;
        if (pGVar1 == (GoldRewardManager *)0x0) goto code_?;
        fVar3 = GoldRewardManager::GoldRewardManager_GetGoldRewardTimeLeft(pGVar1,(MethodInfo *)0x0)
        ;
        if (fVar3 <= 0.0) {
          pGVar4 = (this->fields).claimGoldRewardPopupPrefab;
          if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__UnityEngine__Object);
          }
          pOVar5 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                             ((Object *)pGVar4,
                              UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                             );
          value[1].monitor = (MonitorData *)pOVar5;
          func_?(&value[1].monitor,pOVar5);
          pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                             ((Component *)this,(MethodInfo *)0x0);
          callbackFunction =
               (ExecuteEvents_EventFunction_1_System_Object_ *)
               func_?(
                              TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                              );
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
          Object]::UnityAction_2_System_Object_System_Object___ctor
                    ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,value,
                     MethodInfo__DeathUIController____c__DisplayClass30_0___ShowingClaimGold_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                     ,(MethodInfo *)0x0);
          if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor ==
              0) {
            func_?();
          }
          UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
          ExecuteEvents_ExecuteHierarchy
                    (pGVar4,(BaseEventData *)0x0,callbackFunction,
                     UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                    );
          return 1;
        }
      }
      return 0;
    }
  }
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  bVar2 = (*pcVar6)();
  return bVar2;
}


/* Void StartDeathBriefing(String) */

void Assembly-CSharp.dll::DeathUIController::DeathUIController_StartDeathBriefing
               (DeathUIController *this,String *deathText,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__DeathUIController___StartDeathBriefing_b__37_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&TypeInfo__IPlayModeUI);
    cRam_? = '\x01';
  }
  pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
  callbackFunction =
       (ExecuteEvents_EventFunction_1_System_Object_ *)
       func_?(
                      TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                      );
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
  UnityAction_2_System_Object_System_Object___ctor
            ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)this,
             MethodInfo__DeathUIController___StartDeathBriefing_b__37_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
             ,(MethodInfo *)0x0);
  if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
            (pGVar1,(BaseEventData *)0x0,callbackFunction,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
            );
  if (cRam_? == '\0') {
    ppMStack2 = &TypeInfo__MVGameControllerBase;
    func_?();
    cRam_? = '\x01';
  }
  ppMStack2 =
       (MVGameControllerBase__Class **)
       TypeInfo__MVGameControllerBase->static_fields->_PlayModeUI_k__BackingField;
  if ((IPlayModeUI *)ppMStack2 != (IPlayModeUI *)0x0) {
    cVar3 = func_?();
    if (cVar3 != '\0') {
      DeathUIController_ShowDeadmodeUI(this,(MethodInfo *)0x0);
      return;
    }
    fVar4 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
    (this->fields).waitTime = fVar4;
    pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this,(MethodInfo *)0x0);
    if (pGVar1 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar1,1,(MethodInfo *)0x0);
      pTVar5 = (this->fields).deathReason;
      if (pTVar5 != (Text *)0x0) {
        pTVar6 = pTVar5->klass;
        ppMStack2 =
             (MVGameControllerBase__Class **)
             (pTVar6->vtable).CalculateLayoutInputHorizontal_1.methodPtr;
        (*(code *)(pTVar6->vtable).set_text.method)();
        return;
      }
    }
  }
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
    func_?(&TypeInfo__TierUnlockedPopupController);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if (TypeInfo__GamePassesManager->static_fields->_GamePassesActive_k__BackingField == 0) {
    pTVar1 = (this->fields).tierOnDeathProgress;
    if ((pTVar1 != (TierOnDeathProgress *)0x0) &&
       (pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)pTVar1,(MethodInfo *)0x0), pGVar3 != (GameObject *)0x0))
    {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar3,0,(MethodInfo *)0x0);
      return;
    }
  }
  else {
    if (cRam_? == '\0') {
      func_?(&TypeInfo__GamePassesManager);
      cRam_? = '\x01';
    }
    pPVar4 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
    if (pPVar4 != (PlayerPlanetData *)0x0) {
      uVar5 = (pPVar4->fields).gamePassTier;
      if ((TypeInfo__TierUnlockedPopupController->static_fields->HighestTierRewardShown == uVar5) &&
         (uVar5 == 3)) {
        bVar6 = 0;
      }
      else {
        pPVar7 = TypeInfo__GamePassesManager->static_fields->playerTierStateCalculator;
        if (pPVar7 == (PlayerTierStateCalculator *)0x0) goto code_?;
        bVar6 = (pPVar7->fields).gamePassRewardsActivated;
      }
      this_02 = (this->fields).tierOnDeathProgress;
      if ((this_02 != (TierOnDeathProgress *)0x0) &&
         (pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                              ((Component *)this_02,(MethodInfo *)0x0), pGVar3 != (GameObject *)0x0
         )) {
        fVar8 = 0.0;
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar3,bVar6 != 0,(MethodInfo *)0x0);
        if (bVar6 == 0) {
          return;
        }
        if ((this->fields).tierOnDeathProgress != (TierOnDeathProgress *)0x0) {
          uVar9 = CONCAT44(unaff_EBX,in_stack_10);
          if (cRam_? == '\0') {
            func_?(&TypeInfo__UnityEngine__Debug,0,in_stack_10);
            func_?(&
                            MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                           );
            func_?(&TypeInfo__GamePassesManager);
            func_?(&StringLiteral_from_to__);
            func_?(&::StringLiteral____);
            cRam_? = '\x01';
          }
          (in_stack_2->fields)._IsShowingTierProgress_k__BackingField = 1;
          if (cRam_? == '\0') {
            func_?(&TypeInfo__GamePointGainEffectManager,fVar8,uVar9);
            cRam_? = '\x01';
          }
          fVar8 = TierOnDeathProgress::TierOnDeathProgress_CalculateTotalProgressValue
                             (in_stack_2,
                              TypeInfo__GamePointGainEffectManager->static_fields->
                              progressBarGamePointAmountShown,(MethodInfo *)0x0);
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          this_00 = &(in_stack_2->fields).tierToInterpolateFrom;
          fVar11 = (float10)func_?((double)fVar8);
          *this_00 = (float)(int)fVar11;
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          pPVar4 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
          if (pPVar4 != (PlayerPlanetData *)0x0) {
            fVar8 = TierOnDeathProgress::TierOnDeathProgress_CalculateTotalProgressValue
                               (in_stack_2,(pPVar4->fields).progressionGamePoints,
                                (MethodInfo *)0x0);
            if (cRam_? == '\0') {
              func_?();
              cRam_? = '\x01';
            }
            if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            fVar11 = (float10)func_?();
            pTVar12 = (in_stack_2->fields).nextTierText;
            (in_stack_2->fields).tierToInterpolateTo = (float)(int)fVar11;
            pSVar13 = mscorlib.dll::System::Single::Single_ToString
                                ((Single *)this_00,(MethodInfo *)0x0);
            if (pTVar12 != (Text *)0x0) {
              (*(code *)(pTVar12->klass->vtable).set_text.method)(pTVar12,pSVar13);
              pSVar13 = mscorlib.dll::System::Single::Single_ToString
                                  ((Single *)this_00,(MethodInfo *)0x0);
              str3 = mscorlib.dll::System::Single::Single_ToString
                               ((Single *)&(in_stack_2->fields).tierToInterpolateTo,
                                (MethodInfo *)0x0);
              pSVar13 = mscorlib.dll::System::String::String_Concat_5
                                  (StringLiteral_from_to__,pSVar13,::StringLiteral____,str3,
                                   (MethodInfo *)0x0);
              if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
                func_?(TypeInfo__UnityEngine__Debug);
              }
              UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                        ((Object *)pSVar13,(MethodInfo *)0x0);
              fVar14 = (in_stack_2->fields).timeBeforeStartLerp;
              (in_stack_2->fields).timer = fVar14;
              (in_stack_2->fields).crystalTimer = fVar14;
              if (cRam_? == '\0') {
                func_?();
                cRam_? = '\x01';
              }
              pPVar4 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
              if (pPVar4 != (PlayerPlanetData *)0x0) {
                (in_stack_2->fields).currentTier = (pPVar4->fields).gamePassTier;
                if (cRam_? == '\0') {
                  func_?();
                  cRam_? = '\x01';
                }
                iVar15 = TypeInfo__GamePointGainEffectManager->static_fields->
                         progressBarGamePointAmountShown;
                if (cRam_? == '\0') {
                  func_?();
                  cRam_? = '\x01';
                }
                pPVar4 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
                if (pPVar4 != (PlayerPlanetData *)0x0) {
                  pTVar12 = (in_stack_2->fields).crystalsGainedSinceDeath;
                  iVar15 = (pPVar4->fields).progressionGamePoints - iVar15;
                  this_01 = &(in_stack_2->fields).crystalValue;
                  *this_01 = iVar15;
                  (in_stack_2->fields).currentCrystalValue = (float)iVar15;
                  mscorlib.dll::System::Int32::Int32_ToString((Int32 *)this_01,(MethodInfo *)0x0);
                  if (pTVar12 != (Text *)0x0) {
                    (*(code *)(pTVar12->klass->vtable).set_text.method)();
                    if (cRam_? == '\0') {
                      func_?();
                      cRam_? = '\x01';
                    }
                    pPVar4 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
                    if ((pPVar4 != (PlayerPlanetData *)0x0) &&
                       (pPVar7 = TypeInfo__GamePassesManager->static_fields->
                                 playerTierStateCalculator,
                       pPVar7 != (PlayerTierStateCalculator *)0x0)) {
                      pTVar16 = &in_stack_2->fields;
                      in_stack_2._1_3_ = (undefined3)((uint)fVar8 >> 8);
                      in_stack_2 =
                           (TierOnDeathProgress *)
                           CONCAT31(in_stack_2._1_3_,pTVar16->currentTier);
                      this_06 = MVWorldObject.dll::MV::WorldObject::GamePassSystem::
                                PlayerTierStateCalculator::
                                PlayerTierStateCalculator_GetTierPricingState
                                          (pPVar7,(pPVar4->fields).progressionGamePoints,
                                           (GamePassTier__Enum)in_stack_2,(MethodInfo *)0x0);
                      (pTVar1->fields).currentGamePoints = *this_01;
                      if (this_06 !=
                          (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierState_
                           *)0x0) {
                        in_stack_2 =
                             (TierOnDeathProgress *)
                             CONCAT31(in_stack_2._1_3_,(pTVar1->fields).currentTier);
                        pOVar17 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                                  ByteEnum,System::Object]::
                                  Dictionary_2_System_ByteEnum_System_Object__get_Item
                                            ((Dictionary_2_System_ByteEnum_System_Object_ *)this_06,
                                             (ByteEnum__Enum)in_stack_2,
                                             MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                                            );
                        if (pOVar17 != (Object *)0x0) {
                          (pTVar1->fields).gamePointsRequired = (int32_t)pOVar17[3].klass;
                          iVar15 = (pTVar1->fields).currentGamePoints;
                          if (iVar15 < 0) {
                            iVar15 = 0;
                          }
                          else if (*this_01 < iVar15) {
                            iVar15 = *this_01;
                          }
                          (pTVar1->fields).currentGamePoints = iVar15;
                          this_03 = (pTVar1->fields).lockImage;
                          if (this_03 != (RectTransform *)0x0) {
                            in_stack_18 = &UNK_?;
                            pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                      Component_get_gameObject
                                                ((Component *)this_03,(MethodInfo *)0x0);
                            if (pGVar3 != (GameObject *)0x0) {
                              UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                              GameObject_SetActive(pGVar3,1,(MethodInfo *)0x0);
                              this_04 = (pTVar1->fields).unlockImage;
                              if ((this_04 != (CanvasGroup *)0x0) &&
                                 (pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                            Component_get_gameObject
                                                      ((Component *)this_04,(MethodInfo *)0x0),
                                 pGVar3 != (GameObject *)0x0)) {
                                UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                GameObject_SetActive(pGVar3,0,(MethodInfo *)0x0);
                                (pTVar1->fields).intensity = 0.0;
                                if (*this_01 != 0) {
                                  (pTVar1->fields).intensity = 1.0;
                                }
                                this_05 = (Transform *)(pTVar1->fields).lockImage;
                                if (this_05 != (Transform *)0x0) {
                                  pQVar19 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                            Transform_get_localRotation
                                                      ((Quaternion *)&stack0xfffffffc,this_05,
                                                       (MethodInfo *)0x0);
                                  pVVar20 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::
                                            Quaternion_Internal_ToEulerRad
                                                      ((Vector3 *)&stack0x00000000,*pQVar19,
                                                       (MethodInfo *)0x0);
                                  uVar21 = pVVar20->x;
                                  uVar22 = pVVar20->y;
                                  euler.y = (float)uVar22 * _UNK_?;
                                  euler.x = (float)uVar21 * _UNK_?;
                                  euler.z = pVVar20->z * _UNK_?;
                                  in_stack_18 = (undefined *)uVar21;
                                  pVVar20 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::
                                            Quaternion_Internal_MakePositive
                                                      ((Vector3 *)&stack0x0000000c,euler,
                                                       (MethodInfo *)0x0);
                                  fVar14 = pVVar20->y;
                                  fVar8 = pVVar20->z;
                                  (pTVar1->fields).lockStartRot.x = pVVar20->x;
                                  (pTVar1->fields).lockStartRot.y = fVar14;
                                  (pTVar1->fields).lockStartRot.z = fVar8;
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
          func_?();
          pcVar23 = (code *)swi(3);
          (*pcVar23)();
          return;
        }
      }
    }
  }
code_?:
  func_?();
  pcVar23 = (code *)swi(3);
  (*pcVar23)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::DeathUIController::DeathUIController_Update
               (DeathUIController *this,MethodInfo *method)

{
  fVar1 = (this->fields).waitTime;
  fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  if (fVar2 <= fVar1) {
    return;
  }
  if ((this->fields).isDeathBriefActive == 0) {
    pMVar3 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if ((pMVar3 == (MVNetworkGame *)0x0) ||
       (pMVar4 = (pMVar3->fields)._NetworkGameStateListener_k__BackingField,
       pMVar4 == (MVNetworkGameStateListener *)0x0)) goto code_?;
    if ((pMVar4->fields).currentGameState != 2) {
      bVar5 = cRam_? == '\0';
      (this->fields).isDeathBriefActive = 1;
      if (bVar5) {
        func_?(&TypeInfo__GamePassesManager);
        func_?(&TypeInfo__TierUnlockedPopupController);
        cRam_? = '\x01';
      }
      if (cRam_? == '\0') {
        func_?(&TypeInfo__GamePassesManager);
        cRam_? = '\x01';
      }
      if (TypeInfo__GamePassesManager->static_fields->_GamePassesActive_k__BackingField == 0) {
        pTVar6 = (this->fields).tierOnDeathProgress;
        if ((pTVar6 == (TierOnDeathProgress *)0x0) ||
           (pGVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                ((Component *)pTVar6,(MethodInfo *)0x0),
           pGVar7 == (GameObject *)0x0)) goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar7,0,(MethodInfo *)0x0);
      }
      else {
        if (cRam_? == '\0') {
          func_?(&TypeInfo__GamePassesManager);
          cRam_? = '\x01';
        }
        pPVar8 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
        if (pPVar8 == (PlayerPlanetData *)0x0) goto code_?;
        uVar9 = (pPVar8->fields).gamePassTier;
        if ((TypeInfo__TierUnlockedPopupController->static_fields->HighestTierRewardShown == uVar9)
           && (uVar9 == 3)) {
          bVar10 = 0;
        }
        else {
          pPVar11 = TypeInfo__GamePassesManager->static_fields->playerTierStateCalculator;
          if (pPVar11 == (PlayerTierStateCalculator *)0x0) goto code_?;
          bVar10 = (pPVar11->fields).gamePassRewardsActivated;
        }
        pTVar6 = (this->fields).tierOnDeathProgress;
        if ((pTVar6 == (TierOnDeathProgress *)0x0) ||
           (pGVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                ((Component *)pTVar6,(MethodInfo *)0x0),
           pGVar7 == (GameObject *)0x0)) goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar7,bVar10 != 0,(MethodInfo *)0x0);
        if (bVar10 != 0) {
          pTVar6 = (this->fields).tierOnDeathProgress;
          if (pTVar6 == (TierOnDeathProgress *)0x0) goto code_?;
          TierOnDeathProgress::TierOnDeathProgress_Initialize(pTVar6,(MethodInfo *)0x0);
        }
      }
      pNVar12 = (this->fields).fader;
      if ((pNVar12 == (NotificationFade *)0x0) ||
         (pGVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                              ((Component *)pNVar12,(MethodInfo *)0x0), pGVar7 == (GameObject *)0x0)
         ) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar7,1,(MethodInfo *)0x0);
      pNVar12 = (this->fields).fader;
      if (pNVar12 == (NotificationFade *)0x0) goto code_?;
      NotificationFade::NotificationFade_Activate(pNVar12,(MethodInfo *)0x0);
    }
  }
  pTVar6 = (this->fields).tierOnDeathProgress;
  if ((pTVar6 != (TierOnDeathProgress *)0x0) &&
     (pGVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)pTVar6,(MethodInfo *)0x0), pGVar7 != (GameObject *)0x0)) {
    bVar10 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeInHierarchy
                      (pGVar7,(MethodInfo *)0x0);
    if (bVar10 == 0) {
      return;
    }
    pTVar6 = (this->fields).tierOnDeathProgress;
    if (pTVar6 != (TierOnDeathProgress *)0x0) {
      pNVar12 = (this->fields).fader;
      if ((pTVar6->fields)._IsShowingTierProgress_k__BackingField == 0) {
        if (pNVar12 != (NotificationFade *)0x0) {
          bVar10 = NotificationFade::NotificationFade_get_IsPaused(pNVar12,(MethodInfo *)0x0);
          if (bVar10 != 0) {
            pNVar12 = (this->fields).fader;
            if (pNVar12 == (NotificationFade *)0x0) goto code_?;
            NotificationFade::NotificationFade_Unpause(pNVar12,(MethodInfo *)0x0);
          }
          return;
        }
      }
      else if (pNVar12 != (NotificationFade *)0x0) {
        (pNVar12->fields).pauseAt = 0.99;
        return;
      }
    }
  }
code_?:
  func_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* Void <StartDeathBriefing>b__37_0(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::DeathUIController::DeathUIController__StartDeathBriefing_b__37_0
               (DeathUIController *this,IUIStack *x,BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__EventSystems__IUIStack);
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if (x != (IUIStack *)0x0) {
    func_?(3,TypeInfo__UnityEngine__EventSystems__IUIStack,x,4);
    func_?(3,TypeInfo__UnityEngine__EventSystems__IUIStack,x,0x20);
    original = (this->fields).invisibleBlocker;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    pOVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                       ((Object *)original,
                        UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                       );
    func_?(1,TypeInfo__UnityEngine__EventSystems__IUIStack,x,pOVar1,0x14,0,0x20);
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

