
/* IEnumerator DisplayAndFadeGoldIcon() */

IEnumerator *
Assembly-CSharp.dll::LevelRewardAnimation::LevelRewardAnimation_DisplayAndFadeGoldIcon
          (LevelRewardAnimation *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__LevelRewardAnimation___DisplayAndFadeGoldIcon_d__30);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__LevelRewardAnimation___DisplayAndFadeGoldIcon_d__30;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  value[2].klass = (Object__Class *)this;
  value[1].klass = (Object__Class *)0x0;
  func_?(value + 2,this);
  return (IEnumerator *)value;
}


/* IEnumerator DisplayAndFadeNextBadge() */

IEnumerator *
Assembly-CSharp.dll::LevelRewardAnimation::LevelRewardAnimation_DisplayAndFadeNextBadge
          (LevelRewardAnimation *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__LevelRewardAnimation___DisplayAndFadeNextBadge_d__29);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__LevelRewardAnimation___DisplayAndFadeNextBadge_d__29;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  value[2].klass = (Object__Class *)this;
  value[1].klass = (Object__Class *)0x0;
  func_?(value + 2,this);
  return (IEnumerator *)value;
}


/* IEnumerator DisplayAndFadePrevBadge() */

IEnumerator *
Assembly-CSharp.dll::LevelRewardAnimation::LevelRewardAnimation_DisplayAndFadePrevBadge
          (LevelRewardAnimation *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__LevelRewardAnimation___DisplayAndFadePrevBadge_d__28);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__LevelRewardAnimation___DisplayAndFadePrevBadge_d__28;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  value[2].klass = (Object__Class *)this;
  value[1].klass = (Object__Class *)0x0;
  func_?(value + 2,this);
  return (IEnumerator *)value;
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
  puStack_4 = &stack0xffffff9c;
  puVar5 = &stack0xffffff9c;
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__Dictionary<int,_int>__GetEnumerator__
                   );
    func_?(&
                    System__Linq__IOrderedEnumerable<System::Collections::Generic::KeyValuePair<int,_int>_>_MethodInfo__System__Linq__Enumerable__OrderByDescending<System::Collections::Generic::KeyValuePair<int,_int>,_int>_System__Collections__Generic__IEnumerable<System::Collections::Generic::KeyValuePair<int,_int>_>__System__Func<System::Collections::Generic::KeyValuePair<int,_int>,_int>_
                   );
    func_?(&
                    System__Collections__Generic__List<System::Collections::Generic::KeyValuePair<int,_int>_>_MethodInfo__System__Linq__Enumerable__ToList<System::Collections::Generic::KeyValuePair<int,_int>_>_System__Collections__Generic__IEnumerable<System::Collections::Generic::KeyValuePair<int,_int>_>_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_int>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_int>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_int>__get_Current__
                   );
    func_?(&
                    TypeInfo__System__Func<System::Collections::Generic::KeyValuePair<int,_int>,_int>
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<System::Collections::Generic::KeyValuePair<int,_int>_>__Add_System__Collections__Generic__KeyValuePair<int,_int>_
                   );
    func_?(&
                    MethodInfo__LevelRewardAnimation____c___Initialize_b__23_0_System__Collections__Generic__KeyValuePair<int,_int>_
                   );
    func_?(&TypeInfo__LevelRewardAnimation____c);
    func_?(&StringLiteral_LEVEL_UP_);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  DStack_6._current.value = 0;
  DStack_6._getEnumeratorRetType = 0;
  DStack_6._dictionary = (Dictionary_2_System_UInt32_System_Int32_ *)0x0;
  DStack_6._version = 0;
  DStack_6._index = 0;
  DStack_6._current.key = 0;
  if (levelRewards != (Dictionary_2_System_Int32_System_Int32_ *)0x0) {
    pDVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::UInt32,System::
              Object]::Dictionary_2_System_UInt32_System_Object__GetEnumerator
                        (&DStack_8,(Dictionary_2_System_UInt32_System_Object_ *)levelRewards,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_int>__GetEnumerator__
                        );
    uStack_9 = 0;
    DStack_6._dictionary = (Dictionary_2_System_UInt32_System_Int32_ *)pDVar7->_dictionary;
    DStack_6._version = pDVar7->_version;
    DStack_6._index = pDVar7->_index;
    DStack_6._current.key = (pDVar7->_current).key;
    DStack_6._16_8_ = *(undefined8 *)&(pDVar7->_current).value;
    uStack_1 = 1;
    pDStack_10 = &DStack_6;
    while( true ) {
      bVar11 = mscorlib.dll::System::Collections::Generic::
              Dictionary`2[TKey,TValue]+Enumerator[System::UInt32,System::Int32]::
              Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Int32__MoveNext
                        (&DStack_6,
                         MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_int>__MoveNext__
                        );
      pMVar12 = 
      MethodInfo__System__Collections__Generic__List<System::Collections::Generic::KeyValuePair<int,_int>_>__Add_System__Collections__Generic__KeyValuePair<int,_int>_
      ;
      if (bVar11 == 0) break;
      this_00 = (List_1_UnityEngine_UIElements_UIR_BitmapAllocator32_Page_ *)(this->fields).rewards;
      iStack_13 = DStack_6._current.value;
      if (this_00 == (List_1_UnityEngine_UIElements_UIR_BitmapAllocator32_Page_ *)0x0)
      goto code_?;
      piVar14 = &(this_00->fields)._version;
      *piVar14 = *piVar14 + 1;
      pBVar15 = (this_00->fields)._items;
      uVar16 = (this_00->fields)._size;
      if (pBVar15 == (BitmapAllocator32_Page__Array *)0x0) goto code_?;
      if (uVar16 < pBVar15->max_length) {
        (this_00->fields)._size = uVar16 + 1;
        if (pBVar15->max_length <= uVar16) {
          func_?();
          goto code_?;
        }
        pBVar15->vector[uVar16].x = (undefined2)DStack_6._current.key;
        pBVar15->vector[uVar16].y = DStack_6._current.key._2_2_;
        pBVar15->vector[uVar16].freeSlots = DStack_6._current.value;
      }
      else {
        item.freeSlots = DStack_6._current.value;
        item.x = (undefined2)DStack_6._current.key;
        item.y = DStack_6._current.key._2_2_;
        mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::UIR::
        BitmapAllocator32+Page]::
        List_1_UnityEngine_UIElements_UIR_BitmapAllocator32_Page__AddWithResize
                  (this_00,item,pMVar12->klass->rgctx_data[0xe].method);
      }
    }
    uStack_1 = 0xffffffff;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              ((Object *)&DStack_6,
               (ExceptionArgument__Enum)
               MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_int>__Dispose__
               ,unaff_EDI);
    uStack_1 = 0xffffffff;
    pLStack_17 = (this->fields).rewards;
    if ((TypeInfo__LevelRewardAnimation____c->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    this_02 = TypeInfo__LevelRewardAnimation____c->static_fields->__9__23_0;
    if (this_02 ==
        (Func_2_System_Collections_Generic_KeyValuePair_2_System_Int32_System_Int32_Int32_ *)0x0) {
      if ((TypeInfo__LevelRewardAnimation____c->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      object = TypeInfo__LevelRewardAnimation____c->static_fields->__9;
      this_02 = (Func_2_System_Collections_Generic_KeyValuePair_2_System_Int32_System_Int32_Int32_ *
                )func_?();
      mscorlib.dll::System::Func`2[UnityEngine::Vector2Int,Int32]::
      Func_2_UnityEngine_Vector2Int_Int32___ctor
                ((Func_2_UnityEngine_Vector2Int_Int32_ *)this_02,(Object *)object,
                 MethodInfo__LevelRewardAnimation____c___Initialize_b__23_0_System__Collections__Generic__KeyValuePair<int,_int>_
                 ,(MethodInfo *)0x0);
      TypeInfo__LevelRewardAnimation____c->static_fields->__9__23_0 = this_02;
      func_?(&TypeInfo__LevelRewardAnimation____c->static_fields->__9__23_0);
    }
    source = System.Core.dll::System::Linq::Enumerable::Enumerable_OrderByDescending_1
                       ((IEnumerable_1_System_Object_ *)pLStack_17,(Func_2_Object_Int32_ *)this_02,
                        System__Linq__IOrderedEnumerable<System::Collections::Generic::KeyValuePair<int,_int>_>_MethodInfo__System__Linq__Enumerable__OrderByDescending<System::Collections::Generic::KeyValuePair<int,_int>,_int>_System__Collections__Generic__IEnumerable<System::Collections::Generic::KeyValuePair<int,_int>_>__System__Func<System::Collections::Generic::KeyValuePair<int,_int>,_int>_
                       );
    pLVar18 = System.Core.dll::System::Linq::Enumerable::Enumerable_ToList
                        ((IEnumerable_1_KeyValuePair_2_System_Int32_System_Int32_ *)source,
                         System__Collections__Generic__List<System::Collections::Generic::KeyValuePair<int,_int>_>_MethodInfo__System__Linq__Enumerable__ToList<System::Collections::Generic::KeyValuePair<int,_int>_>_System__Collections__Generic__IEnumerable<System::Collections::Generic::KeyValuePair<int,_int>_>_
                        );
    (this->fields).rewards = pLVar18;
    func_?();
    pTVar19 = (this->fields).header;
    if (pTVar19 != (Text *)0x0) {
      this_03 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)pTVar19,(MethodInfo *)0x0);
      if (this_03 != (GameObject *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (this_03,0,(MethodInfo *)0x0);
        pTVar19 = (this->fields).header;
        pSVar20 = TM::TM__(StringLiteral_LEVEL_UP_,(MethodInfo *)0x0);
        if (pTVar19 != (Text *)0x0) {
          (*(code *)(pTVar19->klass->vtable).set_text.method)
                    (pTVar19,pSVar20,
                     (pTVar19->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
          pRVar21 = (this->fields).prevLevelBadge;
          if (pRVar21 != (RawImage *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                      ((Behaviour *)pRVar21,0,(MethodInfo *)0x0);
            pRVar21 = (this->fields).nextLevelBadge;
            if (pRVar21 != (RawImage *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                        ((Behaviour *)pRVar21,0,(MethodInfo *)0x0);
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
  func_?();
  pcVar22 = (code *)swi(3);
  (*pcVar22)();
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::LevelRewardAnimation::LevelRewardAnimation_OnDestroy
               (LevelRewardAnimation *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
    func_?(&TypeInfo__BadgeManager);
    func_?(&
                    MethodInfo__LevelRewardAnimation__OnNextBadgeLoaded_UnityEngine__Networking__UnityWebRequest_
                   );
    func_?(&
                    MethodInfo__LevelRewardAnimation__OnPrevBadgeLoaded_UnityEngine__Networking__UnityWebRequest_
                   );
    cRam_? = '\x01';
  }
  pDVar1 = (DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
            *)func_?(TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
  DictionaryWithChangeEvent`2[TKey,TValue]+OnDictionaryChangeDelegate[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]::
  DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            (pDVar1,(Object *)this,
             MethodInfo__LevelRewardAnimation__OnPrevBadgeLoaded_UnityEngine__Networking__UnityWebRequest_
             ,(MethodInfo *)0x0);
  if ((TypeInfo__BadgeManager->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  BadgeManager::BadgeManager_UnsubscribeGetBadgeRequest
            ((Action_1_UnityEngine_Networking_UnityWebRequest_ *)pDVar1,(MethodInfo *)0x0);
  (this->fields).previousBadgeTextureAsset = (Texture2D *)0x0;
  func_?(&(this->fields).previousBadgeTextureAsset);
  pDVar1 = (DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
            *)func_?(TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
  DictionaryWithChangeEvent`2[TKey,TValue]+OnDictionaryChangeDelegate[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]::
  DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            (pDVar1,(Object *)this,
             MethodInfo__LevelRewardAnimation__OnNextBadgeLoaded_UnityEngine__Networking__UnityWebRequest_
             ,(MethodInfo *)0x0);
  BadgeManager::BadgeManager_UnsubscribeGetBadgeRequest
            ((Action_1_UnityEngine_Networking_UnityWebRequest_ *)pDVar1,(MethodInfo *)0x0);
  (this->fields).currentBadgeTextureAsset = (Texture2D *)0x0;
  func_?(&(this->fields).currentBadgeTextureAsset,0);
  return;
}


/* Void OnNextBadgeLoaded(UnityWebRequest) */

void Assembly-CSharp.dll::LevelRewardAnimation::LevelRewardAnimation_OnNextBadgeLoaded
               (LevelRewardAnimation *this,UnityWebRequest *www,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&StringLiteral_Error_downloading_nextLevel_badg);
    cRam_? = '\x01';
  }
  pTVar1 = UnityEngine.UnityWebRequestTextureModule.dll::UnityEngine::Networking::
           DownloadHandlerTexture::DownloadHandlerTexture_GetContent(www,(MethodInfo *)0x0);
  (this->fields).currentBadgeTextureAsset = pTVar1;
  func_?(&(this->fields).currentBadgeTextureAsset,pTVar1);
  pTVar1 = (this->fields).currentBadgeTextureAsset;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)pTVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 == 0) {
    if (www == (UnityWebRequest *)0x0) goto code_?;
    value = UnityEngine.UnityWebRequestModule.dll::UnityEngine::Networking::UnityWebRequest::
            UnityWebRequest_get_error(www,(MethodInfo *)0x0);
    bVar2 = mscorlib.dll::System::String::String_IsNullOrEmpty(value,(MethodInfo *)0x0);
    if (bVar2 == 0) goto code_?;
  }
  else {
code_?:
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
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
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void OnPrevBadgeLoaded(UnityWebRequest) */

void Assembly-CSharp.dll::LevelRewardAnimation::LevelRewardAnimation_OnPrevBadgeLoaded
               (LevelRewardAnimation *this,UnityWebRequest *www,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&StringLiteral_Error_downloading_prevLevel_badg);
    cRam_? = '\x01';
  }
  pTVar1 = UnityEngine.UnityWebRequestTextureModule.dll::UnityEngine::Networking::
           DownloadHandlerTexture::DownloadHandlerTexture_GetContent(www,(MethodInfo *)0x0);
  (this->fields).previousBadgeTextureAsset = pTVar1;
  func_?(&(this->fields).previousBadgeTextureAsset,pTVar1);
  pTVar1 = (this->fields).previousBadgeTextureAsset;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)pTVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 == 0) {
    if (www == (UnityWebRequest *)0x0) goto code_?;
    value = UnityEngine.UnityWebRequestModule.dll::UnityEngine::Networking::UnityWebRequest::
            UnityWebRequest_get_error(www,(MethodInfo *)0x0);
    bVar2 = mscorlib.dll::System::String::String_IsNullOrEmpty(value,(MethodInfo *)0x0);
    if (bVar2 == 0) goto code_?;
  }
  else {
code_?:
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
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
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void OnShow() */

void Assembly-CSharp.dll::LevelRewardAnimation::LevelRewardAnimation_OnShow
               (LevelRewardAnimation *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
    func_?(&TypeInfo__BadgeManager);
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&TypeInfo__System__Int32);
    func_?(&MethodInfo__System__Collections__Generic__KeyValuePair<int,_int>__get_Key__);
    func_?(&MethodInfo__System__Collections__Generic__KeyValuePair<int,_int>__get_Value__);
    func_?(&
                    MethodInfo__LevelRewardAnimation__OnNextBadgeLoaded_UnityEngine__Networking__UnityWebRequest_
                   );
    func_?(&
                    MethodInfo__LevelRewardAnimation__OnPrevBadgeLoaded_UnityEngine__Networking__UnityWebRequest_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<System::Collections::Generic::KeyValuePair<int,_int>_>__RemoveAt_int_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<System::Collections::Generic::KeyValuePair<int,_int>_>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<System::Collections::Generic::KeyValuePair<int,_int>_>__get_Item_int_
                   );
    func_?(&
                    MethodInfo__LevelRewardAnimation____c___OnShow_b__24_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__LevelRewardAnimation____c);
    func_?(&StringLiteral__0__);
    func_?(&StringLiteral_GOLD_);
    cRam_? = '\x01';
  }
  UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StopAllCoroutines
            ((MonoBehaviour *)this,(MethodInfo *)0x0);
  pLVar1 = (this->fields).rewards;
  if (pLVar1 != (List_1_KeyValuePair_2_System_Int32_System_Int32_ *)0x0) {
    if ((pLVar1->fields)._size < 1) {
      root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this,(MethodInfo *)0x0);
      if ((TypeInfo__LevelRewardAnimation____c->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__LevelRewardAnimation____c);
      }
      callbackFunction = TypeInfo__LevelRewardAnimation____c->static_fields->__9__24_0;
      if (callbackFunction == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
        if ((TypeInfo__LevelRewardAnimation____c->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__LevelRewardAnimation____c);
        }
        object = TypeInfo__LevelRewardAnimation____c->static_fields->__9;
        callbackFunction =
             (ExecuteEvents_EventFunction_1_IUIStack_ *)
             func_?(
                            TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                            );
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
        Object]::UnityAction_2_System_Object_System_Object___ctor
                  ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)object,
                   MethodInfo__LevelRewardAnimation____c___OnShow_b__24_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   ,(MethodInfo *)0x0);
        TypeInfo__LevelRewardAnimation____c->static_fields->__9__24_0 = callbackFunction;
        func_?(&TypeInfo__LevelRewardAnimation____c->static_fields->__9__24_0,
                        callbackFunction);
      }
      if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0)
      {
        func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                (root,(BaseEventData *)0x0,
                 (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                );
      return;
    }
    KVar2 = (KeyValuePair_2_System_Int32_System_Int32_)
            mscorlib.dll::System::Collections::Generic::List`1[System::Xml::Schema::
            XmlSchemaObjectTable+XmlSchemaObjectEntry]::
            List_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry__get_Item
                      ((List_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry_ *)
                       (this->fields).rewards,(pLVar1->fields)._size + -1,
                       MethodInfo__System__Collections__Generic__List<System::Collections::Generic::KeyValuePair<int,_int>_>__get_Item_int_
                      );
    pLVar1 = (this->fields).rewards;
    (this->fields).currentReward = KVar2;
    if (pLVar1 != (List_1_KeyValuePair_2_System_Int32_System_Int32_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::UIR::
      Implementation::UIRStylePainter+RepeatRectUV]::
      List_1_UnityEngine_UIElements_UIR_Implementation_UIRStylePainter_RepeatRectUV__RemoveAt
                ((List_1_UnityEngine_UIElements_UIR_Implementation_UIRStylePainter_RepeatRectUV_ *)
                 (this->fields).rewards,(pLVar1->fields)._size + -1,
                 MethodInfo__System__Collections__Generic__List<System::Collections::Generic::KeyValuePair<int,_int>_>__RemoveAt_int_
                );
      iVar3 = (this->fields).currentReward.key;
      pDVar4 = (DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                *)func_?();
      DictionaryWithChangeEvent`2[TKey,TValue]+OnDictionaryChangeDelegate[Unity::IL2CPP::Metadata::
      __Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]::
      DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
                (pDVar4,(Object *)this,
                 MethodInfo__LevelRewardAnimation__OnPrevBadgeLoaded_UnityEngine__Networking__UnityWebRequest_
                 ,(MethodInfo *)0x0);
      if ((TypeInfo__BadgeManager->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      BadgeManager::BadgeManager_GetBadgeTexture
                (iVar3 + -1,(Action_1_UnityEngine_Networking_UnityWebRequest_ *)pDVar4,
                 (MethodInfo *)0x0);
      level = (this->fields).currentReward.key;
      pDVar4 = (DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                *)func_?();
      DictionaryWithChangeEvent`2[TKey,TValue]+OnDictionaryChangeDelegate[Unity::IL2CPP::Metadata::
      __Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]::
      DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
                (pDVar4,(Object *)this,
                 MethodInfo__LevelRewardAnimation__OnNextBadgeLoaded_UnityEngine__Networking__UnityWebRequest_
                 ,(MethodInfo *)0x0);
      BadgeManager::BadgeManager_GetBadgeTexture
                (level,(Action_1_UnityEngine_Networking_UnityWebRequest_ *)pDVar4,(MethodInfo *)0x0)
      ;
      pTVar5 = (this->fields).goldText;
      pSVar6 = TM::TM__(StringLiteral_GOLD_,(MethodInfo *)0x0);
      pSVar6 = mscorlib.dll::System::String::String_Concat_3
                         (StringLiteral__0__,pSVar6,(MethodInfo *)0x0);
      pOVar7 = (Object *)func_?();
      pSVar6 = mscorlib.dll::System::String::String_Format(pSVar6,pOVar7,(MethodInfo *)0x0);
      if (pTVar5 != (Text *)0x0) {
        (*(code *)(pTVar5->klass->vtable).set_text.method)(pTVar5,pSVar6);
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        method_00 = TypeInfo__LevelRewardAnimation___DisplayAndFadePrevBadge_d__28;
        pOVar7 = (Object *)func_?();
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                  (pOVar7,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
        pOVar7[1].klass = (Object__Class *)0x0;
        pOVar7[2].klass = (Object__Class *)this;
        func_?(pOVar7 + 2,this);
        UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StartCoroutine_Auto
                  ((MonoBehaviour *)this,(IEnumerator *)pOVar7,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* LevelRewardAnimation() */

void Assembly-CSharp.dll::LevelRewardAnimation::LevelRewardAnimation__ctor
               (LevelRewardAnimation *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<System::Collections::Generic::KeyValuePair<int,_int>_>__List__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__List<System::Collections::Generic::KeyValuePair<int,_int>_>
                   );
    cRam_? = '\x01';
  }
  this_00 = (List_1_KeyValuePair_2_System_Int32_System_Int32_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__List<System::Collections::Generic::KeyValuePair<int,_int>_>
                           );
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_00,
             MethodInfo__System__Collections__Generic__List<System::Collections::Generic::KeyValuePair<int,_int>_>__List__
            );
  (this->fields).rewards = this_00;
  func_?(&(this->fields).rewards,this_00);
  UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour__ctor
            ((MonoBehaviour *)this,(MethodInfo *)0x0);
  return;
}

