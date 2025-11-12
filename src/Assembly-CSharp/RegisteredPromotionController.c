
/* Void Initialize() */

void Assembly-CSharp.dll::RegisteredPromotionController::RegisteredPromotionController_Initialize
               (RegisteredPromotionController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__RegisteredPromotionController__OnChangeMode_MV__Common__SpawnRoleModeType_
                 );
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
  UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
            ((Behaviour *)this,1,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (((pMVar1 != (MVGameControllerBase *)0x0) &&
      (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
     (pEVar3 = (pMVar2->fields)._EliteSettings_k__BackingField,
     pEVar3 != (ElitePromotionSettings *)0x0)) {
    pEVar4 = (this->fields).embeddedPlayerConfig;
    (this->fields).joinTheElitePromoInterval =
         (float)(pEVar3->fields)._ElitePromotionInterval_k__BackingField;
    if (pEVar4 != (EmbeddedPlayerConfig *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Debug);
        LOCK();
        UNLOCK();
        FUN_?();
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if ((pEVar4->fields).initialized == 0) {
        if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
          FUN_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                  ((Object *)StringLiteral_Embedded_site_data_not_initializ,(MethodInfo *)0x0);
        auVar5._0_8_ = (pEVar4->fields).kogamaDefaultData.sites;
        auVar5._8_4_ = (pEVar4->fields).kogamaDefaultData.siteEnum;
        auVar5[0xc] = (pEVar4->fields).kogamaDefaultData.showTouristPromotion;
        auVar5[0xd] = (pEVar4->fields).kogamaDefaultData.allowsOpenInNewTab;
        auVar5[0xe] = (pEVar4->fields).kogamaDefaultData.allowsRedirectToWebpage;
        auVar5[0xf] = (pEVar4->fields).kogamaDefaultData.allowsModals;
      }
      else {
        auVar5._0_8_ = (pEVar4->fields).currentSite.sites;
        auVar5._8_4_ = (pEVar4->fields).currentSite.siteEnum;
        auVar5[0xc] = (pEVar4->fields).currentSite.showTouristPromotion;
        auVar5[0xd] = (pEVar4->fields).currentSite.allowsOpenInNewTab;
        auVar5[0xe] = (pEVar4->fields).currentSite.allowsRedirectToWebpage;
        auVar5[0xf] = (pEVar4->fields).currentSite.allowsModals;
      }
      if (auVar5._8_4_ == 0) {
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__MVGameControllerBase);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pGVar6 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
        if (pGVar6 == (GameSessionData *)0x0) goto code_?;
        bVar7 = (pGVar6->fields).embedded;
      }
      else {
        bVar7 = 1;
      }
      (this->fields).embedded = bVar7 != 0;
      bVar7 = MVClientSettings::MVClientSettings_get_IsSubscriber((MethodInfo *)0x0);
      (this->fields).subscriber = bVar7;
      fVar8 = (this->fields).playFromKogamaPromoInterval;
      fVar9 = (this->fields).joinTheElitePromoInterval;
      if (fVar9 <= fVar8) {
        fVar8 = fVar9;
      }
      (this->fields).showTouristPromotion = auVar5[0xc];
      (this->fields).timeBeforeShownPromotion = fVar8;
      pSVar10 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                          ((MethodInfo *)0x0);
      if (pSVar10 != (SpawnRoleDataMediator *)0x0) {
        pSVar11 = (pSVar10->fields).spawnRoleMode;
        b = (Delegate *)
            FUN_?(
                         TypeInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable_1_T___SubDelegate<MV::Common::SpawnRoleModeType>
                         );
        FUN_?(b,this);
        pMVar12 = 
        MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<MV::Common::SpawnRoleModeType>__add_OnChange_Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable_1_T___SubDelegate<MV::Common::SpawnRoleModeType>_
        ;
        if (pSVar11 !=
            (SpawnRoleDataMediator_SpawnRoleVariableInternal_1_MV_Common_SpawnRoleModeType_ *)0x0) {
          ppSVar13 = &(pSVar11->fields)._.OnChange;
          a = (pSVar11->fields)._.OnChange;
          do {
            pDVar14 = mscorlib.dll::System::Delegate::Delegate_Combine
                                ((Delegate *)a,b,(MethodInfo *)0x0);
            pvVar15 = pMVar12->klass->rgctx_data[6].rgctxDataDummy;
            if ((*(byte *)((longlong)pvVar15 + 0x135) & 1) == 0) {
              pvVar15 = (void *)FUN_?();
            }
            if (pDVar14 == (Delegate *)0x0) {
              pSVar16 = (SpawnRoleVariable_1_T_SubDelegate_MV_Common_SpawnRoleModeType_ *)0x0;
            }
            else {
              pSVar16 = (SpawnRoleVariable_1_T_SubDelegate_MV_Common_SpawnRoleModeType_ *)
                        FUN_?(pDVar14,pvVar15);
              if (pSVar16 == (SpawnRoleVariable_1_T_SubDelegate_MV_Common_SpawnRoleModeType_ *)0x0)
              {
                FUN_?(pDVar14,pvVar15);
                pcVar17 = (code *)swi(3);
                (*pcVar17)();
                return;
              }
            }
            LOCK();
            pSVar18 = *ppSVar13;
            bVar19 = a == pSVar18;
            if (bVar19) {
              *ppSVar13 = pSVar16;
              pSVar18 = a;
            }
            UNLOCK();
            pSVar16 = a;
            if (!bVar19) {
              pSVar16 = pSVar18;
            }
            if (iRam_? != 0) {
              uVar20 = (uint)((ulonglong)ppSVar13 >> 0xc);
              uVar21 = (ulonglong)((uVar20 & 0x1fffff) >> 6);
              do {
                uVar22 = *(ulonglong *)(uVar21 * 8 + 0xADDR);
                puVar23 = (ulonglong *)(uVar21 * 8 + 0xADDR);
                LOCK();
                bVar19 = uVar22 == *puVar23;
                if (bVar19) {
                  *puVar23 = uVar22 | 1L << (uVar20 & 0x3f);
                }
                UNLOCK();
              } while (!bVar19);
            }
            bVar19 = pSVar16 != a;
            a = pSVar16;
          } while (bVar19);
          return;
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar17 = (code *)swi(3);
  (*pcVar17)();
  return;
}


/* Boolean IsAdWithoutPromotionAvailable() */

bool Assembly-CSharp.dll::RegisteredPromotionController::
     RegisteredPromotionController_IsAdWithoutPromotionAvailable
               (RegisteredPromotionController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__Assets__Scripts__AdIntegration__IAdManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar1 = (this->fields).embedded;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVClientSettings);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((TypeInfo__MVClientSettings->static_fields->flags & 4) == 0) {
    bVar2 = true;
  }
  else {
    bVar2 = (this->fields).showTouristPromotion == 0;
  }
  bVar3 = MVClientSettings::MVClientSettings_get_InterstitialsAdsEnabled((MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar4 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (pMVar4 != (MVGameControllerBase *)0x0) {
    lVar5 = (*(pMVar4->klass->vtable).__unknown.methodPtr)
                      (pMVar4,(pMVar4->klass->vtable).__unknown.method);
    if (lVar5 != 0) {
      bVar6 = FUN_?(5,TypeInfo__Assets__Scripts__AdIntegration__IAdManager,lVar5);
      return bVar6 & bVar2 & bVar3 & bVar1;
    }
  }
  FUN_?();
  pcVar7 = (code *)swi(3);
  bVar3 = (*pcVar7)();
  return bVar3;
}


/* Boolean IsPromotionAvailable() */

bool Assembly-CSharp.dll::RegisteredPromotionController::
     RegisteredPromotionController_IsPromotionAvailable
               (RegisteredPromotionController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVClientSettings);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields).embedded == 0) {
    bVar1 = (this->fields).subscriber == 0;
  }
  else {
    bVar1 = true;
  }
  bVar2 = (byte)((uint)TypeInfo__MVClientSettings->static_fields->flags >> 2);
  if ((this->fields).timer < (this->fields).timeBeforeShownPromotion) {
    bVar2 = 0;
  }
  return bVar2 & (this->fields).showTouristPromotion & bVar1;
}


/* Void OnAdWithoutPromotionCallback(InterstitialAdResult) */

void Assembly-CSharp.dll::RegisteredPromotionController::
     RegisteredPromotionController_OnAdWithoutPromotionCallback
               (RegisteredPromotionController *this,InterstitialAdResult__Enum obj,
               MethodInfo *method)

{
  pUVar1 = (this->fields).onPromotionWasPopped;
  if (pUVar1 != (UnityAction_2_System_Boolean_System_Boolean_ *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(pUVar1->fields)._._.invoke_impl)
              ((pUVar1->fields)._._.method_code,0,1,(pUVar1->fields)._._.method);
    return;
  }
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::RegisteredPromotionController::RegisteredPromotionController_OnDestroy
               (RegisteredPromotionController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__RegisteredPromotionController__OnChangeMode_MV__Common__SpawnRoleModeType_
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
  pSVar1 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                      ((MethodInfo *)0x0);
  if (pSVar1 != (SpawnRoleDataMediator *)0x0) {
    pSVar2 = (pSVar1->fields).spawnRoleMode;
    value = (Delegate *)
            FUN_?(
                         TypeInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable_1_T___SubDelegate<MV::Common::SpawnRoleModeType>
                         );
    FUN_?(value,this);
    pMVar3 = 
    MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<MV::Common::SpawnRoleModeType>__remove_OnChange_Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable_1_T___SubDelegate<MV::Common::SpawnRoleModeType>_
    ;
    if (pSVar2 != (SpawnRoleDataMediator_SpawnRoleVariableInternal_1_MV_Common_SpawnRoleModeType_ *)
                  0x0) {
      ppSVar4 = &(pSVar2->fields)._.OnChange;
      source = (pSVar2->fields)._.OnChange;
      do {
        pDVar5 = mscorlib.dll::System::Delegate::Delegate_Remove
                           ((Delegate *)source,value,(MethodInfo *)0x0);
        pvVar6 = pMVar3->klass->rgctx_data[6].rgctxDataDummy;
        if ((*(byte *)((longlong)pvVar6 + 0x135) & 1) == 0) {
          pvVar6 = (void *)FUN_?();
        }
        if (pDVar5 == (Delegate *)0x0) {
          pSVar7 = (SpawnRoleVariable_1_T_SubDelegate_MV_Common_SpawnRoleModeType_ *)0x0;
        }
        else {
          pSVar7 = (SpawnRoleVariable_1_T_SubDelegate_MV_Common_SpawnRoleModeType_ *)
                   FUN_?(pDVar5,pvVar6);
          if (pSVar7 == (SpawnRoleVariable_1_T_SubDelegate_MV_Common_SpawnRoleModeType_ *)0x0) {
            FUN_?(pDVar5,pvVar6);
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
        }
        LOCK();
        pSVar9 = *ppSVar4;
        bVar10 = source == pSVar9;
        if (bVar10) {
          *ppSVar4 = pSVar7;
          pSVar9 = source;
        }
        UNLOCK();
        pSVar7 = source;
        if (!bVar10) {
          pSVar7 = pSVar9;
        }
        if (iRam_? != 0) {
          uVar11 = (uint)((ulonglong)ppSVar4 >> 0xc);
          uVar12 = (ulonglong)((uVar11 & 0x1fffff) >> 6);
          do {
            uVar13 = *(ulonglong *)(uVar12 * 8 + 0xADDR);
            puVar14 = (ulonglong *)(uVar12 * 8 + 0xADDR);
            LOCK();
            bVar10 = uVar13 == *puVar14;
            if (bVar10) {
              *puVar14 = uVar13 | 1L << (uVar11 & 0x3f);
            }
            UNLOCK();
          } while (!bVar10);
        }
        bVar10 = pSVar7 != source;
        source = pSVar7;
      } while (bVar10);
      return;
    }
  }
  FUN_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void OnPromotionPop() */

void Assembly-CSharp.dll::RegisteredPromotionController::
     RegisteredPromotionController_OnPromotionPop
               (RegisteredPromotionController *this,MethodInfo *method)

{
  pUVar1 = (this->fields).onPromotionWasPopped;
  if (pUVar1 != (UnityAction_2_System_Boolean_System_Boolean_ *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(pUVar1->fields)._._.invoke_impl)
              ((pUVar1->fields)._._.method_code,1,1,(pUVar1->fields)._._.method);
    return;
  }
  return;
}


/* Void OnRegisteredPromotionShownCallback(InterstitialAdResult) */

void Assembly-CSharp.dll::RegisteredPromotionController::
     RegisteredPromotionController_OnRegisteredPromotionShownCallback
               (RegisteredPromotionController *this,InterstitialAdResult__Enum obj,
               MethodInfo *method)

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
                  MethodInfo__RegisteredPromotionController____c___OnRegisteredPromotionShownCallback_b__26_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RegisteredPromotionController____c);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__RegisteredPromotionController____c->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__RegisteredPromotionController____c);
  }
  this_01 = TypeInfo__RegisteredPromotionController____c->static_fields->__9__26_0;
  if (this_01 == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
    if (*(int *)&(TypeInfo__RegisteredPromotionController____c->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__RegisteredPromotionController____c);
    }
    object = TypeInfo__RegisteredPromotionController____c->static_fields->__9;
    this_01 = (ExecuteEvents_EventFunction_1_IUIStack_ *)
              FUN_?(
                           TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                           );
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
    ExecuteEvents_EventFunction_1_System_Object___ctor
              ((ExecuteEvents_EventFunction_1_System_Object_ *)this_01,(Object *)object,
               MethodInfo__RegisteredPromotionController____c___OnRegisteredPromotionShownCallback_b__26_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    TypeInfo__RegisteredPromotionController____c->static_fields->__9__26_0 = this_01;
    if (iRam_? != 0) {
      uVar2 = (uint)((ulonglong)
                      &TypeInfo__RegisteredPromotionController____c->static_fields->__9__26_0 >> 0xc
                     );
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


/* Void PushPromotionSlide(RegisteredPromotionPopup, Boolean) */

void Assembly-CSharp.dll::RegisteredPromotionController::
     RegisteredPromotionController_PushPromotionSlide
               (RegisteredPromotionController *this,RegisteredPromotionPopup *popupPrefab,
               bool isEmbeddedPromotion,MethodInfo *method)

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
    FUN_?(&TypeInfo__Assets__Scripts__AdIntegration__IAdManager);
    LOCK();
    UNLOCK();
    FUN_?(&
                  RegisteredPromotionPopup_MethodInfo__UnityEngine__Object__Instantiate<RegisteredPromotionPopup>_RegisteredPromotionPopup_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__RegisteredPromotionController____c__DisplayClass23_0___PushPromotionSlide_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RegisteredPromotionController____c__DisplayClass23_0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  object = (Object *)FUN_?(TypeInfo__RegisteredPromotionController____c__DisplayClass23_0);
  if (object != (Object *)0x0) {
    bVar1 = iRam_? != 0;
    object[1].monitor = (MonitorData *)this;
    if (bVar1) {
      uVar2 = (uint)((ulonglong)&object[1].monitor >> 0xc);
      uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
      do {
        uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
        puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
        LOCK();
        bVar1 = uVar4 == *puVar5;
        if (bVar1) {
          *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
        }
        UNLOCK();
      } while (!bVar1);
    }
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    pOVar6 = (Object__Class *)
             UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                       ((Object *)popupPrefab,
                        RegisteredPromotionPopup_MethodInfo__UnityEngine__Object__Instantiate<RegisteredPromotionPopup>_RegisteredPromotionPopup_
                       );
    bVar1 = iRam_? != 0;
    object[1].klass = pOVar6;
    if (bVar1) {
      uVar2 = (uint)((ulonglong)(object + 1) >> 0xc);
      uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
      do {
        uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
        puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
        LOCK();
        bVar1 = uVar4 == *puVar5;
        if (bVar1) {
          *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
        }
        UNLOCK();
      } while (!bVar1);
    }
    pOVar6 = object[1].klass;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar7 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if (((pMVar7 != (MVGameControllerBase *)0x0) &&
        (lVar8 = (*(pMVar7->klass->vtable).__unknown.methodPtr)
                           (pMVar7,(pMVar7->klass->vtable).__unknown.method), lVar8 != 0)) &&
       (withAd = FUN_?(5,TypeInfo__Assets__Scripts__AdIntegration__IAdManager,lVar8),
       pOVar6 != (Object__Class *)0x0)) {
      RegisteredPromotionPopup::RegisteredPromotionPopup_Initialize
                ((RegisteredPromotionPopup *)pOVar6,isEmbeddedPromotion,withAd,(MethodInfo *)0x0);
      root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this,(MethodInfo *)0x0);
      this_00 = (ExecuteEvents_EventFunction_1_System_Object_ *)
                FUN_?(
                             TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                             );
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
      ExecuteEvents_EventFunction_1_System_Object___ctor
                (this_00,object,
                 MethodInfo__RegisteredPromotionController____c__DisplayClass23_0___PushPromotionSlide_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                (root,(BaseEventData *)0x0,this_00,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                );
      (this->fields).timer = 0.0;
      return;
    }
  }
  FUN_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void ShowAdWithoutPromotion() */

void Assembly-CSharp.dll::RegisteredPromotionController::
     RegisteredPromotionController_ShowAdWithoutPromotion
               (RegisteredPromotionController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<Assets::Scripts::AdIntegration::InterstitialAdResult>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Assets__Scripts__AdIntegration__IAdManager);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__RegisteredPromotionController__OnAdWithoutPromotionCallback_Assets__Scripts__AdIntegration__InterstitialAdResult_
                 );
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
  if (pMVar1 != (MVGameControllerBase *)0x0) {
    lVar2 = (*(pMVar1->klass->vtable).__unknown.methodPtr)
                      (pMVar1,(pMVar1->klass->vtable).__unknown.method);
    this_00 = (UnityAction_1_System_Int32Enum_ *)
              FUN_?(
                           TypeInfo__System__Action<Assets::Scripts::AdIntegration::InterstitialAdResult>
                           );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
    UnityAction_1_System_Int32Enum___ctor
              (this_00,(Object *)this,
               MethodInfo__RegisteredPromotionController__OnAdWithoutPromotionCallback_Assets__Scripts__AdIntegration__InterstitialAdResult_
               ,(MethodInfo *)0x0);
    if (lVar2 != 0) {
      FUN_?();
      return;
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void ShowPromotionOrAd(UnityAction`2[System.Boolean,System.Boolean]) */

void Assembly-CSharp.dll::RegisteredPromotionController::
     RegisteredPromotionController_ShowPromotionOrAd
               (RegisteredPromotionController *this,
               UnityAction_2_System_Boolean_System_Boolean_ *onPop,MethodInfo *method)

{
  bVar1 = iRam_? != 0;
  (this->fields).eligibleForPromotionOrAd = 0;
  (this->fields).onPromotionWasPopped = onPop;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).onPromotionWasPopped >> 0xc);
    uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
    do {
      uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
      puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  bVar6 = RegisteredPromotionController_IsAdWithoutPromotionAvailable(this,(MethodInfo *)0x0);
  if (bVar6 == 0) {
    if ((this->fields).embedded != 0) {
      if ((this->fields).subscriber != 0) goto code_?;
      fVar7 = (this->fields).timer;
      pfVar8 = &(this->fields).playFromKogamaPromoInterval;
      if (*pfVar8 <= fVar7 && fVar7 != *pfVar8) {
        popupPrefab = (this->fields).registeredPromotionPopupPrefab;
        bVar6 = 1;
        goto code_?;
      }
    }
    if (((this->fields).subscriber == 0) &&
       (fVar7 = (this->fields).timer, pfVar8 = &(this->fields).joinTheElitePromoInterval,
       *pfVar8 <= fVar7 && fVar7 != *pfVar8)) {
      pMVar9 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if ((pMVar9 == (MVNetworkGame *)0x0) ||
         (pEVar10 = (pMVar9->fields)._EliteSettings_k__BackingField,
         pEVar10 == (ElitePromotionSettings *)0x0)) goto code_?;
      if ((pEVar10->fields)._ElitePromotionEnabled_k__BackingField != 0) {
        popupPrefab = (this->fields).registeredElitePromotionPopupPrefab;
        bVar6 = 0;
code_?:
        RegisteredPromotionController_PushPromotionSlide(this,popupPrefab,bVar6,(MethodInfo *)0x0);
        return;
      }
    }
code_?:
    pUVar11 = (this->fields).onPromotionWasPopped;
    if (pUVar11 == (UnityAction_2_System_Boolean_System_Boolean_ *)0x0) {
      return;
    }
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(pUVar11->fields)._._.invoke_impl)
              ((pUVar11->fields)._._.method_code,0,0,(pUVar11->fields)._._.method);
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<Assets::Scripts::AdIntegration::InterstitialAdResult>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Assets__Scripts__AdIntegration__IAdManager);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__RegisteredPromotionController__OnAdWithoutPromotionCallback_Assets__Scripts__AdIntegration__InterstitialAdResult_
                 );
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
  pMVar12 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (pMVar12 != (MVGameControllerBase *)0x0) {
    lVar13 = (*(pMVar12->klass->vtable).__unknown.methodPtr)
                       (pMVar12,(pMVar12->klass->vtable).__unknown.method);
    this_00 = (UnityAction_1_System_Int32Enum_ *)
              FUN_?(
                           TypeInfo__System__Action<Assets::Scripts::AdIntegration::InterstitialAdResult>
                           );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
    UnityAction_1_System_Int32Enum___ctor
              (this_00,(Object *)this,
               MethodInfo__RegisteredPromotionController__OnAdWithoutPromotionCallback_Assets__Scripts__AdIntegration__InterstitialAdResult_
               ,(MethodInfo *)0x0);
    if (lVar13 != 0) {
      FUN_?();
      return;
    }
  }
code_?:
  FUN_?();
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}


/* Void ShowRegisteredPromotion() */

void Assembly-CSharp.dll::RegisteredPromotionController::
     RegisteredPromotionController_ShowRegisteredPromotion
               (RegisteredPromotionController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<Assets::Scripts::AdIntegration::InterstitialAdResult>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Assets__Scripts__AdIntegration__IAdManager);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__RegisteredPromotionController__OnRegisteredPromotionShownCallback_Assets__Scripts__AdIntegration__InterstitialAdResult_
                 );
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
  if (pMVar1 != (MVGameControllerBase *)0x0) {
    lVar2 = (*(pMVar1->klass->vtable).__unknown.methodPtr)
                      (pMVar1,(pMVar1->klass->vtable).__unknown.method);
    this_00 = (UnityAction_1_System_Int32Enum_ *)
              FUN_?(
                           TypeInfo__System__Action<Assets::Scripts::AdIntegration::InterstitialAdResult>
                           );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
    UnityAction_1_System_Int32Enum___ctor
              (this_00,(Object *)this,
               MethodInfo__RegisteredPromotionController__OnRegisteredPromotionShownCallback_Assets__Scripts__AdIntegration__InterstitialAdResult_
               ,(MethodInfo *)0x0);
    if (lVar2 != 0) {
      FUN_?();
      return;
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void ShowRegisteredPromotionPopup() */

void Assembly-CSharp.dll::RegisteredPromotionController::
     RegisteredPromotionController_ShowRegisteredPromotionPopup
               (RegisteredPromotionController *this,MethodInfo *method)

{
  if ((this->fields).embedded != 0) {
    if ((this->fields).subscriber != 0) goto code_?;
    fVar1 = (this->fields).timer;
    pfVar2 = &(this->fields).playFromKogamaPromoInterval;
    if (*pfVar2 <= fVar1 && fVar1 != *pfVar2) {
      original = (this->fields).registeredPromotionPopupPrefab;
      isEmbeddedPromotion = 1;
      goto 
      Assembly_CSharp_dll_RegisteredPromotionController_RegisteredPromotionController_PushPromotionSlide
      ;
    }
  }
  if (((this->fields).subscriber == 0) &&
     (fVar1 = (this->fields).timer, pfVar2 = &(this->fields).joinTheElitePromoInterval,
     *pfVar2 <= fVar1 && fVar1 != *pfVar2)) {
    pMVar3 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if ((pMVar3 == (MVNetworkGame *)0x0) ||
       (pEVar4 = (pMVar3->fields)._EliteSettings_k__BackingField,
       pEVar4 == (ElitePromotionSettings *)0x0)) {
      FUN_?();
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if ((pEVar4->fields)._ElitePromotionEnabled_k__BackingField != 0) {
      original = (this->fields).registeredElitePromotionPopupPrefab;
      isEmbeddedPromotion = 0;
Assembly_CSharp_dll_RegisteredPromotionController_RegisteredPromotionController_PushPromotionSlide:
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
        FUN_?(&TypeInfo__Assets__Scripts__AdIntegration__IAdManager);
        LOCK();
        UNLOCK();
        FUN_?(&
                      RegisteredPromotionPopup_MethodInfo__UnityEngine__Object__Instantiate<RegisteredPromotionPopup>_RegisteredPromotionPopup_
                     );
        LOCK();
        UNLOCK();
        FUN_?(&TypeInfo__UnityEngine__Object);
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__RegisteredPromotionController____c__DisplayClass23_0___PushPromotionSlide_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                     );
        LOCK();
        UNLOCK();
        FUN_?(&TypeInfo__RegisteredPromotionController____c__DisplayClass23_0);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      object = (Object *)
               FUN_?(TypeInfo__RegisteredPromotionController____c__DisplayClass23_0);
      if (object != (Object *)0x0) {
        bVar6 = iRam_? != 0;
        object[1].monitor = (MonitorData *)this;
        if (bVar6) {
          uVar7 = (uint)((ulonglong)&object[1].monitor >> 0xc);
          uVar8 = (ulonglong)((uVar7 & 0x1fffff) >> 6);
          do {
            uVar9 = *(ulonglong *)(uVar8 * 8 + 0xADDR);
            puVar10 = (ulonglong *)(uVar8 * 8 + 0xADDR);
            LOCK();
            bVar6 = uVar9 == *puVar10;
            if (bVar6) {
              *puVar10 = uVar9 | 1L << (uVar7 & 0x3f);
            }
            UNLOCK();
          } while (!bVar6);
        }
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        pOVar11 = (Object__Class *)
                  UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                            ((Object *)original,
                             RegisteredPromotionPopup_MethodInfo__UnityEngine__Object__Instantiate<RegisteredPromotionPopup>_RegisteredPromotionPopup_
                            );
        bVar6 = iRam_? != 0;
        object[1].klass = pOVar11;
        if (bVar6) {
          uVar7 = (uint)((ulonglong)(object + 1) >> 0xc);
          uVar8 = (ulonglong)((uVar7 & 0x1fffff) >> 6);
          do {
            uVar9 = *(ulonglong *)(uVar8 * 8 + 0xADDR);
            puVar10 = (ulonglong *)(uVar8 * 8 + 0xADDR);
            LOCK();
            bVar6 = uVar9 == *puVar10;
            if (bVar6) {
              *puVar10 = uVar9 | 1L << (uVar7 & 0x3f);
            }
            UNLOCK();
          } while (!bVar6);
        }
        pOVar11 = object[1].klass;
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__MVGameControllerBase);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pMVar12 = TypeInfo__MVGameControllerBase->static_fields->instance;
        if (((pMVar12 != (MVGameControllerBase *)0x0) &&
            (lVar13 = (*(pMVar12->klass->vtable).__unknown.methodPtr)
                                (pMVar12,(pMVar12->klass->vtable).__unknown.method), lVar13 != 0)) &&
           (withAd = FUN_?(5,TypeInfo__Assets__Scripts__AdIntegration__IAdManager,lVar13),
           pOVar11 != (Object__Class *)0x0)) {
          RegisteredPromotionPopup::RegisteredPromotionPopup_Initialize
                    ((RegisteredPromotionPopup *)pOVar11,isEmbeddedPromotion,withAd,
                     (MethodInfo *)0x0);
          root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)this,(MethodInfo *)0x0);
          this_00 = (ExecuteEvents_EventFunction_1_System_Object_ *)
                    FUN_?(
                                 TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                                 );
          UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::
          Object]::ExecuteEvents_EventFunction_1_System_Object___ctor
                    (this_00,object,
                     MethodInfo__RegisteredPromotionController____c__DisplayClass23_0___PushPromotionSlide_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                     ,(MethodInfo *)0x0);
          if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
            FUN_?();
          }
          UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
          ExecuteEvents_ExecuteHierarchy
                    (root,(BaseEventData *)0x0,this_00,
                     UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                    );
          (this->fields).timer = 0.0;
          return;
        }
      }
      FUN_?();
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
code_?:
  pUVar14 = (this->fields).onPromotionWasPopped;
  if (pUVar14 == (UnityAction_2_System_Boolean_System_Boolean_ *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(pUVar14->fields)._._.invoke_impl)
            ((pUVar14->fields)._._.method_code,0,0,(pUVar14->fields)._._.method);
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::RegisteredPromotionController::RegisteredPromotionController_Update
               (RegisteredPromotionController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (pMVar1 == (MVGameControllerBase *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((pMVar1->fields)._joinState == 3) {
    fVar3 = (this->fields).timer;
    pcVar2 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
      uVar4 = func_?(&UNK_?);
      FUN_?(uVar4,0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pcRam_? = pcVar2;
    fVar5 = (float)(*pcRam_?)();
    (this->fields).timer = fVar5 + fVar3;
  }
  return;
}


/* RegisteredPromotionController() */

void Assembly-CSharp.dll::RegisteredPromotionController::RegisteredPromotionController__ctor
               (RegisteredPromotionController *this,MethodInfo *method)

{
  bVar1 = cRam_? == '\0';
  (this->fields).playFromKogamaPromoInterval = 60.0;
  (this->fields).joinTheElitePromoInterval = 180.0;
  (this->fields).timeBeforeShownPromotion = 180.0;
  if (bVar1) {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pOVar2 = TypeInfo__UnityEngine__Object;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c != 0) {
    return;
  }
  ppMVar3 = (MethodInfo **)0x0;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c != 0) {
    return;
  }
  lVar4 = _Baselib_Thread_GetCurrentThreadId_il2cpp_baselib__YA_JXZ();
  ppMVar5 = ppMVar3;
  if (lVar4 == lRam_?) {
    iRam_? = iRam_? + 1;
    lVar4 = lRam_?;
  }
  else {
    do {
      uVar6 = (uint)ppMVar5;
      LOCK();
      bVar1 = uVar6 != uRam_?;
      uVar7 = uVar6;
      uVar8 = uVar6 + 1;
      if (bVar1) {
        uVar7 = uRam_?;
        uVar8 = uRam_?;
      }
      uRam_? = uVar8;
      UNLOCK();
    } while ((bVar1) && (ppMVar5 = (MethodInfo **)(ulonglong)uVar7, uVar6 = uVar7, uVar7 != 2)
            );
    while (uVar6 != 0) {
      _Baselib_SystemFutex_Wait_il2cpp_baselib__YAXPEAHHI_Z(0xADDR,2,0xffffffff);
      uVar6 = uRam_?;
      LOCK();
      uRam_? = 2;
      UNLOCK();
    }
  }
  lRam_? = lVar4;
  puVar9 = &(pOVar2->_1).field_0x1c;
  LOCK();
  bVar1 = *(int *)puVar9 == 1;
  if (bVar1) {
    *(undefined4 *)puVar9 = 1;
  }
  uVar6 = uRam_?;
  UNLOCK();
  if (bVar1) {
    if (iRam_? != 0) {
      iRam_? = iRam_? + -1;
      return;
    }
    lRam_? = 0;
    LOCK();
    uRam_? = 0;
    UNLOCK();
    if (uVar6 != 2) {
      uRam_? = 0;
      lRam_? = 0;
      return;
    }
    _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
              (0xADDR,1,0);
    return;
  }
  puVar10 = &(pOVar2->_1).cctor_finished_or_no_cctor;
  LOCK();
  bVar1 = *puVar10 == 1;
  if (bVar1) {
    *puVar10 = 1;
  }
  uVar6 = uRam_?;
  UNLOCK();
  if (bVar1) {
    if (iRam_? == 0) {
      lRam_? = 0;
      LOCK();
      uRam_? = 0;
      UNLOCK();
      if (uVar6 == 2) {
        _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
                  (0xADDR,1,0);
      }
    }
    else {
      iRam_? = iRam_? + -1;
    }
    uVar6 = GetCurrentThreadId();
    psVar11 = &(pOVar2->_1).cctor_thread;
    LOCK();
    bVar1 = (ulonglong)uVar6 == *psVar11;
    if (bVar1) {
      *psVar11 = (ulonglong)uVar6;
    }
    UNLOCK();
    if (bVar1) {
      return;
    }
    while( true ) {
      puVar9 = &(pOVar2->_1).field_0x1c;
      LOCK();
      bVar1 = *(int *)puVar9 == 1;
      if (bVar1) {
        *(undefined4 *)puVar9 = 1;
      }
      UNLOCK();
      if (bVar1) break;
      LOCK();
      lVar4._0_4_ = (pOVar2->_1).initializationExceptionGCHandle;
      lVar4._4_4_ = (pOVar2->_1).cctor_started;
      if (lVar4 == 0) {
        (pOVar2->_1).initializationExceptionGCHandle = 0;
        (pOVar2->_1).cctor_started = 0;
      }
      UNLOCK();
      if (lVar4 != 0) break;
      FUN_?(*puRam_?);
    }
code_?:
    lVar12._0_4_ = (pOVar2->_1).initializationExceptionGCHandle;
    lVar12._4_4_ = (pOVar2->_1).cctor_started;
    if (lVar12 == 0) {
      return;
    }
  }
  else {
    uVar6 = GetCurrentThreadId();
    LOCK();
    (pOVar2->_1).cctor_thread = (ulonglong)uVar6;
    UNLOCK();
    LOCK();
    (pOVar2->_1).cctor_finished_or_no_cctor = 1;
    uVar6 = uRam_?;
    UNLOCK();
    if (iRam_? == 0) {
      lRam_? = 0;
      LOCK();
      uRam_? = 0;
      UNLOCK();
      if (uVar6 == 2) {
        _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
                  (0xADDR,1,0);
      }
    }
    else {
      iRam_? = iRam_? + -1;
    }
    lStackX_10 = 0;
    if (((pOVar2->_1).field_0x6e & 4) != 0) {
      FUN_?(pOVar2);
      ppMVar5 = ppMVar3;
      pIVar13 = (Il2CppClass *)pOVar2;
code_?:
      do {
        if (ppMVar5 == (MethodInfo **)0x0) {
          FUN_?(pIVar13);
          if (pIVar13->field_count != 0) {
            ppMVar5 = pIVar13->methods;
            pMVar14 = *ppMVar5;
code_?:
            if (pMVar14 != (MethodInfo *)0x0) {
              if ((*pMVar14->name == '.') && ((pMVar14->flags & 0x800) != 0)) {
                ppMVar15 = ppMVar3;
                while (ppMVar16 = ppMVar15 + 0x30528cee,
                      ppMVar15 = (MethodInfo **)((longlong)ppMVar15 + 1),
                      *(char *)ppMVar16 == (pMVar14->name + -1)[(longlong)ppMVar15]) {
                  if (ppMVar15 == (MethodInfo **)0x7) {
                    FUN_?(pMVar14,0,0,&lStackX_10);
                    goto code_?;
                  }
                }
              }
              goto code_?;
            }
          }
        }
        else {
          ppMVar5 = ppMVar5 + 1;
          if (ppMVar5 < pIVar13->methods + pIVar13->field_count) {
            pMVar14 = *ppMVar5;
            goto code_?;
          }
        }
        pIVar13 = pIVar13->parent;
        ppMVar5 = ppMVar3;
      } while (pIVar13 != (Il2CppClass *)0x0);
    }
code_?:
    LOCK();
    (pOVar2->_1).cctor_thread = 0;
    uVar17 = _UNK_?;
    uVar18 = _UNK_?;
    UNLOCK();
    if (lStackX_10 == 0) {
      LOCK();
      *(undefined4 *)&(pOVar2->_1).field_0x1c = 1;
      UNLOCK();
      goto code_?;
    }
    uStack_19 = 0;
    uStack_20 = _UNK_?;
    uStack_21 = _UNK_?;
    pppppppuStack_78 = (undefined8 *******)0x0;
    FUN_?(&pppppppuStack_78,&(pOVar2->_0).byval_arg,0,0);
    pppppppuVar16 = &pppppppuStack_78;
    if (0xf < uStack_21) {
      pppppppuVar16 = pppppppuStack_78;
    }
    FUN_?(apppppppuStack_58,&UNK_?,pppppppuVar16);
    if (uStack_21 < 0x10) {
code_?:
      lVar4 = lStackX_10;
      pppppppuStack_78 = (undefined8 *******)((ulonglong)pppppppuStack_78 & 0xffffffffffffff00);
      pppppppuVar16 = apppppppuStack_58;
      if (0xf < uStack_22) {
        pppppppuVar16 = apppppppuStack_58[0];
      }
      uStack_20 = uVar18;
      uStack_21 = uVar17;
      lVar12 = FUN_?(uRam_?,&UNK_?,&UNK_?,pppppppuVar16);
      if (lVar4 != 0) {
        *(longlong *)(lVar12 + 0x28U) = lVar4;
        if (iRam_? != 0) {
          uVar6 = (uint)(lVar12 + 0x28U >> 0xc);
          puVar23 = (ulonglong *)((ulonglong)((uVar6 & 0x1fffff) >> 6) * 8 + 0xADDR);
          do {
            uVar24 = *puVar23;
            LOCK();
            uVar17 = *puVar23;
            if (uVar24 == uVar17) {
              *puVar23 = uVar24 | 1L << (uVar6 & 0x3f);
            }
            UNLOCK();
          } while (uVar24 != uVar17);
        }
      }
      FUN_?(pOVar2,lVar12);
      if (0xf < uStack_22) {
        pppppppuVar16 = apppppppuStack_58[0];
        if ((0xfff < uStack_22 + 1) &&
           (pppppppuVar16 = (undefined8 *******)apppppppuStack_58[0][-1],
           0x1f < (ulonglong)((longlong)apppppppuStack_58[0] + (-8 - (longlong)pppppppuVar16))))
        goto code_?;
        func_?(pppppppuVar16);
      }
      goto code_?;
    }
    pppppppuVar16 = pppppppuStack_78;
    if ((uStack_21 + 1 < 0x1000) ||
       (pppppppuVar16 = (undefined8 *******)pppppppuStack_78[-1],
       (ulonglong)((longlong)pppppppuStack_78 + (-8 - (longlong)pppppppuVar16)) < 0x20)) {
      func_?(pppppppuVar16);
      uVar18 = _UNK_?;
      uVar17 = _UNK_?;
      goto code_?;
    }
    FUN_?(0,0,0,0,0);
  }
  uVar18._0_4_ = (pOVar2->_1).initializationExceptionGCHandle;
  uVar18._4_4_ = (pOVar2->_1).cctor_started;
  uVar18 = FUN_?(uVar18);
  FUN_?(uVar18,0);
code_?:
  FUN_?(0,0,0,0,0);
  pcVar25 = (code *)swi(3);
  (*pcVar25)();
  return;
}


/* Boolean get_IsPromotionOrAdWithoutPromotionAvailable() */

bool Assembly-CSharp.dll::RegisteredPromotionController::
     RegisteredPromotionController_get_IsPromotionOrAdWithoutPromotionAvailable
               (RegisteredPromotionController *this,MethodInfo *method)

{
  pSVar1 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                     ((MethodInfo *)0x0);
  if ((pSVar1 != (SpawnRoleDataMediator *)0x0) &&
     (pSVar2 = (pSVar1->fields).SpawnRoleModeTypeWrapper, pSVar2 != (SpawnRoleModeTypeWrapper *)0x0)
     ) {
    if (cRam_? == '\0') {
      FUN_?(&
                    MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<MV::Common::SpawnRoleModeType>__get_Value__
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pSVar3 = (pSVar2->fields).spawnRoleType;
    if ((pSVar3 != (SpawnRoleVariable_1_MV_Common_SpawnRoleModeType_ *)0x0) &&
       (pSVar4 = (pSVar3->fields).subscribableVariable,
       pSVar4 != (SubscribableVariable_1_MV_Common_SpawnRoleModeType_ *)0x0)) {
      iVar5 = (pSVar4->fields)._.value;
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVGameControllerBase);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pMVar6 = TypeInfo__MVGameControllerBase->static_fields->instance;
      if ((pMVar6 != (MVGameControllerBase *)0x0) && ((pMVar6->fields).game != (MVNetworkGame *)0x0)
         ) {
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__MVGameControllerBase);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pMVar6 = TypeInfo__MVGameControllerBase->static_fields->instance;
        if (pMVar6 != (MVGameControllerBase *)0x0) {
          bVar7 = (*(pMVar6->klass->vtable).__unknown_1.methodPtr)
                            (pMVar6,(pMVar6->klass->vtable).__unknown_1.method);
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__MVGameControllerBase);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pMVar6 = TypeInfo__MVGameControllerBase->static_fields->instance;
          if (pMVar6 != (MVGameControllerBase *)0x0) {
            if ((byte)(~(byte)iVar5 &
                      (pMVar6->fields)._joinState == 3 & (this->fields).eligibleForPromotionOrAd &
                      bVar7) == 0) {
              bVar8 = 0;
            }
            else {
              if (cRam_? == '\0') {
                FUN_?(&TypeInfo__MVClientSettings);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              if ((this->fields).embedded == 0) {
                bVar9 = (this->fields).subscriber == 0;
              }
              else {
                bVar9 = true;
              }
              bVar7 = (byte)((uint)TypeInfo__MVClientSettings->static_fields->flags >> 2);
              if ((this->fields).timer < (this->fields).timeBeforeShownPromotion) {
                bVar7 = 0;
              }
              if ((bVar9 & bVar7 & (this->fields).showTouristPromotion) == 0) {
                bVar8 = RegisteredPromotionController_IsAdWithoutPromotionAvailable
                                  (this,(MethodInfo *)0x0);
              }
              else {
                bVar8 = 1;
              }
            }
            return bVar8;
          }
        }
      }
    }
  }
  FUN_?();
  pcVar10 = (code *)swi(3);
  bVar8 = (*pcVar10)();
  return bVar8;
}

