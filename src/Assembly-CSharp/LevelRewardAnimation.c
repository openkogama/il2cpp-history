
/* IEnumerator DisplayAndFadeGoldIcon() */

IEnumerator *
Assembly-CSharp.dll::LevelRewardAnimation::LevelRewardAnimation_DisplayAndFadeGoldIcon
          (LevelRewardAnimation *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__LevelRewardAnimation___DisplayAndFadeGoldIcon_c__Iterator2;
  this_00 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,(MethodInfo *)method_00);
  if (this_00 != (ScaleAnimationBase *)0x0) {
    (this_00->fields).originalScale.y = (float)this;
    return (IEnumerator *)this_00;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  pIVar2 = (IEnumerator *)(*pcVar1)();
  return pIVar2;
}


/* IEnumerator DisplayAndFadeNextBadge() */

IEnumerator *
Assembly-CSharp.dll::LevelRewardAnimation::LevelRewardAnimation_DisplayAndFadeNextBadge
          (LevelRewardAnimation *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__LevelRewardAnimation___DisplayAndFadeNextBadge_c__Iterator1;
  this_00 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,(MethodInfo *)method_00);
  if (this_00 != (ScaleAnimationBase *)0x0) {
    (this_00->fields).target = (Transform *)this;
    return (IEnumerator *)this_00;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  pIVar2 = (IEnumerator *)(*pcVar1)();
  return pIVar2;
}


/* IEnumerator DisplayAndFadePrevBadge() */

IEnumerator *
Assembly-CSharp.dll::LevelRewardAnimation::LevelRewardAnimation_DisplayAndFadePrevBadge
          (LevelRewardAnimation *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__LevelRewardAnimation___DisplayAndFadePrevBadge_c__Iterator0;
  this_00 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,(MethodInfo *)method_00);
  if (this_00 != (ScaleAnimationBase *)0x0) {
    (this_00->fields).originalScale.y = (float)this;
    return (IEnumerator *)this_00;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  pIVar2 = (IEnumerator *)(*pcVar1)();
  return pIVar2;
}


/* Void Initialize(Dictionary`2[System.Int32,System.Int32]) */

