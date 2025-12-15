
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
                  MethodInfo__FullscreenToggleExecute____c___ExecuteToggleState_b__3_0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__FullscreenToggleExecute____c);
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
      pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)this,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__FullscreenToggleExecute____c->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__FullscreenToggleExecute____c);
      }
      this_01 = TypeInfo__FullscreenToggleExecute____c->static_fields->__9__3_0;
      if (this_01 == (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)0x0) {
        if (*(int *)&(TypeInfo__FullscreenToggleExecute____c->_1).field_0x1c == 0) {
          FUN_?(TypeInfo__FullscreenToggleExecute____c);
        }
        object = TypeInfo__FullscreenToggleExecute____c->static_fields->__9;
        this_01 = (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)
                  FUN_?(
                               TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                               );
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]
        ::ExecuteEvents_EventFunction_1_System_Object___ctor
                  ((ExecuteEvents_EventFunction_1_System_Object_ *)this_01,(Object *)object,
                   MethodInfo__FullscreenToggleExecute____c___ExecuteToggleState_b__3_0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                   ,(MethodInfo *)0x0);
        TypeInfo__FullscreenToggleExecute____c->static_fields->__9__3_0 = this_01;
        if (iRam_? != 0) {
          uVar3 = (uint)((ulonglong)
                          &TypeInfo__FullscreenToggleExecute____c->static_fields->__9__3_0 >> 0xc);
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
      }
      if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
        FUN_?();
      }
      pMVar7 = 
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
        if ((pMVar7->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
          FUN_?(pMVar7);
        }
      }
      if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_GetEventChain
                (pGVar2,(IList_1_UnityEngine_Transform_ *)
                         TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                         s_InternalTransformList,(MethodInfo *)0x0);
      pLVar8 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
               s_InternalTransformList;
      if (pLVar8 != (List_1_UnityEngine_Transform_ *)0x0) {
        lVar9 = (longlong)(pLVar8->fields)._size;
        uVar3 = 0;
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
            if ((uint)(pLVar8->fields)._size <= uVar3) {
              mscorlib.dll::System::ThrowHelper::
              ThrowHelper_1_ThrowArgumentOutOfRange_IndexException((MethodInfo *)0x0);
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            pTVar13 = (pLVar8->fields)._items;
            if (pTVar13 == (Transform__Array *)0x0) goto code_?;
            if ((uint)pTVar13->max_length <= uVar3) {
              FUN_?();
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            this_00 = *(Component **)((longlong)pTVar13->vector + lVar11 + -0x20);
            if (this_00 == (Component *)0x0) goto code_?;
            pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                (this_00,(MethodInfo *)0x0);
            bVar1 = UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                     ExecuteEvents_Execute_18
                               (pGVar2,(BaseEventData *)0x0,
                                (ExecuteEvents_EventFunction_1_System_Object_ *)this_01,
                                (pMVar7->field7_0x38).rgctx_data[1].method);
            if (bVar1 != 0) {
              UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        (this_00,(MethodInfo *)0x0);
              return;
            }
            uVar3 = uVar3 + 1;
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
  }
  if (toggleCallback == (UnityAction_1_System_Boolean_ *)0x0) {
    FUN_?();
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  (*(toggleCallback->fields)._._.invoke_impl)
            ((toggleCallback->fields)._._.method_code,toggleState ^ 1,
             (toggleCallback->fields)._._.method);
  if (*(int *)&(TypeInfo__FullScreenController->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&System__Object__MethodInfo__System__Array__Empty<System::Object>______,0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__FullScreenController);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__StatHatWrapper);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__String);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__BrowserComm__ToJavaScript);
    LOCK();
    UNLOCK();
    FUN_?(&
                  void_MethodInfo__System__TupleExtensions__Deconstruct<int,_int>_System__Tuple<int,_int>__System__Int32___System__Int32__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Not_setting_fullscreen_as_it_has);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Fullscreen_supported__setting_fu);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__h_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Fake_fullscreen__trying_to_chang);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral___IsFullscreenSupported_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_FullScreenController___trying_to);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_fakeFullScreenOff);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Fullscreen_is_supported__trying_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_FullscreenActivated);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Not_setting_fullscreen_as_it_is_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_fakeFullScreenOn);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral___fake_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  values = (String__Array *)FUN_?(TypeInfo__System__String,6);
  if (values == (String__Array *)0x0) goto code_?;
  FUN_?(values,0,StringLiteral_FullScreenController___trying_to);
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
  pSVar14 = StringLiteral_False;
  if (toggleState != 0) {
    pSVar14 = StringLiteral_True;
  }
  FUN_?(values,1,pSVar14);
  FUN_?(values,2,StringLiteral___IsFullscreenSupported_);
  if (*(int *)&(TypeInfo__FullScreenController->_1).field_0x1c == 0) {
    FUN_?();
  }
  bVar1 = FullScreenController::FullScreenController_IsFullscreenSupported((MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_False);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_True);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar14 = StringLiteral_False;
  if (bVar1 != 0) {
    pSVar14 = StringLiteral_True;
  }
  FUN_?(values,3,pSVar14);
  FUN_?(values,4,StringLiteral___fake_);
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_False);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_True);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  FUN_?(values);
  mscorlib.dll::System::String::String_Concat_7(values,(MethodInfo *)0x0);
  if (TypeInfo__FullScreenController->static_fields->initialized != 0) {
    if (*(int *)&(TypeInfo__FullScreenController->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (toggleState != TypeInfo__FullScreenController->static_fields->fullScreen) {
      if (*(int *)&(TypeInfo__FullScreenController->_1).field_0x1c == 0) {
        FUN_?();
      }
      bVar1 = FullScreenController::FullScreenController_IsFullscreenSupported((MethodInfo *)0x0);
      if (bVar1 != 0) {
        if (*(int *)&(TypeInfo__FullScreenController->_1).field_0x1c == 0) {
          FUN_?();
        }
        if (*(int *)(lRam_? + 0xe4) == 0) {
          FUN_?();
        }
        pSVar14 = mscorlib.dll::System::Boolean::Boolean_ToString
                            ((Boolean *)&TypeInfo__FullScreenController->static_fields->fullScreen,
                             (MethodInfo *)0x0);
        mscorlib.dll::System::String::String_Concat_4
                  (StringLiteral_Fullscreen_is_supported__trying_,pSVar14,(MethodInfo *)0x0);
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__FullScreenController);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (*(int *)&(TypeInfo__FullScreenController->_1).field_0x1c == 0) {
          FUN_?(TypeInfo__FullScreenController);
        }
        TypeInfo__FullScreenController->static_fields->_WaitingForFullscreenChange_k__BackingField =
             1;
        TypeInfo__FullScreenController->static_fields->fullScreen = toggleState;
        if (TypeInfo__FullScreenController->static_fields->fullScreen == 0) {
          if (*(int *)&(TypeInfo__FullScreenController->_1).field_0x1c == 0) {
            FUN_?();
          }
          pSVar14 = mscorlib.dll::System::Int32::Int32_ToString
                              ((Int32 *)&TypeInfo__FullScreenController->static_fields->
                                         screenWidthBeforeFullscreen,(MethodInfo *)0x0);
          str3 = mscorlib.dll::System::Int32::Int32_ToString
                           ((Int32 *)&TypeInfo__FullScreenController->static_fields->
                                      screenHeightBeforeFullscreen,(MethodInfo *)0x0);
          mscorlib.dll::System::String::String_Concat_6
                    (StringLiteral_Fullscreen_supported__setting_fu,pSVar14,StringLiteral__h_,str3,
                     (MethodInfo *)0x0);
          pcVar12 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar12 = (code *)FUN_?(&UNK_?), pcVar12 == (code *)0x0)) {
            uVar15 = func_?(&UNK_?);
            FUN_?(uVar15,0);
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          pcRam_? = pcVar12;
          (*pcRam_?)(0);
          iVar16 = TypeInfo__FullScreenController->static_fields->screenWidthBeforeFullscreen;
          iVar17 = TypeInfo__FullScreenController->static_fields->screenHeightBeforeFullscreen;
          pcVar12 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar12 = (code *)FUN_?(&UNK_?,iVar17,0,0), pcVar12 == (code *)0x0)) {
            uVar15 = func_?(&UNK_?);
            FUN_?(uVar15,0);
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          pcRam_? = pcVar12;
          (*pcRam_?)(iVar16,iVar17,3,&stack0xffffffffffffffe8);
          return;
        }
        pcVar12 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar12 = (code *)FUN_?(&UNK_?), pcVar12 == (code *)0x0)) {
          uVar15 = func_?(&UNK_?);
          FUN_?(uVar15,0);
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        pcRam_? = pcVar12;
        (*pcRam_?)(&stack0xffffffffffffffe8);
        pcVar12 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar12 = (code *)FUN_?(&UNK_?), pcVar12 == (code *)0x0)) {
          uVar15 = func_?(&UNK_?);
          FUN_?(uVar15,0);
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        pcRam_? = pcVar12;
        (*pcRam_?)(&stack0xffffffffffffffd8);
        UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_SetResolution_2
                  (0,0,1,(MethodInfo *)0x0);
        if (*(int *)&(TypeInfo__FullScreenController->_1).field_0x1c == 0) {
          FUN_?(TypeInfo__FullScreenController);
        }
        if (TypeInfo__FullScreenController->static_fields->fullscreenStatCollected != 0) {
          return;
        }
        if (*(int *)&(TypeInfo__StatHatWrapper->_1).field_0x1c == 0) {
          FUN_?();
        }
        StatHatWrapper::StatHatWrapper_Count(StringLiteral_FullscreenActivated,1,(MethodInfo *)0x0);
        if (*(int *)&(TypeInfo__FullScreenController->_1).field_0x1c == 0) {
          FUN_?(TypeInfo__FullScreenController);
        }
        TypeInfo__FullScreenController->static_fields->fullscreenStatCollected = 1;
        return;
      }
      if (*(int *)&(TypeInfo__FullScreenController->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (TypeInfo__FullScreenController->static_fields->fakeFullscreen == 0) {
        return;
      }
      if (*(int *)&(TypeInfo__FullScreenController->_1).field_0x1c == 0) {
        FUN_?();
      }
      FUN_?(1);
      TypeInfo__FullScreenController->static_fields->fullScreen = toggleState;
      if (*(int *)(lRam_? + 0xe4) == 0) {
        FUN_?();
      }
      pSVar14 = mscorlib.dll::System::Boolean::Boolean_ToString
                          ((Boolean *)&TypeInfo__FullScreenController->static_fields->fullScreen,
                           (MethodInfo *)0x0);
      mscorlib.dll::System::String::String_Concat_4
                (StringLiteral_Fake_fullscreen__trying_to_chang,pSVar14,(MethodInfo *)0x0);
      if (TypeInfo__FullScreenController->static_fields->fullScreen == 0) {
        MVar18 = Misc::OrientationControl::OrientationControl_get_CurrentOrientation
                           ((MethodInfo *)0x0);
        if (*(int *)&(TypeInfo__FullScreenController->_1).field_0x1c == 0) {
          FUN_?(TypeInfo__FullScreenController);
        }
        pTVar19 = FullScreenController::FullScreenController_GetWidthHeight
                            (MVar18,TypeInfo__FullScreenController->static_fields->
                                    screenWidthBeforeFullscreen,
                             TypeInfo__FullScreenController->static_fields->
                             screenHeightBeforeFullscreen,(MethodInfo *)0x0);
        if ((
            void_MethodInfo__System__TupleExtensions__Deconstruct<int,_int>_System__Tuple<int,_int>__System__Int32___System__Int32__
            ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
          FUN_?();
        }
        if (pTVar19 == (Tuple_2_Int32_Int32_ *)0x0) {
code_?:
          FUN_?();
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_SetResolution_2
                  ((pTVar19->fields).m_Item1,(pTVar19->fields).m_Item2,0,(MethodInfo *)0x0);
        args = (Object__Array *)
               System.Core.dll::System::Linq::Enumerable::Enumerable_Empty_2
                         (System__Object__MethodInfo__System__Array__Empty<System::Object>______);
        pSVar14 = StringLiteral_fakeFullScreenOff;
        if (*(int *)&(TypeInfo__BrowserComm__ToJavaScript->_1).field_0x1c == 0) {
          FUN_?();
          pSVar14 = StringLiteral_fakeFullScreenOff;
        }
      }
      else {
        MVar18 = Misc::OrientationControl::OrientationControl_get_CurrentOrientation
                           ((MethodInfo *)0x0);
        iVar16 = UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_width
                           ((MethodInfo *)0x0);
        iVar17 = UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_height
                           ((MethodInfo *)0x0);
        if (*(int *)&(TypeInfo__FullScreenController->_1).field_0x1c == 0) {
          FUN_?();
        }
        pTVar19 = FullScreenController::FullScreenController_GetWidthHeight
                            (MVar18,iVar16,iVar17,(MethodInfo *)0x0);
        if ((
            void_MethodInfo__System__TupleExtensions__Deconstruct<int,_int>_System__Tuple<int,_int>__System__Int32___System__Int32__
            ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
          FUN_?();
        }
        if (pTVar19 == (Tuple_2_Int32_Int32_ *)0x0) goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_SetResolution_2
                  ((pTVar19->fields).m_Item1,(pTVar19->fields).m_Item2,0,(MethodInfo *)0x0);
        args = (Object__Array *)
               System.Core.dll::System::Linq::Enumerable::Enumerable_Empty_2
                         (System__Object__MethodInfo__System__Array__Empty<System::Object>______);
        pSVar14 = StringLiteral_fakeFullScreenOn;
        if (*(int *)&(TypeInfo__BrowserComm__ToJavaScript->_1).field_0x1c == 0) {
          FUN_?();
          pSVar14 = StringLiteral_fakeFullScreenOn;
        }
      }
      BrowserComm+ToJavaScript::BrowserComm_ToJavaScript_ExternalCall
                (pSVar14,args,(MethodInfo *)0x0);
      return;
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
    pSVar14 = StringLiteral_False;
    if (toggleState != 0) {
      pSVar14 = StringLiteral_True;
    }
    mscorlib.dll::System::String::String_Concat_4
              (StringLiteral_Not_setting_fullscreen_as_it_has,pSVar14,(MethodInfo *)0x0);
  }
  pFVar20 = TypeInfo__FullScreenController;
  if (*(int *)&(TypeInfo__FullScreenController->_1).field_0x1c != 0) {
    return;
  }
  ppMVar21 = (MethodInfo **)0x0;
  if (*(int *)&(TypeInfo__FullScreenController->_1).field_0x1c == 0) {
    lVar9 = _Baselib_Thread_GetCurrentThreadId_il2cpp_baselib__YA_JXZ();
    ppMVar22 = ppMVar21;
    if (lVar9 == lRam_?) {
      iRam_? = iRam_? + 1;
      lVar9 = lRam_?;
    }
    else {
      do {
        uVar3 = (uint)ppMVar22;
        LOCK();
        bVar23 = uVar3 != uRam_?;
        uVar24 = uVar3;
        uVar25 = uVar3 + 1;
        if (bVar23) {
          uVar24 = uRam_?;
          uVar25 = uRam_?;
        }
        uRam_? = uVar25;
        UNLOCK();
      } while ((bVar23) &&
              (ppMVar22 = (MethodInfo **)(ulonglong)uVar24, uVar3 = uVar24, uVar24 != 2));
      while (uVar3 != 0) {
        _Baselib_SystemFutex_Wait_il2cpp_baselib__YAXPEAHHI_Z(0xADDR,2,0xffffffff);
        uVar3 = uRam_?;
        LOCK();
        uRam_? = 2;
        UNLOCK();
      }
    }
    lRam_? = lVar9;
    puVar26 = &(pFVar20->_1).field_0x1c;
    LOCK();
    bVar23 = *(int *)puVar26 == 1;
    if (bVar23) {
      *(undefined4 *)puVar26 = 1;
    }
    uVar3 = uRam_?;
    UNLOCK();
    if (bVar23) {
      if (iRam_? == 0) {
        lRam_? = 0;
        LOCK();
        uRam_? = 0;
        UNLOCK();
        if (uVar3 == 2) {
          _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
                    (0xADDR,1,0);
        }
      }
      else {
        iRam_? = iRam_? + -1;
      }
    }
    else {
      puVar27 = &(pFVar20->_1).cctor_finished_or_no_cctor;
      LOCK();
      bVar23 = *puVar27 == 1;
      if (bVar23) {
        *puVar27 = 1;
      }
      uVar3 = uRam_?;
      UNLOCK();
      if (bVar23) {
        if (iRam_? == 0) {
          lRam_? = 0;
          LOCK();
          uRam_? = 0;
          UNLOCK();
          if (uVar3 == 2) {
            _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
                      (0xADDR,1,0);
          }
        }
        else {
          iRam_? = iRam_? + -1;
        }
        uVar3 = GetCurrentThreadId();
        psVar28 = &(pFVar20->_1).cctor_thread;
        LOCK();
        bVar23 = (ulonglong)uVar3 == *psVar28;
        if (bVar23) {
          *psVar28 = (ulonglong)uVar3;
        }
        UNLOCK();
        if (bVar23) {
          return;
        }
        while( true ) {
          puVar26 = &(pFVar20->_1).field_0x1c;
          LOCK();
          bVar23 = *(int *)puVar26 == 1;
          if (bVar23) {
            *(undefined4 *)puVar26 = 1;
          }
          UNLOCK();
          if (bVar23) break;
          LOCK();
          lVar9._0_4_ = (pFVar20->_1).initializationExceptionGCHandle;
          lVar9._4_4_ = (pFVar20->_1).cctor_started;
          if (lVar9 == 0) {
            (pFVar20->_1).initializationExceptionGCHandle = 0;
            (pFVar20->_1).cctor_started = 0;
          }
          UNLOCK();
          if (lVar9 != 0) break;
          FUN_?(*puRam_?);
        }
      }
      else {
        uVar3 = GetCurrentThreadId();
        LOCK();
        (pFVar20->_1).cctor_thread = (ulonglong)uVar3;
        UNLOCK();
        LOCK();
        (pFVar20->_1).cctor_finished_or_no_cctor = 1;
        uVar3 = uRam_?;
        UNLOCK();
        if (iRam_? == 0) {
          lRam_? = 0;
          LOCK();
          uRam_? = 0;
          UNLOCK();
          if (uVar3 == 2) {
            _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
                      (0xADDR,1,0);
          }
        }
        else {
          iRam_? = iRam_? + -1;
        }
        if (((pFVar20->_1).field_0x6e & 4) != 0) {
          FUN_?(pFVar20);
          ppMVar22 = ppMVar21;
          pIVar29 = (Il2CppClass *)pFVar20;
code_?:
          do {
            if (ppMVar22 == (MethodInfo **)0x0) {
              FUN_?(pIVar29);
              if (pIVar29->field_count != 0) {
                ppMVar22 = pIVar29->methods;
                pMVar7 = *ppMVar22;
code_?:
                if (pMVar7 != (MethodInfo *)0x0) {
                  if ((*pMVar7->name == '.') && ((pMVar7->flags & 0x800) != 0)) {
                    ppMVar30 = ppMVar21;
                    while (ppMVar31 = ppMVar30 + 0x3052a1b1,
                          ppMVar30 = (MethodInfo **)((longlong)ppMVar30 + 1),
                          *(char *)ppMVar31 == (pMVar7->name + -1)[(longlong)ppMVar30]) {
                      if (ppMVar30 == (MethodInfo **)0x7) {
                        FUN_?(pMVar7,0,0,&stack0x00000010);
                        goto code_?;
                      }
                    }
                  }
                  goto code_?;
                }
              }
            }
            else {
              ppMVar22 = ppMVar22 + 1;
              if (ppMVar22 < pIVar29->methods + pIVar29->field_count) {
                pMVar7 = *ppMVar22;
                goto code_?;
              }
            }
            pIVar29 = pIVar29->parent;
            ppMVar22 = ppMVar21;
          } while (pIVar29 != (Il2CppClass *)0x0);
        }
code_?:
        LOCK();
        (pFVar20->_1).cctor_thread = 0;
        UNLOCK();
        LOCK();
        *(undefined4 *)&(pFVar20->_1).field_0x1c = 1;
        UNLOCK();
      }
      lVar11._0_4_ = (pFVar20->_1).initializationExceptionGCHandle;
      lVar11._4_4_ = (pFVar20->_1).cctor_started;
      if (lVar11 != 0) {
        uVar15._0_4_ = (pFVar20->_1).initializationExceptionGCHandle;
        uVar15._4_4_ = (pFVar20->_1).cctor_started;
        uVar15 = FUN_?(uVar15);
        FUN_?(uVar15,0);
        FUN_?(0,0,0,0,0);
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
    }
  }
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

