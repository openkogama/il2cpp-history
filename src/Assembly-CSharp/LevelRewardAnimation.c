
/* IEnumerator DisplayAndFadeGoldIcon() */

IEnumerator *
Assembly-CSharp.dll::LevelRewardAnimation::LevelRewardAnimation_DisplayAndFadeGoldIcon
          (LevelRewardAnimation *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__LevelRewardAnimation___DisplayAndFadeGoldIcon_d__30);
    cRam_? = '\x01';
  }
  value = (Object *)func_?(TypeInfo__LevelRewardAnimation___DisplayAndFadeGoldIcon_d__30);
  if (value != (Object *)0x0) {
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              (value,ExceptionArgument__Enum_obj,unaff_ESI);
    value[1].klass = (Object__Class *)0x0;
    value[2].klass = (Object__Class *)this;
    func_?(value + 2,this);
    return (IEnumerator *)value;
  }
  func_?();
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
    func_?(&TypeInfo__LevelRewardAnimation___DisplayAndFadeNextBadge_d__29);
    cRam_? = '\x01';
  }
  value = (Object *)func_?(TypeInfo__LevelRewardAnimation___DisplayAndFadeNextBadge_d__29);
  if (value != (Object *)0x0) {
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              (value,ExceptionArgument__Enum_obj,unaff_ESI);
    value[1].klass = (Object__Class *)0x0;
    value[2].klass = (Object__Class *)this;
    func_?(value + 2,this);
    return (IEnumerator *)value;
  }
  func_?();
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
    func_?(&TypeInfo__LevelRewardAnimation___DisplayAndFadePrevBadge_d__28);
    cRam_? = '\x01';
  }
  value = (Object *)func_?(TypeInfo__LevelRewardAnimation___DisplayAndFadePrevBadge_d__28);
  if (value != (Object *)0x0) {
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              (value,ExceptionArgument__Enum_obj,unaff_ESI);
    value[1].klass = (Object__Class *)0x0;
    value[2].klass = (Object__Class *)this;
    func_?(value + 2,this);
    return (IEnumerator *)value;
  }
  func_?();
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
  DStack_6._dictionary = (Dictionary_2_System_Int32Enum_System_Int32Enum_ *)0x0;
  DStack_6._version = 0;
  DStack_6._index = 0;
  DStack_6._current.key = 0;
  if (levelRewards != (Dictionary_2_System_Int32_System_Int32_ *)0x0) {
    pDVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
              Object]::Dictionary_2_System_Object_System_Object__GetEnumerator
                        (&DStack_8,(Dictionary_2_System_Object_System_Object_ *)levelRewards,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_int>__GetEnumerator__
                        );
    uStack_9 = 0;
    DStack_6._dictionary = (Dictionary_2_System_Int32Enum_System_Int32Enum_ *)pDVar7->_dictionary;
    DStack_6._version = pDVar7->_version;
    DStack_6._index = pDVar7->_index;
    DStack_6._current.key = (int32_t)(pDVar7->_current).key;
    DStack_6._16_8_ = *(undefined8 *)&(pDVar7->_current).value;
    uStack_1 = 1;
    pDStack_10 = &DStack_6;
    while( true ) {
      bVar11 = mscorlib.dll::System::Collections::Generic::
              Dictionary`2[TKey,TValue]+Enumerator[System::Int32Enum,System::Int32Enum]::
              Dictionary_2_TKey_TValue_Enumerator_System_Int32Enum_System_Int32Enum__MoveNext
                        (&DStack_6,
                         MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_int>__MoveNext__
                        );
      pMVar12 = 
      MethodInfo__System__Collections__Generic__List<System::Collections::Generic::KeyValuePair<int,_int>_>__Add_System__Collections__Generic__KeyValuePair<int,_int>_
      ;
      if (bVar11 == 0) break;
      pLVar13 = (this->fields).rewards;
      iStack_14 = DStack_6._current.value;
      if (pLVar13 == (List_1_KeyValuePair_2_System_Int32_System_Int32_ *)0x0) goto code_?;
      piVar15 = &(pLVar13->fields)._version;
      *piVar15 = *piVar15 + 1;
      pKVar16 = (pLVar13->fields)._items;
      uVar17 = (pLVar13->fields)._size;
      if (pKVar16 == (KeyValuePair_2_System_Int32_System_Int32___Array *)0x0) goto code_?;
      if (uVar17 < pKVar16->max_length) {
        (pLVar13->fields)._size = uVar17 + 1;
        if (pKVar16->max_length <= uVar17) {
          func_?();
          goto code_?;
        }
        pKVar16->vector[uVar17].key = DStack_6._current.key;
        pKVar16->vector[uVar17].value = DStack_6._current.value;
      }
      else {
        (*(pMVar12->klass->rgctx_data[0xb].method)->virtualMethodPointer)
                  (pLVar13,DStack_6._current.key,DStack_6._current.value,
                   pMVar12->klass->rgctx_data[0xb].rgctxDataDummy);
      }
    }
    uStack_1 = 0xffffffff;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              ((Object *)&DStack_6,
               (ExceptionArgument__Enum)
               MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_int>__Dispose__
               ,unaff_EDI);
    uStack_1 = 0xffffffff;
    pLStack_18 = (this->fields).rewards;
    if ((TypeInfo__LevelRewardAnimation____c->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    this_01 = TypeInfo__LevelRewardAnimation____c->static_fields->__9__23_0;
    if (this_01 ==
        (Func_2_System_Collections_Generic_KeyValuePair_2_System_Int32_System_Int32_Int32_ *)0x0) {
      if ((TypeInfo__LevelRewardAnimation____c->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      object = TypeInfo__LevelRewardAnimation____c->static_fields->__9;
      this_01 = (Func_2_System_Collections_Generic_KeyValuePair_2_System_Int32_System_Int32_Int32_ *
                )func_?();
      if (this_01 ==
          (Func_2_System_Collections_Generic_KeyValuePair_2_System_Int32_System_Int32_Int32_ *)0x0)
      goto code_?;
      mscorlib.dll::System::Func`2[Newtonsoft::Json::Serialization::
      DefaultSerializationBinder+TypeNameKey,Object]::
      Func_2_Newtonsoft_Json_Serialization_DefaultSerializationBinder_TypeNameKey_Object___ctor
                ((Func_2_Newtonsoft_Json_Serialization_DefaultSerializationBinder_TypeNameKey_Object_
                  *)this_01,(Object *)object,
                 MethodInfo__LevelRewardAnimation____c___Initialize_b__23_0_System__Collections__Generic__KeyValuePair<int,_int>_
                 ,(MethodInfo *)0x0);
      TypeInfo__LevelRewardAnimation____c->static_fields->__9__23_0 = this_01;
      func_?(&TypeInfo__LevelRewardAnimation____c->static_fields->__9__23_0,this_01);
    }
    source = System.Core.dll::System::Linq::Enumerable::Enumerable_OrderByDescending_2
                       ((IEnumerable_1_System_Object_ *)pLStack_18,(Func_2_Object_Object_ *)this_01,
                        System__Linq__IOrderedEnumerable<System::Collections::Generic::KeyValuePair<int,_int>_>_MethodInfo__System__Linq__Enumerable__OrderByDescending<System::Collections::Generic::KeyValuePair<int,_int>,_int>_System__Collections__Generic__IEnumerable<System::Collections::Generic::KeyValuePair<int,_int>_>__System__Func<System::Collections::Generic::KeyValuePair<int,_int>,_int>_
                       );
    pLVar13 = System.Core.dll::System::Linq::Enumerable::Enumerable_ToList
                        ((IEnumerable_1_KeyValuePair_2_System_Int32_System_Int32_ *)source,
                         System__Collections__Generic__List<System::Collections::Generic::KeyValuePair<int,_int>_>_MethodInfo__System__Linq__Enumerable__ToList<System::Collections::Generic::KeyValuePair<int,_int>_>_System__Collections__Generic__IEnumerable<System::Collections::Generic::KeyValuePair<int,_int>_>_
                        );
    (this->fields).rewards = pLVar13;
    func_?();
    pTVar19 = (this->fields).header;
    if (pTVar19 != (Text *)0x0) {
      this_02 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)pTVar19,(MethodInfo *)0x0);
      if (this_02 != (GameObject *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (this_02,0,(MethodInfo *)0x0);
        pTVar19 = (this->fields).header;
        pSVar20 = TM::TM__(StringLiteral_LEVEL_UP_,(MethodInfo *)0x0);
        if (pTVar19 != (Text *)0x0) {
          (*(pTVar19->klass->vtable).set_text.methodPtr)
                    (pTVar19,pSVar20,(pTVar19->klass->vtable).set_text.method);
          pRVar21 = (this->fields).prevLevelBadge;
          if (pRVar21 != (RawImage *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                      ((Behaviour *)pRVar21,0,(MethodInfo *)0x0);
            pRVar21 = (this->fields).nextLevelBadge;
            if (pRVar21 != (RawImage *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                        ((Behaviour *)pRVar21,0,(MethodInfo *)0x0);
              this_00 = (this->fields).goldImage;
              if (this_00 != (Image *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                          ((Behaviour *)this_00,0,(MethodInfo *)0x0);
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
  pAVar1 = (Action_1_Object_ *)
           func_?(TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
  if (pAVar1 != (Action_1_Object_ *)0x0) {
    mscorlib.dll::System::Action`1[Object]::Action_1_Object___ctor
              (pAVar1,(Object *)this,
               MethodInfo__LevelRewardAnimation__OnPrevBadgeLoaded_UnityEngine__Networking__UnityWebRequest_
               ,(MethodInfo *)0x0);
    if ((TypeInfo__BadgeManager->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    BadgeManager::BadgeManager_UnsubscribeGetBadgeRequest
              ((Action_1_UnityEngine_Networking_UnityWebRequest_ *)pAVar1,(MethodInfo *)0x0);
    (this->fields).previousBadgeTextureAsset = (Texture2D *)0x0;
    func_?(&(this->fields).previousBadgeTextureAsset);
    pAVar1 = (Action_1_Object_ *)
             func_?(TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
    if (pAVar1 != (Action_1_Object_ *)0x0) {
      mscorlib.dll::System::Action`1[Object]::Action_1_Object___ctor
                (pAVar1,(Object *)this,
                 MethodInfo__LevelRewardAnimation__OnNextBadgeLoaded_UnityEngine__Networking__UnityWebRequest_
                 ,(MethodInfo *)0x0);
      BadgeManager::BadgeManager_UnsubscribeGetBadgeRequest
                ((Action_1_UnityEngine_Networking_UnityWebRequest_ *)pAVar1,(MethodInfo *)0x0);
      (this->fields).currentBadgeTextureAsset = (Texture2D *)0x0;
      func_?(&(this->fields).currentBadgeTextureAsset,0);
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
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
        if (callbackFunction == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0)
        goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
        Object]::UnityAction_2_System_Object_System_Object___ctor
                  ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)object,
                   MethodInfo__LevelRewardAnimation____c___OnShow_b__24_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   ,(MethodInfo *)0x0);
        TypeInfo__LevelRewardAnimation____c->static_fields->__9__24_0 = callbackFunction;
        func_?(&TypeInfo__LevelRewardAnimation____c->static_fields->__9__24_0);
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
            mscorlib.dll::System::Collections::Generic::
            List`1[TabMenuButtonAccessory+AccessoryTabDef]::
            List_1_TabMenuButtonAccessory_AccessoryTabDef__get_Item
                      ((List_1_TabMenuButtonAccessory_AccessoryTabDef_ *)(this->fields).rewards,
                       (pLVar1->fields)._size + -1,
                       MethodInfo__System__Collections__Generic__List<System::Collections::Generic::KeyValuePair<int,_int>_>__get_Item_int_
                      );
    pLVar1 = (this->fields).rewards;
    (this->fields).currentReward = KVar2;
    if (pLVar1 != (List_1_KeyValuePair_2_System_Int32_System_Int32_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
      RegexCharClass+SingleRange]::
      List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__RemoveAt
                ((List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                 (this->fields).rewards,(pLVar1->fields)._size + -1,
                 MethodInfo__System__Collections__Generic__List<System::Collections::Generic::KeyValuePair<int,_int>_>__RemoveAt_int_
                );
      iVar3 = (this->fields).currentReward.key;
      pAVar4 = (Action_1_Object_ *)func_?();
      if (pAVar4 != (Action_1_Object_ *)0x0) {
        mscorlib.dll::System::Action`1[Object]::Action_1_Object___ctor
                  (pAVar4,(Object *)this,
                   MethodInfo__LevelRewardAnimation__OnPrevBadgeLoaded_UnityEngine__Networking__UnityWebRequest_
                   ,(MethodInfo *)0x0);
        if ((TypeInfo__BadgeManager->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        BadgeManager::BadgeManager_GetBadgeTexture
                  (iVar3 + -1,(Action_1_UnityEngine_Networking_UnityWebRequest_ *)pAVar4,
                   (MethodInfo *)0x0);
        level = (this->fields).currentReward.key;
        pAVar4 = (Action_1_Object_ *)func_?();
        if (pAVar4 != (Action_1_Object_ *)0x0) {
          mscorlib.dll::System::Action`1[Object]::Action_1_Object___ctor
                    (pAVar4,(Object *)this,
                     MethodInfo__LevelRewardAnimation__OnNextBadgeLoaded_UnityEngine__Networking__UnityWebRequest_
                     ,(MethodInfo *)0x0);
          BadgeManager::BadgeManager_GetBadgeTexture
                    (level,(Action_1_UnityEngine_Networking_UnityWebRequest_ *)pAVar4,
                     (MethodInfo *)0x0);
          pTVar5 = (this->fields).goldText;
          pSVar6 = TM::TM__(StringLiteral_GOLD_,(MethodInfo *)0x0);
          pSVar6 = mscorlib.dll::System::String::String_Concat_3
                             (StringLiteral__0__,pSVar6,(MethodInfo *)0x0);
          method_00 = (MethodInfo *)(this->fields).currentReward.value;
          pOVar7 = (Object *)func_?(TypeInfo__System__Int32);
          pSVar6 = mscorlib.dll::System::String::String_Format(pSVar6,pOVar7,(MethodInfo *)0x0);
          if (pTVar5 != (Text *)0x0) {
            (*(pTVar5->klass->vtable).set_text.methodPtr)(pTVar5,pSVar6);
            if (cRam_? == '\0') {
              func_?();
              cRam_? = '\x01';
            }
            pOVar7 = (Object *)func_?();
            if (pOVar7 != (Object *)0x0) {
              mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                        (pOVar7,ExceptionArgument__Enum_obj,method_00);
              pOVar7[1].klass = (Object__Class *)0x0;
              pOVar7[2].klass = (Object__Class *)this;
              func_?(pOVar7 + 2);
              UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::
              MonoBehaviour_StartCoroutine_Auto
                        ((MonoBehaviour *)this,(IEnumerator *)pOVar7,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
code_?:
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
  if (this_00 != (List_1_KeyValuePair_2_System_Int32_System_Int32_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::LowLevelList`1[System::Object]::
    LowLevelList_1_System_Object___ctor
              ((LowLevelList_1_System_Object_ *)this_00,
               MethodInfo__System__Collections__Generic__List<System::Collections::Generic::KeyValuePair<int,_int>_>__List__
              );
    (this->fields).rewards = this_00;
    func_?(&(this->fields).rewards,this_00);
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform__ctor
              ((Transform *)this,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

