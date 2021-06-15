
/* Void Initialize() */

void Assembly-CSharp.dll::LevelProgressAccessoryShop::LevelProgressAccessoryShop_Initialize
               (LevelProgressAccessoryShop *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__LevelingManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__LevelingManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__LevelingManager);
  }
  pUVar1 = TypeInfo__LevelingManager->static_fields->OnLevelingInitialized;
  pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
           func_?(TypeInfo__UnityEngine__Events__UnityAction);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (pUVar2,(Object *)this,MethodInfo__LevelProgressAccessoryShop__Initialize__,
             (MethodInfo *)0x0);
  pUVar3 = (UnityAction *)
           mscorlib.dll::System::Delegate::Delegate_Remove
                     ((Delegate *)pUVar1,(Delegate *)pUVar2,(MethodInfo *)0x0);
  pUVar1 = (UnityAction *)0x0;
  if (pUVar3 == (UnityAction *)0x0) {
code_?:
    TypeInfo__LevelingManager->static_fields->OnLevelingInitialized = pUVar1;
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?();
    }
    pMVar4 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (pMVar4 == (MVNetworkGame *)0x0) goto code_?;
    pMVar5 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar4,(MethodInfo *)0x0);
    if (pMVar5 == (MVLocalPlayer *)0x0) goto code_?;
    pOVar6 = System.dll::System::Collections::Generic::
             SortedList`2[TKey,TValue]+ListValues[TKey,TValue]+GetEnumerator>c__Iterator3[System::
             Single,System::Object]::
             SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object__System_Collections_IEnumerator_get_Current
                       ((SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
                         *)pMVar5,(MethodInfo *)0x0);
    (this->fields).badgeLevel = (int32_t)pOVar6;
    pMVar4 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (pMVar4 == (MVNetworkGame *)0x0) goto code_?;
    this_00 = (ThemeSkybox *)MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar4,(MethodInfo *)0x0);
    if (this_00 == (ThemeSkybox *)0x0) goto code_?;
    xpProgressData =
         (XPProgressData *)ThemeSkybox::ThemeSkybox_get_SunLight(this_00,(MethodInfo *)0x0);
    LevelProgressAccessoryShop_OnXPUpdate(this,xpProgressData,(MethodInfo *)0x0);
    pMVar4 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (pMVar4 == (MVNetworkGame *)0x0) goto code_?;
    pMVar5 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar4,(MethodInfo *)0x0);
    if (pMVar5 == (MVLocalPlayer *)0x0) goto code_?;
    pXVar7 = (pMVar5->fields).OnXPProgressData;
    pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
             func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (pUVar2,(Object *)&UNK_?,
               MethodInfo__LevelProgressAccessoryShop__OnXPUpdate_XPProgressData_,(MethodInfo *)0x0)
    ;
    pXVar8 = (XPProgress_OnXPProgressDataDelegate *)
             mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)pXVar7,(Delegate *)pUVar2,(MethodInfo *)0x0);
    pXVar7 = (XPProgress_OnXPProgressDataDelegate *)0x0;
    if (pXVar8 != (XPProgress_OnXPProgressDataDelegate *)0x0) {
      if (pXVar8->klass == TypeInfo__XPProgress__OnXPProgressDataDelegate) {
        pXVar7 = pXVar8;
      }
      if (pXVar7 == (XPProgress_OnXPProgressDataDelegate *)0x0) goto code_?;
    }
    (pMVar5->fields).OnXPProgressData = pXVar7;
    pMVar4 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (pMVar4 != (MVNetworkGame *)0x0) {
      pMVar5 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar4,(MethodInfo *)0x0);
      if (pMVar5 != (MVLocalPlayer *)0x0) {
        pOVar6 = System.dll::System::Collections::Generic::
                 SortedList`2[TKey,TValue]+ListValues[TKey,TValue]+GetEnumerator>c__Iterator3[System
                 ::Single,System::Object]::
                 SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object__System_Collections_IEnumerator_get_Current
                           ((SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
                             *)pMVar5,(MethodInfo *)0x0);
        pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                  *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  (pUVar2,(Object *)&UNK_?,
                   MethodInfo__LevelProgressAccessoryShop__OnLevelingBadgeLoaded_UnityEngine__Networking__UnityWebRequest_
                   ,
                   MethodInfo__System__Action<UnityEngine::Networking::UnityWebRequest>__Action_System__Object__void__
                  );
        if ((((uint)(TypeInfo__BadgeManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__BadgeManager->_1).cctor_started == 0)) {
          func_?();
        }
        BadgeManager::BadgeManager_GetBadgeTexture
                  ((int32_t)pOVar6,(Action_1_UnityEngine_Networking_UnityWebRequest_ *)pUVar2,
                   (MethodInfo *)0x0);
        return;
      }
    }
  }
  else {
    if (pUVar3->klass == TypeInfo__UnityEngine__Events__UnityAction) {
      pUVar1 = pUVar3;
    }
    if (pUVar1 != (UnityAction *)0x0) goto code_?;
    func_?();
code_?:
    func_?();
  }
