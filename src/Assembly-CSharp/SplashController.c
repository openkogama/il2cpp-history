
/* Vector3 BoundsToPosition(Bounds) */

Vector3 * Assembly-CSharp.dll::SplashController::SplashController_BoundsToPosition
                    (Vector3 *__return_storage_ptr__,Bounds *b,MethodInfo *method)

{
  fVar1 = (b->m_Center).y;
  fVar2 = (b->m_Center).z;
  __return_storage_ptr__->x = (b->m_Center).x;
  __return_storage_ptr__->y = fVar1;
  __return_storage_ptr__->z = fVar2;
  __return_storage_ptr__->y = __return_storage_ptr__->y - (b->m_Extents).y;
  return __return_storage_ptr__;
}


/* Single CalcSplashSoundVolume(Vector3) */

float Assembly-CSharp.dll::SplashController::SplashController_CalcSplashSoundVolume
                (SplashController *this,Vector3 *velocity,MethodInfo *method)

{
  fVar1 = (float)((uint)velocity->y ^ _UNK_?);
  if (fVar1 < 0.0) {
    fVar1 = 0.0;
  }
  else if (_UNK_? < fVar1) {
    return (_UNK_? / _UNK_?) * (this->fields).splashSoundVolume;
  }
  return (fVar1 / _UNK_?) * (this->fields).splashSoundVolume;
}


/* Void CleanUpInactiveObjectIDs() */

void Assembly-CSharp.dll::SplashController::SplashController_CleanUpInactiveObjectIDs
               (SplashController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_SplashController::ObjectData>__Remove_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_SplashController::ObjectData>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_SplashController::ObjectData>__get_Keys__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Int32);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___KeyCollection<int,_SplashController::ObjectData>__CopyTo_System__Int32_____int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___KeyCollection<int,_SplashController::ObjectData>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__SplashController);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__SplashController->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__SplashController);
  }
  pDVar1 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *)
           TypeInfo__SplashController->static_fields->objectIDToData;
  if (((pDVar1 != (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                   *)0x0) &&
      (pDVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
                TypeConverterRegistry+ConverterKey,System::Object]::
                Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object__get_Keys
                          (pDVar1,
                           MethodInfo__System__Collections__Generic__Dictionary<int,_SplashController::ObjectData>__get_Keys__
                          ),
      pDVar2 != (Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                 *)0x0)) &&
     (pDVar1 = (pDVar2->fields)._dictionary,
     pDVar1 != (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                *)0x0)) {
    array = (UInt32__Array *)
            FUN_?(TypeInfo__System__Int32,
                          (pDVar1->fields)._count - (pDVar1->fields)._freeCount);
    pDVar1 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
              *)TypeInfo__SplashController->static_fields->objectIDToData;
    if ((pDVar1 != (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                    *)0x0) &&
       (pDVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
                 TypeConverterRegistry+ConverterKey,System::Object]::
                 Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object__get_Keys
                           (pDVar1,
                            MethodInfo__System__Collections__Generic__Dictionary<int,_SplashController::ObjectData>__get_Keys__
                           ),
       pDVar2 != (Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                  *)0x0)) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[TKey,TValue]+KeyCollection[System::
      UInt32,System::Object]::
      Dictionary_2_TKey_TValue_KeyCollection_System_UInt32_System_Object__CopyTo
                ((Dictionary_2_TKey_TValue_KeyCollection_System_UInt32_System_Object_ *)pDVar2,array
                 ,0,
                 MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___KeyCollection<int,_SplashController::ObjectData>__CopyTo_System__Int32_____int_
                );
      uVar3 = 0;
      if (array != (UInt32__Array *)0x0) {
        puVar4 = array->vector;
        while( true ) {
          if ((int)array->max_length <= (int)uVar3) {
            return;
          }
          if ((uint)array->max_length <= uVar3) {
            FUN_?();
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          key = *puVar4;
          if (*(int *)&(TypeInfo__SplashController->_1).field_0x1c == 0) {
            FUN_?(TypeInfo__SplashController);
          }
          pDVar6 = TypeInfo__SplashController->static_fields->objectIDToData;
          if (pDVar6 == (Dictionary_2_System_Int32_SplashController_ObjectData_ *)0x0) break;
          pOVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                   Object]::Dictionary_2_System_Int32_System_Object__get_Item
                             ((Dictionary_2_System_Int32_System_Object_ *)pDVar6,key,
                              MethodInfo__System__Collections__Generic__Dictionary<int,_SplashController::ObjectData>__get_Item_int_
                             );
          pcVar5 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
            uVar8 = func_?(&UNK_?);
            FUN_?(uVar8,0);
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pcRam_? = pcVar5;
          iVar9 = (*pcRam_?)();
          if (pOVar7 == (Object *)0x0) break;
          if (1 < iVar9 - *(int *)&pOVar7[2].klass) {
            if (*(int *)&(TypeInfo__SplashController->_1).field_0x1c == 0) {
              FUN_?(TypeInfo__SplashController);
            }
            pDVar6 = TypeInfo__SplashController->static_fields->objectIDToData;
            if (pDVar6 == (Dictionary_2_System_Int32_SplashController_ObjectData_ *)0x0) break;
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
            Dictionary_2_System_Int32_System_Object__Remove
                      ((Dictionary_2_System_Int32_System_Object_ *)pDVar6,key,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_SplashController::ObjectData>__Remove_int_
                      );
          }
          uVar3 = uVar3 + 1;
          puVar4 = puVar4 + 1;
        }
      }
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void Destroy() */

