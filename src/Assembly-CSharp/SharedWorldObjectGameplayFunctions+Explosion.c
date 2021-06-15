
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
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__CollisionDetectionGlobalBuffers->vtable).Equals.methodPtr & 0x2000000) != 0
      ) && ((TypeInfo__CollisionDetectionGlobalBuffers->_1).cctor_started == 0)) {
    func_?();
  }
  results = TypeInfo__CollisionDetectionGlobalBuffers->static_fields->colliderBuffer;
  if ((((uint)(TypeInfo__SharedWorldObjectGameplayFunctions__Explosion->vtable).Equals.methodPtr &
       0x2000000) != 0) &&
     ((TypeInfo__SharedWorldObjectGameplayFunctions__Explosion->_1).cctor_started == 0)) {
    func_?();
  }
  puVar1 = (undefined *)
           UnityEngine.PhysicsModule.dll::UnityEngine::Physics::Physics_OverlapSphereNonAlloc_1
                     (position,damageRadius,results,
                      TypeInfo__SharedWorldObjectGameplayFunctions__Explosion->static_fields->
                      layerMask,(MethodInfo *)0x0);
  iVar2 = 0;
  if (0 < (int)puVar1) {
    do {
      if ((((uint)(TypeInfo__CollisionDetectionGlobalBuffers->vtable).Equals.methodPtr & 0x2000000)
           != 0) && ((TypeInfo__CollisionDetectionGlobalBuffers->_1).cctor_started == 0)) {
        func_?();
      }
      if ((TypeInfo__CollisionDetectionGlobalBuffers->static_fields->colliderBuffer ==
           (Collider__Array *)0x0) ||
         (this = (Collider *)func_?(), this == (Collider *)0x0)) goto code_?;
      pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                         ((Component_1 *)this,(MethodInfo *)0x0);
      this_00 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetMVObject
                          (pTVar3,(MethodInfo *)0x0);
      if (this_00 != (MVWorldObjectClient *)0x0) {
        item = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
               Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)this_00,(MethodInfo *)0x0)
        ;
        if (ignoreIDs == (HashSet_1_System_Int32_ *)0x0) goto code_?;
        bVar4 = System.Core.dll::System::Collections::Generic::HashSet`1[GoogleMobileAds::Api::
                NativeAdType]::HashSet_1_GoogleMobileAds_Api_NativeAdType__Contains
                          ((HashSet_1_GoogleMobileAds_Api_NativeAdType_ *)ignoreIDs,
                           (NativeAdType__Enum)item,
                           MethodInfo__System__Collections__Generic__HashSet<int>__Contains_int_);
        if (bVar4 == 0) {
          pOVar5 = System.Core.dll::System::Linq::
                   Enumerable+<CreateGroupByIterator>c__Iterator5`2[System::Object,System::Object]::
                   Enumerable_CreateGroupByIterator_c_Iterator5_2_System_Object_System_Object__System_Collections_IEnumerator_get_Current
                             ((Enumerable_CreateGroupByIterator_c_Iterator5_2_System_Object_System_Object_
                               *)this_00,(MethodInfo *)0x0);
          if ((pOVar5 == (Object *)0x8) && (explosionEvent != (ExplosionEvent *)0x0)) {
            if (local == 0) {
              if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) !=
                   0) && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
                VStack_6.x = (float)TypeInfo__MVGameControllerBase;
                func_?();
              }
              pMVar7 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
              if (((pMVar7 == (MVNetworkGame *)0x0) ||
                  (pSVar8 = (SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
                             *)CloudyTheme::CloudyTheme_get_Identifier
                                         ((CloudyTheme *)pMVar7,(MethodInfo *)0x0),
                  pSVar8 == (SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
                             *)0x0)) ||
                 (pRVar9 = (RuntimeEventManager *)
                           System.dll::System::Collections::Generic::
                           SortedList`2[TKey,TValue]+ListValues[TKey,TValue]+GetEnumerator>c__Iterator3[System
                           ::Single,System::Object]::
                           SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object__System_Collections_IEnumerator_get_Current
                                     (pSVar8,(MethodInfo *)0x0),
                 pRVar9 == (RuntimeEventManager *)0x0)) goto code_?;
              RuntimeEventManager::RuntimeEventManager_SendRuntimeEvent
                        (pRVar9,explosionEvent,(MethodInfo *)0x0);
            }
            else {
              if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) !=
                   0) && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
                VStack_6.x = (float)TypeInfo__MVGameControllerBase;
                func_?();
              }
              pMVar7 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
              if ((pMVar7 == (MVNetworkGame *)0x0) ||
                 (pSVar8 = (SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
                            *)CloudyTheme::CloudyTheme_get_Identifier
                                        ((CloudyTheme *)pMVar7,(MethodInfo *)0x0),
                 pSVar8 == (SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
                            *)0x0)) goto code_?;
              pOVar5 = System.dll::System::Collections::Generic::
                       SortedList`2[TKey,TValue]+ListValues[TKey,TValue]+GetEnumerator>c__Iterator3[System
                       ::Single,System::Object]::
                       SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object__System_Collections_IEnumerator_get_Current
                                 (pSVar8,(MethodInfo *)0x0);
              if (pOVar5 != (Object *)0x0) {
                if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000)
                     != 0) && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
                  func_?();
                }
                pMVar7 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
                if (((pMVar7 == (MVNetworkGame *)0x0) ||
                    (pSVar8 = (SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
                               *)CloudyTheme::CloudyTheme_get_Identifier
                                           ((CloudyTheme *)pMVar7,(MethodInfo *)0x0),
                    pSVar8 == (SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
                               *)0x0)) ||
                   (pRVar9 = (RuntimeEventManager *)
                             System.dll::System::Collections::Generic::
                             SortedList`2[TKey,TValue]+ListValues[TKey,TValue]+GetEnumerator>c__Iterator3[System
                             ::Single,System::Object]::
                             SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object__System_Collections_IEnumerator_get_Current
                                       (pSVar8,(MethodInfo *)0x0),
                   pRVar9 == (RuntimeEventManager *)0x0)) goto code_?;
                RuntimeEventManager::RuntimeEventManager_ExecuteRuntimeEventLocal
                          (pRVar9,explosionEvent,(MethodInfo *)0x0);
              }
            }
          }
          pVVar10 = UnityEngine.PhysicsModule.dll::UnityEngine::Collider::
                   Collider_ClosestPointOnBounds
                             ((Vector3 *)&stack0xffffffcc,this,position,(MethodInfo *)0x0);
          uVar11._0_4_ = pVVar10->x;
          uVar11._4_4_ = pVVar10->y;
          fVar12 = pVVar10->z;
          if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0)
             && ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
            func_?();
          }
          a.z = fVar12;
          a.x = (float)(int)uVar11;
          a.y = (float)(int)((ulonglong)uVar11 >> 0x20);
          fVar12 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Distance
                             (a,position,(MethodInfo *)0x0);
          if (fVar12 <= damageRadius) {
            this_01 = MVWorldObjectClient::MVWorldObjectClient_get_InteractionDataHandlerBase
                                (this_00,(MethodInfo *)0x0);
            if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0)
               && ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
              func_?();
            }
            bVar4 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                              ((Object_1 *)this_01,(Object_1 *)0x0,(MethodInfo *)0x0);
            if (bVar4 == 0) {
              this_02 = DayNightCycle::DayNightCycle_get_CurrentMoonParam
                                  ((DayNightCycle *)this_00,(MethodInfo *)0x0);
              if ((this_02 == (CelestialParam *)0x0) ||
                 (pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                           GameObject_get_transform((GameObject *)this_02,(MethodInfo *)0x0),
                 pTVar3 == (Transform *)0x0)) {
code_?:
                func_?();
                pcVar13 = (code *)swi(3);
                (*pcVar13)();
                return;
              }
              pVVar10 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                                 ((Vector3 *)&puStack_14,pTVar3,(MethodInfo *)0x0);
              uVar15._0_4_ = pVVar10->x;
              uVar15._4_4_ = pVVar10->y;
              fVar12 = pVVar10->z;
              if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) !=
                   0) && ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
                func_?();
              }
              a_00.z = fVar12;
              a_00.x = (float)(int)uVar15;
              a_00.y = (float)(int)((ulonglong)uVar15 >> 0x20);
              UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
                        (&VStack_6,a_00,position,(MethodInfo *)0x0);
              fVar12 = 0.0;
              damage = &stack0xffffffd8;
              puVar1 = &UNK_?;
              pVVar10 = (Vector3 *)func_?();
              pVVar10 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                                 ((Vector3 *)&stack0xffffff9c,*pVVar10,fVar12,(MethodInfo *)0x0);
              pVVar10 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                                 ((Vector3 *)&stack0xffffff90,*pVVar10,shockwaveAcceleration,
                                  (MethodInfo *)0x0);
              pIVar16 = ProximityDamageAndImpulse::ProximityDamageAndImpulse_Create
                                  ((InteractionData *)&stack0xffffff7c,(float)damage,*pVVar10,
                                   PlayerKilledByType__Enum_Explosive,(MethodInfo *)0x0);
              if (this_01 == (InteractionDataHandlerBase *)0x0) goto code_?;
              InteractionDataHandlerBase::InteractionDataHandlerBase_HandleInteraction
                        (this_01,*pIVar16,local,(MethodInfo *)0x0);
            }
          }
        }
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < (int)puVar1);
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
  _local = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
            *)(uint)local;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  bVar1 = SharedWorldObjectGameplayFunctions::SharedWorldObjectGameplayFunctions_DoParticleEffect
                    (position,(MethodInfo *)0x0);
  if (bVar1 != 0) {
    if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
      func_?();
    }
    pQVar2 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_get_identity
                       ((Quaternion *)&stack0xffffffe8,(MethodInfo *)0x0);
    fVar3 = pQVar2->x;
    fVar4 = pQVar2->y;
    fVar5 = pQVar2->z;
    puVar6 = (undefined *)pQVar2->w;
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      puVar6 = &UNK_?;
      func_?();
    }
    rotation.y = fVar4;
    rotation.x = fVar3;
    rotation.z = fVar5;
    rotation.w = (float)puVar6;
    _local = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
              *)UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_161
                          ((SentryGunBeam *)particlePrefab,position,rotation,
                           UnityEngine__ParticleSystem_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::ParticleSystem>_UnityEngine__ParticleSystem__UnityEngine__Vector3__UnityEngine__Quaternion_
                          );
    if (_local == (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                   *)0x0) {
      func_?();
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    damageValue = (float)&UNK_?;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::Experimental
    ::TerrainAPI::TerrainUtility+TerrainMap]::
    Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__System_Collections_ICollection_get_SyncRoot
              (_local,(MethodInfo *)0x0);
    shockwaveAcceleration = (float)&stack0xfffffff8;
    explosionEvent = (ExplosionEvent *)0x0;
    damageRadius = (float)&UNK_?;
    func_?();
  }
  if ((((uint)(TypeInfo__SharedWorldObjectGameplayFunctions__Explosion->vtable).Equals.methodPtr &
       0x2000000) != 0) &&
     ((TypeInfo__SharedWorldObjectGameplayFunctions__Explosion->_1).cctor_started == 0)) {
    func_?();
  }
  SharedWorldObjectGameplayFunctions_Explosion_ApplyProximityDamage
            (position,damageValue,damageRadius,shockwaveAcceleration,(bool)_local,explosionEvent,
             ignoreIDs,(MethodInfo *)0x0);
  return;
}


/* SharedWorldObjectGameplayFunctions+Explosion() */

void Assembly-CSharp.dll::SharedWorldObjectGameplayFunctions+Explosion::
     SharedWorldObjectGameplayFunctions_Explosion__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  uVar1 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                    (StringLiteral_Logic,(MethodInfo *)0x0);
  TypeInfo__SharedWorldObjectGameplayFunctions__Explosion->static_fields->layerMask =
       ~(1 << (uVar1 & 0x1f)) & 0xfffffffb;
  return;
}

