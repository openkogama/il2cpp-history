
/* Void ApplyProximityDamage(Vector3, Single, Single, Single, Boolean, ExplosionEvent,
   HashSet`1[System.Int32]) */

void Assembly-CSharp.dll::SharedWorldObjectGameplayFunctions+Explosion::
     SharedWorldObjectGameplayFunctions_Explosion_ApplyProximityDamage
               (Vector3 *position,float damageValue,float damageRadius,float shockwaveAcceleration,
               bool local,ExplosionEvent *explosionEvent,HashSet_1_System_Int32_ *ignoreIDs,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CollisionDetectionGlobalBuffers);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__SharedWorldObjectGameplayFunctions__Explosion);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__HashSet<int>__Contains_int_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Physics);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CollisionDetectionGlobalBuffers->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__CollisionDetectionGlobalBuffers);
  }
  pCVar1 = TypeInfo__CollisionDetectionGlobalBuffers->static_fields->colliderBuffer;
  if (*(int *)&(TypeInfo__SharedWorldObjectGameplayFunctions__Explosion->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__SharedWorldObjectGameplayFunctions__Explosion);
  }
  iVar2 = TypeInfo__SharedWorldObjectGameplayFunctions__Explosion->static_fields->layerMask;
  if (*(int *)&(TypeInfo__UnityEngine__Physics->_1).field_0x1c == 0) {
    FUN_?();
  }
  VStack_3.x = position->x;
  VStack_3.y = position->y;
  VStack_3.z = position->z;
  pMVar4 = (MethodInfo *)0x0;
  iVar2 = UnityEngine.PhysicsModule.dll::UnityEngine::Physics::Physics_OverlapSphereNonAlloc_1
                    (&VStack_3,damageRadius,pCVar1,iVar2,(MethodInfo *)0x0);
  fVar5 = _UNK_?;
  uVar6 = 0;
  if (0 < iVar2) {
    lVar7 = 0x20;
    lVar8 = 0;
    do {
      if (*(int *)&(TypeInfo__CollisionDetectionGlobalBuffers->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__CollisionDetectionGlobalBuffers);
      }
      pCVar1 = TypeInfo__CollisionDetectionGlobalBuffers->static_fields->colliderBuffer;
      if (pCVar1 == (Collider__Array *)0x0) {
DAT_?:
        FUN_?();
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      if ((uint)pCVar1->max_length <= uVar6) {
        FUN_?();
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      this = *(Collider **)((longlong)pCVar1->vector + lVar7 + -0x20);
      if (this == (Collider *)0x0) goto DAT_?;
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Component>_UnityEngine__Component_
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pvVar10 = (this->fields)._._.m_CachedPtr;
      if (pvVar10 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)this,(MethodInfo *)0x0);
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      pcVar9 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar9 = (code *)FUN_?(&UNK_?), pcVar9 == (code *)0x0)) {
        uVar11 = func_?(&UNK_?);
        FUN_?(uVar11,0);
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      pcRam_? = pcVar9;
      pvVar10 = (void *)(*pcRam_?)(pvVar10);
      pTVar12 = (Transform *)
                UnityEngine.CoreModule.dll::UnityEngine::Bindings::Unmarshal::
                Unmarshal_UnmarshalUnityObject
                          (pvVar10,
                           UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__
                          );
      this_01 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetMVObject
                          (pTVar12,(MethodInfo *)0x0);
      if (this_01 != (MVWorldObjectClient *)0x0) {
        if (ignoreIDs == (HashSet_1_System_Int32_ *)0x0) goto DAT_?;
        bVar13 = System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32Enum]::
                HashSet_1_System_Int32Enum__Contains
                          ((HashSet_1_System_Int32Enum_ *)ignoreIDs,(this_01->fields)._.id,
                           MethodInfo__System__Collections__Generic__HashSet<int>__Contains_int_);
        if (bVar13 == 0) {
          if (((this_01->fields)._.type == 8) && (explosionEvent != (ExplosionEvent *)0x0)) {
            pMVar14 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
            if (local == 0) {
              if (((pMVar14 == (MVNetworkGame *)0x0) ||
                  (pWVar15 = (pMVar14->fields).worldNetwork, pWVar15 == (WorldNetwork *)0x0)) ||
                 (pRVar16 = (RuntimeEventManager *)(pWVar15->fields)._.runtimeEventManagerNetwork,
                 pRVar16 == (RuntimeEventManager *)0x0)) goto DAT_?;
              RuntimeEventManager::RuntimeEventManager_SendRuntimeEvent
                        (pRVar16,explosionEvent,(MethodInfo *)0x0);
            }
            else {
              if ((pMVar14 == (MVNetworkGame *)0x0) ||
                 (pWVar15 = (pMVar14->fields).worldNetwork, pWVar15 == (WorldNetwork *)0x0))
              goto DAT_?;
              if ((pWVar15->fields)._.runtimeEventManagerNetwork != (RuntimeEventManagerNetwork *)0x0
                 ) {
                pMVar14 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
                if (((pMVar14 == (MVNetworkGame *)0x0) ||
                    (pWVar15 = (pMVar14->fields).worldNetwork, pWVar15 == (WorldNetwork *)0x0)) ||
                   (pRVar16 = (RuntimeEventManager *)(pWVar15->fields)._.runtimeEventManagerNetwork,
                   pRVar16 == (RuntimeEventManager *)0x0)) goto DAT_?;
                RuntimeEventManager::RuntimeEventManager_HandleEvent_1
                          (pRVar16,explosionEvent,(MethodInfo *)0x0);
              }
            }
          }
          VStack_3.x = position->x;
          VStack_3.y = position->y;
          VStack_3.z = position->z;
          VStack_17._0_8_ = VStack_3._0_8_;
          VStack_17.z = VStack_3.z;
          pVVar18 = UnityEngine.PhysicsModule.dll::UnityEngine::Collider::
                    Collider_ClosestPointOnBounds(&VStack_19,this,&VStack_3,(MethodInfo *)0x0);
          uStack_20._0_4_ = pVVar18->x;
          uStack_20._4_4_ = pVVar18->y;
          fStack_21 = pVVar18->z;
          fVar22 = (float)FUN_?(&uStack_20);
          if (fVar22 <= damageRadius) {
            pIVar23 = MVWorldObjectClient::MVWorldObjectClient_get_InteractionDataHandlerBase
                                (this_01,(MethodInfo *)0x0);
            if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
              FUN_?();
            }
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__UnityEngine__Object);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
              FUN_?();
            }
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__UnityEngine__Object);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            if (pIVar23 != (InteractionDataHandlerBase *)0x0) {
              if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
                FUN_?();
              }
              if ((pIVar23->fields)._._._._._.m_CachedPtr != (void *)0x0) {
                this_00 = (this_01->fields).gameObject;
                fVar22 = fVar5 - fVar22 / damageRadius;
                if ((this_00 == (GameObject *)0x0) ||
                   (pTVar12 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                              GameObject_get_transform(this_00,(MethodInfo *)0x0),
                   pTVar12 == (Transform *)0x0)) goto DAT_?;
                uVar11._0_4_ = position->x;
                uVar11._4_4_ = position->y;
                method_00 = (MethodInfo *)0x0;
                pVVar18 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                                    (&VStack_24,pTVar12,(MethodInfo *)0x0);
                uVar25 = pVVar18->x;
                uVar26 = pVVar18->y;
                VStack_27.z = pVVar18->z - position->z;
                pVVar18 = &VStack_27;
                VStack_27.y = (float)uVar26 - uVar11._4_4_;
                VStack_27.x = (float)uVar25 - (float)uVar11;
                IStack_28._0_8_ = uVar11;
                pVVar29 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                                    (aVStack_30,pVVar18,method_00);
                IStack_28.damage = pVVar29->x;
                IStack_28.impulse.x = pVVar29->y;
                IStack_31.interactionType = 0;
                IStack_31.playerKilledByType = 0;
                IStack_31._18_2_ = 0;
                VStack_32.z = pVVar29->z * fVar22 * shockwaveAcceleration;
                VStack_32.y = IStack_28.impulse.x * fVar22 * shockwaveAcceleration;
                VStack_32.x = IStack_28.damage * fVar22 * shockwaveAcceleration;
                IStack_31.damage = 0.0;
                IStack_31.impulse.x = 0.0;
                IStack_31.impulse.y = 0.0;
                IStack_31.impulse.z = 0.0;
                MVWorldObject.dll::MV::WorldObject::InteractionData::InteractionData__ctor_5
                          (&IStack_31,
                           (InteractionPackageType__Enum)
                           CONCAT71((int7)((ulonglong)pVVar18 >> 8),0xd),fVar22 * damageValue,
                           &VStack_32,
                           (PlayerKilledByType__Enum)CONCAT71((int7)((ulonglong)pMVar4 >> 8),8),
                           (MethodInfo *)0x0);
                IStack_28.interactionType = IStack_31.interactionType;
                IStack_28.playerKilledByType = IStack_31.playerKilledByType;
                IStack_28._18_2_ = IStack_31._18_2_;
                pMVar4 = (pIVar23->klass->vtable).__unknown_1.method;
                IStack_28.damage = IStack_31.damage;
                IStack_28.impulse.x = IStack_31.impulse.x;
                IStack_28.impulse.y = IStack_31.impulse.y;
                IStack_28.impulse.z = IStack_31.impulse.z;
                (*(pIVar23->klass->vtable).__unknown_1.methodPtr)
                          (pIVar23,0,&IStack_28,(ulonglong)local,pMVar4);
              }
            }
          }
        }
      }
      uVar6 = uVar6 + 1;
      lVar8 = lVar8 + 1;
      lVar7 = lVar7 + 8;
    } while (lVar8 < iVar2);
  }
  return;
}


