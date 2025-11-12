
/* Void BadgeCallback(UnityWebRequest) */

void Assembly-CSharp.dll::NotificationLevelRequirementPanel::
     NotificationLevelRequirementPanel_BadgeCallback
               (NotificationLevelRequirementPanel *this,UnityWebRequest *www,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Failed_to_get__);
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
  this_01 = (DownloadHandlerTexture *)
            UnityEngine.UnityWebRequestModule.dll::UnityEngine::Networking::DownloadHandler::
            DownloadHandler_GetCheckedDownloader
                      (www,
                       UnityEngine__Networking__DownloadHandlerTexture_MethodInfo__UnityEngine__Networking__DownloadHandler__GetCheckedDownloader<UnityEngine::Networking::DownloadHandlerTexture>_UnityEngine__Networking__UnityWebRequest_
                      );
  if (this_01 != (DownloadHandlerTexture *)0x0) {
    pTVar1 = UnityEngine.UnityWebRequestTextureModule.dll::UnityEngine::Networking::
             DownloadHandlerTexture::DownloadHandlerTexture_InternalGetTextureNative
                       (this_01,(MethodInfo *)0x0);
    bVar2 = iRam_? != 0;
    (this->fields).badgeTextureAsset = pTVar1;
    if (bVar2) {
      uVar3 = (uint)((ulonglong)&(this->fields).badgeTextureAsset >> 0xc);
      uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
      do {
        uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
        puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
        LOCK();
        bVar2 = uVar5 == *puVar6;
        if (bVar2) {
          *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
        }
        UNLOCK();
      } while (!bVar2);
    }
    pTVar1 = (this->fields).badgeTextureAsset;
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
        this_00 = (this->fields).LevelImage;
        pTVar1 = (this->fields).badgeTextureAsset;
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__UnityEngine__Vector2);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        fVar7 = (TypeInfo__UnityEngine__Vector2->static_fields->zeroVector).x;
        fVar8 = (TypeInfo__UnityEngine__Vector2->static_fields->zeroVector).y;
        if (pTVar1 != (Texture2D *)0x0) {
          iVar9 = (*(pTVar1->klass->vtable).get_width.methodPtr)
                            (pTVar1,(pTVar1->klass->vtable).get_width.method);
          iVar10 = (*(pTVar1->klass->vtable).get_height.methodPtr)
                            (pTVar1,(pTVar1->klass->vtable).get_height.method);
          aRStack_11[0].m_Height = (float)iVar10;
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__UnityEngine__Vector2);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pivot.y = (TypeInfo__UnityEngine__Vector2->static_fields->oneVector).y * _UNK_?;
          pivot.x = (TypeInfo__UnityEngine__Vector2->static_fields->oneVector).x * _UNK_?;
          aRStack_11[0].m_XMin = fVar7;
          aRStack_11[0].m_YMin = fVar8;
          aRStack_11[0].m_Width = (float)iVar9;
          value = UnityEngine.CoreModule.dll::UnityEngine::Sprite::Sprite_Create_6
                            (pTVar1,aRStack_11,pivot,(MethodInfo *)0x0);
          if (this_00 != (Image *)0x0) {
            UnityEngine.UI.dll::UnityEngine::UI::Image::Image_set_sprite
                      (this_00,value,(MethodInfo *)0x0);
            return;
          }
        }
        goto code_?;
      }
    }
    if (www != (UnityWebRequest *)0x0) {
      pSVar12 = UnityEngine.UnityWebRequestModule.dll::UnityEngine::Networking::UnityWebRequest::
               UnityWebRequest_GetUrl(www,(MethodInfo *)0x0);
      pSVar12 = mscorlib.dll::System::String::String_Concat_4
                         (StringLiteral_Failed_to_get__,pSVar12,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                ((Object *)pSVar12,(MethodInfo *)0x0);
      return;
    }
  }
code_?:
  FUN_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* Sprite GetBadgeSprite(Texture2D) */

