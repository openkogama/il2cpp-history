
/* Boolean CanInsertCubeAtCubePos(IntVector) */

bool Assembly-CSharp.dll::PickupItemModelGun::PickupItemModelGun_CanInsertCubeAtCubePos
               (PickupItemModelGun *this,IntVector *cubePos,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MVCubeModelFineGrainedTerrain_MethodInfo__MVWorldObjectClientManager__GetSingletonWorldObject<MVCubeModelFineGrainedTerrain>__
                 );
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_01 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if ((this_01 != (MVWorldObjectClientManager *)0x0) &&
     (pOVar1 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetSingletonWorldObject
                         (this_01,
                          MVCubeModelFineGrainedTerrain_MethodInfo__MVWorldObjectClientManager__GetSingletonWorldObject<MVCubeModelFineGrainedTerrain>__
                         ), pOVar1 != (Object *)0x0)) {
    this_00 = (GameObject *)pOVar1[0xc].monitor;
    if (*(int *)&(TypeInfo__SharedCubeFunctions->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (this_00 != (GameObject *)0x0) {
      obj = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                      (this_00,(MethodInfo *)0x0);
      uVar2._0_2_ = cubePos->x;
      uVar2._2_2_ = cubePos->y;
      uStack_3 = CONCAT44(uStack_3._4_4_,uVar2);
      if (obj != (Transform *)0x0) {
        uStack_4 = CONCAT44((float)(int)(short)uVar2._2_2_,(float)(int)(short)(undefined2)uVar2);
        fStack_5 = (float)(int)cubePos->z;
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        uStack_3 = 0;
        fStack_6 = 0.0;
        pvVar7 = (obj->fields)._._.m_CachedPtr;
        if (pvVar7 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
          pcVar8 = (code *)swi(3);
          bVar9 = (*pcVar8)();
          return bVar9;
        }
        pcVar8 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
          uVar10 = func_?(&UNK_?);
          FUN_?(uVar10,0);
          pcVar8 = (code *)swi(3);
          bVar9 = (*pcVar8)();
          return bVar9;
        }
        pcRam_? = pcVar8;
        (*pcRam_?)(pvVar7,&uStack_4,&uStack_3);
        pMVar11 = (this->fields)._._.owner;
        if (pMVar11 != (MVPickupOwner *)0x0) {
          uVar12 = (pMVar11->fields).lookOrigin.x;
          uVar13 = (pMVar11->fields).lookOrigin.y;
          fStack_5 = fStack_6 - (pMVar11->fields).lookOrigin.z;
          uStack_4 = CONCAT44(uStack_3._4_4_ - (float)uVar13,(float)uStack_3 - (float)uVar12);
          fVar14 = (float)FUN_?(&uStack_4);
          return (this->fields).minDistanceToCubeFire <= fVar14;
        }
      }
    }
  }
  FUN_?();
  pcVar8 = (code *)swi(3);
  bVar9 = (*pcVar8)();
  return bVar9;
}


/* IEnumerator DoAutoFire() */

IEnumerator *
Assembly-CSharp.dll::PickupItemModelGun::PickupItemModelGun_DoAutoFire
          (PickupItemModelGun *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__PickupItemModelGun___DoAutoFire_d__41);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pIVar1 = (IEnumerator *)FUN_?(TypeInfo__PickupItemModelGun___DoAutoFire_d__41);
  bVar2 = iRam_? != 0;
  *(undefined4 *)&pIVar1[1].klass = 0;
  pIVar1[2].klass = (IEnumerator__Class *)this;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)(pIVar1 + 2) >> 0xc);
    puVar4 = (ulonglong *)((ulonglong)((uVar3 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar5 = *puVar4;
      LOCK();
      uVar6 = *puVar4;
      if (uVar5 == uVar6) {
        *puVar4 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (uVar5 != uVar6);
  }
  return pIVar1;
}


/* Boolean DoLineOfFireCheck(VoxelHit ByRef) */

bool Assembly-CSharp.dll::PickupItemModelGun::PickupItemModelGun_DoLineOfFireCheck
               (PickupItemModelGun *this,VoxelHit *hit,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__HashSet<int>__Add_int_);
    LOCK();
    UNLOCK();
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
  pMVar1 = (this->fields)._._.owner;
  if (pMVar1 != (MVPickupOwner *)0x0) {
    uVar2._0_4_ = (pMVar1->fields).lookOrigin.x;
    uVar2._4_4_ = (pMVar1->fields).lookOrigin.y;
    fVar3 = (pMVar1->fields).lookOrigin.z;
    pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_normalized
                        (&VStack_5,&(((this->fields)._._.owner)->fields).lookDirection,method);
    aRStack_6[0].m_Origin.z = fVar3;
    uStack_7._0_4_ = pVVar4->x;
    uStack_7._4_4_ = pVVar4->y;
    fVar3 = pVVar4->z;
    fStack_8 = fVar3;
    uStack_9 = uStack_7;
    aRStack_6[0].m_Origin._0_8_ = uVar2;
    fVar10 = (float)FUN_?(&uStack_7);
    if (_UNK_? < fVar10) {
      fVar11 = (float)uStack_9 / fVar10;
      fVar12 = uStack_9._4_4_ / fVar10;
      fVar3 = fVar3 / fVar10;
    }
    else {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Vector3);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pVVar13 = TypeInfo__UnityEngine__Vector3->static_fields;
      fVar11 = (pVVar13->zeroVector).x;
      fVar12 = (pVVar13->zeroVector).y;
      fVar3 = (pVVar13->zeroVector).z;
    }
    uStack_7 = CONCAT44(fVar12,fVar11);
    aRStack_6[0].m_Direction.x = fVar11;
    iVar14 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                      (StringLiteral_Default,(MethodInfo *)0x0);
    fVar10 = (this->fields).range;
    this_00 = (HashSet_1_System_Int32_ *)
              FUN_?(TypeInfo__System__Collections__Generic__HashSet<int>);
    FUN_?(this_00,MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
    pMVar1 = (this->fields)._._.owner;
    if (((pMVar1 != (MVPickupOwner *)0x0) &&
        (pMVar15 = (pMVar1->fields)._.worldObjectParent, pMVar15 != (MVWorldObjectClient *)0x0)) &&
       (this_00 != (HashSet_1_System_Int32_ *)0x0)) {
      System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32]::
      HashSet_1_System_Int32__AddIfNotPresent
                (this_00,(pMVar15->fields)._.id,
                 MethodInfo__System__Collections__Generic__HashSet<int>__Add_int_->klass->rgctx_data
                 [0x15].method);
      aRStack_6[0].m_Direction.z = fVar3;
      aRStack_6[0].m_Direction.y = uStack_7._4_4_;
      bVar16 = CollisionDetection::CollisionDetection_MVHit_1
                        (aRStack_6,hit,fVar10,this_00,1 << ((byte)iVar14 & 0x1f),(MethodInfo *)0x0);
      return bVar16;
    }
  }
  FUN_?();
  pcVar17 = (code *)swi(3);
  bVar16 = (*pcVar17)();
  return bVar16;
}


/* IntVector GetCubePos(VoxelHit) */

IntVector *
Assembly-CSharp.dll::PickupItemModelGun::PickupItemModelGun_GetCubePos
          (IntVector *__return_storage_ptr__,PickupItemModelGun *this,VoxelHit *voxelHit,
          MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MVCubeModelFineGrainedTerrain_MethodInfo__MVWorldObjectClientManager__GetSingletonWorldObject<MVCubeModelFineGrainedTerrain>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__SharedCubeFunctions);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  VStack_1.point.x = (voxelHit->point).x;
  VStack_1.point.y = (voxelHit->point).y;
  VStack_1._8_8_ = *(undefined8 *)&(voxelHit->point).z;
  VStack_1.normal.y = (voxelHit->normal).y;
  VStack_1.normal.z = (voxelHit->normal).z;
  VStack_1.cubePos = voxelHit->cubePos;
  VStack_1._30_2_ = *(undefined2 *)&voxelHit->field_0x1e;
  __return_storage_ptr__->x = 0;
  fVar2 = _UNK_?;
  __return_storage_ptr__->y = 0;
  VStack_1.face = voxelHit->face;
  VStack_1.isCubeHit = voxelHit->isCubeHit;
  VStack_1._37_3_ = *(undefined3 *)&voxelHit->field_0x25;
  VStack_1.woId = voxelHit->woId;
  VStack_1._44_4_ = *(undefined4 *)&voxelHit->field_0x2c;
  __return_storage_ptr__->z = 0;
  VStack_1.cube = voxelHit->cube;
  VStack_1.distance = voxelHit->distance;
  VStack_1._60_4_ = *(undefined4 *)&voxelHit->field_0x3c;
  VStack_1.collider = voxelHit->collider;
  VStack_1.transform = voxelHit->transform;
  VStack_1.interactionFlags = voxelHit->interactionFlags;
  bVar3 = PickupItemModelGun_GetCubePosFromFineGrainedTerrain
                    (this,&VStack_1,fVar2,__return_storage_ptr__,(MethodInfo *)0x0);
  if (bVar3 != 0) {
    return __return_storage_ptr__;
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if ((this_00 != (MVWorldObjectClientManager *)0x0) &&
     (pOVar4 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetSingletonWorldObject
                         (this_00,
                          MVCubeModelFineGrainedTerrain_MethodInfo__MVWorldObjectClientManager__GetSingletonWorldObject<MVCubeModelFineGrainedTerrain>__
                         ), pOVar4 != (Object *)0x0)) {
    gameObject = (GameObject *)pOVar4[0xc].monitor;
    fVar2 = (voxelHit->point).x;
    fVar5 = (voxelHit->point).y;
    fVar6 = (voxelHit->point).z;
    fVar7 = (voxelHit->normal).x * _UNK_?;
    fVar8 = (voxelHit->normal).y * _UNK_?;
    fVar9 = (voxelHit->normal).z * _UNK_?;
    if (*(int *)&(TypeInfo__SharedCubeFunctions->_1).field_0x1c == 0) {
      FUN_?();
    }
    VStack_10.y = fVar8 + fVar5;
    VStack_10.x = fVar7 + fVar2;
    VStack_10.z = fVar9 + fVar6;
    pIVar11 = SharedCubeFunctions::SharedCubeFunctions_WorldToLocal
                       (&IStackX_8,gameObject,&VStack_10,0,(MethodInfo *)0x0);
    iVar12 = pIVar11->y;
    iVar13 = pIVar11->z;
    __return_storage_ptr__->x = pIVar11->x;
    __return_storage_ptr__->y = iVar12;
    __return_storage_ptr__->z = iVar13;
    return __return_storage_ptr__;
  }
  FUN_?();
  pcVar14 = (code *)swi(3);
  pIVar11 = (IntVector *)(*pcVar14)();
  return pIVar11;
}


/* Boolean GetCubePosFromFineGrainedTerrain(VoxelHit, Single, IntVector ByRef) */