void Assembly-CSharp.dll::LevelRewardAnimation::LevelRewardAnimation_Initialize
               (LevelRewardAnimation *this,Dictionary_2_System_Int32_System_Int32_ *levelRewards,
               MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffac;
  puVar5 = &stack0xffffffac;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  this_03 = (Text *)0x0;
  LStack_6.fields._NextReward_k__BackingField.value = 0;
  LStack_6.klass = (LevelRewardsManager__Class *)0x0;
  LStack_6.monitor = (MonitorData *)0x0;
  LStack_6.fields.unseenLevelRewards = (Dictionary_2_System_Int32_System_Int32_ *)0x0;
  LStack_6.fields._NextReward_k__BackingField.key = 0;
  func_?();
  puStack_7 = (undefined4 *)&stack0xffffffac;
  puStack_4 = &stack0xffffffac;
  if (levelRewards != (Dictionary_2_System_Int32_System_Int32_ *)0x0) {
    puStack_7 = (undefined4 *)&stack0xffffffac;
    puStack_4 = &stack0xffffffac;
    pDVar8 = mscorlib.dll::System::Collections::Generic::Dictionary`2[WinningConditionType,System::
             Object]::Dictionary_2_WinningConditionType_System_Object__GetEnumerator
                       (&DStack_9,(Dictionary_2_WinningConditionType_System_Object_ *)levelRewards,
                        MethodInfo__System__Collections__Generic__Dictionary<int,_int>__GetEnumerator__
                       );
    LStack_6.klass = (LevelRewardsManager__Class *)pDVar8->dictionary;
    LStack_6.monitor = (MonitorData *)pDVar8->next;
    LStack_6.fields.unseenLevelRewards = (Dictionary_2_System_Int32_System_Int32_ *)pDVar8->stamp;
    LStack_6.fields._NextReward_k__BackingField.key = (pDVar8->current).key;
    LStack_6.fields._NextReward_k__BackingField.value = (int32_t)(pDVar8->current).value;
    uStack_1 = 0;
    while( true ) {
      DStack_9.dictionary =
           (Dictionary_2_WinningConditionType_System_Object_ *)
           MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_int>__MoveNext__
      ;
      cVar10 = func_?();
      if (cVar10 == '\0') break;
      item = LevelRewardsManager::LevelRewardsManager_get_NextReward
                       (&LStack_6,
                        MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_int>__get_Current__
                       );
      pLVar11 = (this->fields).rewards;
      if (pLVar11 == (List_1_KeyValuePair_2_System_Int32_System_Int32_ *)0x0) goto code_?;
      mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::BeforeRenderHelper+OrderBlock]
      ::List_1_UnityEngine_BeforeRenderHelper_OrderBlock__Add
                ((List_1_UnityEngine_BeforeRenderHelper_OrderBlock_ *)pLVar11,
                 (BeforeRenderHelper_OrderBlock)item,
                 MethodInfo__System__Collections__Generic__List<System::Collections::Generic::KeyValuePair<int,_int>_>__Add_System__Collections__Generic__KeyValuePair<int,_int>_
                );
    }
    *puStack_7 = 0x3f;
    uStack_1 = 0xffffffff;
    pMVar12 = 
    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_int>__Dispose__
    ;
    func_?(&LStack_6);
    pLVar11 = (this->fields).rewards;
    if (TypeInfo__LevelRewardAnimation->static_fields->__f__am_cache0 ==
        (Func_2_System_Collections_Generic_KeyValuePair_2_System_Int32_System_Int32_Int32_ *)0x0) {
      this_03 = (Text *)func_?(
                                       TypeInfo__System__Func<System::Collections::Generic::KeyValuePair<int,_int>,_int>
                                       );
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                ((UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                  *)this_03,(Object *)0x0,
                 MethodInfo__LevelRewardAnimation___Initialize_m__0_System__Collections__Generic__KeyValuePair<int,_int>_
                 ,
                 MethodInfo__System__Func<System::Collections::Generic::KeyValuePair<int,_int>,_int>__Func_System__Object__void__
                );
      TypeInfo__LevelRewardAnimation->static_fields->__f__am_cache0 =
           (Func_2_System_Collections_Generic_KeyValuePair_2_System_Int32_System_Int32_Int32_ *)
           this_03;
    }
    source = System.Core.dll::System::Linq::Enumerable::Enumerable_ThenBy_6
                       ((IOrderedEnumerable_1_System_Object_ *)pLVar11,
                        (Func_2_Object_Int64_ *)
                        TypeInfo__LevelRewardAnimation->static_fields->__f__am_cache0,
                        System__Linq__IOrderedEnumerable<System::Collections::Generic::KeyValuePair<int,_int>_>_MethodInfo__System__Linq__Enumerable__OrderByDescending<System::Collections::Generic::KeyValuePair<int,_int>,_int>_System__Collections__Generic__IEnumerable<System::Collections::Generic::KeyValuePair<int,_int>_>__System__Func<System::Collections::Generic::KeyValuePair<int,_int>,_int>_
                       );
    pLVar11 = (List_1_KeyValuePair_2_System_Int32_System_Int32_ *)
             System.Core.dll::System::Linq::Enumerable::Enumerable_ToList_21
                       ((IEnumerable_1_UseInteractor_ *)source,
                        System__Collections__Generic__List<System::Collections::Generic::KeyValuePair<int,_int>_>_MethodInfo__System__Linq__Enumerable__ToList<System::Collections::Generic::KeyValuePair<int,_int>_>_System__Collections__Generic__IEnumerable<System::Collections::Generic::KeyValuePair<int,_int>_>_
                       );
    if (this != (LevelRewardAnimation *)0x0) {
      (this->fields).rewards = pLVar11;
      this_00 = (this->fields).header;
      if ((this_00 != (Text *)0x0) &&
         (this_02 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                              ((Component_1 *)this_00,pMVar12), this_02 != (GameObject *)0x0)) {
        pMVar12 = (MethodInfo *)&UNK_?;
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (this_02,0,(MethodInfo *)0x0);
        this_03 = (this->fields).header;
        pDVar13 = (Dictionary_2_WinningConditionType_System_Object_ *)
                 TM::TM__(StringLiteral_LEVEL_UP_,(MethodInfo *)0x0);
        if (this_03 != (Text *)0x0) {
          DStack_9.next =
               (int32_t)(this_03->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr;
          DStack_9.dictionary = pDVar13;
          (*(code *)(this_03->klass->vtable).set_text.method)();
          pRVar14 = (this->fields).prevLevelBadge;
          if (pRVar14 != (RawImage *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                      ((Behaviour *)pRVar14,0,in_stack_15);
            pRVar14 = (this->fields).nextLevelBadge;
            if (pRVar14 != (RawImage *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                        ((Behaviour *)pRVar14,0,pMVar12);
              this_01 = (this->fields).goldImage;
              if (this_01 != (Image *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                          ((Behaviour *)this_01,0,(MethodInfo *)0x0);
                LevelRewardAnimation_OnShow(this,(MethodInfo *)0x0);
                *unaff_FS_OFFSET = uStack_3;
                return;
              }
            }
          }
        }
      }
    }
  }
code_?:
  func_?(0);
  func_?(this_03,0,0);
  pcVar16 = (code *)swi(3);
  (*pcVar16)();
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::LevelRewardAnimation::LevelRewardAnimation_OnDestroy
               (LevelRewardAnimation *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pUVar1 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
           func_?(TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (pUVar1,(Object *)this,
             MethodInfo__LevelRewardAnimation__OnPrevBadgeLoaded_UnityEngine__Networking__UnityWebRequest_
             ,
             MethodInfo__System__Action<UnityEngine::Networking::UnityWebRequest>__Action_System__Object__void__
            );
  if ((((uint)(TypeInfo__BadgeManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__BadgeManager->_1).cctor_started == 0)) {
    func_?();
  }
  BadgeManager::BadgeManager_UnsubscribeGetBadgeRequest
            ((Action_1_UnityEngine_Networking_UnityWebRequest_ *)pUVar1,(MethodInfo *)0x0);
  (this->fields).previousBadgeTextureAsset = (Texture2D *)0x0;
  pUVar1 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
           func_?();
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (pUVar1,(Object *)this,
             MethodInfo__LevelRewardAnimation__OnNextBadgeLoaded_UnityEngine__Networking__UnityWebRequest_
             ,
             MethodInfo__System__Action<UnityEngine::Networking::UnityWebRequest>__Action_System__Object__void__
            );
  BadgeManager::BadgeManager_UnsubscribeGetBadgeRequest
            ((Action_1_UnityEngine_Networking_UnityWebRequest_ *)pUVar1,(MethodInfo *)0x0);
  (this->fields).currentBadgeTextureAsset = (Texture2D *)0x0;
  return;
}


/* Void OnNextBadgeLoaded(UnityWebRequest) */

void Assembly-CSharp.dll::LevelRewardAnimation::LevelRewardAnimation_OnNextBadgeLoaded
               (LevelRewardAnimation *this,UnityWebRequest *www,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  x = UnityEngine.UnityWebRequestTextureModule.dll::UnityEngine::Networking::DownloadHandlerTexture
      ::DownloadHandlerTexture_GetContent(www,(MethodInfo *)0x0);
  (this->fields).currentBadgeTextureAsset = x;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)x,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    if (www == (UnityWebRequest *)0x0) goto code_?;
    value = UnityEngine.UnityWebRequestModule.dll::UnityEngine::Networking::UnityWebRequest::
            UnityWebRequest_get_error(www,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?();
    }
    bVar1 = mscorlib.dll::System::String::String_IsNullOrEmpty(value,(MethodInfo *)0x0);
    if (bVar1 == 0) goto code_?;
  }
  else {
code_?:
    if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
              ((Object *)StringLiteral_Error_downloading_nextLevel_badg,(MethodInfo *)0x0);
  }
  this_00 = (this->fields).nextLevelBadge;
  if (this_00 != (RawImage *)0x0) {
    UnityEngine.UI.dll::UnityEngine::UI::RawImage::RawImage_set_texture
              (this_00,(Texture *)(this->fields).currentBadgeTextureAsset,(MethodInfo *)0x0);
    return;
  }
code_?:
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void OnPrevBadgeLoaded(UnityWebRequest) */

void Assembly-CSharp.dll::LevelRewardAnimation::LevelRewardAnimation_OnPrevBadgeLoaded
               (LevelRewardAnimation *this,UnityWebRequest *www,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  x = UnityEngine.UnityWebRequestTextureModule.dll::UnityEngine::Networking::DownloadHandlerTexture
      ::DownloadHandlerTexture_GetContent(www,(MethodInfo *)0x0);
  (this->fields).previousBadgeTextureAsset = x;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)x,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    if (www == (UnityWebRequest *)0x0) goto code_?;
    value = UnityEngine.UnityWebRequestModule.dll::UnityEngine::Networking::UnityWebRequest::
            UnityWebRequest_get_error(www,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?();
    }
    bVar1 = mscorlib.dll::System::String::String_IsNullOrEmpty(value,(MethodInfo *)0x0);
    if (bVar1 == 0) goto code_?;
  }
  else {
code_?:
    if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
              ((Object *)StringLiteral_Error_downloading_prevLevel_badg,(MethodInfo *)0x0);
  }
  this_00 = (this->fields).prevLevelBadge;
  if (this_00 != (RawImage *)0x0) {
    UnityEngine.UI.dll::UnityEngine::UI::RawImage::RawImage_set_texture
              (this_00,(Texture *)(this->fields).previousBadgeTextureAsset,(MethodInfo *)0x0);
    return;
  }
code_?:
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void OnShow() */

void Assembly-CSharp.dll::LevelRewardAnimation::LevelRewardAnimation_OnShow
               (LevelRewardAnimation *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StopAllCoroutines
            ((MonoBehaviour *)this,(MethodInfo *)0x0);
  pLVar1 = (this->fields).rewards;
  if (pLVar1 != (List_1_KeyValuePair_2_System_Int32_System_Int32_ *)0x0) {
    pOVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
             Serialization::JsonProperty]::
             Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                       ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar1,
                        MethodInfo__System__Collections__Generic__List<System::Collections::Generic::KeyValuePair<int,_int>_>__get_Count__
                       );
    if ((int)pOVar2 < 1) {
      root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                       ((Component_1 *)this,(MethodInfo *)0x0);
      if (TypeInfo__LevelRewardAnimation->static_fields->__f__am_cache1 ==
          (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
        pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                  *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  (pUVar3,(Object *)0x0,
                   MethodInfo__LevelRewardAnimation___OnShow_m__1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   ,
                   MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
                  );
        TypeInfo__LevelRewardAnimation->static_fields->__f__am_cache1 =
             (ExecuteEvents_EventFunction_1_IUIStack_ *)pUVar3;
      }
      callbackFunction =
           (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)
           TypeInfo__LevelRewardAnimation->static_fields->__f__am_cache1;
      if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
           0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
        func_?();
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
      ExecuteEvents_ExecuteHierarchy_63
                (root,(BaseEventData *)0x0,callbackFunction,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                );
      return;
    }
    pLVar1 = (this->fields).rewards;
    if (pLVar1 != (List_1_KeyValuePair_2_System_Int32_System_Int32_ *)0x0) {
      pOVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
               Serialization::JsonProperty]::
               Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                         ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar1,
                          MethodInfo__System__Collections__Generic__List<System::Collections::Generic::KeyValuePair<int,_int>_>__get_Count__
                         );
      KVar4 = mscorlib.dll::System::Collections::Generic::List`1[KeyValuePair`2[System::Int32,System
              ::Int32]]::List_1_KeyValuePair_2_System_Int32_System_Int32__get_Item
                        (pLVar1,(int32_t)((int)&pOVar2[-1].monitor + 3),
                         MethodInfo__System__Collections__Generic__List<System::Collections::Generic::KeyValuePair<int,_int>_>__get_Item_int_
                        );
      pLVar1 = (this->fields).rewards;
      (this->fields).currentReward = KVar4;
      if (pLVar1 != (List_1_KeyValuePair_2_System_Int32_System_Int32_ *)0x0) {
        pOVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                 Serialization::JsonProperty]::
                 Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                           ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar1,
                            MethodInfo__System__Collections__Generic__List<System::Collections::Generic::KeyValuePair<int,_int>_>__get_Count__
                           );
        mscorlib.dll::System::Collections::Generic::List`1[KeyValuePair`2[System::Int32,System::
        Int32]]::List_1_KeyValuePair_2_System_Int32_System_Int32__RemoveAt
                  (pLVar1,(int32_t)((int)&pOVar2[-1].monitor + 3),
                   MethodInfo__System__Collections__Generic__List<System::Collections::Generic::KeyValuePair<int,_int>_>__RemoveAt_int_
                  );
        iVar5 = func_?();
        pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                  *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  (pUVar3,(Object *)this,
                   MethodInfo__LevelRewardAnimation__OnPrevBadgeLoaded_UnityEngine__Networking__UnityWebRequest_
                   ,
                   MethodInfo__System__Action<UnityEngine::Networking::UnityWebRequest>__Action_System__Object__void__
                  );
        if ((((uint)(TypeInfo__BadgeManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__BadgeManager->_1).cctor_started == 0)) {
          func_?();
        }
        BadgeManager::BadgeManager_GetBadgeTexture
                  (iVar5 + -1,(Action_1_UnityEngine_Networking_UnityWebRequest_ *)pUVar3,
                   (MethodInfo *)0x0);
        level = func_?();
        pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                  *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  (pUVar3,(Object *)this,
                   MethodInfo__LevelRewardAnimation__OnNextBadgeLoaded_UnityEngine__Networking__UnityWebRequest_
                   ,
                   MethodInfo__System__Action<UnityEngine::Networking::UnityWebRequest>__Action_System__Object__void__
                  );
        BadgeManager::BadgeManager_GetBadgeTexture
                  (level,(Action_1_UnityEngine_Networking_UnityWebRequest_ *)pUVar3,
                   (MethodInfo *)0x0);
        method_00 = (this->fields).goldText;
        pSVar6 = TM::TM__(StringLiteral_GOLD_,(MethodInfo *)0x0);
        if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__System__String->_1).cctor_started == 0)) {
          func_?();
        }
        pSVar6 = mscorlib.dll::System::String::String_Concat_2
                           (StringLiteral__0__,pSVar6,(MethodInfo *)0x0);
        func_?();
        pOVar2 = (Object *)func_?();
        mscorlib.dll::System::String::String_Format(pSVar6,pOVar2,(MethodInfo *)0x0);
        if (method_00 != (Text *)0x0) {
          (*(code *)(method_00->klass->vtable).set_text.method)();
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          this_00 = (ScaleAnimationBase *)func_?();
          ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,(MethodInfo *)method_00);
          if (this_00 != (ScaleAnimationBase *)0x0) {
            (this_00->fields).originalScale.y = (float)this;
            UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::
            MonoBehaviour_StartCoroutine_Auto
                      ((MonoBehaviour *)this,(IEnumerator *)this_00,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Int32 <Initialize>m__0(KeyValuePair`2[System.Int32,System.Int32]) */

int32_t Assembly-CSharp.dll::LevelRewardAnimation::LevelRewardAnimation__Initialize_m__0
                  (KeyValuePair_2_System_Int32_System_Int32_ o,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  iVar1 = func_?(&o,
                          MethodInfo__System__Collections__Generic__KeyValuePair<int,_int>__get_Key__
                         );
  return iVar1;
}


/* Void <OnShow>m__1(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::LevelRewardAnimation::LevelRewardAnimation__OnShow_m__1
               (IUIStack *x,BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (x != (IUIStack *)0x0) {
    func_?(2,TypeInfo__UnityEngine__EventSystems__IUIStack,x);
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* LevelRewardAnimation() */

void Assembly-CSharp.dll::LevelRewardAnimation::LevelRewardAnimation__ctor
               (LevelRewardAnimation *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (List_1_UnityEngine_Vector4_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__List<System::Collections::Generic::KeyValuePair<int,_int>_>
                           );
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
  List_1_UnityEngine_Vector4___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__List<System::Collections::Generic::KeyValuePair<int,_int>_>__List__
            );
  (this->fields).rewards = (List_1_KeyValuePair_2_System_Int32_System_Int32_ *)this_00;
  uStack1 = 0;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?();
  }
  return;
}

