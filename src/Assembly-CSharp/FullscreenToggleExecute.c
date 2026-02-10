
/* Void Awake() */

void Assembly-CSharp.dll::FullscreenToggleExecute::FullscreenToggleExecute_Awake
               (FullscreenToggleExecute *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__FullScreenController);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__FullscreenToggleExecute__FullscreenChanged_bool_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__FullscreenToggleExecute__StartSetValue__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Assets__Scripts__AdIntegration__IAdManager);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ToggleStateHandlerOnStartSetValue);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Events__UnityAction<bool>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__FullScreenController->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__FullScreenController);
  }
  pUVar1 = TypeInfo__FullScreenController->static_fields->OnFullScreenChange;
  pDVar2 = (Delegate *)FUN_?(TypeInfo__UnityEngine__Events__UnityAction<bool>);
  FUN_?(pDVar2,this);
  pDVar2 = mscorlib.dll::System::Delegate::Delegate_Combine
                     ((Delegate *)pUVar1,pDVar2,(MethodInfo *)0x0);
  pUVar3 = TypeInfo__UnityEngine__Events__UnityAction<bool>;
  if (pDVar2 == (Delegate *)0x0) {
    TypeInfo__FullScreenController->static_fields->OnFullScreenChange =
         (UnityAction_1_System_Boolean_ *)0x0;
  }
  else {
    pUVar1 = (UnityAction_1_System_Boolean_ *)
             FUN_?(pDVar2,TypeInfo__UnityEngine__Events__UnityAction<bool>);
    if (pUVar1 == (UnityAction_1_System_Boolean_ *)0x0) {
      FUN_?(pDVar2,pUVar3);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    TypeInfo__FullScreenController->static_fields->OnFullScreenChange = pUVar1;
    pUVar3 = TypeInfo__UnityEngine__Events__UnityAction<bool>;
    lVar5 = FUN_?(pDVar2,TypeInfo__UnityEngine__Events__UnityAction<bool>);
    if (lVar5 == 0) {
      FUN_?(pDVar2,pUVar3);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if (iRam_? != 0) {
    uVar6 = (uint)((ulonglong)&TypeInfo__FullScreenController->static_fields->OnFullScreenChange >>
                   0xc);
    lVar5 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
    do {
      uVar7 = *(ulonglong *)(lVar5 + 0xADDR);
      puVar8 = (ulonglong *)(lVar5 + 0xADDR);
      LOCK();
      bVar9 = uVar7 == *puVar8;
      if (bVar9) {
        *puVar8 = uVar7 | 1L << (uVar6 & 0x3f);
      }
      UNLOCK();
    } while (!bVar9);
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar10 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if ((pMVar10 != (MVGameControllerBase *)0x0) &&
     (lVar5 = (*(pMVar10->klass->vtable).__unknown.methodPtr)
                         (pMVar10,(pMVar10->klass->vtable).__unknown.method), lVar5 != 0)) {
    cVar11 = FUN_?(10);
    if (cVar11 != '\0') {
      this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)this,(MethodInfo *)0x0);
      if (this_00 == (GameObject *)0x0) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (this_00,0,(MethodInfo *)0x0);
    }
    pTVar12 = (this->fields).toggleStateHandler;
    if (pTVar12 != (ToggleStateHandler *)0x0) {
      pTVar13 = (pTVar12->fields)._.OnStartSetValue;
      this_01 = (Func_1_System_Threading_Tasks_VoidTaskResult_ *)
                FUN_?(TypeInfo__ToggleStateHandlerOnStartSetValue);
      mscorlib.dll::System::Func`1[System::Threading::Tasks::VoidTaskResult]::
      Func_1_System_Threading_Tasks_VoidTaskResult___ctor
                (this_01,(Object *)this,MethodInfo__FullscreenToggleExecute__StartSetValue__,
                 (MethodInfo *)0x0);
      pTVar13 = (ToggleStateHandlerOnStartSetValue *)
                mscorlib.dll::System::Delegate::Delegate_Combine
                          ((Delegate *)pTVar13,(Delegate *)this_01,(MethodInfo *)0x0);
      if (pTVar13 == (ToggleStateHandlerOnStartSetValue *)0x0) {
        (pTVar12->fields)._.OnStartSetValue = (ToggleStateHandlerOnStartSetValue *)0x0;
      }
      else {
        pTVar14 = (ToggleStateHandlerOnStartSetValue *)0x0;
        if (pTVar13->klass == TypeInfo__ToggleStateHandlerOnStartSetValue) {
          pTVar14 = pTVar13;
        }
        if (pTVar14 == (ToggleStateHandlerOnStartSetValue *)0x0) {
          FUN_?(pTVar13);
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        (pTVar12->fields)._.OnStartSetValue = pTVar14;
        pTVar14 = (ToggleStateHandlerOnStartSetValue *)0x0;
        if (pTVar13->klass == TypeInfo__ToggleStateHandlerOnStartSetValue) {
          pTVar14 = pTVar13;
        }
        if (pTVar14 == (ToggleStateHandlerOnStartSetValue *)0x0) {
          FUN_?(pTVar13);
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      if (iRam_? != 0) {
        uVar6 = (uint)((ulonglong)&(pTVar12->fields)._.OnStartSetValue >> 0xc);
        lVar5 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
        do {
          uVar7 = *(ulonglong *)(lVar5 + 0xADDR);
          puVar8 = (ulonglong *)(lVar5 + 0xADDR);
          LOCK();
          bVar9 = uVar7 == *puVar8;
          if (bVar9) {
            *puVar8 = uVar7 | 1L << (uVar6 & 0x3f);
          }
          UNLOCK();
        } while (!bVar9);
      }
      return;
    }
  }
code_?:
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void ExecuteToggleState(Boolean, UnityAction`1[System.Boolean]) */

void Assembly-CSharp.dll::FullscreenToggleExecute::FullscreenToggleExecute_ExecuteToggleState
               (FullscreenToggleExecute *this,bool toggleState,
               UnityAction_1_System_Boolean_ *toggleCallback,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__FullScreenController);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__FullscreenToggleExecute____c__DisplayClass3_0___ExecuteToggleState_b__0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__FullscreenToggleExecute____c__DisplayClass3_0);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Fullscreen_is_not_supported_in_u000A);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__FullScreenController->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__FullScreenController);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__FullScreenController->_1).field_0x1c == 0) {
    FUN_?();
  }
  bVar1 = FullScreenController::FullScreenController_IsFullscreenSupported((MethodInfo *)0x0);
  if (bVar1 == 0) {
    if (*(int *)&(TypeInfo__FullScreenController->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__FullScreenController);
    }
    if (TypeInfo__FullScreenController->static_fields->fakeFullscreen == 0) {
      object = (Object *)FUN_?(TypeInfo__FullscreenToggleExecute____c__DisplayClass3_0);
      pOVar2 = (Object__Class *)
                TM::TM__(StringLiteral_Fullscreen_is_not_supported_in_u000A,(MethodInfo *)0x0);
      if (object != (Object *)0x0) {
        bVar3 = iRam_? != 0;
        object[1].klass = pOVar2;
        if (bVar3) {
          uVar4 = (uint)((ulonglong)(object + 1) >> 0xc);
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
        pGVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)this,(MethodInfo *)0x0);
        this_01 = (ExecuteEvents_EventFunction_1_System_Object_ *)
                  FUN_?(
                               TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                               );
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]
        ::ExecuteEvents_EventFunction_1_System_Object___ctor
                  (this_01,object,
                   MethodInfo__FullscreenToggleExecute____c__DisplayClass3_0___ExecuteToggleState_b__0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                   ,(MethodInfo *)0x0);
        if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
          FUN_?();
        }
        pMVar9 = 
        UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
        ;
        if ((
            UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
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
                  (pGVar8,(IList_1_UnityEngine_Transform_ *)
                           TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                           s_InternalTransformList,(MethodInfo *)0x0);
        pLVar10 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                 s_InternalTransformList;
        if (pLVar10 != (List_1_UnityEngine_Transform_ *)0x0) {
          lVar11 = (longlong)(pLVar10->fields)._size;
          uVar4 = 0;
          if (0 < lVar11) {
            lVar12 = 0;
            lVar13 = 0x20;
            do {
              if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0)
              {
                FUN_?();
              }
              pLVar10 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                       s_InternalTransformList;
              if (pLVar10 == (List_1_UnityEngine_Transform_ *)0x0) goto code_?;
              if ((uint)(pLVar10->fields)._size <= uVar4) {
                mscorlib.dll::System::ThrowHelper::
                ThrowHelper_1_ThrowArgumentOutOfRange_IndexException((MethodInfo *)0x0);
                pcVar14 = (code *)swi(3);
                (*pcVar14)();
                return;
              }
              pTVar15 = (pLVar10->fields)._items;
              if (pTVar15 == (Transform__Array *)0x0) goto code_?;
              if ((uint)pTVar15->max_length <= uVar4) {
                FUN_?();
                pcVar14 = (code *)swi(3);
                (*pcVar14)();
                return;
              }
              this_00 = *(Component **)((longlong)pTVar15->vector + lVar13 + -0x20);
              if (this_00 == (Component *)0x0) goto code_?;
              pGVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                  (this_00,(MethodInfo *)0x0);
              bVar1 = UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                      ExecuteEvents_Execute_18
                                (pGVar8,(BaseEventData *)0x0,this_01,
                                 (pMVar9->field7_0x38).rgctx_data[1].method);
              if (bVar1 != 0) {
                UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          (this_00,(MethodInfo *)0x0);
                return;
              }
              uVar4 = uVar4 + 1;
              lVar12 = lVar12 + 1;
              lVar13 = lVar13 + 8;
            } while (lVar12 < lVar11);
          }
          return;
        }
code_?:
        FUN_?();
        pcVar14 = (code *)swi(3);
        (*pcVar14)();
        return;
      }
      goto code_?;
    }
  }
  if (toggleCallback != (UnityAction_1_System_Boolean_ *)0x0) {
    (*(toggleCallback->fields)._._.invoke_impl)
              ((toggleCallback->fields)._._.method_code,toggleState ^ 1,
               (toggleCallback->fields)._._.method);
    if (*(int *)&(TypeInfo__FullScreenController->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__FullScreenController,0);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__FullScreenController->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (TypeInfo__FullScreenController->static_fields->initialized != 0) {
      if (*(int *)&(TypeInfo__FullScreenController->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (toggleState != TypeInfo__FullScreenController->static_fields->fullScreen) {
        if (*(int *)&(TypeInfo__FullScreenController->_1).field_0x1c == 0) {
          FUN_?();
        }
        bVar1 = FullScreenController::FullScreenController_IsFullscreenSupported((MethodInfo *)0x0);
        if (bVar1 == 0) {
          if (*(int *)&(TypeInfo__FullScreenController->_1).field_0x1c == 0) {
            FUN_?(TypeInfo__FullScreenController);
          }
          if (TypeInfo__FullScreenController->static_fields->fakeFullscreen == 0) {
            return;
          }
        }
        if (*(int *)&(TypeInfo__FullScreenController->_1).field_0x1c == 0) {
          FUN_?(TypeInfo__FullScreenController);
        }
        TypeInfo__FullScreenController->static_fields->fullScreen = toggleState;
        if (bVar1 == 0) {
          if (*(int *)&(TypeInfo__FullScreenController->_1).field_0x1c == 0) {
            FUN_?();
          }
          if (TypeInfo__FullScreenController->static_fields->fakeFullscreen != 0) {
            if (*(int *)&(TypeInfo__FullScreenController->_1).field_0x1c == 0) {
              FUN_?();
            }
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__FullScreenController);
              LOCK();
              UNLOCK();
              FUN_?(&TypeInfo__BrowserComm__ToJavaScript);
              LOCK();
              UNLOCK();
              FUN_?(&StringLiteral_fakeFullScreenOff);
              LOCK();
              UNLOCK();
              FUN_?(&StringLiteral_fakeFullScreenOn);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            if (*(int *)&(TypeInfo__FullScreenController->_1).field_0x1c == 0) {
              FUN_?();
            }
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__FullScreenController);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            if (*(int *)&(TypeInfo__FullScreenController->_1).field_0x1c == 0) {
              FUN_?();
            }
            TypeInfo__FullScreenController->static_fields->
            _WaitingForFullscreenChange_k__BackingField = 1;
            if (TypeInfo__FullScreenController->static_fields->fullScreen == 0) {
              MVar16 = Misc::OrientationControl::OrientationControl_get_CurrentOrientation
                                 ((MethodInfo *)0x0);
              if (*(int *)&(TypeInfo__FullScreenController->_1).field_0x1c == 0) {
                FUN_?(TypeInfo__FullScreenController);
              }
              VVar17 = FullScreenController::FullScreenController_GetWidthHeight
                                 (MVar16,TypeInfo__FullScreenController->static_fields->
                                         screenWidthBeforeFullscreen,
                                  TypeInfo__FullScreenController->static_fields->
                                  screenHeightBeforeFullscreen,(MethodInfo *)0x0);
              UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_SetResolution_2
                        (VVar17.Item1,VVar17.Item2,0,(MethodInfo *)0x0);
              pSVar18 = StringLiteral_fakeFullScreenOff;
              if (*(int *)&(TypeInfo__BrowserComm__ToJavaScript->_1).field_0x1c == 0) {
                FUN_?();
                pSVar18 = StringLiteral_fakeFullScreenOff;
              }
            }
            else {
              MVar16 = Misc::OrientationControl::OrientationControl_get_CurrentOrientation
                                 ((MethodInfo *)0x0);
              pcVar14 = pcRam_?;
              if ((pcRam_? == (code *)0x0) &&
                 (pcVar14 = (code *)FUN_?(&UNK_?), pcVar14 == (code *)0x0)) {
                uVar19 = func_?(&UNK_?);
                FUN_?(uVar19,0);
                pcVar14 = (code *)swi(3);
                (*pcVar14)();
                return;
              }
              pcRam_? = pcVar14;
              widthInput = (*pcRam_?)();
              pcVar14 = pcRam_?;
              if ((pcRam_? == (code *)0x0) &&
                 (pcVar14 = (code *)FUN_?(&UNK_?), pcVar14 == (code *)0x0)) {
                uVar19 = func_?(&UNK_?);
                FUN_?(uVar19,0);
                pcVar14 = (code *)swi(3);
                (*pcVar14)();
                return;
              }
              pcRam_? = pcVar14;
              heightInput = (*pcRam_?)();
              if (*(int *)&(TypeInfo__FullScreenController->_1).field_0x1c == 0) {
                FUN_?();
              }
              VVar17 = FullScreenController::FullScreenController_GetWidthHeight
                                 (MVar16,widthInput,heightInput,(MethodInfo *)0x0);
              UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_SetResolution_2
                        (VVar17.Item1,VVar17.Item2,0,(MethodInfo *)0x0);
              pSVar18 = StringLiteral_fakeFullScreenOn;
              if (*(int *)&(TypeInfo__BrowserComm__ToJavaScript->_1).field_0x1c == 0) {
                FUN_?();
                pSVar18 = StringLiteral_fakeFullScreenOn;
              }
            }
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__System__Object);
              LOCK();
              UNLOCK();
              FUN_?(&TypeInfo__BrowserComm__ToJavaScript);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            args = (Object__Array *)FUN_?(TypeInfo__System__Object);
            if (*(int *)&(TypeInfo__BrowserComm__ToJavaScript->_1).field_0x1c == 0) {
              FUN_?();
            }
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__BrowserComm);
              LOCK();
              UNLOCK();
              FUN_?(&TypeInfo__UnityEngine__Debug);
              LOCK();
              UNLOCK();
              FUN_?(&TypeInfo__BrowserComm__ToJavaScript);
              LOCK();
              UNLOCK();
              FUN_?(&StringLiteral_Would_have_sent_function__);
              LOCK();
              UNLOCK();
              FUN_?(&StringLiteral___to_JSBridge_with_args__);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            if (*(int *)&(TypeInfo__BrowserComm->_1).field_0x1c == 0) {
              FUN_?(TypeInfo__BrowserComm);
            }
            str2 = StringLiteral___to_JSBridge_with_args__;
            str0 = StringLiteral_Would_have_sent_function__;
            if (TypeInfo__BrowserComm->static_fields->enableExternalCall == 0) {
              if (args == (Object__Array *)0x0) {
                str3 = (String *)0x0;
              }
              else {
                pOVar20 = args->klass;
                uVar19._0_2_ = pOVar20[1]._0.this_arg.attrs;
                uVar19._2_1_ = pOVar20[1]._0.this_arg.type;
                uVar19._3_5_ = *(undefined5 *)&pOVar20[1]._0.this_arg.field_0xb;
                str3 = (String *)(*(code *)pOVar20[1]._0.this_arg.data)(args,uVar19);
              }
              pSVar18 = mscorlib.dll::System::String::String_Concat_6
                                  (str0,pSVar18,str2,str3,(MethodInfo *)0x0);
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
              pIVar21 = TypeInfo__UnityEngine__Debug->static_fields->s_Logger;
              if (pIVar21 != (ILogger_1 *)0x0) {
                FUN_?(6,TypeInfo__UnityEngine__ILogger,pIVar21,3,pSVar18);
                return;
              }
              FUN_?();
              pcVar14 = (code *)swi(3);
              (*pcVar14)();
              return;
            }
            if (*(int *)&(TypeInfo__BrowserComm__ToJavaScript->_1).field_0x1c == 0) {
              FUN_?();
            }
            pSVar18 = BrowserComm+ToJavaScript::BrowserComm_ToJavaScript_ToNameSpace
                                (pSVar18,(MethodInfo *)0x0);
            pSVar18 = JSBridge::JSBridge_BuildInvocationForArguments(pSVar18,args,(MethodInfo *)0x0)
            ;
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__UnityEngine__Debug);
              LOCK();
              UNLOCK();
              FUN_?(&StringLiteral_Attempting_to_use_js_eval_in_non);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
              FUN_?();
            }
            UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                      ((Object *)pSVar18,(MethodInfo *)0x0);
            pSVar18 = StringLiteral_Attempting_to_use_js_eval_in_non;
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
            pIVar21 = TypeInfo__UnityEngine__Debug->static_fields->s_Logger;
            if (pIVar21 != (ILogger_1 *)0x0) {
              FUN_?(6,TypeInfo__UnityEngine__ILogger,pIVar21,2,pSVar18);
              return;
            }
            FUN_?();
            pcVar14 = (code *)swi(3);
            (*pcVar14)();
            return;
          }
        }
        else {
          if (*(int *)&(TypeInfo__FullScreenController->_1).field_0x1c == 0) {
            FUN_?();
          }
          FullScreenController::FullScreenController_HandleSupportedFullscreenStateChange
                    ((MethodInfo *)0x0);
        }
      }
    }
    return;
  }
