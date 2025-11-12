
/* Void BadgeCallback(UnityWebRequest) */

void Assembly-CSharp.dll::LevelUpNotification::LevelUpNotification_BadgeCallback
               (LevelUpNotification *this,UnityWebRequest *www,MethodInfo *method)

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
    (this->fields).textureAsset = pTVar1;
    if (bVar2) {
      uVar3 = (uint)((ulonglong)&(this->fields).textureAsset >> 0xc);
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
    pTVar1 = (this->fields).textureAsset;
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
        this_00 = (this->fields).Icon;
        pTVar1 = (this->fields).textureAsset;
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__UnityEngine__Vector2);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        fVar7 = (TypeInfo__UnityEngine__Vector2->static_fields->zeroVector).x;
        fVar8 = (TypeInfo__UnityEngine__Vector2->static_fields->zeroVector).y;
        pTVar9 = (this->fields).textureAsset;
        if (pTVar9 != (Texture2D *)0x0) {
          iVar10 = (*(pTVar9->klass->vtable).get_width.methodPtr)
                            (pTVar9,(pTVar9->klass->vtable).get_width.method);
          pTVar9 = (this->fields).textureAsset;
          if (pTVar9 != (Texture2D *)0x0) {
            iVar11 = (*(pTVar9->klass->vtable).get_height.methodPtr)
                              (pTVar9,(pTVar9->klass->vtable).get_height.method);
            aRStack_12[0].m_Height = (float)iVar11;
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__UnityEngine__Vector2);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pivot.y = (TypeInfo__UnityEngine__Vector2->static_fields->oneVector).y * _UNK_?;
            pivot.x = (TypeInfo__UnityEngine__Vector2->static_fields->oneVector).x * _UNK_?;
            aRStack_12[0].m_XMin = fVar7;
            aRStack_12[0].m_YMin = fVar8;
            aRStack_12[0].m_Width = (float)iVar10;
            value = UnityEngine.CoreModule.dll::UnityEngine::Sprite::Sprite_Create_6
                              (pTVar1,aRStack_12,pivot,(MethodInfo *)0x0);
            if (this_00 != (Image *)0x0) {
              UnityEngine.UI.dll::UnityEngine::UI::Image::Image_set_sprite
                        (this_00,value,(MethodInfo *)0x0);
              return;
            }
          }
        }
        goto code_?;
      }
    }
    if (www != (UnityWebRequest *)0x0) {
      pSVar13 = UnityEngine.UnityWebRequestModule.dll::UnityEngine::Networking::UnityWebRequest::
                UnityWebRequest_GetUrl(www,(MethodInfo *)0x0);
      pSVar13 = mscorlib.dll::System::String::String_Concat_4
                          (StringLiteral_Failed_to_get__,pSVar13,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                ((Object *)pSVar13,(MethodInfo *)0x0);
      return;
    }
  }
code_?:
  FUN_?();
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}


/* Void Initialize(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::LevelUpNotification::LevelUpNotification_Initialize
               (LevelUpNotification *this,Dictionary_2_System_Object_System_Object_ *data,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__BadgeManager);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__LevelUpNotification__BadgeCallback_UnityEngine__Networking__UnityWebRequest_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__LevelingManager);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Level_Up_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
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
    auStackX_20[0] = 4;
    pOVar1 = (Object *)FUN_?(uRam_?,auStackX_20);
    if (data == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
    pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
             ::Dictionary_2_System_Object_System_Object__get_Item
                       (data,pOVar1,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    this_01 = (UnityAction_1_System_Object_ *)
              FUN_?(TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
    UnityAction_1_System_Object___ctor
              (this_01,(Object *)this,
               MethodInfo__LevelUpNotification__BadgeCallback_UnityEngine__Networking__UnityWebRequest_
               ,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__BadgeManager->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (pOVar1 == (Object *)0x0) goto code_?;
    if ((pOVar1->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
      FUN_?(pOVar1);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    BadgeManager::BadgeManager_GetBadgeTexture
              (*(int32_t *)&pOVar1[1].klass,
               (Action_1_UnityEngine_Networking_UnityWebRequest_ *)this_01,(MethodInfo *)0x0);
  }
  pTVar3 = (this->fields).label;
  pSVar4 = TM::TM__(StringLiteral_Level_Up_,(MethodInfo *)0x0);
  if (pTVar3 != (Text *)0x0) {
    (*(pTVar3->klass->vtable).set_text.methodPtr)
              (pTVar3,pSVar4,(pTVar3->klass->vtable).set_text.method);
    this_00 = (this->fields).tertiaryNotificationUI;
    l = (*(this->klass->vtable).get_Lifetime.methodPtr)
                  (this,(this->klass->vtable).get_Lifetime.method);
    if (this_00 != (TertiaryNotificationUI *)0x0) {
      TertiaryNotificationUI::TertiaryNotificationUI_Initialize
                (this_00,(Notification *)this,l,1,(MethodInfo *)0x0);
      return;
    }
  }
code_?:
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::LevelUpNotification::LevelUpNotification_OnDestroy
               (LevelUpNotification *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__BadgeManager);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__LevelUpNotification__BadgeCallback_UnityEngine__Networking__UnityWebRequest_
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
             MethodInfo__LevelUpNotification__BadgeCallback_UnityEngine__Networking__UnityWebRequest_
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
  (this->fields).textureAsset = (Texture2D *)0x0;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).textureAsset >> 0xc);
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

