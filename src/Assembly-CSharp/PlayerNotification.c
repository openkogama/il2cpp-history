
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
  (this->fields).badgeTextureAsset = pTVar1;
  func_?(&(this->fields).badgeTextureAsset,pTVar1);
  pTVar1 = (this->fields).badgeTextureAsset;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)pTVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 == 0) {
    if (www != (UnityWebRequest *)0x0) {
      pSVar3 = UnityEngine.UnityWebRequestModule.dll::UnityEngine::Networking::UnityWebRequest::
               UnityWebRequest_GetUrl(www,(MethodInfo *)0x0);
      pSVar3 = mscorlib.dll::System::String::String_Concat_3
                         (StringLiteral_Failed_to_get__,pSVar3,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Debug);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                ((Object *)pSVar3,(MethodInfo *)0x0);
      return;
    }
  }
  else {
    this_00 = (this->fields).BadgeImage;
    pTVar1 = (this->fields).badgeTextureAsset;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Vector2);
      cRam_? = '\x01';
    }
    fVar4 = (TypeInfo__UnityEngine__Vector2->static_fields->zeroVector).x;
    fVar5 = (TypeInfo__UnityEngine__Vector2->static_fields->zeroVector).y;
    pTVar6 = (this->fields).badgeTextureAsset;
    if (pTVar6 != (Texture2D *)0x0) {
      iVar7 = (*(code *)(pTVar6->klass->vtable).get_width.method)
                        (pTVar6,(pTVar6->klass->vtable).set_width.methodPtr);
      pTVar6 = (this->fields).badgeTextureAsset;
      if (pTVar6 != (Texture2D *)0x0) {
        iVar8 = (*(code *)(pTVar6->klass->vtable).get_height.method)
                          (pTVar6,(pTVar6->klass->vtable).set_height.methodPtr);
        if (cRam_? == '\0') {
          func_?(&TypeInfo__UnityEngine__Vector2);
          cRam_? = '\x01';
        }
        rect.m_YMin = fVar5;
        rect.m_XMin = fVar4;
        rect.m_Width = (float)iVar7;
        rect.m_Height = (float)iVar8;
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
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
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
  this_02 = data;
  Notification::Notification_Initialize((Notification *)this,data,(MethodInfo *)0x0);
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (pMVar1 != (MVNetworkGame *)0x0) {
    this_00 = (pMVar1->fields).playerContainer;
    data = (Dictionary_2_System_Object_System_Object_ *)CONCAT13(9,data._0_3_);
    key = (Object *)func_?(TypeInfo__System__Byte,(int)&data + 3);
    if (this_02 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
      TVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
              UIElements::TextureId]::
              Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                        ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)this_02,key
                         ,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                        );
      if ((this_00 != (MVPlayerContainer *)0x0) && (TVar2.m_Index != 0)) {
        if (*(Il2CppClass **)(*(int *)TVar2.m_Index + 0x20) ==
            (TypeInfo__System__Int32->_0).element_class) {
          piVar3 = (int32_t *)func_?(TVar2.m_Index);
          pMVar4 = MVPlayerContainer::MVPlayerContainer_get_Item(this_00,*piVar3,(MethodInfo *)0x0);
          (this->fields).player = pMVar4;
          func_?(&(this->fields).player,pMVar4);
          pMVar4 = (this->fields).player;
          if (pMVar4 != (MVPlayer *)0x0) {
            pRVar5 = (this->fields).PrestigiousPlayerFrame;
            if ((pMVar4->fields).level < 0x19) {
              if (pRVar5 == (RectTransform *)0x0) goto code_?;
              pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                 ((Component *)pRVar5,(MethodInfo *)0x0);
              if (pGVar6 == (GameObject *)0x0) goto code_?;
              iVar7 = 2;
              data = (Dictionary_2_System_Object_System_Object_ *)((uint)data & 0xffffff00);
            }
            else {
              if (pRVar5 == (RectTransform *)0x0) goto code_?;
              pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                 ((Component *)pRVar5,(MethodInfo *)0x0);
              if (pGVar6 == (GameObject *)0x0) goto code_?;
              iVar7 = 8;
              data = (Dictionary_2_System_Object_System_Object_ *)CONCAT31(data._1_3_,1);
            }
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                      (pGVar6,(bool)data,(MethodInfo *)0x0);
            (this->fields).lifeTime = iVar7;
            pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
            if (((pMVar1 != (MVNetworkGame *)0x0) &&
                (pMVar4 = (this->fields).player, pMVar4 != (MVPlayer *)0x0)) &&
               (this_01 = (pMVar1->fields)._Friends_k__BackingField, this_01 != (FriendList *)0x0))
            {
              method = (MethodInfo *)0x0;
              data = (Dictionary_2_System_Object_System_Object_ *)
                     (pMVar4->fields)._ProfileID_k__BackingField;
              pFVar8 = FriendList::FriendList_GetFriendByProfileID
                                 (this_01,(int32_t)data,(MethodInfo *)0x0);
              if ((pFVar8 != (Friend *)0x0) && ((pFVar8->fields).status == 2)) {
                pRVar5 = (this->fields).PrestigiousPlayerFrame;
                if (pRVar5 == (RectTransform *)0x0) goto code_?;
                in_stack_9 = &UNK_?;
                pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                         Component_get_gameObject((Component *)pRVar5,(MethodInfo *)0x0);
                if (pGVar6 == (GameObject *)0x0) goto code_?;
                UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                          (pGVar6,0,(MethodInfo *)0x0);
                pRVar5 = (this->fields).FriendPlayerFrame;
                if (pRVar5 == (RectTransform *)0x0) goto code_?;
                pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                         Component_get_gameObject((Component *)pRVar5,(MethodInfo *)0x0);
                if (pGVar6 == (GameObject *)0x0) goto code_?;
                UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                          (pGVar6,1,(MethodInfo *)0x0);
                (this->fields).lifeTime = 8;
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
                pMVar4 = (this->fields).player;
                if (pMVar4 == (MVPlayer *)0x0) goto code_?;
                iVar7 = (pMVar4->fields).level;
                this_03 = (DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                           *)func_?(
                                            TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>
                                            );
                DictionaryWithChangeEvent`2[TKey,TValue]+OnDictionaryChangeDelegate[Unity::IL2CPP::
                Metadata::__Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata::
                __Il2CppFullySharedGenericType]::
                DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
                          (this_03,(Object *)this,
                           MethodInfo__PlayerNotification__BadgeCallback_UnityEngine__Networking__UnityWebRequest_
                           ,(MethodInfo *)0x0);
                if ((TypeInfo__BadgeManager->_1).cctor_finished_or_no_cctor == 0) {
                  method = (MethodInfo *)TypeInfo__BadgeManager;
                  data = (Dictionary_2_System_Object_System_Object_ *)&UNK_?;
                  func_?();
                }
                method = (MethodInfo *)0x0;
                data = (Dictionary_2_System_Object_System_Object_ *)this_03;
                BadgeManager::BadgeManager_GetBadgeTexture
                          (iVar7,(Action_1_UnityEngine_Networking_UnityWebRequest_ *)this_03,
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
  func_?(&(this->fields).badgeTextureAsset);
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