code_?:
  FUN_?();
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}


/* Void FullscreenChanged(Boolean) */

void Assembly-CSharp.dll::FullscreenToggleExecute::FullscreenToggleExecute_FullscreenChanged
               (FullscreenToggleExecute *this,bool fullscreenState,MethodInfo *method)

{
  pTVar1 = (this->fields).toggleStateHandler;
  if (pTVar1 != (ToggleStateHandler *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Debug,CONCAT71(in_register_00000011,fullscreenState),0);
      LOCK();
      UNLOCK();
      FUN_?(&StringLiteral_Overriding_toggle_state_while_wa);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if ((pTVar1->fields)._.waitingForToggleCallback != 0) {
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                ((Object *)StringLiteral_Overriding_toggle_state_while_wa,(MethodInfo *)0x0);
    }
    pTVar2 = pTVar1->klass;
    (pTVar1->fields)._.toggleState = fullscreenState;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(pTVar2->vtable).UpdateToggleState.methodPtr)
              (pTVar1,(pTVar2->vtable).UpdateToggleState.method);
    return;
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Boolean StartSetValue() */

bool Assembly-CSharp.dll::FullscreenToggleExecute::FullscreenToggleExecute_StartSetValue
               (FullscreenToggleExecute *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__FullScreenController);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__FullScreenController->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__FullScreenController);
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__FullScreenController);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__FullScreenController->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__FullScreenController);
  }
  return TypeInfo__FullScreenController->static_fields->fullScreen;
}

