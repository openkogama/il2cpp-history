
/* Void OnClick() */

void Assembly-CSharp.dll::TouristSignupClickable::TouristSignupClickable_OnClick
               (TouristSignupClickable *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__TouristSignupClickable____c__DisplayClass4_0___OnClick_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__TouristSignupClickable____c__DisplayClass4_0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pEVar1 = (this->fields).embeddedPlayerConfig;
  if (pEVar1 != (EmbeddedPlayerConfig *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Debug);
      LOCK();
      UNLOCK();
      FUN_?(&StringLiteral_Embedded_site_data_not_initializ);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if ((pEVar1->fields).initialized == 0) {
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                ((Object *)StringLiteral_Embedded_site_data_not_initializ,(MethodInfo *)0x0);
      auVar2._0_8_ = (pEVar1->fields).kogamaDefaultData.sites;
      auVar2._8_4_ = (pEVar1->fields).kogamaDefaultData.siteEnum;
      auVar2[0xc] = (pEVar1->fields).kogamaDefaultData.showTouristPromotion;
      auVar2[0xd] = (pEVar1->fields).kogamaDefaultData.allowsOpenInNewTab;
      auVar2[0xe] = (pEVar1->fields).kogamaDefaultData.allowsRedirectToWebpage;
      auVar2[0xf] = (pEVar1->fields).kogamaDefaultData.allowsModals;
    }
    else {
      auVar2._0_8_ = (pEVar1->fields).currentSite.sites;
      auVar2._8_4_ = (pEVar1->fields).currentSite.siteEnum;
      auVar2[0xc] = (pEVar1->fields).currentSite.showTouristPromotion;
      auVar2[0xd] = (pEVar1->fields).currentSite.allowsOpenInNewTab;
      auVar2[0xe] = (pEVar1->fields).currentSite.allowsRedirectToWebpage;
      auVar2[0xf] = (pEVar1->fields).currentSite.allowsModals;
    }
    if (((auVar2[0xe] != '\0') || (auVar2[0xd] != '\0')) || (auVar2[0xf] != '\0')) {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__BrowserComm,1,0);
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
      pGVar3 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
      if (pGVar3 == (GameSessionData *)0x0) {
        FUN_?();
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pSVar5 = (pGVar3->fields).signupURL;
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
      if (((pSVar5 != (String *)0x0) && ((pSVar5->fields)._stringLength != 0)) &&
         (cRam_? == '\0')) {
        FUN_?(&MethodInfo__System__ReadOnlySpan<wchar_t>__ReadOnlySpan_System__Char___int_);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__UnityEngine__Application->_1).field_0x1c == 0) {
        FUN_?();
      }
      pcVar4 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
        uVar6 = func_?(&UNK_?);
        FUN_?(uVar6,0);
        FUN_?();
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pcRam_? = pcVar4;
      (*pcRam_?)(&stack0xffffffffffffffd8);
      return;
    }
    object = (Object *)FUN_?(TypeInfo__TouristSignupClickable____c__DisplayClass4_0);
    pGVar7 = (this->fields).redirectNotAllowedPopup;
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    pOVar8 = (Object__Class *)
             UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                       ((Object *)pGVar7,
                        UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                       );
    if (object != (Object *)0x0) {
      object[1].klass = pOVar8;
      func_?(object + 1);
      pGVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)this,(MethodInfo *)0x0);
      this_01 = (ExecuteEvents_EventFunction_1_System_Object_ *)
                FUN_?(
                             TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                             );
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
      ExecuteEvents_EventFunction_1_System_Object___ctor
                (this_01,object,
                 MethodInfo__TouristSignupClickable____c__DisplayClass4_0___OnClick_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
        FUN_?();
      }
      pMVar9 = 
      UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
      ;
      if ((
          UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
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
        if ((pMVar9->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
          FUN_?(pMVar9);
        }
      }
      if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_GetEventChain
                (pGVar7,(IList_1_UnityEngine_Transform_ *)
                        TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                        s_InternalTransformList,(MethodInfo *)0x0);
      pLVar10 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
               s_InternalTransformList;
      if (pLVar10 != (List_1_UnityEngine_Transform_ *)0x0) {
        lVar11 = (longlong)(pLVar10->fields)._size;
        uVar12 = 0;
        if (0 < lVar11) {
          lVar13 = 0;
          lVar14 = 0x20;
          do {
            if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
              FUN_?();
            }
            pLVar10 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                     s_InternalTransformList;
            if (pLVar10 == (List_1_UnityEngine_Transform_ *)0x0) goto code_?;
            if ((uint)(pLVar10->fields)._size <= uVar12) {
              mscorlib.dll::System::ThrowHelper::
              ThrowHelper_1_ThrowArgumentOutOfRange_IndexException((MethodInfo *)0x0);
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            pTVar15 = (pLVar10->fields)._items;
            if (pTVar15 == (Transform__Array *)0x0) goto code_?;
            if ((uint)pTVar15->max_length <= uVar12) {
              FUN_?();
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            this_00 = *(Component **)((longlong)pTVar15->vector + lVar14 + -0x20);
            if (this_00 == (Component *)0x0) goto code_?;
            pGVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                               (this_00,(MethodInfo *)0x0);
            bVar16 = UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                    ExecuteEvents_Execute_18
                              (pGVar7,(BaseEventData *)0x0,this_01,
                               (pMVar9->field7_0x38).rgctx_data[1].method);
            if (bVar16 != 0) {
              UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        (this_00,(MethodInfo *)0x0);
              return;
            }
            uVar12 = uVar12 + 1;
            lVar13 = lVar13 + 1;
            lVar14 = lVar14 + 8;
          } while (lVar13 < lVar11);
        }
        return;
      }
code_?:
      FUN_?();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void Start() */

void Assembly-CSharp.dll::TouristSignupClickable::TouristSignupClickable_Start
               (TouristSignupClickable *this,MethodInfo *method)

{
  pEVar1 = (this->fields).embeddedPlayerConfig;
  if (pEVar1 != (EmbeddedPlayerConfig *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Debug);
      LOCK();
      UNLOCK();
      FUN_?(&StringLiteral_Embedded_site_data_not_initializ);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if ((pEVar1->fields).initialized == 0) {
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                ((Object *)StringLiteral_Embedded_site_data_not_initializ,(MethodInfo *)0x0);
      auVar2._0_8_ = (pEVar1->fields).kogamaDefaultData.sites;
      auVar2._8_4_ = (pEVar1->fields).kogamaDefaultData.siteEnum;
      auVar2[0xc] = (pEVar1->fields).kogamaDefaultData.showTouristPromotion;
      auVar2[0xd] = (pEVar1->fields).kogamaDefaultData.allowsOpenInNewTab;
      auVar2[0xe] = (pEVar1->fields).kogamaDefaultData.allowsRedirectToWebpage;
      auVar2[0xf] = (pEVar1->fields).kogamaDefaultData.allowsModals;
      uVar3 = (pEVar1->fields).kogamaDefaultData.hideSignUp;
      cVar4 = uVar3;
    }
    else {
      auVar2._0_8_ = (pEVar1->fields).currentSite.sites;
      auVar2._8_4_ = (pEVar1->fields).currentSite.siteEnum;
      auVar2[0xc] = (pEVar1->fields).currentSite.showTouristPromotion;
      auVar2[0xd] = (pEVar1->fields).currentSite.allowsOpenInNewTab;
      auVar2[0xe] = (pEVar1->fields).currentSite.allowsRedirectToWebpage;
      auVar2[0xf] = (pEVar1->fields).currentSite.allowsModals;
      cVar4 = (pEVar1->fields).currentSite.hideSignUp;
    }
    obj = (this->fields).signupBtn;
    if (cVar4 == '\0') {
      if ((auVar2[0xf] == '\0') && (auVar2[0xd] == '\0')) {
        uVar5 = auVar2._14_2_ & 0xff;
      }
      else {
        uVar5 = 1;
      }
    }
    else {
      uVar5 = 0;
    }
    if (obj != (GameObject *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                      ,uVar5 != 0,0);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (obj == (GameObject *)0x0) {
        FUN_?();
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pvVar7 = (obj->fields)._.m_CachedPtr;
      if (pvVar7 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pcVar6 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
        uVar8 = func_?(&UNK_?);
        FUN_?(uVar8,0);
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pcRam_? = pcVar6;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam_?)(pvVar7,uVar5 != 0);
      return;
    }
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}

