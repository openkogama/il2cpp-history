
/* Void Awake() */

void Assembly-CSharp.dll::SentryGunScript::SentryGunScript_Awake
               (SentryGunScript *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  SphereVolumeIndicator_MethodInfo__UnityEngine__Object__Instantiate<SphereVolumeIndicator>_SphereVolumeIndicator_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
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
  if (pPVar1 != (PrefabPool *)0x0) {
    pSVar2 = (pPVar1->fields).rangeVisualizationObject;
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    pSVar2 = (SphereVolumeIndicator *)
             UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                       ((Object *)pSVar2,
                        SphereVolumeIndicator_MethodInfo__UnityEngine__Object__Instantiate<SphereVolumeIndicator>_SphereVolumeIndicator_
                       );
    bVar3 = iRam_? != 0;
    (this->fields).rangeVisualization = pSVar2;
    if (bVar3) {
      uVar4 = (uint)((ulonglong)&(this->fields).rangeVisualization >> 0xc);
      lVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
      do {
        uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
        puVar7 = (ulonglong *)(lVar5 + 0xADDR);
        LOCK();
        bVar3 = uVar6 == *puVar7;
        if (bVar3) {
          *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
        }
        UNLOCK();
      } while (!bVar3);
    }
    pSVar2 = (this->fields).rangeVisualization;
    if (pSVar2 != (SphereVolumeIndicator *)0x0) {
      pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                         ((Component *)pSVar2,(MethodInfo *)0x0);
      value = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        ((Component *)this,(MethodInfo *)0x0);
      if (pTVar8 != (Transform *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_parent
                  (pTVar8,value,(MethodInfo *)0x0);
        pSVar2 = (this->fields).rangeVisualization;
        if (pSVar2 != (SphereVolumeIndicator *)0x0) {
          pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                             ((Component *)pSVar2,(MethodInfo *)0x0);
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__UnityEngine__Vector3);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pVVar9 = TypeInfo__UnityEngine__Vector3->static_fields;
          if (pTVar8 == (Transform *)0x0) {
            FUN_?();
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          uStack_11._0_4_ = (pVVar9->zeroVector).x;
          uStack_11._4_4_ = (pVVar9->zeroVector).y;
          fStack_12 = (pVVar9->zeroVector).z;
          if (cRam_? == '\0') {
            FUN_?(&
                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pvVar13 = (pTVar8->fields)._._.m_CachedPtr;
          if (pvVar13 == (void *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
            ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar8,(MethodInfo *)0x0);
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          pcVar10 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar10 = (code *)FUN_?(&UNK_?), pcVar10 == (code *)0x0)) {
            uVar14 = func_?(&UNK_?);
            FUN_?(uVar14,0);
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          pcRam_? = pcVar10;
          (*pcRam_?)(pvVar13,&uStack_11);
          pCVar15 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_main
                              ((MethodInfo *)0x0);
          bVar3 = iRam_? != 0;
          (this->fields).mainCamera = pCVar15;
          if (bVar3) {
            uVar4 = (uint)((ulonglong)&(this->fields).mainCamera >> 0xc);
            lVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
            do {
              uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
              puVar7 = (ulonglong *)(lVar5 + 0xADDR);
              LOCK();
              bVar3 = uVar6 == *puVar7;
              if (bVar3) {
                *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
              }
              UNLOCK();
            } while (!bVar3);
          }
          return;
        }
      }
    }
  }
  FUN_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void BlinkDamage() */

void Assembly-CSharp.dll::SentryGunScript::SentryGunScript_BlinkDamage
               (SentryGunScript *this,MethodInfo *method)

{
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
  (this->fields).damageBlinkTimeoutTime = fVar3 + _UNK_?;
  return;
}


/* Void DisableSmoke() */

void Assembly-CSharp.dll::SentryGunScript::SentryGunScript_DisableSmoke
               (SentryGunScript *this,MethodInfo *method)

{
  obj = (this->fields).smokeEffectEmitter;
  if (obj == (ParticleSystem *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::ParticleSystem>_UnityEngine__ParticleSystem_
                  ,1,0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (obj == (ParticleSystem *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pvVar2 = (obj->fields)._._.m_CachedPtr;
  if (pvVar2 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar3 = func_?(&UNK_?);
    FUN_?(uVar3,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam_?)(pvVar2,1,1);
  return;
}


/* Void EnableSmoke() */

void Assembly-CSharp.dll::SentryGunScript::SentryGunScript_EnableSmoke
               (SentryGunScript *this,MethodInfo *method)

{
  obj = (this->fields).smokeEffectEmitter;
  if (obj == (ParticleSystem *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::ParticleSystem>_UnityEngine__ParticleSystem_
                  ,1,0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (obj == (ParticleSystem *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pvVar2 = (obj->fields)._._.m_CachedPtr;
  if (pvVar2 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar3 = func_?(&UNK_?);
    FUN_?(uVar3,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam_?)(pvVar2,1);
  return;
}


/* Void Explode() */

void Assembly-CSharp.dll::SentryGunScript::SentryGunScript_Explode
               (SentryGunScript *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  UnityEngine__ParticleSystem_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::ParticleSystem>_UnityEngine__ParticleSystem__UnityEngine__Vector3__UnityEngine__Quaternion_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
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
  if (pPVar1 != (PrefabPool *)0x0) {
    pPVar2 = (pPVar1->fields).particleExplosion;
    pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                       ((Component *)this,(MethodInfo *)0x0);
    if (pTVar3 != (Transform *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pvVar4 = (pTVar3->fields)._._.m_CachedPtr;
      if (pvVar4 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar3,(MethodInfo *)0x0);
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
      pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                         ((Component *)this,(MethodInfo *)0x0);
      if (pTVar3 != (Transform *)0x0) {
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        uStack_7 = 0;
        uStack_8 = 0;
        pvVar4 = (pTVar3->fields)._._.m_CachedPtr;
        if (pvVar4 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar3,(MethodInfo *)0x0);
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
        (*pcRam_?)(pvVar4,&uStack_7);
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        uStack_9 = (undefined4)uStack_7;
        uStack_10 = uStack_7._4_4_;
        uStack_11 = (undefined4)uStack_8;
        uStack_12 = uStack_8._4_4_;
        uStack_7 = 0;
        uStack_8 = (ulonglong)uStack_8._4_4_ << 0x20;
        FUN_?(pPVar2,&uStack_7,&uStack_9);
        return;
      }
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void LateUpdate() */

void Assembly-CSharp.dll::SentryGunScript::SentryGunScript_LateUpdate
               (SentryGunScript *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Graphics);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Default);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields).glowPlane;
  if (pTVar1 != (Transform *)0x0) {
    pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                       ((Component *)pTVar1,(MethodInfo *)0x0);
    this_00 = (this->fields).mainCamera;
    if ((this_00 != (Camera *)0x0) &&
       (this_02 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                            ((Component *)this_00,(MethodInfo *)0x0), this_02 != (Transform *)0x0))
    {
      pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_forward
                         (&VStack_3,this_02,(MethodInfo *)0x0);
      uVar4 = pVVar2->x;
      uVar5._0_4_ = (float)(uVar4 ^ _UNK_?);
      if (pTVar1 != (Transform *)0x0) {
        uVar5._4_4_ = (float)((uint)pVVar2->y ^ _UNK_?);
        VStack_3._0_8_ = uVar5;
        VStack_3.z = (float)((uint)pVVar2->z ^ _UNK_?);
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_up
                  (pTVar1,&VStack_3,(MethodInfo *)0x0);
        pcVar6 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
          uVar5 = func_?(&UNK_?);
          FUN_?(uVar5,0);
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pcRam_? = pcVar6;
        fVar7 = (float)(*pcRam_?)();
        if (fVar7 < (this->fields).damageBlinkTimeoutTime) {
          pcVar6 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
            uVar5 = func_?(&UNK_?);
            FUN_?(uVar5,0);
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          pcRam_? = pcVar6;
          fVar7 = (float)(*pcRam_?)();
          fVar7 = fVar7 * _UNK_?;
          fVar8 = (float)func_?(fVar7);
          fVar7 = fVar7 - fVar8;
          if ((fVar7 < 0.0) || ((fVar7 <= _UNK_? && (fVar7 < _UNK_?)))) {
            this_01 = (this->fields).sentryRenderer;
            mesh = (this->fields).sentryMesh;
            if ((this_01 == (MeshRenderer *)0x0) ||
               (pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                   ((Component *)this_01,(MethodInfo *)0x0),
               pTVar1 == (Transform *)0x0)) goto code_?;
            if (cRam_? == '\0') {
              FUN_?(&
                            void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                           );
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            MStack_9.m00 = 0.0;
            MStack_9.m10 = 0.0;
            MStack_9.m20 = 0.0;
            MStack_9.m30 = 0.0;
            MStack_9.m01 = 0.0;
            MStack_9.m11 = 0.0;
            MStack_9.m21 = 0.0;
            MStack_9.m31 = 0.0;
            MStack_9.m02 = 0.0;
            MStack_9.m12 = 0.0;
            MStack_9.m22 = 0.0;
            MStack_9.m32 = 0.0;
            MStack_9.m03 = 0.0;
            MStack_9.m13 = 0.0;
            MStack_9.m23 = 0.0;
            MStack_9.m33 = 0.0;
            pvVar10 = (pTVar1->fields)._._.m_CachedPtr;
            if (pvVar10 == (void *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
              ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar1,(MethodInfo *)0x0);
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            pcVar6 = pcRam_?;
            if ((pcRam_? == (code *)0x0) &&
               (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
              uVar5 = func_?(&UNK_?);
              FUN_?(uVar5,0);
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            pcRam_? = pcVar6;
            (*pcRam_?)(pvVar10);
            material = (this->fields).blinkDamageMaterial;
            layer = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                              (StringLiteral_Default,(MethodInfo *)0x0);
            if (*(int *)&(TypeInfo__UnityEngine__Graphics->_1).field_0x1c == 0) {
              FUN_?();
            }
            MStack_11.m00 = MStack_9.m00;
            MStack_11.m10 = MStack_9.m10;
            MStack_11.m20 = MStack_9.m20;
            MStack_11.m30 = MStack_9.m30;
            MStack_11.m01 = MStack_9.m01;
            MStack_11.m11 = MStack_9.m11;
            MStack_11.m21 = MStack_9.m21;
            MStack_11.m31 = MStack_9.m31;
            MStack_11.m02 = MStack_9.m02;
            MStack_11.m12 = MStack_9.m12;
            MStack_11.m22 = MStack_9.m22;
            MStack_11.m32 = MStack_9.m32;
            MStack_11.m03 = MStack_9.m03;
            MStack_11.m13 = MStack_9.m13;
            MStack_11.m23 = MStack_9.m23;
            MStack_11.m33 = MStack_9.m33;
            UnityEngine.CoreModule.dll::UnityEngine::Graphics::Graphics_DrawMesh_2
                      (mesh,&MStack_11,material,layer,(MethodInfo *)0x0);
          }
        }
        return;
      }
    }
  }
code_?:
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void SetActiveMaterial(SentryGunBeamType) */

void Assembly-CSharp.dll::SentryGunScript::SentryGunScript_SetActiveMaterial
               (SentryGunScript *this,SentryGunBeamType__Enum beamType,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral__TintColor);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__Color);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((char)beamType == '\0') {
    pMVar1 = (this->fields).sentryRenderer;
    if (pMVar1 == (MeshRenderer *)0x0) goto code_?;
    pMVar2 = (this->fields).materialFireBeam;
code_?:
    UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_SetMaterial
              ((Renderer *)pMVar1,pMVar2,(MethodInfo *)0x0);
  }
  else if ((char)beamType == '\x01') {
    pMVar1 = (this->fields).sentryRenderer;
    if (pMVar1 == (MeshRenderer *)0x0) goto code_?;
    pMVar2 = (this->fields).materialIceBeam;
    goto code_?;
  }
  pMVar1 = (this->fields).sentryRenderer;
  if (pMVar1 != (MeshRenderer *)0x0) {
    pMVar2 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_sharedMaterial
                       ((Renderer *)pMVar1,(MethodInfo *)0x0);
    if (pMVar2 != (Material *)0x0) {
      pCVar3 = UnityEngine.CoreModule.dll::UnityEngine::Material::Material_GetColor
                         (&CStack_4,pMVar2,StringLiteral__Color,(MethodInfo *)0x0);
      this_00 = (this->fields).glowPlaneRenderer;
      fVar5 = pCVar3->g;
      fVar6 = pCVar3->b;
      fVar7 = pCVar3->a;
      (this->fields).color.r = pCVar3->r;
      (this->fields).color.g = fVar5;
      (this->fields).color.b = fVar6;
      (this->fields).color.a = fVar7;
      if (this_00 != (Renderer *)0x0) {
        pMVar2 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material
                           (this_00,(MethodInfo *)0x0);
        if (pMVar2 != (Material *)0x0) {
          CStack_4.r = (this->fields).color.r;
          CStack_4.g = (this->fields).color.g;
          CStack_4.b = (this->fields).color.b;
          CStack_4.a = (this->fields).color.a;
          UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetColor
                    (pMVar2,StringLiteral__TintColor,&CStack_4,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void SetGlowFactor(Single) */

void Assembly-CSharp.dll::SentryGunScript::SentryGunScript_SetGlowFactor
               (SentryGunScript *this,float glow,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral__TintColor);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__GlowFactor);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).sentryRenderer;
  if (this_00 != (MeshRenderer *)0x0) {
    pMVar1 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material
                       ((Renderer *)this_00,(MethodInfo *)0x0);
    if (pMVar1 != (Material *)0x0) {
      name = UnityEngine.CoreModule.dll::UnityEngine::Shader::Shader_PropertyToID
                       (StringLiteral__GlowFactor,(MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetFloatImpl
                (pMVar1,name,glow,(MethodInfo *)0x0);
      (this->fields).color.a = glow;
      this_01 = (this->fields).glowPlaneRenderer;
      if (this_01 != (Renderer *)0x0) {
        pMVar1 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material
                           (this_01,(MethodInfo *)0x0);
        if (pMVar1 != (Material *)0x0) {
          aCStack_2[0].r = (this->fields).color.r;
          aCStack_2[0].g = (this->fields).color.g;
          aCStack_2[0].b = (this->fields).color.b;
          aCStack_2[0].a = (this->fields).color.a;
          UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetColor
                    (pMVar1,StringLiteral__TintColor,aCStack_2,(MethodInfo *)0x0);
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


/* Void SetHealth(Single) */

void Assembly-CSharp.dll::SentryGunScript::SentryGunScript_SetHealth
               (SentryGunScript *this,float value,MethodInfo *method)

{
  pTVar1 = (this->fields).healthPivot;
  if (pTVar1 == (Transform *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
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
  pvVar3 = (pTVar1->fields)._._.m_CachedPtr;
  if (pvVar3 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar1,(MethodInfo *)0x0);
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
  (*pcRam_?)(pvVar3);
  pTVar1 = (this->fields).healthPivot;
  uStack_5 = (ulonglong)(uint)(value / _UNK_?);
  if (pTVar1 == (Transform *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uStack_6 = 0;
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pvVar3 = (pTVar1->fields)._._.m_CachedPtr;
  if (pvVar3 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar1,(MethodInfo *)0x0);
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
  (*pcRam_?)(pvVar3,&uStack_5);
  return;
}


/* Void SetLaserRange(Single) */

void Assembly-CSharp.dll::SentryGunScript::SentryGunScript_SetLaserRange
               (SentryGunScript *this,float range,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar1 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
  if (pGVar1 != (GameSessionData *)0x0) {
    if ((pGVar1->fields).gameMode == 0) {
      this_00 = (this->fields).rangeVisualization;
      if (this_00 == (SphereVolumeIndicator *)0x0) goto code_?;
      SphereVolumeIndicator::SphereVolumeIndicator_SetRadius(this_00,range,(MethodInfo *)0x0);
    }
    return;
  }
code_?:
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SetSentryGunBeamType(SentryGunBeamType) */

void Assembly-CSharp.dll::SentryGunScript::SentryGunScript_SetSentryGunBeamType
               (SentryGunScript *this,SentryGunBeamType__Enum beamType,MethodInfo *method)

{
  cVar1 = (char)beamType;
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral__TintColor);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__Color);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cVar1 == '\0') {
    pMVar2 = (this->fields).sentryRenderer;
    if (pMVar2 == (MeshRenderer *)0x0) goto code_?;
    pMVar3 = (this->fields).materialFireBeam;
code_?:
    UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_SetMaterial
              ((Renderer *)pMVar2,pMVar3,(MethodInfo *)0x0);
  }
  else if (cVar1 == '\x01') {
    pMVar2 = (this->fields).sentryRenderer;
    if (pMVar2 == (MeshRenderer *)0x0) goto code_?;
    pMVar3 = (this->fields).materialIceBeam;
    goto code_?;
  }
  pMVar2 = (this->fields).sentryRenderer;
  if ((pMVar2 != (MeshRenderer *)0x0) &&
     (pMVar3 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_sharedMaterial
                         ((Renderer *)pMVar2,(MethodInfo *)0x0), pMVar3 != (Material *)0x0)) {
    pCVar4 = UnityEngine.CoreModule.dll::UnityEngine::Material::Material_GetColor
                       (&CStack_5,pMVar3,StringLiteral__Color,(MethodInfo *)0x0);
    this_00 = (this->fields).glowPlaneRenderer;
    fVar6 = pCVar4->g;
    fVar7 = pCVar4->b;
    fVar8 = pCVar4->a;
    (this->fields).color.r = pCVar4->r;
    (this->fields).color.g = fVar6;
    (this->fields).color.b = fVar7;
    (this->fields).color.a = fVar8;
    if ((this_00 != (Renderer *)0x0) &&
       (pMVar3 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material
                           (this_00,(MethodInfo *)0x0), pMVar3 != (Material *)0x0)) {
      CStack_5.r = (this->fields).color.r;
      CStack_5.g = (this->fields).color.g;
      CStack_5.b = (this->fields).color.b;
      CStack_5.a = (this->fields).color.a;
      UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetColor
                (pMVar3,StringLiteral__TintColor,&CStack_5,(MethodInfo *)0x0);
      if (cVar1 == '\0') {
        pSVar9 = (this->fields).audioClipFireBeamStream;
      }
      else {
        if (cVar1 != '\x01') {
          return;
        }
        pSVar9 = (this->fields).audioClipIceBeamStream;
      }
      if ((pSVar9 != (StreamedAudioClipManual *)0x0) &&
         (this_01 = (this->fields).audioSource, this_01 != (AudioSource *)0x0)) {
        UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_set_resource
                  (this_01,(AudioResource *)(pSVar9->fields)._Clip_k__BackingField,(MethodInfo *)0x0
                  );
        return;
      }
    }
  }
code_?:
  FUN_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void SetSound(SentryGunBeamType) */

void Assembly-CSharp.dll::SentryGunScript::SentryGunScript_SetSound
               (SentryGunScript *this,SentryGunBeamType__Enum beamType,MethodInfo *method)

{
  if ((char)beamType == '\0') {
    pSVar1 = (this->fields).audioClipFireBeamStream;
  }
  else {
    if ((char)beamType != '\x01') {
      return;
    }
    pSVar1 = (this->fields).audioClipIceBeamStream;
  }
  if ((pSVar1 == (StreamedAudioClipManual *)0x0) ||
     (obj = (this->fields).audioSource, obj == (AudioSource *)0x0)) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pAVar3 = (pSVar1->fields)._Clip_k__BackingField;
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::AudioSource>_UnityEngine__AudioSource_
                  ,pAVar3,0);
    LOCK();
    UNLOCK();
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__Marshal<UnityEngine::Audio::AudioResource>_UnityEngine__Audio__AudioResource_
                 );
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
  pvVar4 = (obj->fields)._._._._.m_CachedPtr;
  if (pvVar4 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((
      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__Marshal<UnityEngine::Audio::AudioResource>_UnityEngine__Audio__AudioResource_
      ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
    FUN_?();
  }
  if (pAVar3 == (AudioClip *)0x0) {
    pvVar5 = (void *)0x0;
  }
  else {
    pvVar5 = (pAVar3->fields)._._.m_CachedPtr;
  }
  pcVar2 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
    uVar6 = func_?(&UNK_?);
    FUN_?(uVar6,0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcRam_? = pcVar2;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam_?)(pvVar4,pvVar5);
  return;
}


/* Void UpdateAnimation() */

void Assembly-CSharp.dll::SentryGunScript::SentryGunScript_UpdateAnimation
               (SentryGunScript *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral__MainTex);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).sentryRenderer;
  if (this_00 != (MeshRenderer *)0x0) {
    obj = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material
                    ((Renderer *)this_00,(MethodInfo *)0x0);
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
    fVar4 = (float)func_?();
    fVar3 = fVar3 - fVar4;
    if (fVar3 < 0.0) {
      fVar3 = 0.0;
    }
    else if (_UNK_? < fVar3) {
      fVar3 = _UNK_?;
    }
    if (obj != (Material *)0x0) {
      iVar5 = UnityEngine.CoreModule.dll::UnityEngine::Shader::Shader_PropertyToID
                        (StringLiteral__MainTex,(MethodInfo *)0x0);
      auStack_6[0] = (ulonglong)(uint)fVar3;
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Material>_UnityEngine__Material_
                      ,iVar5,auStack_6[0],0);
        LOCK();
        UNLOCK();
        FUN_?(&TypeInfo__UnityEngine__Material);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (obj == (Material *)0x0) {
        FUN_?();
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pvVar7 = (obj->fields)._.m_CachedPtr;
      if (pvVar7 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (*(int *)&(TypeInfo__UnityEngine__Material->_1).field_0x1c == 0) {
        FUN_?();
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
      (*pcRam_?)(pvVar7,iVar5,auStack_6);
      return;
    }
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

