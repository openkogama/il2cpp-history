
/* Void ActivateThrusters() */

void Assembly-CSharp.dll::HoverCraftVisualization::HoverCraftVisualization_ActivateThrusters
               (HoverCraftVisualization *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<WorldObjectTypes::HoverCraft::Shared::HoverCraftThruster>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<WorldObjectTypes::HoverCraft::Shared::HoverCraftThruster>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<WorldObjectTypes::HoverCraft::Shared::HoverCraftThruster>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<WorldObjectTypes::HoverCraft::Shared::HoverCraftThruster>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  LStack_1._list = (List_1_System_Object_ *)(this->fields).hoverCraftThrusters;
  if ((List_1_WorldObjectTypes_HoverCraft_Shared_HoverCraftThruster_ *)LStack_1._list ==
      (List_1_WorldObjectTypes_HoverCraft_Shared_HoverCraftThruster_ *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (iRam_? != 0) {
    uVar3 = (uint)((ulonglong)&uStack_4 >> 0xc);
    uVar5 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
    do {
      uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
      puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
      LOCK();
      bVar8 = uVar6 == *puVar7;
      if (bVar8) {
        *puVar7 = uVar6 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar8);
  }
  pLStack_9 = (List_1_T_Enumerator_System_Object_ *)
               ((ulonglong)
                (uint)(((List_1_WorldObjectTypes_HoverCraft_Shared_HoverCraftThruster_ *)
                       LStack_1._list)->fields)._version << 0x20);
  uStack_10 = 0;
  LStack_1._8_8_ = pLStack_9;
  LStack_1._current = (Object *)0x0;
  uStack_4 = 0;
  pLStack_9 = &LStack_1;
  while( true ) {
    bVar11 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
            List_1_T_Enumerator_System_Object__MoveNext
                      (&LStack_1,
                       MethodInfo__System__Collections__Generic__List_1_T___Enumerator<WorldObjectTypes::HoverCraft::Shared::HoverCraftThruster>__MoveNext__
                      );
    pOVar12 = LStack_1._current;
    if (bVar11 == 0) {
      return;
    }
    if ((HoverCraftThruster *)LStack_1._current == (HoverCraftThruster *)0x0)
    goto code_?;
    WorldObjectTypes::HoverCraft::Shared::HoverCraftThruster::HoverCraftThruster_UpdateSize
              ((HoverCraftThruster *)LStack_1._current,(this->fields).thrustersSize,
               (MethodInfo *)0x0);
    gradient = (this->fields).thrustersColor;
    PStackX_18.m_ParticleSystem = (ParticleSystem *)0x0;
    pPVar13 = ((HoverCraftThruster__Fields *)((longlong)pOVar12 + 0x10))->thrusterParticleSystem;
    if (pPVar13 == (ParticleSystem *)0x0) break;
    if (iRam_? != 0) {
      uVar3 = (uint)((ulonglong)apPStackX_8 >> 0xc);
      uVar5 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
      do {
        uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
        puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
        LOCK();
        bVar8 = uVar6 == *puVar7;
        if (bVar8) {
          *puVar7 = uVar6 | 1L << (uVar3 & 0x3f);
        }
        UNLOCK();
      } while (!bVar8);
    }
    PStack_14.m_Mode = 0;
    PStack_14._4_4_ = 0;
    PStack_14.m_GradientMin = (Gradient *)0x0;
    PStack_14.m_GradientMax = (Gradient *)0x0;
    PStack_14.m_ColorMin.r = 0.0;
    PStack_14.m_ColorMin.g = 0.0;
    PStack_14.m_ColorMin.b = 0.0;
    PStack_14.m_ColorMin.a = 0.0;
    PStack_14.m_ColorMax.r = 0.0;
    PStack_14.m_ColorMax.g = 0.0;
    PStack_14.m_ColorMax.b = 0.0;
    PStack_14.m_ColorMax.a = 0.0;
    apPStackX_8[0] = pPVar13;
    PStackX_18.m_ParticleSystem = pPVar13;
    UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem+MinMaxGradient::
    ParticleSystem_MinMaxGradient__ctor_1(&PStack_14,gradient,(MethodInfo *)0x0);
    PStack_15.m_Mode = PStack_14.m_Mode;
    PStack_15._4_4_ = PStack_14._4_4_;
    PStack_15.m_GradientMin = PStack_14.m_GradientMin;
    PStack_15.m_GradientMax = PStack_14.m_GradientMax;
    PStack_15.m_ColorMin.r = PStack_14.m_ColorMin.r;
    PStack_15.m_ColorMin.g = PStack_14.m_ColorMin.g;
    PStack_15.m_ColorMin.b = PStack_14.m_ColorMin.b;
    PStack_15.m_ColorMin.a = PStack_14.m_ColorMin.a;
    PStack_15.m_ColorMax.r = PStack_14.m_ColorMax.r;
    PStack_15.m_ColorMax.g = PStack_14.m_ColorMax.g;
    PStack_15.m_ColorMax.b = PStack_14.m_ColorMax.b;
    PStack_15.m_ColorMax.a = PStack_14.m_ColorMax.a;
    UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem+ColorOverLifetimeModule::
    ParticleSystem_ColorOverLifetimeModule_set_color(&PStackX_18,&PStack_15,(MethodInfo *)0x0);
    bVar11 = (this->fields).useThrusters;
    pPStackX_20 = (ParticleSystem *)0x0;
    pPVar13 = ((HoverCraftThruster__Fields *)((longlong)pOVar12 + 0x10))->thrusterParticleSystem;
    if (pPVar13 == (ParticleSystem *)0x0) {
code_?:
      FUN_?();
      break;
    }
    if (iRam_? != 0) {
      uVar3 = (uint)((ulonglong)apPStackX_8 >> 0xc);
      uVar5 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
      do {
        uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
        puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
        LOCK();
        bVar8 = uVar6 == *puVar7;
        if (bVar8) {
          *puVar7 = uVar6 | 1L << (uVar3 & 0x3f);
        }
        UNLOCK();
      } while (!bVar8);
    }
    pcVar2 = pcRam_?;
    apPStackX_8[0] = pPVar13;
    pPStackX_20 = pPVar13;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
      uVar16 = func_?(&UNK_?);
      FUN_?(uVar16,0);
code_?:
      FUN_?();
code_?:
      FUN_?();
code_?:
      FUN_?();
      goto code_?;
    }
    pcRam_? = pcVar2;
    (*pcRam_?)(&pPStackX_20);
    pPVar13 = ((HoverCraftThruster__Fields *)((longlong)pOVar12 + 0x10))->thrusterParticleSystem;
    if (pPVar13 == (ParticleSystem *)0x0) goto code_?;
    pGVar17 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)pPVar13,(MethodInfo *)0x0);
    if (pGVar17 == (GameObject *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar17,bVar11,(MethodInfo *)0x0);
    pGVar17 = ((HoverCraftThruster__Fields *)((longlong)pOVar12 + 0x10))->thrusterMesh;
    if (pGVar17 == (GameObject *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar17,bVar11,(MethodInfo *)0x0);
  }
  FUN_?();
code_?:
  FUN_?();
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void AnimateHullInertia() */

void Assembly-CSharp.dll::HoverCraftVisualization::HoverCraftVisualization_AnimateHullInertia
               (HoverCraftVisualization *this,MethodInfo *method)

{
  fVar1 = (this->fields).prevWorldRot.x;
  fVar2 = (this->fields).prevWorldRot.y;
  fVar3 = (this->fields).prevWorldRot.z;
  fVar4 = (this->fields).prevWorldRot.w;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  fVar5 = _UNK_?;
  pVVar6 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar7 = fVar3 + fVar3;
  fVar8 = fVar1 * (fVar1 + fVar1);
  uStack_9._0_4_ = (pVVar6->forwardVector).x;
  uStack_9._4_4_ = (pVVar6->forwardVector).y;
  fVar10 = (pVVar6->forwardVector).z;
  fVar11 = fVar4 * (fVar1 + fVar1);
  fVar12 = fVar2 + fVar2;
  fVar13 = (_UNK_? - (fVar3 * fVar7 + fVar2 * fVar12)) * (float)uStack_9 +
           (fVar1 * fVar12 - fVar4 * fVar7) * uStack_9._4_4_ +
           (fVar4 * fVar12 + fVar1 * fVar7) * fVar10;
  fVar3 = (_UNK_? - (fVar3 * fVar7 + fVar8)) * uStack_9._4_4_ +
           (fVar4 * fVar7 + fVar1 * fVar12) * (float)uStack_9 +
           (fVar2 * fVar7 - fVar11) * fVar10;
  fVar1 = (fVar1 * fVar7 - fVar4 * fVar12) * (float)uStack_9 +
           (fVar11 + fVar2 * fVar7) * uStack_9._4_4_ +
           (_UNK_? - (fVar2 * fVar12 + fVar8)) * fVar10;
  pTVar14 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                     ((Component *)this,(MethodInfo *)0x0);
  if (pTVar14 != (Transform *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    uStack_9 = 0;
    uStack_15 = 0;
    pvVar16 = (pTVar14->fields)._._.m_CachedPtr;
    if (pvVar16 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar14,(MethodInfo *)0x0);
      pcVar17 = (code *)swi(3);
      (*pcVar17)();
      return;
    }
    pcVar17 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar17 = (code *)FUN_?(&UNK_?), pcVar17 == (code *)0x0)) {
      uVar18 = func_?(&UNK_?);
      FUN_?(uVar18,0);
      pcVar17 = (code *)swi(3);
      (*pcVar17)();
      return;
    }
    pcRam_? = pcVar17;
    (*pcRam_?)(pvVar16);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    fVar10 = uStack_9._4_4_ + uStack_9._4_4_;
    fVar4 = (float)uStack_15 + (float)uStack_15;
    pVVar6 = TypeInfo__UnityEngine__Vector3->static_fields;
    fVar12 = uStack_15._4_4_ * ((float)uStack_9 + (float)uStack_9);
    uVar19 = (pVVar6->forwardVector).x;
    uVar20 = (pVVar6->forwardVector).y;
    fVar2 = (pVVar6->forwardVector).z;
    fVar8 = (float)uStack_9 * ((float)uStack_9 + (float)uStack_9);
    fVar7 = (fVar5 - ((float)uStack_15 * fVar4 + uStack_9._4_4_ * fVar10)) * (float)uVar19 +
            ((float)uStack_9 * fVar10 - uStack_15._4_4_ * fVar4) * (float)uVar20 +
            (uStack_15._4_4_ * fVar10 + (float)uStack_9 * fVar4) * fVar2;
    fVar11 = (fVar5 - ((float)uStack_15 * fVar4 + fVar8)) * (float)uVar20 +
             (uStack_15._4_4_ * fVar4 + (float)uStack_9 * fVar10) * (float)uVar19 +
             (uStack_9._4_4_ * fVar4 - fVar12) * fVar2;
    fVar4 = ((float)uStack_9 * fVar4 - uStack_15._4_4_ * fVar10) * (float)uVar19 +
             (fVar12 + uStack_9._4_4_ * fVar4) * (float)uVar20 +
             (fVar5 - (uStack_9._4_4_ * fVar10 + fVar8)) * fVar2;
    fVar2 = (this->fields).angleDiff;
    uStack_9 = CONCAT44(fVar3,fVar13);
    uStack_15 = CONCAT44(uStack_15._4_4_,fVar1);
    fVar12 = (float)FUN_?(&uStack_9);
    fVar10 = _UNK_?;
    if (_UNK_? < fVar12) {
      fVar1 = fVar1 / fVar12;
      uStack_9 = CONCAT44(fVar3 / fVar12,fVar13 / fVar12);
    }
    else {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Vector3);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pVVar6 = TypeInfo__UnityEngine__Vector3->static_fields;
      uStack_9._0_4_ = (pVVar6->zeroVector).x;
      uStack_9._4_4_ = (pVVar6->zeroVector).y;
      fVar1 = (pVVar6->zeroVector).z;
    }
    uStack_21 = CONCAT44(fVar11,fVar7);
    uStack_22 = CONCAT44(uStack_22._4_4_,fVar4);
    fVar3 = (float)FUN_?(&uStack_21);
    if (fVar10 < fVar3) {
      fVar4 = fVar4 / fVar3;
      uStack_21 = CONCAT44(fVar11 / fVar3,fVar7 / fVar3);
    }
    else {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Vector3);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pVVar6 = TypeInfo__UnityEngine__Vector3->static_fields;
      uStack_21._0_4_ = (pVVar6->zeroVector).x;
      uStack_21._4_4_ = (pVVar6->zeroVector).y;
      fVar4 = (pVVar6->zeroVector).z;
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pVVar6 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar18._0_4_ = (pVVar6->upVector).x;
    uVar18._4_4_ = (pVVar6->upVector).y;
    fVar8 = fVar4 * uStack_9._4_4_;
    fVar3 = fVar4 * (float)uStack_9;
    fVar11 = uStack_21._4_4_ * uStack_9._4_4_;
    fVar7 = uStack_21._4_4_ * (float)uStack_9;
    fVar10 = (float)uStack_21 * uStack_9._4_4_;
    fVar12 = (float)uStack_21 * (float)uStack_9;
    uStack_9 = uVar18;
    fVar1 = (float)func_?((fVar8 - uStack_21._4_4_ * fVar1) *
                                        (float)(undefined4)uVar18 +
                                        ((float)uStack_21 * fVar1 - fVar3) * (float)uVar18._4_4_ +
                                        (fVar7 - fVar10) * (pVVar6->upVector).z,
                                        fVar11 + fVar12 + fVar4 * fVar1);
    pcVar17 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar17 = (code *)FUN_?(&UNK_?), pcVar17 == (code *)0x0)) {
      uVar18 = func_?(&UNK_?);
      FUN_?(uVar18,0);
      pcVar17 = (code *)swi(3);
      (*pcVar17)();
      return;
    }
    pcRam_? = pcVar17;
    fVar4 = (float)(*pcRam_?)();
    fVar3 = (this->fields).rotateRollFactor;
    pcVar17 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar17 = (code *)FUN_?(&UNK_?), pcVar17 == (code *)0x0)) {
      uVar18 = func_?(&UNK_?);
      FUN_?(uVar18,0);
      pcVar17 = (code *)swi(3);
      (*pcVar17)();
      return;
    }
    pcRam_? = pcVar17;
    fVar7 = (float)(*pcRam_?)();
    fVar10 = _UNK_?;
    fVar7 = fVar7 * (this->fields).rollSpeed;
    if (fVar7 < 0.0) {
      fVar7 = 0.0;
    }
    else if (fVar5 < fVar7) {
      fVar7 = fVar5;
    }
    fVar7 = fVar7 * MethodInfo__System__Runtime__CompilerServices__CallSite_1_T_____c<System::Runtime::CompilerServices::CallSite_1_T_::T>___CreateCustomNoMatchDelegate_b__21_0_System__Reflection__ParameterInfo_
                    ._0_4_ * fVar7 * fVar7 + fVar7 * _UNK_? * fVar7;
    fVar1 = (fVar5 - fVar7) * fVar2 + fVar7 * (fVar1 / fVar4) * fVar3;
    (this->fields).angleDiff = fVar1;
    if ((float)((uint)fVar1 & _UNK_?) < fVar10) {
      (this->fields).angleDiff = 0.0;
    }
    pTVar14 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                       ((Component *)this,(MethodInfo *)0x0);
    if (pTVar14 != (Transform *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      uStack_21 = 0;
      uStack_22 = 0;
      pvVar16 = (pTVar14->fields)._._.m_CachedPtr;
      if (pvVar16 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar14,(MethodInfo *)0x0);
        pcVar17 = (code *)swi(3);
        (*pcVar17)();
        return;
      }
      pcVar17 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar17 = (code *)FUN_?(&UNK_?), pcVar17 == (code *)0x0)) {
        uVar18 = func_?(&UNK_?);
        FUN_?(uVar18,0);
        pcVar17 = (code *)swi(3);
        (*pcVar17)();
        return;
      }
      pcRam_? = pcVar17;
      (*pcRam_?)(pvVar16,&uStack_21);
      pTVar14 = (this->fields).hoverCraftHullRoot;
      fVar1 = (float)((uint)(this->fields).rollMax ^ _UNK_?);
      fVar2 = (float)((uint)(this->fields).angleDiff ^ _UNK_?);
      (this->fields).prevWorldRot.x = (float)uStack_21;
      (this->fields).prevWorldRot.y = uStack_21._4_4_;
      (this->fields).prevWorldRot.z = (float)uStack_22;
      (this->fields).prevWorldRot.w = uStack_22._4_4_;
      if ((fVar1 <= fVar2) && (fVar3 = (this->fields).rollMax, fVar1 = fVar2, fVar3 < fVar2))
      {
        fVar1 = fVar3;
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Vector3);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pVVar6 = TypeInfo__UnityEngine__Vector3->static_fields;
      uStack_9._0_4_ = (pVVar6->forwardVector).x;
      uStack_9._4_4_ = (pVVar6->forwardVector).y;
      uStack_15 = CONCAT44(uStack_15._4_4_,(pVVar6->forwardVector).z);
      uStack_23 = 0;
      uStack_24 = 0;
      pcVar17 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar17 = (code *)FUN_?(&UNK_?), pcVar17 == (code *)0x0)) {
        uVar18 = func_?(&UNK_?);
        FUN_?(uVar18,0);
        pcVar17 = (code *)swi(3);
        (*pcVar17)();
        return;
      }
      pcRam_? = pcVar17;
      (*pcRam_?)(fVar1,&uStack_9,&uStack_23);
      if (pTVar14 == (Transform *)0x0) {
        FUN_?();
        pcVar17 = (code *)swi(3);
        (*pcVar17)();
        return;
      }
      uStack_21 = uStack_23;
      uStack_22 = uStack_24;
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pvVar16 = (pTVar14->fields)._._.m_CachedPtr;
      if (pvVar16 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar14,(MethodInfo *)0x0);
        pcVar17 = (code *)swi(3);
        (*pcVar17)();
        return;
      }
      pcVar17 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar17 = (code *)FUN_?(&UNK_?), pcVar17 == (code *)0x0)) {
        uVar18 = func_?(&UNK_?);
        FUN_?(uVar18,0);
        pcVar17 = (code *)swi(3);
        (*pcVar17)();
        return;
      }
      pcRam_? = pcVar17;
      (*pcRam_?)(pvVar16,&uStack_21);
      return;
    }
  }
  FUN_?();
  pcVar17 = (code *)swi(3);
  (*pcVar17)();
  return;
}


