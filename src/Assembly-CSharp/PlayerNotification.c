
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
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                ((Object *)pSVar3,(MethodInfo *)0x0);
      return;
    }
  }
  else {
    this_00 = (this->fields).BadgeImage;
    pTVar1 = (this->fields).badgeTextureAsset;
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    x = (TypeInfo__UnityEngine__Vector2->static_fields->zeroVector).x;
    y = (TypeInfo__UnityEngine__Vector2->static_fields->zeroVector).y;
    pTVar4 = (this->fields).badgeTextureAsset;
    if (pTVar4 != (Texture2D *)0x0) {
      iVar5 = (*(pTVar4->klass->vtable).get_width.methodPtr)();
      pTVar4 = (this->fields).badgeTextureAsset;
      if (pTVar4 != (Texture2D *)0x0) {
        z = (float)iVar5;
        iVar5 = (*(pTVar4->klass->vtable).get_height.methodPtr)();
        fVar6 = 0.0;
        fVar7 = 0.0;
        UnityEngine.CoreModule.dll::UnityEngine::Vector4::Vector4__ctor
                  ((Vector4 *)&stack0xffffffdc,x,y,z,(float)iVar5,(MethodInfo *)0x0);
        if (cRam_? == '\0') {
          func_?(&TypeInfo__UnityEngine__Vector2);
          cRam_? = '\x01';
        }
        rect.m_YMin = fVar7;
        rect.m_XMin = fVar6;
        rect.m_Width = 0.0;
        rect.m_Height = 0.0;
        pivot.y = (TypeInfo__UnityEngine__Vector2->static_fields->oneVector).y * _UNK_?;
        pivot.x = (TypeInfo__UnityEngine__Vector2->static_fields->oneVector).x * _UNK_?;
        value = UnityEngine.CoreModule.dll::UnityEngine::Sprite::Sprite_Create_5
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
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
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
    pOVar2 = (Object *)func_?(TypeInfo__System__Byte,(int)&this + 3);
    if (((data != (Dictionary_2_System_Object_System_Object_ *)0x0) &&
        (pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                  Object]::Dictionary_2_System_Object_System_Object__get_Item
                            (data,pOVar2,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                            ), this_00 != (MVPlayerContainer *)0x0)) && (pOVar2 != (Object *)0x0)) {
      if ((pOVar2->klass->_0).element_class == (TypeInfo__System__Int32->_0).element_class) {
        piVar3 = (int32_t *)func_?(pOVar2);
        pMVar4 = MVPlayerContainer::MVPlayerContainer_get_Item(this_00,*piVar3,(MethodInfo *)0x0);
        (object->fields).player = pMVar4;
        func_?(&(object->fields).player,pMVar4);
        pMVar4 = (object->fields).player;
        if (pMVar4 != (MVPlayer *)0x0) {
          pRVar5 = (object->fields).PrestigiousPlayerFrame;
          if ((pMVar4->fields).level < 0x19) {
            if ((pRVar5 == (RectTransform *)0x0) ||
               (pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                         Component_get_gameObject((Component *)pRVar5,(MethodInfo *)0x0),
               pGVar6 == (GameObject *)0x0)) goto code_?;
            iVar7 = 2;
            this = (PlayerNotification *)((uint)this & 0xffffff00);
          }
          else {
            if ((pRVar5 == (RectTransform *)0x0) ||
               (pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                         Component_get_gameObject((Component *)pRVar5,(MethodInfo *)0x0),
               pGVar6 == (GameObject *)0x0)) goto code_?;
            iVar7 = 8;
            this = (PlayerNotification *)CONCAT31(this._1_3_,1);
          }
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar6,(bool)this,(MethodInfo *)0x0);
          (object->fields).lifeTime = iVar7;
          pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          if (((pMVar1 != (MVNetworkGame *)0x0) &&
              (pMVar4 = (object->fields).player, pMVar4 != (MVPlayer *)0x0)) &&
             (this_01 = (pMVar1->fields)._Friends_k__BackingField, this_01 != (FriendList *)0x0)) {
            this = (PlayerNotification *)0x0;
            pFVar8 = FriendList::FriendList_GetFriendByProfileID
                               (this_01,(pMVar4->fields)._ProfileID_k__BackingField,
                                (MethodInfo *)0x0);
            if ((pFVar8 != (Friend *)0x0) && ((pFVar8->fields).status == 2)) {
              this_02 = (MethodInfo *)(object->fields).PrestigiousPlayerFrame;
              if (this_02 == (MethodInfo *)0x0) goto code_?;
              data = (Dictionary_2_System_Object_System_Object_ *)&UNK_?;
              method = this_02;
              pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                 ((Component *)this_02,(MethodInfo *)0x0);
              if (pGVar6 == (GameObject *)0x0) goto code_?;
              method = (MethodInfo *)&UNK_?;
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                        (pGVar6,0,(MethodInfo *)0x0);
              pRVar5 = (object->fields).FriendPlayerFrame;
              if ((pRVar5 == (RectTransform *)0x0) ||
                 (pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                           Component_get_gameObject((Component *)pRVar5,(MethodInfo *)0x0),
                 pGVar6 == (GameObject *)0x0)) goto code_?;
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                        (pGVar6,1,(MethodInfo *)0x0);
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
            if (TypeInfo__LevelingManager->static_fields->_IsInitialized_k__BackingField == 0) {
              return;
            }
            pMVar4 = (object->fields).player;
            if (pMVar4 != (MVPlayer *)0x0) {
              iVar7 = (pMVar4->fields).level;
              this_03 = (Action_1_Object_ *)
                        func_?(
                                       TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>
                                       );
              if (this_03 != (Action_1_Object_ *)0x0) {
                mscorlib.dll::System::Action`1[Object]::Action_1_Object___ctor
                          (this_03,(Object *)object,
                           MethodInfo__PlayerNotification__BadgeCallback_UnityEngine__Networking__UnityWebRequest_
                           ,(MethodInfo *)0x0);
                if ((TypeInfo__BadgeManager->_1).cctor_finished_or_no_cctor == 0) {
                  this = (PlayerNotification *)TypeInfo__BadgeManager;
                  func_?();
                }
                this = (PlayerNotification *)0x0;
                BadgeManager::BadgeManager_GetBadgeTexture
                          (iVar7,(Action_1_UnityEngine_Networking_UnityWebRequest_ *)this_03,
                           (MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
      else {
        func_?(pOVar2,TypeInfo__System__Int32);
      }
    }
  }
code_?:
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
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
  this_00 = (Action_1_Object_ *)
            func_?(TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
  if (this_00 != (Action_1_Object_ *)0x0) {
    mscorlib.dll::System::Action`1[Object]::Action_1_Object___ctor
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
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
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

