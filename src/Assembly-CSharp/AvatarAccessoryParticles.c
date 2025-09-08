
/* Bounds GetLocalBounds() */

Bounds * Assembly-CSharp.dll::AvatarAccessoryParticles::AvatarAccessoryParticles_GetLocalBounds
                   (Bounds *__return_storage_ptr__,AvatarAccessoryParticles *this,MethodInfo *method
                   )

{
  pfVar1 = (float *)(*(code *)(this->klass->vtable).GetWorldBounds.method)
                              (auStack_2,this,(this->klass->vtable).GetLocalBounds.methodPtr);
  fVar3 = pfVar1[1];
  fVar4 = pfVar1[2];
  fVar5 = pfVar1[3];
  (__return_storage_ptr__->m_Center).x = *pfVar1;
  (__return_storage_ptr__->m_Center).y = fVar3;
  (__return_storage_ptr__->m_Center).z = fVar4;
  (__return_storage_ptr__->m_Extents).x = fVar5;
  fVar3 = pfVar1[5];
  (__return_storage_ptr__->m_Extents).y = pfVar1[4];
  (__return_storage_ptr__->m_Extents).z = fVar3;
  return __return_storage_ptr__;
}


/* Bounds GetWorldBounds() */

Bounds * Assembly-CSharp.dll::AvatarAccessoryParticles::AvatarAccessoryParticles_GetWorldBounds
                   (Bounds *__return_storage_ptr__,AvatarAccessoryParticles *this,MethodInfo *method
                   )

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  pVVar1 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar2 = (pVVar1->zeroVector).y;
  fVar3 = (pVVar1->zeroVector).z;
  (__return_storage_ptr__->m_Center).x = (pVVar1->zeroVector).x;
  uVar4 = _UNK_?;
  (__return_storage_ptr__->m_Center).y = fVar2;
  (__return_storage_ptr__->m_Center).z = fVar3;
  (__return_storage_ptr__->m_Extents).x = (float)uVar4;
  (__return_storage_ptr__->m_Extents).y = (float)uVar4;
  (__return_storage_ptr__->m_Extents).z = 1.0;
  return __return_storage_ptr__;
}


/* Void Update() */

void Assembly-CSharp.dll::AvatarAccessoryParticles::AvatarAccessoryParticles_Update
               (AvatarAccessoryParticles *this,MethodInfo *method)

