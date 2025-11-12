
/* Void Awake() */

void Assembly-CSharp.dll::GameLoader::GameLoader_Awake(GameLoader *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__GameLoader);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__GameLoader->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__GameLoader);
  }
  if (TypeInfo__GameLoader->static_fields->applicationStartUp != 0) {
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__AsyncWWWManager);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__BackButtonManager);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CullingApiWrapper);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CullingApiWrapper->_1).field_0x1c == 0) {
    FUN_?();
  }
  CullingApiWrapper::CullingApiWrapper_PostDestroyCleanup((MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_OnReceivedNotification_still_hav);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_OnReceivedGameMsg_still_have_sub);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (TypeInfo__MVGameControllerBase->static_fields->OnReceivedNotification !=
      (MVGameControllerBase_OnReceivedNotificationEventDelegate *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
              ((Object *)StringLiteral_OnReceivedNotification_still_hav,(MethodInfo *)0x0);
    bVar1 = iRam_? != 0;
    TypeInfo__MVGameControllerBase->static_fields->OnReceivedNotification =
         (MVGameControllerBase_OnReceivedNotificationEventDelegate *)0x0;
    if (bVar1) {
      uVar2 = (uint)((ulonglong)
                     &TypeInfo__MVGameControllerBase->static_fields->OnReceivedNotification >> 0xc);
      lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
      do {
        uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
        puVar5 = (ulonglong *)(lVar3 + 0xADDR);
        LOCK();
        bVar1 = uVar4 == *puVar5;
        if (bVar1) {
          *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
        }
        UNLOCK();
      } while (!bVar1);
    }
  }
  if (TypeInfo__MVGameControllerBase->static_fields->OnReceivedGameMsg !=
      (MVGameControllerBase_OnReceivedGameMsgDelegate *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
              ((Object *)StringLiteral_OnReceivedGameMsg_still_have_sub,(MethodInfo *)0x0);
    bVar1 = iRam_? != 0;
    TypeInfo__MVGameControllerBase->static_fields->OnReceivedGameMsg =
         (MVGameControllerBase_OnReceivedGameMsgDelegate *)0x0;
    if (bVar1) {
      uVar2 = (uint)((ulonglong)&TypeInfo__MVGameControllerBase->static_fields->OnReceivedGameMsg >>
                    0xc);
      lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
      do {
        uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
        puVar5 = (ulonglong *)(lVar3 + 0xADDR);
        LOCK();
        bVar1 = uVar4 == *puVar5;
        if (bVar1) {
          *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
        }
        UNLOCK();
      } while (!bVar1);
    }
  }
  if (*(int *)&(TypeInfo__AsyncWWWManager->_1).field_0x1c == 0) {
    FUN_?();
  }
  AsyncWWWManager::AsyncWWWManager_PostResetCleanup((MethodInfo *)0x0);
  TimedPlayReward+RewardTracker::TimedPlayReward_RewardTracker_PostResetCleanup((MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__BackButtonManager->_1).field_0x1c == 0) {
    FUN_?();
  }
  BackButtonManager::BackButtonManager_PostDestroyCleanup((MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__GamePointGainEffectManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  TypeInfo__GamePointGainEffectManager->static_fields->OnGamePointGainEffectShown =
       (Action_1_Int32_ *)0x0;
  if (iRam_? != 0) {
    uVar2 = (uint)((ulonglong)TypeInfo__GamePointGainEffectManager->static_fields >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  TypeInfo__GamePointGainEffectManager->static_fields->OnInGamePointGainEffectShown =
       (Action_1_Int32_ *)0x0;
  if (iRam_? != 0) {
    uVar2 = (uint)((ulonglong)
                   &TypeInfo__GamePointGainEffectManager->static_fields->
                    OnInGamePointGainEffectShown >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  TypeInfo__GamePointGainEffectManager->static_fields->OnTierProgressBarGamePointGainEffectShown =
       (Action_1_Int32_ *)0x0;
  if (iRam_? != 0) {
    uVar2 = (uint)((ulonglong)
                   &TypeInfo__GamePointGainEffectManager->static_fields->
                    OnTierProgressBarGamePointGainEffectShown >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  return;
}


/* Void Cleanup() */

void Assembly-CSharp.dll::GameLoader::GameLoader_Cleanup(GameLoader *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__AsyncWWWManager);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__BackButtonManager);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CullingApiWrapper);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CullingApiWrapper->_1).field_0x1c == 0) {
    FUN_?();
  }
  CullingApiWrapper::CullingApiWrapper_PostDestroyCleanup((MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_OnReceivedNotification_still_hav);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_OnReceivedGameMsg_still_have_sub);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (TypeInfo__MVGameControllerBase->static_fields->OnReceivedNotification !=
      (MVGameControllerBase_OnReceivedNotificationEventDelegate *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
              ((Object *)StringLiteral_OnReceivedNotification_still_hav,(MethodInfo *)0x0);
    bVar1 = iRam_? != 0;
    TypeInfo__MVGameControllerBase->static_fields->OnReceivedNotification =
         (MVGameControllerBase_OnReceivedNotificationEventDelegate *)0x0;
    if (bVar1) {
      uVar2 = (uint)((ulonglong)
                     &TypeInfo__MVGameControllerBase->static_fields->OnReceivedNotification >> 0xc);
      lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
      do {
        uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
        puVar5 = (ulonglong *)(lVar3 + 0xADDR);
        LOCK();
        bVar1 = uVar4 == *puVar5;
        if (bVar1) {
          *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
        }
        UNLOCK();
      } while (!bVar1);
    }
  }
  if (TypeInfo__MVGameControllerBase->static_fields->OnReceivedGameMsg !=
      (MVGameControllerBase_OnReceivedGameMsgDelegate *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
              ((Object *)StringLiteral_OnReceivedGameMsg_still_have_sub,(MethodInfo *)0x0);
    bVar1 = iRam_? != 0;
    TypeInfo__MVGameControllerBase->static_fields->OnReceivedGameMsg =
         (MVGameControllerBase_OnReceivedGameMsgDelegate *)0x0;
    if (bVar1) {
      uVar2 = (uint)((ulonglong)&TypeInfo__MVGameControllerBase->static_fields->OnReceivedGameMsg >>
                    0xc);
      lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
      do {
        uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
        puVar5 = (ulonglong *)(lVar3 + 0xADDR);
        LOCK();
        bVar1 = uVar4 == *puVar5;
        if (bVar1) {
          *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
        }
        UNLOCK();
      } while (!bVar1);
    }
  }
  if (*(int *)&(TypeInfo__AsyncWWWManager->_1).field_0x1c == 0) {
    FUN_?();
  }
  AsyncWWWManager::AsyncWWWManager_PostResetCleanup((MethodInfo *)0x0);
  TimedPlayReward+RewardTracker::TimedPlayReward_RewardTracker_PostResetCleanup((MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__BackButtonManager->_1).field_0x1c == 0) {
    FUN_?();
  }
  BackButtonManager::BackButtonManager_PostDestroyCleanup((MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__GamePointGainEffectManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  TypeInfo__GamePointGainEffectManager->static_fields->OnGamePointGainEffectShown =
       (Action_1_Int32_ *)0x0;
  if (iRam_? != 0) {
    uVar2 = (uint)((ulonglong)TypeInfo__GamePointGainEffectManager->static_fields >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  TypeInfo__GamePointGainEffectManager->static_fields->OnInGamePointGainEffectShown =
       (Action_1_Int32_ *)0x0;
  if (iRam_? != 0) {
    uVar2 = (uint)((ulonglong)
                   &TypeInfo__GamePointGainEffectManager->static_fields->
                    OnInGamePointGainEffectShown >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  TypeInfo__GamePointGainEffectManager->static_fields->OnTierProgressBarGamePointGainEffectShown =
       (Action_1_Int32_ *)0x0;
  if (iRam_? != 0) {
    uVar2 = (uint)((ulonglong)
                   &TypeInfo__GamePointGainEffectManager->static_fields->
                    OnTierProgressBarGamePointGainEffectShown >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  return;
}


/* Void Start() */

void Assembly-CSharp.dll::GameLoader::GameLoader_Start(GameLoader *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__GC);
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__GameLoader->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (TypeInfo__GameLoader->static_fields->applicationStartUp == 0) {
    UnityEngine.CoreModule.dll::UnityEngine::Resources::Resources_UnloadUnusedAssets
              ((MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__System__GC->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__System__GC);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__System__GC->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__System__GC);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__System__GC->_1).field_0x1c == 0) {
      FUN_?();
    }
    FUN_?();
    if (iRam_? != 0) {
      if (iRam_? != 0) {
        EnterCriticalSection(0xADDR);
      }
      iVar1 = iRam_?;
      uVar2 = uRam_?;
      if (iRam_? == 0) {
        uVar3 = (ulonglong)uRam_?;
        iRam_? = 1;
        if (uRam_? != 0) {
          FUN_?(auStack_4,0xADDR,uVar3 << 3);
          uRam_? = 0;
          FUN_?(0xADDR,0,uVar3 << 3);
        }
        if (iRam_? != 0) {
          LeaveCriticalSection(0xADDR);
        }
        if (iRam_? == 0) {
          iVar1 = 0;
        }
        else {
          (*pcRam_?)();
        }
        if (uVar2 != 0) {
          FUN_?(&UNK_?,uVar3);
          puVar5 = auStack_4;
          do {
            FUN_?(*puVar5);
            FUN_?(*puVar5);
            puVar5 = puVar5 + 1;
            uVar3 = uVar3 - 1;
            iVar1 = 1;
          } while (uVar3 != 0);
        }
        if ((iVar1 != 0) && (lVar6 = func_?(&UNK_?), lVar6 != 0)) {
          FUN_?(&UNK_?);
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        if (iRam_? != 0) {
          EnterCriticalSection(0xADDR);
        }
        iRam_? = 0;
      }
      if (iRam_? != 0) {
        LeaveCriticalSection(0xADDR);
      }
      return;
    }
  }
  return;
}


/* Void UnloadGame() */

void Assembly-CSharp.dll::GameLoader::GameLoader_UnloadGame(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__GameLoader);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__SceneManagement__SceneManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__SceneManagement__SceneManager->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__SceneManagement__SceneManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__SceneManagement__SceneManager->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__SceneManagement__SceneManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__SceneManagement__SceneManager->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::SceneManagement::SceneManager::
  SceneManager_LoadSceneAsyncNameIndexInternal
            ((String *)0x0,0,(LoadSceneParameters)0x0,1,(MethodInfo *)0x0);
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar2 = func_?(&UNK_?);
    FUN_?(uVar2,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
  iVar3 = (*pcRam_?)();
  UnityEngine.CoreModule.dll::UnityEngine::SceneManagement::SceneManager::SceneManager_GetSceneAt
            (iVar3 + -1,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__GameLoader->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__GameLoader);
  }
  TypeInfo__GameLoader->static_fields->applicationStartUp = 0;
  return;
}


/* GameLoader() */

void Assembly-CSharp.dll::GameLoader::GameLoader__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__GameLoader);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  TypeInfo__GameLoader->static_fields->applicationStartUp = 1;
  return;
}

