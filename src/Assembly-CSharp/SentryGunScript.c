
/* Void Awake() */

void Assembly-CSharp.dll::SentryGunScript::SentryGunScript_Awake
               (SentryGunScript *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    SphereVolumeIndicator_MethodInfo__UnityEngine__Object__Instantiate<SphereVolumeIndicator>_SphereVolumeIndicator_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__PrefabPool);
    cRam_? = '\x01';
  }
  pPVar1 = TypeInfo__PrefabPool->static_fields->instance;
  if (pPVar1 != (PrefabPool *)0x0) {
    pSVar2 = (pPVar1->fields).rangeVisualizationObject;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    pSVar2 = (SphereVolumeIndicator *)
             UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                       ((Object *)pSVar2,
                        SphereVolumeIndicator_MethodInfo__UnityEngine__Object__Instantiate<SphereVolumeIndicator>_SphereVolumeIndicator_
                       );
    (this->fields).rangeVisualization = pSVar2;
    func_?(&(this->fields).rangeVisualization,pSVar2);
    pSVar2 = (this->fields).rangeVisualization;
    if (pSVar2 != (SphereVolumeIndicator *)0x0) {
      pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                         ((Component *)pSVar2,(MethodInfo *)0x0);
      value = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        ((Component *)this,(MethodInfo *)0x0);
      if (pTVar3 != (Transform *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_parent
                  (pTVar3,value,(MethodInfo *)0x0);
        pSVar2 = (this->fields).rangeVisualization;
        if (pSVar2 != (SphereVolumeIndicator *)0x0) {
          pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                             ((Component *)pSVar2,(MethodInfo *)0x0);
          if (cRam_? == '\0') {
            func_?(&TypeInfo__UnityEngine__Vector3);
            cRam_? = '\x01';
          }
          if (pTVar3 != (Transform *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                      (pTVar3,TypeInfo__UnityEngine__Vector3->static_fields->zeroVector,
                       (MethodInfo *)0x0);
            pCVar4 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_main
                               ((MethodInfo *)0x0);
            (this->fields).mainCamera = pCVar4;
            func_?(&(this->fields).mainCamera,pCVar4);
            return;
          }
        }
      }
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void BlinkDamage() */

void Assembly-CSharp.dll::SentryGunScript::SentryGunScript_BlinkDamage
               (SentryGunScript *this,MethodInfo *method)

{
  fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  (this->fields).damageBlinkTimeoutTime = fVar1 + _UNK_?;
  return;
}


/* Void DisableSmoke() */

void Assembly-CSharp.dll::SentryGunScript::SentryGunScript_DisableSmoke
               (SentryGunScript *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pPVar2 = (this->fields).smokeEffectEmitter;
  if (pPVar2 != (ParticleSystem *)0x0) {
    if (pcRam_? == (code *)0x0) {
      pcRam_? = (code *)func_?();
    }
    puStack_1 = (undefined1 *)0x1;
    puStack_3 = (undefined *)0x1;
    pPStack_4 = pPVar2;
    (*pcRam_?)();
    return;
  }
  uVar5 = func_?(&pPStack_4);
  func_?(uVar5);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void EnableSmoke() */

void Assembly-CSharp.dll::SentryGunScript::SentryGunScript_EnableSmoke
               (SentryGunScript *this,MethodInfo *method)

{
  if ((this->fields).smokeEffectEmitter != (ParticleSystem *)0x0) {
    if (pcRam_? == (code *)0x0) {
      pcRam_? = (code *)func_?();
    }
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam_?)();
    return;
  }
  puStack_1 = &stack0xfffffffc;
  uVar2 = func_?(auStack_3);
  func_?(uVar2);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void Explode() */

void Assembly-CSharp.dll::SentryGunScript::SentryGunScript_Explode
               (SentryGunScript *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    UnityEngine__ParticleSystem_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::ParticleSystem>_UnityEngine__ParticleSystem__UnityEngine__Vector3__UnityEngine__Quaternion_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__PrefabPool);
    cRam_? = '\x01';
  }
  pPVar1 = TypeInfo__PrefabPool->static_fields->instance;
  if (pPVar1 != (PrefabPool *)0x0) {
    original = (pPVar1->fields).particleExplosion;
    pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                       ((Component *)this,(MethodInfo *)0x0);
    if (pTVar2 != (Transform *)0x0) {
      pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                         ((Vector3 *)&stack0xffffffe8,pTVar2,(MethodInfo *)0x0);
      fVar4 = pVVar3->z;
      pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                         ((Component *)this,(MethodInfo *)0x0);
      if (pTVar2 != (Transform *)0x0) {
        pQVar5 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                           ((Quaternion *)&stack0xffffffe4,pTVar2,(MethodInfo *)0x0);
        fVar6 = pQVar5->x;
        fVar7 = pQVar5->y;
        fVar8 = pQVar5->z;
        fVar9 = pQVar5->w;
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        position.y = fVar8;
        position.x = fVar7;
        position.z = fVar4;
        rotation.y = fVar7;
        rotation.x = fVar6;
        rotation.z = fVar8;
        rotation.w = fVar9;
        UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_7
                  ((Object *)original,position,rotation,
                   UnityEngine__ParticleSystem_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::ParticleSystem>_UnityEngine__ParticleSystem__UnityEngine__Vector3__UnityEngine__Quaternion_
                  );
        return;
      }
    }
  }
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void LateUpdate() */

void Assembly-CSharp.dll::SentryGunScript::SentryGunScript_LateUpdate
               (SentryGunScript *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Graphics);
    func_?(&StringLiteral_Default);
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields).glowPlane;
  if (pTVar1 != (Transform *)0x0) {
    pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        ((Component *)pTVar1,(MethodInfo *)0x0);
    this_00 = (this->fields).mainCamera;
    if (this_00 != (Camera *)0x0) {
      this_02 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                          ((Component *)this_00,(MethodInfo *)0x0);
      if (this_02 != (Transform *)0x0) {
        pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_forward
                            (&VStack_3,this_02,(MethodInfo *)0x0);
        uVar4 = pVVar2->x;
        uVar5 = pVVar2->y;
        fStack_6 = (float)(uVar4 ^ 
                           __074CDE7ED9B4DD51ACEEEE1729962EC36F0ADC004BF728B1521333CB241590DE_Field)
        ;
        uStack_7._0_4_ =
             (float)(uVar5 ^ 
                    __074CDE7ED9B4DD51ACEEEE1729962EC36F0ADC004BF728B1521333CB241590DE_Field);
        uStack_7._4_4_ =
             (float)((uint)pVVar2->z ^
                    __074CDE7ED9B4DD51ACEEEE1729962EC36F0ADC004BF728B1521333CB241590DE_Field);
        if (pTVar1 != (Transform *)0x0) {
          value.y = (float)uStack_7;
          value.x = fStack_6;
          value.z = uStack_7._4_4_;
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_up
                    (pTVar1,value,(MethodInfo *)0x0);
          fVar8 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0)
          ;
          if (fVar8 < (this->fields).damageBlinkTimeoutTime) {
            fVar8 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time
                               ((MethodInfo *)0x0);
            fVar8 = fVar8 * _UNK_?;
            uStack_7 = (double)fVar8;
            fVar9 = (float10)func_?();
            uStack_7 = (double)fVar9;
            fVar8 = fVar8 - (float)fVar9;
            if ((fVar8 < 0.0) || ((fVar8 <= _UNK_? && (fVar8 < _UNK_?)))) {
              this_01 = (this->fields).sentryRenderer;
              mesh = (this->fields).sentryMesh;
              if (this_01 != (MeshRenderer *)0x0) {
                pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                          Component_get_transform((Component *)this_01,(MethodInfo *)0x0);
                if (pTVar1 != (Transform *)0x0) {
                  pMVar10 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                            Transform_get_localToWorldMatrix
                                      ((Matrix4x4 *)&stack0xffffff7c,pTVar1,(MethodInfo *)0x0);
                  material = (this->fields).blinkDamageMaterial;
                  fVar8 = pMVar10->m00;
                  VStack_3.x = pMVar10->m10;
                  VStack_3.y = pMVar10->m20;
                  VStack_3.z = pMVar10->m30;
                  fStack_11 = pMVar10->m01;
                  fStack_6 = pMVar10->m11;
                  uStack_7._0_4_ = pMVar10->m21;
                  uStack_7._4_4_ = pMVar10->m31;
                  fVar12 = pMVar10->m02;
                  fVar13 = pMVar10->m12;
                  fVar14 = pMVar10->m22;
                  fVar15 = pMVar10->m32;
                  fVar16 = pMVar10->m03;
                  fVar17 = pMVar10->m13;
                  fVar18 = pMVar10->m23;
                  fVar19 = pMVar10->m33;
                  layer = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                                    (StringLiteral_Default,(MethodInfo *)0x0);
                  if ((TypeInfo__UnityEngine__Graphics->_1).cctor_finished_or_no_cctor == 0) {
                    func_?();
                  }
                  matrix.m10 = VStack_3.x;
                  matrix.m00 = fVar8;
                  matrix.m20 = VStack_3.y;
                  matrix.m30 = VStack_3.z;
                  matrix.m01 = fStack_11;
                  matrix.m11 = fStack_6;
                  matrix.m21 = (float)uStack_7;
                  matrix.m31 = uStack_7._4_4_;
                  matrix.m02 = fVar12;
                  matrix.m12 = fVar13;
                  matrix.m22 = fVar14;
                  matrix.m32 = fVar15;
                  matrix.m03 = fVar16;
                  matrix.m13 = fVar17;
                  matrix.m23 = fVar18;
                  matrix.m33 = fVar19;
                  UnityEngine.CoreModule.dll::UnityEngine::Graphics::Graphics_DrawMesh_2
                            (mesh,matrix,material,layer,(MethodInfo *)0x0);
                  return;
                }
              }
              goto code_?;
            }
          }
          return;
        }
      }
    }
  }
code_?:
  func_?();
  pcVar20 = (code *)swi(3);
  (*pcVar20)();
  return;
}


/* Void SetActiveMaterial(SentryGunBeamType) */

void Assembly-CSharp.dll::SentryGunScript::SentryGunScript_SetActiveMaterial
               (SentryGunScript *this,SentryGunBeamType__Enum beamType,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&StringLiteral__TintColor);
    func_?(&StringLiteral__Color);
    cRam_? = '\x01';
  }
  if ((undefined1)beamType == SentryGunBeamType__Enum_FireBeam) {
    pMVar1 = (this->fields).sentryRenderer;
    if (pMVar1 == (MeshRenderer *)0x0) goto code_?;
    pMVar2 = (this->fields).materialFireBeam;
code_?:
    UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_sharedMaterial
              ((Renderer *)pMVar1,pMVar2,(MethodInfo *)0x0);
  }
  else if ((undefined1)beamType == SentryGunBeamType__Enum_IceBeam) {
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
      pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Material::Material_GetVector
                         ((Vector4 *)&stack0xffffffec,pMVar2,StringLiteral__Color,(MethodInfo *)0x0)
      ;
      fVar4 = pVVar3->y;
      fVar5 = pVVar3->z;
      fVar6 = pVVar3->w;
      this_00 = (this->fields).glowPlaneRenderer;
      (this->fields).color.r = pVVar3->x;
      (this->fields).color.g = fVar4;
      (this->fields).color.b = fVar5;
      (this->fields).color.a = fVar6;
      if (this_00 != (Renderer *)0x0) {
        pMVar2 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material
                           (this_00,(MethodInfo *)0x0);
        if (pMVar2 != (Material *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetVector
                    (pMVar2,StringLiteral__TintColor,(Vector4)(this->fields).color,(MethodInfo *)0x0
                    );
          return;
        }
      }
    }
  }