{
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_ESI);
  pAVar1 = AvatarAccessoryParticles_get_AccessoryParticlesSettings(this,(MethodInfo *)0x0);
  if (pAVar1 != (AccessoryParticlesSettings *)0x0) {
    if ((pAVar1->fields).useEmissionMovement == 0) {
      return;
    }
    uVar2._0_4_ = (this->fields).prevPosition.x;
    uVar2._4_4_ = (this->fields).prevPosition.y;
    fVar3 = (this->fields).prevPosition.z;
    pTVar4 = AvatarAccessory::AvatarAccessory_get_Transform
                       ((AvatarAccessory *)this,(MethodInfo *)0x0);
    if (pTVar4 != (Transform *)0x0) {
      pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                         ((Vector3 *)&puStack_6,pTVar4,(MethodInfo *)0x0);
      uVar7 = pVVar5->x;
      uVar8 = pVVar5->y;
      fVar9 = (float)uVar2 - (float)uVar7;
      fVar10 = (float)((ulonglong)uVar2 >> 0x20) - (float)uVar8;
      fVar3 = fVar3 - pVVar5->z;
      if (_UNK_? <= fVar10 * fVar10 + fVar9 * fVar9 + fVar3 * fVar3) {
        pPVar11 = AvatarAccessoryParticles_get_RootParticleSystem(this,(MethodInfo *)0x0);
        if (pPVar11 != (ParticleSystem *)0x0) {
          method_00 = UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::
                      ParticleSystem_get_collision(pPVar11,(MethodInfo *)0x0);
          pAVar1 = AvatarAccessoryParticles_get_AccessoryParticlesSettings
                             (this,(MethodInfo *)method_00.m_ParticleSystem);
          if (pAVar1 != (AccessoryParticlesSettings *)0x0) {
            PStack_12.m_ParticleSystem = (ParticleSystem *)&UNK_?;
            UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem+EmissionModule::
            ParticleSystem_EmissionModule_set_rateOverTimeMultiplier_Injected
                      ((ParticleSystem_EmissionModule *)&stack0xfffffff4,
                       (pAVar1->fields).EmitRateMoving,(MethodInfo *)0x0);
            pTVar4 = AvatarAccessory::AvatarAccessory_get_Transform
                               ((AvatarAccessory *)this,(MethodInfo *)0x0);
            if (pTVar4 != (Transform *)0x0) {
              pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                                 ((Vector3 *)&puStack_6,pTVar4,(MethodInfo *)0x0);
              fVar9 = pVVar5->y;
              fVar3 = pVVar5->z;
              (this->fields).prevPosition.x = pVVar5->x;
              (this->fields).prevPosition.y = fVar9;
              (this->fields).prevPosition.z = fVar3;
              return;
            }
          }
        }
      }
      else {
        pPVar11 = AvatarAccessoryParticles_get_RootParticleSystem(this,(MethodInfo *)0x0);
        if (pPVar11 != (ParticleSystem *)0x0) {
          PStack_12.m_ParticleSystem =
               (ParticleSystem *)
               UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::
               ParticleSystem_get_collision(pPVar11,(MethodInfo *)0x0);
          pAVar1 = AvatarAccessoryParticles_get_AccessoryParticlesSettings(this,(MethodInfo *)0x0);
          if (pAVar1 != (AccessoryParticlesSettings *)0x0) {
            PStack_12.m_ParticleSystem = (ParticleSystem *)&UNK_?;
            UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem+EmissionModule::
            ParticleSystem_EmissionModule_set_rateOverTimeMultiplier_Injected
                      (&PStack_12,(pAVar1->fields).EmitRateNormal,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  func_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* AccessoryParticlesSettings get_AccessoryParticlesSettings() */

AccessoryParticlesSettings *
Assembly-CSharp.dll::AvatarAccessoryParticles::
AvatarAccessoryParticles_get_AccessoryParticlesSettings
          (AvatarAccessoryParticles *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    AccessoryParticlesSettings_MethodInfo__UnityEngine__Component__GetComponent<AccessoryParticlesSettings>__
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  pAVar1 = (this->fields).accessoryParticlesSettings;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)pAVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    pAVar1 = (AccessoryParticlesSettings *)
             UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                       ((Component *)this,
                        AccessoryParticlesSettings_MethodInfo__UnityEngine__Component__GetComponent<AccessoryParticlesSettings>__
                       );
    (this->fields).accessoryParticlesSettings = pAVar1;
    func_?(&(this->fields).accessoryParticlesSettings,pAVar1);
  }
  return (this->fields).accessoryParticlesSettings;
}


/* AccessorySettings get_AccessorySettings() */

AccessorySettings *
Assembly-CSharp.dll::AvatarAccessoryParticles::AvatarAccessoryParticles_get_AccessorySettings
          (AvatarAccessoryParticles *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    AccessoryParticlesSettings_MethodInfo__UnityEngine__Component__GetComponent<AccessoryParticlesSettings>__
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  pAVar1 = (this->fields).accessoryParticlesSettings;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)pAVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    pAVar1 = (AccessoryParticlesSettings *)
             UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                       ((Component *)this,
                        AccessoryParticlesSettings_MethodInfo__UnityEngine__Component__GetComponent<AccessoryParticlesSettings>__
                       );
    (this->fields).accessoryParticlesSettings = pAVar1;
    func_?(&(this->fields).accessoryParticlesSettings,pAVar1);
  }
  return (AccessorySettings *)(this->fields).accessoryParticlesSettings;
}


/* ParticleSystem get_RootParticleSystem() */

ParticleSystem *
Assembly-CSharp.dll::AvatarAccessoryParticles::AvatarAccessoryParticles_get_RootParticleSystem
          (AvatarAccessoryParticles *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    UnityEngine__ParticleSystem_MethodInfo__UnityEngine__Component__GetComponentInChildren<UnityEngine::ParticleSystem>__
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  pPVar1 = (this->fields).rootParticleSystem;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)pPVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    pPVar1 = (ParticleSystem *)
             UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponentInChildren_1
                       ((Component *)this,
                        UnityEngine__ParticleSystem_MethodInfo__UnityEngine__Component__GetComponentInChildren<UnityEngine::ParticleSystem>__
                       );
    (this->fields).rootParticleSystem = pPVar1;
    func_?(&(this->fields).rootParticleSystem,pPVar1);
  }
  return (this->fields).rootParticleSystem;
}

