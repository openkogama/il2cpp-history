
/* Void Continue() */

void Assembly-CSharp.dll::TouristPromotionCrey::TouristPromotionCrey_Continue
               (TouristPromotionCrey *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
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
                  MethodInfo__TouristPromotionCrey____c___Continue_b__2_0_ITouristAdController__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__TouristPromotionCrey____c);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_TouristPromotion_CreyGames_Conti);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_TouristPromotion_CreyGames_Conti);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields)._.promotionShowsAd == 0) {
    if (*(int *)&(TypeInfo__StatHatWrapper->_1).field_0x1c == 0) {
      FUN_?();
    }
    StatHatWrapper::StatHatWrapper_Count
              (StringLiteral_TouristPromotion_CreyGames_Conti,1,(MethodInfo *)0x0);
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(this->klass->vtable).OnContinueClicked.methodPtr)
              (this,(this->klass->vtable).OnContinueClicked.method);
    return;
  }
  if (*(int *)&(TypeInfo__StatHatWrapper->_1).field_0x1c == 0) {
    FUN_?();
  }
  StatHatWrapper::StatHatWrapper_Count
            (StringLiteral_TouristPromotion_CreyGames_Conti,1,(MethodInfo *)0x0);
  pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__TouristPromotionCrey____c->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__TouristPromotionCrey____c);
  }
  this_01 = TypeInfo__TouristPromotionCrey____c->static_fields->__9__2_0;
  if (this_01 == (ExecuteEvents_EventFunction_1_ITouristAdController_ *)0x0) {
    if (*(int *)&(TypeInfo__TouristPromotionCrey____c->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__TouristPromotionCrey____c);
    }
    object = TypeInfo__TouristPromotionCrey____c->static_fields->__9;
    this_01 = (ExecuteEvents_EventFunction_1_ITouristAdController_ *)
              FUN_?(
                           TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<ITouristAdController>
                           );
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
    ExecuteEvents_EventFunction_1_System_Object___ctor
              ((ExecuteEvents_EventFunction_1_System_Object_ *)this_01,(Object *)object,
               MethodInfo__TouristPromotionCrey____c___Continue_b__2_0_ITouristAdController__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    TypeInfo__TouristPromotionCrey____c->static_fields->__9__2_0 = this_01;
    if (iRam_? != 0) {
      uVar2 = (uint)((ulonglong)&TypeInfo__TouristPromotionCrey____c->static_fields->__9__2_0 >>
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


/* Void CreyRedirect() */

void Assembly-CSharp.dll::TouristPromotionCrey::TouristPromotionCrey_CreyRedirect
               (TouristPromotionCrey *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__StatHatWrapper);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_TouristPromotion_CreyGames_Redir);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__StatHatWrapper->_1).field_0x1c == 0) {
    FUN_?();
  }
  StatHatWrapper::StatHatWrapper_Count
            (StringLiteral_TouristPromotion_CreyGames_Redir,1,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (((pMVar1 != (MVGameControllerBase *)0x0) &&
      (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
     ((pMVar2->fields)._CreySettings_k__BackingField != (CreySettings *)0x0)) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if (((pMVar1 != (MVGameControllerBase *)0x0) &&
        (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
       (pCVar3 = (pMVar2->fields)._CreySettings_k__BackingField, pCVar3 != (CreySettings *)0x0)) {
      pSVar4 = (pCVar3->fields)._TouristPromotionCreyURL_k__BackingField;
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

void Assembly-CSharp.dll::TouristPromotionCrey::TouristPromotionCrey_Signup
               (TouristPromotionCrey *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__StatHatWrapper);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_TouristPromotion_CreyGames_Signu);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__StatHatWrapper->_1).field_0x1c == 0) {
    FUN_?();
  }
  StatHatWrapper::StatHatWrapper_Count
            (StringLiteral_TouristPromotion_CreyGames_Signu,1,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (((pMVar1 != (MVGameControllerBase *)0x0) &&
      (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
     ((pMVar2->fields)._CreySettings_k__BackingField != (CreySettings *)0x0)) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if (((pMVar1 != (MVGameControllerBase *)0x0) &&
        (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
       (pCVar3 = (pMVar2->fields)._CreySettings_k__BackingField, pCVar3 != (CreySettings *)0x0)) {
      pSVar4 = (pCVar3->fields)._TouristPromotionCreyURL_k__BackingField;
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

void Assembly-CSharp.dll::TouristPromotionCrey::TouristPromotionCrey_Start
               (TouristPromotionCrey *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    PStack_1._args = (Object__Array *)&UNK_?;
    FUN_?(&TypeInfo__StatHatWrapper);
    LOCK();
    UNLOCK();
    PStack_1._args = (Object__Array *)&UNK_?;
    FUN_?(&StringLiteral_TouristPromotion_CreyGames);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).adContinueButton;
  if (this_00 == (GameObject *)0x0) {
    PStack_1._args = (Object__Array *)&UNK_?;
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  PStack_1._args = (Object__Array *)&UNK_?;
  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
            (this_00,(this->fields)._.promotionShowsAd,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__StatHatWrapper->_1).field_0x1c == 0) {
    PStack_1._args = (Object__Array *)&UNK_?;
    FUN_?();
  }
  pSVar3 = StringLiteral_TouristPromotion_CreyGames;
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
    pSVar4 = StringLiteral__0__u__1_;
    PStack_5._arg0 = (Object *)0x0;
    PStack_5._arg1 = (Object *)0x0;
    PStack_5._arg2 = (Object *)0x0;
    PStack_5._args = (Object__Array *)0x0;
    mscorlib.dll::System::ParamsArray::ParamsArray__ctor_1
              (&PStack_5,
               (Object *)(TypeInfo__StatHatWrapper->static_fields->statHatConfig).regionKey,
               (Object *)pSVar3,(MethodInfo *)0x0);
    PStack_1._arg0 = PStack_5._arg0;
    PStack_1._arg1 = PStack_5._arg1;
    PStack_1._arg2 = PStack_5._arg2;
    PStack_1._args = PStack_5._args;
    pSVar6 = mscorlib.dll::System::String::String_FormatHelper
                       ((IFormatProvider *)0x0,pSVar4,&PStack_1,(MethodInfo *)0x0);
    pSVar4 = StringLiteral__0__u_standalone__1_;
    PStack_1._arg0 = (Object *)0x0;
    PStack_1._arg1 = (Object *)0x0;
    PStack_1._arg2 = (Object *)0x0;
    PStack_1._args = (Object__Array *)0x0;
    mscorlib.dll::System::ParamsArray::ParamsArray__ctor_1
              (&PStack_1,
               (Object *)(TypeInfo__StatHatWrapper->static_fields->statHatConfig).regionKey,
               (Object *)pSVar3,(MethodInfo *)0x0);
    PStack_7._arg0 = PStack_1._arg0;
    PStack_7._arg1 = PStack_1._arg1;
    PStack_7._arg2 = PStack_1._arg2;
    PStack_7._args = PStack_1._args;
    pSVar4 = mscorlib.dll::System::String::String_FormatHelper
                       ((IFormatProvider *)0x0,pSVar4,&PStack_7,(MethodInfo *)0x0);
    StatHatWrapper::StatHatWrapper_Count_1(pSVar6,pSVar4,1,(MethodInfo *)0x0);
    if (TypeInfo__StatHatWrapper->static_fields->isFirstTimeSession != 0) {
      if (*(int *)&(TypeInfo__StatHatWrapper->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__StatHatWrapper);
      }
      pSVar4 = StringLiteral__0__u_fts__1_;
      PStack_1._arg0 = (Object *)0x0;
      PStack_1._arg1 = (Object *)0x0;
      PStack_1._arg2 = (Object *)0x0;
      PStack_1._args = (Object__Array *)0x0;
      mscorlib.dll::System::ParamsArray::ParamsArray__ctor_1
                (&PStack_1,
                 (Object *)(TypeInfo__StatHatWrapper->static_fields->statHatConfig).regionKey,
                 (Object *)pSVar3,(MethodInfo *)0x0);
      PStack_7._arg0 = PStack_1._arg0;
      PStack_7._arg1 = PStack_1._arg1;
      PStack_7._arg2 = PStack_1._arg2;
      PStack_7._args = PStack_1._args;
      pSVar6 = mscorlib.dll::System::String::String_FormatHelper
                         ((IFormatProvider *)0x0,pSVar4,&PStack_7,(MethodInfo *)0x0);
      pSVar4 = StringLiteral__0__u_fts_standalone__1_;
      PStack_5._arg0 = (Object *)0x0;
      PStack_5._arg1 = (Object *)0x0;
      PStack_5._arg2 = (Object *)0x0;
      PStack_5._args = (Object__Array *)0x0;
      mscorlib.dll::System::ParamsArray::ParamsArray__ctor_1
                (&PStack_5,
                 (Object *)(TypeInfo__StatHatWrapper->static_fields->statHatConfig).regionKey,
                 (Object *)pSVar3,(MethodInfo *)0x0);
      PStack_7._arg0 = PStack_5._arg0;
      PStack_7._arg1 = PStack_5._arg1;
      PStack_7._arg2 = PStack_5._arg2;
      PStack_7._args = PStack_5._args;
      pSVar3 = mscorlib.dll::System::String::String_FormatHelper
                         ((IFormatProvider *)0x0,pSVar4,&PStack_7,(MethodInfo *)0x0);
      StatHatWrapper::StatHatWrapper_Count_1(pSVar6,pSVar3,1,(MethodInfo *)0x0);
    }
  }
  return;
}

