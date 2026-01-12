
/* Void Awake() */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::PlayMode::LobbyState::MenuButtons::
     CameraEffectsToggleExecute::CameraEffectsToggleExecute_Awake
               (CameraEffectsToggleExecute *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<bool>);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__UGUI__Desktop__Scripts__PlayMode__LobbyState__MenuButtons__CameraEffectsToggleExecute__CamEffectsUpdate_bool_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__UGUI__Desktop__Scripts__PlayMode__LobbyState__MenuButtons__CameraEffectsToggleExecute__StartSetValue__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__PostProcessingManager);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ToggleStateHandlerOnStartSetValue);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__PostProcessingManager->_1).field_0x1c == 0) {
    FUN_?();
  }
  cVar1 = FUN_?();
  if (cVar1 == '\0') {
    obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                    ((Component *)this,(MethodInfo *)0x0);
    if (obj != (GameObject *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                      ,0,0);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (obj == (GameObject *)0x0) {
        FUN_?();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pvVar3 = (obj->fields)._.m_CachedPtr;
      if (pvVar3 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
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
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam_?)(pvVar3,0);
      return;
    }
  }
  else {
    pTVar5 = (this->fields).toggleStateHandler;
    (this->fields).hasCallbacks = 1;
    if (pTVar5 != (ToggleStateHandler *)0x0) {
      pTVar6 = (pTVar5->fields)._.OnStartSetValue;
      this_00 = (Func_1_System_Threading_Tasks_VoidTaskResult_ *)
                FUN_?(TypeInfo__ToggleStateHandlerOnStartSetValue);
      mscorlib.dll::System::Func`1[System::Threading::Tasks::VoidTaskResult]::
      Func_1_System_Threading_Tasks_VoidTaskResult___ctor
                (this_00,(Object *)0x0,
                 MethodInfo__UGUI__Desktop__Scripts__PlayMode__LobbyState__MenuButtons__CameraEffectsToggleExecute__StartSetValue__
                 ,(MethodInfo *)0x0);
      pTVar6 = (ToggleStateHandlerOnStartSetValue *)
               mscorlib.dll::System::Delegate::Delegate_Combine
                         ((Delegate *)pTVar6,(Delegate *)this_00,(MethodInfo *)0x0);
      if (pTVar6 == (ToggleStateHandlerOnStartSetValue *)0x0) {
        (pTVar5->fields)._.OnStartSetValue = (ToggleStateHandlerOnStartSetValue *)0x0;
      }
      else {
        pTVar7 = (ToggleStateHandlerOnStartSetValue *)0x0;
        if (pTVar6->klass == TypeInfo__ToggleStateHandlerOnStartSetValue) {
          pTVar7 = pTVar6;
        }
        if (pTVar7 == (ToggleStateHandlerOnStartSetValue *)0x0) {
          FUN_?();
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        (pTVar5->fields)._.OnStartSetValue = pTVar7;
        pTVar7 = (ToggleStateHandlerOnStartSetValue *)0x0;
        if (pTVar6->klass == TypeInfo__ToggleStateHandlerOnStartSetValue) {
          pTVar7 = pTVar6;
        }
        if (pTVar7 == (ToggleStateHandlerOnStartSetValue *)0x0) {
          FUN_?();
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      if (iRam_? != 0) {
        uVar8 = (uint)((ulonglong)&(pTVar5->fields)._.OnStartSetValue >> 0xc);
        lVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6) * 8;
        do {
          uVar10 = *(ulonglong *)(lVar9 + 0xADDR);
          puVar11 = (ulonglong *)(lVar9 + 0xADDR);
          LOCK();
          bVar12 = uVar10 == *puVar11;
          if (bVar12) {
            *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
          }
          UNLOCK();
        } while (!bVar12);
      }
      if (*(int *)&(TypeInfo__PostProcessingManager->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__PostProcessingManager);
      }
      pAVar13 = TypeInfo__PostProcessingManager->static_fields->OnIsPostProcessEffectsEnabledChanged
      ;
      pDVar14 = (Delegate *)FUN_?(TypeInfo__System__Action<bool>);
      FUN_?(pDVar14,this);
      pDVar14 = mscorlib.dll::System::Delegate::Delegate_Combine
                         ((Delegate *)pAVar13,pDVar14,(MethodInfo *)0x0);
      pAVar15 = TypeInfo__System__Action<bool>;
      if (pDVar14 == (Delegate *)0x0) {
        TypeInfo__PostProcessingManager->static_fields->OnIsPostProcessEffectsEnabledChanged =
             (Action_1_Boolean_ *)0x0;
      }
      else {
        pAVar13 = (Action_1_Boolean_ *)FUN_?(pDVar14,TypeInfo__System__Action<bool>);
        if (pAVar13 == (Action_1_Boolean_ *)0x0) {
          FUN_?(pDVar14,pAVar15);
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        TypeInfo__PostProcessingManager->static_fields->OnIsPostProcessEffectsEnabledChanged =
             pAVar13;
        pAVar15 = TypeInfo__System__Action<bool>;
        lVar9 = FUN_?(pDVar14,TypeInfo__System__Action<bool>);
        if (lVar9 == 0) {
          FUN_?(pDVar14,pAVar15);
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      if (iRam_? != 0) {
        uVar8 = (uint)((ulonglong)
                        &TypeInfo__PostProcessingManager->static_fields->
                         OnIsPostProcessEffectsEnabledChanged >> 0xc);
        lVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6) * 8;
        do {
          uVar10 = *(ulonglong *)(lVar9 + 0xADDR);
          puVar11 = (ulonglong *)(lVar9 + 0xADDR);
          LOCK();
          bVar12 = uVar10 == *puVar11;
          if (bVar12) {
            *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
          }
          UNLOCK();
        } while (!bVar12);
      }
      return;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void CamEffectsUpdate(Boolean) */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::PlayMode::LobbyState::MenuButtons::
     CameraEffectsToggleExecute::CameraEffectsToggleExecute_CamEffectsUpdate
               (CameraEffectsToggleExecute *this,bool obj,MethodInfo *method)

{
  if ((this->fields).ignoreCamEffectCallback != 0) {
    return;
  }
  pTVar1 = (this->fields).toggleStateHandler;
  if (pTVar1 != (ToggleStateHandler *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Debug,CONCAT71(in_register_00000011,obj),0);
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
    (pTVar1->fields)._.toggleState = obj;
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


/* Void ExecuteToggleState(Boolean, UnityAction`1[System.Boolean]) */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::PlayMode::LobbyState::MenuButtons::
     CameraEffectsToggleExecute::CameraEffectsToggleExecute_ExecuteToggleState
               (CameraEffectsToggleExecute *this,bool toggleState,
               UnityAction_1_System_Boolean_ *toggleCallback,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__PostProcessingManager);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Enable_Camera_Effects);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Disable_Camera_Effects);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  (this->fields).ignoreCamEffectCallback = 1;
  textToBeChanged = StringLiteral_Enable_Camera_Effects;
  if (toggleState != 0) {
    textToBeChanged = StringLiteral_Disable_Camera_Effects;
  }
  this_00 = (this->fields).toolTip;
  if (this_00 != (ToolTip *)0x0) {
    ToolTip::ToolTip_SetText(this_00,textToBeChanged,(MethodInfo *)0x0);
    if (toggleCallback != (UnityAction_1_System_Boolean_ *)0x0) {
      (*(toggleCallback->fields)._._.invoke_impl)
                ((toggleCallback->fields)._._.method_code,toggleState,
                 (toggleCallback->fields)._._.method);
      if (*(int *)&(TypeInfo__PostProcessingManager->_1).field_0x1c == 0) {
        FUN_?();
      }
      PostProcessingManager::PostProcessingManager_set_IsPostProcessEffectsEnabled
                (toggleState,(MethodInfo *)0x0);
      (this->fields).ignoreCamEffectCallback = 0;
      return;
    }
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::PlayMode::LobbyState::MenuButtons::
     CameraEffectsToggleExecute::CameraEffectsToggleExecute_OnDestroy
               (CameraEffectsToggleExecute *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<bool>);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__UGUI__Desktop__Scripts__PlayMode__LobbyState__MenuButtons__CameraEffectsToggleExecute__CamEffectsUpdate_bool_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__UGUI__Desktop__Scripts__PlayMode__LobbyState__MenuButtons__CameraEffectsToggleExecute__StartSetValue__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__PostProcessingManager);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ToggleStateHandlerOnStartSetValue);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields).hasCallbacks != 0) {
    pTVar1 = (this->fields).toggleStateHandler;
    if (pTVar1 == (ToggleStateHandler *)0x0) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pTVar3 = (pTVar1->fields)._.OnStartSetValue;
    this_00 = (Func_1_System_Threading_Tasks_VoidTaskResult_ *)
              FUN_?(TypeInfo__ToggleStateHandlerOnStartSetValue);
    mscorlib.dll::System::Func`1[System::Threading::Tasks::VoidTaskResult]::
    Func_1_System_Threading_Tasks_VoidTaskResult___ctor
              (this_00,(Object *)0x0,
               MethodInfo__UGUI__Desktop__Scripts__PlayMode__LobbyState__MenuButtons__CameraEffectsToggleExecute__StartSetValue__
               ,(MethodInfo *)0x0);
    pTVar3 = (ToggleStateHandlerOnStartSetValue *)
             mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)pTVar3,(Delegate *)this_00,(MethodInfo *)0x0);
    if (pTVar3 == (ToggleStateHandlerOnStartSetValue *)0x0) {
      (pTVar1->fields)._.OnStartSetValue = (ToggleStateHandlerOnStartSetValue *)0x0;
    }
    else {
      pTVar4 = (ToggleStateHandlerOnStartSetValue *)0x0;
      if (pTVar3->klass == TypeInfo__ToggleStateHandlerOnStartSetValue) {
        pTVar4 = pTVar3;
      }
      if (pTVar4 == (ToggleStateHandlerOnStartSetValue *)0x0) {
        FUN_?();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      (pTVar1->fields)._.OnStartSetValue = pTVar4;
      pTVar4 = (ToggleStateHandlerOnStartSetValue *)0x0;
      if (pTVar3->klass == TypeInfo__ToggleStateHandlerOnStartSetValue) {
        pTVar4 = pTVar3;
      }
      if (pTVar4 == (ToggleStateHandlerOnStartSetValue *)0x0) {
        FUN_?();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    if (iRam_? != 0) {
      uVar5 = (uint)((ulonglong)&(pTVar1->fields)._.OnStartSetValue >> 0xc);
      lVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
      do {
        uVar7 = *(ulonglong *)(lVar6 + 0xADDR);
        puVar8 = (ulonglong *)(lVar6 + 0xADDR);
        LOCK();
        bVar9 = uVar7 == *puVar8;
        if (bVar9) {
          *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
        }
        UNLOCK();
      } while (!bVar9);
    }
    if (*(int *)&(TypeInfo__PostProcessingManager->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__PostProcessingManager);
    }
    pAVar10 = TypeInfo__PostProcessingManager->static_fields->OnIsPostProcessEffectsEnabledChanged;
    pDVar11 = (Delegate *)FUN_?(TypeInfo__System__Action<bool>);
    FUN_?(pDVar11,this);
    pDVar11 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)pAVar10,pDVar11,(MethodInfo *)0x0);
    pAVar12 = TypeInfo__System__Action<bool>;
    if (pDVar11 == (Delegate *)0x0) {
      TypeInfo__PostProcessingManager->static_fields->OnIsPostProcessEffectsEnabledChanged =
           (Action_1_Boolean_ *)0x0;
    }
    else {
      pAVar10 = (Action_1_Boolean_ *)FUN_?(pDVar11,TypeInfo__System__Action<bool>);
      if (pAVar10 == (Action_1_Boolean_ *)0x0) {
        FUN_?(pDVar11,pAVar12);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      TypeInfo__PostProcessingManager->static_fields->OnIsPostProcessEffectsEnabledChanged = pAVar10;
      pAVar12 = TypeInfo__System__Action<bool>;
      lVar6 = FUN_?(pDVar11,TypeInfo__System__Action<bool>);
      if (lVar6 == 0) {
        FUN_?(pDVar11,pAVar12);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    if (iRam_? != 0) {
      uVar5 = (uint)((ulonglong)
                      &TypeInfo__PostProcessingManager->static_fields->
                       OnIsPostProcessEffectsEnabledChanged >> 0xc);
      lVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
      do {
        uVar7 = *(ulonglong *)(lVar6 + 0xADDR);
        puVar8 = (ulonglong *)(lVar6 + 0xADDR);
        LOCK();
        bVar9 = uVar7 == *puVar8;
        if (bVar9) {
          *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
        }
        UNLOCK();
      } while (!bVar9);
    }
  }
  return;
}


/* Boolean StartSetValue() */

bool Assembly-CSharp.dll::UGUI::Desktop::Scripts::PlayMode::LobbyState::MenuButtons::
     CameraEffectsToggleExecute::CameraEffectsToggleExecute_StartSetValue(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__PostProcessingManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__PostProcessingManager->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__PostProcessingManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__PostProcessingManager->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__PostProcessingManager);
  }
  return TypeInfo__PostProcessingManager->static_fields->isPostProcessEffectsEnabled;
}

