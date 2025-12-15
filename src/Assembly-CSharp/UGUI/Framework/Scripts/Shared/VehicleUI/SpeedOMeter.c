
/* Void Awake() */

void Assembly-CSharp.dll::UGUI::Framework::Scripts::Shared::VehicleUI::SpeedOMeter::
     SpeedOMeter_Awake(SpeedOMeter *this,MethodInfo *method)

{
  uVar1 = _UNK_?;
  if ((this->fields).alwaysShow == 0) {
    uVar1 = 0;
  }
  obj = (this->fields).speedGroup;
  if (obj == (CanvasGroup *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::CanvasGroup>_UnityEngine__CanvasGroup_
                  ,uVar1,0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (obj == (CanvasGroup *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pvVar3 = (obj->fields)._._._.m_CachedPtr;
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
  (*pcRam_?)(pvVar3,uVar1);
  return;
}


/* Void Fade() */

void Assembly-CSharp.dll::UGUI::Framework::Scripts::Shared::VehicleUI::SpeedOMeter::SpeedOMeter_Fade
               (SpeedOMeter *this,MethodInfo *method)

{
  if ((this->fields).isVisible == 0) {
    pCVar1 = (this->fields).speedGroup;
    if (pCVar1 == (CanvasGroup *)0x0) {
DAT_?:
      FUN_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    fVar3 = UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_get_alpha
                      (pCVar1,(MethodInfo *)0x0);
    if (0.0 < fVar3) {
      fVar3 = (this->fields).currFade;
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
      fVar5 = fVar5 + fVar3;
      (this->fields).currFade = fVar5;
      if (fVar5 <= (this->fields).fadeTime) {
        pCVar1 = (this->fields).speedGroup;
        if (fVar5 < 0.0) {
          fVar5 = 0.0;
        }
        else if (_UNK_? < fVar5) {
          fVar5 = _UNK_?;
        }
        if (pCVar1 == (CanvasGroup *)0x0) goto DAT_?;
        UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                  (pCVar1,fVar5 * _UNK_? + _UNK_?,(MethodInfo *)0x0);
      }
      pCVar1 = (this->fields).speedGroup;
      if (pCVar1 == (CanvasGroup *)0x0) goto DAT_?;
      fVar3 = UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_get_alpha
                        (pCVar1,(MethodInfo *)0x0);
      if (fVar3 <= 0.0) {
        pAVar6 = (this->fields).OnShowHide;
        if (pAVar6 != (Action_2_Boolean_Single_ *)0x0) {
          pCVar1 = (this->fields).speedGroup;
          if (pCVar1 == (CanvasGroup *)0x0) goto DAT_?;
          fVar3 = UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_get_alpha
                            (pCVar1,(MethodInfo *)0x0);
          (*(pAVar6->fields)._._.invoke_impl)
                    ((pAVar6->fields)._._.method_code,0,fVar3,(pAVar6->fields)._._.method);
        }
        this_00 = (this->fields)._.rectTransform;
        if ((this_00 == (RectTransform *)0x0) ||
           (this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                ((Component *)this_00,(MethodInfo *)0x0),
           this_01 == (GameObject *)0x0)) goto DAT_?;
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (this_01,0,(MethodInfo *)0x0);
      }
    }
  }
  return;
}


/* Void Initialize(Boolean, MVRigidBody) */

void Assembly-CSharp.dll::UGUI::Framework::Scripts::Shared::VehicleUI::SpeedOMeter::
     SpeedOMeter_Initialize
               (SpeedOMeter *this,bool insideVehicle,MVRigidBody *mvRigidBody,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar1 = iRam_? != 0;
  (this->fields).rigidBody = mvRigidBody;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).rigidBody >> 0xc);
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
  pMVar6 = (this->fields).rigidBody;
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
  if (pMVar6 == (MVRigidBody *)0x0) {
    bVar1 = false;
  }
  else {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    bVar1 = (pMVar6->fields)._._._._._.m_CachedPtr != (void *)0x0;
  }
  (this->fields).updateSpeed = bVar1;
  bVar7 = 1;
  if (insideVehicle == 0) {
    bVar7 = (this->fields).alwaysShow;
  }
  (this->fields).isVisible = bVar7 != 0;
  this_00 = (this->fields)._.rectTransform;
  if ((this_00 != (RectTransform *)0x0) &&
     (this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)this_00,(MethodInfo *)0x0), this_01 != (GameObject *)0x0)) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (this_01,(this->fields).isVisible,(MethodInfo *)0x0);
    uVar8 = _UNK_?;
    if ((this->fields).isVisible == 0) {
      uVar8 = 0;
    }
    obj = (this->fields).speedGroup;
    if (obj != (CanvasGroup *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::CanvasGroup>_UnityEngine__CanvasGroup_
                      ,uVar8,0);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (obj == (CanvasGroup *)0x0) {
        FUN_?();
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      pvVar10 = (obj->fields)._._._.m_CachedPtr;
      if (pvVar10 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      pcVar9 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar9 = (code *)FUN_?(&UNK_?), pcVar9 == (code *)0x0)) {
        uVar11 = func_?(&UNK_?);
        FUN_?(uVar11,0);
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      pcRam_? = pcVar9;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam_?)(pvVar10,uVar8);
      return;
    }
  }
  FUN_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void Show() */

void Assembly-CSharp.dll::UGUI::Framework::Scripts::Shared::VehicleUI::SpeedOMeter::SpeedOMeter_Show
               (SpeedOMeter *this,MethodInfo *method)

{
  if ((this->fields).isVisible == 0) {
    pCVar1 = (this->fields).speedGroup;
    if (pCVar1 == (CanvasGroup *)0x0) {
DAT_?:
      FUN_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    fVar3 = UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_get_alpha
                      (pCVar1,(MethodInfo *)0x0);
    fVar4 = _UNK_?;
    if (fVar3 < _UNK_?) {
      if ((this->fields).currFade == 0.0) {
        this_00 = (this->fields)._.rectTransform;
        if ((this_00 == (RectTransform *)0x0) ||
           (this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                ((Component *)this_00,(MethodInfo *)0x0),
           this_01 == (GameObject *)0x0)) goto DAT_?;
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (this_01,1,(MethodInfo *)0x0);
      }
      fVar3 = (this->fields).currFade;
      pcVar2 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
        uVar5 = func_?(&UNK_?);
        FUN_?(uVar5,0);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pcRam_? = pcVar2;
      fVar6 = (float)(*pcRam_?)();
      fVar6 = fVar6 + fVar3;
      (this->fields).currFade = fVar6;
      if (fVar6 <= (this->fields).fadeTime) {
        pCVar1 = (this->fields).speedGroup;
        if (fVar6 < 0.0) {
          fVar6 = 0.0;
        }
        else if (fVar4 < fVar6) {
          fVar6 = fVar4;
        }
        if (pCVar1 == (CanvasGroup *)0x0) goto DAT_?;
        UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                  (pCVar1,fVar6 + 0.0,(MethodInfo *)0x0);
      }
      pCVar1 = (this->fields).speedGroup;
      if (pCVar1 == (CanvasGroup *)0x0) goto DAT_?;
      fVar3 = UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_get_alpha
                        (pCVar1,(MethodInfo *)0x0);
      if ((fVar4 <= fVar3) &&
         (pAVar7 = (this->fields).OnShowHide, pAVar7 != (Action_2_Boolean_Single_ *)0x0)) {
        pCVar1 = (this->fields).speedGroup;
        if (pCVar1 == (CanvasGroup *)0x0) goto DAT_?;
        fVar4 = UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_get_alpha
                          (pCVar1,(MethodInfo *)0x0);
        (*(pAVar7->fields)._._.invoke_impl)
                  ((pAVar7->fields)._._.method_code,1,fVar4,(pAVar7->fields)._._.method);
      }
    }
  }
  return;
}


/* Void UpdateSpeed() */

void Assembly-CSharp.dll::UGUI::Framework::Scripts::Shared::VehicleUI::SpeedOMeter::
     SpeedOMeter_UpdateSpeed(SpeedOMeter *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields).updateSpeed == 0) {
    return;
  }
  pMVar1 = (this->fields).rigidBody;
  if (pMVar1 != (MVRigidBody *)0x0) {
    puVar2 = (undefined8 *)(*(pMVar1->klass->vtable).__unknown_1.methodPtr)(aRStack_3);
    uStack_4 = *puVar2;
    uStack_5 = *(undefined4 *)(puVar2 + 1);
    fVar6 = (float)FUN_?(&uStack_4);
    fVar6 = fVar6 * _UNK_?;
    fVar7 = (this->fields).curSpeed;
    pcVar8 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
      uVar9 = func_?(&UNK_?);
      FUN_?(uVar9,0);
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    pcRam_? = pcVar8;
    fVar10 = (float)(*pcRam_?)();
    fVar11 = _UNK_?;
    if (fVar10 < 0.0) {
      fVar10 = 0.0;
    }
    else if (_UNK_? < fVar10) {
      fVar10 = _UNK_?;
    }
    bVar12 = (this->fields).prevFading;
    fVar7 = (fVar6 - fVar7) * fVar10 + fVar7;
    (this->fields).curSpeed = fVar7;
    if (fVar11 < fVar7) {
      (this->fields).fading = 0;
      if (bVar12 != 0) {
        (this->fields).currFade = 0.0;
        (this->fields).prevFading = 0;
      }
      SpeedOMeter_Show(this,(MethodInfo *)0x0);
    }
    else {
      (this->fields).fading = 1;
      if (bVar12 != 1) {
        (this->fields).currFade = 0.0;
        (this->fields).prevFading = 1;
      }
      SpeedOMeter_Fade(this,(MethodInfo *)0x0);
    }
    pTVar13 = (this->fields).speedText;
    fVar7 = (this->fields).curSpeed;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__System__Number);
      LOCK();
      UNLOCK();
      FUN_?(&MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if ((MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____->klass->field_0x135
        & 1) == 0) {
      FUN_?();
    }
    if (*(int *)&(TypeInfo__System__Number->_1).field_0x1c == 0) {
      FUN_?();
    }
    aRStack_3[0]._pointer._value = (void *)0x0;
    aRStack_3[0]._length = 0;
    aRStack_3[0]._12_4_ = 0;
    pSVar14 = mscorlib.dll::System::Number::Number_FormatInt32
                       ((int)fVar7,aRStack_3,(IFormatProvider *)0x0,(MethodInfo *)0x0);
    pSVar15 = ::StringLiteral__;
    if (pSVar14 != (String *)0x0) {
      pSVar15 = pSVar14;
    }
    if (pTVar13 != (Text *)0x0) {
      (*(pTVar13->klass->vtable).set_text.methodPtr)
                (pTVar13,pSVar15,(pTVar13->klass->vtable).set_text.method);
      return;
    }
  }
  FUN_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* SpeedOMeter() */

void Assembly-CSharp.dll::UGUI::Framework::Scripts::Shared::VehicleUI::SpeedOMeter::
     SpeedOMeter__ctor(SpeedOMeter *this,MethodInfo *method)

{
  bVar1 = cRam_? == '\0';
  (this->fields).fadeTime = 2.0;
  (this->fields).prevFading = 1;
  (this->fields).fading = 1;
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
                while (ppMVar16 = ppMVar15 + 0x3052a1b1,
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


/* Boolean get_IsVisible() */

bool Assembly-CSharp.dll::UGUI::Framework::Scripts::Shared::VehicleUI::SpeedOMeter::
     SpeedOMeter_get_IsVisible(SpeedOMeter *this,MethodInfo *method)

{
  obj = (this->fields).speedGroup;
  if (obj == (CanvasGroup *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    bVar2 = (*pcVar1)();
    return bVar2;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::CanvasGroup>_UnityEngine__CanvasGroup_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pvVar3 = (obj->fields)._._._.m_CachedPtr;
  if (pvVar3 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
    pcVar1 = (code *)swi(3);
    bVar2 = (*pcVar1)();
    return bVar2;
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar4 = func_?(&UNK_?);
    FUN_?(uVar4,0);
    pcVar1 = (code *)swi(3);
    bVar2 = (*pcVar1)();
    return bVar2;
  }
  pcRam_? = pcVar1;
  fVar5 = (float)(*pcRam_?)(pvVar3);
  return 0.0 < fVar5;
}

