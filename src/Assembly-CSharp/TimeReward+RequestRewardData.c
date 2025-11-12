
/* Void Destroy() */

void Assembly-CSharp.dll::TimeReward+RequestRewardData::TimeReward_RequestRewardData_Destroy
               (TimeReward_RequestRewardData *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__AsyncWWWManager);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__TimeReward__RequestRewardData__OnRewardData_UnityEngine__Networking__UnityWebRequest_
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
             MethodInfo__TimeReward__RequestRewardData__OnRewardData_UnityEngine__Networking__UnityWebRequest_
             ,(MethodInfo *)0x0);
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


/* Void OnRewardData(UnityWebRequest) */

void Assembly-CSharp.dll::TimeReward+RequestRewardData::TimeReward_RequestRewardData_OnRewardData
               (TimeReward_RequestRewardData *this,UnityWebRequest *www,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&
                  TimeReward_RequestRewardData__RewardData_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<TimeReward_RequestRewardData::RewardData>_System__String_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Newtonsoft__Json__JsonConvert);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__TimeReward__RewardCountdown);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__rewardData_rewardEnabled__);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_www_error__);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_www_text__);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__rewardData_timeInSeconds__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (www != (UnityWebRequest *)0x0) {
    pSVar1 = UnityEngine.UnityWebRequestModule.dll::UnityEngine::Networking::UnityWebRequest::
             UnityWebRequest_get_error(www,(MethodInfo *)0x0);
    pSVar1 = mscorlib.dll::System::String::String_Concat_4
                       (StringLiteral_www_error__,pSVar1,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log((Object *)pSVar1,(MethodInfo *)0x0);
    pSVar1 = UnityEngine.UnityWebRequestModule.dll::UnityEngine::Networking::UnityWebRequest::
             UnityWebRequest_get_error(www,(MethodInfo *)0x0);
    if ((pSVar1 != (String *)0x0) && ((pSVar1->fields)._stringLength != 0)) {
      pSVar1 = UnityEngine.UnityWebRequestModule.dll::UnityEngine::Networking::UnityWebRequest::
               UnityWebRequest_get_error(www,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
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
      if (pIVar2 == (ILogger_1 *)0x0) {
        FUN_?();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      FUN_?(6,TypeInfo__UnityEngine__ILogger,pIVar2,0,pSVar1);
      return;
    }
    pDVar4 = (www->fields).m_DownloadHandler;
    if (pDVar4 != (DownloadHandler *)0x0) {
      pSVar1 = (String *)
               (*(pDVar4->klass->vtable).GetText.methodPtr)
                         (pDVar4,(pDVar4->klass->vtable).GetText.method);
      if (*(int *)&(TypeInfo__Newtonsoft__Json__JsonConvert->_1).field_0x1c == 0) {
        FUN_?();
      }
      pOVar5 = Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_2
                         (pSVar1,
                          TimeReward_RequestRewardData__RewardData_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<TimeReward_RequestRewardData::RewardData>_System__String_
                         );
      pSVar1 = mscorlib.dll::System::String::String_Concat_4
                         (StringLiteral_www_text__,pSVar1,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                ((Object *)pSVar1,(MethodInfo *)0x0);
      if (pOVar5 != (Object *)0x0) {
        cVar6 = *(char *)&pOVar5[1].klass;
        if (*(int *)(lRam_? + 0xe4) == 0) {
          FUN_?();
        }
        if (cRam_? == '\0') {
          FUN_?(&StringLiteral_False);
          LOCK();
          UNLOCK();
          FUN_?(&StringLiteral_True);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pSVar1 = StringLiteral_False;
        if (cVar6 == '\0') {
          pSVar1 = StringLiteral_True;
        }
        pSVar1 = mscorlib.dll::System::String::String_Concat_4
                           (StringLiteral__rewardData_rewardEnabled__,pSVar1,(MethodInfo *)0x0);
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                  ((Object *)pSVar1,(MethodInfo *)0x0);
        if (*(char *)&pOVar5[1].klass == '\0') {
          (this->fields).requestedRewardDataStatus = 2;
          return;
        }
        pSVar1 = mscorlib.dll::System::Int32::Int32_ToString
                           ((Int32 *)((longlong)&pOVar5[1].klass + 4),(MethodInfo *)0x0);
        pSVar1 = mscorlib.dll::System::String::String_Concat_4
                           (StringLiteral__rewardData_timeInSeconds__,pSVar1,(MethodInfo *)0x0);
        if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
          FUN_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                  ((Object *)pSVar1,(MethodInfo *)0x0);
        timeInSeconds = *(int32_t *)((longlong)&pOVar5[1].klass + 4);
        amountGold = *(int32_t *)&pOVar5[1].monitor;
        this_00 = (TimeReward_RewardCountdown *)FUN_?(TypeInfo__TimeReward__RewardCountdown)
        ;
        TimeReward+RewardCountdown::TimeReward_RewardCountdown__ctor
                  (this_00,timeInSeconds,amountGold,(MethodInfo *)0x0);
        bVar7 = iRam_? != 0;
        (this->fields).rewardCountdown = this_00;
        if (bVar7) {
          uVar8 = (uint)((ulonglong)&(this->fields).rewardCountdown >> 0xc);
          puVar9 = (ulonglong *)((ulonglong)((uVar8 & 0x1fffff) >> 6) * 8 + 0xADDR);
          do {
            uVar10 = *puVar9;
            LOCK();
            uVar11 = *puVar9;
            if (uVar10 == uVar11) {
              *puVar9 = uVar10 | 1L << (uVar8 & 0x3f);
            }
            UNLOCK();
          } while (uVar10 != uVar11);
        }
        (this->fields).requestedRewardDataStatus = 1;
        return;
      }
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void TestExternalCallBack(String,
   Action`1[System.Collections.Generic.Dictionary`2[System.String,System.Object]]) */

void Assembly-CSharp.dll::TimeReward+RequestRewardData::
     TimeReward_RequestRewardData_TestExternalCallBack
               (TimeReward_RequestRewardData *this,String *function,
               Action_1_System_Collections_Generic_Dictionary_2_System_String_System_Object_ *action
               ,MethodInfo *method)

{
  uVar1 = SUB84(method,0);
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__Add_System__String__System__Object_
                  ,function,action,uVar1);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_rewardEnabled);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_timeInSeconds);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_gold);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
             *)FUN_?(
                            TypeInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>
                            );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements::
  UIR::UIRenderDevice+DisableForceGammaMaterial]::
  Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__Dictionary__
            );
  auStackX_8[0] = CONCAT31(auStackX_8[0]._1_3_,(this->fields).testRewardEnabled);
  pOVar2 = (Object *)FUN_?(uRam_?,auStackX_8);
  if (this_00 !=
      (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
       *)0x0) {
    IVar3 = CONCAT31((int3)((uint)uVar1 >> 8),2);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__TryInsert
              ((Dictionary_2_System_Object_System_Object_ *)this_00,
               (Object *)StringLiteral_rewardEnabled,pOVar2,IVar3,
               MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__Add_System__String__System__Object_
               ->klass->rgctx_data[0x22].method);
    if ((this->fields).testRewardEnabled != 0) {
      auStackX_8[0] = 0xb4;
      pOVar2 = (Object *)FUN_?(uRam_?,auStackX_8);
      IVar3 = CONCAT31((int3)(IVar3 >> 8),2);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__TryInsert
                ((Dictionary_2_System_Object_System_Object_ *)this_00,
                 (Object *)StringLiteral_timeInSeconds,pOVar2,IVar3,
                 MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__Add_System__String__System__Object_
                 ->klass->rgctx_data[0x22].method);
      auStackX_8[0] = 1;
      pOVar2 = (Object *)FUN_?(uRam_?,auStackX_8);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__TryInsert
                ((Dictionary_2_System_Object_System_Object_ *)this_00,(Object *)StringLiteral_gold,
                 pOVar2,CONCAT31((int3)(IVar3 >> 8),2),
                 MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__Add_System__String__System__Object_
                 ->klass->rgctx_data[0x22].method);
    }
    if (action != (Action_1_System_Collections_Generic_Dictionary_2_System_String_System_Object_ *)
                  0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(action->fields)._._.invoke_impl)
                ((action->fields)._._.method_code,this_00,(action->fields)._._.method);
      return;
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* TimeReward+RewardStateBase Update() */

TimeReward_RewardStateBase *
Assembly-CSharp.dll::TimeReward+RequestRewardData::TimeReward_RequestRewardData_Update
          (TimeReward_RequestRewardData *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__TimeReward__RewardDone);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pIVar1 = (Il2CppClass *)TypeInfo__TimeReward__RewardDone;
  if ((this->fields).requestedRewardDataStatus != 2) {
    if ((this->fields).requestedRewardDataStatus != 1) {
      return (TimeReward_RewardStateBase *)this;
    }
    return (TimeReward_RewardStateBase *)(this->fields).rewardCountdown;
  }
  FUN_?();
  if (((((TimeReward_RewardDone__Class *)pIVar1)->_0).generic_class != (Il2CppGenericClass *)0x0) &&
     (((((TimeReward_RewardDone__Class *)pIVar1)->_1).field_0x6d & 8) != 0)) {
    pIVar1 = (((TimeReward_RewardDone__Class *)pIVar1)->_0).element_class;
  }
  uVar2 = pIVar1->instance_size;
  if ((pIVar1->field_0x135 & 0x20) == 0) {
    pTVar3 = (TimeReward_RewardStateBase *)FUN_?(uVar2);
    pTVar3->klass = (TimeReward_RewardStateBase__Class *)pIVar1;
    pTVar4 = &pTVar3->fields;
    pTVar3->monitor = (MonitorData *)0x0;
    if (pIVar1->instance_size < 0x80) {
      puVar5 = (undefined1 *)((longlong)&pTVar3->klass + (ulonglong)pIVar1->instance_size);
      uVar6 = (ulonglong)(puVar5 + (7 - (longlong)pTVar4)) >> 3;
      if (puVar5 < pTVar4) {
        uVar6 = 0;
      }
      if (uVar6 != 0) {
        FUN_?(pTVar4,0,uVar6 << 3);
      }
    }
    else {
      FUN_?(pTVar4,0,(ulonglong)pIVar1->instance_size - 0x10);
    }
  }
  else {
    if (pIVar1->gc_desc != (void *)0x0) {
      pTVar3 = (TimeReward_RewardStateBase *)FUN_?(uVar2,pIVar1);
      goto code_?;
    }
    pTVar3 = (TimeReward_RewardStateBase *)FUN_?(uVar2,1);
    pTVar3->klass = (TimeReward_RewardStateBase__Class *)pIVar1;
  }
  LOCK();
  lRam_? = lRam_? + 1;
  UNLOCK();
code_?:
  if ((pIVar1->field_0x136 & 2) != 0) {
    FUN_?(pTVar3,FUN_?);
  }
  if ((bRam_? & 0x80) != 0) {
    FUN_?(pTVar3,pIVar1);
  }
  FUN_?(pIVar1);
  return pTVar3;
}