code_?:
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::LevelProgressAccessoryShop::LevelProgressAccessoryShop_OnDestroy
               (LevelProgressAccessoryShop *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__LevelingManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__LevelingManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__LevelingManager);
  }
  pUVar1 = TypeInfo__LevelingManager->static_fields->OnLevelingInitialized;
  pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
           func_?(TypeInfo__UnityEngine__Events__UnityAction);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (pUVar2,(Object *)this,MethodInfo__LevelProgressAccessoryShop__Initialize__,
             (MethodInfo *)0x0);
  pUVar3 = (UnityAction *)
           mscorlib.dll::System::Delegate::Delegate_Remove
                     ((Delegate *)pUVar1,(Delegate *)pUVar2,(MethodInfo *)0x0);
  pUVar1 = (UnityAction *)0x0;
  if (pUVar3 == (UnityAction *)0x0) {
code_?:
    TypeInfo__LevelingManager->static_fields->OnLevelingInitialized = pUVar1;
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?();
    }
    this_00 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (this_00 == (MVNetworkGame *)0x0) goto code_?;
    pMVar4 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_00,(MethodInfo *)0x0);
    if (pMVar4 == (MVLocalPlayer *)0x0) goto code_?;
    pXVar5 = (pMVar4->fields).OnXPProgressData;
    pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
             func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (pUVar2,(Object *)&UNK_?,
               MethodInfo__LevelProgressAccessoryShop__OnXPUpdate_XPProgressData_,(MethodInfo *)0x0)
    ;
    pXVar6 = (XPProgress_OnXPProgressDataDelegate *)
             mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)pXVar5,(Delegate *)pUVar2,(MethodInfo *)0x0);
    pXVar5 = (XPProgress_OnXPProgressDataDelegate *)0x0;
    if (pXVar6 == (XPProgress_OnXPProgressDataDelegate *)0x0) {
code_?:
      (pMVar4->fields).OnXPProgressData = pXVar5;
      pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *
               )func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (pUVar2,(Object *)&UNK_?,
                 MethodInfo__LevelProgressAccessoryShop__OnLevelingBadgeLoaded_UnityEngine__Networking__UnityWebRequest_
                 ,
                 MethodInfo__System__Action<UnityEngine::Networking::UnityWebRequest>__Action_System__Object__void__
                );
      if ((((uint)(TypeInfo__BadgeManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__BadgeManager->_1).cctor_started == 0)) {
        func_?();
      }
      BadgeManager::BadgeManager_UnsubscribeGetBadgeRequest
                ((Action_1_UnityEngine_Networking_UnityWebRequest_ *)pUVar2,(MethodInfo *)0x0);
      return;
    }
    if (pXVar6->klass == TypeInfo__XPProgress__OnXPProgressDataDelegate) {
      pXVar5 = pXVar6;
    }
    if (pXVar5 != (XPProgress_OnXPProgressDataDelegate *)0x0) goto code_?;
  }
  else {
    if (pUVar3->klass == TypeInfo__UnityEngine__Events__UnityAction) {
      pUVar1 = pUVar3;
    }
    if (pUVar1 != (UnityAction *)0x0) goto code_?;
    func_?();
  }
  func_?();
code_?:
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void OnLevelingBadgeLoaded(UnityWebRequest) */

