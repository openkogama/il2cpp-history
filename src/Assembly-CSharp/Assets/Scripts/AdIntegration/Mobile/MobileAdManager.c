
/* AdRequest CreateAdRequest() */

AdRequest *
Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Mobile::MobileAdManager::
MobileAdManager_CreateAdRequest(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__GoogleMobileAds__Api__AdRequest);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<System::String>__Add_System__String_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<System::String>__List__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<System::String>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__GoogleMobileAds__Api__MobileAds);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Nullable<GoogleMobileAds::Api::TagForChildDirectedTreatment>__Nullable_GoogleMobileAds__Api__TagForChildDirectedTreatment_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Nullable<GoogleMobileAds::Api::TagForUnderAgeOfConsent>__Nullable_GoogleMobileAds__Api__TagForUnderAgeOfConsent_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__GoogleMobileAds__Api__RequestConfiguration);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__2F722B7F88436E816B98A0245E195219);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_MobileAdManager_CreateAdRequest);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
            ((Object *)StringLiteral_MobileAdManager_CreateAdRequest,(MethodInfo *)0x0);
  this = (List_1_System_Object_ *)
         FUN_?(TypeInfo__System__Collections__Generic__List<System::String>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this,
             MethodInfo__System__Collections__Generic__List<System::String>__List__);
  pMVar1 = MethodInfo__System__Collections__Generic__List<System::String>__Add_System__String_;
  item = StringLiteral__2F722B7F88436E816B98A0245E195219;
  if (this != (List_1_System_Object_ *)0x0) {
    piVar2 = &(this->fields)._version;
    *piVar2 = *piVar2 + 1;
    pOVar3 = (this->fields)._items;
    if (pOVar3 != (Object__Array *)0x0) {
      uVar4 = (this->fields)._size;
      if (uVar4 < (uint)pOVar3->max_length) {
        (this->fields)._size = uVar4 + 1;
        FUN_?(pOVar3,(longlong)(int)uVar4,item);
      }
      else {
        mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
        List_1_System_Object__AddWithResize
                  (this,(Object *)item,pMVar1->klass->rgctx_data[0xe].method);
      }
      lVar5 = FUN_?(TypeInfo__GoogleMobileAds__Api__RequestConfiguration);
      if (cRam_? == '\0') {
        FUN_?(&MethodInfo__System__Collections__Generic__List<System::String>__List__);
        LOCK();
        UNLOCK();
        FUN_?(&TypeInfo__System__Collections__Generic__List<System::String>);
        LOCK();
        UNLOCK();
        FUN_?(&MethodInfo__System__Nullable<bool>__Nullable_bool_);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      this_00 = (LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)
                FUN_?(TypeInfo__System__Collections__Generic__List<System::String>);
      mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
      __Il2CppFullySharedGenericType]::
      LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
                (this_00,MethodInfo__System__Collections__Generic__List<System::String>__List__);
      iVar6 = iRam_?;
      *(LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ **)(lVar5 + 0x20) =
           this_00;
      if (iVar6 != 0) {
        uVar4 = (uint)(lVar5 + 0x20U >> 0xc);
        lVar7 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
        do {
          uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
          puVar9 = (ulonglong *)(lVar7 + 0xADDR);
          LOCK();
          bVar10 = uVar8 == *puVar9;
          if (bVar10) {
            *puVar9 = uVar8 | 1L << (uVar4 & 0x3f);
          }
          UNLOCK();
          iVar6 = iRam_?;
        } while (!bVar10);
      }
      *(undefined2 *)(lVar5 + 0x28) = 0x101;
      *(List_1_System_Object_ **)(lVar5 + 0x20) = this;
      if (iVar6 != 0) {
        uVar4 = (uint)(lVar5 + 0x20U >> 0xc);
        lVar7 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
        do {
          uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
          puVar9 = (ulonglong *)(lVar7 + 0xADDR);
          LOCK();
          bVar10 = uVar8 == *puVar9;
          if (bVar10) {
            *puVar9 = uVar8 | 1L << (uVar4 & 0x3f);
          }
          UNLOCK();
        } while (!bVar10);
      }
      pMVar11 = TypeInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager->static_fields->
               consentAndCompliance;
      if ((pMVar11 != (MobileAdManager_ConsentAndCompliance *)0x0) &&
         (pCVar12 = (pMVar11->fields).consentData, pCVar12 != (ConsentData *)0x0)) {
        uVar8 = 0;
        if (((pCVar12->fields).isChild != 0) && ((pCVar12->fields).isAmerican != 0)) {
          *(undefined8 *)(lVar5 + 0x10) = 0x100000001;
        }
        pMVar11 = TypeInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager->static_fields->
                 consentAndCompliance;
        if ((pMVar11 != (MobileAdManager_ConsentAndCompliance *)0x0) &&
           (pCVar12 = (pMVar11->fields).consentData, pCVar12 != (ConsentData *)0x0)) {
          if (((pCVar12->fields).isChild != 0) && ((pCVar12->fields).isEuropean != 0)) {
            *(undefined8 *)(lVar5 + 0x18) = 0x100000001;
          }
          if (*(int *)&(TypeInfo__GoogleMobileAds__Api__MobileAds->_1).field_0x1c == 0) {
            FUN_?();
          }
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__GoogleMobileAds__Common__IMobileAdsClient);
            LOCK();
            UNLOCK();
            FUN_?(&TypeInfo__GoogleMobileAds__Api__MobileAds);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          if (*(int *)&(TypeInfo__GoogleMobileAds__Api__MobileAds->_1).field_0x1c == 0) {
            FUN_?();
          }
          pMVar13 = GoogleMobileAds.dll::GoogleMobileAds::Api::MobileAds::MobileAds_get_Instance
                              ((MethodInfo *)0x0);
          if ((pMVar13 != (MobileAds *)0x0) &&
             (pIVar14 = (pMVar13->fields).client, pIVar14 != (IMobileAdsClient *)0x0)) {
            pIVar15 = pIVar14->klass;
            uVar16._0_1_ = (pIVar15->_1).rank;
            uVar16._1_1_ = (pIVar15->_1).minimumAlignment;
            if (uVar16 != 0) {
              do {
                if (pIVar15->interfaceOffsets[uVar8].interfaceType ==
                    (Il2CppClass *)TypeInfo__GoogleMobileAds__Common__IMobileAdsClient) {
                  pVVar17 = &(pIVar15->vtable).Initialize +
                            (pIVar15->interfaceOffsets[uVar8].offset + 2);
                  goto code_?;
                }
                uVar18 = (short)uVar8 + 1;
                uVar8 = (ulonglong)uVar18;
              } while (uVar18 < uVar16);
            }
            pVVar17 = (VirtualInvokeData *)
                      FUN_?(pIVar14,TypeInfo__GoogleMobileAds__Common__IMobileAdsClient,2);
code_?:
            (*pVVar17->methodPtr)(pIVar14,lVar5,pVVar17->method);
            pAVar19 = (AdRequest *)FUN_?(TypeInfo__GoogleMobileAds__Api__AdRequest);
            GoogleMobileAds.Core.dll::GoogleMobileAds::Api::AdRequest::AdRequest__ctor
                      (pAVar19,(MethodInfo *)0x0);
            return pAVar19;
          }
        }
      }
    }
  }
  FUN_?();
  pcVar20 = (code *)swi(3);
  pAVar19 = (AdRequest *)(*pcVar20)();
  return pAVar19;
}


/* Void Destroy() */

void Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Mobile::MobileAdManager::
     MobileAdManager_Destroy(MobileAdManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UpdateController);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_MobileAdManager_Destroy);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
            ((Object *)StringLiteral_MobileAdManager_Destroy,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__UpdateController->_1).field_0x1c == 0) {
    FUN_?();
  }
  UpdateController::UpdateController_RemoveUpdateObject
            ((IUpdatecontrollerSubscriberUpdate *)this,(MethodInfo *)0x0);
  iVar1 = iRam_?;
  (this->fields).rewardedAdResultHandler = (MobileAdManager_RewardedAdResultHandler *)0x0;
  if (iVar1 != 0) {
    uVar2 = (uint)((ulonglong)&(this->fields).rewardedAdResultHandler >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar6 = uVar4 == *puVar5;
      if (bVar6) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
      iVar1 = iRam_?;
    } while (!bVar6);
  }
  (this->fields).interstitialAdResultHandler = (MobileAdManager_InterstitialAdResultHandler *)0x0;
  if (iVar1 != 0) {
    uVar2 = (uint)((ulonglong)&(this->fields).interstitialAdResultHandler >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar6 = uVar4 == *puVar5;
      if (bVar6) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar6);
  }
  if ((this->fields).internalAdManagerState != (MobileAdManager_InternalAdManagerState *)0x0) {
    MobileAdManager+InternalAdManagerState::MobileAdManager_InternalAdManagerState_Destroy
              ((this->fields).internalAdManagerState,(MethodInfo *)0x0);
    bVar6 = iRam_? != 0;
    (this->fields).internalAdManagerState = (MobileAdManager_InternalAdManagerState *)0x0;
    if (bVar6) {
      uVar2 = (uint)((ulonglong)&(this->fields).internalAdManagerState >> 0xc);
      lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
      do {
        uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
        puVar5 = (ulonglong *)(lVar3 + 0xADDR);
        LOCK();
        bVar6 = uVar4 == *puVar5;
        if (bVar6) {
          *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
        }
        UNLOCK();
      } while (!bVar6);
    }
  }
  (this->fields).isInitialized = 0;
  return;
}


/* Void InitCompleteAction(InitializationStatus) */

void Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Mobile::MobileAdManager::
     MobileAdManager_InitCompleteAction
               (MobileAdManager *this,InitializationStatus *initializationStatus,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__GoogleMobileAds__Api__AdapterState);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::String,_GoogleMobileAds::Api::AdapterStatus>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::String,_GoogleMobileAds::Api::AdapterStatus>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::String,_GoogleMobileAds::Api::AdapterStatus>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::String,_GoogleMobileAds::Api::AdapterStatus>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<System::String,_GoogleMobileAds::Api::AdapterStatus>__get_Value__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Object);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__0____1__);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_MobileAdManager_InitCompleteActi);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
            ((Object *)StringLiteral_MobileAdManager_InitCompleteActi,(MethodInfo *)0x0);
  if (initializationStatus != (InitializationStatus *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__GoogleMobileAds__Common__IInitializationStatusClient);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pIVar1 = (initializationStatus->fields).client;
    if (pIVar1 != (IInitializationStatusClient *)0x0) {
      pIVar2 = pIVar1->klass;
      uVar3 = 0;
      uVar4._0_1_ = (pIVar2->_1).rank;
      uVar4._1_1_ = (pIVar2->_1).minimumAlignment;
      if (uVar4 != 0) {
        do {
          if (pIVar2->interfaceOffsets[uVar3].interfaceType ==
              (Il2CppClass *)TypeInfo__GoogleMobileAds__Common__IInitializationStatusClient) {
            pIVar5 = &pIVar2->vtable + pIVar2->interfaceOffsets[uVar3].offset;
            goto code_?;
          }
          uVar3 = uVar3 + 1;
        } while (uVar3 < uVar4);
      }
      pIVar5 = (IInitializationStatusClient__VTable *)
                FUN_?(pIVar1,TypeInfo__GoogleMobileAds__Common__IInitializationStatusClient,
                              0);
code_?:
      pDStack_6 = (Dictionary_2_System_Object_System_Object_ *)
                   (*(pIVar5->getAdapterStatusMap).methodPtr)
                             (pIVar1,(pIVar5->getAdapterStatusMap).method);
      if (pDStack_6 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
        uStack_7 = 0;
        uStack_8 = 0;
        if (iRam_? != 0) {
          uVar9 = (uint)((ulonglong)&pDStack_6 >> 0xc);
          puVar10 = (ulonglong *)((ulonglong)((uVar9 & 0x1fffff) >> 6) * 8 + 0xADDR);
          do {
            uVar11 = *puVar10;
            LOCK();
            uVar12 = *puVar10;
            if (uVar11 == uVar12) {
              *puVar10 = uVar11 | 1L << (uVar9 & 0x3f);
            }
            UNLOCK();
          } while (uVar11 != uVar12);
        }
        uStack_13 = (ulonglong)(uint)(pDStack_6->fields)._version;
        uStack_14 = 2;
        DStack_15._version = (undefined4)uStack_13;
        DStack_15._index = uStack_13._4_4_;
        DStack_15._current.key = (Object *)0x0;
        DStack_15._current.value = (Object *)0x0;
        DStack_15._getEnumeratorRetType = 2;
        DStack_15._36_4_ = 0;
        DStack_15._dictionary = pDStack_6;
code_?:
        while( true ) {
          bVar16 = mscorlib.dll::System::Collections::Generic::
                   Dictionary`2[TKey,TValue]+Enumerator[System::Object,System::Object]::
                   Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object__MoveNext
                             (&DStack_15,
                              MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::String,_GoogleMobileAds::Api::AdapterStatus>__MoveNext__
                             );
          pOVar17 = DStack_15._current.value;
          if (bVar16 == 0) {
            return;
          }
          if (DStack_15._current.value == (Object *)0x0) goto code_?;
          if (*(int *)&DStack_15._current.value[1].klass == 1) break;
          pOVar18 = (Object__Array *)FUN_?(TypeInfo__System__Object);
          if (pOVar17 == (Object *)0x0) {
code_?:
            FUN_?();
code_?:
            uVar19 = FUN_?();
            FUN_?(uVar19,0);
code_?:
            uVar19 = FUN_?();
            FUN_?(uVar19,0);
            goto code_?;
          }
          pMVar20 = pOVar17[1].monitor;
          if (pOVar18 == (Object__Array *)0x0) {
code_?:
            FUN_?();
            goto code_?;
          }
          if ((pMVar20 != (MonitorData *)0x0) &&
             (lVar21 = FUN_?(pMVar20,(pOVar18->klass->_0).element_class), lVar21 == 0)) {
            uVar19 = FUN_?();
            FUN_?(uVar19,0);
code_?:
            uVar19 = FUN_?();
            FUN_?(uVar19,0);
            goto code_?;
          }
          FUN_?(pOVar18,0,pMVar20);
          auStackX_10[0] = *(undefined4 *)&pOVar17[1].klass;
          lVar21 = FUN_?(TypeInfo__GoogleMobileAds__Api__AdapterState,auStackX_10);
          if ((lVar21 != 0) &&
             (lVar21 = FUN_?(lVar21,(pOVar18->klass->_0).element_class), lVar21 == 0))
          goto code_?;
          FUN_?(pOVar18,1);
          if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
            FUN_?();
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogErrorFormat
                    (StringLiteral__0____1__,pOVar18,(MethodInfo *)0x0);
        }
        pOVar18 = (Object__Array *)FUN_?(TypeInfo__System__Object,2);
        if (pOVar17 != (Object *)0x0) {
          pMVar20 = pOVar17[1].monitor;
          if (pOVar18 != (Object__Array *)0x0) {
            if ((pMVar20 != (MonitorData *)0x0) &&
               (lVar21 = FUN_?(pMVar20,(pOVar18->klass->_0).element_class), lVar21 == 0))
            goto code_?;
            FUN_?(pOVar18,0,pMVar20);
            auStackX_10[0] = *(undefined4 *)&pOVar17[1].klass;
            lVar21 = FUN_?(TypeInfo__GoogleMobileAds__Api__AdapterState,auStackX_10);
            if ((lVar21 != 0) &&
               (lVar21 = FUN_?(lVar21,(pOVar18->klass->_0).element_class), lVar21 == 0))
            goto code_?;
            FUN_?(pOVar18,1);
            if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
              FUN_?();
            }
            UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogFormat
                      (StringLiteral__0____1__,pOVar18,(MethodInfo *)0x0);
            goto code_?;
          }
code_?:
          FUN_?();
        }
        FUN_?();
code_?:
        FUN_?();
        FUN_?();
        pcVar22 = (code *)swi(3);
        (*pcVar22)();
        return;
      }
    }
  }
  FUN_?();
  pcVar22 = (code *)swi(3);
  (*pcVar22)();
  return;
}


/* Void Initialize() */

void Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Mobile::MobileAdManager::
     MobileAdManager_Initialize(MobileAdManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<GoogleMobileAds::Api::InitializationStatus>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager__InternalAdManagerState
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  Assets__Scripts__AdIntegration__ConsentData_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<Assets::Scripts::AdIntegration::ConsentData>_System__String_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Newtonsoft__Json__JsonConvert);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager__InitCompleteAction_GoogleMobileAds__Api__InitializationStatus_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__GoogleMobileAds__Api__MobileAds);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UpdateController);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_consent_data_string_is_null_or_e);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_MobileAdManager_Initialize);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_AdConsent__);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
            ((Object *)StringLiteral_MobileAdManager_Initialize,(MethodInfo *)0x0);
  pSVar1 = ::StringLiteral__;
  if ((this->fields).isInitialized != 0) {
    uVar2 = func_?(&TypeInfo__System__Exception);
    this_03 = (Exception *)func_?(uVar2);
    pSVar1 = (String *)func_?(&StringLiteral_AdManager_already_initialized);
    mscorlib.dll::System::Exception::Exception__ctor_1(this_03,pSVar1,(MethodInfo *)0x0);
    uVar2 = func_?(&
                                MethodInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager__Initialize__
                               );
    FUN_?(this_03,uVar2);
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  message = mscorlib.dll::System::String::String_Concat_4
                      (StringLiteral_AdConsent__,::StringLiteral__,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log((Object *)message,(MethodInfo *)0x0);
  consentData = (ConsentData *)0x0;
  if ((pSVar1 == (String *)0x0) || ((pSVar1->fields)._stringLength == 0)) {
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
              ((Object *)StringLiteral_consent_data_string_is_null_or_e,(MethodInfo *)0x0);
  }
  else {
    if (*(int *)&(TypeInfo__Newtonsoft__Json__JsonConvert->_1).field_0x1c == 0) {
      FUN_?();
    }
    consentData = (ConsentData *)
                  Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::
                  JsonConvert_DeserializeObject_2
                            (pSVar1,
                             Assets__Scripts__AdIntegration__ConsentData_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<Assets::Scripts::AdIntegration::ConsentData>_System__String_
                            );
  }
  MobileAdManager_SetupConsentAndCompliance(this,consentData,(MethodInfo *)0x0);
  pMVar4 = (MobileAdManager_InternalAdManagerState *)
           FUN_?(
                        TypeInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager__InternalAdManagerState
                        );
  MobileAdManager+InternalAdManagerState::MobileAdManager_InternalAdManagerState__ctor
            (pMVar4,(MethodInfo *)0x0);
  bVar5 = iRam_? != 0;
  (this->fields).internalAdManagerState = pMVar4;
  if (bVar5) {
    uVar6 = (uint)((ulonglong)&(this->fields).internalAdManagerState >> 0xc);
    puVar7 = (ulonglong *)((ulonglong)((uVar6 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar8 = *puVar7;
      LOCK();
      uVar9 = *puVar7;
      if (uVar8 == uVar9) {
        *puVar7 = uVar8 | 1L << (uVar6 & 0x3f);
      }
      UNLOCK();
    } while (uVar8 != uVar9);
  }
  if (*(int *)&(TypeInfo__GoogleMobileAds__Api__MobileAds->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__GoogleMobileAds__Common__IMobileAdsClient);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__GoogleMobileAds__Api__MobileAds);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__GoogleMobileAds__Api__MobileAds->_1).field_0x1c == 0) {
    FUN_?();
  }
  pMVar10 = GoogleMobileAds.dll::GoogleMobileAds::Api::MobileAds::MobileAds_get_Instance
                     ((MethodInfo *)0x0);
  if ((pMVar10 != (MobileAds *)0x0) && ((pMVar10->fields).client != (IMobileAdsClient *)0x0)) {
    FUN_?(1,TypeInfo__GoogleMobileAds__Common__IMobileAdsClient);
    this_02 = (UnityAction_1_System_Object_ *)
              FUN_?(TypeInfo__System__Action<GoogleMobileAds::Api::InitializationStatus>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
    UnityAction_1_System_Object___ctor
              (this_02,(Object *)this,
               MethodInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager__InitCompleteAction_GoogleMobileAds__Api__InitializationStatus_
               ,(MethodInfo *)0x0);
    GoogleMobileAds.dll::GoogleMobileAds::Api::MobileAds::MobileAds_Initialize
              ((Action_1_GoogleMobileAds_Api_InitializationStatus_ *)this_02,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__UpdateController->_1).field_0x1c == 0) {
      FUN_?();
    }
    UpdateController::UpdateController_AddUpdateObject
              ((IUpdatecontrollerSubscriberUpdate *)this,UpdatePriority__Enum_UPDATEBUCKET_STANDARD,
               1,(MethodInfo *)0x0);
    pMVar4 = (this->fields).internalAdManagerState;
    (this->fields).isInitialized = 1;
    if (pMVar4 != (MobileAdManager_InternalAdManagerState *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Debug);
        LOCK();
        UNLOCK();
        FUN_?(&StringLiteral_InternalAdManagerState_Initializ);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                ((Object *)StringLiteral_InternalAdManagerState_Initializ,(MethodInfo *)0x0);
      this_00 = (pMVar4->fields).internalStateRewardedAds;
      if (this_00 != (MobileAdManager_InternalStateRewardedAd *)0x0) {
        MobileAdManager+InternalStateRewardedAd::
        MobileAdManager_InternalStateRewardedAd_CreateAndLoadRewardedAd(this_00,(MethodInfo *)0x0);
        this_01 = (pMVar4->fields).internalStateInterstitial;
        if (this_01 != (MobileAdManager_InternalStateInterstitial *)0x0) {
          MobileAdManager+InternalStateInterstitial::
          MobileAdManager_InternalStateInterstitial_CreateAndLoadInterstitialAd
                    (this_01,(MethodInfo *)0x0);
          (pMVar4->fields).isReady = 1;
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


/* Void InitializeAdConfigSettings(AdConfigSettings) */

void Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Mobile::MobileAdManager::
     MobileAdManager_InitializeAdConfigSettings
               (MobileAdManager *this,AdConfigSettings *config,MethodInfo *method)

{
  if (config != (AdConfigSettings *)0x0) {
    (this->fields).timeoutAdAfterDelayAsUnlocked =
         (config->fields)._AdTimeoutAsSuccess_k__BackingField;
    (this->fields).timeoutSuccessDelay = (config->fields)._AdTimeoutAsSuccessDelay_k__BackingField;
    (this->fields).interstitialTimeoutAfterRewardedAd =
         (float)(config->fields)._InterstitialTimeoutAfterRewardedAd_k__BackingField;
    return;
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void InterstitialCallback(InterstitialAdResult) */

void Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Mobile::MobileAdManager::
     MobileAdManager_InterstitialCallback
               (MobileAdManager *this,InterstitialAdResult__Enum obj,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Assets__Scripts__AdIntegration__InterstitialAdResult);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_MobileAdManager_InterstitialCall);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  EStack_1.klass = (Enum__Class *)TypeInfo__Assets__Scripts__AdIntegration__InterstitialAdResult;
  EStack_1.monitor = (MonitorData *)0xffffffffffffffff;
  IStack_2 = obj;
  pSVar3 = mscorlib.dll::System::Enum::Enum_ToString(&EStack_1,(MethodInfo *)0x0);
  pSVar3 = mscorlib.dll::System::String::String_Concat_4
                     (StringLiteral_MobileAdManager_InterstitialCall,pSVar3,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log((Object *)pSVar3,(MethodInfo *)0x0);
  pMVar4 = (this->fields).interstitialAdResultHandler;
  if (pMVar4 != (MobileAdManager_InterstitialAdResultHandler *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Debug);
      LOCK();
      UNLOCK();
      FUN_?(&TypeInfo__Assets__Scripts__AdIntegration__InterstitialAdResult);
      LOCK();
      UNLOCK();
      FUN_?(&StringLiteral_MobileAdManager_InterstitialAdRe);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    EStack_1.klass = (Enum__Class *)TypeInfo__Assets__Scripts__AdIntegration__InterstitialAdResult;
    EStack_1.monitor = (MonitorData *)0xffffffffffffffff;
    IStack_2 = obj;
    pSVar3 = mscorlib.dll::System::Enum::Enum_ToString(&EStack_1,(MethodInfo *)0x0);
    pSVar3 = mscorlib.dll::System::String::String_Concat_4
                       (StringLiteral_MobileAdManager_InterstitialAdRe,pSVar3,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log((Object *)pSVar3,(MethodInfo *)0x0);
    (pMVar4->fields).IsDone = 1;
    (pMVar4->fields).interstitialAdResult = obj;
    return;
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void RequestInterstitial(Action`1[Assets.Scripts.AdIntegration.InterstitialAdResult], AdContext)
    */

void Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Mobile::MobileAdManager::
     MobileAdManager_RequestInterstitial
               (MobileAdManager *this,
               Action_1_Assets_Scripts_AdIntegration_InterstitialAdResult_ *interstitialCallback,
               AdContext__Enum context,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<Assets::Scripts::AdIntegration::InterstitialAdResult>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Assets__Scripts__AdIntegration__IAdUIManager);
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager__InterstitialAdResultHandler
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager__InterstitialCallback_Assets__Scripts__AdIntegration__InterstitialAdResult_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_MobileAdManager_RequestInterstit);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Ad_already_showing__aborting);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Unhandled_interstitial_ad_handle);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
            ((Object *)StringLiteral_MobileAdManager_RequestInterstit,(MethodInfo *)0x0);
  if ((this->fields).interstitialAdResultHandler ==
      (MobileAdManager_InterstitialAdResultHandler *)0x0) {
    if ((this->fields).adUIManager == (IAdUIManager *)0x0) goto code_?;
    cVar1 = FUN_?(0);
    if (cVar1 == '\0') {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__Assets__Scripts__AdIntegration__AdContext);
        LOCK();
        UNLOCK();
        FUN_?(&StringLiteral_Ad_InterstitialRequest_);
        LOCK();
        UNLOCK();
        FUN_?(&StringLiteral_Ad_InterstitialRequest);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      EStack_2.klass = (Enum__Class *)TypeInfo__Assets__Scripts__AdIntegration__AdContext;
      EStack_2.monitor = (MonitorData *)0xffffffffffffffff;
      AStack_3 = context;
      pSVar4 = mscorlib.dll::System::Enum::Enum_ToString(&EStack_2,(MethodInfo *)0x0);
      pSVar4 = mscorlib.dll::System::String::String_Concat_4
                          (StringLiteral_Ad_InterstitialRequest_,pSVar4,(MethodInfo *)0x0);
      MobileAdManager_SendStat(pSVar4,(MethodInfo *)0x0);
      MobileAdManager_SendStat(StringLiteral_Ad_InterstitialRequest,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVGameControllerBase);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pMVar5 = TypeInfo__MVGameControllerBase->static_fields->instance;
      if (((pMVar5 != (MVGameControllerBase *)0x0) &&
          (pMVar6 = (pMVar5->fields).game, pMVar6 != (MVNetworkGame *)0x0)) &&
         (pMVar7 = (pMVar6->fields).operationRequests,
         pMVar7 != (MVNetworkGame_OperationRequests *)0x0)) {
        MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_IncrementStatRequest
                  (pMVar7,IncrementStatRequestType__Enum_InterstitialAdRequest,0,(MethodInfo *)0x0)
        ;
        pMVar7 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests
                            ((MethodInfo *)0x0);
        if (pMVar7 != (MVNetworkGame_OperationRequests *)0x0) {
          MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_AdAction
                    (pMVar7,AdType__Enum_InterstitialAd,AdActionType__Enum_Start,context,
                     (MethodInfo *)0x0);
          pIVar8 = (this->fields).adUIManager;
          pUVar9 = (UnityAction_1_System_Int32Enum_ *)
                    FUN_?(
                                 TypeInfo__System__Action<Assets::Scripts::AdIntegration::InterstitialAdResult>
                                 );
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
          UnityAction_1_System_Int32Enum___ctor
                    (pUVar9,(Object *)this,
                     MethodInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager__InterstitialCallback_Assets__Scripts__AdIntegration__InterstitialAdResult_
                     ,(MethodInfo *)0x0);
          if (pIVar8 != (IAdUIManager *)0x0) {
            FUN_?(1,TypeInfo__Assets__Scripts__AdIntegration__IAdUIManager,pIVar8,pUVar9);
            pIVar8 = (this->fields).adUIManager;
            pMVar10 = (MobileAdManager_InterstitialAdResultHandler *)
                      FUN_?(
                                   TypeInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager__InterstitialAdResultHandler
                                   );
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__UnityEngine__Debug);
              LOCK();
              UNLOCK();
              FUN_?(&StringLiteral_MobileAdManager_InterstitialAdRe);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
              FUN_?();
            }
            UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                      ((Object *)StringLiteral_MobileAdManager_InterstitialAdRe,(MethodInfo *)0x0);
            iVar11 = iRam_?;
            (pMVar10->fields).context = context;
            (pMVar10->fields).adUIManager = pIVar8;
            if (iVar11 != 0) {
              uVar12 = (uint)((ulonglong)&(pMVar10->fields).adUIManager >> 0xc);
              lVar13 = (ulonglong)((uVar12 & 0x1fffff) >> 6) * 8;
              do {
                uVar14 = *(ulonglong *)(lVar13 + 0xADDR);
                puVar15 = (ulonglong *)(lVar13 + 0xADDR);
                LOCK();
                bVar16 = uVar14 == *puVar15;
                if (bVar16) {
                  *puVar15 = uVar14 | 1L << (uVar12 & 0x3f);
                }
                UNLOCK();
                iVar11 = iRam_?;
              } while (!bVar16);
            }
            (pMVar10->fields).interstitialCallback = interstitialCallback;
            iVar17 = 0;
            if (iVar11 != 0) {
              uVar12 = (uint)((ulonglong)&(pMVar10->fields).interstitialCallback >> 0xc);
              lVar13 = (ulonglong)((uVar12 & 0x1fffff) >> 6) * 8;
              do {
                uVar14 = *(ulonglong *)(lVar13 + 0xADDR);
                puVar15 = (ulonglong *)(lVar13 + 0xADDR);
                LOCK();
                bVar16 = uVar14 == *puVar15;
                if (bVar16) {
                  *puVar15 = uVar14 | 1L << (uVar12 & 0x3f);
                }
                UNLOCK();
                iVar17 = iRam_?;
              } while (!bVar16);
            }
            (this->fields).interstitialAdResultHandler = pMVar10;
            if (iVar17 != 0) {
              uVar12 = (uint)((ulonglong)&(this->fields).interstitialAdResultHandler >> 0xc);
              lVar13 = (ulonglong)((uVar12 & 0x1fffff) >> 6) * 8;
              do {
                uVar14 = *(ulonglong *)(lVar13 + 0xADDR);
                puVar15 = (ulonglong *)(lVar13 + 0xADDR);
                LOCK();
                bVar16 = uVar14 == *puVar15;
                if (bVar16) {
                  *puVar15 = uVar14 | 1L << (uVar12 & 0x3f);
                }
                UNLOCK();
              } while (!bVar16);
            }
            this_00 = (this->fields).internalAdManagerState;
            pUVar9 = (UnityAction_1_System_Int32Enum_ *)
                      FUN_?(
                                   TypeInfo__System__Action<Assets::Scripts::AdIntegration::InterstitialAdResult>
                                   );
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
            UnityAction_1_System_Int32Enum___ctor
                      (pUVar9,(Object *)this,
                       MethodInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager__InterstitialCallback_Assets__Scripts__AdIntegration__InterstitialAdResult_
                       ,(MethodInfo *)0x0);
            if (this_00 != (MobileAdManager_InternalAdManagerState *)0x0) {
              MobileAdManager+InternalAdManagerState::
              MobileAdManager_InternalAdManagerState_RequestInterstitial
                        (this_00,(Action_1_Assets_Scripts_AdIntegration_InterstitialAdResult_ *)
                                 pUVar9,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
      goto code_?;
    }
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
              ((Object *)StringLiteral_Ad_already_showing__aborting,(MethodInfo *)0x0);
  }
  else {
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
              ((Object *)StringLiteral_Unhandled_interstitial_ad_handle,(MethodInfo *)0x0);
  }
  if (interstitialCallback != (Action_1_Assets_Scripts_AdIntegration_InterstitialAdResult_ *)0x0) {
    (*(interstitialCallback->fields)._._.invoke_impl)
              ((interstitialCallback->fields)._._.method_code,0,
               (interstitialCallback->fields)._._.method);
    return;
  }
code_?:
  FUN_?();
  pcVar18 = (code *)swi(3);
  (*pcVar18)();
  return;
}


/* Void RequestRewardedAd(Action`1[Assets.Scripts.AdIntegration.RewardedAdResult], AdContext) */

void Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Mobile::MobileAdManager::
     MobileAdManager_RequestRewardedAd
               (MobileAdManager *this,
               Action_1_Assets_Scripts_AdIntegration_RewardedAdResult_ *rewardedAdCallback,
               AdContext__Enum context,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<Assets::Scripts::AdIntegration::RewardedAdResult>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Assets__Scripts__AdIntegration__IAdUIManager);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager__RewardedAdCallback_Assets__Scripts__AdIntegration__RewardedAdResult_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager__RewardedAdResultHandler
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Unhandled_reward_handler_detecte);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_MobileAdManager_RequestRewardedA);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Ad_already_showing__aborting);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
            ((Object *)StringLiteral_MobileAdManager_RequestRewardedA,(MethodInfo *)0x0);
  if ((this->fields).rewardedAdResultHandler == (MobileAdManager_RewardedAdResultHandler *)0x0) {
    if ((this->fields).adUIManager == (IAdUIManager *)0x0) goto code_?;
    cVar1 = FUN_?(0);
    if (cVar1 == '\0') {
      pcVar2 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
        uVar3 = func_?(&UNK_?);
        FUN_?(uVar3,0);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pcRam_? = pcVar2;
      fVar4 = (float)(*pcRam_?)();
      bVar5 = cRam_? == '\0';
      (this->fields).timeOfRewardedAdStart = fVar4;
      if (bVar5) {
        FUN_?(&TypeInfo__Assets__Scripts__AdIntegration__AdContext);
        LOCK();
        UNLOCK();
        FUN_?(&StringLiteral_Ad_RewardRequest_);
        LOCK();
        UNLOCK();
        FUN_?(&StringLiteral_Ad_RewardRequest);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      MobileAdManager_SendStat(StringLiteral_Ad_RewardRequest,(MethodInfo *)0x0);
      EStack_6.klass = (Enum__Class *)TypeInfo__Assets__Scripts__AdIntegration__AdContext;
      EStack_6.monitor = (MonitorData *)0xffffffffffffffff;
      AStack_7 = context;
      pSVar8 = mscorlib.dll::System::Enum::Enum_ToString(&EStack_6,(MethodInfo *)0x0);
      pSVar8 = mscorlib.dll::System::String::String_Concat_4
                          (StringLiteral_Ad_RewardRequest_,pSVar8,(MethodInfo *)0x0);
      MobileAdManager_SendStat(pSVar8,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVGameControllerBase);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pMVar9 = TypeInfo__MVGameControllerBase->static_fields->instance;
      if (((pMVar9 != (MVGameControllerBase *)0x0) &&
          (pMVar10 = (pMVar9->fields).game, pMVar10 != (MVNetworkGame *)0x0)) &&
         (pMVar11 = (pMVar10->fields).operationRequests,
         pMVar11 != (MVNetworkGame_OperationRequests *)0x0)) {
        MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_IncrementStatRequest
                  (pMVar11,IncrementStatRequestType__Enum_RewardedAdRequest,0,(MethodInfo *)0x0);
        pMVar11 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests
                            ((MethodInfo *)0x0);
        if (pMVar11 != (MVNetworkGame_OperationRequests *)0x0) {
          MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_AdAction
                    (pMVar11,AdType__Enum_RewardedAd,AdActionType__Enum_Start,context,
                     (MethodInfo *)0x0);
          pIVar12 = (this->fields).adUIManager;
          pUVar13 = (UnityAction_1_System_Int32Enum_ *)
                    FUN_?(
                                 TypeInfo__System__Action<Assets::Scripts::AdIntegration::RewardedAdResult>
                                 );
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
          UnityAction_1_System_Int32Enum___ctor
                    (pUVar13,(Object *)this,
                     MethodInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager__RewardedAdCallback_Assets__Scripts__AdIntegration__RewardedAdResult_
                     ,(MethodInfo *)0x0);
          if (pIVar12 != (IAdUIManager *)0x0) {
            FUN_?(2,TypeInfo__Assets__Scripts__AdIntegration__IAdUIManager,pIVar12,pUVar13);
            pIVar12 = (this->fields).adUIManager;
            pMVar14 = (MobileAdManager_RewardedAdResultHandler *)
                      FUN_?(
                                   TypeInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager__RewardedAdResultHandler
                                   );
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__UnityEngine__Debug);
              LOCK();
              UNLOCK();
              FUN_?(&StringLiteral_MobileAdManager_RewardedAdResult);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
              FUN_?();
            }
            UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                      ((Object *)StringLiteral_MobileAdManager_RewardedAdResult,(MethodInfo *)0x0);
            iVar15 = iRam_?;
            (pMVar14->fields).context = context;
            (pMVar14->fields).adUIManager = pIVar12;
            if (iVar15 != 0) {
              uVar16 = (uint)((ulonglong)&(pMVar14->fields).adUIManager >> 0xc);
              uVar17 = (ulonglong)((uVar16 & 0x1fffff) >> 6);
              do {
                uVar18 = *(ulonglong *)(uVar17 * 8 + 0xADDR);
                puVar19 = (ulonglong *)(uVar17 * 8 + 0xADDR);
                LOCK();
                bVar5 = uVar18 == *puVar19;
                if (bVar5) {
                  *puVar19 = uVar18 | 1L << (uVar16 & 0x3f);
                }
                UNLOCK();
                iVar15 = iRam_?;
              } while (!bVar5);
            }
            (pMVar14->fields).rewardedAdCallback = rewardedAdCallback;
            iVar20 = 0;
            if (iVar15 != 0) {
              uVar16 = (uint)((ulonglong)&(pMVar14->fields).rewardedAdCallback >> 0xc);
              uVar17 = (ulonglong)((uVar16 & 0x1fffff) >> 6);
              do {
                uVar18 = *(ulonglong *)(uVar17 * 8 + 0xADDR);
                puVar19 = (ulonglong *)(uVar17 * 8 + 0xADDR);
                LOCK();
                bVar5 = uVar18 == *puVar19;
                if (bVar5) {
                  *puVar19 = uVar18 | 1L << (uVar16 & 0x3f);
                }
                UNLOCK();
                iVar20 = iRam_?;
              } while (!bVar5);
            }
            (this->fields).rewardedAdResultHandler = pMVar14;
            if (iVar20 != 0) {
              uVar16 = (uint)((ulonglong)&(this->fields).rewardedAdResultHandler >> 0xc);
              uVar17 = (ulonglong)((uVar16 & 0x1fffff) >> 6);
              do {
                uVar18 = *(ulonglong *)(uVar17 * 8 + 0xADDR);
                puVar19 = (ulonglong *)(uVar17 * 8 + 0xADDR);
                LOCK();
                bVar5 = uVar18 == *puVar19;
                if (bVar5) {
                  *puVar19 = uVar18 | 1L << (uVar16 & 0x3f);
                }
                UNLOCK();
              } while (!bVar5);
            }
            this_00 = (this->fields).internalAdManagerState;
            pUVar13 = (UnityAction_1_System_Int32Enum_ *)
                      FUN_?(
                                   TypeInfo__System__Action<Assets::Scripts::AdIntegration::RewardedAdResult>
                                   );
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
            UnityAction_1_System_Int32Enum___ctor
                      (pUVar13,(Object *)this,
                       MethodInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager__RewardedAdCallback_Assets__Scripts__AdIntegration__RewardedAdResult_
                       ,(MethodInfo *)0x0);
            if (this_00 != (MobileAdManager_InternalAdManagerState *)0x0) {
              MobileAdManager+InternalAdManagerState::
              MobileAdManager_InternalAdManagerState_RequestRewardedAd
                        (this_00,(Action_1_Assets_Scripts_AdIntegration_RewardedAdResult_ *)pUVar13,
                         (MethodInfo *)0x0);
              return;
            }
          }
        }
      }
      goto code_?;
    }
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
              ((Object *)StringLiteral_Ad_already_showing__aborting,(MethodInfo *)0x0);
  }
  else {
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
              ((Object *)StringLiteral_Unhandled_reward_handler_detecte,(MethodInfo *)0x0);
  }
  if (rewardedAdCallback != (Action_1_Assets_Scripts_AdIntegration_RewardedAdResult_ *)0x0) {
    (*(rewardedAdCallback->fields)._._.invoke_impl)
              ((rewardedAdCallback->fields)._._.method_code,0,
               (rewardedAdCallback->fields)._._.method);
    return;
  }
