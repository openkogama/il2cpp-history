
/* Void OnDestroy() */

void Assembly-CSharp.dll::LevelRequirementPanel::LevelRequirementPanel_OnDestroy
               (LevelRequirementPanel *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__BadgeManager);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__LevelRequirementPanel__StreamingAssetCallback_UnityEngine__Networking__UnityWebRequest_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (UnityAction_1_System_Object_ *)
            FUN_?(TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
  UnityAction_1_System_Object___ctor
            (this_00,(Object *)this,
             MethodInfo__LevelRequirementPanel__StreamingAssetCallback_UnityEngine__Networking__UnityWebRequest_
             ,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__BadgeManager->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__AsyncWWWManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__AsyncWWWManager->_1).field_0x1c == 0) {
    FUN_?();
  }
  AsyncWWWManager::AsyncWWWManager_UnsubscribeWWWRequest
            ((Action_1_UnityEngine_Networking_UnityWebRequest_ *)this_00,(MethodInfo *)0x0);
  bVar1 = iRam_? != 0;
  (this->fields).levelRequirementTextureAsset = (Texture2D *)0x0;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).levelRequirementTextureAsset >> 0xc);
    puVar3 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar4 = *puVar3;
      LOCK();
      uVar5 = *puVar3;
      if (uVar4 == uVar5) {
        *puVar3 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (uVar4 != uVar5);
  }
  return;
}


/* Void OnLevelingIsReady() */

void Assembly-CSharp.dll::LevelRequirementPanel::LevelRequirementPanel_OnLevelingIsReady
               (LevelRequirementPanel *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__LevelRequirementPanel__OnLevelingIsReady__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__LevelingManager);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Events__UnityAction);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__LevelingManager->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__LevelingManager);
  }
  pUVar1 = TypeInfo__LevelingManager->static_fields->OnLevelingInitialized;
  this_00 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__UnityEngine__Events__UnityAction);
  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
  NavMesh_OnNavMeshPreUpdate__ctor
            (this_00,(Object *)this,MethodInfo__LevelRequirementPanel__OnLevelingIsReady__,
             (MethodInfo *)0x0);
  pUVar1 = (UnityAction *)
           mscorlib.dll::System::Delegate::Delegate_Remove
                     ((Delegate *)pUVar1,(Delegate *)this_00,(MethodInfo *)0x0);
  if (pUVar1 == (UnityAction *)0x0) {
    TypeInfo__LevelingManager->static_fields->OnLevelingInitialized = (UnityAction *)0x0;
  }
  else {
    pUVar2 = (UnityAction *)0x0;
    if (pUVar1->klass == TypeInfo__UnityEngine__Events__UnityAction) {
      pUVar2 = pUVar1;
    }
    if (pUVar2 == (UnityAction *)0x0) {
      FUN_?(pUVar1,TypeInfo__UnityEngine__Events__UnityAction);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    TypeInfo__LevelingManager->static_fields->OnLevelingInitialized = pUVar2;
    pUVar2 = (UnityAction *)0x0;
    if (pUVar1->klass == TypeInfo__UnityEngine__Events__UnityAction) {
      pUVar2 = pUVar1;
    }
    if (pUVar2 == (UnityAction *)0x0) {
      FUN_?(pUVar1,TypeInfo__UnityEngine__Events__UnityAction);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (iRam_? != 0) {
    uVar4 = (uint)((ulonglong)TypeInfo__LevelingManager->static_fields >> 0xc);
    puVar5 = (ulonglong *)((ulonglong)((uVar4 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar6 = *puVar5;
      LOCK();
      uVar7 = *puVar5;
      if (uVar6 == uVar7) {
        *puVar5 = uVar6 | 1L << (ulonglong)(uVar4 & 0x3f);
      }
      UNLOCK();
    } while (uVar6 != uVar7);
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>,0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__BadgeManager);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__LevelRequirementPanel__StreamingAssetCallback_UnityEngine__Networking__UnityWebRequest_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields).desiredLevel != (this->fields).prevLevel) {
    level = (this->fields).desiredLevel;
    (this->fields).prevLevel = level;
    this_01 = (UnityAction_1_System_Object_ *)
              FUN_?(TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
    UnityAction_1_System_Object___ctor
              (this_01,(Object *)this,
               MethodInfo__LevelRequirementPanel__StreamingAssetCallback_UnityEngine__Networking__UnityWebRequest_
               ,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__BadgeManager->_1).field_0x1c == 0) {
      FUN_?();
    }
    BadgeManager::BadgeManager_GetBadgeTexture
              (level,(Action_1_UnityEngine_Networking_UnityWebRequest_ *)this_01,(MethodInfo *)0x0);
  }
  return;
}


/* Void SetLevelBadge() */

void Assembly-CSharp.dll::LevelRequirementPanel::LevelRequirementPanel_SetLevelBadge
               (LevelRequirementPanel *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__BadgeManager);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__LevelRequirementPanel__StreamingAssetCallback_UnityEngine__Networking__UnityWebRequest_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields).desiredLevel != (this->fields).prevLevel) {
    level = (this->fields).desiredLevel;
    (this->fields).prevLevel = level;
    this_00 = (UnityAction_1_System_Object_ *)
              FUN_?(TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
    UnityAction_1_System_Object___ctor
              (this_00,(Object *)this,
               MethodInfo__LevelRequirementPanel__StreamingAssetCallback_UnityEngine__Networking__UnityWebRequest_
               ,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__BadgeManager->_1).field_0x1c == 0) {
      FUN_?();
    }
    BadgeManager::BadgeManager_GetBadgeTexture
              (level,(Action_1_UnityEngine_Networking_UnityWebRequest_ *)this_00,(MethodInfo *)0x0);
  }
  return;
}


