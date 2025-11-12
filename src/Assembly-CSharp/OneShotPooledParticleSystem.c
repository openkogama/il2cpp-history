
/* ParticleSystem Instantiate(PoolEnums) */

ParticleSystem *
Assembly-CSharp.dll::OneShotPooledParticleSystem::OneShotPooledParticleSystem_Instantiate
          (PoolEnums__Enum type,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  OneShotPooledParticleSystem_MethodInfo__EnumPoolManager__Instantiate<OneShotPooledParticleSystem>_PoolEnums_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__PrefabPool);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pPVar1 = TypeInfo__PrefabPool->static_fields->instance;
  if ((pPVar1 != (PrefabPool *)0x0) &&
     (this = (pPVar1->fields).enumPoolManager, this != (EnumPoolManager *)0x0)) {
    pOVar2 = EnumPoolManager::EnumPoolManager_Instantiate
                       (this,type,
                        OneShotPooledParticleSystem_MethodInfo__EnumPoolManager__Instantiate<OneShotPooledParticleSystem>_PoolEnums_
                       );
    if (pOVar2 != (Object *)0x0) {
      *(PoolEnums__Enum *)&pOVar2[2].monitor = type;
      return (ParticleSystem *)pOVar2[2].klass;
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  pPVar4 = (ParticleSystem *)(*pcVar3)();
  return pPVar4;
}


/* ParticleSystem Instantiate(PoolEnums, Vector3, Quaternion, Nullable`1[Single],
   Nullable`1[UnityEngine.Color]) */

ParticleSystem *
Assembly-CSharp.dll::OneShotPooledParticleSystem::OneShotPooledParticleSystem_Instantiate_1
          (PoolEnums__Enum type,Vector3 *position,Quaternion *rotation,Nullable_1_Single_ scale,
          Nullable_1_UnityEngine_Color_ *color,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  OneShotPooledParticleSystem_MethodInfo__EnumPoolManager__Instantiate<OneShotPooledParticleSystem>_PoolEnums_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Gradient);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Nullable<float>__get_HasValue__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Nullable<UnityEngine::Color>__get_HasValue__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Nullable<UnityEngine::Color>__get_Value__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Nullable<float>__get_Value__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uVar1 = 0;
  aPStack_2[0].m_ParticleSystem = (ParticleSystem *)0x0;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__PrefabPool);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pPVar3 = TypeInfo__PrefabPool->static_fields->instance;
  if (((pPVar3 == (PrefabPool *)0x0) ||
      (this = (pPVar3->fields).enumPoolManager, this == (EnumPoolManager *)0x0)) ||
     (this_00 = (Component *)
                EnumPoolManager::EnumPoolManager_Instantiate
                          (this,type,
                           OneShotPooledParticleSystem_MethodInfo__EnumPoolManager__Instantiate<OneShotPooledParticleSystem>_PoolEnums_
                          ), this_00 == (Component *)0x0)) {
code_?:
    FUN_?();
    pcVar4 = (code *)swi(3);
    pPVar5 = (ParticleSystem *)(*pcVar4)();
    return pPVar5;
  }
  *(PoolEnums__Enum *)&this_00[1].fields._.m_CachedPtr = type;
  pTVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                     (this_00,(MethodInfo *)0x0);
  if (pTVar6 == (Transform *)0x0) goto code_?;
  uStack_7._0_4_ = position->x;
  uStack_7._4_4_ = position->y;
  fStack_8 = position->z;
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pvVar9 = (pTVar6->fields)._._.m_CachedPtr;
  if (pvVar9 == (void *)0x0) {
code_?:
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar6,(MethodInfo *)0x0);
    pcVar4 = (code *)swi(3);
    pPVar5 = (ParticleSystem *)(*pcVar4)();
    return pPVar5;
  }
  pcVar4 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
    uVar10 = func_?(&UNK_?);
    FUN_?(uVar10,0);
    pcVar4 = (code *)swi(3);
    pPVar5 = (ParticleSystem *)(*pcVar4)();
    return pPVar5;
  }
  pcRam_? = pcVar4;
  (*pcRam_?)(pvVar9);
  fStack_11 = rotation->x;
  fStack_12 = rotation->y;
  fStack_13 = rotation->z;
  fStack_14 = rotation->w;
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pvVar9 = (pTVar6->fields)._._.m_CachedPtr;
  if (pvVar9 == (void *)0x0) goto code_?;
  pcVar4 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
    uVar10 = func_?(&UNK_?);
    FUN_?(uVar10,0);
    pcVar4 = (code *)swi(3);
    pPVar5 = (ParticleSystem *)(*pcVar4)();
    return pPVar5;
  }
  pcRam_? = pcVar4;
  (*pcRam_?)(pvVar9);
  if (scale.hasValue != 0) {
    if ((Component *)this_00[1].monitor == (Component *)0x0) goto code_?;
    pTVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                       ((Component *)this_00[1].monitor,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pPStack_15 = *(ParticleSystem **)&TypeInfo__UnityEngine__Vector3->static_fields->oneVector;
    fStackX_24 = scale.value;
    fStack_16 = (TypeInfo__UnityEngine__Vector3->static_fields->oneVector).z * fStackX_24;
    if (pTVar6 == (Transform *)0x0) {
      FUN_?();
      pcVar4 = (code *)swi(3);
      pPVar5 = (ParticleSystem *)(*pcVar4)();
      return pPVar5;
    }
    pPStack_15 = (ParticleSystem *)
                  CONCAT44((float)((ulonglong)pPStack_15 >> 0x20) * fStackX_24,
                           SUB84(pPStack_15,0) * fStackX_24);
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pvVar9 = (pTVar6->fields)._._.m_CachedPtr;
    if (pvVar9 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar6,(MethodInfo *)0x0);
      pcVar4 = (code *)swi(3);
      pPVar5 = (ParticleSystem *)(*pcVar4)();
      return pPVar5;
    }
    pcVar4 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
      uVar10 = func_?(&UNK_?);
      FUN_?(uVar10,0);
      pcVar4 = (code *)swi(3);
      pPVar5 = (ParticleSystem *)(*pcVar4)();
      return pPVar5;
    }
    pcRam_? = pcVar4;
    (*pcRam_?)(pvVar9,&pPStack_15);
  }
  if (color->hasValue == 0) {
code_?:
    return (ParticleSystem *)this_00[1].monitor;
  }
  pPVar5 = (ParticleSystem *)this_00[1].monitor;
  if (pPVar5 != (ParticleSystem *)0x0) {
    if (iRam_? != 0) {
      uVar17 = (uint)((ulonglong)&pPStack_15 >> 0xc);
      uVar18 = (ulonglong)((uVar17 & 0x1fffff) >> 6);
      do {
        uVar19 = *(ulonglong *)(uVar18 * 8 + 0xADDR);
        puVar20 = (ulonglong *)(uVar18 * 8 + 0xADDR);
        LOCK();
        bVar21 = uVar19 == *puVar20;
        if (bVar21) {
          *puVar20 = uVar19 | 1L << (uVar17 & 0x3f);
        }
        UNLOCK();
      } while (!bVar21);
    }
    aPStack_2[0].m_ParticleSystem = pPVar5;
    pPStack_15 = pPVar5;
    pPVar22 = UnityEngine.ParticleSystemModule.dll::UnityEngine::
              ParticleSystem+ColorOverLifetimeModule::
              ParticleSystem_ColorOverLifetimeModule_get_color
                        (&PStack_23,aPStack_2,(MethodInfo *)0x0);
    PStack_24.m_Mode = pPVar22->m_Mode;
    PStack_24._4_4_ = *(undefined4 *)&pPVar22->field_0x4;
    PStack_24.m_GradientMin = pPVar22->m_GradientMin;
    PStack_24.m_ColorMax.b = (pPVar22->m_ColorMax).b;
    PStack_24.m_ColorMax.a = (pPVar22->m_ColorMax).a;
    PStack_24.m_ColorMin.b = (pPVar22->m_ColorMin).b;
    PStack_24.m_ColorMin.a = (pPVar22->m_ColorMin).a;
    PStack_24.m_ColorMax.r = (pPVar22->m_ColorMax).r;
    PStack_24.m_ColorMax.g = (pPVar22->m_ColorMax).g;
    if ((pPVar22->m_GradientMax != (Gradient *)0x0) &&
       (value = UnityEngine.CoreModule.dll::UnityEngine::Gradient::Gradient_get_colorKeys
                          (pPVar22->m_GradientMax,(MethodInfo *)0x0),
       value != (GradientColorKey__Array *)0x0)) {
      bVar25 = color->hasValue;
      pGVar26 = value->vector;
      for (; (int)uVar1 < (int)value->max_length; uVar1 = uVar1 + 1) {
        if (bVar25 == 0) {
          mscorlib.dll::System::ThrowHelper::
          ThrowHelper_1_ThrowInvalidOperationException_InvalidOperation_NoValue((MethodInfo *)0x0);
          pcVar4 = (code *)swi(3);
          pPVar5 = (ParticleSystem *)(*pcVar4)();
          return pPVar5;
        }
        if ((uint)value->max_length <= uVar1) {
          FUN_?();
          pcVar4 = (code *)swi(3);
          pPVar5 = (ParticleSystem *)(*pcVar4)();
          return pPVar5;
        }
        fVar27 = (color->value).g;
        fVar28 = (color->value).b;
        fVar29 = (color->value).a;
        (pGVar26->color).r = (color->value).r;
        (pGVar26->color).g = fVar27;
        (pGVar26->color).b = fVar28;
        (pGVar26->color).a = fVar29;
        pGVar26 = pGVar26 + 1;
      }
      this_01 = (Gradient *)FUN_?(TypeInfo__UnityEngine__Gradient);
      pcVar4 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
        uVar10 = func_?(&UNK_?);
        FUN_?(uVar10,0);
        pcVar4 = (code *)swi(3);
        pPVar5 = (ParticleSystem *)(*pcVar4)();
        return pPVar5;
      }
      pcRam_? = pcVar4;
      pvVar9 = (void *)(*pcRam_?)();
      (this_01->fields).m_Ptr = pvVar9;
      (this_01->fields).m_RequiresNativeCleanup = 1;
      pPVar22 = UnityEngine.ParticleSystemModule.dll::UnityEngine::
                ParticleSystem+ColorOverLifetimeModule::
                ParticleSystem_ColorOverLifetimeModule_get_color
                          (&PStack_30,aPStack_2,(MethodInfo *)0x0);
      PStack_24.m_Mode = pPVar22->m_Mode;
      PStack_24._4_4_ = *(undefined4 *)&pPVar22->field_0x4;
      PStack_24.m_GradientMin = pPVar22->m_GradientMin;
      PStack_24.m_ColorMax.b = (pPVar22->m_ColorMax).b;
      PStack_24.m_ColorMax.a = (pPVar22->m_ColorMax).a;
      PStack_24.m_ColorMin.b = (pPVar22->m_ColorMin).b;
      PStack_24.m_ColorMin.a = (pPVar22->m_ColorMin).a;
      PStack_24.m_ColorMax.r = (pPVar22->m_ColorMax).r;
      PStack_24.m_ColorMax.g = (pPVar22->m_ColorMax).g;
      if (pPVar22->m_GradientMax == (Gradient *)0x0) {
        FUN_?();
        pcVar4 = (code *)swi(3);
        pPVar5 = (ParticleSystem *)(*pcVar4)();
        return pPVar5;
      }
      value_00 = UnityEngine.CoreModule.dll::UnityEngine::Gradient::Gradient_get_alphaKeys
                           (pPVar22->m_GradientMax,(MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::Gradient::Gradient_set_alphaKeys
                (this_01,value_00,(MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::Gradient::Gradient_set_colorKeys
                (this_01,value,(MethodInfo *)0x0);
      PStack_23.m_ColorMax.b = 0.0;
      PStack_23.m_ColorMax.a = 0.0;
      PStack_23.m_Mode = 0;
      PStack_23._4_4_ = 0;
      PStack_23.m_GradientMin = (Gradient *)0x0;
      PStack_23.m_GradientMax = (Gradient *)0x0;
      PStack_23.m_ColorMin.r = 0.0;
      PStack_23.m_ColorMin.g = 0.0;
      PStack_23.m_ColorMin.b = 0.0;
      PStack_23.m_ColorMin.a = 0.0;
      PStack_23.m_ColorMax.r = 0.0;
      PStack_23.m_ColorMax.g = 0.0;
      UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem+MinMaxGradient::
      ParticleSystem_MinMaxGradient__ctor_1(&PStack_23,this_01,(MethodInfo *)0x0);
      PStack_24.m_Mode = PStack_23.m_Mode;
      PStack_24._4_4_ = PStack_23._4_4_;
      PStack_24.m_GradientMin = PStack_23.m_GradientMin;
      PStack_24.m_GradientMax = PStack_23.m_GradientMax;
      PStack_24.m_ColorMin.r = PStack_23.m_ColorMin.r;
      PStack_24.m_ColorMin.g = PStack_23.m_ColorMin.g;
      PStack_24.m_ColorMin.b = PStack_23.m_ColorMin.b;
      PStack_24.m_ColorMin.a = PStack_23.m_ColorMin.a;
      PStack_24.m_ColorMax.r = PStack_23.m_ColorMax.r;
      PStack_24.m_ColorMax.g = PStack_23.m_ColorMax.g;
      PStack_24.m_ColorMax.b = PStack_23.m_ColorMax.b;
      PStack_24.m_ColorMax.a = PStack_23.m_ColorMax.a;
      UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem+ColorOverLifetimeModule::
      ParticleSystem_ColorOverLifetimeModule_set_color(aPStack_2,&PStack_24,(MethodInfo *)0x0);
      goto code_?;
    }
  }
code_?:
  FUN_?();
  pcVar4 = (code *)swi(3);
  pPVar5 = (ParticleSystem *)(*pcVar4)();
  return pPVar5;
}


/* Void OnValidate() */

void Assembly-CSharp.dll::OneShotPooledParticleSystem::OneShotPooledParticleSystem_OnValidate
               (OneShotPooledParticleSystem *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  UnityEngine__ParticleSystem_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::ParticleSystem>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pPVar1 = (this->fields).particles;
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
  if (pPVar1 != (ParticleSystem *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pPVar1->fields)._._.m_CachedPtr != (void *)0x0) {
      return;
    }
  }
  pPVar1 = (ParticleSystem *)
           UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                     ((Component *)this,
                      UnityEngine__ParticleSystem_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::ParticleSystem>__
                     );
  bVar2 = iRam_? != 0;
  (this->fields).particles = pPVar1;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields).particles >> 0xc);
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
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::OneShotPooledParticleSystem::OneShotPooledParticleSystem_Update
               (OneShotPooledParticleSystem *this,MethodInfo *method)