code_?:
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void RewardedAdCallback(RewardedAdResult) */

void Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Mobile::MobileAdManager::
     MobileAdManager_RewardedAdCallback
               (MobileAdManager *this,RewardedAdResult__Enum obj,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Assets__Scripts__AdIntegration__RewardedAdResult);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_MobileAdManager_RewardedAdCallba);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  EStack_1.klass = (Enum__Class *)TypeInfo__Assets__Scripts__AdIntegration__RewardedAdResult;
  EStack_1.monitor = (MonitorData *)0xffffffffffffffff;
  RStack_2 = obj;
  pSVar3 = mscorlib.dll::System::Enum::Enum_ToString(&EStack_1,(MethodInfo *)0x0);
  pSVar3 = mscorlib.dll::System::String::String_Concat_4
                     (StringLiteral_MobileAdManager_RewardedAdCallba,pSVar3,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log((Object *)pSVar3,(MethodInfo *)0x0);
  if ((this->fields).timeoutAdAfterDelayAsUnlocked == 0) {
code_?:
    if (obj != RewardedAdResult__Enum_RewardUnlocked) goto code_?;
  }
  else {
    pcVar4 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
      uVar5 = func_?(&UNK_?);
      FUN_?(uVar5,0);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pcRam_? = pcVar4;
    fVar6 = (float)(*pcRam_?)();
    if (fVar6 - (this->fields).timeOfRewardedAdStart < (float)(this->fields).timeoutSuccessDelay)
    goto code_?;
    obj = RewardedAdResult__Enum_RewardUnlocked;
  }
  pcVar4 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
    uVar5 = func_?(&UNK_?);
    FUN_?(uVar5,0);
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pcRam_? = pcVar4;
  fVar6 = (float)(*pcRam_?)();
  (this->fields).lastSeenRewardedAd = fVar6;
code_?:
  pMVar7 = (this->fields).rewardedAdResultHandler;
  if (pMVar7 == (MobileAdManager_RewardedAdResultHandler *)0x0) {
    FUN_?();
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Assets__Scripts__AdIntegration__RewardedAdResult);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_MobileAdManager_RewardedAdResult);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  EStack_1.klass = (Enum__Class *)TypeInfo__Assets__Scripts__AdIntegration__RewardedAdResult;
  EStack_1.monitor = (MonitorData *)0xffffffffffffffff;
  RStack_2 = obj;
  pSVar3 = mscorlib.dll::System::Enum::Enum_ToString(&EStack_1,(MethodInfo *)0x0);
  pSVar3 = mscorlib.dll::System::String::String_Concat_4
                     (StringLiteral_MobileAdManager_RewardedAdResult,pSVar3,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log((Object *)pSVar3,(MethodInfo *)0x0);
  (pMVar7->fields).IsDone = 1;
  (pMVar7->fields).rewardedAdResult = obj;
  return;
}