/* TimeReward+RequestRewardData() */

void Assembly-CSharp.dll::TimeReward+RequestRewardData::TimeReward_RequestRewardData__ctor
               (TimeReward_RequestRewardData *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__AsyncWWWManager);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__GetRequest);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__TimeReward__RequestRewardData__OnRewardData_UnityEngine__Networking__UnityWebRequest_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_MVGameControllerBase_GameSession);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__profile_id__0__planet_id__1__to);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar1 = cRam_? == '\0';
  (this->fields).testRewardEnabled = 1;
  if (bVar1) {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar2 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
  if (pGVar2 != (GameSessionData *)0x0) {
    aiStackX_8[0] = (pGVar2->fields).profileID;
    arg0 = (Object *)FUN_?(uRam_?,aiStackX_8);
    aiStackX_8[0] = (pGVar2->fields).planetID;
    arg1 = (Object *)FUN_?(uRam_?,aiStackX_8);
    pSVar3 = StringLiteral__profile_id__0__planet_id__1__to;
    PStack_4._arg0 = (Object *)0x0;
    PStack_4._arg1 = (Object *)0x0;
    PStack_4._arg2 = (Object *)0x0;
    PStack_4._args = (Object__Array *)0x0;
    mscorlib.dll::System::ParamsArray::ParamsArray__ctor_2
              (&PStack_4,arg0,arg1,(Object *)(pGVar2->fields).token,(MethodInfo *)0x0);
    PStack_5._arg0 = PStack_4._arg0;
    PStack_5._arg1 = PStack_4._arg1;
    PStack_5._arg2 = PStack_4._arg2;
    PStack_5._args = PStack_4._args;
    pSVar3 = mscorlib.dll::System::String::String_FormatHelper
                       ((IFormatProvider *)0x0,pSVar3,&PStack_5,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pGVar2 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
    if (pGVar2 != (GameSessionData *)0x0) {
      path = mscorlib.dll::System::String::String_Concat_4
                       ((pGVar2->fields).gameRewardDataURL,pSVar3,(MethodInfo *)0x0);
      this_00 = (UnityAction_1_System_Object_ *)
                FUN_?(TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
      UnityAction_1_System_Object___ctor
                (this_00,(Object *)this,
                 MethodInfo__TimeReward__RequestRewardData__OnRewardData_UnityEngine__Networking__UnityWebRequest_
                 ,(MethodInfo *)0x0);
      this_01 = (AsyncWebRequest *)FUN_?(TypeInfo__GetRequest);
      AsyncWebRequest::AsyncWebRequest__ctor
                (this_01,path,(Action_1_UnityEngine_Networking_UnityWebRequest_ *)this_00,
                 WWWRequestPriority__Enum_WaitUntilSyncronizingIsDone,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__AsyncWWWManager->_1).field_0x1c == 0) {
        FUN_?();
      }
      AsyncWWWManager::AsyncWWWManager_WWWRequest(this_01,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVGameControllerBase);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pGVar2 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
      if (pGVar2 != (GameSessionData *)0x0) {
        mscorlib.dll::System::String::String_Concat_5
                  (StringLiteral_MVGameControllerBase_GameSession,(pGVar2->fields).gameRewardDataURL
                   ,pSVar3,(MethodInfo *)0x0);
        if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
          FUN_?();
        }
        if (cRam_? == '\0') {
          PStack_4._args = (Object__Array *)&UNK_?;
          FUN_?(&TypeInfo__UnityEngine__Debug,0);
          LOCK();
          UNLOCK();
          PStack_4._args = (Object__Array *)&UNK_?;
          FUN_?(&TypeInfo__UnityEngine__ILogger);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
          PStack_4._args = (Object__Array *)&UNK_?;
          FUN_?();
        }
        if (cRam_? == '\0') {
          PStack_4._args = (Object__Array *)&UNK_?;
          FUN_?(&TypeInfo__UnityEngine__Debug);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
          PStack_4._args = (Object__Array *)&UNK_?;
          FUN_?();
        }
        pIVar6 = TypeInfo__UnityEngine__Debug->static_fields->s_Logger;
        if (pIVar6 != (ILogger_1 *)0x0) {
          PStack_4._args = (Object__Array *)&UNK_?;
          FUN_?(6,TypeInfo__UnityEngine__ILogger,pIVar6,3);
          return;
        }
        PStack_4._args = (Object__Array *)&UNK_?;
        FUN_?();
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
  }
  FUN_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}