bool Assembly-CSharp.dll::PickupItemModelGun::PickupItemModelGun_GetCubePosFromFineGrainedTerrain
               (PickupItemModelGun *this,VoxelHit *voxelHit,float maxDistanceToEdge,IntVector *pos,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MV__WorldObject__CubeBase);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Cube);
    LOCK();
    UNLOCK();
    FUN_?(&TypeRef__Edge);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Edge);
    LOCK();
    UNLOCK();
    FUN_?(&TypeRef__MV__WorldObject__Face);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__WorldObject__Face);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__IDisposable);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__IEnumerator);
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  aIStack_1[0]._0_4_ = 0.0;
  pIStack_2 = (IEnumerator *)0x0;
  lStack_3 = 0;
  this_00 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  VStack_4.point.x = (voxelHit->point).x;
  VStack_4.point.y = (voxelHit->point).y;
  VStack_4._8_8_ = *(undefined8 *)&(voxelHit->point).z;
  VStack_4.normal.y = (voxelHit->normal).y;
  VStack_4.normal.z = (voxelHit->normal).z;
  VStack_4.cubePos = voxelHit->cubePos;
  VStack_4._30_2_ = *(undefined2 *)&voxelHit->field_0x1e;
  VStack_4.cube = voxelHit->cube;
  VStack_4.distance = voxelHit->distance;
  VStack_4._60_4_ = *(undefined4 *)&voxelHit->field_0x3c;
  VStack_4.collider = voxelHit->collider;
  VStack_4.transform = voxelHit->transform;
  VStack_4.interactionFlags = voxelHit->interactionFlags;
  if (this_00 != (MVWorldObjectClientManager *)0x0) {
    wo = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                   (this_00,voxelHit->woId,(MethodInfo *)0x0);
    if (wo == (MVWorldObjectClient *)0x0) {
      return 0;
    }
    bVar5 = (TypeInfo__MVCubeModelFineGrainedTerrain->_1).naturalAligment;
    if (((wo->klass->_1).naturalAligment < bVar5) ||
       (bVar6 = true,
       (MVCubeModelFineGrainedTerrain__Class *)(wo->klass->_1).typeHierarchy[(ulonglong)bVar5 - 1]
       != TypeInfo__MVCubeModelFineGrainedTerrain)) {
      bVar6 = false;
    }
    pMVar7 = (MVWorldObjectClient *)0x0;
    if (bVar6) {
      pMVar7 = wo;
    }
    if (pMVar7 == (MVWorldObjectClient *)0x0) {
      return 0;
    }
    gameObject = (wo->fields).gameObject;
    pCVar8 = voxelHit->cube;
    uVar9._0_4_ = voxelHit->distance;
    uVar9._4_4_ = *(undefined4 *)&voxelHit->field_0x3c;
    FVar10 = voxelHit->face;
    uVar11._0_4_ = voxelHit->face;
    uVar11._4_1_ = voxelHit->isCubeHit;
    uVar11._5_3_ = *(undefined3 *)&voxelHit->field_0x25;
    uVar12._0_4_ = voxelHit->face;
    uVar12._4_1_ = voxelHit->isCubeHit;
    uVar12._5_3_ = *(undefined3 *)&voxelHit->field_0x25;
    VStack_4.face = voxelHit->face;
    VStack_4.isCubeHit = voxelHit->isCubeHit;
    VStack_4._37_3_ = *(undefined3 *)&voxelHit->field_0x25;
    uVar13._0_4_ = voxelHit->woId;
    uVar13._4_4_ = *(undefined4 *)&voxelHit->field_0x2c;
    uVar14._0_4_ = voxelHit->woId;
    uVar14._4_4_ = *(undefined4 *)&voxelHit->field_0x2c;
    VStack_4.woId = voxelHit->woId;
    VStack_4._44_4_ = *(undefined4 *)&voxelHit->field_0x2c;
    VStack_4.collider = voxelHit->collider;
    VStack_4.transform = voxelHit->transform;
    uVar15._0_4_ = (voxelHit->point).x;
    uVar15._4_4_ = (voxelHit->point).y;
    VStack_4.point.x = (voxelHit->point).x;
    VStack_4.point.y = (voxelHit->point).y;
    pfVar16 = &(voxelHit->point).z;
    fVar17 = *pfVar16;
    VStack_4._8_8_ = *(undefined8 *)pfVar16;
    VStack_4.normal.y = (voxelHit->normal).y;
    VStack_4.normal.z = (voxelHit->normal).z;
    VStack_4.cubePos = voxelHit->cubePos;
    VStack_4._30_2_ = *(undefined2 *)&voxelHit->field_0x1e;
    VStack_4.interactionFlags = voxelHit->interactionFlags;
    uVar18._0_4_ = (voxelHit->normal).y;
    uVar18._4_4_ = (voxelHit->normal).z;
    uVar19._0_4_ = (voxelHit->normal).y;
    uVar19._4_4_ = (voxelHit->normal).z;
    iVar20 = (voxelHit->cubePos).z;
    IVar21 = voxelHit->cubePos;
    uVar22._0_6_ = voxelHit->cubePos;
    uVar22._6_2_ = *(undefined2 *)&voxelHit->field_0x1e;
    uVar23._0_6_ = voxelHit->cubePos;
    uVar23._6_2_ = *(undefined2 *)&voxelHit->field_0x1e;
    VStack_4.cube = pCVar8;
    VStack_4._56_8_ = uVar9;
    pMStack_24 = wo;
    pMStack_25 = pMVar7;
    if (*(int *)&(TypeInfo__Cube->_1).field_0x1c == 0) {
      FUN_?();
    }
    pVStack_26 = (Vector3__Array *)uVar15;
    fStack_27 = fVar17;
    VStack_28._0_6_ = IVar21;
    edge = Cube::Cube_GetEdge_1
                     (gameObject,pCVar8,FVar10,(Vector3 *)&pVStack_26,(IntVector *)&VStack_28,
                      (MethodInfo *)0x0);
    VStack_4.point.x = (voxelHit->point).x;
    VStack_4.point.y = (voxelHit->point).y;
    VStack_4._8_8_ = *(undefined8 *)&(voxelHit->point).z;
    VStack_4.collider = voxelHit->collider;
    VStack_4.transform = voxelHit->transform;
    VStack_4.interactionFlags = voxelHit->interactionFlags;
    VStack_28.y._0_2_ = iVar20;
    VStack_28.x = (float)(int)*(undefined8 *)&voxelHit->cubePos;
    in_R8 = (Vector3 *)(ulonglong)(uint)voxelHit->face;
    VStack_4.normal._4_8_ = uVar19;
    VStack_4._24_8_ = uVar23;
    VStack_4._32_8_ = uVar12;
    VStack_4._40_8_ = uVar14;
    VStack_4.cube = pCVar8;
    VStack_4._56_8_ = uVar9;
    edgeVerticesCubeHit =
         Cube::Cube_GetEdgeVerticesWorld
                   ((wo->fields).gameObject,voxelHit->cube,voxelHit->face,edge,
                    (IntVector *)&VStack_28,(MethodInfo *)0x0);
    uVar29._0_4_ = (voxelHit->point).x;
    uVar29._4_4_ = (voxelHit->point).y;
    VStack_4.collider = voxelHit->collider;
    VStack_4.transform = voxelHit->transform;
    VStack_4.interactionFlags = voxelHit->interactionFlags;
    VStack_4.normal._4_8_ = uVar18;
    VStack_4._24_8_ = uVar22;
    VStack_4._32_8_ = uVar11;
    VStack_4._40_8_ = uVar13;
    VStack_4.cube = pCVar8;
    VStack_4._56_8_ = uVar9;
    pVStack_26 = edgeVerticesCubeHit;
    if (edgeVerticesCubeHit != (Vector3__Array *)0x0) {
      if (((int)edgeVerticesCubeHit->max_length == 0) || ((uint)edgeVerticesCubeHit->max_length < 2)
         ) {
        FUN_?();
        pcVar30 = (code *)swi(3);
        bVar31 = (*pcVar30)();
        return bVar31;
      }
      VStack_32.x = 0.0;
      VStack_32.y = 0.0;
      VStack_32.z = 0.0;
      VStack_28.x = edgeVerticesCubeHit->vector[1].x;
      VStack_28.y = edgeVerticesCubeHit->vector[1].y;
      VStack_28.z = edgeVerticesCubeHit->vector[1].z;
      auStack_33._0_4_ = edgeVerticesCubeHit->vector[0].x;
      auStack_33._4_4_ = edgeVerticesCubeHit->vector[0].y;
      ppIStack_34 = (IEnumerator **)CONCAT44(ppIStack_34._4_4_,edgeVerticesCubeHit->vector[0].z);
      ppIStack_35 = (IEnumerator **)CONCAT44(ppIStack_35._4_4_,(voxelHit->point).z);
      in_R8 = &VStack_28;
      auStack_36 = (undefined1  [8])uVar29;
      bVar31 = MathFunctions::MathFunctions_DistancePointLine_1
                         ((Vector3 *)auStack_36,(Vector3 *)auStack_33,in_R8,(float *)aIStack_1,
                          &VStack_32,(MethodInfo *)0x0);
      pIVar37 = TypeRef__MV__WorldObject__Face;
      if (bVar31 == 0) {
        return 0;
      }
      if (maxDistanceToEdge <= (float)aIStack_1[0]._0_4_) {
        return 0;
      }
      if (*(int *)(lRam_? + 0xe4) == 0) {
        FUN_?();
      }
      pTVar38 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                          ((RuntimeTypeHandle)pIVar37,(MethodInfo *)0x0);
      if (*(int *)(lRam_? + 0xe4) == 0) {
        FUN_?();
      }
      if (*(int *)(lRam_? + 0xe4) == 0) {
        FUN_?();
      }
      if (pTVar38 == (Type *)0x0) {
        uVar9 = func_?(&TypeInfo__System__ArgumentNullException);
        pAVar39 = (ArgumentNullException *)func_?(uVar9);
        pSVar40 = (String *)func_?(&StringLiteral_enumType);
        mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
                  (pAVar39,pSVar40,(MethodInfo *)0x0);
        uVar9 = func_?(&MethodInfo__System__Enum__GetValues_System__Type_);
        FUN_?(pAVar39,uVar9);
        pcVar30 = (code *)swi(3);
        bVar31 = (*pcVar30)();
        return bVar31;
      }
      pAVar41 = (Array *)(*(pTVar38->klass->vtable).GetEnumValues.methodPtr)(pTVar38);
      if (pAVar41 != (Array *)0x0) {
        pIStack_42 = mscorlib.dll::System::Array::Array_GetEnumerator(pAVar41,(MethodInfo *)0x0);
        auStack_36._0_4_ = 0.0;
        auStack_36._4_4_ = 0.0;
        ppIStack_35 = &pIStack_42;
        plStack_43 = &lStack_3;
        while (pIStack_42 != (IEnumerator *)0x0) {
          cVar44 = FUN_?(0,TypeInfo__System__Collections__IEnumerator);
          if (cVar44 == '\0') {
            lVar45 = FUN_?(*ppIStack_35,TypeInfo__System__IDisposable);
            *plStack_43 = lVar45;
            if (lVar45 == 0) {
              return 0;
            }
            FUN_?(0,TypeInfo__System__IDisposable,lVar45);
            return 0;
          }
          if (pIStack_42 == (IEnumerator *)0x0) goto code_?;
          plVar46 = (longlong *)FUN_?(1,TypeInfo__System__Collections__IEnumerator);
          pIVar37 = TypeRef__Edge;
          if (plVar46 == (longlong *)0x0) goto code_?;
          if (*(Il2CppClass **)(*plVar46 + 0x40) !=
              (TypeInfo__MV__WorldObject__Face->_0).element_class) goto code_?;
          FVar10 = *(Face__Enum *)(plVar46 + 2);
          VStack_4.point.x = (voxelHit->point).x;
          VStack_4.point.y = (voxelHit->point).y;
          VStack_4._8_8_ = *(undefined8 *)&(voxelHit->point).z;
          VStack_4.normal.y = (voxelHit->normal).y;
          VStack_4.normal.z = (voxelHit->normal).z;
          VStack_4.cubePos = voxelHit->cubePos;
          VStack_4._30_2_ = *(undefined2 *)&voxelHit->field_0x1e;
          VStack_4.cube = voxelHit->cube;
          VStack_4.distance = voxelHit->distance;
          VStack_4._60_4_ = *(undefined4 *)&voxelHit->field_0x3c;
          VStack_4.collider = voxelHit->collider;
          VStack_4.transform = voxelHit->transform;
          VStack_4.interactionFlags = voxelHit->interactionFlags;
          if (FVar10 != voxelHit->face) {
            if (*(int *)(lRam_? + 0xe4) == 0) {
              FUN_?();
            }
            pTVar38 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                                ((RuntimeTypeHandle)pIVar37,(MethodInfo *)0x0);
            if (*(int *)(lRam_? + 0xe4) == 0) {
              FUN_?();
            }
            if (*(int *)(lRam_? + 0xe4) == 0) {
              FUN_?();
            }
            if (pTVar38 == (Type *)0x0) goto code_?;
            pAVar41 = (Array *)(*(pTVar38->klass->vtable).GetEnumValues.methodPtr)(pTVar38);
            if (pAVar41 == (Array *)0x0) goto code_?;
            pIStack_2 = mscorlib.dll::System::Array::Array_GetEnumerator
                                    (pAVar41,(MethodInfo *)0x0);
            auStack_33._0_4_ = 0.0;
            auStack_33._4_4_ = 0.0;
            ppIStack_34 = &pIStack_2;
            plStack_47 = &lStack_3;
            while( true ) {
              if (pIStack_2 == (IEnumerator *)0x0) goto code_?;
              cVar44 = FUN_?(0,TypeInfo__System__Collections__IEnumerator);
              if (cVar44 == '\0') break;
              if (pIStack_2 == (IEnumerator *)0x0) goto code_?;
              in_R8 = (Vector3 *)FUN_?(1,TypeInfo__System__Collections__IEnumerator);
              if (in_R8 == (Vector3 *)0x0) goto code_?;
              if (*(Il2CppClass **)(*(longlong *)in_R8 + 0x40) != (TypeInfo__Edge->_0).element_class
                 ) goto code_?;
              if (in_R8[1].y != 0.0) {
                VStack_4.point.x = (voxelHit->point).x;
                VStack_4.point.y = (voxelHit->point).y;
                VStack_4._8_8_ = *(undefined8 *)&(voxelHit->point).z;
                VStack_4.normal.y = (voxelHit->normal).y;
                VStack_4.normal.z = (voxelHit->normal).z;
                VStack_4.cubePos = voxelHit->cubePos;
                VStack_4._30_2_ = *(undefined2 *)&voxelHit->field_0x1e;
                VStack_4.face = voxelHit->face;
                VStack_4.isCubeHit = voxelHit->isCubeHit;
                VStack_4._37_3_ = *(undefined3 *)&voxelHit->field_0x25;
                VStack_4.woId = voxelHit->woId;
                VStack_4._44_4_ = *(undefined4 *)&voxelHit->field_0x2c;
                VStack_4.cube = voxelHit->cube;
                VStack_4.distance = voxelHit->distance;
                VStack_4._60_4_ = *(undefined4 *)&voxelHit->field_0x3c;
                VStack_4.collider = voxelHit->collider;
                VStack_4.transform = voxelHit->transform;
                VStack_4.interactionFlags = voxelHit->interactionFlags;
                iVar48 = PickupItemModelGun_GetEdgeVertexMatchCount
                                   (wo,&VStack_4,FVar10,(Edge__Enum)in_R8[1].y,edgeVerticesCubeHit,
                                    (MethodInfo *)0x0);
                if (iVar48 == 2) {
                  VStack_4.point.x = (voxelHit->point).x;
                  VStack_4.point.y = (voxelHit->point).y;
                  VStack_4._8_8_ = *(undefined8 *)&(voxelHit->point).z;
                  IVar21 = voxelHit->cubePos;
                  VStack_4.face = voxelHit->face;
                  VStack_4.isCubeHit = voxelHit->isCubeHit;
                  VStack_4._37_3_ = *(undefined3 *)&voxelHit->field_0x25;
                  VStack_4.woId = voxelHit->woId;
                  VStack_4._44_4_ = *(undefined4 *)&voxelHit->field_0x2c;
                  VStack_4.cube = voxelHit->cube;
                  VStack_4.distance = voxelHit->distance;
                  VStack_4._60_4_ = *(undefined4 *)&voxelHit->field_0x3c;
                  VStack_4.collider = voxelHit->collider;
                  VStack_4.transform = voxelHit->transform;
                  VStack_4.interactionFlags = voxelHit->interactionFlags;
                  if (*(int *)&(TypeInfo__Cube->_1).field_0x1c == 0) {
                    FUN_?();
                  }
                  VStack_28._0_6_ = IVar21;
                  in_R8 = (Vector3 *)(ulonglong)FVar10;
                  pIVar49 = Cube::Cube_GetCubePosAboveFace
                                      ((IntVector *)&VStack_32,(IntVector *)&VStack_28,FVar10,
                                       (MethodInfo *)0x0);
                  fVar17 = *(float *)pIVar49;
                  aIStack_1[0].z = pIVar49->z;
                  *(float *)pos = fVar17;
                  pos->z = aIStack_1[0].z;
                  if (pMVar7 == (MVWorldObjectClient *)0x0) goto code_?;
                  if (pMVar7[1].klass != (MVWorldObjectClient__Class *)0x0) {
                    aIStack_1[0]._0_4_ = fVar17;
                    pCVar8 = RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_GetCube
                                        ((RuntimePrototypeCubeModel *)pMVar7[1].klass,aIStack_1,
                                         (MethodInfo *)0x0);
                    if (*(int *)&(TypeInfo__MV__WorldObject__CubeBase->_1).field_0x1c == 0) {
                      FUN_?();
                    }
                    FUN_?(&ppIStack_34);
                    FUN_?(&ppIStack_35);
                    return pCVar8 == (Cube *)0x0;
                  }
                  goto code_?;
                }
              }
            }
            FUN_?();
          }
        }
        goto code_?;
      }
    }
  }
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?(in_R8);
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
  FUN_?();
