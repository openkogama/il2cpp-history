
/* Void ApplyProximityDamage(Vector3, Single, Single, Single, Boolean, ExplosionEvent, HashSet`1[System.Int32]) */

void Assembly-CSharp.dll::SharedWorldObjectGameplayFunctions+Explosion::SharedWorldObjectGameplayFunctions_Explosion_ApplyProximityDamage(Vector3 *position,float damageValue,float damageRadius,float shockwaveAcceleration,bool local,ExplosionEvent *explosionEvent,HashSet_1_System_Int32_ *ignoreIDs,MethodInfo *method)

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
  iVar2 = UnityEngine.PhysicsModule.dll::UnityEngine::Physics::Physics_OverlapSphereNonAlloc_1(&VStack_3,damageRadius,pCVar1,iVar2,(MethodInfo *)0x0);
  uVar5 = 0;
  if (0 < iVar2) {
    lVar6 = 0x20;
    lVar7 = 0;
    do {
      if (*(int *)&(TypeInfo__CollisionDetectionGlobalBuffers->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__CollisionDetectionGlobalBuffers);
      }
      pCVar1 = TypeInfo__CollisionDetectionGlobalBuffers->static_fields->colliderBuffer;
      if (pCVar1 == (Collider__Array *)0x0) {
DAT_?:
        FUN_?();
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      if ((uint)pCVar1->max_length <= uVar5) {
        FUN_?();
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      this = *(Collider **)((longlong)pCVar1->vector + lVar6 + -0x20);
      if (this == (Collider *)0x0) goto DAT_?;
      if (cRam_? == '\0') {
        FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Component>_UnityEngine__Component_);
        LOCK();
        UNLOCK();
        FUN_?(&UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pvVar9 = (this->fields)._._.m_CachedPtr;
      if (pvVar9 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException((Object *)this,(MethodInfo *)0x0);
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pcVar8 = pcRam_?;
      if ((pcRam_? == (code *)0x0) && (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
        uVar10 = func_?(&UNK_?);
        FUN_?(uVar10,0);
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pcRam_? = pcVar8;
      pvVar9 = (void *)(*pcRam_?)(pvVar9);
      pTVar11 = (Transform *)UnityEngine.CoreModule.dll::UnityEngine::Bindings::Unmarshal::Unmarshal_UnmarshalUnityObject(pvVar9,UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__);
      this_01 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetMVObject(pTVar11,(MethodInfo *)0x0);
      if (this_01 != (MVWorldObjectClient *)0x0) {
        if (ignoreIDs == (HashSet_1_System_Int32_ *)0x0) goto DAT_?;
        bVar12 = System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32Enum]::HashSet_1_System_Int32Enum__Contains((HashSet_1_System_Int32Enum_ *)ignoreIDs,(this_01->fields)._.id,MethodInfo__System__Collections__Generic__HashSet<int>__Contains_int_);
        if (bVar12 == 0) {
          if (((this_01->fields)._.type == 8) && (explosionEvent != (ExplosionEvent *)0x0)) {
            pMVar13 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
            if (local == 0) {
              if (((pMVar13 == (MVNetworkGame *)0x0) || (pWVar14 = (pMVar13->fields).worldNetwork, pWVar14 == (WorldNetwork *)0x0)) || (pRVar15 = (RuntimeEventManager *)(pWVar14->fields)._.runtimeEventManagerNetwork, pRVar15 == (RuntimeEventManager *)0x0)) goto DAT_?;
              RuntimeEventManager::RuntimeEventManager_SendRuntimeEvent(pRVar15,explosionEvent,(MethodInfo *)0x0);
            }
            else {
              if ((pMVar13 == (MVNetworkGame *)0x0) || (pWVar14 = (pMVar13->fields).worldNetwork, pWVar14 == (WorldNetwork *)0x0)) goto DAT_?;
              if ((pWVar14->fields)._.runtimeEventManagerNetwork != (RuntimeEventManagerNetwork *)0x0) {
                pMVar13 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
                if (((pMVar13 == (MVNetworkGame *)0x0) || (pWVar14 = (pMVar13->fields).worldNetwork, pWVar14 == (WorldNetwork *)0x0)) || (pRVar15 = (RuntimeEventManager *)(pWVar14->fields)._.runtimeEventManagerNetwork, pRVar15 == (RuntimeEventManager *)0x0)) goto DAT_?;
                RuntimeEventManager::RuntimeEventManager_HandleEvent_1(pRVar15,explosionEvent,(MethodInfo *)0x0);
              }
            }
          }
          VStack_3.x = position->x;
          VStack_3.y = position->y;
          VStack_3.z = position->z;
          VStack_16._0_8_ = VStack_3._0_8_;
          VStack_16.z = VStack_3.z;
          pVVar17 = UnityEngine.PhysicsModule.dll::UnityEngine::Collider::Collider_ClosestPointOnBounds(&VStack_18,this,&VStack_3,(MethodInfo *)0x0);
          uStack_19._0_4_ = pVVar17->x;
          uStack_19._4_4_ = pVVar17->y;
          fStack_20 = pVVar17->z;
          fVar21 = (float)FUN_?(&uStack_19);
          if (fVar21 <= damageRadius) {
            pIVar22 = MVWorldObjectClient::MVWorldObjectClient_get_InteractionDataHandlerBase(this_01,(MethodInfo *)0x0);
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
            if (pIVar22 != (InteractionDataHandlerBase *)0x0) {
              if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
                FUN_?();
              }
              if ((pIVar22->fields)._._._._._.m_CachedPtr != (void *)0x0) {
                this_00 = (this_01->fields).gameObject;
                fVar21 = 1.0 - fVar21 / damageRadius;
                if ((this_00 == (GameObject *)0x0) || (pTVar11 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform(this_00,(MethodInfo *)0x0), pTVar11 == (Transform *)0x0)) goto DAT_?;
                uVar10._0_4_ = position->x;
                uVar10._4_4_ = position->y;
                method_00 = (MethodInfo *)0x0;
                pVVar17 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position(&VStack_23,pTVar11,(MethodInfo *)0x0);
                uVar24 = pVVar17->x;
                uVar25 = pVVar17->y;
                VStack_26.z = pVVar17->z - position->z;
                pVVar17 = &VStack_26;
                VStack_26.y = (float)uVar25 - uVar10._4_4_;
                VStack_26.x = (float)uVar24 - (float)uVar10;
                IStack_27._0_8_ = uVar10;
                pVVar28 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize(aVStack_29,pVVar17,method_00);
                IStack_27.damage = pVVar28->x;
                IStack_27.impulse.x = pVVar28->y;
                IStack_30.interactionType = 0;
                IStack_30.playerKilledByType = 0;
                IStack_30._18_2_ = 0;
                VStack_31.z = pVVar28->z * fVar21 * shockwaveAcceleration;
                VStack_31.y = IStack_27.impulse.x * fVar21 * shockwaveAcceleration;
                VStack_31.x = IStack_27.damage * fVar21 * shockwaveAcceleration;
                IStack_30.damage = 0.0;
                IStack_30.impulse.x = 0.0;
                IStack_30.impulse.y = 0.0;
                IStack_30.impulse.z = 0.0;
                MVWorldObject.dll::MV::WorldObject::InteractionData::InteractionData__ctor_5(&IStack_30,(InteractionPackageType__Enum)CONCAT71((int7)((ulonglong)pVVar17 >> 8),0xd),fVar21 * damageValue,&VStack_31,(PlayerKilledByType__Enum)CONCAT71((int7)((ulonglong)pMVar4 >> 8),8),(MethodInfo *)0x0);
                IStack_27.interactionType = IStack_30.interactionType;
                IStack_27.playerKilledByType = IStack_30.playerKilledByType;
                IStack_27._18_2_ = IStack_30._18_2_;
                pMVar4 = (pIVar22->klass->vtable).__unknown_1.method;
                IStack_27.damage = IStack_30.damage;
                IStack_27.impulse.x = IStack_30.impulse.x;
                IStack_27.impulse.y = IStack_30.impulse.y;
                IStack_27.impulse.z = IStack_30.impulse.z;
                (*(pIVar22->klass->vtable).__unknown_1.methodPtr)(pIVar22,0,&IStack_27,(ulonglong)local,pMVar4);
              }
            }
          }
        }
      }
      uVar5 = uVar5 + 1;
      lVar7 = lVar7 + 1;
      lVar6 = lVar6 + 8;
    } while (lVar7 < iVar2);
  }
  return;
}


/* Void Explode(ParticleSystem, Vector3, Single, Single, Single, Boolean, ExplosionEvent, HashSet`1[System.Int32]) */

void Assembly-CSharp.dll::SharedWorldObjectGameplayFunctions+Explosion::SharedWorldObjectGameplayFunctions_Explosion_Explode(ParticleSystem *particlePrefab,Vector3 *position,float damageValue,float damageRadius,float shockwaveAcceleration,bool local,ExplosionEvent *explosionEvent,HashSet_1_System_Int32_ *ignoreIDs,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__SharedWorldObjectGameplayFunctions__Explosion);
    LOCK();
    UNLOCK();
    FUN_?(&UnityEngine__ParticleSystem_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::ParticleSystem>_UnityEngine__ParticleSystem__UnityEngine__Vector3__UnityEngine__Quaternion_);
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
  bVar3 = SharedWorldObjectGameplayFunctions::SharedWorldObjectGameplayFunctions_DoParticleEffect(&VStack_1,(MethodInfo *)0x0);
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
    if ((pcRam_? == (code *)0x0) && (pcVar9 = (code *)FUN_?(&UNK_?), pcVar9 == (code *)0x0)) {
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
  SharedWorldObjectGameplayFunctions_Explosion_ApplyProximityDamage(&VStack_1,damageValue,damageRadius,shockwaveAcceleration,local,explosionEvent,ignoreIDs,(MethodInfo *)0x0);
  return;
}


/* SharedWorldObjectGameplayFunctions+Explosion() */

void Assembly-CSharp.dll::SharedWorldObjectGameplayFunctions+Explosion::SharedWorldObjectGameplayFunctions_Explosion__cctor(MethodInfo *method)

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
  uVar1 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer(StringLiteral_Logic,(MethodInfo *)0x0);
  TypeInfo__SharedWorldObjectGameplayFunctions__Explosion->static_fields->layerMask = ~(1 << (uVar1 & 0x1f)) & 0xfffffffb;
  return;
}