{
  pPVar1 = (this->fields).particles;
  if (pPVar1 != (ParticleSystem *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::ParticleSystem>_UnityEngine__ParticleSystem_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pvVar2 = (pPVar1->fields)._._.m_CachedPtr;
    if (pvVar2 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pPVar1,(MethodInfo *)0x0);
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
    fVar5 = (float)(*pcRam_?)(pvVar2);
    pPVar1 = (this->fields).particles;
    if (pPVar1 != (ParticleSystem *)0x0) {
      if (iRam_? != 0) {
        uVar6 = (uint)((ulonglong)&pPStackX_8 >> 0xc);
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
      pcVar3 = pcRam_?;
      pPStackX_8 = pPVar1;
      pPStackX_18 = pPVar1;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
        uVar4 = func_?(&UNK_?);
        FUN_?(uVar4,0);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pcRam_? = pcVar3;
      fVar11 = (float)(*pcRam_?)(&pPStackX_18);
      if (fVar5 < fVar11) {
        return;
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__PrefabPool);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pPVar12 = TypeInfo__PrefabPool->static_fields->instance;
      if (((pPVar12 != (PrefabPool *)0x0) &&
          (pEVar13 = (pPVar12->fields).enumPoolManager, pEVar13 != (EnumPoolManager *)0x0)) &&
         (pPVar14 = (pEVar13->fields).lookupTable, pPVar14 != (Pool__Array *)0x0)) {
        uVar6 = (this->fields).type;
        if ((uint)pPVar14->max_length <= uVar6) {
          FUN_?();
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        if (pPVar14->vector[(int)uVar6] != (Pool *)0x0) {
          Pool::Pool_ReturnObject
                    (pPVar14->vector[(int)uVar6],(MonoBehaviour *)this,(MethodInfo *)0x0);
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

