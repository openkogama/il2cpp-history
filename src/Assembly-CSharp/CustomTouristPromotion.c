
/* Void Continue() */

void Assembly-CSharp.dll::CustomTouristPromotion::CustomTouristPromotion_Continue
               (CustomTouristPromotion *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<ITouristAdController>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<ITouristAdController>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<ITouristAdController>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__StatHatWrapper);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__CustomTouristPromotion____c___Continue_b__4_0_ITouristAdController__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CustomTouristPromotion____c);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Custom_promotion__Continue___wit);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_TouristPromotion_Custom_Continue);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_TouristPromotion_Custom_Continue);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Custom_promotion__Continue___wit);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields)._.promotionShowsAd == 0) {
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
              ((Object *)StringLiteral_Custom_promotion__Continue___wit,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__StatHatWrapper->_1).field_0x1c == 0) {
      FUN_?();
    }
    StatHatWrapper::StatHatWrapper_Count
              (StringLiteral_TouristPromotion_Custom_Continue,1,(MethodInfo *)0x0);
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(this->klass->vtable).OnContinueClicked.methodPtr)
              (this,(this->klass->vtable).OnContinueClicked.method);
    return;
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
            ((Object *)StringLiteral_Custom_promotion__Continue___wit,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__StatHatWrapper->_1).field_0x1c == 0) {
    FUN_?();
  }
  StatHatWrapper::StatHatWrapper_Count
            (StringLiteral_TouristPromotion_Custom_Continue,1,(MethodInfo *)0x0);
  pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__CustomTouristPromotion____c->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__CustomTouristPromotion____c);
  }
  this_01 = TypeInfo__CustomTouristPromotion____c->static_fields->__9__4_0;
  if (this_01 == (ExecuteEvents_EventFunction_1_ITouristAdController_ *)0x0) {
    if (*(int *)&(TypeInfo__CustomTouristPromotion____c->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__CustomTouristPromotion____c);
    }
    object = TypeInfo__CustomTouristPromotion____c->static_fields->__9;
    this_01 = (ExecuteEvents_EventFunction_1_ITouristAdController_ *)
              FUN_?(
                           TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<ITouristAdController>
                           );
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
    ExecuteEvents_EventFunction_1_System_Object___ctor
              ((ExecuteEvents_EventFunction_1_System_Object_ *)this_01,(Object *)object,
               MethodInfo__CustomTouristPromotion____c___Continue_b__4_0_ITouristAdController__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    TypeInfo__CustomTouristPromotion____c->static_fields->__9__4_0 = this_01;
    if (iRam_? != 0) {
      uVar2 = (uint)((ulonglong)&TypeInfo__CustomTouristPromotion____c->static_fields->__9__4_0 >>
                     0xc);
      puVar3 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar4 = *puVar3;
        LOCK();
        uVar5 = *puVar3;
        if (uVar4 == uVar5) {
          *puVar3 = uVar4 | 1L << (uVar2 & 0x3f);
        }
        UNLOCK();
      } while (uVar4 != uVar5);
    }
  }
  if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
    FUN_?();
  }
  pMVar6 = 
  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<ITouristAdController>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<ITouristAdController>_
  ;
  if ((
      UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<ITouristAdController>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<ITouristAdController>_
      ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    if ((pMVar6->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
      FUN_?(pMVar6);
    }
  }
  if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_GetEventChain
            (pGVar1,(IList_1_UnityEngine_Transform_ *)
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                    s_InternalTransformList,(MethodInfo *)0x0);
  pLVar7 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
           s_InternalTransformList;
  if (pLVar7 != (List_1_UnityEngine_Transform_ *)0x0) {
    lVar8 = (longlong)(pLVar7->fields)._size;
    uVar2 = 0;
    if (0 < lVar8) {
      lVar9 = 0;
      lVar10 = 0x20;
      do {
        if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
          FUN_?();
        }
        pLVar7 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                 s_InternalTransformList;
        if (pLVar7 == (List_1_UnityEngine_Transform_ *)0x0) goto code_?;
        if ((uint)(pLVar7->fields)._size <= uVar2) {
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                    ((MethodInfo *)0x0);
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        pTVar12 = (pLVar7->fields)._items;
        if (pTVar12 == (Transform__Array *)0x0) goto code_?;
        if ((uint)pTVar12->max_length <= uVar2) {
          FUN_?();
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        this_00 = *(Component **)((longlong)pTVar12->vector + lVar10 + -0x20);
        if (this_00 == (Component *)0x0) goto code_?;
        pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           (this_00,(MethodInfo *)0x0);
        bVar13 = UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                ExecuteEvents_Execute_18
                          (pGVar1,(BaseEventData *)0x0,
                           (ExecuteEvents_EventFunction_1_System_Object_ *)this_01,
                           (pMVar6->field7_0x38).rgctx_data[1].method);
        if (bVar13 != 0) {
          UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                    (this_00,(MethodInfo *)0x0);
          return;
        }
        uVar2 = uVar2 + 1;
        lVar9 = lVar9 + 1;
        lVar10 = lVar10 + 8;
      } while (lVar9 < lVar8);
    }
    return;
  }
code_?:
  FUN_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void CustomRedirect() */

void Assembly-CSharp.dll::CustomTouristPromotion::CustomTouristPromotion_CustomRedirect
               (CustomTouristPromotion *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__StatHatWrapper);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_TouristPromotion_Custom_Redirect);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Custom_promotion__CustomRedirect);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
            ((Object *)StringLiteral_Custom_promotion__CustomRedirect,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__StatHatWrapper->_1).field_0x1c == 0) {
    FUN_?();
  }
  StatHatWrapper::StatHatWrapper_Count
            (StringLiteral_TouristPromotion_Custom_Redirect,1,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (((pMVar1 != (MVGameControllerBase *)0x0) &&
      (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
     ((pMVar2->fields)._CustomTouristPromotionSettings_k__BackingField !=
      (CustomTouristPromotionSettings *)0x0)) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if (((pMVar1 != (MVGameControllerBase *)0x0) &&
        (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
       (pCVar3 = (pMVar2->fields)._CustomTouristPromotionSettings_k__BackingField,
       pCVar3 != (CustomTouristPromotionSettings *)0x0)) {
      pSVar4 = (pCVar3->fields)._URL_k__BackingField;
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__BrowserComm);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__BrowserComm->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Application);
        LOCK();
        UNLOCK();
        FUN_?(&TypeInfo__BrowserComm);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__BrowserComm->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__BrowserComm);
      }
      if (TypeInfo__BrowserComm->static_fields->enableBrowserRequest == 0) {
        return;
      }
      if (*(int *)&(TypeInfo__UnityEngine__Application->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Application,0);
        LOCK();
        UNLOCK();
        FUN_?(&MethodInfo__System__ReadOnlySpan<wchar_t>__GetPinnableReference__);
        LOCK();
        UNLOCK();
        FUN_?(&MethodInfo__System__ReadOnlySpan<wchar_t>__get_Length__);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      apuStackX_8[0] = (uint16_t *)0x0;
      puStack_5 = (uint16_t *)0x0;
      uStack_6 = 0;
      uStack_7 = 0;
      ppuStack_8 = apuStackX_8;
      if (pSVar4 != (String *)0x0) {
        if ((pSVar4->fields)._stringLength == 0) {
          puStack_5 = (uint16_t *)0x1;
          uStack_6 = 0;
        }
        else {
          if (cRam_? == '\0') {
            FUN_?(&
                          MethodInfo__System__ReadOnlySpan<wchar_t>__ReadOnlySpan_System__Char___int_
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          iVar9 = (pSVar4->fields)._stringLength;
          apuStackX_8[0] = &(pSVar4->fields)._firstChar;
          if (iVar9 == 0) {
            apuStackX_8[0] = (uint16_t *)0x0;
          }
          uStack_6 = CONCAT44(uStack_6._4_4_,iVar9);
          puStack_5 = apuStackX_8[0];
        }
      }
      if (*(int *)&(TypeInfo__UnityEngine__Application->_1).field_0x1c == 0) {
        FUN_?();
      }
      pcVar10 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar10 = (code *)FUN_?(&UNK_?), pcVar10 == (code *)0x0)) {
        uVar11 = func_?(&UNK_?);
        FUN_?(uVar11,0);
        FUN_?();
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      pcRam_? = pcVar10;
      (*pcRam_?)(&puStack_5);
      return;
    }
  }
  FUN_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void Signup() */

void Assembly-CSharp.dll::CustomTouristPromotion::CustomTouristPromotion_Signup
               (CustomTouristPromotion *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__StatHatWrapper);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_TouristPromotion_Custom_Signup);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Custom_promotion__Signup__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
            ((Object *)StringLiteral_Custom_promotion__Signup__,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__StatHatWrapper->_1).field_0x1c == 0) {
    FUN_?();
  }
  StatHatWrapper::StatHatWrapper_Count
            (StringLiteral_TouristPromotion_Custom_Signup,1,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (((pMVar1 != (MVGameControllerBase *)0x0) &&
      (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
     ((pMVar2->fields)._CustomTouristPromotionSettings_k__BackingField !=
      (CustomTouristPromotionSettings *)0x0)) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if (((pMVar1 != (MVGameControllerBase *)0x0) &&
        (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
       (pCVar3 = (pMVar2->fields)._CustomTouristPromotionSettings_k__BackingField,
       pCVar3 != (CustomTouristPromotionSettings *)0x0)) {
      pSVar4 = (pCVar3->fields)._URL_k__BackingField;
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__BrowserComm);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__BrowserComm->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Application);
        LOCK();
        UNLOCK();
        FUN_?(&TypeInfo__BrowserComm);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__BrowserComm->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__BrowserComm);
      }
      if (TypeInfo__BrowserComm->static_fields->enableBrowserRequest == 0) {
        return;
      }
      if (*(int *)&(TypeInfo__UnityEngine__Application->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Application,0);
        LOCK();
        UNLOCK();
        FUN_?(&MethodInfo__System__ReadOnlySpan<wchar_t>__GetPinnableReference__);
        LOCK();
        UNLOCK();
        FUN_?(&MethodInfo__System__ReadOnlySpan<wchar_t>__get_Length__);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      apuStackX_8[0] = (uint16_t *)0x0;
      puStack_5 = (uint16_t *)0x0;
      uStack_6 = 0;
      uStack_7 = 0;
      ppuStack_8 = apuStackX_8;
      if (pSVar4 != (String *)0x0) {
        if ((pSVar4->fields)._stringLength == 0) {
          puStack_5 = (uint16_t *)0x1;
          uStack_6 = 0;
        }
        else {
          if (cRam_? == '\0') {
            FUN_?(&
                          MethodInfo__System__ReadOnlySpan<wchar_t>__ReadOnlySpan_System__Char___int_
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          iVar9 = (pSVar4->fields)._stringLength;
          apuStackX_8[0] = &(pSVar4->fields)._firstChar;
          if (iVar9 == 0) {
            apuStackX_8[0] = (uint16_t *)0x0;
          }
          uStack_6 = CONCAT44(uStack_6._4_4_,iVar9);
          puStack_5 = apuStackX_8[0];
        }
      }
      if (*(int *)&(TypeInfo__UnityEngine__Application->_1).field_0x1c == 0) {
        FUN_?();
      }
      pcVar10 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar10 = (code *)FUN_?(&UNK_?), pcVar10 == (code *)0x0)) {
        uVar11 = func_?(&UNK_?);
        FUN_?(uVar11,0);
        FUN_?();
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      pcRam_? = pcVar10;
      (*pcRam_?)(&puStack_5);
      return;
    }
  }
  FUN_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void Start() */

void Assembly-CSharp.dll::CustomTouristPromotion::CustomTouristPromotion_Start
               (CustomTouristPromotion *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    PStackY_48._arg1 = (Object *)&UNK_?;
    FUN_?(&TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
    LOCK();
    UNLOCK();
    PStackY_48._arg1 = (Object *)&UNK_?;
    FUN_?(&TypeInfo__AsyncWWWManager);
    LOCK();
    UNLOCK();
    PStackY_48._arg1 = (Object *)&UNK_?;
    FUN_?(&TypeInfo__CachedGetRequest);
    LOCK();
    UNLOCK();
    PStackY_48._arg1 = (Object *)&UNK_?;
    FUN_?(&
                  MethodInfo__CustomTouristPromotion__StreamingAssetCallback_UnityEngine__Networking__UnityWebRequest_
                 );
    LOCK();
    UNLOCK();
    PStackY_48._arg1 = (Object *)&UNK_?;
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    PStackY_48._arg1 = (Object *)&UNK_?;
    FUN_?(&TypeInfo__StatHatWrapper);
    LOCK();
    UNLOCK();
    PStackY_48._arg1 = (Object *)&UNK_?;
    FUN_?(&TypeInfo__MV__Common__Urls);
    LOCK();
    UNLOCK();
    PStackY_48._arg1 = (Object *)&UNK_?;
    FUN_?(&StringLiteral_TouristPromotion_Custom);
    LOCK();
    UNLOCK();
    PStackY_48._arg1 = (Object *)&UNK_?;
    FUN_?(&StringLiteral_Custom_promotion__Start__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    PStackY_48._arg1 = (Object *)&UNK_?;
    FUN_?();
  }
  PStackY_48._arg1 = (Object *)&UNK_?;
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
            ((Object *)StringLiteral_Custom_promotion__Start__,(MethodInfo *)0x0);
  this_00 = (this->fields).adContinueButton;
  if (this_00 != (GameObject *)0x0) {
    PStackY_48._arg1 = (Object *)&UNK_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (this_00,(this->fields)._.promotionShowsAd,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__MV__Common__Urls->_1).field_0x1c == 0) {
      PStackY_48._arg1 = (Object *)&UNK_?;
      FUN_?();
    }
    PStackY_48._arg1 = (Object *)&UNK_?;
    pSVar1 = MVCommon.dll::MV::Common::Urls::Urls_get_StreamingAssets((MethodInfo *)0x0);
    if (cRam_? == '\0') {
      PStackY_48._arg1 = (Object *)&UNK_?;
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar2 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if (((pMVar2 != (MVGameControllerBase *)0x0) &&
        (pMVar3 = (pMVar2->fields).game, pMVar3 != (MVNetworkGame *)0x0)) &&
       (pCVar4 = (pMVar3->fields)._CustomTouristPromotionSettings_k__BackingField,
       pCVar4 != (CustomTouristPromotionSettings *)0x0)) {
      PStackY_48._arg1 = (Object *)&UNK_?;
      pSVar1 = mscorlib.dll::System::String::String_Concat_4
                         (pSVar1,(pCVar4->fields)._AssetURL_k__BackingField,(MethodInfo *)0x0);
      PStackY_48._arg1 = (Object *)&UNK_?;
      this_01 = (UnityAction_1_System_Object_ *)
                FUN_?(TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
      PStackY_48._arg1 = (Object *)&UNK_?;
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
      UnityAction_1_System_Object___ctor
                (this_01,(Object *)this,
                 MethodInfo__CustomTouristPromotion__StreamingAssetCallback_UnityEngine__Networking__UnityWebRequest_
                 ,(MethodInfo *)0x0);
      PStackY_48._arg1 = (Object *)&UNK_?;
      this_02 = (AsyncWebRequest *)FUN_?(TypeInfo__CachedGetRequest);
      PStackY_48._arg1 = (Object *)&UNK_?;
      AsyncWebRequest::AsyncWebRequest__ctor
                (this_02,pSVar1,(Action_1_UnityEngine_Networking_UnityWebRequest_ *)this_01,
                 WWWRequestPriority__Enum_WaitUntilSyncronizingIsDone,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__AsyncWWWManager->_1).field_0x1c == 0) {
        PStackY_48._arg1 = (Object *)&UNK_?;
        FUN_?();
      }
      PStackY_48._arg1 = (Object *)&UNK_?;
      AsyncWWWManager::AsyncWWWManager_WWWRequest(this_02,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__StatHatWrapper->_1).field_0x1c == 0) {
        PStackY_48._arg1 = (Object *)&UNK_?;
        FUN_?();
      }
      pSVar1 = StringLiteral_TouristPromotion_Custom;
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
        pSVar5 = StringLiteral__0__u__1_;
        PStackY_68._arg0 = (Object *)0x0;
        PStackY_68._arg1 = (Object *)0x0;
        PStackY_68._arg2 = (Object *)0x0;
        PStackY_68._args = (Object__Array *)0x0;
        mscorlib.dll::System::ParamsArray::ParamsArray__ctor_1
                  (&PStackY_68,
                   (Object *)(TypeInfo__StatHatWrapper->static_fields->statHatConfig).regionKey,
                   (Object *)pSVar1,(MethodInfo *)0x0);
        PStackY_48._arg0 = PStackY_68._arg0;
        PStackY_48._arg1 = PStackY_68._arg1;
        PStackY_48._arg2 = PStackY_68._arg2;
        PStackY_48._args = PStackY_68._args;
        pSVar6 = mscorlib.dll::System::String::String_FormatHelper
                           ((IFormatProvider *)0x0,pSVar5,&PStackY_48,(MethodInfo *)0x0);
        pSVar5 = StringLiteral__0__u_standalone__1_;
        PStackY_48._arg0 = (Object *)0x0;
        PStackY_48._arg1 = (Object *)0x0;
        PStackY_48._arg2 = (Object *)0x0;
        PStackY_48._args = (Object__Array *)0x0;
        mscorlib.dll::System::ParamsArray::ParamsArray__ctor_1
                  (&PStackY_48,
                   (Object *)(TypeInfo__StatHatWrapper->static_fields->statHatConfig).regionKey,
                   (Object *)pSVar1,(MethodInfo *)0x0);
        pOStackY_28 = PStackY_48._arg0;
        pOStackY_20 = PStackY_48._arg1;
        pSVar5 = mscorlib.dll::System::String::String_FormatHelper
                           ((IFormatProvider *)0x0,pSVar5,(ParamsArray *)&pOStackY_28,
                            (MethodInfo *)0x0);
        StatHatWrapper::StatHatWrapper_Count_1(pSVar6,pSVar5,1,(MethodInfo *)0x0);
        if (TypeInfo__StatHatWrapper->static_fields->isFirstTimeSession != 0) {
          if (*(int *)&(TypeInfo__StatHatWrapper->_1).field_0x1c == 0) {
            FUN_?(TypeInfo__StatHatWrapper);
          }
          pSVar5 = StringLiteral__0__u_fts__1_;
          PStackY_48._arg0 = (Object *)0x0;
          PStackY_48._arg1 = (Object *)0x0;
          PStackY_48._arg2 = (Object *)0x0;
          PStackY_48._args = (Object__Array *)0x0;
          mscorlib.dll::System::ParamsArray::ParamsArray__ctor_1
                    (&PStackY_48,
                     (Object *)(TypeInfo__StatHatWrapper->static_fields->statHatConfig).regionKey,
                     (Object *)pSVar1,(MethodInfo *)0x0);
          pOStackY_28 = PStackY_48._arg0;
          pOStackY_20 = PStackY_48._arg1;
          pSVar6 = mscorlib.dll::System::String::String_FormatHelper
                             ((IFormatProvider *)0x0,pSVar5,(ParamsArray *)&pOStackY_28,
                              (MethodInfo *)0x0);
          pSVar5 = StringLiteral__0__u_fts_standalone__1_;
          PStackY_68._arg0 = (Object *)0x0;
          PStackY_68._arg1 = (Object *)0x0;
          PStackY_68._arg2 = (Object *)0x0;
          PStackY_68._args = (Object__Array *)0x0;
          mscorlib.dll::System::ParamsArray::ParamsArray__ctor_1
                    (&PStackY_68,
                     (Object *)(TypeInfo__StatHatWrapper->static_fields->statHatConfig).regionKey,
                     (Object *)pSVar1,(MethodInfo *)0x0);
          pOStackY_28 = PStackY_68._arg0;
          pOStackY_20 = PStackY_68._arg1;
          pSVar1 = mscorlib.dll::System::String::String_FormatHelper
                             ((IFormatProvider *)0x0,pSVar5,(ParamsArray *)&pOStackY_28,
                              (MethodInfo *)0x0);
          StatHatWrapper::StatHatWrapper_Count_1(pSVar6,pSVar1,1,(MethodInfo *)0x0);
        }
      }
      return;
    }
  }
  PStackY_48._arg1 = (Object *)&UNK_?;
  FUN_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void StreamingAssetCallback(UnityWebRequest) */

void Assembly-CSharp.dll::CustomTouristPromotion::CustomTouristPromotion_StreamingAssetCallback
               (CustomTouristPromotion *this,UnityWebRequest *www,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Texture2D);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_PNG_get_request_callback_failed_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (www == (UnityWebRequest *)0x0) {
    return;
  }
  pvVar1 = (www->fields).m_Ptr;
  if (pvVar1 != (void *)0x0) {
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
    iVar4 = (*pcRam_?)(pvVar1);
    if (iVar4 != 2) {
      pvVar1 = (www->fields).m_Ptr;
      if (pvVar1 == (void *)0x0) goto DAT_?;
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
      iVar4 = (*pcRam_?)(pvVar1);
      if (iVar4 != 3) {
        pDVar5 = (www->fields).m_DownloadHandler;
        if (pDVar5 != (DownloadHandler *)0x0) {
          data = (Byte__Array *)
                 (*(pDVar5->klass->vtable).GetData.methodPtr)
                           (pDVar5,(pDVar5->klass->vtable).GetData.method);
          this_01 = (Texture2D *)FUN_?(TypeInfo__UnityEngine__Texture2D);
          UnityEngine.CoreModule.dll::UnityEngine::Texture2D::Texture2D__ctor_3
                    (this_01,2,2,(MethodInfo *)0x0);
          UnityEngine.ImageConversionModule.dll::UnityEngine::ImageConversion::
          ImageConversion_LoadImage_1(this_01,data,(MethodInfo *)0x0);
          this_00 = (this->fields).graphics;
          if (this_01 != (Texture2D *)0x0) {
            iVar4 = (*(this_01->klass->vtable).get_width.methodPtr)
                              (this_01,(this_01->klass->vtable).get_width.method);
            fVar6 = _UNK_?;
            RStack_7.m_XMin = 0.0;
            RStack_7.m_YMin = 0.0;
            RStack_7.m_Width = (float)iVar4;
            iVar4 = (*(this_01->klass->vtable).get_height.methodPtr)
                              (this_01,(this_01->klass->vtable).get_height.method);
            pivot.y = fVar6;
            pivot.x = fVar6;
            RStack_7.m_Height = (float)iVar4;
            value = UnityEngine.CoreModule.dll::UnityEngine::Sprite::Sprite_Create_6
                              (this_01,&RStack_7,pivot,(MethodInfo *)0x0);
            if (this_00 != (Image *)0x0) {
              UnityEngine.UI.dll::UnityEngine::UI::Image::Image_set_sprite
                        (this_00,value,(MethodInfo *)0x0);
              return;
            }
          }
        }
        FUN_?();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    pSVar8 = UnityEngine.UnityWebRequestModule.dll::UnityEngine::Networking::UnityWebRequest::
             UnityWebRequest_get_error(www,(MethodInfo *)0x0);
    pSVar8 = mscorlib.dll::System::String::String_Concat_4
                       (StringLiteral_PNG_get_request_callback_failed_,pSVar8,(MethodInfo *)0x0);
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
    pIVar9 = TypeInfo__UnityEngine__Debug->static_fields->s_Logger;
    if (pIVar9 != (ILogger_1 *)0x0) {
      pSStack_10 = pSVar8;
      FUN_?(6,TypeInfo__UnityEngine__ILogger,pIVar9,2);
      return;
    }
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
DAT_?:
  UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
  ThrowHelper_2_ThrowNullReferenceException((Object *)www,(MethodInfo *)0x0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

