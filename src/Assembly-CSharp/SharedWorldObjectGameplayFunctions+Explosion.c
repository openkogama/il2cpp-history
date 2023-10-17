
/* Void ApplyProximityDamage(Vector3, Single, Single, Single, Boolean, ExplosionEvent,
   HashSet`1[System.Int32]) */

void Assembly-CSharp.dll::SharedWorldObjectGameplayFunctions+Explosion::
     SharedWorldObjectGameplayFunctions_Explosion_ApplyProximityDamage
               (Vector3 position,float damageValue,float damageRadius,float shockwaveAcceleration,
               bool local,ExplosionEvent *explosionEvent,HashSet_1_System_Int32_ *ignoreIDs,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    func_?();
    func_?();
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__CollisionDetectionGlobalBuffers->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  pCVar1 = TypeInfo__CollisionDetectionGlobalBuffers->static_fields->colliderBuffer;
  if ((TypeInfo__SharedWorldObjectGameplayFunctions__Explosion->_1).cctor_finished_or_no_cctor == 0)
  {
    func_?();
  }
  iVar2 = UnityEngine.PhysicsModule.dll::UnityEngine::Physics::Physics_OverlapSphereNonAlloc_1
                    (position,damageRadius,pCVar1,
                     TypeInfo__SharedWorldObjectGameplayFunctions__Explosion->static_fields->
                     layerMask,(MethodInfo *)0x0);
  uVar3 = 0;
  if (0 < iVar2) {
    iStack_4 = 0x10;
    do {
      if ((TypeInfo__CollisionDetectionGlobalBuffers->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pCVar1 = TypeInfo__CollisionDetectionGlobalBuffers->static_fields->colliderBuffer;
      if (pCVar1 == (Collider__Array *)0x0) {
code_?:
        func_?();
code_?:
        func_?();
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if (pCVar1->max_length <= uVar3) goto code_?;
      this = *(Collider **)((int)pCVar1->vector + iStack_4 + -0x10);
      if (this == (Collider *)0x0) goto code_?;
      pTVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                         ((Component *)this,(MethodInfo *)0x0);
      this_01 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetMVObject
                          (pTVar6,(MethodInfo *)0x0);
      if (this_01 != (MVWorldObjectClient *)0x0) {
        if (ignoreIDs == (HashSet_1_System_Int32_ *)0x0) goto code_?;
        bVar7 = System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32]::
                HashSet_1_System_Int32__Contains
                          (ignoreIDs,(this_01->fields)._.id,
                           MethodInfo__System__Collections__Generic__HashSet<int>__Contains_int_);
        if (bVar7 == 0) {
          if (((this_01->fields)._.type == 8) && (explosionEvent != (ExplosionEvent *)0x0)) {
            pMVar8 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
            if (local == 0) {
              if (((pMVar8 != (MVNetworkGame *)0x0) &&
                  (pWVar9 = (pMVar8->fields).worldNetwork, pWVar9 != (WorldNetwork *)0x0)) &&
                 (pRVar10 = (RuntimeEventManager *)(pWVar9->fields)._.runtimeEventManagerNetwork,
                 pRVar10 != (RuntimeEventManager *)0x0)) {
                RuntimeEventManager::RuntimeEventManager_SendRuntimeEvent
                          (pRVar10,explosionEvent,(MethodInfo *)0x0);
                goto code_?;
              }
            }
            else if ((pMVar8 != (MVNetworkGame *)0x0) &&
                    (pWVar9 = (pMVar8->fields).worldNetwork, pWVar9 != (WorldNetwork *)0x0)) {
              if ((pWVar9->fields)._.runtimeEventManagerNetwork != (RuntimeEventManagerNetwork *)0x0
                 ) {
                pMVar8 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
                if (((pMVar8 == (MVNetworkGame *)0x0) ||
                    (pWVar9 = (pMVar8->fields).worldNetwork, pWVar9 == (WorldNetwork *)0x0)) ||
                   (pRVar10 = (RuntimeEventManager *)(pWVar9->fields)._.runtimeEventManagerNetwork,
                   pRVar10 == (RuntimeEventManager *)0x0)) goto code_?;
                RuntimeEventManager::RuntimeEventManager_HandleEvent_1
                          (pRVar10,explosionEvent,(MethodInfo *)0x0);
              }
              goto code_?;
            }
            goto code_?;
          }
code_?:
          UnityEngine.PhysicsModule.dll::UnityEngine::Collider::Collider_ClosestPointOnBounds
                    ((Vector3 *)&stack0xffffffa8,this,position,(MethodInfo *)0x0);
          fVar11 = (float10)func_?();
          if ((float)fVar11 <= damageRadius) {
            this_02 = MVWorldObjectClient::MVWorldObjectClient_get_InteractionDataHandlerBase
                                (this_01,(MethodInfo *)0x0);
            if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            bVar7 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                              ((Object_1 *)this_02,(Object_1 *)0x0,(MethodInfo *)0x0);
            if (bVar7 == 0) {
              this_00 = (this_01->fields).gameObject;
              fVar12 = _UNK_? - (float)fVar11 / damageRadius;
              if ((this_00 != (GameObject *)0x0) &&
                 (pTVar6 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                           GameObject_get_transform(this_00,(MethodInfo *)0x0),
                 pTVar6 != (Transform *)0x0)) {
                UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                          ((Vector3 *)&puStack_13,pTVar6,(MethodInfo *)0x0);
                puVar14 = (undefined8 *)func_?();
                fStack_15 = (float)*puVar14;
                fStack_16 = (float)((ulonglong)*puVar14 >> 0x20);
                impulse.y = fStack_16 * fVar12 * shockwaveAcceleration;
                impulse.x = fStack_15 * fVar12 * shockwaveAcceleration;
                impulse.z = *(float *)(puVar14 + 1) * fVar12 * shockwaveAcceleration;
                pIVar17 = ProximityDamageAndImpulse::ProximityDamageAndImpulse_Create
                                    ((InteractionData *)&stack0xffffff7c,fVar12 * damageValue,
                                     impulse,PlayerKilledByType__Enum_Explosive,(MethodInfo *)0x0);
                if (this_02 != (InteractionDataHandlerBase *)0x0) {
                  InteractionDataHandlerBase::InteractionDataHandlerBase_HandleInteraction
                            (this_02,*pIVar17,local,(MethodInfo *)0x0);
                  goto code_?;
                }
              }
              goto code_?;
            }
          }
        }
      }
code_?:
      uVar3 = uVar3 + 1;
      iStack_4 = iStack_4 + 4;
    } while ((int)uVar3 < iVar2);
  }
  return;
}


/* Void Explode(ParticleSystem, Vector3, Single, Single, Single, Boolean, ExplosionEvent,
   HashSet`1[System.Int32]) */

void Assembly-CSharp.dll::SharedWorldObjectGameplayFunctions+Explosion::
     SharedWorldObjectGameplayFunctions_Explosion_Explode
               (ParticleSystem *particlePrefab,Vector3 position,float damageValue,float damageRadius
               ,float shockwaveAcceleration,bool local,ExplosionEvent *explosionEvent,
               HashSet_1_System_Int32_ *ignoreIDs,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__SharedWorldObjectGameplayFunctions__Explosion);
    func_?(&
                    UnityEngine__ParticleSystem_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::ParticleSystem>_UnityEngine__ParticleSystem__UnityEngine__Vector3__UnityEngine__Quaternion_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  PStack_1.m_ParticleSystem = (ParticleSystem *)0x0;
  bVar2 = SharedWorldObjectGameplayFunctions::SharedWorldObjectGameplayFunctions_DoParticleEffect
                    (position,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Quaternion);
      cRam_? = '\x01';
    }
    pQVar3 = TypeInfo__UnityEngine__Quaternion->static_fields;
    fVar4 = (pQVar3->identityQuaternion).x;
    puVar5 = (undefined *)(pQVar3->identityQuaternion).y;
    pOVar6 = (Object_1__Class *)(pQVar3->identityQuaternion).z;
    fVar7 = (pQVar3->identityQuaternion).w;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      puVar5 = &UNK_?;
      pOVar6 = TypeInfo__UnityEngine__Object;
      func_?();
    }
    rotation.y = (float)puVar5;
    rotation.x = fVar4;
    rotation.z = (float)pOVar6;
    rotation.w = fVar7;
    this = (ParticleSystem *)
           UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_7
                     ((Object *)particlePrefab,position,rotation,
                      UnityEngine__ParticleSystem_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::ParticleSystem>_UnityEngine__ParticleSystem__UnityEngine__Vector3__UnityEngine__Quaternion_
                     );
    if (this == (ParticleSystem *)0x0) {
      func_?();
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    PStack_1.m_ParticleSystem =
         (ParticleSystem *)
         UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::
         ParticleSystem_get_collision(this,(MethodInfo *)0x0);
    UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem+MainModule::
    ParticleSystem_MainModule_set_startSizeMultiplier_Injected
              (&PStack_1,damageRadius,(MethodInfo *)0x0);
  }
  if ((TypeInfo__SharedWorldObjectGameplayFunctions__Explosion->_1).cctor_finished_or_no_cctor == 0)
  {
    func_?(TypeInfo__SharedWorldObjectGameplayFunctions__Explosion);
  }
  SharedWorldObjectGameplayFunctions_Explosion_ApplyProximityDamage
            (position,damageValue,damageRadius,shockwaveAcceleration,local,explosionEvent,ignoreIDs,
             (MethodInfo *)0x0);
  return;
}


/* SharedWorldObjectGameplayFunctions+Explosion() */

void Assembly-CSharp.dll::SharedWorldObjectGameplayFunctions+Explosion::
     SharedWorldObjectGameplayFunctions_Explosion__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__SharedWorldObjectGameplayFunctions__Explosion);
    func_?(&StringLiteral_Logic);
    cRam_? = '\x01';
  }
  uVar1 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                    (StringLiteral_Logic,(MethodInfo *)0x0);
  TypeInfo__SharedWorldObjectGameplayFunctions__Explosion->static_fields->layerMask =
       ~(1 << (uVar1 & 0x1f)) & 0xfffffffb;
  return;
}

