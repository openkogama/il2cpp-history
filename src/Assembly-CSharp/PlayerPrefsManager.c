
/* Void EarlyInitialize() */

void Assembly-CSharp.dll::PlayerPrefsManager::PlayerPrefsManager_EarlyInitialize(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__PlayerPrefsManager);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_isFirstTimeSession);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar1 = UnityEngine.CoreModule.dll::UnityEngine::PlayerPrefs::PlayerPrefs_HasKey
                    (StringLiteral_isFirstTimeSession,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    TypeInfo__PlayerPrefsManager->static_fields->isFirstTimeSession = 1;
    UnityEngine.CoreModule.dll::UnityEngine::PlayerPrefs::PlayerPrefs_SetInt
              (StringLiteral_isFirstTimeSession,1,(MethodInfo *)0x0);
    pcVar2 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
      uVar3 = func_?(&UNK_?);
      FUN_?(uVar3,0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pcRam_? = pcVar2;
    (*pcRam_?)();
  }
  return;
}


/* Void HandlePlayedGames(Int32) */

void Assembly-CSharp.dll::PlayerPrefsManager::PlayerPrefsManager_HandlePlayedGames
               (int32_t gameId,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  System__Collections__Generic__List<int>_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<System::Collections::Generic::List<int>_>_System__String_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Newtonsoft__Json__JsonConvert);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<int>__Add_int_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<int>__RemoveAt_int_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<int>__RemoveRange_int__int_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<int>__List__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<int>__get_Count__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<int>__get_Item_int_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<int>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__PlayerPrefsManager);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_playedGamesList);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar1 = UnityEngine.CoreModule.dll::UnityEngine::PlayerPrefs::PlayerPrefs_HasKey
                    (StringLiteral_playedGamesList,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    value = (Object *)FUN_?(TypeInfo__System__Collections__Generic__List<int>);
    FUN_?(value);
    if (*(int *)&(TypeInfo__Newtonsoft__Json__JsonConvert->_1).field_0x1c == 0) {
      FUN_?();
    }
    pSVar2 = Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_SerializeObject
                       (value,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::PlayerPrefs::PlayerPrefs_SetString
              (StringLiteral_playedGamesList,pSVar2,(MethodInfo *)0x0);
  }
  pSVar2 = StringLiteral_playedGamesList;
  if (cRam_? == '\0') {
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar2 = UnityEngine.CoreModule.dll::UnityEngine::PlayerPrefs::PlayerPrefs_GetString
                     (pSVar2,::StringLiteral__,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__Newtonsoft__Json__JsonConvert->_1).field_0x1c == 0) {
    FUN_?();
  }
  this = (List_1_System_UInt32Enum_ *)
         Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_2
                   (pSVar2,
                    System__Collections__Generic__List<int>_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<System::Collections::Generic::List<int>_>_System__String_
                   );
  uVar3 = 0;
  uVar4 = 0xffffffff;
  if (this != (List_1_System_UInt32Enum_ *)0x0) {
    lVar5 = 0x20;
    for (; (int)uVar3 < (this->fields)._size; uVar3 = uVar3 + 1) {
      if ((uint)(this->fields)._size <= uVar3) goto code_?;
      pUVar6 = (this->fields)._items;
      if (pUVar6 == (UInt32Enum__Enum__Array *)0x0) goto code_?;
      if ((uint)pUVar6->max_length <= uVar3) goto code_?;
      if (*(int *)((longlong)pUVar6->vector + lVar5 + -0x20) == gameId) {
        TypeInfo__PlayerPrefsManager->static_fields->isReturningPlayer = 1;
        uVar4 = uVar3;
      }
      lVar5 = lVar5 + 4;
    }
    if (uVar4 != 0xffffffff) {
      if ((uint)(this->fields)._size <= uVar4) {
code_?:
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                  ((MethodInfo *)0x0);
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      iVar8 = (this->fields)._size + -1;
      (this->fields)._size = iVar8;
      if ((int)uVar4 < iVar8) {
        pUVar6 = (this->fields)._items;
        mscorlib.dll::System::Array::Array_Copy_3
                  ((Array *)pUVar6,uVar4 + 1,(Array *)pUVar6,uVar4,iVar8 - uVar4,
                   (MethodInfo *)0x0);
      }
      piVar9 = &(this->fields)._version;
      *piVar9 = *piVar9 + 1;
    }
    pMVar10 = MethodInfo__System__Collections__Generic__List<int>__Add_int_;
    piVar9 = &(this->fields)._version;
    *piVar9 = *piVar9 + 1;
    pUVar6 = (this->fields)._items;
    if (pUVar6 != (UInt32Enum__Enum__Array *)0x0) {
      uVar4 = (this->fields)._size;
      if (uVar4 < (uint)pUVar6->max_length) {
        (this->fields)._size = uVar4 + 1;
        if ((uint)pUVar6->max_length <= uVar4) {
code_?:
          FUN_?();
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pUVar6->vector[(int)uVar4] = gameId;
      }
      else {
        mscorlib.dll::System::Collections::Generic::List`1[System::UInt32Enum]::
        List_1_System_UInt32Enum__AddWithResize(this,gameId,pMVar10->klass->rgctx_data[0xe].method);
      }
      if (0x32 < (this->fields)._size) {
        iVar8 = (this->fields)._size + -0x32;
        if (iVar8 < 0) {
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRangeException_2
                    (ExceptionArgument__Enum_count,
                     ExceptionResource__Enum_ArgumentOutOfRange_NeedNonNegNum,(MethodInfo *)0x0);
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        if (0 < iVar8) {
          pUVar6 = (this->fields)._items;
          (this->fields)._size = 0x32;
          mscorlib.dll::System::Array::Array_Copy_3
                    ((Array *)pUVar6,iVar8,(Array *)pUVar6,0,0x32,(MethodInfo *)0x0);
          piVar9 = &(this->fields)._version;
          *piVar9 = *piVar9 + 1;
        }
      }
      if (*(int *)&(TypeInfo__Newtonsoft__Json__JsonConvert->_1).field_0x1c == 0) {
        FUN_?();
      }
      pSVar2 = Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_SerializeObject
                         ((Object *)this,(MethodInfo *)0x0);
      bVar1 = UnityEngine.CoreModule.dll::UnityEngine::PlayerPrefs::PlayerPrefs_TrySetSetString
                        (StringLiteral_playedGamesList,pSVar2,(MethodInfo *)0x0);
      if (bVar1 != 0) {
        return;
      }
      uVar11 = func_?(&TypeInfo__UnityEngine__PlayerPrefsException);
      this_00 = (PlayerPrefsException *)func_?(uVar11);
      pSVar2 = (String *)func_?(&StringLiteral_Could_not_store_preference_value);
      UnityEngine.CoreModule.dll::UnityEngine::PlayerPrefsException::PlayerPrefsException__ctor
                (this_00,pSVar2,(MethodInfo *)0x0);
      uVar11 = func_?(&
                                  MethodInfo__UnityEngine__PlayerPrefs__SetString_System__String__System__String_
                                 );
      FUN_?(this_00,uVar11);
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
code_?:
  FUN_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void HandleSignInState(Boolean) */

void Assembly-CSharp.dll::PlayerPrefsManager::PlayerPrefsManager_HandleSignInState
               (bool isRegistered,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__PlayerPrefsManager);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_signInState);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar1 = UnityEngine.CoreModule.dll::UnityEngine::PlayerPrefs::PlayerPrefs_HasKey
                    (StringLiteral_signInState,(MethodInfo *)0x0);
  if (bVar1 != 0) {
    iVar2 = UnityEngine.CoreModule.dll::UnityEngine::PlayerPrefs::PlayerPrefs_GetInt
                      (StringLiteral_signInState,0,(MethodInfo *)0x0);
    bVar1 = 0;
    if (iVar2 == 0) {
      bVar1 = isRegistered;
    }
    if (bVar1 != 0) {
      TypeInfo__PlayerPrefsManager->static_fields->playerHasChangedFromTouristToRegistered = 1;
    }
  }
  bVar1 = UnityEngine.CoreModule.dll::UnityEngine::PlayerPrefs::PlayerPrefs_TrySetInt
                    (StringLiteral_signInState,(uint)(isRegistered != 0),(MethodInfo *)0x0);
  if (bVar1 != 0) {
    return;
  }
  uVar3 = func_?(&TypeInfo__UnityEngine__PlayerPrefsException);
  this = (PlayerPrefsException *)func_?(uVar3);
  error = (String *)func_?(&StringLiteral_Could_not_store_preference_value);
  UnityEngine.CoreModule.dll::UnityEngine::PlayerPrefsException::PlayerPrefsException__ctor
            (this,error,(MethodInfo *)0x0);
  uVar3 = func_?(&MethodInfo__UnityEngine__PlayerPrefs__SetInt_System__String__int_);
  FUN_?(this,uVar3);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void Initialize(GameSessionData) */

void Assembly-CSharp.dll::PlayerPrefsManager::PlayerPrefsManager_Initialize
               (GameSessionData *gameSessionData,MethodInfo *method)

{
  if (gameSessionData != (GameSessionData *)0x0) {
    PlayerPrefsManager_HandlePlayedGames((gameSessionData->fields).planetID,(MethodInfo *)0x0);
    iVar1 = (gameSessionData->fields).profileID;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__PlayerPrefsManager);
      LOCK();
      UNLOCK();
      FUN_?(&StringLiteral_signInState);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    bVar2 = UnityEngine.CoreModule.dll::UnityEngine::PlayerPrefs::PlayerPrefs_HasKey
                      (StringLiteral_signInState,(MethodInfo *)0x0);
    if ((bVar2 != 0) &&
       (iVar3 = UnityEngine.CoreModule.dll::UnityEngine::PlayerPrefs::PlayerPrefs_GetInt
                          (StringLiteral_signInState,0,(MethodInfo *)0x0), 0 < iVar1 && iVar3 == 0))
    {
      TypeInfo__PlayerPrefsManager->static_fields->playerHasChangedFromTouristToRegistered = 1;
    }
    if (iVar1 < 1) {
      UnityEngine.CoreModule.dll::UnityEngine::PlayerPrefs::PlayerPrefs_SetInt
                (StringLiteral_signInState,0,(MethodInfo *)0x0);
    }
    else {
      UnityEngine.CoreModule.dll::UnityEngine::PlayerPrefs::PlayerPrefs_SetInt
                (StringLiteral_signInState,1,(MethodInfo *)0x0);
    }
    pcVar4 = pcRam_?;
    if ((pcRam_? != (code *)0x0) ||
       (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 != (code *)0x0)) {
      pcRam_? = pcVar4;
      (*pcRam_?)();
      return;
    }
    uVar5 = func_?(&UNK_?);
    FUN_?(uVar5,0);
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Boolean get_IsFirstTimeSession() */

bool Assembly-CSharp.dll::PlayerPrefsManager::PlayerPrefsManager_get_IsFirstTimeSession
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__PlayerPrefsManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  return TypeInfo__PlayerPrefsManager->static_fields->isFirstTimeSession;
}


/* Boolean get_IsReturningAsSignedUp() */

bool Assembly-CSharp.dll::PlayerPrefsManager::PlayerPrefsManager_get_IsReturningAsSignedUp
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__PlayerPrefsManager);
    LOCK();
    UNLOCK();
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
    FUN_?(&TypeInfo__PlayerPrefsManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  return TypeInfo__PlayerPrefsManager->static_fields->isReturningPlayer;
}

