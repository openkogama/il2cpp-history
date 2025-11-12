
/* Void GetBadgeTexture(Int32, Action`1[UnityEngine.Networking.UnityWebRequest]) */

void Assembly-CSharp.dll::BadgeManager::BadgeManager_GetBadgeTexture
               (int32_t level,Action_1_UnityEngine_Networking_UnityWebRequest_ *callback,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__AsyncWWWManager);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__BadgeManager);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CachedTextureRequest);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_BadgeUrlData>__ContainsKey_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_BadgeUrlData>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Level_exceeds_defined_badges__Us);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_No_badges_was_loaded);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__Unity_2);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__BadgeManager->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (TypeInfo__BadgeManager->static_fields->maxLevelBadge == 0) {
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    pSVar1 = StringLiteral_No_badges_was_loaded;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Debug,0);
      LOCK();
      UNLOCK();
      FUN_?(&TypeInfo__UnityEngine__ILogger);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Debug);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    pIVar2 = TypeInfo__UnityEngine__Debug->static_fields->s_Logger;
    if (pIVar2 != (ILogger_1 *)0x0) {
      FUN_?(6,TypeInfo__UnityEngine__ILogger,pIVar2,0,pSVar1);
      return;
    }
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (*(int *)&(TypeInfo__BadgeManager->_1).field_0x1c == 0) {
    FUN_?();
  }
  this_00 = (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)
            TypeInfo__BadgeManager->static_fields->badgeUrls;
  if (this_00 != (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)0x0) {
    iVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
            Vector3]::Dictionary_2_System_Int32_UnityEngine_Vector3__FindEntry
                      (this_00,level,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_BadgeUrlData>__ContainsKey_int_
                       ->klass->rgctx_data[0x21].method);
    if (iVar4 < 0) {
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
                ((Object *)StringLiteral_Level_exceeds_defined_badges__Us,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__BadgeManager->_1).field_0x1c == 0) {
        FUN_?();
      }
      level = TypeInfo__BadgeManager->static_fields->maxLevelBadge;
    }
    if (*(int *)&(TypeInfo__BadgeManager->_1).field_0x1c == 0) {
      FUN_?();
    }
    this_01 = TypeInfo__BadgeManager->static_fields->badgeUrls;
    if ((this_01 != (Dictionary_2_System_Int32_BadgeUrlData_ *)0x0) &&
       (pOVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                 Object]::Dictionary_2_System_Int32_System_Object__get_Item
                           ((Dictionary_2_System_Int32_System_Object_ *)this_01,level,
                            MethodInfo__System__Collections__Generic__Dictionary<int,_BadgeUrlData>__get_Item_int_
                           ), pOVar5 != (Object *)0x0)) {
      pSVar1 = mscorlib.dll::System::String::String_Concat_4
                          ((String *)pOVar5[1].monitor,StringLiteral__Unity_2,(MethodInfo *)0x0);
      this_02 = (AsyncWebRequest *)FUN_?(TypeInfo__CachedTextureRequest);
      AsyncWebRequest::AsyncWebRequest__ctor
                (this_02,pSVar1,callback,WWWRequestPriority__Enum_WaitUntilSyncronizingIsDone,
                 (MethodInfo *)0x0);
      *(undefined1 *)&this_02[1].klass = 0;
      if (*(int *)&(TypeInfo__AsyncWWWManager->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__AsyncWWWManager,0);
        LOCK();
        UNLOCK();
        FUN_?(&TypeInfo__CachedGetRequest);
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<WWWRequestPriority,_System::Collections::Generic::Queue<AsyncWebRequest>_>__get_Item_WWWRequestPriority_
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Queue<AsyncWebRequest>__Enqueue_AsyncWebRequest_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__AsyncWWWManager->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__AsyncWWWManager);
      }
      if (TypeInfo__AsyncWWWManager->static_fields->isQuiting == 0) {
        if (this_02 != (AsyncWebRequest *)0x0) {
          bVar6 = (TypeInfo__CachedGetRequest->_1).naturalAligment;
          if ((bVar6 <= (this_02->klass->_1).naturalAligment) &&
             ((this_02->klass->_1).typeHierarchy[(ulonglong)bVar6 - 1] ==
              (Il2CppClass *)TypeInfo__CachedGetRequest)) {
            if (*(int *)&(TypeInfo__AsyncWWWManager->_1).field_0x1c == 0) {
              FUN_?(TypeInfo__AsyncWWWManager);
            }
            pAVar7 = this_02->klass;
            bVar6 = (TypeInfo__CachedGetRequest->_1).naturalAligment;
            if (((pAVar7->_1).naturalAligment < bVar6) ||
               ((pAVar7->_1).typeHierarchy[(ulonglong)bVar6 - 1] !=
                (Il2CppClass *)TypeInfo__CachedGetRequest)) {
              FUN_?(this_02,TypeInfo__CachedGetRequest,TypeInfo__CachedGetRequest,pAVar7,
                            unaff_RBX);
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            cVar8 = (*(code *)pAVar7[1]._0.image)
                              (this_02,TypeInfo__AsyncWWWManager->static_fields->cache,
                               pAVar7[1]._0.gc_desc);
            if (cVar8 != '\0') {
              return;
            }
          }
        }
        if (*(int *)&(TypeInfo__AsyncWWWManager->_1).field_0x1c == 0) {
          FUN_?(TypeInfo__AsyncWWWManager);
        }
        this = TypeInfo__AsyncWWWManager->static_fields->requests;
        if (((this_02 != (AsyncWebRequest *)0x0) &&
            (this != (Dictionary_2_WWWRequestPriority_Queue_1_AsyncWebRequest_ *)0x0)) &&
           (pOVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                     Int32Enum,System::Object]::
                     Dictionary_2_System_Int32Enum_System_Object__get_Item
                               ((Dictionary_2_System_Int32Enum_System_Object_ *)this,
                                (this_02->fields).requestPriority,
                                MethodInfo__System__Collections__Generic__Dictionary<WWWRequestPriority,_System::Collections::Generic::Queue<AsyncWebRequest>_>__get_Item_WWWRequestPriority_
                               ), pOVar5 != (Object *)0x0)) {
          if (pOVar5[1].klass != (Object__Class *)0x0) {
            if (*(int *)&pOVar5[2].klass == *(int *)&((pOVar5[1].klass)->_0).namespaze) {
              pOVar9 = pOVar5[1].klass;
              iVar10 = *(int *)&(pOVar9->_0).namespaze * 2;
              if (iVar10 < *(int *)&(pOVar9->_0).namespaze + 4) {
                iVar10 = *(int *)&(pOVar9->_0).namespaze + 4;
              }
              FUN_?(pOVar5,iVar10,
                            MethodInfo__System__Collections__Generic__Queue<AsyncWebRequest>__Enqueue_AsyncWebRequest_
                            ->klass->rgctx_data[5].rgctxDataDummy);
            }
            if (pOVar5[1].klass != (Object__Class *)0x0) {
              FUN_?(pOVar5[1].klass,(longlong)*(int *)((longlong)&pOVar5[1].monitor + 4),
                            this_02);
              if (pOVar5[1].klass != (Object__Class *)0x0) {
                iVar11 = *(int *)((longlong)&pOVar5[1].monitor + 4) + 1;
                iVar10 = 0;
                if (iVar11 != *(int *)&((pOVar5[1].klass)->_0).namespaze) {
                  iVar10 = iVar11;
                }
                *(int *)((longlong)&pOVar5[1].monitor + 4) = iVar10;
                *(int *)&pOVar5[2].klass = *(int *)&pOVar5[2].klass + 1;
                piVar12 = (int *)((longlong)&pOVar5[2].klass + 4);
                *piVar12 = *piVar12 + 1;
                return;
              }
            }
          }
          FUN_?();
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        FUN_?();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      return;
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Int32 GetFriendsLimit(Int32) */

int32_t Assembly-CSharp.dll::BadgeManager::BadgeManager_GetFriendsLimit
                  (int32_t level,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__BadgeManager);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_BadgeUrlData>__ContainsKey_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_BadgeUrlData>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__BadgeManager->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__BadgeManager);
  }
  this = (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)
         TypeInfo__BadgeManager->static_fields->badgeUrls;
  if (this != (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)0x0) {
    iVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
            Vector3]::Dictionary_2_System_Int32_UnityEngine_Vector3__FindEntry
                      (this,level,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_BadgeUrlData>__ContainsKey_int_
                       ->klass->rgctx_data[0x21].method);
    if (iVar1 < 0) {
      return 200;
    }
    if (*(int *)&(TypeInfo__BadgeManager->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__BadgeManager);
    }
    this_00 = TypeInfo__BadgeManager->static_fields->badgeUrls;
    if (this_00 != (Dictionary_2_System_Int32_BadgeUrlData_ *)0x0) {
      pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
               Object]::Dictionary_2_System_Int32_System_Object__get_Item
                         ((Dictionary_2_System_Int32_System_Object_ *)this_00,level,
                          MethodInfo__System__Collections__Generic__Dictionary<int,_BadgeUrlData>__get_Item_int_
                         );
      if (pOVar2 != (Object *)0x0) {
        return *(int32_t *)&pOVar2[2].klass;
      }
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  iVar1 = (*pcVar3)();
  return iVar1;
}


