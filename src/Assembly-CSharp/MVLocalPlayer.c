
/* Void AddXp(Int32, XPRewardType, Int32, Int32) */

void Assembly-CSharp.dll::MVLocalPlayer::MVLocalPlayer_AddXp
               (MVLocalPlayer *this,int32_t currentPlayerXP,XPRewardType__Enum typeId,
               int32_t xpDelta,int32_t memberCount,MethodInfo *method)

{
  if (cRam_? == '\0') {
    pLStack_1 = (LevelingManager__Class *)&TypeInfo__LevelingManager;
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__LevelingManager->_1).cctor_finished_or_no_cctor == 0) {
    pLStack_1 = TypeInfo__LevelingManager;
    func_?();
  }
  if (cRam_? == '\0') {
    pLStack_1 = (LevelingManager__Class *)&TypeInfo__LevelingManager;
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__LevelingManager->_1).cctor_finished_or_no_cctor == 0) {
    pLStack_1 = TypeInfo__LevelingManager;
    func_?();
  }
  if (TypeInfo__LevelingManager->static_fields->_IsInitialized_k__BackingField == 0) {
    return;
  }
  pXVar2 = (this->fields).xpProgress;
  if ((pXVar2 != (XPProgress *)0x0) &&
     (pXVar3 = (pXVar2->fields).xpProgressData, pXVar3 != (XPProgressData *)0x0)) {
    (pXVar3->fields).xpId = (undefined1)typeId;
    pXVar3 = (pXVar2->fields).xpProgressData;
    if (pXVar3 != (XPProgressData *)0x0) {
      (pXVar3->fields).playerCurrentXP = currentPlayerXP;
      pXVar3 = (pXVar2->fields).xpProgressData;
      if (pXVar3 != (XPProgressData *)0x0) {
        (pXVar3->fields).xpDelta = xpDelta;
        pXVar3 = (pXVar2->fields).xpProgressData;
        if (pXVar3 != (XPProgressData *)0x0) {
          (pXVar3->fields).memberCount = memberCount;
          if ((pXVar2->fields).OnXPProgressData != (XPProgress_OnXPProgressDataDelegate *)0x0) {
            pXVar4 = (pXVar2->fields).OnXPProgressData;
            pLStack_1 = (pXVar4->fields)._._.method;
            pXStack_5 = (pXVar2->fields).xpProgressData;
            pvStack_6 = (pXVar4->fields)._._.method_code;
            (*(pXVar4->fields)._._.invoke_impl)();
          }
          return;
        }
      }
    }
  }
  pLStack_1 = (LevelingManager__Class *)&stack0xfffffffc;
  uVar7 = func_?(&pvStack_6);
  func_?(uVar7);
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void CreateSpawnRole(Int32) */

void Assembly-CSharp.dll::MVLocalPlayer::MVLocalPlayer_CreateSpawnRole
               (MVLocalPlayer *this,int32_t avatarSpawnerWoId,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&StringLiteral_If_this_fails_then_remember_to_u);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Debug);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
            ((Object *)StringLiteral_If_this_fails_then_remember_to_u,(MethodInfo *)0x0);
  MVLocalPlayer_SuspendCurrentSpawnRole(this,(MethodInfo *)0x0);
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
  if (pMVar1 != (MVNetworkGame_OperationRequests *)0x0) {
    if (cRam_? == '\0') {
      func_?();
      func_?();
      func_?();
      func_?();
      func_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
      cRam_? = '\x01';
    }
    this_00 = (Dictionary_2_System_Byte_System_Object_ *)func_?();
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object___ctor
              (this_00,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
              );
    value = (Object *)func_?(TypeInfo__System__Int32);
    if (this_00 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
      Dictionary_2_System_Byte_System_Object__Add
                (this_00,0x16,value,
                 MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                );
      piVar2 = *(int **)(in_stack_3 + 0x10);
      if ((TypeInfo__ExitGames__Client__Photon__SendOptions->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 0x110))();
        return;
      }
    }
  }
  func_?();
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void Destroy() */

void Assembly-CSharp.dll::MVLocalPlayer::MVLocalPlayer_Destroy
               (MVLocalPlayer *this,MethodInfo *method)