code_?:
  FUN_?();
code_?:
  uVar9 = func_?(&TypeInfo__System__ArgumentNullException);
  pAVar39 = (ArgumentNullException *)func_?(uVar9);
  pSVar40 = (String *)func_?(&StringLiteral_enumType);
  plVar46 = (longlong *)0x0;
  mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
            (pAVar39,pSVar40,(MethodInfo *)0x0);
  uVar9 = func_?(&MethodInfo__System__Enum__GetValues_System__Type_);
  FUN_?(pAVar39,uVar9);
code_?:
  FUN_?(plVar46);
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
  FUN_?();
  pcVar30 = (code *)swi(3);
  bVar31 = (*pcVar30)();
  return bVar31;
}


/* Int32 GetEdgeVertexMatchCount(MVWorldObjectClient, VoxelHit, Face, Edge, Vector3[]) */

int32_t Assembly-CSharp.dll::PickupItemModelGun::PickupItemModelGun_GetEdgeVertexMatchCount
                  (MVWorldObjectClient *wo,VoxelHit *voxelHit,Face__Enum face,Edge__Enum edge,
                  Vector3__Array *edgeVerticesCubeHit,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__Cube);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (wo != (MVWorldObjectClient *)0x0) {
    gameObject = (wo->fields).gameObject;
    cube = voxelHit->cube;
    fVar1 = *(float *)&voxelHit->cubePos;
    iVar2 = (voxelHit->cubePos).z;
    if (*(int *)&(TypeInfo__Cube->_1).field_0x1c == 0) {
      FUN_?();
    }
    uVar3 = 0;
    fStackX_8 = fVar1;
    iStackX_c = iVar2;
    pVVar4 = Cube::Cube_GetEdgeVerticesWorld
                       (gameObject,cube,face,edge,(IntVector *)&fStackX_8,(MethodInfo *)0x0);
    fVar1 = _UNK_?;
    if (pVVar4 != (Vector3__Array *)0x0) {
      pVVar5 = pVVar4->vector;
      uVar6 = uVar3;
      do {
        if ((int)pVVar4->max_length <= (int)uVar3) {
          return uVar6;
        }
        if ((uint)pVVar4->max_length <= uVar3) {
code_?:
          FUN_?();
          pcVar7 = (code *)swi(3);
          iVar8 = (*pcVar7)();
          return iVar8;
        }
        fVar9 = pVVar5->z;
        uVar10._0_4_ = pVVar5->x;
        uVar10._4_4_ = pVVar5->y;
        fStackX_8 = fVar9;
        if (edgeVerticesCubeHit == (Vector3__Array *)0x0) break;
        if ((int)edgeVerticesCubeHit->max_length == 0) goto code_?;
        uVar11 = edgeVerticesCubeHit->vector[0].x;
        uVar12 = edgeVerticesCubeHit->vector[0].y;
        fVar13 = edgeVerticesCubeHit->vector[0].z;
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__System__Math);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        fVar13 = fVar13 - fVar9;
        if (*(int *)&(TypeInfo__System__Math->_1).field_0x1c == 0) {
          FUN_?();
        }
        dVar14 = (double)(((float)uVar12 - (float)uVar10._4_4_) * ((float)uVar12 - (float)uVar10._4_4_)
                          + ((float)uVar11 - (float)(undefined4)uVar10) *
                            ((float)uVar11 - (float)(undefined4)uVar10) + fVar13 * fVar13);
        if (dVar14 < 0.0) {
          dVar14 = (double)FUN_?();
        }
        else {
          auVar15._8_8_ = 0;
          auVar15._0_8_ = dVar14;
          auVar15 = sqrtpd(ZEXT816(0),auVar15);
          dVar14 = auVar15._0_8_;
        }
        uVar16 = uVar6 + 1;
        if (fVar1 <= (float)dVar14) {
          uVar16 = uVar6;
        }
        if ((uint)edgeVerticesCubeHit->max_length < 2) goto code_?;
        uStack_17._0_4_ = edgeVerticesCubeHit->vector[1].x;
        uStack_17._4_4_ = edgeVerticesCubeHit->vector[1].y;
        fStack_18 = fStackX_8;
        fStack_19 = edgeVerticesCubeHit->vector[1].z;
        uVar3 = uVar3 + 1;
        pVVar5 = pVVar5 + 1;
        uStack_20 = uVar10;
        fVar9 = (float)FUN_?(&uStack_17,&uStack_20);
        uVar6 = uVar16 + 1;
        if (fVar1 <= fVar9) {
          uVar6 = uVar16;
        }
      } while( true );
    }
  }
  FUN_?();
  pcVar7 = (code *)swi(3);
  iVar8 = (*pcVar7)();
  return iVar8;
}


/* Void HandleCubeHit(VoxelHit, Ray) */

