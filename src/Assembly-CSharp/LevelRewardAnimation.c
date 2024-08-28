
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
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  value[1].klass = (Object__Class *)0x0;
  value[2].klass = (Object__Class *)this;
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
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  value[1].klass = (Object__Class *)0x0;
  value[2].klass = (Object__Class *)this;
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
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  value[1].klass = (Object__Class *)0x0;
  value[2].klass = (Object__Class *)this;
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
  puStack_4 = &stack0xffffff98;
  puVar5 = &stack0xffffff98;
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
    in_stack_6 =
         &TypeInfo__System__Func<System::Collections::Generic::KeyValuePair<int,_int>,_int>;
    func_?();
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
  if (levelRewards != (Dictionary_2_System_Int32_System_Int32_ *)0x0) {
    pDVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::UInt32,System::
              Object]::Dictionary_2_System_UInt32_System_Object__GetEnumerator
                        (&DStack_8,(Dictionary_2_System_UInt32_System_Object_ *)levelRewards,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_int>__GetEnumerator__
                        );
    uStack_9 = 0;
    DStack_10._dictionary = (Dictionary_2_System_UInt32_System_Int32_ *)pDVar7->_dictionary;
    DStack_10._version = pDVar7->_version;
    DStack_10._index = pDVar7->_index;
    DStack_10._current.key = (pDVar7->_current).key;
    DStack_10._16_8_ = *(undefined8 *)&(pDVar7->_current).value;
    uStack_1 = 1;
    pDStack_11 = &DStack_10;
    while( true ) {
      bVar12 = mscorlib.dll::System::Collections::Generic::
              Dictionary`2[TKey,TValue]+Enumerator[System::UInt32,System::Int32]::
              Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Int32__MoveNext
                        (&DStack_10,
                         MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_int>__MoveNext__
                        );
      pMVar13 = 
      MethodInfo__System__Collections__Generic__List<System::Collections::Generic::KeyValuePair<int,_int>_>__Add_System__Collections__Generic__KeyValuePair<int,_int>_
      ;
      if (bVar12 == 0) break;
      this_00 = (List_1_UnityEngine_UIElements_UIR_BitmapAllocator32_Page_ *)(this->fields).rewards;
      iStack_14 = DStack_10._current.value;
      if (this_00 == (List_1_UnityEngine_UIElements_UIR_BitmapAllocator32_Page_ *)0x0)
      goto code_?;
      piVar15 = &(this_00->fields)._version;
      *piVar15 = *piVar15 + 1;
      pBVar16 = (this_00->fields)._items;
      uVar17 = (this_00->fields)._size;
      if (pBVar16 == (BitmapAllocator32_Page__Array *)0x0) goto code_?;
      if (uVar17 < pBVar16->max_length) {
        (this_00->fields)._size = uVar17 + 1;
        if (pBVar16->max_length <= uVar17) {
          func_?();
          goto code_?;
        }
        pBVar16->vector[uVar17].x = (undefined2)DStack_10._current.key;
        pBVar16->vector[uVar17].y = DStack_10._current.key._2_2_;
        pBVar16->vector[uVar17].freeSlots = DStack_10._current.value;
      }
      else {
        item.freeSlots = DStack_10._current.value;
        item.x = (undefined2)DStack_10._current.key;
        item.y = DStack_10._current.key._2_2_;
        mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::UIR::
        BitmapAllocator32+Page]::
        List_1_UnityEngine_UIElements_UIR_BitmapAllocator32_Page__AddWithResize
                  (this_00,item,pMVar13->klass->rgctx_data[0xe].method);
      }
    }
    uStack_1 = 0xffffffff;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
              ((Object *)&DStack_10,
               (ExceptionArgument__Enum)
               MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_int>__Dispose__
               ,(MethodInfo *)in_stack_6);
    uStack_1 = 0xffffffff;
    pLStack_18 = (this->fields).rewards;
    if ((TypeInfo__LevelRewardAnimation____c->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__LevelRewardAnimation____c);
    }
    this_02 = TypeInfo__LevelRewardAnimation____c->static_fields->__9__23_0;
    if (this_02 ==
        (Func_2_System_Collections_Generic_KeyValuePair_2_System_Int32_System_Int32_Int32_ *)0x0) {
      if ((TypeInfo__LevelRewardAnimation____c->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__LevelRewardAnimation____c);
      }
      object = TypeInfo__LevelRewardAnimation____c->static_fields->__9;
      this_02 = (Func_2_System_Collections_Generic_KeyValuePair_2_System_Int32_System_Int32_Int32_ *
                )func_?(
                                TypeInfo__System__Func<System::Collections::Generic::KeyValuePair<int,_int>,_int>
                                );
      mscorlib.dll::System::Func`2[UnityEngine::Vector2Int,Int32]::
      Func_2_UnityEngine_Vector2Int_Int32___ctor
                ((Func_2_UnityEngine_Vector2Int_Int32_ *)this_02,(Object *)object,
                 MethodInfo__LevelRewardAnimation____c___Initialize_b__23_0_System__Collections__Generic__KeyValuePair<int,_int>_
                 ,(MethodInfo *)0x0);
      TypeInfo__LevelRewardAnimation____c->static_fields->__9__23_0 = this_02;
      func_?(&TypeInfo__LevelRewardAnimation____c->static_fields->__9__23_0,this_02);
    }
    source = System.Core.dll::System::Linq::Enumerable::Enumerable_OrderByDescending_1
                       ((IEnumerable_1_System_Object_ *)pLStack_18,(Func_2_Object_Int32_ *)this_02,
                        System__Linq__IOrderedEnumerable<System::Collections::Generic::KeyValuePair<int,_int>_>_MethodInfo__System__Linq__Enumerable__OrderByDescending<System::Collections::Generic::KeyValuePair<int,_int>,_int>_System__Collections__Generic__IEnumerable<System::Collections::Generic::KeyValuePair<int,_int>_>__System__Func<System::Collections::Generic::KeyValuePair<int,_int>,_int>_
                       );
    pLVar19 = System.Core.dll::System::Linq::Enumerable::Enumerable_ToList
                        ((IEnumerable_1_KeyValuePair_2_System_Int32_System_Int32_ *)source,
                         System__Collections__Generic__List<System::Collections::Generic::KeyValuePair<int,_int>_>_MethodInfo__System__Linq__Enumerable__ToList<System::Collections::Generic::KeyValuePair<int,_int>_>_System__Collections__Generic__IEnumerable<System::Collections::Generic::KeyValuePair<int,_int>_>_
                        );
    if (this != (LevelRewardAnimation *)0x0) {
      ppLVar20 = &(this->fields).rewards;
      *ppLVar20 = pLVar19;
      func_?(ppLVar20,pLVar19);
      pTVar21 = (this->fields).header;
      if (pTVar21 != (Text *)0x0) {
        this_03 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)pTVar21,(MethodInfo *)0x0);
        if (this_03 != (GameObject *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (this_03,0,(MethodInfo *)0x0);
          pTVar21 = (this->fields).header;
          pSVar22 = TM::TM__(StringLiteral_LEVEL_UP_,(MethodInfo *)0x0);
          if (pTVar21 != (Text *)0x0) {
            (*(code *)(pTVar21->klass->vtable).set_text.method)
                      (pTVar21,pSVar22,
                       (pTVar21->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
            pRVar23 = (this->fields).prevLevelBadge;
            if (pRVar23 != (RawImage *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                        ((Behaviour *)pRVar23,0,(MethodInfo *)0x0);
              pRVar23 = (this->fields).nextLevelBadge;
              if (pRVar23 != (RawImage *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                          ((Behaviour *)pRVar23,0,(MethodInfo *)0x0);
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
  }
code_?:
  uVar24 = func_?();
  func_?(uVar24);
  pcVar25 = (code *)swi(3);
  (*pcVar25)();
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
  this_00 = (DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
             *)func_?(TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
  DictionaryWithChangeEvent`2[TKey,TValue]+OnDictionaryChangeDelegate[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]::
  DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            (this_00,(Object *)this,
             MethodInfo__LevelRewardAnimation__OnPrevBadgeLoaded_UnityEngine__Networking__UnityWebRequest_
             ,(MethodInfo *)0x0);
  if ((TypeInfo__BadgeManager->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  BadgeManager::BadgeManager_UnsubscribeGetBadgeRequest
            ((Action_1_UnityEngine_Networking_UnityWebRequest_ *)this_00,(MethodInfo *)0x0);
  ppTVar1 = &(this->fields).previousBadgeTextureAsset;
  *ppTVar1 = (Texture2D *)0x0;
  func_?(ppTVar1,&stack0xfffffffc,&UNK_?);
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
  ppTVar2 = &(this->fields).currentBadgeTextureAsset;
  *ppTVar2 = pTVar1;
  func_?(ppTVar2,pTVar1);
  pTVar1 = *ppTVar2;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)pTVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar3 == 0) {
    if (www == (UnityWebRequest *)0x0) goto code_?;
    value = UnityEngine.UnityWebRequestModule.dll::UnityEngine::Networking::UnityWebRequest::
            UnityWebRequest_get_error(www,(MethodInfo *)0x0);
    bVar3 = mscorlib.dll::System::String::String_IsNullOrEmpty(value,(MethodInfo *)0x0);
    if (bVar3 == 0) goto code_?;
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
              (this_00,(Texture *)*ppTVar2,(MethodInfo *)0x0);
    return;
  }
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
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
  ppTVar2 = &(this->fields).previousBadgeTextureAsset;
  *ppTVar2 = pTVar1;
  func_?(ppTVar2,pTVar1);
  pTVar1 = *ppTVar2;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)pTVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar3 == 0) {
    if (www == (UnityWebRequest *)0x0) goto code_?;
    value = UnityEngine.UnityWebRequestModule.dll::UnityEngine::Networking::UnityWebRequest::
            UnityWebRequest_get_error(www,(MethodInfo *)0x0);
    bVar3 = mscorlib.dll::System::String::String_IsNullOrEmpty(value,(MethodInfo *)0x0);
    if (bVar3 == 0) goto code_?;
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
              (this_00,(Texture *)*ppTVar2,(MethodInfo *)0x0);
    return;
  }
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
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
  this_00 = (this->fields).rewards;
  if (this_00 != (List_1_KeyValuePair_2_System_Int32_System_Int32_ *)0x0) {
    if ((this_00->fields)._size < 1) {
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
    KVar1 = (KeyValuePair_2_System_Int32_System_Int32_)
            mscorlib.dll::System::Collections::Generic::List`1[System::Xml::Schema::
            XmlSchemaObjectTable+XmlSchemaObjectEntry]::
            List_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry__get_Item
                      ((List_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry_ *)
                       this_00,(this_00->fields)._size + -1,
                       MethodInfo__System__Collections__Generic__List<System::Collections::Generic::KeyValuePair<int,_int>_>__get_Item_int_
                      );
    this_01 = (List_1_UnityEngine_UIElements_UIR_Implementation_UIRStylePainter_RepeatRectUV_ *)
              (this->fields).rewards;
    (this->fields).currentReward = KVar1;
    if (this_01 !=
        (List_1_UnityEngine_UIElements_UIR_Implementation_UIRStylePainter_RepeatRectUV_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::UIR::
      Implementation::UIRStylePainter+RepeatRectUV]::
      List_1_UnityEngine_UIElements_UIR_Implementation_UIRStylePainter_RepeatRectUV__RemoveAt
                (this_01,(this_01->fields)._size + -1,
                 MethodInfo__System__Collections__Generic__List<System::Collections::Generic::KeyValuePair<int,_int>_>__RemoveAt_int_
                );
      iVar2 = (this->fields).currentReward.key;
      pDVar3 = (DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                *)func_?();
      DictionaryWithChangeEvent`2[TKey,TValue]+OnDictionaryChangeDelegate[Unity::IL2CPP::Metadata::
      __Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]::
      DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
                (pDVar3,(Object *)this,
                 MethodInfo__LevelRewardAnimation__OnPrevBadgeLoaded_UnityEngine__Networking__UnityWebRequest_
                 ,(MethodInfo *)0x0);
      if ((TypeInfo__BadgeManager->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      BadgeManager::BadgeManager_GetBadgeTexture
                (iVar2 + -1,(Action_1_UnityEngine_Networking_UnityWebRequest_ *)pDVar3,
                 (MethodInfo *)0x0);
      level = (this->fields).currentReward.key;
      pDVar3 = (DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                *)func_?();
      DictionaryWithChangeEvent`2[TKey,TValue]+OnDictionaryChangeDelegate[Unity::IL2CPP::Metadata::
      __Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]::
      DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
                (pDVar3,(Object *)this,
                 MethodInfo__LevelRewardAnimation__OnNextBadgeLoaded_UnityEngine__Networking__UnityWebRequest_
                 ,(MethodInfo *)0x0);
      BadgeManager::BadgeManager_GetBadgeTexture
                (level,(Action_1_UnityEngine_Networking_UnityWebRequest_ *)pDVar3,(MethodInfo *)0x0)
      ;
      pTVar4 = (this->fields).goldText;
      pSVar5 = TM::TM__(StringLiteral_GOLD_,(MethodInfo *)0x0);
      pSVar5 = mscorlib.dll::System::String::String_Concat_3
                         (StringLiteral__0__,pSVar5,(MethodInfo *)0x0);
      pOVar6 = (Object *)func_?();
      pSVar5 = mscorlib.dll::System::String::String_Format(pSVar5,pOVar6,(MethodInfo *)0x0);
      if (pTVar4 != (Text *)0x0) {
        (*(code *)(pTVar4->klass->vtable).set_text.method)(pTVar4,pSVar5);
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        method_00 = TypeInfo__LevelRewardAnimation___DisplayAndFadePrevBadge_d__28;
        pOVar6 = (Object *)func_?();
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                  (pOVar6,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
        pOVar6[1].klass = (Object__Class *)0x0;
        pOVar6[2].klass = (Object__Class *)this;
        func_?(pOVar6 + 2,this);
        UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StartCoroutine_Auto
                  ((MonoBehaviour *)this,(IEnumerator *)pOVar6,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
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
  ppLVar1 = &(this->fields).rewards;
  *ppLVar1 = this_00;
  func_?(ppLVar1,this_00);
  UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour__ctor
            ((MonoBehaviour *)this,(MethodInfo *)0x0);
  return;
}

