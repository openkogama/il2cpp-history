
/* Void BadgeCallback(UnityWebRequest) */

void Assembly-CSharp.dll::PlayerNotification::PlayerNotification_BadgeCallback
               (PlayerNotification *this,UnityWebRequest *www,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pTVar1 = UnityEngine.UnityWebRequestTextureModule.dll::UnityEngine::Networking::
           DownloadHandlerTexture::DownloadHandlerTexture_GetContent(www,(MethodInfo *)0x0);
  (this->fields).badgeTextureAsset = pTVar1;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)pTVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 == 0) {
    if (www != (UnityWebRequest *)0x0) {
      pSVar3 = UnityEngine.UnityWebRequestModule.dll::UnityEngine::Networking::UnityWebRequest::
               UnityWebRequest_GetUrl(www,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__String->_1).cctor_started == 0)) {
        func_?();
      }
      pSVar3 = mscorlib.dll::System::String::String_Concat_2
                         (StringLiteral_Failed_to_get__,pSVar3,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
        _puStack_10 = CONCAT44(&UNK_?,puStack_4);
        func_?();
      }
      _puStack_10 = CONCAT44(pSVar3,&UNK_?);
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                ((Object *)pSVar3,(MethodInfo *)0x0);
      return;
    }
  }
  else {
    this_00 = (this->fields).BadgeImage;
    pTVar1 = (this->fields).badgeTextureAsset;
    if ((((uint)(TypeInfo__UnityEngine__Vector2->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Vector2->_1).cctor_started == 0)) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Vector2::Vector2_get_zero((MethodInfo *)0x0);
    pTVar5 = (this->fields).badgeTextureAsset;
    if (pTVar5 != (Texture2D *)0x0) {
      iVar6 = (*(code *)(pTVar5->klass->vtable).get_width.method)();
      pTVar5 = (this->fields).badgeTextureAsset;
      if (pTVar5 != (Texture2D *)0x0) {
        (*(code *)(pTVar5->klass->vtable).get_height.method)();
        _puStack_10 = 0;
        func_?(&puStack_4,(float)iVar6);
        uVar7 = 0;
        uVar8 = 0;
        uVar9 = 0;
        fVar10 = 0.0;
        func_?();
        VVar11 = UnityEngine.CoreModule.dll::UnityEngine::Vector2::Vector2_get_one((MethodInfo *)0x0)
        ;
        VVar11 = UnityEngine.CoreModule.dll::UnityEngine::Vector2::Vector2_op_Division_1
                          (VVar11,2.0,(MethodInfo *)0x0);
        rect.m_YMin = (float)uVar8;
        rect.m_XMin = (float)uVar7;
        rect.m_Width = (float)uVar9;
        rect.m_Height = fVar10;
        value = UnityEngine.CoreModule.dll::UnityEngine::Sprite::Sprite_Create_5
                          (pTVar1,rect,VVar11,(MethodInfo *)0x0);
        if (this_00 != (Image *)0x0) {
          UnityEngine.UI.dll::UnityEngine::UI::Image::Image_set_sprite
                    (this_00,value,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  func_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void Initialize(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::PlayerNotification::PlayerNotification_Initialize
               (PlayerNotification *this,Dictionary_2_System_Object_System_Object_ *data,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = data;
  Notification::Notification_Initialize((Notification *)this,data,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_01 = (MVAvatar *)MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (this_01 != (MVAvatar *)0x0) {
    this_02 = MVAvatar::MVAvatar_get_Shield(this_01,(MethodInfo *)0x0);
    data = (Dictionary_2_System_Object_System_Object_ *)CONCAT13(9,data._0_3_);
    key = (Type *)func_?(TypeInfo__System__Byte,(int)&data + 3);
    if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
      pPVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
               Dictionary_2_System_Type_Pool__get_Item
                         ((Dictionary_2_System_Type_Pool_ *)this_00,key,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         );
      if ((this_02 != (MVRuntimeDataVariableClampedFloat *)0x0) && (pPVar1 != (Pool *)0x0)) {
        if ((pPVar1->klass->_0).element_class == (TypeInfo__System__Int32->_0).element_class) {
          piVar2 = (int32_t *)func_?(pPVar1);
          pMVar3 = MVPlayerContainer::MVPlayerContainer_get_Item
                             ((MVPlayerContainer *)this_02,*piVar2,(MethodInfo *)0x0);
          (this->fields).player = pMVar3;
          if (pMVar3 != (MVPlayer *)0x0) {
            pOVar4 = System.dll::System::Collections::Generic::
                     SortedList`2[TKey,TValue]+ListValues[TKey,TValue]+GetEnumerator>c__Iterator3[System
                     ::Single,System::Object]::
                     SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object__System_Collections_IEnumerator_get_Current
                               ((SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
                                 *)pMVar3,(MethodInfo *)0x0);
            pRVar5 = (this->fields).PrestigiousPlayerFrame;
            if ((int)pOVar4 < 0x19) {
              if (pRVar5 == (RectTransform *)0x0) goto code_?;
              pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                       Component_1_get_gameObject((Component_1 *)pRVar5,(MethodInfo *)0x0);
              if (pGVar6 == (GameObject *)0x0) goto code_?;
              iVar7 = 2;
              data = (Dictionary_2_System_Object_System_Object_ *)((uint)data & 0xffffff00);
            }
            else {
              if (pRVar5 == (RectTransform *)0x0) goto code_?;
              pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                       Component_1_get_gameObject((Component_1 *)pRVar5,(MethodInfo *)0x0);
              if (pGVar6 == (GameObject *)0x0) goto code_?;
              iVar7 = 8;
              data = (Dictionary_2_System_Object_System_Object_ *)CONCAT31(data._1_3_,1);
            }
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                      (pGVar6,(bool)data,(MethodInfo *)0x0);
            (this->fields).lifeTime = iVar7;
            if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0)
               && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
              func_?();
            }
            this_03 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
            if (this_03 != (MVNetworkGame *)0x0) {
              data = (Dictionary_2_System_Object_System_Object_ *)0x0;
              this_04 = CloudyThemeBase::CloudyThemeBase_get_Skybox
                                  ((CloudyThemeBase *)this_03,(MethodInfo *)0x0);
              pMVar3 = (this->fields).player;
              if (pMVar3 != (MVPlayer *)0x0) {
                data = (Dictionary_2_System_Object_System_Object_ *)&UNK_?;
                method = (MethodInfo *)pMVar3;
                pOVar4 = UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::
                         TweenRunner`1[T]+<Start>c__Iterator0[FloatTween]::
                         TweenRunner_1_T_Start_c_Iterator0_FloatTween__System_Collections_IEnumerator_get_Current
                                   ((TweenRunner_1_T_Start_c_Iterator0_FloatTween_ *)pMVar3,
                                    (MethodInfo *)0x0);
                if (this_04 != (ThemeSkybox *)0x0) {
                  method = (MethodInfo *)&UNK_?;
                  pFVar8 = FriendList::FriendList_GetFriendByProfileID
                                     ((FriendList *)this_04,(int32_t)pOVar4,(MethodInfo *)0x0);
                  if ((pFVar8 != (Friend *)0x0) && ((pFVar8->fields).status == 2)) {
                    pRVar5 = (this->fields).PrestigiousPlayerFrame;
                    if (pRVar5 == (RectTransform *)0x0) goto code_?;
                    pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                             Component_1_get_gameObject((Component_1 *)pRVar5,(MethodInfo *)0x0);
                    if (pGVar6 == (GameObject *)0x0) goto code_?;
                    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                              (pGVar6,0,(MethodInfo *)0x0);
                    pRVar5 = (this->fields).FriendPlayerFrame;
                    if (pRVar5 == (RectTransform *)0x0) goto code_?;
                    pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                             Component_1_get_gameObject((Component_1 *)pRVar5,(MethodInfo *)0x0);
                    if (pGVar6 == (GameObject *)0x0) goto code_?;
                    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                              (pGVar6,1,(MethodInfo *)0x0);
                    (this->fields).lifeTime = 8;
                  }
                  if ((((uint)(TypeInfo__LevelingManager->vtable).Equals.methodPtr & 0x2000000) != 0
                      ) && ((TypeInfo__LevelingManager->_1).cctor_started == 0)) {
                    func_?();
                  }
                  bVar9 = LevelingManager::LevelingManager_get_IsInitialized((MethodInfo *)0x0);
                  if (bVar9 != 0) {
                    pMVar3 = (this->fields).player;
                    if (pMVar3 == (MVPlayer *)0x0) goto code_?;
                    pOVar4 = System.dll::System::Collections::Generic::
                             SortedList`2[TKey,TValue]+ListValues[TKey,TValue]+GetEnumerator>c__Iterator3[System
                             ::Single,System::Object]::
                             SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object__System_Collections_IEnumerator_get_Current
                                       ((SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
                                         *)pMVar3,(MethodInfo *)0x0);
                    this_05 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                               *)func_?();
                    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
                    SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
                    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                              (this_05,(Object *)this,
                               MethodInfo__PlayerNotification__BadgeCallback_UnityEngine__Networking__UnityWebRequest_
                               ,
                               MethodInfo__System__Action<UnityEngine::Networking::UnityWebRequest>__Action_System__Object__void__
                              );
                    if ((((uint)(TypeInfo__BadgeManager->vtable).Equals.methodPtr & 0x2000000) != 0)
                       && ((TypeInfo__BadgeManager->_1).cctor_started == 0)) {
                      func_?();
                    }
                    BadgeManager::BadgeManager_GetBadgeTexture
                              ((int32_t)pOVar4,
                               (Action_1_UnityEngine_Networking_UnityWebRequest_ *)this_05,
                               (MethodInfo *)0x0);
                  }
                  return;
                }
              }
            }
          }
        }
        else {
          func_?(pPVar1,TypeInfo__System__Int32);
        }
      }
    }
  }
code_?:
  func_?(0);
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::PlayerNotification::PlayerNotification_OnDestroy
               (PlayerNotification *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
            func_?(TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (this_00,(Object *)this,
             MethodInfo__PlayerNotification__BadgeCallback_UnityEngine__Networking__UnityWebRequest_
             ,
             MethodInfo__System__Action<UnityEngine::Networking::UnityWebRequest>__Action_System__Object__void__
            );
  if ((((uint)(TypeInfo__BadgeManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__BadgeManager->_1).cctor_started == 0)) {
    func_?();
  }
  BadgeManager::BadgeManager_UnsubscribeGetBadgeRequest
            ((Action_1_UnityEngine_Networking_UnityWebRequest_ *)this_00,(MethodInfo *)0x0);
  (this->fields).badgeTextureAsset = (Texture2D *)0x0;
  return;
}


/* PlayerNotification() */

void Assembly-CSharp.dll::PlayerNotification::PlayerNotification__ctor
               (PlayerNotification *this,MethodInfo *method)

{
  (this->fields).lifeTime = 2;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  return;
}