/* Void AnimateHullSpeed() */

void Assembly-CSharp.dll::HoverCraftVisualization::HoverCraftVisualization_AnimateHullSpeed
               (HoverCraftVisualization *this,MethodInfo *method)

{
  pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                     ((Component *)this,(MethodInfo *)0x0);
  if (pTVar1 != (Transform *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    uStack_2 = 0;
    uStack_3 = 0;
    pvVar4 = (pTVar1->fields)._._.m_CachedPtr;
    if (pvVar4 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar1,(MethodInfo *)0x0);
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pcVar5 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
      uVar6 = func_?(&UNK_?);
      FUN_?(uVar6,0);
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pcRam_? = pcVar5;
    (*pcRam_?)(pvVar4);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    fVar7 = _UNK_?;
    fVar8 = (float)uStack_3 + (float)uStack_3;
    fVar9 = uStack_2._4_4_ + uStack_2._4_4_;
    pVVar10 = TypeInfo__UnityEngine__Vector3->static_fields;
    fVar11 = ((float)uStack_2 + (float)uStack_2) * (float)uStack_2;
    uVar12 = (pVVar10->forwardVector).x;
    uVar13 = (pVVar10->forwardVector).y;
    fVar14 = (pVVar10->forwardVector).z;
    fVar15 = ((float)uStack_2 + (float)uStack_2) * uStack_3._4_4_;
    fVar16 = (_UNK_? - (fVar8 * (float)uStack_3 + fVar9 * uStack_2._4_4_)) *
             (float)uVar12 + (fVar9 * (float)uStack_2 - fVar8 * uStack_3._4_4_) * (float)uVar13 +
             (fVar9 * uStack_3._4_4_ + fVar8 * (float)uStack_2) * fVar14;
    fVar17 = (_UNK_? - (fVar8 * (float)uStack_3 + fVar11)) * (float)uVar13 +
            (fVar8 * uStack_3._4_4_ + fVar9 * (float)uStack_2) * (float)uVar12 +
            (fVar8 * uStack_2._4_4_ - fVar15) * fVar14;
    fVar14 = (fVar8 * (float)uStack_2 - fVar9 * uStack_3._4_4_) * (float)uVar12 +
             (fVar15 + fVar8 * uStack_2._4_4_) * (float)uVar13 +
             (_UNK_? - (fVar9 * uStack_2._4_4_ + fVar11)) * fVar14;
    uStack_18 = CONCAT44(fVar17,fVar16);
    fStack_19 = fVar14;
    fVar8 = (float)FUN_?(&uStack_18);
    if (_UNK_? < fVar8) {
      fVar14 = fVar14 / fVar8;
      uStack_18 = CONCAT44(fVar17 / fVar8,fVar16 / fVar8);
    }
    else {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Vector3);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pVVar10 = TypeInfo__UnityEngine__Vector3->static_fields;
      uStack_18._0_4_ = (pVVar10->zeroVector).x;
      uStack_18._4_4_ = (pVVar10->zeroVector).y;
      fVar14 = (pVVar10->zeroVector).z;
    }
    uStack_2._0_4_ = (this->fields).smoothVelocity.x;
    uStack_2._4_4_ = (this->fields).smoothVelocity.y;
    fVar8 = fVar7;
    if (uStack_2._4_4_ * uStack_18._4_4_ + (float)uStack_2 * (float)uStack_18 +
        (this->fields).smoothVelocity.z * fVar14 <= 0.0) {
      fVar8 = _UNK_?;
    }
    fVar14 = (this->fields).smoothAcceleration;
    fVar17 = (this->fields).signedAcceleration;
    pcVar5 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
      uVar6 = func_?(&UNK_?);
      FUN_?(uVar6,0);
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pcRam_? = pcVar5;
    fVar15 = (float)(*pcRam_?)();
    pcVar5 = pcRam_?;
    fVar11 = MethodInfo__System__Runtime__CompilerServices__CallSite_1_T_____c<System::Runtime::CompilerServices::CallSite_1_T_::T>___CreateCustomNoMatchDelegate_b__21_0_System__Reflection__ParameterInfo_
             ._0_4_;
    fVar9 = _UNK_?;
    fVar15 = fVar15 * _UNK_?;
    if (fVar15 < 0.0) {
      fVar15 = 0.0;
    }
    else if (fVar7 < fVar15) {
      fVar15 = fVar7;
    }
    fVar20 = fVar15 * MethodInfo__System__Runtime__CompilerServices__CallSite_1_T_____c<System::Runtime::CompilerServices::CallSite_1_T_::T>___CreateCustomNoMatchDelegate_b__21_0_System__Reflection__ParameterInfo_
                      ._0_4_ * fVar15 * fVar15 + fVar15 * _UNK_? * fVar15;
    fVar15 = (this->fields).pitchFactor;
    fVar16 = (this->fields).smoothPitchFactor;
    fVar14 = (fVar7 - fVar20) * fVar14 + fVar20 * fVar17 * fVar8;
    (this->fields).smoothAcceleration = fVar14;
    pcVar21 = pcRam_?;
    if ((pcVar5 == (code *)0x0) &&
       (pcVar5 = (code *)FUN_?(&UNK_?), pcVar21 = pcVar5, pcVar5 == (code *)0x0)) {
      uVar6 = func_?(&UNK_?);
      FUN_?(uVar6,0);
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pcRam_? = pcVar21;
    fVar8 = (float)(*pcVar5)();
    fVar8 = fVar8 * (this->fields).pitchSpeedTime;
    if (fVar8 < 0.0) {
      fVar8 = 0.0;
    }
    else if (fVar7 < fVar8) {
      fVar8 = fVar7;
    }
    fVar8 = fVar8 * fVar11 * fVar8 * fVar8 + fVar8 * fVar9 * fVar8;
    pTVar1 = (this->fields).hoverCraftHullRoot;
    (this->fields).smoothPitchFactor = (fVar7 - fVar8) * fVar16 + fVar8 * fVar14 * fVar15;
    if (pTVar1 != (Transform *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      uStack_22 = 0;
      uStack_23 = 0;
      pvVar4 = (pTVar1->fields)._._.m_CachedPtr;
      if (pvVar4 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar1,(MethodInfo *)0x0);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pcVar5 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
        uVar6 = func_?(&UNK_?);
        FUN_?(uVar6,0);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pcRam_? = pcVar5;
      (*pcRam_?)(pvVar4,&uStack_22);
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Vector3);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pVVar10 = TypeInfo__UnityEngine__Vector3->static_fields;
      uStack_18._0_4_ = (pVVar10->rightVector).x;
      uStack_18._4_4_ = (pVVar10->rightVector).y;
      fStack_19 = (pVVar10->rightVector).z;
      uStack_2 = 0;
      uStack_3 = 0;
      pcVar5 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
        uVar6 = func_?(&UNK_?);
        FUN_?(uVar6,0);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pcRam_? = pcVar5;
      (*pcRam_?)();
      fVar7 = uStack_2._4_4_ * (float)uStack_22;
      fVar8 = uStack_2._4_4_ * uStack_22._4_4_;
      fVar17 = (float)uStack_2 * (float)uStack_22;
      fVar14 = (float)uStack_2 * uStack_22._4_4_;
      uStack_22 = CONCAT44((uStack_2._4_4_ * uStack_23._4_4_ + uStack_3._4_4_ * uStack_22._4_4_ +
                           (float)uStack_2 * (float)uStack_23) -
                           (float)uStack_3 * (float)uStack_22,
                           ((float)uStack_2 * uStack_23._4_4_ + uStack_3._4_4_ * (float)uStack_22
                           + (float)uStack_3 * uStack_22._4_4_) -
                           uStack_2._4_4_ * (float)uStack_23);
      uStack_23 = CONCAT44(((uStack_3._4_4_ * uStack_23._4_4_ - fVar17) - fVar8) -
                           (float)uStack_3 * (float)uStack_23,
                           ((float)uStack_3 * uStack_23._4_4_ + uStack_3._4_4_ * (float)uStack_23
                           + fVar7) - fVar14);
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pvVar4 = (pTVar1->fields)._._.m_CachedPtr;
      if (pvVar4 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar1,(MethodInfo *)0x0);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pcVar5 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
        uVar6 = func_?(&UNK_?);
        FUN_?(uVar6,0);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pcRam_? = pcVar5;
      (*pcRam_?)(pvVar4,&uStack_22);
      return;
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void Awake() */

void Assembly-CSharp.dll::HoverCraftVisualization::HoverCraftVisualization_Awake
               (HoverCraftVisualization *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__HoverCraftVisualization);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar2 = func_?(&UNK_?);
    FUN_?(uVar2,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
  fVar3 = (float)(*pcRam_?)();
  (this->fields).unoccupiedTime = fVar3;
  if (*(int *)&(TypeInfo__HoverCraftVisualization->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__HoverCraftVisualization);
  }
  TStack_4.colors =
       (TypeInfo__HoverCraftVisualization->static_fields->DefaultThrustersColor).colors;
  TStack_4.alphas =
       (TypeInfo__HoverCraftVisualization->static_fields->DefaultThrustersColor).alphas;
  pGVar5 = HoverCraftVisualization_CreateGradient(&TStack_4,(MethodInfo *)0x0);
  bVar6 = iRam_? != 0;
  (this->fields).thrustersColor = pGVar5;
  if (bVar6) {
    uVar7 = (uint)((ulonglong)&(this->fields).thrustersColor >> 0xc);
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
  return;
}


/* Void CalculateMovementValues() */

void Assembly-CSharp.dll::HoverCraftVisualization::HoverCraftVisualization_CalculateMovementValues
               (HoverCraftVisualization *this,MethodInfo *method)

{
  obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                  ((Component *)this,(MethodInfo *)0x0);
  if (obj == (Transform *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uStack_2 = 0;
  fStack_3 = 0.0;
  pvVar4 = (obj->fields)._._.m_CachedPtr;
  if (pvVar4 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar5 = func_?(&UNK_?);
    FUN_?(uVar5,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
  (*pcRam_?)(pvVar4,&uStack_2);
  fVar6 = fStack_3;
  uVar7 = (this->fields).prevWorldPosition.x;
  uVar8 = (this->fields).prevWorldPosition.y;
  uStack_9 = uStack_2;
  uVar10 = uStack_9;
  uStack_9._0_4_ = (float)uStack_2;
  fVar11 = (float)uStack_9 - (float)uVar7;
  fVar12 = fStack_3 - (this->fields).prevWorldPosition.z;
  pcVar1 = pcRam_?;
  uStack_9 = uVar10;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar5 = func_?(&UNK_?);
    FUN_?(uVar5,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
  fVar13 = (float)(*pcRam_?)();
  fVar11 = fVar11 / fVar13;
  fVar14 = (0.0 - (float)uVar8) / fVar13;
  fVar12 = fVar12 / fVar13;
  uStack_2 = CONCAT44(fVar14,fVar11);
  fStack_3 = fVar12;
  fVar15 = (float)FUN_?(&uStack_2);
  pcVar1 = pcRam_?;
  fVar13 = (this->fields).smoothMoveSpeed;
  (this->fields).moveSpeed = fVar15;
  pcVar16 = pcRam_?;
  if ((pcVar1 == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar16 = pcVar1, pcVar1 == (code *)0x0)) {
    uVar5 = func_?(&UNK_?);
    FUN_?(uVar5,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar16;
  fVar17 = (float)(*pcVar1)();
  pcVar1 = pcRam_?;
  fVar18 = _UNK_?;
  fVar17 = fVar17 * _UNK_?;
  if (fVar17 < 0.0) {
    fVar17 = 0.0;
  }
  else if (_UNK_? < fVar17) {
    fVar17 = _UNK_?;
  }
  fVar19 = fVar17 * MethodInfo__System__Runtime__CompilerServices__CallSite_1_T_____c<System::Runtime::CompilerServices::CallSite_1_T_::T>___CreateCustomNoMatchDelegate_b__21_0_System__Reflection__ParameterInfo_
                    ._0_4_ * fVar17 * fVar17 + fVar17 * _UNK_? * fVar17;
  fVar17 = (this->fields).smoothVelocity.z;
  (this->fields).smoothMoveSpeed = (_UNK_? - fVar19) * fVar13 + fVar19 * fVar15;
  uStack_2._0_4_ = (this->fields).smoothVelocity.x;
  uStack_2._4_4_ = (this->fields).smoothVelocity.y;
  pcVar16 = pcRam_?;
  if ((pcVar1 == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar16 = pcVar1, pcVar1 == (code *)0x0)) {
    uVar5 = func_?(&UNK_?);
    FUN_?(uVar5,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar16;
  fVar15 = (float)(*pcVar1)();
  pcVar1 = pcRam_?;
  fVar15 = fVar15 * _UNK_?;
  if (fVar15 < 0.0) {
    fVar15 = 0.0;
  }
  else if (fVar18 < fVar15) {
    fVar15 = fVar18;
  }
  fVar18 = (this->fields).smoothMoveSpeed;
  (this->fields).smoothVelocity.x = (fVar11 - (float)uStack_2) * fVar15 + (float)uStack_2;
  (this->fields).smoothVelocity.y = (fVar14 - uStack_2._4_4_) * fVar15 + uStack_2._4_4_;
  (this->fields).smoothVelocity.z = (fVar12 - fVar17) * fVar15 + fVar17;
  pcVar16 = pcRam_?;
  if ((pcVar1 == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar16 = pcVar1, pcVar1 == (code *)0x0)) {
    uVar5 = func_?(&UNK_?);
    FUN_?(uVar5,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar16;
  fVar11 = (float)(*pcVar1)();
  (this->fields).prevWorldPosition.x = (float)(int)(uStack_9 & 0xffffffff);
  (this->fields).prevWorldPosition.y = (float)(int)((uStack_9 & 0xffffffff) >> 0x20);
  (this->fields).signedAcceleration = (fVar18 - fVar13) / fVar11;
  (this->fields).prevWorldPosition.z = fVar6;
  return;
}


/* Gradient CreateGradient(ThrustersColor) */

Gradient *
Assembly-CSharp.dll::HoverCraftVisualization::HoverCraftVisualization_CreateGradient
          (ThrustersColor *thrustersColor,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__GradientAlphaKey);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__GradientColorKey);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Gradient);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (thrustersColor->colors != (ThrustersColorColorKey__Array *)0x0) {
    lVar1 = FUN_?(TypeInfo__UnityEngine__GradientColorKey,
                          (int)thrustersColor->colors->max_length);
    pTVar2 = thrustersColor->colors;
    uVar3 = 0;
    if (pTVar2 != (ThrustersColorColorKey__Array *)0x0) {
      lVar4 = 0x20;
      puVar5 = (undefined8 *)(lVar1 + 0x20);
      for (uVar6 = uVar3; (int)uVar6 < (int)pTVar2->max_length; uVar6 = uVar6 + 1) {
        if ((uint)pTVar2->max_length <= uVar6) goto code_?;
        puVar7 = (undefined8 *)
                 ((longlong)&((ThrustersColorColorKey__Array *)(pTVar2->vector + -2))->klass +
                 lVar4);
        uVar8 = *(undefined4 *)((longlong)puVar7 + 0xc);
        uStack_9 = CONCAT44(0x3f800000,*(undefined4 *)(puVar7 + 1));
        if (lVar1 == 0) goto DAT_?;
        if (*(uint *)(lVar1 + 0x18) <= uVar6) goto code_?;
        lVar4 = lVar4 + 0x10;
        *puVar5 = *puVar7;
        puVar5[1] = uStack_9;
        *(undefined4 *)(puVar5 + 2) = uVar8;
        puVar5 = (undefined8 *)((longlong)puVar5 + 0x14);
      }
      if (thrustersColor->alphas != (ThrustersColorAlphaKey__Array *)0x0) {
        lVar1 = FUN_?(TypeInfo__UnityEngine__GradientAlphaKey,
                              (int)thrustersColor->alphas->max_length);
        pTVar10 = thrustersColor->alphas;
        if (pTVar10 != (ThrustersColorAlphaKey__Array *)0x0) {
          puVar11 = (undefined4 *)(lVar1 + 0x20);
          do {
            if ((int)pTVar10->max_length <= (int)uVar3) {
              pGVar12 = (Gradient *)FUN_?(TypeInfo__UnityEngine__Gradient);
              pcVar13 = pcRam_?;
              if ((pcRam_? == (code *)0x0) &&
                 (pcVar13 = (code *)FUN_?(&UNK_?), pcVar13 == (code *)0x0)) {
                uVar14 = func_?(&UNK_?);
                FUN_?(uVar14,0);
                pcVar13 = (code *)swi(3);
                pGVar12 = (Gradient *)(*pcVar13)();
                return pGVar12;
              }
              pcRam_? = pcVar13;
              pvVar15 = (void *)(*pcRam_?)();
              bVar16 = cRam_? == '\0';
              (pGVar12->fields).m_Ptr = pvVar15;
              (pGVar12->fields).m_RequiresNativeCleanup = 1;
              if (bVar16) {
                FUN_?(&
                              MethodInfo__System__Span<UnityEngine::GradientColorKey>__GetPinnableReference__
                             );
                LOCK();
                UNLOCK();
                FUN_?(&
                              MethodInfo__System__Span<UnityEngine::GradientColorKey>__Span_UnityEngine__GradientColorKey____
                             );
                LOCK();
                UNLOCK();
                FUN_?(&MethodInfo__System__Span<UnityEngine::GradientColorKey>__get_Length__
                             );
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              pvVar15 = (pGVar12->fields).m_Ptr;
              if (pvVar15 == (void *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                ThrowHelper_2_ThrowNullReferenceException((Object *)pGVar12,(MethodInfo *)0x0);
                pcVar13 = (code *)swi(3);
                pGVar12 = (Gradient *)(*pcVar13)();
                return pGVar12;
              }
              pcVar13 = pcRam_?;
              if ((pcRam_? == (code *)0x0) &&
                 (pcVar13 = (code *)FUN_?(&UNK_?), pcVar13 == (code *)0x0)) {
                uVar14 = func_?(&UNK_?);
                FUN_?(uVar14,0);
                pcVar13 = (code *)swi(3);
                pGVar12 = (Gradient *)(*pcVar13)();
                return pGVar12;
              }
              pcRam_? = pcVar13;
              (*pcRam_?)(pvVar15);
              if (cRam_? == '\0') {
                FUN_?(&
                              MethodInfo__System__Span<UnityEngine::GradientAlphaKey>__GetPinnableReference__
                             );
                LOCK();
                UNLOCK();
                FUN_?(&
                              MethodInfo__System__Span<UnityEngine::GradientAlphaKey>__Span_UnityEngine__GradientAlphaKey____
                             );
                LOCK();
                UNLOCK();
                FUN_?(&MethodInfo__System__Span<UnityEngine::GradientAlphaKey>__get_Length__
                             );
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              pvVar15 = (pGVar12->fields).m_Ptr;
              if (pvVar15 == (void *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                ThrowHelper_2_ThrowNullReferenceException((Object *)pGVar12,(MethodInfo *)0x0);
                pcVar13 = (code *)swi(3);
                pGVar12 = (Gradient *)(*pcVar13)();
                return pGVar12;
              }
              pcVar13 = pcRam_?;
              if ((pcRam_? == (code *)0x0) &&
                 (pcVar13 = (code *)FUN_?(&UNK_?), pcVar13 == (code *)0x0)) {
                uVar14 = func_?(&UNK_?);
                FUN_?(uVar14,0);
                pcVar13 = (code *)swi(3);
                pGVar12 = (Gradient *)(*pcVar13)();
                return pGVar12;
              }
              pcRam_? = pcVar13;
              (*pcRam_?)(pvVar15);
              pvVar15 = (pGVar12->fields).m_Ptr;
              if (pvVar15 == (void *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                ThrowHelper_2_ThrowNullReferenceException((Object *)pGVar12,(MethodInfo *)0x0);
                pcVar13 = (code *)swi(3);
                pGVar12 = (Gradient *)(*pcVar13)();
                return pGVar12;
              }
              pcVar13 = pcRam_?;
              if ((pcRam_? == (code *)0x0) &&
                 (pcVar13 = (code *)FUN_?(&UNK_?), pcVar13 == (code *)0x0)) {
                uVar14 = func_?(&UNK_?);
                FUN_?(uVar14,0);
                pcVar13 = (code *)swi(3);
                pGVar12 = (Gradient *)(*pcVar13)();
                return pGVar12;
              }
              pcRam_? = pcVar13;
              (*pcRam_?)(pvVar15,0);
              return pGVar12;
            }
            if ((uint)pTVar10->max_length <= uVar3) {
code_?:
              FUN_?();
              pcVar13 = (code *)swi(3);
              pGVar12 = (Gradient *)(*pcVar13)();
              return pGVar12;
            }
            uVar8 = *(undefined4 *)(((longlong)pTVar10 - lVar1) + 4 + (longlong)puVar11);
            if (lVar1 == 0) break;
            if (*(uint *)(lVar1 + 0x18) <= uVar3) goto code_?;
            uVar3 = uVar3 + 1;
            *puVar11 = *(undefined4 *)(((longlong)pTVar10 - lVar1) + (longlong)puVar11);
            puVar11[1] = uVar8;
            puVar11 = puVar11 + 2;
          } while( true );
        }
      }
    }
  }
DAT_?:
  FUN_?();
  pcVar13 = (code *)swi(3);
  pGVar12 = (Gradient *)(*pcVar13)();
  return pGVar12;
}


/* Void HandleSound() */

void Assembly-CSharp.dll::HoverCraftVisualization::HoverCraftVisualization_HandleSound
               (HoverCraftVisualization *this,MethodInfo *method)

{
  fVar1 = (this->fields).smoothMoveSpeed / _UNK_?;
  obj = (this->fields).moving;
  fVar2 = _UNK_?;
  if ((fVar1 < _UNK_?) || (fVar2 = _UNK_?, _UNK_? < fVar1)) {
    fVar1 = fVar2;
  }
  if (obj == (AudioSource *)0x0) {
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::AudioSource>_UnityEngine__AudioSource_
                  ,fVar1,0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (obj == (AudioSource *)0x0) {
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pvVar4 = (obj->fields)._._._._.m_CachedPtr;
  if (pvVar4 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pcVar3 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
    uVar5 = func_?(&UNK_?);
    FUN_?(uVar5,0);
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pcRam_? = pcVar3;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam_?)(pvVar4,fVar1);
  return;
}


/* Void HandleUnoccupiedVehicle() */

void Assembly-CSharp.dll::HoverCraftVisualization::HoverCraftVisualization_HandleUnoccupiedVehicle
               (HoverCraftVisualization *this,MethodInfo *method)

{
  if ((this->fields).vehicleIsUnoccupied == 0) {
    pVVar1 = (this->fields).vehicleSeatManager;
    if (pVVar1 == (VehicleSeatManager *)0x0) goto code_?;
    if ((pVVar1->fields).occupiedSeatCount == 0) {
      pcVar2 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
        uVar3 = func_?(&UNK_?);
        FUN_?(uVar3,0);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pcRam_? = pcVar2;
      fVar4 = (float)(*pcRam_?)();
      (this->fields).unoccupiedTime = fVar4;
      (this->fields).vehicleIsUnoccupied = 1;
    }
  }
  if ((this->fields).vehicleIsUnoccupied != 0) {
    pVVar1 = (this->fields).vehicleSeatManager;
    if (pVVar1 == (VehicleSeatManager *)0x0) {
code_?:
      FUN_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (0 < (pVVar1->fields).occupiedSeatCount) {
      (this->fields).vehicleIsUnoccupied = 0;
    }
    if ((this->fields).vehicleIsUnoccupied != 0) {
      pcVar2 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
        uVar3 = func_?(&UNK_?);
        FUN_?(uVar3,0);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pcRam_? = pcVar2;
      fVar4 = (float)(*pcRam_?)();
      uVar5 = _UNK_?;
      if (_UNK_? - (fVar4 - (this->fields).unoccupiedTime) < _UNK_?) {
        pVVar6 = (this->fields).vehicleBlinker;
        if (pVVar6 != (VehicleBlinker *)0x0) {
          if (cRam_? == '\0') {
            FUN_?(&
                          MethodInfo__System__Collections__Generic__Dictionary<BlinkType,_Blinker>__get_Item_BlinkType_
                          ,5,_UNK_?,0);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          this_00 = (pVVar6->fields)._.blinkers;
          if ((this_00 != (Dictionary_2_BlinkType_Blinker_ *)0x0) &&
             (pOVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                       Int32Enum,System::Object]::
                       Dictionary_2_System_Int32Enum_System_Object__get_Item
                                 ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,5,
                                  MethodInfo__System__Collections__Generic__Dictionary<BlinkType,_Blinker>__get_Item_BlinkType_
                                 ), pOVar7 != (Object *)0x0)) {
            pcVar2 = pcRam_?;
            if ((pcRam_? == (code *)0x0) &&
               (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
              uVar3 = func_?(&UNK_?);
              FUN_?(uVar3,0);
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            pcRam_? = pcVar2;
            uVar8 = (*pcRam_?)();
            *(undefined4 *)((longlong)&pOVar7[1].monitor + 4) = uVar5;
            *(undefined4 *)&pOVar7[1].monitor = uVar8;
            return;
          }
          FUN_?();
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        goto code_?;
      }
    }
  }
  return;
}


/* Void Init(Transform, VehicleSeatManager, Single, MVRuntimeDataVariableClampedFloat, Boolean,
   HoverCraftVisualization+HoverCraftVisualizationSettings) */

void Assembly-CSharp.dll::HoverCraftVisualization::HoverCraftVisualization_Init
               (HoverCraftVisualization *this,Transform *hoverCraftHull,VehicleSeatManager *vsm,
               float maxHealthVal,MVRuntimeDataVariableClampedFloat *health,bool inSpawner,
               HoverCraftVisualization_HoverCraftVisualizationSettings
               *hoverCraftVisualizationSettings,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  UnityEngine__MeshFilter__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshFilter>______
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__HoverCraftVisualization___Init_b__44_0_System__Object_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVRuntimeDataVariable__OnChangeDelegate);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields).hoverCraftHullRoot;
  if ((pTVar1 != (Transform *)0x0) &&
     (pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                         ((Component *)pTVar1,(MethodInfo *)0x0), pTVar1 != (Transform *)0x0)) {
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pvVar2 = (pTVar1->fields)._._.m_CachedPtr;
    if (pvVar2 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar1,(MethodInfo *)0x0);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pcVar3 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
      uVar4 = func_?(&UNK_?);
      FUN_?(uVar4,0);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pcRam_? = pcVar3;
    (*pcRam_?)(pvVar2);
    bVar5 = iRam_? != 0;
    (this->fields).localHoverCraftHullRootBasePosition.x = 0.0;
    (this->fields).localHoverCraftHullRootBasePosition.y = 0.0;
    (this->fields).localHoverCraftHullRootBasePosition.z = 0.0;
    (this->fields)._.isInSpawner = inSpawner;
    (this->fields).vehicleSeatManager = vsm;
    if (bVar5) {
      uVar6 = (uint)((ulonglong)&(this->fields).vehicleSeatManager >> 0xc);
      uVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6);
      do {
        uVar8 = *(ulonglong *)(uVar7 * 8 + 0xADDR);
        puVar9 = (ulonglong *)(uVar7 * 8 + 0xADDR);
        LOCK();
        bVar5 = uVar8 == *puVar9;
        if (bVar5) {
          *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
        }
        UNLOCK();
      } while (!bVar5);
    }
    if (hoverCraftHull != (Transform *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pvVar2 = (hoverCraftHull->fields)._._.m_CachedPtr;
      if (pvVar2 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)hoverCraftHull,(MethodInfo *)0x0);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pcVar3 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
        uVar4 = func_?(&UNK_?);
        FUN_?(uVar4,0);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pcRam_? = pcVar3;
      (*pcRam_?)(pvVar2);
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      auStack_10[0] = 0;
      auStack_10._1_3_ = 0;
      auStack_10._4_4_ = 0.0;
      uStack_11 = (ThrustersColorColorKey__Array *)0x0;
      pvVar2 = (hoverCraftHull->fields)._._.m_CachedPtr;
      if (pvVar2 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)hoverCraftHull,(MethodInfo *)0x0);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pcVar3 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
        uVar4 = func_?(&UNK_?);
        FUN_?(uVar4,0);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pcRam_? = pcVar3;
      (*pcRam_?)(pvVar2,auStack_10);
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_parent
                (hoverCraftHull,(this->fields).hoverCraftHullRoot,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pvVar2 = (hoverCraftHull->fields)._._.m_CachedPtr;
      if (pvVar2 != (void *)0x0) {
        pcVar3 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
          uVar4 = func_?(&UNK_?);
          FUN_?(uVar4,0);
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pcRam_? = pcVar3;
        (*pcRam_?)(pvVar2);
        aHStack_12[0].useThruster = auStack_10[0];
        aHStack_12[0]._1_3_ = auStack_10._1_3_;
        aHStack_12[0].thrustersSize = (float)auStack_10._4_4_;
        aHStack_12[0].thrustersColor.colors = uStack_11;
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pvVar2 = (hoverCraftHull->fields)._._.m_CachedPtr;
        if (pvVar2 != (void *)0x0) {
          pcVar3 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
            uVar4 = func_?(&UNK_?);
            FUN_?(uVar4,0);
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          pcRam_? = pcVar3;
          (*pcRam_?)(pvVar2);
          pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                             ((Component *)this,(MethodInfo *)0x0);
          if (pTVar1 == (Transform *)0x0) {
            FUN_?();
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          if (cRam_? == '\0') {
            FUN_?(&
                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pvVar2 = (pTVar1->fields)._._.m_CachedPtr;
          if (pvVar2 == (void *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
            ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar1,(MethodInfo *)0x0);
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          pcVar3 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
            uVar4 = func_?(&UNK_?);
            FUN_?(uVar4,0);
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          pcRam_? = pcVar3;
          (*pcRam_?)(pvVar2);
          bVar5 = cRam_? == '\0';
          (this->fields).prevWorldPosition.x = 0.0;
          (this->fields).prevWorldPosition.y = 0.0;
          (this->fields).prevWorldPosition.z = 0.0;
          (this->fields).prevWorldPosition.y = 0.0;
          if (bVar5) {
            FUN_?(&
                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          auStack_10 = (undefined1  [8])0x0;
          uStack_11 = (ThrustersColorColorKey__Array *)0x0;
          pvVar2 = (pTVar1->fields)._._.m_CachedPtr;
          if (pvVar2 == (void *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
            ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar1,(MethodInfo *)0x0);
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          pcVar3 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
            uVar4 = func_?(&UNK_?);
            FUN_?(uVar4,0);
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          pcRam_? = pcVar3;
          (*pcRam_?)(pvVar2,auStack_10);
          (this->fields).maxHealth = maxHealthVal;
          (this->fields).prevWorldRot.x = (float)auStack_10._0_4_;
          (this->fields).prevWorldRot.y = (float)auStack_10._4_4_;
          (this->fields).prevWorldRot.z = (float)uStack_11;
          (this->fields).prevWorldRot.w = uStack_11._4_4_;
          if (health != (MVRuntimeDataVariableClampedFloat *)0x0) {
            fVar13 = (float)(*(health->klass->vtable).get_Value.methodPtr)
                                      (health,(health->klass->vtable).get_Value.method);
            (this->fields).prevHealth = fVar13;
            pMVar14 = (health->fields)._._.OnChange;
            this_00 = (UnityAction_1_System_Object_ *)
                      FUN_?(TypeInfo__MVRuntimeDataVariable__OnChangeDelegate);
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
            UnityAction_1_System_Object___ctor
                      (this_00,(Object *)this,
                       MethodInfo__HoverCraftVisualization___Init_b__44_0_System__Object_,
                       (MethodInfo *)0x0);
            pMVar14 = (MVRuntimeDataVariable_OnChangeDelegate *)
                     mscorlib.dll::System::Delegate::Delegate_Combine
                               ((Delegate *)pMVar14,(Delegate *)this_00,(MethodInfo *)0x0);
            if (pMVar14 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
              (health->fields)._._.OnChange = (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
            }
            else {
              pMVar15 = (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
              if (pMVar14->klass == TypeInfo__MVRuntimeDataVariable__OnChangeDelegate) {
                pMVar15 = pMVar14;
              }
              if (pMVar15 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
                FUN_?(pMVar14);
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              (health->fields)._._.OnChange = pMVar15;
              pMVar15 = (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
              if (pMVar14->klass == TypeInfo__MVRuntimeDataVariable__OnChangeDelegate) {
                pMVar15 = pMVar14;
              }
              if (pMVar15 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
                FUN_?(pMVar14);
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
            }
            if (iRam_? != 0) {
              uVar6 = (uint)((ulonglong)&(health->fields)._._.OnChange >> 0xc);
              uVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6);
              do {
                uVar8 = *(ulonglong *)(uVar7 * 8 + 0xADDR);
                puVar9 = (ulonglong *)(uVar7 * 8 + 0xADDR);
                LOCK();
                bVar5 = uVar8 == *puVar9;
                if (bVar5) {
                  *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
                }
                UNLOCK();
              } while (!bVar5);
            }
            pVVar16 = (this->fields).vehicleBlinker;
            this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                ((Component *)hoverCraftHull,(MethodInfo *)0x0);
            pMVar17 = 
            UnityEngine__MeshFilter__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshFilter>______
            ;
            if (this_01 != (GameObject *)0x0) {
              if ((
                  UnityEngine__MeshFilter__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshFilter>______
                  ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
                FUN_?(
                             UnityEngine__MeshFilter__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshFilter>______
                             );
              }
              pMVar18 = (MeshFilter__Array *)
                       UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                       GameObject_GetComponentsInChildren_4
                                 (this_01,0,((pMVar17->field7_0x38).rgctx_data)->method);
              if (pVVar16 != (VehicleBlinker *)0x0) {
                bVar5 = iRam_? != 0;
                (pVVar16->fields)._.meshFilters = pMVar18;
                if (bVar5) {
                  uVar6 = (uint)((ulonglong)&(pVVar16->fields)._.meshFilters >> 0xc);
                  uVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6);
                  do {
                    uVar8 = *(ulonglong *)(uVar7 * 8 + 0xADDR);
                    puVar9 = (ulonglong *)(uVar7 * 8 + 0xADDR);
                    LOCK();
                    bVar5 = uVar8 == *puVar9;
                    if (bVar5) {
                      *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
                    }
                    UNLOCK();
                  } while (!bVar5);
                }
                pVVar16 = (this->fields).vehicleBlinker;
                if (pVVar16 != (VehicleBlinker *)0x0) {
                  (pVVar16->fields)._.visible = 1;
                  aHStack_12[0].useThruster = hoverCraftVisualizationSettings->useThruster;
                  aHStack_12[0]._1_3_ = *(undefined3 *)&hoverCraftVisualizationSettings->field_0x1;
                  aHStack_12[0].thrustersSize = hoverCraftVisualizationSettings->thrustersSize;
                  aHStack_12[0].thrustersColor.colors =
                       (hoverCraftVisualizationSettings->thrustersColor).colors;
                  aHStack_12[0].thrustersColor.alphas =
                       (hoverCraftVisualizationSettings->thrustersColor).alphas;
                  HoverCraftVisualization_UpdateSettings(this,aHStack_12,(MethodInfo *)0x0);
                  if ((this->fields)._.isInSpawner != 0) {
                    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                              ((Behaviour *)this,0,(MethodInfo *)0x0);
                  }
                  return;
                }
              }
            }
          }
          goto code_?;
        }
      }
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)hoverCraftHull,(MethodInfo *)0x0);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
code_?:
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void OnDisable() */

void Assembly-CSharp.dll::HoverCraftVisualization::HoverCraftVisualization_OnDisable
               (HoverCraftVisualization *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<WorldObjectTypes::HoverCraft::Shared::HoverCraftThruster>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<WorldObjectTypes::HoverCraft::Shared::HoverCraftThruster>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<WorldObjectTypes::HoverCraft::Shared::HoverCraftThruster>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<WorldObjectTypes::HoverCraft::Shared::HoverCraftThruster>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar1 = (this->fields).vehicleBlinker;
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
  if (pVVar1 == (VehicleBlinker *)0x0) {
    bVar2 = false;
  }
  else {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    bVar2 = (pVVar1->fields)._._._._._.m_CachedPtr != (void *)0x0;
  }
  if (bVar2) {
    pVVar1 = (this->fields).vehicleBlinker;
    if (pVVar1 == (VehicleBlinker *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
              ((Behaviour *)pVVar1,0,(MethodInfo *)0x0);
  }
  pLVar3 = (this->fields).hoverCraftThrusters;
  if (pLVar3 == (List_1_WorldObjectTypes_HoverCraft_Shared_HoverCraftThruster_ *)0x0) {
code_?:
    FUN_?();
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (iRam_? != 0) {
    uVar5 = (uint)((ulonglong)&uStack_6 >> 0xc);
    puVar7 = (ulonglong *)((ulonglong)((uVar5 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar8 = *puVar7;
      LOCK();
      uVar9 = *puVar7;
      if (uVar8 == uVar9) {
        *puVar7 = uVar8 | 1L << (uVar5 & 0x3f);
      }
      UNLOCK();
    } while (uVar8 != uVar9);
  }
  pLStack_10 = (List_1_T_Enumerator_System_Object_ *)
               ((ulonglong)(uint)(pLVar3->fields)._version << 0x20);
  uStack_11 = 0;
  LStack_12._8_8_ = pLStack_10;
  LStack_12._current = (Object *)0x0;
  uStack_6 = 0;
  pLStack_10 = &LStack_12;
  LStack_12._list = (List_1_System_Object_ *)pLVar3;
  while (bVar13 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
                 List_1_T_Enumerator_System_Object__MoveNext
                           (&LStack_12,
                            MethodInfo__System__Collections__Generic__List_1_T___Enumerator<WorldObjectTypes::HoverCraft::Shared::HoverCraftThruster>__MoveNext__
                           ), this_00 = LStack_12._current, bVar13 != 0) {
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
    if ((HoverCraftThruster *)this_00 != (HoverCraftThruster *)0x0) {
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      if ((((HoverCraftThruster__Fields *)((longlong)this_00 + 0x10))->_)._._._.m_CachedPtr !=
          (void *)0x0) {
        WorldObjectTypes::HoverCraft::Shared::HoverCraftThruster::HoverCraftThruster_Disable
                  ((HoverCraftThruster *)this_00,(MethodInfo *)0x0);
      }
    }
  }
  pPVar14 = (this->fields).fire;
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
  if (pPVar14 != (ParticleSystem *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pPVar14->fields)._._.m_CachedPtr != (void *)0x0) {
      pPVar14 = (this->fields).fire;
      if (pPVar14 == (ParticleSystem *)0x0) goto code_?;
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::ParticleSystem>_UnityEngine__ParticleSystem_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pvVar15 = (pPVar14->fields)._._.m_CachedPtr;
      if (pvVar15 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pPVar14,(MethodInfo *)0x0);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pcVar4 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
        uVar16 = func_?(&UNK_?);
        FUN_?(uVar16,0);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pcRam_? = pcVar4;
      (*pcRam_?)(pvVar15,1);
    }
  }
  return;
}


/* Void OnEnable() */

void Assembly-CSharp.dll::HoverCraftVisualization::HoverCraftVisualization_OnEnable
               (HoverCraftVisualization *this,MethodInfo *method)

{
  this_00 = (this->fields).vehicleBlinker;
  if (this_00 != (VehicleBlinker *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
              ((Behaviour *)this_00,1,(MethodInfo *)0x0);
    HoverCraftVisualization_ActivateThrusters(this,(MethodInfo *)0x0);
    (this->fields).smoothMoveSpeed = 0.0;
    (this->fields).smoothPitchFactor = 0.0;
    obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                    ((Component *)this,(MethodInfo *)0x0);
    if (obj != (Transform *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      uStack_1 = 0;
      fStack_2 = 0.0;
      pvVar3 = (obj->fields)._._.m_CachedPtr;
      if (pvVar3 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pcVar4 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
        uVar5 = func_?(&UNK_?);
        FUN_?(uVar5,0);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pcRam_? = pcVar4;
      (*pcRam_?)(pvVar3,&uStack_1);
      (this->fields).prevWorldPosition.x = (float)(undefined4)uStack_1;
      (this->fields).prevWorldPosition.y = (float)uStack_1._4_4_;
      (this->fields).prevWorldPosition.z = fStack_2;
      return;
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void OnHealthChange(Single) */

void Assembly-CSharp.dll::HoverCraftVisualization::HoverCraftVisualization_OnHealthChange
               (HoverCraftVisualization *this,float newHealth,MethodInfo *method)

{
  pPStackX_8 = (ParticleSystem *)0x0;
  if (newHealth < (this->fields).maxHealth) {
    pPVar1 = (this->fields).damageSmokeEmitter;
    if (pPVar1 == (ParticleSystem *)0x0) goto code_?;
    bVar2 = UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::
            ParticleSystem_get_isPlaying(pPVar1,(MethodInfo *)0x0);
    if (bVar2 == 0) {
      pPVar1 = (this->fields).damageSmokeEmitter;
      if (pPVar1 == (ParticleSystem *)0x0) goto code_?;
      UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::ParticleSystem_Play
                (pPVar1,1,(MethodInfo *)0x0);
      pPVar1 = (this->fields).fire;
      if (pPVar1 == (ParticleSystem *)0x0) goto code_?;
      pPStackX_8 = (ParticleSystem *)
                   UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::
                   ParticleSystem_get_collision(pPVar1,(MethodInfo *)0x0);
      pcVar3 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
        uVar4 = func_?(&UNK_?);
        FUN_?(uVar4,0);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pcRam_? = pcVar3;
      (*pcRam_?)(&pPStackX_8);
    }
  }
  if ((this->fields).maxHealth <= newHealth) {
    pPVar1 = (this->fields).damageSmokeEmitter;
    if (pPVar1 == (ParticleSystem *)0x0) goto code_?;
    bVar2 = UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::
            ParticleSystem_get_isPlaying(pPVar1,(MethodInfo *)0x0);
    if (bVar2 != 0) {
      pPVar1 = (this->fields).damageSmokeEmitter;
      if (pPVar1 != (ParticleSystem *)0x0) {
        UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::ParticleSystem_Stop_1
                  (pPVar1,1,(MethodInfo *)0x0);
        pPVar1 = (this->fields).fire;
        if (pPVar1 != (ParticleSystem *)0x0) {
          pPStack_5 = (ParticleSystem *)
                       UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::
                       ParticleSystem_get_collision(pPVar1,(MethodInfo *)0x0);
          pcVar3 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
            uVar4 = func_?(&UNK_?);
            FUN_?(uVar4,0);
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          pcRam_? = pcVar3;
          (*pcRam_?)(&pPStack_5,0);
          return;
        }
      }
      goto code_?;
    }
  }
  fVar6 = (this->fields).prevHealth;
  if (newHealth < fVar6) {
    this_00 = (this->fields).vehicleBlinker;
    if (this_00 == (VehicleBlinker *)0x0) goto code_?;
    type = BlinkType__Enum_Damage;
code_?:
    BlinkerBase::BlinkerBase_StartBlinking
              ((BlinkerBase *)this_00,type,_UNK_?,(MethodInfo *)0x0);
  }
  else if (fVar6 < newHealth) {
    this_00 = (this->fields).vehicleBlinker;
    if (this_00 == (VehicleBlinker *)0x0) goto code_?;
    type = BlinkType__Enum_Healing;
    goto code_?;
  }
  pPVar1 = (this->fields).damageSmokeEmitter;
  fVar6 = (_UNK_? - newHealth / (this->fields).maxHealth) *
           (this->fields).damageParticleFactor;
  if (pPVar1 != (ParticleSystem *)0x0) {
    if (iRam_? != 0) {
      uVar7 = (uint)((ulonglong)&pPStackX_20 >> 0xc);
      uVar8 = (ulonglong)((uVar7 & 0x1fffff) >> 6);
      do {
        uVar9 = *(ulonglong *)(uVar8 * 8 + 0xADDR);
        puVar10 = (ulonglong *)(uVar8 * 8 + 0xADDR);
        LOCK();
        bVar11 = uVar9 == *puVar10;
        if (bVar11) {
          *puVar10 = uVar9 | 1L << (uVar7 & 0x3f);
        }
        UNLOCK();
      } while (!bVar11);
    }
    pcVar3 = pcRam_?;
    pPStackX_20 = pPVar1;
    pPStack_12 = pPVar1;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
      uVar4 = func_?(&UNK_?);
      FUN_?(uVar4,0);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pcRam_? = pcVar3;
    (*pcRam_?)(&pPStack_12,fVar6);
    apPStack_13[0] = (this->fields).fire;
    (this->fields).prevHealth = newHealth;
    if (apPStack_13[0] != (ParticleSystem *)0x0) {
      if (iRam_? != 0) {
        uVar7 = (uint)((ulonglong)&pPStackX_20 >> 0xc);
        uVar8 = (ulonglong)((uVar7 & 0x1fffff) >> 6);
        do {
          uVar9 = *(ulonglong *)(uVar8 * 8 + 0xADDR);
          puVar10 = (ulonglong *)(uVar8 * 8 + 0xADDR);
          LOCK();
          bVar11 = uVar9 == *puVar10;
          if (bVar11) {
            *puVar10 = uVar9 | 1L << (uVar7 & 0x3f);
          }
          UNLOCK();
        } while (!bVar11);
      }
      fVar6 = fVar6 * _UNK_?;
      pcVar3 = pcRam_?;
      pPStackX_20 = apPStack_13[0];
      if ((pcRam_? == (code *)0x0) &&
         (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
        uVar4 = func_?(&UNK_?);
        FUN_?(uVar4,0);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pcRam_? = pcVar3;
      (*pcRam_?)(apPStack_13,fVar6);
      return;
    }
  }
code_?:
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void PassiveAnim() */

void Assembly-CSharp.dll::HoverCraftVisualization::HoverCraftVisualization_PassiveAnim
               (HoverCraftVisualization *this,MethodInfo *method)

{
  pTVar1 = (this->fields).hoverCraftHullRoot;
  if (pTVar1 == (Transform *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                     ((Component *)pTVar1,(MethodInfo *)0x0);
  uStack_3._0_4_ = (this->fields).hoverOffset.x;
  uStack_3._4_4_ = (this->fields).hoverOffset.y;
  fVar4 = (this->fields).hoverOffset.z;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar5 = TypeInfo__UnityEngine__Vector3->static_fields;
  uVar6 = (pVVar5->upVector).x;
  uVar7 = (pVVar5->upVector).y;
  fVar8 = (pVVar5->upVector).z;
  pcVar2 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
    uVar9 = func_?(&UNK_?);
    FUN_?(uVar9,0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcRam_? = pcVar2;
  auVar10._0_8_ = (*pcRam_?)();
  auVar10._8_8_ = extraout_XMM0_Qb;
  auVar11._4_12_ = auVar10._4_12_;
  auVar11._0_4_ = (float)auVar10._0_8_ / (this->fields).HoverPeriod;
  fVar12 = (float)FUN_?(auVar11._0_8_);
  fVar12 = fVar12 * (this->fields).HoverAmplitude;
  uVar9._0_4_ = (this->fields).localHoverCraftHullRootBasePosition.x;
  uVar9._4_4_ = (this->fields).localHoverCraftHullRootBasePosition.y;
  fStack_13 = fVar12 * fVar8 + fVar4 + (this->fields).localHoverCraftHullRootBasePosition.z;
  if (pTVar1 == (Transform *)0x0) {
    uStack_3 = uVar9;
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uStack_3 = CONCAT44(fVar12 * (float)uVar7 + uStack_3._4_4_ + (float)uVar9._4_4_,
                       fVar12 * (float)uVar6 + (float)uStack_3 + (float)(undefined4)uVar9);
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pvVar14 = (pTVar1->fields)._._.m_CachedPtr;
  if (pvVar14 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar1,(MethodInfo *)0x0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcVar2 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
    uVar9 = func_?(&UNK_?);
    FUN_?(uVar9,0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcRam_? = pcVar2;
  (*pcRam_?)(pvVar14,&uStack_3);
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::HoverCraftVisualization::HoverCraftVisualization_Update
               (HoverCraftVisualization *this,MethodInfo *method)

{
  HoverCraftVisualization_AnimateHullInertia(this,(MethodInfo *)0x0);
  HoverCraftVisualization_CalculateMovementValues(this,(MethodInfo *)0x0);
  HoverCraftVisualization_AnimateHullSpeed(this,(MethodInfo *)0x0);
  HoverCraftVisualization_PassiveAnim(this,(MethodInfo *)0x0);
  if ((this->fields)._.isInSpawner == 0) {
    if ((this->fields).vehicleIsUnoccupied == 0) {
      pVVar1 = (this->fields).vehicleSeatManager;
      if (pVVar1 == (VehicleSeatManager *)0x0) goto code_?;
      if ((pVVar1->fields).occupiedSeatCount == 0) {
        pcVar2 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
          uVar3 = func_?(&UNK_?);
          FUN_?(uVar3,0);
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pcRam_? = pcVar2;
        fVar4 = (float)(*pcRam_?)();
        (this->fields).unoccupiedTime = fVar4;
        (this->fields).vehicleIsUnoccupied = 1;
      }
      if ((this->fields).vehicleIsUnoccupied == 0) goto code_?;
    }
    pVVar1 = (this->fields).vehicleSeatManager;
    if (pVVar1 == (VehicleSeatManager *)0x0) goto code_?;
    if (0 < (pVVar1->fields).occupiedSeatCount) {
      (this->fields).vehicleIsUnoccupied = 0;
    }
    if ((this->fields).vehicleIsUnoccupied != 0) {
      pcVar2 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
        uVar3 = func_?(&UNK_?);
        FUN_?(uVar3,0);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pcRam_? = pcVar2;
      fVar4 = (float)(*pcRam_?)();
      if (_UNK_? - (fVar4 - (this->fields).unoccupiedTime) < _UNK_?) {
        this_00 = (this->fields).vehicleBlinker;
        if (this_00 == (VehicleBlinker *)0x0) goto code_?;
        BlinkerBase::BlinkerBase_StartBlinking
                  ((BlinkerBase *)this_00,BlinkType__Enum_AboutToExpire,_UNK_?,
                   (MethodInfo *)0x0);
      }
    }
  }
code_?:
  fVar5 = (this->fields).smoothMoveSpeed / _UNK_?;
  obj = (this->fields).moving;
  fVar4 = _UNK_?;
  if ((fVar5 < _UNK_?) || (fVar4 = _UNK_?, _UNK_? < fVar5)) {
    fVar5 = fVar4;
  }
  if (obj != (AudioSource *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::AudioSource>_UnityEngine__AudioSource_
                    ,fVar5,0);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (obj == (AudioSource *)0x0) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pvVar6 = (obj->fields)._._._._.m_CachedPtr;
    if (pvVar6 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pcVar2 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
      uVar3 = func_?(&UNK_?);
      FUN_?(uVar3,0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pcRam_? = pcVar2;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam_?)(pvVar6,fVar5);
    return;
  }
code_?:
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void UpdateSettings(HoverCraftVisualization+HoverCraftVisualizationSettings) */

void Assembly-CSharp.dll::HoverCraftVisualization::HoverCraftVisualization_UpdateSettings
               (HoverCraftVisualization *this,
               HoverCraftVisualization_HoverCraftVisualizationSettings
               *hoverCraftVisualizationSettings,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__HoverCraftVisualization);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uVar1 = *(undefined4 *)hoverCraftVisualizationSettings;
  (this->fields).thrustersSize = hoverCraftVisualizationSettings->thrustersSize;
  pTStack_2 = (hoverCraftVisualizationSettings->thrustersColor).alphas;
  (this->fields).useThrusters = (bool)uVar1;
  TStack_3.colors = *(ThrustersColorColorKey__Array **)hoverCraftVisualizationSettings;
  TStack_3.alphas =
       (ThrustersColorAlphaKey__Array *)(hoverCraftVisualizationSettings->thrustersColor).colors;
  if (*(int *)&(TypeInfo__HoverCraftVisualization->_1).field_0x1c == 0) {
    FUN_?();
  }
  TStack_3.colors = (ThrustersColorColorKey__Array *)TStack_3.alphas;
  TStack_3.alphas = pTStack_2;
  pGVar4 = HoverCraftVisualization_CreateGradient(&TStack_3,(MethodInfo *)0x0);
  bVar5 = iRam_? != 0;
  (this->fields).thrustersColor = pGVar4;
  if (bVar5) {
    uVar6 = (uint)((ulonglong)&(this->fields).thrustersColor >> 0xc);
    uVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6);
    do {
      uVar8 = *(ulonglong *)(uVar7 * 8 + 0xADDR);
      puVar9 = (ulonglong *)(uVar7 * 8 + 0xADDR);
      LOCK();
      bVar5 = uVar8 == *puVar9;
      if (bVar5) {
        *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
      }
      UNLOCK();
    } while (!bVar5);
  }
  HoverCraftVisualization_ActivateThrusters(this,(MethodInfo *)0x0);
  if ((this->fields).useThrusters == 0) {
    (this->fields).HoverAmplitude = 0.0;
  }
  return;
}


/* Void <Init>b__44_0(Object) */

void Assembly-CSharp.dll::HoverCraftVisualization::HoverCraftVisualization__Init_b__44_0
               (HoverCraftVisualization *this,Object *healthVal,MethodInfo *method)

{
  if (healthVal == (Object *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if ((healthVal->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
    FUN_?(healthVal);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  fVar2 = *(float *)&healthVal[1].klass;
  pPStackX_8 = (ParticleSystem *)0x0;
  if (fVar2 < (this->fields).maxHealth) {
    pPVar3 = (this->fields).damageSmokeEmitter;
    if (pPVar3 == (ParticleSystem *)0x0) goto code_?;
    bVar4 = UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::
            ParticleSystem_get_isPlaying(pPVar3,(MethodInfo *)0x0);
    if (bVar4 == 0) {
      pPVar3 = (this->fields).damageSmokeEmitter;
      if (pPVar3 == (ParticleSystem *)0x0) goto code_?;
      UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::ParticleSystem_Play
                (pPVar3,1,(MethodInfo *)0x0);
      pPVar3 = (this->fields).fire;
      if (pPVar3 == (ParticleSystem *)0x0) goto code_?;
      pPStackX_8 = (ParticleSystem *)
                   UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::
                   ParticleSystem_get_collision(pPVar3,(MethodInfo *)0x0);
      pcVar1 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
        uVar5 = func_?(&UNK_?);
        FUN_?(uVar5,0);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pcRam_? = pcVar1;
      (*pcRam_?)(&pPStackX_8);
    }
  }
  if ((this->fields).maxHealth <= fVar2) {
    pPVar3 = (this->fields).damageSmokeEmitter;
    if (pPVar3 == (ParticleSystem *)0x0) goto code_?;
    bVar4 = UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::
            ParticleSystem_get_isPlaying(pPVar3,(MethodInfo *)0x0);
    if (bVar4 != 0) {
      pPVar3 = (this->fields).damageSmokeEmitter;
      if (pPVar3 != (ParticleSystem *)0x0) {
        UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::ParticleSystem_Stop_1
                  (pPVar3,1,(MethodInfo *)0x0);
        pPVar3 = (this->fields).fire;
        if (pPVar3 != (ParticleSystem *)0x0) {
          pPStack_6 = (ParticleSystem *)
                       UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::
                       ParticleSystem_get_collision(pPVar3,(MethodInfo *)0x0);
          pcVar1 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
            uVar5 = func_?(&UNK_?);
            FUN_?(uVar5,0);
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          pcRam_? = pcVar1;
          (*pcRam_?)(&pPStack_6,0);
          return;
        }
      }
      goto code_?;
    }
  }
  fVar7 = (this->fields).prevHealth;
  if (fVar2 < fVar7) {
    this_00 = (this->fields).vehicleBlinker;
    if (this_00 == (VehicleBlinker *)0x0) goto code_?;
    type = BlinkType__Enum_Damage;
code_?:
    BlinkerBase::BlinkerBase_StartBlinking
              ((BlinkerBase *)this_00,type,_UNK_?,(MethodInfo *)0x0);
  }
  else if (fVar7 < fVar2) {
    this_00 = (this->fields).vehicleBlinker;
    if (this_00 == (VehicleBlinker *)0x0) goto code_?;
    type = BlinkType__Enum_Healing;
    goto code_?;
  }
  pPVar3 = (this->fields).damageSmokeEmitter;
  fVar7 = (_UNK_? - fVar2 / (this->fields).maxHealth) * (this->fields).damageParticleFactor
  ;
  if (pPVar3 != (ParticleSystem *)0x0) {
    if (iRam_? != 0) {
      uVar8 = (uint)((ulonglong)&pPStackX_20 >> 0xc);
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
    pcVar1 = pcRam_?;
    pPStackX_20 = pPVar3;
    pPStack_13 = pPVar3;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
      uVar5 = func_?(&UNK_?);
      FUN_?(uVar5,0);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pcRam_? = pcVar1;
    (*pcRam_?)(&pPStack_13,fVar7);
    pPStack_14 = (this->fields).fire;
    (this->fields).prevHealth = fVar2;
    if (pPStack_14 != (ParticleSystem *)0x0) {
      if (iRam_? != 0) {
        uVar8 = (uint)((ulonglong)&pPStackX_20 >> 0xc);
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
      fVar7 = fVar7 * _UNK_?;
      pcVar1 = pcRam_?;
      pPStackX_20 = pPStack_14;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
        uVar5 = func_?(&UNK_?);
        FUN_?(uVar5,0);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pcRam_? = pcVar1;
      (*pcRam_?)(&pPStack_14,fVar7);
      return;
    }
  }
code_?:
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* HoverCraftVisualization() */

void Assembly-CSharp.dll::HoverCraftVisualization::HoverCraftVisualization__cctor
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__HoverCraftVisualization);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__WorldObjectTypes__HoverCraft__Shared__ThrustersColorAlphaKey);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__WorldObjectTypes__HoverCraft__Shared__ThrustersColorColorKey);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  lStack_1 = 0;
  pTVar2 = (ThrustersColorColorKey__Array *)
            FUN_?(TypeInfo__WorldObjectTypes__HoverCraft__Shared__ThrustersColorColorKey,4);
  uVar3 = _UNK_?;
  if (pTVar2 == (ThrustersColorColorKey__Array *)0x0) {
code_?:
    FUN_?();
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if ((int)pTVar2->max_length != 0) {
    uVar5 = _UNK_?;
    pTVar2->vector[0].color.r = (float)_UNK_?;
    pTVar2->vector[0].color.g = (float)uVar5;
    *(undefined8 *)&pTVar2->vector[0].color.b = uVar3;
    uVar6 = _UNK_?;
    uVar7 = _UNK_?;
    uVar3 = _UNK_?;
    if (1 < (uint)pTVar2->max_length) {
      uVar5 = _UNK_?;
      pTVar2->vector[1].color.r = (float)_UNK_?;
      pTVar2->vector[1].color.g = (float)uVar5;
      *(undefined8 *)&pTVar2->vector[1].color.b = uVar3;
      uVar8 = _UNK_?;
      uVar9 = _UNK_?;
      uVar3 = _UNK_?;
      if (2 < (uint)pTVar2->max_length) {
        _UNK_? = (undefined4)uVar7;
        _UNK_? = SUB84(uVar7,4);
        uVar5 = _UNK_?;
        pTVar2->vector[2].color.r = (float)_UNK_?;
        _UNK_? = uVar3;
        pTVar2->vector[2].color.g = (float)uVar5;
        *(undefined8 *)&pTVar2->vector[2].color.b = uVar6;
        uVar3 = _UNK_?;
        if (3 < (uint)pTVar2->max_length) {
          bVar10 = iRam_? != 0;
          _UNK_? = (undefined4)uVar9;
          _UNK_? = SUB84(uVar9,4);
          uVar5 = _UNK_?;
          pTVar2->vector[3].color.r = (float)_UNK_?;
          _UNK_? = uVar3;
          pTVar2->vector[3].color.g = (float)uVar5;
          *(undefined8 *)&pTVar2->vector[3].color.b = uVar8;
          if (bVar10) {
            uVar11 = (uint)((ulonglong)&pTStack_12 >> 0xc);
            uVar13 = (ulonglong)((uVar11 & 0x1fffff) >> 6);
            do {
              uVar14 = *(ulonglong *)(uVar13 * 8 + 0xADDR);
              puVar15 = (ulonglong *)(uVar13 * 8 + 0xADDR);
              LOCK();
              bVar10 = uVar14 == *puVar15;
              if (bVar10) {
                *puVar15 = uVar14 | 1L << (uVar11 & 0x3f);
              }
              UNLOCK();
            } while (!bVar10);
          }
          pTStack_12 = pTVar2;
          pTVar16 = (ThrustersColorAlphaKey__Array *)
                    FUN_?(TypeInfo__WorldObjectTypes__HoverCraft__Shared__ThrustersColorAlphaKey
                                  ,4);
          if (pTVar16 == (ThrustersColorAlphaKey__Array *)0x0) goto code_?;
          if (((int)pTVar16->max_length != 0) &&
             (pTVar16->vector[0].alpha = 0.0, pTVar16->vector[0].time = 0.0,
             1 < (uint)pTVar16->max_length)) {
            pTVar16->vector[1].alpha = 1.0;
            pTVar16->vector[1].time = 0.09999237;
            if (2 < (uint)pTVar16->max_length) {
              pTVar16->vector[2].alpha = 1.0;
              pTVar16->vector[2].time = 0.4764782;
              if (3 < (uint)pTVar16->max_length) {
                bVar10 = iRam_? != 0;
                pTVar16->vector[3].alpha = 0.0;
                pTVar16->vector[3].time = 1.0;
                if (bVar10) {
                  uVar11 = (uint)((ulonglong)&lStack_1 >> 0xc);
                  uVar13 = (ulonglong)((uVar11 & 0x1fffff) >> 6);
                  do {
                    uVar14 = *(ulonglong *)(uVar13 * 8 + 0xADDR);
                    puVar15 = (ulonglong *)(uVar13 * 8 + 0xADDR);
                    LOCK();
                    bVar10 = uVar14 == *puVar15;
                    if (bVar10) {
                      *puVar15 = uVar14 | 1L << (uVar11 & 0x3f);
                    }
                    UNLOCK();
                  } while (!bVar10);
                }
                pHVar17 = TypeInfo__HoverCraftVisualization->static_fields;
                (pHVar17->DefaultThrustersColor).colors = pTStack_12;
                (pHVar17->DefaultThrustersColor).alphas = pTVar16;
                if (iRam_? != 0) {
                  uVar11 = (uint)((ulonglong)TypeInfo__HoverCraftVisualization->static_fields >> 0xc
                                 );
                  uVar13 = (ulonglong)((uVar11 & 0x1fffff) >> 6);
                  do {
                    uVar14 = *(ulonglong *)(uVar13 * 8 + 0xADDR);
                    puVar15 = (ulonglong *)(uVar13 * 8 + 0xADDR);
                    LOCK();
                    bVar10 = uVar14 == *puVar15;
                    if (bVar10) {
                      *puVar15 = uVar14 | 1L << (uVar11 & 0x3f);
                    }
                    UNLOCK();
                  } while (!bVar10);
                }
                return;
              }
            }
          }
        }
      }
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* HoverCraftVisualization() */

void Assembly-CSharp.dll::HoverCraftVisualization::HoverCraftVisualization__ctor
               (HoverCraftVisualization *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<WorldObjectTypes::HoverCraft::Shared::HoverCraftThruster>__List__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__List<WorldObjectTypes::HoverCraft::Shared::HoverCraftThruster>
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  (this->fields).useThrusters = 1;
  this_00 = (List_1_WorldObjectTypes_HoverCraft_Shared_HoverCraftThruster_ *)
            FUN_?(
                         TypeInfo__System__Collections__Generic__List<WorldObjectTypes::HoverCraft::Shared::HoverCraftThruster>
                         );
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_00,
             MethodInfo__System__Collections__Generic__List<WorldObjectTypes::HoverCraft::Shared::HoverCraftThruster>__List__
            );
  bVar1 = iRam_? != 0;
  (this->fields).hoverCraftThrusters = this_00;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).hoverCraftThrusters >> 0xc);
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
  cVar6 = cRam_?;
  (this->fields).thrustersSize = 0.872;
  (this->fields).HoverPeriod = 0.8;
  (this->fields).HoverAmplitude = 0.2;
  (this->fields).rotateRollFactor = 7.0;
  (this->fields).rollSpeed = 9.5;
  (this->fields).rollMax = 30.0;
  (this->fields).pitchMax = 30.0;
  (this->fields).pitchSpeedTime = 10.0;
  (this->fields).pitchFactor = 20.0;
  (this->fields).damageParticleFactor = 10.0;
  if (cVar6 == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cVar6 = '\x01';
    cRam_? = '\x01';
  }
  bVar1 = cRam_? == '\0';
  pVVar7 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar8 = (pVVar7->zeroVector).y;
  fVar9 = (pVVar7->zeroVector).z;
  (this->fields).hoverOffset.x = (pVVar7->zeroVector).x;
  (this->fields).hoverOffset.y = fVar8;
  (this->fields).hoverOffset.z = fVar9;
  if (bVar1) {
    FUN_?(&TypeInfo__UnityEngine__Quaternion);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
    cVar6 = cRam_?;
  }
  pQVar10 = TypeInfo__UnityEngine__Quaternion->static_fields;
  fVar9 = (pQVar10->identityQuaternion).y;
  fVar8 = (pQVar10->identityQuaternion).z;
  fVar11 = (pQVar10->identityQuaternion).w;
  (this->fields).prevWorldRot.x = (pQVar10->identityQuaternion).x;
  (this->fields).prevWorldRot.y = fVar9;
  (this->fields).prevWorldRot.z = fVar8;
  (this->fields).prevWorldRot.w = fVar11;
  if (cVar6 == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar7 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar8 = (pVVar7->zeroVector).y;
  fVar9 = (pVVar7->zeroVector).z;
  (this->fields).smoothVelocity.x = (pVVar7->zeroVector).x;
  (this->fields).smoothVelocity.y = fVar8;
  (this->fields).smoothVelocity.z = fVar9;
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__List__,0
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::GameObject>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_01 = (List_1_UnityEngine_GameObject_ *)
            FUN_?(TypeInfo__System__Collections__Generic__List<UnityEngine::GameObject>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_01,
             MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__List__);
  bVar1 = iRam_? != 0;
  (this->fields)._.lodGameObjects = this_01;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields)._.lodGameObjects >> 0xc);
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
  bVar1 = cRam_? == '\0';
  (this->fields)._.disableVisualizationDistance = 40.0;
  (this->fields)._.cullDistance = 145.0;
  if (bVar1) {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  return;
}

