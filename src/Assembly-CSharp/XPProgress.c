
/* Void Destroy() */

void Assembly-CSharp.dll::XPProgress::XPProgress_Destroy(XPProgress *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__AsyncWWWManager);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__XPProgress__XPLimitsCallback_UnityEngine__Networking__UnityWebRequest_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_01 = (UnityAction_1_System_Object_ *)
            FUN_?(TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
  UnityAction_1_System_Object___ctor
            (this_01,(Object *)this,
             MethodInfo__XPProgress__XPLimitsCallback_UnityEngine__Networking__UnityWebRequest_,
             (MethodInfo *)0x0);
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
      if ((this_01 != (UnityAction_1_System_Object_ *)0x0) &&
         (cVar18 = (**(code **)&(pOVar17->_0).image[4].typeCount)(pOVar17,this_01), cVar18 != '\0'))
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
                    ((AsyncWebRequest *)pOVar15,
                     (Action_1_UnityEngine_Networking_UnityWebRequest_ *)this_01,(MethodInfo *)0x0);
          unaff_RDI = (AsyncWWWManager__Class *)pOVar15;
        }
        QStack_2._index = 0xfffffffe;
        QStack_2._currentElement = (Object *)0x0;
      }
      if (*(int *)&(TypeInfo__AsyncWWWManager->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__AsyncWWWManager);
      }
      this_00 = TypeInfo__AsyncWWWManager->static_fields->cache;
      if (this_00 != (AsyncWWWManager_Cache *)0x0) {
        AsyncWWWManager+Cache::AsyncWWWManager_Cache_UnsubscribeCached
                  (this_00,(Action_1_UnityEngine_Networking_UnityWebRequest_ *)this_01,
                   (MethodInfo *)0x0);
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
  if (this_01 == (UnityAction_1_System_Object_ *)0x0) {
code_?:
    unaff_RDI = (AsyncWWWManager__Class *)
                mscorlib.dll::System::Delegate::Delegate_Remove
                          ((Delegate *)pOVar15[1].klass,(Delegate *)this_01,(MethodInfo *)0x0);
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


/* Void OnXPLevelLimitsUpdated(XPLevelLimits) */

void Assembly-CSharp.dll::XPProgress::XPProgress_OnXPLevelLimitsUpdated
               (XPProgress *this,XPLevelLimits *xpLevelLimits,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
            ((Object *)xpLevelLimits,(MethodInfo *)0x0);
  pXVar1 = (this->fields).xpProgressData;
  if (pXVar1 == (XPProgressData *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  bVar3 = iRam_? != 0;
  (pXVar1->fields).xpLevelLimits = xpLevelLimits;
  if (bVar3) {
    uVar4 = (uint)((ulonglong)&pXVar1->fields >> 0xc);
    puVar5 = (ulonglong *)((ulonglong)((uVar4 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar6 = *puVar5;
      LOCK();
      uVar7 = *puVar5;
      if (uVar6 == uVar7) {
        *puVar5 = uVar6 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
    } while (uVar6 != uVar7);
  }
  if ((this->fields).OnXPProgressData != (XPProgress_OnXPProgressDataDelegate *)0x0) {
    pXVar8 = (this->fields).OnXPProgressData;
    (*(pXVar8->fields)._._.invoke_impl)
              ((pXVar8->fields)._._.method_code,(this->fields).xpProgressData,
               (pXVar8->fields)._._.method);
  }
  return;
}


/* Void Update(Int32, XPRewardType, Int32, Int32) */

void Assembly-CSharp.dll::XPProgress::XPProgress_Update
               (XPProgress *this,int32_t currentPlayerXP,XPRewardType__Enum xpId,int32_t XPdelta,
               int32_t memberCount,MethodInfo *method)

{
  pXVar1 = (this->fields).xpProgressData;
  if (pXVar1 != (XPProgressData *)0x0) {
    (pXVar1->fields).xpId = (uint8_t)xpId;
    pXVar1 = (this->fields).xpProgressData;
    if (pXVar1 != (XPProgressData *)0x0) {
      (pXVar1->fields).playerCurrentXP = currentPlayerXP;
      pXVar1 = (this->fields).xpProgressData;
      if (pXVar1 != (XPProgressData *)0x0) {
        (pXVar1->fields).xpDelta = XPdelta;
        pXVar1 = (this->fields).xpProgressData;
        if (pXVar1 != (XPProgressData *)0x0) {
          (pXVar1->fields).memberCount = memberCount;
          if ((this->fields).OnXPProgressData != (XPProgress_OnXPProgressDataDelegate *)0x0) {
            pXVar2 = (this->fields).OnXPProgressData;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(pXVar2->fields)._._.invoke_impl)
                      ((pXVar2->fields)._._.method_code,(this->fields).xpProgressData,
                       (pXVar2->fields)._._.method);
            return;
          }
          return;
        }
      }
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void UpdateLevel(Int32) */

void Assembly-CSharp.dll::XPProgress::XPProgress_UpdateLevel
               (XPProgress *this,int32_t level,MethodInfo *method)

{
  aIStackX_10[0].m_value = level;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__AsyncWWWManager);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__GetRequest);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__Common__Urls);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__XPProgress__XPLimitsCallback_UnityEngine__Networking__UnityWebRequest_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pXVar1 = (this->fields).xpProgressData;
  if ((pXVar1 != (XPProgressData *)0x0) &&
     (pXVar2 = (pXVar1->fields).xpLevelLimits, pXVar2 != (XPLevelLimits *)0x0)) {
    if ((pXVar2->fields)._Level_k__BackingField != level) {
      if (*(int *)&(TypeInfo__MV__Common__Urls->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MV__Common__Urls);
        LOCK();
        UNLOCK();
        FUN_?(&StringLiteral_xp_level_xp_limits_data__level_);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__MV__Common__Urls->_1).field_0x1c == 0) {
        FUN_?();
      }
      pSVar3 = MVCommon.dll::MV::Common::Urls::Urls_get_API((MethodInfo *)0x0);
      pSVar3 = mscorlib.dll::System::String::String_Concat_4
                         (pSVar3,StringLiteral_xp_level_xp_limits_data__level_,(MethodInfo *)0x0);
      str1 = mscorlib.dll::System::Int32::Int32_ToString(aIStackX_10,(MethodInfo *)0x0);
      pSVar3 = mscorlib.dll::System::String::String_Concat_4(pSVar3,str1,(MethodInfo *)0x0);
      this_00 = (UnityAction_1_System_Object_ *)
                FUN_?(TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
      UnityAction_1_System_Object___ctor
                (this_00,(Object *)this,
                 MethodInfo__XPProgress__XPLimitsCallback_UnityEngine__Networking__UnityWebRequest_,
                 (MethodInfo *)0x0);
      this_01 = (AsyncWebRequest *)FUN_?(TypeInfo__GetRequest);
      AsyncWebRequest::AsyncWebRequest__ctor
                (this_01,pSVar3,(Action_1_UnityEngine_Networking_UnityWebRequest_ *)this_00,
                 WWWRequestPriority__Enum_ExecuteWhileSyncronizing,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__AsyncWWWManager->_1).field_0x1c == 0) {
        FUN_?();
      }
      AsyncWWWManager::AsyncWWWManager_WWWRequest(this_01,(MethodInfo *)0x0);
    }
    return;
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void XPLimitsCallback(UnityWebRequest) */

void Assembly-CSharp.dll::XPProgress::XPProgress_XPLimitsCallback
               (XPProgress *this,UnityWebRequest *result,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&
                  XPLevelLimits_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<XPLevelLimits>_System__String_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Newtonsoft__Json__JsonConvert);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (result != (UnityWebRequest *)0x0) {
    pSVar1 = UnityEngine.UnityWebRequestModule.dll::UnityEngine::Networking::UnityWebRequest::
             UnityWebRequest_GetUrl(result,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log((Object *)pSVar1,(MethodInfo *)0x0);
    pDVar2 = (result->fields).m_DownloadHandler;
    if (pDVar2 != (DownloadHandler *)0x0) {
      pSVar1 = (String *)
               (*(pDVar2->klass->vtable).GetText.methodPtr)
                         (pDVar2,(pDVar2->klass->vtable).GetText.method);
      if (*(int *)&(TypeInfo__Newtonsoft__Json__JsonConvert->_1).field_0x1c == 0) {
        FUN_?();
      }
      message = (XPLevelLimits *)
                Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_2
                          (pSVar1,
                           XPLevelLimits_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<XPLevelLimits>_System__String_
                          );
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Debug);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                ((Object *)message,(MethodInfo *)0x0);
      pXVar3 = (this->fields).xpProgressData;
      if (pXVar3 != (XPProgressData *)0x0) {
        bVar4 = iRam_? != 0;
        (pXVar3->fields).xpLevelLimits = message;
        if (bVar4) {
          uVar5 = (uint)((ulonglong)&pXVar3->fields >> 0xc);
          puVar6 = (ulonglong *)((ulonglong)((uVar5 & 0x1fffff) >> 6) * 8 + 0xADDR);
          do {
            uVar7 = *puVar6;
            LOCK();
            uVar8 = *puVar6;
            if (uVar7 == uVar8) {
              *puVar6 = uVar7 | 1L << (uVar5 & 0x3f);
            }
            UNLOCK();
          } while (uVar7 != uVar8);
        }
        if ((this->fields).OnXPProgressData != (XPProgress_OnXPProgressDataDelegate *)0x0) {
          pXVar9 = (this->fields).OnXPProgressData;
          (*(pXVar9->fields)._._.invoke_impl)
                    ((pXVar9->fields)._._.method_code,(this->fields).xpProgressData,
                     (pXVar9->fields)._._.method);
        }
        return;
      }
    }
  }
  FUN_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* XPProgress(MVLocalPlayer, InitialLevelData) */

void Assembly-CSharp.dll::XPProgress::XPProgress__ctor
               (XPProgress *this,MVLocalPlayer *player,InitialLevelData *initialLevelData,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Events__UnityAction<int>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__XPProgressData);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__XPProgress__UpdateLevel_int_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (initialLevelData != (InitialLevelData *)0x0) {
    iVar1 = (initialLevelData->fields).XP;
    pXVar2 = (initialLevelData->fields).XPLevelLimits;
    pXVar3 = (XPProgressData *)FUN_?(TypeInfo__XPProgressData);
    iVar4 = iRam_?;
    (pXVar3->fields).playerCurrentXP = iVar1;
    (pXVar3->fields).xpLevelLimits = pXVar2;
    if (iVar4 != 0) {
      uVar5 = (uint)((ulonglong)&pXVar3->fields >> 0xc);
      lVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
      do {
        uVar7 = *(ulonglong *)(lVar6 + 0xADDR);
        puVar8 = (ulonglong *)(lVar6 + 0xADDR);
        LOCK();
        bVar9 = uVar7 == *puVar8;
        if (bVar9) {
          *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
        }
        UNLOCK();
        iVar4 = iRam_?;
      } while (!bVar9);
    }
    (this->fields).xpProgressData = pXVar3;
    if (iVar4 != 0) {
      uVar5 = (uint)((ulonglong)&(this->fields).xpProgressData >> 0xc);
      lVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
      do {
        uVar7 = *(ulonglong *)(lVar6 + 0xADDR);
        puVar8 = (ulonglong *)(lVar6 + 0xADDR);
        LOCK();
        bVar9 = uVar7 == *puVar8;
        if (bVar9) {
          *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
        }
        UNLOCK();
      } while (!bVar9);
    }
    if (player != (MVLocalPlayer *)0x0) {
      pUVar10 = (player->fields)._.OnLevelChanged;
      pDVar11 = (Delegate *)FUN_?(TypeInfo__UnityEngine__Events__UnityAction<int>);
      FUN_?(pDVar11,this);
      pDVar11 = mscorlib.dll::System::Delegate::Delegate_Combine
                         ((Delegate *)pUVar10,pDVar11,(MethodInfo *)0x0);
      pUVar12 = TypeInfo__UnityEngine__Events__UnityAction<int>;
      if (pDVar11 == (Delegate *)0x0) {
        (player->fields)._.OnLevelChanged = (UnityAction_1_System_Int32_ *)0x0;
      }
      else {
        pUVar10 = (UnityAction_1_System_Int32_ *)
                 FUN_?(pDVar11,TypeInfo__UnityEngine__Events__UnityAction<int>);
        if (pUVar10 == (UnityAction_1_System_Int32_ *)0x0) {
          FUN_?(pDVar11,pUVar12);
          pcVar13 = (code *)swi(3);
          (*pcVar13)();
          return;
        }
        (player->fields)._.OnLevelChanged = pUVar10;
        pUVar12 = TypeInfo__UnityEngine__Events__UnityAction<int>;
        lVar6 = FUN_?(pDVar11,TypeInfo__UnityEngine__Events__UnityAction<int>);
        if (lVar6 == 0) {
          FUN_?(pDVar11,pUVar12);
          pcVar13 = (code *)swi(3);
          (*pcVar13)();
          return;
        }
      }
      if (iRam_? != 0) {
        uVar5 = (uint)((ulonglong)&(player->fields)._.OnLevelChanged >> 0xc);
        lVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
        do {
          uVar7 = *(ulonglong *)(lVar6 + 0xADDR);
          puVar8 = (ulonglong *)(lVar6 + 0xADDR);
          LOCK();
          bVar9 = uVar7 == *puVar8;
          if (bVar9) {
            *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
          }
          UNLOCK();
        } while (!bVar9);
      }
      return;
    }
  }
  FUN_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}