Sprite * Assembly-CSharp.dll::NotificationLevelRequirementPanel::
         NotificationLevelRequirementPanel_GetBadgeSprite
                   (NotificationLevelRequirementPanel *this,Texture2D *source,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector2);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  fVar1 = (TypeInfo__UnityEngine__Vector2->static_fields->zeroVector).x;
  fVar2 = (TypeInfo__UnityEngine__Vector2->static_fields->zeroVector).y;
  if (source != (Texture2D *)0x0) {
    iVar3 = (*(source->klass->vtable).get_width.methodPtr)
                      (source,(source->klass->vtable).get_width.method);
    iVar4 = (*(source->klass->vtable).get_height.methodPtr)
                      (source,(source->klass->vtable).get_height.method);
    aRStack_5[0].m_Height = (float)iVar4;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector2);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pivot.y = (TypeInfo__UnityEngine__Vector2->static_fields->oneVector).y * _UNK_?;
    pivot.x = (TypeInfo__UnityEngine__Vector2->static_fields->oneVector).x * _UNK_?;
    aRStack_5[0].m_XMin = fVar1;
    aRStack_5[0].m_YMin = fVar2;
    aRStack_5[0].m_Width = (float)iVar3;
    pSVar6 = UnityEngine.CoreModule.dll::UnityEngine::Sprite::Sprite_Create_6
                       (source,aRStack_5,pivot,(MethodInfo *)0x0);
    return pSVar6;
  }
  FUN_?();
  pcVar7 = (code *)swi(3);
  pSVar6 = (Sprite *)(*pcVar7)();
  return pSVar6;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::NotificationLevelRequirementPanel::
     NotificationLevelRequirementPanel_OnDestroy
               (NotificationLevelRequirementPanel *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__BadgeManager);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__NotificationLevelRequirementPanel__BadgeCallback_UnityEngine__Networking__UnityWebRequest_
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
             MethodInfo__NotificationLevelRequirementPanel__BadgeCallback_UnityEngine__Networking__UnityWebRequest_
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
  (this->fields).badgeTextureAsset = (Texture2D *)0x0;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).badgeTextureAsset >> 0xc);
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


/* Void OnToggleEnabled(Object, Sprite, Boolean) */

void Assembly-CSharp.dll::NotificationLevelRequirementPanel::
     NotificationLevelRequirementPanel_OnToggleEnabled
               (NotificationLevelRequirementPanel *this,Object *text,Sprite *checkmarkSprite,
               bool enabled,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__BadgeManager);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__LevelingManager);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__NotificationLevelRequirementPanel__BadgeCallback_UnityEngine__Networking__UnityWebRequest_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this->fields)._.checkmark;
  if (this_00 == (Image *)0x0) goto code_?;
  UnityEngine.UI.dll::UnityEngine::UI::Image::Image_set_sprite
            (this_00,checkmarkSprite,(MethodInfo *)0x0);
  pTVar1 = (this->fields)._.textField;
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
  if (pTVar1 != (Text *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((void *)(pTVar1->fields)._._._._._._._ != (void *)0x0) {
      pTVar1 = (this->fields)._.textField;
      if (text == (Object *)0x0) goto code_?;
      uVar2 = (*(text->klass->vtable).ToString.methodPtr)
                        (text,(text->klass->vtable).ToString.method);
      if (pTVar1 == (Text *)0x0) goto code_?;
      (*(pTVar1->klass->vtable).set_text.methodPtr)
                (pTVar1,uVar2,(pTVar1->klass->vtable).set_text.method);
    }
  }
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
  if (TypeInfo__LevelingManager->static_fields->_IsInitialized_k__BackingField != 0) {
    this_01 = (UnityAction_1_System_Object_ *)
              FUN_?(TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
    UnityAction_1_System_Object___ctor
              (this_01,(Object *)this,
               MethodInfo__NotificationLevelRequirementPanel__BadgeCallback_UnityEngine__Networking__UnityWebRequest_
               ,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__BadgeManager->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (text == (Object *)0x0) {
code_?:
      FUN_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if ((text->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
      FUN_?(text);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    BadgeManager::BadgeManager_GetBadgeTexture
              (*(int32_t *)&text[1].klass,
               (Action_1_UnityEngine_Networking_UnityWebRequest_ *)this_01,(MethodInfo *)0x0);
  }
  return;
}

