
/* Void Awake() */

void Assembly-CSharp.dll::SentryGunScript::SentryGunScript_Awake
               (SentryGunScript *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__PrefabPool->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__PrefabPool->_1).cctor_started == 0)) {
    func_?(TypeInfo__PrefabPool);
  }
  this_00 = PrefabPool::PrefabPool_get_Instance((MethodInfo *)0x0);
  if (this_00 != (PrefabPool *)0x0) {
    pSVar1 = PrefabPool::PrefabPool_get_RangeVisualizationObject(this_00,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?();
    }
    pSVar1 = (SphereVolumeIndicator *)
             UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                       ((XpBoostParticlePreviewer *)pSVar1,
                        SphereVolumeIndicator_MethodInfo__UnityEngine__Object__Instantiate<SphereVolumeIndicator>_SphereVolumeIndicator_
                       );
    (this->fields).rangeVisualization = pSVar1;
    if (pSVar1 != (SphereVolumeIndicator *)0x0) {
      pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                         ((Component_1 *)pSVar1,(MethodInfo *)0x0);
      value = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                        ((Component_1 *)this,(MethodInfo *)0x0);
      if (pTVar2 != (Transform *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_parent
                  (pTVar2,value,(MethodInfo *)0x0);
        pSVar1 = (this->fields).rangeVisualization;
        if (pSVar1 != (SphereVolumeIndicator *)0x0) {
          pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                             ((Component_1 *)pSVar1,(MethodInfo *)0x0);
          if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0)
             && ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
            func_?();
          }
          pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_zero
                             ((Vector3 *)&stack0xfffffff0,(MethodInfo *)0x0);
          if (pTVar2 != (Transform *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                      (pTVar2,*pVVar3,(MethodInfo *)0x0);
            pCVar4 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_main
                               ((MethodInfo *)0x0);
            (this->fields).mainCamera = pCVar4;
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
  pPVar1 = (this->fields).smokeEffectEmitter;
  if (pPVar1 == (ParticleSystem *)0x0) {
    func_?(0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcVar2 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar2 = (code *)func_?(&UNK_?), pcVar2 == (code *)0x0)) {
    uVar3 = func_?(&UNK_?,0,0);
    func_?(uVar3);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcRam_? = pcVar2;
  (*pcRam_?)(pPVar1,1,1);
  return;
}


/* Void EnableSmoke() */

void Assembly-CSharp.dll::SentryGunScript::SentryGunScript_EnableSmoke
               (SentryGunScript *this,MethodInfo *method)

{
  if ((this->fields).smokeEffectEmitter == (ParticleSystem *)0x0) {
    func_?(0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)func_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar2 = func_?(&UNK_?,0,0);
    func_?(uVar2);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam_?)();
  return;
}


/* Void Explode() */

void Assembly-CSharp.dll::SentryGunScript::SentryGunScript_Explode
               (SentryGunScript *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__PrefabPool->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__PrefabPool->_1).cctor_started == 0)) {
    func_?(TypeInfo__PrefabPool);
  }
  this_00 = PrefabPool::PrefabPool_get_Instance((MethodInfo *)0x0);
  if (this_00 != (PrefabPool *)0x0) {
    original = (SentryGunBeam *)
               PrefabPool::PrefabPool_get_ParticleExplosion(this_00,(MethodInfo *)0x0);
    pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                       ((Component_1 *)this,(MethodInfo *)0x0);
    if (pTVar1 != (Transform *)0x0) {
      pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                         ((Vector3 *)&stack0xffffffe8,pTVar1,(MethodInfo *)0x0);
      fVar3 = pVVar2->z;
      pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                         ((Component_1 *)this,(MethodInfo *)0x0);
      if (pTVar1 != (Transform *)0x0) {
        __return_storage_ptr__ = (Quaternion *)&stack0xffffffe4;
        puVar4 = &UNK_?;
        pQVar5 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                           (__return_storage_ptr__,pTVar1,(MethodInfo *)0x0);
        fVar6 = pQVar5->x;
        fVar7 = pQVar5->y;
        this = (SentryGunScript *)pQVar5->z;
        method = (MethodInfo *)pQVar5->w;
        if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
          func_?();
        }
        fVar8 = fVar7;
        position.y = (float)__return_storage_ptr__;
        position.x = (float)puVar4;
        position.z = fVar3;
        rotation.x = fVar6;
        rotation = (Quaternion)CONCAT124(auVar9,rotation.x);
        UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_161
                  (original,position,rotation,
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields).glowPlane;
  if (pTVar1 != (Transform *)0x0) {
    pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                        ((Component_1 *)pTVar1,(MethodInfo *)0x0);
    this_00 = (this->fields).mainCamera;
    if ((this_00 != (Camera *)0x0) &&
       (this_02 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                            ((Component_1 *)this_00,(MethodInfo *)0x0), this_02 != (Transform *)0x0)
       ) {
      pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_forward
                          (&VStack_3,this_02,(MethodInfo *)0x0);
      uStack_4._0_4_ = pVVar2->x;
      uStack_4._4_4_ = pVVar2->y;
      fVar5 = pVVar2->z;
      if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
        func_?();
      }
      a.z = fVar5;
      a.x = (float)(undefined4)uStack_4;
      a.y = (float)uStack_4._4_4_;
      pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_UnaryNegation
                          (&VStack_3,a,(MethodInfo *)0x0);
      if (pTVar1 != (Transform *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_up
                  (pTVar1,*pVVar2,(MethodInfo *)0x0);
        fVar5 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
        if (fVar5 < (this->fields).damageBlinkTimeoutTime) {
          fVar5 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0)
          ;
          if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
            func_?(TypeInfo__UnityEngine__Mathf);
          }
          fVar5 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Repeat
                             (fVar5 * _UNK_?,1.0,(MethodInfo *)0x0);
          if (fVar5 < _UNK_?) {
            this_01 = (this->fields).sentryRenderer;
            mesh = (this->fields).sentryMesh;
            if ((this_01 != (MeshRenderer *)0x0) &&
               (pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                          Component_1_get_transform((Component_1 *)this_01,(MethodInfo *)0x0),
               pTVar1 != (Transform *)0x0)) {
              pMVar6 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                        Transform_get_localToWorldMatrix
                                  ((Matrix4x4 *)&stack0xffffff7c,pTVar1,(MethodInfo *)0x0);
              material = (this->fields).blinkDamageMaterial;
              fVar5 = pMVar6->m00;
              VStack_3.x = pMVar6->m10;
              VStack_3.y = pMVar6->m20;
              VStack_3.z = pMVar6->m30;
              fStack_7 = pMVar6->m01;
              fStack_8 = pMVar6->m11;
              uStack_4._0_4_ = pMVar6->m21;
              uStack_4._4_4_ = pMVar6->m31;
              fVar9 = pMVar6->m02;
              fVar10 = pMVar6->m12;
              fVar11 = pMVar6->m22;
              fVar12 = pMVar6->m32;
              fVar13 = pMVar6->m03;
              fVar14 = pMVar6->m13;
              fVar15 = pMVar6->m23;
              fVar16 = pMVar6->m33;
              layer = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                                (StringLiteral_Default,(MethodInfo *)0x0);
              if ((((uint)(TypeInfo__UnityEngine__Graphics->vtable).Equals.methodPtr & 0x2000000) !=
                   0) && ((TypeInfo__UnityEngine__Graphics->_1).cctor_started == 0)) {
                func_?();
              }
              matrix.m10 = VStack_3.x;
              matrix.m00 = fVar5;
              matrix.m20 = VStack_3.y;
              matrix.m30 = VStack_3.z;
              matrix.m01 = fStack_7;
              matrix.m11 = fStack_8;
              matrix.m21 = (float)(undefined4)uStack_4;
              matrix.m31 = (float)uStack_4._4_4_;
              matrix.m02 = fVar9;
              matrix.m12 = fVar10;
              matrix.m22 = fVar11;
              matrix.m32 = fVar12;
              matrix.m03 = fVar13;
              matrix.m13 = fVar14;
              matrix.m23 = fVar15;
              matrix.m33 = fVar16;
              UnityEngine.CoreModule.dll::UnityEngine::Graphics::Graphics_DrawMesh_1
                        (mesh,matrix,material,layer,(MethodInfo *)0x0);
              return;
            }
            goto code_?;
          }
        }
        return;
      }
    }
  }
code_?:
  func_?(0);
  pcVar17 = (code *)swi(3);
  (*pcVar17)();
  return;
}


/* Void SetActiveMaterial(SentryGunBeamType) */

void Assembly-CSharp.dll::SentryGunScript::SentryGunScript_SetActiveMaterial
               (SentryGunScript *this,SentryGunBeamType__Enum beamType,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
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
      pCVar3 = UnityEngine.CoreModule.dll::UnityEngine::Material::Material_GetColor
                         ((Color *)&stack0xffffffec,pMVar2,StringLiteral__Color,(MethodInfo *)0x0);
      fVar4 = pCVar3->g;
      fVar5 = pCVar3->b;
      fVar6 = pCVar3->a;
      this_00 = (this->fields).glowPlaneRenderer;
      (this->fields).color.r = pCVar3->r;
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
  func_?(0);
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void SetGlowFactor(Single) */

void Assembly-CSharp.dll::SentryGunScript::SentryGunScript_SetGlowFactor
               (SentryGunScript *this,float glow,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
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
  func_?(0);
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
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  MVar1 = MVGameControllerBase::MVGameControllerBase_get_GameMode((MethodInfo *)0x0);
  if (MVar1 == MVGameMode__Enum_Edit) {
    this_00 = (this->fields).rangeVisualization;
    if (this_00 == (SphereVolumeIndicator *)0x0) {
      func_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
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
    func_?(_UNK_?);
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
      pCVar3 = UnityEngine.CoreModule.dll::UnityEngine::Material::Material_GetColor
                         ((Color *)&stack0xffffffec,pMVar2,StringLiteral__Color,(MethodInfo *)0x0);
      fVar4 = pCVar3->g;
      fVar5 = pCVar3->b;
      fVar6 = pCVar3->a;
      this_00 = (this->fields).glowPlaneRenderer;
      (this->fields).color.r = pCVar3->r;
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
  func_?(0);
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
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void UpdateAnimation() */

void Assembly-CSharp.dll::SentryGunScript::SentryGunScript_UpdateAnimation
               (SentryGunScript *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).sentryRenderer;
  if (this_00 != (MeshRenderer *)0x0) {
    this_01 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material
                        ((Renderer *)this_00,(MethodInfo *)0x0);
    t = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
    if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Repeat(t,1.0,(MethodInfo *)0x0);
    value.y = (float)&stack0xfffffff4;
    value.x = (float)&UNK_?;
    func_?();
    if (this_01 != (Material *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetTextureOffset
                (this_01,StringLiteral__MainTex,value,(MethodInfo *)0x0);
      return;
    }
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

