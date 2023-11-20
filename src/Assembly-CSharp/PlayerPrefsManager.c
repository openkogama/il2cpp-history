
/* Void EarlyInitialize() */

void Assembly-CSharp.dll::PlayerPrefsManager::PlayerPrefsManager_EarlyInitialize(MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__PlayerPrefsManager);
    func_?(&StringLiteral_isFirstTimeSession);
    cRam_? = '\x01';
  }
  uStack_1 = 0;
  bVar4 = UnityEngine.CoreModule.dll::UnityEngine::PlayerPrefs::PlayerPrefs_HasKey
                    (StringLiteral_isFirstTimeSession,(MethodInfo *)0x0);
  if (bVar4 == 0) {
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
    func_?(&
                    System__Collections__Generic__List<int>_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<System::Collections::Generic::List<int>_>_System__String_
                   );
    func_?(&TypeInfo__Newtonsoft__Json__JsonConvert);
    func_?(&MethodInfo__System__Collections__Generic__List<int>__Add_int_);
    func_?(&MethodInfo__System__Collections__Generic__List<int>__RemoveAt_int_);
    func_?(&MethodInfo__System__Collections__Generic__List<int>__RemoveRange_int__int_);
    func_?(&MethodInfo__System__Collections__Generic__List<int>__List__);
    func_?(&MethodInfo__System__Collections__Generic__List<int>__get_Count__);
    func_?(&MethodInfo__System__Collections__Generic__List<int>__get_Item_int_);
    func_?(&TypeInfo__System__Collections__Generic__List<int>);
    func_?(&TypeInfo__PlayerPrefsManager);
    func_?(&StringLiteral_playedGamesList);
    cRam_? = '\x01';
  }
  bVar1 = UnityEngine.CoreModule.dll::UnityEngine::PlayerPrefs::PlayerPrefs_HasKey
                    (StringLiteral_playedGamesList,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    this = (LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)
           func_?(TypeInfo__System__Collections__Generic__List<int>);
    mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
    __Il2CppFullySharedGenericType]::
    LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
              (this,MethodInfo__System__Collections__Generic__List<int>__List__);
    if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__Newtonsoft__Json__JsonConvert);
    }
    pSVar2 = Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_SerializeObject
                       ((Object *)this,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::PlayerPrefs::PlayerPrefs_SetString
              (StringLiteral_playedGamesList,pSVar2,(MethodInfo *)0x0);
  }
  pSVar2 = UnityEngine.CoreModule.dll::UnityEngine::PlayerPrefs::PlayerPrefs_GetString_1
                     (StringLiteral_playedGamesList,(MethodInfo *)0x0);
  if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  this_00 = (List_1_UnityEngine_UIElements_UIR_Implementation_UIRStylePainter_RepeatRectUV_ *)
            Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_2
                      (pSVar2,
                       System__Collections__Generic__List<int>_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<System::Collections::Generic::List<int>_>_System__String_
                      );
  index = -1;
  index_00 = 0;
  gameId = unaff_EBX;
  if (this_00 !=
      (List_1_UnityEngine_UIElements_UIR_Implementation_UIRStylePainter_RepeatRectUV_ *)0x0) {
    for (; pMVar3 = MethodInfo__System__Collections__Generic__List<int>__get_Item_int_,
        index_00 < (this_00->fields)._size; index_00 = index_00 + 1) {
      gameId = (int32_t)MethodInfo__System__Collections__Generic__List<int>__get_Item_int_;
      RVar4 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
              RegexCharClass+SingleRange]::
              List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                        ((List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                         this_00,index_00,
                         MethodInfo__System__Collections__Generic__List<int>__get_Item_int_);
      if (RVar4 == (RegexCharClass_SingleRange)pMVar3) {
        TypeInfo__PlayerPrefsManager->static_fields->isReturningPlayer = 1;
        index = index_00;
      }
    }
    if (index != -1) {
      gameId = (int32_t)MethodInfo__System__Collections__Generic__List<int>__RemoveAt_int_;
      mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::UIR::
      Implementation::UIRStylePainter+RepeatRectUV]::
      List_1_UnityEngine_UIElements_UIR_Implementation_UIRStylePainter_RepeatRectUV__RemoveAt
                (this_00,index,MethodInfo__System__Collections__Generic__List<int>__RemoveAt_int_);
    }
    pMVar3 = MethodInfo__System__Collections__Generic__List<int>__Add_int_;
    piVar5 = &(this_00->fields)._version;
    *piVar5 = *piVar5 + 1;
    pUVar6 = (this_00->fields)._items;
    if (pUVar6 != (UIRStylePainter_RepeatRectUV__Array *)0x0) {
      uVar7 = (this_00->fields)._size;
      if (pUVar6->max_length <= uVar7) {
        method_00 = pMVar3->klass->rgctx_data[0xe];
        mscorlib.dll::System::Collections::Generic::List`1[System::Int32]::
        List_1_System_Int32__AddWithResize
                  ((List_1_System_Int32_ *)this_00,(int32_t)method_00,(MethodInfo *)method_00);
code_?:
        if (0x32 < (this_00->fields)._size) {
          mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::UIR::
          Implementation::UIRStylePainter+RepeatRectUV]::
          List_1_UnityEngine_UIElements_UIR_Implementation_UIRStylePainter_RepeatRectUV__RemoveRange
                    (this_00,0,(this_00->fields)._size + -0x32,
                     MethodInfo__System__Collections__Generic__List<int>__RemoveRange_int__int_);
        }
        if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        pSVar2 = Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_SerializeObject
                           ((Object *)this_00,(MethodInfo *)0x0);
        UnityEngine.CoreModule.dll::UnityEngine::PlayerPrefs::PlayerPrefs_SetString
                  (StringLiteral_playedGamesList,pSVar2,(MethodInfo *)0x0);
        return;
      }
      (this_00->fields)._size = uVar7 + 1;
      if (uVar7 < pUVar6->max_length) {
        (&pUVar6->vector[0].rect.m_XMin)[uVar7] = (float)gameId;
        goto code_?;
      }
      goto code_?;
    }
  }
  func_?();
code_?:
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void HandleSignInState(Boolean) */

void Assembly-CSharp.dll::PlayerPrefsManager::PlayerPrefsManager_HandleSignInState
               (bool isRegistered,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__PlayerPrefsManager);
    func_?(&StringLiteral_signInState);
    cRam_? = '\x01';
  }
  bVar1 = UnityEngine.CoreModule.dll::UnityEngine::PlayerPrefs::PlayerPrefs_HasKey
                    (StringLiteral_signInState,(MethodInfo *)0x0);
  if (bVar1 != 0) {
    iVar2 = UnityEngine.CoreModule.dll::UnityEngine::PlayerPrefs::PlayerPrefs_GetInt_1
                      (StringLiteral_signInState,(MethodInfo *)0x0);
    bVar1 = 0;
    if (iVar2 == 0) {
      bVar1 = isRegistered;
    }
    if (bVar1 != 0) {
      TypeInfo__PlayerPrefsManager->static_fields->playerHasChangedFromTouristToRegistered = 1;
    }
  }
  if (isRegistered == 0) {
    UnityEngine.CoreModule.dll::UnityEngine::PlayerPrefs::PlayerPrefs_SetInt
              (StringLiteral_signInState,0,(MethodInfo *)0x0);
    return;
  }
  UnityEngine.CoreModule.dll::UnityEngine::PlayerPrefs::PlayerPrefs_SetInt
            (StringLiteral_signInState,1,(MethodInfo *)0x0);
  return;
}


/* Void Initialize(GameSessionData) */

void Assembly-CSharp.dll::PlayerPrefsManager::PlayerPrefsManager_Initialize
               (GameSessionData *gameSessionData,MethodInfo *method)

{
  puStack_1 = &DAT_?;
  uStack_2 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_2;
  if (gameSessionData != (GameSessionData *)0x0) {
    PlayerPrefsManager_HandlePlayedGames((gameSessionData->fields).planetID,(MethodInfo *)0x0);
    iVar3 = (gameSessionData->fields).profileID;
    if (cRam_? == '\0') {
      func_?();
      func_?();
      cRam_? = '\x01';
    }
    bVar4 = UnityEngine.CoreModule.dll::UnityEngine::PlayerPrefs::PlayerPrefs_HasKey
                      (StringLiteral_signInState,(MethodInfo *)0x0);
    if ((bVar4 != 0) &&
       (iVar5 = UnityEngine.CoreModule.dll::UnityEngine::PlayerPrefs::PlayerPrefs_GetInt_1
                          (StringLiteral_signInState,(MethodInfo *)0x0), 0 < iVar3 && iVar5 == 0)) {
      TypeInfo__PlayerPrefsManager->static_fields->playerHasChangedFromTouristToRegistered = 1;
    }
    UnityEngine.CoreModule.dll::UnityEngine::PlayerPrefs::PlayerPrefs_SetInt
              (StringLiteral_signInState,(uint)(0 < iVar3),(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::PlayerPrefs::PlayerPrefs_Save((MethodInfo *)0x0);
    *unaff_FS_OFFSET = uStack_2;
    return;
  }
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Boolean get_IsFirstTimeSession() */

bool Assembly-CSharp.dll::PlayerPrefsManager::PlayerPrefsManager_get_IsFirstTimeSession
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__PlayerPrefsManager);
    cRam_? = '\x01';
  }
  return TypeInfo__PlayerPrefsManager->static_fields->isFirstTimeSession;
}


/* Boolean get_IsReturningAsSignedUp() */

bool Assembly-CSharp.dll::PlayerPrefsManager::PlayerPrefsManager_get_IsReturningAsSignedUp
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__PlayerPrefsManager);
    cRam_? = '\x01';
  }
  if (TypeInfo__PlayerPrefsManager->static_fields->playerHasChangedFromTouristToRegistered == 0) {
    return 0;
  }
  return TypeInfo__PlayerPrefsManager->static_fields->isReturningPlayer;
}


/* Boolean get_IsReturningPlayer() */

bool Assembly-CSharp.dll::PlayerPrefsManager::PlayerPrefsManager_get_IsReturningPlayer
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__PlayerPrefsManager);
    cRam_? = '\x01';
  }
  return TypeInfo__PlayerPrefsManager->static_fields->isReturningPlayer;
}

