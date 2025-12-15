
/* Void Awake() */

void Assembly-CSharp.dll::PickupItemSlapGun::PickupItemSlapGun_Awake
               (PickupItemSlapGun *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__GameObject);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MainCameraManager);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_FirstPersonTransform);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Default);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Player);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  iVar1 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                    (StringLiteral_Default,(MethodInfo *)0x0);
  uVar2 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                    (StringLiteral_Player,(MethodInfo *)0x0);
  (this->fields).layerMask = 1 << ((byte)iVar1 & 0x1f) | 1 << (uVar2 & 0x1f);
  if (*(int *)&(TypeInfo__MainCameraManager->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__MainCameraManager);
  }
  if (TypeInfo__MainCameraManager->static_fields->IsCameraForcedFirstPerson == 0) {
    return;
  }
  pTVar3 = (this->fields)._._.firstPersonTransform;
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
  if (pTVar3 != (Transform *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pTVar3->fields)._._.m_CachedPtr != (void *)0x0) {
      return;
    }
  }
  this_00 = (GameObject *)FUN_?(TypeInfo__UnityEngine__GameObject);
  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject__ctor
            (this_00,StringLiteral_FirstPersonTransform,(MethodInfo *)0x0);
  if (this_00 != (GameObject *)0x0) {
    pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                       (this_00,(MethodInfo *)0x0);
    parent = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                       ((Component *)this,(MethodInfo *)0x0);
    if (pTVar3 != (Transform *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                (pTVar3,parent,1,(MethodInfo *)0x0);
      pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                         (this_00,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Vector3);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (pTVar3 == (Transform *)0x0) {
        FUN_?();
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pvVar5 = (pTVar3->fields)._._.m_CachedPtr;
      if (pvVar5 != (void *)0x0) {
        pcVar4 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
          uVar6 = func_?(&UNK_?);
          FUN_?(uVar6,0);
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pcRam_? = pcVar4;
        (*pcRam_?)(pvVar5);
        pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                           (this_00,(MethodInfo *)0x0);
        bVar7 = iRam_? == 0;
        (this->fields)._._.firstPersonTransform = pTVar3;
        if (bVar7) {
          return;
        }
        uVar2 = (uint)((ulonglong)&(this->fields)._._.firstPersonTransform >> 0xc);
        puVar8 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
        do {
          uVar9 = *puVar8;
          LOCK();
          uVar10 = *puVar8;
          if (uVar9 == uVar10) {
            *puVar8 = uVar9 | 1L << (uVar2 & 0x3f);
          }
          UNLOCK();
        } while (uVar9 != uVar10);
        return;
      }
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar3,(MethodInfo *)0x0);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Vector3 ComputeImpulseDirection(Ray) */

Vector3 * Assembly-CSharp.dll::PickupItemSlapGun::PickupItemSlapGun_ComputeImpulseDirection
                    (Vector3 *__return_storage_ptr__,PickupItemSlapGun *this,Ray *lineOfFire,
                    MethodInfo *method)

{
  uVar1 = (lineOfFire->m_Direction).x;
  uVar2 = (lineOfFire->m_Direction).y;
  fVar3 = (lineOfFire->m_Direction).z;
  fVar4 = (float)uVar2 + _UNK_?;
  uStack_5 = CONCAT44(fVar4,uVar1);
  fStack_6 = fVar3;
  fVar7 = (float)FUN_?(&uStack_5);
  if (_UNK_? < fVar7) {
    fVar3 = fVar3 / fVar7;
    uVar8 = CONCAT44(fVar4 / fVar7,(float)uVar1 / fVar7);
  }
  else {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pVVar9 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar8._0_4_ = (pVVar9->zeroVector).x;
    uVar8._4_4_ = (pVVar9->zeroVector).y;
    fVar3 = (pVVar9->zeroVector).z;
  }
  __return_storage_ptr__->x = (float)(int)uVar8;
  __return_storage_ptr__->y = (float)(int)((ulonglong)uVar8 >> 0x20);
  __return_storage_ptr__->z = fVar3;
  return __return_storage_ptr__;
}


/* Vector3 FindRayTarget(Ray) */

Vector3 * Assembly-CSharp.dll::PickupItemSlapGun::PickupItemSlapGun_FindRayTarget
                    (Vector3 *__return_storage_ptr__,PickupItemSlapGun *this,Ray *lineOfFire,
                    MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__HashSet<int>);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Default);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  fVar1 = (this->fields).maxRange;
  VStack_2.point.x = 0.0;
  VStack_2.point.y = 0.0;
  VStack_2.point.z = 0.0;
  VStack_2.normal.x = 0.0;
  VStack_2.interactionFlags = 0;
  VStack_2.normal.y = 0.0;
  VStack_2.normal.z = 0.0;
  VStack_2.cubePos.x = 0;
  VStack_2.cubePos.y = 0;
  VStack_2.cubePos.z = 0;
  VStack_2._30_2_ = 0;
  VStack_2.face = 0;
  VStack_2.isCubeHit = 0;
  VStack_2._37_3_ = 0;
  VStack_2.woId = 0;
  VStack_2._44_4_ = 0;
  VStack_2.cube = (Cube *)0x0;
  VStack_2.distance = 0.0;
  VStack_2._60_4_ = 0;
  VStack_2.collider = (Collider *)0x0;
  VStack_2.transform = (Transform *)0x0;
  ignoreWoIds = (HashSet_1_System_Int32_ *)
                FUN_?(TypeInfo__System__Collections__Generic__HashSet<int>);
  FUN_?(ignoreWoIds);
  iVar3 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                    (StringLiteral_Default,(MethodInfo *)0x0);
  RStack_4.m_Origin.x = (lineOfFire->m_Origin).x;
  RStack_4.m_Origin.y = (lineOfFire->m_Origin).y;
  RStack_4._8_8_ = *(undefined8 *)&(lineOfFire->m_Origin).z;
  RStack_4.m_Direction.y = (lineOfFire->m_Direction).y;
  RStack_4.m_Direction.z = (lineOfFire->m_Direction).z;
  bVar5 = CollisionDetection::CollisionDetection_MVHit_1
                    (&RStack_4,&VStack_2,fVar1,ignoreWoIds,1 << ((byte)iVar3 & 0x1f),
                     (MethodInfo *)0x0);
  if (bVar5 == 0) {
    fVar1 = (this->fields).maxRange;
    uVar6 = (lineOfFire->m_Direction).x;
    uVar7 = (lineOfFire->m_Direction).y;
    uVar8 = (lineOfFire->m_Origin).x;
    uVar9 = (lineOfFire->m_Origin).y;
    fVar10 = (lineOfFire->m_Direction).z;
    fVar11 = (lineOfFire->m_Origin).z;
    __return_storage_ptr__->x = fVar1 * (float)uVar6 + (float)uVar8;
    __return_storage_ptr__->y = fVar1 * (float)uVar7 + (float)uVar9;
    __return_storage_ptr__->z = fVar1 * fVar10 + fVar11;
  }
  else {
    __return_storage_ptr__->x = VStack_2.point.x;
    __return_storage_ptr__->y = VStack_2.point.y;
    __return_storage_ptr__->z = VStack_2.point.z;
  }
  return __return_storage_ptr__;
}


/* Void OnFire(Boolean) */

void Assembly-CSharp.dll::PickupItemSlapGun::PickupItemSlapGun_OnFire
               (PickupItemSlapGun *this,bool isLocal,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__IBulletImpactVisualizer);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<VoxelHit>__get_Count__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<VoxelHit>__get_Item_int_);
    LOCK();
    UNLOCK();
    FUN_?(&
                  ImpulseRay_MethodInfo__UnityEngine__Object__Instantiate<ImpulseRay>_ImpulseRay__UnityEngine__Vector3__UnityEngine__Quaternion_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__PickupItemSlapGun);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Sound___slapGunFire);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields)._._.muzzlePoint;
  fStack_2 = 0.0;
  uStack_3 = 0;
  if (pTVar1 != (Transform *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pIStack_4 = (Il2CppRGCTXData *)0x0;
    fStack_5 = 0.0;
    pvVar6 = (pTVar1->fields)._._.m_CachedPtr;
    if (pvVar6 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar1,(MethodInfo *)0x0);
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pcVar7 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0)) {
      uVar8 = func_?(&UNK_?);
      FUN_?(uVar8,0);
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pcRam_? = pcVar7;
    (*pcRam_?)(pvVar6,&pIStack_4);
    pMVar9 = (this->fields)._._.owner;
    if (pMVar9 != (MVPickupOwner *)0x0) {
      pVVar10 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_normalized
                          (&VStack_11,&(pMVar9->fields).lookDirection,method);
      fVar12 = fStack_5;
      uVar13 = SUB84(pIStack_4,0);
      uVar14 = (undefined4)((ulonglong)pIStack_4 >> 0x20);
      pIStack_15 = pIStack_4;
      uStack_16 = *(Il2CppRGCTXData **)pVVar10;
      fVar17 = pVVar10->z;
      uStack_18 = pIStack_4;
      fStack_19 = fStack_5;
      fStack_20 = fVar17;
      uStack_21 = uStack_16;
      fVar22 = (float)FUN_?((Vector3 *)&uStack_16);
      if (_UNK_? < fVar22) {
        VStack_23.x = (float)uStack_21 / fVar22;
        fVar17 = fVar17 / fVar22;
        VStack_23.y = uStack_21._4_4_ / fVar22;
      }
      else {
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__UnityEngine__Vector3);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pVVar24 = TypeInfo__UnityEngine__Vector3->static_fields;
        VStack_23.x = (pVVar24->zeroVector).x;
        VStack_23.y = (pVVar24->zeroVector).y;
        fVar17 = (pVVar24->zeroVector).z;
      }
      fVar22 = VStack_23.x;
      fVar25 = VStack_23.y;
      fStack_2 = VStack_23.x;
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVGameControllerBase);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pMVar26 = TypeInfo__MVGameControllerBase->static_fields->instance;
      if (pMVar26 != (MVGameControllerBase *)0x0) {
        audioSource = (this->fields).audioSource;
        this_00 = (pMVar26->fields).audioManager;
        if ((audioSource != (AudioSource *)0x0) &&
           (pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                ((Component *)audioSource,(MethodInfo *)0x0),
           pTVar1 != (Transform *)0x0)) {
          if (cRam_? == '\0') {
            FUN_?(&
                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pIStack_4 = (Il2CppRGCTXData *)0x0;
          fStack_5 = 0.0;
          pvVar6 = (pTVar1->fields)._._.m_CachedPtr;
          if (pvVar6 == (void *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
            ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar1,(MethodInfo *)0x0);
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          pcVar7 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0)) {
            uVar8 = func_?(&UNK_?);
            FUN_?(uVar8,0);
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          pcRam_? = pcVar7;
          (*pcRam_?)(pvVar6,&pIStack_4);
          if (this_00 != (AudioManager *)0x0) {
            uStack_16 = pIStack_4;
            fStack_20 = fStack_5;
            AudioManager::AudioManager_Play_2
                      (this_00,StringLiteral_Sound___slapGunFire,audioSource,(Vector3 *)&uStack_16,
                       (MethodInfo *)0x0);
            pMVar9 = (this->fields)._._.owner;
            if (pMVar9 != (MVPickupOwner *)0x0) {
              if ((pMVar9->fields)._IsLocal_k__BackingField != 0) {
                fVar27 = (this->fields).maxRange;
                if (pMVar9 == (MVPickupOwner *)0x0) goto code_?;
                pHVar28 = (HashSet_1_System_Int32_ *)
                          (*(pMVar9->klass->vtable).get_IgnoreWOIDs.methodPtr)
                                    (pMVar9,(pMVar9->klass->vtable).get_IgnoreWOIDs.method);
                fStack_29 = fStack_2;
                fStack_30 = fStack_19;
                uVar31 = (this->fields).layerMask;
                _Stack_1b8 = uStack_18;
                pIStack_4 = (Il2CppRGCTXData *)CONCAT44(fVar17,fVar25);
                p_Var51 = (_union_154 *)(ulonglong)uVar31;
                pIStack_32 = pIStack_4;
                pLVar33 = CollisionDetection::CollisionDetection_MVSphereCastAll
                                    ((Ray *)&_Stack_1b8,TypeRef__System__Activator__T._0_4_,fVar27,
                                     pHVar28,uVar31,(MethodInfo *)0x0);
                uVar31 = 0;
                if (pLVar33 == (List_1_VoxelHit_ *)0x0) goto code_?;
                lVar34 = 0;
                for (; (int)uVar31 < (pLVar33->fields)._size; uVar31 = uVar31 + 1) {
                  if ((uint)(pLVar33->fields)._size <= uVar31) {
                    mscorlib.dll::System::ThrowHelper::
                    ThrowHelper_1_ThrowArgumentOutOfRange_IndexException((MethodInfo *)0x0);
                    pcVar7 = (code *)swi(3);
                    (*pcVar7)();
                    return;
                  }
                  pVVar35 = (pLVar33->fields)._items;
                  if (pVVar35 == (VoxelHit__Array *)0x0) goto code_?;
                  if ((uint)pVVar35->max_length <= uVar31) {
                    FUN_?();
                    pcVar7 = (code *)swi(3);
                    (*pcVar7)();
                    return;
                  }
                  puVar36 = (undefined8 *)((longlong)&pVVar35->vector[0].point.x + lVar34);
                  uVar8 = *puVar36;
                  uVar37 = puVar36[1];
                  puVar36 = (undefined8 *)((longlong)&pVVar35->vector[0].normal.y + lVar34);
                  uVar38 = *puVar36;
                  uVar39 = puVar36[1];
                  puVar36 = (undefined8 *)((longlong)&pVVar35->vector[0].face + lVar34);
                  uVar40 = *puVar36;
                  uVar41 = *puVar36;
                  piVar42 = (int32_t *)(puVar36 + 1);
                  iVar43 = *piVar42;
                  uVar44._0_4_ = piVar42[0];
                  uVar44._4_4_ = piVar42[1];
                  uVar45._0_4_ = piVar42[0];
                  uVar45._4_4_ = piVar42[1];
                  puVar36 = (undefined8 *)((longlong)&pVVar35->vector[0].cube + lVar34);
                  pCVar46 = (Cube *)*puVar36;
                  uVar47 = puVar36[1];
                  puVar36 = (undefined8 *)((longlong)&pVVar35->vector[0].collider + lVar34);
                  pCVar48 = (Collider *)*puVar36;
                  pTVar1 = (Transform *)puVar36[1];
                  iVar49 = *(int64_t *)((longlong)&pVVar35->vector[0].interactionFlags + lVar34);
                  if (cRam_? == '\0') {
                    FUN_?(&TypeInfo__MVGameControllerBase);
                    LOCK();
                    UNLOCK();
                    cRam_? = '\x01';
                  }
                  pMVar26 = TypeInfo__MVGameControllerBase->static_fields->instance;
                  if ((((pMVar26 == (MVGameControllerBase *)0x0) ||
                       (pMVar50 = (pMVar26->fields).game, pMVar50 == (MVNetworkGame *)0x0)) ||
                      (pWVar51 = (pMVar50->fields).worldNetwork, pWVar51 == (WorldNetwork *)0x0)) ||
                     (this_01 = (RuntimeEventManager *)(pWVar51->fields)._.runtimeEventManagerNetwork
                     , this_01 == (RuntimeEventManager *)0x0)) goto code_?;
                  aVStack_52[0].point._0_8_ = uVar8;
                  aVStack_52[0]._8_8_ = uVar37;
                  aVStack_52[0].normal._4_8_ = uVar38;
                  aVStack_52[0]._24_8_ = uVar39;
                  aVStack_52[0]._32_8_ = uVar41;
                  aVStack_52[0]._40_8_ = uVar45;
                  aVStack_52[0].cube = pCVar46;
                  aVStack_52[0]._56_8_ = uVar47;
                  aVStack_52[0].collider = pCVar48;
                  aVStack_52[0].transform = pTVar1;
                  aVStack_52[0].interactionFlags = iVar49;
                  RuntimeEventManager::RuntimeEventManager_SendRemoveOneFineGrainedCube
                            (this_01,aVStack_52,(this->fields).slapStrength,(MethodInfo *)0x0);
                  if (cRam_? == '\0') {
                    FUN_?(&TypeInfo__MVGameControllerBase);
                    LOCK();
                    UNLOCK();
                    cRam_? = '\x01';
                  }
                  pMVar26 = TypeInfo__MVGameControllerBase->static_fields->instance;
                  if (((pMVar26 == (MVGameControllerBase *)0x0) ||
                      (pMVar50 = (pMVar26->fields).game, pMVar50 == (MVNetworkGame *)0x0)) ||
                     (((pMVar50->fields).worldNetwork == (WorldNetwork *)0x0 ||
                      (pMVar53 = (((pMVar50->fields).worldNetwork)->fields)._.
                                worldObjectClientManager,
                      pMVar53 == (MVWorldObjectClientManagerNetwork *)0x0))))
                  goto code_?;
                  if (cRam_? == '\0') {
                    FUN_?(&
                                  MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__TryGetValue_int__MVWorldObjectClient__
                                 );
                    LOCK();
                    UNLOCK();
                    cRam_? = '\x01';
                  }
                  this_02 = (pMVar53->fields)._.worldObjects;
                  pMStack_54 = (MVWorldObjectClient *)0x0;
                  if (this_02 == (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0) {
                    FUN_?();
                    pcVar7 = (code *)swi(3);
                    (*pcVar7)();
                    return;
                  }
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                  Object]::Dictionary_2_System_Int32_System_Object__TryGetValue
                            ((Dictionary_2_System_Int32_System_Object_ *)this_02,iVar43,
                             (Object **)&pMStack_54,
                             MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__TryGetValue_int__MVWorldObjectClient__
                            );
                  wo = pMStack_54;
                  fVar27 = fVar25 + _UNK_?;
                  fStack_55 = fVar17;
                  uStack_21 = (Il2CppRGCTXData *)CONCAT44(fVar27,fVar22);
                  pIStack_56 = uStack_21;
                  fVar22 = (float)FUN_?((Quaternion *)&pIStack_56);
                  pMVar57 = wo;
                  if (_UNK_? < fVar22) {
                    fVar58 = fVar17 / fVar22;
                    pIVar59 = (Il2CppRGCTXData *)
                              CONCAT44(fVar27 / fVar22,(float)uStack_21 / fVar22);
                  }
                  else {
                    if (cRam_? == '\0') {
                      FUN_?(&TypeInfo__UnityEngine__Vector3);
                      LOCK();
                      UNLOCK();
                      cRam_? = '\x01';
                      pMVar57 = pMStack_54;
                    }
                    pIVar59 = *(Il2CppRGCTXData **)
                               &TypeInfo__UnityEngine__Vector3->static_fields->zeroVector;
                    fVar58 = (TypeInfo__UnityEngine__Vector3->static_fields->zeroVector).z;
                  }
                  fVar22 = (this->fields).slapStrength;
                  uStack_16._0_4_ = SUB84(pIVar59,0);
                  fVar27 = fVar22 * (float)uStack_16;
                  uStack_16._4_4_ = (float)((ulonglong)pIVar59 >> 0x20);
                  fVar60 = fVar22 * uStack_16._4_4_;
                  uStack_16 = pIVar59;
                  if (pMVar57 == (MVWorldObjectClient *)0x0) goto code_?;
                  pIVar61 = MVWorldObjectClient::MVWorldObjectClient_get_InteractionDataHandlerBase
                                      (pMVar57,(MethodInfo *)0x0);
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
                  if (pIVar61 != (InteractionDataHandlerBase *)0x0) {
                    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
                      FUN_?();
                    }
                    if ((pIVar61->fields)._._._._._.m_CachedPtr != (void *)0x0) {
                      pMVar50 = MVGameControllerBase::MVGameControllerBase_get_Game
                                          ((MethodInfo *)0x0);
                      if (((pMVar50 == (MVNetworkGame *)0x0) ||
                          (this_03 = (pMVar50->fields).playerContainer,
                          this_03 == (MVPlayerContainer *)0x0)) ||
                         (this_04 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer
                                              (this_03,(MethodInfo *)0x0),
                         this_04 == (MVLocalPlayer *)0x0)) goto code_?;
                      pMVar57 = wo;
                      bVar62 = MVPlayer::MVPlayer_IsOnSameTeam_1
                                         ((MVPlayer *)this_04,wo,(MethodInfo *)0x0);
                      if (bVar62 == 0) {
                        pMVar9 = (this->fields)._._.owner;
                        uVar13 = 0;
                        VStack_11.y = fVar60;
                        VStack_11.x = fVar27;
                        uStack_63._0_1_ = 0;
                        uStack_63._1_1_ = 0;
                        uStack_63._2_2_ = 0;
                        pIStack_64 = (Il2CppRGCTXData *)0x0;
                        uStack_65._0_4_ = 0.0;
                        uStack_65._4_4_ = 0.0;
                        VStack_11.z = fVar22 * fVar58;
                        MVWorldObject.dll::MV::WorldObject::InteractionData::InteractionData__ctor_5
                                  ((InteractionData *)&pIStack_64,
                                   (InteractionPackageType__Enum)
                                   CONCAT71((int7)((ulonglong)pMVar57 >> 8),0x1a),0.0,&VStack_11,
                                   (PlayerKilledByType__Enum)
                                   CONCAT71((int7)((ulonglong)p_Var51 >> 8),0x15),(MethodInfo *)0x0)
                        ;
                        pIStack_32 = (Il2CppRGCTXData *)CONCAT44(pIStack_32._4_4_,uStack_63);
                        p_Var51 = (_union_154 *)(pIVar61->klass->vtable).__unknown_1.method;
                        _Stack_1b8.rgctx_data = pIStack_64;
                        fStack_30 = (float)uStack_65;
                        fStack_29 = uStack_65._4_4_;
                        (*(pIVar61->klass->vtable).__unknown_1.methodPtr)
                                  (pIVar61,pMVar9,&_Stack_1b8,0,p_Var51);
                        lVar66 = FUN_?(wo,TypeInfo__IBulletImpactVisualizer);
                        if (lVar66 != 0) {
                          pMVar9 = (this->fields)._._.owner;
                          if ((pMVar9 == (MVPickupOwner *)0x0) ||
                             (pMVar57 = (pMVar9->fields)._.worldObjectParent,
                             pMVar57 == (MVWorldObjectClient *)0x0)) goto code_?;
                          iVar43 = (pMVar57->fields)._.ownerActorNr;
                          if (*(int *)&(TypeInfo__PickupItemSlapGun->_1).field_0x1c == 0) {
                            FUN_?(TypeInfo__PickupItemSlapGun);
                          }
                          pIVar67 = TypeInfo__IBulletImpactVisualizer;
                          fVar22 = TypeInfo__PickupItemSlapGun->static_fields->damage;
                          lVar66 = FUN_?(wo,TypeInfo__IBulletImpactVisualizer);
                          pIVar68 = TypeInfo__IBulletImpactVisualizer;
                          if (lVar66 == 0) {
                            FUN_?(wo,pIVar67);
                            pcVar7 = (code *)swi(3);
                            (*pcVar7)();
                            return;
                          }
                          lVar66 = FUN_?(wo,TypeInfo__IBulletImpactVisualizer);
                          if (lVar66 == 0) {
                            FUN_?(wo,pIVar68);
                            pcVar7 = (code *)swi(3);
                            (*pcVar7)();
                            return;
                          }
                          fStack_29 = fStack_2;
                          fStack_30 = fStack_19;
                          p_Var51 = &_Stack_1b8;
                          _Stack_1b8 = uStack_18;
                          pIStack_32 = pIStack_4;
                          aVStack_52[0].point._0_8_ = uVar8;
                          aVStack_52[0]._8_8_ = uVar37;
                          aVStack_52[0].normal._4_8_ = uVar38;
                          aVStack_52[0]._24_8_ = uVar39;
                          aVStack_52[0]._32_8_ = uVar40;
                          aVStack_52[0]._40_8_ = uVar44;
                          aVStack_52[0].cube = pCVar46;
                          aVStack_52[0]._56_8_ = uVar47;
                          aVStack_52[0].collider = pCVar48;
                          aVStack_52[0].transform = pTVar1;
                          aVStack_52[0].interactionFlags = iVar49;
                          FUN_?(p_Var51,TypeInfo__IBulletImpactVisualizer,lVar66,aVStack_52
                                        ,p_Var51,CONCAT44(uVar13,iVar43),fVar22);
                        }
                      }
                    }
                  }
                  lVar34 = lVar34 + 0x58;
                  fVar22 = VStack_23.x;
                }
                uVar13 = SUB84(pIStack_15,0);
                uVar14 = (undefined4)((ulonglong)pIStack_15 >> 0x20);
              }
              if (cRam_? == '\0') {
                FUN_?(&MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
                LOCK();
                UNLOCK();
                FUN_?(&TypeInfo__System__Collections__Generic__HashSet<int>);
                LOCK();
                UNLOCK();
                FUN_?(&StringLiteral_Default);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              fVar27 = (this->fields).maxRange;
              aVStack_52[0].point.x = 0.0;
              aVStack_52[0].point.y = 0.0;
              aVStack_52[0].point.z = 0.0;
              aVStack_52[0].normal.x = 0.0;
              aVStack_52[0].interactionFlags = 0;
              aVStack_52[0].normal.y = 0.0;
              aVStack_52[0].normal.z = 0.0;
              aVStack_52[0].cubePos.x = 0;
              aVStack_52[0].cubePos.y = 0;
              aVStack_52[0].cubePos.z = 0;
              aVStack_52[0]._30_2_ = 0;
              _fStack_1b0 = CONCAT44(fStack_29,fVar12);
              aVStack_52[0].face = 0;
              aVStack_52[0].isCubeHit = 0;
              aVStack_52[0]._37_3_ = 0;
              aVStack_52[0].woId = 0;
              aVStack_52[0]._44_4_ = 0;
              aVStack_52[0].cube = (Cube *)0x0;
              aVStack_52[0].distance = 0.0;
              aVStack_52[0]._60_4_ = 0;
              aVStack_52[0].collider = (Collider *)0x0;
              aVStack_52[0].transform = (Transform *)0x0;
              pHVar28 = (HashSet_1_System_Int32_ *)
                        FUN_?(TypeInfo__System__Collections__Generic__HashSet<int>);
              FUN_?(pHVar28);
              iVar43 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                                 (StringLiteral_Default,(MethodInfo *)0x0);
              _Stack_1b8._4_4_ = uVar14;
              _Stack_1b8._0_4_ = uVar13;
              fVar58 = (float)_fStack_1b0;
              fStack_29 = fVar22;
              fStack_30 = fVar58;
              pIStack_32 = (Il2CppRGCTXData *)CONCAT44(fVar17,fVar25);
              bVar62 = CollisionDetection::CollisionDetection_MVHit_1
                                 ((Ray *)&_Stack_1b8,aVStack_52,fVar27,pHVar28,
                                  1 << ((byte)iVar43 & 0x1f),(MethodInfo *)0x0);
              if (bVar62 == 0) {
                fVar27 = (this->fields).maxRange;
                fVar22 = fVar27 * fVar22 + (float)uStack_18;
                fVar25 = fVar27 * fVar25 + uStack_18._4_4_;
                fVar12 = fVar27 * fVar17 + fVar12;
              }
              else {
                fVar22 = (float)aVStack_52[0].point._0_8_;
                fVar12 = (float)aVStack_52[0]._8_8_;
                fVar25 = SUB84(aVStack_52[0].point._0_8_,4);
              }
              pTVar1 = (this->fields)._._.muzzlePoint;
              pIVar69 = (this->fields).impulseRayPrefab;
              if (pTVar1 != (Transform *)0x0) {
                if (cRam_? == '\0') {
                  FUN_?(&
                                void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                               );
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                VStack_23.x = 0.0;
                VStack_23.y = 0.0;
                VStack_23.z = 0.0;
                pvVar6 = (pTVar1->fields)._._.m_CachedPtr;
                if (pvVar6 == (void *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                  ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar1,(MethodInfo *)0x0);
                  pcVar7 = (code *)swi(3);
                  (*pcVar7)();
                  return;
                }
                pcVar7 = pcRam_?;
                if ((pcRam_? == (code *)0x0) &&
                   (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0)) {
                  uVar8 = func_?(&UNK_?);
                  FUN_?(uVar8,0);
                  pcVar7 = (code *)swi(3);
                  (*pcVar7)();
                  return;
                }
                pcRam_? = pcVar7;
                (*pcRam_?)(pvVar6,&VStack_23);
                if (cRam_? == '\0') {
                  FUN_?(&TypeInfo__UnityEngine__Quaternion);
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                pQVar70 = TypeInfo__UnityEngine__Quaternion->static_fields;
                pIVar59 = *(Il2CppRGCTXData **)&pQVar70->identityQuaternion;
                uVar8._0_4_ = (pQVar70->identityQuaternion).z;
                uVar8._4_4_ = (pQVar70->identityQuaternion).w;
                if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
                  FUN_?();
                }
                pMVar71 = 
                ImpulseRay_MethodInfo__UnityEngine__Object__Instantiate<ImpulseRay>_ImpulseRay__UnityEngine__Vector3__UnityEngine__Quaternion_
                ;
                if ((
                    ImpulseRay_MethodInfo__UnityEngine__Object__Instantiate<ImpulseRay>_ImpulseRay__UnityEngine__Vector3__UnityEngine__Quaternion_
                    ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
                  FUN_?(&TypeInfo__UnityEngine__Object);
                  LOCK();
                  UNLOCK();
                  if ((pMVar71->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
                    FUN_?(pMVar71);
                  }
                }
                if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
                  FUN_?();
                }
                VStack_11.x = VStack_23.x;
                VStack_11.y = VStack_23.y;
                VStack_11.z = VStack_23.z;
                pIStack_56 = pIVar59;
                _fStack_160 = uVar8;
                pOVar72 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate
                                    ((Object_1 *)pIVar69,&VStack_11,(Quaternion *)&pIStack_56,
                                     (MethodInfo *)0x0);
                pvVar6 = ((pMVar71->field7_0x38).rgctx_data)->rgctxDataDummy;
                if ((*(byte *)((longlong)pvVar6 + 0x135) & 1) == 0) {
                  pvVar6 = (void *)FUN_?(pvVar6);
                }
                if (pOVar72 != (Object_1 *)0x0) {
                  pIVar69 = (ImpulseRay *)FUN_?(pOVar72,pvVar6);
                  if (pIVar69 == (ImpulseRay *)0x0) {
                    FUN_?(pOVar72,pvVar6);
                    pcVar7 = (code *)swi(3);
                    (*pcVar7)();
                    return;
                  }
                  VStack_11.y = fVar25;
                  VStack_11.x = fVar22;
                  VStack_11.z = fVar12;
                  ImpulseRay::ImpulseRay_Initialize(pIVar69,&VStack_11,(MethodInfo *)0x0);
                  (pIVar69->fields).radius = 1.2;
                  fVar17 = (this->fields).slapColor.g;
                  fVar12 = (this->fields).slapColor.b;
                  fVar22 = (this->fields).slapColor.a;
                  (pIVar69->fields).startColor.r = (this->fields).slapColor.r;
                  (pIVar69->fields).startColor.g = fVar17;
                  (pIVar69->fields).startColor.b = fVar12;
                  (pIVar69->fields).startColor.a = fVar22;
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* PickupItemSlapGun() */

void Assembly-CSharp.dll::PickupItemSlapGun::PickupItemSlapGun__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MV__WorldObject__InteractionData);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__PickupItemSlapGun);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  VStack_1.z = 0.0;
  VStack_1.x = 0.0;
  VStack_1.y = 0.0;
  aIStack_2[0].interactionType = 0;
  aIStack_2[0].playerKilledByType = 0;
  aIStack_2[0]._18_2_ = 0;
  aIStack_2[0].damage = 0.0;
  aIStack_2[0].impulse.x = 0.0;
  aIStack_2[0].impulse.y = 0.0;
  aIStack_2[0].impulse.z = 0.0;
  MVWorldObject.dll::MV::WorldObject::InteractionData::InteractionData__ctor_5
            (aIStack_2,CONCAT31((int3)((uint)in_EDX >> 8),0x1a),0.0,&VStack_1,
             CONCAT31((int3)((uint)in_stack_3 >> 8),0x15),(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__MV__WorldObject__InteractionData->_1).field_0x1c == 0) {
    FUN_?();
  }
  TypeInfo__PickupItemSlapGun->static_fields->damage = aIStack_2[0].damage;
  return;
}


/* PickupItemSlapGun() */

void Assembly-CSharp.dll::PickupItemSlapGun::PickupItemSlapGun__ctor
               (PickupItemSlapGun *this,MethodInfo *method)

{
  uVar1 = _UNK_?;
  uVar2 = _UNK_?;
  (this->fields).slapColor.r = (float)_UNK_?;
  uVar3 = _UNK_?;
  (this->fields).slapColor.g = (float)uVar2;
  _UNK_? = (undefined4)uVar1;
  _UNK_? = SUB84(uVar1,4);
  uVar2 = _UNK_?;
  (this->fields).slapColor.b = (float)_UNK_?;
  _UNK_? = uVar3;
  (this->fields).slapColor.a = (float)uVar2;
  (this->fields).maxRange = 50.0;
  (this->fields).slapStrength = 500.0;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uVar4 = _UNK_?;
  uVar5 = _UNK_?;
  uVar1 = _UNK_?;
  uVar2 = _UNK_?;
  (this->fields)._.crossHairCannotFireLow.r = (float)_UNK_?;
  uVar3 = _UNK_?;
  (this->fields)._.crossHairCannotFireLow.g = (float)uVar2;
  _UNK_? = (undefined4)uVar1;
  _UNK_? = SUB84(uVar1,4);
  uVar2 = _UNK_?;
  (this->fields)._.crossHairCannotFireLow.b = (float)_UNK_?;
  _UNK_? = uVar3;
  uVar1 = _UNK_?;
  (this->fields)._.crossHairCannotFireLow.a = (float)uVar2;
  uVar2 = _UNK_?;
  (this->fields)._.crossHairCanFire.r = (float)_UNK_?;
  uVar3 = _UNK_?;
  (this->fields)._.crossHairCanFire.g = (float)uVar2;
  _UNK_? = (undefined4)uVar1;
  _UNK_? = SUB84(uVar1,4);
  uVar2 = _UNK_?;
  (this->fields)._.crossHairCanFire.b = (float)_UNK_?;
  _UNK_? = uVar3;
  uVar1 = _UNK_?;
  (this->fields)._.crossHairCanFire.a = (float)uVar2;
  _UNK_? = (undefined4)uVar5;
  _UNK_? = SUB84(uVar5,4);
  uVar2 = _UNK_?;
  (this->fields)._.crossHairCannotFireHigh.r = (float)_UNK_?;
  _UNK_? = uVar1;
  uVar1 = _UNK_?;
  (this->fields)._.crossHairCannotFireHigh.g = (float)uVar2;
  _UNK_? = (undefined4)uVar4;
  _UNK_? = SUB84(uVar4,4);
  uVar2 = _UNK_?;
  (this->fields)._.crossHairCannotFireHigh.b = (float)_UNK_?;
  _UNK_? = uVar1;
  (this->fields)._.crossHairCannotFireHigh.a = (float)uVar2;
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uVar1._0_4_ = 0.0;
  uVar1._4_1_ = 0;
  uVar1._5_3_ = 0;
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).field_0x1c == 0) {
    FUN_?();
  }
  value = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
          ObscuredFloat_InternalEncrypt(_UNK_?,(MethodInfo *)0x0);
  Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
  ObscuredFloat__ctor((ObscuredFloat *)&stack0xffffffffffffffd8,value,(MethodInfo *)0x0);
  bVar6 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::ObscuredCheatingDetector
           ::ObscuredCheatingDetector_get_IsRunning((MethodInfo *)0x0);
  if (bVar6 != 0) {
    uVar1._0_4_ = 1.0;
    uVar1._4_1_ = 0;
    uVar1._5_3_ = 0;
  }
  bVar7 = iRam_? != 0;
  pPVar8 = &this->fields;
  (this->fields)._.fireInterval.currentCryptoKey = 0;
  (pPVar8->_).fireInterval.hiddenValue.b1 = 0;
  (pPVar8->_).fireInterval.hiddenValue.b2 = 0;
  (pPVar8->_).fireInterval.hiddenValue.b3 = 0;
  (pPVar8->_).fireInterval.hiddenValue.b4 = 0;
  (this->fields)._.fireInterval.hiddenValueOld = (Byte__Array *)0x0;
  (this->fields)._.fireInterval.fakeValue = (float)uVar1;
  (this->fields)._.fireInterval.inited = SUB81(uVar1,4);
  *(int3 *)&(this->fields)._.fireInterval.field_0x15 = SUB83(uVar1,5);
  if (bVar7) {
    uVar9 = (uint)((ulonglong)&(this->fields)._.fireInterval.hiddenValueOld >> 0xc);
    uVar10 = (ulonglong)((uVar9 & 0x1fffff) >> 6);
    do {
      uVar11 = *(ulonglong *)(uVar10 * 8 + 0xADDR);
      puVar12 = (ulonglong *)(uVar10 * 8 + 0xADDR);
      LOCK();
      bVar7 = uVar11 == *puVar12;
      if (bVar7) {
        *puVar12 = uVar11 | 1L << (uVar9 & 0x3f);
      }
      UNLOCK();
    } while (!bVar7);
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__MeshRenderer);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar13 = (MeshRenderer__Array *)FUN_?(TypeInfo__UnityEngine__MeshRenderer,0);
  bVar7 = iRam_? != 0;
  (this->fields)._._.meshRenderers = pMVar13;
  if (bVar7) {
    uVar9 = (uint)((ulonglong)&(this->fields)._._.meshRenderers >> 0xc);
    puVar12 = (ulonglong *)((ulonglong)((uVar9 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar11 = *puVar12;
      LOCK();
      uVar10 = *puVar12;
      if (uVar11 == uVar10) {
        *puVar12 = uVar11 | 1L << (uVar9 & 0x3f);
      }
      UNLOCK();
    } while (uVar11 != uVar10);
  }
  bVar7 = cRam_? == '\0';
  (this->fields)._._._AbleToFire_k__BackingField = 1;
  if (bVar7) {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pOVar14 = TypeInfo__UnityEngine__Object;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c != 0) {
    return;
  }
  ppMVar15 = (MethodInfo **)0x0;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c != 0) {
    return;
  }
  lVar16 = _Baselib_Thread_GetCurrentThreadId_il2cpp_baselib__YA_JXZ();
  ppMVar17 = ppMVar15;
  if (lVar16 == lRam_?) {
    iRam_? = iRam_? + 1;
    lVar16 = lRam_?;
  }
  else {
    do {
      uVar9 = (uint)ppMVar17;
      LOCK();
      bVar7 = uVar9 != uRam_?;
      uVar18 = uVar9;
      uVar19 = uVar9 + 1;
      if (bVar7) {
        uVar18 = uRam_?;
        uVar19 = uRam_?;
      }
      uRam_? = uVar19;
      UNLOCK();
    } while ((bVar7) && (ppMVar17 = (MethodInfo **)(ulonglong)uVar18, uVar9 = uVar18, uVar18 != 2)
            );
    while (uVar9 != 0) {
      _Baselib_SystemFutex_Wait_il2cpp_baselib__YAXPEAHHI_Z(0xADDR,2,0xffffffff);
      uVar9 = uRam_?;
      LOCK();
      uRam_? = 2;
      UNLOCK();
    }
  }
  lRam_? = lVar16;
  puVar20 = &(pOVar14->_1).field_0x1c;
  LOCK();
  bVar7 = *(int *)puVar20 == 1;
  if (bVar7) {
    *(undefined4 *)puVar20 = 1;
  }
  uVar9 = uRam_?;
  UNLOCK();
  if (bVar7) {
    if (iRam_? != 0) {
      iRam_? = iRam_? + -1;
      return;
    }
    lRam_? = 0;
    LOCK();
    uRam_? = 0;
    UNLOCK();
    if (uVar9 != 2) {
      uRam_? = 0;
      lRam_? = 0;
      return;
    }
    _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
              (0xADDR,1,0);
    return;
  }
  puVar21 = &(pOVar14->_1).cctor_finished_or_no_cctor;
  LOCK();
  bVar7 = *puVar21 == 1;
  if (bVar7) {
    *puVar21 = 1;
  }
  uVar9 = uRam_?;
  UNLOCK();
  if (bVar7) {
    if (iRam_? == 0) {
      lRam_? = 0;
      LOCK();
      uRam_? = 0;
      UNLOCK();
      if (uVar9 == 2) {
        _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
                  (0xADDR,1,0);
      }
    }
    else {
      iRam_? = iRam_? + -1;
    }
    uVar9 = GetCurrentThreadId();
    psVar22 = &(pOVar14->_1).cctor_thread;
    LOCK();
    bVar7 = (ulonglong)uVar9 == *psVar22;
    if (bVar7) {
      *psVar22 = (ulonglong)uVar9;
    }
    UNLOCK();
    if (bVar7) {
      return;
    }
    while( true ) {
      puVar20 = &(pOVar14->_1).field_0x1c;
      LOCK();
      bVar7 = *(int *)puVar20 == 1;
      if (bVar7) {
        *(undefined4 *)puVar20 = 1;
      }
      UNLOCK();
      if (bVar7) break;
      LOCK();
      lVar16._0_4_ = (pOVar14->_1).initializationExceptionGCHandle;
      lVar16._4_4_ = (pOVar14->_1).cctor_started;
      if (lVar16 == 0) {
        (pOVar14->_1).initializationExceptionGCHandle = 0;
        (pOVar14->_1).cctor_started = 0;
      }
      UNLOCK();
      if (lVar16 != 0) break;
      FUN_?(*puRam_?);
    }
code_?:
    lVar23._0_4_ = (pOVar14->_1).initializationExceptionGCHandle;
    lVar23._4_4_ = (pOVar14->_1).cctor_started;
    if (lVar23 == 0) {
      return;
    }
  }
  else {
    uVar9 = GetCurrentThreadId();
    LOCK();
    (pOVar14->_1).cctor_thread = (ulonglong)uVar9;
    UNLOCK();
    LOCK();
    (pOVar14->_1).cctor_finished_or_no_cctor = 1;
    uVar9 = uRam_?;
    UNLOCK();
    if (iRam_? == 0) {
      lRam_? = 0;
      LOCK();
      uRam_? = 0;
      UNLOCK();
      if (uVar9 == 2) {
        _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
                  (0xADDR,1,0);
      }
    }
    else {
      iRam_? = iRam_? + -1;
    }
    alStackX_10[0] = 0;
    if (((pOVar14->_1).field_0x6e & 4) != 0) {
      FUN_?(pOVar14);
      ppMVar17 = ppMVar15;
      pIVar24 = (Il2CppClass *)pOVar14;
code_?:
      do {
        if (ppMVar17 == (MethodInfo **)0x0) {
          FUN_?(pIVar24);
          if (pIVar24->field_count != 0) {
            ppMVar17 = pIVar24->methods;
            pMVar25 = *ppMVar17;
code_?:
            if (pMVar25 != (MethodInfo *)0x0) {
              if ((*pMVar25->name == '.') && ((pMVar25->flags & 0x800) != 0)) {
                ppMVar26 = ppMVar15;
                while (ppMVar27 = ppMVar26 + 0x3052a1b1,
                      ppMVar26 = (MethodInfo **)((longlong)ppMVar26 + 1),
                      *(char *)ppMVar27 == (pMVar25->name + -1)[(longlong)ppMVar26]) {
                  if (ppMVar26 == (MethodInfo **)0x7) {
                    FUN_?(pMVar25,0,0,alStackX_10);
                    goto code_?;
                  }
                }
              }
              goto code_?;
            }
          }
        }
        else {
          ppMVar17 = ppMVar17 + 1;
          if (ppMVar17 < pIVar24->methods + pIVar24->field_count) {
            pMVar25 = *ppMVar17;
            goto code_?;
          }
        }
        pIVar24 = pIVar24->parent;
        ppMVar17 = ppMVar15;
      } while (pIVar24 != (Il2CppClass *)0x0);
    }
code_?:
    LOCK();
    (pOVar14->_1).cctor_thread = 0;
    uVar10 = _UNK_?;
    uVar1 = _UNK_?;
    UNLOCK();
    if (alStackX_10[0] == 0) {
      LOCK();
      *(undefined4 *)&(pOVar14->_1).field_0x1c = 1;
      UNLOCK();
      goto code_?;
    }
    uStack_28 = 0;
    uStack_29 = _UNK_?;
    uStack_30 = _UNK_?;
    pppppppuStack_78 = (undefined8 *******)0x0;
    FUN_?(&pppppppuStack_78,&(pOVar14->_0).byval_arg,0,0);
    pppppppuVar23 = &pppppppuStack_78;
    if (0xf < uStack_30) {
      pppppppuVar23 = pppppppuStack_78;
    }
    FUN_?(&pppppppuStack_58,&UNK_?,pppppppuVar23);
    if (uStack_30 < 0x10) {
code_?:
      lVar16 = alStackX_10[0];
      pppppppuStack_78 = (undefined8 *******)((ulonglong)pppppppuStack_78 & 0xffffffffffffff00);
      pppppppuVar23 = &pppppppuStack_58;
      if (0xf < uStack_31) {
        pppppppuVar23 = pppppppuStack_58;
      }
      uStack_29 = uVar1;
      uStack_30 = uVar10;
      lVar23 = FUN_?(uRam_?,&UNK_?,&UNK_?,pppppppuVar23);
      if (lVar16 != 0) {
        *(longlong *)(lVar23 + 0x28U) = lVar16;
        if (iRam_? != 0) {
          uVar9 = (uint)(lVar23 + 0x28U >> 0xc);
          puVar12 = (ulonglong *)((ulonglong)((uVar9 & 0x1fffff) >> 6) * 8 + 0xADDR);
          do {
            uVar11 = *puVar12;
            LOCK();
            uVar10 = *puVar12;
            if (uVar11 == uVar10) {
              *puVar12 = uVar11 | 1L << (uVar9 & 0x3f);
            }
            UNLOCK();
          } while (uVar11 != uVar10);
        }
      }
      FUN_?(pOVar14,lVar23);
      if (0xf < uStack_31) {
        pppppppuVar23 = pppppppuStack_58;
        if ((0xfff < uStack_31 + 1) &&
           (pppppppuVar23 = (undefined8 *******)pppppppuStack_58[-1],
           0x1f < (ulonglong)((longlong)pppppppuStack_58 + (-8 - (longlong)pppppppuVar23))))
        goto code_?;
        func_?(pppppppuVar23);
      }
      goto code_?;
    }
    pppppppuVar23 = pppppppuStack_78;
    if ((uStack_30 + 1 < 0x1000) ||
       (pppppppuVar23 = (undefined8 *******)pppppppuStack_78[-1],
       (ulonglong)((longlong)pppppppuStack_78 + (-8 - (longlong)pppppppuVar23)) < 0x20)) {
      func_?(pppppppuVar23);
      uVar1 = _UNK_?;
      uVar10 = _UNK_?;
      goto code_?;
    }
    FUN_?(0,0,0,0,0);
  }
  uVar3._0_4_ = (pOVar14->_1).initializationExceptionGCHandle;
  uVar3._4_4_ = (pOVar14->_1).cctor_started;
  uVar1 = FUN_?(uVar3);
  FUN_?(uVar1,0);
code_?:
  FUN_?(0,0,0,0,0);
  pcVar32 = (code *)swi(3);
  (*pcVar32)();
  return;
}