void Assembly-CSharp.dll::LevelProgressAccessoryShop::
     LevelProgressAccessoryShop_OnLevelingBadgeLoaded
               (LevelProgressAccessoryShop *this,UnityWebRequest *www,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (www != (UnityWebRequest *)0x0) {
    pSVar1 = UnityEngine.UnityWebRequestModule.dll::UnityEngine::Networking::UnityWebRequest::
             UnityWebRequest_get_error(www,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__String);
    }
    bVar2 = mscorlib.dll::System::String::String_IsNullOrEmpty(pSVar1,(MethodInfo *)0x0);
    if (bVar2 != 0) {
      pTRam00000018 =
           UnityEngine.UnityWebRequestTextureModule.dll::UnityEngine::Networking::
           DownloadHandlerTexture::DownloadHandlerTexture_GetContent(www,(MethodInfo *)0x0);
      if (iRam_? != 0) {
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        x = (Object_1 *)in_stack_3[0x1a];
        if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
          func_?();
        }
        bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                          (x,in_stack_4,(MethodInfo *)0x0);
        if (bVar2 == 0) {
          in_stack_3[0x1a] = (int)in_stack_4;
          (**(code **)(*in_stack_3 + 0x1a0))();
          (**(code **)(*in_stack_3 + 0x1a8))();
        }
        return;
      }
      func_?();
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pSVar1 = UnityEngine.UnityWebRequestModule.dll::UnityEngine::Networking::UnityWebRequest::
             UnityWebRequest_get_error(www,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?();
    }
    pSVar1 = mscorlib.dll::System::String::String_Concat_2
                       (StringLiteral_Texture_not_loaded__,pSVar1,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
              ((Object *)pSVar1,(MethodInfo *)0x0);
  }
  return;
}


/* Void OnXPUpdate(XPProgressData) */

