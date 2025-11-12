
/* Void Initialize(Int32) */

void Assembly-CSharp.dll::AvatarPooledXPParticles::AvatarPooledXPParticles_Initialize
               (AvatarPooledXPParticles *this,int32_t xpDelta,MethodInfo *method)

{
  (this->fields).hasStarted = 0;
  pPVar1 = (this->fields).xpParticleSystem;
  if (pPVar1 != (ParticleSystem *)0x0) {
    UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::ParticleSystem_Stop_1
              (pPVar1,1,(MethodInfo *)0x0);
    pPVar1 = (this->fields).xpParticleSystem;
    if (pPVar1 != (ParticleSystem *)0x0) {
      if (iRam_? != 0) {
        uVar2 = (uint)((ulonglong)&pPStackX_8 >> 0xc);
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
      PStack_7.m_Mode = 0;
      PStack_7.m_CurveMultiplier = 0.0;
      PStack_7.m_CurveMin = (AnimationCurve *)0x0;
      PStack_7.m_CurveMax = (AnimationCurve *)0x0;
      PStack_7.m_ConstantMin = 0.0;
      PStack_7.m_ConstantMax = 0.0;
      pcVar8 = pcRam_?;
      pPStackX_8 = pPVar1;
      PStackX_20.m_ParticleSystem = pPVar1;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
        uVar9 = func_?(&UNK_?);
        FUN_?(uVar9,0);
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pcRam_? = pcVar8;
      (*pcRam_?)(&PStackX_20,&PStack_7);
      PStack_10.m_Mode = PStack_7.m_Mode;
      PStack_10.m_CurveMultiplier = PStack_7.m_CurveMultiplier;
      PStack_10.m_CurveMin = PStack_7.m_CurveMin;
      PStack_10.m_CurveMax = PStack_7.m_CurveMax;
      PStack_10.m_ConstantMin = PStack_7.m_ConstantMin;
      PStack_10.m_ConstantMax = PStack_7.m_ConstantMax;
      pPVar11 = UnityEngine.ParticleSystemModule.dll::UnityEngine::
               ParticleSystem+MinMaxCurveBlittable::ParticleSystem_MinMaxCurveBlittable_op_Implicit
                         (&PStack_7,(ParticleSystem_MinMaxCurveBlittable *)&PStack_10,
                          (MethodInfo *)0x0);
      PStack_10.m_CurveMax = pPVar11->m_CurveMax;
      PStack_10.m_ConstantMin = pPVar11->m_ConstantMin;
      PStack_10.m_ConstantMax = pPVar11->m_ConstantMax;
      uVar9._0_4_ = pPVar11->m_Mode;
      uVar9._4_4_ = pPVar11->m_CurveMultiplier;
      pAVar12 = pPVar11->m_CurveMin;
      pPVar1 = (this->fields).xpParticleSystem;
      if (pPVar1 != (ParticleSystem *)0x0) {
        if (iRam_? != 0) {
          uVar2 = (uint)((ulonglong)&pPStackX_8 >> 0xc);
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
        PStack_7.m_ConstantMax = (float)xpDelta;
        PStack_7.m_ConstantMin = PStack_10.m_ConstantMin;
        pPStackX_8 = pPVar1;
        PStack_7._0_8_ = uVar9;
        PStack_7.m_CurveMin = pAVar12;
        PStack_7.m_CurveMax = PStack_10.m_CurveMax;
        UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem+EmissionModule::
        ParticleSystem_EmissionModule_set_rateOverTime(&PStackX_20,&PStack_7,(MethodInfo *)0x0);
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
        fVar13 = (float)(*pcRam_?)();
        (this->fields).initStartTime = fVar13;
        return;
      }
    }
  }
  FUN_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::AvatarPooledXPParticles::AvatarPooledXPParticles_Update
               (AvatarPooledXPParticles *this,MethodInfo *method)

{
  if ((this->fields).hasStarted == 0) {
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
    if ((this->fields).initStartTime + _UNK_? < fVar3) {
      pPVar4 = (this->fields).xpParticleSystem;
      if (pPVar4 == (ParticleSystem *)0x0) goto code_?;
      UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::ParticleSystem_Play
                (pPVar4,1,(MethodInfo *)0x0);
      (this->fields).hasStarted = 1;
    }
  }
  pPVar4 = (this->fields).xpParticleSystem;
  if (pPVar4 != (ParticleSystem *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::ParticleSystem>_UnityEngine__ParticleSystem_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pvVar5 = (pPVar4->fields)._._.m_CachedPtr;
    if (pvVar5 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pPVar4,(MethodInfo *)0x0);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
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
    cVar6 = (*pcRam_?)(pvVar5);
    if ((cVar6 != '\0') || ((this->fields).hasStarted == 0)) {
      return;
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__PrefabPool);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pPVar7 = TypeInfo__PrefabPool->static_fields->instance;
    if (((pPVar7 != (PrefabPool *)0x0) &&
        (pEVar8 = (pPVar7->fields).enumPoolManager, pEVar8 != (EnumPoolManager *)0x0)) &&
       (pPVar9 = (pEVar8->fields).lookupTable, pPVar9 != (Pool__Array *)0x0)) {
      if ((uint)pPVar9->max_length < 0xd) {
        FUN_?();
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (pPVar9->vector[0xc] != (Pool *)0x0) {
        Pool::Pool_ReturnObject(pPVar9->vector[0xc],(MonoBehaviour *)this,(MethodInfo *)0x0);
        return;
      }
    }
  }
code_?:
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