/* Void Initialize(List`1[BadgeUrlData]) */

void Assembly-CSharp.dll::BadgeManager::BadgeManager_Initialize
               (List_1_BadgeUrlData_ *badgeUrlDatas,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__BadgeManager);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_BadgeUrlData>__Add_int__BadgeUrlData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_BadgeUrlData>__ContainsKey_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<BadgeUrlData>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<BadgeUrlData>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<BadgeUrlData>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (badgeUrlDatas == (List_1_BadgeUrlData_ *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (iRam_? != 0) {
    uVar2 = (uint)((ulonglong)&uStack_3 >> 0xc);
    puVar4 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar5 = *puVar4;
      LOCK();
      uVar6 = *puVar4;
      if (uVar5 == uVar6) {
        *puVar4 = uVar5 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (uVar5 != uVar6);
  }
  pLStack_7 = (List_1_T_Enumerator_System_Object_ *)
               ((ulonglong)(uint)(badgeUrlDatas->fields)._version << 0x20);
  uStack_8 = 0;
  LStack_9._8_8_ = pLStack_7;
  LStack_9._current = (Object *)0x0;
  uStack_3 = 0;
  pLStack_7 = &LStack_9;
  LStack_9._list = (List_1_System_Object_ *)badgeUrlDatas;
code_?:
  bVar10 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
          List_1_T_Enumerator_System_Object__MoveNext
                    (&LStack_9,
                     MethodInfo__System__Collections__Generic__List_1_T___Enumerator<BadgeUrlData>__MoveNext__
                    );
  value = LStack_9._current;
  if (bVar10 == 0) {
    return;
  }
  if (LStack_9._current == (Object *)0x0) goto code_?;
  iVar11 = *(int *)&LStack_9._current[1].klass;
  if (*(int *)&(TypeInfo__BadgeManager->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__BadgeManager);
  }
  if (TypeInfo__BadgeManager->static_fields->maxLevelBadge < iVar11) {
    iVar12 = *(int32_t *)&value[1].klass;
    if (*(int *)&(TypeInfo__BadgeManager->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__BadgeManager);
    }
    TypeInfo__BadgeManager->static_fields->maxLevelBadge = iVar12;
  }
  if (*(int *)&(TypeInfo__BadgeManager->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__BadgeManager);
  }
  this = (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)
         TypeInfo__BadgeManager->static_fields->badgeUrls;
  if (this != (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)0x0) goto code_?;
  goto code_?;
code_?:
  iVar12 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
          Vector3]::Dictionary_2_System_Int32_UnityEngine_Vector3__FindEntry
                    (this,*(int32_t *)&value[1].klass,
                     MethodInfo__System__Collections__Generic__Dictionary<int,_BadgeUrlData>__ContainsKey_int_
                     ->klass->rgctx_data[0x21].method);
  if (iVar12 < 0) {
    if (*(int *)&(TypeInfo__BadgeManager->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__BadgeManager);
    }
    this_00 = TypeInfo__BadgeManager->static_fields->badgeUrls;
    if (this_00 == (Dictionary_2_System_Int32_BadgeUrlData_ *)0x0) {
      FUN_?();
code_?:
      FUN_?();
code_?:
      FUN_?();
      FUN_?();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    method_00 = MethodInfo__System__Collections__Generic__Dictionary<int,_BadgeUrlData>__Add_int__BadgeUrlData_
                ->klass->rgctx_data[0x22].method;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
    Dictionary_2_System_Int32_System_Object__TryInsert
              ((Dictionary_2_System_Int32_System_Object_ *)this_00,*(int32_t *)&value[1].klass,value
               ,(InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)method_00 >> 8),2),method_00);
  }
  goto code_?;
}


