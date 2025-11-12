
/* Vector3 GetPrecisionInput(Vector3) */

Vector3 * Assembly-CSharp.dll::InputMovementPrecisionModifier::
          InputMovementPrecisionModifier_GetPrecisionInput
                    (Vector3 *__return_storage_ptr__,InputMovementPrecisionModifier *this,
                    Vector3 *input,MethodInfo *method)

{
  fVar1 = (float)FUN_?(input);
  fVar2 = _UNK_?;
  if (fVar1 < _UNK_?) {
    fVar2 = input->z;
    fVar1 = input->y;
    __return_storage_ptr__->x = input->x;
    __return_storage_ptr__->y = fVar1;
    __return_storage_ptr__->z = fVar2;
  }
  else {
    fVar1 = fVar1 / (this->fields).maxMagnitude;
    if (fVar1 < 0.0) {
      fVar1 = 0.0;
    }
    else if (_UNK_? < fVar1) {
      fVar1 = _UNK_?;
    }
    obj = (this->fields).inputMovementModificationCurve;
    if (obj == (AnimationCurve *)0x0) {
      FUN_?();
      pcVar3 = (code *)swi(3);
      pVVar4 = (Vector3 *)(*pcVar3)();
      return pVVar4;
    }
    pvVar5 = (obj->fields).m_Ptr;
    if (pvVar5 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
      pcVar3 = (code *)swi(3);
      pVVar4 = (Vector3 *)(*pcVar3)();
      return pVVar4;
    }
    pcVar3 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
      uVar6 = func_?(&UNK_?);
      FUN_?(uVar6,0);
      pcVar3 = (code *)swi(3);
      pVVar4 = (Vector3 *)(*pcVar3)();
      return pVVar4;
    }
    pcRam_? = pcVar3;
    fVar7 = (float)(*pcRam_?)(pvVar5,fVar1);
    uVar8 = input->x;
    uVar9 = input->y;
    fVar7 = fVar7 * (fVar2 / fVar1);
    fVar2 = input->z;
    __return_storage_ptr__->x = fVar7 * (float)uVar8;
    __return_storage_ptr__->y = fVar7 * (float)uVar9;
    __return_storage_ptr__->z = fVar7 * fVar2;
  }
  return __return_storage_ptr__;
}


/* Void SetReferenceResolution(Vector2) */

void Assembly-CSharp.dll::InputMovementPrecisionModifier::
     InputMovementPrecisionModifier_SetReferenceResolution
               (InputMovementPrecisionModifier *this,Vector2 referenceResolution,MethodInfo *method)