void Assembly-CSharp.dll::SplashController::SplashController_Destroy
               (SplashController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_SplashController::ObjectData>__Clear__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__SplashController);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__SplashController->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__SplashController);
  }
  this_00 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *
            )TypeInfo__SplashController->static_fields->objectIDToData;
  if (this_00 !=
      (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *)0x0)
  {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
    TypeConverterRegistry+ConverterKey,System::Object]::
    Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object__Clear
              (this_00,
               MethodInfo__System__Collections__Generic__Dictionary<int,_SplashController::ObjectData>__Clear__
              );
    TypeInfo__SplashController->static_fields->currentObjectID = 0;
    return;
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void EmitWaterPillar(Vector3, Vector3) */

void Assembly-CSharp.dll::SplashController::SplashController_EmitWaterPillar
               (SplashController *this,Vector3 *position,Vector3 *impactVelocity,MethodInfo *method)

{
  pPVar1 = (this->fields).waterPillarParticles;
  if ((pPVar1 != (ParticleSystem *)0x0) &&
     (obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                      ((Component *)pPVar1,(MethodInfo *)0x0), obj != (Transform *)0x0)) {
    CStack_2.r = position->x;
    CStack_2.g = position->y;
    CStack_2.b = position->z;
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
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
    (*pcRam_?)(pvVar3);
    fVar6 = (float)FUN_?(impactVelocity);
    pPStackX_8 = (this->fields).waterPillarParticles;
    fVar6 = fVar6 * (this->fields).waterPillarDensity;
    if (pPStackX_8 != (ParticleSystem *)0x0) {
      if (iRam_? != 0) {
        uVar7 = (uint)((ulonglong)&pPStackX_8 >> 0xc);
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
      aPStack_12[0].m_ParticleSystem = pPStackX_8;
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVGameControllerBase);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pMVar13 = TypeInfo__MVGameControllerBase->static_fields->instance;
      if ((pMVar13 != (MVGameControllerBase *)0x0) &&
         (pWVar14 = (pMVar13->fields).waterPlaneManager, pWVar14 != (WaterPlaneManager *)0x0)) {
        if (cRam_? == '\0') {
          FUN_?(&StringLiteral__RefrColor);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pWVar15 = (pWVar14->fields).water;
        if (((pWVar15 != (Water *)0x0) &&
            (this_00 = (pWVar15->fields).meshRenderer, this_00 != (Renderer *)0x0)) &&
           (this_01 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material
                                (this_00,(MethodInfo *)0x0), this_01 != (Material *)0x0)) {
          pCVar16 = UnityEngine.CoreModule.dll::UnityEngine::Material::Material_GetColor
                             (&CStack_2,this_01,StringLiteral__RefrColor,(MethodInfo *)0x0);
          CStack_2.b = ((this->fields).pillarTint.b + pCVar16->b) * _UNK_?;
          CStack_2.a = ((this->fields).pillarTint.a + pCVar16->a) * _UNK_?;
          CStack_2.g = ((this->fields).pillarTint.g + pCVar16->g) * _UNK_?;
          CStack_2.r = ((this->fields).pillarTint.r + pCVar16->r) * _UNK_?;
          pPVar17 = UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem+MinMaxGradient
                    ::ParticleSystem_MinMaxGradient_op_Implicit
                              (&PStack_18,&CStack_2,(MethodInfo *)0x0);
          PStack_19.m_Mode = pPVar17->m_Mode;
          PStack_19._4_4_ = *(undefined4 *)&pPVar17->field_0x4;
          PStack_19.m_GradientMin = pPVar17->m_GradientMin;
          PStack_19.m_GradientMax = pPVar17->m_GradientMax;
          PStack_19.m_ColorMin.r = (pPVar17->m_ColorMin).r;
          PStack_19.m_ColorMin.g = (pPVar17->m_ColorMin).g;
          PStack_19.m_ColorMin.b = (pPVar17->m_ColorMin).b;
          PStack_19.m_ColorMin.a = (pPVar17->m_ColorMin).a;
          PStack_19.m_ColorMax.r = (pPVar17->m_ColorMax).r;
          PStack_19.m_ColorMax.g = (pPVar17->m_ColorMax).g;
          PStack_19.m_ColorMax.b = (pPVar17->m_ColorMax).b;
          PStack_19.m_ColorMax.a = (pPVar17->m_ColorMax).a;
          UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem+MainModule::
          ParticleSystem_MainModule_set_startColor(aPStack_12,&PStack_19,(MethodInfo *)0x0);
          iVar20 = 1;
          fVar21 = _UNK_?;
          while( true ) {
            if (fVar6 <= fVar21) {
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
            (*pcRam_?)(aPStack_12,fVar6 - fVar21);
            pPVar1 = (this->fields).waterPillarParticles;
            if (pPVar1 == (ParticleSystem *)0x0) break;
            if (cRam_? == '\0') {
              FUN_?(&
                            void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::ParticleSystem>_UnityEngine__ParticleSystem_
                           );
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pvVar3 = (pPVar1->fields)._._.m_CachedPtr;
            if (pvVar3 == (void *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
              ThrowHelper_2_ThrowNullReferenceException((Object *)pPVar1,(MethodInfo *)0x0);
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
            (*pcRam_?)(pvVar3);
            iVar20 = iVar20 + 1;
            fVar21 = (float)iVar20;
          }
        }
      }
      FUN_?();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void EmitWaterRing(Vector3) */

void Assembly-CSharp.dll::SplashController::SplashController_EmitWaterRing
               (SplashController *this,Vector3 *position,MethodInfo *method)

{
  pPVar1 = (this->fields).waterRingParticles;
  if ((pPVar1 != (ParticleSystem *)0x0) &&
     (obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                      ((Component *)pPVar1,(MethodInfo *)0x0), obj != (Transform *)0x0)) {
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pvVar2 = (obj->fields)._._.m_CachedPtr;
    if (pvVar2 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
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
    pPVar1 = (this->fields).waterRingParticles;
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
      (*pcRam_?)(pvVar2,1);
      return;
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void EmitWaterSplash(Vector3, Vector3) */

void Assembly-CSharp.dll::SplashController::SplashController_EmitWaterSplash
               (SplashController *this,Vector3 *position,Vector3 *velocity,MethodInfo *method)

{
  pPVar1 = (this->fields).waterSplashParticles;
  if ((pPVar1 != (ParticleSystem *)0x0) &&
     (obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                      ((Component *)pPVar1,(MethodInfo *)0x0), obj != (Transform *)0x0)) {
    CStack_2.r = position->x;
    CStack_2.g = position->y;
    CStack_2.b = position->z;
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
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
    (*pcRam_?)(pvVar3);
    pPStackX_8 = (this->fields).waterSplashParticles;
    if (pPStackX_8 != (ParticleSystem *)0x0) {
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
      aPStack_11[0].m_ParticleSystem = pPStackX_8;
      fVar12 = (float)FUN_?(velocity);
      fVar13 = (this->fields).baseSplashParticlesSpeed;
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
      (*pcRam_?)(aPStack_11,fVar12 * fVar13);
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVGameControllerBase);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pMVar14 = TypeInfo__MVGameControllerBase->static_fields->instance;
      if ((pMVar14 != (MVGameControllerBase *)0x0) &&
         (pWVar15 = (pMVar14->fields).waterPlaneManager, pWVar15 != (WaterPlaneManager *)0x0)) {
        if (cRam_? == '\0') {
          FUN_?(&StringLiteral__RefrColor);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pWVar16 = (pWVar15->fields).water;
        if (((pWVar16 != (Water *)0x0) &&
            (this_00 = (pWVar16->fields).meshRenderer, this_00 != (Renderer *)0x0)) &&
           (this_01 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material
                                (this_00,(MethodInfo *)0x0), this_01 != (Material *)0x0)) {
          pCVar17 = UnityEngine.CoreModule.dll::UnityEngine::Material::Material_GetColor
                             (&CStack_2,this_01,StringLiteral__RefrColor,(MethodInfo *)0x0);
          CStack_2.b = ((this->fields).splashTint.b + pCVar17->b) * _UNK_?;
          CStack_2.a = ((this->fields).splashTint.a + pCVar17->a) * _UNK_?;
          CStack_2.g = ((this->fields).splashTint.g + pCVar17->g) * _UNK_?;
          CStack_2.r = ((this->fields).splashTint.r + pCVar17->r) * _UNK_?;
          pPVar18 = UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem+MinMaxGradient
                    ::ParticleSystem_MinMaxGradient_op_Implicit
                              (&PStack_19,&CStack_2,(MethodInfo *)0x0);
          PStack_20.m_Mode = pPVar18->m_Mode;
          PStack_20._4_4_ = *(undefined4 *)&pPVar18->field_0x4;
          PStack_20.m_GradientMin = pPVar18->m_GradientMin;
          PStack_20.m_GradientMax = pPVar18->m_GradientMax;
          PStack_20.m_ColorMin.r = (pPVar18->m_ColorMin).r;
          PStack_20.m_ColorMin.g = (pPVar18->m_ColorMin).g;
          PStack_20.m_ColorMin.b = (pPVar18->m_ColorMin).b;
          PStack_20.m_ColorMin.a = (pPVar18->m_ColorMin).a;
          PStack_20.m_ColorMax.r = (pPVar18->m_ColorMax).r;
          PStack_20.m_ColorMax.g = (pPVar18->m_ColorMax).g;
          PStack_20.m_ColorMax.b = (pPVar18->m_ColorMax).b;
          PStack_20.m_ColorMax.a = (pPVar18->m_ColorMax).a;
          UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem+MainModule::
          ParticleSystem_MainModule_set_startColor(aPStack_11,&PStack_20,(MethodInfo *)0x0);
          pPVar1 = (this->fields).waterSplashParticles;
          fVar13 = (float)FUN_?(velocity);
          if (pPVar1 != (ParticleSystem *)0x0) {
            UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::
            ParticleSystem_Emit_Internal
                      (pPVar1,(int)(fVar13 * (this->fields).baseNumberOfSplashParticles),
                       (MethodInfo *)0x0);
            return;
          }
        }
      }
      FUN_?();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* SplashController+ObjectData GetObjectData(Int32) */

SplashController_ObjectData *
Assembly-CSharp.dll::SplashController::SplashController_GetObjectData
          (int32_t objectID,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_SplashController::ObjectData>__ContainsKey_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_SplashController::ObjectData>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_SplashController::ObjectData>__set_Item_int__SplashController__ObjectData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__SplashController__ObjectData);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__SplashController);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__SplashController->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__SplashController);
  }
  this = (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)
         TypeInfo__SplashController->static_fields->objectIDToData;
  if (this != (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)0x0) {
    iVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
            Vector3]::Dictionary_2_System_Int32_UnityEngine_Vector3__FindEntry
                      (this,objectID,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_SplashController::ObjectData>__ContainsKey_int_
                       ->klass->rgctx_data[0x21].method);
    if (iVar1 < 0) {
      if (*(int *)&(TypeInfo__SplashController->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__SplashController);
      }
      pDVar2 = TypeInfo__SplashController->static_fields->objectIDToData;
      value = (Object *)FUN_?(TypeInfo__SplashController__ObjectData);
      *(undefined4 *)&value[1].klass = 0x7f800000;
      *(undefined1 *)((longlong)&value[2].klass + 4) = 0;
      if (pDVar2 == (Dictionary_2_System_Int32_SplashController_ObjectData_ *)0x0)
      goto DAT_?;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
      Dictionary_2_System_Int32_System_Object__TryInsert
                ((Dictionary_2_System_Int32_System_Object_ *)pDVar2,objectID,value,
                 CONCAT31((int3)((uint)in_R9D >> 8),1),
                 MethodInfo__System__Collections__Generic__Dictionary<int,_SplashController::ObjectData>__set_Item_int__SplashController__ObjectData_
                 ->klass->rgctx_data[0x22].method);
    }
    if (*(int *)&(TypeInfo__SplashController->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__SplashController);
    }
    pDVar2 = TypeInfo__SplashController->static_fields->objectIDToData;
    if (pDVar2 != (Dictionary_2_System_Int32_SplashController_ObjectData_ *)0x0) {
      pSVar3 = (SplashController_ObjectData *)
               mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
               Object]::Dictionary_2_System_Int32_System_Object__get_Item
                         ((Dictionary_2_System_Int32_System_Object_ *)pDVar2,objectID,
                          MethodInfo__System__Collections__Generic__Dictionary<int,_SplashController::ObjectData>__get_Item_int_
                         );
      pcVar4 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
        uVar5 = func_?(&UNK_?);
        FUN_?(uVar5,0);
        pcVar4 = (code *)swi(3);
        pSVar3 = (SplashController_ObjectData *)(*pcVar4)();
        return pSVar3;
      }
      pcRam_? = pcVar4;
      iVar1 = (*pcRam_?)();
      if (pSVar3 != (SplashController_ObjectData *)0x0) {
        (pSVar3->fields)._LastFrameInWater_k__BackingField = iVar1;
        fVar6 = (pSVar3->fields)._TimeSinceLastRingEmission_k__BackingField;
        pcVar4 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
          uVar5 = func_?(&UNK_?);
          FUN_?(uVar5,0);
          pcVar4 = (code *)swi(3);
          pSVar3 = (SplashController_ObjectData *)(*pcVar4)();
          return pSVar3;
        }
        pcRam_? = pcVar4;
        fVar7 = (float)(*pcRam_?)();
        (pSVar3->fields)._TimeSinceLastRingEmission_k__BackingField = fVar7 + fVar6;
        return pSVar3;
      }
    }
  }
DAT_?:
  FUN_?();
  pcVar4 = (code *)swi(3);
  pSVar3 = (SplashController_ObjectData *)(*pcVar4)();
  return pSVar3;
}


/* Void Initialize() */

void Assembly-CSharp.dll::SplashController::SplashController_Initialize
               (SplashController *this,MethodInfo *method)

{
  pSVar1 = (this->fields).streamedSplashSound;
  if (pSVar1 == (StreamedAudioClip *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  bVar3 = iRam_? != 0;
  (pSVar1->fields).receiver = (StreamedAudioClip_IReceiver *)this;
  if (bVar3) {
    uVar4 = (uint)((ulonglong)&(pSVar1->fields).receiver >> 0xc);
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
  return;
}


/* Void WaterSplash(Bounds, Vector3, Int32) */

void Assembly-CSharp.dll::SplashController::SplashController_WaterSplash
               (SplashController *this,Bounds *bounds,Vector3 *velocity,int32_t objectID,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__SplashController);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_AvatarWaterSplashSound);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__SplashController->_1).field_0x1c == 0) {
    FUN_?();
  }
  VStack_1.x = (bounds->m_Center).x;
  VStack_1.y = (bounds->m_Center).y;
  uStack_2._0_4_ = (bounds->m_Extents).y;
  uStack_2._4_4_ = (bounds->m_Extents).z;
  fVar3 = (bounds->m_Center).z;
  fVar4 = (bounds->m_Center).y - (float)(undefined4)uStack_2;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar5 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if ((pMVar5 == (MVGameControllerBase *)0x0) ||
     (this_00 = (pMVar5->fields).waterPlaneManager, this_00 == (WaterPlaneManager *)0x0))
  goto code_?;
  fVar6 = WaterPlaneManager::WaterPlaneManager_get_WaterLevel(this_00,(MethodInfo *)0x0);
  if (fVar6 < fVar4) {
    return;
  }
  if (*(int *)&(TypeInfo__SplashController->_1).field_0x1c == 0) {
    FUN_?();
  }
  pSVar7 = SplashController_GetObjectData(objectID,(MethodInfo *)0x0);
  VStack_8.z = (bounds->m_Extents).z;
  VStack_8.x = (bounds->m_Extents).x;
  VStack_8.y = (bounds->m_Extents).y;
  if (VStack_8.y + VStack_8.y + fVar4 <= fVar6) {
    return;
  }
  fVar4 = VStack_1.x;
  uVar9._4_4_ = fVar6;
  uVar9._0_4_ = VStack_1.x;
  VStack_1._0_8_ = uVar9;
  VStack_1.z = fVar3;
  if (pSVar7 == (SplashController_ObjectData *)0x0) goto code_?;
  fVar10 = (pSVar7->fields)._TimeSinceLastRingEmission_k__BackingField;
  pfVar11 = &(this->fields).timeBeforeNewRingIsEmitted;
  if (*pfVar11 <= fVar10 && fVar10 != *pfVar11) {
code_?:
    pPVar12 = (this->fields).waterRingParticles;
    if ((pPVar12 == (ParticleSystem *)0x0) ||
       (obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        ((Component *)pPVar12,(MethodInfo *)0x0), obj == (Transform *)0x0)) {
code_?:
      FUN_?();
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
    VStack_8.y = fVar6;
    VStack_8.x = fVar4;
    VStack_8.z = fVar3;
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pvVar14 = (obj->fields)._._.m_CachedPtr;
    if (pvVar14 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
    pcVar13 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar13 = (code *)FUN_?(&UNK_?), pcVar13 == (code *)0x0)) {
      uVar9 = func_?(&UNK_?);
      FUN_?(uVar9,0);
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
    pcRam_? = pcVar13;
    (*pcRam_?)(pvVar14);
    pPVar12 = (this->fields).waterRingParticles;
    if (pPVar12 == (ParticleSystem *)0x0) goto code_?;
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::ParticleSystem>_UnityEngine__ParticleSystem_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pvVar14 = (pPVar12->fields)._._.m_CachedPtr;
    if (pvVar14 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pPVar12,(MethodInfo *)0x0);
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
    pcVar13 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar13 = (code *)FUN_?(&UNK_?), pcVar13 == (code *)0x0)) {
      uVar9 = func_?(&UNK_?);
      FUN_?(uVar9,0);
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
    pcRam_? = pcVar13;
    (*pcRam_?)(pvVar14,1);
    (pSVar7->fields)._TimeSinceLastRingEmission_k__BackingField = 0.0;
    (pSVar7->fields)._LastRingPosition_k__BackingField.x = fVar4;
    (pSVar7->fields)._LastRingPosition_k__BackingField.y = fVar6;
    (pSVar7->fields)._LastRingPosition_k__BackingField.z = fVar3;
  }
  else {
    VStack_8.x = (pSVar7->fields)._LastRingPosition_k__BackingField.x;
    VStack_8.y = (pSVar7->fields)._LastRingPosition_k__BackingField.y;
    VStack_8.z = (pSVar7->fields)._LastRingPosition_k__BackingField.z;
    fVar10 = (float)FUN_?();
    pfVar11 = &(this->fields).distanceBeforeNewRingIsEmitted;
    if (*pfVar11 <= fVar10 && fVar10 != *pfVar11) goto code_?;
  }
  if ((pSVar7->fields)._IsInWater_k__BackingField == 0) {
    (pSVar7->fields)._IsInWater_k__BackingField = 1;
    this_01 = MVGameControllerBase::MVGameControllerBase_get_AudioManager((MethodInfo *)0x0);
    VStack_8.x = velocity->x;
    VStack_8.y = velocity->y;
    VStack_8.z = velocity->z;
    fVar10 = (float)((uint)VStack_8.y ^ _UNK_?);
    if (fVar10 < 0.0) {
      fVar10 = 0.0;
    }
    else if (_UNK_? < fVar10) {
      fVar10 = _UNK_?;
    }
    if (this_01 == (AudioManager *)0x0) {
code_?:
      FUN_?();
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
    VStack_8.y = fVar6;
    VStack_8.x = fVar4;
    VStack_8.z = fVar3;
    AudioManager::AudioManager_Play
              (this_01,StringLiteral_AvatarWaterSplashSound,(this->fields).splashSound,&VStack_8,
               (fVar10 / _UNK_?) * (this->fields).splashSoundVolume,
               SoundRangeDistance__Enum_Long,_UNK_?,(MethodInfo *)0x0);
    VStack_8.x = velocity->x;
    VStack_8.y = velocity->y;
    VStack_8.z = velocity->z;
    VStack_1._0_8_ = uVar9;
    VStack_1.z = fVar3;
    SplashController_EmitWaterPillar(this,&VStack_1,&VStack_8,(MethodInfo *)0x0);
    VStack_8.x = velocity->x;
    VStack_8.y = velocity->y;
    VStack_8.z = velocity->z;
    VStack_1._0_8_ = uVar9;
    VStack_1.z = fVar3;
    SplashController_EmitWaterSplash(this,&VStack_1,&VStack_8,(MethodInfo *)0x0);
  }
  return;
}


/* SplashController() */

void Assembly-CSharp.dll::SplashController::SplashController__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_SplashController::ObjectData>__Dictionary_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<int,_SplashController::ObjectData>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__SplashController);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  TypeInfo__SplashController->static_fields->currentObjectID = 0;
  pDVar1 = (Dictionary_2_System_Int32_SplashController_ObjectData_ *)
           FUN_?(
                        TypeInfo__System__Collections__Generic__Dictionary<int,_SplashController::ObjectData>
                        );
  pMVar2 = MethodInfo__System__Collections__Generic__Dictionary<int,_SplashController::ObjectData>__Dictionary_int_
           ->klass->rgctx_data->method;
  FUN_?(pDVar1,8,pMVar2->klass->rgctx_data[2].rgctxDataDummy);
  pEVar3 = mscorlib.dll::System::Collections::Generic::EqualityComparer`1[System::Int32]::
           EqualityComparer_1_System_Int32__get_Default(pMVar2->klass->rgctx_data[3].method);
  if ((pEVar3 != (EqualityComparer_1_System_Int32_ *)0x0) &&
     (bVar4 = iRam_? != 0,
     (pDVar1->fields)._comparer = (IEqualityComparer_1_System_Int32_ *)0x0, bVar4)) {
    uVar5 = (uint)((ulonglong)&(pDVar1->fields)._comparer >> 0xc);
    lVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
    do {
      uVar7 = *(ulonglong *)(lVar6 + 0xADDR);
      puVar8 = (ulonglong *)(lVar6 + 0xADDR);
      LOCK();
      bVar4 = uVar7 == *puVar8;
      if (bVar4) {
        *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
      }
      UNLOCK();
    } while (!bVar4);
  }
  TypeInfo__SplashController->static_fields->objectIDToData = pDVar1;
  if (iRam_? != 0) {
    uVar5 = (uint)((ulonglong)&TypeInfo__SplashController->static_fields->objectIDToData >> 0xc);
    uVar7 = (ulonglong)((uVar5 & 0x1fffff) >> 6);
    do {
      uVar9 = *(ulonglong *)(uVar7 * 8 + 0xADDR);
      puVar8 = (ulonglong *)(uVar7 * 8 + 0xADDR);
      LOCK();
      bVar4 = uVar9 == *puVar8;
      if (bVar4) {
        *puVar8 = uVar9 | 1L << (uVar5 & 0x3f);
      }
      UNLOCK();
    } while (!bVar4);
  }
  return;
}


/* SplashController() */

void Assembly-CSharp.dll::SplashController::SplashController__ctor
               (SplashController *this,MethodInfo *method)

{
  (this->fields).timeBeforeNewRingIsEmitted = 1.2;
  (this->fields).distanceBeforeNewRingIsEmitted = 1.5;
  (this->fields).baseNumberOfSplashParticles = 1.0;
  (this->fields).baseSplashParticlesSpeed = 0.5;
  (this->fields).waterPillarDensity = 0.5;
  (this->fields).splashSoundVolume = 0.5;
  return;
}


/* Int32 get_NewObjectID() */

int32_t Assembly-CSharp.dll::SplashController::SplashController_get_NewObjectID
                  (SplashController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__SplashController);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__SplashController->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__SplashController);
  }
  TypeInfo__SplashController->static_fields->currentObjectID =
       TypeInfo__SplashController->static_fields->currentObjectID + 1;
  return TypeInfo__SplashController->static_fields->currentObjectID;
}

