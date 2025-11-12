
/* Void Awake() */

void Assembly-CSharp.dll::AdUIWithTimeout::AdUIWithTimeout_Awake
               (AdUIWithTimeout *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__Assets__Scripts__AdIntegration__IAdManager);
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
      uVar3 = 0;
      lVar4 = *plVar2;
      if (*(ushort *)(lVar4 + 0x12e) != 0) {
        do {
          if (*(IAdManager__Class **)(*(longlong *)(lVar4 + 0xb0) + (ulonglong)uVar3 * 0x10) ==
              TypeInfo__Assets__Scripts__AdIntegration__IAdManager) {
            puVar5 = (undefined8 *)
                     ((longlong)
                      (*(int *)(*(longlong *)(lVar4 + 0xb0) + 8 + (ulonglong)uVar3 * 0x10) + 8) *
                      0x10 + 0x138 + lVar4);
            goto code_?;
          }
          uVar3 = uVar3 + 1;
        } while (uVar3 < *(ushort *)(lVar4 + 0x12e));
      }
      puVar5 = (undefined8 *)FUN_?(plVar2);
code_?:
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)*puVar5)(plVar2,this,puVar5[1],(code *)*puVar5);
      return;
    }
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void CreatePopup() */

void Assembly-CSharp.dll::AdUIWithTimeout::AdUIWithTimeout_CreatePopup
               (AdUIWithTimeout *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__AdUIWithTimeout__OnSkipClicked__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
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
                  ShowingAdsPopup_MethodInfo__UnityEngine__Object__Instantiate<ShowingAdsPopup>_ShowingAdsPopup_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__AdUIWithTimeout____c__DisplayClass17_0___CreatePopup_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__AdUIWithTimeout____c__DisplayClass17_0);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__AdUIWithTimeout____c__DisplayClass17_1___CreatePopup_b__1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__AdUIWithTimeout____c__DisplayClass17_1);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_AdUIWithTimeout_CreatePopup__Sta);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pOVar1 = (Object *)FUN_?(TypeInfo__AdUIWithTimeout____c__DisplayClass17_0);
  if (pOVar1 != (Object *)0x0) {
    *(undefined1 *)&pOVar1[1].klass = 0;
    pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this,(MethodInfo *)0x0);
    pEVar3 = (ExecuteEvents_EventFunction_1_System_Object_ *)
             FUN_?(
                          TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                          );
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
    ExecuteEvents_EventFunction_1_System_Object___ctor
              (pEVar3,pOVar1,
               MethodInfo__AdUIWithTimeout____c__DisplayClass17_0___CreatePopup_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
              (pGVar2,(BaseEventData *)0x0,pEVar3,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
              );
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
    pSVar4 = StringLiteral_False;
    if (*(char *)&pOVar1[1].klass != '\0') {
      pSVar4 = StringLiteral_True;
    }
    pSVar4 = mscorlib.dll::System::String::String_Concat_4
                       (StringLiteral_AdUIWithTimeout_CreatePopup__Sta,pSVar4,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log((Object *)pSVar4,(MethodInfo *)0x0);
    if (*(char *)&pOVar1[1].klass == '\0') {
      return;
    }
    pOVar1 = (Object *)FUN_?(TypeInfo__AdUIWithTimeout____c__DisplayClass17_1);
    original = (this->fields).showingAdPopup;
    (this->fields).popupShowing = 1;
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    pOVar5 = (Object__Class *)
             UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                       ((Object *)original,
                        ShowingAdsPopup_MethodInfo__UnityEngine__Object__Instantiate<ShowingAdsPopup>_ShowingAdsPopup_
                       );
    if (pOVar1 != (Object *)0x0) {
      bVar6 = iRam_? != 0;
      pOVar1[1].klass = pOVar5;
      if (bVar6) {
        uVar7 = (uint)((ulonglong)(pOVar1 + 1) >> 0xc);
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
      pOVar5 = pOVar1[1].klass;
      this_00 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
      UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
      NavMesh_OnNavMeshPreUpdate__ctor
                (this_00,(Object *)this,MethodInfo__AdUIWithTimeout__OnSkipClicked__,
                 (MethodInfo *)0x0);
      if (pOVar5 != (Object__Class *)0x0) {
        bVar6 = iRam_? != 0;
        (pOVar5->_0).this_arg.data.typeHandle = (Il2CppMetadataTypeHandle)this_00;
        if (bVar6) {
          uVar7 = (uint)((ulonglong)&(pOVar5->_0).this_arg >> 0xc);
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
        pcVar11 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar11 = (code *)FUN_?(&UNK_?), pcVar11 == (code *)0x0)) {
          uVar12 = func_?(&UNK_?);
          FUN_?(uVar12,0);
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        pcRam_? = pcVar11;
        uVar13 = (*pcRam_?)();
        (pOVar5->_0).byval_arg.attrs = (short)uVar13;
        (pOVar5->_0).byval_arg.type = (char)((uint)uVar13 >> 0x10);
        (pOVar5->_0).byval_arg.field_0xb = (char)((uint)uVar13 >> 0x18);
        *(undefined4 *)&(pOVar5->_0).byval_arg.field_0xc = 0x41200000;
        if (pOVar1[1].klass != (Object__Class *)0x0) {
          pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                             ((Component *)pOVar1[1].klass,(MethodInfo *)0x0);
          bVar6 = iRam_? != 0;
          (this->fields).overlayPushedToStack = pGVar2;
          if (bVar6) {
            uVar7 = (uint)((ulonglong)&(this->fields).overlayPushedToStack >> 0xc);
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
          pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                             ((Component *)this,(MethodInfo *)0x0);
          pEVar3 = (ExecuteEvents_EventFunction_1_System_Object_ *)
                   FUN_?(
                                TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                                );
          UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::
          Object]::ExecuteEvents_EventFunction_1_System_Object___ctor
                    (pEVar3,pOVar1,
                     MethodInfo__AdUIWithTimeout____c__DisplayClass17_1___CreatePopup_b__1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                     ,(MethodInfo *)0x0);
          if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
            FUN_?();
          }
          UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
          ExecuteEvents_ExecuteHierarchy
                    (pGVar2,(BaseEventData *)0x0,pEVar3,
                     UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                    );
          return;
        }
      }
    }
  }
  FUN_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void OnSkipClicked() */

void Assembly-CSharp.dll::AdUIWithTimeout::AdUIWithTimeout_OnSkipClicked
               (AdUIWithTimeout *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_AdUIWithTimeout_OnSkipClicked_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
            ((Object *)StringLiteral_AdUIWithTimeout_OnSkipClicked_,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (((pMVar1 == (MVGameControllerBase *)0x0) ||
      (pMVar2 = (pMVar1->fields).game, pMVar2 == (MVNetworkGame *)0x0)) ||
     (this_00 = (pMVar2->fields).operationRequests,
     this_00 == (MVNetworkGame_OperationRequests *)0x0)) {
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_AdAction
            (this_00,AdType__Enum_RewardedAd,AdActionType__Enum_Failure,AdContext__Enum_None,
             (MethodInfo *)0x0);
  if ((this->fields).interstitialCallback !=
      (Action_1_Assets_Scripts_AdIntegration_InterstitialAdResult_ *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Debug,2,0);
      LOCK();
      UNLOCK();
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
                    MethodInfo__AdUIWithTimeout____c__DisplayClass14_0___PopInterstitial_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
      LOCK();
      UNLOCK();
      FUN_?(&TypeInfo__AdUIWithTimeout____c__DisplayClass14_0);
      LOCK();
      UNLOCK();
      FUN_?(&StringLiteral_AdUIWithTimeout_PopInterstitial_);
      LOCK();
      UNLOCK();
      FUN_?(&StringLiteral_AdUIWithTimeout_Pop);
      LOCK();
      UNLOCK();
      FUN_?(&StringLiteral_AdUIWithTimeout_stack_is_blocked);
      LOCK();
      UNLOCK();
      FUN_?(&StringLiteral_Closing_interstitial_manager_twi);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pOVar4 = (Object *)FUN_?(TypeInfo__AdUIWithTimeout____c__DisplayClass14_0);
    if (pOVar4 != (Object *)0x0) {
      bVar5 = iRam_? != 0;
      pOVar4[1].monitor = (MonitorData *)this;
      if (bVar5) {
        uVar6 = (uint)((ulonglong)&pOVar4[1].monitor >> 0xc);
        lVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
        do {
          uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
          puVar9 = (ulonglong *)(lVar7 + 0xADDR);
          LOCK();
          bVar5 = uVar8 == *puVar9;
          if (bVar5) {
            *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
          }
          UNLOCK();
        } while (!bVar5);
      }
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                ((Object *)StringLiteral_AdUIWithTimeout_PopInterstitial_,(MethodInfo *)0x0);
      if ((this->fields).interstitialCallback ==
          (Action_1_Assets_Scripts_AdIntegration_InterstitialAdResult_ *)0x0) {
        pSVar10 = StringLiteral_Closing_interstitial_manager_twi;
        if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
          FUN_?();
          pSVar10 = StringLiteral_Closing_interstitial_manager_twi;
        }
UnityEngine_CoreModule_dll_UnityEngine_Debug_Debug_2_LogError:
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
        pIVar11 = TypeInfo__UnityEngine__Debug->static_fields->s_Logger;
        if (pIVar11 == (ILogger_1 *)0x0) {
          FUN_?();
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        FUN_?(6,TypeInfo__UnityEngine__ILogger,pIVar11,0,pSVar10);
        return;
      }
      *(undefined1 *)&pOVar4[1].klass = 1;
      pGVar12 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)this,(MethodInfo *)0x0);
      pEVar13 = (ExecuteEvents_EventFunction_1_System_Object_ *)
                FUN_?(
                             TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                             );
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
      ExecuteEvents_EventFunction_1_System_Object___ctor
                (pEVar13,pOVar4,
                 MethodInfo__AdUIWithTimeout____c__DisplayClass14_0___PopInterstitial_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                (pGVar12,(BaseEventData *)0x0,pEVar13,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                );
      if (*(char *)&pOVar4[1].klass != '\0') {
        if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
          FUN_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                  ((Object *)StringLiteral_AdUIWithTimeout_stack_is_blocked,(MethodInfo *)0x0);
        (this->fields).interstitialResultLatePop = 2;
        (this->fields).wantsToPop = 1;
        return;
      }
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                ((Object *)StringLiteral_AdUIWithTimeout_Pop,(MethodInfo *)0x0);
      AdUIWithTimeout_TryPopOverlay(this,(MethodInfo *)0x0);
      pAVar14 = (this->fields).interstitialCallback;
      if (pAVar14 != (Action_1_Assets_Scripts_AdIntegration_InterstitialAdResult_ *)0x0) {
        (*(pAVar14->fields)._._.invoke_impl)
                  ((pAVar14->fields)._._.method_code,2,(pAVar14->fields)._._.method);
        bVar5 = iRam_? != 0;
        (this->fields).interstitialCallback =
             (Action_1_Assets_Scripts_AdIntegration_InterstitialAdResult_ *)0x0;
        if (bVar5) {
          uVar6 = (uint)((ulonglong)&(this->fields).interstitialCallback >> 0xc);
          lVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
          do {
            uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
            puVar9 = (ulonglong *)(lVar7 + 0xADDR);
            LOCK();
            bVar5 = uVar8 == *puVar9;
            if (bVar5) {
              *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
            }
            UNLOCK();
          } while (!bVar5);
        }
        return;
      }
    }
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if ((this->fields).rewardedCallback ==
      (Action_1_Assets_Scripts_AdIntegration_RewardedAdResult_ *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Debug,0);
      LOCK();
      UNLOCK();
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
                    MethodInfo__AdUIWithTimeout____c___TryPopOverlay_b__16_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
      LOCK();
      UNLOCK();
      FUN_?(&TypeInfo__AdUIWithTimeout____c);
      LOCK();
      UNLOCK();
      FUN_?(&StringLiteral_AdUIWithTimeout_TryPopOverlay__P);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
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
    pSVar10 = StringLiteral_False;
    if ((this->fields).popupShowing != 0) {
      pSVar10 = StringLiteral_True;
    }
    pSVar10 = mscorlib.dll::System::String::String_Concat_4
                        (StringLiteral_AdUIWithTimeout_TryPopOverlay__P,pSVar10,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log((Object *)pSVar10,(MethodInfo *)0x0)
    ;
    if ((this->fields).popupShowing != 0) {
      (this->fields).popupShowing = 0;
      pGVar12 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)this,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__AdUIWithTimeout____c->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__AdUIWithTimeout____c);
      }
      this_01 = TypeInfo__AdUIWithTimeout____c->static_fields->__9__16_0;
      if (this_01 == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
        if (*(int *)&(TypeInfo__AdUIWithTimeout____c->_1).field_0x1c == 0) {
          FUN_?(TypeInfo__AdUIWithTimeout____c);
        }
        object = TypeInfo__AdUIWithTimeout____c->static_fields->__9;
        this_01 = (ExecuteEvents_EventFunction_1_IUIStack_ *)
                  FUN_?(
                               TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                               );
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]
        ::ExecuteEvents_EventFunction_1_System_Object___ctor
                  ((ExecuteEvents_EventFunction_1_System_Object_ *)this_01,(Object *)object,
                   MethodInfo__AdUIWithTimeout____c___TryPopOverlay_b__16_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   ,(MethodInfo *)0x0);
        TypeInfo__AdUIWithTimeout____c->static_fields->__9__16_0 = this_01;
        if (iRam_? != 0) {
          uVar6 = (uint)((ulonglong)&TypeInfo__AdUIWithTimeout____c->static_fields->__9__16_0 >>
                         0xc);
          puVar9 = (ulonglong *)((ulonglong)((uVar6 & 0x1fffff) >> 6) * 8 + 0xADDR);
          do {
            uVar15 = *puVar9;
            LOCK();
            uVar8 = *puVar9;
            if (uVar15 == uVar8) {
              *puVar9 = uVar15 | 1L << (uVar6 & 0x3f);
            }
            UNLOCK();
          } while (uVar15 != uVar8);
        }
      }
      if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                (pGVar12,(BaseEventData *)0x0,
                 (ExecuteEvents_EventFunction_1_System_Object_ *)this_01,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                );
    }
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug,2,0);
    LOCK();
    UNLOCK();
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
                  MethodInfo__AdUIWithTimeout____c__DisplayClass15_0___PopRewardedVideo_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__AdUIWithTimeout____c__DisplayClass15_0);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_AdUIWithTimeout_Pop);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_AdUIWithTimeout_stack_is_blocked);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Closing_rewarded_ad_manager_twic);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_AdUIWithTimeout_PopRewardedVideo);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pOVar4 = (Object *)FUN_?(TypeInfo__AdUIWithTimeout____c__DisplayClass15_0);
  if (pOVar4 != (Object *)0x0) {
    bVar5 = iRam_? != 0;
    pOVar4[1].monitor = (MonitorData *)this;
    if (bVar5) {
      uVar6 = (uint)((ulonglong)&pOVar4[1].monitor >> 0xc);
      lVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
      do {
        uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
        puVar9 = (ulonglong *)(lVar7 + 0xADDR);
        LOCK();
        bVar5 = uVar8 == *puVar9;
        if (bVar5) {
          *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
        }
        UNLOCK();
      } while (!bVar5);
    }
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
              ((Object *)StringLiteral_AdUIWithTimeout_PopRewardedVideo,(MethodInfo *)0x0);
    if ((this->fields).rewardedCallback ==
        (Action_1_Assets_Scripts_AdIntegration_RewardedAdResult_ *)0x0) {
      pSVar10 = StringLiteral_Closing_rewarded_ad_manager_twic;
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
        pSVar10 = StringLiteral_Closing_rewarded_ad_manager_twic;
      }
      goto UnityEngine_CoreModule_dll_UnityEngine_Debug_Debug_2_LogError;
    }
    *(undefined1 *)&pOVar4[1].klass = 1;
    pGVar12 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)this,(MethodInfo *)0x0);
    pEVar13 = (ExecuteEvents_EventFunction_1_System_Object_ *)
              FUN_?(
                           TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                           );
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
    ExecuteEvents_EventFunction_1_System_Object___ctor
              (pEVar13,pOVar4,
               MethodInfo__AdUIWithTimeout____c__DisplayClass15_0___PopRewardedVideo_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
              (pGVar12,(BaseEventData *)0x0,pEVar13,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
              );
    if (*(char *)&pOVar4[1].klass != '\0') {
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                ((Object *)StringLiteral_AdUIWithTimeout_stack_is_blocked,(MethodInfo *)0x0);
      (this->fields).rewardedAdResultLatePop = 2;
      (this->fields).wantsToPop = 1;
      return;
    }
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
              ((Object *)StringLiteral_AdUIWithTimeout_Pop,(MethodInfo *)0x0);
    AdUIWithTimeout_TryPopOverlay(this,(MethodInfo *)0x0);
    pAVar16 = (this->fields).rewardedCallback;
    if (pAVar16 != (Action_1_Assets_Scripts_AdIntegration_RewardedAdResult_ *)0x0) {
      (*(pAVar16->fields)._._.invoke_impl)
                ((pAVar16->fields)._._.method_code,2,(pAVar16->fields)._._.method);
      bVar5 = iRam_? != 0;
      (this->fields).rewardedCallback =
           (Action_1_Assets_Scripts_AdIntegration_RewardedAdResult_ *)0x0;
      if (bVar5) {
        uVar6 = (uint)((ulonglong)&(this->fields).rewardedCallback >> 0xc);
        lVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
        do {
          uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
          puVar9 = (ulonglong *)(lVar7 + 0xADDR);
          LOCK();
          bVar5 = uVar8 == *puVar9;
          if (bVar5) {
            *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
          }
          UNLOCK();
        } while (!bVar5);
      }
      return;
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void PopInterstitial(InterstitialAdResult) */

void Assembly-CSharp.dll::AdUIWithTimeout::AdUIWithTimeout_PopInterstitial
               (AdUIWithTimeout *this,InterstitialAdResult__Enum adResult,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
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
                  MethodInfo__AdUIWithTimeout____c__DisplayClass14_0___PopInterstitial_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__AdUIWithTimeout____c__DisplayClass14_0);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_AdUIWithTimeout_PopInterstitial_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_AdUIWithTimeout_Pop);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_AdUIWithTimeout_stack_is_blocked);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Closing_interstitial_manager_twi);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  object = (Object *)FUN_?(TypeInfo__AdUIWithTimeout____c__DisplayClass14_0);
  if (object != (Object *)0x0) {
    bVar1 = iRam_? != 0;
    object[1].monitor = (MonitorData *)this;
    if (bVar1) {
      uVar2 = (uint)((ulonglong)&object[1].monitor >> 0xc);
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
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
              ((Object *)StringLiteral_AdUIWithTimeout_PopInterstitial_,(MethodInfo *)0x0);
    if ((this->fields).interstitialCallback ==
        (Action_1_Assets_Scripts_AdIntegration_InterstitialAdResult_ *)0x0) {
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      pSVar6 = StringLiteral_Closing_interstitial_manager_twi;
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
      pIVar7 = TypeInfo__UnityEngine__Debug->static_fields->s_Logger;
      if (pIVar7 == (ILogger_1 *)0x0) {
        FUN_?();
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      FUN_?(6,TypeInfo__UnityEngine__ILogger,pIVar7,0,pSVar6);
      return;
    }
    *(undefined1 *)&object[1].klass = 1;
    root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
    this_00 = (ExecuteEvents_EventFunction_1_System_Object_ *)
              FUN_?(
                           TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                           );
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
    ExecuteEvents_EventFunction_1_System_Object___ctor
              (this_00,object,
               MethodInfo__AdUIWithTimeout____c__DisplayClass14_0___PopInterstitial_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
              (root,(BaseEventData *)0x0,this_00,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
              );
    if (*(char *)&object[1].klass != '\0') {
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                ((Object *)StringLiteral_AdUIWithTimeout_stack_is_blocked,(MethodInfo *)0x0);
      (this->fields).interstitialResultLatePop = adResult;
      (this->fields).wantsToPop = 1;
      return;
    }
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
              ((Object *)StringLiteral_AdUIWithTimeout_Pop,(MethodInfo *)0x0);
    AdUIWithTimeout_TryPopOverlay(this,(MethodInfo *)0x0);
    pAVar9 = (this->fields).interstitialCallback;
    if (pAVar9 != (Action_1_Assets_Scripts_AdIntegration_InterstitialAdResult_ *)0x0) {
      (*(pAVar9->fields)._._.invoke_impl)
                ((pAVar9->fields)._._.method_code,adResult,(pAVar9->fields)._._.method);
      bVar1 = iRam_? != 0;
      (this->fields).interstitialCallback =
           (Action_1_Assets_Scripts_AdIntegration_InterstitialAdResult_ *)0x0;
      if (bVar1) {
        uVar2 = (uint)((ulonglong)&(this->fields).interstitialCallback >> 0xc);
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
  }
  FUN_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void PopRewardedVideo(RewardedAdResult) */

void Assembly-CSharp.dll::AdUIWithTimeout::AdUIWithTimeout_PopRewardedVideo
               (AdUIWithTimeout *this,RewardedAdResult__Enum adResult,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
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
                  MethodInfo__AdUIWithTimeout____c__DisplayClass15_0___PopRewardedVideo_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__AdUIWithTimeout____c__DisplayClass15_0);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_AdUIWithTimeout_Pop);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_AdUIWithTimeout_stack_is_blocked);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Closing_rewarded_ad_manager_twic);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_AdUIWithTimeout_PopRewardedVideo);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  object = (Object *)FUN_?(TypeInfo__AdUIWithTimeout____c__DisplayClass15_0);
  if (object != (Object *)0x0) {
    bVar1 = iRam_? != 0;
    object[1].monitor = (MonitorData *)this;
    if (bVar1) {
      uVar2 = (uint)((ulonglong)&object[1].monitor >> 0xc);
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
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
              ((Object *)StringLiteral_AdUIWithTimeout_PopRewardedVideo,(MethodInfo *)0x0);
    if ((this->fields).rewardedCallback ==
        (Action_1_Assets_Scripts_AdIntegration_RewardedAdResult_ *)0x0) {
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      pSVar6 = StringLiteral_Closing_rewarded_ad_manager_twic;
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
      pIVar7 = TypeInfo__UnityEngine__Debug->static_fields->s_Logger;
      if (pIVar7 == (ILogger_1 *)0x0) {
        FUN_?();
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      FUN_?(6,TypeInfo__UnityEngine__ILogger,pIVar7,0,pSVar6);
      return;
    }
    *(undefined1 *)&object[1].klass = 1;
    root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
    this_00 = (ExecuteEvents_EventFunction_1_System_Object_ *)
              FUN_?(
                           TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                           );
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
    ExecuteEvents_EventFunction_1_System_Object___ctor
              (this_00,object,
               MethodInfo__AdUIWithTimeout____c__DisplayClass15_0___PopRewardedVideo_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
              (root,(BaseEventData *)0x0,this_00,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
              );
    if (*(char *)&object[1].klass != '\0') {
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                ((Object *)StringLiteral_AdUIWithTimeout_stack_is_blocked,(MethodInfo *)0x0);
      (this->fields).rewardedAdResultLatePop = adResult;
      (this->fields).wantsToPop = 1;
      return;
    }
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
              ((Object *)StringLiteral_AdUIWithTimeout_Pop,(MethodInfo *)0x0);
    AdUIWithTimeout_TryPopOverlay(this,(MethodInfo *)0x0);
    pAVar9 = (this->fields).rewardedCallback;
    if (pAVar9 != (Action_1_Assets_Scripts_AdIntegration_RewardedAdResult_ *)0x0) {
      (*(pAVar9->fields)._._.invoke_impl)
                ((pAVar9->fields)._._.method_code,adResult,(pAVar9->fields)._._.method);
      bVar1 = iRam_? != 0;
      (this->fields).rewardedCallback =
           (Action_1_Assets_Scripts_AdIntegration_RewardedAdResult_ *)0x0;
      if (bVar1) {
        uVar2 = (uint)((ulonglong)&(this->fields).rewardedCallback >> 0xc);
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
  }
  FUN_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void ShowInterstitial(Action`1[Assets.Scripts.AdIntegration.InterstitialAdResult]) */

void Assembly-CSharp.dll::AdUIWithTimeout::AdUIWithTimeout_ShowInterstitial
               (AdUIWithTimeout *this,
               Action_1_Assets_Scripts_AdIntegration_InterstitialAdResult_ *callbackFunction,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Requesting_interstitial_twice_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_AdUIWithTimeout_ShowInterstitial);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields).interstitialCallback !=
      (Action_1_Assets_Scripts_AdIntegration_InterstitialAdResult_ *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    pSVar1 = StringLiteral_Requesting_interstitial_twice_;
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
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
            ((Object *)StringLiteral_AdUIWithTimeout_ShowInterstitial,(MethodInfo *)0x0);
  bVar4 = iRam_? != 0;
  (this->fields).interstitialCallback = callbackFunction;
  if (bVar4) {
    uVar5 = (uint)((ulonglong)&(this->fields).interstitialCallback >> 0xc);
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
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__AdUIWithTimeout__OnSkipClicked__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
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
                  ShowingAdsPopup_MethodInfo__UnityEngine__Object__Instantiate<ShowingAdsPopup>_ShowingAdsPopup_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__AdUIWithTimeout____c__DisplayClass17_0___CreatePopup_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__AdUIWithTimeout____c__DisplayClass17_0);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__AdUIWithTimeout____c__DisplayClass17_1___CreatePopup_b__1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__AdUIWithTimeout____c__DisplayClass17_1);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_AdUIWithTimeout_CreatePopup__Sta);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pOVar9 = (Object *)FUN_?(TypeInfo__AdUIWithTimeout____c__DisplayClass17_0);
  if (pOVar9 != (Object *)0x0) {
    *(undefined1 *)&pOVar9[1].klass = 0;
    pGVar10 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this,(MethodInfo *)0x0);
    pEVar11 = (ExecuteEvents_EventFunction_1_System_Object_ *)
             FUN_?(
                          TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                          );
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
    ExecuteEvents_EventFunction_1_System_Object___ctor
              (pEVar11,pOVar9,
               MethodInfo__AdUIWithTimeout____c__DisplayClass17_0___CreatePopup_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
              (pGVar10,(BaseEventData *)0x0,pEVar11,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
              );
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
    if (*(char *)&pOVar9[1].klass != '\0') {
      pSVar1 = StringLiteral_True;
    }
    pSVar1 = mscorlib.dll::System::String::String_Concat_4
                       (StringLiteral_AdUIWithTimeout_CreatePopup__Sta,pSVar1,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log((Object *)pSVar1,(MethodInfo *)0x0);
    if (*(char *)&pOVar9[1].klass == '\0') {
      return;
    }
    pOVar9 = (Object *)FUN_?(TypeInfo__AdUIWithTimeout____c__DisplayClass17_1);
    original = (this->fields).showingAdPopup;
    (this->fields).popupShowing = 1;
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    pOVar12 = (Object__Class *)
             UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                       ((Object *)original,
                        ShowingAdsPopup_MethodInfo__UnityEngine__Object__Instantiate<ShowingAdsPopup>_ShowingAdsPopup_
                       );
    if (pOVar9 != (Object *)0x0) {
      bVar4 = iRam_? != 0;
      pOVar9[1].klass = pOVar12;
      if (bVar4) {
        uVar5 = (uint)((ulonglong)(pOVar9 + 1) >> 0xc);
        uVar8 = (ulonglong)((uVar5 & 0x1fffff) >> 6);
        do {
          uVar7 = *(ulonglong *)(uVar8 * 8 + 0xADDR);
          puVar6 = (ulonglong *)(uVar8 * 8 + 0xADDR);
          LOCK();
          bVar4 = uVar7 == *puVar6;
          if (bVar4) {
            *puVar6 = uVar7 | 1L << (uVar5 & 0x3f);
          }
          UNLOCK();
        } while (!bVar4);
      }
      pOVar12 = pOVar9[1].klass;
      this_00 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
      UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
      NavMesh_OnNavMeshPreUpdate__ctor
                (this_00,(Object *)this,MethodInfo__AdUIWithTimeout__OnSkipClicked__,
                 (MethodInfo *)0x0);
      if (pOVar12 != (Object__Class *)0x0) {
        bVar4 = iRam_? != 0;
        (pOVar12->_0).this_arg.data.typeHandle = (Il2CppMetadataTypeHandle)this_00;
        if (bVar4) {
          uVar5 = (uint)((ulonglong)&(pOVar12->_0).this_arg >> 0xc);
          uVar8 = (ulonglong)((uVar5 & 0x1fffff) >> 6);
          do {
            uVar7 = *(ulonglong *)(uVar8 * 8 + 0xADDR);
            puVar6 = (ulonglong *)(uVar8 * 8 + 0xADDR);
            LOCK();
            bVar4 = uVar7 == *puVar6;
            if (bVar4) {
              *puVar6 = uVar7 | 1L << (uVar5 & 0x3f);
            }
            UNLOCK();
          } while (!bVar4);
        }
        pcVar3 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
          uVar13 = func_?(&UNK_?);
          FUN_?(uVar13,0);
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pcRam_? = pcVar3;
        uVar14 = (*pcRam_?)();
        (pOVar12->_0).byval_arg.attrs = (short)uVar14;
        (pOVar12->_0).byval_arg.type = (char)((uint)uVar14 >> 0x10);
        (pOVar12->_0).byval_arg.field_0xb = (char)((uint)uVar14 >> 0x18);
        *(undefined4 *)&(pOVar12->_0).byval_arg.field_0xc = 0x41200000;
        if (pOVar9[1].klass != (Object__Class *)0x0) {
          pGVar10 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                             ((Component *)pOVar9[1].klass,(MethodInfo *)0x0);
          bVar4 = iRam_? != 0;
          (this->fields).overlayPushedToStack = pGVar10;
          if (bVar4) {
            uVar5 = (uint)((ulonglong)&(this->fields).overlayPushedToStack >> 0xc);
            uVar8 = (ulonglong)((uVar5 & 0x1fffff) >> 6);
            do {
              uVar7 = *(ulonglong *)(uVar8 * 8 + 0xADDR);
              puVar6 = (ulonglong *)(uVar8 * 8 + 0xADDR);
              LOCK();
              bVar4 = uVar7 == *puVar6;
              if (bVar4) {
                *puVar6 = uVar7 | 1L << (uVar5 & 0x3f);
              }
              UNLOCK();
            } while (!bVar4);
          }
          pGVar10 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                             ((Component *)this,(MethodInfo *)0x0);
          pEVar11 = (ExecuteEvents_EventFunction_1_System_Object_ *)
                   FUN_?(
                                TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                                );
          UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::
          Object]::ExecuteEvents_EventFunction_1_System_Object___ctor
                    (pEVar11,pOVar9,
                     MethodInfo__AdUIWithTimeout____c__DisplayClass17_1___CreatePopup_b__1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                     ,(MethodInfo *)0x0);
          if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
            FUN_?();
          }
          UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
          ExecuteEvents_ExecuteHierarchy
                    (pGVar10,(BaseEventData *)0x0,pEVar11,
                     UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                    );
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


/* Void ShowRewardedVideo(Action`1[Assets.Scripts.AdIntegration.RewardedAdResult]) */

void Assembly-CSharp.dll::AdUIWithTimeout::AdUIWithTimeout_ShowRewardedVideo
               (AdUIWithTimeout *this,
               Action_1_Assets_Scripts_AdIntegration_RewardedAdResult_ *callbackFunction,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_AdUIWithTimeout_ShowRewardedVide);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Requesting_rewarded_ad_twice_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields).rewardedCallback !=
      (Action_1_Assets_Scripts_AdIntegration_RewardedAdResult_ *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    pSVar1 = StringLiteral_Requesting_rewarded_ad_twice_;
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
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
            ((Object *)StringLiteral_AdUIWithTimeout_ShowRewardedVide,(MethodInfo *)0x0);
  bVar4 = iRam_? != 0;
  (this->fields).rewardedCallback = callbackFunction;
  if (bVar4) {
    uVar5 = (uint)((ulonglong)&(this->fields).rewardedCallback >> 0xc);
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
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__AdUIWithTimeout__OnSkipClicked__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
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
                  ShowingAdsPopup_MethodInfo__UnityEngine__Object__Instantiate<ShowingAdsPopup>_ShowingAdsPopup_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__AdUIWithTimeout____c__DisplayClass17_0___CreatePopup_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__AdUIWithTimeout____c__DisplayClass17_0);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__AdUIWithTimeout____c__DisplayClass17_1___CreatePopup_b__1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__AdUIWithTimeout____c__DisplayClass17_1);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_AdUIWithTimeout_CreatePopup__Sta);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pOVar9 = (Object *)FUN_?(TypeInfo__AdUIWithTimeout____c__DisplayClass17_0);
  if (pOVar9 != (Object *)0x0) {
    *(undefined1 *)&pOVar9[1].klass = 0;
    pGVar10 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this,(MethodInfo *)0x0);
    pEVar11 = (ExecuteEvents_EventFunction_1_System_Object_ *)
             FUN_?(
                          TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                          );
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
    ExecuteEvents_EventFunction_1_System_Object___ctor
              (pEVar11,pOVar9,
               MethodInfo__AdUIWithTimeout____c__DisplayClass17_0___CreatePopup_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
              (pGVar10,(BaseEventData *)0x0,pEVar11,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
              );
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
    if (*(char *)&pOVar9[1].klass != '\0') {
      pSVar1 = StringLiteral_True;
    }
    pSVar1 = mscorlib.dll::System::String::String_Concat_4
                       (StringLiteral_AdUIWithTimeout_CreatePopup__Sta,pSVar1,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log((Object *)pSVar1,(MethodInfo *)0x0);
    if (*(char *)&pOVar9[1].klass == '\0') {
      return;
    }
    pOVar9 = (Object *)FUN_?(TypeInfo__AdUIWithTimeout____c__DisplayClass17_1);
    original = (this->fields).showingAdPopup;
    (this->fields).popupShowing = 1;
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    pOVar12 = (Object__Class *)
             UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                       ((Object *)original,
                        ShowingAdsPopup_MethodInfo__UnityEngine__Object__Instantiate<ShowingAdsPopup>_ShowingAdsPopup_
                       );
    if (pOVar9 != (Object *)0x0) {
      bVar4 = iRam_? != 0;
      pOVar9[1].klass = pOVar12;
      if (bVar4) {
        uVar5 = (uint)((ulonglong)(pOVar9 + 1) >> 0xc);
        uVar8 = (ulonglong)((uVar5 & 0x1fffff) >> 6);
        do {
          uVar7 = *(ulonglong *)(uVar8 * 8 + 0xADDR);
          puVar6 = (ulonglong *)(uVar8 * 8 + 0xADDR);
          LOCK();
          bVar4 = uVar7 == *puVar6;
          if (bVar4) {
            *puVar6 = uVar7 | 1L << (uVar5 & 0x3f);
          }
          UNLOCK();
        } while (!bVar4);
      }
      pOVar12 = pOVar9[1].klass;
      this_00 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
      UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
      NavMesh_OnNavMeshPreUpdate__ctor
                (this_00,(Object *)this,MethodInfo__AdUIWithTimeout__OnSkipClicked__,
                 (MethodInfo *)0x0);
      if (pOVar12 != (Object__Class *)0x0) {
        bVar4 = iRam_? != 0;
        (pOVar12->_0).this_arg.data.typeHandle = (Il2CppMetadataTypeHandle)this_00;
        if (bVar4) {
          uVar5 = (uint)((ulonglong)&(pOVar12->_0).this_arg >> 0xc);
          uVar8 = (ulonglong)((uVar5 & 0x1fffff) >> 6);
          do {
            uVar7 = *(ulonglong *)(uVar8 * 8 + 0xADDR);
            puVar6 = (ulonglong *)(uVar8 * 8 + 0xADDR);
            LOCK();
            bVar4 = uVar7 == *puVar6;
            if (bVar4) {
              *puVar6 = uVar7 | 1L << (uVar5 & 0x3f);
            }
            UNLOCK();
          } while (!bVar4);
        }
        pcVar3 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
          uVar13 = func_?(&UNK_?);
          FUN_?(uVar13,0);
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pcRam_? = pcVar3;
        uVar14 = (*pcRam_?)();
        (pOVar12->_0).byval_arg.attrs = (short)uVar14;
        (pOVar12->_0).byval_arg.type = (char)((uint)uVar14 >> 0x10);
        (pOVar12->_0).byval_arg.field_0xb = (char)((uint)uVar14 >> 0x18);
        *(undefined4 *)&(pOVar12->_0).byval_arg.field_0xc = 0x41200000;
        if (pOVar9[1].klass != (Object__Class *)0x0) {
          pGVar10 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                             ((Component *)pOVar9[1].klass,(MethodInfo *)0x0);
          bVar4 = iRam_? != 0;
          (this->fields).overlayPushedToStack = pGVar10;
          if (bVar4) {
            uVar5 = (uint)((ulonglong)&(this->fields).overlayPushedToStack >> 0xc);
            uVar8 = (ulonglong)((uVar5 & 0x1fffff) >> 6);
            do {
              uVar7 = *(ulonglong *)(uVar8 * 8 + 0xADDR);
              puVar6 = (ulonglong *)(uVar8 * 8 + 0xADDR);
              LOCK();
              bVar4 = uVar7 == *puVar6;
              if (bVar4) {
                *puVar6 = uVar7 | 1L << (uVar5 & 0x3f);
              }
              UNLOCK();
            } while (!bVar4);
          }
          pGVar10 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                             ((Component *)this,(MethodInfo *)0x0);
          pEVar11 = (ExecuteEvents_EventFunction_1_System_Object_ *)
                   FUN_?(
                                TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                                );
          UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::
          Object]::ExecuteEvents_EventFunction_1_System_Object___ctor
                    (pEVar11,pOVar9,
                     MethodInfo__AdUIWithTimeout____c__DisplayClass17_1___CreatePopup_b__1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                     ,(MethodInfo *)0x0);
          if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
            FUN_?();
          }
          UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
          ExecuteEvents_ExecuteHierarchy
                    (pGVar10,(BaseEventData *)0x0,pEVar11,
                     UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                    );
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


/* Void TryPopOverlay() */

void Assembly-CSharp.dll::AdUIWithTimeout::AdUIWithTimeout_TryPopOverlay
               (AdUIWithTimeout *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
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
                  MethodInfo__AdUIWithTimeout____c___TryPopOverlay_b__16_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__AdUIWithTimeout____c);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_AdUIWithTimeout_TryPopOverlay__P);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
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
  if ((this->fields).popupShowing != 0) {
    pSVar1 = StringLiteral_True;
  }
  pSVar1 = mscorlib.dll::System::String::String_Concat_4
                     (StringLiteral_AdUIWithTimeout_TryPopOverlay__P,pSVar1,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log((Object *)pSVar1,(MethodInfo *)0x0);
  if ((this->fields).popupShowing != 0) {
    (this->fields).popupShowing = 0;
    root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__AdUIWithTimeout____c->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__AdUIWithTimeout____c);
    }
    this_00 = TypeInfo__AdUIWithTimeout____c->static_fields->__9__16_0;
    if (this_00 == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
      if (*(int *)&(TypeInfo__AdUIWithTimeout____c->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__AdUIWithTimeout____c);
      }
      object = TypeInfo__AdUIWithTimeout____c->static_fields->__9;
      this_00 = (ExecuteEvents_EventFunction_1_IUIStack_ *)
                FUN_?(
                             TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                             );
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
      ExecuteEvents_EventFunction_1_System_Object___ctor
                ((ExecuteEvents_EventFunction_1_System_Object_ *)this_00,(Object *)object,
                 MethodInfo__AdUIWithTimeout____c___TryPopOverlay_b__16_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      TypeInfo__AdUIWithTimeout____c->static_fields->__9__16_0 = this_00;
      if (iRam_? != 0) {
        uVar2 = (uint)((ulonglong)&TypeInfo__AdUIWithTimeout____c->static_fields->__9__16_0 >> 0xc);
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
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
              (root,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_System_Object_ *)this_00,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
              );
  }
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::AdUIWithTimeout::AdUIWithTimeout_Update
               (AdUIWithTimeout *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
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
                  MethodInfo__AdUIWithTimeout____c__DisplayClass11_0___Update_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__AdUIWithTimeout____c__DisplayClass11_0);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_AdUIWithTimeout_wantsToPop_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  object = (Object *)FUN_?(TypeInfo__AdUIWithTimeout____c__DisplayClass11_0);
  if (object == (Object *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  bVar2 = iRam_? != 0;
  object[1].klass = (Object__Class *)this;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)(object + 1) >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  if ((this->fields).wantsToPop != 0) {
    *(undefined1 *)&object[1].monitor = 1;
    root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
    this_00 = (ExecuteEvents_EventFunction_1_System_Object_ *)
              FUN_?(
                           TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                           );
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
    ExecuteEvents_EventFunction_1_System_Object___ctor
              (this_00,object,
               MethodInfo__AdUIWithTimeout____c__DisplayClass11_0___Update_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
              (root,(BaseEventData *)0x0,this_00,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
              );
    if (*(char *)&object[1].monitor == '\0') {
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                ((Object *)StringLiteral_AdUIWithTimeout_wantsToPop_,(MethodInfo *)0x0);
      AdUIWithTimeout_TryPopOverlay(this,(MethodInfo *)0x0);
      if ((this->fields).interstitialCallback !=
          (Action_1_Assets_Scripts_AdIntegration_InterstitialAdResult_ *)0x0) {
        pAVar7 = (this->fields).interstitialCallback;
        (*(pAVar7->fields)._._.invoke_impl)
                  ((pAVar7->fields)._._.method_code,(this->fields).interstitialResultLatePop,
                   (pAVar7->fields)._._.method);
        (this->fields).interstitialCallback =
             (Action_1_Assets_Scripts_AdIntegration_InterstitialAdResult_ *)0x0;
        func_?(&(this->fields).interstitialCallback);
      }
      if ((this->fields).rewardedCallback !=
          (Action_1_Assets_Scripts_AdIntegration_RewardedAdResult_ *)0x0) {
        pAVar8 = (this->fields).rewardedCallback;
        (*(pAVar8->fields)._._.invoke_impl)
                  ((pAVar8->fields)._._.method_code,(this->fields).rewardedAdResultLatePop,
                   (pAVar8->fields)._._.method);
        (this->fields).rewardedCallback =
             (Action_1_Assets_Scripts_AdIntegration_RewardedAdResult_ *)0x0;
        func_?(&(this->fields).rewardedCallback);
      }
      bVar2 = iRam_? != 0;
      (this->fields).wantsToPop = 0;
      (this->fields).overlayPushedToStack = (GameObject *)0x0;
      if (bVar2) {
        uVar3 = (uint)((ulonglong)&(this->fields).overlayPushedToStack >> 0xc);
        lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
        do {
          uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
          puVar6 = (ulonglong *)(lVar4 + 0xADDR);
          LOCK();
          bVar2 = uVar5 == *puVar6;
          if (bVar2) {
            *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
          }
          UNLOCK();
        } while (!bVar2);
      }
    }
  }
  return;
}

