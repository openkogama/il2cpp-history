
/* Void Update() */

void Assembly-CSharp.dll::AvatarAccessoriesTrailLogic::AvatarAccessoriesTrailLogic_Update
               (AvatarAccessoriesTrailLogic *this,MethodInfo *method)

{
  this_00 = this;
  pPVar1 = (this->fields).particles;
  if (pPVar1 != (ParticleSystem *)0x0) {
    this = (AvatarAccessoriesTrailLogic *)
           UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::
           ParticleSystem_get_collision(pPVar1,(MethodInfo *)0x0);
    pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                       ((Component *)this_00,(MethodInfo *)0x0);
    if (pTVar2 != (Transform *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                ((Vector3 *)&stack0xffffffdc,pTVar2,(MethodInfo *)0x0);
      fVar3 = (float10)func_?();
      fStack_4 = (float)fVar3;
      pfVar5 = &(this_00->fields).mininumMovementRequirement;
      if (fStack_4 < *pfVar5 || fStack_4 == *pfVar5) {
        UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem+EmissionModule::
        ParticleSystem_EmissionModule_set_enabled_Injected
                  ((ParticleSystem_EmissionModule *)&this,0,(MethodInfo *)0x0);
        return;
      }
      UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem+EmissionModule::
      ParticleSystem_EmissionModule_set_enabled_Injected
                ((ParticleSystem_EmissionModule *)&this,1,(MethodInfo *)0x0);
      pPVar1 = (this_00->fields).particles;
      if (pPVar1 != (ParticleSystem *)0x0) {
        PStack_6.m_ParticleSystem =
             (ParticleSystem *)
             UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::
             ParticleSystem_get_collision(pPVar1,(MethodInfo *)0x0);
        UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem+MainModule::
        ParticleSystem_MainModule_set_startSpeedMultiplier_Injected(&PStack_6,0.0,(MethodInfo *)0x0)
        ;
        pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                           ((Component *)this_00,(MethodInfo *)0x0);
        if (pTVar2 != (Transform *)0x0) {
          pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                             ((Vector3 *)&stack0xffffffdc,pTVar2,(MethodInfo *)0x0);
          fVar8 = pVVar7->y;
          fVar9 = pVVar7->z;
          (this_00->fields).lastPosition.x = pVVar7->x;
          (this_00->fields).lastPosition.y = fVar8;
          (this_00->fields).lastPosition.z = fVar9;
          return;
        }
      }
    }
  }
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* AvatarAccessoriesTrailLogic() */

void Assembly-CSharp.dll::AvatarAccessoriesTrailLogic::AvatarAccessoriesTrailLogic__ctor
               (AvatarAccessoriesTrailLogic *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  pVVar1 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar2 = (pVVar1->zeroVector).y;
  fVar3 = (pVVar1->zeroVector).z;
  (this->fields).lastPosition.x = (pVVar1->zeroVector).x;
  (this->fields).lastPosition.y = fVar2;
  (this->fields).lastPosition.z = fVar3;
  (this->fields).mininumMovementRequirement = 0.1;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object,unaff_EBP);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  return;
}

