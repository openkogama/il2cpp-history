
/* Void BadgeCallback(UnityWebRequest) */

void Assembly-CSharp.dll::PlayerNotification::PlayerNotification_BadgeCallback
               (PlayerNotification *this,UnityWebRequest *www,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&StringLiteral_Failed_to_get__);
    cRam_? = '\x01';
  }
  pTVar1 = UnityEngine.UnityWebRequestTextureModule.dll::UnityEngine::Networking::
           DownloadHandlerTexture::DownloadHandlerTexture_GetContent(www,(MethodInfo *)0x0);
  ppTVar2 = &(this->fields).badgeTextureAsset;
  *ppTVar2 = pTVar1;
  func_?(ppTVar2,pTVar1);
  pTVar1 = *ppTVar2;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)pTVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar3 == 0) {
    if (www != (UnityWebRequest *)0x0) {
      pSVar4 = UnityEngine.UnityWebRequestModule.dll::UnityEngine::Networking::UnityWebRequest::
               UnityWebRequest_GetUrl(www,(MethodInfo *)0x0);
      pSVar4 = mscorlib.dll::System::String::String_Concat_3
                         (StringLiteral_Failed_to_get__,pSVar4,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Debug);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                ((Object *)pSVar4,(MethodInfo *)0x0);
      return;
    }
  }
  else {
    pTVar1 = *ppTVar2;
    this_00 = (this->fields).BadgeImage;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Vector2);
      cRam_? = '\x01';
    }
    fVar5 = (TypeInfo__UnityEngine__Vector2->static_fields->zeroVector).x;
    fVar6 = (TypeInfo__UnityEngine__Vector2->static_fields->zeroVector).y;
    pTVar7 = *ppTVar2;
    if (pTVar7 != (Texture2D *)0x0) {
      iVar8 = (*(code *)(pTVar7->klass->vtable).get_width.method)
                        (pTVar7,(pTVar7->klass->vtable).set_width.methodPtr);
      pTVar7 = *ppTVar2;
      if (pTVar7 != (Texture2D *)0x0) {
        iVar9 = (*(code *)(pTVar7->klass->vtable).get_height.method)
                          (pTVar7,(pTVar7->klass->vtable).set_height.methodPtr);
        if (cRam_? == '\0') {
          func_?(&TypeInfo__UnityEngine__Vector2);
          cRam_? = '\x01';
        }
        rect.m_YMin = fVar6;
        rect.m_XMin = fVar5;
        rect.m_Width = (float)iVar8;
        rect.m_Height = (float)iVar9;
        pivot.y = (TypeInfo__UnityEngine__Vector2->static_fields->oneVector).y * _UNK_?;
        pivot.x = (TypeInfo__UnityEngine__Vector2->static_fields->oneVector).x * _UNK_?;
        value = UnityEngine.CoreModule.dll::UnityEngine::Sprite::Sprite_Create_6
                          (pTVar1,rect,pivot,(MethodInfo *)0x0);
        if (this_00 != (Image *)0x0) {
          UnityEngine.UI.dll::UnityEngine::UI::Image::Image_set_sprite
                    (this_00,value,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void Initialize(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::PlayerNotification::PlayerNotification_Initialize
               (PlayerNotification *this,Dictionary_2_System_Object_System_Object_ *data,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
    func_?(&TypeInfo__BadgeManager);
    func_?(&TypeInfo__System__Byte);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__LevelingManager);
    func_?(&
                    MethodInfo__PlayerNotification__BadgeCallback_UnityEngine__Networking__UnityWebRequest_
                   );
    cRam_? = '\x01';
  }
  object = this;
  (this->fields)._.timeSinceStart = 0.0;
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (pMVar1 != (MVNetworkGame *)0x0) {
    this_00 = (pMVar1->fields).playerContainer;
    this = (PlayerNotification *)CONCAT13(9,this._0_3_);
    key = (Object *)func_?(TypeInfo__System__Byte,(int)&this + 3);
    if (data != (Dictionary_2_System_Object_System_Object_ *)0x0) {
      TVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
              UIElements::TextureId]::
              Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                        ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)data,key,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                        );
      if ((this_00 != (MVPlayerContainer *)0x0) && (TVar2.m_Index != 0)) {
        if (*(Il2CppClass **)(*(int *)TVar2.m_Index + 0x20) ==
            (TypeInfo__System__Int32->_0).element_class) {
          piVar3 = (int32_t *)func_?(TVar2.m_Index);
          pMVar4 = MVPlayerContainer::MVPlayerContainer_get_Item(this_00,*piVar3,(MethodInfo *)0x0);
          ppMVar5 = &(object->fields).player;
          *ppMVar5 = pMVar4;
          func_?(ppMVar5,pMVar4);
          if (*ppMVar5 != (MVPlayer *)0x0) {
            pRVar6 = (object->fields).PrestigiousPlayerFrame;
            if (((*ppMVar5)->fields).level < 0x19) {
              if (pRVar6 == (RectTransform *)0x0) goto code_?;
              pGVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                 ((Component *)pRVar6,(MethodInfo *)0x0);
              if (pGVar7 == (GameObject *)0x0) goto code_?;
              iVar8 = 2;
              this = (PlayerNotification *)((uint)this & 0xffffff00);
            }
            else {
              if (pRVar6 == (RectTransform *)0x0) goto code_?;
              pGVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                 ((Component *)pRVar6,(MethodInfo *)0x0);
              if (pGVar7 == (GameObject *)0x0) goto code_?;
              iVar8 = 8;
              this = (PlayerNotification *)CONCAT31(this._1_3_,1);
            }
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                      (pGVar7,(bool)this,(MethodInfo *)0x0);
            (object->fields).lifeTime = iVar8;
            pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
            if (((pMVar1 != (MVNetworkGame *)0x0) && (*ppMVar5 != (MVPlayer *)0x0)) &&
               (this_01 = (pMVar1->fields)._Friends_k__BackingField, this_01 != (FriendList *)0x0))
            {
              pFVar9 = FriendList::FriendList_GetFriendByProfileID
                                 (this_01,((*ppMVar5)->fields)._ProfileID_k__BackingField,
                                  (MethodInfo *)0x0);
              if ((pFVar9 != (Friend *)0x0) && ((pFVar9->fields).status == 2)) {
                this_02 = (Dictionary_2_System_Object_System_Object_ *)
                          (object->fields).PrestigiousPlayerFrame;
                if (this_02 == (Dictionary_2_System_Object_System_Object_ *)0x0)
                goto code_?;
                method = (MethodInfo *)0x0;
                this = (PlayerNotification *)&UNK_?;
                data = this_02;
                this_03 = (MethodInfo *)
                          UnityEngine.CoreModule.dll::UnityEngine::Component::
                          Component_get_gameObject((Component *)this_02,(MethodInfo *)0x0);
                if (this_03 == (MethodInfo *)0x0) goto code_?;
                data = (Dictionary_2_System_Object_System_Object_ *)&UNK_?;
                method = this_03;
                UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                          ((GameObject *)this_03,0,(MethodInfo *)0x0);
                pRVar6 = (object->fields).FriendPlayerFrame;
                if (pRVar6 == (RectTransform *)0x0) goto code_?;
                pGVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                         Component_get_gameObject((Component *)pRVar6,(MethodInfo *)0x0);
                if (pGVar7 == (GameObject *)0x0) goto code_?;
                UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                          (pGVar7,1,(MethodInfo *)0x0);
                (object->fields).lifeTime = 8;
              }
              if ((TypeInfo__LevelingManager->_1).cctor_finished_or_no_cctor == 0) {
                func_?();
              }
              if (cRam_? == '\0') {
                func_?();
                cRam_? = '\x01';
              }
              if ((TypeInfo__LevelingManager->_1).cctor_finished_or_no_cctor == 0) {
                func_?();
              }
              if (TypeInfo__LevelingManager->static_fields->_IsInitialized_k__BackingField != 0) {
                if (*ppMVar5 == (MVPlayer *)0x0) goto code_?;
                iVar8 = ((*ppMVar5)->fields).level;
                this_04 = (DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                           *)func_?(
                                            TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>
                                            );
                DictionaryWithChangeEvent`2[TKey,TValue]+OnDictionaryChangeDelegate[Unity::IL2CPP::
                Metadata::__Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata::
                __Il2CppFullySharedGenericType]::
                DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
                          (this_04,(Object *)object,
                           MethodInfo__PlayerNotification__BadgeCallback_UnityEngine__Networking__UnityWebRequest_
                           ,(MethodInfo *)0x0);
                if ((TypeInfo__BadgeManager->_1).cctor_finished_or_no_cctor == 0) {
                  func_?();
                }
                BadgeManager::BadgeManager_GetBadgeTexture
                          (iVar8,(Action_1_UnityEngine_Networking_UnityWebRequest_ *)this_04,
                           (MethodInfo *)0x0);
              }
              return;
            }
          }
        }
        else {
          func_?(TVar2.m_Index,TypeInfo__System__Int32);
        }
      }
    }
  }
code_?:
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::PlayerNotification::PlayerNotification_OnDestroy
               (PlayerNotification *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
    func_?(&TypeInfo__BadgeManager);
    func_?(&
                    MethodInfo__PlayerNotification__BadgeCallback_UnityEngine__Networking__UnityWebRequest_
                   );
    cRam_? = '\x01';
  }
  this_00 = (DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
             *)func_?(TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
  DictionaryWithChangeEvent`2[TKey,TValue]+OnDictionaryChangeDelegate[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]::
  DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            (this_00,(Object *)this,
             MethodInfo__PlayerNotification__BadgeCallback_UnityEngine__Networking__UnityWebRequest_
             ,(MethodInfo *)0x0);
  if ((TypeInfo__BadgeManager->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  BadgeManager::BadgeManager_UnsubscribeGetBadgeRequest
            ((Action_1_UnityEngine_Networking_UnityWebRequest_ *)this_00,(MethodInfo *)0x0);
  (this->fields).badgeTextureAsset = (Texture2D *)0x0;
  func_?();
  return;
}


/* PlayerNotification() */

void Assembly-CSharp.dll::PlayerNotification::PlayerNotification__ctor
               (PlayerNotification *this,MethodInfo *method)

{
  (this->fields).lifeTime = 2;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  return;
}