{
  aVStack_1[0] = referenceResolution;
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__InputMovementPrecisionModifier__SetReferenceResolution_UnityEngine__Vector2_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ResolutionManager);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Events__UnityAction<UnityEngine::Vector2>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  fVar2 = (float)FUN_?(aVStack_1);
  (this->fields).maxMagnitude = fVar2 * _UNK_?;
  if (*(int *)&(TypeInfo__ResolutionManager->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__ResolutionManager);
  }
  pUVar3 = TypeInfo__ResolutionManager->static_fields->OnReferenceResolution;
  pDVar4 = (Delegate *)
           FUN_?(TypeInfo__UnityEngine__Events__UnityAction<UnityEngine::Vector2>);
  FUN_?(pDVar4,this);
  pDVar4 = mscorlib.dll::System::Delegate::Delegate_Remove
                     ((Delegate *)pUVar3,pDVar4,(MethodInfo *)0x0);
  pUVar5 = TypeInfo__UnityEngine__Events__UnityAction<UnityEngine::Vector2>;
  if (pDVar4 == (Delegate *)0x0) {
    TypeInfo__ResolutionManager->static_fields->OnReferenceResolution =
         (UnityAction_1_UnityEngine_Vector2_ *)0x0;
  }
  else {
    pUVar3 = (UnityAction_1_UnityEngine_Vector2_ *)
             FUN_?(pDVar4,TypeInfo__UnityEngine__Events__UnityAction<UnityEngine::Vector2>);
    if (pUVar3 == (UnityAction_1_UnityEngine_Vector2_ *)0x0) {
      FUN_?(pDVar4,pUVar5);
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    TypeInfo__ResolutionManager->static_fields->OnReferenceResolution = pUVar3;
    pUVar5 = TypeInfo__UnityEngine__Events__UnityAction<UnityEngine::Vector2>;
    lVar7 = FUN_?(pDVar4,TypeInfo__UnityEngine__Events__UnityAction<UnityEngine::Vector2>);
    if (lVar7 == 0) {
      FUN_?(pDVar4,pUVar5);
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  if (iRam_? != 0) {
    uVar8 = (uint)((ulonglong)TypeInfo__ResolutionManager->static_fields >> 0xc);
    uVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6);
    do {
      uVar10 = *(ulonglong *)(uVar9 * 8 + 0xADDR);
      puVar11 = (ulonglong *)(uVar9 * 8 + 0xADDR);
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


/* Void Start() */

void Assembly-CSharp.dll::InputMovementPrecisionModifier::InputMovementPrecisionModifier_Start
               (InputMovementPrecisionModifier *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__InputMovementPrecisionModifier__SetReferenceResolution_UnityEngine__Vector2_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ResolutionManager);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Events__UnityAction<UnityEngine::Vector2>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__ResolutionManager->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__ResolutionManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__ResolutionManager->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (TypeInfo__ResolutionManager->static_fields->_Initialized_k__BackingField == 0) {
    if (*(int *)&(TypeInfo__ResolutionManager->_1).field_0x1c == 0) {
      FUN_?();
    }
    pUVar1 = TypeInfo__ResolutionManager->static_fields->OnReferenceResolution;
    pDVar2 = (Delegate *)
             FUN_?(TypeInfo__UnityEngine__Events__UnityAction<UnityEngine::Vector2>);
    FUN_?(pDVar2,this);
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)pUVar1,pDVar2,(MethodInfo *)0x0);
    pUVar3 = TypeInfo__UnityEngine__Events__UnityAction<UnityEngine::Vector2>;
    if (pDVar2 == (Delegate *)0x0) {
      TypeInfo__ResolutionManager->static_fields->OnReferenceResolution =
           (UnityAction_1_UnityEngine_Vector2_ *)0x0;
    }
    else {
      pUVar1 = (UnityAction_1_UnityEngine_Vector2_ *)
               FUN_?(pDVar2,TypeInfo__UnityEngine__Events__UnityAction<UnityEngine::Vector2>
                            );
      if (pUVar1 == (UnityAction_1_UnityEngine_Vector2_ *)0x0) {
        FUN_?(pDVar2,pUVar3);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      TypeInfo__ResolutionManager->static_fields->OnReferenceResolution = pUVar1;
      pUVar3 = TypeInfo__UnityEngine__Events__UnityAction<UnityEngine::Vector2>;
      lVar5 = FUN_?(pDVar2,TypeInfo__UnityEngine__Events__UnityAction<UnityEngine::Vector2>)
      ;
      if (lVar5 == 0) {
        FUN_?(pDVar2,pUVar3);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    if (iRam_? != 0) {
      uVar6 = (uint)((ulonglong)TypeInfo__ResolutionManager->static_fields >> 0xc);
      uVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6);
      do {
        uVar8 = *(ulonglong *)(uVar7 * 8 + 0xADDR);
        puVar9 = (ulonglong *)(uVar7 * 8 + 0xADDR);
        LOCK();
        bVar10 = uVar8 == *puVar9;
        if (bVar10) {
          *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
        }
        UNLOCK();
      } while (!bVar10);
    }
  }
  else {
    if (*(int *)&(TypeInfo__ResolutionManager->_1).field_0x1c == 0) {
      FUN_?();
    }
    aVStackX_18[0] = ResolutionManager::ResolutionManager_get_ReferenceResolution((MethodInfo *)0x0)
    ;
    if (cRam_? == '\0') {
      FUN_?(&
                    MethodInfo__InputMovementPrecisionModifier__SetReferenceResolution_UnityEngine__Vector2_
                   );
      LOCK();
      UNLOCK();
      FUN_?(&TypeInfo__ResolutionManager);
      LOCK();
      UNLOCK();
      FUN_?(&TypeInfo__UnityEngine__Events__UnityAction<UnityEngine::Vector2>);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    fVar11 = (float)FUN_?(aVStackX_18);
    (this->fields).maxMagnitude = fVar11 * _UNK_?;
    if (*(int *)&(TypeInfo__ResolutionManager->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__ResolutionManager);
    }
    pUVar1 = TypeInfo__ResolutionManager->static_fields->OnReferenceResolution;
    pDVar2 = (Delegate *)
             FUN_?(TypeInfo__UnityEngine__Events__UnityAction<UnityEngine::Vector2>);
    FUN_?(pDVar2,this);
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)pUVar1,pDVar2,(MethodInfo *)0x0);
    pUVar3 = TypeInfo__UnityEngine__Events__UnityAction<UnityEngine::Vector2>;
    if (pDVar2 == (Delegate *)0x0) {
      TypeInfo__ResolutionManager->static_fields->OnReferenceResolution =
           (UnityAction_1_UnityEngine_Vector2_ *)0x0;
    }
    else {
      pUVar1 = (UnityAction_1_UnityEngine_Vector2_ *)
               FUN_?(pDVar2,TypeInfo__UnityEngine__Events__UnityAction<UnityEngine::Vector2>
                            );
      if (pUVar1 == (UnityAction_1_UnityEngine_Vector2_ *)0x0) {
        FUN_?(pDVar2,pUVar3);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      TypeInfo__ResolutionManager->static_fields->OnReferenceResolution = pUVar1;
      pUVar3 = TypeInfo__UnityEngine__Events__UnityAction<UnityEngine::Vector2>;
      lVar5 = FUN_?(pDVar2,TypeInfo__UnityEngine__Events__UnityAction<UnityEngine::Vector2>)
      ;
      if (lVar5 == 0) {
        FUN_?(pDVar2,pUVar3);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    if (iRam_? != 0) {
      uVar6 = (uint)((ulonglong)TypeInfo__ResolutionManager->static_fields >> 0xc);
      uVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6);
      do {
        uVar8 = *(ulonglong *)(uVar7 * 8 + 0xADDR);
        puVar9 = (ulonglong *)(uVar7 * 8 + 0xADDR);
        LOCK();
        bVar10 = uVar8 == *puVar9;
        if (bVar10) {
          *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
        }
        UNLOCK();
      } while (!bVar10);
      return;
    }
  }
  return;
}

