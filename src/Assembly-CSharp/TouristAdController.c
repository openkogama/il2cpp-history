
/* Void Initialize() */

void Assembly-CSharp.dll::TouristAdController::TouristAdController_Initialize
               (TouristAdController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
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
    FUN_?(&MethodInfo__TouristAdController__OnChangeMode_MV__Common__SpawnRoleModeType_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
            ((Behaviour *)this,1,(MethodInfo *)0x0);
  pEVar1 = (this->fields).embeddedPlayerConfig;
  if (pEVar1 != (EmbeddedPlayerConfig *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Debug);
      LOCK();
      UNLOCK();
      FUN_?();
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
      bVar2 = (pEVar1->fields).kogamaDefaultData.showTouristPromotion;
    }
    else {
      bVar2 = (pEVar1->fields).currentSite.showTouristPromotion;
    }
    (this->fields).showTouristPromotion = bVar2;
    pSVar3 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                        ((MethodInfo *)0x0);
    if (pSVar3 != (SpawnRoleDataMediator *)0x0) {
      pSVar4 = (pSVar3->fields).spawnRoleMode;
      b = (Delegate *)
          FUN_?(
                       TypeInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable_1_T___SubDelegate<MV::Common::SpawnRoleModeType>
                       );
      FUN_?(b,this);
      pMVar5 = 
      MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<MV::Common::SpawnRoleModeType>__add_OnChange_Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable_1_T___SubDelegate<MV::Common::SpawnRoleModeType>_
      ;
      if (pSVar4 != (SpawnRoleDataMediator_SpawnRoleVariableInternal_1_MV_Common_SpawnRoleModeType_
                     *)0x0) {
        ppSVar6 = &(pSVar4->fields)._.OnChange;
        a = (pSVar4->fields)._.OnChange;
        do {
          pDVar7 = mscorlib.dll::System::Delegate::Delegate_Combine
                             ((Delegate *)a,b,(MethodInfo *)0x0);
          pvVar8 = pMVar5->klass->rgctx_data[6].rgctxDataDummy;
          if ((*(byte *)((longlong)pvVar8 + 0x135) & 1) == 0) {
            pvVar8 = (void *)FUN_?();
          }
          if (pDVar7 == (Delegate *)0x0) {
            pSVar9 = (SpawnRoleVariable_1_T_SubDelegate_MV_Common_SpawnRoleModeType_ *)0x0;
          }
          else {
            pSVar9 = (SpawnRoleVariable_1_T_SubDelegate_MV_Common_SpawnRoleModeType_ *)
                      FUN_?(pDVar7,pvVar8);
            if (pSVar9 == (SpawnRoleVariable_1_T_SubDelegate_MV_Common_SpawnRoleModeType_ *)0x0) {
              FUN_?(pDVar7,pvVar8);
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
          }
          LOCK();
          pSVar11 = *ppSVar6;
          bVar12 = a == pSVar11;
          if (bVar12) {
            *ppSVar6 = pSVar9;
            pSVar11 = a;
          }
          UNLOCK();
          pSVar9 = a;
          if (!bVar12) {
            pSVar9 = pSVar11;
          }
          if (iRam_? != 0) {
            uVar13 = (uint)((ulonglong)ppSVar6 >> 0xc);
            uVar14 = (ulonglong)((uVar13 & 0x1fffff) >> 6);
            do {
              uVar15 = *(ulonglong *)(uVar14 * 8 + 0xADDR);
              puVar16 = (ulonglong *)(uVar14 * 8 + 0xADDR);
              LOCK();
              bVar12 = uVar15 == *puVar16;
              if (bVar12) {
                *puVar16 = uVar15 | 1L << (uVar13 & 0x3f);
              }
              UNLOCK();
            } while (!bVar12);
          }
          bVar12 = pSVar9 != a;
          a = pSVar9;
        } while (bVar12);
        return;
      }
    }
  }
  FUN_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Boolean IsAdWithoutPromotionAvailable() */

bool Assembly-CSharp.dll::TouristAdController::TouristAdController_IsAdWithoutPromotionAvailable
               (TouristAdController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__Assets__Scripts__AdIntegration__IAdManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVClientSettings);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((TypeInfo__MVClientSettings->static_fields->flags & 4) == 0) {
    bVar1 = true;
  }
  else {
    bVar1 = (this->fields).showTouristPromotion == 0;
  }
  bVar2 = MVClientSettings::MVClientSettings_get_InterstitialsAdsEnabled((MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar3 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (pMVar3 != (MVGameControllerBase *)0x0) {
    lVar4 = (*(pMVar3->klass->vtable).__unknown.methodPtr)
                      (pMVar3,(pMVar3->klass->vtable).__unknown.method);
    if (lVar4 != 0) {
      bVar5 = FUN_?(5,TypeInfo__Assets__Scripts__AdIntegration__IAdManager,lVar4);
      return bVar5 & bVar1 & bVar2;
    }
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  bVar2 = (*pcVar6)();
  return bVar2;
}


/* Boolean IsPromotionAvailable() */

bool Assembly-CSharp.dll::TouristAdController::TouristAdController_IsPromotionAvailable
               (TouristAdController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVClientSettings);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  return (byte)((uint)TypeInfo__MVClientSettings->static_fields->flags >> 2) &
         (this->fields).showTouristPromotion & 1;
}


/* Void OnAdCallback(InterstitialAdResult) */

void Assembly-CSharp.dll::TouristAdController::TouristAdController_OnAdCallback
               (TouristAdController *this,InterstitialAdResult__Enum obj,MethodInfo *method)

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
                  MethodInfo__TouristAdController____c___OnAdCallback_b__23_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__TouristAdController____c);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_TouristAdController___Interstiti);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  (this->fields).timer = 0.0;
  pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__TouristAdController____c->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__TouristAdController____c);
  }
  this_01 = TypeInfo__TouristAdController____c->static_fields->__9__23_0;
  if (this_01 == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
    if (*(int *)&(TypeInfo__TouristAdController____c->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__TouristAdController____c);
    }
    object = TypeInfo__TouristAdController____c->static_fields->__9;
    this_01 = (ExecuteEvents_EventFunction_1_IUIStack_ *)
              FUN_?(
                           TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                           );
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
    ExecuteEvents_EventFunction_1_System_Object___ctor
              ((ExecuteEvents_EventFunction_1_System_Object_ *)this_01,(Object *)object,
               MethodInfo__TouristAdController____c___OnAdCallback_b__23_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    TypeInfo__TouristAdController____c->static_fields->__9__23_0 = this_01;
    if (iRam_? != 0) {
      uVar2 = (uint)((ulonglong)&TypeInfo__TouristAdController____c->static_fields->__9__23_0 >>
                     0xc);
      uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
      do {
        uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
        puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
        LOCK();
        bVar6 = uVar4 == *puVar5;
        if (bVar6) {
          *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
        }
        UNLOCK();
      } while (!bVar6);
    }
  }
  if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
    FUN_?();
  }
  pMVar7 = 
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
    if ((pMVar7->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
      FUN_?(pMVar7);
    }
  }
  if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_GetEventChain
            (pGVar1,(IList_1_UnityEngine_Transform_ *)
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                    s_InternalTransformList,(MethodInfo *)0x0);
  pLVar8 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
           s_InternalTransformList;
  if (pLVar8 != (List_1_UnityEngine_Transform_ *)0x0) {
    lVar9 = (longlong)(pLVar8->fields)._size;
    uVar2 = 0;
    if (0 < lVar9) {
      lVar10 = 0;
      lVar11 = 0x20;
      do {
        if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
          FUN_?();
        }
        pLVar8 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                 s_InternalTransformList;
        if (pLVar8 == (List_1_UnityEngine_Transform_ *)0x0) goto code_?;
        if ((uint)(pLVar8->fields)._size <= uVar2) {
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                    ((MethodInfo *)0x0);
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        pTVar13 = (pLVar8->fields)._items;
        if (pTVar13 == (Transform__Array *)0x0) goto code_?;
        if ((uint)pTVar13->max_length <= uVar2) {
          FUN_?();
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        this_00 = *(Component **)((longlong)pTVar13->vector + lVar11 + -0x20);
        if (this_00 == (Component *)0x0) goto code_?;
        pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           (this_00,(MethodInfo *)0x0);
        bVar14 = UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                ExecuteEvents_Execute_18
                          (pGVar1,(BaseEventData *)0x0,
                           (ExecuteEvents_EventFunction_1_System_Object_ *)this_01,
                           (pMVar7->field7_0x38).rgctx_data[1].method);
        if (bVar14 != 0) {
          UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                    (this_00,(MethodInfo *)0x0);
          return;
        }
        uVar2 = uVar2 + 1;
        lVar10 = lVar10 + 1;
        lVar11 = lVar11 + 8;
      } while (lVar10 < lVar9);
    }
    return;
  }
code_?:
  FUN_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void OnAdWithoutPromotionCallback(InterstitialAdResult) */

void Assembly-CSharp.dll::TouristAdController::TouristAdController_OnAdWithoutPromotionCallback
               (TouristAdController *this,InterstitialAdResult__Enum obj,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_TouristAdController___Showed_Ad_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pUVar1 = (this->fields).onPromotionWasPopped;
  if (pUVar1 != (UnityAction_2_System_Boolean_System_Boolean_ *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(pUVar1->fields)._._.invoke_impl)
              ((pUVar1->fields)._._.method_code,0,(this->fields).withAd,(pUVar1->fields)._._.method)
    ;
    return;
  }
  return;
}


/* Void OnChangeMode(SpawnRoleModeType) */

void Assembly-CSharp.dll::TouristAdController::TouristAdController_OnChangeMode
               (TouristAdController *this,SpawnRoleModeType__Enum type,MethodInfo *method)

{
  if (type == SpawnRoleModeType__Enum_Dead) {
    (this->fields).eligibleForPromotionOrAd = 1;
  }
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::TouristAdController::TouristAdController_OnDestroy
               (TouristAdController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<MV::Common::SpawnRoleModeType>__remove_OnChange_Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable_1_T___SubDelegate<MV::Common::SpawnRoleModeType>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable_1_T___SubDelegate<MV::Common::SpawnRoleModeType>
                 );
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar1 = MVGameControllerBase::MVGameControllerBase_get_IsAlive((MethodInfo *)0x0);
  if (bVar1 == 0) {
    return;
  }
  pSVar2 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                     ((MethodInfo *)0x0);
  if (pSVar2 != (SpawnRoleDataMediator *)0x0) {
    pSVar3 = (pSVar2->fields).spawnRoleMode;
    uVar4 = FUN_?(
                         TypeInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable_1_T___SubDelegate<MV::Common::SpawnRoleModeType>
                         );
    FUN_?(uVar4,this,
                  MethodInfo__TouristAdController__OnChangeMode_MV__Common__SpawnRoleModeType_);
    if (pSVar3 != (SpawnRoleDataMediator_SpawnRoleVariableInternal_1_MV_Common_SpawnRoleModeType_ *)
                  0x0) {
      FUN_?(pSVar3,uVar4);
      return;
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void OnPromotionPopped() */

void Assembly-CSharp.dll::TouristAdController::TouristAdController_OnPromotionPopped
               (TouristAdController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_TouristAdController___OnPromotio,(char)method);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pUVar1 = (this->fields).onPromotionWasPopped;
  if (pUVar1 != (UnityAction_2_System_Boolean_System_Boolean_ *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(pUVar1->fields)._._.invoke_impl)
              ((pUVar1->fields)._._.method_code,1,(this->fields).withAd,(pUVar1->fields)._._.method)
    ;
    return;
  }
  return;
}


/* Void ShowAd() */

void Assembly-CSharp.dll::TouristAdController::TouristAdController_ShowAd
               (TouristAdController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<Assets::Scripts::AdIntegration::InterstitialAdResult>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Assets__Scripts__AdIntegration__IAdManager);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__TouristAdController__OnAdCallback_Assets__Scripts__AdIntegration__InterstitialAdResult_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_TouristAdController___ShowAd___);
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
    plVar2 = (longlong *)
             (*(pMVar1->klass->vtable).__unknown.methodPtr)
                       (pMVar1,(pMVar1->klass->vtable).__unknown.method);
    if (plVar2 != (longlong *)0x0) {
      plVar2 = (longlong *)FUN_?(*plVar2 + 0x20);
      str0 = StringLiteral_TouristAdController___ShowAd___;
      str1 = (String *)0x0;
      if (plVar2 != (longlong *)0x0) {
        str1 = (String *)(**(code **)(*plVar2 + 0x168))(plVar2,*(undefined8 *)(*plVar2 + 0x170));
      }
      mscorlib.dll::System::String::String_Concat_4(str0,str1,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVGameControllerBase);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
      if (pMVar1 != (MVGameControllerBase *)0x0) {
        lVar3 = (*(pMVar1->klass->vtable).__unknown.methodPtr)
                          (pMVar1,(pMVar1->klass->vtable).__unknown.method);
        this_00 = (UnityAction_1_System_Int32Enum_ *)
                  FUN_?(
                               TypeInfo__System__Action<Assets::Scripts::AdIntegration::InterstitialAdResult>
                               );
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
        UnityAction_1_System_Int32Enum___ctor
                  (this_00,(Object *)this,
                   MethodInfo__TouristAdController__OnAdCallback_Assets__Scripts__AdIntegration__InterstitialAdResult_
                   ,(MethodInfo *)0x0);
        if (lVar3 != 0) {
          FUN_?();
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


/* Void ShowAdWithoutPromotion(Boolean) */

void Assembly-CSharp.dll::TouristAdController::TouristAdController_ShowAdWithoutPromotion
               (TouristAdController *this,bool withAd,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<Assets::Scripts::AdIntegration::InterstitialAdResult>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Assets__Scripts__AdIntegration__IAdManager);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__TouristAdController__OnAdWithoutPromotionCallback_Assets__Scripts__AdIntegration__InterstitialAdResult_
                 );
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (withAd == 0) {
    if (cRam_? == '\0') {
      FUN_?(&StringLiteral_TouristAdController___OnPromotio);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pUVar1 = (this->fields).onPromotionWasPopped;
    if (pUVar1 == (UnityAction_2_System_Boolean_System_Boolean_ *)0x0) {
      return;
    }
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(pUVar1->fields)._._.invoke_impl)
              ((pUVar1->fields)._._.method_code,1,(this->fields).withAd,(pUVar1->fields)._._.method)
    ;
    return;
  }
  pIVar2 = MVGameControllerBase::MVGameControllerBase_get_AdManager((MethodInfo *)0x0);
  if (pIVar2 != (IAdManager *)0x0) {
    plVar3 = (longlong *)FUN_?(&(pIVar2->klass->_0).byval_arg);
    str0 = StringLiteral_TouristAdController___Show_Ad_Wi;
    str1 = (String *)0x0;
    if (plVar3 != (longlong *)0x0) {
      str1 = (String *)(**(code **)(*plVar3 + 0x168))(plVar3,*(undefined8 *)(*plVar3 + 0x170));
    }
    mscorlib.dll::System::String::String_Concat_4(str0,str1,(MethodInfo *)0x0);
    pIVar2 = MVGameControllerBase::MVGameControllerBase_get_AdManager((MethodInfo *)0x0);
    this_00 = (UnityAction_1_System_Int32Enum_ *)
              FUN_?(
                           TypeInfo__System__Action<Assets::Scripts::AdIntegration::InterstitialAdResult>
                           );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
    UnityAction_1_System_Int32Enum___ctor
              (this_00,(Object *)this,
               MethodInfo__TouristAdController__OnAdWithoutPromotionCallback_Assets__Scripts__AdIntegration__InterstitialAdResult_
               ,(MethodInfo *)0x0);
    if (pIVar2 != (IAdManager *)0x0) {
      FUN_?();
      return;
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void ShowPromotion(Boolean) */

void Assembly-CSharp.dll::TouristAdController::TouristAdController_ShowPromotion
               (TouristAdController *this,bool withAd,MethodInfo *method)

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
                  AdIntegration__InHouse__GeneralPromotionAd_MethodInfo__UnityEngine__Object__Instantiate<AdIntegration::InHouse::GeneralPromotionAd>_AdIntegration__InHouse__GeneralPromotionAd_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TouristPromotion_MethodInfo__UnityEngine__Object__Instantiate<TouristPromotion>_TouristPromotion_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__TouristAdController____c__DisplayClass19_0___ShowPromotion_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__TouristAdController____c__DisplayClass19_0);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__TouristAdController____c__DisplayClass19_1___ShowPromotion_b__1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__TouristAdController____c__DisplayClass19_1);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields).touristPromotionExternalEvaluator;
  pOStackX_8 = (Object *)0x0;
  if ((this->fields).timer < (this->fields).timeBeforeAdShown) {
    withAd = 0;
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  bVar2 = false;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (pTVar1 != (TouristPromotionExternalEvaluator *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pTVar1->fields)._._._._.m_CachedPtr != (void *)0x0) {
      if ((this->fields).touristPromotionExternalEvaluator ==
          (TouristPromotionExternalEvaluator *)0x0) goto code_?;
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Object);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (iRam_? != 0) {
        uVar3 = (uint)((ulonglong)&pOStackX_8 >> 0xc);
        uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
        do {
          uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
          puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
          LOCK();
          bVar7 = uVar5 == *puVar6;
          if (bVar7) {
            *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
          }
          UNLOCK();
        } while (!bVar7);
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVGameControllerBase);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pOVar8 = pOStackX_8;
      pGVar9 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
      if (pGVar9 == (GameSessionData *)0x0) goto code_?;
      if ((pGVar9->fields).embedded == 0) {
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__UnityEngine__Object);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__UnityEngine__Object);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (pOVar8 != (Object *)0x0) {
          if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
            FUN_?();
          }
          bVar2 = pOVar8[1].klass != (Object__Class *)0x0;
        }
        if (bVar2) {
          object = (Object *)FUN_?(TypeInfo__TouristAdController____c__DisplayClass19_0);
          pOVar8 = pOStackX_8;
          if (object == (Object *)0x0) goto code_?;
          bVar2 = iRam_? != 0;
          object[1].monitor = (MonitorData *)this;
          if (bVar2) {
            uVar3 = (uint)((ulonglong)&object[1].monitor >> 0xc);
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
          if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
            FUN_?();
          }
          pOVar10 = (Object__Class *)
                   UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                             (pOVar8,
                              TouristPromotion_MethodInfo__UnityEngine__Object__Instantiate<TouristPromotion>_TouristPromotion_
                             );
          bVar2 = iRam_? != 0;
          object[1].klass = pOVar10;
          if (bVar2) {
            uVar3 = (uint)((ulonglong)(object + 1) >> 0xc);
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
          pOVar10 = object[1].klass;
          if (pOVar10 == (Object__Class *)0x0) goto code_?;
          this_00 = (pOVar10->_0).element_class;
          *(bool *)&(pOVar10->_0).castClass = withAd;
          if (this_00 == (Il2CppClass *)0x0) goto code_?;
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    ((GameObject *)this_00,withAd,(MethodInfo *)0x0);
          pGVar11 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                             ((Component *)this,(MethodInfo *)0x0);
          this_03 = (ExecuteEvents_EventFunction_1_System_Object_ *)
                    FUN_?(
                                 TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                                 );
          UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::
          Object]::ExecuteEvents_EventFunction_1_System_Object___ctor
                    (this_03,object,
                     MethodInfo__TouristAdController____c__DisplayClass19_0___ShowPromotion_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                     ,(MethodInfo *)0x0);
          if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
            FUN_?();
          }
          goto code_?;
        }
      }
    }
  }
  pOVar8 = (Object *)FUN_?(TypeInfo__TouristAdController____c__DisplayClass19_1);
  if (pOVar8 != (Object *)0x0) {
    bVar2 = iRam_? != 0;
    pOVar8[1].monitor = (MonitorData *)this;
    if (bVar2) {
      uVar3 = (uint)((ulonglong)&pOVar8[1].monitor >> 0xc);
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
    original = (this->fields).generalPromotionPrefab;
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    pOVar10 = (Object__Class *)
             UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                       ((Object *)original,
                        AdIntegration__InHouse__GeneralPromotionAd_MethodInfo__UnityEngine__Object__Instantiate<AdIntegration::InHouse::GeneralPromotionAd>_AdIntegration__InHouse__GeneralPromotionAd_
                       );
    pOVar8[1].klass = pOVar10;
    if (iRam_? != 0) {
      uVar3 = (uint)((ulonglong)(pOVar8 + 1) >> 0xc);
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
    pPStack_12 = (this->fields).touristLooksData;
    if (iRam_? != 0) {
      uVar3 = (uint)((ulonglong)&pPStack_12 >> 0xc);
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
    uStack_13 = (ulonglong)CONCAT11(1,withAd);
    pOVar10 = pOVar8[1].klass;
    if (pOVar10 != (Object__Class *)0x0) {
      AdIntegration::InHouse::GeneralPromotionAd::GeneralPromotionAd_Initialize
                ((GeneralPromotionAd *)pOVar10,pPStack_12,GeneralPromotionType__Enum_WithAd,1,
                 (MethodInfo *)0x0);
      pTVar14 = (Text *)(pOVar10->_0).typeMetadataHandle;
      *(bool *)((longlong)&(pOVar10->_0).properties + 5) = withAd;
      *(bool *)((longlong)&(pOVar10->_0).properties + 4) = 1;
      pSVar15 = AdIntegration::InHouse::GeneralPromotionAd::GeneralPromotionAd_get_StartContinueText
                          ((GeneralPromotionAd *)pOVar10,(MethodInfo *)0x0);
      if (pTVar14 != (Text *)0x0) {
        (*(pTVar14->klass->vtable).set_text.methodPtr)(pTVar14,pSVar15);
        this_01 = (Button *)(pOVar10->_0).generic_class;
        if (this_01 != (Button *)0x0) {
          UnityEngine.UI.dll::UnityEngine::UI::Selectable::Selectable_set_interactable
                    ((Selectable *)this_01,1,(MethodInfo *)0x0);
          this_02 = (Image *)(pOVar10->_0).interopData;
          if ((this_02 != (Image *)0x0) &&
             (pGVar11 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                 ((Component *)this_02,(MethodInfo *)0x0),
             pGVar11 != (GameObject *)0x0)) {
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                      (pGVar11,*(bool *)((longlong)&(pOVar10->_0).properties + 5),(MethodInfo *)0x0);
            pGVar11 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                               ((Component *)this,(MethodInfo *)0x0);
            this_03 = (ExecuteEvents_EventFunction_1_System_Object_ *)
                      FUN_?(
                                   TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                                   );
            UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::
            Object]::ExecuteEvents_EventFunction_1_System_Object___ctor
                      (this_03,pOVar8,
                       MethodInfo__TouristAdController____c__DisplayClass19_1___ShowPromotion_b__1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                       ,(MethodInfo *)0x0);
            if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
              FUN_?();
            }
code_?:
            UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
            ExecuteEvents_ExecuteHierarchy
                      (pGVar11,(BaseEventData *)0x0,this_03,
                       UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                      );
            return;
          }
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar16 = (code *)swi(3);
  (*pcVar16)();
  return;
}


/* Void ShowPromotionOrAd(UnityAction`2[System.Boolean,System.Boolean]) */

void Assembly-CSharp.dll::TouristAdController::TouristAdController_ShowPromotionOrAd
               (TouristAdController *this,UnityAction_2_System_Boolean_System_Boolean_ *onPop,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar1 = iRam_? != 0;
  (this->fields).eligibleForPromotionOrAd = 0;
  (this->fields).onPromotionWasPopped = onPop;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).onPromotionWasPopped >> 0xc);
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
  bVar6 = MVClientSettings::MVClientSettings_get_InterstitialsAdsEnabled((MethodInfo *)0x0);
  if (bVar6 == 0) {
    bVar6 = 0;
  }
  else {
    pIVar7 = MVGameControllerBase::MVGameControllerBase_get_AdManager((MethodInfo *)0x0);
    if (pIVar7 == (IAdManager *)0x0) goto code_?;
    bVar6 = FUN_?(5,TypeInfo__Assets__Scripts__AdIntegration__IAdManager);
  }
  bVar1 = cRam_? == '\0';
  (this->fields).withAd = bVar6;
  if (bVar1) {
    FUN_?(&TypeInfo__MVClientSettings);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (((TypeInfo__MVClientSettings->static_fields->flags & 4) == 0) ||
     ((this->fields).showTouristPromotion == 0)) {
    bVar6 = (this->fields).withAd;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__System__Action<Assets::Scripts::AdIntegration::InterstitialAdResult>)
      ;
      LOCK();
      UNLOCK();
      FUN_?(&TypeInfo__Assets__Scripts__AdIntegration__IAdManager);
      LOCK();
      UNLOCK();
      FUN_?(&
                    MethodInfo__TouristAdController__OnAdWithoutPromotionCallback_Assets__Scripts__AdIntegration__InterstitialAdResult_
                   );
      LOCK();
      UNLOCK();
      FUN_?();
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (bVar6 != 0) {
      pIVar7 = MVGameControllerBase::MVGameControllerBase_get_AdManager((MethodInfo *)0x0);
      if (pIVar7 != (IAdManager *)0x0) {
        plVar8 = (longlong *)FUN_?(&(pIVar7->klass->_0).byval_arg);
        str0 = StringLiteral_TouristAdController___Show_Ad_Wi;
        str1 = (String *)0x0;
        if (plVar8 != (longlong *)0x0) {
          str1 = (String *)(**(code **)(*plVar8 + 0x168))(plVar8,*(undefined8 *)(*plVar8 + 0x170));
        }
        mscorlib.dll::System::String::String_Concat_4(str0,str1,(MethodInfo *)0x0);
        pIVar7 = MVGameControllerBase::MVGameControllerBase_get_AdManager((MethodInfo *)0x0);
        this_00 = (UnityAction_1_System_Int32Enum_ *)
                  FUN_?(
                               TypeInfo__System__Action<Assets::Scripts::AdIntegration::InterstitialAdResult>
                               );
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
        UnityAction_1_System_Int32Enum___ctor
                  (this_00,(Object *)this,
                   MethodInfo__TouristAdController__OnAdWithoutPromotionCallback_Assets__Scripts__AdIntegration__InterstitialAdResult_
                   ,(MethodInfo *)0x0);
        if (pIVar7 != (IAdManager *)0x0) {
          FUN_?();
          return;
        }
      }
code_?:
      FUN_?();
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    if (cRam_? == '\0') {
      FUN_?(&StringLiteral_TouristAdController___OnPromotio);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pUVar10 = (this->fields).onPromotionWasPopped;
    if (pUVar10 != (UnityAction_2_System_Boolean_System_Boolean_ *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(pUVar10->fields)._._.invoke_impl)
                ((pUVar10->fields)._._.method_code,1,(this->fields).withAd,
                 (pUVar10->fields)._._.method);
      return;
    }
  }
  else {
    TouristAdController_ShowPromotion(this,(this->fields).withAd,(MethodInfo *)0x0);
  }
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::TouristAdController::TouristAdController_Update
               (TouristAdController *this,MethodInfo *method)

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


/* TouristAdController() */

void Assembly-CSharp.dll::TouristAdController::TouristAdController__ctor
               (TouristAdController *this,MethodInfo *method)

{
  bVar1 = cRam_? == '\0';
  (this->fields).timeBeforeAdShown = 180.0;
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
                while (ppMVar16 = ppMVar15 + 0x3052aacd,
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

bool Assembly-CSharp.dll::TouristAdController::
     TouristAdController_get_IsPromotionOrAdWithoutPromotionAvailable
               (TouristAdController *this,MethodInfo *method)

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
              if (((byte)((uint)TypeInfo__MVClientSettings->static_fields->flags >> 2) &
                   (this->fields).showTouristPromotion & 1) == 0) {
                if (cRam_? == '\0') {
                  FUN_?(&TypeInfo__Assets__Scripts__AdIntegration__IAdManager);
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                if (cRam_? == '\0') {
                  FUN_?(&TypeInfo__MVClientSettings);
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                if ((TypeInfo__MVClientSettings->static_fields->flags & 4) == 0) {
                  bVar9 = true;
                }
                else {
                  bVar9 = (this->fields).showTouristPromotion == 0;
                }
                bVar8 = MVClientSettings::MVClientSettings_get_InterstitialsAdsEnabled
                                  ((MethodInfo *)0x0);
                if (cRam_? == '\0') {
                  FUN_?(&TypeInfo__MVGameControllerBase);
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                pMVar6 = TypeInfo__MVGameControllerBase->static_fields->instance;
                if ((pMVar6 != (MVGameControllerBase *)0x0) &&
                   (lVar10 = (*(pMVar6->klass->vtable).__unknown.methodPtr)
                                       (pMVar6,(pMVar6->klass->vtable).__unknown.method),
                   lVar10 != 0)) {
                  bVar7 = FUN_?(5,TypeInfo__Assets__Scripts__AdIntegration__IAdManager,
                                        lVar10);
                  return bVar7 & bVar9 & bVar8;
                }
                goto code_?;
              }
              bVar8 = 1;
            }
            return bVar8;
          }
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar11 = (code *)swi(3);
  bVar8 = (*pcVar11)();
  return bVar8;
}

