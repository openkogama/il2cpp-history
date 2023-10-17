
/* Boolean DoParticleEffect(Vector3) */

bool Assembly-CSharp.dll::SharedWorldObjectGameplayFunctions::
     SharedWorldObjectGameplayFunctions_DoParticleEffect(Vector3 position,MethodInfo *method)

{
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
  if ((pMVar1 != (MainCameraManager *)0x0) &&
     (pCVar2 = (pMVar1->fields).mainCamera, pCVar2 != (Camera *)0x0)) {
    pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                       ((Component *)pCVar2,(MethodInfo *)0x0);
    if (pTVar3 != (Transform *)0x0) {
      pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                          ((Vector3 *)&stack0xffffffe0,pTVar3,(MethodInfo *)0x0);
      uVar5 = pVVar4->x;
      uVar6 = pVVar4->y;
      position.z = position.z - pVVar4->z;
      position.x = position.x - (float)uVar5;
      position.y = position.y - (float)uVar6;
      UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize_1
                (&position,(MethodInfo *)0x0);
      pMVar1 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
      if ((pMVar1 != (MainCameraManager *)0x0) &&
         (pCVar2 = (pMVar1->fields).mainCamera, pCVar2 != (Camera *)0x0)) {
        pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                           ((Component *)pCVar2,(MethodInfo *)0x0);
        if (pTVar3 != (Transform *)0x0) {
          position.x = 0.0;
          pQVar7 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                              ((Quaternion *)&stack0xffffffdc,pTVar3,(MethodInfo *)0x0);
          fVar8 = pQVar7->x;
          fVar9 = pQVar7->y;
          fVar10 = pQVar7->z;
          fVar11 = pQVar7->w;
          if (cRam_? == '\0') {
            position.z = (float)&UNK_?;
            func_?();
            cRam_? = '\x01';
          }
          rotation.y = fVar9;
          rotation.x = fVar8;
          rotation.z = fVar10;
          rotation.w = fVar11;
          pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                              ((Vector3 *)&stack0xffffffe0,rotation,
                               TypeInfo__UnityEngine__Vector3->static_fields->forwardVector,
                               (MethodInfo *)0x0);
          uVar12 = pVVar4->x;
          uVar13 = pVVar4->y;
          if ((float)uVar13 * position.y + (float)uVar12 * position.x + pVVar4->z * position.z <=
              _UNK_?) {
            return 0;
          }
          pMVar1 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager
                             ((MethodInfo *)0x0);
          if ((pMVar1 != (MainCameraManager *)0x0) &&
             (pCVar2 = (pMVar1->fields).mainCamera, pCVar2 != (Camera *)0x0)) {
            position.z = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_farClipPlane
                                   (pCVar2,(MethodInfo *)0x0);
            pMVar1 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager
                               ((MethodInfo *)0x0);
            if ((pMVar1 != (MainCameraManager *)0x0) &&
               (pCVar2 = (pMVar1->fields).mainCamera, pCVar2 != (Camera *)0x0)) {
              fVar8 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_farClipPlane
                                 (pCVar2,(MethodInfo *)0x0);
              return (float)pCVar2 < fVar8 * position.z;
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar14 = (code *)swi(3);
  bVar15 = (*pcVar14)();
  return bVar15;
}


/* Void DustEfffect(ParticleSystem, Vector3, Single) */

void Assembly-CSharp.dll::SharedWorldObjectGameplayFunctions::
     SharedWorldObjectGameplayFunctions_DustEfffect
               (ParticleSystem *particlePrefab,Vector3 position,float radius,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    UnityEngine__ParticleSystem_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::ParticleSystem>_UnityEngine__ParticleSystem__UnityEngine__Vector3__UnityEngine__Quaternion_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  bVar1 = SharedWorldObjectGameplayFunctions_DoParticleEffect(position,(MethodInfo *)0x0);
  if (bVar1 != 0) {
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Quaternion);
      cRam_? = '\x01';
    }
    pQVar2 = TypeInfo__UnityEngine__Quaternion->static_fields;
    fVar3 = (pQVar2->identityQuaternion).x;
    puVar4 = (undefined *)(pQVar2->identityQuaternion).y;
    pOVar5 = (Object_1__Class *)(pQVar2->identityQuaternion).z;
    fVar6 = (pQVar2->identityQuaternion).w;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      puVar4 = &UNK_?;
      pOVar5 = TypeInfo__UnityEngine__Object;
      func_?();
    }
    rotation.y = (float)puVar4;
    rotation.x = fVar3;
    rotation.z = (float)pOVar5;
    rotation.w = fVar6;
    this = (ParticleSystem *)
           UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_7
                     ((Object *)particlePrefab,position,rotation,
                      UnityEngine__ParticleSystem_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::ParticleSystem>_UnityEngine__ParticleSystem__UnityEngine__Vector3__UnityEngine__Quaternion_
                     );
    if (this == (ParticleSystem *)0x0) {
      func_?();
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    PStack_8.m_ParticleSystem =
         (ParticleSystem *)
         UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::
         ParticleSystem_get_collision(this,(MethodInfo *)0x0);
    UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem+MainModule::
    ParticleSystem_MainModule_set_startSizeMultiplier_Injected(&PStack_8,0.0,(MethodInfo *)0x0);
  }
  return;
}