/* Void SendInterstitialAdRequestStats(AdContext) */

void Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Mobile::MobileAdManager::
     MobileAdManager_SendInterstitialAdRequestStats
               (MobileAdManager *this,AdContext__Enum context,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__Assets__Scripts__AdIntegration__AdContext);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Ad_InterstitialRequest_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Ad_InterstitialRequest);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  EStackY_28.klass = (Enum__Class *)TypeInfo__Assets__Scripts__AdIntegration__AdContext;
  EStackY_28.monitor = (MonitorData *)0xffffffffffffffff;
  pSVar1 = mscorlib.dll::System::Enum::Enum_ToString(&EStackY_28,(MethodInfo *)0x0);
  pSVar1 = mscorlib.dll::System::String::String_Concat_4
                     (StringLiteral_Ad_InterstitialRequest_,pSVar1,(MethodInfo *)0x0);
  MobileAdManager_SendStat(pSVar1,(MethodInfo *)0x0);
  MobileAdManager_SendStat(StringLiteral_Ad_InterstitialRequest,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar2 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (((pMVar2 != (MVGameControllerBase *)0x0) &&
      (pMVar3 = (pMVar2->fields).game, pMVar3 != (MVNetworkGame *)0x0)) &&
     (pMVar4 = (pMVar3->fields).operationRequests, pMVar4 != (MVNetworkGame_OperationRequests *)0x0)
     ) {
    uVar5 = 0;
    if (cRam_? == '\0') {
      FUN_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                    ,0,0,0);
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
    auStackX_10[0] = 0;
    value = (Object *)FUN_?(uRam_?,auStackX_10);
    if (this_00 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
      method_00 = MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                  ->klass->rgctx_data[0x22].method;
      uVar6 = CONCAT71((int7)((ulonglong)method_00 >> 8),0xbf);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
      Dictionary_2_System_Byte_System_Object__TryInsert
                (this_00,0xbf,value,
                 (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar5 >> 8),2),method_00);
      pPVar7 = (pMVar4->fields).peer;
      if (*(int *)&(TypeInfo__ExitGames__Client__Photon__SendOptions->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
      }
      if (pPVar7 != (PhotonPeer *)0x0) {
        (*(pPVar7->klass->vtable).SendOperation.methodPtr)
                  (pPVar7,CONCAT71((int7)((ulonglong)uVar6 >> 8),0x76),this_00,
                   TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields->SendReliable);
        return;
      }
    }
    FUN_?();
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  FUN_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void SendRewardRequestStats(AdContext) */

void Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Mobile::MobileAdManager::
     MobileAdManager_SendRewardRequestStats
               (MobileAdManager *this,AdContext__Enum context,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__Assets__Scripts__AdIntegration__AdContext);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Ad_RewardRequest_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Ad_RewardRequest);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  MobileAdManager_SendStat(StringLiteral_Ad_RewardRequest,(MethodInfo *)0x0);
  EStackY_28.klass = (Enum__Class *)TypeInfo__Assets__Scripts__AdIntegration__AdContext;
  EStackY_28.monitor = (MonitorData *)0xffffffffffffffff;
  pSVar1 = mscorlib.dll::System::Enum::Enum_ToString(&EStackY_28,(MethodInfo *)0x0);
  pSVar1 = mscorlib.dll::System::String::String_Concat_4
                     (StringLiteral_Ad_RewardRequest_,pSVar1,(MethodInfo *)0x0);
  MobileAdManager_SendStat(pSVar1,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar2 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (((pMVar2 != (MVGameControllerBase *)0x0) &&
      (pMVar3 = (pMVar2->fields).game, pMVar3 != (MVNetworkGame *)0x0)) &&
     (pMVar4 = (pMVar3->fields).operationRequests, pMVar4 != (MVNetworkGame_OperationRequests *)0x0)
     ) {
    uVar5 = 0;
    if (cRam_? == '\0') {
      FUN_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                    ,1,0,0);
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
    auStackX_10[0] = 1;
    value = (Object *)FUN_?(uRam_?,auStackX_10);
    if (this_00 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
      method_00 = MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                  ->klass->rgctx_data[0x22].method;
      uVar6 = CONCAT71((int7)((ulonglong)method_00 >> 8),0xbf);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
      Dictionary_2_System_Byte_System_Object__TryInsert
                (this_00,0xbf,value,
                 (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar5 >> 8),2),method_00);
      pPVar7 = (pMVar4->fields).peer;
      if (*(int *)&(TypeInfo__ExitGames__Client__Photon__SendOptions->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
      }
      if (pPVar7 != (PhotonPeer *)0x0) {
        (*(pPVar7->klass->vtable).SendOperation.methodPtr)
                  (pPVar7,CONCAT71((int7)((ulonglong)uVar6 >> 8),0x76),this_00,
                   TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields->SendReliable);
        return;
      }
    }
    FUN_?();
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  FUN_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void SendStat(String) */

void Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Mobile::MobileAdManager::
     MobileAdManager_SendStat(String *stat,MethodInfo *method)

{
  if (cRam_? == '\0') {
    PStack_1._args = (Object__Array *)&UNK_?;
    FUN_?(&TypeInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager);
    LOCK();
    UNLOCK();
    PStack_1._args = (Object__Array *)&UNK_?;
    FUN_?(&TypeInfo__StatHatWrapper);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (TypeInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager->static_fields->testing != 0
     ) {
    return;
  }
  if (*(int *)&(TypeInfo__StatHatWrapper->_1).field_0x1c == 0) {
    PStack_1._args = (Object__Array *)&UNK_?;
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__StatHatWrapper,1,0);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__0__u_standalone__1_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__0__u_fts__1_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__0__u__1_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__0__u_fts_standalone__1_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__StatHatWrapper->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__StatHatWrapper);
  }
  if ((TypeInfo__StatHatWrapper->static_fields->statHatConfig).isEnabled != 0) {
    if (*(int *)&(TypeInfo__StatHatWrapper->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__StatHatWrapper);
    }
    pSVar2 = StringLiteral__0__u__1_;
    PStack_3._arg0 = (Object *)0x0;
    PStack_3._arg1 = (Object *)0x0;
    PStack_3._arg2 = (Object *)0x0;
    PStack_3._args = (Object__Array *)0x0;
    mscorlib.dll::System::ParamsArray::ParamsArray__ctor_1
              (&PStack_3,
               (Object *)(TypeInfo__StatHatWrapper->static_fields->statHatConfig).regionKey,
               (Object *)stat,(MethodInfo *)0x0);
    PStack_1._arg0 = PStack_3._arg0;
    PStack_1._arg1 = PStack_3._arg1;
    PStack_1._arg2 = PStack_3._arg2;
    PStack_1._args = PStack_3._args;
    pSVar4 = mscorlib.dll::System::String::String_FormatHelper
                       ((IFormatProvider *)0x0,pSVar2,&PStack_1,(MethodInfo *)0x0);
    pSVar2 = StringLiteral__0__u_standalone__1_;
    PStack_1._arg0 = (Object *)0x0;
    PStack_1._arg1 = (Object *)0x0;
    PStack_1._arg2 = (Object *)0x0;
    PStack_1._args = (Object__Array *)0x0;
    mscorlib.dll::System::ParamsArray::ParamsArray__ctor_1
              (&PStack_1,
               (Object *)(TypeInfo__StatHatWrapper->static_fields->statHatConfig).regionKey,
               (Object *)stat,(MethodInfo *)0x0);
    PStack_5._arg0 = PStack_1._arg0;
    PStack_5._arg1 = PStack_1._arg1;
    PStack_5._arg2 = PStack_1._arg2;
    PStack_5._args = PStack_1._args;
    pSVar2 = mscorlib.dll::System::String::String_FormatHelper
                       ((IFormatProvider *)0x0,pSVar2,&PStack_5,(MethodInfo *)0x0);
    StatHatWrapper::StatHatWrapper_Count_1(pSVar4,pSVar2,1,(MethodInfo *)0x0);
    if (TypeInfo__StatHatWrapper->static_fields->isFirstTimeSession != 0) {
      if (*(int *)&(TypeInfo__StatHatWrapper->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__StatHatWrapper);
      }
      pSVar2 = StringLiteral__0__u_fts__1_;
      PStack_1._arg0 = (Object *)0x0;
      PStack_1._arg1 = (Object *)0x0;
      PStack_1._arg2 = (Object *)0x0;
      PStack_1._args = (Object__Array *)0x0;
      mscorlib.dll::System::ParamsArray::ParamsArray__ctor_1
                (&PStack_1,
                 (Object *)(TypeInfo__StatHatWrapper->static_fields->statHatConfig).regionKey,
                 (Object *)stat,(MethodInfo *)0x0);
      PStack_5._arg0 = PStack_1._arg0;
      PStack_5._arg1 = PStack_1._arg1;
      PStack_5._arg2 = PStack_1._arg2;
      PStack_5._args = PStack_1._args;
      pSVar4 = mscorlib.dll::System::String::String_FormatHelper
                         ((IFormatProvider *)0x0,pSVar2,&PStack_5,(MethodInfo *)0x0);
      pSVar2 = StringLiteral__0__u_fts_standalone__1_;
      PStack_3._arg0 = (Object *)0x0;
      PStack_3._arg1 = (Object *)0x0;
      PStack_3._arg2 = (Object *)0x0;
      PStack_3._args = (Object__Array *)0x0;
      mscorlib.dll::System::ParamsArray::ParamsArray__ctor_1
                (&PStack_3,
                 (Object *)(TypeInfo__StatHatWrapper->static_fields->statHatConfig).regionKey,
                 (Object *)stat,(MethodInfo *)0x0);
      PStack_5._arg0 = PStack_3._arg0;
      PStack_5._arg1 = PStack_3._arg1;
      PStack_5._arg2 = PStack_3._arg2;
      PStack_5._args = PStack_3._args;
      pSVar2 = mscorlib.dll::System::String::String_FormatHelper
                         ((IFormatProvider *)0x0,pSVar2,&PStack_5,(MethodInfo *)0x0);
      StatHatWrapper::StatHatWrapper_Count_1(pSVar4,pSVar2,1,(MethodInfo *)0x0);
    }
  }
  return;
}


/* Void SetConsent(MobileAdManager+ConsentAndCompliance) */

void Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Mobile::MobileAdManager::
     MobileAdManager_SetConsent
               (MobileAdManager *this,MobileAdManager_ConsentAndCompliance *cac,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_MobileAdManager_SetConsent);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
            ((Object *)StringLiteral_MobileAdManager_SetConsent,(MethodInfo *)0x0);
  if ((cac != (MobileAdManager_ConsentAndCompliance *)0x0) &&
     (pCVar1 = (cac->fields).consentData, pCVar1 != (ConsentData *)0x0)) {
    bVar2 = 1;
    if ((pCVar1->fields).isEuropean == 0) {
      bVar3 = (pCVar1->fields).isAmerican;
      bVar4 = true;
    }
    else {
      bVar4 = (pCVar1->fields).isChild == 0;
      bVar3 = 1;
    }
    bVar5 = (pCVar1->fields).hasConsented;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__GoogleMobileAds__Mediation__UnityAds__Api__UnityAds);
      LOCK();
      UNLOCK();
      FUN_?(&StringLiteral_gdpr_consent);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__GoogleMobileAds__Mediation__UnityAds__Api__UnityAds->_1).field_0x1c == 0
       ) {
      FUN_?();
    }
    GoogleMobileAds::Mediation::UnityAds::Api::UnityAds::UnityAds_1_SetConsentMetaData
              (StringLiteral_gdpr_consent,(bVar5 & bVar4) != 0 || bVar3 == 0,(MethodInfo *)0x0);
    pCVar1 = (cac->fields).consentData;
    if (pCVar1 != (ConsentData *)0x0) {
      if ((pCVar1->fields).isEuropean == 0) {
        bVar3 = (pCVar1->fields).isAmerican;
        bVar4 = true;
      }
      else {
        bVar4 = (pCVar1->fields).isChild == 0;
        bVar3 = 1;
      }
      bVar5 = (pCVar1->fields).hasConsented;
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__GoogleMobileAds__Mediation__IronSource__Api__IronSource);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__GoogleMobileAds__Mediation__IronSource__Api__IronSource->_1).
                   field_0x1c == 0) {
        FUN_?();
      }
      GoogleMobileAds::Mediation::IronSource::Api::IronSource::IronSource_1_SetConsent
                ((bVar5 & bVar4) != 0 || bVar3 == 0,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__GoogleMobileAds__Mediation__AppLovin__Api__AppLovin);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pCVar1 = (cac->fields).consentData;
      if (pCVar1 != (ConsentData *)0x0) {
        if ((pCVar1->fields).isEuropean == 0) {
          bVar3 = (pCVar1->fields).isAmerican;
          bVar4 = true;
        }
        else {
          bVar4 = (pCVar1->fields).isChild == 0;
          bVar3 = 1;
        }
        bVar5 = (pCVar1->fields).hasConsented;
        if (*(int *)&(TypeInfo__GoogleMobileAds__Mediation__AppLovin__Api__AppLovin->_1).field_0x1c
            == 0) {
          FUN_?();
        }
        GoogleMobileAds::Mediation::AppLovin::Api::AppLovin::AppLovin_1_SetHasUserConsent
                  ((bVar5 & bVar4) != 0 || bVar3 == 0,(MethodInfo *)0x0);
        pCVar1 = (cac->fields).consentData;
        if (pCVar1 != (ConsentData *)0x0) {
          if ((pCVar1->fields).isEuropean != 0) {
            if ((pCVar1->fields).isChild == 0) {
              bVar3 = 0;
            }
            else {
              bVar3 = (pCVar1->fields).isEuropean;
            }
            if (*(int *)&(TypeInfo__GoogleMobileAds__Mediation__AppLovin__Api__AppLovin->_1).
                         field_0x1c == 0) {
              FUN_?();
            }
            GoogleMobileAds::Mediation::AppLovin::Api::AppLovin::AppLovin_1_SetIsAgeRestrictedUser
                      (bVar3,(MethodInfo *)0x0);
          }
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__GoogleMobileAds__Mediation__AdColony__Api__AdColonyAppOptions);
            LOCK();
            UNLOCK();
            FUN_?(&StringLiteral__1);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pCVar1 = (cac->fields).consentData;
          if (pCVar1 != (ConsentData *)0x0) {
            bVar3 = (pCVar1->fields).isEuropean;
            if (*(int *)&(TypeInfo__GoogleMobileAds__Mediation__AdColony__Api__AdColonyAppOptions->
                         _1).field_0x1c == 0) {
              FUN_?();
            }
            GoogleMobileAds::Mediation::AdColony::Api::AdColonyAppOptions::
            AdColonyAppOptions_1_SetPrivacyFrameworkRequired
                      (AdColonyPrivacyFramework__Enum_GDPR,bVar3,(MethodInfo *)0x0);
            pCVar1 = (cac->fields).consentData;
            if (pCVar1 != (ConsentData *)0x0) {
              if ((pCVar1->fields).isEuropean == 0) {
                bVar4 = true;
                bVar2 = (pCVar1->fields).isAmerican;
              }
              else {
                bVar4 = (pCVar1->fields).isChild == 0;
              }
              if ((((pCVar1->fields).hasConsented & bVar4) != 0) || (bVar2 == 0)) {
                if (*(int *)&(
                             TypeInfo__GoogleMobileAds__Mediation__AdColony__Api__AdColonyAppOptions
                             ->_1).field_0x1c == 0) {
                  FUN_?();
                }
                GoogleMobileAds::Mediation::AdColony::Api::AdColonyAppOptions::
                AdColonyAppOptions_1_SetPrivacyConsentString
                          (AdColonyPrivacyFramework__Enum_GDPR,StringLiteral__1,(MethodInfo *)0x0);
              }
              if (cRam_? == '\0') {
                FUN_?(&
                              TypeInfo__GoogleMobileAds__Mediation__LiftoffMonetize__Api__LiftoffMonetize
                             );
                LOCK();
                UNLOCK();
                FUN_?(&StringLiteral__1);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              pCVar1 = (cac->fields).consentData;
              if (pCVar1 != (ConsentData *)0x0) {
                if ((pCVar1->fields).isEuropean != 0) {
                  bVar2 = (pCVar1->fields).isChild;
                  bVar5 = (pCVar1->fields).hasConsented;
                  if (*(int *)&(
                               TypeInfo__GoogleMobileAds__Mediation__LiftoffMonetize__Api__LiftoffMonetize
                               ->_1).field_0x1c == 0) {
                    FUN_?();
                  }
                  GoogleMobileAds::Mediation::LiftoffMonetize::Api::LiftoffMonetize::
                  LiftoffMonetize_1_UpdateConsentStatus
                            ((uint)((bVar5 & bVar2 == 0) == 0),StringLiteral__1,(MethodInfo *)0x0);
                }
                return;
              }
            }
          }
        }
      }
    }
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void SetConsentAdColony(MobileAdManager+ConsentAndCompliance) */

void Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Mobile::MobileAdManager::
     MobileAdManager_SetConsentAdColony
               (MobileAdManager *this,MobileAdManager_ConsentAndCompliance *cac,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__GoogleMobileAds__Mediation__AdColony__Api__AdColonyAppOptions);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__1);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((cac != (MobileAdManager_ConsentAndCompliance *)0x0) &&
     (pCVar1 = (cac->fields).consentData, pCVar1 != (ConsentData *)0x0)) {
    bVar2 = (pCVar1->fields).isEuropean;
    if (*(int *)&(TypeInfo__GoogleMobileAds__Mediation__AdColony__Api__AdColonyAppOptions->_1).
                 field_0x1c == 0) {
      FUN_?();
    }
    GoogleMobileAds::Mediation::AdColony::Api::AdColonyAppOptions::
    AdColonyAppOptions_1_SetPrivacyFrameworkRequired
              (AdColonyPrivacyFramework__Enum_GDPR,bVar2,(MethodInfo *)0x0);
    pCVar1 = (cac->fields).consentData;
    if (pCVar1 != (ConsentData *)0x0) {
      if ((pCVar1->fields).isEuropean == 0) {
        bVar2 = (pCVar1->fields).isAmerican;
        bVar3 = true;
      }
      else {
        bVar3 = (pCVar1->fields).isChild == 0;
        bVar2 = 1;
      }
      if ((((pCVar1->fields).hasConsented & bVar3) == 0) && (bVar2 != 0)) {
        return;
      }
      if (*(int *)&(TypeInfo__GoogleMobileAds__Mediation__AdColony__Api__AdColonyAppOptions->_1).
                   field_0x1c == 0) {
        FUN_?();
      }
      pSVar4 = StringLiteral__1;
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__GoogleMobileAds__Mediation__AdColony__Api__AdColonyAppOptions,
                      StringLiteral__1,0);
        LOCK();
        UNLOCK();
        FUN_?(&
                      TypeInfo__GoogleMobileAds__Mediation__AdColony__Common__IAdColonyAppOptionsClient
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__GoogleMobileAds__Mediation__AdColony__Api__AdColonyAppOptions->_1).
                   field_0x1c == 0) {
        FUN_?(TypeInfo__GoogleMobileAds__Mediation__AdColony__Api__AdColonyAppOptions);
      }
      pIVar5 = TypeInfo__GoogleMobileAds__Mediation__AdColony__Api__AdColonyAppOptions->
               static_fields->client;
      if (pIVar5 != (IAdColonyAppOptionsClient *)0x0) {
        FUN_?(2,
                      TypeInfo__GoogleMobileAds__Mediation__AdColony__Common__IAdColonyAppOptionsClient
                      ,pIVar5,0,pSVar4);
        return;
      }
      FUN_?();
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void SetConsentAppLovin(MobileAdManager+ConsentAndCompliance) */

void Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Mobile::MobileAdManager::
     MobileAdManager_SetConsentAppLovin
               (MobileAdManager *this,MobileAdManager_ConsentAndCompliance *cac,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__GoogleMobileAds__Mediation__AppLovin__Api__AppLovin);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((cac != (MobileAdManager_ConsentAndCompliance *)0x0) &&
     (pCVar1 = (cac->fields).consentData, pCVar1 != (ConsentData *)0x0)) {
    if ((pCVar1->fields).isEuropean == 0) {
      bVar2 = (pCVar1->fields).isAmerican;
      bVar3 = true;
    }
    else {
      bVar3 = (pCVar1->fields).isChild == 0;
      bVar2 = 1;
    }
    bVar4 = (pCVar1->fields).hasConsented;
    if (*(int *)&(TypeInfo__GoogleMobileAds__Mediation__AppLovin__Api__AppLovin->_1).field_0x1c == 0
       ) {
      FUN_?();
    }
    GoogleMobileAds::Mediation::AppLovin::Api::AppLovin::AppLovin_1_SetHasUserConsent
              ((bVar4 & bVar3) != 0 || bVar2 == 0,(MethodInfo *)0x0);
    pCVar1 = (cac->fields).consentData;
    if (pCVar1 != (ConsentData *)0x0) {
      if ((pCVar1->fields).isEuropean == 0) {
        return;
      }
      if ((pCVar1->fields).isChild == 0) {
        bVar2 = 0;
      }
      else {
        bVar2 = (pCVar1->fields).isEuropean;
      }
      if (*(int *)&(TypeInfo__GoogleMobileAds__Mediation__AppLovin__Api__AppLovin->_1).field_0x1c ==
          0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__GoogleMobileAds__Mediation__AppLovin__Api__AppLovin,0);
        LOCK();
        UNLOCK();
        FUN_?(&TypeInfo__GoogleMobileAds__Mediation__AppLovin__Common__IAppLovinClient);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__GoogleMobileAds__Mediation__AppLovin__Api__AppLovin->_1).field_0x1c ==
          0) {
        FUN_?(TypeInfo__GoogleMobileAds__Mediation__AppLovin__Api__AppLovin);
      }
      pIVar5 = TypeInfo__GoogleMobileAds__Mediation__AppLovin__Api__AppLovin->static_fields->client;
      if (pIVar5 == (IAppLovinClient *)0x0) {
        FUN_?();
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pIVar7 = (Il2CppRuntimeInterfaceOffsetPair *)(ulonglong)bVar2;
      uVar8 = 0;
      pIVar9 = pIVar5->klass;
      uVar10._0_1_ = (pIVar9->_1).rank;
      uVar10._1_1_ = (pIVar9->_1).minimumAlignment;
      if (uVar10 != 0) {
        pIVar7 = pIVar9->interfaceOffsets;
        do {
          if (pIVar7[uVar8].interfaceType ==
              (Il2CppClass *)TypeInfo__GoogleMobileAds__Mediation__AppLovin__Common__IAppLovinClient
             ) {
            pVVar11 = &(pIVar9->vtable).Initialize + (pIVar7[uVar8].offset + 2);
            goto code_?;
          }
          uVar8 = uVar8 + 1;
        } while (uVar8 < uVar10);
      }
      pVVar11 = (VirtualInvokeData *)
               FUN_?(pIVar5,
                             TypeInfo__GoogleMobileAds__Mediation__AppLovin__Common__IAppLovinClient
                             ,2,pIVar7,unaff_RDI);
code_?:
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pVVar11->methodPtr)(pIVar5,(ulonglong)bVar2,pVVar11->method,pVVar11->methodPtr);
      return;
    }
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void SetConsentIronSource(Boolean) */

void Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Mobile::MobileAdManager::
     MobileAdManager_SetConsentIronSource
               (MobileAdManager *this,bool hasConsented,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__GoogleMobileAds__Mediation__IronSource__Api__IronSource);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__GoogleMobileAds__Mediation__IronSource__Api__IronSource->_1).field_0x1c ==
      0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__GoogleMobileAds__Mediation__IronSource__Common__IIronSourceClient,0);
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__GoogleMobileAds__Mediation__IronSource__Api__IronSource->_1).field_0x1c ==
      0) {
    FUN_?();
  }
  pIVar1 = TypeInfo__GoogleMobileAds__Mediation__IronSource__Api__IronSource->static_fields->client;
  if (pIVar1 == (IIronSourceClient *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pIVar3 = (Il2CppRuntimeInterfaceOffsetPair *)(ulonglong)hasConsented;
  uVar4 = 0;
  pIVar5 = pIVar1->klass;
  uVar6._0_1_ = (pIVar5->_1).rank;
  uVar6._1_1_ = (pIVar5->_1).minimumAlignment;
  if (uVar6 != 0) {
    pIVar3 = pIVar5->interfaceOffsets;
    do {
      if (pIVar3[uVar4].interfaceType ==
          (Il2CppClass *)TypeInfo__GoogleMobileAds__Mediation__IronSource__Common__IIronSourceClient
         ) {
        pVVar7 = &(pIVar5->vtable).SetConsent + pIVar3[uVar4].offset;
        goto code_?;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar6);
  }
  pVVar7 = (VirtualInvokeData *)
           FUN_?(pIVar1,
                         TypeInfo__GoogleMobileAds__Mediation__IronSource__Common__IIronSourceClient
                         ,0,pIVar3);
code_?:
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pVVar7->methodPtr)(pIVar1,(ulonglong)hasConsented,pVVar7->method,pVVar7->methodPtr);
  return;
}


/* Void SetConsentUnityAds(Boolean) */

void Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Mobile::MobileAdManager::
     MobileAdManager_SetConsentUnityAds(MobileAdManager *this,bool hasConsented,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__GoogleMobileAds__Mediation__UnityAds__Api__UnityAds,
                  CONCAT71(in_register_00000011,hasConsented));
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_gdpr_consent);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__GoogleMobileAds__Mediation__UnityAds__Api__UnityAds->_1).field_0x1c == 0)
  {
    FUN_?();
  }
  pSVar1 = StringLiteral_gdpr_consent;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__GoogleMobileAds__Mediation__UnityAds__Common__IUnityAdsClient,
                  hasConsented);
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__GoogleMobileAds__Mediation__UnityAds__Api__UnityAds->_1).field_0x1c == 0)
  {
    FUN_?();
  }
  pIVar2 = TypeInfo__GoogleMobileAds__Mediation__UnityAds__Api__UnityAds->static_fields->client;
  if (pIVar2 == (IUnityAdsClient *)0x0) {
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pIVar4 = pIVar2->klass;
  uVar5 = 0;
  uVar6._0_1_ = (pIVar4->_1).rank;
  uVar6._1_1_ = (pIVar4->_1).minimumAlignment;
  if (uVar6 != 0) {
    do {
      if (pIVar4->interfaceOffsets[uVar5].interfaceType ==
          (Il2CppClass *)TypeInfo__GoogleMobileAds__Mediation__UnityAds__Common__IUnityAdsClient) {
        pIVar7 = &pIVar4->vtable + pIVar4->interfaceOffsets[uVar5].offset;
        goto code_?;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar6);
  }
  pIVar7 = (IUnityAdsClient__VTable *)
           FUN_?(pIVar2,
                         TypeInfo__GoogleMobileAds__Mediation__UnityAds__Common__IUnityAdsClient,0);
code_?:
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(pIVar7->SetConsentMetaData).methodPtr)
            (pIVar2,pSVar1,(ulonglong)hasConsented,(pIVar7->SetConsentMetaData).method);
  return;
}


/* Void SetConsentVungle(MobileAdManager+ConsentAndCompliance) */

void Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Mobile::MobileAdManager::
     MobileAdManager_SetConsentVungle
               (MobileAdManager *this,MobileAdManager_ConsentAndCompliance *cac,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__GoogleMobileAds__Mediation__LiftoffMonetize__Api__LiftoffMonetize);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__1);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((cac == (MobileAdManager_ConsentAndCompliance *)0x0) ||
     (pCVar1 = (cac->fields).consentData, pCVar1 == (ConsentData *)0x0)) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((pCVar1->fields).isEuropean == 0) {
    return;
  }
  bVar3 = (pCVar1->fields).isChild;
  bVar4 = (pCVar1->fields).hasConsented;
  if (*(int *)&(TypeInfo__GoogleMobileAds__Mediation__LiftoffMonetize__Api__LiftoffMonetize->_1).
               field_0x1c == 0) {
    FUN_?();
  }
  pSVar5 = StringLiteral__1;
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__GoogleMobileAds__Mediation__LiftoffMonetize__Common__ILiftoffMonetizeClient
                  ,StringLiteral__1,0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__GoogleMobileAds__Mediation__LiftoffMonetize__Api__LiftoffMonetize);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__GoogleMobileAds__Mediation__LiftoffMonetize__Api__LiftoffMonetize->_1).
               field_0x1c == 0) {
    FUN_?(TypeInfo__GoogleMobileAds__Mediation__LiftoffMonetize__Api__LiftoffMonetize);
  }
  pIVar6 = TypeInfo__GoogleMobileAds__Mediation__LiftoffMonetize__Api__LiftoffMonetize->
           static_fields->client;
  if (pIVar6 != (ILiftoffMonetizeClient *)0x0) {
    FUN_?(0,
                  TypeInfo__GoogleMobileAds__Mediation__LiftoffMonetize__Common__ILiftoffMonetizeClient
                  ,pIVar6,(bVar4 & bVar3 == 0) == 0,pSVar5);
    return;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SetupConsentAndCompliance(ConsentData) */

void Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Mobile::MobileAdManager::
     MobileAdManager_SetupConsentAndCompliance
               (MobileAdManager *this,ConsentData *consentData,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager__ConsentAndCompliance
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Consent_data_not_set__Using_defa);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_consentAndCompliance__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (consentData == (ConsentData *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
              ((Object *)StringLiteral_Consent_data_not_set__Using_defa,(MethodInfo *)0x0);
    pMVar1 = (MobileAdManager_ConsentAndCompliance *)
             FUN_?(
                          TypeInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager__ConsentAndCompliance
                          );
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__Assets__Scripts__AdIntegration__ConsentData);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pCVar2 = (ConsentData *)FUN_?(TypeInfo__Assets__Scripts__AdIntegration__ConsentData);
    bVar3 = iRam_? != 0;
    (pCVar2->fields).isAmerican = 1;
    (pCVar2->fields).isEuropean = 1;
    (pMVar1->fields).consentData = pCVar2;
    if (bVar3) {
      uVar4 = (uint)((ulonglong)&pMVar1->fields >> 0xc);
      lVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
      do {
        uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
        puVar7 = (ulonglong *)(lVar5 + 0xADDR);
        LOCK();
        bVar3 = uVar6 == *puVar7;
        if (bVar3) {
          *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
        }
        UNLOCK();
      } while (!bVar3);
    }
    TypeInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager->static_fields->
    consentAndCompliance = pMVar1;
    if (iRam_? != 0) {
      uVar4 = (uint)((ulonglong)
                      TypeInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager->
                      static_fields >> 0xc);
      lVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
      do {
        uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
        puVar7 = (ulonglong *)(lVar5 + 0xADDR);
        LOCK();
        bVar3 = uVar6 == *puVar7;
        if (bVar3) {
          *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
        }
        UNLOCK();
      } while (!bVar3);
    }
  }
  else {
    pMVar1 = (MobileAdManager_ConsentAndCompliance *)
             FUN_?(
                          TypeInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager__ConsentAndCompliance
                          );
    bVar3 = iRam_? != 0;
    (pMVar1->fields).consentData = consentData;
    if (bVar3) {
      uVar4 = (uint)((ulonglong)&pMVar1->fields >> 0xc);
      lVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
      do {
        uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
        puVar7 = (ulonglong *)(lVar5 + 0xADDR);
        LOCK();
        bVar3 = uVar6 == *puVar7;
        if (bVar3) {
          *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
        }
        UNLOCK();
      } while (!bVar3);
    }
    TypeInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager->static_fields->
    consentAndCompliance = pMVar1;
    if (iRam_? != 0) {
      uVar4 = (uint)((ulonglong)
                      TypeInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager->
                      static_fields >> 0xc);
      lVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
      do {
        uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
        puVar7 = (ulonglong *)(lVar5 + 0xADDR);
        LOCK();
        bVar3 = uVar6 == *puVar7;
        if (bVar3) {
          *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
        }
        UNLOCK();
      } while (!bVar3);
    }
  }
  pSVar8 = StringLiteral_consentAndCompliance__;
  pMVar1 = TypeInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager->static_fields->
           consentAndCompliance;
  if (pMVar1 == (MobileAdManager_ConsentAndCompliance *)0x0) {
    str1 = (String *)0x0;
  }
  else {
    str1 = (String *)
           (*(pMVar1->klass->vtable).ToString.methodPtr)
                     (pMVar1,(pMVar1->klass->vtable).ToString.method);
  }
  pSVar8 = mscorlib.dll::System::String::String_Concat_4(pSVar8,str1,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log((Object *)pSVar8,(MethodInfo *)0x0);
  pMVar1 = TypeInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager->static_fields->
           consentAndCompliance;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug,pMVar1,0);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_MobileAdManager_SetConsent);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
            ((Object *)StringLiteral_MobileAdManager_SetConsent,(MethodInfo *)0x0);
  if ((pMVar1 != (MobileAdManager_ConsentAndCompliance *)0x0) &&
     (pCVar2 = (pMVar1->fields).consentData, pCVar2 != (ConsentData *)0x0)) {
    bVar9 = 1;
    if ((pCVar2->fields).isEuropean == 0) {
      bVar10 = (pCVar2->fields).isAmerican;
      bVar3 = true;
    }
    else {
      bVar3 = (pCVar2->fields).isChild == 0;
      bVar10 = 1;
    }
    bVar11 = (pCVar2->fields).hasConsented;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__GoogleMobileAds__Mediation__UnityAds__Api__UnityAds);
      LOCK();
      UNLOCK();
      FUN_?(&StringLiteral_gdpr_consent);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__GoogleMobileAds__Mediation__UnityAds__Api__UnityAds->_1).field_0x1c == 0
       ) {
      FUN_?();
    }
    GoogleMobileAds::Mediation::UnityAds::Api::UnityAds::UnityAds_1_SetConsentMetaData
              (StringLiteral_gdpr_consent,(bVar11 & bVar3) != 0 || bVar10 == 0,(MethodInfo *)0x0);
    pCVar2 = (pMVar1->fields).consentData;
    if (pCVar2 != (ConsentData *)0x0) {
      if ((pCVar2->fields).isEuropean == 0) {
        bVar10 = (pCVar2->fields).isAmerican;
        bVar3 = true;
      }
      else {
        bVar3 = (pCVar2->fields).isChild == 0;
        bVar10 = 1;
      }
      bVar11 = (pCVar2->fields).hasConsented;
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__GoogleMobileAds__Mediation__IronSource__Api__IronSource);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__GoogleMobileAds__Mediation__IronSource__Api__IronSource->_1).
                   field_0x1c == 0) {
        FUN_?();
      }
      GoogleMobileAds::Mediation::IronSource::Api::IronSource::IronSource_1_SetConsent
                ((bVar11 & bVar3) != 0 || bVar10 == 0,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__GoogleMobileAds__Mediation__AppLovin__Api__AppLovin);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pCVar2 = (pMVar1->fields).consentData;
      if (pCVar2 != (ConsentData *)0x0) {
        if ((pCVar2->fields).isEuropean == 0) {
          bVar10 = (pCVar2->fields).isAmerican;
          bVar3 = true;
        }
        else {
          bVar3 = (pCVar2->fields).isChild == 0;
          bVar10 = 1;
        }
        bVar11 = (pCVar2->fields).hasConsented;
        if (*(int *)&(TypeInfo__GoogleMobileAds__Mediation__AppLovin__Api__AppLovin->_1).field_0x1c
            == 0) {
          FUN_?();
        }
        GoogleMobileAds::Mediation::AppLovin::Api::AppLovin::AppLovin_1_SetHasUserConsent
                  ((bVar11 & bVar3) != 0 || bVar10 == 0,(MethodInfo *)0x0);
        pCVar2 = (pMVar1->fields).consentData;
        if (pCVar2 != (ConsentData *)0x0) {
          if ((pCVar2->fields).isEuropean != 0) {
            if ((pCVar2->fields).isChild == 0) {
              bVar10 = 0;
            }
            else {
              bVar10 = (pCVar2->fields).isEuropean;
            }
            if (*(int *)&(TypeInfo__GoogleMobileAds__Mediation__AppLovin__Api__AppLovin->_1).
                         field_0x1c == 0) {
              FUN_?();
            }
            GoogleMobileAds::Mediation::AppLovin::Api::AppLovin::AppLovin_1_SetIsAgeRestrictedUser
                      (bVar10,(MethodInfo *)0x0);
          }
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__GoogleMobileAds__Mediation__AdColony__Api__AdColonyAppOptions);
            LOCK();
            UNLOCK();
            FUN_?(&StringLiteral__1);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pCVar2 = (pMVar1->fields).consentData;
          if (pCVar2 != (ConsentData *)0x0) {
            bVar10 = (pCVar2->fields).isEuropean;
            if (*(int *)&(TypeInfo__GoogleMobileAds__Mediation__AdColony__Api__AdColonyAppOptions->
                         _1).field_0x1c == 0) {
              FUN_?();
            }
            GoogleMobileAds::Mediation::AdColony::Api::AdColonyAppOptions::
            AdColonyAppOptions_1_SetPrivacyFrameworkRequired
                      (AdColonyPrivacyFramework__Enum_GDPR,bVar10,(MethodInfo *)0x0);
            pCVar2 = (pMVar1->fields).consentData;
            if (pCVar2 != (ConsentData *)0x0) {
              if ((pCVar2->fields).isEuropean == 0) {
                bVar3 = true;
                bVar9 = (pCVar2->fields).isAmerican;
              }
              else {
                bVar3 = (pCVar2->fields).isChild == 0;
              }
              if ((((pCVar2->fields).hasConsented & bVar3) != 0) || (bVar9 == 0)) {
                if (*(int *)&(
                             TypeInfo__GoogleMobileAds__Mediation__AdColony__Api__AdColonyAppOptions
                             ->_1).field_0x1c == 0) {
                  FUN_?();
                }
                GoogleMobileAds::Mediation::AdColony::Api::AdColonyAppOptions::
                AdColonyAppOptions_1_SetPrivacyConsentString
                          (AdColonyPrivacyFramework__Enum_GDPR,StringLiteral__1,(MethodInfo *)0x0);
              }
              if (cRam_? == '\0') {
                FUN_?(&
                              TypeInfo__GoogleMobileAds__Mediation__LiftoffMonetize__Api__LiftoffMonetize
                             );
                LOCK();
                UNLOCK();
                FUN_?(&StringLiteral__1);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              pCVar2 = (pMVar1->fields).consentData;
              if (pCVar2 != (ConsentData *)0x0) {
                if ((pCVar2->fields).isEuropean != 0) {
                  bVar9 = (pCVar2->fields).isChild;
                  bVar11 = (pCVar2->fields).hasConsented;
                  if (*(int *)&(
                               TypeInfo__GoogleMobileAds__Mediation__LiftoffMonetize__Api__LiftoffMonetize
                               ->_1).field_0x1c == 0) {
                    FUN_?();
                  }
                  GoogleMobileAds::Mediation::LiftoffMonetize::Api::LiftoffMonetize::
                  LiftoffMonetize_1_UpdateConsentStatus
                            ((uint)((bVar11 & bVar9 == 0) == 0),StringLiteral__1,(MethodInfo *)0x0);
                }
                return;
              }
            }
          }
        }
      }
    }
  }
  FUN_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* String ToString() */

String * Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Mobile::MobileAdManager::
         MobileAdManager_ToString(MobileAdManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_internalAdManagerState_not_initi);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__0_u000A_1_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar1 = StringLiteral__0_u000A_1_;
  if ((this->fields).internalAdManagerState != (MobileAdManager_InternalAdManagerState *)0x0) {
    PStack_2._arg0 = (Object *)0x0;
    PStack_2._arg1 = (Object *)0x0;
    PStack_2._arg2 = (Object *)0x0;
    PStack_2._args = (Object__Array *)0x0;
    mscorlib.dll::System::ParamsArray::ParamsArray__ctor_1
              (&PStack_2,
               (Object *)
               TypeInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager->static_fields->
               consentAndCompliance,(Object *)(this->fields).internalAdManagerState,
               (MethodInfo *)0x0);
    PStack_3._arg0 = PStack_2._arg0;
    PStack_3._arg1 = PStack_2._arg1;
    PStack_3._arg2 = PStack_2._arg2;
    PStack_3._args = PStack_2._args;
    pSVar1 = mscorlib.dll::System::String::String_FormatHelper
                       ((IFormatProvider *)0x0,pSVar1,&PStack_3,(MethodInfo *)0x0);
    return pSVar1;
  }
  return StringLiteral_internalAdManagerState_not_initi;
}


/* Void UpdateControllerUpdate() */

void Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Mobile::MobileAdManager::
     MobileAdManager_UpdateControllerUpdate(MobileAdManager *this,MethodInfo *method)