/* Void Explode(ParticleSystem, Vector3, Single, Single, Single, Boolean, ExplosionEvent,
   HashSet`1[System.Int32]) */

void Assembly-CSharp.dll::SharedWorldObjectGameplayFunctions+Explosion::
     SharedWorldObjectGameplayFunctions_Explosion_Explode
               (ParticleSystem *particlePrefab,Vector3 *position,float damageValue,
               float damageRadius,float shockwaveAcceleration,bool local,
               ExplosionEvent *explosionEvent,HashSet_1_System_Int32_ *ignoreIDs,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__SharedWorldObjectGameplayFunctions__Explosion);
    LOCK();
    UNLOCK();
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
  VStack_1.x = position->x;
  VStack_1.y = position->y;
  VStack_1.z = position->z;
  alStack_2[0] = 0;
  bVar3 = SharedWorldObjectGameplayFunctions::SharedWorldObjectGameplayFunctions_DoParticleEffect
                    (&VStack_1,(MethodInfo *)0x0);
  if (bVar3 != 0) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Quaternion);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pQVar4 = TypeInfo__UnityEngine__Quaternion->static_fields;
    uVar5._0_4_ = (pQVar4->identityQuaternion).x;
    uVar5._4_4_ = (pQVar4->identityQuaternion).y;
    uVar6._0_4_ = (pQVar4->identityQuaternion).z;
    uVar6._4_4_ = (pQVar4->identityQuaternion).w;
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    VStack_1.x = position->x;
    VStack_1.y = position->y;
    VStack_1.z = position->z;
    uStack_7 = uVar5;
    uStack_8 = uVar6;
    alStackX_10[0] = FUN_?(particlePrefab,&VStack_1,&uStack_7);
    if (alStackX_10[0] == 0) {
      FUN_?();
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    if (iRam_? != 0) {
      uVar10 = (uint)((ulonglong)alStackX_10 >> 0xc);
      uVar11 = (ulonglong)((uVar10 & 0x1fffff) >> 6);
      do {
        uVar12 = *(ulonglong *)(uVar11 * 8 + 0xADDR);
        puVar13 = (ulonglong *)(uVar11 * 8 + 0xADDR);
        LOCK();
        bVar14 = uVar12 == *puVar13;
        if (bVar14) {
          *puVar13 = uVar12 | 1L << (uVar10 & 0x3f);
        }
        UNLOCK();
      } while (!bVar14);
    }
    pcVar9 = pcRam_?;
    alStack_2[0] = alStackX_10[0];
    if ((pcRam_? == (code *)0x0) &&
       (pcVar9 = (code *)FUN_?(&UNK_?), pcVar9 == (code *)0x0)) {
      uVar5 = func_?(&UNK_?);
      FUN_?(uVar5,0);
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    pcRam_? = pcVar9;
    (*pcRam_?)(alStack_2,damageRadius);
  }
  if (*(int *)&(TypeInfo__SharedWorldObjectGameplayFunctions__Explosion->_1).field_0x1c == 0) {
    FUN_?();
  }
  VStack_1.z = position->z;
  VStack_1.x = position->x;
  VStack_1.y = position->y;
  SharedWorldObjectGameplayFunctions_Explosion_ApplyProximityDamage
            (&VStack_1,damageValue,damageRadius,shockwaveAcceleration,local,explosionEvent,
             ignoreIDs,(MethodInfo *)0x0);
  return;
}


/* SharedWorldObjectGameplayFunctions+Explosion() */

void Assembly-CSharp.dll::SharedWorldObjectGameplayFunctions+Explosion::
     SharedWorldObjectGameplayFunctions_Explosion__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__SharedWorldObjectGameplayFunctions__Explosion);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Logic);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uVar1 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                    (StringLiteral_Logic,(MethodInfo *)0x0);
  TypeInfo__SharedWorldObjectGameplayFunctions__Explosion->static_fields->layerMask =
       ~(1 << (uVar1 & 0x1f)) & 0xfffffffb;
  return;
}