code_?:
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void SetGlowFactor(Single) */

void Assembly-CSharp.dll::SentryGunScript::SentryGunScript_SetGlowFactor
               (SentryGunScript *this,float glow,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&StringLiteral__TintColor);
    func_?(&StringLiteral__GlowFactor);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).sentryRenderer;
  if (this_00 != (MeshRenderer *)0x0) {
    pMVar1 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material
                       ((Renderer *)this_00,(MethodInfo *)0x0);
    if (pMVar1 != (Material *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetFloat
                (pMVar1,StringLiteral__GlowFactor,glow,(MethodInfo *)0x0);
      (this->fields).color.a = glow;
      this_01 = (this->fields).glowPlaneRenderer;
      if (this_01 != (Renderer *)0x0) {
        pMVar1 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material
                           (this_01,(MethodInfo *)0x0);
        if (pMVar1 != (Material *)0x0) {
          fStack2 = (this->fields).color.a;
          UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetVector
                    (pMVar1,StringLiteral__TintColor,(Vector4)(this->fields).color,(MethodInfo *)0x0
                    );
          return;
        }
      }
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void SetHealth(Single) */

void Assembly-CSharp.dll::SentryGunScript::SentryGunScript_SetHealth
               (SentryGunScript *this,float value,MethodInfo *method)

{
  pTVar1 = (this->fields).healthPivot;
  if (pTVar1 != (Transform *)0x0) {
    pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localScale
                       ((Vector3 *)&stack0xffffffe4,pTVar1,(MethodInfo *)0x0);
    pTVar1 = (this->fields).healthPivot;
    uVar3 = pVVar2->y;
    if (pTVar1 != (Transform *)0x0) {
      value_00.y = (float)uVar3;
      value_00.x = value / _UNK_?;
      value_00.z = pVVar2->z;
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
                (pTVar1,value_00,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void SetLaserRange(Single) */

void Assembly-CSharp.dll::SentryGunScript::SentryGunScript_SetLaserRange
               (SentryGunScript *this,float range,MethodInfo *method)

{
  MVar1 = MVGameControllerBase::MVGameControllerBase_get_GameMode((MethodInfo *)0x0);
  if (MVar1 == MVGameMode__Enum_Edit) {
    this_00 = (this->fields).rangeVisualization;
    if (this_00 == (SphereVolumeIndicator *)0x0) {
      uVar2 = func_?(&stack0xfffffff4);
      func_?(uVar2);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    SphereVolumeIndicator::SphereVolumeIndicator_SetRadius(this_00,range,(MethodInfo *)0x0);
  }
  return;
}


/* Void SetSentryGunBeamType(SentryGunBeamType) */

void Assembly-CSharp.dll::SentryGunScript::SentryGunScript_SetSentryGunBeamType
               (SentryGunScript *this,SentryGunBeamType__Enum beamType,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&StringLiteral__TintColor);
    func_?(&StringLiteral__Color);
    cRam_? = '\x01';
  }
  if ((undefined1)beamType == SentryGunBeamType__Enum_FireBeam) {
    pMVar1 = (this->fields).sentryRenderer;
    if (pMVar1 == (MeshRenderer *)0x0) goto code_?;
    pMVar2 = (this->fields).materialFireBeam;
code_?:
    UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_sharedMaterial
              ((Renderer *)pMVar1,pMVar2,(MethodInfo *)0x0);
  }
  else if ((undefined1)beamType == SentryGunBeamType__Enum_IceBeam) {
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
      pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Material::Material_GetVector
                         ((Vector4 *)&stack0xffffffec,pMVar2,StringLiteral__Color,(MethodInfo *)0x0)
      ;
      fVar4 = pVVar3->y;
      fVar5 = pVVar3->z;
      fVar6 = pVVar3->w;
      this_00 = (this->fields).glowPlaneRenderer;
      (this->fields).color.r = pVVar3->x;
      (this->fields).color.g = fVar4;
      (this->fields).color.b = fVar5;
      (this->fields).color.a = fVar6;
      if (this_00 != (Renderer *)0x0) {
        pMVar2 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material
                           (this_00,(MethodInfo *)0x0);
        if (pMVar2 != (Material *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetVector
                    (pMVar2,StringLiteral__TintColor,(Vector4)(this->fields).color,(MethodInfo *)0x0
                    );
          if ((undefined1)beamType != SentryGunBeamType__Enum_FireBeam) {
            if ((undefined1)beamType == SentryGunBeamType__Enum_IceBeam) {
              pAVar7 = (this->fields).audioSource;
              if (pAVar7 == (AudioSource *)0x0) goto code_?;
              UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_set_clip
                        (pAVar7,(this->fields).audioClipIceBeam,(MethodInfo *)0x0);
            }
            return;
          }
          pAVar7 = (this->fields).audioSource;
          if (pAVar7 != (AudioSource *)0x0) {
            UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_set_clip
                      (pAVar7,(this->fields).audioClipFireBeam,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void SetSound(SentryGunBeamType) */

void Assembly-CSharp.dll::SentryGunScript::SentryGunScript_SetSound
               (SentryGunScript *this,SentryGunBeamType__Enum beamType,MethodInfo *method)

{
  if ((undefined1)beamType != SentryGunBeamType__Enum_FireBeam) {
    if ((undefined1)beamType == SentryGunBeamType__Enum_IceBeam) {
      pAVar1 = (this->fields).audioSource;
      if (pAVar1 == (AudioSource *)0x0) goto code_?;
      UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_set_clip
                (pAVar1,(this->fields).audioClipIceBeam,(MethodInfo *)0x0);
    }
    return;
  }
  pAVar1 = (this->fields).audioSource;
  if (pAVar1 != (AudioSource *)0x0) {
    UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_set_clip
              (pAVar1,(this->fields).audioClipFireBeam,(MethodInfo *)0x0);
    return;
  }
code_?:
  uVar2 = func_?(&stack0xfffffff0);
  func_?(uVar2);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void UpdateAnimation() */

void Assembly-CSharp.dll::SentryGunScript::SentryGunScript_UpdateAnimation
               (SentryGunScript *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&StringLiteral__MainTex);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).sentryRenderer;
  if (this_00 != (MeshRenderer *)0x0) {
    this_01 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material
                        ((Renderer *)this_00,(MethodInfo *)0x0);
    fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
    fVar2 = (float10)func_?((double)fVar1);
    fVar1 = fVar1 - (float)fVar2;
    if (fVar1 < 0.0) {
      fVar1 = 0.0;
    }
    else if (_UNK_? < fVar1) {
      fVar1 = _UNK_?;
    }
    if (this_01 != (Material *)0x0) {
      value.y = 0.0;
      value.x = fVar1;
      UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetTextureOffset
                (this_01,StringLiteral__MainTex,value,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

