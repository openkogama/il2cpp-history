
/* Void Play() */

void Assembly-CSharp.dll::ObjectParticleEmitterScript::ObjectParticleEmitterScript_Play
               (ObjectParticleEmitterScript *this,MethodInfo *method)

{
  pOVar1 = this;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pPVar2 = (this->fields).particleSystemPrefab;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)pPVar2,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar3 == 0) {
    if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Debug);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
              ((Object *)StringLiteral_ParticleSystemPrefab_is_null,(MethodInfo *)0x0);
    return;
  }
  pSVar4 = (SentryGunBeam *)(this->fields).particleSystemPrefab;
  pTVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                     ((Component_1 *)this,(MethodInfo *)0x0);
  if (pTVar5 != (Transform *)0x0) {
    pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                       ((Vector3 *)&stack0xffffffe8,pTVar5,(MethodInfo *)0x0);
    fVar7 = pVVar6->z;
    pTVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                       ((Component_1 *)this,(MethodInfo *)0x0);
    if (pTVar5 != (Transform *)0x0) {
      __return_storage_ptr__ = (Quaternion *)&stack0xffffffe4;
      pQVar8 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                         (__return_storage_ptr__,pTVar5,(MethodInfo *)0x0);
      fVar9 = pQVar8->x;
      fVar10 = pQVar8->y;
      fVar11 = pQVar8->z;
      this = (ObjectParticleEmitterScript *)pQVar8->w;
      if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
        func_?();
      }
      fVar12 = fVar11;
      position.y = fVar9;
      position.x = (float)__return_storage_ptr__;
      position.z = fVar7;
      fVar13 = fVar10;
      fVar14 = fVar9;
      rotation._0_8_ = CONCAT44(fVar13,fVar14);
      rotation = (Quaternion)CONCAT88(uVar15,rotation._0_8_);
      pSVar4 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_161
                         (pSVar4,position,rotation,
                          UnityEngine__ParticleSystem_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::ParticleSystem>_UnityEngine__ParticleSystem__UnityEngine__Vector3__UnityEngine__Quaternion_
                         );
      (pOVar1->fields).particleSystemInstance = (ParticleSystem *)pSVar4;
      bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                        ((Object_1 *)pSVar4,(Object_1 *)0x0,(MethodInfo *)0x0);
      if (bVar3 == 0) {
        if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
          func_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
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
  pcVar16 = (code *)swi(3);
  (*pcVar16)();
  return;
}