{
  if (((this->fields).rewardedAdResultHandler != (MobileAdManager_RewardedAdResultHandler *)0x0) &&
     (this_00 = (this->fields).rewardedAdResultHandler, (this_00->fields).IsDone != 0)) {
    MobileAdManager+RewardedAdResultHandler::MobileAdManager_RewardedAdResultHandler_DoCallBack
              (this_00,(MethodInfo *)0x0);
    bVar1 = iRam_? != 0;
    (this->fields).rewardedAdResultHandler = (MobileAdManager_RewardedAdResultHandler *)0x0;
    if (bVar1) {
      uVar2 = (uint)((ulonglong)&(this->fields).rewardedAdResultHandler >> 0xc);
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
  }
  if (((this->fields).interstitialAdResultHandler !=
       (MobileAdManager_InterstitialAdResultHandler *)0x0) &&
     (this_01 = (this->fields).interstitialAdResultHandler, (this_01->fields).IsDone != 0)) {
    MobileAdManager+InterstitialAdResultHandler::
    MobileAdManager_InterstitialAdResultHandler_DoCallBack(this_01,(MethodInfo *)0x0);
    bVar1 = iRam_? != 0;
    (this->fields).interstitialAdResultHandler = (MobileAdManager_InterstitialAdResultHandler *)0x0;
    if (bVar1) {
      uVar2 = (uint)((ulonglong)&(this->fields).interstitialAdResultHandler >> 0xc);
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
  }
  return;
}


/* MobileAdManager(Boolean) */

void Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Mobile::MobileAdManager::
     MobileAdManager__ctor(MobileAdManager *this,bool testing,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  (this->fields).timeoutSuccessDelay = 0x1e;
  TypeInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager->static_fields->testing =
       testing;
  return;
}


/* Boolean get_IsAdRunning() */

bool Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Mobile::MobileAdManager::
     MobileAdManager_get_IsAdRunning(MobileAdManager *this,MethodInfo *method)

{
  if ((this->fields).rewardedAdResultHandler != (MobileAdManager_RewardedAdResultHandler *)0x0) {
    return 1;
  }
  return (this->fields).interstitialAdResultHandler !=
         (MobileAdManager_InterstitialAdResultHandler *)0x0;
}


/* Boolean get_ReadyForInterstitialAdRequest() */

bool Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Mobile::MobileAdManager::
     MobileAdManager_get_ReadyForInterstitialAdRequest(MobileAdManager *this,MethodInfo *method)

{
  pMVar1 = (this->fields).internalAdManagerState;
  pMVar2 = this;
  if (pMVar1 == (MobileAdManager_InternalAdManagerState *)0x0) {
code_?:
    FUN_?(pMVar2,method);
    pcVar3 = (code *)swi(3);
    bVar4 = (*pcVar3)();
    return bVar4;
  }
  if ((pMVar1->fields).isReady != 0) {
    method = (MethodInfo *)(pMVar1->fields).internalStateRewardedAds;
    if (method == (MethodInfo *)0x0) goto code_?;
    if (*(bool *)&method->field7_0x38 == 0) {
      pMVar2 = (MobileAdManager *)(pMVar1->fields).internalStateInterstitial;
      if (pMVar2 == (MobileAdManager *)0x0) goto code_?;
      if (*(char *)&(pMVar2->fields).adUIManager == '\0') {
        if ((MobileAdManager_AdLoadState *)method->name == (MobileAdManager_AdLoadState *)0x0)
        goto code_?;
        if (-1 < (((MobileAdManager_AdLoadState *)method->name)->fields).loadAttempts) {
          pcVar3 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
            uVar5 = func_?(&UNK_?);
            FUN_?(uVar5,0);
            pcVar3 = (code *)swi(3);
            bVar4 = (*pcVar3)();
            return bVar4;
          }
          pcRam_? = pcVar3;
          fVar6 = (float)(*pcRam_?)();
          return (this->fields).interstitialTimeoutAfterRewardedAd <=
                 fVar6 - (this->fields).lastSeenRewardedAd;
        }
      }
    }
  }
  return 0;
}


/* Boolean get_ReadyForRewardedAdRequest() */

bool Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Mobile::MobileAdManager::
     MobileAdManager_get_ReadyForRewardedAdRequest(MobileAdManager *this,MethodInfo *method)

{
  pMVar1 = (this->fields).internalAdManagerState;
  if (pMVar1 != (MobileAdManager_InternalAdManagerState *)0x0) {
    if ((pMVar1->fields).isReady == 0) {
      return 0;
    }
    pMVar2 = (pMVar1->fields).internalStateRewardedAds;
    if (pMVar2 != (MobileAdManager_InternalStateRewardedAd *)0x0) {
      if ((pMVar2->fields).isHandlingRequest != 0) {
        return 0;
      }
      pMVar3 = (pMVar1->fields).internalStateInterstitial;
      if (pMVar3 != (MobileAdManager_InternalStateInterstitial *)0x0) {
        if ((pMVar3->fields).isHandlingRequest != 0) {
          return 0;
        }
        pMVar4 = (((pMVar1->fields).internalStateRewardedAds)->fields).adLoadState;
        if (pMVar4 != (MobileAdManager_AdLoadState *)0x0) {
          return (byte)((uint)(pMVar4->fields).loadAttempts >> 0x1f) ^ 1;
        }
      }
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  bVar6 = (*pcVar5)();
  return bVar6;
}


/* String get_RewardedAdNotAvailableText() */

String * Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Mobile::MobileAdManager::
         MobileAdManager_get_RewardedAdNotAvailableText(MobileAdManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_Please_watch_the_ad_from_start_t);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar1 = StringLiteral_Please_watch_the_ad_from_start_t;
  if (cRam_? == '\0') {
    FUN_?(&::StringLiteral__,0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Text__RegularExpressions__Regex);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral___sPtr___sPtr_____________Ptr_________);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (pSVar1 == (String *)0x0) {
    return (String *)0x0;
  }
  this_01 = (Regex *)FUN_?(TypeInfo__System__Text__RegularExpressions__Regex);
  System.dll::System::Text::RegularExpressions::Regex::Regex__ctor_1
            (this_01,StringLiteral___sPtr___sPtr_____________Ptr_________,(MethodInfo *)0x0);
  if (this_01 != (Regex *)0x0) {
    if (((this_01->fields).roptions & 0x40) == 0) {
      startat = 0;
    }
    else {
      startat = (pSVar1->fields)._stringLength;
    }
    pMVar2 = System.dll::System::Text::RegularExpressions::Regex::Regex_Run
                       (this_01,0,-1,pSVar1,0,(pSVar1->fields)._stringLength,startat,
                        (MethodInfo *)0x0);
    if (pMVar2 != (Match *)0x0) {
      if ((pMVar2->fields)._._capcount != 0) {
        this_02 = (GroupCollection *)
                  (*(pMVar2->klass->vtable).get_Groups.methodPtr)
                            (pMVar2,(pMVar2->klass->vtable).get_Groups.method);
        if (((this_02 == (GroupCollection *)0x0) ||
            (pGVar3 = System.dll::System::Text::RegularExpressions::GroupCollection::
                      GroupCollection_GetGroup(this_02,1,(MethodInfo *)0x0), pGVar3 == (Group *)0x0)
            ) || (pSVar1 = (String *)
                           (*(pGVar3->klass->vtable).ToString.methodPtr)
                                     (pGVar3,(pGVar3->klass->vtable).ToString.method),
                 pSVar1 == (String *)0x0)) goto code_?;
        pSVar1 = mscorlib.dll::System::String::String_Substring_1
                           (pSVar1,1,(pSVar1->fields)._stringLength + -2,(MethodInfo *)0x0);
        pSVar1 = GNU::Gettext::StringEscaping::StringEscaping_FromGettextFormat
                           (pSVar1,(MethodInfo *)0x0);
      }
      if ((pSVar1 != (String *)0x0) && ((pSVar1->fields)._stringLength != 0)) {
        pTVar4 = TM::TM_get_Instance((MethodInfo *)0x0);
        if (pTVar4 == (TM *)0x0) goto code_?;
        if ((pTVar4->fields).catalog != (Catalog *)0x0) {
          pTVar4 = TM::TM_get_Instance((MethodInfo *)0x0);
          if ((pTVar4 == (TM *)0x0) ||
             (this_00 = (pTVar4->fields).catalog, this_00 == (Catalog *)0x0))
          goto code_?;
          this_03 = GNU::Gettext::Catalog::Catalog_FindItem
                              (this_00,pSVar1,::StringLiteral__,(MethodInfo *)0x0);
          if ((this_03 != (CatalogEntry *)0x0) &&
             ((text = GNU::Gettext::CatalogEntry::CatalogEntry_GetTranslation
                                (this_03,0,(MethodInfo *)0x0), text != (String *)0x0 &&
              ((text->fields)._stringLength != 0)))) {
            pSVar1 = GNU::Gettext::StringEscaping::StringEscaping_FromGettextFormat
                               (text,(MethodInfo *)0x0);
            return pSVar1;
          }
        }
      }
      return pSVar1;
    }
  }
code_?:
  FUN_?();
  pcVar5 = (code *)swi(3);
  pSVar1 = (String *)(*pcVar5)();
  return pSVar1;
}


/* TimeSpan get_TimeSinceLastAd() */

TimeSpan Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Mobile::MobileAdManager::
         MobileAdManager_get_TimeSinceLastAd(MobileAdManager *this,MethodInfo *method)

{
  this_00 = (this->fields).internalAdManagerState;
  if (this_00 != (MobileAdManager_InternalAdManagerState *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__System__Math);
      LOCK();
      UNLOCK();
      FUN_?(&TypeInfo__System__TimeSpan);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    TVar1 = MobileAdManager+InternalAdManagerState::
            MobileAdManager_InternalAdManagerState_get_TimeSinceLastInterstitial
                      (this_00,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__System__TimeSpan->_1).field_0x1c == 0) {
      FUN_?();
    }
    TVar2 = MobileAdManager+InternalAdManagerState::
            MobileAdManager_InternalAdManagerState_get_TimeSinceLastRewarded
                      (this_00,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__System__Math->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (TVar1._ticks <= TVar2._ticks) {
      TVar2 = TVar1;
    }
    return (TimeSpan)TVar2._ticks;
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  TVar1._ticks = (*pcVar3)();
  return (TimeSpan)TVar1._ticks;
}


/* TimeSpan get_TimeSinceLastInterstitial() */

TimeSpan Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Mobile::MobileAdManager::
         MobileAdManager_get_TimeSinceLastInterstitial(MobileAdManager *this,MethodInfo *method)

{
  pMVar1 = (this->fields).internalAdManagerState;
  if (pMVar1 == (MobileAdManager_InternalAdManagerState *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    TVar3._ticks = (*pcVar2)();
    return (TimeSpan)TVar3._ticks;
  }
  pMVar4 = (pMVar1->fields).internalStateInterstitial;
  if (pMVar4 != (MobileAdManager_InternalStateInterstitial *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__System__DateTime);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__System__DateTime->_1).field_0x1c == 0) {
      FUN_?();
    }
    DVar5 = mscorlib.dll::System::DateTime::DateTime_get_Now((MethodInfo *)0x0);
    uVar6 = (pMVar4->fields).prevInterstitialTime._dateData;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__System__DateTime,uVar6,0);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__System__DateTime->_1).field_0x1c == 0) {
      FUN_?();
    }
    return (TimeSpan)((DVar5._dateData & 0x3fffffffffffffff) - (uVar6 & 0x3fffffffffffffff));
  }
  FUN_?(pMVar1,0);
  pcVar2 = (code *)swi(3);
  TVar3._ticks = (*pcVar2)();
  return (TimeSpan)TVar3._ticks;
}


/* TimeSpan get_TimeSinceLastRewarded() */

TimeSpan Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Mobile::MobileAdManager::
         MobileAdManager_get_TimeSinceLastRewarded(MobileAdManager *this,MethodInfo *method)

{
  pMVar1 = (this->fields).internalAdManagerState;
  if (pMVar1 == (MobileAdManager_InternalAdManagerState *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    TVar3._ticks = (*pcVar2)();
    return (TimeSpan)TVar3._ticks;
  }
  pMVar4 = (pMVar1->fields).internalStateRewardedAds;
  if (pMVar4 != (MobileAdManager_InternalStateRewardedAd *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__System__DateTime);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__System__DateTime->_1).field_0x1c == 0) {
      FUN_?();
    }
    DVar5 = mscorlib.dll::System::DateTime::DateTime_get_Now((MethodInfo *)0x0);
    uVar6 = (pMVar4->fields).prevInterstitialTime._dateData;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__System__DateTime,uVar6,0);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__System__DateTime->_1).field_0x1c == 0) {
      FUN_?();
    }
    return (TimeSpan)((DVar5._dateData & 0x3fffffffffffffff) - (uVar6 & 0x3fffffffffffffff));
  }
  FUN_?(pMVar1,0);
  pcVar2 = (code *)swi(3);
  TVar3._ticks = (*pcVar2)();
  return (TimeSpan)TVar3._ticks;
}