void Assembly-CSharp.dll::PickupItemModelGun::PickupItemModelGun_HandleCubeHit
               (PickupItemModelGun *this,VoxelHit *voxelHit,Ray *lineOfFire,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_cubeLanded);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (pMVar1 != (MVGameControllerBase *)0x0) {
    this_00 = (pMVar1->fields).audioManager;
    aVStack_2[0].x = (voxelHit->point).x;
    aVStack_2[0].y = (voxelHit->point).y;
    aVStack_2[0].z = (voxelHit->point).z;
    if (this_00 != (AudioManager *)0x0) {
      AudioManager::AudioManager_Play
                (this_00,StringLiteral_cubeLanded,(this->fields).cubeLandedSound,aVStack_2,
                 _UNK_?,SoundRangeDistance__Enum_Long,_UNK_?,(MethodInfo *)0x0);
      return;
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void HandleCubeHitLocal(VoxelHit, Ray) */

void Assembly-CSharp.dll::PickupItemModelGun::PickupItemModelGun_HandleCubeHitLocal
               (PickupItemModelGun *this,VoxelHit *voxelHit,Ray *lineOfFire,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MV__WorldObject__RuntimeEvents__SingleCubeFineGrainedEvent);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  auStack_1._0_4_ = (voxelHit->point).x;
  auStack_1._4_4_ = (voxelHit->point).y;
  auStack_1._8_8_ = *(undefined8 *)&(voxelHit->point).z;
  auStack_1._16_4_ = (voxelHit->normal).y;
  auStack_1._20_4_ = (voxelHit->normal).z;
  auStack_1._24_6_ = voxelHit->cubePos;
  auStack_1._30_2_ = *(undefined2 *)&voxelHit->field_0x1e;
  auStack_1._32_4_ = voxelHit->face;
  auStack_1[0x24] = voxelHit->isCubeHit;
  auStack_1._37_3_ = *(undefined3 *)&voxelHit->field_0x25;
  auStack_1._40_4_ = voxelHit->woId;
  auStack_1._44_4_ = *(undefined4 *)&voxelHit->field_0x2c;
  uStack_2 = voxelHit->cube;
  uStack_3._0_4_ = voxelHit->distance;
  uStack_3._4_4_ = *(undefined4 *)&voxelHit->field_0x3c;
  pCStack_4 = voxelHit->collider;
  pTStack_5 = voxelHit->transform;
  iStack_6 = voxelHit->interactionFlags;
  pIVar7 = PickupItemModelGun_GetCubePos(&IStackX_10,this,(VoxelHit *)auStack_1,(MethodInfo *)0x0)
  ;
  iVar8 = pIVar7->x;
  iVar9 = pIVar7->y;
  iVar10 = pIVar7->z;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar11 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (((pMVar11 == (MVGameControllerBase *)0x0) ||
      (pMVar12 = (pMVar11->fields).game, pMVar12 == (MVNetworkGame *)0x0)) ||
     (pWVar13 = (pMVar12->fields).worldNetwork, pWVar13 == (WorldNetwork *)0x0)) {
code_?:
    FUN_?();
    pcVar14 = (code *)swi(3);
    (*pcVar14)();
    return;
  }
  this_01 = (RuntimeEventManager *)(pWVar13->fields)._.runtimeEventManagerNetwork;
  uVar15 = (this->fields).material;
  singleCubeFineGrainedEvent =
       (SingleCubeFineGrainedEvent *)
       FUN_?(TypeInfo__MV__WorldObject__RuntimeEvents__SingleCubeFineGrainedEvent);
  (singleCubeFineGrainedEvent->fields)._.position.x = iVar8;
  (singleCubeFineGrainedEvent->fields)._.position.y = iVar9;
  (singleCubeFineGrainedEvent->fields)._.position.z = iVar10;
  (singleCubeFineGrainedEvent->fields)._._RuntimeEventType_k__BackingField = 1;
  (singleCubeFineGrainedEvent->fields).material = uVar15;
  if (this_01 == (RuntimeEventManager *)0x0) goto code_?;
  auStack_1._8_8_ = &UNK_?;
  bVar16 = RuntimeEventManager::RuntimeEventManager_HandleEvent
                     (this_01,singleCubeFineGrainedEvent,(MethodInfo *)0x0);
  if (bVar16 != 0) {
    if (singleCubeFineGrainedEvent == (SingleCubeFineGrainedEvent *)0x0) goto DAT_?;
    if ((singleCubeFineGrainedEvent->fields)._._RuntimeEventType_k__BackingField == 2) {
      uVar17._0_2_ = (singleCubeFineGrainedEvent->fields)._.position.x;
      uVar17._2_2_ = (singleCubeFineGrainedEvent->fields)._.position.y;
      pMVar18 = (this_01->fields).cubeModelPrototypeTerrain;
      pMVar19 = (this_01->fields).cubeModelFineGrainedTerrain;
      sVar20 = (singleCubeFineGrainedEvent->fields)._.position.z;
      uStack_2 = (Cube *)CONCAT44(uStack_2._4_4_,uVar17);
      if (cRam_? == '\0') {
        auStack_1._8_8_ = &UNK_?;
        FUN_?(&TypeInfo__MV__WorldObject__ICubeModel);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (pMVar19 == (MVCubeModelFineGrainedTerrain *)0x0) goto DAT_?;
      auStack_1._8_8_ = &UNK_?;
      puVar21 = (undefined8 *)
                FUN_?(&pCStack_4,0,TypeInfo__MV__WorldObject__ICubeModel,pMVar19);
      pCStack_4 = (Collider *)*puVar21;
      fVar22 = SUB84(pCStack_4,0);
      pTStack_5 = (Transform *)CONCAT44(pTStack_5._4_4_,*(undefined4 *)(puVar21 + 1));
      if (pMVar18 == (MVCubeModelPrototypeTerrain *)0x0) goto DAT_?;
      auStack_1._8_8_ = &UNK_?;
      puVar21 = (undefined8 *)
                FUN_?(&pCStack_4,0,TypeInfo__MV__WorldObject__ICubeModel,pMVar18);
      pCStack_4 = (Collider *)*puVar21;
      pTStack_5 = (Transform *)CONCAT44(pTStack_5._4_4_,*(undefined4 *)(puVar21 + 1));
      fVar22 = fVar22 / SUB84(pCStack_4,0);
      auStack_1._8_8_ = &UNK_?;
      fVar23 = (float)func_?((float)(int)(short)(undefined2)uVar17 * fVar22);
      auStack_1._8_8_ = &UNK_?;
      fVar24 = (float)func_?((float)(int)uStack_2._2_2_ * fVar22);
      auStack_1._8_8_ = &UNK_?;
      fVar22 = (float)func_?((float)(int)sVar20 * fVar22);
      pMVar18 = (this_01->fields).cubeModelPrototypeTerrain;
      if (pMVar18 == (MVCubeModelPrototypeTerrain *)0x0) goto DAT_?;
      if (cRam_? == '\0') {
        auStack_1._8_8_ = &UNK_?;
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_MV::WorldObject::CubeBase>__ContainsKey_MV__WorldObject__IntVector_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      this_00 = (pMVar18->fields).removedCubes;
      if (this_00 == (Dictionary_2_MV_WorldObject_IntVector_MV_WorldObject_CubeBase_ *)0x0)
      goto DAT_?;
      IStackX_10.y = (int16_t)(int)fVar24;
      IStackX_10.x = (int16_t)(int)fVar23;
      uStack_2 = (Cube *)CONCAT26(uStack_2._6_2_,CONCAT24((short)(int)fVar22,IStackX_10._0_4_));
      auStack_1._8_8_ = &UNK_?;
      iVar25 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
               IntVector,System::Object]::
               Dictionary_2_MV_WorldObject_IntVector_System_Object__FindEntry
                         ((Dictionary_2_MV_WorldObject_IntVector_System_Object_ *)this_00,
                          (IntVector *)&uStack_2,
                          MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_MV::WorldObject::CubeBase>__ContainsKey_MV__WorldObject__IntVector_
                          ->klass->rgctx_data[0x21].method);
      if (iVar25 < 0) {
        (singleCubeFineGrainedEvent->fields)._._RuntimeEventType_k__BackingField = 5;
      }
    }
    auStack_1._8_8_ = &UNK_?;
    this_02 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
    if (this_02 == (MVNetworkGame_OperationRequests *)0x0) {
DAT_?:
      auStack_1._8_8_ = &UNK_?;
      FUN_?();
      pcVar14 = (code *)swi(3);
      (*pcVar14)();
      return;
    }
    auStack_1._8_8_ = &UNK_?;
    MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_SendRuntimeEventOperation
              (this_02,(RuntimeEvent *)singleCubeFineGrainedEvent,(MethodInfo *)0x0);
  }
  return;
}


/* Void HandleCursors() */

void Assembly-CSharp.dll::PickupItemModelGun::PickupItemModelGun_HandleCursors
               (PickupItemModelGun *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MV__WorldObject__IntVector);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVCubeModelFineGrainedTerrain);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MVCubeModelFineGrainedTerrain_MethodInfo__MVWorldObjectClientManager__GetSingletonWorldObject<MVCubeModelFineGrainedTerrain>__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  VStack_1.point.x = 0.0;
  VStack_1.point.y = 0.0;
  VStack_1.point.z = 0.0;
  VStack_1.normal.x = 0.0;
  VStack_1.interactionFlags = 0;
  VStack_1.normal.y = 0.0;
  VStack_1.normal.z = 0.0;
  VStack_1.cubePos.x = 0;
  VStack_1.cubePos.y = 0;
  VStack_1.cubePos.z = 0;
  VStack_1._30_2_ = 0;
  VStack_1.face = 0;
  VStack_1.isCubeHit = 0;
  VStack_1._37_3_ = 0;
  VStack_1.woId = 0;
  VStack_1._44_4_ = 0;
  VStack_1.cube = (Cube *)0x0;
  VStack_1.distance = 0.0;
  VStack_1._60_4_ = 0;
  VStack_1.collider = (Collider *)0x0;
  VStack_1.transform = (Transform *)0x0;
  bVar2 = PickupItemModelGun_DoLineOfFireCheck(this,&VStack_1,(MethodInfo *)0x0);
  if (bVar2 == 0) {
    pGVar3 = (this->fields).primaryCursor;
    if (pGVar3 != (GUICellCursor *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__GUICellCursor__Fader);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      cVar4 = cRam_?;
      if ((pGVar3->fields).fadeState != 2) {
        fVar5 = (pGVar3->fields).currentAlpha;
        fVar6 = (pGVar3->fields).fadeOutTime;
        fVar7 = (pGVar3->fields).baseAlpha;
        pGVar8 = (GUICellCursor_Fader *)FUN_?(TypeInfo__GUICellCursor__Fader);
        GUICellCursor+Fader::GUICellCursor_Fader__ctor
                  (pGVar8,(fVar5 / fVar7) * fVar6,fVar5,0.0,(MethodInfo *)0x0);
        (pGVar3->fields).fader = pGVar8;
        func_?(&(pGVar3->fields).fader);
        cVar4 = cRam_?;
        (pGVar3->fields).fadeState = 2;
      }
      pGVar3 = (this->fields).secondaryCursor;
      if (pGVar3 != (GUICellCursor *)0x0) {
        if (cVar4 == '\0') {
          FUN_?(&TypeInfo__GUICellCursor__Fader);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if ((pGVar3->fields).fadeState == 2) {
          return;
        }
        fVar5 = (pGVar3->fields).currentAlpha;
        fVar6 = (pGVar3->fields).fadeOutTime;
        fVar7 = (pGVar3->fields).baseAlpha;
        pGVar8 = (GUICellCursor_Fader *)FUN_?(TypeInfo__GUICellCursor__Fader);
        GUICellCursor+Fader::GUICellCursor_Fader__ctor
                  (pGVar8,(fVar5 / fVar7) * fVar6,fVar5,0.0,(MethodInfo *)0x0);
        (pGVar3->fields).fader = pGVar8;
        func_?(&(pGVar3->fields).fader);
        (pGVar3->fields).fadeState = 2;
        return;
      }
    }
    goto code_?;
  }
  if ((this->fields).fireSecondary == 0) {
    pGVar3 = (this->fields).secondaryCursor;
    if (pGVar3 == (GUICellCursor *)0x0) goto code_?;
    GUICellCursor::GUICellCursor_set_FadeOverride
              (pGVar3,FadeOverride__Enum_FadeAllOut,(MethodInfo *)0x0);
    VStack_9.point.x = VStack_1.point.x;
    VStack_9.point.y = VStack_1.point.y;
    VStack_9.point.z = VStack_1.point.z;
    VStack_9.normal.x = VStack_1.normal.x;
    VStack_9.normal.y = VStack_1.normal.y;
    VStack_9.normal.z = VStack_1.normal.z;
    VStack_9.cubePos = VStack_1.cubePos;
    VStack_9._30_2_ = VStack_1._30_2_;
    VStack_9.face = VStack_1.face;
    VStack_9.isCubeHit = VStack_1.isCubeHit;
    VStack_9._37_3_ = VStack_1._37_3_;
    VStack_9.woId = VStack_1.woId;
    VStack_9._44_4_ = VStack_1._44_4_;
    VStack_9.cube = VStack_1.cube;
    VStack_9.distance = VStack_1.distance;
    VStack_9._60_4_ = VStack_1._60_4_;
    VStack_9.collider = VStack_1.collider;
    VStack_9.transform = VStack_1.transform;
    VStack_9.interactionFlags = VStack_1.interactionFlags;
    pIVar10 = PickupItemModelGun_GetCubePos(&IStackX_20,this,&VStack_9,(MethodInfo *)0x0);
    iVar11 = pIVar10->z;
    uVar12._0_2_ = pIVar10->x;
    uVar12._2_2_ = pIVar10->y;
    IStackX_18._0_4_ = uVar12;
    IStackX_18.z = iVar11;
    bVar2 = PickupItemModelGun_CanInsertCubeAtCubePos(this,&IStackX_18,(MethodInfo *)0x0);
    pGVar3 = (this->fields).primaryCursor;
    if (pGVar3 == (GUICellCursor *)0x0) goto code_?;
    if (bVar2 == 0) {
      GUICellCursor::GUICellCursor_set_FadeOverride
                (pGVar3,FadeOverride__Enum_FadeAllOut,(MethodInfo *)0x0);
      return;
    }
    uVar13._0_2_ = (pGVar3->fields).pos.x;
    uVar13._2_2_ = (pGVar3->fields).pos.y;
    iVar14 = (pGVar3->fields).pos.z;
    if (*(int *)&(TypeInfo__MV__WorldObject__IntVector->_1).field_0x1c == 0) {
      FUN_?();
    }
    IStackX_18._0_4_ = uVar13;
    IStackX_18.z = iVar14;
    aIStack_15[0]._0_4_ = uVar12;
    aIStack_15[0].z = iVar11;
    bVar2 = MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_op_Inequality
                       (aIStack_15,&IStackX_18,(MethodInfo *)0x0);
    pGVar3 = (this->fields).primaryCursor;
    if (bVar2 == 0) {
      if (pGVar3 == (GUICellCursor *)0x0) goto code_?;
      iVar16 = (pGVar3->fields).fadeState;
joined_?:
      if (iVar16 == 1) {
        return;
      }
    }
    else {
      pMVar17 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      if (((pMVar17 == (MVWorldObjectClientManager *)0x0) ||
          (pOVar18 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetSingletonWorldObject
                               (pMVar17,
                                MVCubeModelFineGrainedTerrain_MethodInfo__MVWorldObjectClientManager__GetSingletonWorldObject<MVCubeModelFineGrainedTerrain>__
                               ), pOVar18 == (Object *)0x0)) || (pGVar3 == (GUICellCursor *)0x0))
      goto code_?;
      IStackX_18._0_4_ = uVar12;
      IStackX_18.z = iVar11;
      GUICellCursor::GUICellCursor_SetCursorCube
                (pGVar3,&IStackX_18,(GameObject *)pOVar18[0xc].monitor,(MethodInfo *)0x0);
      pGVar3 = (this->fields).primaryCursor;
      if (pGVar3 == (GUICellCursor *)0x0) goto code_?;
      GUICellCursor::GUICellCursor_set_FadeOverride
                (pGVar3,FadeOverride__Enum_FadeAllOut,(MethodInfo *)0x0);
      pGVar3 = (this->fields).primaryCursor;
code_?:
      if (pGVar3 == (GUICellCursor *)0x0) goto code_?;
    }
    GUICellCursor::GUICellCursor_set_FadeState(pGVar3,FadeState__Enum_FadeIn,(MethodInfo *)0x0);
  }
  else {
    pGVar3 = (this->fields).primaryCursor;
    if (pGVar3 == (GUICellCursor *)0x0) goto code_?;
    GUICellCursor::GUICellCursor_set_FadeOverride
              (pGVar3,FadeOverride__Enum_FadeAllOut,(MethodInfo *)0x0);
    pMVar17 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (pMVar17 == (MVWorldObjectClientManager *)0x0) goto code_?;
    pMVar19 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                        (pMVar17,VStack_1.woId,(MethodInfo *)0x0);
    if (pMVar19 == (MVWorldObjectClient *)0x0) {
      pGVar3 = (this->fields).secondaryCursor;
    }
    else {
      bVar20 = (TypeInfo__MVCubeModelFineGrainedTerrain->_1).naturalAligment;
      if (((pMVar19->klass->_1).naturalAligment < bVar20) ||
         (bVar21 = true,
         (MVCubeModelFineGrainedTerrain__Class *)
         (pMVar19->klass->_1).typeHierarchy[(ulonglong)bVar20 - 1] !=
         TypeInfo__MVCubeModelFineGrainedTerrain)) {
        bVar21 = false;
      }
      pGVar3 = (this->fields).secondaryCursor;
      pMVar22 = (MVWorldObjectClient *)0x0;
      if (bVar21) {
        pMVar22 = pMVar19;
      }
      if (pMVar22 != (MVWorldObjectClient *)0x0) {
        uVar12 = VStack_1.cubePos._0_4_;
        iVar11 = VStack_1.cubePos.z;
        if (pGVar3 == (GUICellCursor *)0x0) goto code_?;
        uVar23._0_2_ = (pGVar3->fields).pos.x;
        uVar23._2_2_ = (pGVar3->fields).pos.y;
        iVar14 = (pGVar3->fields).pos.z;
        if (*(int *)&(TypeInfo__MV__WorldObject__IntVector->_1).field_0x1c == 0) {
          FUN_?();
        }
        uVar24 = VStack_1._24_8_;
        VStack_1.cubePos.x = (int16_t)uVar12;
        VStack_1.cubePos.y = SUB42(uVar12,2);
        aIStack_15[0].x = VStack_1.cubePos.x;
        aIStack_15[0].y = VStack_1.cubePos.y;
        aIStack_15[0].z = iVar11;
        IStackX_18._0_4_ = uVar23;
        IStackX_18.z = iVar14;
        VStack_1._24_8_ = uVar24;
        bVar2 = MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_op_Inequality
                           (aIStack_15,&IStackX_18,(MethodInfo *)0x0);
        uVar24 = VStack_1._24_8_;
        pGVar3 = (this->fields).secondaryCursor;
        if (bVar2 != 0) {
          if (pGVar3 == (GUICellCursor *)0x0) goto code_?;
          IStackX_18.x = VStack_1.cubePos.x;
          IStackX_18.y = VStack_1.cubePos.y;
          VStack_1.cubePos.z = SUB82(uVar24,4);
          IStackX_18.z = VStack_1.cubePos.z;
          VStack_1._24_8_ = uVar24;
          GUICellCursor::GUICellCursor_SetCursorCube
                    (pGVar3,&IStackX_18,(pMVar19->fields).gameObject,(MethodInfo *)0x0);
          pGVar3 = (this->fields).secondaryCursor;
          if (pGVar3 == (GUICellCursor *)0x0) goto code_?;
          GUICellCursor::GUICellCursor_set_FadeOverride
                    (pGVar3,FadeOverride__Enum_FadeAllOut,(MethodInfo *)0x0);
          pGVar3 = (this->fields).secondaryCursor;
          goto code_?;
        }
        if (pGVar3 == (GUICellCursor *)0x0) goto code_?;
        iVar16 = (pGVar3->fields).fadeState;
        goto joined_?;
      }
    }
    if (pGVar3 == (GUICellCursor *)0x0) {
code_?:
      FUN_?();
      pcVar25 = (code *)swi(3);
      (*pcVar25)();
      return;
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__GUICellCursor__Fader);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if ((pGVar3->fields).fadeState != 2) {
      fVar5 = (pGVar3->fields).currentAlpha;
      fVar6 = (pGVar3->fields).fadeOutTime;
      fVar7 = (pGVar3->fields).baseAlpha;
      pGVar8 = (GUICellCursor_Fader *)FUN_?(TypeInfo__GUICellCursor__Fader);
      GUICellCursor+Fader::GUICellCursor_Fader__ctor
                (pGVar8,(fVar5 / fVar7) * fVar6,fVar5,0.0,(MethodInfo *)0x0);
      (pGVar3->fields).fader = pGVar8;
      func_?(&(pGVar3->fields).fader);
      (pGVar3->fields).fadeState = 2;
    }
  }
  return;
}


/* Void OnFire(Boolean) */

void Assembly-CSharp.dll::PickupItemModelGun::PickupItemModelGun_OnFire
               (PickupItemModelGun *this,bool isLocal,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  CubeBullet_MethodInfo__UnityEngine__Component__GetComponentInChildren<CubeBullet>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Bullet__OnHitDelegate);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__PickupItemModelGun__HandleCubeHitLocal_VoxelHit__UnityEngine__Ray_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__PickupItemModelGun__HandleCubeHit_VoxelHit__UnityEngine__Ray_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_cubeFire);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  VStack_1.point.x = 0.0;
  VStack_1.point.y = 0.0;
  VStack_1.point.z = 0.0;
  VStack_1.normal.x = 0.0;
  VStack_1.interactionFlags = 0;
  VStack_1.normal.y = 0.0;
  VStack_1.normal.z = 0.0;
  VStack_1.cubePos.x = 0;
  VStack_1.cubePos.y = 0;
  VStack_1.cubePos.z = 0;
  VStack_1._30_2_ = 0;
  VStack_1.face = 0;
  VStack_1.isCubeHit = 0;
  VStack_1._37_3_ = 0;
  VStack_1.woId = 0;
  VStack_1._44_4_ = 0;
  VStack_1.cube = (Cube *)0x0;
  VStack_1.distance = 0.0;
  VStack_1._60_4_ = 0;
  VStack_1.collider = (Collider *)0x0;
  VStack_1.transform = (Transform *)0x0;
  cVar2 = (*(this->klass->vtable).get_IsAmmoDepleted.methodPtr)
                     (this,(this->klass->vtable).get_IsAmmoDepleted.method);
  if (cVar2 != '\0') {
    return;
  }
  bVar3 = PickupItemModelGun_DoLineOfFireCheck(this,&VStack_1,(MethodInfo *)0x0);
  if (bVar3 != 0) {
    VStack_4.point.x = VStack_1.point.x;
    VStack_4.point.y = VStack_1.point.y;
    VStack_4.point.z = VStack_1.point.z;
    VStack_4.normal.x = VStack_1.normal.x;
    VStack_4.normal.y = VStack_1.normal.y;
    VStack_4.normal.z = VStack_1.normal.z;
    VStack_4.cubePos = VStack_1.cubePos;
    VStack_4._30_2_ = VStack_1._30_2_;
    VStack_4.face = VStack_1.face;
    VStack_4.isCubeHit = VStack_1.isCubeHit;
    VStack_4._37_3_ = VStack_1._37_3_;
    VStack_4.woId = VStack_1.woId;
    VStack_4._44_4_ = VStack_1._44_4_;
    VStack_4.cube = VStack_1.cube;
    VStack_4.distance = VStack_1.distance;
    VStack_4._60_4_ = VStack_1._60_4_;
    VStack_4.collider = VStack_1.collider;
    VStack_4.transform = VStack_1.transform;
    VStack_4.interactionFlags = VStack_1.interactionFlags;
    pIVar5 = PickupItemModelGun_GetCubePos(&IStackX_20,this,&VStack_4,(MethodInfo *)0x0);
    IStackX_8.x = pIVar5->x;
    IStackX_8.y = pIVar5->y;
    IStackX_8.z = pIVar5->z;
    bVar3 = PickupItemModelGun_CanInsertCubeAtCubePos(this,&IStackX_8,(MethodInfo *)0x0);
    if (bVar3 == 0) {
      return;
    }
  }
  pTVar6 = (this->fields)._._.muzzlePoint;
  if (pTVar6 != (Transform *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    VStack_7.x = 0.0;
    VStack_7.y = 0.0;
    VStack_7.z = 0.0;
    pvVar8 = (pTVar6->fields)._._.m_CachedPtr;
    if (pvVar8 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar6,(MethodInfo *)0x0);
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    pcVar9 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar9 = (code *)FUN_?(&UNK_?), pcVar9 == (code *)0x0)) {
      uVar10 = func_?(&UNK_?);
      FUN_?(uVar10,0);
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    pcRam_? = pcVar9;
    (*pcRam_?)(pvVar8,&VStack_7);
    VStack_11.x = VStack_7.x;
    VStack_11.y = VStack_7.y;
    VStack_11.z = VStack_7.z;
    this_01 = Bullet::Bullet_CreateBullet
                        (PoolEnums__Enum_CubeGunBullet,&VStack_11,0.0,(MethodInfo *)0x0);
    if ((this_01 != (Bullet *)0x0) &&
       (this_02 = (CubeBullet *)
                  UnityEngine.CoreModule.dll::UnityEngine::Component::
                  Component_GetComponentInChildren_1
                            ((Component *)this_01,
                             CubeBullet_MethodInfo__UnityEngine__Component__GetComponentInChildren<CubeBullet>__
                            ), this_02 != (CubeBullet *)0x0)) {
      CubeBullet::CubeBullet_SetCubeMaterial(this_02,(this->fields).material,(MethodInfo *)0x0);
      pBVar12 = (Bullet_OnHitDelegate *)0x0;
      if (isLocal != 0) {
        pBVar13 = (this_01->fields).onHitLocal;
        pBVar14 = (BulletThrowingStar_OnHitDelegate *)FUN_?(TypeInfo__Bullet__OnHitDelegate)
        ;
        BulletThrowingStar+OnHitDelegate::BulletThrowingStar_OnHitDelegate__ctor
                  (pBVar14,(Object *)this,
                   MethodInfo__PickupItemModelGun__HandleCubeHitLocal_VoxelHit__UnityEngine__Ray_,
                   (MethodInfo *)0x0);
        pBVar13 = (Bullet_OnHitDelegate *)
                  mscorlib.dll::System::Delegate::Delegate_Combine
                            ((Delegate *)pBVar13,(Delegate *)pBVar14,(MethodInfo *)0x0);
        if (pBVar13 == (Bullet_OnHitDelegate *)0x0) {
          (this_01->fields).onHitLocal = (Bullet_OnHitDelegate *)0x0;
        }
        else {
          pBVar15 = pBVar12;
          if (pBVar13->klass == TypeInfo__Bullet__OnHitDelegate) {
            pBVar15 = pBVar13;
          }
          if (pBVar15 == (Bullet_OnHitDelegate *)0x0) {
            FUN_?();
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          (this_01->fields).onHitLocal = pBVar15;
          pBVar15 = pBVar12;
          if (pBVar13->klass == TypeInfo__Bullet__OnHitDelegate) {
            pBVar15 = pBVar13;
          }
          if (pBVar15 == (Bullet_OnHitDelegate *)0x0) {
            FUN_?();
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
        }
        if (iRam_? != 0) {
          uVar16 = (uint)((ulonglong)&(this_01->fields).onHitLocal >> 0xc);
          uVar17 = (ulonglong)((uVar16 & 0x1fffff) >> 6);
          do {
            uVar18 = *(ulonglong *)(uVar17 * 8 + 0xADDR);
            puVar19 = (ulonglong *)(uVar17 * 8 + 0xADDR);
            LOCK();
            bVar20 = uVar18 == *puVar19;
            if (bVar20) {
              *puVar19 = uVar18 | 1L << (uVar16 & 0x3f);
            }
            UNLOCK();
          } while (!bVar20);
        }
      }
      pBVar13 = (this_01->fields).onHit;
      pBVar14 = (BulletThrowingStar_OnHitDelegate *)FUN_?(TypeInfo__Bullet__OnHitDelegate);
      BulletThrowingStar+OnHitDelegate::BulletThrowingStar_OnHitDelegate__ctor
                (pBVar14,(Object *)this,
                 MethodInfo__PickupItemModelGun__HandleCubeHit_VoxelHit__UnityEngine__Ray_,
                 (MethodInfo *)0x0);
      method_00 = (MethodInfo *)0x0;
      pBVar13 = (Bullet_OnHitDelegate *)
                mscorlib.dll::System::Delegate::Delegate_Combine
                          ((Delegate *)pBVar13,(Delegate *)pBVar14,(MethodInfo *)0x0);
      if (pBVar13 == (Bullet_OnHitDelegate *)0x0) {
        (this_01->fields).onHit = (Bullet_OnHitDelegate *)0x0;
      }
      else {
        pBVar15 = pBVar12;
        if (pBVar13->klass == TypeInfo__Bullet__OnHitDelegate) {
          pBVar15 = pBVar13;
        }
        if (pBVar15 == (Bullet_OnHitDelegate *)0x0) {
          FUN_?();
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        (this_01->fields).onHit = pBVar15;
        if (pBVar13->klass == TypeInfo__Bullet__OnHitDelegate) {
          pBVar12 = pBVar13;
        }
        if (pBVar12 == (Bullet_OnHitDelegate *)0x0) {
          FUN_?();
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
      }
      if (iRam_? != 0) {
        uVar16 = (uint)((ulonglong)&(this_01->fields).onHit >> 0xc);
        uVar17 = (ulonglong)((uVar16 & 0x1fffff) >> 6);
        method_00 = (MethodInfo *)(ulonglong)(uVar16 & 0x3f);
        do {
          uVar18 = *(ulonglong *)(uVar17 * 8 + 0xADDR);
          puVar19 = (ulonglong *)(uVar17 * 8 + 0xADDR);
          LOCK();
          bVar20 = uVar18 == *puVar19;
          if (bVar20) {
            *puVar19 = uVar18 | 1L << (longlong)method_00;
          }
          UNLOCK();
        } while (!bVar20);
      }
      pMVar21 = (this->fields)._._.owner;
      if (pMVar21 != (MVPickupOwner *)0x0) {
        uVar10._0_4_ = (pMVar21->fields).lookOrigin.x;
        uVar10._4_4_ = (pMVar21->fields).lookOrigin.y;
        fVar22 = (pMVar21->fields).lookOrigin.z;
        pVVar23 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_normalized
                            (&VStack_24,&(((this->fields)._._.owner)->fields).lookDirection,
                             method_00);
        RStack_25.m_Origin.z = fVar22;
        VStack_7.x = pVVar23->x;
        VStack_7.y = pVVar23->y;
        fVar22 = pVVar23->z;
        VStack_11._0_8_ = VStack_7._0_8_;
        VStack_11.z = fVar22;
        RStack_25.m_Origin._0_8_ = uVar10;
        fVar26 = (float)FUN_?(&VStack_11);
        if (_UNK_? < fVar26) {
          fVar27 = VStack_7.x / fVar26;
          fVar28 = VStack_7.y / fVar26;
          fVar22 = fVar22 / fVar26;
        }
        else {
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__UnityEngine__Vector3);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pVVar29 = TypeInfo__UnityEngine__Vector3->static_fields;
          fVar27 = (pVVar29->zeroVector).x;
          fVar28 = (pVVar29->zeroVector).y;
          fVar22 = (pVVar29->zeroVector).z;
        }
        VStack_7.y = fVar28;
        VStack_7.x = fVar27;
        pMVar21 = (this->fields)._._.owner;
        RStack_25.m_Direction.x = fVar27;
        if (pMVar21 != (MVPickupOwner *)0x0) {
          fVar27 = MVPickupOwner::MVPickupOwner_GetAbsolutProjectileSpeed
                            (pMVar21,(this->fields).speed,(MethodInfo *)0x0);
          pMVar21 = (this->fields)._._.owner;
          fVar26 = (this->fields).range;
          if (pMVar21 != (MVPickupOwner *)0x0) {
            ignoreWoIDs = (HashSet_1_System_Int32_ *)
                          (*(pMVar21->klass->vtable).get_IgnoreWOIDs.methodPtr)();
            RStack_25.m_Direction.z = fVar22;
            RStack_25.m_Direction.y = VStack_7.y;
            Bullet::Bullet_Fire(this_01,fVar27,fVar26,&RStack_25,ignoreWoIDs,0,(MethodInfo *)0x0);
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__MVGameControllerBase);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pMVar30 = TypeInfo__MVGameControllerBase->static_fields->instance;
            if (pMVar30 != (MVGameControllerBase *)0x0) {
              pTVar6 = (this->fields)._._.muzzlePoint;
              this_00 = (pMVar30->fields).audioManager;
              clip = (this->fields).firePrimary;
              if (pTVar6 != (Transform *)0x0) {
                if (cRam_? == '\0') {
                  FUN_?(&
                                void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                               );
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                VStack_7.x = 0.0;
                VStack_7.y = 0.0;
                VStack_7.z = 0.0;
                pvVar8 = (pTVar6->fields)._._.m_CachedPtr;
                if (pvVar8 == (void *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                  ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar6,(MethodInfo *)0x0);
                  pcVar9 = (code *)swi(3);
                  (*pcVar9)();
                  return;
                }
                pcVar9 = pcRam_?;
                if ((pcRam_? == (code *)0x0) &&
                   (pcVar9 = (code *)FUN_?(&UNK_?), pcVar9 == (code *)0x0)) {
                  uVar10 = func_?(&UNK_?);
                  FUN_?(uVar10,0);
                  pcVar9 = (code *)swi(3);
                  (*pcVar9)();
                  return;
                }
                pcRam_? = pcVar9;
                (*pcRam_?)(pvVar8,&VStack_7);
                if (this_00 != (AudioManager *)0x0) {
                  VStack_11.x = VStack_7.x;
                  VStack_11.y = VStack_7.y;
                  VStack_11.z = VStack_7.z;
                  AudioManager::AudioManager_Play
                            (this_00,StringLiteral_cubeFire,clip,&VStack_11,_UNK_?,
                             SoundRangeDistance__Enum_Long,_UNK_?,(MethodInfo *)0x0);
                  piVar31 = &(this->fields).currentAmmo;
                  *piVar31 = *piVar31 + -1;
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
  FUN_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void OnFireSecondary(Boolean) */

void Assembly-CSharp.dll::PickupItemModelGun::PickupItemModelGun_OnFireSecondary
               (PickupItemModelGun *this,bool isLocal,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  UnityEngine__AudioSource_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::AudioSource>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVCubeModelFineGrainedTerrain);
    LOCK();
    UNLOCK();
    FUN_?(&
                  RailRay_MethodInfo__UnityEngine__Object__Instantiate<RailRay>_RailRay__UnityEngine__Vector3__UnityEngine__Quaternion_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__WorldObject__RuntimeEvents__SingleCubeFineGrainedEvent);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_cube_Destroyed);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Player);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Logic);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  aVStack_1[0].point.x = 0.0;
  aVStack_1[0].point.y = 0.0;
  aVStack_1[0].point.z = 0.0;
  aVStack_1[0].normal.x = 0.0;
  aVStack_1[0].interactionFlags = 0;
  aVStack_1[0].normal.y = 0.0;
  aVStack_1[0].normal.z = 0.0;
  aVStack_1[0].cubePos.x = 0;
  aVStack_1[0].cubePos.y = 0;
  aVStack_1[0].cubePos.z = 0;
  aVStack_1[0]._30_2_ = 0;
  aVStack_1[0].face = 0;
  aVStack_1[0].isCubeHit = 0;
  aVStack_1[0]._37_3_ = 0;
  aVStack_1[0].woId = 0;
  aVStack_1[0]._44_4_ = 0;
  aVStack_1[0].cube = (Cube *)0x0;
  aVStack_1[0].distance = 0.0;
  aVStack_1[0]._60_4_ = 0;
  aVStack_1[0].collider = (Collider *)0x0;
  aVStack_1[0].transform = (Transform *)0x0;
  pAVar2 = (AudioSource *)
            UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                      ((Component *)this,
                       UnityEngine__AudioSource_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::AudioSource>__
                      );
  if (pAVar2 != (AudioSource *)0x0) {
    UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_set_resource
              (pAVar2,(AudioResource *)(this->fields).releaseSound,(MethodInfo *)0x0);
    pAVar2 = (AudioSource *)
              UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                        ((Component *)this,
                         UnityEngine__AudioSource_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::AudioSource>__
                        );
    if (pAVar2 != (AudioSource *)0x0) {
      pMVar3 = (MethodInfo *)0x0;
      UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_set_loop
                (pAVar2,0,(MethodInfo *)0x0);
      pAVar2 = (AudioSource *)
                UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                          ((Component *)this,
                           UnityEngine__AudioSource_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::AudioSource>__
                          );
      if (pAVar2 != (AudioSource *)0x0) {
        UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_Play_1
                  (pAVar2,(MethodInfo *)0x0);
        pMVar4 = (this->fields)._._.owner;
        if (pMVar4 != (MVPickupOwner *)0x0) {
          uVar5._0_4_ = (pMVar4->fields).lookOrigin.x;
          uVar5._4_4_ = (pMVar4->fields).lookOrigin.y;
          fVar6 = (pMVar4->fields).lookOrigin.z;
          QStack_7._0_8_ = uVar5;
          pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_normalized
                              (&RStack_9.m_Origin,&(pMVar4->fields).lookDirection,pMVar3);
          QStack_10.x = pVVar8->x;
          QStack_10.y = pVVar8->y;
          fVar11 = pVVar8->z;
          QStack_10.z = fVar11;
          QStack_12._0_8_ = QStack_10._0_8_;
          QStack_13._0_8_ = uVar5;
          QStack_13.z = fVar6;
          fVar14 = (float)FUN_?(&QStack_10);
          if (_UNK_? < fVar14) {
            QStack_10.x = QStack_12.x / fVar14;
            fVar11 = fVar11 / fVar14;
            QStack_10.y = QStack_12.y / fVar14;
          }
          else {
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__UnityEngine__Vector3);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pVVar15 = TypeInfo__UnityEngine__Vector3->static_fields;
            QStack_10.x = (pVVar15->zeroVector).x;
            QStack_10.y = (pVVar15->zeroVector).y;
            fVar11 = (pVVar15->zeroVector).z;
          }
          QStack_13.w = QStack_10.x;
          fStack_16 = QStack_10.y;
          fStack_17 = fVar11;
          uVar18 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                             (StringLiteral_Player,(MethodInfo *)0x0);
          uVar19 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                             (StringLiteral_Logic,(MethodInfo *)0x0);
          RStack_9.m_Direction.x = QStack_13.w;
          RStack_9.m_Origin.z = QStack_13.z;
          RStack_9.m_Direction.z = fStack_17;
          RStack_9.m_Direction.y = fStack_16;
          RStack_9.m_Origin.x = QStack_13.x;
          RStack_9.m_Origin.y = QStack_13.y;
          bVar20 = CollisionDetection::CollisionDetection_MVHit_1
                             (&RStack_9,aVStack_1,(this->fields).range,
                              (HashSet_1_System_Int32_ *)0x0,
                              ~(1 << (uVar18 & 0x1f)) & 0xfffffffbU & ~(1 << (uVar19 & 0x1f)),
                              (MethodInfo *)0x0);
          uVar5 = aVStack_1[0].point._0_8_;
          if (bVar20 == 0) {
            fVar21 = (this->fields).range;
            fVar14 = QStack_10.x * fVar21 + QStack_7.x;
            fVar22 = QStack_10.y * fVar21 + QStack_7.y;
            fVar6 = fVar11 * fVar21 + fVar6;
          }
          else {
            fVar14 = aVStack_1[0].point.x;
            fVar22 = aVStack_1[0].point.y;
            fVar6 = aVStack_1[0].point.z;
            this_01 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
            if (this_01 == (MVWorldObjectClientManager *)0x0) goto DAT_?;
            pMVar23 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                                (this_01,aVStack_1[0].woId,(MethodInfo *)0x0);
            if (pMVar23 != (MVWorldObjectClient *)0x0) {
              bVar24 = (TypeInfo__MVCubeModelFineGrainedTerrain->_1).naturalAligment;
              if ((bVar24 <= (pMVar23->klass->_1).naturalAligment) &&
                 ((MVCubeModelFineGrainedTerrain__Class *)
                  (pMVar23->klass->_1).typeHierarchy[(ulonglong)bVar24 - 1] ==
                  TypeInfo__MVCubeModelFineGrainedTerrain)) {
                piVar25 = &(this->fields).currentAmmo;
                *piVar25 = *piVar25 + 1;
                if (isLocal != 0) {
                  pMVar26 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
                  if ((pMVar26 == (MVNetworkGame *)0x0) ||
                     (pWVar27 = (pMVar26->fields).worldNetwork, pWVar27 == (WorldNetwork *)0x0))
                  goto DAT_?;
                  this_00 = (RuntimeEventManager *)(pWVar27->fields)._.runtimeEventManagerNetwork;
                  iVar28 = aVStack_1[0].cubePos.x;
                  iVar29 = aVStack_1[0].cubePos.y;
                  iVar30 = aVStack_1[0].cubePos.z;
                  singleCubeFineGrainedEvent =
                       (SingleCubeFineGrainedEvent *)
                       FUN_?(
                                    TypeInfo__MV__WorldObject__RuntimeEvents__SingleCubeFineGrainedEvent
                                    );
                  (singleCubeFineGrainedEvent->fields)._.position.x = iVar28;
                  (singleCubeFineGrainedEvent->fields)._.position.y = iVar29;
                  (singleCubeFineGrainedEvent->fields)._._RuntimeEventType_k__BackingField = 2;
                  (singleCubeFineGrainedEvent->fields)._.position.z = iVar30;
                  if (this_00 == (RuntimeEventManager *)0x0) goto DAT_?;
                  RuntimeEventManager::RuntimeEventManager_SendRuntimeEvent_1
                            (this_00,singleCubeFineGrainedEvent,(MethodInfo *)0x0);
                }
                this_02 = MVGameControllerBase::MVGameControllerBase_get_AudioManager
                                    ((MethodInfo *)0x0);
                uVar31 = aVStack_1[0].point._0_8_;
                if (this_02 == (AudioManager *)0x0) goto DAT_?;
                aVStack_1[0].point.x = (float)uVar5;
                aVStack_1[0].point.y = SUB84(uVar5,4);
                QStack_7.x = aVStack_1[0].point.x;
                QStack_7.y = aVStack_1[0].point.y;
                QStack_7.z = fVar6;
                aVStack_1[0].point._0_8_ = uVar31;
                AudioManager::AudioManager_Play
                          (this_02,StringLiteral_cube_Destroyed,(this->fields).cubeDestroyedSound,
                           (Vector3 *)&QStack_7,_UNK_?,SoundRangeDistance__Enum_Long,
                           _UNK_?,(MethodInfo *)0x0);
              }
            }
          }
          obj = (this->fields)._._.muzzlePoint;
          original = (this->fields).railGunRayPrefab;
          if (obj != (Transform *)0x0) {
            if (cRam_? == '\0') {
              FUN_?(&
                            void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                           );
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            QStack_10.x = 0.0;
            QStack_10.y = 0.0;
            QStack_10.z = 0.0;
            pvVar32 = (obj->fields)._._.m_CachedPtr;
            if (pvVar32 == (void *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
              ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
              pcVar33 = (code *)swi(3);
              (*pcVar33)();
              return;
            }
            pcVar33 = pcRam_?;
            if ((pcRam_? == (code *)0x0) &&
               (pcVar33 = (code *)FUN_?(&UNK_?), pcVar33 == (code *)0x0)) {
              uVar5 = func_?(&UNK_?);
              FUN_?(uVar5,0);
              pcVar33 = (code *)swi(3);
              (*pcVar33)();
              return;
            }
            pcRam_? = pcVar33;
            (*pcRam_?)(pvVar32,&QStack_10);
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__UnityEngine__Quaternion);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pQVar34 = TypeInfo__UnityEngine__Quaternion->static_fields;
            uVar31._0_4_ = (pQVar34->identityQuaternion).x;
            uVar31._4_4_ = (pQVar34->identityQuaternion).y;
            uVar35._0_4_ = (pQVar34->identityQuaternion).z;
            uVar35._4_4_ = (pQVar34->identityQuaternion).w;
            if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
              FUN_?();
            }
            pMVar3 = 
            RailRay_MethodInfo__UnityEngine__Object__Instantiate<RailRay>_RailRay__UnityEngine__Vector3__UnityEngine__Quaternion_
            ;
            if ((
                RailRay_MethodInfo__UnityEngine__Object__Instantiate<RailRay>_RailRay__UnityEngine__Vector3__UnityEngine__Quaternion_
                ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
              FUN_?(&TypeInfo__UnityEngine__Object);
              LOCK();
              UNLOCK();
              if ((pMVar3->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
                FUN_?(pMVar3);
              }
            }
            if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
              FUN_?();
            }
            QStack_7.x = QStack_10.x;
            QStack_7.y = QStack_10.y;
            QStack_7.z = QStack_10.z;
            RStack_9.m_Origin._0_8_ = uVar31;
            RStack_9._8_8_ = uVar35;
            pOVar36 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate
                                ((Object_1 *)original,(Vector3 *)&QStack_7,
                                 (Quaternion *)&RStack_9,(MethodInfo *)0x0);
            pvVar32 = ((pMVar3->field7_0x38).rgctx_data)->rgctxDataDummy;
            if ((*(byte *)((longlong)pvVar32 + 0x135) & 1) == 0) {
              pvVar32 = (void *)FUN_?(pvVar32);
            }
            if (pOVar36 != (Object_1 *)0x0) {
              lVar37 = FUN_?(pOVar36,pvVar32);
              uVar31 = _UNK_?;
              uVar5 = _UNK_?;
              if (lVar37 == 0) {
                FUN_?(pOVar36,pvVar32);
                pcVar33 = (code *)swi(3);
                (*pcVar33)();
                return;
              }
              *(ulonglong *)(lVar37 + 0x20) = CONCAT44(fVar22,fVar14);
              *(float *)(lVar37 + 0x28) = fVar6;
              *(undefined8 *)(lVar37 + 0x30) = uVar5;
              *(undefined8 *)(lVar37 + 0x38) = uVar31;
              return;
            }
          }
        }
      }
    }
  }
DAT_?:
  FUN_?();
  pcVar33 = (code *)swi(3);
  (*pcVar33)();
  return;
}


/* Void OnStateChanged(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::PickupItemModelGun::PickupItemModelGun_OnStateChanged
               (PickupItemModelGun *this,Dictionary_2_System_Object_System_Object_ *newState,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  CubeBullet_MethodInfo__UnityEngine__Component__GetComponentInChildren<CubeBullet>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_material);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_itemData);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((newState != (Dictionary_2_System_Object_System_Object_ *)0x0) &&
     (this_01 = (Dictionary_2_System_Object_System_Object_ *)
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                Object]::Dictionary_2_System_Object_System_Object__get_Item
                          (newState,(Object *)StringLiteral_itemData,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                          ), this_01 != (Dictionary_2_System_Object_System_Object_ *)0x0)) {
    bVar1 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1)
            .naturalAligment;
    if (((this_01->klass->_1).naturalAligment < bVar1) ||
       ((Dictionary_2_System_Object_System_Object___Class *)
        (this_01->klass->_1).typeHierarchy[(ulonglong)bVar1 - 1] !=
        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
      FUN_?(this_01,
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   );
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
             ::Dictionary_2_System_Object_System_Object__get_Item
                       (this_01,(Object *)StringLiteral_material,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    if (pOVar3 != (Object *)0x0) {
      if ((pOVar3->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
        FUN_?(pOVar3,lRam_?);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      (this->fields).material = *(uint8_t *)&pOVar3[1].klass;
      pOVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::
               Component_GetComponentInChildren_1
                         ((Component *)this,
                          CubeBullet_MethodInfo__UnityEngine__Component__GetComponentInChildren<CubeBullet>__
                         );
      if (pOVar3 != (Object *)0x0) {
        bVar4 = cRam_? == '\0';
        pOVar5 = pOVar3[2].klass;
        *(uint8_t *)&pOVar3[3].klass = (this->fields).material;
        if (bVar4) {
          FUN_?(&TypeInfo__MVGameControllerBase);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pMVar6 = TypeInfo__MVGameControllerBase->static_fields->instance;
        if ((((pMVar6 != (MVGameControllerBase *)0x0) &&
             (pMVar7 = (pMVar6->fields).game, pMVar7 != (MVNetworkGame *)0x0)) &&
            (this_00 = (pMVar7->fields)._MaterialRepository_k__BackingField,
            this_00 != (MVMaterialRepository *)0x0)) &&
           ((pMVar8 = MVMaterialRepository::MVMaterialRepository_GetMaterial
                                (this_00,*(uint8_t *)&pOVar3[3].klass,(MethodInfo *)0x0),
            pMVar8 != (MVMaterial *)0x0 && (pOVar5 != (Object__Class *)0x0)))) {
          UnityEngine.CoreModule.dll::UnityEngine::MeshFilter::MeshFilter_set_sharedMesh
                    ((MeshFilter *)pOVar5,(pMVar8->fields)._Mesh_k__BackingField,(MethodInfo *)0x0);
          pOVar3 = (Object *)pOVar3[2].monitor;
          pMVar9 = MVGameControllerBase::MVGameControllerBase_get_MaterialLoader((MethodInfo *)0x0);
          if ((pMVar9 != (MaterialLoader *)0x0) && (pOVar3 != (Object *)0x0)) {
            pMVar10 = (pMVar9->fields)._CubeModelMaterial_k__BackingField;
            if (cRam_? == '\0') {
              FUN_?(&
                            void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Renderer>_UnityEngine__Renderer_
                            ,pMVar10,0);
              LOCK();
              UNLOCK();
              FUN_?(&
                            void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__Marshal<UnityEngine::Material>_UnityEngine__Material_
                           );
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            if (pOVar3 == (Object *)0x0) {
              FUN_?();
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            pOVar5 = pOVar3[1].klass;
            if (pOVar5 == (Object__Class *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
              ThrowHelper_2_ThrowNullReferenceException(pOVar3,(MethodInfo *)0x0);
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            if ((
                void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__Marshal<UnityEngine::Material>_UnityEngine__Material_
                ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
              FUN_?();
            }
            if (pMVar10 == (Material *)0x0) {
              pvVar11 = (void *)0x0;
            }
            else {
              pvVar11 = (pMVar10->fields)._.m_CachedPtr;
            }
            pcVar2 = pcRam_?;
            if ((pcRam_? == (code *)0x0) &&
               (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
              uVar12 = func_?(&UNK_?);
              FUN_?(uVar12,0);
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            pcRam_? = pcVar2;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*pcRam_?)(pOVar5,pvVar11);
            return;
          }
        }
        FUN_?();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void OnUnequip() */

void Assembly-CSharp.dll::PickupItemModelGun::PickupItemModelGun_OnUnequip
               (PickupItemModelGun *this,MethodInfo *method)

{
  bVar1 = PickupItemModelGun_ShowCursors(this,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    return;
  }
  pGVar2 = (this->fields).primaryCursor;
  if (pGVar2 != (GUICellCursor *)0x0) {
    GUICellCursor::GUICellCursor_Destroy(pGVar2,(MethodInfo *)0x0);
    pGVar2 = (this->fields).secondaryCursor;
    if (pGVar2 != (GUICellCursor *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Object);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)pGVar2,(MethodInfo *)0x0);
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
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__Marshal<UnityEngine::Object>_UnityEngine__Object_
                      ,0,0);
        LOCK();
        UNLOCK();
        FUN_?(&TypeInfo__UnityEngine__Object);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if ((
          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__Marshal<UnityEngine::Object>_UnityEngine__Object_
          ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
        FUN_?();
      }
      pvVar4 = (void *)0x0;
      if (pGVar3 != (GameObject *)0x0) {
        pvVar4 = (pGVar3->fields)._.m_CachedPtr;
      }
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      pcVar5 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
        uVar6 = func_?(&UNK_?);
        FUN_?(uVar6,0);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pcRam_? = pcVar5;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam_?)(pvVar4,0);
      return;
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void ResetAmmo() */

void Assembly-CSharp.dll::PickupItemModelGun::PickupItemModelGun_ResetAmmo
               (PickupItemModelGun *this,MethodInfo *method)

{
  iVar1 = (*(this->klass->vtable).get_MaxAmmo.methodPtr)
                    (this,(this->klass->vtable).get_MaxAmmo.method);
  (this->fields).currentAmmo = iVar1;
  return;
}


/* Boolean ShowCursors() */

bool Assembly-CSharp.dll::PickupItemModelGun::PickupItemModelGun_ShowCursors
               (PickupItemModelGun *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVAvatarLocal);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields)._._.owner;
  if (pMVar1 != (MVPickupOwner *)0x0) {
    if (((pMVar1->fields)._IsLocal_k__BackingField != 0) &&
       (pMVar2 = (pMVar1->fields)._.worldObjectParent, pMVar2 != (MVWorldObjectClient *)0x0)) {
      pMVar3 = pMVar2->klass;
      bVar4 = (TypeInfo__MVAvatarLocal->_1).naturalAligment;
      if ((bVar4 <= (pMVar3->_1).naturalAligment) &&
         ((MVAvatarLocal__Class *)(pMVar3->_1).typeHierarchy[(ulonglong)bVar4 - 1] ==
          TypeInfo__MVAvatarLocal)) {
        return 1;
      }
    }
    return 0;
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  bVar6 = (*pcVar5)();
  return bVar6;
}


/* Void TriggerBegin(Int32) */

void Assembly-CSharp.dll::PickupItemModelGun::PickupItemModelGun_TriggerBegin
               (PickupItemModelGun *this,int32_t instigatorActorNr,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Got_TriggerStart__but_were_firin);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields)._.isFiring != 0) {
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    pSVar1 = StringLiteral_Got_TriggerStart__but_were_firin;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Debug,0);
      LOCK();
      UNLOCK();
      FUN_?(&TypeInfo__UnityEngine__ILogger);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Debug);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    pIVar2 = TypeInfo__UnityEngine__Debug->static_fields->s_Logger;
    if (pIVar2 == (ILogger_1 *)0x0) {
      FUN_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    FUN_?(6,TypeInfo__UnityEngine__ILogger,pIVar2,3,pSVar1);
    return;
  }
  if ((this->fields).waitingToFire != 0) {
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__PickupItemModelGun___DoAutoFire_d__41);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  lVar4 = FUN_?(TypeInfo__PickupItemModelGun___DoAutoFire_d__41);
  bVar5 = iRam_? != 0;
  *(undefined4 *)(lVar4 + 0x10) = 0;
  *(PickupItemModelGun **)(lVar4 + 0x20) = this;
  if (bVar5) {
    uVar6 = (uint)(lVar4 + 0x20U >> 0xc);
    puVar7 = (ulonglong *)((ulonglong)((uVar6 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar8 = *puVar7;
      LOCK();
      uVar9 = *puVar7;
      if (uVar8 == uVar9) {
        *puVar7 = uVar8 | 1L << (uVar6 & 0x3f);
      }
      UNLOCK();
    } while (uVar8 != uVar9);
  }
  if (lVar4 == 0) {
    uVar10 = func_?(&TypeInfo__System__NullReferenceException);
    this_00 = (NullReferenceException *)func_?(uVar10);
    pSVar1 = (String *)func_?(&StringLiteral_routine_is_null);
    mscorlib.dll::System::NullReferenceException::NullReferenceException__ctor_1
              (this_00,pSVar1,(MethodInfo *)0x0);
    uVar10 = func_?(&
                                MethodInfo__UnityEngine__MonoBehaviour__StartCoroutine_System__Collections__IEnumerator_
                               );
    FUN_?(this_00,uVar10);
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  bVar11 = UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::
          MonoBehaviour_IsObjectMonoBehaviour((Object_1 *)this,(MethodInfo *)0x0);
  if (bVar11 == 0) {
    uVar10 = func_?(&TypeInfo__System__ArgumentException);
    this_01 = (InvalidEnumArgumentException *)func_?(uVar10);
    pSVar1 = (String *)func_?(&StringLiteral_Coroutines_can_only_be_stopped_o);
    System.dll::System::ComponentModel::InvalidEnumArgumentException::
    InvalidEnumArgumentException__ctor_1(this_01,pSVar1,(MethodInfo *)0x0);
    uVar10 = func_?(&
                                MethodInfo__UnityEngine__MonoBehaviour__StartCoroutine_System__Collections__IEnumerator_
                               );
    FUN_?(this_01,uVar10);
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::MonoBehaviour>_UnityEngine__MonoBehaviour_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (this == (PickupItemModelGun *)0x0) {
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  OVar12.m_CachedPtr = (this->fields)._._._._._._.m_CachedPtr;
  if (OVar12.m_CachedPtr == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)this,(MethodInfo *)0x0);
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pcVar3 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
    uVar10 = func_?(&UNK_?);
    FUN_?(uVar10,0);
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pcRam_? = pcVar3;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam_?)(OVar12.m_CachedPtr,lVar4);
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::PickupItemModelGun::PickupItemModelGun_Update
               (PickupItemModelGun *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  UnityEngine__AudioSource_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::AudioSource>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__Renderer_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::Renderer>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar1 = PickupItemModelGun_ShowCursors(this,(MethodInfo *)0x0);
  if (bVar1 != 0) {
    PickupItemModelGun_HandleCursors(this,(MethodInfo *)0x0);
  }
  if ((this->fields).fireSecondary != 0) {
    pAVar2 = (AudioSource *)
             UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                       ((Component *)this,
                        UnityEngine__AudioSource_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::AudioSource>__
                       );
    if (pAVar2 == (AudioSource *)0x0) goto code_?;
    pAVar3 = UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_get_clip
                       (pAVar2,(MethodInfo *)0x0);
    pAVar4 = (this->fields).chargeSound;
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
    if (pAVar3 != (AudioClip *)0x0 || pAVar4 != (AudioClip *)0x0) {
      if (pAVar4 == (AudioClip *)0x0) {
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        if (pAVar3 == (AudioClip *)0x0) goto code_?;
        bVar5 = (pAVar3->fields)._._.m_CachedPtr == (void *)0x0;
      }
      else if (pAVar3 == (AudioClip *)0x0) {
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        bVar5 = (pAVar4->fields)._._.m_CachedPtr == (void *)0x0;
      }
      else {
        bVar5 = pAVar3 == pAVar4;
      }
      if (!bVar5) {
        pAVar2 = (AudioSource *)
                 UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                           ((Component *)this,
                            UnityEngine__AudioSource_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::AudioSource>__
                           );
        if (pAVar2 == (AudioSource *)0x0) goto code_?;
        UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_set_resource
                  (pAVar2,(AudioResource *)(this->fields).chargeSound,(MethodInfo *)0x0);
        pAVar2 = (AudioSource *)
                 UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                           ((Component *)this,
                            UnityEngine__AudioSource_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::AudioSource>__
                           );
        if (pAVar2 == (AudioSource *)0x0) goto code_?;
        UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_set_loop
                  (pAVar2,1,(MethodInfo *)0x0);
        pAVar2 = (AudioSource *)
                 UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                           ((Component *)this,
                            UnityEngine__AudioSource_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::AudioSource>__
                           );
        if (pAVar2 == (AudioSource *)0x0) goto code_?;
        UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_Play_1
                  (pAVar2,(MethodInfo *)0x0);
      }
    }
  }
  cVar6 = (*(this->klass->vtable).get_IsAmmoDepleted.methodPtr)
                    (this,(this->klass->vtable).get_IsAmmoDepleted.method);
  if (cVar6 != '\0') {
    pCVar7 = (this->fields).cubeBullet;
    if ((pCVar7 == (CubeBullet *)0x0) ||
       (pRVar8 = (Renderer *)
                 UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                           ((Component *)pCVar7,
                            UnityEngine__Renderer_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::Renderer>__
                           ), pRVar8 == (Renderer *)0x0)) goto code_?;
    bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_enabled
                      (pRVar8,(MethodInfo *)0x0);
    if (bVar1 != 0) {
      pCVar7 = (this->fields).cubeBullet;
      if ((pCVar7 == (CubeBullet *)0x0) ||
         (pRVar8 = (Renderer *)
                   UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                             ((Component *)pCVar7,
                              UnityEngine__Renderer_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::Renderer>__
                             ), pRVar8 == (Renderer *)0x0)) goto code_?;
      bVar1 = 0;
      goto code_?;
    }
  }
  cVar6 = (*(this->klass->vtable).get_IsAmmoDepleted.methodPtr)
                    (this,(this->klass->vtable).get_IsAmmoDepleted.method);
  if (cVar6 != '\0') {
    return;
  }
  pCVar7 = (this->fields).cubeBullet;
  if ((pCVar7 != (CubeBullet *)0x0) &&
     (pRVar8 = (Renderer *)
               UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                         ((Component *)pCVar7,
                          UnityEngine__Renderer_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::Renderer>__
                         ), pRVar8 != (Renderer *)0x0)) {
    bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_enabled
                      (pRVar8,(MethodInfo *)0x0);
    if (bVar1 != 0) {
      return;
    }
    pCVar7 = (this->fields).cubeBullet;
    if ((pCVar7 != (CubeBullet *)0x0) &&
       (pRVar8 = (Renderer *)
                 UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                           ((Component *)pCVar7,
                            UnityEngine__Renderer_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::Renderer>__
                           ), pRVar8 != (Renderer *)0x0)) {
      bVar1 = 1;
code_?:
      UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_enabled
                (pRVar8,bVar1,(MethodInfo *)0x0);
      return;
    }
  }
code_?:
  FUN_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* PickupItemModelGun() */

void Assembly-CSharp.dll::PickupItemModelGun::PickupItemModelGun__ctor
               (PickupItemModelGun *this,MethodInfo *method)

{
  (this->fields).minDistanceToCubeFire = 0.8;
  (this->fields).maxAmmo = 10;
  (this->fields).speed = 30.0;
  (this->fields).range = 200.0;
  (this->fields).fireIntervalSecondary = 1.3;
  (this->fields).currentAmmo = 10;
  (this->fields).fireMain = 1;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uVar1 = _UNK_?;
  uVar2 = _UNK_?;
  uVar3 = _UNK_?;
  uVar4 = _UNK_?;
  (this->fields)._.crossHairCannotFireLow.r = (float)_UNK_?;
  uVar5 = _UNK_?;
  (this->fields)._.crossHairCannotFireLow.g = (float)uVar4;
  _UNK_? = (undefined4)uVar3;
  _UNK_? = SUB84(uVar3,4);
  uVar4 = _UNK_?;
  (this->fields)._.crossHairCannotFireLow.b = (float)_UNK_?;
  _UNK_? = uVar5;
  uVar3 = _UNK_?;
  (this->fields)._.crossHairCannotFireLow.a = (float)uVar4;
  uVar4 = _UNK_?;
  (this->fields)._.crossHairCanFire.r = (float)_UNK_?;
  uVar5 = _UNK_?;
  (this->fields)._.crossHairCanFire.g = (float)uVar4;
  _UNK_? = (undefined4)uVar3;
  _UNK_? = SUB84(uVar3,4);
  uVar4 = _UNK_?;
  (this->fields)._.crossHairCanFire.b = (float)_UNK_?;
  _UNK_? = uVar5;
  uVar3 = _UNK_?;
  (this->fields)._.crossHairCanFire.a = (float)uVar4;
  _UNK_? = (undefined4)uVar2;
  _UNK_? = SUB84(uVar2,4);
  uVar4 = _UNK_?;
  (this->fields)._.crossHairCannotFireHigh.r = (float)_UNK_?;
  _UNK_? = uVar3;
  uVar3 = _UNK_?;
  (this->fields)._.crossHairCannotFireHigh.g = (float)uVar4;
  _UNK_? = (undefined4)uVar1;
  _UNK_? = SUB84(uVar1,4);
  uVar4 = _UNK_?;
  (this->fields)._.crossHairCannotFireHigh.b = (float)_UNK_?;
  _UNK_? = uVar3;
  (this->fields)._.crossHairCannotFireHigh.a = (float)uVar4;
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uVar3._0_4_ = 0.0;
  uVar3._4_1_ = 0;
  uVar3._5_3_ = 0;
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
    uVar3._0_4_ = 1.0;
    uVar3._4_1_ = 0;
    uVar3._5_3_ = 0;
  }
  bVar7 = iRam_? != 0;
  pPVar8 = &this->fields;
  (this->fields)._.fireInterval.currentCryptoKey = 0;
  (pPVar8->_).fireInterval.hiddenValue.b1 = 0;
  (pPVar8->_).fireInterval.hiddenValue.b2 = 0;
  (pPVar8->_).fireInterval.hiddenValue.b3 = 0;
  (pPVar8->_).fireInterval.hiddenValue.b4 = 0;
  (this->fields)._.fireInterval.hiddenValueOld = (Byte__Array *)0x0;
  (this->fields)._.fireInterval.fakeValue = (float)uVar3;
  (this->fields)._.fireInterval.inited = SUB81(uVar3,4);
  *(int3 *)&(this->fields)._.fireInterval.field_0x15 = SUB83(uVar3,5);
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
                while (ppMVar27 = ppMVar26 + 0x3052af36,
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
    uVar3 = _UNK_?;
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
      uStack_29 = uVar3;
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
      uVar3 = _UNK_?;
      uVar10 = _UNK_?;
      goto code_?;
    }
    FUN_?(0,0,0,0,0);
  }
  uVar5._0_4_ = (pOVar14->_1).initializationExceptionGCHandle;
  uVar5._4_4_ = (pOVar14->_1).cctor_started;
  uVar3 = FUN_?(uVar5);
  FUN_?(uVar3,0);
code_?:
  FUN_?(0,0,0,0,0);
  pcVar32 = (code *)swi(3);
  (*pcVar32)();
  return;
}


/* Boolean get_IsAmmoDepleted() */

bool Assembly-CSharp.dll::PickupItemModelGun::PickupItemModelGun_get_IsAmmoDepleted
               (PickupItemModelGun *this,MethodInfo *method)

{
  if (0 < (this->fields).currentAmmo) {
    return 0;
  }
  cVar1 = (*(this->klass->vtable).get_HasUnlimitedAmmo.methodPtr)
                    (this,(this->klass->vtable).get_HasUnlimitedAmmo.method);
  return cVar1 == '\0';
}


/* Int32 get_MaxAmmo() */

int32_t Assembly-CSharp.dll::PickupItemModelGun::PickupItemModelGun_get_MaxAmmo
                  (PickupItemModelGun *this,MethodInfo *method)

{
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*(this->klass->vtable).CalculateMaxAmmo.methodPtr)
                    (this,(ulonglong)(uint)(this->fields).maxAmmo,
                     (this->klass->vtable).CalculateMaxAmmo.method);
  return iVar1;
}