void Assembly-CSharp.dll::LevelProgressAccessoryShop::LevelProgressAccessoryShop_OnXPUpdate
               (LevelProgressAccessoryShop *this,XPProgressData *xpProgressData,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (xpProgressData != (XPProgressData *)0x0) {
    iVar1 = XPProgressData::XPProgressData_get_NextXP(xpProgressData,(MethodInfo *)0x0);
    pOVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
             Serialization::JsonProperty]::
             Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                       ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)xpProgressData,
                        (MethodInfo *)0x0);
    iVar3 = XPProgressData::XPProgressData_get_PrevXP(xpProgressData,(MethodInfo *)0x0);
    pTVar4 = (this->fields).progressText;
    arg0 = (Object *)func_?(TypeInfo__System__Int32,&stack0xfffffff4);
    arg1 = (Object *)func_?(TypeInfo__System__Int32,&stack0xfffffff0);
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__String);
    }
    pSVar5 = mscorlib.dll::System::String::String_Format_1
                       (StringLiteral_XP___0_____1_,arg0,arg1,(MethodInfo *)0x0);
    if (pTVar4 != (Text *)0x0) {
      (*(code *)(pTVar4->klass->vtable).set_text.method)
                (pTVar4,pSVar5,(pTVar4->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
      this_00 = (this->fields).progressBar;
      if (this_00 != (ProgressBar *)0x0) {
        ProgressBar::ProgressBar_set_Progress
                  (this_00,(float)((int)pOVar2 - iVar3) / (float)(iVar1 - iVar3),(MethodInfo *)0x0);
        if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
          func_?(TypeInfo__MVGameControllerBase);
        }
        pMVar6 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if ((pMVar6 != (MVNetworkGame *)0x0) &&
           (pMVar7 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar6,(MethodInfo *)0x0),
           pMVar7 != (MVLocalPlayer *)0x0)) {
          pOVar2 = System.dll::System::Collections::Generic::
                   SortedList`2[TKey,TValue]+ListValues[TKey,TValue]+GetEnumerator>c__Iterator3[System
                   ::Single,System::Object]::
                   SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object__System_Collections_IEnumerator_get_Current
                             ((SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
                               *)pMVar7,(MethodInfo *)0x0);
          if (pOVar2 == (Object *)(this->fields).badgeLevel) {
            return;
          }
          if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0)
             && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
            func_?(TypeInfo__MVGameControllerBase);
          }
          pMVar6 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          if ((pMVar6 != (MVNetworkGame *)0x0) &&
             (pMVar7 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar6,(MethodInfo *)0x0),
             pMVar7 != (MVLocalPlayer *)0x0)) {
            pOVar2 = System.dll::System::Collections::Generic::
                     SortedList`2[TKey,TValue]+ListValues[TKey,TValue]+GetEnumerator>c__Iterator3[System
                     ::Single,System::Object]::
                     SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object__System_Collections_IEnumerator_get_Current
                               ((SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
                                 *)pMVar7,(MethodInfo *)0x0);
            (this->fields).badgeLevel = (int32_t)pOVar2;
            pMVar6 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
            if ((pMVar6 != (MVNetworkGame *)0x0) &&
               (pMVar7 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar6,(MethodInfo *)0x0),
               pMVar7 != (MVLocalPlayer *)0x0)) {
              pOVar2 = System.dll::System::Collections::Generic::
                       SortedList`2[TKey,TValue]+ListValues[TKey,TValue]+GetEnumerator>c__Iterator3[System
                       ::Single,System::Object]::
                       SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object__System_Collections_IEnumerator_get_Current
                                 ((SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
                                   *)pMVar7,(MethodInfo *)0x0);
              this_01 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                         *)func_?(
                                          TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>
                                          );
              UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
              SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
              UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                        (this_01,(Object *)this,
                         MethodInfo__LevelProgressAccessoryShop__OnLevelingBadgeLoaded_UnityEngine__Networking__UnityWebRequest_
                         ,
                         MethodInfo__System__Action<UnityEngine::Networking::UnityWebRequest>__Action_System__Object__void__
                        );
              if ((((uint)(TypeInfo__BadgeManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
                 ((TypeInfo__BadgeManager->_1).cctor_started == 0)) {
                func_?();
              }
              BadgeManager::BadgeManager_GetBadgeTexture
                        ((int32_t)pOVar2,(Action_1_UnityEngine_Networking_UnityWebRequest_ *)this_01
                         ,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
  func_?(0);
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void Start() */

void Assembly-CSharp.dll::LevelProgressAccessoryShop::LevelProgressAccessoryShop_Start
               (LevelProgressAccessoryShop *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__LevelingManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__LevelingManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__LevelingManager);
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__LevelingManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__LevelingManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__LevelingManager);
  }
  if (TypeInfo__LevelingManager->static_fields->_IsInitialized_k__BackingField == 0) {
    if ((((uint)(TypeInfo__LevelingManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__LevelingManager->_1).cctor_started == 0)) {
      func_?(TypeInfo__LevelingManager);
    }
    pUVar1 = TypeInfo__LevelingManager->static_fields->OnLevelingInitialized;
    pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
             func_?(TypeInfo__UnityEngine__Events__UnityAction);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (pUVar2,(Object *)this,MethodInfo__LevelProgressAccessoryShop__Initialize__,
               (MethodInfo *)0x0);
    pUVar3 = (UnityAction *)
             mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)pUVar1,(Delegate *)pUVar2,(MethodInfo *)0x0);
    pUVar1 = (UnityAction *)0x0;
    if (pUVar3 != (UnityAction *)0x0) {
      if (pUVar3->klass == TypeInfo__UnityEngine__Events__UnityAction) {
        pUVar1 = pUVar3;
      }
      if (pUVar1 == (UnityAction *)0x0) {
        func_?();
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    TypeInfo__LevelingManager->static_fields->OnLevelingInitialized = pUVar1;
    return;
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?,unaff_EBP);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__LevelingManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__LevelingManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__LevelingManager);
  }
  pUVar1 = TypeInfo__LevelingManager->static_fields->OnLevelingInitialized;
  pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
           func_?(TypeInfo__UnityEngine__Events__UnityAction);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (pUVar2,(Object *)this,MethodInfo__LevelProgressAccessoryShop__Initialize__,
             (MethodInfo *)0x0);
  pUVar3 = (UnityAction *)
           mscorlib.dll::System::Delegate::Delegate_Remove
                     ((Delegate *)pUVar1,(Delegate *)pUVar2,(MethodInfo *)0x0);
  pUVar1 = (UnityAction *)0x0;
  if (pUVar3 == (UnityAction *)0x0) {
code_?:
    TypeInfo__LevelingManager->static_fields->OnLevelingInitialized = pUVar1;
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?();
    }
    pMVar5 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (pMVar5 == (MVNetworkGame *)0x0) goto code_?;
    pMVar6 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar5,(MethodInfo *)0x0);
    if (pMVar6 == (MVLocalPlayer *)0x0) goto code_?;
    pOVar7 = System.dll::System::Collections::Generic::
             SortedList`2[TKey,TValue]+ListValues[TKey,TValue]+GetEnumerator>c__Iterator3[System::
             Single,System::Object]::
             SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object__System_Collections_IEnumerator_get_Current
                       ((SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
                         *)pMVar6,(MethodInfo *)0x0);
    (this->fields).badgeLevel = (int32_t)pOVar7;
    pMVar5 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (pMVar5 == (MVNetworkGame *)0x0) goto code_?;
    this_00 = (ThemeSkybox *)MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar5,(MethodInfo *)0x0);
    if (this_00 == (ThemeSkybox *)0x0) goto code_?;
    xpProgressData =
         (XPProgressData *)ThemeSkybox::ThemeSkybox_get_SunLight(this_00,(MethodInfo *)0x0);
    LevelProgressAccessoryShop_OnXPUpdate(this,xpProgressData,(MethodInfo *)0x0);
    pMVar5 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (pMVar5 == (MVNetworkGame *)0x0) goto code_?;
    pMVar6 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar5,(MethodInfo *)0x0);
    if (pMVar6 == (MVLocalPlayer *)0x0) goto code_?;
    pXVar8 = (pMVar6->fields).OnXPProgressData;
    pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
             func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (pUVar2,(Object *)&UNK_?,
               MethodInfo__LevelProgressAccessoryShop__OnXPUpdate_XPProgressData_,(MethodInfo *)0x0)
    ;
    pXVar9 = (XPProgress_OnXPProgressDataDelegate *)
             mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)pXVar8,(Delegate *)pUVar2,(MethodInfo *)0x0);
    pXVar8 = (XPProgress_OnXPProgressDataDelegate *)0x0;
    if (pXVar9 != (XPProgress_OnXPProgressDataDelegate *)0x0) {
      if (pXVar9->klass == TypeInfo__XPProgress__OnXPProgressDataDelegate) {
        pXVar8 = pXVar9;
      }
      if (pXVar8 == (XPProgress_OnXPProgressDataDelegate *)0x0) goto code_?;
    }
    (pMVar6->fields).OnXPProgressData = pXVar8;
    pMVar5 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (pMVar5 != (MVNetworkGame *)0x0) {
      pMVar6 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar5,(MethodInfo *)0x0);
      if (pMVar6 != (MVLocalPlayer *)0x0) {
        pOVar7 = System.dll::System::Collections::Generic::
                 SortedList`2[TKey,TValue]+ListValues[TKey,TValue]+GetEnumerator>c__Iterator3[System
                 ::Single,System::Object]::
                 SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object__System_Collections_IEnumerator_get_Current
                           ((SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
                             *)pMVar6,(MethodInfo *)0x0);
        pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                  *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  (pUVar2,(Object *)&UNK_?,
                   MethodInfo__LevelProgressAccessoryShop__OnLevelingBadgeLoaded_UnityEngine__Networking__UnityWebRequest_
                   ,
                   MethodInfo__System__Action<UnityEngine::Networking::UnityWebRequest>__Action_System__Object__void__
                  );
        if ((((uint)(TypeInfo__BadgeManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__BadgeManager->_1).cctor_started == 0)) {
          func_?();
        }
        BadgeManager::BadgeManager_GetBadgeTexture
                  ((int32_t)pOVar7,(Action_1_UnityEngine_Networking_UnityWebRequest_ *)pUVar2,
                   (MethodInfo *)0x0);
        return;
      }
    }
  }
  else {
    if (pUVar3->klass == TypeInfo__UnityEngine__Events__UnityAction) {
      pUVar1 = pUVar3;
    }
    if (pUVar1 != (UnityAction *)0x0) goto code_?;
    func_?();
code_?:
    func_?();
  }
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* LevelProgressAccessoryShop() */

void Assembly-CSharp.dll::LevelProgressAccessoryShop::LevelProgressAccessoryShop__ctor
               (LevelProgressAccessoryShop *this,MethodInfo *method)

{
  (this->fields).badgeLevel = 1;
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

