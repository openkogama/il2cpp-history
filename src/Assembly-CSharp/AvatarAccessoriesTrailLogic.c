
/* Void Update() */

void Assembly-CSharp.dll::AvatarAccessoriesTrailLogic::AvatarAccessoriesTrailLogic_Update
               (AvatarAccessoriesTrailLogic *this,MethodInfo *method)

{
  pPVar1 = (this->fields).particles;
  if (pPVar1 != (ParticleSystem *)0x0) {
    UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::ParticleSystem_get_collision
              (pPVar1,(MethodInfo *)0x0);
    pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                       ((Component *)this,(MethodInfo *)0x0);
    if (pTVar2 != (Transform *)0x0) {
      pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                         ((Vector3 *)&stack0xfffffff8,pTVar2,(MethodInfo *)0x0);
      uVar4 = pVVar3->x;
      uVar5 = pVVar3->y;
      uVar6 = (this->fields).lastPosition.x;
      uVar7 = (this->fields).lastPosition.y;
      fVar8 = (float)uVar4 - (float)uVar6;
      in_stack_9 = (this->fields).lastPosition.z;
      fVar10 = (float)uVar5 - (float)uVar7;
      fVar11 = pVVar3->z - in_stack_9;
      if (cRam_? == '\0') {
        func_?(&TypeInfo__System__Math);
        cRam_? = '\x01';
      }
      if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__System__Math);
      }
      dVar12 = (double)(fVar10 * fVar10 + fVar8 * fVar8 + fVar11 * fVar11);
      if (dVar12 < 0.0) {
        func_?();
      }
      else {
        dVar12 = SQRT(dVar12);
      }
      pfVar13 = &(this->fields).mininumMovementRequirement;
      if ((float)dVar12 < *pfVar13 || (float)dVar12 == *pfVar13) {
        UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem+EmissionModule::
        ParticleSystem_EmissionModule_set_enabled_Injected
                  ((ParticleSystem_EmissionModule *)&stack0xffffffe4,0,(MethodInfo *)0x0);
        return;
      }
      UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem+EmissionModule::
      ParticleSystem_EmissionModule_set_enabled_Injected
                ((ParticleSystem_EmissionModule *)&stack0xffffffe4,1,(MethodInfo *)0x0);
      pPVar1 = (this->fields).particles;
      if (pPVar1 != (ParticleSystem *)0x0) {
        UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::
        ParticleSystem_get_collision(pPVar1,(MethodInfo *)0x0);
        UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem+MainModule::
        ParticleSystem_MainModule_set_startSpeedMultiplier_Injected
                  ((ParticleSystem_MainModule *)&method,0.0,(MethodInfo *)0x0);
        pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                           ((Component *)this,(MethodInfo *)0x0);
        if (pTVar2 != (Transform *)0x0) {
          pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                             ((Vector3 *)&stack0x0000002c,pTVar2,(MethodInfo *)0x0);
          fVar10 = pVVar3->y;
          fVar8 = pVVar3->z;
          (this->fields).lastPosition.x = pVVar3->x;
          (this->fields).lastPosition.y = fVar10;
          (this->fields).lastPosition.z = fVar8;
          return;
        }
      }
    }
  }
  func_?();
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
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