/* Void Reset() */

void Assembly-CSharp.dll::BadgeManager::BadgeManager_Reset(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__BadgeManager);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_BadgeUrlData>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__Dictionary<int,_BadgeUrlData>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this = (Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef_ *)
         FUN_?(TypeInfo__System__Collections__Generic__Dictionary<int,_BadgeUrlData>);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::TextCore::Text
  ::TextResourceManager+FontAssetRef]::
  Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef___ctor
            (this,
             MethodInfo__System__Collections__Generic__Dictionary<int,_BadgeUrlData>__Dictionary__);
  if (*(int *)&(TypeInfo__BadgeManager->_1).field_0x1c == 0) {
    FUN_?();
  }
  TypeInfo__BadgeManager->static_fields->badgeUrls = (Dictionary_2_System_Int32_BadgeUrlData_ *)this
  ;
  if (iRam_? != 0) {
    uVar1 = (uint)((ulonglong)TypeInfo__BadgeManager->static_fields >> 0xc);
    puVar2 = (ulonglong *)((ulonglong)((uVar1 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar3 = *puVar2;
      LOCK();
      uVar4 = *puVar2;
      if (uVar3 == uVar4) {
        *puVar2 = uVar3 | 1L << (uVar1 & 0x3f);
      }
      UNLOCK();
    } while (uVar3 != uVar4);
  }
  TypeInfo__BadgeManager->static_fields->maxLevelBadge = 0;
  return;
}


/* Void UnsubscribeGetBadgeRequest(Action`1[UnityEngine.Networking.UnityWebRequest]) */

void Assembly-CSharp.dll::BadgeManager::BadgeManager_UnsubscribeGetBadgeRequest
               (Action_1_UnityEngine_Networking_UnityWebRequest_ *callback,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__AsyncWWWManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__AsyncWWWManager->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__AsyncWWWManager,0);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<WWWRequestPriority,_System::Collections::Generic::Queue<AsyncWebRequest>_>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<AsyncWebRequest>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<WWWRequestPriority,_System::Collections::Generic::Queue<AsyncWebRequest>_>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Queue_1_T___Enumerator<AsyncWebRequest>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<AsyncWebRequest>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<WWWRequestPriority,_System::Collections::Generic::Queue<AsyncWebRequest>_>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Queue_1_T___Enumerator<AsyncWebRequest>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<WWWRequestPriority,_System::Collections::Generic::Queue<AsyncWebRequest>_>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<AsyncWebRequest>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Queue_1_T___Enumerator<AsyncWebRequest>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__HashSet<AsyncWebRequest>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<WWWRequestPriority,_System::Collections::Generic::Queue<AsyncWebRequest>_>__get_Value__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__Queue<AsyncWebRequest>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  DStack_1._dictionary = (Dictionary_2_System_UInt32_System_Object_ *)0x0;
  DStack_1._version = 0;
  DStack_1._index = 0;
  DStack_1._current.key = 0;
  DStack_1._current._4_4_ = 0;
  DStack_1._current.value = (Object *)0x0;
  DStack_1._getEnumeratorRetType = 0;
  DStack_1._36_4_ = 0;
  QStack_2._q = (Queue_1_System_Object_ *)0x0;
  QStack_2._version = 0;
  QStack_2._index = 0;
  QStack_2._currentElement = (Object *)0x0;
  if (*(int *)&(TypeInfo__AsyncWWWManager->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__AsyncWWWManager);
  }
  pHVar3 = TypeInfo__AsyncWWWManager->static_fields->activeRequests;
  if (pHVar3 != (HashSet_1_AsyncWebRequest_ *)0x0) {
    if (iRam_? != 0) {
      uVar4 = (uint)((ulonglong)&pHStack_5 >> 0xc);
      lVar6 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
      do {
        uVar7 = *(ulonglong *)(lVar6 + 0xADDR);
        puVar8 = (ulonglong *)(lVar6 + 0xADDR);
        LOCK();
        bVar9 = uVar7 == *puVar8;
        if (bVar9) {
          *puVar8 = uVar7 | 1L << (ulonglong)(uVar4 & 0x3f);
        }
        UNLOCK();
      } while (!bVar9);
    }
    pDStack_10 = (Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object_ *)
                 ((ulonglong)(uint)(pHVar3->fields)._version << 0x20);
    uStack_11 = 0;
    auStack_12._8_8_ = pDStack_10;
    pOStack_13 = (Object *)0x0;
    pHStack_5 = pHVar3;
    auStack_12._0_8_ = pHVar3;
code_?:
    while (bVar14 = System.Core.dll::System::Collections::Generic::HashSet`1[T]+Enumerator[System::
                   Object]::HashSet_1_T_Enumerator_System_Object__MoveNext
                             ((HashSet_1_T_Enumerator_System_Object_ *)auStack_12,
                              MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<AsyncWebRequest>__MoveNext__
                             ), pOVar15 = pOStack_13, bVar14 != 0) {
      ppAVar16 = (Action_1_UnityEngine_Networking_UnityWebRequest___Class **)
                 TypeInfo__AsyncWWWManager;
      if (*(int *)&(TypeInfo__AsyncWWWManager->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        ppAVar16 = &TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>;
        FUN_?();
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (pOVar15 == (Object *)0x0) goto code_?;
      pOVar17 = pOVar15[1].klass;
      if (pOVar17 == (Object__Class *)0x0) goto code_?;
      if ((callback != (Action_1_UnityEngine_Networking_UnityWebRequest_ *)0x0) &&
         (cVar18 = (**(code **)&(pOVar17->_0).image[4].typeCount)(pOVar17,callback), cVar18 != '\0'))
      goto code_?;
    }
    if (*(int *)&(TypeInfo__AsyncWWWManager->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__AsyncWWWManager);
    }
    pDVar19 = (Dictionary_2_System_UInt32_System_Object_ *)
             TypeInfo__AsyncWWWManager->static_fields->requests;
    if (pDVar19 != (Dictionary_2_System_UInt32_System_Object_ *)0x0) {
      if (iRam_? != 0) {
        uVar4 = (uint)((ulonglong)&pDStack_20 >> 0xc);
        lVar6 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
        do {
          uVar7 = *(ulonglong *)(lVar6 + 0xADDR);
          puVar8 = (ulonglong *)(lVar6 + 0xADDR);
          LOCK();
          bVar9 = uVar7 == *puVar8;
          if (bVar9) {
            *puVar8 = uVar7 | 1L << (ulonglong)(uVar4 & 0x3f);
          }
          UNLOCK();
        } while (!bVar9);
      }
      uStack_21 = (ulonglong)(uint)(pDVar19->fields)._version;
      uStack_22 = 2;
      uStack_23 = 0;
      uStack_24 = 0;
      DStack_1._version = (undefined4)uStack_21;
      DStack_1._index = uStack_21._4_4_;
      DStack_1._current.key = 0;
      DStack_1._current._4_4_ = 0;
      DStack_1._current.value = (Object *)0x0;
      DStack_1._getEnumeratorRetType = 2;
      DStack_1._36_4_ = 0;
      pHStack_5 = (HashSet_1_AsyncWebRequest_ *)0x0;
      pDStack_10 = &DStack_1;
      pDStack_20 = pDVar19;
      DStack_1._dictionary = pDVar19;
      while (bVar14 = mscorlib.dll::System::Collections::Generic::
                     Dictionary`2[TKey,TValue]+Enumerator[System::UInt32,System::Object]::
                     Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                               (&DStack_1,
                                MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<WWWRequestPriority,_System::Collections::Generic::Queue<AsyncWebRequest>_>__MoveNext__
                               ), bVar14 != 0) {
        if ((Dictionary_2_System_UInt32_System_Object_ *)DStack_1._current.value ==
            (Dictionary_2_System_UInt32_System_Object_ *)0x0) goto code_?;
        uStack_21 = 0;
        uStack_23 = 0;
        pDStack_20 = (Dictionary_2_System_UInt32_System_Object_ *)DStack_1._current.value;
        if (iRam_? != 0) {
          uVar4 = (uint)((ulonglong)&pDStack_20 >> 0xc);
          lVar6 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
          do {
            uVar7 = *(ulonglong *)(lVar6 + 0xADDR);
            puVar8 = (ulonglong *)(lVar6 + 0xADDR);
            LOCK();
            bVar9 = uVar7 == *puVar8;
            if (bVar9) {
              *puVar8 = uVar7 | 1L << (ulonglong)(uVar4 & 0x3f);
            }
            UNLOCK();
          } while (!bVar9);
        }
        if ((Dictionary_2_System_UInt32_System_Object_ *)DStack_1._current.value ==
            (Dictionary_2_System_UInt32_System_Object_ *)0x0) goto code_?;
        QStack_2._version =
             ((Dictionary_2_System_UInt32_System_Object___Fields *)
             ((longlong)DStack_1._current.value + 0x10))->_freeList;
        uStack_21 = CONCAT44(0xffffffff,QStack_2._version);
        uStack_23 = 0;
        QStack_2._q = (Queue_1_System_Object_ *)DStack_1._current.value;
        QStack_2._index = 0xffffffff;
        QStack_2._currentElement = (Object *)0x0;
        while (bVar14 = mscorlib.dll::System::Collections::Generic::Queue`1[T]+Enumerator[System::
                       Object]::Queue_1_T_Enumerator_System_Object__MoveNext
                                 (&QStack_2,
                                  MethodInfo__System__Collections__Generic__Queue_1_T___Enumerator<AsyncWebRequest>__MoveNext__
                                 ), pOVar15 = QStack_2._currentElement, bVar14 != 0) {
          ppAVar16 = (Action_1_UnityEngine_Networking_UnityWebRequest___Class **)
                     MethodInfo__System__Collections__Generic__Queue_1_T___Enumerator<AsyncWebRequest>__get_Current__
          ;
          if ((longlong)QStack_2._8_8_ < 0) goto code_?;
          if (*(int *)&(TypeInfo__AsyncWWWManager->_1).field_0x1c == 0) {
            FUN_?();
          }
          AsyncWWWManager::AsyncWWWManager_Unsubscribe
                    ((AsyncWebRequest *)pOVar15,callback,(MethodInfo *)0x0);
          unaff_RDI = (AsyncWWWManager__Class *)pOVar15;
        }
        QStack_2._index = 0xfffffffe;
        QStack_2._currentElement = (Object *)0x0;
      }
      if (*(int *)&(TypeInfo__AsyncWWWManager->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__AsyncWWWManager);
      }
      this = TypeInfo__AsyncWWWManager->static_fields->cache;
      if (this != (AsyncWWWManager_Cache *)0x0) {
        AsyncWWWManager+Cache::AsyncWWWManager_Cache_UnsubscribeCached
                  (this,callback,(MethodInfo *)0x0);
        return;
      }
    }
  }
  FUN_?();
  ppAVar16 = (Action_1_UnityEngine_Networking_UnityWebRequest___Class **)unaff_RDI;
code_?:
  FUN_?(ppAVar16,unaff_RSI);
code_?:
  FUN_?();
  FUN_?();
code_?:
  lVar6 = func_?((((AsyncWWWManager__Class *)ppAVar16)->_0).byval_arg.data.dummy);
  uVar25 = func_?(*(undefined8 *)(lVar6 + 0xc0),4);
  FUN_?(&QStack_2,uVar25);
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
  FUN_?();
  pcVar26 = (code *)swi(3);
  (*pcVar26)();
  return;
code_?:
  if (callback == (Action_1_UnityEngine_Networking_UnityWebRequest_ *)0x0) {
code_?:
    unaff_RDI = (AsyncWWWManager__Class *)
                mscorlib.dll::System::Delegate::Delegate_Remove
                          ((Delegate *)pOVar15[1].klass,(Delegate *)callback,(MethodInfo *)0x0);
    unaff_RSI = TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>;
    pOVar17 = (Object__Class *)0x0;
    if ((unaff_RDI != (AsyncWWWManager__Class *)0x0) &&
       (pOVar17 = (Object__Class *)
                 FUN_?(unaff_RDI,
                               TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>),
       ppAVar16 = (Action_1_UnityEngine_Networking_UnityWebRequest___Class **)unaff_RDI,
       pOVar17 == (Object__Class *)0x0)) goto code_?;
    pOVar15[1].klass = pOVar17;
    if (iRam_? != 0) {
      uVar4 = (uint)((ulonglong)(pOVar15 + 1) >> 0xc);
      lVar6 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
      do {
        uVar7 = *(ulonglong *)(lVar6 + 0xADDR);
        puVar8 = (ulonglong *)(lVar6 + 0xADDR);
        LOCK();
        bVar9 = uVar7 == *puVar8;
        if (bVar9) {
          *puVar8 = uVar7 | 1L << (ulonglong)(uVar4 & 0x3f);
        }
        UNLOCK();
      } while (!bVar9);
    }
  }
  goto code_?;
}


/* BadgeManager() */

void Assembly-CSharp.dll::BadgeManager::BadgeManager__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__BadgeManager);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_BadgeUrlData>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__Dictionary<int,_BadgeUrlData>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this = (Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef_ *)
         FUN_?(TypeInfo__System__Collections__Generic__Dictionary<int,_BadgeUrlData>);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::TextCore::Text
  ::TextResourceManager+FontAssetRef]::
  Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef___ctor
            (this,
             MethodInfo__System__Collections__Generic__Dictionary<int,_BadgeUrlData>__Dictionary__);
  TypeInfo__BadgeManager->static_fields->badgeUrls = (Dictionary_2_System_Int32_BadgeUrlData_ *)this
  ;
  if (iRam_? != 0) {
    uVar1 = (uint)((ulonglong)TypeInfo__BadgeManager->static_fields >> 0xc);
    puVar2 = (ulonglong *)((ulonglong)((uVar1 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar3 = *puVar2;
      LOCK();
      uVar4 = *puVar2;
      if (uVar3 == uVar4) {
        *puVar2 = uVar3 | 1L << (uVar1 & 0x3f);
      }
      UNLOCK();
    } while (uVar3 != uVar4);
  }
  TypeInfo__BadgeManager->static_fields->maxLevelBadge = 0;
  return;
}