/* Void SetLevelSpriteFromCallback(Int32) */

void Assembly-CSharp.dll::LevelRequirementPanel::LevelRequirementPanel_SetLevelSpriteFromCallback
               (LevelRequirementPanel *this,int32_t level,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__LevelRequirementPanel__OnLevelingIsReady__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__LevelingManager);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Events__UnityAction);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  (this->fields).desiredLevel = level;
  if (*(int *)&(TypeInfo__LevelingManager->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__LevelingManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__LevelingManager->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (TypeInfo__LevelingManager->static_fields->_IsInitialized_k__BackingField == 0) {
    if (*(int *)&(TypeInfo__LevelingManager->_1).field_0x1c == 0) {
      FUN_?();
    }
    pUVar1 = TypeInfo__LevelingManager->static_fields->OnLevelingInitialized;
    this_00 = (NavMesh_OnNavMeshPreUpdate *)
              FUN_?(TypeInfo__UnityEngine__Events__UnityAction);
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (this_00,(Object *)this,MethodInfo__LevelRequirementPanel__OnLevelingIsReady__,
               (MethodInfo *)0x0);
    pUVar1 = (UnityAction *)
             mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)pUVar1,(Delegate *)this_00,(MethodInfo *)0x0);
    if (pUVar1 == (UnityAction *)0x0) {
      TypeInfo__LevelingManager->static_fields->OnLevelingInitialized = (UnityAction *)0x0;
    }
    else {
      pUVar2 = (UnityAction *)0x0;
      if (pUVar1->klass == TypeInfo__UnityEngine__Events__UnityAction) {
        pUVar2 = pUVar1;
      }
      if (pUVar2 == (UnityAction *)0x0) {
        FUN_?(pUVar1,TypeInfo__UnityEngine__Events__UnityAction);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      TypeInfo__LevelingManager->static_fields->OnLevelingInitialized = pUVar2;
      pUVar2 = (UnityAction *)0x0;
      if (pUVar1->klass == TypeInfo__UnityEngine__Events__UnityAction) {
        pUVar2 = pUVar1;
      }
      if (pUVar2 == (UnityAction *)0x0) {
        FUN_?(pUVar1,TypeInfo__UnityEngine__Events__UnityAction);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    if (iRam_? != 0) {
      uVar4 = (uint)((ulonglong)TypeInfo__LevelingManager->static_fields >> 0xc);
      puVar5 = (ulonglong *)((ulonglong)((uVar4 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar6 = *puVar5;
        LOCK();
        uVar7 = *puVar5;
        if (uVar6 == uVar7) {
          *puVar5 = uVar6 | 1L << (uVar4 & 0x3f);
        }
        UNLOCK();
      } while (uVar6 != uVar7);
      return;
    }
  }
  else {
    LevelRequirementPanel_SetLevelBadge(this,(MethodInfo *)0x0);
  }
  return;
}


/* Void StreamingAssetCallback(UnityWebRequest) */

void Assembly-CSharp.dll::LevelRequirementPanel::LevelRequirementPanel_StreamingAssetCallback
               (LevelRequirementPanel *this,UnityWebRequest *www,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  UnityEngine__Networking__DownloadHandlerTexture_MethodInfo__UnityEngine__Networking__DownloadHandler__GetCheckedDownloader<UnityEngine::Networking::DownloadHandlerTexture>_UnityEngine__Networking__UnityWebRequest_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (DownloadHandlerTexture *)
            UnityEngine.UnityWebRequestModule.dll::UnityEngine::Networking::DownloadHandler::
            DownloadHandler_GetCheckedDownloader
                      (www,
                       UnityEngine__Networking__DownloadHandlerTexture_MethodInfo__UnityEngine__Networking__DownloadHandler__GetCheckedDownloader<UnityEngine::Networking::DownloadHandlerTexture>_UnityEngine__Networking__UnityWebRequest_
                      );
  if (this_00 != (DownloadHandlerTexture *)0x0) {
    pTVar1 = UnityEngine.UnityWebRequestTextureModule.dll::UnityEngine::Networking::
             DownloadHandlerTexture::DownloadHandlerTexture_InternalGetTextureNative
                       (this_00,(MethodInfo *)0x0);
    bVar2 = iRam_? != 0;
    (this->fields).levelRequirementTextureAsset = pTVar1;
    if (bVar2) {
      uVar3 = (uint)((ulonglong)&(this->fields).levelRequirementTextureAsset >> 0xc);
      puVar4 = (ulonglong *)((ulonglong)((uVar3 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar5 = *puVar4;
        LOCK();
        uVar6 = *puVar4;
        if (uVar5 == uVar6) {
          *puVar4 = uVar5 | 1L << (uVar3 & 0x3f);
        }
        UNLOCK();
      } while (uVar5 != uVar6);
    }
    pTVar1 = (this->fields).levelRequirementTextureAsset;
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Object);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Object);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (pTVar1 != (Texture2D *)0x0) {
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      if ((pTVar1->fields)._._.m_CachedPtr != (void *)0x0) {
        pRVar7 = (this->fields).levelRequirementImage;
        if (pRVar7 != (RawImage *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                    ((Behaviour *)pRVar7,1,(MethodInfo *)0x0);
          pRVar7 = (this->fields).levelRequirementImage;
          if (pRVar7 != (RawImage *)0x0) {
            UnityEngine.UI.dll::UnityEngine::UI::RawImage::RawImage_set_texture
                      (pRVar7,(Texture *)(this->fields).levelRequirementTextureAsset,
                       (MethodInfo *)0x0);
            return;
          }
        }
        goto code_?;
      }
    }
    return;
  }
code_?:
  FUN_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}