{
  object = (this->fields).xpProgress;
  if (object != (XPProgress *)0x0) {
    if (cRam_? == '\0') {
      func_?();
      func_?();
      func_?();
      cRam_? = '\x01';
    }
    this_00 = (DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
               *)func_?();
    DictionaryWithChangeEvent`2[TKey,TValue]+OnDictionaryChangeDelegate[Unity::IL2CPP::Metadata::
    __Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]::
    DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
              (this_00,(Object *)object,
               MethodInfo__XPProgress__XPLimitsCallback_UnityEngine__Networking__UnityWebRequest_,
               (MethodInfo *)0x0);
    if ((TypeInfo__AsyncWWWManager->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    AsyncWWWManager::AsyncWWWManager_UnsubscribeWWWRequest
              ((Action_1_UnityEngine_Networking_UnityWebRequest_ *)this_00,(MethodInfo *)0x0);
    return;
  }
  uVar1 = func_?(&stack0xfffffff0);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void DiedInRound() */

void Assembly-CSharp.dll::MVLocalPlayer::MVLocalPlayer_DiedInRound
               (MVLocalPlayer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    cRam_? = '\x01';
  }
  OStack_1.currentCryptoKey = (this->fields).numberOfTimesDiedInRound.currentCryptoKey;
  OStack_1.hiddenValue = (this->fields).numberOfTimesDiedInRound.hiddenValue;
  OStack_1.fakeValue = (this->fields).numberOfTimesDiedInRound.fakeValue;
  OStack_1.inited = (this->fields).numberOfTimesDiedInRound.inited;
  OStack_1._13_3_ = *(undefined3 *)&(this->fields).numberOfTimesDiedInRound.field_0xd;
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).cctor_finished_or_no_cctor ==
      0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
  }
  input.hiddenValue = OStack_1.hiddenValue;
  input.currentCryptoKey = OStack_1.currentCryptoKey;
  input.fakeValue = OStack_1.fakeValue;
  input.inited = OStack_1.inited;
  input._13_3_ = OStack_1._13_3_;
  pOVar2 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
           ObscuredInt_op_Increment(&OStack_1,input,(MethodInfo *)0x0);
  iVar3 = pOVar2->hiddenValue;
  iVar4 = pOVar2->fakeValue;
  bVar5 = pOVar2->inited;
  uVar6 = *(undefined3 *)&pOVar2->field_0xd;
  (this->fields).numberOfTimesDiedInRound.currentCryptoKey = pOVar2->currentCryptoKey;
  (this->fields).numberOfTimesDiedInRound.hiddenValue = iVar3;
  (this->fields).numberOfTimesDiedInRound.fakeValue = iVar4;
  (this->fields).numberOfTimesDiedInRound.inited = bVar5;
  *(undefined3 *)&(this->fields).numberOfTimesDiedInRound.field_0xd = uVar6;
  return;
}


/* Boolean HasDiedInRound() */

bool Assembly-CSharp.dll::MVLocalPlayer::MVLocalPlayer_HasDiedInRound
               (MVLocalPlayer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    cRam_? = '\x01';
  }
  value = (this->fields).numberOfTimesDiedInRound;
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).cctor_finished_or_no_cctor ==
      0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
  }
  iVar1 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
          ObscuredInt_op_Implicit_1(value,(MethodInfo *)0x0);
  return iVar1 != -0xe91 && -1 < iVar1 + 0xe91;
}


/* Void InitializeLeveling(InitialLevelData) */

void Assembly-CSharp.dll::MVLocalPlayer::MVLocalPlayer_InitializeLeveling
               (MVLocalPlayer *this,InitialLevelData *initialLevelData,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__XPProgress);
    cRam_? = '\x01';
  }
  if (initialLevelData != (InitialLevelData *)0x0) {
    (this->fields)._.level = (initialLevelData->fields).Level;
    this_00 = (XPProgress *)func_?(TypeInfo__XPProgress);
    XPProgress::XPProgress__ctor(this_00,this,initialLevelData,(MethodInfo *)0x0);
    (this->fields).xpProgress = this_00;
    func_?(&(this->fields).xpProgress,this_00);
    if ((this->fields).OnInitializeLeveling != (Action *)0x0) {
      pAVar1 = (this->fields).OnInitializeLeveling;
      (*(pAVar1->fields)._._.invoke_impl)
                ((pAVar1->fields)._._.method_code,(pAVar1->fields)._._.method);
    }
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Boolean IsAvatarDriving(MVVehicleBase) */

bool Assembly-CSharp.dll::MVLocalPlayer::MVLocalPlayer_IsAvatarDriving
               (MVLocalPlayer *this,MVVehicleBase *vehicleBase,MethodInfo *method)

{
  if (vehicleBase != (MVVehicleBase *)0x0) {
    pMVar1 = MVLocalPlayer_get_AvatarLocal(this,(MethodInfo *)0x0);
    if (pMVar1 != (MVAvatarLocal *)0x0) {
      bVar2 = MVVehicleBase::MVVehicleBase_IsPlayerInVehicle
                        (vehicleBase,(pMVar1->fields)._._._._.id,1,(MethodInfo *)0x0);
      return bVar2;
    }
  }
  return 0;
}


/* Boolean IsPlaying() */

bool Assembly-CSharp.dll::MVLocalPlayer::MVLocalPlayer_IsPlaying
               (MVLocalPlayer *this,MethodInfo *method)

{
  pMVar1 = MVLocalPlayer_get_AvatarLocal(this,(MethodInfo *)0x0);
  if (pMVar1 == (MVAvatarLocal *)0x0) {
    return 0;
  }
  if (*(int *)(in_stack_2 + 0x17c) != 0) {
    return *(char *)(*(int *)(in_stack_2 + 0x17c) + 0x10) == '\x01';
  }
  uVar3 = func_?(&stack0xfffffff8);
  func_?(uVar3);
  pcVar4 = (code *)swi(3);
  bVar5 = (*pcVar4)();
  return bVar5;
}


/* Void OnLevelChangedLocal(Int32) */

void Assembly-CSharp.dll::MVLocalPlayer::MVLocalPlayer_OnLevelChangedLocal
               (MVLocalPlayer *this,int32_t level,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Byte);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   );
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__NotificationController);
    cRam_? = '\x01';
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
  iVar1 = level;
  if (this_00 != (MVNetworkGame_OperationRequests *)0x0) {
    MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_LocalPlayerLevelChanged
              (this_00,level,(MethodInfo *)0x0);
    if ((this->fields).oldLevel != 0) {
      this_01 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                 *)func_?(
                                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                                  );
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
      UIElements::StyleComplexSelector+PseudoStateData]::
      Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___ctor
                (this_01,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                );
      iVar2 = (int)&level + 3;
      level = CONCAT13(4,(undefined3)level);
      pBVar3 = TypeInfo__System__Byte;
      uVar4 = func_?(TypeInfo__System__Byte,iVar2);
      value = (Object *)func_?(TypeInfo__System__Int32,&stack0xfffffff8,pBVar3,iVar2,uVar4)
      ;
      if (this_01 ==
          (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_ *
          )0x0) goto code_?;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__Add
                ((Dictionary_2_System_Object_System_Object_ *)this_01,
                 (Object *)
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                 ,value,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                );
      if ((TypeInfo__NotificationController->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      NotificationController::NotificationController_OnNotificationReceived
                (NotificationType__Enum_LevelUp,(Dictionary_2_System_Object_System_Object_ *)this_01
                 ,(MethodInfo *)0x0);
    }
    (this->fields).oldLevel = iVar1;
    return;
  }
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void RoundEnded() */

void Assembly-CSharp.dll::MVLocalPlayer::MVLocalPlayer_RoundEnded
               (MVLocalPlayer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    cRam_? = '\x01';
  }
  (this->fields)._.checkpointWOID = -1;
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).cctor_finished_or_no_cctor ==
      0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
  }
  pOVar1 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
           ObscuredInt_op_Implicit(&OStack_2,-0xe91,(MethodInfo *)0x0);
  iVar3 = pOVar1->hiddenValue;
  iVar4 = pOVar1->fakeValue;
  bVar5 = pOVar1->inited;
  uVar6 = *(undefined3 *)&pOVar1->field_0xd;
  (this->fields).numberOfTimesDiedInRound.currentCryptoKey = pOVar1->currentCryptoKey;
  (this->fields).numberOfTimesDiedInRound.hiddenValue = iVar3;
  (this->fields).numberOfTimesDiedInRound.fakeValue = iVar4;
  (this->fields).numberOfTimesDiedInRound.inited = bVar5;
  *(undefined3 *)&(this->fields).numberOfTimesDiedInRound.field_0xd = uVar6;
  return;
}


/* Void SendXpProgressEvent(XPProgressData) */

void Assembly-CSharp.dll::MVLocalPlayer::MVLocalPlayer_SendXpProgressEvent
               (MVLocalPlayer *this,XPProgressData *xpProgressData,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__NotificationController);
    func_?(&StringLiteral_You_gained__0__XP_);
    cRam_? = '\x01';
  }
  pXVar1 = xpProgressData;
  if ((this->fields).OnXPProgressData != (XPProgress_OnXPProgressDataDelegate *)0x0) {
    pXVar2 = (this->fields).OnXPProgressData;
    (*(pXVar2->fields)._._.invoke_impl)
              ((pXVar2->fields)._._.method_code,xpProgressData,(pXVar2->fields)._._.method);
  }
  pSVar3 = TM::TM__(StringLiteral_You_gained__0__XP_,(MethodInfo *)0x0);
  if (pXVar1 != (XPProgressData *)0x0) {
    this = (MVLocalPlayer *)(pXVar1->fields).xpDelta;
    arg0 = (Object *)func_?(TypeInfo__System__Int32,&this);
    pSVar3 = mscorlib.dll::System::String::String_Format(pSVar3,arg0,(MethodInfo *)0x0);
    if ((TypeInfo__NotificationController->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__NotificationController);
    }
    NotificationController::NotificationController_PushNotification
              (pSVar3,(Sprite *)0x0,5,(MethodInfo *)0x0);
    this_00 = (GameEventManager_AvatarCommandsPlayModeManager *)
              MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
    if (this_00 != (GameEventManager_AvatarCommandsPlayModeManager *)0x0) {
      GameEventManager+AvatarCommandsPlayModeManager::
      GameEventManager_AvatarCommandsPlayModeManager_SetIntermediateDebriefing
                (this_00,(pXVar1->fields).xpDelta,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void SetActiveSpawnRole(Int32) */

void Assembly-CSharp.dll::MVLocalPlayer::MVLocalPlayer_SetActiveSpawnRole
               (MVLocalPlayer *this,int32_t existingAvatarWoId,MethodInfo *method)

{
  pSVar1 = (this->fields)._.spawnRolesManager;
  if ((pSVar1 != (SpawnRolesManager *)0x0) &&
     (pSVar2 = (pSVar1->fields).spawnRolesRuntimeData, pSVar2 != (SpawnRolesRuntimeData *)0x0)) {
    if (existingAvatarWoId == (pSVar2->fields).activeSpawnRole) goto code_?;
    MVLocalPlayer_SuspendCurrentSpawnRole(this,(MethodInfo *)0x0);
    this_00 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
    if (this_00 != (MVNetworkGame_OperationRequests *)0x0) {
      MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_SetActiveSpawnRole
                (this_00,existingAvatarWoId,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
code_?:
  uVar3 = func_?(&TypeInfo__System__Exception);
  this_01 = (Exception *)func_?(uVar3);
  method_00 = (MethodInfo *)0x0;
  message = (String *)func_?(&StringLiteral_Trying_to_set_active_spawn_role_);
  mscorlib.dll::System::Exception::Exception__ctor_1(this_01,message,method_00);
  func_?(&MethodInfo__MVLocalPlayer__SetActiveSpawnRole_int_);
  func_?(this_01);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void SetupPlayerWorldObjects(Int32, SpawnRolesRuntimeData) */

void Assembly-CSharp.dll::MVLocalPlayer::MVLocalPlayer_SetupPlayerWorldObjects
               (MVLocalPlayer *this,int32_t defaultBodyWoId,
               SpawnRolesRuntimeData *spawnRolesRuntimeData,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__MVLocalPlayer__SpawnRoleModeOnOnChange_MV__Common__SpawnRoleModeType_
                   );
    func_?(&TypeInfo__SpawnRoleChangeHandlerLocal);
    func_?(&
                    MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<MV::Common::SpawnRoleModeType>__add_OnChange_Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable_1_T___SubDelegate<MV::Common::SpawnRoleModeType>_
                   );
    func_?(&
                    TypeInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable_1_T___SubDelegate<MV::Common::SpawnRoleModeType>
                   );
    cRam_? = '\x01';
  }
  (this->fields).defaultBodyWoId = defaultBodyWoId;
  pOVar1 = (Object__Class *)(this->fields).spawnRoleDataMediator;
  value = (Object *)func_?(TypeInfo__SpawnRoleChangeHandlerLocal);
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataMediator
                   );
    cRam_? = '\x01';
  }
  this_01 = (Object__Class *)
            func_?(
                           TypeInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataMediator
                           );
  Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::Mediator::SpawnRoleDataMediator::
  SpawnRoleDataMediator__ctor((SpawnRoleDataMediator *)this_01,(MethodInfo *)0x0);
  method_00 = (MethodInfo *)(value + 1);
  value[1].klass = this_01;
  func_?(method_00,this_01);
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            (value,ExceptionArgument__Enum_obj,method_00);
  value[1].klass = pOVar1;
  func_?(value + 1,pOVar1);
  if (cRam_? == '\0') {
    func_?(&TypeInfo__SpawnRolesManager);
    cRam_? = '\x01';
  }
  method_01 = TypeInfo__SpawnRolesManager;
  value_00 = (SpawnRolesManager *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            ((Object *)value_00,ExceptionArgument__Enum_obj,(MethodInfo *)method_01);
  (value_00->fields).spawnRolesRuntimeData = spawnRolesRuntimeData;
  func_?(&value_00->fields,spawnRolesRuntimeData);
  (value_00->fields).spawnRoleChangeHandler = (ISpawnRoleChangeHandler *)value;
  func_?(&(value_00->fields).spawnRoleChangeHandler,value);
  (this->fields)._.spawnRolesManager = value_00;
  func_?(&(this->fields)._.spawnRolesManager,value_00);
  pSVar2 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                     ((MethodInfo *)0x0);
  if (pSVar2 != (SpawnRoleDataMediator *)0x0) {
    this_00 = (SpawnRoleVariable_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)
              (pSVar2->fields).spawnRoleMode;
    value_01 = (SpawnRoleVariable_1_T_SubDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                *)func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
    UnityAction_1_System_Int32Enum___ctor
              ((UnityAction_1_System_Int32Enum_ *)value_01,(Object *)this,
               MethodInfo__MVLocalPlayer__SpawnRoleModeOnOnChange_MV__Common__SpawnRoleModeType_,
               (MethodInfo *)0x0);
    if (this_00 != (SpawnRoleVariable_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)0x0) {
      Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::
      SpawnRoleVariable`1[Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]::
      SpawnRoleVariable_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType__add_OnChange
                (this_00,value_01,
                 MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<MV::Common::SpawnRoleModeType>__add_OnChange_Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable_1_T___SubDelegate<MV::Common::SpawnRoleModeType>_
                );
      return;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void SpawnRoleModeOnOnChange(SpawnRoleModeType) */

void Assembly-CSharp.dll::MVLocalPlayer::MVLocalPlayer_SpawnRoleModeOnOnChange
               (MVLocalPlayer *this,SpawnRoleModeType__Enum value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__MVLocalPlayer__SpawnRoleModeOnOnChange_MV__Common__SpawnRoleModeType_
                   );
    func_?(&
                    MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<MV::Common::SpawnRoleModeType>__remove_OnChange_Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable_1_T___SubDelegate<MV::Common::SpawnRoleModeType>_
                   );
    func_?(&
                    TypeInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable_1_T___SubDelegate<MV::Common::SpawnRoleModeType>
                   );
    cRam_? = '\x01';
  }
  if (value != SpawnRoleModeType__Enum_Playing) {
    return;
  }
  pSVar1 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                     ((MethodInfo *)0x0);
  if (pSVar1 != (SpawnRoleDataMediator *)0x0) {
    this_00 = (SpawnRoleVariable_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)
              (pSVar1->fields).spawnRoleMode;
    value_00 = (SpawnRoleVariable_1_T_SubDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                *)func_?(
                                 TypeInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable_1_T___SubDelegate<MV::Common::SpawnRoleModeType>
                                 );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
    UnityAction_1_System_Int32Enum___ctor
              ((UnityAction_1_System_Int32Enum_ *)value_00,(Object *)this,
               MethodInfo__MVLocalPlayer__SpawnRoleModeOnOnChange_MV__Common__SpawnRoleModeType_,
               (MethodInfo *)0x0);
    if (this_00 != (SpawnRoleVariable_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)0x0) {
      Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::
      SpawnRoleVariable`1[Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]::
      SpawnRoleVariable_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType__remove_OnChange
                (this_00,value_00,
                 MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<MV::Common::SpawnRoleModeType>__remove_OnChange_Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable_1_T___SubDelegate<MV::Common::SpawnRoleModeType>_
                );
      this_01 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
      if (this_01 != (MVNetworkGame_OperationRequests *)0x0) {
        MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_IncrementStatRequest
                  (this_01,IncrementStatRequestType__Enum_PlayerHasEnteredWorldFirstTime,0,
                   (MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SuspendCurrentSpawnRole() */

void Assembly-CSharp.dll::MVLocalPlayer::MVLocalPlayer_SuspendCurrentSpawnRole
               (MVLocalPlayer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__ISpawnRoleLocal);
    cRam_? = '\x01';
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  pSVar2 = (this->fields)._.spawnRolesManager;
  if (((pSVar2 != (SpawnRolesManager *)0x0) &&
      (pSVar3 = (pSVar2->fields).spawnRolesRuntimeData, pSVar3 != (SpawnRolesRuntimeData *)0x0)) &&
     (pMVar1 != (MVWorldObjectClientManager *)0x0)) {
    unaff_EDI = (ISpawnRoleLocal__Class *)(pSVar3->fields).activeSpawnRole;
    if (cRam_? == '\0') {
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__TryGetValue_int__MVWorldObjectClient__
                     );
      cRam_? = '\x01';
    }
    this_00 = (pMVar1->fields).worldObjects;
    this = (MVLocalPlayer *)0x0;
    if (this_00 != (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
      Dictionary_2_System_Int32_System_Object__TryGetValue
                ((Dictionary_2_System_Int32_System_Object_ *)this_00,(int32_t)unaff_EDI,
                 (Object **)&this,
                 MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__TryGetValue_int__MVWorldObjectClient__
                );
      unaff_EDI = TypeInfo__ISpawnRoleLocal;
      if (this != (MVLocalPlayer *)0x0) {
        this = (MVLocalPlayer *)TypeInfo__ISpawnRoleLocal;
        iVar4 = func_?();
        pIVar5 = TypeInfo__ISpawnRoleLocal;
        if (iVar4 != 0) {
          this = (MVLocalPlayer *)TypeInfo__ISpawnRoleLocal;
          iStack6 = func_?();
          unaff_EDI = pIVar5;
          if (iStack6 != 0) {
            method = (MethodInfo *)TypeInfo__ISpawnRoleLocal;
            this = (MVLocalPlayer *)0x2;
            func_?();
            return;
          }
        }
        goto code_?;
      }
    }
  }
  func_?();
code_?:
  this = (MVLocalPlayer *)unaff_EDI;
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void UnSuspendCurrentSpawnRole() */

void Assembly-CSharp.dll::MVLocalPlayer::MVLocalPlayer_UnSuspendCurrentSpawnRole
               (MVLocalPlayer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__ISpawnRoleLocal);
    cRam_? = '\x01';
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  pSVar2 = (this->fields)._.spawnRolesManager;
  if (((pSVar2 != (SpawnRolesManager *)0x0) &&
      (pSVar3 = (pSVar2->fields).spawnRolesRuntimeData, pSVar3 != (SpawnRolesRuntimeData *)0x0)) &&
     (pMVar1 != (MVWorldObjectClientManager *)0x0)) {
    unaff_EDI = (ISpawnRoleLocal__Class *)(pSVar3->fields).activeSpawnRole;
    if (cRam_? == '\0') {
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__TryGetValue_int__MVWorldObjectClient__
                     );
      cRam_? = '\x01';
    }
    this_00 = (pMVar1->fields).worldObjects;
    this = (MVLocalPlayer *)0x0;
    if (this_00 != (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
      Dictionary_2_System_Int32_System_Object__TryGetValue
                ((Dictionary_2_System_Int32_System_Object_ *)this_00,(int32_t)unaff_EDI,
                 (Object **)&this,
                 MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__TryGetValue_int__MVWorldObjectClient__
                );
      unaff_EDI = TypeInfo__ISpawnRoleLocal;
      if (this != (MVLocalPlayer *)0x0) {
        this = (MVLocalPlayer *)TypeInfo__ISpawnRoleLocal;
        iVar4 = func_?();
        pIVar5 = TypeInfo__ISpawnRoleLocal;
        if (iVar4 != 0) {
          this = (MVLocalPlayer *)TypeInfo__ISpawnRoleLocal;
          iStack6 = func_?();
          unaff_EDI = pIVar5;
          if (iStack6 != 0) {
            method = (MethodInfo *)TypeInfo__ISpawnRoleLocal;
            this = (MVLocalPlayer *)0x3;
            func_?();
            return;
          }
        }
        goto code_?;
      }
    }
  }
  func_?();
code_?:
  this = (MVLocalPlayer *)unaff_EDI;
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* MVLocalPlayer(Int32, Int32, String, Int32, UserProfileData) */

void Assembly-CSharp.dll::MVLocalPlayer::MVLocalPlayer__ctor
               (MVLocalPlayer *this,int32_t actorNumber,int32_t profileID,String *regionCode,
               int32_t planetOwnershipTypeID,UserProfileData *userProfileData,MethodInfo *method)

{
  this_00 = this;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__BoostController);
    func_?(&MethodInfo__MVLocalPlayer__OnLevelChangedLocal_int_);
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    func_?(&
                    TypeInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataMediator
                   );
    func_?(&TypeInfo__UnityEngine__Events__UnityAction<int>);
    func_?(&TypeInfo__WorldObjectTypes__Avatar__Local__WorldObjectUseRequirementTracker);
    cRam_? = '\x01';
  }
  this_01 = (BoostController *)func_?(TypeInfo__BoostController);
  BoostController::BoostController__ctor(this_01,(MethodInfo *)0x0);
  (this->fields).boostController = this_01;
  func_?(&(this->fields).boostController,this_01);
  (this->fields).defaultBodyWoId = -1;
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).cctor_finished_or_no_cctor ==
      0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
  }
  pOVar1 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
           ObscuredInt_op_Implicit(&OStack_2,-0xe91,(MethodInfo *)0x0);
  iVar3 = pOVar1->hiddenValue;
  iVar4 = pOVar1->fakeValue;
  bVar5 = pOVar1->inited;
  uVar6 = *(undefined3 *)&pOVar1->field_0xd;
  (this->fields).numberOfTimesDiedInRound.currentCryptoKey = pOVar1->currentCryptoKey;
  (this->fields).numberOfTimesDiedInRound.hiddenValue = iVar3;
  (this->fields).numberOfTimesDiedInRound.fakeValue = iVar4;
  (this->fields).numberOfTimesDiedInRound.inited = bVar5;
  *(undefined3 *)&(this->fields).numberOfTimesDiedInRound.field_0xd = uVar6;
  this_02 = (SpawnRoleDataMediator *)
            func_?(
                           TypeInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataMediator
                           );
  Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::Mediator::SpawnRoleDataMediator::
  SpawnRoleDataMediator__ctor(this_02,(MethodInfo *)0x0);
  (this->fields).spawnRoleDataMediator = this_02;
  func_?(&(this->fields).spawnRoleDataMediator,this_02);
  this_03 = (WorldObjectUseRequirementTracker *)
            func_?(
                           TypeInfo__WorldObjectTypes__Avatar__Local__WorldObjectUseRequirementTracker
                           );
  WorldObjectTypes::Avatar::Local::WorldObjectUseRequirementTracker::
  WorldObjectUseRequirementTracker__ctor(this_03,(MethodInfo *)0x0);
  method_00 = (MethodInfo *)&(this->fields)._WorldObjectUseRequirementTracker_k__BackingField;
  (this->fields)._WorldObjectUseRequirementTracker_k__BackingField = this_03;
  func_?(method_00,this_03);
  bVar5 = UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
          VerticalVirtualizationController`1[System::Object]::
          VerticalVirtualizationController_1_System_Object__get_alwaysRebindOnRefresh
                    ((VerticalVirtualizationController_1_System_Object_ *)0x0,method_00);
  this = (MVLocalPlayer *)CONCAT31(this._1_3_,bVar5);
  MVPlayer::MVPlayer__ctor
            ((MVPlayer *)this_00,actorNumber,profileID,regionCode,(BuildTarget__Enum)this,
             userProfileData,0,0,(MethodInfo *)0x0);
  pUVar7 = (this_00->fields)._.OnLevelChanged;
  pUStack8 = TypeInfo__UnityEngine__Events__UnityAction<int>;
  this_04 = (UnityAction_1_System_Int32Enum_ *)func_?();
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
  UnityAction_1_System_Int32Enum___ctor
            (this_04,(Object *)this_00,MethodInfo__MVLocalPlayer__OnLevelChangedLocal_int_,
             (MethodInfo *)0x0);
  pDVar9 = mscorlib.dll::System::Delegate::Delegate_Combine
                     ((Delegate *)pUVar7,(Delegate *)this_04,(MethodInfo *)0x0);
  pUVar10 = TypeInfo__UnityEngine__Events__UnityAction<int>;
  if (pDVar9 == (Delegate *)0x0) {
    (this_00->fields)._.OnLevelChanged = (UnityAction_1_System_Int32_ *)0x0;
    pUStack11 = (UnityAction_1_System_Int32___Class *)0x0;
code_?:
    pDStack12 = (Delegate *)&(this_00->fields)._.OnLevelChanged;
    func_?();
    (this_00->fields).planetOwnershipTypeID = planetOwnershipTypeID;
    this_05 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (this_05 != (MVNetworkGame *)0x0) {
      iVar3 = MVNetworkGame::MVNetworkGame_get_ServerTimeInMilliSeconds(this_05,(MethodInfo *)0x0);
      (this_00->fields).joinTime = iVar3;
      return;
    }
  }
  else {
    pUStack11 = TypeInfo__UnityEngine__Events__UnityAction<int>;
    pDStack12 = pDVar9;
    pUVar7 = (UnityAction_1_System_Int32_ *)func_?();
    if (pUVar7 != (UnityAction_1_System_Int32_ *)0x0) {
      (this_00->fields)._.OnLevelChanged = pUVar7;
      pUVar10 = TypeInfo__UnityEngine__Events__UnityAction<int>;
      pUStack11 = TypeInfo__UnityEngine__Events__UnityAction<int>;
      pDStack12 = pDVar9;
      pUStack11 = (UnityAction_1_System_Int32___Class *)func_?();
      if (pUStack11 != (UnityAction_1_System_Int32___Class *)0x0) goto code_?;
    }
    pDStack12 = pDVar9;
    pUStack11 = pUVar10;
    func_?();
  }
  func_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* MVAvatarLocal get_AvatarLocal() */

MVAvatarLocal *
Assembly-CSharp.dll::MVLocalPlayer::MVLocalPlayer_get_AvatarLocal
          (MVLocalPlayer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVAvatarLocal);
    cRam_? = '\x01';
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  pSVar2 = (this->fields)._.spawnRolesManager;
  if (((pSVar2 != (SpawnRolesManager *)0x0) &&
      (pSVar3 = (pSVar2->fields).spawnRolesRuntimeData, pSVar3 != (SpawnRolesRuntimeData *)0x0)) &&
     (pMVar1 != (MVWorldObjectClientManager *)0x0)) {
    key = (pSVar3->fields).activeSpawnRole;
    if (cRam_? == '\0') {
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__TryGetValue_int__MVWorldObjectClient__
                     );
      cRam_? = '\x01';
    }
    this_00 = (pMVar1->fields).worldObjects;
    this = (MVLocalPlayer *)0x0;
    if (this_00 != (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
      Dictionary_2_System_Int32_System_Object__TryGetValue
                ((Dictionary_2_System_Int32_System_Object_ *)this_00,key,(Object **)&this,
                 MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__TryGetValue_int__MVWorldObjectClient__
                );
      if (((this != (MVLocalPlayer *)0x0) &&
          ((TypeInfo__MVAvatarLocal->_1).naturalAligment <= (this->klass->_1).naturalAligment)) &&
         ((MVAvatarLocal__Class *)
          (this->klass->_1).typeHierarchy[(TypeInfo__MVAvatarLocal->_1).naturalAligment - 1] ==
          TypeInfo__MVAvatarLocal)) {
        return (MVAvatarLocal *)this;
      }
      return (MVAvatarLocal *)0x0;
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  pMVar5 = (MVAvatarLocal *)(*pcVar4)();
  return pMVar5;
}


/* MVBody get_Body() */

MVBody * Assembly-CSharp.dll::MVLocalPlayer::MVLocalPlayer_get_Body
                   (MVLocalPlayer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (this_00 != (MVWorldObjectClientManager *)0x0) {
    pMVar1 = (MVBody *)
             MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient_1
                       (this_00,(this->fields).defaultBodyWoId,
                        MVBody_MethodInfo__MVWorldObjectClientManager__GetWorldObjectClient<MVBody>_int_
                       );
    return pMVar1;
  }
  uVar2 = func_?(&stack0xfffffff4);
  func_?(uVar2);
  pcVar3 = (code *)swi(3);
  pMVar1 = (MVBody *)(*pcVar3)();
  return pMVar1;
}


/* Boolean get_CanGetXPProgressData() */

bool Assembly-CSharp.dll::MVLocalPlayer::MVLocalPlayer_get_CanGetXPProgressData
               (MVLocalPlayer *this,MethodInfo *method)

{
  return (this->fields).xpProgress != (XPProgress *)0x0;
}


/* Int32 get_DefaultSpawnRoleId() */

int32_t Assembly-CSharp.dll::MVLocalPlayer::MVLocalPlayer_get_DefaultSpawnRoleId
                  (MVLocalPlayer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pSVar1 = (this->fields).spawnRolesMetaData;
  if ((pSVar1 != (SpawnRolesMetaData *)0x0) &&
     (this_00 = (Dictionary_2_System_Int32Enum_System_Object_ *)
                (pSVar1->fields).spawnRolesDefaultTypeWoIDMap,
     this_00 != (Dictionary_2_System_Int32Enum_System_Object_ *)0x0)) {
    pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
             Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                       (this_00,0,
                        MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::SpawnRoles::DefaultSpawnRoleType,_int>__get_Item_MV__WorldObject__SpawnRoles__DefaultSpawnRoleType_
                       );
    return (int32_t)pOVar2;
  }
  uVar3 = func_?(&stack0xfffffff0);
  func_?(uVar3);
  pcVar4 = (code *)swi(3);
  iVar5 = (*pcVar4)();
  return iVar5;
}


/* Boolean get_IsAdmin() */

bool Assembly-CSharp.dll::MVLocalPlayer::MVLocalPlayer_get_IsAdmin
               (MVLocalPlayer *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  if ((this->fields)._._ProfileID_k__BackingField < 1) {
    return 0;
  }
  pUVar2 = (this->fields)._._UserProfileData_k__BackingField;
  if (pUVar2 != (UserProfileData *)0x0) {
    return (pUVar2->fields).IsAdmin;
  }
  uVar3 = func_?(auStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  bVar6 = (*pcVar5)();
  return bVar6;
}


/* Boolean get_IsChatLocked() */

bool Assembly-CSharp.dll::MVLocalPlayer::MVLocalPlayer_get_IsChatLocked
               (MVLocalPlayer *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  if ((this->fields)._._ProfileID_k__BackingField == 0) {
    return 1;
  }
  pUVar2 = (this->fields)._._UserProfileData_k__BackingField;
  if (pUVar2 != (UserProfileData *)0x0) {
    return (pUVar2->fields).IsUnderAge;
  }
  uVar3 = func_?(auStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  bVar6 = (*pcVar5)();
  return bVar6;
}


/* MVLocalPlayer+PlanetOwnershipType get_PlanetOwnership() */

MVLocalPlayer_PlanetOwnershipType__Enum
Assembly-CSharp.dll::MVLocalPlayer::MVLocalPlayer_get_PlanetOwnership
          (MVLocalPlayer *this,MethodInfo *method)

{
  MVar1 = MVGameControllerBase::MVGameControllerBase_get_GameMode((MethodInfo *)0x0);
  if (MVar1 == MVGameMode__Enum_Edit) {
    return (this->fields).planetOwnershipTypeID;
  }
  uVar2 = func_?(&TypeInfo__System__Exception);
  this_00 = (Exception *)func_?(uVar2);
  method_00 = (MethodInfo *)0x0;
  message = (String *)func_?(&StringLiteral_There_are_currently_no_way_to_ac);
  mscorlib.dll::System::Exception::Exception__ctor_1(this_00,message,method_00);
  func_?(&MethodInfo__MVLocalPlayer__get_PlanetOwnershipTypeID__);
  func_?();
  pcVar3 = (code *)swi(3);
  MVar4 = (*pcVar3)();
  return MVar4;
}


/* Single get_RespawnDuration() */

float Assembly-CSharp.dll::MVLocalPlayer::MVLocalPlayer_get_RespawnDuration
                (MVLocalPlayer *this,MethodInfo *method)

{
  return _UNK_?;
}


/* Single get_RespawnTime() */

float Assembly-CSharp.dll::MVLocalPlayer::MVLocalPlayer_get_RespawnTime
                (MVLocalPlayer *this,MethodInfo *method)

{
  return (this->fields).respawnTime;
}


/* Single get_ReviveTimeout() */

float Assembly-CSharp.dll::MVLocalPlayer::MVLocalPlayer_get_ReviveTimeout
                (MVLocalPlayer *this,MethodInfo *method)

{
  return _UNK_?;
}


/* Void set_PlayerPlanetData(PlayerPlanetData) */

void Assembly-CSharp.dll::MVLocalPlayer::MVLocalPlayer_set_PlayerPlanetData
               (MVLocalPlayer *this,PlayerPlanetData *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MV__WorldObject__GamePassSystem__PlayerPlanetDataRemote);
    cRam_? = '\x01';
  }
  (this->fields).playerPlanetData = value;
  func_?(&(this->fields).playerPlanetData,value);
  pPVar1 = (this->fields).playerPlanetData;
  if (pPVar1 != (PlayerPlanetData *)0x0) {
    ptr = (void *)(pPVar1->fields).highScoreGamePoints;
    owner = (((this->fields).playerPlanetData)->fields).gamePassTier;
    this_00 = (VFXSpawnerState *)
              func_?(TypeInfo__MV__WorldObject__GamePassSystem__PlayerPlanetDataRemote);
    UnityEngine.VFXModule.dll::UnityEngine::VFX::VFXSpawnerState::VFXSpawnerState__ctor
              (this_00,ptr,owner,(MethodInfo *)0x0);
    (this->fields)._.playerPlanetDataRemote = (PlayerPlanetDataRemote *)this_00;
    func_?(&(this->fields)._.playerPlanetDataRemote,this_00);
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void set_RespawnTime(Single) */

void Assembly-CSharp.dll::MVLocalPlayer::MVLocalPlayer_set_RespawnTime
               (MVLocalPlayer *this,float value,MethodInfo *method)

{
  (this->fields).respawnTime = value;
  return;
}

