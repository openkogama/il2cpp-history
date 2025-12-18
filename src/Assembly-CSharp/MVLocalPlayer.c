
/* Void AddXp(Int32, XPRewardType, Int32, Int32) */

void Assembly-CSharp.dll::MVLocalPlayer::MVLocalPlayer_AddXp
               (MVLocalPlayer *this,int32_t currentPlayerXP,XPRewardType__Enum typeId,
               int32_t xpDelta,int32_t memberCount,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__LevelingManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__LevelingManager->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__LevelingManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__LevelingManager->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (TypeInfo__LevelingManager->static_fields->_IsInitialized_k__BackingField == 0) {
    return;
  }
  pXVar1 = (this->fields).xpProgress;
  if ((pXVar1 != (XPProgress *)0x0) &&
     (pXVar2 = (pXVar1->fields).xpProgressData, pXVar2 != (XPProgressData *)0x0)) {
    (pXVar2->fields).xpId = (uint8_t)typeId;
    pXVar2 = (pXVar1->fields).xpProgressData;
    if (pXVar2 != (XPProgressData *)0x0) {
      (pXVar2->fields).playerCurrentXP = currentPlayerXP;
      pXVar2 = (pXVar1->fields).xpProgressData;
      if (pXVar2 != (XPProgressData *)0x0) {
        (pXVar2->fields).xpDelta = xpDelta;
        pXVar2 = (pXVar1->fields).xpProgressData;
        if (pXVar2 != (XPProgressData *)0x0) {
          (pXVar2->fields).memberCount = memberCount;
          if ((pXVar1->fields).OnXPProgressData == (XPProgress_OnXPProgressDataDelegate *)0x0) {
            return;
          }
          pXVar3 = (pXVar1->fields).OnXPProgressData;
          (*(pXVar3->fields)._._.invoke_impl)
                    ((pXVar3->fields)._._.method_code,(pXVar1->fields).xpProgressData,
                     (pXVar3->fields)._._.method);
          return;
        }
      }
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void CreateSpawnRole(Int32) */

void Assembly-CSharp.dll::MVLocalPlayer::MVLocalPlayer_CreateSpawnRole
               (MVLocalPlayer *this,int32_t avatarSpawnerWoId,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_If_this_fails_then_remember_to_u);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
            ((Object *)StringLiteral_If_this_fails_then_remember_to_u,(MethodInfo *)0x0);
  MVLocalPlayer_SuspendCurrentSpawnRole(this,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (((pMVar1 != (MVGameControllerBase *)0x0) &&
      (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
     (pMVar3 = (pMVar2->fields).operationRequests, pMVar3 != (MVNetworkGame_OperationRequests *)0x0)
     ) {
    if (cRam_? == '\0') {
      FUN_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                   );
      LOCK();
      UNLOCK();
      FUN_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                   );
      LOCK();
      UNLOCK();
      FUN_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                   );
      LOCK();
      UNLOCK();
      FUN_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    this_00 = (Dictionary_2_System_Byte_System_Object_ *)
              FUN_?(
                           TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                           );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object___ctor
              (this_00,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
              );
    aiStackX_20[0] = avatarSpawnerWoId;
    value = (Object *)FUN_?(uRam_?,aiStackX_20);
    if (this_00 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
      method_00 = MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                  ->klass->rgctx_data[0x22].method;
      uVar4 = CONCAT71((int7)((ulonglong)method_00 >> 8),0x17);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
      Dictionary_2_System_Byte_System_Object__TryInsert
                (this_00,0x17,value,
                 (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)in_R9 >> 8),2),method_00);
      pPVar5 = (pMVar3->fields).peer;
      if (*(int *)&(TypeInfo__ExitGames__Client__Photon__SendOptions->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
      }
      if (pPVar5 != (PhotonPeer *)0x0) {
        (*(pPVar5->klass->vtable).SendOperation.methodPtr)
                  (pPVar5,CONCAT71((int7)((ulonglong)uVar4 >> 8),0x71),this_00,
                   TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields->SendReliable,
                   (pPVar5->klass->vtable).SendOperation.method);
        return;
      }
    }
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void Destroy() */

void Assembly-CSharp.dll::MVLocalPlayer::MVLocalPlayer_Destroy
               (MVLocalPlayer *this,MethodInfo *method)

{
  object = (this->fields).xpProgress;
  if (object == (XPProgress *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
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
            (this_01,(Object *)object,
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
  DStack_2._dictionary = (Dictionary_2_System_UInt32_System_Object_ *)0x0;
  DStack_2._version = 0;
  DStack_2._index = 0;
  DStack_2._current.key = 0;
  DStack_2._current._4_4_ = 0;
  DStack_2._current.value = (Object *)0x0;
  DStack_2._getEnumeratorRetType = 0;
  DStack_2._36_4_ = 0;
  QStack_3._q = (Queue_1_System_Object_ *)0x0;
  QStack_3._version = 0;
  QStack_3._index = 0;
  QStack_3._currentElement = (Object *)0x0;
  if (*(int *)&(TypeInfo__AsyncWWWManager->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__AsyncWWWManager);
  }
  pHVar4 = TypeInfo__AsyncWWWManager->static_fields->activeRequests;
  if (pHVar4 != (HashSet_1_AsyncWebRequest_ *)0x0) {
    if (iRam_? != 0) {
      uVar5 = (uint)((ulonglong)&pHStack_6 >> 0xc);
      lVar7 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
      do {
        uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
        puVar9 = (ulonglong *)(lVar7 + 0xADDR);
        LOCK();
        bVar10 = uVar8 == *puVar9;
        if (bVar10) {
          *puVar9 = uVar8 | 1L << (ulonglong)(uVar5 & 0x3f);
        }
        UNLOCK();
      } while (!bVar10);
    }
    pDStack_11 = (Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object_ *)
                 ((ulonglong)(uint)(pHVar4->fields)._version << 0x20);
    uStack_12 = 0;
    auStack_13._8_8_ = pDStack_11;
    pOStack_14 = (Object *)0x0;
    pHStack_6 = pHVar4;
    auStack_13._0_8_ = pHVar4;
code_?:
    while (bVar15 = System.Core.dll::System::Collections::Generic::HashSet`1[T]+Enumerator[System::
                   Object]::HashSet_1_T_Enumerator_System_Object__MoveNext
                             ((HashSet_1_T_Enumerator_System_Object_ *)auStack_13,
                              MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<AsyncWebRequest>__MoveNext__
                             ), pOVar16 = pOStack_14, bVar15 != 0) {
      ppAVar17 = (Action_1_UnityEngine_Networking_UnityWebRequest___Class **)
                 TypeInfo__AsyncWWWManager;
      if (*(int *)&(TypeInfo__AsyncWWWManager->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        ppAVar17 = &TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>;
        FUN_?();
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (pOVar16 == (Object *)0x0) goto code_?;
      pOVar18 = pOVar16[1].klass;
      if (pOVar18 == (Object__Class *)0x0) goto code_?;
      if ((this_01 != (UnityAction_1_System_Object_ *)0x0) &&
         (cVar19 = (**(code **)&(pOVar18->_0).image[4].typeCount)(pOVar18,this_01), cVar19 != '\0'))
      goto code_?;
    }
    if (*(int *)&(TypeInfo__AsyncWWWManager->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__AsyncWWWManager);
    }
    pDVar20 = (Dictionary_2_System_UInt32_System_Object_ *)
             TypeInfo__AsyncWWWManager->static_fields->requests;
    if (pDVar20 != (Dictionary_2_System_UInt32_System_Object_ *)0x0) {
      if (iRam_? != 0) {
        uVar5 = (uint)((ulonglong)&pDStack_21 >> 0xc);
        lVar7 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
        do {
          uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
          puVar9 = (ulonglong *)(lVar7 + 0xADDR);
          LOCK();
          bVar10 = uVar8 == *puVar9;
          if (bVar10) {
            *puVar9 = uVar8 | 1L << (ulonglong)(uVar5 & 0x3f);
          }
          UNLOCK();
        } while (!bVar10);
      }
      uStack_22 = (ulonglong)(uint)(pDVar20->fields)._version;
      uStack_23 = 2;
      uStack_24 = 0;
      uStack_25 = 0;
      DStack_2._version = (undefined4)uStack_22;
      DStack_2._index = uStack_22._4_4_;
      DStack_2._current.key = 0;
      DStack_2._current._4_4_ = 0;
      DStack_2._current.value = (Object *)0x0;
      DStack_2._getEnumeratorRetType = 2;
      DStack_2._36_4_ = 0;
      pHStack_6 = (HashSet_1_AsyncWebRequest_ *)0x0;
      pDStack_11 = &DStack_2;
      pDStack_21 = pDVar20;
      DStack_2._dictionary = pDVar20;
      while (bVar15 = mscorlib.dll::System::Collections::Generic::
                     Dictionary`2[TKey,TValue]+Enumerator[System::UInt32,System::Object]::
                     Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                               (&DStack_2,
                                MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<WWWRequestPriority,_System::Collections::Generic::Queue<AsyncWebRequest>_>__MoveNext__
                               ), bVar15 != 0) {
        if ((Dictionary_2_System_UInt32_System_Object_ *)DStack_2._current.value ==
            (Dictionary_2_System_UInt32_System_Object_ *)0x0) goto code_?;
        uStack_22 = 0;
        uStack_24 = 0;
        pDStack_21 = (Dictionary_2_System_UInt32_System_Object_ *)DStack_2._current.value;
        if (iRam_? != 0) {
          uVar5 = (uint)((ulonglong)&pDStack_21 >> 0xc);
          lVar7 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
          do {
            uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
            puVar9 = (ulonglong *)(lVar7 + 0xADDR);
            LOCK();
            bVar10 = uVar8 == *puVar9;
            if (bVar10) {
              *puVar9 = uVar8 | 1L << (ulonglong)(uVar5 & 0x3f);
            }
            UNLOCK();
          } while (!bVar10);
        }
        if ((Dictionary_2_System_UInt32_System_Object_ *)DStack_2._current.value ==
            (Dictionary_2_System_UInt32_System_Object_ *)0x0) goto code_?;
        QStack_3._version =
             ((Dictionary_2_System_UInt32_System_Object___Fields *)
             ((longlong)DStack_2._current.value + 0x10))->_freeList;
        uStack_22 = CONCAT44(0xffffffff,QStack_3._version);
        uStack_24 = 0;
        QStack_3._q = (Queue_1_System_Object_ *)DStack_2._current.value;
        QStack_3._index = 0xffffffff;
        QStack_3._currentElement = (Object *)0x0;
        while (bVar15 = mscorlib.dll::System::Collections::Generic::Queue`1[T]+Enumerator[System::
                       Object]::Queue_1_T_Enumerator_System_Object__MoveNext
                                 (&QStack_3,
                                  MethodInfo__System__Collections__Generic__Queue_1_T___Enumerator<AsyncWebRequest>__MoveNext__
                                 ), pOVar16 = QStack_3._currentElement, bVar15 != 0) {
          ppAVar17 = (Action_1_UnityEngine_Networking_UnityWebRequest___Class **)
                     MethodInfo__System__Collections__Generic__Queue_1_T___Enumerator<AsyncWebRequest>__get_Current__
          ;
          if ((longlong)QStack_3._8_8_ < 0) goto code_?;
          if (*(int *)&(TypeInfo__AsyncWWWManager->_1).field_0x1c == 0) {
            FUN_?();
          }
          AsyncWWWManager::AsyncWWWManager_Unsubscribe
                    ((AsyncWebRequest *)pOVar16,
                     (Action_1_UnityEngine_Networking_UnityWebRequest_ *)this_01,(MethodInfo *)0x0);
          unaff_RDI = (AsyncWWWManager__Class *)pOVar16;
        }
        QStack_3._index = 0xfffffffe;
        QStack_3._currentElement = (Object *)0x0;
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
  ppAVar17 = (Action_1_UnityEngine_Networking_UnityWebRequest___Class **)unaff_RDI;
code_?:
  FUN_?(ppAVar17,unaff_RSI);
code_?:
  FUN_?();
  FUN_?();
code_?:
  lVar7 = func_?((((AsyncWWWManager__Class *)ppAVar17)->_0).byval_arg.data.dummy);
  uVar26 = func_?(*(undefined8 *)(lVar7 + 0xc0),4);
  FUN_?(&QStack_3,uVar26);
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
code_?:
  if (this_01 == (UnityAction_1_System_Object_ *)0x0) {
code_?:
    unaff_RDI = (AsyncWWWManager__Class *)
                mscorlib.dll::System::Delegate::Delegate_Remove
                          ((Delegate *)pOVar16[1].klass,(Delegate *)this_01,(MethodInfo *)0x0);
    unaff_RSI = TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>;
    pOVar18 = (Object__Class *)0x0;
    if ((unaff_RDI != (AsyncWWWManager__Class *)0x0) &&
       (pOVar18 = (Object__Class *)
                 FUN_?(unaff_RDI,
                               TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>),
       ppAVar17 = (Action_1_UnityEngine_Networking_UnityWebRequest___Class **)unaff_RDI,
       pOVar18 == (Object__Class *)0x0)) goto code_?;
    pOVar16[1].klass = pOVar18;
    if (iRam_? != 0) {
      uVar5 = (uint)((ulonglong)(pOVar16 + 1) >> 0xc);
      lVar7 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
      do {
        uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
        puVar9 = (ulonglong *)(lVar7 + 0xADDR);
        LOCK();
        bVar10 = uVar8 == *puVar9;
        if (bVar10) {
          *puVar9 = uVar8 | 1L << (ulonglong)(uVar5 & 0x3f);
        }
        UNLOCK();
      } while (!bVar10);
    }
  }
  goto code_?;
}


/* Void DiedInRound() */

void Assembly-CSharp.dll::MVLocalPlayer::MVLocalPlayer_DiedInRound
               (MVLocalPlayer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uVar1._0_4_ = (this->fields).numberOfTimesDiedInRound.currentCryptoKey;
  uVar1._4_4_ = (this->fields).numberOfTimesDiedInRound.hiddenValue;
  uVar2._0_4_ = (this->fields).numberOfTimesDiedInRound.fakeValue;
  uVar2._4_1_ = (this->fields).numberOfTimesDiedInRound.inited;
  uVar2._5_3_ = *(undefined3 *)&(this->fields).numberOfTimesDiedInRound.field_0xd;
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).field_0x1c == 0) {
    FUN_?();
  }
  aOStack_3[0]._0_8_ = uVar1;
  aOStack_3[0]._8_8_ = uVar2;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).field_0x1c == 0) {
    FUN_?();
  }
  iVar4 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
          ObscuredInt_InternalDecrypt(aOStack_3,(MethodInfo *)0x0);
  iVar5 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
          ObscuredInt_Encrypt_1(iVar4 + 1,aOStack_3[0].currentCryptoKey,(MethodInfo *)0x0);
  aOStack_3[0].hiddenValue = iVar5;
  bVar6 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::ObscuredCheatingDetector::
          ObscuredCheatingDetector_get_IsRunning((MethodInfo *)0x0);
  iVar5 = aOStack_3[0].fakeValue;
  if (bVar6 != 0) {
    iVar5 = iVar4 + 1;
  }
  (this->fields).numberOfTimesDiedInRound.currentCryptoKey = aOStack_3[0].currentCryptoKey;
  (this->fields).numberOfTimesDiedInRound.hiddenValue = aOStack_3[0].hiddenValue;
  (this->fields).numberOfTimesDiedInRound.fakeValue = iVar5;
  (this->fields).numberOfTimesDiedInRound.inited = aOStack_3[0].inited;
  *(undefined3 *)&(this->fields).numberOfTimesDiedInRound.field_0xd = aOStack_3[0]._13_3_;
  return;
}


/* Boolean HasDiedInRound() */

bool Assembly-CSharp.dll::MVLocalPlayer::MVLocalPlayer_HasDiedInRound
               (MVLocalPlayer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uVar1._0_4_ = (this->fields).numberOfTimesDiedInRound.currentCryptoKey;
  uVar1._4_4_ = (this->fields).numberOfTimesDiedInRound.hiddenValue;
  uVar2._0_4_ = (this->fields).numberOfTimesDiedInRound.fakeValue;
  uVar2._4_1_ = (this->fields).numberOfTimesDiedInRound.inited;
  uVar2._5_3_ = *(undefined3 *)&(this->fields).numberOfTimesDiedInRound.field_0xd;
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).field_0x1c == 0) {
    FUN_?();
  }
  aOStack_3[0]._0_8_ = uVar1;
  aOStack_3[0]._8_8_ = uVar2;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).field_0x1c == 0) {
    FUN_?();
  }
  iVar4 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
          ObscuredInt_InternalDecrypt(aOStack_3,(MethodInfo *)0x0);
  return 0 < iVar4 + 0xe91;
}


/* Void InitializeLeveling(InitialLevelData) */

void Assembly-CSharp.dll::MVLocalPlayer::MVLocalPlayer_InitializeLeveling
               (MVLocalPlayer *this,InitialLevelData *initialLevelData,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__XPProgress);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (initialLevelData == (InitialLevelData *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  (this->fields)._.level = (initialLevelData->fields).Level;
  this_00 = (XPProgress *)FUN_?(TypeInfo__XPProgress);
  XPProgress::XPProgress__ctor(this_00,this,initialLevelData,(MethodInfo *)0x0);
  bVar2 = iRam_? != 0;
  (this->fields).xpProgress = this_00;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields).xpProgress >> 0xc);
    puVar4 = (ulonglong *)((ulonglong)((uVar3 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar5 = *puVar4;
      LOCK();
      uVar6 = *puVar4;
      if (uVar5 == uVar6) {
        *puVar4 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (uVar5 != uVar6);
  }
  pAVar7 = (this->fields).OnInitializeLeveling;
  if (pAVar7 != (Action *)0x0) {
    (*(pAVar7->fields)._._.invoke_impl)
              ((pAVar7->fields)._._.method_code,(pAVar7->fields)._._.method);
  }
  return;
}


/* Boolean IsAvatarDriving(MVVehicleBase) */

bool Assembly-CSharp.dll::MVLocalPlayer::MVLocalPlayer_IsAvatarDriving
               (MVLocalPlayer *this,MVVehicleBase *vehicleBase,MethodInfo *method)

{
  if (vehicleBase != (MVVehicleBase *)0x0) {
    pMVar1 = MVLocalPlayer_get_AvatarLocal(this,(MethodInfo *)0x0);
    if (pMVar1 != (MVAvatarLocal *)0x0) {
      iVar2 = (pMVar1->fields)._._._._.id;
      if (cRam_? == '\0') {
        FUN_?(&
                      MethodInfo__System__Collections__Generic__List_1_T___Enumerator<VehicleSeatBase>__Dispose__
                      ,iVar2,1,0);
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__List_1_T___Enumerator<VehicleSeatBase>__MoveNext__
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__List_1_T___Enumerator<VehicleSeatBase>__get_Current__
                     );
        LOCK();
        UNLOCK();
        FUN_?();
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pVVar3 = (vehicleBase->fields).seatManager;
      if ((pVVar3 == (VehicleSeatManager *)0x0) ||
         (pLVar4 = (pVVar3->fields).seats, pLVar4 == (List_1_VehicleSeatBase_ *)0x0)) {
        FUN_?();
code_?:
        FUN_?();
      }
      else {
        if (iRam_? != 0) {
          uVar5 = (uint)((ulonglong)&uStack_6 >> 0xc);
          puVar7 = (ulonglong *)((ulonglong)((uVar5 & 0x1fffff) >> 6) * 8 + 0xADDR);
          do {
            uVar8 = *puVar7;
            LOCK();
            uVar9 = *puVar7;
            if (uVar8 == uVar9) {
              *puVar7 = uVar8 | 1L << (uVar5 & 0x3f);
            }
            UNLOCK();
          } while (uVar8 != uVar9);
        }
        pLStack_10 = (List_1_T_Enumerator_System_Object_ *)
                     ((ulonglong)(uint)(pLVar4->fields)._version << 0x20);
        puStack_11 = (undefined *)0x0;
        LStack_12._8_8_ = pLStack_10;
        LStack_12._current = (Object *)0x0;
        uStack_6 = 0;
        pLStack_10 = &LStack_12;
        LStack_12._list = (List_1_System_Object_ *)pLVar4;
        while( true ) {
          bVar13 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
                  List_1_T_Enumerator_System_Object__MoveNext
                            (&LStack_12,
                             MethodInfo__System__Collections__Generic__List_1_T___Enumerator<VehicleSeatBase>__MoveNext__
                            );
          if (bVar13 == 0) {
            return 0;
          }
          if (LStack_12._current == (Object *)0x0) break;
          if (LStack_12._current[2].monitor == (MonitorData *)0x0) goto code_?;
          if (((*(int *)(LStack_12._current[2].monitor + 0x10) == iVar2) &&
              (*(char *)&LStack_12._current[5].klass != '\0')) &&
             (*(char *)((longlong)&LStack_12._current[5].klass + 1) == '\0')) {
            return 1;
          }
        }
      }
      FUN_?();
      FUN_?();
      pcVar14 = (code *)swi(3);
      bVar13 = (*pcVar14)();
      return bVar13;
    }
  }
  return 0;
}


/* Boolean IsPlaying() */

bool Assembly-CSharp.dll::MVLocalPlayer::MVLocalPlayer_IsPlaying
               (MVLocalPlayer *this,MethodInfo *method)

{
  pMVar1 = MVLocalPlayer_get_AvatarLocal(this,(MethodInfo *)0x0);
  if (pMVar1 == (MVAvatarLocal *)0x0) {
    return 0;
  }
  pMVar2 = (pMVar1->fields).avatarLocalModes;
  if (pMVar2 != (MVAvatarLocal_AvatarLocalModes *)0x0) {
    return (pMVar2->fields).currentState == 1;
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  bVar4 = (*pcVar3)();
  return bVar4;
}


/* Void OnLevelChangedLocal(Int32) */

void Assembly-CSharp.dll::MVLocalPlayer::MVLocalPlayer_OnLevelChangedLocal
               (MVLocalPlayer *this,int32_t level,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__NotificationController);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (((pMVar1 != (MVGameControllerBase *)0x0) &&
      (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
     (pMVar3 = (pMVar2->fields).operationRequests, pMVar3 != (MVNetworkGame_OperationRequests *)0x0)
     ) {
    if (cRam_? == '\0') {
      FUN_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                   );
      LOCK();
      UNLOCK();
      FUN_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                   );
      LOCK();
      UNLOCK();
      FUN_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                   );
      LOCK();
      UNLOCK();
      FUN_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    this_00 = (Dictionary_2_System_Byte_System_Object_ *)
              FUN_?(
                           TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                           );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object___ctor
              (this_00,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
              );
    aiStackX_20[0] = level;
    pOVar4 = (Object *)FUN_?(uRam_?,aiStackX_20);
    if (this_00 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
      method_00 = MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                  ->klass->rgctx_data[0x22].method;
      uVar5 = CONCAT71((int7)((ulonglong)method_00 >> 8),0xac);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
      Dictionary_2_System_Byte_System_Object__TryInsert
                (this_00,0xac,pOVar4,
                 (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)in_R9 >> 8),2),method_00);
      pPVar6 = (pMVar3->fields).peer;
      if (*(int *)&(TypeInfo__ExitGames__Client__Photon__SendOptions->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
      }
      if (pPVar6 != (PhotonPeer *)0x0) {
        SVar7 = TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields->SendReliable;
        (*(pPVar6->klass->vtable).SendOperation.methodPtr)
                  (pPVar6,CONCAT71((int7)((ulonglong)uVar5 >> 8),0x39),this_00,SVar7,
                   (pPVar6->klass->vtable).SendOperation.method);
        if ((this->fields).oldLevel != 0) {
          this_01 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
                     *)FUN_?(
                                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                                    );
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
          UIElements::UIR::UIRenderDevice+DisableForceGammaMaterial]::
          Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
                    (this_01,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                    );
          aiStackX_20[0] = CONCAT31(aiStackX_20[0]._1_3_,4);
          pOVar4 = (Object *)FUN_?(uRam_?,aiStackX_20);
          aiStackX_20[0] = level;
          value = (Object *)FUN_?(uRam_?,aiStackX_20);
          if (this_01 ==
              (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
               *)0x0) goto code_?;
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__TryInsert
                    ((Dictionary_2_System_Object_System_Object_ *)this_01,pOVar4,value,
                     (InsertionBehavior__Enum)CONCAT71(SVar7._1_7_,2),
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                     ->klass->rgctx_data[0x22].method);
          if (*(int *)&(TypeInfo__NotificationController->_1).field_0x1c == 0) {
            FUN_?();
          }
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__NotificationController);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__NotificationsManager);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          if (TypeInfo__NotificationsManager->static_fields->_Initialized_k__BackingField != 0) {
            if (*(int *)&(TypeInfo__NotificationController->_1).field_0x1c == 0) {
              FUN_?();
            }
            this_02 = NotificationController::NotificationController_get_NotificationsManager
                                ((MethodInfo *)0x0);
            if (this_02 == (NotificationsManager *)0x0) goto code_?;
            NotificationsManager::NotificationsManager_InstantiateNotification
                      (this_02,NotificationType__Enum_LevelUp,
                       (Dictionary_2_System_Object_System_Object_ *)this_01,(MethodInfo *)0x0);
          }
        }
        (this->fields).oldLevel = level;
        return;
      }
    }
  }
code_?:
  FUN_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void RoundEnded() */

void Assembly-CSharp.dll::MVLocalPlayer::MVLocalPlayer_RoundEnded
               (MVLocalPlayer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  (this->fields)._.checkpointWOID = -1;
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).field_0x1c == 0) {
    FUN_?();
  }
  iVar1 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
          ObscuredInt_Encrypt(-0xe91,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
  }
  uVar2 = 0;
  iVar3 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->static_fields->cryptoKey;
  bVar4 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::ObscuredCheatingDetector::
          ObscuredCheatingDetector_get_IsRunning((MethodInfo *)0x0);
  if (bVar4 != 0) {
    uVar2 = 0xfffff16f;
  }
  uStack_5 = (ulonglong)CONCAT14(1,uVar2);
  (this->fields).numberOfTimesDiedInRound.currentCryptoKey = iVar3;
  (this->fields).numberOfTimesDiedInRound.hiddenValue = iVar1;
  (this->fields).numberOfTimesDiedInRound.fakeValue = (undefined4)uStack_5;
  (this->fields).numberOfTimesDiedInRound.inited = uStack_5._4_1_;
  *(undefined3 *)&(this->fields).numberOfTimesDiedInRound.field_0xd = uStack_5._5_3_;
  return;
}


/* Void SendXpProgressEvent(XPProgressData) */

void Assembly-CSharp.dll::MVLocalPlayer::MVLocalPlayer_SendXpProgressEvent
               (MVLocalPlayer *this,XPProgressData *xpProgressData,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__NotificationController);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_You_gained__0__XP_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields).OnXPProgressData != (XPProgress_OnXPProgressDataDelegate *)0x0) {
    pXVar1 = (this->fields).OnXPProgressData;
    (*(pXVar1->fields)._._.invoke_impl)((pXVar1->fields)._._.method_code);
  }
  pSVar2 = TM::TM__(StringLiteral_You_gained__0__XP_,(MethodInfo *)0x0);
  if (xpProgressData != (XPProgressData *)0x0) {
    aiStackX_8[0] = (xpProgressData->fields).xpDelta;
    arg0 = (Object *)FUN_?(uRam_?,aiStackX_8);
    PStack_3._arg0 = (Object *)0x0;
    PStack_3._arg1 = (Object *)0x0;
    PStack_3._arg2 = (Object *)0x0;
    PStack_3._args = (Object__Array *)0x0;
    mscorlib.dll::System::ParamsArray::ParamsArray__ctor(&PStack_3,arg0,(MethodInfo *)0x0);
    PStack_4._arg0 = PStack_3._arg0;
    PStack_4._arg1 = PStack_3._arg1;
    PStack_4._arg2 = PStack_3._arg2;
    PStack_4._args = PStack_3._args;
    pSVar2 = mscorlib.dll::System::String::String_FormatHelper
                       ((IFormatProvider *)0x0,pSVar2,&PStack_4,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__NotificationController->_1).field_0x1c == 0) {
      FUN_?();
    }
    NotificationController::NotificationController_PushNotification
              (pSVar2,(Sprite *)0x0,5,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar5 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if (((pMVar5 != (MVGameControllerBase *)0x0) &&
        (pMVar6 = (pMVar5->fields).game, pMVar6 != (MVNetworkGame *)0x0)) &&
       (pGVar7 = (pMVar6->fields).GameEventManager, pGVar7 != (GameEventManager *)0x0)) {
      if ((pGVar7->fields).OnXPRewarded != (Action_1_Int32_ *)0x0) {
        pAVar8 = (pGVar7->fields).OnXPRewarded;
        (*(pAVar8->fields)._._.invoke_impl)
                  ((pAVar8->fields)._._.method_code,(xpProgressData->fields).xpDelta,
                   (pAVar8->fields)._._.method);
      }
      return;
    }
  }
  FUN_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void SetActiveSpawnRole(Int32) */

void Assembly-CSharp.dll::MVLocalPlayer::MVLocalPlayer_SetActiveSpawnRole
               (MVLocalPlayer *this,int32_t existingAvatarWoId,MethodInfo *method)

{
  pSVar1 = (this->fields)._.spawnRolesManager;
  if ((pSVar1 != (SpawnRolesManager *)0x0) &&
     (pSVar2 = (pSVar1->fields).spawnRolesRuntimeData, pSVar2 != (SpawnRolesRuntimeData *)0x0)) {
    if (existingAvatarWoId == (pSVar2->fields).activeSpawnRole) {
      uVar3 = func_?(&TypeInfo__System__Exception);
      this_01 = (Exception *)func_?(uVar3);
      message = (String *)func_?(&StringLiteral_Trying_to_set_active_spawn_role_);
      mscorlib.dll::System::Exception::Exception__ctor_1(this_01,message,(MethodInfo *)0x0);
      uVar3 = func_?(&MethodInfo__MVLocalPlayer__SetActiveSpawnRole_int_);
      FUN_?(this_01,uVar3);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    MVLocalPlayer_SuspendCurrentSpawnRole(this,(MethodInfo *)0x0);
    pMVar5 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
    if (pMVar5 != (MVNetworkGame_OperationRequests *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                     );
        LOCK();
        UNLOCK();
        FUN_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      this_00 = (Dictionary_2_System_Byte_System_Object_ *)
                FUN_?(
                             TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                             );
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
      Dictionary_2_System_Byte_System_Object___ctor
                (this_00,
                 MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                );
      aiStackX_10[0] = existingAvatarWoId;
      value = (Object *)FUN_?(uRam_?,aiStackX_10);
      if (this_00 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
        method_00 = MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                    ->klass->rgctx_data[0x22].method;
        uVar3 = CONCAT71((int7)((ulonglong)method_00 >> 8),0xc1);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
        Dictionary_2_System_Byte_System_Object__TryInsert
                  (this_00,0xc1,value,
                   (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)in_R9 >> 8),2),method_00);
        pPVar6 = (pMVar5->fields).peer;
        if (*(int *)&(TypeInfo__ExitGames__Client__Photon__SendOptions->_1).field_0x1c == 0) {
          FUN_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
        }
        if (pPVar6 != (PhotonPeer *)0x0) {
          (*(pPVar6->klass->vtable).SendOperation.methodPtr)
                    (pPVar6,CONCAT71((int7)((ulonglong)uVar3 >> 8),0x6f),this_00,
                     TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields->SendReliable,
                     (pPVar6->klass->vtable).SendOperation.method);
          return;
        }
      }
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void SetLocalAvatarEarsState(Boolean) */

void Assembly-CSharp.dll::MVLocalPlayer::MVLocalPlayer_SetLocalAvatarEarsState
               (MVLocalPlayer *this,bool activeState,MethodInfo *method)

{
  pMVar1 = MVLocalPlayer_get_AvatarLocal(this,(MethodInfo *)0x0);
  if (pMVar1 == (MVAvatarLocal *)0x0) {
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__AvatarLocal);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pAVar2 = (pMVar1->fields)._.avatar;
  if (pAVar2 != (Avatar *)0x0) {
    bVar3 = (TypeInfo__AvatarLocal->_1).naturalAligment;
    if (((pAVar2->klass->_1).naturalAligment < bVar3) ||
       ((pAVar2->klass->_1).typeHierarchy[(ulonglong)bVar3 - 1] !=
        (Il2CppClass *)TypeInfo__AvatarLocal)) {
      FUN_?(pAVar2);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    this_00 = pAVar2[1].fields._.m_CancellationTokenSource;
    if (this_00 != (CancellationTokenSource *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                ((GameObject *)this_00,activeState,(MethodInfo *)0x0);
      return;
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void SetupPlayerWorldObjects(Int32, SpawnRolesRuntimeData) */

void Assembly-CSharp.dll::MVLocalPlayer::MVLocalPlayer_SetupPlayerWorldObjects
               (MVLocalPlayer *this,int32_t defaultBodyWoId,
               SpawnRolesRuntimeData *spawnRolesRuntimeData,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__MVLocalPlayer__SpawnRoleModeOnOnChange_MV__Common__SpawnRoleModeType_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__SpawnRoleChangeHandlerLocal);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<MV::Common::SpawnRoleModeType>__add_OnChange_Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable_1_T___SubDelegate<MV::Common::SpawnRoleModeType>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable_1_T___SubDelegate<MV::Common::SpawnRoleModeType>
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pIVar1 = (ISpawnRoleChangeHandler__Class *)(this->fields).spawnRoleDataMediator;
  (this->fields).defaultBodyWoId = defaultBodyWoId;
  spawnRoleChangeHandler =
       (ISpawnRoleChangeHandler *)FUN_?(TypeInfo__SpawnRoleChangeHandlerLocal);
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataMediator
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (ISpawnRoleChangeHandler__Class *)
            FUN_?(
                         TypeInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataMediator
                         );
  Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::Mediator::SpawnRoleDataMediator::
  SpawnRoleDataMediator__ctor((SpawnRoleDataMediator *)this_00,(MethodInfo *)0x0);
  iVar2 = iRam_?;
  spawnRoleChangeHandler[1].klass = this_00;
  if (iVar2 != 0) {
    uVar3 = (uint)((ulonglong)(spawnRoleChangeHandler + 1) >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar7 = uVar5 == *puVar6;
      if (bVar7) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
      iVar2 = iRam_?;
    } while (!bVar7);
  }
  spawnRoleChangeHandler[1].klass = pIVar1;
  if (iVar2 != 0) {
    uVar3 = (uint)((ulonglong)(spawnRoleChangeHandler + 1) >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar7 = uVar5 == *puVar6;
      if (bVar7) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar7);
  }
  MVPlayer::MVPlayer_SetupSpawnRoleManager
            ((MVPlayer *)this,spawnRoleChangeHandler,spawnRolesRuntimeData,(MethodInfo *)0x0);
  pSVar8 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                      ((MethodInfo *)0x0);
  if (pSVar8 != (SpawnRoleDataMediator *)0x0) {
    pSVar9 = (pSVar8->fields).spawnRoleMode;
    b = (Delegate *)
        FUN_?(
                     TypeInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable_1_T___SubDelegate<MV::Common::SpawnRoleModeType>
                     );
    FUN_?(b,this);
    pMVar10 = 
    MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<MV::Common::SpawnRoleModeType>__add_OnChange_Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable_1_T___SubDelegate<MV::Common::SpawnRoleModeType>_
    ;
    if (pSVar9 != (SpawnRoleDataMediator_SpawnRoleVariableInternal_1_MV_Common_SpawnRoleModeType_ *)
                  0x0) {
      ppSVar11 = &(pSVar9->fields)._.OnChange;
      a = (pSVar9->fields)._.OnChange;
      do {
        pDVar12 = mscorlib.dll::System::Delegate::Delegate_Combine
                            ((Delegate *)a,b,(MethodInfo *)0x0);
        pvVar13 = pMVar10->klass->rgctx_data[6].rgctxDataDummy;
        if ((*(byte *)((longlong)pvVar13 + 0x135) & 1) == 0) {
          pvVar13 = (void *)FUN_?();
        }
        if (pDVar12 == (Delegate *)0x0) {
          pSVar14 = (SpawnRoleVariable_1_T_SubDelegate_MV_Common_SpawnRoleModeType_ *)0x0;
        }
        else {
          pSVar14 = (SpawnRoleVariable_1_T_SubDelegate_MV_Common_SpawnRoleModeType_ *)
                    FUN_?(pDVar12,pvVar13);
          if (pSVar14 == (SpawnRoleVariable_1_T_SubDelegate_MV_Common_SpawnRoleModeType_ *)0x0) {
            FUN_?(pDVar12,pvVar13);
            pcVar15 = (code *)swi(3);
            (*pcVar15)();
            return;
          }
        }
        LOCK();
        pSVar16 = *ppSVar11;
        bVar7 = a == pSVar16;
        if (bVar7) {
          *ppSVar11 = pSVar14;
          pSVar16 = a;
        }
        UNLOCK();
        pSVar14 = a;
        if (!bVar7) {
          pSVar14 = pSVar16;
        }
        if (iRam_? != 0) {
          uVar3 = (uint)((ulonglong)ppSVar11 >> 0xc);
          uVar5 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
          do {
            uVar17 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
            puVar6 = (ulonglong *)(uVar5 * 8 + 0xADDR);
            LOCK();
            bVar7 = uVar17 == *puVar6;
            if (bVar7) {
              *puVar6 = uVar17 | 1L << (uVar3 & 0x3f);
            }
            UNLOCK();
          } while (!bVar7);
        }
        bVar7 = pSVar14 != a;
        a = pSVar14;
      } while (bVar7);
      return;
    }
  }
  FUN_?();
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
  return;
}


/* Void SpawnRoleModeOnOnChange(SpawnRoleModeType) */

void Assembly-CSharp.dll::MVLocalPlayer::MVLocalPlayer_SpawnRoleModeOnOnChange
               (MVLocalPlayer *this,SpawnRoleModeType__Enum value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__MVLocalPlayer__SpawnRoleModeOnOnChange_MV__Common__SpawnRoleModeType_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<MV::Common::SpawnRoleModeType>__remove_OnChange_Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable_1_T___SubDelegate<MV::Common::SpawnRoleModeType>_
                 );
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (value != SpawnRoleModeType__Enum_Playing) {
    return;
  }
  pSVar1 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                     ((MethodInfo *)0x0);
  if (pSVar1 != (SpawnRoleDataMediator *)0x0) {
    pSVar2 = (pSVar1->fields).spawnRoleMode;
    uVar3 = FUN_?(
                         TypeInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable_1_T___SubDelegate<MV::Common::SpawnRoleModeType>
                         );
    FUN_?(uVar3,this);
    if (pSVar2 != (SpawnRoleDataMediator_SpawnRoleVariableInternal_1_MV_Common_SpawnRoleModeType_ *)
                  0x0) {
      FUN_?(pSVar2,uVar3);
      this_00 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
      if (this_00 != (MVNetworkGame_OperationRequests *)0x0) {
        MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_IncrementStatRequest
                  (this_00,IncrementStatRequestType__Enum_PlayerHasEnteredWorldFirstTime,0,
                   (MethodInfo *)0x0);
        return;
      }
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void SuspendCurrentSpawnRole() */

void Assembly-CSharp.dll::MVLocalPlayer::MVLocalPlayer_SuspendCurrentSpawnRole
               (MVLocalPlayer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  pSVar1 = (this->fields)._.spawnRolesManager;
  if (((pSVar1 != (SpawnRolesManager *)0x0) &&
      (pSVar2 = (pSVar1->fields).spawnRolesRuntimeData, pSVar2 != (SpawnRolesRuntimeData *)0x0)) &&
     (this_00 != (MVWorldObjectClientManager *)0x0)) {
    pMVar3 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                       (this_00,(pSVar2->fields).activeSpawnRole,(MethodInfo *)0x0);
    pIVar4 = TypeInfo__ISpawnRoleLocal;
    if (pMVar3 != (MVWorldObjectClient *)0x0) {
      lVar5 = FUN_?(pMVar3,TypeInfo__ISpawnRoleLocal);
      pIVar6 = TypeInfo__ISpawnRoleLocal;
      if (lVar5 == 0) {
        FUN_?(pMVar3,pIVar4);
        UNRECOVERED_JUMPTABLE = (code *)swi(3);
        (*UNRECOVERED_JUMPTABLE)();
        return;
      }
      plVar7 = (longlong *)FUN_?(pMVar3,TypeInfo__ISpawnRoleLocal);
      if (plVar7 != (longlong *)0x0) {
        uVar8 = 0;
        lVar5 = *plVar7;
        if (*(ushort *)(lVar5 + 0x12e) != 0) {
          do {
            if (*(ISpawnRoleLocal__Class **)(*(longlong *)(lVar5 + 0xb0) + (ulonglong)uVar8 * 0x10)
                == TypeInfo__ISpawnRoleLocal) {
              puVar9 = (undefined8 *)
                       ((longlong)
                        (*(int *)(*(longlong *)(lVar5 + 0xb0) + 8 + (ulonglong)uVar8 * 0x10) + 2) *
                        0x10 + 0x138 + lVar5);
              UNRECOVERED_JUMPTABLE = (code *)*puVar9;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*UNRECOVERED_JUMPTABLE)(plVar7,puVar9[1],UNRECOVERED_JUMPTABLE);
              return;
            }
            uVar8 = uVar8 + 1;
          } while (uVar8 < *(ushort *)(lVar5 + 0x12e));
        }
        puVar9 = (undefined8 *)FUN_?(plVar7);
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)*puVar9)(plVar7,puVar9[1],(code *)*puVar9);
        return;
      }
      FUN_?(pMVar3,pIVar6);
      UNRECOVERED_JUMPTABLE = (code *)swi(3);
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
  }
  FUN_?();
  UNRECOVERED_JUMPTABLE = (code *)swi(3);
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


/* Void UnSuspendCurrentSpawnRole() */

void Assembly-CSharp.dll::MVLocalPlayer::MVLocalPlayer_UnSuspendCurrentSpawnRole
               (MVLocalPlayer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  pSVar1 = (this->fields)._.spawnRolesManager;
  if (((pSVar1 != (SpawnRolesManager *)0x0) &&
      (pSVar2 = (pSVar1->fields).spawnRolesRuntimeData, pSVar2 != (SpawnRolesRuntimeData *)0x0)) &&
     (this_00 != (MVWorldObjectClientManager *)0x0)) {
    pMVar3 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                       (this_00,(pSVar2->fields).activeSpawnRole,(MethodInfo *)0x0);
    pIVar4 = TypeInfo__ISpawnRoleLocal;
    if (pMVar3 != (MVWorldObjectClient *)0x0) {
      lVar5 = FUN_?(pMVar3,TypeInfo__ISpawnRoleLocal);
      pIVar6 = TypeInfo__ISpawnRoleLocal;
      if (lVar5 == 0) {
        FUN_?(pMVar3,pIVar4);
        UNRECOVERED_JUMPTABLE = (code *)swi(3);
        (*UNRECOVERED_JUMPTABLE)();
        return;
      }
      plVar7 = (longlong *)FUN_?(pMVar3,TypeInfo__ISpawnRoleLocal);
      if (plVar7 != (longlong *)0x0) {
        uVar8 = 0;
        lVar5 = *plVar7;
        if (*(ushort *)(lVar5 + 0x12e) != 0) {
          do {
            if (*(ISpawnRoleLocal__Class **)(*(longlong *)(lVar5 + 0xb0) + (ulonglong)uVar8 * 0x10)
                == TypeInfo__ISpawnRoleLocal) {
              puVar9 = (undefined8 *)
                       ((longlong)
                        (*(int *)(*(longlong *)(lVar5 + 0xb0) + 8 + (ulonglong)uVar8 * 0x10) + 3) *
                        0x10 + 0x138 + lVar5);
              UNRECOVERED_JUMPTABLE = (code *)*puVar9;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*UNRECOVERED_JUMPTABLE)(plVar7,puVar9[1],UNRECOVERED_JUMPTABLE);
              return;
            }
            uVar8 = uVar8 + 1;
          } while (uVar8 < *(ushort *)(lVar5 + 0x12e));
        }
        puVar9 = (undefined8 *)FUN_?(plVar7);
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)*puVar9)(plVar7,puVar9[1],(code *)*puVar9);
        return;
      }
      FUN_?(pMVar3,pIVar6);
      UNRECOVERED_JUMPTABLE = (code *)swi(3);
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
  }
  FUN_?();
  UNRECOVERED_JUMPTABLE = (code *)swi(3);
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


/* MVLocalPlayer(Int32, Int32, String, Int32, List`1[System.Int32], UserProfileData) */

void Assembly-CSharp.dll::MVLocalPlayer::MVLocalPlayer__ctor
               (MVLocalPlayer *this,int32_t actorNumber,int32_t profileID,String *regionCode,
               int32_t planetOwnershipTypeID,List_1_System_Int32_ *planetPermissionIDs,
               UserProfileData *userProfileData,MethodInfo *method)

{
  pSVar1 = regionCode;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__BoostController);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__MVLocalPlayer__OnLevelChangedLocal_int_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataMediator
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Events__UnityAction<int>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__WorldObjectTypes__Avatar__Local__WorldObjectUseRequirementTracker);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_01 = (BoostController *)FUN_?(TypeInfo__BoostController);
  BoostController::BoostController__ctor(this_01,(MethodInfo *)0x0);
  bVar2 = iRam_? != 0;
  (this->fields).boostController = this_01;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields).boostController >> 0xc);
    uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
    do {
      uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
      puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  (this->fields).defaultBodyWoId = -1;
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).field_0x1c == 0) {
    FUN_?();
  }
  iVar7 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
          ObscuredInt_Encrypt(-0xe91,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
  }
  iVar8 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->static_fields->cryptoKey;
  bVar9 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::ObscuredCheatingDetector::
          ObscuredCheatingDetector_get_IsRunning((MethodInfo *)0x0);
  iVar10 = 0;
  if (bVar9 != 0) {
    iVar10 = -0xe91;
  }
  (this->fields).numberOfTimesDiedInRound.currentCryptoKey = iVar8;
  (this->fields).numberOfTimesDiedInRound.hiddenValue = iVar7;
  (this->fields).numberOfTimesDiedInRound.fakeValue = iVar10;
  *(undefined4 *)&(this->fields).numberOfTimesDiedInRound.inited = 1;
  this_02 = (SpawnRoleDataMediator *)
            FUN_?(
                         TypeInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataMediator
                         );
  Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::Mediator::SpawnRoleDataMediator::
  SpawnRoleDataMediator__ctor(this_02,(MethodInfo *)0x0);
  bVar2 = iRam_? != 0;
  (this->fields).spawnRoleDataMediator = this_02;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields).spawnRoleDataMediator >> 0xc);
    uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
    do {
      uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
      puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  pWVar11 = (WorldObjectUseRequirementTracker *)
            FUN_?(
                         TypeInfo__WorldObjectTypes__Avatar__Local__WorldObjectUseRequirementTracker
                         );
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<UseRequirementType,_float>__Add_UseRequirementType__float_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<UseRequirementType,_float>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__Dictionary<int,_float>__Dictionary__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__Dictionary<UseRequirementType,_float>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_03 = (Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData_ *)
            FUN_?(
                         TypeInfo__System__Collections__Generic__Dictionary<UseRequirementType,_float>
                         );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
  Int32Enum,GamePassesHighScoreList+HighScoreListData]::
  Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData___ctor
            (this_03,
             MethodInfo__System__Collections__Generic__Dictionary<UseRequirementType,_float>__Dictionary__
            );
  if (this_03 != (Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData_ *)0x0) {
    method_00 = MethodInfo__System__Collections__Generic__Dictionary<UseRequirementType,_float>__Add_UseRequirementType__float_
                ->klass->rgctx_data[0x22].method;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Single]::
    Dictionary_2_System_Int32Enum_System_Single__TryInsert
              ((Dictionary_2_System_Int32Enum_System_Single_ *)this_03,5,_UNK_?,
               (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)pSVar1 >> 8),2),method_00);
    bVar2 = iRam_? != 0;
    (pWVar11->fields).timeouts = (Dictionary_2_UseRequirementType_System_Single_ *)this_03;
    if (bVar2) {
      uVar3 = (uint)((ulonglong)&(pWVar11->fields).timeouts >> 0xc);
      uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
      do {
        uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
        puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
        LOCK();
        bVar2 = uVar5 == *puVar6;
        if (bVar2) {
          *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
        }
        UNLOCK();
      } while (!bVar2);
    }
    FUN_?(pWVar11);
    bVar2 = iRam_? != 0;
    (this->fields)._WorldObjectUseRequirementTracker_k__BackingField = pWVar11;
    if (bVar2) {
      uVar3 = (uint)((ulonglong)&(this->fields)._WorldObjectUseRequirementTracker_k__BackingField
                     >> 0xc);
      uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
      do {
        uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
        puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
        LOCK();
        bVar2 = uVar5 == *puVar6;
        if (bVar2) {
          *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
        }
        UNLOCK();
      } while (!bVar2);
    }
    MVPlayer::MVPlayer__ctor
              ((MVPlayer *)this,actorNumber,profileID,regionCode,
               (BuildTarget__Enum)CONCAT71((int7)((ulonglong)method_00 >> 8),1),userProfileData,0,0,
               (MethodInfo *)0x0);
    pUVar12 = (this->fields)._.OnLevelChanged;
    pDVar13 = (Delegate *)FUN_?(TypeInfo__UnityEngine__Events__UnityAction<int>);
    FUN_?(pDVar13,this);
    pDVar13 = mscorlib.dll::System::Delegate::Delegate_Combine
                        ((Delegate *)pUVar12,pDVar13,(MethodInfo *)0x0);
    pUVar14 = TypeInfo__UnityEngine__Events__UnityAction<int>;
    if (pDVar13 == (Delegate *)0x0) {
      (this->fields)._.OnLevelChanged = (UnityAction_1_System_Int32_ *)0x0;
    }
    else {
      pUVar12 = (UnityAction_1_System_Int32_ *)
                FUN_?(pDVar13,TypeInfo__UnityEngine__Events__UnityAction<int>);
      if (pUVar12 == (UnityAction_1_System_Int32_ *)0x0) {
        FUN_?(pDVar13,pUVar14);
        pcVar15 = (code *)swi(3);
        (*pcVar15)();
        return;
      }
      (this->fields)._.OnLevelChanged = pUVar12;
      pUVar14 = TypeInfo__UnityEngine__Events__UnityAction<int>;
      lVar16 = FUN_?();
      if (lVar16 == 0) {
        FUN_?(pDVar13,pUVar14);
        pcVar15 = (code *)swi(3);
        (*pcVar15)();
        return;
      }
    }
    if (iRam_? != 0) {
      uVar3 = (uint)((ulonglong)&(this->fields)._.OnLevelChanged >> 0xc);
      uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
      do {
        uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
        puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
        LOCK();
        bVar2 = uVar5 == *puVar6;
        if (bVar2) {
          *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
        }
        UNLOCK();
      } while (!bVar2);
    }
    iVar17 = iRam_?;
    (this->fields).planetOwnershipTypeID = planetOwnershipTypeID;
    (this->fields).planetPermissionIDs = planetPermissionIDs;
    if (iVar17 != 0) {
      uVar3 = (uint)((ulonglong)&(this->fields).planetPermissionIDs >> 0xc);
      uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
      do {
        uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
        puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
        LOCK();
        bVar2 = uVar5 == *puVar6;
        if (bVar2) {
          *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
        }
        UNLOCK();
      } while (!bVar2);
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar18 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if ((pMVar18 != (MVGameControllerBase *)0x0) &&
       (this_00 = (pMVar18->fields).game, this_00 != (MVNetworkGame *)0x0)) {
      iVar7 = MVNetworkGame::MVNetworkGame_get_ServerTimeInMilliSeconds(this_00,(MethodInfo *)0x0);
      (this->fields).joinTime = iVar7;
      return;
    }
  }
  FUN_?();
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
  return;
}


/* MVAvatarLocal get_AvatarLocal() */

MVAvatarLocal *
Assembly-CSharp.dll::MVLocalPlayer::MVLocalPlayer_get_AvatarLocal
          (MVLocalPlayer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  pSVar1 = (this->fields)._.spawnRolesManager;
  if (((pSVar1 != (SpawnRolesManager *)0x0) &&
      (pSVar2 = (pSVar1->fields).spawnRolesRuntimeData, pSVar2 != (SpawnRolesRuntimeData *)0x0)) &&
     (this_00 != (MVWorldObjectClientManager *)0x0)) {
    pMVar3 = (MVAvatarLocal *)
             MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                       (this_00,(pSVar2->fields).activeSpawnRole,(MethodInfo *)0x0);
    if (pMVar3 != (MVAvatarLocal *)0x0) {
      bVar4 = (TypeInfo__MVAvatarLocal->_1).naturalAligment;
      if ((bVar4 <= (pMVar3->klass->_1).naturalAligment) &&
         ((MVAvatarLocal__Class *)(pMVar3->klass->_1).typeHierarchy[(ulonglong)bVar4 - 1] ==
          TypeInfo__MVAvatarLocal)) {
        return pMVar3;
      }
    }
    return (MVAvatarLocal *)0x0;
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  pMVar3 = (MVAvatarLocal *)(*pcVar5)();
  return pMVar3;
}


/* MVBody get_Body() */

MVBody * Assembly-CSharp.dll::MVLocalPlayer::MVLocalPlayer_get_Body
                   (MVLocalPlayer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  pMVar2 = MVBody_MethodInfo__MVWorldObjectClientManager__GetWorldObjectClient<MVBody>_int_;
  if (pMVar1 == (MVWorldObjectClientManager *)0x0) {
    FUN_?();
    pcVar3 = (code *)swi(3);
    pMVar4 = (MVBody *)(*pcVar3)();
    return pMVar4;
  }
  key = (this->fields).defaultBodyWoId;
  if ((MVBody_MethodInfo__MVWorldObjectClientManager__GetWorldObjectClient<MVBody>_int_->field7_0x38
      ).rgctx_data == (Il2CppRGCTXData *)0x0) {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__TryGetValue_int__MVWorldObjectClient__
                 );
    LOCK();
    UNLOCK();
    if ((pMVar2->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
      FUN_?(pMVar2);
    }
  }
  this_00 = (pMVar1->fields).worldObjects;
  apMStackX_8[0] = (MVBody *)0x0;
  if (this_00 == (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0) {
    FUN_?();
    pcVar3 = (code *)swi(3);
    pMVar4 = (MVBody *)(*pcVar3)();
    return pMVar4;
  }
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
  Dictionary_2_System_Int32_System_Object__TryGetValue
            ((Dictionary_2_System_Int32_System_Object_ *)this_00,key,(Object **)apMStackX_8,
             MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__TryGetValue_int__MVWorldObjectClient__
            );
  pMVar4 = apMStackX_8[0];
  lVar5 = *(longlong *)(pMVar2->field7_0x38).methodMetadataHandle;
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_?(lVar5);
  }
  pMVar6 = (MVBody *)0x0;
  if (pMVar4 != (MVBody *)0x0) {
    pMVar7 = pMVar4->klass;
    cVar8 = FUN_?(lVar5,pMVar7);
    pMVar6 = pMVar4;
    if (cVar8 == '\0') {
      if (((pMVar7->_1).field_0x6e & 0x10) == 0) {
code_?:
        FUN_?(pMVar4,lVar5);
        pcVar3 = (code *)swi(3);
        pMVar4 = (MVBody *)(*pcVar3)();
        return pMVar4;
      }
      if (((((*(byte *)(lVar5 + 0x118) & 0x20) == 0) && (*(char *)(lVar5 + 0x2a) != '\x13')) &&
          (*(char *)(lVar5 + 0x2a) != '\x1e')) ||
         (((*(longlong *)(lVar5 + 0x70) == 0 ||
           (*(longlong *)(*(longlong *)(lVar5 + 0x70) + 0x28) == 0)) ||
          (lVar9 = FUN_?(pMVar4), lVar9 == 0)))) {
        pMVar6 = (MVBody *)0x0;
        if (lVar5 == lRam_?) {
          pMVar6 = pMVar4;
        }
        if (pMVar6 == (MVBody *)0x0) goto code_?;
      }
    }
  }
  return pMVar6;
}


/* Boolean get_CanGetXPProgressData() */

bool Assembly-CSharp.dll::MVLocalPlayer::MVLocalPlayer_get_CanGetXPProgressData
               (MVLocalPlayer *this,MethodInfo *method)

{
  return (this->fields).xpProgress != (XPProgress *)0x0;
}


/* Int32 get_DefaultSpawnRoleId() */

int32_t Assembly-CSharp.dll::MVLocalPlayer::MVLocalPlayer_get_DefaultSpawnRoleId
                  (MVLocalPlayer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::SpawnRoles::DefaultSpawnRoleType,_int>__get_Item_MV__WorldObject__SpawnRoles__DefaultSpawnRoleType_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = 
  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::SpawnRoles::DefaultSpawnRoleType,_int>__get_Item_MV__WorldObject__SpawnRoles__DefaultSpawnRoleType_
  ;
  pSVar2 = (this->fields).spawnRolesMetaData;
  if ((pSVar2 == (SpawnRolesMetaData *)0x0) ||
     (this_00 = (Dictionary_2_System_Int32Enum_System_Single_ *)
                (pSVar2->fields).spawnRolesDefaultTypeWoIDMap,
     this_00 == (Dictionary_2_System_Int32Enum_System_Single_ *)0x0)) {
    FUN_?();
    pcVar3 = (code *)swi(3);
    iVar4 = (*pcVar3)();
    return iVar4;
  }
  uVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Single]
          ::Dictionary_2_System_Int32Enum_System_Single__FindEntry
                    (this_00,0,
                     MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::SpawnRoles::DefaultSpawnRoleType,_int>__get_Item_MV__WorldObject__SpawnRoles__DefaultSpawnRoleType_
                     ->klass->rgctx_data[0x21].method);
  if ((int)uVar5 < 0) {
    uVar6 = func_?(pMVar1->klass->rgctx_data,0xe);
    key = (Object *)func_?(uVar6);
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowKeyNotFoundException
              (key,(MethodInfo *)0x0);
    pcVar3 = (code *)swi(3);
    iVar4 = (*pcVar3)();
    return iVar4;
  }
  pDVar7 = (this_00->fields)._entries;
  if (pDVar7 != (Dictionary_2_TKey_TValue_Entry_System_Int32Enum_System_Single___Array *)0x0) {
    if (uVar5 < (uint)pDVar7->max_length) {
      return (int32_t)pDVar7->vector[(int)uVar5].value;
    }
    FUN_?();
    pcVar3 = (code *)swi(3);
    iVar4 = (*pcVar3)();
    return iVar4;
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  iVar4 = (*pcVar3)();
  return iVar4;
}


/* Boolean get_IsAdmin() */

bool Assembly-CSharp.dll::MVLocalPlayer::MVLocalPlayer_get_IsAdmin
               (MVLocalPlayer *this,MethodInfo *method)

{
  if ((this->fields)._._ProfileID_k__BackingField < 1) {
    return 0;
  }
  pUVar1 = (this->fields)._._UserProfileData_k__BackingField;
  if (pUVar1 != (UserProfileData *)0x0) {
    return (pUVar1->fields).IsAdmin;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  bVar3 = (*pcVar2)();
  return bVar3;
}


/* Boolean get_IsChatLocked() */

bool Assembly-CSharp.dll::MVLocalPlayer::MVLocalPlayer_get_IsChatLocked
               (MVLocalPlayer *this,MethodInfo *method)

{
  if ((this->fields)._._ProfileID_k__BackingField == 0) {
    return 1;
  }
  pUVar1 = (this->fields)._._UserProfileData_k__BackingField;
  if (pUVar1 != (UserProfileData *)0x0) {
    return (pUVar1->fields).IsUnderAge;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  bVar3 = (*pcVar2)();
  return bVar3;
}


/* PlanetOwnershipType get_PlanetOwnership() */

PlanetOwnershipType__Enum
Assembly-CSharp.dll::MVLocalPlayer::MVLocalPlayer_get_PlanetOwnership
          (MVLocalPlayer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar1 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
  if (pGVar1 != (GameSessionData *)0x0) {
    if ((pGVar1->fields).gameMode != 0) {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVGameControllerBase);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pGVar1 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
      if (pGVar1 == (GameSessionData *)0x0) goto code_?;
      if ((pGVar1->fields).gameMode != 4) {
        uVar2 = func_?(&TypeInfo__System__Exception);
        this_00 = (Exception *)func_?(uVar2);
        message = (String *)func_?(&StringLiteral_There_are_currently_no_way_to_ac);
        mscorlib.dll::System::Exception::Exception__ctor_1(this_00,message,(MethodInfo *)0x0);
        uVar2 = func_?(&MethodInfo__MVLocalPlayer__get_PlanetOwnershipTypeID__);
        FUN_?(this_00,uVar2);
        pcVar3 = (code *)swi(3);
        PVar4 = (*pcVar3)();
        return PVar4;
      }
    }
    return (PlanetOwnershipType__Enum)(byte)(this->fields).planetOwnershipTypeID;
  }
code_?:
  FUN_?();
  pcVar3 = (code *)swi(3);
  PVar4 = (*pcVar3)();
  return PVar4;
}


/* Int32 get_PlanetOwnershipTypeID() */

int32_t Assembly-CSharp.dll::MVLocalPlayer::MVLocalPlayer_get_PlanetOwnershipTypeID
                  (MVLocalPlayer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar1 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
  if (pGVar1 != (GameSessionData *)0x0) {
    if ((pGVar1->fields).gameMode != 0) {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVGameControllerBase);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pGVar1 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
      if (pGVar1 == (GameSessionData *)0x0) goto code_?;
      if ((pGVar1->fields).gameMode != 4) {
        uVar2 = func_?(&TypeInfo__System__Exception);
        this_00 = (Exception *)func_?(uVar2);
        message = (String *)func_?(&StringLiteral_There_are_currently_no_way_to_ac);
        mscorlib.dll::System::Exception::Exception__ctor_1(this_00,message,(MethodInfo *)0x0);
        uVar2 = func_?(&MethodInfo__MVLocalPlayer__get_PlanetOwnershipTypeID__);
        FUN_?(this_00,uVar2);
        pcVar3 = (code *)swi(3);
        iVar4 = (*pcVar3)();
        return iVar4;
      }
    }
    return (this->fields).planetOwnershipTypeID;
  }
code_?:
  FUN_?();
  pcVar3 = (code *)swi(3);
  iVar4 = (*pcVar3)();
  return iVar4;
}


/* List`1[MV.Common.PlanetPermissionType] get_PlanetPermissions() */

List_1_MV_Common_PlanetPermissionType_ *
Assembly-CSharp.dll::MVLocalPlayer::MVLocalPlayer_get_PlanetPermissions
          (MVLocalPlayer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  System__Collections__Generic__IEnumerable<MV::Common::PlanetPermissionType>_MethodInfo__System__Linq__Enumerable__Select<int,_MV::Common::PlanetPermissionType>_System__Collections__Generic__IEnumerable<int>__System__Func<int,_MV::Common::PlanetPermissionType>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  System__Collections__Generic__List<MV::Common::PlanetPermissionType>_MethodInfo__System__Linq__Enumerable__ToList<MV::Common::PlanetPermissionType>_System__Collections__Generic__IEnumerable<MV::Common::PlanetPermissionType>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Func<int,_MV::Common::PlanetPermissionType>);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__MVLocalPlayer____c___get_PlanetPermissions_b__35_0_int_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVLocalPlayer____c);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  source = (this->fields).planetPermissionIDs;
  if (*(int *)&(TypeInfo__MVLocalPlayer____c->_1).field_0x1c == 0) {
    FUN_?();
  }
  this_00 = TypeInfo__MVLocalPlayer____c->static_fields->__9__35_0;
  if (this_00 == (Func_2_Int32_MV_Common_PlanetPermissionType_ *)0x0) {
    if (*(int *)&(TypeInfo__MVLocalPlayer____c->_1).field_0x1c == 0) {
      FUN_?();
    }
    object = TypeInfo__MVLocalPlayer____c->static_fields->__9;
    this_00 = (Func_2_Int32_MV_Common_PlanetPermissionType_ *)
              FUN_?(TypeInfo__System__Func<int,_MV::Common::PlanetPermissionType>);
    mscorlib.dll::System::Predicate`1[UInt32Enum]::Predicate_1_UInt32Enum___ctor
              ((Predicate_1_UInt32Enum_ *)this_00,(Object *)object,
               MethodInfo__MVLocalPlayer____c___get_PlanetPermissions_b__35_0_int_,(MethodInfo *)0x0
              );
    TypeInfo__MVLocalPlayer____c->static_fields->__9__35_0 = this_00;
    if (iRam_? != 0) {
      uVar1 = (uint)((ulonglong)&TypeInfo__MVLocalPlayer____c->static_fields->__9__35_0 >> 0xc);
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
  }
  collection = System.Core.dll::System::Linq::Enumerable::Enumerable_Select_5
                         ((IEnumerable_1_UnityEngine_UIElements_StyleSelectorPart_ *)source,
                          (Func_2_UnityEngine_UIElements_StyleSelectorPart_Object_ *)this_00,
                          System__Collections__Generic__IEnumerable<MV::Common::PlanetPermissionType>_MethodInfo__System__Linq__Enumerable__Select<int,_MV::Common::PlanetPermissionType>_System__Collections__Generic__IEnumerable<int>__System__Func<int,_MV::Common::PlanetPermissionType>_
                         );
  pMVar5 = 
  System__Collections__Generic__List<MV::Common::PlanetPermissionType>_MethodInfo__System__Linq__Enumerable__ToList<MV::Common::PlanetPermissionType>_System__Collections__Generic__IEnumerable<MV::Common::PlanetPermissionType>_
  ;
  if ((
      System__Collections__Generic__List<MV::Common::PlanetPermissionType>_MethodInfo__System__Linq__Enumerable__ToList<MV::Common::PlanetPermissionType>_System__Collections__Generic__IEnumerable<MV::Common::PlanetPermissionType>_
      ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
    FUN_?(
                 System__Collections__Generic__List<MV::Common::PlanetPermissionType>_MethodInfo__System__Linq__Enumerable__ToList<MV::Common::PlanetPermissionType>_System__Collections__Generic__IEnumerable<MV::Common::PlanetPermissionType>_
                 );
  }
  if (collection == (IEnumerable_1_System_Object_ *)0x0) {
    s = (String *)func_?(&StringLiteral_source);
    pEVar6 = System.Core.dll::System::Linq::Error::Error_1_ArgumentNull(s,(MethodInfo *)0x0);
    FUN_?(pEVar6,pMVar5);
    pcVar7 = (code *)swi(3);
    pLVar8 = (List_1_MV_Common_PlanetPermissionType_ *)(*pcVar7)();
    return pLVar8;
  }
  pvVar9 = (pMVar5->field7_0x38).rgctx_data[1].rgctxDataDummy;
  if ((*(byte *)((longlong)pvVar9 + 0x135) & 1) == 0) {
    pvVar9 = (void *)FUN_?(pvVar9);
  }
  this_01 = (List_1_System_ByteEnum_ *)FUN_?(pvVar9);
  mscorlib.dll::System::Collections::Generic::List`1[System::ByteEnum]::
  List_1_System_ByteEnum___ctor_1
            (this_01,(IEnumerable_1_System_ByteEnum_ *)collection,
             (pMVar5->field7_0x38).rgctx_data[2].method);
  return (List_1_MV_Common_PlanetPermissionType_ *)this_01;
}


/* Single get_RespawnDuration() */

float Assembly-CSharp.dll::MVLocalPlayer::MVLocalPlayer_get_RespawnDuration
                (MVLocalPlayer *this,MethodInfo *method)

{
  return _UNK_?;
}


/* Single get_ReviveTimeout() */

float Assembly-CSharp.dll::MVLocalPlayer::MVLocalPlayer_get_ReviveTimeout
                (MVLocalPlayer *this,MethodInfo *method)

{
  return _UNK_?;
}


/* XPProgressData get_XPProgressData() */

XPProgressData *
Assembly-CSharp.dll::MVLocalPlayer::MVLocalPlayer_get_XPProgressData
          (MVLocalPlayer *this,MethodInfo *method)

{
  pXVar1 = (this->fields).xpProgress;
  if (pXVar1 != (XPProgress *)0x0) {
    return (pXVar1->fields).xpProgressData;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  pXVar3 = (XPProgressData *)(*pcVar2)();
  return pXVar3;
}


/* Void set_PlayerPlanetData(PlayerPlanetData) */

void Assembly-CSharp.dll::MVLocalPlayer::MVLocalPlayer_set_PlayerPlanetData
               (MVLocalPlayer *this,PlayerPlanetData *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MV__WorldObject__GamePassSystem__PlayerPlanetDataRemote);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar1 = iRam_? != 0;
  (this->fields).playerPlanetData = value;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).playerPlanetData >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  pPVar6 = (this->fields).playerPlanetData;
  if (pPVar6 == (PlayerPlanetData *)0x0) {
    FUN_?();
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  iVar8 = (pPVar6->fields).highScoreGamePoints;
  uVar9 = (((this->fields).playerPlanetData)->fields).gamePassTier;
  pPVar10 = (PlayerPlanetDataRemote *)
           FUN_?(TypeInfo__MV__WorldObject__GamePassSystem__PlayerPlanetDataRemote);
  bVar1 = iRam_? != 0;
  (pPVar10->fields).highScoreGamePoints = iVar8;
  (pPVar10->fields).gamePassTier = uVar9;
  (this->fields)._.playerPlanetDataRemote = pPVar10;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields)._.playerPlanetDataRemote >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  return;
}


/* Void set_RespawnTime(Single) */

void Assembly-CSharp.dll::MVLocalPlayer::MVLocalPlayer_set_RespawnTime
               (MVLocalPlayer *this,float value,MethodInfo *method)

{
  (this->fields).respawnTime = value;
  return;
}

