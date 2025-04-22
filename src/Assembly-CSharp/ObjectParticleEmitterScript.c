
/* Void Play() */

void Assembly-CSharp.dll::ObjectParticleEmitterScript::ObjectParticleEmitterScript_Play
               (ObjectParticleEmitterScript *this,MethodInfo *method)

{
  pOVar1 = this;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    UnityEngine__ParticleSystem_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::ParticleSystem>_UnityEngine__ParticleSystem__UnityEngine__Vector3__UnityEngine__Quaternion_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&StringLiteral_ParticleSystemInstance_is_null);
    func_?(&StringLiteral_ParticleSystemPrefab_is_null);
    cRam_? = '\x01';
  }
  pPVar2 = (this->fields).particleSystemPrefab;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)pPVar2,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar3 == 0) {
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Debug);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
              ((Object *)StringLiteral_ParticleSystemPrefab_is_null,(MethodInfo *)0x0);
    return;
  }
  pPVar2 = (this->fields).particleSystemPrefab;
  pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                     ((Component *)this,(MethodInfo *)0x0);
  if (pTVar4 != (Transform *)0x0) {
    pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                       ((Vector3 *)&stack0xffffffe8,pTVar4,(MethodInfo *)0x0);
    fVar6 = pVVar5->z;
    pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                       ((Component *)this,(MethodInfo *)0x0);
    if (pTVar4 != (Transform *)0x0) {
      __return_storage_ptr__ = (Quaternion *)&stack0xffffffe4;
      pQVar7 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                         (__return_storage_ptr__,pTVar4,(MethodInfo *)0x0);
      fVar8 = pQVar7->x;
      fVar9 = pQVar7->y;
      fVar10 = pQVar7->z;
      this = (ObjectParticleEmitterScript *)pQVar7->w;
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      fVar11 = fVar10;
      position.y = fVar8;
      position.x = (float)__return_storage_ptr__;
      position.z = fVar6;
      fVar12 = fVar9;
      fVar13 = fVar8;
      rotation._0_8_ = CONCAT44(fVar12,fVar13);
      rotation = (Quaternion)CONCAT88(uVar14,rotation._0_8_);
      pPVar2 = (ParticleSystem *)
               UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_7
                         ((Object *)pPVar2,position,rotation,
                          UnityEngine__ParticleSystem_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::ParticleSystem>_UnityEngine__ParticleSystem__UnityEngine__Vector3__UnityEngine__Quaternion_
                         );
      (pOVar1->fields).particleSystemInstance = pPVar2;
      func_?();
      bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                        ((Object_1 *)(pOVar1->fields).particleSystemInstance,(Object_1 *)0x0,
                         (MethodInfo *)0x0);
      if (bVar3 == 0) {
        if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                  ((Object *)StringLiteral_ParticleSystemInstance_is_null,(MethodInfo *)0x0);
        return;
      }
      pPVar2 = (pOVar1->fields).particleSystemInstance;
      if (pPVar2 != (ParticleSystem *)0x0) {
        UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::ParticleSystem_Play_1
                  (pPVar2,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
  return;
}

