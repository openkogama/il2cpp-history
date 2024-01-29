
/* Void HandleActorReadyMetric() */

void Assembly-CSharp.dll::MVNetworkGame+EventHandling::
     MVNetworkGame_EventHandling_HandleActorReadyMetric
               (MVNetworkGame_EventHandling *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__DateTime);
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&TypeInfo__MV__Common__MVGameMode);
    func_?(&TypeInfo__MV__Common__MVGameType);
    func_?(&TypeInfo__MVJoinState);
    func_?(&TypeInfo__StatHatWrapper);
    func_?(&TypeInfo__System__TimeSpan);
    func_?(&StringLiteral_CompleteJoinTime_);
    func_?(&StringLiteral_SessionType_Embedded);
    func_?(&StringLiteral_SessionType_TouristEmbedded);
    func_?(&StringLiteral_CompleteJoinTime_);
    func_?(&StringLiteral_SessionType_Tourist);
    func_?(&StringLiteral_JoinTime_);
    func_?(&StringLiteral_SessionType_);
    func_?(&StringLiteral_JoinAndInitializationTime);
    func_?(&StringLiteral_JoinAndInitializationTime_);
    func_?(&StringLiteral_JoinAndInitializationTime_);
    func_?(&StringLiteral_CompleteJoinTime);
    func_?(&StringLiteral_JoinTime);
    cRam_? = '\x01';
  }
  SStack_1.m_value = 0.0;
  SStack_2.m_value = 0.0;
  pSVar3 = mscorlib.dll::System::Enum::Enum_ToString((Enum *)&stack0xffffffc8,(MethodInfo *)0x0);
  if ((TypeInfo__StatHatWrapper->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__StatHatWrapper);
  }
  StatHatWrapper::StatHatWrapper_Count(pSVar3,1,(MethodInfo *)0x0);
  if ((TypeInfo__System__DateTime->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  DStack_4 = mscorlib.dll::System::DateTime::DateTime_get_UtcNow((MethodInfo *)0x0);
  uStack_5._0_4_ = 0;
  uStack_5._4_4_ = 0.0;
  mscorlib.dll::System::DateTime::DateTime__ctor_6
            ((DateTime *)&uStack_5,0x7b2,1,1,0,0,0,DateTimeKind__Enum_Utc,(MethodInfo *)0x0);
  value._dateData._4_4_ = 0;
  value._dateData._0_4_ = uStack_5._4_4_;
  mscorlib.dll::System::DateTime::DateTime_Subtract(&DStack_4,value,in_stack_6);
  if ((TypeInfo__System__TimeSpan->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  dStack_7 = mscorlib.dll::System::TimeSpan::TimeSpan_get_TotalMilliseconds
                        ((TimeSpan *)&stack0xffffffd4,(MethodInfo *)0x0);
  pLVar8 = MVGameControllerBase::MVGameControllerBase_get_LoadStats((MethodInfo *)0x0);
  if (pLVar8 == (LoadStats *)0x0) goto code_?;
  if (0.0 < (pLVar8->fields).DOMReady) {
    pLVar8 = MVGameControllerBase::MVGameControllerBase_get_LoadStats((MethodInfo *)0x0);
    if (pLVar8 == (LoadStats *)0x0) goto code_?;
    SStack_1.m_value = (float)(dStack_7 - (pLVar8->fields).DOMReady);
    pSVar3 = mscorlib.dll::System::Single::Single_ToString(&SStack_1,(MethodInfo *)0x0);
    pSVar3 = mscorlib.dll::System::String::String_Concat_3
                       (StringLiteral_CompleteJoinTime_,pSVar3,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log((Object *)pSVar3,(MethodInfo *)0x0);
    uStack_5._4_4_ = SStack_1.m_value;
    if ((0.0 < SStack_1.m_value) && (SStack_1.m_value < _UNK_?)) {
      if ((TypeInfo__StatHatWrapper->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      StatHatWrapper::StatHatWrapper_Value_1
                (StringLiteral_CompleteJoinTime,uStack_5._4_4_,(MethodInfo *)0x0);
      MVGameControllerBase::MVGameControllerBase_get_GameMode((MethodInfo *)0x0);
      pSVar3 = mscorlib.dll::System::Enum::Enum_ToString((Enum *)&stack0xffffffc8,(MethodInfo *)0x0)
      ;
      pSVar3 = mscorlib.dll::System::String::String_Concat_3
                         (StringLiteral_CompleteJoinTime_,pSVar3,(MethodInfo *)0x0);
      StatHatWrapper::StatHatWrapper_Value_1(pSVar3,SStack_1.m_value,(MethodInfo *)0x0);
    }
  }
  pLVar8 = MVGameControllerBase::MVGameControllerBase_get_LoadStats((MethodInfo *)0x0);
  if (pLVar8 == (LoadStats *)0x0) goto code_?;
  if (0.0 < (pLVar8->fields).PluginInit) {
    pLVar8 = MVGameControllerBase::MVGameControllerBase_get_LoadStats((MethodInfo *)0x0);
    if (pLVar8 == (LoadStats *)0x0) goto code_?;
    SStack_2.m_value = (float)(dStack_7 - (pLVar8->fields).PluginInit);
    pSVar3 = mscorlib.dll::System::Single::Single_ToString(&SStack_2,(MethodInfo *)0x0);
    pSVar3 = mscorlib.dll::System::String::String_Concat_3
                       (StringLiteral_JoinAndInitializationTime_,pSVar3,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log((Object *)pSVar3,(MethodInfo *)0x0);
    uStack_5._4_4_ = SStack_2.m_value;
    if ((0.0 < SStack_2.m_value) && (SStack_2.m_value < _UNK_?)) {
      if ((TypeInfo__StatHatWrapper->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      StatHatWrapper::StatHatWrapper_Value_1
                (StringLiteral_JoinAndInitializationTime,uStack_5._4_4_,(MethodInfo *)0x0);
      MVGameControllerBase::MVGameControllerBase_get_GameMode((MethodInfo *)0x0);
      pSVar3 = mscorlib.dll::System::Enum::Enum_ToString((Enum *)&stack0xffffffc8,(MethodInfo *)0x0)
      ;
      pSVar3 = mscorlib.dll::System::String::String_Concat_3
                         (StringLiteral_JoinAndInitializationTime_,pSVar3,(MethodInfo *)0x0);
      StatHatWrapper::StatHatWrapper_Value_1(pSVar3,SStack_2.m_value,(MethodInfo *)0x0);
    }
  }
  pLVar8 = MVGameControllerBase::MVGameControllerBase_get_LoadStats((MethodInfo *)0x0);
  if (pLVar8 == (LoadStats *)0x0) goto code_?;
  if (0.0 < (pLVar8->fields).GameStartTime) {
    pLVar8 = MVGameControllerBase::MVGameControllerBase_get_LoadStats((MethodInfo *)0x0);
    if (pLVar8 == (LoadStats *)0x0) goto code_?;
    uStack_5._4_4_ = (float)(dStack_7 - (pLVar8->fields).GameStartTime);
    if ((0.0 < uStack_5._4_4_) && (uStack_5._4_4_ < _UNK_?)) {
      if ((TypeInfo__StatHatWrapper->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      StatHatWrapper::StatHatWrapper_Value_1
                (StringLiteral_JoinTime,uStack_5._4_4_,(MethodInfo *)0x0);
      MVGameControllerBase::MVGameControllerBase_get_GameMode((MethodInfo *)0x0);
      pSVar3 = mscorlib.dll::System::Enum::Enum_ToString((Enum *)&stack0xffffffc8,(MethodInfo *)0x0)
      ;
      pSVar3 = mscorlib.dll::System::String::String_Concat_3
                         (StringLiteral_JoinTime_,pSVar3,(MethodInfo *)0x0);
      StatHatWrapper::StatHatWrapper_Value_1(pSVar3,uStack_5._4_4_,(MethodInfo *)0x0);
    }
  }
  bVar9 = MVGameControllerBase::MVGameControllerBase_get_IsTouristSession((MethodInfo *)0x0);
  if (bVar9 == 0) {
    if (_UNK_? == 0) goto code_?;
    pSVar3 = mscorlib.dll::System::Enum::Enum_ToString((Enum *)&stack0xffffffc8,(MethodInfo *)0x0);
    pSVar3 = mscorlib.dll::System::String::String_Concat_3
                       (StringLiteral_SessionType_,pSVar3,(MethodInfo *)0x0);
    if ((TypeInfo__StatHatWrapper->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    StatHatWrapper::StatHatWrapper_Count(pSVar3,1,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    pGVar10 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
    if (pGVar10 == (GameSessionData *)0x0) goto code_?;
    if ((pGVar10->fields).embedded != 0) {
      if (_UNK_? == 0) goto code_?;
      str1 = mscorlib.dll::System::Enum::Enum_ToString((Enum *)&stack0xffffffc8,(MethodInfo *)0x0);
      pSVar3 = StringLiteral_SessionType_Embedded;
code_?:
      pSVar3 = mscorlib.dll::System::String::String_Concat_3(pSVar3,str1,(MethodInfo *)0x0);
      if ((TypeInfo__StatHatWrapper->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      StatHatWrapper::StatHatWrapper_Count(pSVar3,1,(MethodInfo *)0x0);
    }
  }
  else {
    if (_UNK_? == 0) goto code_?;
    pSVar3 = mscorlib.dll::System::Enum::Enum_ToString((Enum *)&stack0xffffffc8,(MethodInfo *)0x0);
    pSVar3 = mscorlib.dll::System::String::String_Concat_3
                       (StringLiteral_SessionType_Tourist,pSVar3,(MethodInfo *)0x0);
    if ((TypeInfo__StatHatWrapper->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    StatHatWrapper::StatHatWrapper_Count(pSVar3,1,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    pGVar10 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
    if (pGVar10 == (GameSessionData *)0x0) goto code_?;
    if ((pGVar10->fields).embedded != 0) {
      if (_UNK_? == 0) goto code_?;
      str1 = mscorlib.dll::System::Enum::Enum_ToString((Enum *)&stack0xffffffc8,(MethodInfo *)0x0);
      pSVar3 = StringLiteral_SessionType_TouristEmbedded;
      goto code_?;
    }
  }
  pMVar11 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
  if (pMVar11 != (MVNetworkGame_OperationRequests *)0x0) {
    if (cRam_? == '\0') {
      func_?();
      func_?();
      func_?();
      func_?();
      func_?();
      func_?();
      cRam_? = '\x01';
    }
    this_00 = (Dictionary_2_System_Byte_System_Object_ *)func_?();
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object___ctor
              (this_00,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
              );
    uStack_5._4_4_ = 5.60519e-45;
    value_00 = (Object *)func_?();
    if (this_00 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
      Dictionary_2_System_Byte_System_Object__Add
                (this_00,0xbf,value_00,
                 MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                );
      pPVar12 = (pMVar11->fields).peer;
      if ((TypeInfo__ExitGames__Client__Photon__SendOptions->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      if (pPVar12 != (PhotonPeer *)0x0) {
        (*(code *)(pPVar12->klass->vtable).SendOperation.method)();
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


/* WARNING: Instruction at (ram,0xADDR) overlaps instruction at (ram,0xADDR)
    */
/* Void HandleEvent(MVEventCodes, EventData) */

void Assembly-CSharp.dll::MVNetworkGame+EventHandling::MVNetworkGame_EventHandling_HandleEvent
               (MVNetworkGame_EventHandling *this,MVEventCodes__Enum eventCode,
               EventData *photonEvent,MethodInfo *method)

{
  uint *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  MVWorldObjectClientManagerNetwork *pMVar4;
  void *pvVar5;
  Il2CppArrayType *pIVar6;
  undefined4 uVar7;
  MVTeam__Enum team;
  MVNetworkGame_EventHandling_c *object;
  float fVar8;
  Object__Array *args;
  RuntimeEventManagerNetwork *this_00;
  WorldNetwork *pWVar9;
  RuntimeEventManager *this_01;
  GameStatCounterManager *pGVar10;
  MvAvatarMetaDataWoMap *this_02;
  MVGameCoinManager *pMVar11;
  Il2CppImage *pIVar12;
  PhotonPeer *pPVar13;
  SendOptions__StaticFields *pSVar14;
  MVNetworkGame_LogicObjectManagerClientWrapper *pMVar15;
  MVLocalObjectController *pMVar16;
  int32_t iVar17;
  ProfileSettingsState *profileSettingsState;
  MVPlayerContainer *pMVar18;
  LevelRewardsManager *pLVar19;
  uint32_t uVar20;
  SpawnRolesManager *this_03;
  Il2CppClass *pIVar21;
  FriendList *this_04;
  Object__Class *pOVar22;
  undefined4 uVar23;
  Vector3 position;
  Vector3 camOrigin;
  Quaternion rotation;
  Vector3 camDir;
  uint32_t *puVar24;
  Il2CppType *handle;
  MVEventCodes__Enum this_05;
  EventData *this_06;
  bool bVar25;
  byte bVar26;
  byte bVar27;
  RuntimePrototypeCubeModel *pRVar28;
  FriendStatus__Enum *pFVar29;
  PickupItemState__Enum *pPVar30;
  Object *pOVar31;
  MVGameMsgType__Enum *pMVar32;
  MVTeam__Enum *pMVar33;
  MVWorldObject *pMVar34;
  byte *pbVar35;
  float *pfVar36;
  Object *pOVar37;
  Il2CppClass *pIVar38;
  RuntimeEvent *runtimeEvent;
  undefined4 *puVar39;
  Dictionary_2_System_Object_System_Object_ *pDVar40;
  Dictionary_2_System_Object_System_Object_ *pDVar41;
  MVNetworkGame_OperationRequests *pMVar42;
  MVEventCodes__Enum *pMVar43;
  Queue_1_System_Object_ *this_07;
  MVAvatarLocal *this_08;
  MethodInfo *method_00;
  GoldRewardManager *pGVar44;
  String *pSVar45;
  Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *pDVar46;
  undefined1 *puVar47;
  MVLocalPlayer *pMVar48;
  PlayerTierStateCalculator *message;
  ProjectEarningsReport *newProjectEarningReport;
  KogamaVatValues *pKVar49;
  Vector3 *pVVar50;
  Quaternion *pQVar51;
  MVNetworkGame *pMVar52;
  int32_t *piVar53;
  MVPlayer *pMVar54;
  _union_86 _Var55;
  bool *pbVar55;
  Object *pOVar56;
  TextureId TVar57;
  _union_86 *p_Var59;
  MVWorldObjectClientManager *pMVar58;
  MVWorldObjectSpawner *this_09;
  int32_t iVar59;
  uint8_t *puVar60;
  Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
  *pDVar61;
  Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
  *this_10;
  Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
  *pDVar62;
  String *pSVar63;
  _union_86 _Var66;
  undefined4 uVar64;
  undefined1 (*pauVar65) [16];
  uint uVar66;
  int iVar67;
  char *pcVar68;
  uint uVar69;
  undefined3 uVar70;
  uint uVar71;
  byte bVar72;
  byte bVar73;
  String *extraout_ECX;
  String__Class *extraout_ECX_00;
  String__Class *pSVar74;
  String__Class *extraout_ECX_01;
  undefined4 extraout_ECX_02;
  byte bVar75;
  byte bVar76;
  Int32__Class *pIVar77;
  String__Class *extraout_EDX;
  MVAvatarSpawnRoleCreator__Class *extraout_EDX_00;
  MVAvatarSpawnRoleCreator__Class *pMVar78;
  int iVar79;
  byte bVar80;
  byte bVar81;
  byte bVar82;
  byte *unaff_EBX;
  _union_86 unaff_ESI;
  MVNetworkGame_UpdateEvaluator *pMVar83;
  _union_86 unaff_EDI;
  Byte__Array *pBVar84;
  undefined4 *unaff_FS_OFFSET;
  char cVar85;
  bool bVar86;
  bool bVar87;
  bool bVar88;
  byte in_AF;
  undefined1 in_XMM2 [16];
  undefined1 auVar89 [16];
  undefined8 uVar90;
  uint uStackY_fd;
  MethodInfo *pMVar91;
  _union_86 _Stack_54;
  undefined4 uStack_92;
  MVEventCodes__Enum MStack_93;
  _union_86 _Stack_48;
  float fStack_94;
  Vector3 VStack_95;
  _union_86 _Stack_34;
  MVWorldObject *pMStack_96;
  MVPlayer *pMStack_97;
  _union_86 _Stack_28;
  _union_86 _Stack_24;
  Il2CppClass *pIStack_98;
  Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
  *pDStack_99;
  bool bStack_100;
  undefined1 uStack_101;
  undefined1 uStack_102;
  Boolean BStack_103;
  undefined1 *puStack_104;
  void *pvStack_105;
  undefined *puStack_106;
  undefined4 uStack_107;
  byte *pbVar108;
  byte *pbVar109;
  undefined2 uVar110;
  uint *puVar111;
  
  uStack_107 = 0xffffffff;
  puStack_106 = &DAT_?;
  pvStack_105 = (void *)*unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &pvStack_105;
  puStack_104 = &stack0xffffff6c;
  puVar47 = &stack0xffffff6c;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MV__Common__AchievementType);
    func_?(&System__Object__MethodInfo__System__Array__Empty<System::Object>______);
    func_?(&TypeInfo__System__Boolean);
    func_?(&TypeInfo__MV__Common__BuildTarget);
    func_?(&TypeInfo__MV__WorldObject__BytePacker);
    func_?(&TypeInfo__System__Byte);
    func_?(&TypeInfo__System__Byte);
    func_?(&TypeInfo__MVWorldObjectClient__CallBackDelegate);
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Keys__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   );
    func_?(&TypeInfo__System__Enum);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<System::Object,_System::Object>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<System::Object,_System::Object>__get_Current__
                   );
    func_?(&TypeInfo__MV__Common__FriendStatus);
    func_?(&TypeInfo__GamePassesManager);
    func_?(&TypeInfo__HighlightManager);
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__System__Int32);
    func_?(&
                    MV__WorldObject__GoldRewardedForLevelCollection_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::GoldRewardedForLevelCollection>_System__String_
                   );
    func_?(&
                    MV__WorldObject__GoldRewardedForLevelData_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::GoldRewardedForLevelData>_System__String_
                   );
    func_?(&
                    MV__WorldObject__GamePassSystem__HighScoreDatas_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::GamePassSystem::HighScoreDatas>_System__String_
                   );
    func_?(&
                    MV__WorldObject__GamePassSystem__GamePassEarnings__KogamaVatValues_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::GamePassSystem::GamePassEarnings::KogamaVatValues>_System__String_
                   );
    func_?(&
                    MV__WorldObject__GamePassSystem__PlayerGamePassProgressionPackage_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::GamePassSystem::PlayerGamePassProgressionPackage>_System__String_
                   );
    func_?(&
                    MV__WorldObject__GamePassSystem__PlayerPlanetDataRemote_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::GamePassSystem::PlayerPlanetDataRemote>_System__String_
                   );
    func_?(&
                    MV__WorldObject__GamePassSystem__PlayerPlanetData_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::GamePassSystem::PlayerPlanetData>_System__String_
                   );
    func_?(&
                    MV__WorldObject__GamePassSystem__PlayerTierStateCalculator_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::GamePassSystem::PlayerTierStateCalculator>_System__String_
                   );
    func_?(&
                    MV__WorldObject__MetaData__ProfileMetaData_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::MetaData::ProfileMetaData>_System__String_
                   );
    func_?(&
                    MV__WorldObject__GamePassSystem__GamePassEarnings__ProjectEarningsReport_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectEarningsReport>_System__String_
                   );
    func_?(&
                    MV__WorldObject__SpawnRoles__SpawnRoleBodySwitchData_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::SpawnRoles::SpawnRoleBodySwitchData>_System__String_
                   );
    func_?(&
                    MV__WorldObject__SpawnRoles__SpawnRolesRuntimeData_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::SpawnRoles::SpawnRolesRuntimeData>_System__String_
                   );
    func_?(&
                    MV__WorldObject__MetaData__UserProfileData_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::MetaData::UserProfileData>_System__String_
                   );
    func_?(&TypeInfo__Newtonsoft__Json__JsonConvert);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___KeyCollection<System::Object,_System::Object>__GetEnumerator__
                   );
    func_?(&TypeInfo__MVAvatarLocal);
    func_?(&TypeInfo__MVAvatarSpawnRoleCreator);
    func_?(&TypeInfo__MVAvatar);
    func_?(&TypeInfo__MV__Common__MVEventCodes);
    func_?(&TypeInfo__MVPlayer);
    func_?(&TypeRef__MV__WorldObject__MVTeam);
    func_?(&TypeInfo__MV__WorldObject__MVTeam);
    func_?(&TypeInfo__WorldObjectTypes__VehicleEnergy__MVWorldObjectSpawnerVehicleEnergy);
    func_?(&TypeInfo__MVWorldObjectSpawnerVehicle);
    func_?(&TypeInfo__MV__WorldObject__MvAvatarMetaDataWoMap);
    func_?(&TypeInfo__MV__WorldObject__MvAvatarMetaData);
    func_?(&TypeInfo__MV__Common__PlayerGameState);
    func_?(&TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
    func_?(&TypeInfo__MV__Common__QueryType);
    func_?(&TypeInfo__MV__Common__RewardReason);
    func_?(&TypeInfo__MV__Common__RewardType);
    func_?(&TypeInfo__MV__WorldObject__Security__SecurityHelper);
    func_?(&TypeInfo__System__Single);
    func_?(&TypeInfo__SpawnRoleChangeHandlerRemote);
    func_?(&TypeInfo__StatHatWrapper);
    func_?(&TypeInfo__System__String);
    func_?(&TypeInfo__SubscriberRewardDataManager);
    func_?(&TypeInfo__BrowserComm__ToJavaScript);
    func_?(&TypeInfo__System__Type);
    func_?(&
                    MethodInfo__MVNetworkGame_EventHandling____c___HandleEvent_b__10_0_MVWorldObjectClient_
                   );
    func_?(&TypeInfo__MVNetworkGame_EventHandling____c);
    func_?(&StringLiteral_MVEventCodes_JoinNotification);
    func_?(&::StringLiteral___);
    func_?(&StringLiteral__bool_photonEvent__byte_MVParame);
    func_?(&StringLiteral_Received_join_event_for_localPla);
    func_?(&StringLiteral_Server_error__);
    func_?(&StringLiteral_Local_player_leave_event);
    func_?(&StringLiteral_Should_probably_be_behind_an_int);
    func_?(&StringLiteral_V);
    func_?(&StringLiteral_attachedObject_GroupId____vehicl);
    func_?(&StringLiteral_Profile_with_ID__0__unlocked_Ach);
    func_?(&StringLiteral_Fast_forward);
    func_?(&StringLiteral_refreshCredentials);
    func_?(&StringLiteral_Could_not_change_player_game_sta);
    func_?(&StringLiteral_Unknown_event__);
    func_?(&StringLiteral_MVEventCodes_XPReceivedEvent);
    func_?(&StringLiteral_Amount__0___rewardReason__1___re);
    func_?(&StringLiteral_FirstTime_Success);
    func_?(&StringLiteral_MVEventCodes_ForceDetachWorldObj);
    func_?(&StringLiteral_vehicle____null);
    cRam_? = '\x01';
    puVar47 = puStack_104;
  }
  puStack_104 = puVar47;
  _Var55 = (_union_86)photonEvent;
  pMStack_97 = (MVPlayer *)0x0;
  BStack_103.m_value = 0;
  VStack_95.x = 0.0;
  VStack_95.y = 0.0;
  VStack_95.z = 0.0;
  uStack_92 = 0;
  MStack_93 = MVEventCodes__Enum_NoCodeSet;
  _Stack_48.dummy = (Object__Class *)0x0;
  switch(eventCode & MVEventCodes__Enum_Join) {
  case MVEventCodes__Enum_UnregisterWorldObject:
    unaff_ESI = (_union_86)(this->fields).networkGame;
    cVar85 = '\0';
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      pOVar56 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0x16,(MethodInfo *)0x0);
      cVar85 = '\0';
      unaff_EDI = unaff_EDI;
      if ((unaff_ESI.dummy != (void *)0x0) &&
         (cVar85 = '\0', unaff_EDI = unaff_EDI, pOVar56 != (Object *)0x0)) {
        pIVar21 = (pOVar56->klass->_0).element_class;
        pIVar38 = (TypeInfo__System__Int32->_0).element_class;
        cVar85 = pIVar21 < pIVar38;
        pIVar77 = TypeInfo__System__Int32;
        if (pIVar21 == pIVar38) {
          piVar53 = (int32_t *)func_?();
          MVNetworkGame::MVNetworkGame_OnUnregisterWorldObjectEvent
                    ((MVNetworkGame *)unaff_ESI.typeHandle,*piVar53,(MethodInfo *)0x0);
          goto code_?;
        }
        goto code_?;
      }
    }
    break;
  case MVEventCodes__Enum_UpdateWorldObject:
    pMVar52 = (this->fields).networkGame;
    cVar85 = '\0';
    unaff_EDI = unaff_EDI;
    if (pMVar52 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_OnUpdateWorldObjectEvent(pMVar52,photonEvent,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pvStack_105;
      return;
    }
    break;
  case MVEventCodes__Enum_UpdateWorldObjectData:
    pMVar52 = (this->fields).networkGame;
    cVar85 = '\0';
    unaff_EDI = unaff_EDI;
    if (pMVar52 != (MVNetworkGame *)0x0) {
      pWVar9 = (pMVar52->fields).worldNetwork;
      cVar85 = '\0';
      unaff_EDI = unaff_EDI;
      if (pWVar9 != (WorldNetwork *)0x0) {
        unaff_EDI = (_union_86)(pWVar9->fields)._.worldObjectClientManager;
        cVar85 = '\0';
        unaff_ESI = _Var55;
        _Stack_28 = unaff_EDI;
        if (photonEvent != (EventData *)0x0) {
          eventCode = (MVEventCodes__Enum)
                      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                                (photonEvent,0x16,(MethodInfo *)0x0);
          _Var66.dummy = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::
                         EventData_get_Item(_Var55.dummy,0x12,(MethodInfo *)0x0);
          cVar85 = '\0';
          if (unaff_EDI.dummy == (Object__Class *)0x0) break;
          unaff_EDI = (_union_86)
                      TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
          ;
          if (_Var66.dummy == (Object__Class *)0x0) {
            unaff_ESI.dummy = (Object__Class *)0x0;
code_?:
            cVar85 = '\0';
            if (eventCode != MVEventCodes__Enum_NoCodeSet) {
              pIVar38 = (TypeInfo__System__Int32->_0).element_class;
              cVar85 = *(Il2CppClass **)(*(int *)eventCode + 0x20) < pIVar38;
              pSVar45 = (String *)eventCode;
              pSVar74 = (String__Class *)TypeInfo__System__Int32;
              if (*(Il2CppClass **)(*(int *)eventCode + 0x20) == pIVar38) {
                piVar53 = (int32_t *)func_?();
                MVWorldObjectClientManagerNetwork::
                MVWorldObjectClientManagerNetwork_OnUpdateWorldObjectDataEvent
                          ((MVWorldObjectClientManagerNetwork *)_Stack_28.typeHandle,*piVar53,
                           (Dictionary_2_System_Object_System_Object_ *)unaff_ESI.typeHandle,
                           (MethodInfo *)0x0);
                *unaff_FS_OFFSET = pvStack_105;
                return;
              }
              goto code_?;
            }
            break;
          }
          pIVar12 = ((Il2CppClass_0 *)&(_Var66.array)->etype)->image;
          if ((*(byte *)&pIVar12[4].assembly <
               (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->
               _1).naturalAligment) ||
             (*(Dictionary_2_System_Object_System_Object___Class **)
               (pIVar12[2].typeCount +
               ((TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                ->_1).naturalAligment - 1) * 4) !=
              TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
            bVar86 = false;
          }
          else {
            bVar86 = true;
          }
          unaff_ESI.dummy = (Object__Class *)0x0;
          if (bVar86) {
            unaff_ESI.typeHandle = _Var66.typeHandle;
          }
          cVar85 = '\0';
          if (unaff_ESI.dummy != (Object__Class *)0x0) goto code_?;
          goto code_?;
        }
      }
    }
    break;
  case MVEventCodes__Enum_UpdateWorldObjectDataPartial:
    cVar85 = '\0';
    unaff_ESI = _Var55;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      pOVar56 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0x16,(MethodInfo *)0x0);
      cVar85 = '\0';
      unaff_EDI = unaff_EDI;
      if (pOVar56 != (Object *)0x0) {
        pIVar21 = (pOVar56->klass->_0).element_class;
        pIVar38 = (TypeInfo__System__Int32->_0).element_class;
        cVar85 = pIVar21 < pIVar38;
        pIVar77 = TypeInfo__System__Int32;
        if (pIVar21 != pIVar38) goto code_?;
        p_Var59 = (_union_86 *)func_?();
        unaff_EDI = (_union_86)p_Var59->__klassIndex;
        Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                  ((EventData *)_Var55.typeHandle,0x12,(MethodInfo *)0x0);
        pDVar40 = (Dictionary_2_System_Object_System_Object_ *)func_?();
        pMVar52 = (this->fields).networkGame;
        cVar85 = '\0';
        if (pMVar52 != (MVNetworkGame *)0x0) {
          pWVar9 = (pMVar52->fields).worldNetwork;
          cVar85 = '\0';
          if (pWVar9 != (WorldNetwork *)0x0) {
            pMVar4 = (pWVar9->fields)._.worldObjectClientManager;
            cVar85 = '\0';
            if (pMVar4 != (MVWorldObjectClientManagerNetwork *)0x0) {
              MVWorldObjectClientManagerNetwork::
              MVWorldObjectClientManagerNetwork_OnUpdateWorldObjectDataPartialEvent
                        (pMVar4,unaff_EDI.__klassIndex,pDVar40,(MethodInfo *)0x0);
              *unaff_FS_OFFSET = pvStack_105;
              return;
            }
          }
        }
      }
    }
    break;
  case MVEventCodes__Enum_RemoveWorldObjectDataPartial:
    cVar85 = '\0';
    unaff_ESI = _Var55;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      pOVar56 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0x16,(MethodInfo *)0x0);
      p_Var59 = (_union_86 *)func_?(pOVar56,TypeInfo__System__Int32);
      unaff_EDI = (_union_86)p_Var59->__klassIndex;
      pOVar56 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          ((EventData *)_Var55.typeHandle,0x13,(MethodInfo *)0x0);
      pDVar40 = (Dictionary_2_System_Object_System_Object_ *)
                func_?(pOVar56,
                                TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                               );
      pMVar52 = (this->fields).networkGame;
      cVar85 = '\0';
      if (pMVar52 != (MVNetworkGame *)0x0) {
        pWVar9 = (pMVar52->fields).worldNetwork;
        cVar85 = '\0';
        if (pWVar9 != (WorldNetwork *)0x0) {
          pMVar4 = (pWVar9->fields)._.worldObjectClientManager;
          cVar85 = '\0';
          if (pMVar4 != (MVWorldObjectClientManagerNetwork *)0x0) {
            MVWorldObjectClientManagerNetwork::
            MVWorldObjectClientManagerNetwork_OnRemoveWorldObjectDataPartialEvent
                      (pMVar4,unaff_EDI.__klassIndex,pDVar40,(MethodInfo *)0x0);
            *unaff_FS_OFFSET = pvStack_105;
            return;
          }
        }
      }
    }
    break;
  case MVEventCodes__Enum_TransferOwnership:
    pMVar52 = (this->fields).networkGame;
    cVar85 = '\0';
    unaff_EDI = unaff_EDI;
    if (pMVar52 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_OnTransferOwnershipEvent(pMVar52,photonEvent,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pvStack_105;
      return;
    }
    break;
  case MVEventCodes__Enum_UpdateNetworkInput:
  case MVEventCodes__Enum_RegisterPrototype:
  case MVEventCodes__Enum_UpdateTerrain:
  case MVEventCodes__Enum_Clone:
  case MVEventCodes__Enum_BlueprintCreationDone:
  case MVEventCodes__Enum_SyncAvatarStatus:
  case MVEventCodes__Enum_SwitchAvatar:
  case MVEventCodes__Enum_StartRewardCountDown:
  case MVEventCodes__Enum_RewardIsReady:
  case MVEventCodes__Enum_NumberOfPendingRewards:
  case MVEventCodes__Enum_XPRewardedAdReady:
code_?:
    unaff_ESI = (_union_86)(this->fields).dynamicEventCallbackManager;
    cVar85 = '\0';
    unaff_EDI = (_union_86)this;
    if (unaff_ESI.dummy != (Object *)0x0) {
      if (cRam_? == '\0') {
        func_?(&
                        MethodInfo__System__Collections__Generic__HashSet<MV::Common::MVEventCodes>__Contains_MV__Common__MVEventCodes_
                       );
        cRam_? = '\x01';
      }
      cVar85 = '\0';
      if (*(HashSet_1_System_ByteEnum_ **)&unaff_ESI.type[1].attrs !=
          (HashSet_1_System_ByteEnum_ *)0x0) {
        bVar25 = System.Core.dll::System::Collections::Generic::HashSet`1[System::ByteEnum]::
                 HashSet_1_System_ByteEnum__Contains
                           (*(HashSet_1_System_ByteEnum_ **)&unaff_ESI.type[1].attrs,eventCode,
                            MethodInfo__System__Collections__Generic__HashSet<MV::Common::MVEventCodes>__Contains_MV__Common__MVEventCodes_
                           );
        if (bVar25 == 0) {
          pSVar63 = mscorlib.dll::System::Enum::Enum_ToString
                              ((Enum *)&stack0xffffff98,(MethodInfo *)0x0);
          pSVar63 = mscorlib.dll::System::String::String_Concat_3
                              (StringLiteral_Unknown_event__,pSVar63,(MethodInfo *)0x0);
          if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
code_?:
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                    ((Object *)pSVar63,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = pvStack_105;
          return;
        }
        unaff_ESI = (_union_86)(this->fields).dynamicEventCallbackManager;
        cVar85 = '\0';
        if (unaff_ESI.dummy != (Object *)0x0) {
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          cVar85 = '\0';
          if ((Object__Class *)unaff_ESI.type[1].data.typeHandle != (Object__Class *)0x0) {
            unaff_ESI.typeHandle =
                 (Il2CppMetadataTypeHandle)
                 mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
                 Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                           ((Dictionary_2_System_ByteEnum_System_Object_ *)
                            unaff_ESI.type[1].data.typeHandle,eventCode,
                            MethodInfo__System__Collections__Generic__Dictionary<MV::Common::MVEventCodes,_MVNetworkGame_EventHandling_DynamicEventCallbackManager::EventCallback>__get_Item_MV__Common__MVEventCodes_
                           );
            cVar85 = '\0';
            if (unaff_ESI.dummy != (Object *)0x0) {
              if (cRam_? == '\0') {
                func_?();
                func_?();
                cRam_? = '\x01';
              }
              if (unaff_ESI.type[1].data.dummy == (Object__Class *)0x0) {
                pSVar63 = StringLiteral_No_subscribers_to_event_data;
                if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
                  func_?(TypeInfo__UnityEngine__Debug);
                  pSVar63 = StringLiteral_No_subscribers_to_event_data;
                }
                goto code_?;
              }
              pOVar22 = (Object__Class *)unaff_ESI.type[1].data.array;
              cVar85 = '\0';
              if (pOVar22 != (Object__Class *)0x0) {
                uVar23._0_2_ = (pOVar22->_0).byval_arg.attrs;
                uVar23._2_1_ = (pOVar22->_0).byval_arg.type;
                uVar23._3_1_ = (pOVar22->_0).byval_arg.field_0x7;
                (*(code *)(pOVar22->_0).namespaze)((pOVar22->_0).element_class,photonEvent,uVar23);
                *unaff_FS_OFFSET = pvStack_105;
                return;
              }
            }
          }
        }
      }
    }
    break;
  case MVEventCodes__Enum_UnregisterPrototype:
    unaff_ESI = (_union_86)(this->fields).networkGame;
    cVar85 = '\0';
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      pOVar56 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0x2f,(MethodInfo *)0x0);
      cVar85 = '\0';
      unaff_EDI = unaff_EDI;
      if ((unaff_ESI.dummy != (void *)0x0) &&
         (cVar85 = '\0', unaff_EDI = unaff_EDI, pOVar56 != (Object *)0x0)) {
        pIVar21 = (pOVar56->klass->_0).element_class;
        pIVar38 = (TypeInfo__System__Int32->_0).element_class;
        cVar85 = pIVar21 < pIVar38;
        pIVar77 = TypeInfo__System__Int32;
        if (pIVar21 == pIVar38) {
          piVar53 = (int32_t *)func_?();
          MVNetworkGame::MVNetworkGame_OnUnregisterPrototypeEvent
                    ((MVNetworkGame *)unaff_ESI.typeHandle,*piVar53,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = pvStack_105;
          return;
        }
        goto code_?;
      }
    }
    break;
  case MVEventCodes__Enum_UpdatePrototype:
    pMVar52 = (this->fields).networkGame;
    cVar85 = '\0';
    unaff_EDI = unaff_EDI;
    if (pMVar52 != (MVNetworkGame *)0x0) {
      pWVar9 = (pMVar52->fields).worldNetwork;
      cVar85 = '\0';
      unaff_EDI = unaff_EDI;
      if (pWVar9 != (WorldNetwork *)0x0) {
        eventCode = (MVEventCodes__Enum)(pWVar9->fields)._.worldInventory;
        cVar85 = '\0';
        unaff_EDI = _Var55;
        if (photonEvent != (EventData *)0x0) {
          unaff_ESI.typeHandle =
               (Il2CppMetadataTypeHandle)
               Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                         (photonEvent,0x2f,(MethodInfo *)0x0);
          _Var55.dummy = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::
                         EventData_get_Item(_Var55.dummy,0x31,(MethodInfo *)0x0);
          cVar85 = '\0';
          unaff_EDI.typeHandle = _Var55.typeHandle;
          if (eventCode == MVEventCodes__Enum_NoCodeSet) break;
          _Stack_24.typeHandle = (Il2CppMetadataTypeHandle)TypeInfo__System__Byte;
          if (_Var55.dummy == (Object__Class *)0x0) {
code_?:
            cVar85 = '\0';
            if (unaff_ESI.dummy != (Object__Class *)0x0) {
              pIVar21 = (Il2CppClass *)
                        ((Il2CppClass_0 *)&(unaff_ESI.array)->etype)->image->codeGenModule;
              pIVar38 = (TypeInfo__System__Int32->_0).element_class;
              cVar85 = pIVar21 < pIVar38;
              pSVar74 = (String__Class *)TypeInfo__System__Int32;
              if (pIVar21 != pIVar38) goto code_?;
              p_Var59 = (_union_86 *)func_?(unaff_ESI.dummy);
              unaff_ESI = (_union_86)p_Var59->__klassIndex;
              if (cRam_? == '\0') {
                func_?(&TypeInfo__MV__WorldObject__BytePacker);
                func_?(&
                                MethodInfo__System__Collections__Generic__Dictionary<int,_RuntimePrototypeCubeModel>__get_Item_int_
                               );
                cRam_? = '\x01';
              }
              cVar85 = '\0';
              if (*(Dictionary_2_System_Int32_System_Object_ **)
                   (eventCode + MVEventCodes__Enum_RegisterPrototype) !=
                  (Dictionary_2_System_Int32_System_Object_ *)0x0) {
                pRVar28 = (RuntimePrototypeCubeModel *)
                          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                          Int32,System::Object]::Dictionary_2_System_Int32_System_Object__get_Item
                                    (*(Dictionary_2_System_Int32_System_Object_ **)
                                      (eventCode + MVEventCodes__Enum_RegisterPrototype),
                                     unaff_ESI.__klassIndex,
                                     MethodInfo__System__Collections__Generic__Dictionary<int,_RuntimePrototypeCubeModel>__get_Item_int_
                                    );
                eventCode = func_?(TypeInfo__MV__WorldObject__BytePacker);
                MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker__ctor_1
                          ((BytePacker *)eventCode,(Byte__Array *)unaff_EDI.typeHandle,
                           (MethodInfo *)0x0);
                cVar85 = '\0';
                unaff_ESI.dummy = (void *)0x0;
                if (pRVar28 != (RuntimePrototypeCubeModel *)0x0) {
                  RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_UpdatePrototype
                            (pRVar28,(BytePacker *)eventCode,(MethodInfo *)0x0);
                  *unaff_FS_OFFSET = pvStack_105;
                  return;
                }
              }
            }
            break;
          }
          unaff_EDI.dummy = (void *)func_?();
          cVar85 = '\0';
          _Stack_28.dummy = unaff_EDI.dummy;
          if (unaff_EDI.dummy != (Object__Class *)0x0) goto code_?;
          goto code_?;
        }
      }
    }
    break;
  case MVEventCodes__Enum_UpdatePrototypeScale:
    pMVar52 = (this->fields).networkGame;
    cVar85 = '\0';
    unaff_EDI = unaff_EDI;
    if (pMVar52 != (MVNetworkGame *)0x0) {
      pWVar9 = (pMVar52->fields).worldNetwork;
      cVar85 = '\0';
      unaff_EDI = unaff_EDI;
      if (pWVar9 != (WorldNetwork *)0x0) {
        eventCode = (MVEventCodes__Enum)(pWVar9->fields)._.worldInventory;
        cVar85 = '\0';
        unaff_EDI = _Var55;
        if (photonEvent != (EventData *)0x0) {
          unaff_ESI.typeHandle =
               (Il2CppMetadataTypeHandle)
               Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                         (photonEvent,0x2f,(MethodInfo *)0x0);
          pOVar56 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                              ((EventData *)_Var55.typeHandle,0x22,(MethodInfo *)0x0);
          unaff_EDI = (_union_86)eventCode;
          cVar85 = '\0';
          if ((eventCode != MVEventCodes__Enum_NoCodeSet) &&
             (cVar85 = '\0', pOVar56 != (Object *)0x0)) {
            pIVar21 = (pOVar56->klass->_0).element_class;
            pIVar38 = (TypeInfo__System__Single->_0).element_class;
            cVar85 = pIVar21 < pIVar38;
            pIVar77 = (Int32__Class *)TypeInfo__System__Single;
            if (pIVar21 != pIVar38) goto code_?;
            pMVar43 = (MVEventCodes__Enum *)func_?();
            eventCode = *pMVar43;
            cVar85 = '\0';
            if (unaff_ESI.dummy != (Object__Class *)0x0) {
              pIVar21 = (Il2CppClass *)
                        ((Il2CppClass_0 *)&(unaff_ESI.array)->etype)->image->codeGenModule;
              pIVar38 = (TypeInfo__System__Int32->_0).element_class;
              cVar85 = pIVar21 < pIVar38;
              pSVar74 = (String__Class *)TypeInfo__System__Int32;
              if (pIVar21 != pIVar38) goto code_?;
              p_Var59 = (_union_86 *)func_?(unaff_ESI.dummy);
              unaff_ESI = (_union_86)p_Var59->__klassIndex;
              if (cRam_? == '\0') {
                func_?(&
                                MethodInfo__System__Collections__Generic__Dictionary<int,_RuntimePrototypeCubeModel>__get_Item_int_
                               );
                cRam_? = '\x01';
              }
              cVar85 = '\0';
              if (*(Dictionary_2_System_Int32_System_Object_ **)
                   ((int)unaff_EDI.generic_class + MVEventCodes__Enum_RegisterPrototype) !=
                  (Dictionary_2_System_Int32_System_Object_ *)0x0) {
                pRVar28 = (RuntimePrototypeCubeModel *)
                          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                          Int32,System::Object]::Dictionary_2_System_Int32_System_Object__get_Item
                                    (*(Dictionary_2_System_Int32_System_Object_ **)
                                      ((int)unaff_EDI.generic_class +
                                      MVEventCodes__Enum_RegisterPrototype),unaff_ESI.__klassIndex,
                                     MethodInfo__System__Collections__Generic__Dictionary<int,_RuntimePrototypeCubeModel>__get_Item_int_
                                    );
                cVar85 = '\0';
                if (pRVar28 != (RuntimePrototypeCubeModel *)0x0) {
                  (pRVar28->fields).PendingScaleUpdate.hasValue = 0;
                  *(undefined3 *)&(pRVar28->fields).PendingScaleUpdate.field_0x1 = 0;
                  (pRVar28->fields).PendingScaleUpdate.value = 0.0;
                  RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_UpdatePrototypeScale
                            (pRVar28,(float)eventCode,(MethodInfo *)0x0);
                  *unaff_FS_OFFSET = pvStack_105;
                  return;
                }
              }
            }
          }
        }
      }
    }
    break;
  case MVEventCodes__Enum_AddLink:
    unaff_EDI = (_union_86)(this->fields).networkGame;
    cVar85 = '\0';
    unaff_ESI = _Var55;
    _Stack_24 = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      _Stack_28.typeHandle =
           (Il2CppMetadataTypeHandle)
           Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                     (photonEvent,0x39,(MethodInfo *)0x0);
      eventCode = (MVEventCodes__Enum)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            ((EventData *)_Var55.typeHandle,0x38,(MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                ((EventData *)_Var55.typeHandle,0x3a,(MethodInfo *)0x0);
      cVar85 = '\0';
      if (unaff_EDI.dummy != (Object__Class *)0x0) {
        piVar53 = (int32_t *)func_?();
        iVar59 = *piVar53;
        piVar53 = (int32_t *)func_?();
        iVar17 = *piVar53;
        piVar53 = (int32_t *)func_?();
        MVNetworkGame::MVNetworkGame_OnAddLinkEvent
                  ((MVNetworkGame *)_Stack_24.typeHandle,*piVar53,iVar17,iVar59,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_105;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_RemoveLink:
    unaff_ESI = (_union_86)(this->fields).networkGame;
    cVar85 = '\0';
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x3a,(MethodInfo *)0x0);
      cVar85 = '\0';
      unaff_EDI = unaff_EDI;
      if (unaff_ESI.dummy != (void *)0x0) {
        piVar53 = (int32_t *)func_?();
        MVNetworkGame::MVNetworkGame_OnRemoveLinkEvent
                  ((MVNetworkGame *)unaff_ESI.typeHandle,*piVar53,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_105;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_RemoveItemFromInventory:
    unaff_ESI = (_union_86)(this->fields).networkGame;
    cVar85 = '\0';
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x28,(MethodInfo *)0x0);
      cVar85 = '\0';
      unaff_EDI = unaff_EDI;
      if (unaff_ESI.dummy != (void *)0x0) {
        piVar53 = (int32_t *)func_?();
        MVNetworkGame::MVNetworkGame_OnRemoveItemFromInventory
                  ((MVNetworkGame *)unaff_ESI.typeHandle,*piVar53,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_105;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_FriendRequest:
    cVar85 = '\0';
    unaff_ESI = _Var55;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      pOVar56 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0x34,(MethodInfo *)0x0);
      p_Var59 = (_union_86 *)func_?(pOVar56,TypeInfo__System__Int32);
      unaff_EDI = (_union_86)p_Var59->__klassIndex;
      pOVar56 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          ((EventData *)_Var55.typeHandle,0xb,(MethodInfo *)0x0);
      pMVar43 = (MVEventCodes__Enum *)func_?(pOVar56,TypeInfo__System__Int32);
      eventCode = *pMVar43;
      pOVar56 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          ((EventData *)_Var55.typeHandle,0x35,(MethodInfo *)0x0);
      piVar53 = (int32_t *)func_?(pOVar56,TypeInfo__System__Int32);
      pMVar52 = (this->fields).networkGame;
      cVar85 = '\0';
      if (pMVar52 != (MVNetworkGame *)0x0) {
        MVNetworkGame::MVNetworkGame_OnFriendRequestEvent
                  (pMVar52,unaff_EDI.__klassIndex,eventCode,*piVar53,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_105;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_FriendUpdate:
    cVar85 = '\0';
    unaff_ESI = _Var55;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      pOVar56 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0x34,(MethodInfo *)0x0);
      p_Var59 = (_union_86 *)func_?(pOVar56,TypeInfo__System__Int32);
      unaff_EDI = (_union_86)p_Var59->__klassIndex;
      pOVar56 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          ((EventData *)_Var55.typeHandle,0xb,(MethodInfo *)0x0);
      pMVar43 = (MVEventCodes__Enum *)func_?(pOVar56,TypeInfo__System__Int32);
      eventCode = *pMVar43;
      pOVar56 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          ((EventData *)_Var55.typeHandle,0x36,(MethodInfo *)0x0);
      pFVar29 = (FriendStatus__Enum *)func_?(pOVar56,TypeInfo__MV__Common__FriendStatus);
      pMVar52 = (this->fields).networkGame;
      cVar85 = '\0';
      if (pMVar52 != (MVNetworkGame *)0x0) {
        MVNetworkGame::MVNetworkGame_OnFriendUpdateEvent
                  (pMVar52,unaff_EDI.__klassIndex,eventCode,*pFVar29,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_105;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_TriggerBoxEnter:
    cVar85 = '\0';
    unaff_ESI = _Var55;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      pOVar56 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0x16,(MethodInfo *)0x0);
      p_Var59 = (_union_86 *)func_?(pOVar56,TypeInfo__System__Int32);
      unaff_EDI = (_union_86)p_Var59->__klassIndex;
      pOVar56 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          ((EventData *)_Var55.typeHandle,0xfe,(MethodInfo *)0x0);
      piVar53 = (int32_t *)func_?(pOVar56,TypeInfo__System__Int32);
      pMVar52 = (this->fields).networkGame;
      cVar85 = '\0';
      if (pMVar52 != (MVNetworkGame *)0x0) {
        MVNetworkGame::MVNetworkGame_OnTriggerBoxEnterEvent
                  (pMVar52,*piVar53,unaff_EDI.__klassIndex,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_105;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_TriggerBoxExit:
    cVar85 = '\0';
    unaff_ESI = _Var55;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      pOVar56 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0x16,(MethodInfo *)0x0);
      p_Var59 = (_union_86 *)func_?(pOVar56,TypeInfo__System__Int32);
      unaff_EDI = (_union_86)p_Var59->__klassIndex;
      pOVar56 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          ((EventData *)_Var55.typeHandle,0xfe,(MethodInfo *)0x0);
      piVar53 = (int32_t *)func_?(pOVar56,TypeInfo__System__Int32);
      pMVar52 = (this->fields).networkGame;
      cVar85 = '\0';
      if (pMVar52 != (MVNetworkGame *)0x0) {
        MVNetworkGame::MVNetworkGame_OnTriggerBoxExitEvent
                  (pMVar52,*piVar53,unaff_EDI.__klassIndex,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_105;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_TriggerBoxStayBegin:
    cVar85 = '\0';
    unaff_ESI = _Var55;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      pOVar56 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0x16,(MethodInfo *)0x0);
      p_Var59 = (_union_86 *)func_?(pOVar56,TypeInfo__System__Int32);
      unaff_EDI = (_union_86)p_Var59->__klassIndex;
      pOVar56 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          ((EventData *)_Var55.typeHandle,0xfe,(MethodInfo *)0x0);
      piVar53 = (int32_t *)func_?(pOVar56,TypeInfo__System__Int32);
      pMVar52 = (this->fields).networkGame;
      cVar85 = '\0';
      if (pMVar52 != (MVNetworkGame *)0x0) {
        MVNetworkGame::MVNetworkGame_OnTriggerBoxStayBegin
                  (pMVar52,unaff_EDI.__klassIndex,*piVar53,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_105;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_TriggerBoxStayEnd:
    cVar85 = '\0';
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      pOVar56 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0x16,(MethodInfo *)0x0);
      piVar53 = (int32_t *)func_?(pOVar56,TypeInfo__System__Int32);
      pMVar52 = (this->fields).networkGame;
      cVar85 = '\0';
      unaff_EDI = unaff_EDI;
      if (pMVar52 != (MVNetworkGame *)0x0) {
        MVNetworkGame::MVNetworkGame_OnTriggerBoxStayEnd(pMVar52,*piVar53,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_105;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_LockHierarchy:
    pMVar52 = (this->fields).networkGame;
    cVar85 = '\0';
    unaff_EDI = unaff_EDI;
    if (pMVar52 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_OnLockHierarchyEvent(pMVar52,photonEvent,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pvStack_105;
      return;
    }
    break;
  case MVEventCodes__Enum_WoUniquePrototype:
    unaff_EDI = (_union_86)(this->fields).networkGame;
    cVar85 = '\0';
    unaff_ESI = _Var55;
    if (photonEvent != (EventData *)0x0) {
      eventCode = (MVEventCodes__Enum)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0x16,(MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                ((EventData *)_Var55.typeHandle,0x2f,(MethodInfo *)0x0);
      cVar85 = '\0';
      if (unaff_EDI.dummy != (void *)0x0) {
        piVar53 = (int32_t *)func_?();
        iVar59 = *piVar53;
        piVar53 = (int32_t *)func_?();
        MVNetworkGame::MVNetworkGame_OnWoUniquePrototypeEvent
                  ((MVNetworkGame *)unaff_EDI.typeHandle,*piVar53,iVar59,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_105;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_GameStateChange:
    pMVar52 = (this->fields).networkGame;
    cVar85 = '\0';
    unaff_ESI.dummy = (Object__Class *)0x0;
    unaff_EDI = unaff_EDI;
    if (pMVar52 != (MVNetworkGame *)0x0) {
      unaff_ESI = (_union_86)(pMVar52->fields)._NetworkGameStateListener_k__BackingField;
      cVar85 = '\0';
      unaff_EDI = _Var55;
      if (photonEvent != (EventData *)0x0) {
        _Stack_28.typeHandle =
             (Il2CppMetadataTypeHandle)
             Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                       (photonEvent,0x41,(MethodInfo *)0x0);
        eventCode = (MVEventCodes__Enum)
                    Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                              ((EventData *)_Var55.typeHandle,0x43,(MethodInfo *)0x0);
        Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                  ((EventData *)_Var55.typeHandle,0x42,(MethodInfo *)0x0);
        cVar85 = '\0';
        if (unaff_ESI.dummy != (Object__Class *)0x0) {
          p_Var59 = (_union_86 *)func_?();
          unaff_EDI = (_union_86)p_Var59->type;
          pMVar43 = (MVEventCodes__Enum *)func_?();
          eventCode = *pMVar43;
          p_Var59 = (_union_86 *)func_?();
          _Stack_28 = *p_Var59;
          if (cRam_? == '\0') {
            func_?(&TypeInfo__GameStateChangeEventArgs);
            cRam_? = '\x01';
          }
          unaff_ESI.type[2].data = _Stack_28;
          unaff_ESI.type[1].data.__klassIndex = eventCode;
          *(_union_86 *)&unaff_ESI.type[1].attrs = (Il2CppType *)unaff_EDI;
          pMVar52 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          cVar85 = '\0';
          if (pMVar52 != (MVNetworkGame *)0x0) {
            iVar59 = MVNetworkGame::MVNetworkGame_get_ServerTimeInMilliSeconds
                               (pMVar52,(MethodInfo *)0x0);
            pvVar5 = unaff_ESI.type[3].data.dummy;
            *(MVEventCodes__Enum *)&unaff_ESI.type[2].attrs =
                 (int)unaff_EDI.dummy + (eventCode - iVar59);
            if (pvVar5 == (void *)0x0) goto code_?;
            pIVar6 = unaff_ESI.type[3].data.array;
            eventCode = func_?();
            if (cRam_? == '\0') {
              func_?(&TypeInfo__System__EventArgs);
              cRam_? = '\x01';
            }
            if ((TypeInfo__System__EventArgs->_1).cctor_finished_or_no_cctor == 0) {
              func_?(TypeInfo__System__EventArgs);
            }
            UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
            UxmlObjectListAttributeDescription`1[System::Object]::
            UxmlObjectListAttributeDescription_1_System_Object___ctor
                      ((UxmlObjectListAttributeDescription_1_System_Object_ *)eventCode,
                       (MethodInfo *)0x0);
            cVar85 = '\0';
            unaff_EDI.dummy = (Object__Class *)0x0;
            if (pIVar6 != (Il2CppArrayType *)0x0) {
              uVar7._0_1_ = pIVar6[1].rank;
              uVar7._1_1_ = pIVar6[1].numsizes;
              uVar7._2_1_ = pIVar6[1].numlobounds;
              uVar7._3_1_ = pIVar6[1].field_0x7;
              (*(code *)pIVar6->lobounds)(pIVar6[2].etype,unaff_ESI.dummy,eventCode,uVar7);
              *unaff_FS_OFFSET = pvStack_105;
              return;
            }
          }
        }
      }
    }
    break;
  case MVEventCodes__Enum_ResetLogicChunk:
    unaff_ESI = (_union_86)(this->fields).networkGame;
    cVar85 = '\0';
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x16,(MethodInfo *)0x0);
      cVar85 = '\0';
      unaff_EDI = unaff_EDI;
      if (unaff_ESI.dummy != (MVNetworkGame *)0x0) {
        piVar53 = (int32_t *)func_?();
        MVNetworkGame::MVNetworkGame_OnResetLogicChunkEvent
                  ((MVNetworkGame *)unaff_ESI.typeHandle,*piVar53,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_105;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_UpdateWorldObjectRunTimeData:
    cVar85 = '\0';
    unaff_EDI = _Var55;
    if (photonEvent != (EventData *)0x0) {
      eventCode = (MVEventCodes__Enum)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0xfe,(MethodInfo *)0x0);
      pMVar52 = (this->fields).networkGame;
      cVar85 = '\0';
      if (pMVar52 != (MVNetworkGame *)0x0) {
        pMVar48 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar52,(MethodInfo *)0x0);
        cVar85 = '\0';
        if (pMVar48 != (MVLocalPlayer *)0x0) {
          unaff_ESI = (_union_86)(pMVar48->fields)._._ActorNr_k__BackingField;
          puVar39 = (undefined4 *)func_?();
          if ((Object__Class *)*puVar39 == unaff_ESI.dummy) goto code_?;
          pMVar52 = (this->fields).networkGame;
          cVar85 = '\0';
          if (pMVar52 != (MVNetworkGame *)0x0) {
            pWVar9 = (pMVar52->fields).worldNetwork;
            cVar85 = '\0';
            if (pWVar9 != (WorldNetwork *)0x0) {
              _Var66 = (_union_86)(pWVar9->fields)._.worldObjectClientManager;
              _Stack_28 = _Var66;
              eventCode = (MVEventCodes__Enum)
                          Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::
                          EventData_get_Item((EventData *)_Var55.typeHandle,0x16,(MethodInfo *)0x0);
              pOVar56 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                                  ((EventData *)_Var55.typeHandle,0x46,(MethodInfo *)0x0);
              cVar85 = '\0';
              unaff_ESI.dummy = (Object__Class *)0x0;
              if (_Var66.dummy != (Object__Class *)0x0) {
                pDVar40 = (Dictionary_2_System_Object_System_Object_ *)
                          func_?(pOVar56,
                                          TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                                         );
                piVar53 = (int32_t *)func_?(eventCode,TypeInfo__System__Int32);
                MVWorldObjectClientManagerNetwork::
                MVWorldObjectClientManagerNetwork_OnUpdateWorldObjectRunTimeDataEvent
                          ((MVWorldObjectClientManagerNetwork *)_Stack_28.typeHandle,*piVar53,
                           pDVar40,(MethodInfo *)0x0);
                *unaff_FS_OFFSET = pvStack_105;
                return;
              }
            }
          }
        }
      }
    }
    break;
  case MVEventCodes__Enum_PickupItemStateChange:
    unaff_EDI = (_union_86)(this->fields).networkGame;
    cVar85 = '\0';
    unaff_ESI = _Var55;
    _Stack_24 = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      _Stack_28.typeHandle =
           (Il2CppMetadataTypeHandle)
           Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                     (photonEvent,0x47,(MethodInfo *)0x0);
      eventCode = (MVEventCodes__Enum)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            ((EventData *)_Var55.typeHandle,0x16,(MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                ((EventData *)_Var55.typeHandle,0xfe,(MethodInfo *)0x0);
      cVar85 = '\0';
      if (unaff_EDI.dummy != (Object__Class *)0x0) {
        piVar53 = (int32_t *)func_?();
        iVar59 = *piVar53;
        piVar53 = (int32_t *)func_?();
        iVar17 = *piVar53;
        pPVar30 = (PickupItemState__Enum *)func_?();
        MVNetworkGame::MVNetworkGame_OnPickupItemStateChangeEvent
                  ((MVNetworkGame *)_Stack_24.typeHandle,*pPVar30,iVar17,iVar59,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_105;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_UpdateLineOfFire:
    cVar85 = '\0';
    unaff_ESI = _Var55;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      pOVar56 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0x4a,(MethodInfo *)0x0);
      pOVar37 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          ((EventData *)_Var55.typeHandle,0x4b,(MethodInfo *)0x0);
      pOVar31 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0x4c,(MethodInfo *)0x0);
      p_Var59 = (_union_86 *)func_?(pOVar31,TypeInfo__System__Single);
      _Stack_28 = *p_Var59;
      pMVar43 = (MVEventCodes__Enum *)func_?(pOVar37,TypeInfo__System__Single);
      eventCode = *pMVar43;
      pfVar36 = (float *)func_?(pOVar56,TypeInfo__System__Single);
      this_06 = photonEvent;
      VStack_95.x = *pfVar36;
      VStack_95.y = (float)eventCode;
      VStack_95.z = (float)_Stack_28;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x4d,(MethodInfo *)0x0);
      unaff_ESI.typeHandle =
           (Il2CppMetadataTypeHandle)
           Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                     (this_06,0x4e,(MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x4f,(MethodInfo *)0x0);
      p_Var59 = (_union_86 *)func_?();
      _Stack_28 = *p_Var59;
      pMVar43 = (MVEventCodes__Enum *)func_?();
      eventCode = *pMVar43;
      puVar39 = (undefined4 *)func_?();
      uStack_92 = *puVar39;
      MStack_93 = eventCode;
      pMVar52 = (this->fields).networkGame;
      _Stack_48 = _Stack_28;
      pOVar56 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0x16,(MethodInfo *)0x0);
      cVar85 = '\0';
      unaff_EDI.dummy = (Object__Class *)0x0;
      if (pMVar52 != (MVNetworkGame *)0x0) {
        piVar53 = (int32_t *)func_?(pOVar56,TypeInfo__System__Int32);
        camOrigin.y = VStack_95.y;
        camOrigin.x = VStack_95.x;
        camOrigin.z = VStack_95.z;
        camDir.y = (float)MStack_93;
        camDir.x = (float)uStack_92;
        camDir.z = (float)_Stack_48.dummy;
        MVNetworkGame::MVNetworkGame_OnUpdateLineOfFire
                  (pMVar52,*piVar53,camOrigin,camDir,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_105;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_WorldObjectRPCEvent:
    pMVar52 = (this->fields).networkGame;
    cVar85 = '\0';
    unaff_EDI = unaff_EDI;
    if (pMVar52 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_OnWorldObjectRPCEvent(pMVar52,photonEvent,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pvStack_105;
      return;
    }
    break;
  case MVEventCodes__Enum_XPReceivedEvent:
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Debug);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
              ((Object *)StringLiteral_MVEventCodes_XPReceivedEvent,(MethodInfo *)0x0);
    *unaff_FS_OFFSET = pvStack_105;
    return;
  case MVEventCodes__Enum_PostGameMsgEvent:
    cVar85 = '\0';
    unaff_ESI = _Var55;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      pOVar56 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0x57,(MethodInfo *)0x0);
      pOVar37 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          ((EventData *)_Var55.typeHandle,0x58,(MethodInfo *)0x0);
      pDVar40 = (Dictionary_2_System_Object_System_Object_ *)
                func_?(pOVar37,
                                TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                               );
      pMVar32 = (MVGameMsgType__Enum *)func_?(pOVar56,TypeInfo__System__Int32);
      MVGameControllerBase::MVGameControllerBase_PostGameMsg(*pMVar32,pDVar40,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pvStack_105;
      return;
    }
    break;
  case MVEventCodes__Enum_SetTeam:
    eventCode = (MVEventCodes__Enum)(this->fields).networkGame;
    cVar85 = '\0';
    unaff_EDI = _Var55;
    if (photonEvent != (EventData *)0x0) {
      _Stack_28.typeHandle =
           (Il2CppMetadataTypeHandle)
           Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                     (photonEvent,0xfe,(MethodInfo *)0x0);
      handle = TypeRef__MV__WorldObject__MVTeam;
      if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      unaff_ESI.type =
           (Il2CppType *)
           mscorlib.dll::System::Type::Type_GetTypeFromHandle(handle,(MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                ((EventData *)_Var55.typeHandle,0x59,(MethodInfo *)0x0);
      if ((TypeInfo__System__Enum->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      piVar53 = (int32_t *)func_?();
      pOVar56 = mscorlib.dll::System::Enum::Enum_ToObject_3
                          ((Type *)unaff_ESI.typeHandle,*piVar53,(MethodInfo *)0x0);
      this_05 = eventCode;
      cVar85 = '\0';
      unaff_EDI.dummy = (Object__Class *)0x0;
      if (eventCode != MVEventCodes__Enum_NoCodeSet) {
        pMVar33 = (MVTeam__Enum *)func_?(pOVar56,TypeInfo__MV__WorldObject__MVTeam);
        team = *pMVar33;
        piVar53 = (int32_t *)func_?(_Stack_28.dummy,TypeInfo__System__Int32);
        MVNetworkGame::MVNetworkGame_OnSetTeamEvent
                  ((MVNetworkGame *)this_05,*piVar53,team,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_105;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_AddObjectLink:
    unaff_EDI = (_union_86)(this->fields).networkGame;
    cVar85 = '\0';
    unaff_ESI = _Var55;
    _Stack_24 = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      _Stack_28.typeHandle =
           (Il2CppMetadataTypeHandle)
           Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                     (photonEvent,0x39,(MethodInfo *)0x0);
      eventCode = (MVEventCodes__Enum)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            ((EventData *)_Var55.typeHandle,0x38,(MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                ((EventData *)_Var55.typeHandle,0x3a,(MethodInfo *)0x0);
      cVar85 = '\0';
      if (unaff_EDI.dummy != (Object__Class *)0x0) {
        piVar53 = (int32_t *)func_?();
        iVar59 = *piVar53;
        piVar53 = (int32_t *)func_?();
        iVar17 = *piVar53;
        piVar53 = (int32_t *)func_?();
        MVNetworkGame::MVNetworkGame_OnAddObjectLinkEvent
                  ((MVNetworkGame *)_Stack_24.typeHandle,*piVar53,iVar17,iVar59,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_105;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_RemoveObjectLink:
    unaff_ESI = (_union_86)(this->fields).networkGame;
    cVar85 = '\0';
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x3a,(MethodInfo *)0x0);
      cVar85 = '\0';
      unaff_EDI = unaff_EDI;
      if (unaff_ESI.dummy != (MVNetworkGame *)0x0) {
        piVar53 = (int32_t *)func_?();
        MVNetworkGame::MVNetworkGame_OnRemoveObjectLinkEvent
                  ((MVNetworkGame *)unaff_ESI.typeHandle,*piVar53,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_105;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_TransferWorldObjectsToGroup:
    pMVar52 = (this->fields).networkGame;
    cVar85 = '\0';
    unaff_EDI = unaff_EDI;
    if (pMVar52 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_OnTransferWorldObjectsToGroup
                (pMVar52,photonEvent,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pvStack_105;
      return;
    }
    break;
  case MVEventCodes__Enum_CloneWorldObjectTree:
    pMVar52 = (this->fields).networkGame;
    cVar85 = '\0';
    unaff_EDI = unaff_EDI;
    if (pMVar52 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_OnCloneWorldObjectTree(pMVar52,photonEvent,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pvStack_105;
      return;
    }
    break;
  case MVEventCodes__Enum_GetGameBatch:
  case MVEventCodes__Enum_PendingByteDataBatch:
    pMVar52 = (this->fields).networkGame;
    cVar85 = '\0';
    unaff_EDI = unaff_EDI;
    if (pMVar52 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_OnGetGameBatch(pMVar52,photonEvent,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pvStack_105;
      return;
    }
    break;
  case MVEventCodes__Enum_GameQueryReady:
    pMVar52 = (this->fields).networkGame;
    cVar85 = '\0';
    unaff_EDI = unaff_EDI;
    if (pMVar52 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_OnGameQueryReady(pMVar52,photonEvent,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pvStack_105;
      return;
    }
    break;
  case MVEventCodes__Enum_PostWinnerReport:
    pMVar52 = (this->fields).networkGame;
    cVar85 = '\0';
    unaff_EDI = unaff_EDI;
    if (pMVar52 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_OnPostWinnerReportEvent(pMVar52,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pvStack_105;
      return;
    }
    break;
  case MVEventCodes__Enum_CollectiblePickedUp:
    pMVar52 = (this->fields).networkGame;
    cVar85 = '\0';
    unaff_EDI = unaff_EDI;
    if (pMVar52 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_OnCollectiblePickedUp(pMVar52,photonEvent,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pvStack_105;
      return;
    }
    break;
  case MVEventCodes__Enum_SetWorldObjectsToPurchasedEvent:
    unaff_EDI = (_union_86)(this->fields).networkGame;
    cVar85 = '\0';
    unaff_ESI = _Var55;
    if (photonEvent != (EventData *)0x0) {
      eventCode = (MVEventCodes__Enum)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0xb,(MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                ((EventData *)_Var55.typeHandle,0x28,(MethodInfo *)0x0);
      cVar85 = '\0';
      if (unaff_EDI.dummy != (void *)0x0) {
        piVar53 = (int32_t *)func_?();
        iVar59 = *piVar53;
        piVar53 = (int32_t *)func_?();
        MVNetworkGame::MVNetworkGame_OnSetWorldObjectsToPurchasedEvent
                  ((MVNetworkGame *)unaff_EDI.typeHandle,*piVar53,iVar59,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_105;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_AchievementUnlockedEvent:
    cVar85 = '\0';
    unaff_EDI = _Var55;
    if (photonEvent != (EventData *)0x0) {
      pOVar56 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0xb,(MethodInfo *)0x0);
      pMVar43 = (MVEventCodes__Enum *)func_?(pOVar56,TypeInfo__System__Int32);
      eventCode = *pMVar43;
      pOVar56 = (Object *)func_?(TypeInfo__System__Int32,&eventCode);
      pOVar37 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          ((EventData *)_Var55.typeHandle,0x81,(MethodInfo *)0x0);
      p_Var59 = (_union_86 *)func_?(pOVar37,TypeInfo__MV__Common__AchievementType);
      _Stack_28 = *p_Var59;
      pOVar37 = (Object *)func_?(TypeInfo__MV__Common__AchievementType,&_Stack_28);
      pSVar63 = mscorlib.dll::System::String::String_Format_1
                          (StringLiteral_Profile_with_ID__0__unlocked_Ach,pOVar56,pOVar37,
                           (MethodInfo *)0x0);
      uVar20 = (TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor;
      goto joined_?;
    }
    break;
  case MVEventCodes__Enum_AttachWorldObjectToSeat:
    cVar85 = '\0';
    unaff_ESI = _Var55;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      pOVar56 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0x48,(MethodInfo *)0x0);
      pDVar46 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                func_?(pOVar56,
                                TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                               );
      eventCode = CONCAT13(4,(undefined3)eventCode);
      pOVar56 = (Object *)func_?(TypeInfo__System__Byte,(byte *)((int)&eventCode + 3));
      cVar85 = '\0';
      unaff_EDI.dummy = (Object__Class *)0x0;
      if (pDVar46 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
        TVar57 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                 ::UIElements::TextureId]::
                 Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                           (pDVar46,pOVar56,
                            MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                           );
        puVar39 = (undefined4 *)func_?(TVar57.m_Index,TypeInfo__System__Int32);
        pIStack_98 = (Il2CppClass *)*puVar39;
        uStack_102 = 0;
        pOVar56 = (Object *)func_?(TypeInfo__System__Byte,&uStack_102);
        TVar57 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                 ::UIElements::TextureId]::
                 Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                           (pDVar46,pOVar56,
                            MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                           );
        p_Var59 = (_union_86 *)func_?(TVar57.m_Index,TypeInfo__System__Int32);
        _Stack_24 = (_union_86)p_Var59->__klassIndex;
        pMVar52 = (this->fields).networkGame;
        cVar85 = '\0';
        unaff_EDI.dummy = (Object__Class *)0x0;
        if (pMVar52 != (MVNetworkGame *)0x0) {
          pMVar16 = (pMVar52->fields)._PlayerController_k__BackingField;
          _Stack_28.dummy =
               Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                         (_Var55.dummy,0xfe,(MethodInfo *)0x0);
          pOVar56 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                              ((EventData *)_Var55.typeHandle,0x8d,(MethodInfo *)0x0);
          cVar85 = '\0';
          unaff_EDI.dummy = (Object__Class *)0x0;
          if (pMVar16 != (MVLocalObjectController *)0x0) {
            pbVar35 = (byte *)func_?(pOVar56,TypeInfo__System__Byte);
            bVar26 = *pbVar35;
            piVar53 = (int32_t *)func_?(_Stack_28.dummy,TypeInfo__System__Int32);
            MVLocalObjectController::MVLocalObjectController_OnAttachWorldObjectToSeat
                      (pMVar16,*piVar53,(int32_t)pIStack_98,_Stack_24.__klassIndex,(uint)bVar26,
                       (MethodInfo *)0x0);
            *unaff_FS_OFFSET = pvStack_105;
            return;
          }
        }
      }
    }
    break;
  case MVEventCodes__Enum_DetachWorldObjectFromVehicle:
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Debug);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
              ((Object *)StringLiteral_Should_probably_be_behind_an_int,(MethodInfo *)0x0);
    cVar85 = '\0';
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                (photonEvent,0x16,(MethodInfo *)0x0);
      p_Var59 = (_union_86 *)func_?();
      unaff_ESI = (_union_86)p_Var59->__klassIndex;
      pMVar52 = (this->fields).networkGame;
      cVar85 = '\0';
      unaff_EDI = unaff_EDI;
      if (pMVar52 != (MVNetworkGame *)0x0) {
        pMVar58 = MVNetworkGame::MVNetworkGame_get_WorldObjectClientManager
                            (pMVar52,(MethodInfo *)0x0);
        cVar85 = '\0';
        unaff_EDI = unaff_EDI;
        if (pMVar58 != (MVWorldObjectClientManager *)0x0) {
          unaff_ESI.typeHandle =
               (Il2CppMetadataTypeHandle)
               MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                         (pMVar58,unaff_ESI.__klassIndex,(MethodInfo *)0x0);
          unaff_EDI = (_union_86)TypeInfo__MVAvatar;
          if ((unaff_ESI.dummy == (Object__Class *)0x0) || (iVar67 = func_?(), iVar67 == 0)
             ) goto code_?;
          iVar67 = func_?();
          cVar85 = '\0';
          if (iVar67 != 0) {
            uVar64 = func_?(unaff_ESI.dummy,TypeInfo__MVAvatar);
            func_?(0x5a,uVar64);
            *unaff_FS_OFFSET = pvStack_105;
            return;
          }
        }
      }
    }
    break;
  case MVEventCodes__Enum_SpawnVehicleWithDriver:
    cVar85 = '\0';
    unaff_ESI = _Var55;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      pOVar56 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0x48,(MethodInfo *)0x0);
      unaff_EDI.dummy =
           (void *)func_?(pOVar56,
                                   TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                                  );
      eventCode = CONCAT13(1,(undefined3)eventCode);
      pOVar56 = (Object *)func_?(TypeInfo__System__Byte,(byte *)((int)&eventCode + 3));
      cVar85 = '\0';
      if (unaff_EDI.dummy != (Object__Class *)0x0) {
        TVar57 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                 ::UIElements::TextureId]::
                 Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                           ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                            unaff_EDI.typeHandle,pOVar56,
                            MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                           );
        p_Var59 = (_union_86 *)func_?(TVar57.m_Index,TypeInfo__System__Int32);
        _Stack_28 = (_union_86)p_Var59->__klassIndex;
        uStack_102 = 0;
        pOVar56 = (Object *)func_?(TypeInfo__System__Byte,&uStack_102);
        TVar57 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                 ::UIElements::TextureId]::
                 Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                           ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                            unaff_EDI.typeHandle,pOVar56,
                            MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                           );
        p_Var59 = (_union_86 *)func_?(TVar57.m_Index,TypeInfo__System__Int32);
        _Stack_34 = *p_Var59;
        pMVar52 = (this->fields).networkGame;
        cVar85 = '\0';
        if (pMVar52 != (MVNetworkGame *)0x0) {
          pMVar58 = MVNetworkGame::MVNetworkGame_get_WorldObjectClientManager
                              (pMVar52,(MethodInfo *)0x0);
          cVar85 = '\0';
          if (pMVar58 != (MVWorldObjectClientManager *)0x0) {
            pMVar34 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                                (pMVar58,_Stack_28.__klassIndex,(MethodInfo *)0x0);
            _Stack_48.dummy = (void *)func_?(pMVar34,TypeInfo__MVWorldObjectSpawnerVehicle)
            ;
            cVar85 = '\0';
            if (_Stack_48.dummy != (Object__Class *)0x0) {
              pIStack_98 = *(Il2CppClass **)(_Stack_48.__klassIndex + 0xfc);
              uStack_101 = 3;
              pOVar56 = (Object *)func_?(TypeInfo__System__Byte,&uStack_101);
              TVar57 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                       Object,UnityEngine::UIElements::TextureId]::
                       Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                                 ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                                  unaff_EDI.typeHandle,pOVar56,
                                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                 );
              puVar39 = (undefined4 *)func_?(TVar57.m_Index,TypeInfo__System__Int32);
              pDStack_99 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                            *)*puVar39;
              pOVar56 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                                  ((EventData *)_Var55.typeHandle,0xfe,(MethodInfo *)0x0);
              puVar39 = (undefined4 *)func_?(pOVar56,TypeInfo__System__Int32);
              pMStack_96 = (MVWorldObject *)*puVar39;
              pOVar56 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                                  ((EventData *)_Var55.typeHandle,0x3a,(MethodInfo *)0x0);
              p_Var59 = (_union_86 *)func_?(pOVar56,TypeInfo__System__Int32);
              _Stack_24 = (_union_86)p_Var59->__klassIndex;
              Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        ((EventData *)_Var55.typeHandle,0x5c,(MethodInfo *)0x0);
              p_Var59 = (_union_86 *)func_?();
              _Stack_28 = (_union_86)p_Var59->__klassIndex;
              Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        ((EventData *)_Var55.typeHandle,0x23,(MethodInfo *)0x0);
              p_Var59 = (_union_86 *)func_?();
              VStack_95.z = *(float *)p_Var59;
              pMVar52 = (this->fields).networkGame;
              cVar85 = '\0';
              unaff_EDI = (_union_86)this;
              if (pMVar52 != (MVNetworkGame *)0x0) {
                pWVar9 = (pMVar52->fields).worldNetwork;
                cVar85 = '\0';
                if (pWVar9 != (WorldNetwork *)0x0) {
                  WorldNetwork::WorldNetwork_OnCloneWorldObjectTreeEvent
                            (pWVar9,(int32_t)pMStack_96,0,1,(int32_t)pIStack_98,(int32_t)pDStack_99,
                             _Stack_24.__klassIndex,_Stack_28.__klassIndex,(MethodInfo *)0x0);
                  pMVar52 = (this->fields).networkGame;
                  cVar85 = '\0';
                  if (pMVar52 != (MVNetworkGame *)0x0) {
                    pMVar58 = MVNetworkGame::MVNetworkGame_get_WorldObjectClientManager
                                        (pMVar52,(MethodInfo *)0x0);
                    cVar85 = '\0';
                    if (pMVar58 != (MVWorldObjectClientManager *)0x0) {
                      pMStack_96 = MVWorldObjectClientManager::
                                   MVWorldObjectClientManager_GetWorldObject
                                             (pMVar58,(int32_t)pDStack_99,(MethodInfo *)0x0);
                      if ((TypeInfo__MVNetworkGame_EventHandling____c->_1).
                          cctor_finished_or_no_cctor == 0) {
                        func_?(TypeInfo__MVNetworkGame_EventHandling____c);
                      }
                      unaff_EDI = (_union_86)
                                  TypeInfo__MVNetworkGame_EventHandling____c->static_fields->
                                  __9__10_0;
                      if (unaff_EDI.dummy == (Object__Class *)0x0) {
                        if ((TypeInfo__MVNetworkGame_EventHandling____c->_1).
                            cctor_finished_or_no_cctor == 0) {
                          func_?(TypeInfo__MVNetworkGame_EventHandling____c);
                        }
                        object = TypeInfo__MVNetworkGame_EventHandling____c->static_fields->__9;
                        unaff_EDI.dummy =
                             (void *)func_?(TypeInfo__MVWorldObjectClient__CallBackDelegate
                                                    );
                        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::
                        Object]::UnityAction_1_System_Object___ctor
                                  ((UnityAction_1_System_Object_ *)unaff_EDI.typeHandle,
                                   (Object *)object,
                                   MethodInfo__MVNetworkGame_EventHandling____c___HandleEvent_b__10_0_MVWorldObjectClient_
                                   ,(MethodInfo *)0x0);
                        TypeInfo__MVNetworkGame_EventHandling____c->static_fields->__9__10_0 =
                             (MVWorldObjectClient_CallBackDelegate *)unaff_EDI;
                        func_?(&TypeInfo__MVNetworkGame_EventHandling____c->static_fields->
                                         __9__10_0,unaff_EDI.dummy);
                        _Var55 = (_union_86)photonEvent;
                      }
                      cVar85 = '\0';
                      unaff_ESI = _Var55;
                      if (pMStack_96 != (MVWorldObject *)0x0) {
                        func_?(0x2c,pMStack_96,unaff_EDI.dummy);
                        pMVar52 = (this->fields).networkGame;
                        cVar85 = '\0';
                        if (pMVar52 != (MVNetworkGame *)0x0) {
                          pMVar16 = (pMVar52->fields)._PlayerController_k__BackingField;
                          pMStack_96 = (MVWorldObject *)
                                       Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::
                                       EventData_get_Item((EventData *)_Var55.typeHandle,0xfe,
                                                          (MethodInfo *)0x0);
                          pOVar56 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::
                                    EventData_get_Item((EventData *)_Var55.typeHandle,0x8d,
                                                       (MethodInfo *)0x0);
                          cVar85 = '\0';
                          unaff_EDI.dummy = (Object__Class *)0x0;
                          if (pMVar16 != (MVLocalObjectController *)0x0) {
                            pbVar35 = (byte *)func_?(pOVar56,TypeInfo__System__Byte);
                            bVar26 = *pbVar35;
                            piVar53 = (int32_t *)func_?(pMStack_96,TypeInfo__System__Int32)
                            ;
                            MVLocalObjectController::
                            MVLocalObjectController_OnAttachWorldObjectToSeat
                                      (pMVar16,*piVar53,(int32_t)pDStack_99,_Stack_34.__klassIndex,
                                       (uint)bVar26,(MethodInfo *)0x0);
                            MVWorldObjectSpawner::MVWorldObjectSpawner_Take
                                      ((MVWorldObjectSpawner *)_Stack_48.typeHandle,
                                       (int32_t)VStack_95.z,(MethodInfo *)0x0);
                            *unaff_FS_OFFSET = pvStack_105;
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
    break;
  case MVEventCodes__Enum_Reward:
    cVar85 = '\0';
    unaff_EDI = _Var55;
    if (photonEvent != (EventData *)0x0) {
      pOVar56 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0x8f,(MethodInfo *)0x0);
      p_Var59 = (_union_86 *)func_?(pOVar56,TypeInfo__System__Int32);
      _Var66 = *p_Var59;
      pOVar56 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          ((EventData *)_Var55.typeHandle,0x91,(MethodInfo *)0x0);
      puVar47 = (undefined1 *)func_?(pOVar56,TypeInfo__MV__Common__RewardReason);
      eventCode = CONCAT13(*puVar47,(undefined3)eventCode);
      pOVar56 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          ((EventData *)_Var55.typeHandle,0x90,(MethodInfo *)0x0);
      pfVar36 = (float *)func_?(pOVar56,TypeInfo__MV__Common__RewardType);
      fVar8 = *pfVar36;
      _Stack_48 = _Var66;
      _Stack_34.dummy = (void *)func_?(TypeInfo__System__Int32,&_Stack_48);
      uStack_101 = eventCode._3_1_;
      pOVar56 = (Object *)func_?();
      VStack_95.z = fVar8;
      pOVar37 = (Object *)func_?();
      pSVar63 = mscorlib.dll::System::String::String_Format_2
                          (StringLiteral_Amount__0___rewardReason__1___re,(Object *)_Stack_34,
                           pOVar56,pOVar37,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                ((Object *)pSVar63,(MethodInfo *)0x0);
      pMVar91 = System__Object__MethodInfo__System__Array__Empty<System::Object>______;
      if ((System__Object__MethodInfo__System__Array__Empty<System::Object>______->field7_0x1c).
          rgctx_data == (Il2CppRGCTXData *)0x0) {
        func_?();
      }
      pIVar38 = (pMVar91->field7_0x1c).rgctx_data[2].klass;
      if (((uint)pIVar38->vtable[0].methodPtr & 0x100) == 0) {
        pIVar38 = (Il2CppClass *)func_?();
      }
      if (pIVar38->cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pIVar38 = (pMVar91->field7_0x1c).rgctx_data[2].klass;
      if (((uint)pIVar38->vtable[0].methodPtr & 0x100) == 0) {
        pIVar38 = (Il2CppClass *)func_?();
      }
      args = *(Object__Array **)pIVar38->static_fields;
      if ((TypeInfo__BrowserComm__ToJavaScript->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      BrowserComm+ToJavaScript::BrowserComm_ToJavaScript_ExternalCall
                (StringLiteral_refreshCredentials,args,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pvStack_105;
      return;
    }
    break;
  case MVEventCodes__Enum_RuntimeEvent:
    cVar85 = '\0';
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      pOVar56 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0xf5,(MethodInfo *)0x0);
      eventCode = func_?(pOVar56,TypeInfo__System__Byte);
      pMVar52 = (this->fields).networkGame;
      cVar85 = '\0';
      unaff_EDI = unaff_EDI;
      if (pMVar52 != (MVNetworkGame *)0x0) {
        pWVar9 = (pMVar52->fields).worldNetwork;
        cVar85 = '\0';
        unaff_EDI = unaff_EDI;
        if (pWVar9 != (WorldNetwork *)0x0) {
          this_00 = (pWVar9->fields)._.runtimeEventManagerNetwork;
          unaff_ESI.dummy = (void *)func_?(TypeInfo__MV__WorldObject__BytePacker);
          MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker__ctor_1
                    ((BytePacker *)unaff_ESI.typeHandle,(Byte__Array *)eventCode,(MethodInfo *)0x0);
          runtimeEvent = MVWorldObject.dll::MV::WorldObject::RuntimeEvents::RuntimeEvent::
                         RuntimeEvent_Create((BytePacker *)unaff_ESI.typeHandle,(MethodInfo *)0x0);
          cVar85 = '\0';
          unaff_EDI.dummy = (Object__Class *)0x0;
          if (this_00 != (RuntimeEventManagerNetwork *)0x0) {
            RuntimeEventManagerNetwork::RuntimeEventManagerNetwork_HandleRuntimeEvent
                      (this_00,runtimeEvent,(MethodInfo *)0x0);
            *unaff_FS_OFFSET = pvStack_105;
            return;
          }
        }
      }
    }
    break;
  case MVEventCodes__Enum_ResetTerrainEvent:
    pMVar52 = (this->fields).networkGame;
    cVar85 = '\0';
    unaff_EDI = unaff_EDI;
    if (pMVar52 != (MVNetworkGame *)0x0) {
      pWVar9 = (pMVar52->fields).worldNetwork;
      cVar85 = '\0';
      unaff_EDI = unaff_EDI;
      if (pWVar9 != (WorldNetwork *)0x0) {
        this_01 = (RuntimeEventManager *)(pWVar9->fields)._.runtimeEventManagerNetwork;
        cVar85 = '\0';
        unaff_EDI = unaff_EDI;
        if (this_01 != (RuntimeEventManager *)0x0) {
          RuntimeEventManager::RuntimeEventManager_ResetTerrain(this_01,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = pvStack_105;
          return;
        }
      }
    }
    break;
  case MVEventCodes__Enum_UpdateGameStat:
    cVar85 = '\0';
    unaff_ESI = _Var55;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      pOVar56 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0xfe,(MethodInfo *)0x0);
      p_Var59 = (_union_86 *)func_?(pOVar56,TypeInfo__System__Int32);
      unaff_EDI = (_union_86)p_Var59->__klassIndex;
      pOVar56 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          ((EventData *)_Var55.typeHandle,0x59,(MethodInfo *)0x0);
      p_Var59 = (_union_86 *)func_?(pOVar56,TypeInfo__System__Int32);
      _Stack_24 = *p_Var59;
      pOVar56 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          ((EventData *)_Var55.typeHandle,0x9f,(MethodInfo *)0x0);
      puVar47 = (undefined1 *)func_?(pOVar56,TypeInfo__System__Byte);
      _Stack_28.__klassIndex._0_1_ = *puVar47;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                ((EventData *)_Var55.typeHandle,0xa0,(MethodInfo *)0x0);
      puVar39 = (undefined4 *)func_?();
      pDStack_99 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                    *)*puVar39;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                ((EventData *)_Var55.typeHandle,0xa1,(MethodInfo *)0x0);
      puVar39 = (undefined4 *)func_?();
      pIStack_98 = (Il2CppClass *)*puVar39;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                ((EventData *)_Var55.typeHandle,0xa2,(MethodInfo *)0x0);
      puVar47 = (undefined1 *)func_?();
      eventCode = CONCAT31(eventCode._1_3_,*puVar47);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                ((EventData *)_Var55.typeHandle,0xa3,(MethodInfo *)0x0);
      pcVar68 = (char *)func_?();
      pMVar52 = (this->fields).networkGame;
      if (*pcVar68 == '\0') {
        cVar85 = '\0';
        if (pMVar52 != (MVNetworkGame *)0x0) {
          pGVar10 = (pMVar52->fields).gameStatCounterManager;
          cVar85 = '\0';
          if (pGVar10 != (GameStatCounterManager *)0x0) {
            MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager_Update
                      (pGVar10,_Stack_28.__klassIndex,unaff_EDI.__klassIndex,_Stack_24.__klassIndex,
                       (int32_t)pDStack_99,(int32_t)pIStack_98,(bool)eventCode,(MethodInfo *)0x0);
            *unaff_FS_OFFSET = pvStack_105;
            return;
          }
        }
      }
      else {
        cVar85 = '\0';
        if (pMVar52 != (MVNetworkGame *)0x0) {
          pGVar10 = (pMVar52->fields).gameStatCounterManager;
          cVar85 = '\0';
          if (pGVar10 != (GameStatCounterManager *)0x0) {
            MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager_Increment
                      (pGVar10,_Stack_28.__klassIndex,_Stack_24.__klassIndex,unaff_EDI.__klassIndex,
                       (int32_t)pDStack_99,(int32_t)pIStack_98,(bool)eventCode,(MethodInfo *)0x0);
            *unaff_FS_OFFSET = pvStack_105;
            return;
          }
        }
      }
    }
    break;
  case MVEventCodes__Enum_UpdateGameStatType:
    cVar85 = '\0';
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      pOVar56 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0x9e,(MethodInfo *)0x0);
      pBVar84 = (Byte__Array *)func_?(pOVar56,TypeInfo__System__Byte);
      pMVar52 = (this->fields).networkGame;
      cVar85 = '\0';
      unaff_EDI = unaff_EDI;
      if (pMVar52 != (MVNetworkGame *)0x0) {
        pGVar10 = (pMVar52->fields).gameStatCounterManager;
        cVar85 = '\0';
        unaff_EDI = unaff_EDI;
        if (pGVar10 != (GameStatCounterManager *)0x0) {
          MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager_SetStat
                    (pGVar10,pBVar84,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = pvStack_105;
          return;
        }
      }
    }
    break;
  case MVEventCodes__Enum_UpdateAvatarMetaData:
    cVar85 = '\0';
    unaff_ESI = _Var55;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      pOVar56 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0x16,(MethodInfo *)0x0);
      pMVar43 = (MVEventCodes__Enum *)func_?(pOVar56,TypeInfo__System__Int32);
      eventCode = *pMVar43;
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                ((EventData *)_Var55.typeHandle,0xa5,(MethodInfo *)0x0);
      unaff_EDI.dummy = (void *)func_?(TypeInfo__MV__WorldObject__BytePacker);
      pMVar91 = (MethodInfo *)0x0;
      pBVar84 = (Byte__Array *)func_?();
      MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker__ctor_1
                ((BytePacker *)unaff_EDI.typeHandle,pBVar84,pMVar91);
      unaff_ESI.dummy = (void *)func_?();
      MVWorldObject.dll::MV::WorldObject::MvAvatarMetaData::MvAvatarMetaData__ctor
                ((MvAvatarMetaData *)unaff_ESI.typeHandle,(BytePacker *)unaff_EDI.typeHandle,
                 (MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Debug);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                ((Object *)unaff_ESI.typeHandle,(MethodInfo *)0x0);
      pMVar52 = (this->fields).networkGame;
      cVar85 = '\0';
      if (pMVar52 != (MVNetworkGame *)0x0) {
        this_02 = (pMVar52->fields)._AvatarMetaDataWoMap_k__BackingField;
        cVar85 = '\0';
        if (this_02 != (MvAvatarMetaDataWoMap *)0x0) {
          MVWorldObject.dll::MV::WorldObject::MvAvatarMetaDataWoMap::MvAvatarMetaDataWoMap_Add
                    (this_02,eventCode,(MvAvatarMetaData *)unaff_ESI.typeHandle,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = pvStack_105;
          return;
        }
      }
    }
    break;
  case MVEventCodes__Enum_LevelChanged:
    unaff_EDI = (_union_86)(this->fields).networkGame;
    cVar85 = '\0';
    unaff_ESI = _Var55;
    if (photonEvent != (EventData *)0x0) {
      eventCode = (MVEventCodes__Enum)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0xfe,(MethodInfo *)0x0);
      Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                ((EventData *)_Var55.typeHandle,0xa9,(MethodInfo *)0x0);
      cVar85 = '\0';
      if (unaff_EDI.dummy != (void *)0x0) {
        piVar53 = (int32_t *)func_?();
        iVar59 = *piVar53;
        piVar53 = (int32_t *)func_?();
        MVNetworkGame::MVNetworkGame_OnLevelChanged
                  ((MVNetworkGame *)unaff_EDI.typeHandle,*piVar53,iVar59,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_105;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_GameBoostEvent:
    cVar85 = '\0';
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      pOVar56 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0xb7,(MethodInfo *)0x0);
      pbVar55 = (bool *)func_?(pOVar56,TypeInfo__System__Boolean);
      eventCode = CONCAT31(eventCode._1_3_,*pbVar55);
      pMVar52 = (this->fields).networkGame;
      cVar85 = '\0';
      unaff_EDI = unaff_EDI;
      if (pMVar52 != (MVNetworkGame *)0x0) {
        pMVar11 = (pMVar52->fields)._GameCoinManager_k__BackingField;
        cVar85 = '\0';
        unaff_EDI = unaff_EDI;
        if (pMVar11 != (MVGameCoinManager *)0x0) {
          MVGameCoinManager::MVGameCoinManager_OnGameBoostChanged
                    (pMVar11,*pbVar55,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = pvStack_105;
          return;
        }
      }
    }
    break;
  case MVEventCodes__Enum_NotificationEvent:
    cVar85 = '\0';
    unaff_ESI = _Var55;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      pOVar56 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,199,(MethodInfo *)0x0);
      cVar85 = '\0';
      unaff_EDI = unaff_EDI;
      if (pOVar56 != (Object *)0x0) {
        pIVar21 = (pOVar56->klass->_0).element_class;
        pIVar38 = (TypeInfo__System__Int32->_0).element_class;
        cVar85 = pIVar21 < pIVar38;
        pIVar77 = TypeInfo__System__Int32;
        if (pIVar21 != pIVar38) goto code_?;
        p_Var59 = (_union_86 *)func_?();
        _Var66 = (_union_86)p_Var59->__klassIndex;
        eventCode = (MVEventCodes__Enum)_Var66;
        unaff_ESI.dummy =
             Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                       (_Var55.dummy,200,(MethodInfo *)0x0);
        if (unaff_ESI.dummy == (Object__Class *)0x0) {
          _Var55.dummy = (Object__Class *)0x0;
        }
        else {
          unaff_EDI = (_union_86)((Il2CppClass_0 *)&(unaff_ESI.array)->etype)->image;
          if ((*(uint8_t *)(unaff_EDI.__klassIndex + 0xb8) <
               (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->
               _1).naturalAligment) ||
             ((Dictionary_2_System_Object_System_Object___Class *)
              ((Il2CppClass_1 *)(unaff_EDI.__klassIndex + 100))->typeHierarchy
              [(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->
               _1).naturalAligment - 1] !=
              TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
            bVar86 = false;
          }
          else {
            bVar86 = true;
          }
          _Var55.dummy = (Object__Class *)0x0;
          if (bVar86) {
            _Var55.typeHandle = unaff_ESI.typeHandle;
          }
          cVar85 = '\0';
          pMVar78 = (MVAvatarSpawnRoleCreator__Class *)
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
          ;
          _Var66 = (_union_86)eventCode;
          if (_Var55.dummy == (Object__Class *)0x0) goto code_?;
        }
        pMVar52 = (this->fields).networkGame;
        cVar85 = '\0';
        unaff_EDI = _Var66;
        if (pMVar52 != (MVNetworkGame *)0x0) {
          MVNetworkGame::MVNetworkGame_OnNotificationEventReceived
                    (pMVar52,_Var66.__klassIndex,
                     (Dictionary_2_System_Object_System_Object_ *)_Var55.typeHandle,
                     (MethodInfo *)0x0);
          *unaff_FS_OFFSET = pvStack_105;
          return;
        }
      }
    }
    break;
  case MVEventCodes__Enum_RequestMaterials:
    unaff_EDI = (_union_86)(this->fields).networkGame;
    cVar85 = '\0';
    if (photonEvent == (EventData *)0x0) break;
    pDVar40 = (Dictionary_2_System_Object_System_Object_ *)
              Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        (photonEvent,0x5d,(MethodInfo *)0x0);
    cVar85 = '\0';
    if (unaff_EDI.dummy == (void *)0x0) break;
    if (pDVar40 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
      MVNetworkGame::MVNetworkGame_OnRequestMaterialsResponse
                ((MVNetworkGame *)unaff_EDI.typeHandle,
                 (Dictionary_2_System_Object_System_Object_ *)0x0,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pvStack_105;
      return;
    }
    if (((pDVar40->klass->_1).naturalAligment <
         (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
         naturalAligment) ||
       ((Dictionary_2_System_Object_System_Object___Class *)
        (pDVar40->klass->_1).typeHierarchy
        [(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
         naturalAligment - 1] !=
        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
      bVar86 = false;
    }
    else {
      bVar86 = true;
    }
    pDVar41 = (Dictionary_2_System_Object_System_Object_ *)0x0;
    if (bVar86) {
      pDVar41 = pDVar40;
    }
    cVar85 = '\0';
    unaff_ESI = (_union_86)
                TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>;
    if (pDVar41 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
      MVNetworkGame::MVNetworkGame_OnRequestMaterialsResponse
                ((MVNetworkGame *)unaff_EDI.typeHandle,pDVar41,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pvStack_105;
      return;
    }
    goto code_?;
  case MVEventCodes__Enum_GetPlanetOwnershipTypes:
    unaff_EDI = (_union_86)(this->fields).networkGame;
    cVar85 = '\0';
    if (photonEvent != (EventData *)0x0) {
      pDVar40 = (Dictionary_2_System_Object_System_Object_ *)
                Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,1,(MethodInfo *)0x0);
      cVar85 = '\0';
      if (unaff_EDI.dummy != (void *)0x0) {
        if (pDVar40 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
          MVNetworkGame::MVNetworkGame_OnGetPlanetOwnershipTypes
                    ((MVNetworkGame *)unaff_EDI.typeHandle,
                     (Dictionary_2_System_Object_System_Object_ *)0x0,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = pvStack_105;
          return;
        }
        if (((pDVar40->klass->_1).naturalAligment <
             (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1
             ).naturalAligment) ||
           ((Dictionary_2_System_Object_System_Object___Class *)
            (pDVar40->klass->_1).typeHierarchy
            [(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1
             ).naturalAligment - 1] !=
            TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
          bVar86 = false;
        }
        else {
          bVar86 = true;
        }
        pDVar41 = (Dictionary_2_System_Object_System_Object_ *)0x0;
        if (bVar86) {
          pDVar41 = pDVar40;
        }
        cVar85 = '\0';
        unaff_ESI = (_union_86)
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
        ;
        if (pDVar41 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
          MVNetworkGame::MVNetworkGame_OnGetPlanetOwnershipTypes
                    ((MVNetworkGame *)unaff_EDI.typeHandle,pDVar41,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = pvStack_105;
          return;
        }
        goto code_?;
      }
    }
    break;
  case MVEventCodes__Enum_GetItemCategories:
    unaff_EDI = (_union_86)(this->fields).networkGame;
    cVar85 = '\0';
    if (photonEvent != (EventData *)0x0) {
      pDVar40 = (Dictionary_2_System_Object_System_Object_ *)
                Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,1,(MethodInfo *)0x0);
      cVar85 = '\0';
      if (unaff_EDI.dummy != (void *)0x0) {
        if (pDVar40 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
          MVNetworkGame::MVNetworkGame_OnGetItemCategories
                    ((MVNetworkGame *)unaff_EDI.typeHandle,
                     (Dictionary_2_System_Object_System_Object_ *)0x0,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = pvStack_105;
          return;
        }
        if (((pDVar40->klass->_1).naturalAligment <
             (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1
             ).naturalAligment) ||
           ((Dictionary_2_System_Object_System_Object___Class *)
            (pDVar40->klass->_1).typeHierarchy
            [(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1
             ).naturalAligment - 1] !=
            TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
          bVar86 = false;
        }
        else {
          bVar86 = true;
        }
        pDVar41 = (Dictionary_2_System_Object_System_Object_ *)0x0;
        if (bVar86) {
          pDVar41 = pDVar40;
        }
        cVar85 = '\0';
        unaff_ESI = (_union_86)
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
        ;
        if (pDVar41 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
          MVNetworkGame::MVNetworkGame_OnGetItemCategories
                    ((MVNetworkGame *)unaff_EDI.typeHandle,pDVar41,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = pvStack_105;
          return;
        }
        goto code_?;
      }
    }
    break;
  case MVEventCodes__Enum_SetupUserPlayMode:
    pMVar52 = (this->fields).networkGame;
    cVar85 = '\0';
    unaff_ESI = (_union_86)this;
    unaff_EDI = unaff_EDI;
    if (pMVar52 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_AllModesSetup(pMVar52,photonEvent,(MethodInfo *)0x0);
      pMVar52 = (this->fields).networkGame;
      cVar85 = '\0';
      unaff_ESI = (_union_86)this;
      unaff_EDI = _Var55;
      if (pMVar52 != (MVNetworkGame *)0x0) {
        MVNetworkGame::MVNetworkGame_PlayModeSetup
                  (pMVar52,(EventData *)_Var55.typeHandle,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_105;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_GameSnapshotData:
    cVar85 = '\0';
    unaff_ESI = _Var55;
    unaff_EDI = unaff_EDI;
    if (photonEvent == (EventData *)0x0) break;
    unaff_EDI.typeHandle =
         (Il2CppMetadataTypeHandle)
         Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                   (photonEvent,0xf5,(MethodInfo *)0x0);
    eventCode = func_?(TypeInfo__MV__WorldObject__BytePacker);
    _Stack_48.typeHandle = (Il2CppMetadataTypeHandle)TypeInfo__System__Byte;
    if (unaff_EDI.dummy == (Object__Class *)0x0) {
      pBVar84 = (Byte__Array *)0x0;
code_?:
      unaff_EDI = (_union_86)eventCode;
      MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker__ctor_1
                ((BytePacker *)eventCode,pBVar84,(MethodInfo *)0x0);
      pOVar56 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          ((EventData *)_Var55.typeHandle,0x85,(MethodInfo *)0x0);
      cVar85 = '\0';
      if (pOVar56 != (Object *)0x0) {
        pIVar21 = (pOVar56->klass->_0).element_class;
        pIVar38 = (TypeInfo__MV__Common__QueryType->_0).element_class;
        cVar85 = pIVar21 < pIVar38;
        pIVar77 = (Int32__Class *)TypeInfo__MV__Common__QueryType;
        if (pIVar21 != pIVar38) {
code_?:
          func_?(pOVar56,pIVar77);
          pSVar45 = extraout_ECX;
          pSVar74 = extraout_EDX;
          goto code_?;
        }
        puVar47 = (undefined1 *)func_?(pOVar56);
        eventCode = CONCAT31(eventCode._1_3_,*puVar47);
        pOVar56 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            ((EventData *)_Var55.typeHandle,100,(MethodInfo *)0x0);
        cVar85 = '\0';
        if (pOVar56 != (Object *)0x0) {
          pIVar21 = (pOVar56->klass->_0).element_class;
          pIVar38 = (TypeInfo__System__Boolean->_0).element_class;
          cVar85 = pIVar21 < pIVar38;
          pIVar77 = (Int32__Class *)TypeInfo__System__Boolean;
          if (pIVar21 != pIVar38) goto code_?;
          pbVar55 = (bool *)func_?(pOVar56);
          pMVar52 = (this->fields).networkGame;
          cVar85 = '\0';
          if (pMVar52 != (MVNetworkGame *)0x0) {
            MVNetworkGame::MVNetworkGame_HandleGameSnapshotData
                      (pMVar52,(BytePacker *)unaff_EDI.typeHandle,eventCode,*pbVar55,
                       (MethodInfo *)0x0);
            *unaff_FS_OFFSET = pvStack_105;
            return;
          }
        }
      }
      break;
    }
    pBVar84 = (Byte__Array *)func_?(unaff_EDI.dummy,TypeInfo__System__Byte);
    cVar85 = '\0';
    if (pBVar84 != (Byte__Array *)0x0) goto code_?;
    goto code_?;
  case MVEventCodes__Enum_SetActorReady:
    cVar85 = '\0';
    unaff_EDI = _Var55;
    if (photonEvent != (EventData *)0x0) {
      unaff_ESI.typeHandle =
           (Il2CppMetadataTypeHandle)
           Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                     (photonEvent,0xfe,(MethodInfo *)0x0);
      pMVar52 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      cVar85 = '\0';
      if (pMVar52 != (MVNetworkGame *)0x0) {
        pMVar48 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar52,(MethodInfo *)0x0);
        cVar85 = '\0';
        if (pMVar48 != (MVLocalPlayer *)0x0) {
          eventCode = (pMVar48->fields)._._ActorNr_k__BackingField;
          cVar85 = '\0';
          if (unaff_ESI.dummy != (Object__Class *)0x0) {
            pIVar21 = (Il2CppClass *)
                      ((Il2CppClass_0 *)&(unaff_ESI.array)->etype)->image->codeGenModule;
            pIVar38 = (TypeInfo__System__Int32->_0).element_class;
            cVar85 = pIVar21 < pIVar38;
            pSVar74 = (String__Class *)TypeInfo__System__Int32;
            if (pIVar21 != pIVar38) goto code_?;
            pMVar43 = (MVEventCodes__Enum *)func_?();
            if (*pMVar43 == eventCode) {
              MVGameControllerBase::MVGameControllerBase_set_JoinState
                        (MVJoinState__Enum_Playing,(MethodInfo *)0x0);
              MVNetworkGame_EventHandling_HandleActorReadyMetric(this,(MethodInfo *)0x0);
              pMVar52 = (this->fields).networkGame;
              cVar85 = '\0';
              unaff_ESI = (_union_86)this;
              if (pMVar52 != (MVNetworkGame *)0x0) {
                pMVar11 = (pMVar52->fields)._GameCoinManager_k__BackingField;
                cVar85 = '\0';
                unaff_ESI = (_union_86)this;
                if (pMVar11 != (MVGameCoinManager *)0x0) {
                  MVGameCoinManager::MVGameCoinManager_Reset
                            (pMVar11,(this->fields).networkGame,(MethodInfo *)0x0);
                  pMVar52 = (this->fields).networkGame;
                  cVar85 = '\0';
                  unaff_ESI = (_union_86)this;
                  if (pMVar52 != (MVNetworkGame *)0x0) {
                    pMVar42 = (pMVar52->fields).operationRequests;
                    cVar85 = '\0';
                    unaff_ESI.dummy = (Object__Class *)0x0;
                    if (pMVar42 != (MVNetworkGame_OperationRequests *)0x0) {
                      if (cRam_? == '\0') {
                        func_?(&
                                        MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                                       );
                        func_?(&
                                        TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                                       );
                        func_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
                        cRam_? = '\x01';
                      }
                      _Stack_48.dummy =
                           (void *)func_?(
                                                  TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                                                  );
                      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::
                      Object]::Dictionary_2_System_Byte_System_Object___ctor
                                ((Dictionary_2_System_Byte_System_Object_ *)_Stack_48.typeHandle,
                                 MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                                );
                      unaff_ESI = (_union_86)(pMVar42->fields).peer;
                      if ((TypeInfo__ExitGames__Client__Photon__SendOptions->_1).
                          cctor_finished_or_no_cctor == 0) {
                        func_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
                      }
                      pSVar14 = TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields;
                      eventCode._0_1_ = (pSVar14->SendReliable).Encrypt;
                      eventCode._1_1_ = (pSVar14->SendReliable).Channel;
                      eventCode._2_2_ = *(undefined2 *)&(pSVar14->SendReliable).field_0x6;
                      cVar85 = '\0';
                      if (unaff_ESI.dummy != (Object__Class *)0x0) {
                        pIVar12 = ((Il2CppClass_0 *)&(unaff_ESI.array)->etype)->image;
                        (*(code *)pIVar12[6].assembly)
                                  (unaff_ESI.dummy,0x66,_Stack_48.dummy,
                                   (pSVar14->SendReliable).DeliveryMode,eventCode,
                                   pIVar12[6].typeCount);
                        goto code_?;
                      }
                    }
                  }
                }
              }
            }
            else {
code_?:
              uStack_107 = 0;
              pMVar52 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
              cVar85 = '\0';
              if (pMVar52 != (MVNetworkGame *)0x0) {
                eventCode = (MVEventCodes__Enum)(pMVar52->fields).playerContainer;
                unaff_ESI.dummy =
                     Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                               (_Var55.dummy,0xfe,(MethodInfo *)0x0);
                pSVar45 = (String *)
                          Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::
                          EventData_get_Item((EventData *)_Var55.typeHandle,0xd0,(MethodInfo *)0x0);
                unaff_EDI = (_union_86)eventCode;
                cVar85 = '\0';
                if ((eventCode != MVEventCodes__Enum_NoCodeSet) &&
                   (cVar85 = '\0', pSVar45 != (String *)0x0)) {
                  pIVar21 = (pSVar45->klass->_0).element_class;
                  pIVar38 = (TypeInfo__System__Boolean->_0).element_class;
                  cVar85 = pIVar21 < pIVar38;
                  pSVar74 = (String__Class *)TypeInfo__System__Boolean;
                  if (pIVar21 != pIVar38) goto code_?;
                  puVar47 = (undefined1 *)func_?(pSVar45);
                  eventCode = CONCAT31((int3)((uint)puVar47 >> 8),*puVar47);
                  cVar85 = '\0';
                  if (unaff_ESI.dummy != (Object__Class *)0x0) {
                    pIVar21 = (Il2CppClass *)
                              ((Il2CppClass_0 *)&(unaff_ESI.array)->etype)->image->codeGenModule;
                    pIVar38 = (TypeInfo__System__Int32->_0).element_class;
                    cVar85 = pIVar21 < pIVar38;
                    pSVar74 = (String__Class *)TypeInfo__System__Int32;
                    if (pIVar21 == pIVar38) {
                      piVar53 = (int32_t *)func_?(unaff_ESI.dummy);
                      MVPlayerContainer::MVPlayerContainer_SetPlayerReady
                                ((MVPlayerContainer *)unaff_EDI.typeHandle,*piVar53,(bool)eventCode,
                                 (MethodInfo *)0x0);
                      *unaff_FS_OFFSET = pvStack_105;
                      return;
                    }
                    goto code_?;
                  }
                }
              }
            }
          }
        }
      }
    }
    break;
  case MVEventCodes__Enum_RequestFriends:
    unaff_EDI = (_union_86)(this->fields).networkGame;
    cVar85 = '\0';
    if (photonEvent != (EventData *)0x0) {
      pDVar40 = (Dictionary_2_System_Object_System_Object_ *)
                Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0x33,(MethodInfo *)0x0);
      cVar85 = '\0';
      if (unaff_EDI.dummy != (void *)0x0) {
        if (pDVar40 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
          MVNetworkGame::MVNetworkGame_OnRequestFriendsResponse
                    ((MVNetworkGame *)unaff_EDI.typeHandle,
                     (Dictionary_2_System_Object_System_Object_ *)0x0,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = pvStack_105;
          return;
        }
        if (((pDVar40->klass->_1).naturalAligment <
             (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1
             ).naturalAligment) ||
           ((Dictionary_2_System_Object_System_Object___Class *)
            (pDVar40->klass->_1).typeHierarchy
            [(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1
             ).naturalAligment - 1] !=
            TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
          bVar86 = false;
        }
        else {
          bVar86 = true;
        }
        pDVar41 = (Dictionary_2_System_Object_System_Object_ *)0x0;
        if (bVar86) {
          pDVar41 = pDVar40;
        }
        cVar85 = '\0';
        unaff_ESI = (_union_86)
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
        ;
        if (pDVar41 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
          MVNetworkGame::MVNetworkGame_OnRequestFriendsResponse
                    ((MVNetworkGame *)unaff_EDI.typeHandle,pDVar41,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = pvStack_105;
          return;
        }
        goto code_?;
      }
    }
    break;
  case MVEventCodes__Enum_GetItemInventory:
    unaff_EDI = (_union_86)(this->fields).networkGame;
    cVar85 = '\0';
    if (photonEvent != (EventData *)0x0) {
      pDVar40 = (Dictionary_2_System_Object_System_Object_ *)
                Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0xf5,(MethodInfo *)0x0);
      cVar85 = '\0';
      if (unaff_EDI.dummy != (void *)0x0) {
        if (pDVar40 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
          MVNetworkGame::MVNetworkGame_OnInventoryResultSetResponse
                    ((MVNetworkGame *)unaff_EDI.typeHandle,
                     (Dictionary_2_System_Object_System_Object_ *)0x0,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = pvStack_105;
          return;
        }
        if (((pDVar40->klass->_1).naturalAligment <
             (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1
             ).naturalAligment) ||
           ((Dictionary_2_System_Object_System_Object___Class *)
            (pDVar40->klass->_1).typeHierarchy
            [(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1
             ).naturalAligment - 1] !=
            TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
          bVar86 = false;
        }
        else {
          bVar86 = true;
        }
        pDVar41 = (Dictionary_2_System_Object_System_Object_ *)0x0;
        if (bVar86) {
          pDVar41 = pDVar40;
        }
        cVar85 = '\0';
        unaff_ESI = (_union_86)
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
        ;
        if (pDVar41 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
          MVNetworkGame::MVNetworkGame_OnInventoryResultSetResponse
                    ((MVNetworkGame *)unaff_EDI.typeHandle,pDVar41,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = pvStack_105;
          return;
        }
        goto code_?;
      }
    }
    break;
  case MVEventCodes__Enum_GetItemShopInventory:
    eventCode = (MVEventCodes__Enum)(this->fields).networkGame;
    cVar85 = '\0';
    unaff_EDI = _Var55;
    if (photonEvent == (EventData *)0x0) break;
    unaff_ESI.typeHandle =
         (Il2CppMetadataTypeHandle)
         Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                   (photonEvent,0xf5,(MethodInfo *)0x0);
    pOVar56 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        ((EventData *)_Var55.typeHandle,7,(MethodInfo *)0x0);
    unaff_EDI = (_union_86)eventCode;
    cVar85 = '\0';
    if ((eventCode == MVEventCodes__Enum_NoCodeSet) || (cVar85 = '\0', pOVar56 == (Object *)0x0))
    break;
    pIVar21 = (pOVar56->klass->_0).element_class;
    pIVar38 = (TypeInfo__System__Boolean->_0).element_class;
    cVar85 = pIVar21 < pIVar38;
    pIVar77 = (Int32__Class *)TypeInfo__System__Boolean;
    if (pIVar21 != pIVar38) goto code_?;
    pcVar68 = (char *)func_?();
    bVar86 = *pcVar68 == '\0';
    eventCode = CONCAT31(eventCode._1_3_,bVar86);
    if (unaff_ESI.dummy == (Object__Class *)0x0) {
      MVNetworkGame::MVNetworkGame_OnShopInventoryResultSetResponse
                ((MVNetworkGame *)unaff_EDI.typeHandle,
                 (Dictionary_2_System_Object_System_Object_ *)0x0,bVar86,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pvStack_105;
      return;
    }
    if ((*(byte *)&((Il2CppClass_0 *)&(unaff_ESI.array)->etype)->image[4].assembly <
         (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
         naturalAligment) ||
       (*(Dictionary_2_System_Object_System_Object___Class **)
         (((Il2CppClass_0 *)&(unaff_ESI.array)->etype)->image[2].typeCount +
         ((TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
          naturalAligment - 1) * 4) !=
        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
      bVar87 = false;
    }
    else {
      bVar87 = true;
    }
    _Var55.dummy = (Object__Class *)0x0;
    if (bVar87) {
      _Var55.typeHandle = unaff_ESI.typeHandle;
    }
    cVar85 = '\0';
    pMVar78 = (MVAvatarSpawnRoleCreator__Class *)
              TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>;
    if (_Var55.dummy != (Object__Class *)0x0) {
      MVNetworkGame::MVNetworkGame_OnShopInventoryResultSetResponse
                ((MVNetworkGame *)unaff_EDI.typeHandle,
                 (Dictionary_2_System_Object_System_Object_ *)_Var55.typeHandle,bVar86,
                 (MethodInfo *)0x0);
      *unaff_FS_OFFSET = pvStack_105;
      return;
    }
    goto code_?;
  case MVEventCodes__Enum_GetBuiltInItemBusinessData:
    unaff_EDI = (_union_86)(this->fields).networkGame;
    cVar85 = '\0';
    if (photonEvent != (EventData *)0x0) {
      pDVar40 = (Dictionary_2_System_Object_System_Object_ *)
                Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0x83,(MethodInfo *)0x0);
      cVar85 = '\0';
      if (unaff_EDI.dummy != (void *)0x0) {
        if (pDVar40 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
          MVNetworkGame::MVNetworkGame_OnGetBuiltInItemBusinessData
                    ((MVNetworkGame *)unaff_EDI.typeHandle,
                     (Dictionary_2_System_Object_System_Object_ *)0x0,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = pvStack_105;
          return;
        }
        if (((pDVar40->klass->_1).naturalAligment <
             (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1
             ).naturalAligment) ||
           ((Dictionary_2_System_Object_System_Object___Class *)
            (pDVar40->klass->_1).typeHierarchy
            [(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1
             ).naturalAligment - 1] !=
            TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
          bVar86 = false;
        }
        else {
          bVar86 = true;
        }
        pDVar41 = (Dictionary_2_System_Object_System_Object_ *)0x0;
        if (bVar86) {
          pDVar41 = pDVar40;
        }
        cVar85 = '\0';
        unaff_ESI = (_union_86)
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
        ;
        if (pDVar41 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
          MVNetworkGame::MVNetworkGame_OnGetBuiltInItemBusinessData
                    ((MVNetworkGame *)unaff_EDI.typeHandle,pDVar41,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = pvStack_105;
          return;
        }
        goto code_?;
      }
    }
    break;
  case MVEventCodes__Enum_LargeDBQueryAvatarShopInventory:
    unaff_EDI = (_union_86)(this->fields).networkGame;
    cVar85 = '\0';
    if (photonEvent != (EventData *)0x0) {
      pDVar40 = (Dictionary_2_System_Object_System_Object_ *)
                Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0xf5,(MethodInfo *)0x0);
      cVar85 = '\0';
      if (unaff_EDI.dummy != (void *)0x0) {
        if (pDVar40 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
          MVNetworkGame::MVNetworkGame_OnAvatarShopInventoryResultSetResponse
                    ((MVNetworkGame *)unaff_EDI.typeHandle,
                     (Dictionary_2_System_Object_System_Object_ *)0x0,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = pvStack_105;
          return;
        }
        if (((pDVar40->klass->_1).naturalAligment <
             (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1
             ).naturalAligment) ||
           ((Dictionary_2_System_Object_System_Object___Class *)
            (pDVar40->klass->_1).typeHierarchy
            [(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1
             ).naturalAligment - 1] !=
            TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
          bVar86 = false;
        }
        else {
          bVar86 = true;
        }
        pDVar41 = (Dictionary_2_System_Object_System_Object_ *)0x0;
        if (bVar86) {
          pDVar41 = pDVar40;
        }
        cVar85 = '\0';
        unaff_ESI = (_union_86)
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
        ;
        if (pDVar41 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
          MVNetworkGame::MVNetworkGame_OnAvatarShopInventoryResultSetResponse
                    ((MVNetworkGame *)unaff_EDI.typeHandle,pDVar41,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = pvStack_105;
          return;
        }
        goto code_?;
      }
    }
    break;
  case MVEventCodes__Enum_InitializeAvatarEdit:
    cVar85 = '\0';
    unaff_EDI = unaff_EDI;
    if (photonEvent == (EventData *)0x0) break;
    _Var55.typeHandle =
         (Il2CppMetadataTypeHandle)
         Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                   (photonEvent,0xa4,(MethodInfo *)0x0);
    eventCode = (MVEventCodes__Enum)TypeInfo__System__Byte;
    if (_Var55.dummy == (Dictionary_2_System_Object_System_Object___Class *)0x0) {
      pBVar84 = (Byte__Array *)0x0;
code_?:
      eventCode = (MVEventCodes__Enum)(this->fields).networkGame;
      unaff_ESI.dummy = (void *)func_?();
      MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker__ctor_1
                ((BytePacker *)unaff_ESI.typeHandle,pBVar84,(MethodInfo *)0x0);
      unaff_EDI.dummy = (void *)func_?();
      MVWorldObject.dll::MV::WorldObject::MvAvatarMetaDataWoMap::MvAvatarMetaDataWoMap__ctor
                ((MvAvatarMetaDataWoMap *)unaff_EDI.typeHandle,(BytePacker *)unaff_ESI.typeHandle,
                 (MethodInfo *)0x0);
      cVar85 = '\0';
      if (eventCode != MVEventCodes__Enum_NoCodeSet) {
        ((_union_86 *)(eventCode + 0x9c))->type = (Il2CppType *)unaff_EDI;
        func_?(eventCode + 0x9c,unaff_EDI.dummy);
        *unaff_FS_OFFSET = pvStack_105;
        return;
      }
      break;
    }
    pBVar84 = (Byte__Array *)func_?();
    cVar85 = '\0';
    unaff_EDI.dummy = (Object__Class *)0x0;
    if (pBVar84 != (Byte__Array *)0x0) goto code_?;
    goto code_?;
  case MVEventCodes__Enum_GetActiveAvatar:
    unaff_ESI = (_union_86)(this->fields).networkGame;
    cVar85 = '\0';
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      pOVar56 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0x16,(MethodInfo *)0x0);
      cVar85 = '\0';
      unaff_EDI = unaff_EDI;
      if ((unaff_ESI.dummy != (void *)0x0) &&
         (cVar85 = '\0', unaff_EDI = unaff_EDI, pOVar56 != (Object *)0x0)) {
        pIVar21 = (pOVar56->klass->_0).element_class;
        pIVar38 = (TypeInfo__System__Int32->_0).element_class;
        cVar85 = pIVar21 < pIVar38;
        pIVar77 = TypeInfo__System__Int32;
        if (pIVar21 == pIVar38) {
          piVar53 = (int32_t *)func_?();
          MVNetworkGame::MVNetworkGame_OnGetActiveAvatarResponse
                    ((MVNetworkGame *)unaff_ESI.typeHandle,*piVar53,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = pvStack_105;
          return;
        }
        goto code_?;
      }
    }
    break;
  case MVEventCodes__Enum_SyncronizePing:
    pMVar42 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
    cVar85 = '\0';
    unaff_ESI.dummy = (Object__Class *)0x0;
    unaff_EDI = unaff_EDI;
    if (pMVar42 != (MVNetworkGame_OperationRequests *)0x0) {
      if (cRam_? == '\0') {
        func_?();
        func_?(&
                        TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                       );
        func_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
        cRam_? = '\x01';
      }
      pPVar13 = (pMVar42->fields).peer;
      unaff_EDI.dummy = (void *)func_?();
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
      Dictionary_2_System_Byte_System_Object___ctor
                ((Dictionary_2_System_Byte_System_Object_ *)unaff_EDI.typeHandle,
                 MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                );
      if ((TypeInfo__ExitGames__Client__Photon__SendOptions->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
      }
      pSVar14 = TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields;
      uVar64._0_1_ = (pSVar14->SendReliable).Encrypt;
      uVar64._1_1_ = (pSVar14->SendReliable).Channel;
      uVar64._2_2_ = *(undefined2 *)&(pSVar14->SendReliable).field_0x6;
      cVar85 = '\0';
      unaff_ESI.dummy = (Object__Class *)0x0;
      if (pPVar13 != (PhotonPeer *)0x0) {
        (*(code *)(pPVar13->klass->vtable).SendOperation.method)
                  (pPVar13,0x3c,unaff_EDI.dummy,(pSVar14->SendReliable).DeliveryMode,uVar64,
                   pPVar13->klass[1]._0.image);
        *unaff_FS_OFFSET = pvStack_105;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_JoinNotification:
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Debug);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
              ((Object *)StringLiteral_MVEventCodes_JoinNotification,(MethodInfo *)0x0);
    unaff_ESI.dummy =
         (void *)func_?(
                                TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                                );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements
    ::StyleComplexSelector+PseudoStateData]::
    Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___ctor
              ((Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                *)unaff_ESI.typeHandle,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
              );
    eventCode = eventCode & 0xffffff;
    unaff_EDI.dummy = (void *)func_?(TypeInfo__System__Byte,(byte *)((int)&eventCode + 3));
    cVar85 = '\0';
    if (photonEvent != (EventData *)0x0) {
      pOVar56 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0xfe,(MethodInfo *)0x0);
      p_Var59 = (_union_86 *)func_?(pOVar56,TypeInfo__System__Int32);
      _Stack_48 = *p_Var59;
      pOVar56 = (Object *)func_?(TypeInfo__System__Int32,&_Stack_48);
      cVar85 = '\0';
      if (unaff_ESI.dummy != (Object__Class *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__Add
                  ((Dictionary_2_System_Object_System_Object_ *)unaff_ESI.typeHandle,
                   (Object *)unaff_EDI.typeHandle,pOVar56,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                  );
        MVGameControllerBase::MVGameControllerBase_PostGameMsg
                  (MVGameMsgType__Enum_UserJoined,
                   (Dictionary_2_System_Object_System_Object_ *)unaff_ESI.typeHandle,
                   (MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_105;
        return;
      }
    }
    break;
  case MVEventCodes__Enum_CloneWorldObjectTreeWithPosition:
    pMVar52 = (this->fields).networkGame;
    cVar85 = '\0';
    unaff_EDI = unaff_EDI;
    if (pMVar52 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_OnCloneWorldObjectTreePosition
                (pMVar52,photonEvent,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pvStack_105;
      return;
    }
    break;
  case MVEventCodes__Enum_CloneTempWorldObjectWithOriginalReferenceEvent:
    pMVar52 = (this->fields).networkGame;
    cVar85 = '\0';
    unaff_EDI = unaff_EDI;
    if (pMVar52 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_OnCloneTempWorldObjectWithOriginalReferenceEvent
                (pMVar52,photonEvent,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pvStack_105;
      return;
    }
    break;
  case MVEventCodes__Enum_LogicObjectFiringStateChange:
  case MVEventCodes__Enum_CollectTheItemDropOff:
    pMVar52 = (this->fields).networkGame;
    cVar85 = '\0';
    unaff_EDI = unaff_EDI;
    if (pMVar52 != (MVNetworkGame *)0x0) {
      pMVar15 = (pMVar52->fields).logicObjectManagerClientWrapper;
      cVar85 = '\0';
      unaff_ESI.dummy = (Object__Class *)0x0;
      unaff_EDI = unaff_EDI;
      if (pMVar15 != (MVNetworkGame_LogicObjectManagerClientWrapper *)0x0) {
        unaff_ESI = (_union_86)(pMVar15->fields).logicEventQueue;
        cVar85 = '\0';
        unaff_EDI = unaff_EDI;
        if (unaff_ESI.dummy != (Object__Class *)0x0) {
          if (cRam_? == '\0') {
            func_?(&
                            MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::Queue<ExitGames::Client::Photon::EventData>_>__Add_int__System__Collections__Generic__Queue<ExitGames::Client::Photon::EventData>_
                           );
            func_?(&
                            MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::Queue<ExitGames::Client::Photon::EventData>_>__ContainsKey_int_
                           );
            func_?(&
                            MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::Queue<ExitGames::Client::Photon::EventData>_>__get_Item_int_
                           );
            func_?(&TypeInfo__System__Int32);
            func_?(&
                            MethodInfo__System__Collections__Generic__Queue<ExitGames::Client::Photon::EventData>__Enqueue_ExitGames__Client__Photon__EventData_
                           );
            func_?(&
                            MethodInfo__System__Collections__Generic__Queue<ExitGames::Client::Photon::EventData>__Queue__
                           );
            func_?(&
                            TypeInfo__System__Collections__Generic__Queue<ExitGames::Client::Photon::EventData>
                           );
            cRam_? = '\x01';
          }
          unaff_EDI = (_union_86)photonEvent;
          cVar85 = '\0';
          if (photonEvent != (EventData *)0x0) {
            pOVar56 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                                (photonEvent,0x23,(MethodInfo *)0x0);
            cVar85 = '\0';
            if (pOVar56 != (Object *)0x0) {
              pIVar21 = (pOVar56->klass->_0).element_class;
              pIVar38 = (TypeInfo__System__Int32->_0).element_class;
              cVar85 = pIVar21 < pIVar38;
              pIVar77 = TypeInfo__System__Int32;
              if (pIVar21 != pIVar38) goto code_?;
              pMVar43 = (MVEventCodes__Enum *)func_?();
              eventCode = *pMVar43;
              cVar85 = '\0';
              if ((Object__Class *)unaff_ESI.type[1].data.typeHandle != (Object__Class *)0x0) {
                bVar25 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                         Int32,System::Single]::Dictionary_2_System_Int32_System_Single__ContainsKey
                                   ((Dictionary_2_System_Int32_System_Single_ *)
                                    unaff_ESI.type[1].data.typeHandle,eventCode,
                                    MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::Queue<ExitGames::Client::Photon::EventData>_>__ContainsKey_int_
                                   );
                if (bVar25 == 0) {
                  _Stack_48 = (_union_86)unaff_ESI.type[1].data.typeHandle;
                  VStack_95.z = (float)func_?(
                                                  TypeInfo__System__Collections__Generic__Queue<ExitGames::Client::Photon::EventData>
                                                  );
                  mscorlib.dll::System::Collections::Generic::Stack`1[System::Int32]::
                  Stack_1_System_Int32___ctor
                            ((Stack_1_System_Int32_ *)VStack_95.z,
                             MethodInfo__System__Collections__Generic__Queue<ExitGames::Client::Photon::EventData>__Queue__
                            );
                  cVar85 = '\0';
                  if (_Stack_48.dummy == (Object__Class *)0x0) break;
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                  Object]::Dictionary_2_System_Int32_System_Object__Add
                            ((Dictionary_2_System_Int32_System_Object_ *)_Stack_48.typeHandle,
                             eventCode,(Object *)VStack_95.z,
                             MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::Queue<ExitGames::Client::Photon::EventData>_>__Add_int__System__Collections__Generic__Queue<ExitGames::Client::Photon::EventData>_
                            );
                }
                cVar85 = '\0';
                if ((Object__Class *)unaff_ESI.type[1].data.typeHandle != (Object__Class *)0x0) {
                  this_07 = (Queue_1_System_Object_ *)
                            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                            Int32,System::Object]::Dictionary_2_System_Int32_System_Object__get_Item
                                      ((Dictionary_2_System_Int32_System_Object_ *)
                                       unaff_ESI.type[1].data.typeHandle,eventCode,
                                       MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::Queue<ExitGames::Client::Photon::EventData>_>__get_Item_int_
                                      );
                  cVar85 = '\0';
                  if (this_07 != (Queue_1_System_Object_ *)0x0) {
                    mscorlib.dll::System::Collections::Generic::Queue`1[System::Object]::
                    Queue_1_System_Object__Enqueue
                              (this_07,(Object *)unaff_EDI.typeHandle,
                               MethodInfo__System__Collections__Generic__Queue<ExitGames::Client::Photon::EventData>__Enqueue_ExitGames__Client__Photon__EventData_
                              );
                    *unaff_FS_OFFSET = pvStack_105;
                    return;
                  }
                }
              }
            }
          }
        }
      }
    }
    break;
  case MVEventCodes__Enum_LogicFrame:
    pMVar52 = (this->fields).networkGame;
    cVar85 = '\0';
    unaff_ESI.dummy = (Object__Class *)0x0;
    unaff_EDI = unaff_EDI;
    if (pMVar52 != (MVNetworkGame *)0x0) {
      pMVar15 = (pMVar52->fields).logicObjectManagerClientWrapper;
      cVar85 = '\0';
      unaff_ESI.dummy = (Object__Class *)0x0;
      unaff_EDI = unaff_EDI;
      if (pMVar15 != (MVNetworkGame_LogicObjectManagerClientWrapper *)0x0) {
        MVNetworkGame+LogicObjectManagerClientWrapper::
        MVNetworkGame_LogicObjectManagerClientWrapper_ExecuteRemainingFrames
                  (pMVar15,(MethodInfo *)0x0);
        pMVar83 = (pMVar15->fields).updateEvaluatorStep;
        cVar85 = '\0';
        unaff_ESI.dummy = (Object__Class *)0x0;
        unaff_EDI = unaff_EDI;
        if (pMVar83 != (MVNetworkGame_UpdateEvaluator *)0x0) {
          piVar53 = &(pMVar83->fields).stepTimestamp;
          *piVar53 = *piVar53 + 1000;
code_?:
          iVar59 = WaitForTicksLocal::WaitForTicksLocal_GetEnvironmentTick(0,(MethodInfo *)0x0);
          (pMVar83->fields).lastUpdateTick = iVar59;
          (pMVar83->fields).accumulatedTime = 0;
          *unaff_FS_OFFSET = pvStack_105;
          return;
        }
      }
    }
    break;
  case MVEventCodes__Enum_LogicFastForward:
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Debug);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
              ((Object *)StringLiteral_Fast_forward,(MethodInfo *)0x0);
    pMVar52 = (this->fields).networkGame;
    cVar85 = '\0';
    unaff_EDI = unaff_EDI;
    if (pMVar52 != (MVNetworkGame *)0x0) {
      unaff_ESI = (_union_86)(pMVar52->fields).logicObjectManagerClientWrapper;
      cVar85 = '\0';
      unaff_EDI = unaff_EDI;
      if (photonEvent != (EventData *)0x0) {
        Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                  (photonEvent,0x23,(MethodInfo *)0x0);
        cVar85 = '\0';
        unaff_EDI = unaff_EDI;
        if (unaff_ESI.dummy != (Object__Class *)0x0) {
          piVar53 = (int32_t *)func_?();
          pMVar83 = *(MVNetworkGame_UpdateEvaluator **)&unaff_ESI.type[2].attrs;
          cVar85 = '\0';
          unaff_ESI.dummy = (Object__Class *)0x0;
          unaff_EDI = unaff_EDI;
          if (pMVar83 != (MVNetworkGame_UpdateEvaluator *)0x0) {
            (pMVar83->fields).stepTimestamp = *piVar53;
            goto code_?;
          }
        }
      }
    }
    break;
  case MVEventCodes__Enum_LogicFastForwardEventImmediate:
    pMVar52 = (this->fields).networkGame;
    cVar85 = '\0';
    unaff_ESI.dummy = (Object__Class *)0x0;
    unaff_EDI = unaff_EDI;
    if (pMVar52 != (MVNetworkGame *)0x0) {
      unaff_ESI = (_union_86)(pMVar52->fields).logicObjectManagerClientWrapper;
      cVar85 = '\0';
      unaff_EDI = unaff_EDI;
      if (photonEvent != (EventData *)0x0) {
        Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                  (photonEvent,0x23,(MethodInfo *)0x0);
        cVar85 = '\0';
        unaff_EDI = unaff_EDI;
        if (unaff_ESI.dummy != (Object__Class *)0x0) {
          p_Var59 = (_union_86 *)func_?();
          unaff_EDI = (_union_86)p_Var59->__klassIndex;
          pcVar68 = *(char **)&unaff_ESI.type[1].attrs;
          while (cVar85 = '\0', pcVar68 != (char *)0x0) {
            cVar85 = '\0';
            if (*(int *)(pcVar68 + 0x2c) == 0) break;
            if (unaff_EDI.__klassIndex <= *(int *)(*(int *)(pcVar68 + 0x2c) + 0x14))
            goto code_?;
            MVNetworkGame+LogicObjectManagerClientWrapper::
            MVNetworkGame_LogicObjectManagerClientWrapper_UpdateLogicObjectManager
                      ((MVNetworkGame_LogicObjectManagerClientWrapper *)unaff_ESI.typeHandle,
                       (MethodInfo *)0x0);
            pcVar68 = *(char **)&unaff_ESI.type[1].attrs;
          }
        }
      }
    }
    break;
  case MVEventCodes__Enum_ForceDetachWorldObjectFromVehicle:
    cVar85 = '\0';
    unaff_EDI = unaff_EDI;
    if (photonEvent == (EventData *)0x0) break;
    pOVar56 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        (photonEvent,0x48,(MethodInfo *)0x0);
    _Var55.dummy = (void *)func_?(pOVar56,TypeInfo__System__Int32);
    pMVar52 = (this->fields).networkGame;
    cVar85 = '\0';
    unaff_ESI.dummy = _Var55.dummy;
    unaff_EDI = (_union_86)this;
    if (pMVar52 == (MVNetworkGame *)0x0) break;
    pMVar58 = MVNetworkGame::MVNetworkGame_get_WorldObjectClientManager(pMVar52,(MethodInfo *)0x0);
    cVar85 = '\0';
    if (_Var55.dummy == (Dictionary_2_System_Object_System_Object___Class *)0x0) break;
    cVar85 = '\0';
    if (*(char **)&_Var55.type[1].attrs != (char *)0x0) {
      cVar85 = '\0';
      if (pMVar58 != (MVWorldObjectClientManager *)0x0) {
        eventCode = (MVEventCodes__Enum)
                    MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                              (pMVar58,_Var55.type[2].data.__klassIndex,(MethodInfo *)0x0);
        pMVar52 = (this->fields).networkGame;
        cVar85 = '\0';
        if (pMVar52 != (MVNetworkGame *)0x0) {
          pMVar58 = MVNetworkGame::MVNetworkGame_get_WorldObjectClientManager
                              (pMVar52,(MethodInfo *)0x0);
          cVar85 = *(char **)&_Var55.type[1].attrs == (char *)0x0;
          if (*(char **)&_Var55.type[1].attrs < (char *)0x2) goto code_?;
          cVar85 = '\0';
          if (pMVar58 != (MVWorldObjectClientManager *)0x0) {
            iVar59._0_2_ = ((Il2CppType *)((int)_Var55 + 0x10))->attrs;
            iVar59._2_1_ = ((Il2CppType *)((int)_Var55 + 0x10))->type;
            iVar59._3_1_ = ((Il2CppType *)((int)_Var55 + 0x10))->field_0x7;
            unaff_ESI.typeHandle =
                 (Il2CppMetadataTypeHandle)
                 MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                           (pMVar58,iVar59,(MethodInfo *)0x0);
            if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
              func_?(TypeInfo__UnityEngine__Debug);
            }
            UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                      ((Object *)StringLiteral_MVEventCodes_ForceDetachWorldObj,(MethodInfo *)0x0);
            if (eventCode == MVEventCodes__Enum_NoCodeSet) goto code_?;
            if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
              func_?(TypeInfo__UnityEngine__Debug);
            }
            UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                      ((Object *)StringLiteral_vehicle____null,(MethodInfo *)0x0);
            cVar85 = '\0';
            if (unaff_ESI.dummy != (Object__Class *)0x0) {
              if (*(char **)&unaff_ESI.type[1].attrs !=
                  *(char **)(eventCode + MVEventCodes__Enum_RegisterPrototype))
              goto code_?;
              if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
                func_?(TypeInfo__UnityEngine__Debug);
              }
              UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                        ((Object *)StringLiteral_attachedObject_GroupId____vehicl,(MethodInfo *)0x0)
              ;
              iVar67 = func_?(unaff_ESI.dummy,TypeInfo__MVAvatarLocal);
              cVar85 = '\0';
              if (iVar67 != 0) {
                bVar25 = 0xfe;
                _Var55.typeHandle = unaff_ESI.typeHandle;
                this_08 = (MVAvatarLocal *)
                          func_?(unaff_ESI.dummy,TypeInfo__MVAvatarLocal,1,0);
                MVAvatarLocal::MVAvatarLocal_LeaveVehicle
                          (this_08,bVar25,(MethodInfo *)_Var55.typeHandle);
                pMVar52 = (this->fields).networkGame;
                cVar85 = '\0';
                if (pMVar52 != (MVNetworkGame *)0x0) {
                  pMVar16 = (pMVar52->fields)._PlayerController_k__BackingField;
                  cVar85 = '\0';
                  if (pMVar16 != (MVLocalObjectController *)0x0) {
                    MVLocalObjectController::
                    MVLocalObjectController_HandleDetachWorldObjectFromVehicle
                              (pMVar16,1,(MethodInfo *)0x0);
                    *unaff_FS_OFFSET = pvStack_105;
                    return;
                  }
                }
              }
            }
          }
        }
      }
      break;
    }
    goto code_?;
  case MVEventCodes__Enum_XPReward:
    pMVar52 = (this->fields).networkGame;
    cVar85 = '\0';
    unaff_EDI = unaff_EDI;
    if (pMVar52 != (MVNetworkGame *)0x0) {
      unaff_EDI.typeHandle =
           (Il2CppMetadataTypeHandle)
           MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar52,(MethodInfo *)0x0);
      unaff_ESI = (_union_86)photonEvent;
      cVar85 = '\0';
      _Stack_34.typeHandle = unaff_EDI.typeHandle;
      if (photonEvent != (EventData *)0x0) {
        VStack_95.z = (float)Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::
                             EventData_get_Item(photonEvent,0xdc,(MethodInfo *)0x0);
        _Stack_48.dummy =
             Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                       (unaff_ESI.dummy,0xdb,(MethodInfo *)0x0);
        eventCode = (MVEventCodes__Enum)
                    Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                              ((EventData *)unaff_ESI.typeHandle,0x55,(MethodInfo *)0x0);
        Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                  ((EventData *)unaff_ESI.typeHandle,0xd1,(MethodInfo *)0x0);
        cVar85 = '\0';
        if (unaff_EDI.dummy != (Object__Class *)0x0) {
          piVar53 = (int32_t *)func_?();
          iVar59 = *piVar53;
          piVar53 = (int32_t *)func_?();
          iVar17 = *piVar53;
          puVar47 = (undefined1 *)func_?();
          eventCode = CONCAT31((int3)((uint)puVar47 >> 8),*puVar47);
          piVar53 = (int32_t *)func_?();
          MVLocalPlayer::MVLocalPlayer_AddXp
                    ((MVLocalPlayer *)_Stack_34.typeHandle,*piVar53,eventCode,iVar17,iVar59,
                     (MethodInfo *)0x0);
          *unaff_FS_OFFSET = pvStack_105;
          return;
        }
      }
    }
    break;
  case MVEventCodes__Enum_GetProfileMetaData:
    cVar85 = '\0';
    unaff_EDI = _Var55;
    if (photonEvent != (EventData *)0x0) {
      pOVar56 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0xd0,(MethodInfo *)0x0);
      puVar47 = (undefined1 *)func_?(pOVar56,TypeInfo__System__Boolean);
      eventCode = CONCAT13(*puVar47,(undefined3)eventCode);
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      TypeInfo__FirstTimeEventManager->static_fields->_GetProfileMetaDataOk_k__BackingField =
           eventCode._3_1_;
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      if (TypeInfo__FirstTimeEventManager->static_fields->_GetProfileMetaDataOk_k__BackingField == 0
         ) goto code_?;
      eventCode = (MVEventCodes__Enum)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            ((EventData *)_Var55.typeHandle,0xcf,(MethodInfo *)0x0);
      if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pMVar91 = 
      MV__WorldObject__MetaData__ProfileMetaData_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::MetaData::ProfileMetaData>_System__String_
      ;
      method_00 = (MethodInfo *)func_?();
      pOVar56 = Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_2
                          ((String *)method_00,pMVar91);
      if ((TypeInfo__StatHatWrapper->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__StatHatWrapper);
      }
      StatHatWrapper::StatHatWrapper_Count(StringLiteral_FirstTime_Success,1,(MethodInfo *)0x0);
      cVar85 = '\0';
      unaff_ESI.dummy = (Object__Class *)0x0;
      if (pOVar56 != (Object *)0x0) {
        FirstTimeEventManager::FirstTimeEventManager_Initialize
                  ((FirstTimeState *)pOVar56[1].monitor,(MethodInfo *)0x0);
        eventCode = (MVEventCodes__Enum)
                    Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                              ((EventData *)_Var55.typeHandle,0xf5,(MethodInfo *)0x0);
        if ((TypeInfo__HighlightManager->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        pSVar63 = (String *)func_?();
        HighlightManager::HighlightManager_Init(pSVar63,method_00);
        profileSettingsState = (ProfileSettingsState *)pOVar56[2].monitor;
        if ((TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).
            cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
        }
        Assets::Scripts::ProfileSettings::ProfileSettingsManager::ProfileSettingsManager_Init
                  (profileSettingsState,(MethodInfo *)0x0);
        pGVar44 = MVGameControllerBase::MVGameControllerBase_get_GoldRewardManager
                            ((MethodInfo *)0x0);
        pOVar56 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            ((EventData *)_Var55.typeHandle,0xc4,(MethodInfo *)0x0);
        cVar85 = '\0';
        unaff_ESI.dummy = (Object__Class *)0x0;
        if (pGVar44 != (GoldRewardManager *)0x0) {
          pbVar55 = (bool *)func_?(pOVar56,TypeInfo__System__Boolean);
          (pGVar44->fields).isGoldRewardGame = *pbVar55;
          pOVar56 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                              ((EventData *)_Var55.typeHandle,0xc4,(MethodInfo *)0x0);
          pbVar55 = (bool *)func_?(pOVar56,TypeInfo__System__Boolean);
          BStack_103.m_value = *pbVar55;
          if ((TypeInfo__System__Boolean->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          pSVar63 = mscorlib.dll::System::Boolean::Boolean_ToString(&BStack_103,(MethodInfo *)0x0);
          pSVar63 = mscorlib.dll::System::String::String_Concat_3
                              (StringLiteral__bool_photonEvent__byte_MVParame,pSVar63,
                               (MethodInfo *)0x0);
          if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                    ((Object *)pSVar63,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = pvStack_105;
          return;
        }
      }
    }
    break;
  case MVEventCodes__Enum_ServerError:
    cVar85 = '\0';
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      pSVar45 = (String *)
                Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0xf5,(MethodInfo *)0x0);
      pSVar63 = (String *)0x0;
      if (pSVar45 == (String *)0x0) {
code_?:
        pSVar63 = mscorlib.dll::System::String::String_Concat_3
                            (StringLiteral_Server_error__,pSVar63,(MethodInfo *)0x0);
        MVGameControllerBase::MVGameControllerBase_PostGameMsg_1
                  (MVGameMsgType__Enum_Warning,pSVar63,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_105;
        return;
      }
      if (pSVar45->klass == TypeInfo__System__String) {
        pSVar63 = pSVar45;
      }
      cVar85 = '\0';
      pSVar74 = TypeInfo__System__String;
      if (pSVar63 != (String *)0x0) goto code_?;
code_?:
      func_?(pSVar45,pSVar74);
code_?:
      func_?();
      pSVar74 = extraout_ECX_00;
code_?:
      func_?(unaff_ESI.dummy,pSVar74);
      _Var55 = unaff_EDI;
code_?:
      func_?(_Var55.dummy,_Stack_24.dummy);
      unaff_EDI = _Var55;
    }
    break;
  case MVEventCodes__Enum_SetSayChatBubbleVisible:
    cVar85 = '\0';
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      eventCode = (MVEventCodes__Enum)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0xf5,(MethodInfo *)0x0);
      iVar67 = func_?(eventCode,
                               TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                              );
      pMVar91 = 
      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
      ;
      pSVar63 = StringLiteral_V;
      cVar85 = '\0';
      unaff_EDI = unaff_EDI;
      if (iVar67 != 0) {
        pDVar46 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                  func_?(eventCode,
                                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                                 );
        TVar57 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                 ::UIElements::TextureId]::
                 Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                           (pDVar46,(Object *)pSVar63,pMVar91);
        puVar47 = (undefined1 *)func_?(TVar57.m_Index,TypeInfo__System__Boolean);
        eventCode = CONCAT31(eventCode._1_3_,*puVar47);
        pMVar52 = (this->fields).networkGame;
        pOVar56 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0xfe,(MethodInfo *)0x0);
        cVar85 = '\0';
        unaff_ESI.dummy = (Object__Class *)0x0;
        unaff_EDI = (_union_86)pSVar63;
        if (pMVar52 != (MVNetworkGame *)0x0) {
          piVar53 = (int32_t *)func_?(pOVar56,TypeInfo__System__Int32);
          MVNetworkGame::MVNetworkGame_OnSetSayChatBubbleVisible
                    (pMVar52,*piVar53,(bool)eventCode,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = pvStack_105;
          return;
        }
      }
    }
    break;
  case MVEventCodes__Enum_GetPublishedPlanetProfileData:
    cVar85 = '\0';
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      _Var66.typeHandle =
           (Il2CppMetadataTypeHandle)
           Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                     (photonEvent,0xf5,(MethodInfo *)0x0);
      _Var55.dummy = (Object__Class *)0x0;
      if (_Var66.dummy != (Object__Class *)0x0) {
        if ((String__Class *)((Il2CppClass_0 *)&(_Var66.array)->etype)->image ==
            TypeInfo__System__String) {
          _Var55.typeHandle = _Var66.typeHandle;
        }
        cVar85 = '\0';
        pSVar74 = TypeInfo__System__String;
        unaff_ESI.dummy = (Dictionary_2_System_Object_System_Object___Class *)0x0;
        if (_Var55.dummy == (Object__Class *)0x0) goto code_?;
      }
      bVar25 = mscorlib.dll::System::String::String_IsNullOrEmpty
                         ((String *)_Var55.typeHandle,(MethodInfo *)0x0);
      if (bVar25 != 0) {
code_?:
        *unaff_FS_OFFSET = pvStack_105;
        return;
      }
      if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pOVar56 = Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_2
                          ((String *)_Var55.typeHandle,
                           MV__WorldObject__GamePassSystem__PlayerGamePassProgressionPackage_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::GamePassSystem::PlayerGamePassProgressionPackage>_System__String_
                          );
      cVar85 = '\0';
      unaff_ESI.dummy = (Object__Class *)0x0;
      unaff_EDI = unaff_EDI;
      if (pOVar56 != (Object *)0x0) {
        GamePassesManager::GamePassesManager_set_PlayerPlanetData
                  ((PlayerPlanetData *)pOVar56[1].klass,(MethodInfo *)0x0);
        message = (PlayerTierStateCalculator *)pOVar56[1].monitor;
        TypeInfo__GamePassesManager->static_fields->playerTierStateCalculator = message;
        goto code_?;
      }
    }
    break;
  case MVEventCodes__Enum_PlayerPlanetData:
    cVar85 = '\0';
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      unaff_ESI.typeHandle =
           (Il2CppMetadataTypeHandle)
           Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                     (photonEvent,0xf5,(MethodInfo *)0x0);
      if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      _Var55.dummy = (Object__Class *)0x0;
      if (unaff_ESI.dummy != (Object__Class *)0x0) {
        if ((String__Class *)((Il2CppClass_0 *)&(unaff_ESI.array)->etype)->image ==
            TypeInfo__System__String) {
          _Var55.typeHandle = unaff_ESI.typeHandle;
        }
        cVar85 = '\0';
        pSVar74 = TypeInfo__System__String;
        if (_Var55.dummy == (Object__Class *)0x0) goto code_?;
      }
      unaff_ESI.dummy =
           Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_2
                     (_Var55.dummy,
                      MV__WorldObject__GamePassSystem__PlayerPlanetData_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::GamePassSystem::PlayerPlanetData>_System__String_
                     );
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Debug);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                ((Object *)unaff_ESI.typeHandle,(MethodInfo *)0x0);
      GamePassesManager::GamePassesManager_UpdatePlayerPlanetData
                ((PlayerPlanetData *)unaff_ESI.typeHandle,(MethodInfo *)0x0);
      pMVar52 = (this->fields).networkGame;
      cVar85 = '\0';
      unaff_EDI = unaff_EDI;
      if (pMVar52 != (MVNetworkGame *)0x0) {
        pMVar18 = (pMVar52->fields).playerContainer;
        cVar85 = '\0';
        unaff_EDI = unaff_EDI;
        if (pMVar18 != (MVPlayerContainer *)0x0) {
          pMVar48 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(pMVar18,(MethodInfo *)0x0);
          cVar85 = '\0';
          unaff_EDI = unaff_EDI;
          if (pMVar48 != (MVLocalPlayer *)0x0) {
            MVLocalPlayer::MVLocalPlayer_set_PlayerPlanetData
                      (pMVar48,(PlayerPlanetData *)unaff_ESI.typeHandle,(MethodInfo *)0x0);
            *unaff_FS_OFFSET = pvStack_105;
            return;
          }
        }
      }
    }
    break;
  case MVEventCodes__Enum_PlayerPlanetRemote:
    cVar85 = '\0';
    unaff_EDI = _Var55;
    if (photonEvent != (EventData *)0x0) {
      unaff_ESI.typeHandle =
           (Il2CppMetadataTypeHandle)
           Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                     (photonEvent,0xf5,(MethodInfo *)0x0);
      if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      _Var66.dummy = (Object__Class *)0x0;
      if (unaff_ESI.dummy != (Object__Class *)0x0) {
        if ((String__Class *)((Il2CppClass_0 *)&(unaff_ESI.array)->etype)->image ==
            TypeInfo__System__String) {
          _Var66.typeHandle = unaff_ESI.typeHandle;
        }
        cVar85 = '\0';
        pSVar74 = TypeInfo__System__String;
        if (_Var66.dummy == (Object__Class *)0x0) goto code_?;
      }
      unaff_ESI.dummy =
           Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_2
                     (_Var66.dummy,
                      MV__WorldObject__GamePassSystem__PlayerPlanetDataRemote_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::GamePassSystem::PlayerPlanetDataRemote>_System__String_
                     );
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Debug);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                ((Object *)unaff_ESI.typeHandle,(MethodInfo *)0x0);
      pMVar52 = (this->fields).networkGame;
      cVar85 = '\0';
      if (pMVar52 != (MVNetworkGame *)0x0) {
        eventCode = (MVEventCodes__Enum)(pMVar52->fields).playerContainer;
        Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                  ((EventData *)_Var55.typeHandle,0xfe,(MethodInfo *)0x0);
        unaff_EDI = (_union_86)eventCode;
        cVar85 = '\0';
        if (eventCode != MVEventCodes__Enum_NoCodeSet) {
          piVar53 = (int32_t *)func_?();
          pMVar54 = MVPlayerContainer::MVPlayerContainer_get_Item
                              ((MVPlayerContainer *)unaff_EDI.typeHandle,*piVar53,(MethodInfo *)0x0)
          ;
          cVar85 = '\0';
          if (pMVar54 != (MVPlayer *)0x0) {
            (pMVar54->fields).playerPlanetDataRemote = (PlayerPlanetDataRemote *)unaff_ESI;
            func_?(&(pMVar54->fields).playerPlanetDataRemote,unaff_ESI.dummy);
            *unaff_FS_OFFSET = pvStack_105;
            return;
          }
        }
      }
    }
    break;
  case MVEventCodes__Enum_HighScores:
    cVar85 = '\0';
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      unaff_ESI.typeHandle =
           (Il2CppMetadataTypeHandle)
           Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                     (photonEvent,0xf5,(MethodInfo *)0x0);
      if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      _Var55.dummy = (Object__Class *)0x0;
      if (unaff_ESI.dummy != (Object__Class *)0x0) {
        if ((String__Class *)((Il2CppClass_0 *)&(unaff_ESI.array)->etype)->image ==
            TypeInfo__System__String) {
          _Var55.typeHandle = unaff_ESI.typeHandle;
        }
        cVar85 = '\0';
        pSVar74 = TypeInfo__System__String;
        if (_Var55.dummy == (Object__Class *)0x0) goto code_?;
      }
      pSVar63 = (String *)
                Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_2
                          ((String *)_Var55.typeHandle,
                           MV__WorldObject__GamePassSystem__HighScoreDatas_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::GamePassSystem::HighScoreDatas>_System__String_
                          );
      GamePassesHighScoreUpdateManager::GamePassesHighScoreUpdateManager_UpdateHigscore
                ((HighScoreDatas *)pSVar63,(MethodInfo *)0x0);
      uVar20 = (TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor;
joined_?:
      if (uVar20 == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                ((Object *)pSVar63,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pvStack_105;
      return;
    }
    break;
  case MVEventCodes__Enum_GoldRewardedForLevel:
    cVar85 = '\0';
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      unaff_ESI.typeHandle =
           (Il2CppMetadataTypeHandle)
           Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                     (photonEvent,0xf5,(MethodInfo *)0x0);
      if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      _Var55.dummy = (Object__Class *)0x0;
      if (unaff_ESI.dummy != (Object__Class *)0x0) {
        if ((String__Class *)((Il2CppClass_0 *)&(unaff_ESI.array)->etype)->image ==
            TypeInfo__System__String) {
          _Var55.typeHandle = unaff_ESI.typeHandle;
        }
        cVar85 = '\0';
        pSVar74 = TypeInfo__System__String;
        if (_Var55.dummy == (Object__Class *)0x0) goto code_?;
      }
      pOVar56 = Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_2
                          ((String *)_Var55.typeHandle,
                           MV__WorldObject__GoldRewardedForLevelCollection_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::GoldRewardedForLevelCollection>_System__String_
                          );
      cVar85 = '\0';
      unaff_EDI = unaff_EDI;
      if (pOVar56 != (Object *)0x0) {
        pMVar52 = (this->fields).networkGame;
        cVar85 = '\0';
        unaff_EDI = unaff_EDI;
        if (pMVar52 != (MVNetworkGame *)0x0) {
          pLVar19 = (pMVar52->fields).levelRewardsManager;
          cVar85 = '\0';
          unaff_EDI = unaff_EDI;
          if (pLVar19 != (LevelRewardsManager *)0x0) {
            LevelRewardsManager::LevelRewardsManager_AddClaimedLevelRewards
                      (pLVar19,(Dictionary_2_System_Int32_System_Int32_ *)pOVar56[1].klass,
                       (MethodInfo *)0x0);
            *unaff_FS_OFFSET = pvStack_105;
            return;
          }
        }
      }
    }
    break;
  case MVEventCodes__Enum_NextLevelGoldReward:
    cVar85 = '\0';
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      unaff_ESI.typeHandle =
           (Il2CppMetadataTypeHandle)
           Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                     (photonEvent,0xf5,(MethodInfo *)0x0);
      if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      _Var55.dummy = (Object__Class *)0x0;
      if (unaff_ESI.dummy != (Object__Class *)0x0) {
        if ((String__Class *)((Il2CppClass_0 *)&(unaff_ESI.array)->etype)->image ==
            TypeInfo__System__String) {
          _Var55.typeHandle = unaff_ESI.typeHandle;
        }
        cVar85 = '\0';
        pSVar74 = TypeInfo__System__String;
        if (_Var55.dummy == (Object__Class *)0x0) goto code_?;
      }
      pOVar56 = Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_2
                          ((String *)_Var55.typeHandle,
                           MV__WorldObject__GoldRewardedForLevelData_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::GoldRewardedForLevelData>_System__String_
                          );
      pMVar52 = (this->fields).networkGame;
      cVar85 = '\0';
      unaff_EDI = unaff_EDI;
      if (pMVar52 != (MVNetworkGame *)0x0) {
        pLVar19 = (pMVar52->fields).levelRewardsManager;
        cVar85 = '\0';
        unaff_EDI = unaff_EDI;
        if ((pOVar56 != (Object *)0x0) &&
           (cVar85 = '\0', unaff_EDI = unaff_EDI, pLVar19 != (LevelRewardsManager *)0x0)) {
          LevelRewardsManager::LevelRewardsManager_SetNextLevelReward
                    (pLVar19,(int32_t)pOVar56[1].klass,(int32_t)pOVar56[1].monitor,(MethodInfo *)0x0
                    );
          *unaff_FS_OFFSET = pvStack_105;
          return;
        }
      }
    }
    break;
  case MVEventCodes__Enum_PlayerTierStateCalculatorChanged:
    cVar85 = '\0';
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      unaff_ESI.typeHandle =
           (Il2CppMetadataTypeHandle)
           Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                     (photonEvent,0xf5,(MethodInfo *)0x0);
      if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      _Var55.dummy = (Object__Class *)0x0;
      if (unaff_ESI.dummy != (Object__Class *)0x0) {
        if ((String__Class *)((Il2CppClass_0 *)&(unaff_ESI.array)->etype)->image ==
            TypeInfo__System__String) {
          _Var55.typeHandle = unaff_ESI.typeHandle;
        }
        cVar85 = '\0';
        pSVar74 = TypeInfo__System__String;
        if (_Var55.dummy == (Object__Class *)0x0) goto code_?;
      }
      message = (PlayerTierStateCalculator *)
                Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_2
                          ((String *)_Var55.typeHandle,
                           MV__WorldObject__GamePassSystem__PlayerTierStateCalculator_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::GamePassSystem::PlayerTierStateCalculator>_System__String_
                          );
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Debug);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                ((Object *)message,(MethodInfo *)0x0);
      TypeInfo__GamePassesManager->static_fields->playerTierStateCalculator = message;
code_?:
      func_?(&TypeInfo__GamePassesManager->static_fields->playerTierStateCalculator,message
                     );
      *unaff_FS_OFFSET = pvStack_105;
      return;
    }
    break;
  case MVEventCodes__Enum_GetProjectEarnings:
    cVar85 = '\0';
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      unaff_ESI.typeHandle =
           (Il2CppMetadataTypeHandle)
           Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                     (photonEvent,0xf5,(MethodInfo *)0x0);
      if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      _Var55.dummy = (Object__Class *)0x0;
      if (unaff_ESI.dummy == (Object__Class *)0x0) {
code_?:
        newProjectEarningReport =
             (ProjectEarningsReport *)
             Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_2
                       ((String *)_Var55.typeHandle,
                        MV__WorldObject__GamePassSystem__GamePassEarnings__ProjectEarningsReport_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectEarningsReport>_System__String_
                       );
        GamePassesProjectEarningsManager::
        GamePassesProjectEarningsManager_UpdateProjectEarningReport
                  (newProjectEarningReport,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pvStack_105;
        return;
      }
      if ((String__Class *)((Il2CppClass_0 *)&(unaff_ESI.array)->etype)->image ==
          TypeInfo__System__String) {
        _Var55.typeHandle = unaff_ESI.typeHandle;
      }
      cVar85 = '\0';
      pSVar74 = TypeInfo__System__String;
      if (_Var55.dummy != (Object__Class *)0x0) goto code_?;
      goto code_?;
    }
    break;
  case MVEventCodes__Enum_TopHighScores:
    cVar85 = '\0';
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      unaff_ESI.typeHandle =
           (Il2CppMetadataTypeHandle)
           Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                     (photonEvent,0xf5,(MethodInfo *)0x0);
      if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      _Var55.dummy = (Object__Class *)0x0;
      if (unaff_ESI.dummy != (Object__Class *)0x0) {
        if ((String__Class *)((Il2CppClass_0 *)&(unaff_ESI.array)->etype)->image ==
            TypeInfo__System__String) {
          _Var55.typeHandle = unaff_ESI.typeHandle;
        }
        cVar85 = '\0';
        pSVar74 = TypeInfo__System__String;
        if (_Var55.dummy == (Object__Class *)0x0) goto code_?;
      }
      pSVar63 = (String *)
                Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_2
                          ((String *)_Var55.typeHandle,
                           MV__WorldObject__GamePassSystem__HighScoreDatas_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::GamePassSystem::HighScoreDatas>_System__String_
                          );
      GamePassesHighScoreUpdateManager::GamePassesHighScoreUpdateManager_UpdateHigscore
                ((HighScoreDatas *)pSVar63,(MethodInfo *)0x0);
      uVar20 = (TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor;
      goto joined_?;
    }
    break;
  case MVEventCodes__Enum_GetKogamaVat:
    cVar85 = '\0';
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      unaff_ESI.typeHandle =
           (Il2CppMetadataTypeHandle)
           Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                     (photonEvent,0xf5,(MethodInfo *)0x0);
      if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      _Var55.dummy = (Object__Class *)0x0;
      if (unaff_ESI.dummy == (Object__Class *)0x0) {
code_?:
        pKVar49 = (KogamaVatValues *)
                  Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::
                  JsonConvert_DeserializeObject_2
                            ((String *)_Var55.typeHandle,
                             MV__WorldObject__GamePassSystem__GamePassEarnings__KogamaVatValues_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::GamePassSystem::GamePassEarnings::KogamaVatValues>_System__String_
                            );
        if ((TypeInfo__SubscriberRewardDataManager->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__SubscriberRewardDataManager);
        }
        if (cRam_? == '\0') {
          func_?(&TypeInfo__SubscriberRewardDataManager);
          cRam_? = '\x01';
        }
        if ((TypeInfo__SubscriberRewardDataManager->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__SubscriberRewardDataManager);
        }
        TypeInfo__SubscriberRewardDataManager->static_fields->_VatValues_k__BackingField = pKVar49;
        func_?(&TypeInfo__SubscriberRewardDataManager->static_fields->
                         _VatValues_k__BackingField,pKVar49);
        *unaff_FS_OFFSET = pvStack_105;
        return;
      }
      if ((String__Class *)((Il2CppClass_0 *)&(unaff_ESI.array)->etype)->image ==
          TypeInfo__System__String) {
        _Var55.typeHandle = unaff_ESI.typeHandle;
      }
      cVar85 = '\0';
      pSVar74 = TypeInfo__System__String;
      if (_Var55.dummy != (Object__Class *)0x0) goto code_?;
      goto code_?;
    }
    break;
  case MVEventCodes__Enum_GetSubscriptionPerksData:
    cVar85 = '\0';
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      unaff_ESI.typeHandle =
           (Il2CppMetadataTypeHandle)
           Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                     (photonEvent,0xf5,(MethodInfo *)0x0);
      if ((TypeInfo__SubscriberRewardDataManager->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      cVar85 = '\0';
      unaff_EDI = unaff_EDI;
      if (unaff_ESI.dummy != (Object__Class *)0x0) {
        pIVar21 = (Il2CppClass *)((Il2CppClass_0 *)&(unaff_ESI.array)->etype)->image->codeGenModule;
        pIVar38 = (TypeInfo__System__Int32->_0).element_class;
        cVar85 = pIVar21 < pIVar38;
        pSVar74 = (String__Class *)TypeInfo__System__Int32;
        if (pIVar21 == pIVar38) {
          piVar53 = (int32_t *)func_?(unaff_ESI.dummy);
          SubscriberRewardDataManager::SubscriberRewardDataManager_SetBaseXPBonus
                    (*piVar53,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = pvStack_105;
          return;
        }
        goto code_?;
      }
    }
    break;
  case MVEventCodes__Enum_SetupUserAvatarEdit:
    pMVar52 = (this->fields).networkGame;
    cVar85 = '\0';
    unaff_EDI = unaff_EDI;
    if (pMVar52 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_AllModesSetup(pMVar52,photonEvent,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = pvStack_105;
      return;
    }
    break;
  case MVEventCodes__Enum_SetupUserBuildMode:
    pMVar52 = (this->fields).networkGame;
    cVar85 = '\0';
    unaff_ESI = (_union_86)this;
    unaff_EDI = unaff_EDI;
    if (pMVar52 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_AllModesSetup(pMVar52,photonEvent,(MethodInfo *)0x0);
      pMVar52 = (this->fields).networkGame;
      cVar85 = '\0';
      unaff_ESI = (_union_86)this;
      unaff_EDI = _Var55;
      if (pMVar52 != (MVNetworkGame *)0x0) {
        MVNetworkGame::MVNetworkGame_PlayModeSetup
                  (pMVar52,(EventData *)_Var55.typeHandle,(MethodInfo *)0x0);
        pMVar52 = (this->fields).networkGame;
        cVar85 = '\0';
        unaff_ESI = (_union_86)this;
        if (pMVar52 != (MVNetworkGame *)0x0) {
          MVNetworkGame::MVNetworkGame_BuildModeSetup
                    (pMVar52,(EventData *)_Var55.typeHandle,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = pvStack_105;
          return;
        }
      }
    }
    break;
  case MVEventCodes__Enum_SetActiveSpawnRole:
    cVar85 = '\0';
    unaff_ESI = _Var55;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      pVVar50 = MVWorldObject.dll::MV::WorldObject::TransformHelper::TransformHelper_GetPosition
                          (&VStack_95,(photonEvent->fields).Parameters,(MethodInfo *)0x0);
      uVar2 = pVVar50->x;
      uVar3 = pVVar50->y;
      eventCode = (MVEventCodes__Enum)pVVar50->z;
      MStack_93 = uVar2;
      _Stack_48 = (_union_86)uVar3;
      pQVar51 = MVWorldObject.dll::MV::WorldObject::TransformHelper::TransformHelper_GetRotation
                          ((Quaternion *)&stack0xffffff78,
                           (((EventData *)_Var55.generic_class)->fields).Parameters,
                           (MethodInfo *)0x0);
      fStack_94 = pQVar51->x;
      VStack_95.x = pQVar51->y;
      VStack_95.y = pQVar51->z;
      VStack_95.z = pQVar51->w;
      pMVar52 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      cVar85 = '\0';
      unaff_EDI = unaff_EDI;
      if (pMVar52 != (MVNetworkGame *)0x0) {
        unaff_EDI = (_union_86)(pMVar52->fields).playerContainer;
        Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                  ((EventData *)_Var55.typeHandle,0xfe,(MethodInfo *)0x0);
        cVar85 = '\0';
        if (unaff_EDI.dummy != (Object__Class *)0x0) {
          piVar53 = (int32_t *)func_?();
          pMVar54 = MVPlayerContainer::MVPlayerContainer_get_Item
                              ((MVPlayerContainer *)unaff_EDI.typeHandle,*piVar53,(MethodInfo *)0x0)
          ;
          cVar85 = '\0';
          if (pMVar54 != (MVPlayer *)0x0) {
            this_03 = (pMVar54->fields).spawnRolesManager;
            pOVar56 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                                ((EventData *)_Var55.typeHandle,0xbf,(MethodInfo *)0x0);
            cVar85 = '\0';
            unaff_EDI.dummy = (Object__Class *)0x0;
            if (this_03 != (SpawnRolesManager *)0x0) {
              piVar53 = (int32_t *)func_?(pOVar56,TypeInfo__System__Int32);
              position.y = (float)_Stack_48.dummy;
              position.x = (float)MStack_93;
              position.z = (float)eventCode;
              rotation.y = VStack_95.x;
              rotation.x = fStack_94;
              rotation.z = VStack_95.y;
              rotation.w = VStack_95.z;
              SpawnRolesManager::SpawnRolesManager_ActivateSpawnRole
                        (this_03,*piVar53,position,rotation,(MethodInfo *)0x0);
              *unaff_FS_OFFSET = pvStack_105;
              return;
            }
          }
        }
      }
    }
    break;
  case MVEventCodes__Enum_ReplicateSpawnRoleData:
    cVar85 = '\0';
    unaff_EDI = _Var55;
    if (photonEvent != (EventData *)0x0) {
      eventCode = (MVEventCodes__Enum)
                  Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0xf5,(MethodInfo *)0x0);
      if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      unaff_ESI = (_union_86)
                  MV__WorldObject__SpawnRoles__SpawnRolesRuntimeData_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::SpawnRoles::SpawnRolesRuntimeData>_System__String_
      ;
      pSVar63 = (String *)func_?();
      eventCode = (MVEventCodes__Enum)
                  Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::
                  JsonConvert_DeserializeObject_2(pSVar63,(MethodInfo *)unaff_ESI.typeHandle);
      _Stack_48.dummy = (void *)func_?();
      UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
      UxmlObjectListAttributeDescription`1[System::Object]::
      UxmlObjectListAttributeDescription_1_System_Object___ctor
                ((UxmlObjectListAttributeDescription_1_System_Object_ *)_Stack_48.typeHandle,
                 (MethodInfo *)0x0);
      pMVar52 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      cVar85 = '\0';
      if (pMVar52 != (MVNetworkGame *)0x0) {
        unaff_ESI = (_union_86)(pMVar52->fields).playerContainer;
        pOVar56 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            ((EventData *)_Var55.typeHandle,0xfe,(MethodInfo *)0x0);
        cVar85 = '\0';
        if ((unaff_ESI.dummy != (Object__Class *)0x0) && (cVar85 = '\0', pOVar56 != (Object *)0x0))
        {
          pIVar21 = (pOVar56->klass->_0).element_class;
          pIVar38 = (TypeInfo__System__Int32->_0).element_class;
          cVar85 = pIVar21 < pIVar38;
          pIVar77 = TypeInfo__System__Int32;
          if (pIVar21 != pIVar38) goto code_?;
          piVar53 = (int32_t *)func_?(pOVar56);
          pMVar54 = MVPlayerContainer::MVPlayerContainer_GetPlayerUnsafe
                              ((MVPlayerContainer *)unaff_ESI.typeHandle,*piVar53,(MethodInfo *)0x0)
          ;
          cVar85 = '\0';
          if (pMVar54 != (MVPlayer *)0x0) {
            MVPlayer::MVPlayer_SetupSpawnRoleManager
                      (pMVar54,(ISpawnRoleChangeHandler *)_Stack_48.typeHandle,
                       (SpawnRolesRuntimeData *)eventCode,(MethodInfo *)0x0);
            *unaff_FS_OFFSET = pvStack_105;
            return;
          }
        }
      }
    }
    break;
  case MVEventCodes__Enum_SetSpawnRoleBody:
    cVar85 = '\0';
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      unaff_ESI.typeHandle =
           (Il2CppMetadataTypeHandle)
           Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                     (photonEvent,0xf5,(MethodInfo *)0x0);
      if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      _Var55.dummy = (Object__Class *)0x0;
      if (unaff_ESI.dummy != (Object__Class *)0x0) {
        if ((String__Class *)((Il2CppClass_0 *)&(unaff_ESI.array)->etype)->image ==
            TypeInfo__System__String) {
          _Var55.typeHandle = unaff_ESI.typeHandle;
        }
        cVar85 = '\0';
        pSVar74 = TypeInfo__System__String;
        if (_Var55.dummy == (Object__Class *)0x0) goto code_?;
      }
      unaff_EDI.dummy =
           Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_2
                     (_Var55.dummy,
                      MV__WorldObject__SpawnRoles__SpawnRoleBodySwitchData_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::SpawnRoles::SpawnRoleBodySwitchData>_System__String_
                     );
      pMVar58 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      cVar85 = '\0';
      if ((unaff_EDI.dummy != (Object__Class *)0x0) &&
         (cVar85 = '\0', pMVar58 != (MVWorldObjectClientManager *)0x0)) {
        unaff_ESI.typeHandle =
             (Il2CppMetadataTypeHandle)
             MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                       (pMVar58,unaff_EDI.type[3].data.__klassIndex,(MethodInfo *)0x0);
        pMVar52 = (this->fields).networkGame;
        cVar85 = '\0';
        if (pMVar52 != (MVNetworkGame *)0x0) {
          MVNetworkGame::MVNetworkGame_OnUnregisterWorldObjectEvent
                    (pMVar52,unaff_EDI.type[2].data.__klassIndex,(MethodInfo *)0x0);
          pMVar52 = (this->fields).networkGame;
          cVar85 = '\0';
          if (pMVar52 != (MVNetworkGame *)0x0) {
            MVNetworkGame::MVNetworkGame_OnUnregisterWorldObjectEvent
                      (pMVar52,(int32_t)unaff_EDI.type[1].data.__klassIndex,(MethodInfo *)0x0);
            pOVar56 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                                (photonEvent,0xd0,(MethodInfo *)0x0);
            cVar85 = '\0';
            if (pOVar56 != (Object *)0x0) {
              pIVar21 = (pOVar56->klass->_0).element_class;
              pIVar38 = (TypeInfo__System__Boolean->_0).element_class;
              cVar85 = pIVar21 < pIVar38;
              pIVar77 = (Int32__Class *)TypeInfo__System__Boolean;
              if (pIVar21 != pIVar38) goto code_?;
              pbVar55 = (bool *)func_?();
              eventCode = CONCAT31(eventCode._1_3_,*pbVar55);
              cVar85 = '\0';
              if (unaff_ESI.dummy != (Object__Class *)0x0) {
                if ((*(byte *)&((Il2CppClass_0 *)&(unaff_ESI.array)->etype)->image[4].assembly <
                     (TypeInfo__MVAvatarSpawnRoleCreator->_1).naturalAligment) ||
                   (*(MVAvatarSpawnRoleCreator__Class **)
                     (((Il2CppClass_0 *)&(unaff_ESI.array)->etype)->image[2].typeCount +
                     ((TypeInfo__MVAvatarSpawnRoleCreator->_1).naturalAligment - 1) * 4) !=
                    TypeInfo__MVAvatarSpawnRoleCreator)) {
                  bVar86 = false;
                }
                else {
                  bVar86 = true;
                }
                _Var55.dummy = (Object__Class *)0x0;
                if (bVar86) {
                  _Var55.typeHandle = unaff_ESI.typeHandle;
                }
                cVar85 = '\0';
                pMVar78 = TypeInfo__MVAvatarSpawnRoleCreator;
                if (_Var55.dummy != (Object__Class *)0x0) {
                  if ((*(byte *)&((Il2CppClass_0 *)&(unaff_ESI.array)->etype)->image[4].assembly <
                       (TypeInfo__MVAvatarSpawnRoleCreator->_1).naturalAligment) ||
                     (*(MVAvatarSpawnRoleCreator__Class **)
                       (((Il2CppClass_0 *)&(unaff_ESI.array)->etype)->image[2].typeCount +
                       ((TypeInfo__MVAvatarSpawnRoleCreator->_1).naturalAligment - 1) * 4) !=
                      TypeInfo__MVAvatarSpawnRoleCreator)) {
                    bVar86 = false;
                  }
                  else {
                    bVar86 = true;
                  }
                  _Var55.dummy = (void *)0x0;
                  if (bVar86) {
                    _Var55.typeHandle = unaff_ESI.typeHandle;
                  }
                  cVar85 = '\0';
                  if (_Var55.dummy != (void *)0x0) {
                    MVAvatarSpawnRoleCreator::MVAvatarSpawnRoleCreator_UpdateAvatarBody
                              ((MVAvatarSpawnRoleCreator *)_Var55.typeHandle,
                               (SpawnRoleBodySwitchData *)unaff_EDI.typeHandle,*pbVar55,
                               (MethodInfo *)0x0);
                    *unaff_FS_OFFSET = pvStack_105;
                    return;
                  }
                }
                goto code_?;
              }
            }
          }
        }
      }
    }
    break;
  case MVEventCodes__Enum_VehicleGotEnergy:
    cVar85 = '\0';
    unaff_ESI = _Var55;
    unaff_EDI = unaff_EDI;
    if (photonEvent != (EventData *)0x0) {
      pOVar56 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0x48,(MethodInfo *)0x0);
      unaff_EDI.dummy =
           (void *)func_?(pOVar56,
                                   TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                                  );
      eventCode = CONCAT13(1,(undefined3)eventCode);
      pOVar56 = (Object *)func_?(TypeInfo__System__Byte,(byte *)((int)&eventCode + 3));
      cVar85 = '\0';
      if (unaff_EDI.dummy != (Object__Class *)0x0) {
        TVar57 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                 ::UIElements::TextureId]::
                 Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                           ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                            unaff_EDI.typeHandle,pOVar56,
                            MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                           );
        p_Var59 = (_union_86 *)func_?(TVar57.m_Index,TypeInfo__System__Int32);
        _Stack_48 = (_union_86)p_Var59->__klassIndex;
        uStack_101 = 0;
        pOVar56 = (Object *)func_?(TypeInfo__System__Byte,&uStack_101);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
        UIElements::TextureId]::
        Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                  ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                   unaff_EDI.typeHandle,pOVar56,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                  );
        pMVar52 = (this->fields).networkGame;
        cVar85 = '\0';
        if (pMVar52 != (MVNetworkGame *)0x0) {
          pMVar58 = MVNetworkGame::MVNetworkGame_get_WorldObjectClientManager
                              (pMVar52,(MethodInfo *)0x0);
          cVar85 = '\0';
          if (pMVar58 != (MVWorldObjectClientManager *)0x0) {
            unaff_EDI.typeHandle =
                 (Il2CppMetadataTypeHandle)
                 MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                           (pMVar58,_Stack_48.__klassIndex,(MethodInfo *)0x0);
            pOVar56 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                                ((EventData *)_Var55.typeHandle,0x23,(MethodInfo *)0x0);
            p_Var59 = (_union_86 *)func_?(pOVar56,TypeInfo__System__Int32);
            unaff_ESI = (_union_86)p_Var59->__klassIndex;
            iVar67 = func_?(unaff_EDI.dummy,
                                     TypeInfo__WorldObjectTypes__VehicleEnergy__MVWorldObjectSpawnerVehicleEnergy
                                    );
            cVar85 = '\0';
            if (iVar67 != 0) {
              pMVar91 = (MethodInfo *)0x0;
              this_09 = (MVWorldObjectSpawner *)
                        func_?(unaff_EDI.dummy,
                                        TypeInfo__WorldObjectTypes__VehicleEnergy__MVWorldObjectSpawnerVehicleEnergy
                                       );
              MVWorldObjectSpawner::MVWorldObjectSpawner_Take
                        (this_09,unaff_ESI.__klassIndex,pMVar91);
              *unaff_FS_OFFSET = pvStack_105;
              return;
            }
          }
        }
      }
    }
    break;
  case MVEventCodes__Enum_ActorStateChange:
    pMVar52 = (this->fields).networkGame;
    cVar85 = '\0';
    unaff_EDI = unaff_EDI;
    if (pMVar52 != (MVNetworkGame *)0x0) {
      unaff_EDI = (_union_86)(pMVar52->fields).playerContainer;
      cVar85 = '\0';
      unaff_ESI = _Var55;
      if (photonEvent != (EventData *)0x0) {
        iVar59 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Sender
                           (photonEvent,(MethodInfo *)0x0);
        cVar85 = '\0';
        if (unaff_EDI.dummy != (Object__Class *)0x0) {
          bVar25 = MVPlayerContainer::MVPlayerContainer_TryGetForStateChange
                             ((MVPlayerContainer *)unaff_EDI.typeHandle,iVar59,&pMStack_97,
                              (MethodInfo *)0x0);
          if (bVar25 == 0) {
            if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
                      ((Object *)StringLiteral_Could_not_change_player_game_sta,(MethodInfo *)0x0);
            *unaff_FS_OFFSET = pvStack_105;
            return;
          }
          Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                    ((EventData *)_Var55.typeHandle,0xde,(MethodInfo *)0x0);
          puVar60 = (uint8_t *)func_?();
          eventCode = CONCAT31(eventCode._1_3_,*puVar60);
          cVar85 = '\0';
          if (pMStack_97 != (MVPlayer *)0x0) {
            if ((pMStack_97->fields).playerState != *puVar60) {
              MVPlayer::MVPlayer_set_PlayerState(pMStack_97,eventCode,(MethodInfo *)0x0);
              *unaff_FS_OFFSET = pvStack_105;
              return;
            }
            goto code_?;
          }
        }
      }
    }
    break;
  default:
    switch(eventCode & MVEventCodes__Enum_Join) {
    case MVEventCodes__Enum_Handshake:
      cVar85 = '\0';
      if (photonEvent != (EventData *)0x0) {
        unaff_ESI.typeHandle =
             (Il2CppMetadataTypeHandle)
             Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                       (photonEvent,0xf5,(MethodInfo *)0x0);
        if ((TypeInfo__MV__WorldObject__Security__SecurityHelper->_1).cctor_finished_or_no_cctor ==
            0) {
          func_?();
        }
        _Var55.dummy = (Object__Class *)0x0;
        if (unaff_ESI.dummy != (Object__Class *)0x0) {
          if ((String__Class *)((Il2CppClass_0 *)&(unaff_ESI.array)->etype)->image ==
              TypeInfo__System__String) {
            _Var55.typeHandle = unaff_ESI.typeHandle;
          }
          cVar85 = '\0';
          pSVar74 = TypeInfo__System__String;
          if (_Var55.dummy == (Object__Class *)0x0) goto code_?;
        }
        unaff_ESI.dummy =
             MVWorldObject.dll::MV::WorldObject::Security::SecurityHelper::SecurityHelper_Encrypt
                       (_Var55.dummy,(MethodInfo *)0x0);
        pMVar42 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests
                            ((MethodInfo *)0x0);
        cVar85 = '\0';
        if (pMVar42 != (MVNetworkGame_OperationRequests *)0x0) {
          MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_JoinGame
                    (pMVar42,(String *)unaff_ESI.typeHandle,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = pvStack_105;
          return;
        }
      }
      break;
    case MVEventCodes__Enum_PropertiesChanged:
      cVar85 = '\0';
      if (photonEvent != (EventData *)0x0) {
        eventCode = (MVEventCodes__Enum)
                    Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                              (photonEvent,0xfb,(MethodInfo *)0x0);
        unaff_ESI = (_union_86)
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
        ;
        if ((Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
             *)eventCode !=
            (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
             *)0x0) {
          unaff_EDI = (_union_86)
                      ((Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                        *)eventCode)->klass;
          if ((*(uint8_t *)(unaff_EDI.__klassIndex + 0xb8) <
               (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->
               _1).naturalAligment) ||
             ((Dictionary_2_System_Object_System_Object___Class *)
              ((Il2CppClass_1 *)(unaff_EDI.__klassIndex + 100))->typeHierarchy
              [(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->
               _1).naturalAligment - 1] !=
              TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
            bVar86 = false;
          }
          else {
            bVar86 = true;
          }
          pDVar61 = (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                     *)0x0;
          if (bVar86) {
            pDVar61 = (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                       *)eventCode;
          }
          cVar85 = '\0';
          eventCode = (MVEventCodes__Enum)pDVar61;
          if (pDVar61 ==
              (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
               *)0x0) goto code_?;
        }
        cVar85 = '\0';
        if ((Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
             *)eventCode !=
            (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
             *)0x0) {
          _Var55.dummy = &UNK_?;
          this_10 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements
                    ::StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
                    Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__get_Keys
                              ((Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                                *)eventCode,
                               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Keys__
                              );
          cVar85 = '\0';
          if (this_10 !=
              (Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
               *)0x0) {
            pDVar62 = mscorlib.dll::System::Collections::Generic::
                      Dictionary`2[TKey,TValue]+ValueCollection[UnityEngine::UIElements::StyleSheets
                      ::StyleSheetCache+SheetHandleKey,System::Object]::
                      Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__GetEnumerator
                                ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                                  *)&stack0xffffff78,
                                 (Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                                  *)this_10,
                                 MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___KeyCollection<System::Object,_System::Object>__GetEnumerator__
                                );
            unaff_ESI.dummy = &stack0xffffff88;
            VStack_95.y = 0.0;
            _Var66 = (_union_86)pDVar62->_currentValue;
            uStack_107 = 3;
            VStack_95.z = (float)unaff_ESI.dummy;
            do {
              bVar25 = mscorlib.dll::System::Collections::Generic::
                       Dictionary`2[TKey,TValue]+KeyCollection[TKey,TValue]+Enumerator[System::
                       Object,UnityEngine::UIElements::TextureId]::
                       Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Object_UnityEngine_UIElements_TextureId__MoveNext
                                 ((Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Object_UnityEngine_UIElements_TextureId_
                                   *)&stack0xffffff88,
                                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
                                 );
              if (bVar25 == 0) {
                uStack_107 = 0xffffffff;
                mscorlib.dll::System::ThrowHelper::
                ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                          ((Object *)unaff_ESI.typeHandle,
                           (ExceptionArgument__Enum)
                           MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<System::Object,_System::Object>__Dispose__
                           ,(MethodInfo *)_Var55.typeHandle);
                *unaff_FS_OFFSET = pvStack_105;
                return;
              }
              unaff_EDI.dummy = (Object__Class *)0x0;
              if (_Var66.dummy != (Object__Class *)0x0) {
                if ((String__Class *)((Il2CppClass_0 *)&(_Var66.array)->etype)->image ==
                    TypeInfo__System__String) {
                  unaff_EDI = _Var66;
                }
                cVar85 = '\0';
                pSVar74 = TypeInfo__System__String;
                if (unaff_EDI.dummy == (Object__Class *)0x0) goto code_?;
              }
              cVar85 = '\0';
              if (eventCode == MVEventCodes__Enum_NoCodeSet) break;
              TVar57 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                       Object,UnityEngine::UIElements::TextureId]::
                       Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                                 ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                                  eventCode,(Object *)unaff_EDI.typeHandle,
                                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                 );
              if (TVar57.m_Index == 0) {
                pSVar63 = (String *)0x0;
                _Var55 = (_union_86)::StringLiteral___;
              }
              else {
                _Stack_48.typeHandle = (Il2CppMetadataTypeHandle)::StringLiteral___;
                pSVar63 = (String *)func_?();
                _Var55 = _Stack_48;
              }
              pSVar63 = mscorlib.dll::System::String::String_Concat_4
                                  ((String *)unaff_EDI.typeHandle,(String *)_Var55.typeHandle,
                                   pSVar63,(MethodInfo *)0x0);
              if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
                func_?();
              }
              UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                        ((Object *)pSVar63,(MethodInfo *)0x0);
            } while( true );
          }
        }
      }
      break;
    case MVEventCodes__Enum_Leave:
      cVar85 = '\0';
      unaff_EDI = unaff_EDI;
      if (photonEvent != (EventData *)0x0) {
        pOVar56 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0xfe,(MethodInfo *)0x0);
        cVar85 = '\0';
        unaff_EDI = unaff_EDI;
        if (pOVar56 != (Object *)0x0) {
          pIVar21 = (pOVar56->klass->_0).element_class;
          pIVar38 = (TypeInfo__System__Int32->_0).element_class;
          cVar85 = pIVar21 < pIVar38;
          pIVar77 = TypeInfo__System__Int32;
          if (pIVar21 != pIVar38) goto code_?;
          p_Var59 = (_union_86 *)func_?();
          unaff_ESI = (_union_86)p_Var59->__klassIndex;
          pMVar52 = (this->fields).networkGame;
          cVar85 = '\0';
          unaff_EDI = (_union_86)this;
          if (pMVar52 != (MVNetworkGame *)0x0) {
            pMVar48 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar52,(MethodInfo *)0x0);
            cVar85 = '\0';
            if (pMVar48 != (MVLocalPlayer *)0x0) {
              if (unaff_ESI.dummy == (Object__Class *)(pMVar48->fields)._._ActorNr_k__BackingField)
              {
                if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
                  func_?(TypeInfo__UnityEngine__Debug);
                }
                UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                          ((Object *)StringLiteral_Local_player_leave_event,(MethodInfo *)0x0);
                *unaff_FS_OFFSET = pvStack_105;
                return;
              }
              pMVar52 = (this->fields).networkGame;
              cVar85 = '\0';
              if (pMVar52 != (MVNetworkGame *)0x0) {
                pMVar18 = (pMVar52->fields).playerContainer;
                cVar85 = '\0';
                if (pMVar18 != (MVPlayerContainer *)0x0) {
                  bVar25 = MVPlayerContainer::MVPlayerContainer_ContainsKey
                                     (pMVar18,unaff_ESI.__klassIndex,(MethodInfo *)0x0);
                  if (bVar25 == 0) {
code_?:
                    pMVar52 = (this->fields).networkGame;
                    cVar85 = '\0';
                    if (pMVar52 != (MVNetworkGame *)0x0) {
                      pMVar18 = (pMVar52->fields).playerContainer;
                      cVar85 = '\0';
                      if (pMVar18 != (MVPlayerContainer *)0x0) {
                        MVPlayerContainer::MVPlayerContainer_Remove
                                  (pMVar18,unaff_ESI.__klassIndex,(MethodInfo *)0x0);
                        *unaff_FS_OFFSET = pvStack_105;
                        return;
                      }
                    }
                  }
                  else {
                    pMVar52 = (this->fields).networkGame;
                    cVar85 = '\0';
                    if (pMVar52 != (MVNetworkGame *)0x0) {
                      pMVar18 = (pMVar52->fields).playerContainer;
                      cVar85 = '\0';
                      if (pMVar18 != (MVPlayerContainer *)0x0) {
                        pIStack_98 = (Il2CppClass *)
                                     MVPlayerContainer::MVPlayerContainer_get_Item
                                               (pMVar18,unaff_ESI.__klassIndex,(MethodInfo *)0x0);
                        pDStack_99 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                                      *)func_?(
                                                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                                                  );
                        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                        Object,UnityEngine::UIElements::StyleComplexSelector+PseudoStateData]::
                        Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___ctor
                                  (pDStack_99,
                                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                                  );
                        eventCode = eventCode & 0xffffff;
                        VStack_95.z = (float)func_?(TypeInfo__System__Byte,
                                                             (byte *)((int)&eventCode + 3));
                        _Stack_48 = unaff_ESI;
                        pOVar56 = (Object *)func_?(TypeInfo__System__Int32,&_Stack_48);
                        cVar85 = '\0';
                        if (pDStack_99 !=
                            (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                             *)0x0) {
                          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                          Object,System::Object]::Dictionary_2_System_Object_System_Object__set_Item
                                    ((Dictionary_2_System_Object_System_Object_ *)pDStack_99,
                                     (Object *)VStack_95.z,pOVar56,
                                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                                    );
                          uStack_101 = 3;
                          pOVar56 = (Object *)func_?(TypeInfo__System__Byte,&uStack_101);
                          cVar85 = '\0';
                          if (pIStack_98 != (Il2CppClass *)0x0) {
                            cVar85 = '\0';
                            if (pIStack_98->klass != (Il2CppClass *)0x0) {
                              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                              Object,System::Object]::
                              Dictionary_2_System_Object_System_Object__set_Item
                                        ((Dictionary_2_System_Object_System_Object_ *)pDStack_99,
                                         pOVar56,(Object *)pIStack_98->klass->namespaze,
                                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                                        );
                              uStack_102 = 6;
                              VStack_95.z = (float)func_?(TypeInfo__System__Byte,&uStack_102
                                                                  );
                              pMVar52 = MVGameControllerBase::MVGameControllerBase_get_Game
                                                  ((MethodInfo *)0x0);
                              cVar85 = '\0';
                              if (pMVar52 != (MVNetworkGame *)0x0) {
                                this_04 = (pMVar52->fields)._Friends_k__BackingField;
                                cVar85 = '\0';
                                if (this_04 != (FriendList *)0x0) {
                                  bStack_100 = FriendList::FriendList_IsFriend
                                                        (this_04,(int32_t)pIStack_98->parent,
                                                         (MethodInfo *)0x0);
                                  pOVar56 = (Object *)
                                            func_?(TypeInfo__System__Boolean,&bStack_100);
                                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                                  Object,System::Object]::
                                  Dictionary_2_System_Object_System_Object__set_Item
                                            ((Dictionary_2_System_Object_System_Object_ *)pDStack_99
                                             ,(Object *)VStack_95.z,pOVar56,
                                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                                            );
                                  MVGameControllerBase::MVGameControllerBase_PostGameMsg
                                            (MVGameMsgType__Enum_UserLeft,
                                             (Dictionary_2_System_Object_System_Object_ *)pDStack_99
                                             ,(MethodInfo *)0x0);
                                  pMVar52 = (this->fields).networkGame;
                                  cVar85 = '\0';
                                  if (pMVar52 != (MVNetworkGame *)0x0) {
                                    pGVar10 = (pMVar52->fields).gameStatCounterManager;
                                    cVar85 = '\0';
                                    if (pGVar10 != (GameStatCounterManager *)0x0) {
                                      MVWorldObject.dll::GameStatCounterManager::
                                      GameStatCounterManager_RemoveTeamScoreOnActorLeave
                                                (pGVar10,unaff_ESI.__klassIndex,
                                                 (MVTeam__Enum)pIStack_98->properties,
                                                 (MethodInfo *)0x0);
                                      pMVar52 = (this->fields).networkGame;
                                      cVar85 = '\0';
                                      if (pMVar52 != (MVNetworkGame *)0x0) {
                                        pGVar10 = (pMVar52->fields).gameStatCounterManager;
                                        cVar85 = '\0';
                                        if (pGVar10 != (GameStatCounterManager *)0x0) {
                                          MVWorldObject.dll::GameStatCounterManager::
                                          GameStatCounterManager_RemoveStatsFromActor
                                                    (pGVar10,unaff_ESI.__klassIndex,
                                                     (MethodInfo *)0x0);
                                          goto code_?;
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
      break;
    case MVEventCodes__Enum_Join:
      cVar85 = '\0';
      unaff_ESI = _Var55;
      unaff_EDI = unaff_EDI;
      if (photonEvent != (EventData *)0x0) {
        pOVar56 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                            (photonEvent,0xb,(MethodInfo *)0x0);
        cVar85 = '\0';
        unaff_EDI = unaff_EDI;
        if (pOVar56 != (Object *)0x0) {
          pIVar21 = (pOVar56->klass->_0).element_class;
          pIVar38 = (TypeInfo__System__Int32->_0).element_class;
          cVar85 = pIVar21 < pIVar38;
          pIVar77 = TypeInfo__System__Int32;
          if (pIVar21 == pIVar38) {
            puVar39 = (undefined4 *)func_?();
            pMStack_96 = (MVWorldObject *)*puVar39;
            pOVar56 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                                ((EventData *)_Var55.typeHandle,0xfe,(MethodInfo *)0x0);
            cVar85 = '\0';
            unaff_EDI = unaff_EDI;
            if (pOVar56 != (Object *)0x0) {
              pIVar21 = (pOVar56->klass->_0).element_class;
              pIVar38 = (TypeInfo__System__Int32->_0).element_class;
              cVar85 = pIVar21 < pIVar38;
              pIVar77 = TypeInfo__System__Int32;
              if (pIVar21 != pIVar38) goto code_?;
              pMVar43 = (MVEventCodes__Enum *)func_?(pOVar56);
              eventCode = *pMVar43;
              _Var66.dummy = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::
                             EventData_get_Item(_Var55.dummy,0x9a,(MethodInfo *)0x0);
              unaff_EDI.dummy = (Object__Class *)0x0;
              if (_Var66.dummy != (Object__Class *)0x0) {
                if ((String__Class *)((Il2CppClass_0 *)&(_Var66.array)->etype)->image ==
                    TypeInfo__System__String) {
                  unaff_EDI.typeHandle = _Var66.typeHandle;
                }
                cVar85 = '\0';
                pSVar74 = TypeInfo__System__String;
                if (unaff_EDI.dummy == (Object__Class *)0x0) goto code_?;
              }
              pOVar56 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                                  ((EventData *)_Var55.typeHandle,0xbc,(MethodInfo *)0x0);
              cVar85 = '\0';
              if (pOVar56 != (Object *)0x0) {
                pIVar21 = (pOVar56->klass->_0).element_class;
                pIVar38 = (TypeInfo__MV__Common__BuildTarget->_0).element_class;
                cVar85 = pIVar21 < pIVar38;
                pIVar77 = (Int32__Class *)TypeInfo__MV__Common__BuildTarget;
                if (pIVar21 != pIVar38) goto code_?;
                puVar47 = (undefined1 *)func_?();
                _Stack_34.__klassIndex._0_1_ = *puVar47;
                pOVar56 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::
                          EventData_get_Item((EventData *)_Var55.typeHandle,0x59,(MethodInfo *)0x0);
                cVar85 = '\0';
                if (pOVar56 != (Object *)0x0) {
                  pIVar21 = (pOVar56->klass->_0).element_class;
                  pIVar38 = (TypeInfo__System__Int32->_0).element_class;
                  cVar85 = pIVar21 < pIVar38;
                  pIVar77 = TypeInfo__System__Int32;
                  if (pIVar21 != pIVar38) goto code_?;
                  p_Var59 = (_union_86 *)func_?(pOVar56);
                  _Stack_28 = *p_Var59;
                  pOVar56 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::
                            EventData_get_Item((EventData *)_Var55.typeHandle,0xd0,(MethodInfo *)0x0
                                              );
                  cVar85 = '\0';
                  if (pOVar56 != (Object *)0x0) {
                    pIVar21 = (pOVar56->klass->_0).element_class;
                    pIVar38 = (TypeInfo__System__Boolean->_0).element_class;
                    cVar85 = pIVar21 < pIVar38;
                    pIVar77 = (Int32__Class *)TypeInfo__System__Boolean;
                    if (pIVar21 != pIVar38) goto code_?;
                    puVar47 = (undefined1 *)func_?(pOVar56);
                    _Stack_48.__klassIndex._0_1_ = *puVar47;
                    unaff_ESI.dummy =
                         Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::
                         EventData_get_Item(_Var55.dummy,0xe0,(MethodInfo *)0x0);
                    if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor ==
                        0) {
                      func_?(TypeInfo__Newtonsoft__Json__JsonConvert);
                    }
                    _Var55.dummy = (Object__Class *)0x0;
                    if (unaff_ESI.dummy != (Object__Class *)0x0) {
                      if ((String__Class *)((Il2CppClass_0 *)&(unaff_ESI.array)->etype)->image ==
                          TypeInfo__System__String) {
                        _Var55.typeHandle = unaff_ESI.typeHandle;
                      }
                      cVar85 = '\0';
                      pSVar74 = TypeInfo__System__String;
                      if (_Var55.dummy == (Object__Class *)0x0) goto code_?;
                    }
                    VStack_95.z = (float)Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::
                                         JsonConvert_DeserializeObject_2
                                                   ((String *)_Var55.typeHandle,
                                                                                                        
                                                  MV__WorldObject__MetaData__UserProfileData_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::MetaData::UserProfileData>_System__String_
                                                  );
                    pMVar52 = (this->fields).networkGame;
                    cVar85 = '\0';
                    if (pMVar52 != (MVNetworkGame *)0x0) {
                      pMVar48 = MVNetworkGame::MVNetworkGame_get_LocalPlayer
                                          (pMVar52,(MethodInfo *)0x0);
                      cVar85 = '\0';
                      if (pMVar48 != (MVLocalPlayer *)0x0) {
                        if (eventCode == (pMVar48->fields)._._ActorNr_k__BackingField) {
                          if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
                            func_?();
                          }
                          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                                    ((Object *)StringLiteral_Received_join_event_for_localPla,
                                     (MethodInfo *)0x0);
                          *unaff_FS_OFFSET = pvStack_105;
                          return;
                        }
                        unaff_ESI.dummy = (void *)func_?();
                        MVPlayer::MVPlayer__ctor
                                  ((MVPlayer *)unaff_ESI.typeHandle,eventCode,(int32_t)pMStack_96,
                                   (String *)unaff_EDI.typeHandle,_Stack_34.__klassIndex,
                                   (UserProfileData *)VStack_95.z,0,(bool)_Stack_48.__klassIndex,
                                   (MethodInfo *)0x0);
                        cVar85 = '\0';
                        if (unaff_ESI.dummy != (void *)0x0) {
                          unaff_ESI.type[9].data = _Stack_28;
                          pMVar52 = (this->fields).networkGame;
                          cVar85 = '\0';
                          if (pMVar52 != (MVNetworkGame *)0x0) {
                            pMVar18 = (pMVar52->fields).playerContainer;
                            cVar85 = '\0';
                            if (pMVar18 != (MVPlayerContainer *)0x0) {
                              MVPlayerContainer::MVPlayerContainer_Add
                                        (pMVar18,(MVPlayer *)unaff_ESI.typeHandle,(MethodInfo *)0x0)
                              ;
                              *unaff_FS_OFFSET = pvStack_105;
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
            break;
          }
          goto code_?;
        }
      }
      break;
    default:
      goto code_?;
    }
  }
  func_?();
  pMVar78 = extraout_EDX_00;
code_?:
  func_?(unaff_ESI.dummy,pMVar78);
code_?:
  func_?();
  _Var55 = unaff_ESI;
code_?:
  func_?(unaff_EDI.dummy,_Stack_48.dummy);
  _Stack_54 = (unaff_EDI.type)->data;
  func_?(&_Stack_54,&UNK_?);
code_?:
  func_?();
code_?:
  _Var66.dummy = (void *)func_?();
  pSVar74 = extraout_ECX_01;
  unaff_ESI = _Var55;
code_?:
  uVar64 = func_?(_Var66.dummy,pSVar74);
  uVar90 = func_?(uVar64);
  pauVar65 = (undefined1 (*) [16])uVar90;
  uVar70 = (undefined3)((ulonglong)uVar90 >> 0x28);
  bVar80 = (byte)unaff_EBX;
  (*pauVar65)[0] = (*pauVar65)[0] + bVar80 + cVar85;
  auVar89 = rcpps(in_XMM2,*pauVar65);
  rcpps(auVar89,*pauVar65);
  bVar75 = (*pauVar65)[0] & 0xe;
  uVar69 = CONCAT31(uVar70,(*pauVar65)[0]) & 0xffffff0e;
  pOVar56 = (Object *)(unaff_ESI.__klassIndex + 0x41105310);
  bVar26 = *(byte *)&pOVar56->klass;
  bVar82 = (byte)((uint)unaff_EBX >> 8);
  *(byte *)&pOVar56->klass = *(char *)&pOVar56->klass + bVar82;
  puVar1 = (uint *)(unaff_EBX + 0x10);
  uVar71 = (uint)CARRY1(bVar26,bVar82);
  bVar86 = CARRY4(*puVar1,uVar69) || CARRY4(*puVar1 + uVar69,uVar71);
  *puVar1 = *puVar1 + uVar69 + uVar71;
  pbVar35 = pauVar65[0x6e10535] + 6;
  bVar26 = *pbVar35;
  bVar27 = *pbVar35;
  *pbVar35 = bVar27 + bVar75 + bVar86;
  puVar1 = (uint *)(unaff_EBX + 0x10);
  uVar71 = (uint)(CARRY1(bVar26,bVar75) || CARRY1(bVar27 + bVar75,bVar86));
  bVar86 = CARRY4(*puVar1,uVar69) || CARRY4(*puVar1 + uVar69,uVar71);
  *puVar1 = *puVar1 + uVar69 + uVar71;
  bVar81 = (byte)uVar90;
  bVar26 = (byte)((uint)extraout_ECX_02 >> 8);
  bVar27 = (byte)((ulonglong)uVar90 >> 0x28);
  bVar73 = bVar26 + bVar27;
  bVar87 = CARRY1(bVar26,bVar27) || CARRY1(bVar73,bVar86);
  bVar72 = (byte)extraout_ECX_02;
  bVar73 = bVar73 + bVar86;
  pbVar108 = (byte *)CONCAT22((short)((uint)extraout_ECX_02 >> 0x10),CONCAT11(bVar73,bVar72));
  bVar76 = bVar75 + unaff_EBX[0x10];
  bVar86 = CARRY1(bVar75,unaff_EBX[0x10]) || CARRY1(bVar76,bVar87);
  bVar76 = bVar76 + bVar87;
  pbVar109 = (byte *)CONCAT31(uVar70,bVar76);
  bVar87 = CARRY1(*pbVar109,bVar72) || CARRY1(*pbVar109 + bVar72,bVar86);
  *pbVar109 = *pbVar109 + bVar72 + bVar86;
  bVar26 = bVar81 % 0x11 + 0x53;
  bVar86 = 0xac < bVar81 % 0x11 || CARRY1(bVar26,bVar87);
  bVar26 = bVar26 + bVar87;
  pbVar35 = unaff_EBX + -0x14efacec;
  bVar87 = CARRY1(*pbVar35,bVar80) || CARRY1(*pbVar35 + bVar80,bVar86);
  *pbVar35 = *pbVar35 + bVar80 + bVar86;
  bVar27 = bVar26 + 0x53;
  bVar86 = 0xac < bVar26 || CARRY1(bVar27,bVar87);
  uVar66 = CONCAT31((int3)(CONCAT22((short)((ulonglong)uVar90 >> 0x10),
                                    CONCAT11(bVar81 / 0x11,bVar81)) >> 8),bVar27 + bVar87);
  bVar26 = *unaff_EBX;
  bVar27 = *unaff_EBX;
  *unaff_EBX = bVar27 + bVar82 + bVar86;
  uVar71 = (uint)(CARRY1(bVar26,bVar82) || CARRY1(bVar27 + bVar82,bVar86));
  uVar69 = uVar66 + 0x15c31053;
  bVar86 = 0xea3cefac < uVar66 || CARRY4(uVar69,uVar71);
  iVar67 = uVar69 + uVar71;
  pbVar35 = unaff_EBX + 0x16;
  bVar87 = CARRY1(*pbVar35,bVar72) || CARRY1(*pbVar35 + bVar72,bVar86);
  *pbVar35 = *pbVar35 + bVar72 + bVar86;
  pbVar35 = (byte *)(iVar67 + 0x25105316);
  bVar86 = CARRY1(*pbVar35,bVar82) || CARRY1(*pbVar35 + bVar82,bVar87);
  *pbVar35 = *pbVar35 + bVar82 + bVar87;
  pbVar109 = pbVar109 + -0x6feface9;
  bVar87 = CARRY1(*pbVar109,bVar76) || CARRY1(*pbVar109 + bVar76,bVar86);
  *pbVar109 = *pbVar109 + bVar76 + bVar86;
  bVar27 = (byte)((uint)iVar67 >> 8);
  bVar86 = CARRY1(bVar80,bVar27) || CARRY1(bVar80 + bVar27,bVar87);
  bVar81 = bVar80 + bVar27 + bVar87;
  puVar111 = (uint *)CONCAT31((int3)((uint)unaff_EBX >> 8),bVar81);
  pbVar35 = &UNK_? + iVar67;
  bVar87 = CARRY1(*pbVar35,bVar76) || CARRY1(*pbVar35 + bVar76,bVar86);
  *pbVar35 = *pbVar35 + bVar76 + bVar86;
  puVar1 = puVar111 + 4;
  uVar71 = *puVar1;
  bVar26 = (byte)*puVar1 - bVar76;
  bVar88 = (byte)*puVar1 < bVar76 || bVar26 < bVar87;
  *(byte *)puVar1 = bVar26 - bVar87;
  bVar86 = bVar88;
  if ((byte)*puVar1 == 0 ||
      (SBORROW1((byte)uVar71,bVar76) != SBORROW1(bVar26,bVar87)) != (char)(byte)*puVar1 < '\0') {
    bVar86 = CARRY1(bVar27,bVar73) || CARRY1(bVar27 + bVar73,bVar88);
    iVar67 = CONCAT22((short)((uint)iVar67 >> 0x10),CONCAT11(bVar27 + bVar73 + bVar88,(char)iVar67))
    ;
  }
  pbVar35 = (byte *)(iVar67 + 0x51105356);
  bVar87 = CARRY1(*pbVar35,bVar76) || CARRY1(*pbVar35 + bVar76,bVar86);
  *pbVar35 = *pbVar35 + bVar76 + bVar86;
  bVar75 = bVar76 + bVar81 + bVar87;
  puVar1 = puVar111 + 4;
  uVar71 = (uint)(CARRY1(bVar76,bVar81) || CARRY1(bVar76 + bVar81,bVar87));
  uVar69 = *puVar1 - CONCAT31(uVar70,bVar75);
  bVar86 = *puVar1 < CONCAT31(uVar70,bVar75) || uVar69 < uVar71;
  *puVar1 = uVar69 - uVar71;
  uVar110 = (undefined2)((ulonglong)uVar90 >> 0x30);
  iVar79 = CONCAT22(uVar110,CONCAT11(0x1a,bVar75));
  pbVar35 = (byte *)(iVar79 + 0x1b);
  bVar87 = CARRY1(*pbVar35,bVar72) || CARRY1(*pbVar35 + bVar72,bVar86);
  *pbVar35 = *pbVar35 + bVar72 + bVar86;
  puVar24 = (uint32_t *)(unaff_EDI.__klassIndex + -0x13eface4);
  bVar86 = CARRY1(*(byte *)puVar24,bVar82) || CARRY1(*(char *)puVar24 + bVar82,bVar87);
  *(byte *)puVar24 = *(char *)puVar24 + bVar82 + bVar87;
  bVar26 = (byte)iVar67 + 0xad;
  bVar87 = (byte)iVar67 < 0x53 || bVar26 < bVar86;
  uVar66 = CONCAT31((int3)((uint)iVar67 >> 8),bVar26 - bVar86);
  bVar26 = *pbVar108;
  bVar76 = (byte)((uint)iVar67 >> 8);
  bVar27 = *pbVar108 + bVar76;
  *pbVar108 = bVar27 + bVar87;
  uVar71 = (uint)(CARRY1(bVar26,bVar76) || CARRY1(bVar27,bVar87));
  uVar69 = uVar66 + 0xe285efad;
  bVar86 = uVar66 < 0x1d7a1053 || uVar69 < uVar71;
  pcVar68 = (char *)(uVar69 - uVar71);
  pbVar35 = pbVar108 + 0x1e;
  bVar87 = CARRY1(*pbVar35,bVar72) || CARRY1(*pbVar35 + bVar72,bVar86);
  *pbVar35 = *pbVar35 + bVar72 + bVar86;
  bVar86 = CARRY1(bVar75,bVar81) || CARRY1(bVar75 + bVar81,bVar87);
  bVar75 = bVar75 + bVar81 + bVar87;
  pbVar35 = (byte *)CONCAT31((int3)((uint)iVar79 >> 8),bVar75);
  bVar87 = CARRY1(*pbVar35,bVar73) || CARRY1(*pbVar35 + bVar73,bVar86);
  *pbVar35 = *pbVar35 + bVar73 + bVar86;
  puVar47 = &unaff_EDI.type[3].field_0x7;
  bVar86 = CARRY1(*puVar47,bVar75) || CARRY1(*puVar47 + bVar75,bVar87);
  *puVar47 = *puVar47 + bVar75 + bVar87;
  pbVar35 = (undefined1 *)(unaff_EDI.__klassIndex + 0x1fb11053) + (int)puVar111;
  bVar26 = *pbVar35 + (byte)pcVar68;
  bVar87 = CARRY1(*pbVar35,(byte)pcVar68) || CARRY1(bVar26,bVar86);
  *pbVar35 = bVar26 + bVar86;
  uVar66 = CONCAT22(uVar110,CONCAT11(bVar81 + 0x1a + bVar87,bVar75));
  uStackY_fd._1_3_ = SUB43(puVar111,0);
  *pcVar68 = *pcVar68 + bVar72 + (0xe5 < bVar81 || CARRY1(bVar81 + 0x1a,bVar87));
  *(byte *)(puVar111 + 4) = (byte)puVar111[4] & bVar75;
  uVar69 = (uint)pcVar68 ^ 0xa3105320;
  *(byte *)(puVar111 + 4) = (byte)puVar111[4] & bVar75;
  puVar111[4] = puVar111[4] & uVar66;
  bVar75 = bVar75 & (byte)puVar111[4];
  bVar76 = (byte)(uVar69 >> 8);
  *(byte *)puVar111 = (byte)*puVar111 ^ bVar76;
  pbVar35 = pbVar108 + 0x26;
  bVar26 = *pbVar35;
  bVar27 = (byte)uVar69;
  *pbVar35 = *pbVar35 + bVar27;
  *(undefined1 *)(unaff_EDI.__klassIndex + 0x38105327) =
       *(undefined1 *)(unaff_EDI.__klassIndex + 0x38105327) + bVar76 + CARRY1(bVar26,bVar27);
  puVar1 = puVar111 + 4;
  uVar71 = *puVar1;
  *(byte *)puVar1 = (byte)*puVar1 - bVar75;
  iVar67 = CONCAT31((int3)(uVar66 >> 8),bVar75 + bVar76 + ((byte)uVar71 < bVar75));
  puVar111[4] = puVar111[4] - iVar67;
  iVar67 = iVar67 + 1;
  bVar26 = (byte)iVar67;
  uVar71 = CONCAT31((int3)((uint)iVar67 >> 8),bVar26 - (byte)puVar111[4]);
  *(undefined1 *)(unaff_EDI.__klassIndex + -0x14efacd5) =
       *(undefined1 *)(unaff_EDI.__klassIndex + -0x14efacd5) + bVar27 +
       (CARRY4(uStackY_fd,*puVar111) ||
       CARRY4(uStackY_fd + *puVar111,(uint)(bVar26 < (byte)puVar111[4])));
  bVar86 = uVar71 < puVar111[4];
  iVar67 = uVar71 - puVar111[4];
  uVar71 = CONCAT22((short)(uVar69 >> 0x10),CONCAT11(0x2c,bVar27));
  pbVar108 = pbVar108 + 0x2d;
  bVar26 = *pbVar108;
  bVar27 = *pbVar108;
  *pbVar108 = bVar27 + bVar81 + bVar86;
  bVar76 = (byte)iVar67;
  bVar75 = (char)((uint)iVar67 >> 8) + bVar82 +
           (CARRY1(bVar26,bVar81) || CARRY1(bVar27 + bVar81,bVar86));
  iVar67 = uVar71 + 0xd15cefad;
  bVar26 = (byte)iVar67 + bVar73;
  bVar86 = CARRY1((byte)iVar67,bVar73) || CARRY1(bVar26,uVar71 < 0x2ea31053);
  bVar26 = bVar26 + (uVar71 < 0x2ea31053);
  bVar73 = (byte)((uint)iVar67 >> 8);
  bVar27 = bVar73 + bVar81;
  cVar85 = bVar27 + bVar86;
  in_AF = 9 < (bVar26 & 0xf) | in_AF;
  uVar70 = (undefined3)(CONCAT22((short)((uint)iVar67 >> 0x10),CONCAT11(cVar85,bVar26)) >> 8);
  bVar86 = 0x99 < bVar26 || (CARRY1(bVar73,bVar81) || CARRY1(bVar27,bVar86));
  bVar73 = bVar26 + in_AF * -6 + bVar86 * -0x60;
  pcVar68 = (char *)CONCAT31(uVar70,bVar73);
  pbVar35 = (byte *)((int)puVar111 + 0x33);
  bVar26 = *pbVar35;
  bVar27 = *pbVar35;
  *pbVar35 = bVar27 + bVar82 + bVar86;
  *pcVar68 = *pcVar68 + cVar85 + (CARRY1(bVar26,bVar82) || CARRY1(bVar27 + bVar82,bVar86));
  bVar27 = (bVar73 ^ 0x53) + bVar72 ^ 0x53;
  puVar47 = (undefined1 *)(unaff_ESI.__klassIndex + 0x5e105335);
  bVar26 = *puVar47;
  *puVar47 = *puVar47 + bVar75;
  *(byte *)&(unaff_ESI.type)->data =
       *(char *)&(unaff_ESI.type)->data + bVar27 + CARRY1(bVar26,bVar75);
  in_AF = 9 < (bVar27 & 0xf) | in_AF;
  uVar71 = CONCAT31(uVar70,bVar27 + in_AF * '\x06') & 0xffffff0f;
  iVar67 = CONCAT22((short)(uVar71 >> 0x10),CONCAT11(cVar85 + in_AF,(char)uVar71));
  pbVar35 = (byte *)(iVar67 + -0x7befacc9);
  bVar27 = *pbVar35;
  bVar26 = *pbVar35;
  *pbVar35 = bVar26 + bVar75 + in_AF;
  *(char *)(iVar67 + 0x16105356) =
       *(char *)(iVar67 + 0x16105356) + bVar76 +
       (CARRY1(bVar27,bVar75) || CARRY1(bVar26 + bVar75,in_AF));
  *(char *)(iVar67 + -0x6fefacaa) =
       *(char *)(iVar67 + -0x6fefacaa) + bVar76 + ((byte)puVar111[4] < bVar76);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* Void OnEvent(EventData) */

void Assembly-CSharp.dll::MVNetworkGame+EventHandling::MVNetworkGame_EventHandling_OnEvent
               (MVNetworkGame_EventHandling *this,EventData *photonEvent,MethodInfo *method)

{
  this_01 = this;
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffc8;
  puVar5 = &stack0xffffffc8;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__JoinUIUpdater);
    func_?(&
                    MethodInfo__System__Collections__Generic__Queue<ExitGames::Client::Photon::EventData>__Enqueue_ExitGames__Client__Photon__EventData_
                   );
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  if ((this->fields).cacheEvents == 0) {
    MVar6 = MVGameControllerBase::MVGameControllerBase_get_JoinState((MethodInfo *)0x0);
    if (photonEvent != (EventData *)0x0) {
      if (MVar6 != MVJoinState__Enum_Playing) {
        this = (MVNetworkGame_EventHandling *)CONCAT31(this._1_3_,(photonEvent->fields).Code);
        if ((TypeInfo__JoinUIUpdater->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        JoinUIUpdater::JoinUIUpdater_UpdateJoinStateForUI
                  ((MVEventCodes__Enum)this,(MethodInfo *)0x0);
      }
      this = (MVNetworkGame_EventHandling *)CONCAT31(this._1_3_,(photonEvent->fields).Code);
      uStack_1 = 0;
      MVNetworkGame_EventHandling_HandleEvent
                (this_01,(MVEventCodes__Enum)this,photonEvent,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = uStack_3;
      return;
    }
  }
  else {
    this_00 = (this->fields).cachedEvents;
    if (this_00 != (Queue_1_ExitGames_Client_Photon_EventData_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::Queue`1[System::Object]::
      Queue_1_System_Object__Enqueue
                ((Queue_1_System_Object_ *)this_00,(Object *)photonEvent,
                 MethodInfo__System__Collections__Generic__Queue<ExitGames::Client::Photon::EventData>__Enqueue_ExitGames__Client__Photon__EventData_
                );
      *unaff_FS_OFFSET = uStack_3;
      return;
    }
  }
  auStack_7[0] = func_?();
  func_?(auStack_7,&UNK_?);
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void SubscribeToEvent(MVEventCodes, Action`1[ExitGames.Client.Photon.EventData]) */

void Assembly-CSharp.dll::MVNetworkGame+EventHandling::MVNetworkGame_EventHandling_SubscribeToEvent
               (MVNetworkGame_EventHandling *this,MVEventCodes__Enum eventCode,
               Action_1_ExitGames_Client_Photon_EventData_ *callback,MethodInfo *method)

{
  pMVar1 = (this->fields).dynamicEventCallbackManager;
  if (pMVar1 != (MVNetworkGame_EventHandling_DynamicEventCallbackManager *)0x0) {
    if (cRam_? == '\0') {
      func_?();
      func_?();
      func_?();
      func_?(&
                      TypeInfo__MVNetworkGame_EventHandling_DynamicEventCallbackManager__EventCallback
                     );
      func_?(&
                      MethodInfo__System__Collections__Generic__HashSet<MV::Common::MVEventCodes>__Contains_MV__Common__MVEventCodes_
                     );
      cRam_? = '\x01';
    }
    this_00 = (HashSet_1_System_ByteEnum_ *)
              (pMVar1->fields).eventsHandledByDynamicEventCallbackManager;
    if (this_00 != (HashSet_1_System_ByteEnum_ *)0x0) {
      pMVar2 = (MethodInfo *)&UNK_?;
      bVar3 = System.Core.dll::System::Collections::Generic::HashSet`1[System::ByteEnum]::
              HashSet_1_System_ByteEnum__Contains
                        (this_00,eventCode,
                         MethodInfo__System__Collections__Generic__HashSet<MV::Common::MVEventCodes>__Contains_MV__Common__MVEventCodes_
                        );
      if (bVar3 == 0) {
code_?:
        func_?();
        this_01 = (Exception *)func_?();
        pMVar2 = (MethodInfo *)0x0;
        message = (String *)func_?();
        mscorlib.dll::System::Exception::Exception__ctor_1(this_01,message,pMVar2);
        func_?();
        func_?();
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pDVar5 = (pMVar1->fields).eventCallbacks;
      if (pDVar5 != (Dictionary_2_MV_Common_MVEventCodes_MVNetworkGame_EventHandling_DynamicEventCallbackManager_EventCallback_
                     *)0x0) {
        bVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
                Single]::Dictionary_2_System_ByteEnum_System_Single__ContainsKey
                          ((Dictionary_2_System_ByteEnum_System_Single_ *)pDVar5,eventCode,
                           MethodInfo__System__Collections__Generic__Dictionary<MV::Common::MVEventCodes,_MVNetworkGame_EventHandling_DynamicEventCallbackManager::EventCallback>__ContainsKey_MV__Common__MVEventCodes_
                          );
        if (bVar3 == 0) {
          pDVar5 = (pMVar1->fields).eventCallbacks;
          pOVar6 = (Object *)func_?();
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                    (pOVar6,ExceptionArgument__Enum_obj,pMVar2);
          if (pDVar5 == (Dictionary_2_MV_Common_MVEventCodes_MVNetworkGame_EventHandling_DynamicEventCallbackManager_EventCallback_
                         *)0x0) goto code_?;
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::Object]
          ::Dictionary_2_System_ByteEnum_System_Object__Add
                    ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar5,eventCode,pOVar6,
                     MethodInfo__System__Collections__Generic__Dictionary<MV::Common::MVEventCodes,_MVNetworkGame_EventHandling_DynamicEventCallbackManager::EventCallback>__Add_MV__Common__MVEventCodes__MVNetworkGame_EventHandling_DynamicEventCallbackManager__EventCallback_
                    );
        }
        pDVar5 = (pMVar1->fields).eventCallbacks;
        if ((pDVar5 != (Dictionary_2_MV_Common_MVEventCodes_MVNetworkGame_EventHandling_DynamicEventCallbackManager_EventCallback_
                        *)0x0) &&
           (pOVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                     ByteEnum,System::Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                               ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar5,eventCode,
                                MethodInfo__System__Collections__Generic__Dictionary<MV::Common::MVEventCodes,_MVNetworkGame_EventHandling_DynamicEventCallbackManager::EventCallback>__get_Item_MV__Common__MVEventCodes_
                               ), pOVar6 != (Object *)0x0)) {
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          a = pOVar6[1].klass;
          while ((pDVar7 = mscorlib.dll::System::Delegate::Delegate_Combine
                                     ((Delegate *)a,(Delegate *)callback,(MethodInfo *)0x0),
                 pDVar7 == (Delegate *)0x0 || (iVar8 = func_?(), iVar8 != 0))) {
            pOVar9 = (Object__Class *)func_?();
            bVar10 = pOVar9 == a;
            a = pOVar9;
            if (bVar10) {
              return;
            }
          }
          func_?();
          goto code_?;
        }
      }
    }
  }
code_?:
  uVar11 = func_?(&stack0xfffffff0);
  func_?(uVar11);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void UnSubscribeToEvent(MVEventCodes, Action`1[ExitGames.Client.Photon.EventData]) */

void Assembly-CSharp.dll::MVNetworkGame+EventHandling::
     MVNetworkGame_EventHandling_UnSubscribeToEvent
               (MVNetworkGame_EventHandling *this,MVEventCodes__Enum eventCode,
               Action_1_ExitGames_Client_Photon_EventData_ *callback,MethodInfo *method)

{
  pAVar1 = (Action_1_ExitGames_Client_Photon_EventData___Class *)
           (this->fields).dynamicEventCallbackManager;
  pAVar2 = pAVar1;
  if (pAVar1 != (Action_1_ExitGames_Client_Photon_EventData___Class *)0x0) {
    if (cRam_? == '\0') {
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<MV::Common::MVEventCodes,_MVNetworkGame_EventHandling_DynamicEventCallbackManager::EventCallback>__Remove_MV__Common__MVEventCodes_
                     );
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<MV::Common::MVEventCodes,_MVNetworkGame_EventHandling_DynamicEventCallbackManager::EventCallback>__get_Item_MV__Common__MVEventCodes_
                     );
      cRam_? = '\x01';
    }
    pDVar3 = (Dictionary_2_System_ByteEnum_System_Object_ *)(pAVar1->_0).name;
    if (pDVar3 != (Dictionary_2_System_ByteEnum_System_Object_ *)0x0) {
      pOVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
               Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                         (pDVar3,eventCode,
                          MethodInfo__System__Collections__Generic__Dictionary<MV::Common::MVEventCodes,_MVNetworkGame_EventHandling_DynamicEventCallbackManager::EventCallback>__get_Item_MV__Common__MVEventCodes_
                         );
      pAVar2 = (Action_1_ExitGames_Client_Photon_EventData___Class *)0x0;
      if (pOVar4 != (Object *)0x0) {
        if (cRam_? == '\0') {
          func_?(&TypeInfo__System__Action<ExitGames::Client::Photon::EventData>);
          cRam_? = '\x01';
        }
        source = (Action_1_ExitGames_Client_Photon_EventData___Class *)pOVar4[1].klass;
        do {
          unaff_EDI = mscorlib.dll::System::Delegate::Delegate_Remove
                                ((Delegate *)source,(Delegate *)callback,(MethodInfo *)0x0);
          pAVar2 = TypeInfo__System__Action<ExitGames::Client::Photon::EventData>;
          iVar5 = 0;
          if (unaff_EDI != (Delegate *)0x0) {
            iVar5 = func_?(unaff_EDI,
                                    TypeInfo__System__Action<ExitGames::Client::Photon::EventData>);
            if (iVar5 == 0) goto code_?;
          }
          unaff_EDI = (Delegate *)(pOVar4 + 1);
          pAVar2 = source;
          pAVar6 = (Action_1_ExitGames_Client_Photon_EventData___Class *)
                   func_?((Delegate *)(pOVar4 + 1),iVar5,source);
          bVar7 = pAVar6 != source;
          source = pAVar6;
        } while (bVar7);
        if (pOVar4[1].klass == (Object__Class *)0x0) {
          pDVar3 = (Dictionary_2_System_ByteEnum_System_Object_ *)(pAVar1->_0).name;
          if (pDVar3 == (Dictionary_2_System_ByteEnum_System_Object_ *)0x0) goto code_?;
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::Object]
          ::Dictionary_2_System_ByteEnum_System_Object__Remove
                    (pDVar3,eventCode,
                     MethodInfo__System__Collections__Generic__Dictionary<MV::Common::MVEventCodes,_MVNetworkGame_EventHandling_DynamicEventCallbackManager::EventCallback>__Remove_MV__Common__MVEventCodes_
                    );
        }
        return;
      }
    }
  }
code_?:
  func_?();
code_?:
  func_?(unaff_EDI,pAVar2);
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void UncacheEventsFromJoin() */

void Assembly-CSharp.dll::MVNetworkGame+EventHandling::
     MVNetworkGame_EventHandling_UncacheEventsFromJoin
               (MVNetworkGame_EventHandling *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Queue<ExitGames::Client::Photon::EventData>__Dequeue__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Queue<ExitGames::Client::Photon::EventData>__get_Count__
                   );
    cRam_? = '\x01';
  }
  pQVar1 = (this->fields).cachedEvents;
  (this->fields).cacheEvents = 0;
  while (pQVar1 != (Queue_1_ExitGames_Client_Photon_EventData_ *)0x0) {
    if ((pQVar1->fields)._size < 1) {
      return;
    }
    pQVar1 = (this->fields).cachedEvents;
    if (pQVar1 == (Queue_1_ExitGames_Client_Photon_EventData_ *)0x0) break;
    photonEvent = (EventData *)
                  mscorlib.dll::System::Collections::Generic::Queue`1[System::Object]::
                  Queue_1_System_Object__Dequeue
                            ((Queue_1_System_Object_ *)pQVar1,
                             MethodInfo__System__Collections__Generic__Queue<ExitGames::Client::Photon::EventData>__Dequeue__
                            );
    MVNetworkGame_EventHandling_OnEvent(this,photonEvent,(MethodInfo *)0x0);
    pQVar1 = (this->fields).cachedEvents;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* MVNetworkGame+EventHandling(MVNetworkGame) */

void Assembly-CSharp.dll::MVNetworkGame+EventHandling::MVNetworkGame_EventHandling__ctor
               (MVNetworkGame_EventHandling *this,MVNetworkGame *networkGame,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVNetworkGame_EventHandling__DynamicEventCallbackManager);
    func_?(&
                    MethodInfo__System__Collections__Generic__Queue<ExitGames::Client::Photon::EventData>__Queue__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Queue<ExitGames::Client::Photon::EventData>
                   );
    cRam_? = '\x01';
  }
  value = (MVNetworkGame_EventHandling_DynamicEventCallbackManager *)
          func_?(TypeInfo__MVNetworkGame_EventHandling__DynamicEventCallbackManager);
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::Common::MVEventCodes,_MVNetworkGame_EventHandling_DynamicEventCallbackManager::EventCallback>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<MV::Common::MVEventCodes,_MVNetworkGame_EventHandling_DynamicEventCallbackManager::EventCallback>
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__HashSet<MV::Common::MVEventCodes>__Add_MV__Common__MVEventCodes_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__HashSet<MV::Common::MVEventCodes>__HashSet__
                   );
    func_?(&TypeInfo__System__Collections__Generic__HashSet<MV::Common::MVEventCodes>);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_ByteEnum_MV_WorldObject_RuntimeEvents_ExplosionEvent_ExplosionValues_
             *)func_?(
                              TypeInfo__System__Collections__Generic__Dictionary<MV::Common::MVEventCodes,_MVNetworkGame_EventHandling_DynamicEventCallbackManager::EventCallback>
                              );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,MV::WorldObject::
  RuntimeEvents::ExplosionEvent+ExplosionValues]::
  Dictionary_2_System_ByteEnum_MV_WorldObject_RuntimeEvents_ExplosionEvent_ExplosionValues___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<MV::Common::MVEventCodes,_MVNetworkGame_EventHandling_DynamicEventCallbackManager::EventCallback>__Dictionary__
            );
  (value->fields).eventCallbacks =
       (Dictionary_2_MV_Common_MVEventCodes_MVNetworkGame_EventHandling_DynamicEventCallbackManager_EventCallback_
        *)this_00;
  func_?(&value->fields,this_00);
  this_01 = (HashSet_1_System_ByteEnum_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__HashSet<MV::Common::MVEventCodes>
                           );
  System.Core.dll::System::Collections::Generic::HashSet`1[System::ByteEnum]::
  HashSet_1_System_ByteEnum___ctor
            (this_01,
             MethodInfo__System__Collections__Generic__HashSet<MV::Common::MVEventCodes>__HashSet__)
  ;
  if (this_01 != (HashSet_1_System_ByteEnum_ *)0x0) {
    System.Core.dll::System::Collections::Generic::HashSet`1[System::ByteEnum]::
    HashSet_1_System_ByteEnum__System_Collections_Generic_ICollection_T__Add
              (this_01,0x6a,
               MethodInfo__System__Collections__Generic__HashSet<MV::Common::MVEventCodes>__Add_MV__Common__MVEventCodes_
              );
    pMVar1 = (MethodInfo *)&(value->fields).eventsHandledByDynamicEventCallbackManager;
    (value->fields).eventsHandledByDynamicEventCallbackManager =
         (HashSet_1_MV_Common_MVEventCodes_ *)this_01;
    func_?(pMVar1,this_01);
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
              ((Object *)value,ExceptionArgument__Enum_obj,pMVar1);
    (this->fields).dynamicEventCallbackManager = value;
    func_?(&this->fields,value);
    this_02 = (Queue_1_ExitGames_Client_Photon_EventData_ *)
              func_?(
                             TypeInfo__System__Collections__Generic__Queue<ExitGames::Client::Photon::EventData>
                             );
    mscorlib.dll::System::Collections::Generic::Stack`1[System::Int32]::Stack_1_System_Int32___ctor
              ((Stack_1_System_Int32_ *)this_02,
               MethodInfo__System__Collections__Generic__Queue<ExitGames::Client::Photon::EventData>__Queue__
              );
    pMVar1 = (MethodInfo *)&(this->fields).cachedEvents;
    (this->fields).cachedEvents = this_02;
    func_?(pMVar1,this_02);
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
              ((Object *)this,ExceptionArgument__Enum_obj,pMVar1);
    (this->fields).networkGame = networkGame;
    pMStack2 = networkGame;
    ppMStack3 = &(this->fields).networkGame;
    func_?();
    return;
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

