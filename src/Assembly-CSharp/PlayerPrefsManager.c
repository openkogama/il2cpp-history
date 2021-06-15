
/* Void EarlyInitialize() */

void Assembly-CSharp.dll::PlayerPrefsManager::PlayerPrefsManager_EarlyInitialize(MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  func_?();
  uStack_1 = 0;
  bVar4 = UnityEngine.CoreModule.dll::UnityEngine::PlayerPrefs::PlayerPrefs_HasKey
                    (StringLiteral_isFirstTimeSession,(MethodInfo *)0x0);
  if (bVar4 == 0) {
    if ((((uint)(TypeInfo__PlayerPrefsManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__PlayerPrefsManager->_1).cctor_started == 0)) {
      func_?();
    }
    TypeInfo__PlayerPrefsManager->static_fields->isFirstTimeSession = 1;
    UnityEngine.CoreModule.dll::UnityEngine::PlayerPrefs::PlayerPrefs_SetInt
              (StringLiteral_isFirstTimeSession,1,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::PlayerPrefs::PlayerPrefs_Save((MethodInfo *)0x0);
  }
  *unaff_FS_OFFSET = uStack_3;
  return;
}


/* Void HandlePlayedGames(Int32) */

void Assembly-CSharp.dll::PlayerPrefsManager::PlayerPrefsManager_HandlePlayedGames
               (int32_t gameId,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  bVar1 = UnityEngine.CoreModule.dll::UnityEngine::PlayerPrefs::PlayerPrefs_HasKey
                    (StringLiteral_playedGamesList,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    this = (List_1_UnityEngine_Vector4_ *)
           func_?(TypeInfo__System__Collections__Generic__List<int>);
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
    List_1_UnityEngine_Vector4___ctor
              (this,MethodInfo__System__Collections__Generic__List<int>__List__);
    if ((((uint)(TypeInfo__Newtonsoft__Json__JsonConvert->vtable).Equals.methodPtr & 0x2000000) != 0
        ) && ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_started == 0)) {
      func_?(TypeInfo__Newtonsoft__Json__JsonConvert);
    }
    pSVar2 = Newtonsoft::Json::JsonConvert::JsonConvert_SerializeObject
                       ((Object *)this,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::PlayerPrefs::PlayerPrefs_SetString
              (StringLiteral_playedGamesList,pSVar2,(MethodInfo *)0x0);
  }
  pSVar2 = UnityEngine.CoreModule.dll::UnityEngine::PlayerPrefs::PlayerPrefs_GetString_1
                     (StringLiteral_playedGamesList,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__Newtonsoft__Json__JsonConvert->vtable).Equals.methodPtr & 0x2000000) != 0)
     && ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_started == 0)) {
    func_?(TypeInfo__Newtonsoft__Json__JsonConvert);
  }
  this_00 = (List_1_VoxelHit_ *)
            Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_43
                      (pSVar2,
                       System__Collections__Generic__List<int>_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<System::Collections::Generic::List<int>_>_System__String_
                      );
  iVar3 = 0;
  if (this_00 != (List_1_VoxelHit_ *)0x0) {
    while( true ) {
      index = iVar3;
      index_00 = &UNK_?;
      pOVar4 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
               Serialization::JsonProperty]::
               Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                         ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_00,
                          MethodInfo__System__Collections__Generic__List<int>__get_Count__);
      if ((int)pOVar4 <= index) break;
      iVar5 = mscorlib.dll::System::Collections::Generic::List`1[System::Int32]::
              List_1_System_Int32__get_Item
                        ((List_1_System_Int32_ *)this_00,index,
                         MethodInfo__System__Collections__Generic__List<int>__get_Item_int_);
      if (iVar5 == index) {
        if ((((uint)(TypeInfo__PlayerPrefsManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__PlayerPrefsManager->_1).cctor_started == 0)) {
          func_?();
        }
        TypeInfo__PlayerPrefsManager->static_fields->isReturningPlayer = 1;
      }
      iVar3 = index + 1;
      gameId = index;
    }
    if (index_00 != (undefined *)0xffffffff) {
      mscorlib.dll::System::Collections::Generic::List`1[System::Int32]::
      List_1_System_Int32__RemoveAt
                ((List_1_System_Int32_ *)this_00,(int32_t)index_00,
                 MethodInfo__System__Collections__Generic__List<int>__RemoveAt_int_);
      gameId = (int32_t)index_00;
    }
    mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
              ((List_1_UIPushOption_ *)this_00,gameId,
               MethodInfo__System__Collections__Generic__List<int>__Add_int_);
    pOVar4 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
             Serialization::JsonProperty]::
             Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                       ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_00,
                        MethodInfo__System__Collections__Generic__List<int>__get_Count__);
    if (0x32 < (int)pOVar4) {
      pOVar4 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
               Serialization::JsonProperty]::
               Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                         ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_00,
                          MethodInfo__System__Collections__Generic__List<int>__get_Count__);
      mscorlib.dll::System::Collections::Generic::List`1[VoxelHit]::List_1_VoxelHit__RemoveRange
                (this_00,0,(int32_t)((int)&pOVar4[-7].monitor + 2),
                 MethodInfo__System__Collections__Generic__List<int>__RemoveRange_int__int_);
    }
    if ((((uint)(TypeInfo__Newtonsoft__Json__JsonConvert->vtable).Equals.methodPtr & 0x2000000) != 0
        ) && ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_started == 0)) {
      func_?();
    }
    pSVar2 = Newtonsoft::Json::JsonConvert::JsonConvert_SerializeObject
                       ((Object *)this_00,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::PlayerPrefs::PlayerPrefs_SetString
              (StringLiteral_playedGamesList,pSVar2,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void HandleSignInState(Boolean) */

void Assembly-CSharp.dll::PlayerPrefsManager::PlayerPrefsManager_HandleSignInState
               (bool isRegistered,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  bVar1 = UnityEngine.CoreModule.dll::UnityEngine::PlayerPrefs::PlayerPrefs_HasKey
                    (StringLiteral_signInState,(MethodInfo *)0x0);
  if (bVar1 != 0) {
    iVar2 = UnityEngine.CoreModule.dll::UnityEngine::PlayerPrefs::PlayerPrefs_GetInt_1
                      (StringLiteral_signInState,(MethodInfo *)0x0);
    if (iVar2 == 0) {
      if (isRegistered == 0) goto code_?;
      if ((((uint)(TypeInfo__PlayerPrefsManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__PlayerPrefsManager->_1).cctor_started == 0)) {
        func_?();
      }
      TypeInfo__PlayerPrefsManager->static_fields->playerHasChangedFromTouristToRegistered = 1;
    }
  }
  if (isRegistered != 0) {
    UnityEngine.CoreModule.dll::UnityEngine::PlayerPrefs::PlayerPrefs_SetInt
              (StringLiteral_signInState,1,(MethodInfo *)0x0);
    return;
  }
code_?:
  UnityEngine.CoreModule.dll::UnityEngine::PlayerPrefs::PlayerPrefs_SetInt
            (StringLiteral_signInState,0,(MethodInfo *)0x0);
  return;
}


/* Void Initialize(GameSessionData) */

void Assembly-CSharp.dll::PlayerPrefsManager::PlayerPrefsManager_Initialize
               (GameSessionData *gameSessionData,MethodInfo *method)

{
  puStack_1 = &DAT_?;
  uStack_2 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_2;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  func_?();
  if (gameSessionData == (GameSessionData *)0x0) {
    func_?(0);
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar4 = (gameSessionData->fields).planetID;
  if ((((uint)(TypeInfo__PlayerPrefsManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__PlayerPrefsManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__PlayerPrefsManager);
  }
  PlayerPrefsManager_HandlePlayedGames(iVar4,(MethodInfo *)0x0);
  iVar5 = (gameSessionData->fields).profileID;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  bVar6 = UnityEngine.CoreModule.dll::UnityEngine::PlayerPrefs::PlayerPrefs_HasKey
                    (StringLiteral_signInState,(MethodInfo *)0x0);
  if (bVar6 == 0) {
code_?:
    if (0 < iVar5) {
      iVar4 = 1;
      goto code_?;
    }
  }
  else {
    iVar4 = UnityEngine.CoreModule.dll::UnityEngine::PlayerPrefs::PlayerPrefs_GetInt_1
                      (StringLiteral_signInState,(MethodInfo *)0x0);
    if (iVar4 != 0) goto code_?;
    if (0 < iVar5) {
      if ((((uint)(TypeInfo__PlayerPrefsManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__PlayerPrefsManager->_1).cctor_started == 0)) {
        func_?();
      }
      TypeInfo__PlayerPrefsManager->static_fields->playerHasChangedFromTouristToRegistered = 1;
      goto code_?;
    }
  }
  iVar4 = 0;
code_?:
  UnityEngine.CoreModule.dll::UnityEngine::PlayerPrefs::PlayerPrefs_SetInt
            (StringLiteral_signInState,iVar4,(MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::PlayerPrefs::PlayerPrefs_Save((MethodInfo *)0x0);
  *unaff_FS_OFFSET = uStack_2;
  return;
}


/* Boolean get_IsFirstTimeSession() */

bool Assembly-CSharp.dll::PlayerPrefsManager::PlayerPrefsManager_get_IsFirstTimeSession
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__PlayerPrefsManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__PlayerPrefsManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__PlayerPrefsManager);
  }
  return TypeInfo__PlayerPrefsManager->static_fields->isFirstTimeSession;
}


/* Boolean get_IsReturningAsSignedUp() */

bool Assembly-CSharp.dll::PlayerPrefsManager::PlayerPrefsManager_get_IsReturningAsSignedUp
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__PlayerPrefsManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__PlayerPrefsManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__PlayerPrefsManager);
  }
  if (TypeInfo__PlayerPrefsManager->static_fields->playerHasChangedFromTouristToRegistered == 0) {
    return 0;
  }
  if ((((uint)(TypeInfo__PlayerPrefsManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__PlayerPrefsManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__PlayerPrefsManager);
  }
  return TypeInfo__PlayerPrefsManager->static_fields->isReturningPlayer != 0;
}


/* Boolean get_IsReturningPlayer() */

bool Assembly-CSharp.dll::PlayerPrefsManager::PlayerPrefsManager_get_IsReturningPlayer
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__PlayerPrefsManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__PlayerPrefsManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__PlayerPrefsManager);
  }
  return TypeInfo__PlayerPrefsManager->static_fields->isReturningPlayer;
}

