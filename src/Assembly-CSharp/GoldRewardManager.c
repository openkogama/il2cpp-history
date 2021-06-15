
/* Boolean CanGetGoldReward() */

bool Assembly-CSharp.dll::GoldRewardManager::GoldRewardManager_CanGetGoldReward
               (GoldRewardManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVClientSettings->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVClientSettings->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVClientSettings);
  }
  bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
          Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
          Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__System_Collections_IDictionary_get_IsReadOnly
                    ((Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                      *)0x0,unaff_ESI);
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  MVar2 = MVGameControllerBase::MVGameControllerBase_get_GameMode((MethodInfo *)0x0);
  bVar3 = MVGameControllerBase::MVGameControllerBase_get_IsTouristSession((MethodInfo *)0x0);
  if ((((bVar1 != 0) && ((this->fields).isGoldRewardGame != 0)) &&
      ((this->fields).isGoldRewardDone == 0)) && (MVar2 == MVGameMode__Enum_Play)) {
    return bVar3 == 0;
  }
  return 0;
}


/* Single GetGoldRewardCountdownProgressPercentage() */

float Assembly-CSharp.dll::GoldRewardManager::
      GoldRewardManager_GetGoldRewardCountdownProgressPercentage
                (GoldRewardManager *this,MethodInfo *method)

{
  fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  return (fVar1 - (this->fields).startTime) / _UNK_?;
}


/* Single GetGoldRewardTimeLeft() */

float Assembly-CSharp.dll::GoldRewardManager::GoldRewardManager_GetGoldRewardTimeLeft
                (GoldRewardManager *this,MethodInfo *method)

{
  fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  fVar2 = _UNK_? - (fVar1 - (this->fields).startTime);
  fVar1 = 0.0;
  if (0.0 <= fVar2) {
    fVar1 = fVar2;
  }
  return fVar1;
}


/* Void Initialize(Boolean) */

void Assembly-CSharp.dll::GoldRewardManager::GoldRewardManager_Initialize
               (GoldRewardManager *this,bool isGoldRewardGame,MethodInfo *method)

{
  (this->fields).isGoldRewardGame = isGoldRewardGame;
  return;
}


/* Void OnAvatarChangeState(SpawnRoleModeType) */

void Assembly-CSharp.dll::GoldRewardManager::GoldRewardManager_OnAvatarChangeState
               (GoldRewardManager *this,SpawnRoleModeType__Enum avatarMode,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (avatarMode != SpawnRoleModeType__Enum_Playing) {
    return;
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                      ((MethodInfo *)0x0);
  if (this_00 != (SpawnRoleDataMediator *)0x0) {
    this_01 = (SpawnRoleVariable_1_UnityEngine_Vector3_ *)
              System.Core.dll::System::Linq::
              Enumerable+<CreateWhereIterator>c__Iterator1D`1[Newtonsoft::Json::Schema::
              JsonSchemaType]::
              Enumerable_CreateWhereIterator_c_Iterator1D_1_Newtonsoft_Json_Schema_JsonSchemaType__System_Collections_Generic_IEnumerator_TSource__get_Current
                        ((Enumerable_CreateWhereIterator_c_Iterator1D_1_Newtonsoft_Json_Schema_JsonSchemaType_
                          *)this_00,(MethodInfo *)0x0);
    this_02 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?(
                             TypeInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable_1_T___SubDelegate<MV::Common::SpawnRoleModeType>
                             );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_02,(Object *)this,
               MethodInfo__GoldRewardManager__OnAvatarChangeState_MV__Common__SpawnRoleModeType_,
               MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable_1_T___SubDelegate<MV::Common::SpawnRoleModeType>__SubDelegate_System__Object__void__
              );
    if (this_01 != (SpawnRoleVariable_1_UnityEngine_Vector3_ *)0x0) {
      Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::
      SpawnRoleVariable`1[UnityEngine::Vector3]::
      SpawnRoleVariable_1_UnityEngine_Vector3__remove_OnChange
                (this_01,(SpawnRoleVariable_1_T_SubDelegate_UnityEngine_Vector3_ *)this_02,
                 MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<MV::Common::SpawnRoleModeType>__remove_OnChange_Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable_1_T___SubDelegate<MV::Common::SpawnRoleModeType>_
                );
      fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
      (this->fields).isCountingDownGoldReward = 1;
      (this->fields).startTime = fVar1;
      return;
    }
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void OnClaimGoldReward() */

void Assembly-CSharp.dll::GoldRewardManager::GoldRewardManager_OnClaimGoldReward
               (GoldRewardManager *this,MethodInfo *method)

{
  (this->fields).isCountingDownGoldReward = 0;
  (this->fields).isGoldRewardDone = 1;
  return;
}


/* Void StartGoldRewardCountdown() */

void Assembly-CSharp.dll::GoldRewardManager::GoldRewardManager_StartGoldRewardCountdown
               (GoldRewardManager *this,MethodInfo *method)

{
  fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  (this->fields).startTime = fVar1;
  (this->fields).isCountingDownGoldReward = 1;
  return;
}


/* Void StartGoldRewardCountdownWhenReady() */

void Assembly-CSharp.dll::GoldRewardManager::GoldRewardManager_StartGoldRewardCountdownWhenReady
               (GoldRewardManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                      ((MethodInfo *)0x0);
  if (this_00 != (SpawnRoleDataMediator *)0x0) {
    this_01 = (SpawnRoleVariable_1_UnityEngine_Vector3_ *)
              System.Core.dll::System::Linq::
              Enumerable+<CreateWhereIterator>c__Iterator1D`1[Newtonsoft::Json::Schema::
              JsonSchemaType]::
              Enumerable_CreateWhereIterator_c_Iterator1D_1_Newtonsoft_Json_Schema_JsonSchemaType__System_Collections_Generic_IEnumerator_TSource__get_Current
                        ((Enumerable_CreateWhereIterator_c_Iterator1D_1_Newtonsoft_Json_Schema_JsonSchemaType_
                          *)this_00,(MethodInfo *)0x0);
    this_02 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?(
                             TypeInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable_1_T___SubDelegate<MV::Common::SpawnRoleModeType>
                             );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_02,(Object *)this,
               MethodInfo__GoldRewardManager__OnAvatarChangeState_MV__Common__SpawnRoleModeType_,
               MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable_1_T___SubDelegate<MV::Common::SpawnRoleModeType>__SubDelegate_System__Object__void__
              );
    if (this_01 != (SpawnRoleVariable_1_UnityEngine_Vector3_ *)0x0) {
      Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::
      SpawnRoleVariable`1[UnityEngine::Vector3]::
      SpawnRoleVariable_1_UnityEngine_Vector3__add_OnChange
                (this_01,(SpawnRoleVariable_1_T_SubDelegate_UnityEngine_Vector3_ *)this_02,
                 MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<MV::Common::SpawnRoleModeType>__add_OnChange_Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable_1_T___SubDelegate<MV::Common::SpawnRoleModeType>_
                );
      return;
    }
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Boolean get_IsCountingDownGoldReward() */

bool Assembly-CSharp.dll::GoldRewardManager::GoldRewardManager_get_IsCountingDownGoldReward
               (GoldRewardManager *this,MethodInfo *method)

{
  return (this->fields).isCountingDownGoldReward;
}


/* Boolean get_IsGoldRewardDone() */

bool Assembly-CSharp.dll::GoldRewardManager::GoldRewardManager_get_IsGoldRewardDone
               (GoldRewardManager *this,MethodInfo *method)

{
  return (this->fields).isGoldRewardDone;
}

