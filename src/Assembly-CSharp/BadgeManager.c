
/* Void GetBadgeTexture(Int32, Action`1[UnityEngine.Networking.UnityWebRequest]) */

void Assembly-CSharp.dll::BadgeManager::BadgeManager_GetBadgeTexture
               (int32_t level,Action_1_UnityEngine_Networking_UnityWebRequest_ *callback,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__AsyncWWWManager);
    func_?(&TypeInfo__BadgeManager);
    func_?(&TypeInfo__CachedTextureRequest);
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_BadgeUrlData>__ContainsKey_int_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_BadgeUrlData>__get_Item_int_
                   );
    func_?(&StringLiteral_Level_exceeds_defined_badges__Us);
    func_?(&StringLiteral_No_badges_was_loaded);
    func_?(&StringLiteral__Unity_2);
    cRam_? = '\x01';
  }
  if ((TypeInfo__BadgeManager->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__BadgeManager);
  }
  if (TypeInfo__BadgeManager->static_fields->maxLevelBadge == 0) {
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Debug);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
              ((Object *)StringLiteral_No_badges_was_loaded,(MethodInfo *)0x0);
    return;
  }
  if ((TypeInfo__BadgeManager->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__BadgeManager);
  }
  pDVar1 = TypeInfo__BadgeManager->static_fields->badgeUrls;
  if (pDVar1 != (Dictionary_2_System_Int32_BadgeUrlData_ *)0x0) {
    bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Single]::
            Dictionary_2_System_Int32_System_Single__ContainsKey
                      ((Dictionary_2_System_Int32_System_Single_ *)pDVar1,level,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_BadgeUrlData>__ContainsKey_int_
                      );
    if (bVar2 == 0) {
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Debug);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
                ((Object *)StringLiteral_Level_exceeds_defined_badges__Us,(MethodInfo *)0x0);
      if ((TypeInfo__BadgeManager->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__BadgeManager);
      }
      level = TypeInfo__BadgeManager->static_fields->maxLevelBadge;
    }
    if ((TypeInfo__BadgeManager->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__BadgeManager);
    }
    pDVar1 = TypeInfo__BadgeManager->static_fields->badgeUrls;
    if ((pDVar1 != (Dictionary_2_System_Int32_BadgeUrlData_ *)0x0) &&
       (pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                 Object]::Dictionary_2_System_Int32_System_Object__get_Item
                           ((Dictionary_2_System_Int32_System_Object_ *)pDVar1,level,
                            MethodInfo__System__Collections__Generic__Dictionary<int,_BadgeUrlData>__get_Item_int_
                           ), pOVar3 != (Object *)0x0)) {
      path = mscorlib.dll::System::String::String_Concat_3
                       ((String *)pOVar3[1].monitor,StringLiteral__Unity_2,(MethodInfo *)0x0);
      this = (CachedTextureRequest *)func_?();
      CachedTextureRequest::CachedTextureRequest__ctor
                (this,path,callback,WWWRequestPriority__Enum_WaitUntilSyncronizingIsDone,0,
                 (MethodInfo *)0x0);
      if ((TypeInfo__AsyncWWWManager->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      AsyncWWWManager::AsyncWWWManager_WWWRequest((AsyncWebRequest *)this,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Int32 GetFriendsLimit(Int32) */

int32_t Assembly-CSharp.dll::BadgeManager::BadgeManager_GetFriendsLimit
                  (int32_t level,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    func_?();
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__BadgeManager->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  pDVar1 = TypeInfo__BadgeManager->static_fields->badgeUrls;
  if (pDVar1 != (Dictionary_2_System_Int32_BadgeUrlData_ *)0x0) {
    bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Single]::
            Dictionary_2_System_Int32_System_Single__ContainsKey
                      ((Dictionary_2_System_Int32_System_Single_ *)pDVar1,level,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_BadgeUrlData>__ContainsKey_int_
                      );
    if (bVar2 == 0) {
      return 200;
    }
    if ((TypeInfo__BadgeManager->_1).cctor_finished_or_no_cctor == 0) {
      level = (int32_t)TypeInfo__BadgeManager;
      func_?();
    }
    pDVar1 = TypeInfo__BadgeManager->static_fields->badgeUrls;
    if (pDVar1 != (Dictionary_2_System_Int32_BadgeUrlData_ *)0x0) {
      pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
               Object]::Dictionary_2_System_Int32_System_Object__get_Item
                         ((Dictionary_2_System_Int32_System_Object_ *)pDVar1,level,
                          MethodInfo__System__Collections__Generic__Dictionary<int,_BadgeUrlData>__get_Item_int_
                         );
      if (pOVar3 != (Object *)0x0) {
        return (int32_t)pOVar3[2].klass;
      }
    }
  }
  uVar4 = func_?(&stack0xfffffff0);
  func_?(uVar4);
  pcVar5 = (code *)swi(3);
  iVar6 = (*pcVar5)();
  return iVar6;
}


/* Void Initialize(List`1[BadgeUrlData]) */

void Assembly-CSharp.dll::BadgeManager::BadgeManager_Initialize
               (List_1_BadgeUrlData_ *badgeUrlDatas,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffbc;
  puVar5 = &stack0xffffffbc;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__BadgeManager);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_BadgeUrlData>__Add_int__BadgeUrlData_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_BadgeUrlData>__ContainsKey_int_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<BadgeUrlData>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<BadgeUrlData>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<BadgeUrlData>__get_Current__
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<BadgeUrlData>__GetEnumerator__);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  if (badgeUrlDatas != (List_1_BadgeUrlData_ *)0x0) {
    pLVar6 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
             RegexCharClass+SingleRange]::
             List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                       (&LStack_7,
                        (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                        badgeUrlDatas,
                        MethodInfo__System__Collections__Generic__List<BadgeUrlData>__GetEnumerator__
                       );
    LStack_7._version = 0;
    uStack_1 = 1;
    RVar8 = pLVar6->_current;
    LStack_7._current = (RegexCharClass_SingleRange)&stack0xffffffc8;
    while( true ) {
      method_00 = RVar8;
      bVar9 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
              List_1_T_Enumerator_System_Object__MoveNext
                        ((List_1_T_Enumerator_System_Object_ *)&stack0xffffffc8,
                         MethodInfo__System__Collections__Generic__List_1_T___Enumerator<BadgeUrlData>__MoveNext__
                        );
      if (bVar9 == 0) {
        uStack_1 = 0xffffffff;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                  ((Object *)&stack0xffffffc8,
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__List_1_T___Enumerator<BadgeUrlData>__Dispose__
                   ,(MethodInfo *)method_00);
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
      if (method_00 == (RegexCharClass_SingleRange)0x0) break;
      iVar10 = *(int *)((int)method_00 + 8);
      RVar8 = method_00;
      if ((TypeInfo__BadgeManager->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      if (TypeInfo__BadgeManager->static_fields->maxLevelBadge < iVar10) {
        iVar11 = *(int32_t *)((int)method_00 + 8);
        if ((TypeInfo__BadgeManager->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__BadgeManager);
        }
        TypeInfo__BadgeManager->static_fields->maxLevelBadge = iVar11;
      }
      if ((TypeInfo__BadgeManager->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__BadgeManager);
      }
      pDVar12 = TypeInfo__BadgeManager->static_fields->badgeUrls;
      if (pDVar12 == (Dictionary_2_System_Int32_BadgeUrlData_ *)0x0) break;
      bVar9 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Single]
              ::Dictionary_2_System_Int32_System_Single__ContainsKey
                        ((Dictionary_2_System_Int32_System_Single_ *)pDVar12,
                         *(int32_t *)((int)method_00 + 8),
                         MethodInfo__System__Collections__Generic__Dictionary<int,_BadgeUrlData>__ContainsKey_int_
                        );
      if (bVar9 == 0) {
        if ((TypeInfo__BadgeManager->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        pDVar12 = TypeInfo__BadgeManager->static_fields->badgeUrls;
        if (pDVar12 == (Dictionary_2_System_Int32_BadgeUrlData_ *)0x0) break;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
        Dictionary_2_System_Int32_System_Object__Add
                  ((Dictionary_2_System_Int32_System_Object_ *)pDVar12,
                   *(int32_t *)((int)method_00 + 8),(Object *)method_00,
                   MethodInfo__System__Collections__Generic__Dictionary<int,_BadgeUrlData>__Add_int__BadgeUrlData_
                  );
      }
    }
  }
  func_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* Void Reset() */

void Assembly-CSharp.dll::BadgeManager::BadgeManager_Reset(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__BadgeManager);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_BadgeUrlData>__Dictionary__
                   );
    func_?(&TypeInfo__System__Collections__Generic__Dictionary<int,_BadgeUrlData>);
    cRam_? = '\x01';
  }
  this = (Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef_ *)
         func_?(TypeInfo__System__Collections__Generic__Dictionary<int,_BadgeUrlData>);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::TextCore::Text
  ::TextResourceManager+FontAssetRef]::
  Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef___ctor
            (this,
             MethodInfo__System__Collections__Generic__Dictionary<int,_BadgeUrlData>__Dictionary__);
  if ((TypeInfo__BadgeManager->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  TypeInfo__BadgeManager->static_fields->badgeUrls = (Dictionary_2_System_Int32_BadgeUrlData_ *)this
  ;
  func_?(TypeInfo__BadgeManager->static_fields);
  TypeInfo__BadgeManager->static_fields->maxLevelBadge = 0;
  return;
}


/* Void UnsubscribeGetBadgeRequest(Action`1[UnityEngine.Networking.UnityWebRequest]) */

void Assembly-CSharp.dll::BadgeManager::BadgeManager_UnsubscribeGetBadgeRequest
               (Action_1_UnityEngine_Networking_UnityWebRequest_ *callback,MethodInfo *method)

{
  if (cRam_? == '\0') {
    pAStack_1 = (AsyncWWWManager__Class *)&TypeInfo__AsyncWWWManager;
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__AsyncWWWManager->_1).cctor_finished_or_no_cctor == 0) {
    pAStack_1 = TypeInfo__AsyncWWWManager;
    func_?();
  }
  pAStack_1._0_1_ = 0xff;
  pAStack_1._1_3_ = 0xffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffff64;
  puVar5 = &stack0xffffff64;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__AsyncWWWManager);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<WWWRequestPriority,_System::Collections::Generic::Queue<AsyncWebRequest>_>__GetEnumerator__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<AsyncWebRequest>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<WWWRequestPriority,_System::Collections::Generic::Queue<AsyncWebRequest>_>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Queue_1_T___Enumerator<AsyncWebRequest>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<AsyncWebRequest>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<WWWRequestPriority,_System::Collections::Generic::Queue<AsyncWebRequest>_>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Queue_1_T___Enumerator<AsyncWebRequest>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<WWWRequestPriority,_System::Collections::Generic::Queue<AsyncWebRequest>_>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<AsyncWebRequest>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Queue_1_T___Enumerator<AsyncWebRequest>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__HashSet<AsyncWebRequest>__GetEnumerator__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<WWWRequestPriority,_System::Collections::Generic::Queue<AsyncWebRequest>_>__get_Value__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Queue<AsyncWebRequest>__GetEnumerator__
                   );
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  QStack_6._q = (Queue_1_System_Object_ *)0x0;
  QStack_6._version = 0;
  QStack_6._index = 0;
  QStack_6._currentElement = (Object *)0x0;
  if ((TypeInfo__AsyncWWWManager->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__AsyncWWWManager);
  }
  method_00 = (Action_1_UnityEngine_Networking_UnityWebRequest_ *)
              TypeInfo__AsyncWWWManager->static_fields->activeRequests;
  if (method_00 != (Action_1_UnityEngine_Networking_UnityWebRequest_ *)0x0) {
    pHVar7 = System.Core.dll::System::Collections::Generic::HashSet`1[System::UInt32]::
             HashSet_1_System_UInt32__GetEnumerator
                       (&HStack_8,(HashSet_1_System_UInt32_ *)method_00,
                        MethodInfo__System__Collections__Generic__HashSet<AsyncWebRequest>__GetEnumerator__
                       );
    QStack_9._q = (Queue_1_System_Object_ *)pHVar7->_set;
    QStack_9._version = pHVar7->_index;
    QStack_9._index = pHVar7->_version;
    QStack_9._currentElement = (Object *)pHVar7->_current;
    HStack_8._version = 0;
    pAStack_1._0_1_ = 1;
    pAStack_1._1_3_ = 0;
    HStack_8._current = (uint32_t)&QStack_9;
    while( true ) {
      bVar10 = System.Core.dll::System::Collections::Generic::HashSet`1[T]+Enumerator[System::Object]
              ::HashSet_1_T_Enumerator_System_Object__MoveNext
                        ((HashSet_1_T_Enumerator_System_Object_ *)&QStack_9,
                         MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<AsyncWebRequest>__MoveNext__
                        );
      if (bVar10 == 0) break;
      pOStack_11 = QStack_9._currentElement;
      if ((TypeInfo__AsyncWWWManager->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__AsyncWWWManager);
      }
      if (cRam_? == '\0') {
        func_?(&TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
        cRam_? = '\x01';
      }
      if (pOStack_11 == (Object *)0x0) goto code_?;
      method_00 = callback;
      bVar10 = mscorlib.dll::System::Delegate::Delegate_op_Equality
                        ((Delegate *)pOStack_11[1].klass,(Delegate *)callback,(MethodInfo *)0x0);
      if (bVar10 != 0) {
        pDStack_12 = mscorlib.dll::System::Delegate::Delegate_Remove
                               ((Delegate *)pOStack_11[1].klass,(Delegate *)callback,
                                (MethodInfo *)0x0);
        pAStack_13 = TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>;
        pOVar14 = (Object__Class *)0x0;
        if (pDStack_12 != (Delegate *)0x0) {
          pOVar14 = (Object__Class *)func_?();
          if (pOVar14 == (Object__Class *)0x0) {
            func_?();
            goto code_?;
          }
        }
        pOStack_11[1].klass = pOVar14;
        func_?();
      }
    }
    pAStack_1 = (AsyncWWWManager__Class *)0xffffffff;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              ((Object *)&QStack_9,
               (ExceptionArgument__Enum)
               MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<AsyncWebRequest>__Dispose__
               ,(MethodInfo *)method_00);
    pAStack_1._0_1_ = 0xff;
    pAStack_1._1_3_ = 0xffffff;
    if ((TypeInfo__AsyncWWWManager->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__AsyncWWWManager);
    }
    method_01 = (MethodInfo *)TypeInfo__AsyncWWWManager->static_fields->requests;
    if (method_01 != (MethodInfo *)0x0) {
      pDVar15 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::UInt32,System::
               Object]::Dictionary_2_System_UInt32_System_Object__GetEnumerator
                         ((Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object_ *)
                          auStack_16,(Dictionary_2_System_UInt32_System_Object_ *)method_01,
                          MethodInfo__System__Collections__Generic__Dictionary<WWWRequestPriority,_System::Collections::Generic::Queue<AsyncWebRequest>_>__GetEnumerator__
                         );
      uStack_17 = 0;
      uVar18 = *(undefined8 *)&(pDVar15->_current).value;
      pDStack_12 = (Delegate *)&stack0xffffff70;
      pAStack_1 = (AsyncWWWManager__Class *)0x0;
      while( true ) {
        pAStack_1._0_1_ = 4;
        bVar10 = mscorlib.dll::System::Collections::Generic::
                Dictionary`2[TKey,TValue]+Enumerator[System::UInt32,System::Object]::
                Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                          ((Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object_ *)
                           &stack0xffffff70,
                           MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<WWWRequestPriority,_System::Collections::Generic::Queue<AsyncWebRequest>_>__MoveNext__
                          );
        if (bVar10 == 0) break;
        pQStack_19 = (Queue_1_System_Object_ *)uVar18;
        if (pQStack_19 == (Queue_1_System_Object_ *)0x0) goto code_?;
        pQVar20 = mscorlib.dll::System::Collections::Generic::Queue`1[System::Object]::
                 Queue_1_System_Object__GetEnumerator
                           ((Queue_1_T_Enumerator_System_Object_ *)(auStack_16 + 8),pQStack_19,
                            MethodInfo__System__Collections__Generic__Queue<AsyncWebRequest>__GetEnumerator__
                           );
        HStack_8._version = 0;
        QStack_6._q = pQVar20->_q;
        QStack_6._version = pQVar20->_version;
        QStack_6._index = pQVar20->_index;
        QStack_6._currentElement = pQVar20->_currentElement;
        pAStack_1._0_1_ = 6;
        HStack_8._current = (uint32_t)&QStack_6;
        while( true ) {
          method_01 = (MethodInfo *)&UNK_?;
          bVar10 = mscorlib.dll::System::Collections::Generic::Queue`1[T]+Enumerator[System::Object]
                  ::Queue_1_T_Enumerator_System_Object__MoveNext
                            (&QStack_6,
                             MethodInfo__System__Collections__Generic__Queue_1_T___Enumerator<AsyncWebRequest>__MoveNext__
                            );
          if (bVar10 == 0) break;
          request = (AsyncWebRequest *)
                    mscorlib.dll::System::Collections::Generic::Queue`1[T]+Enumerator[System::
                    Object]::Queue_1_T_Enumerator_System_Object__get_Current
                              (&QStack_6,
                               MethodInfo__System__Collections__Generic__Queue_1_T___Enumerator<AsyncWebRequest>__get_Current__
                              );
          if ((TypeInfo__AsyncWWWManager->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          AsyncWWWManager::AsyncWWWManager_Unsubscribe(request,callback,(MethodInfo *)0x0);
        }
        pAStack_1 = (AsyncWWWManager__Class *)CONCAT31(pAStack_1._1_3_,4);
        mscorlib.dll::System::Collections::Generic::Queue`1[T]+Enumerator[System::Object]::
        Queue_1_T_Enumerator_System_Object__Dispose
                  (&QStack_6,
                   MethodInfo__System__Collections__Generic__Queue_1_T___Enumerator<AsyncWebRequest>__Dispose__
                  );
      }
      pAStack_1 = (AsyncWWWManager__Class *)0xffffffff;
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                ((Object *)pDStack_12,
                 (ExceptionArgument__Enum)
                 MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<WWWRequestPriority,_System::Collections::Generic::Queue<AsyncWebRequest>_>__Dispose__
                 ,method_01);
      pAStack_1._0_1_ = 0xff;
      pAStack_1._1_3_ = 0xffffff;
      if ((TypeInfo__AsyncWWWManager->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__AsyncWWWManager);
      }
      this = TypeInfo__AsyncWWWManager->static_fields->cache;
      if (this != (AsyncWWWManager_Cache *)0x0) {
        AsyncWWWManager+Cache::AsyncWWWManager_Cache_UnsubscribeCached
                  (this,callback,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
    }
  }
code_?:
  uVar21 = func_?();
  uVar21 = func_?(uVar21);
  func_?(uVar21);
  pcVar22 = (code *)swi(3);
  (*pcVar22)();
  return;
}


/* BadgeManager() */

void Assembly-CSharp.dll::BadgeManager::BadgeManager__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__BadgeManager);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_BadgeUrlData>__Dictionary__
                   );
    func_?(&TypeInfo__System__Collections__Generic__Dictionary<int,_BadgeUrlData>);
    cRam_? = '\x01';
  }
  this = (Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef_ *)
         func_?(TypeInfo__System__Collections__Generic__Dictionary<int,_BadgeUrlData>);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::TextCore::Text
  ::TextResourceManager+FontAssetRef]::
  Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef___ctor
            (this,
             MethodInfo__System__Collections__Generic__Dictionary<int,_BadgeUrlData>__Dictionary__);
  TypeInfo__BadgeManager->static_fields->badgeUrls = (Dictionary_2_System_Int32_BadgeUrlData_ *)this
  ;
  func_?(TypeInfo__BadgeManager->static_fields,this);
  TypeInfo__BadgeManager->static_fields->maxLevelBadge = 0;
  return;
}

