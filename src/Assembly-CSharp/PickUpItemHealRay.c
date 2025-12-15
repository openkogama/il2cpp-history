
/* Void Awake() */

void Assembly-CSharp.dll::PickUpItemHealRay::PickUpItemHealRay_Awake
               (PickUpItemHealRay *this,MethodInfo *method)

{
  (*(this->klass->vtable).ResetAmmo.methodPtr)();
  this_00 = (this->fields).rayParticles;
  if ((this_00 == (ParticleSystem *)0x0) ||
     (obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                      ((Component *)this_00,(MethodInfo *)0x0), obj == (Transform *)0x0)) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
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
  uStack_2 = 0;
  uStack_3 = 0;
  pvVar4 = (obj->fields)._._.m_CachedPtr;
  if (pvVar4 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar5 = func_?(&UNK_?);
    FUN_?(uVar5,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
  (*pcRam_?)(pvVar4,&uStack_2);
  bVar6 = cRam_? == '\0';
  (this->fields).lerpStartRotation.x = (float)uStack_2;
  (this->fields).lerpStartRotation.y = uStack_2._4_4_;
  (this->fields).lerpStartRotation.z = (float)uStack_3;
  (this->fields).lerpStartRotation.w = uStack_3._4_4_;
  if (bVar6) {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar7 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar8 = (pVVar7->zeroVector).y;
  fVar9 = (pVVar7->zeroVector).z;
  (this->fields).hitOffset.x = (pVVar7->zeroVector).x;
  (this->fields).hitOffset.y = fVar8;
  (this->fields).hitOffset.z = fVar9;
  return;
}


/* VoxelHit CalculateClosestVoxelHit(List`1[VoxelHit]) */

VoxelHit *
Assembly-CSharp.dll::PickUpItemHealRay::PickUpItemHealRay_CalculateClosestVoxelHit
          (VoxelHit *__return_storage_ptr__,PickUpItemHealRay *this,List_1_VoxelHit_ *hitVoxels,
          MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<VoxelHit>__get_Count__);
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  (__return_storage_ptr__->point).x = 0.0;
  (__return_storage_ptr__->point).y = 0.0;
  *(undefined8 *)&(__return_storage_ptr__->point).z = 0;
  (__return_storage_ptr__->normal).y = 0.0;
  (__return_storage_ptr__->normal).z = 0.0;
  *(undefined8 *)&__return_storage_ptr__->cubePos = 0;
  __return_storage_ptr__->face = 0;
  __return_storage_ptr__->isCubeHit = 0;
  *(undefined3 *)&__return_storage_ptr__->field_0x25 = 0;
  *(undefined8 *)&__return_storage_ptr__->woId = 0;
  __return_storage_ptr__->cube = (Cube *)0x0;
  *(undefined8 *)&__return_storage_ptr__->distance = 0;
  __return_storage_ptr__->collider = (Collider *)0x0;
  __return_storage_ptr__->transform = (Transform *)0x0;
  __return_storage_ptr__->interactionFlags = 0;
  if (hitVoxels != (List_1_VoxelHit_ *)0x0) {
    if ((hitVoxels->fields)._size != 0) {
      pVVar1 = (hitVoxels->fields)._items;
      if (pVVar1 == (VoxelHit__Array *)0x0) goto code_?;
      if ((int)pVVar1->max_length == 0) {
code_?:
        FUN_?();
        pcVar2 = (code *)swi(3);
        pVVar3 = (VoxelHit *)(*pcVar2)();
        return pVVar3;
      }
      iVar4 = (hitVoxels->fields)._size;
      fVar5 = pVVar1->vector[0].point.y;
      uVar6 = *(undefined8 *)&pVVar1->vector[0].point.z;
      fVar7 = pVVar1->vector[0].normal.y;
      fVar8 = pVVar1->vector[0].normal.z;
      IVar9 = pVVar1->vector[0].cubePos;
      uVar10 = *(undefined2 *)&pVVar1->vector[0].field_0x1e;
      (__return_storage_ptr__->point).x = pVVar1->vector[0].point.x;
      (__return_storage_ptr__->point).y = fVar5;
      *(undefined8 *)&(__return_storage_ptr__->point).z = uVar6;
      iVar11 = pVVar1->vector[0].face;
      bVar12 = pVVar1->vector[0].isCubeHit;
      uVar13 = *(undefined3 *)&pVVar1->vector[0].field_0x25;
      iVar14 = pVVar1->vector[0].woId;
      uVar15 = *(undefined4 *)&pVVar1->vector[0].field_0x2c;
      (__return_storage_ptr__->normal).y = fVar7;
      (__return_storage_ptr__->normal).z = fVar8;
      __return_storage_ptr__->cubePos = IVar9;
      *(undefined2 *)&__return_storage_ptr__->field_0x1e = uVar10;
      pCVar16 = pVVar1->vector[0].cube;
      fVar5 = pVVar1->vector[0].distance;
      uVar17 = *(undefined4 *)&pVVar1->vector[0].field_0x3c;
      __return_storage_ptr__->face = iVar11;
      __return_storage_ptr__->isCubeHit = bVar12;
      *(undefined3 *)&__return_storage_ptr__->field_0x25 = uVar13;
      __return_storage_ptr__->woId = iVar14;
      *(undefined4 *)&__return_storage_ptr__->field_0x2c = uVar15;
      uVar15 = *(undefined4 *)&pVVar1->vector[0].collider;
      uVar18 = *(undefined4 *)((longlong)&pVVar1->vector[0].collider + 4);
      uVar19 = *(undefined4 *)&pVVar1->vector[0].transform;
      uVar20 = *(undefined4 *)((longlong)&pVVar1->vector[0].transform + 4);
      __return_storage_ptr__->cube = pCVar16;
      __return_storage_ptr__->distance = fVar5;
      *(undefined4 *)&__return_storage_ptr__->field_0x3c = uVar17;
      iVar21 = pVVar1->vector[0].interactionFlags;
      *(undefined4 *)&__return_storage_ptr__->collider = uVar15;
      *(undefined4 *)((longlong)&__return_storage_ptr__->collider + 4) = uVar18;
      *(undefined4 *)&__return_storage_ptr__->transform = uVar19;
      *(undefined4 *)((longlong)&__return_storage_ptr__->transform + 4) = uVar20;
      __return_storage_ptr__->interactionFlags = iVar21;
      if (iVar4 != 0) {
        if (pVVar1 == (VoxelHit__Array *)0x0) goto code_?;
        if ((int)pVVar1->max_length == 0) goto code_?;
        uStack_22._0_4_ = pVVar1->vector[0].point.x;
        uStack_22._4_4_ = pVVar1->vector[0].point.y;
        uStack_23 = *(undefined8 *)&pVVar1->vector[0].point.z;
        uVar24 = 1;
        lVar25 = 0x58;
        uStack_26._0_4_ = pVVar1->vector[0].normal.y;
        uStack_26._4_4_ = pVVar1->vector[0].normal.z;
        uStack_27 = *(undefined8 *)&pVVar1->vector[0].cubePos;
        fVar5 = pVVar1->vector[0].distance;
        uStack_28._0_4_ = pVVar1->vector[0].face;
        uStack_28._4_1_ = pVVar1->vector[0].isCubeHit;
        uStack_28._5_3_ = *(undefined3 *)&pVVar1->vector[0].field_0x25;
        uStack_29 = *(undefined8 *)&pVVar1->vector[0].woId;
        iStack_30 = pVVar1->vector[0].interactionFlags;
        uStack_31 = *(undefined4 *)&pVVar1->vector[0].collider;
        uStack_32 = *(undefined4 *)((longlong)&pVVar1->vector[0].collider + 4);
        uStack_33 = *(undefined4 *)&pVVar1->vector[0].transform;
        uStack_34 = *(undefined4 *)((longlong)&pVVar1->vector[0].transform + 4);
        while( true ) {
          if ((hitVoxels->fields)._size <= (int)uVar24) {
            return __return_storage_ptr__;
          }
          if ((uint)(hitVoxels->fields)._size <= uVar24) break;
          pVVar1 = (hitVoxels->fields)._items;
          if (pVVar1 == (VoxelHit__Array *)0x0) goto code_?;
          if ((uint)pVVar1->max_length <= uVar24) goto code_?;
          puVar35 = (undefined8 *)((longlong)&pVVar1->vector[0].point.x + lVar25);
          uStack_22 = *puVar35;
          uStack_23 = puVar35[1];
          puVar35 = (undefined8 *)((longlong)&pVVar1->vector[0].normal.y + lVar25);
          uStack_26 = *puVar35;
          uStack_27 = puVar35[1];
          fVar7 = *(float *)((longlong)&pVVar1->vector[0].distance + lVar25);
          puVar35 = (undefined8 *)((longlong)&pVVar1->vector[0].face + lVar25);
          uStack_28 = *puVar35;
          uStack_29 = puVar35[1];
          iStack_30 = *(int64_t *)((longlong)&pVVar1->vector[0].interactionFlags + lVar25);
          puVar36 = (undefined4 *)((longlong)&pVVar1->vector[0].collider + lVar25);
          uStack_31 = *puVar36;
          uStack_32 = puVar36[1];
          uStack_33 = puVar36[2];
          uStack_34 = puVar36[3];
          if (fVar7 < fVar5) {
            puVar35 = (undefined8 *)FUN_?(&uStack_22,hitVoxels,uVar24);
            uVar6 = *puVar35;
            uVar37 = puVar35[1];
            uVar38 = puVar35[2];
            uVar39 = puVar35[3];
            (__return_storage_ptr__->point).x = (float)(int)uVar6;
            (__return_storage_ptr__->point).y = (float)(int)((ulonglong)uVar6 >> 0x20);
            *(undefined8 *)&(__return_storage_ptr__->point).z = uVar37;
            uVar6 = puVar35[4];
            uVar37 = puVar35[5];
            (__return_storage_ptr__->normal).y = (float)(int)uVar38;
            (__return_storage_ptr__->normal).z = (float)(int)((ulonglong)uVar38 >> 0x20);
            *(undefined8 *)&__return_storage_ptr__->cubePos = uVar39;
            pCVar16 = (Cube *)puVar35[6];
            uVar38 = puVar35[7];
            __return_storage_ptr__->face = (int)uVar6;
            __return_storage_ptr__->isCubeHit = (char)((ulonglong)uVar6 >> 0x20);
            *(int3 *)&__return_storage_ptr__->field_0x25 = (int3)((ulonglong)uVar6 >> 0x28);
            *(undefined8 *)&__return_storage_ptr__->woId = uVar37;
            uVar15 = *(undefined4 *)(puVar35 + 8);
            uVar18 = *(undefined4 *)((longlong)puVar35 + 0x44);
            uVar19 = *(undefined4 *)(puVar35 + 9);
            uVar20 = *(undefined4 *)((longlong)puVar35 + 0x4c);
            __return_storage_ptr__->cube = pCVar16;
            *(undefined8 *)&__return_storage_ptr__->distance = uVar38;
            iVar21 = puVar35[10];
            *(undefined4 *)&__return_storage_ptr__->collider = uVar15;
            *(undefined4 *)((longlong)&__return_storage_ptr__->collider + 4) = uVar18;
            *(undefined4 *)&__return_storage_ptr__->transform = uVar19;
            *(undefined4 *)((longlong)&__return_storage_ptr__->transform + 4) = uVar20;
            __return_storage_ptr__->interactionFlags = iVar21;
            fVar5 = fVar7;
          }
          uVar24 = uVar24 + 1;
          lVar25 = lVar25 + 0x58;
        }
      }
    }
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
              ((MethodInfo *)0x0);
    pcVar2 = (code *)swi(3);
    pVVar3 = (VoxelHit *)(*pcVar2)();
    return pVVar3;
  }
code_?:
  FUN_?();
  pcVar2 = (code *)swi(3);
  pVVar3 = (VoxelHit *)(*pcVar2)();
  return pVVar3;
}


/* Void CalculateHitOffset(VoxelHit, Vector3) */

void Assembly-CSharp.dll::PickUpItemHealRay::PickUpItemHealRay_CalculateHitOffset
               (PickUpItemHealRay *this,VoxelHit *hitVoxel,Vector3 *direction,MethodInfo *method)

{
  pMVar1 = (this->fields)._.owner;
  if (pMVar1 != (MVPickupOwner *)0x0) {
    uVar2 = direction->x;
    uVar3 = direction->y;
    fVar4 = hitVoxel->distance;
    uStack_5._0_4_ = (pMVar1->fields).lookOrigin.x;
    uStack_5._4_4_ = (pMVar1->fields).lookOrigin.y;
    fVar6 = direction->z;
    fVar7 = (float)uVar2 * fVar4 + (float)uStack_5;
    fVar8 = (float)uVar3 * fVar4 + uStack_5._4_4_;
    fVar9 = (pMVar1->fields).lookOrigin.z;
    this_00 = (this->fields).stuckObject;
    if ((this_00 != (GameObject *)0x0) &&
       (obj = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                        (this_00,(MethodInfo *)0x0), obj != (Transform *)0x0)) {
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      uStack_5 = 0;
      fStack_10 = 0.0;
      pvVar11 = (obj->fields)._._.m_CachedPtr;
      if (pvVar11 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      pcVar12 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar12 = (code *)FUN_?(&UNK_?), pcVar12 == (code *)0x0)) {
        uVar13 = func_?(&UNK_?);
        FUN_?(uVar13,0);
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      pcRam_? = pcVar12;
      (*pcRam_?)(pvVar11,&uStack_5);
      (this->fields).hitOffset.x = fVar7 - (float)uStack_5;
      (this->fields).hitOffset.y = fVar8 - uStack_5._4_4_;
      (this->fields).hitOffset.z = (fVar6 * fVar4 + fVar9) - fStack_10;
      return;
    }
  }
  FUN_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Vector3 CalculateHitPosition(Vector3, Vector3, Single) */

Vector3 * Assembly-CSharp.dll::PickUpItemHealRay::PickUpItemHealRay_CalculateHitPosition
                    (Vector3 *__return_storage_ptr__,PickUpItemHealRay *this,
                    Vector3 *fireFromPosition,Vector3 *direction,float distance,MethodInfo *method)

{
  uVar1 = fireFromPosition->x;
  uVar2 = fireFromPosition->y;
  uVar3 = direction->x;
  fVar4 = direction->y;
  fVar5 = direction->z;
  fVar6 = fireFromPosition->z;
  __return_storage_ptr__->x = (float)uVar3 * distance + (float)uVar1;
  __return_storage_ptr__->y = fVar4 * distance + (float)uVar2;
  __return_storage_ptr__->z = fVar5 * distance + fVar6;
  return __return_storage_ptr__;
}


/* Vector3 CalculateParticlesRotation() */

Vector3 * Assembly-CSharp.dll::PickUpItemHealRay::PickUpItemHealRay_CalculateParticlesRotation
                    (Vector3 *__return_storage_ptr__,PickUpItemHealRay *this,MethodInfo *method)

{
  pMVar1 = (this->fields)._.owner;
  if (pMVar1 != (MVPickupOwner *)0x0) {
    uStack_2._0_4_ = (pMVar1->fields).lookOrigin.x;
    uStack_2._4_4_ = (pMVar1->fields).lookOrigin.y;
    fVar3 = (pMVar1->fields).lookOrigin.z;
    pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_normalized
                       (aVStack_5,&(pMVar1->fields).lookDirection,method);
    uVar6 = pVVar4->x;
    fVar7 = (float)uVar6 * _UNK_? + (float)uStack_2;
    fVar8 = pVVar4->z * _UNK_?;
    fVar9 = pVVar4->y * _UNK_? + uStack_2._4_4_;
    obj = (this->fields)._.muzzlePoint;
    if (obj != (Transform *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      uStack_2 = 0;
      fStack_10 = 0.0;
      pvVar11 = (obj->fields)._._.m_CachedPtr;
      if (pvVar11 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
        pcVar12 = (code *)swi(3);
        pVVar4 = (Vector3 *)(*pcVar12)();
        return pVVar4;
      }
      pcVar12 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar12 = (code *)FUN_?(&UNK_?), pcVar12 == (code *)0x0)) {
        uVar13 = func_?(&UNK_?);
        FUN_?(uVar13,0);
        pcVar12 = (code *)swi(3);
        pVVar4 = (Vector3 *)(*pcVar12)();
        return pVVar4;
      }
      pcRam_? = pcVar12;
      (*pcRam_?)(pvVar11,&uStack_2);
      fVar7 = fVar7 - (float)uStack_2;
      fVar9 = fVar9 - uStack_2._4_4_;
      fVar3 = (fVar8 + fVar3) - fStack_10;
      uStack_2 = CONCAT44(fVar9,fVar7);
      fStack_10 = fVar3;
      fVar8 = (float)FUN_?(&uStack_2);
      if (_UNK_? < fVar8) {
        fVar3 = fVar3 / fVar8;
        uVar13 = CONCAT44(fVar9 / fVar8,fVar7 / fVar8);
      }
      else {
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__UnityEngine__Vector3);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pVVar14 = TypeInfo__UnityEngine__Vector3->static_fields;
        uVar13._0_4_ = (pVVar14->zeroVector).x;
        uVar13._4_4_ = (pVVar14->zeroVector).y;
        fVar3 = (pVVar14->zeroVector).z;
      }
      __return_storage_ptr__->x = (float)(int)uVar13;
      __return_storage_ptr__->y = (float)(int)((ulonglong)uVar13 >> 0x20);
      __return_storage_ptr__->z = fVar3;
      return __return_storage_ptr__;
    }
  }
  FUN_?();
  pcVar12 = (code *)swi(3);
  pVVar4 = (Vector3 *)(*pcVar12)();
  return pVVar4;
}


/* Vector3 CalculateStuckPosition() */

Vector3 * Assembly-CSharp.dll::PickUpItemHealRay::PickUpItemHealRay_CalculateStuckPosition
                    (Vector3 *__return_storage_ptr__,PickUpItemHealRay *this,MethodInfo *method)

{
  this_00 = (this->fields).stuckObject;
  if ((this_00 == (GameObject *)0x0) ||
     (obj = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                      (this_00,(MethodInfo *)0x0), obj == (Transform *)0x0)) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    pVVar2 = (Vector3 *)(*pcVar1)();
    return pVVar2;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uStack_3 = 0;
  fStack_4 = 0.0;
  pvVar5 = (obj->fields)._._.m_CachedPtr;
  if (pvVar5 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
    pcVar1 = (code *)swi(3);
    pVVar2 = (Vector3 *)(*pcVar1)();
    return pVVar2;
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar6 = func_?(&UNK_?);
    FUN_?(uVar6,0);
    pcVar1 = (code *)swi(3);
    pVVar2 = (Vector3 *)(*pcVar1)();
    return pVVar2;
  }
  pcRam_? = pcVar1;
  (*pcRam_?)(pvVar5,&uStack_3);
  uVar7 = (this->fields).hitOffset.x;
  uVar8 = (this->fields).hitOffset.y;
  fVar9 = (this->fields).hitOffset.z;
  __return_storage_ptr__->x = (float)uStack_3 + (float)uVar7;
  __return_storage_ptr__->y = uStack_3._4_4_ + (float)uVar8;
  __return_storage_ptr__->z = fStack_4 + fVar9;
  return __return_storage_ptr__;
}


/* Void ChangeUsedParticleSystem() */

void Assembly-CSharp.dll::PickUpItemHealRay::PickUpItemHealRay_ChangeUsedParticleSystem
               (PickUpItemHealRay *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__VehiclePickupOwner);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  iVar1 = iRam_?;
  pMVar2 = (this->fields)._.owner;
  if (pMVar2 != (MVPickupOwner *)0x0) {
    pMVar3 = pMVar2->klass;
    bVar4 = (TypeInfo__VehiclePickupOwner->_1).naturalAligment;
    if ((bVar4 <= (pMVar3->_1).naturalAligment) &&
       ((pMVar3->_1).typeHierarchy[(ulonglong)bVar4 - 1] ==
        (Il2CppClass *)TypeInfo__VehiclePickupOwner)) {
      pPVar5 = (this->fields).particleRenderer;
      if (pPVar5 != (ParticleSystemRenderer *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_SetMaterial
                  ((Renderer *)pPVar5,(this->fields).normalRayMaterial,(MethodInfo *)0x0);
        iVar1 = iRam_?;
        (this->fields)._.muzzlePoint = (this->fields).remoteMuzzlePoint;
        if (iVar1 != 0) {
          uVar6 = (uint)((ulonglong)&(this->fields)._.muzzlePoint >> 0xc);
          lVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
          do {
            uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
            puVar9 = (ulonglong *)(lVar7 + 0xADDR);
            LOCK();
            bVar10 = uVar8 == *puVar9;
            if (bVar10) {
              *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
            }
            UNLOCK();
            iVar1 = iRam_?;
          } while (!bVar10);
        }
        (this->fields).rayParticles = (this->fields).remoteParticleSystem;
        if (iVar1 != 0) {
          uVar6 = (uint)((ulonglong)&(this->fields).rayParticles >> 0xc);
          lVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
          do {
            uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
            puVar9 = (ulonglong *)(lVar7 + 0xADDR);
            LOCK();
            bVar10 = uVar8 == *puVar9;
            if (bVar10) {
              *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
            }
            UNLOCK();
          } while (!bVar10);
        }
        return;
      }
      goto code_?;
    }
  }
  (this->fields)._.muzzlePoint = (this->fields).localMuzzePoint;
  if (iVar1 != 0) {
    uVar6 = (uint)((ulonglong)&(this->fields)._.muzzlePoint >> 0xc);
    lVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
    do {
      uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
      puVar9 = (ulonglong *)(lVar7 + 0xADDR);
      LOCK();
      bVar10 = uVar8 == *puVar9;
      if (bVar10) {
        *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
      }
      UNLOCK();
      iVar1 = iRam_?;
    } while (!bVar10);
  }
  (this->fields).rayParticles = (this->fields).localRayParticles;
  if (iVar1 != 0) {
    uVar6 = (uint)((ulonglong)&(this->fields).rayParticles >> 0xc);
    lVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
    do {
      uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
      puVar9 = (ulonglong *)(lVar7 + 0xADDR);
      LOCK();
      bVar10 = uVar8 == *puVar9;
      if (bVar10) {
        *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
      }
      UNLOCK();
    } while (!bVar10);
  }
  pPVar5 = (this->fields).particleRenderer;
  if (pPVar5 != (ParticleSystemRenderer *)0x0) {
    pMVar11 = (this->fields).ZIgnoreMaterial;
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Renderer>_UnityEngine__Renderer_
                    ,pMVar11,0);
      LOCK();
      UNLOCK();
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__Marshal<UnityEngine::Material>_UnityEngine__Material_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (pPVar5 == (ParticleSystemRenderer *)0x0) {
      FUN_?();
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    pvVar13 = (pPVar5->fields)._._._.m_CachedPtr;
    if (pvVar13 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pPVar5,(MethodInfo *)0x0);
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    if ((
        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__Marshal<UnityEngine::Material>_UnityEngine__Material_
        ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
      FUN_?();
    }
    if (pMVar11 == (Material *)0x0) {
      pvVar14 = (void *)0x0;
    }
    else {
      pvVar14 = (pMVar11->fields)._.m_CachedPtr;
    }
    pcVar12 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar12 = (code *)FUN_?(&UNK_?), pcVar12 == (code *)0x0)) {
      uVar15 = func_?(&UNK_?);
      FUN_?(uVar15,0);
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    pcRam_? = pcVar12;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam_?)(pvVar13,pvVar14);
    return;
  }
code_?:
  FUN_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void ChangeValueInState(Dictionary`2[System.Object,System.Object], String, Int32) */

void Assembly-CSharp.dll::PickUpItemHealRay::PickUpItemHealRay_ChangeValueInState
               (PickUpItemHealRay *this,Dictionary_2_System_Object_System_Object_ *newState,
               String *key,int32_t value,MethodInfo *method)

{
  iVar1 = value;
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (newState != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    iVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::StyleComplexSelector+PseudoStateData]::
            Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                      ((Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                        *)newState,(Object *)key,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                       ->klass->rgctx_data[0x21].method);
    aiStackX_10[0] = value;
    if (iVar2 < 0) {
      value_00 = (Object *)FUN_?(uRam_?,aiStackX_10);
      behavior = CONCAT31((int3)((uint)iVar1 >> 8),2);
      method_00 = MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                  ->klass->rgctx_data[0x22].method;
    }
    else {
      value_00 = (Object *)FUN_?(uRam_?,aiStackX_10);
      behavior = CONCAT31((int3)((uint)iVar1 >> 8),1);
      method_00 = MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                  ->klass->rgctx_data[0x22].method;
    }
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__TryInsert
              (newState,(Object *)key,value_00,behavior,method_00);
    return;
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void ChangeValueInState(Dictionary`2[System.Object,System.Object], String, Single) */

void Assembly-CSharp.dll::PickUpItemHealRay::PickUpItemHealRay_ChangeValueInState_1
               (PickUpItemHealRay *this,Dictionary_2_System_Object_System_Object_ *newState,
               String *key,float value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (newState != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    iVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::StyleComplexSelector+PseudoStateData]::
            Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                      ((Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                        *)newState,(Object *)key,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                       ->klass->rgctx_data[0x21].method);
    afStackX_10[0] = value;
    if (iVar1 < 0) {
      value_00 = (Object *)FUN_?(uRam_?,afStackX_10);
      behavior = CONCAT31((int3)((uint)in_R9D >> 8),2);
      method_00 = MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                  ->klass->rgctx_data[0x22].method;
    }
    else {
      value_00 = (Object *)FUN_?(uRam_?,afStackX_10);
      behavior = CONCAT31((int3)((uint)in_R9D >> 8),1);
      method_00 = MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                  ->klass->rgctx_data[0x22].method;
    }
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__TryInsert
              (newState,(Object *)key,value_00,behavior,method_00);
    return;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void DoAmmoDepletion() */

void Assembly-CSharp.dll::PickUpItemHealRay::PickUpItemHealRay_DoAmmoDepletion
               (PickUpItemHealRay *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MVEquipable_MethodInfo__UnityEngine__GameObject__GetComponent<MVEquipable>__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar1 = PickUpItemHealRay_IsStillChargingRay(this,(MethodInfo *)0x0);
  if (bVar1 != 0) {
    uVar2._0_4_ = (this->fields).currentAmmoLeft.currentCryptoKey;
    uVar2._4_4_ = (this->fields).currentAmmoLeft.hiddenValue;
    pBVar3 = (this->fields).currentAmmoLeft.hiddenValueOld;
    uVar4._0_4_ = (this->fields).currentAmmoLeft.fakeValue;
    uVar4._4_1_ = (this->fields).currentAmmoLeft.inited;
    uVar4._5_3_ = *(undefined3 *)&(this->fields).currentAmmoLeft.field_0x15;
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).field_0x1c == 0)
    {
      FUN_?();
    }
    aOStack_5[0]._0_8_ = uVar2;
    aOStack_5[0].hiddenValueOld = pBVar3;
    aOStack_5[0]._16_8_ = uVar4;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).field_0x1c == 0)
    {
      FUN_?();
    }
    fVar6 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
             ObscuredFloat_InternalDecrypt(aOStack_5,(MethodInfo *)0x0);
    pcVar7 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0)) {
      uVar4 = func_?(&UNK_?);
      FUN_?(uVar4,0);
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pcRam_? = pcVar7;
    fVar8 = (float)(*pcRam_?)();
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    aOStack_5[0].fakeValue = 0.0;
    aOStack_5[0].inited = 0;
    aOStack_5[0]._21_3_ = 0;
    aOStack_5[0].currentCryptoKey = 0;
    aOStack_5[0].hiddenValue.b1 = 0;
    aOStack_5[0].hiddenValue.b2 = 0;
    aOStack_5[0].hiddenValue.b3 = 0;
    aOStack_5[0].hiddenValue.b4 = 0;
    aOStack_5[0].hiddenValueOld = (Byte__Array *)0x0;
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).field_0x1c == 0)
    {
      FUN_?();
    }
    value = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
            ObscuredFloat_InternalEncrypt(fVar6 - fVar8,(MethodInfo *)0x0);
    method_00 = (MethodInfo *)0x0;
    Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
    ObscuredFloat__ctor(aOStack_5,value,(MethodInfo *)0x0);
    bVar1 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::ObscuredCheatingDetector
            ::ObscuredCheatingDetector_get_IsRunning((MethodInfo *)0x0);
    if (bVar1 != 0) {
      aOStack_5[0].fakeValue = fVar6 - fVar8;
    }
    bVar9 = iRam_? != 0;
    (this->fields).currentAmmoLeft.currentCryptoKey = aOStack_5[0].currentCryptoKey;
    (this->fields).currentAmmoLeft.hiddenValue = aOStack_5[0].hiddenValue;
    (this->fields).currentAmmoLeft.hiddenValueOld = aOStack_5[0].hiddenValueOld;
    (this->fields).currentAmmoLeft.fakeValue = aOStack_5[0].fakeValue;
    (this->fields).currentAmmoLeft.inited = aOStack_5[0].inited;
    *(undefined3 *)&(this->fields).currentAmmoLeft.field_0x15 = aOStack_5[0]._21_3_;
    if (bVar9) {
      uVar10 = (uint)((ulonglong)&(this->fields).currentAmmoLeft.hiddenValueOld >> 0xc);
      uVar11 = (ulonglong)((uVar10 & 0x1fffff) >> 6);
      method_00 = (MethodInfo *)(ulonglong)(uVar10 & 0x3f);
      do {
        uVar12 = *(ulonglong *)(uVar11 * 8 + 0xADDR);
        puVar13 = (ulonglong *)(uVar11 * 8 + 0xADDR);
        LOCK();
        bVar9 = uVar12 == *puVar13;
        if (bVar9) {
          *puVar13 = uVar12 | 1L << (longlong)method_00;
        }
        UNLOCK();
      } while (!bVar9);
    }
    pTVar14 = (this->fields)._.muzzlePoint;
    if (pTVar14 == (Transform *)0x0) goto code_?;
    pTVar14 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        ((Component *)pTVar14,(MethodInfo *)0x0);
    pMVar15 = (this->fields)._.owner;
    if ((pMVar15 == (MVPickupOwner *)0x0) ||
       (pVVar16 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_normalized
                            ((Vector3 *)aOStack_5,&(pMVar15->fields).lookDirection,method_00),
       pTVar14 == (Transform *)0x0)) goto code_?;
    VStack_17.x = pVVar16->x;
    VStack_17.y = pVVar16->y;
    VStack_17.z = pVVar16->z;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_forward
              (pTVar14,&VStack_17,(MethodInfo *)0x0);
    PickUpItemHealRay_DoFloating(this,(MethodInfo *)0x0);
  }
  cVar18 = (*(this->klass->vtable).get_IsAmmoDepleted.methodPtr)
                     (this,(this->klass->vtable).get_IsAmmoDepleted.method);
  if (cVar18 != '\0') {
    pMVar15 = (this->fields)._.owner;
    if (((pMVar15 == (MVPickupOwner *)0x0) ||
        (pMVar19 = (pMVar15->fields)._.worldObjectParent, pMVar19 == (MVWorldObjectClient *)0x0)) ||
       (this_00 = (pMVar19->fields).gameObject, this_00 == (GameObject *)0x0)) {
code_?:
      FUN_?();
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pOVar20 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                        (this_00,
                         MVEquipable_MethodInfo__UnityEngine__GameObject__GetComponent<MVEquipable>__
                        );
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
    if (pOVar20 != (Object *)0x0) {
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (pOVar20[1].klass != (Object__Class *)0x0) {
        pOVar21 = pOVar20->klass;
        uVar22._0_2_ = pOVar21[1]._0.byval_arg.attrs;
        uVar22._2_1_ = pOVar21[1]._0.byval_arg.type;
        uVar22._3_5_ = *(undefined5 *)&pOVar21[1]._0.byval_arg.field_0xb;
        (*(code *)pOVar21[1]._0.byval_arg.data)(pOVar20,uVar22);
      }
    }
  }
  return;
}


/* Void DoFloating() */

void Assembly-CSharp.dll::PickUpItemHealRay::PickUpItemHealRay_DoFloating
               (PickUpItemHealRay *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MVRigidBody_MethodInfo__UnityEngine__GameObject__GetComponent<MVRigidBody>__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVPhysics);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields)._.owner;
  if ((((pMVar1 != (MVPickupOwner *)0x0) &&
       (pMVar2 = (pMVar1->fields)._.worldObjectParent, pMVar2 != (MVWorldObjectClient *)0x0)) &&
      (this_00 = (pMVar2->fields).gameObject, this_00 != (GameObject *)0x0)) &&
     (this_01 = (MVRigidBody *)
                UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                          (this_00,
                           MVRigidBody_MethodInfo__UnityEngine__GameObject__GetComponent<MVRigidBody>__
                          ), this_01 != (MVRigidBody *)0x0)) {
    cVar3 = (*(this_01->klass->vtable).__unknown.methodPtr)
                      (this_01,(this_01->klass->vtable).__unknown.method);
    if (cVar3 == '\0') {
      method_00 = (this_01->klass->vtable).__unknown_1.method;
      puVar4 = (undefined8 *)(*(this_01->klass->vtable).__unknown_1.methodPtr)(&VStack_5,this_01);
      VStack_5._0_8_ = *puVar4;
      VStack_5.z = *(float *)(puVar4 + 1);
      fVar6 = VStack_5.y;
      if (fVar6 < 0.0) {
        pMVar1 = (this->fields)._.owner;
        if (pMVar1 == (MVPickupOwner *)0x0) goto code_?;
        pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_normalized
                           ((Vector3 *)aOStack_8,&(pMVar1->fields).lookDirection,method_00);
        VStack_5.x = pVVar7->x;
        VStack_5.y = pVVar7->y;
        VStack_5.z = pVVar7->z;
        if (*(int *)&(TypeInfo__MVPhysics->_1).field_0x1c == 0) {
          FUN_?();
        }
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__MVPhysics);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (*(int *)&(TypeInfo__MVPhysics->_1).field_0x1c == 0) {
          FUN_?();
        }
        pMVar9 = TypeInfo__MVPhysics->static_fields;
        uVar10._0_4_ = (pMVar9->gravity).currentCryptoKey;
        uVar10._4_4_ = (pMVar9->gravity).hiddenValue;
        pBVar11 = (pMVar9->gravity).hiddenValueOld;
        uVar12._0_4_ = (pMVar9->gravity).fakeValue;
        uVar12._4_1_ = (pMVar9->gravity).inited;
        uVar12._5_3_ = *(undefined3 *)&(pMVar9->gravity).field_0x15;
        if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).field_0x1c
            == 0) {
          FUN_?();
        }
        aOStack_8[0]._0_8_ = uVar10;
        aOStack_8[0].hiddenValueOld = pBVar11;
        aOStack_8[0]._16_8_ = uVar12;
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).field_0x1c
            == 0) {
          FUN_?();
        }
        fVar13 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
                 ObscuredFloat_InternalDecrypt(aOStack_8,(MethodInfo *)0x0);
        pcVar14 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar14 = (code *)FUN_?(&UNK_?), pcVar14 == (code *)0x0)) {
          uVar12 = func_?(&UNK_?);
          FUN_?(uVar12,0);
          pcVar14 = (code *)swi(3);
          (*pcVar14)();
          return;
        }
        pcRam_? = pcVar14;
        fVar15 = (float)(*pcRam_?)();
        VStack_5.z = 0.0;
        fVar13 = fVar15 * VStack_5.y * fVar13 * _UNK_? * _UNK_?;
        if (fVar6 <= fVar13) {
          fVar13 = fVar6;
        }
        VStack_5._0_8_ = (ulonglong)((uint)fVar13 ^ _UNK_?) << 0x20;
        MVRigidBody::MVRigidBody_AddImpulse_1(this_01,&VStack_5,1,(MethodInfo *)0x0);
      }
    }
    return;
  }
code_?:
  FUN_?();
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}


/* Void DoHealing() */

void Assembly-CSharp.dll::PickUpItemHealRay::PickUpItemHealRay_DoHealing
               (PickUpItemHealRay *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar1 = PickUpItemHealRay_IsStillChargingRay(this,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    return;
  }
  uVar2._0_4_ = (this->fields).currentAmmoLeft.currentCryptoKey;
  uVar2._4_4_ = (this->fields).currentAmmoLeft.hiddenValue;
  pBVar3 = (this->fields).currentAmmoLeft.hiddenValueOld;
  uVar4._0_4_ = (this->fields).currentAmmoLeft.fakeValue;
  uVar4._4_1_ = (this->fields).currentAmmoLeft.inited;
  uVar4._5_3_ = *(undefined3 *)&(this->fields).currentAmmoLeft.field_0x15;
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).field_0x1c == 0) {
    FUN_?();
  }
  auStack_5 = (undefined1  [8])uVar2;
  pBStack_6 = pBVar3;
  uStack_7 = uVar4;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).field_0x1c == 0) {
    FUN_?();
  }
  uVar8._0_4_ = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
                ObscuredFloat_InternalDecrypt((ObscuredFloat *)auStack_5,(MethodInfo *)0x0);
  if (((float)uVar8 <= 0.0) &&
     (cVar9 = (*(this->klass->vtable).get_HasUnlimitedAmmo.methodPtr)
                         (this,(this->klass->vtable).get_HasUnlimitedAmmo.method), cVar9 == '\0'))
  {
    return;
  }
  pGVar10 = (this->fields).stuckObject;
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
  if (pGVar10 != (GameObject *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pGVar10->fields)._.m_CachedPtr != (void *)0x0) {
      pVVar11 = PickUpItemHealRay_CalculateStuckPosition
                          ((Vector3 *)auStack_5,this,(MethodInfo *)0x0);
      pMVar12 = (this->fields)._.owner;
      if (pMVar12 == (MVPickupOwner *)0x0) goto code_?;
      uVar13 = pVVar11->x;
      uVar14 = pVVar11->y;
      uVar15 = (pMVar12->fields).lookOrigin.x;
      uVar16 = (pMVar12->fields).lookOrigin.y;
      uVar8._0_4_ = (float)uVar13 - (float)uVar15;
      fVar17 = pVVar11->z - (pMVar12->fields).lookOrigin.z;
      uVar8._4_4_ = (ACTkByte4)((float)uVar14 - (float)uVar16);
      auStack_18._4_4_ = uVar8._4_4_;
      auStack_18._0_4_ = (float)uVar8;
      goto code_?;
    }
  }
  pMVar12 = (this->fields)._.owner;
  if (pMVar12 == (MVPickupOwner *)0x0) {
code_?:
    FUN_?();
    pcVar19 = (code *)swi(3);
    (*pcVar19)();
    return;
  }
  pVVar11 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_normalized
                      ((Vector3 *)auStack_5,&(pMVar12->fields).lookDirection,in_R8);
  uVar8._0_4_ = pVVar11->x;
  uVar8._4_4_ = (ACTkByte4)pVVar11->y;
  fVar17 = pVVar11->z;
  auStack_18._0_8_ = uVar8;
code_?:
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<VoxelHit>__get_Count__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  auStack_5._4_4_ = uVar8._4_4_;
  auStack_5._0_4_ = (int32_t)(float)uVar8;
  auStack_20._0_8_ = 0;
  auStack_20._8_4_ = 0.0;
  auStack_20._12_4_ = 0.0;
  auStack_20._16_4_ = 0.0;
  auStack_20._20_4_ = 0.0;
  auStack_20._24_4_ = 0.0;
  auStack_20._28_4_ = 0.0;
  auStack_20._32_8_ = 0;
  auStack_20._40_4_ = 0;
  auStack_20[0x2c] = 0;
  auStack_20._45_3_ = 0;
  pCStack_21 = (Cube *)0x0;
  pCStack_22 = (Cube *)0x0;
  pCStack_23 = (Collider *)0x0;
  pTStack_24 = (Transform *)0x0;
  pTStack_25 = (Transform *)0x0;
  iStack_26 = 0;
  auStack_27._0_4_ = 0;
  auStack_27[4] = 0;
  auStack_27[5] = 0;
  auStack_27[6] = 0;
  auStack_27[7] = 0;
  uStack_28._0_4_ = 0.0;
  uStack_28._4_4_ = 0;
  pBStack_6._0_4_ = fVar17;
  bVar1 = PickUpItemHealRay_IsDirectionValid(this,(Vector3 *)auStack_5,(MethodInfo *)0x0);
  if (bVar1 != 0) {
    auStack_5 = (undefined1  [8])auStack_18._0_8_;
    pBStack_6 = (Byte__Array *)CONCAT44(pBStack_6._4_4_,fVar17);
    uVar8._0_4_ = (float)FUN_?(auStack_5);
    if (_UNK_? < (float)uVar8) {
      fVar17 = fVar17 / (float)uVar8;
      auStack_18._4_4_ = (float)auStack_18._4_4_ / (float)uVar8;
      auStack_18._0_4_ = (float)auStack_18._0_4_ / (float)uVar8;
    }
    else {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Vector3);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pVVar29 = TypeInfo__UnityEngine__Vector3->static_fields;
      auStack_18._0_4_ = (pVVar29->zeroVector).x;
      auStack_18._4_4_ = (pVVar29->zeroVector).y;
      fVar17 = (pVVar29->zeroVector).z;
    }
    auStack_5 = (undefined1  [8])auStack_18._0_8_;
    auStack_27._0_4_ = auStack_18._0_4_;
    auStack_27[4] = auStack_18[4];
    auStack_27[5] = auStack_18[5];
    auStack_27[6] = auStack_18[6];
    auStack_27[7] = auStack_18[7];
    uStack_28._0_4_ = fVar17;
    pBStack_6._0_4_ = fVar17;
    hitVoxels = PickUpItemHealRay_DoRaycast(this,(Vector3 *)auStack_5,(MethodInfo *)0x0);
    if (hitVoxels == (List_1_VoxelHit_ *)0x0) {
      FUN_?();
      pcVar19 = (code *)swi(3);
      (*pcVar19)();
      return;
    }
    if ((hitVoxels->fields)._size < 1) {
      iVar30 = 0;
    }
    else {
      pVVar31 = PickUpItemHealRay_CalculateClosestVoxelHit
                          ((VoxelHit *)auStack_32,this,hitVoxels,(MethodInfo *)0x0);
      auStack_20._8_4_ = (pVVar31->point).x;
      auStack_20._12_4_ = (pVVar31->point).y;
      auStack_20._16_8_ = *(undefined8 *)&(pVVar31->point).z;
      auStack_20._24_4_ = (pVVar31->normal).y;
      auStack_20._28_4_ = (pVVar31->normal).z;
      auStack_20._32_6_ = pVVar31->cubePos;
      auStack_20._38_2_ = *(undefined2 *)&pVVar31->field_0x1e;
      auStack_20._40_4_ = pVVar31->face;
      auStack_20[0x2c] = pVVar31->isCubeHit;
      auStack_20._45_3_ = *(undefined3 *)&pVVar31->field_0x25;
      pCStack_21 = *(Cube **)&pVVar31->woId;
      pCStack_22 = pVVar31->cube;
      pCStack_23 = *(Collider **)&pVVar31->distance;
      pTStack_24 = (Transform *)pVVar31->collider;
      pTStack_25 = pVVar31->transform;
      iStack_26 = pVVar31->interactionFlags;
      if (iRam_? != 0) {
        uVar33 = (uint)((ulonglong)&pCStack_22 >> 0xc);
        uVar34 = (ulonglong)((uVar33 & 0x1fffff) >> 6);
        do {
          uVar35 = *(ulonglong *)(uVar34 * 8 + 0xADDR);
          puVar36 = (ulonglong *)(uVar34 * 8 + 0xADDR);
          LOCK();
          bVar37 = uVar35 == *puVar36;
          if (bVar37) {
            *puVar36 = uVar35 | 1L << (uVar33 & 0x3f);
          }
          UNLOCK();
        } while (!bVar37);
      }
      iVar30 = ((this->fields).isLockedOn != 0) + 1;
    }
    auStack_20._0_4_ = iVar30;
  }
  auVar38 = auStack_27;
  auStack_32._0_8_ = auStack_20._0_8_;
  auStack_32._8_8_ = auStack_20._8_8_;
  auStack_32._16_8_ = auStack_20._16_8_;
  auStack_32._24_8_ = auStack_20._24_8_;
  auStack_32._32_8_ = auStack_20._32_8_;
  auStack_32._40_8_ = auStack_20._40_8_;
  auStack_32._48_8_ = pCStack_21;
  pCStack_39 = pCStack_22;
  pCStack_40 = pCStack_23;
  pTStack_41 = pTStack_24;
  pTStack_42 = pTStack_25;
  iStack_43 = iStack_26;
  aOStack_44[0].currentCryptoKey = auStack_27._0_4_;
  aOStack_44[0].hiddenValue.b1 = auStack_27[4];
  aOStack_44[0].hiddenValue.b2 = auStack_27[5];
  aOStack_44[0].hiddenValue.b3 = auStack_27[6];
  aOStack_44[0].hiddenValue.b4 = auStack_27[7];
  aOStack_44[0].hiddenValueOld = (Byte__Array *)uStack_28;
  auStack_27 = auVar38;
  PickUpItemHealRay_HandleRaycastResultLocally
            (this,(PickUpItemHealRay_RayCastData *)auStack_32,(MethodInfo *)0x0);
  return;
}


/* List`1[VoxelHit] DoRaycast(Vector3) */

List_1_VoxelHit_ *
Assembly-CSharp.dll::PickUpItemHealRay::PickUpItemHealRay_DoRaycast
          (PickUpItemHealRay *this,Vector3 *direction,MethodInfo *method)

{
  pMVar1 = (this->fields)._.owner;
  if (pMVar1 != (MVPickupOwner *)0x0) {
    aRStack_2[0].m_Origin.x = (pMVar1->fields).lookOrigin.x;
    aRStack_2[0].m_Origin.y = (pMVar1->fields).lookOrigin.y;
    uStack_3._0_4_ = direction->x;
    uStack_3._4_4_ = direction->y;
    aRStack_2[0].m_Direction.x = SUB84(aRStack_2[0]._8_8_,4);
    aRStack_2[0].m_Origin.z = (pMVar1->fields).lookOrigin.z;
    fStack_4 = direction->z;
    fVar5 = (float)FUN_?(&uStack_3);
    if (_UNK_? < fVar5) {
      uVar6 = direction->x;
      uVar7 = direction->y;
      fVar8 = direction->z / fVar5;
      uStack_3 = CONCAT44((float)uVar7 / fVar5,(float)uVar6 / fVar5);
    }
    else {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Vector3);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pVVar9 = TypeInfo__UnityEngine__Vector3->static_fields;
      uStack_3._0_4_ = (pVVar9->zeroVector).x;
      uStack_3._4_4_ = (pVVar9->zeroVector).y;
      fVar8 = (pVVar9->zeroVector).z;
    }
    aRStack_2[0].m_Direction.x = (float)uStack_3;
    lVar10 = 0xa8;
    if ((this->fields).isLockedOn != 0) {
      lVar10 = 0xac;
    }
    pMVar1 = (this->fields)._.owner;
    fVar5 = *(float *)((longlong)&this->klass + lVar10);
    if (pMVar1 != (MVPickupOwner *)0x0) {
      ignoreWoIds = (HashSet_1_System_Int32_ *)
                    (*(pMVar1->klass->vtable).get_IgnoreWOIDs.methodPtr)
                              (pMVar1,(pMVar1->klass->vtable).get_IgnoreWOIDs.method);
      aRStack_2[0].m_Direction.z = fVar8;
      aRStack_2[0].m_Direction.y = uStack_3._4_4_;
      pLVar11 = CollisionDetection::CollisionDetection_MVHitAll
                         (aRStack_2,fVar5,ignoreWoIds,(this->fields).layers.m_Mask,
                          (MethodInfo *)0x0);
      return pLVar11;
    }
  }
  FUN_?();
  pcVar12 = (code *)swi(3);
  pLVar11 = (List_1_VoxelHit_ *)(*pcVar12)();
  return pLVar11;
}


/* InteractionDataHandlerBase GetInteractionHandler(MVWorldObjectClient) */

InteractionDataHandlerBase *
Assembly-CSharp.dll::PickUpItemHealRay::PickUpItemHealRay_GetInteractionHandler
          (PickUpItemHealRay *this,MVWorldObjectClient *worldObject,MethodInfo *method)

{
  if (worldObject == (MVWorldObjectClient *)0x0) {
    return (InteractionDataHandlerBase *)0x0;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  InteractionDataHandlerBase_MethodInfo__UnityEngine__GameObject__GetComponent<InteractionDataHandlerBase>__
                  ,0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pIVar1 = (worldObject->fields).interactionDataHandlerBase;
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
  if (pIVar1 != (InteractionDataHandlerBase *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pIVar1->fields)._._._._._.m_CachedPtr != (void *)0x0) goto code_?;
  }
  this_00 = (worldObject->fields).gameObject;
  if (this_00 == (GameObject *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    pIVar1 = (InteractionDataHandlerBase *)(*pcVar2)();
    return pIVar1;
  }
  pIVar1 = (InteractionDataHandlerBase *)
           UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                     (this_00,
                      InteractionDataHandlerBase_MethodInfo__UnityEngine__GameObject__GetComponent<InteractionDataHandlerBase>__
                     );
  bVar3 = iRam_? != 0;
  (worldObject->fields).interactionDataHandlerBase = pIVar1;
  if (bVar3) {
    uVar4 = (uint)((ulonglong)&(worldObject->fields).interactionDataHandlerBase >> 0xc);
    puVar5 = (ulonglong *)((ulonglong)((uVar4 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar6 = *puVar5;
      LOCK();
      uVar7 = *puVar5;
      if (uVar6 == uVar7) {
        *puVar5 = uVar6 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
    } while (uVar6 != uVar7);
  }
code_?:
  return (worldObject->fields).interactionDataHandlerBase;
}


/* Single GetMaxRange() */

float Assembly-CSharp.dll::PickUpItemHealRay::PickUpItemHealRay_GetMaxRange
                (PickUpItemHealRay *this,MethodInfo *method)

{
  if ((this->fields).isLockedOn == 0) {
    return (this->fields).maxRayRange;
  }
  return (this->fields).maxLockOnRange;
}


/* InteractionDataHandlerBase HandleChildObjectHit(VoxelHit, InteractionDataHandlerBase) */

InteractionDataHandlerBase *
Assembly-CSharp.dll::PickUpItemHealRay::PickUpItemHealRay_HandleChildObjectHit
          (PickUpItemHealRay *this,VoxelHit *hitVoxel,InteractionDataHandlerBase *interactionHandler
          ,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  int_MethodInfo__MVWorldObjectClientManager__GetWoIDHighestInHierarchyWithComponent<InteractionDataHandlerBase>_int_
                 );
    LOCK();
    UNLOCK();
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
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (interactionHandler != (InteractionDataHandlerBase *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((interactionHandler->fields)._._._._._.m_CachedPtr != (void *)0x0) {
      return interactionHandler;
    }
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (pMVar1 == (MVWorldObjectClientManager *)0x0) {
code_?:
    FUN_?();
    pcVar2 = (code *)swi(3);
    pIVar3 = (InteractionDataHandlerBase *)(*pcVar2)();
    return pIVar3;
  }
  id = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWoIDHighestInHierarchyWithComponent
                 (pMVar1,hitVoxel->woId,
                  int_MethodInfo__MVWorldObjectClientManager__GetWoIDHighestInHierarchyWithComponent<InteractionDataHandlerBase>_int_
                 );
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (pMVar1 == (MVWorldObjectClientManager *)0x0) goto code_?;
  pMVar4 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                     (pMVar1,id,(MethodInfo *)0x0);
  if (pMVar4 == (MVWorldObjectClient *)0x0) {
    return (InteractionDataHandlerBase *)0x0;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  InteractionDataHandlerBase_MethodInfo__UnityEngine__GameObject__GetComponent<InteractionDataHandlerBase>__
                  ,0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pIVar3 = (pMVar4->fields).interactionDataHandlerBase;
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
  if (pIVar3 != (InteractionDataHandlerBase *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pIVar3->fields)._._._._._.m_CachedPtr != (void *)0x0) goto code_?;
  }
  this_00 = (pMVar4->fields).gameObject;
  if (this_00 == (GameObject *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    pIVar3 = (InteractionDataHandlerBase *)(*pcVar2)();
    return pIVar3;
  }
  pIVar3 = (InteractionDataHandlerBase *)
           UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                     (this_00,
                      InteractionDataHandlerBase_MethodInfo__UnityEngine__GameObject__GetComponent<InteractionDataHandlerBase>__
                     );
  bVar5 = iRam_? != 0;
  (pMVar4->fields).interactionDataHandlerBase = pIVar3;
  if (bVar5) {
    uVar6 = (uint)((ulonglong)&(pMVar4->fields).interactionDataHandlerBase >> 0xc);
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
code_?:
  return (pMVar4->fields).interactionDataHandlerBase;
}


/* Void HandleNoHit() */

void Assembly-CSharp.dll::PickUpItemHealRay::PickUpItemHealRay_HandleNoHit
               (PickUpItemHealRay *this,MethodInfo *method)

{
  if ((this->fields).isLockedOn != 0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(this->klass->vtable).TriggerEnd.methodPtr)(this,(this->klass->vtable).TriggerEnd.method);
    return;
  }
  return;
}


/* Void HandleOnStuck(MVWorldObjectClient, PickUpItemHealRay+RayCastData) */

void Assembly-CSharp.dll::PickUpItemHealRay::PickUpItemHealRay_HandleOnStuck
               (PickUpItemHealRay *this,MVWorldObjectClient *hitObject,
               PickUpItemHealRay_RayCastData *result,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (hitObject == (MVWorldObjectClient *)0x0) {
    bVar1 = (this->fields).isLockedOn;
  }
  else {
    pIVar2 = MVWorldObjectClient::MVWorldObjectClient_get_InteractionDataHandlerBase
                       (hitObject,(MethodInfo *)0x0);
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
    if (pIVar2 == (InteractionDataHandlerBase *)0x0) {
      bVar3 = false;
    }
    else {
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      bVar3 = (pIVar2->fields)._._._._._.m_CachedPtr != (void *)0x0;
    }
    bVar1 = (this->fields).isLockedOn;
    if (bVar3) {
      if (bVar1 != 0) {
        return;
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__IGUICrossHair);
        LOCK();
        UNLOCK();
        FUN_?();
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pMVar4 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
      if ((pMVar4 != (MainCameraManager *)0x0) &&
         (this_00 = (pMVar4->fields).plingSound, this_00 != (AudioSource *)0x0)) {
        UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_Play_1
                  (this_00,(MethodInfo *)0x0);
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__MVGameControllerBase);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if ((TypeInfo__MVGameControllerBase->static_fields->_PlayModeUI_k__BackingField !=
             (IPlayModeUI *)0x0) && (lVar5 = FUN_?(2,TypeInfo__IPlayModeUI), lVar5 != 0)) {
          FUN_?(3,TypeInfo__IGUICrossHair);
          PickUpItemHealRay_UpdateStuckObject(this,hitObject,(MethodInfo *)0x0);
          pMVar6 = (this->fields)._.owner;
          fVar7 = (result->HitVoxel).distance;
          fVar8 = (result->Direction).z;
          if (pMVar6 != (MVPickupOwner *)0x0) {
            uStack_9._0_4_ = (pMVar6->fields).lookOrigin.x;
            uStack_9._4_4_ = (pMVar6->fields).lookOrigin.y;
            fVar10 = (pMVar6->fields).lookOrigin.z;
            fVar11 = (result->Direction).x * fVar7 + (float)uStack_9;
            fVar12 = (result->Direction).y * fVar7 + uStack_9._4_4_;
            this_01 = (this->fields).stuckObject;
            if ((this_01 != (GameObject *)0x0) &&
               (obj = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                                (this_01,(MethodInfo *)0x0), obj != (Transform *)0x0)) {
              if (cRam_? == '\0') {
                FUN_?(&
                              void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                             );
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              uStack_9 = 0;
              fStack_13 = 0.0;
              pvVar14 = (obj->fields)._._.m_CachedPtr;
              if (pvVar14 != (void *)0x0) {
                pcVar15 = pcRam_?;
                if ((pcRam_? == (code *)0x0) &&
                   (pcVar15 = (code *)FUN_?(&UNK_?), pcVar15 == (code *)0x0)) {
                  uVar16 = func_?(&UNK_?);
                  FUN_?(uVar16,0);
                  pcVar15 = (code *)swi(3);
                  (*pcVar15)();
                  return;
                }
                pcRam_? = pcVar15;
                (*pcRam_?)(pvVar14,&uStack_9);
                (this->fields).hitOffset.x = fVar11 - (float)uStack_9;
                (this->fields).hitOffset.y = fVar12 - uStack_9._4_4_;
                (this->fields).hitOffset.z = (fVar8 * fVar7 + fVar10) - fStack_13;
                PickUpItemHealRay_UpdateItemState(this,(hitObject->fields)._.id,(MethodInfo *)0x0);
                (this->fields).isLockedOn = 1;
                return;
              }
              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
              ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
              pcVar15 = (code *)swi(3);
              (*pcVar15)();
              return;
            }
          }
        }
      }
      FUN_?();
      pcVar15 = (code *)swi(3);
      (*pcVar15)();
      return;
    }
  }
  if (bVar1 != 0) {
    (*(this->klass->vtable).TriggerEnd.methodPtr)(this,(this->klass->vtable).TriggerEnd.method);
  }
  return;
}


/* Void HandleRaycastResultLocally(PickUpItemHealRay+RayCastData) */

void Assembly-CSharp.dll::PickUpItemHealRay::PickUpItemHealRay_HandleRaycastResultLocally
               (PickUpItemHealRay *this,PickUpItemHealRay_RayCastData *result,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  int_MethodInfo__MVWorldObjectClientManager__GetWoIDHighestInHierarchyWithComponent<InteractionDataHandlerBase>_int_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  PStack_1.HitVoxel._8_8_ = *(undefined8 *)&(result->HitVoxel).point.z;
  PStack_1.HitVoxel.normal.y = (result->HitVoxel).normal.y;
  PStack_1.HitVoxel.normal.z = (result->HitVoxel).normal.z;
  iVar2 = result->Status;
  PStack_1.HitVoxel.cubePos = (result->HitVoxel).cubePos;
  PStack_1.HitVoxel._30_2_ = *(undefined2 *)&(result->HitVoxel).field_0x1e;
  PStack_1.HitVoxel.face = (result->HitVoxel).face;
  PStack_1.HitVoxel.isCubeHit = (result->HitVoxel).isCubeHit;
  PStack_1.HitVoxel._37_3_ = *(undefined3 *)&(result->HitVoxel).field_0x25;
  PStack_1.HitVoxel.woId = (result->HitVoxel).woId;
  PStack_1.HitVoxel._44_4_ = *(undefined4 *)&(result->HitVoxel).field_0x2c;
  PStack_1.HitVoxel.cube = (result->HitVoxel).cube;
  PStack_1.HitVoxel.distance = (result->HitVoxel).distance;
  PStack_1.HitVoxel._60_4_ = *(undefined4 *)&(result->HitVoxel).field_0x3c;
  PStack_1.HitVoxel.collider = (result->HitVoxel).collider;
  PStack_1.HitVoxel.transform = (result->HitVoxel).transform;
  PStack_1.HitVoxel.interactionFlags = (result->HitVoxel).interactionFlags;
  PStack_1.Direction.x = (result->Direction).x;
  PStack_1.Direction.y = (result->Direction).y;
  PStack_1._104_8_ = *(undefined8 *)&(result->Direction).z;
  if (iVar2 == 0) {
    pPVar3 = (this->fields).rayParticles;
    if (pPVar3 != (ParticleSystem *)0x0) {
      pPStackX_10 = (ParticleSystem *)
                    UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::
                    ParticleSystem_get_collision(pPVar3,(MethodInfo *)0x0);
      pcVar4 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
        uVar5 = func_?(&UNK_?);
        FUN_?(uVar5,0);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pcRam_? = pcVar4;
      (*pcRam_?)(&pPStackX_10);
      pcVar4 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
        uVar5 = func_?(&UNK_?);
        FUN_?(uVar5,0);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pcRam_? = pcVar4;
      (*pcRam_?)(&pPStackX_10);
      pPVar3 = (this->fields).hitParticles;
      if (pPVar3 != (ParticleSystem *)0x0) {
        UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::ParticleSystem_Stop_1
                  (pPVar3,1,(MethodInfo *)0x0);
        if ((this->fields).isLockedOn == 0) {
          return;
        }
        (*(this->klass->vtable).TriggerEnd.methodPtr)(this,(this->klass->vtable).TriggerEnd.method);
        return;
      }
    }
  }
  else {
    if (iVar2 != 1) {
      if (iVar2 != 2) {
        return;
      }
code_?:
      PStack_1.HitVoxel._8_8_ = *(undefined8 *)&(result->HitVoxel).point.z;
      PStack_1.HitVoxel.normal.y = (result->HitVoxel).normal.y;
      PStack_1.HitVoxel.normal.z = (result->HitVoxel).normal.z;
      PStack_1.HitVoxel.transform = (result->HitVoxel).transform;
      PStack_1.HitVoxel.interactionFlags = (result->HitVoxel).interactionFlags;
      PStack_1.Status = result->Status;
      PStack_1._4_4_ = *(undefined4 *)&result->field_0x4;
      PStack_1.HitVoxel.point.x = (result->HitVoxel).point.x;
      PStack_1.HitVoxel.point.y = (result->HitVoxel).point.y;
      PStack_1.HitVoxel.woId = (result->HitVoxel).woId;
      PStack_1.HitVoxel._44_4_ = *(undefined4 *)&(result->HitVoxel).field_0x2c;
      PStack_1.HitVoxel.cube = (result->HitVoxel).cube;
      PStack_1.HitVoxel.cubePos = (result->HitVoxel).cubePos;
      PStack_1.HitVoxel._30_2_ = *(undefined2 *)&(result->HitVoxel).field_0x1e;
      PStack_1.HitVoxel.face = (result->HitVoxel).face;
      PStack_1.HitVoxel.isCubeHit = (result->HitVoxel).isCubeHit;
      PStack_1.HitVoxel._37_3_ = *(undefined3 *)&(result->HitVoxel).field_0x25;
      PStack_1.HitVoxel.distance = (result->HitVoxel).distance;
      PStack_1.HitVoxel._60_4_ = *(undefined4 *)&(result->HitVoxel).field_0x3c;
      PStack_1.HitVoxel.collider = (result->HitVoxel).collider;
      VStack_6.x = (result->Direction).x;
      VStack_6.y = (result->Direction).y;
      VStack_6.z = (float)*(undefined8 *)&(result->Direction).z;
      VStack_7.point._0_8_ = PStack_1.HitVoxel.point._0_8_;
      VStack_7._8_8_ = PStack_1.HitVoxel._8_8_;
      VStack_7.normal._4_8_ = PStack_1.HitVoxel.normal._4_8_;
      VStack_7._24_8_ = PStack_1.HitVoxel._24_8_;
      VStack_7._32_8_ = PStack_1.HitVoxel._32_8_;
      VStack_7._40_8_ = PStack_1.HitVoxel._40_8_;
      VStack_7.cube = PStack_1.HitVoxel.cube;
      VStack_7._56_8_ = PStack_1.HitVoxel._56_8_;
      VStack_7.collider = PStack_1.HitVoxel.collider;
      VStack_7.transform = PStack_1.HitVoxel.transform;
      VStack_7.interactionFlags = PStack_1.HitVoxel.interactionFlags;
      iStack_8 = PStack_1.HitVoxel.interactionFlags;
      PickUpItemHealRay_UpdateRayParticleEffect(this,&VStack_7,&VStack_6,(MethodInfo *)0x0);
      PStack_1.Status = result->Status;
      PStack_1._4_4_ = *(undefined4 *)&result->field_0x4;
      PStack_1.HitVoxel.point.x = (result->HitVoxel).point.x;
      PStack_1.HitVoxel.point.y = (result->HitVoxel).point.y;
      PStack_1.HitVoxel._8_8_ = *(undefined8 *)&(result->HitVoxel).point.z;
      PStack_1.HitVoxel.normal.y = (result->HitVoxel).normal.y;
      PStack_1.HitVoxel.normal.z = (result->HitVoxel).normal.z;
      PStack_1.HitVoxel.transform = (result->HitVoxel).transform;
      PStack_1.HitVoxel.interactionFlags = (result->HitVoxel).interactionFlags;
      PStack_1.HitVoxel.cubePos = (result->HitVoxel).cubePos;
      PStack_1.HitVoxel._30_2_ = *(undefined2 *)&(result->HitVoxel).field_0x1e;
      PStack_1.HitVoxel.face = (result->HitVoxel).face;
      PStack_1.HitVoxel.isCubeHit = (result->HitVoxel).isCubeHit;
      PStack_1.HitVoxel._37_3_ = *(undefined3 *)&(result->HitVoxel).field_0x25;
      PStack_1.HitVoxel.woId = (result->HitVoxel).woId;
      PStack_1.HitVoxel._44_4_ = *(undefined4 *)&(result->HitVoxel).field_0x2c;
      PStack_1.HitVoxel.cube = (result->HitVoxel).cube;
      PStack_1.HitVoxel.distance = (result->HitVoxel).distance;
      PStack_1.HitVoxel._60_4_ = *(undefined4 *)&(result->HitVoxel).field_0x3c;
      PStack_1.HitVoxel.collider = (result->HitVoxel).collider;
      VStack_7.point._0_8_ = PStack_1.HitVoxel.point._0_8_;
      VStack_7._8_8_ = PStack_1.HitVoxel._8_8_;
      VStack_7.normal._4_8_ = PStack_1.HitVoxel.normal._4_8_;
      VStack_7._24_8_ = PStack_1.HitVoxel._24_8_;
      VStack_7._32_8_ = PStack_1.HitVoxel._32_8_;
      VStack_7._40_8_ = PStack_1.HitVoxel._40_8_;
      VStack_7.cube = PStack_1.HitVoxel.cube;
      VStack_7._56_8_ = PStack_1.HitVoxel._56_8_;
      VStack_7.collider = PStack_1.HitVoxel.collider;
      VStack_7.transform = PStack_1.HitVoxel.transform;
      VStack_7.interactionFlags = PStack_1.HitVoxel.interactionFlags;
      PickUpItemHealRay_UpdateRayHealingLogic(this,&VStack_7,(MethodInfo *)0x0);
      return;
    }
    pMVar9 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    PStack_1.Status = result->Status;
    PStack_1._4_4_ = *(undefined4 *)&result->field_0x4;
    PStack_1.HitVoxel.point.x = (result->HitVoxel).point.x;
    PStack_1.HitVoxel.point.y = (result->HitVoxel).point.y;
    PStack_1.HitVoxel._8_8_ = *(undefined8 *)&(result->HitVoxel).point.z;
    PStack_1.HitVoxel.normal.y = (result->HitVoxel).normal.y;
    PStack_1.HitVoxel.normal.z = (result->HitVoxel).normal.z;
    PStack_1.HitVoxel.cubePos = (result->HitVoxel).cubePos;
    PStack_1.HitVoxel._30_2_ = *(undefined2 *)&(result->HitVoxel).field_0x1e;
    PStack_1.HitVoxel.face = (result->HitVoxel).face;
    PStack_1.HitVoxel.isCubeHit = (result->HitVoxel).isCubeHit;
    PStack_1.HitVoxel._37_3_ = *(undefined3 *)&(result->HitVoxel).field_0x25;
    PStack_1.HitVoxel.transform = (result->HitVoxel).transform;
    PStack_1.HitVoxel.interactionFlags = (result->HitVoxel).interactionFlags;
    PStack_1.HitVoxel.distance = (result->HitVoxel).distance;
    PStack_1.HitVoxel._60_4_ = *(undefined4 *)&(result->HitVoxel).field_0x3c;
    PStack_1.HitVoxel.collider = (result->HitVoxel).collider;
    PStack_1.Direction.x = (result->Direction).x;
    PStack_1.Direction.y = (result->Direction).y;
    PStack_1._104_8_ = *(undefined8 *)&(result->Direction).z;
    if (pMVar9 != (MVWorldObjectClientManager *)0x0) {
      id = MVWorldObjectClientManager::
           MVWorldObjectClientManager_GetWoIDHighestInHierarchyWithComponent
                     (pMVar9,(result->HitVoxel).woId,
                      int_MethodInfo__MVWorldObjectClientManager__GetWoIDHighestInHierarchyWithComponent<InteractionDataHandlerBase>_int_
                     );
      pMVar9 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      if (pMVar9 != (MVWorldObjectClientManager *)0x0) {
        hitObject = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                              (pMVar9,id,(MethodInfo *)0x0);
        PStack_1.Status = result->Status;
        PStack_1._4_4_ = *(undefined4 *)&result->field_0x4;
        PStack_1.HitVoxel.point.x = (result->HitVoxel).point.x;
        PStack_1.HitVoxel.point.y = (result->HitVoxel).point.y;
        PStack_1.HitVoxel._8_8_ = *(undefined8 *)&(result->HitVoxel).point.z;
        PStack_1.HitVoxel.normal.y = (result->HitVoxel).normal.y;
        PStack_1.HitVoxel.normal.z = (result->HitVoxel).normal.z;
        PStack_1.HitVoxel.cubePos = (result->HitVoxel).cubePos;
        PStack_1.HitVoxel._30_2_ = *(undefined2 *)&(result->HitVoxel).field_0x1e;
        PStack_1.HitVoxel.face = (result->HitVoxel).face;
        PStack_1.HitVoxel.isCubeHit = (result->HitVoxel).isCubeHit;
        PStack_1.HitVoxel._37_3_ = *(undefined3 *)&(result->HitVoxel).field_0x25;
        PStack_1.HitVoxel.woId = (result->HitVoxel).woId;
        PStack_1.HitVoxel._44_4_ = *(undefined4 *)&(result->HitVoxel).field_0x2c;
        PStack_1.HitVoxel.cube = (result->HitVoxel).cube;
        PStack_1.HitVoxel.distance = (result->HitVoxel).distance;
        PStack_1.HitVoxel._60_4_ = *(undefined4 *)&(result->HitVoxel).field_0x3c;
        PStack_1.HitVoxel.collider = (result->HitVoxel).collider;
        PStack_1.HitVoxel.transform = (result->HitVoxel).transform;
        PStack_1.HitVoxel.interactionFlags = (result->HitVoxel).interactionFlags;
        PStack_1.Direction.x = (result->Direction).x;
        PStack_1.Direction.y = (result->Direction).y;
        PStack_1._104_8_ = *(undefined8 *)&(result->Direction).z;
        PickUpItemHealRay_HandleOnStuck(this,hitObject,&PStack_1,(MethodInfo *)0x0);
        goto code_?;
      }
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Vector3 HandleVehicleHitPosition(Vector3, Vector3, Single) */

Vector3 * Assembly-CSharp.dll::PickUpItemHealRay::PickUpItemHealRay_HandleVehicleHitPosition
                    (Vector3 *__return_storage_ptr__,PickUpItemHealRay *this,Vector3 *hitPosition,
                    Vector3 *direction,float hitDistance,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__VehiclePickupOwner);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (((this->fields).isLockedOn == 0) &&
     (pMVar1 = (this->fields)._.owner, pMVar1 != (MVPickupOwner *)0x0)) {
    pMVar2 = pMVar1->klass;
    bVar3 = (TypeInfo__VehiclePickupOwner->_1).naturalAligment;
    if ((bVar3 <= (pMVar2->_1).naturalAligment) &&
       ((pMVar2->_1).typeHierarchy[(ulonglong)bVar3 - 1] ==
        (Il2CppClass *)TypeInfo__VehiclePickupOwner)) {
      pMVar1 = (this->fields)._.owner;
      uVar4 = direction->x;
      fVar5 = direction->y;
      fVar6 = direction->z;
      uVar7 = (pMVar1->fields).lookOrigin.x;
      uVar8 = (pMVar1->fields).lookOrigin.y;
      fVar9 = (pMVar1->fields).lookOrigin.z;
      hitPosition->x = (float)uVar4 * hitDistance + (float)uVar7;
      hitPosition->y = fVar5 * hitDistance + (float)uVar8;
      hitPosition->z = fVar6 * hitDistance + fVar9;
    }
  }
  fVar5 = hitPosition->z;
  fVar6 = hitPosition->y;
  __return_storage_ptr__->x = hitPosition->x;
  __return_storage_ptr__->y = fVar6;
  __return_storage_ptr__->z = fVar5;
  return __return_storage_ptr__;
}


/* Boolean IsDamageRay(MVPickupOwner, MVWorldObjectClient) */

bool Assembly-CSharp.dll::PickUpItemHealRay::PickUpItemHealRay_IsDamageRay
               (MVPickupOwner *shooter,MVWorldObjectClient *stuckWorldObject,MethodInfo *method)

{
  pMStackX_20 = (MVPlayer *)0x0;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (pMVar1 != (MVGameControllerBase *)0x0) {
    pMVar2 = (pMVar1->fields).game;
    if (pMVar2 != (MVNetworkGame *)0x0) {
      pMVar3 = (pMVar2->fields).playerContainer;
      if (shooter != (MVPickupOwner *)0x0) {
        pMVar4 = (shooter->fields)._.worldObjectParent;
        if (pMVar4 != (MVWorldObjectClient *)0x0) {
          key = (pMVar4->fields)._.ownerActorNr;
          if (pMVar3 != (MVPlayerContainer *)0x0) {
            if (cRam_? == '\0') {
              FUN_?(&
                            MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__TryGetValue_int__MVPlayer__
                           );
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            this = (pMVar3->fields).players;
            if (this != (Dictionary_2_System_Int32_MVPlayer_ *)0x0) {
              bVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System
                      ::Object]::Dictionary_2_System_Int32_System_Object__TryGetValue
                                ((Dictionary_2_System_Int32_System_Object_ *)this,key,
                                 (Object **)&pMStackX_20,
                                 MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__TryGetValue_int__MVPlayer__
                                );
              if (bVar5 == 0) {
                return 0;
              }
              if (pMStackX_20 != (MVPlayer *)0x0) {
                bVar5 = MVPlayer::MVPlayer_IsOnSameTeam_1
                                  (pMStackX_20,stuckWorldObject,(MethodInfo *)0x0);
                return bVar5 ^ 1;
              }
              FUN_?();
            }
            FUN_?();
          }
          FUN_?();
        }
        FUN_?();
      }
      FUN_?();
    }
    FUN_?();
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  bVar5 = (*pcVar6)();
  return bVar5;
}


/* Boolean IsDirectionValid(Vector3) */

bool Assembly-CSharp.dll::PickUpItemHealRay::PickUpItemHealRay_IsDirectionValid
               (PickUpItemHealRay *this,Vector3 *direction,MethodInfo *method)

{
  method_00 = (MethodInfo *)direction;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar1 = (this->fields).stuckObject;
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
  if (pGVar1 != (GameObject *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pGVar1->fields)._.m_CachedPtr != (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize_1(direction,method_00);
      pMVar2 = (this->fields)._.owner;
      if (pMVar2 != (MVPickupOwner *)0x0) {
        pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_normalized
                           (aVStack_4,&(pMVar2->fields).lookDirection,method);
        uStack_5._0_4_ = direction->x;
        uStack_5._4_4_ = direction->y;
        fStack_6 = direction->z;
        uStack_7._0_4_ = pVVar3->x;
        uStack_7._4_4_ = pVVar3->y;
        fStack_8 = pVVar3->z;
        fVar9 = (float)FUN_?(&uStack_7);
        pGVar1 = (this->fields).stuckObject;
        if ((pGVar1 != (GameObject *)0x0) &&
           (pTVar10 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                               (pGVar1,(MethodInfo *)0x0), pTVar10 != (Transform *)0x0)) {
          if (cRam_? == '\0') {
            FUN_?(&
                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          uStack_7 = 0;
          fStack_8 = 0.0;
          pvVar11 = (pTVar10->fields)._._.m_CachedPtr;
          if (pvVar11 == (void *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
            ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar10,(MethodInfo *)0x0);
            pcVar12 = (code *)swi(3);
            bVar13 = (*pcVar12)();
            return bVar13;
          }
          pcVar12 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar12 = (code *)FUN_?(&UNK_?), pcVar12 == (code *)0x0)) {
            uVar14 = func_?(&UNK_?);
            FUN_?(uVar14,0);
            pcVar12 = (code *)swi(3);
            bVar13 = (*pcVar12)();
            return bVar13;
          }
          pcRam_? = pcVar12;
          (*pcRam_?)(pvVar11);
          pMVar2 = (this->fields)._.owner;
          if ((pMVar2 != (MVPickupOwner *)0x0) &&
             (pTVar10 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                 ((Component *)pMVar2,(MethodInfo *)0x0), pTVar10 != (Transform *)0x0
             )) {
            if (cRam_? == '\0') {
              FUN_?(&
                            void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                           );
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            uStack_5 = 0;
            fStack_6 = 0.0;
            pvVar11 = (pTVar10->fields)._._.m_CachedPtr;
            if (pvVar11 == (void *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
              ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar10,(MethodInfo *)0x0);
              pcVar12 = (code *)swi(3);
              bVar13 = (*pcVar12)();
              return bVar13;
            }
            pcVar12 = pcRam_?;
            if ((pcRam_? == (code *)0x0) &&
               (pcVar12 = (code *)FUN_?(&UNK_?), pcVar12 == (code *)0x0)) {
              uVar14 = func_?(&UNK_?);
              FUN_?(uVar14,0);
              pcVar12 = (code *)swi(3);
              bVar13 = (*pcVar12)();
              return bVar13;
            }
            pcRam_? = pcVar12;
            (*pcRam_?)(pvVar11,&uStack_5);
            fStack_6 = fStack_8 - fStack_6;
            uStack_5 = CONCAT44(uStack_7._4_4_ - uStack_5._4_4_,
                                 (float)uStack_7 - (float)uStack_5);
            fVar15 = (float)FUN_?(&uStack_5);
            if (fVar15 < _UNK_?) {
              fVar15 = _UNK_?;
            }
            lVar16 = 0xa8;
            if ((this->fields).isLockedOn != 0) {
              lVar16 = 0xac;
            }
            fVar15 = (_UNK_? - fVar15 / *(float *)((longlong)&this->klass + lVar16)) *
                     _UNK_? + _UNK_?;
            if ((fVar9 <= fVar15) && ((float)((uint)fVar15 ^ _UNK_?) <= fVar9)) {
              return 1;
            }
            bVar17 = iRam_? != 0;
            (this->fields).stuckObject = (GameObject *)0x0;
            if (bVar17) {
              uVar18 = (uint)((ulonglong)&(this->fields).stuckObject >> 0xc);
              uVar19 = (ulonglong)((uVar18 & 0x1fffff) >> 6);
              method = (MethodInfo *)(ulonglong)(uVar18 & 0x3f);
              do {
                uVar20 = *(ulonglong *)(uVar19 * 8 + 0xADDR);
                puVar21 = (ulonglong *)(uVar19 * 8 + 0xADDR);
                LOCK();
                bVar17 = uVar20 == *puVar21;
                if (bVar17) {
                  *puVar21 = uVar20 | 1L << (longlong)method;
                }
                UNLOCK();
              } while (!bVar17);
            }
            pMVar2 = (this->fields)._.owner;
            (this->fields).damageRay = 0;
            if (pMVar2 != (MVPickupOwner *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_normalized
                        (aVStack_4,&(pMVar2->fields).lookDirection,method);
              if ((this->fields).isLockedOn == 0) {
                return 1;
              }
              (*(this->klass->vtable).TriggerEnd.methodPtr)
                        (this,(this->klass->vtable).TriggerEnd.method);
              return 0;
            }
          }
        }
      }
      FUN_?();
      pcVar12 = (code *)swi(3);
      bVar13 = (*pcVar12)();
      return bVar13;
    }
  }
  return 1;
}


/* Boolean IsObjectStuckable(MVWorldObjectClient) */

bool Assembly-CSharp.dll::PickUpItemHealRay::PickUpItemHealRay_IsObjectStuckable
               (PickUpItemHealRay *this,MVWorldObjectClient *hitObject,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (hitObject == (MVWorldObjectClient *)0x0) {
    return 0;
  }
  pIVar1 = MVWorldObjectClient::MVWorldObjectClient_get_InteractionDataHandlerBase
                     (hitObject,(MethodInfo *)0x0);
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
  if (pIVar1 != (InteractionDataHandlerBase *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    return (pIVar1->fields)._._._._._.m_CachedPtr != (void *)0x0;
  }
  return 0;
}


/* Boolean IsStillChargingRay() */

bool Assembly-CSharp.dll::PickUpItemHealRay::PickUpItemHealRay_IsStillChargingRay
               (PickUpItemHealRay *this,MethodInfo *method)

{
  if ((this->fields).isShooting != 0) {
    return 1;
  }
  fVar1 = (this->fields).rayMinimumChargeTime;
  fVar2 = (this->fields).rayStartTime;
  pcVar3 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
    uVar4 = func_?(&UNK_?);
    FUN_?(uVar4,0);
    pcVar3 = (code *)swi(3);
    bVar5 = (*pcVar3)();
    return bVar5;
  }
  pcRam_? = pcVar3;
  fVar6 = (float)(*pcRam_?)();
  return fVar6 <= fVar1 + fVar2;
}


/* Void LerpRaysVisualRepresentation() */

void Assembly-CSharp.dll::PickUpItemHealRay::PickUpItemHealRay_LerpRaysVisualRepresentation
               (PickUpItemHealRay *this,MethodInfo *method)

{
  pMVar1 = (this->fields)._.owner;
  if (pMVar1 != (MVPickupOwner *)0x0) {
    pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_normalized
                       ((Vector3 *)auStack_3,&(pMVar1->fields).lookDirection,in_R8);
    VStack_4.x = pVVar2->x;
    VStack_4.y = pVVar2->y;
    VStack_4.z = pVVar2->z;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pVVar5 = TypeInfo__UnityEngine__Vector3->static_fields;
    uStack_6._0_4_ = (pVVar5->upVector).x;
    uStack_6._4_4_ = (pVVar5->upVector).y;
    fStack_7 = (pVVar5->upVector).z;
    auStack_8 = (undefined1  [8])0x0;
    uStack_9 = 0;
    pcVar10 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar10 = (code *)FUN_?(&UNK_?), pcVar10 == (code *)0x0)) {
      uVar11 = func_?(&UNK_?);
      FUN_?(uVar11,0);
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    pcRam_? = pcVar10;
    (*pcRam_?)(&VStack_4,&uStack_6,auStack_8);
    pPVar12 = (this->fields).rayParticles;
    if ((pPVar12 != (ParticleSystem *)0x0) &&
       (pTVar13 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                           ((Component *)pPVar12,(MethodInfo *)0x0), pTVar13 != (Transform *)0x0)) {
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      auStack_3._0_4_ = 0.0;
      auStack_3._4_4_ = 0.0;
      uStack_14 = 0;
      if ((pTVar13->fields)._._.m_CachedPtr == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar13,(MethodInfo *)0x0);
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      pcVar10 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar10 = (code *)FUN_?(&UNK_?), pcVar10 == (code *)0x0)) {
        uVar11 = func_?(&UNK_?);
        FUN_?(uVar11,0);
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      pcRam_? = pcVar10;
      (*pcRam_?)();
      fVar15 = (float)auStack_8._4_4_;
      fVar16 = (float)auStack_8._0_4_;
      fVar17 = (float)uStack_9;
      fVar18 = uStack_9._4_4_;
      if (_UNK_? <
          (float)auStack_3._4_4_ * (float)auStack_8._4_4_ +
          (float)auStack_3._0_4_ * (float)auStack_8._0_4_ + (float)uStack_14 * (float)uStack_9 +
          uStack_14._4_4_ * uStack_9._4_4_) {
        (this->fields).passedLerpTime = 0.0;
        return;
      }
      if ((float)auStack_8._4_4_ * (this->fields).lerpStartRotation.y +
          (float)auStack_8._0_4_ * (this->fields).lerpStartRotation.x +
          (float)uStack_9 * (this->fields).lerpStartRotation.z +
          uStack_9._4_4_ * (this->fields).lerpStartRotation.w <= _UNK_?) {
        (this->fields).lerpStartRotation.x = (float)auStack_8._0_4_;
        (this->fields).lerpStartRotation.y = (float)auStack_8._4_4_;
        (this->fields).lerpStartRotation.z = (float)uStack_9;
        (this->fields).lerpStartRotation.w = uStack_9._4_4_;
        (this->fields).passedLerpTime = 0.0;
      }
      fVar19 = (this->fields).passedLerpTime;
      pcVar10 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar10 = (code *)FUN_?(&UNK_?), pcVar10 == (code *)0x0)) {
        uVar11 = func_?(&UNK_?);
        FUN_?(uVar11,0);
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      pcRam_? = pcVar10;
      fVar20 = (float)(*pcRam_?)();
      pPVar12 = (this->fields).rayParticles;
      (this->fields).passedLerpTime = fVar20 + fVar19;
      if (pPVar12 != (ParticleSystem *)0x0) {
        pTVar13 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                           ((Component *)pPVar12,(MethodInfo *)0x0);
        pPVar12 = (this->fields).rayParticles;
        if ((pPVar12 != (ParticleSystem *)0x0) &&
           (obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                            ((Component *)pPVar12,(MethodInfo *)0x0), obj != (Transform *)0x0)) {
          if (cRam_? == '\0') {
            FUN_?(&
                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
            fVar16 = (float)auStack_8._0_4_;
            fVar15 = (float)auStack_8._4_4_;
            fVar17 = (float)uStack_9;
            fVar18 = uStack_9._4_4_;
          }
          auStack_3._0_4_ = 0.0;
          auStack_3._4_4_ = 0.0;
          uStack_14 = 0;
          pvVar21 = (obj->fields)._._.m_CachedPtr;
          if (pvVar21 == (void *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
            ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          pcVar10 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar10 = (code *)FUN_?(&UNK_?), pcVar10 == (code *)0x0)) {
            uVar11 = func_?(&UNK_?);
            FUN_?(uVar11,0);
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          pcRam_? = pcVar10;
          (*pcRam_?)(pvVar21,auStack_3);
          uStack_6 = CONCAT44(fVar15,fVar16);
          VStack_4.x = (float)auStack_3._0_4_;
          VStack_4.y = (float)auStack_3._4_4_;
          VStack_4.z = (float)uStack_14;
          uStack_22 = uStack_14._4_4_;
          fVar16 = _UNK_? / (this->fields).passedLerpTime;
          auStack_8._0_4_ = 0.0;
          auStack_8._4_4_ = 0.0;
          uStack_9 = 0;
          pcVar10 = pcRam_?;
          fStack_7 = fVar17;
          fStack_23 = fVar18;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar10 = (code *)FUN_?(&UNK_?), pcVar10 == (code *)0x0)) {
            uVar11 = func_?(&UNK_?);
            FUN_?(uVar11,0);
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          pcRam_? = pcVar10;
          (*pcRam_?)(&uStack_6,&VStack_4,fVar16,auStack_8);
          if (pTVar13 == (Transform *)0x0) {
            FUN_?();
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          auStack_3._0_4_ = auStack_8._0_4_;
          auStack_3._4_4_ = auStack_8._4_4_;
          uStack_14 = uStack_9;
          if (cRam_? == '\0') {
            FUN_?(&
                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pvVar21 = (pTVar13->fields)._._.m_CachedPtr;
          if (pvVar21 != (void *)0x0) {
            pcVar10 = pcRam_?;
            if ((pcRam_? == (code *)0x0) &&
               (pcVar10 = (code *)FUN_?(&UNK_?), pcVar10 == (code *)0x0)) {
              uVar11 = func_?(&UNK_?);
              FUN_?(uVar11,0);
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            pcRam_? = pcVar10;
            (*pcRam_?)(pvVar21,auStack_3);
            return;
          }
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar13,(MethodInfo *)0x0);
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
      }
    }
  }
  FUN_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::PickUpItemHealRay::PickUpItemHealRay_OnDestroy
               (PickUpItemHealRay *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object,(char)method);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pPVar1 = (this->fields).hitParticles;
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
  if (pPVar1 != (ParticleSystem *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pPVar1->fields)._._.m_CachedPtr != (void *)0x0) {
      pPVar1 = (this->fields).hitParticles;
      if (pPVar1 == (ParticleSystem *)0x0) {
        FUN_?();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::ParticleSystem_Stop_1
                (pPVar1,1,(MethodInfo *)0x0);
    }
  }
  return;
}


/* Void OnEquip() */

void Assembly-CSharp.dll::PickUpItemHealRay::PickUpItemHealRay_OnEquip
               (PickUpItemHealRay *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  UnityEngine__ParticleSystemRenderer_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::ParticleSystemRenderer>__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  PickupItem::PickupItem_OnEquip((PickupItem *)this,(MethodInfo *)0x0);
  obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                  ((Component *)this,(MethodInfo *)0x0);
  if (obj != (Transform *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    VStack_1.x = 0.0;
    VStack_1.y = 0.0;
    VStack_1.z = 0.0;
    pvVar2 = (obj->fields)._._.m_CachedPtr;
    if (pvVar2 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pcVar3 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
      uVar4 = func_?(&UNK_?);
      FUN_?(uVar4,0);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pcRam_? = pcVar3;
    (*pcRam_?)(pvVar2,&VStack_1);
    pMVar5 = (this->fields)._.owner;
    if (pMVar5 != (MVPickupOwner *)0x0) {
      pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_normalized
                         ((Vector3 *)&NStack_7,&(pMVar5->fields).lookDirection,in_R8);
      VStack_8.x = pVVar6->x;
      VStack_8.y = pVVar6->y;
      VStack_8.z = pVVar6->z;
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Vector3);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pVVar9 = TypeInfo__UnityEngine__Vector3->static_fields;
      uStack_10._0_4_ = (pVVar9->upVector).x;
      uStack_10._4_4_ = (pVVar9->upVector).y;
      fStack_11 = (pVVar9->upVector).z;
      aQStack_12[0].x = 0.0;
      aQStack_12[0].y = 0.0;
      aQStack_12[0].z = 0.0;
      aQStack_12[0].w = 0.0;
      pcVar3 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
        uVar4 = func_?(&UNK_?);
        FUN_?(uVar4,0);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pcRam_? = pcVar3;
      (*pcRam_?)(&VStack_8,&uStack_10,aQStack_12);
      NStack_7.value.a = 0.0;
      NStack_7.hasValue = 0;
      NStack_7._1_3_ = 0;
      NStack_7.value.r = 0.0;
      NStack_7.value.g = 0.0;
      NStack_7.value.b = 0.0;
      VStack_8.z = VStack_1.z;
      VStack_8.x = VStack_1.x;
      VStack_8.y = VStack_1.y;
      pPVar13 = OneShotPooledParticleSystem::OneShotPooledParticleSystem_Instantiate_1
                         (PoolEnums__Enum_HealRaySparks,&VStack_8,aQStack_12,
                          (Nullable_1_Single_)0x0,&NStack_7,(MethodInfo *)0x0);
      bVar14 = iRam_? != 0;
      (this->fields).hitParticles = pPVar13;
      if (bVar14) {
        uVar15 = (uint)((ulonglong)&(this->fields).hitParticles >> 0xc);
        lVar16 = (ulonglong)((uVar15 & 0x1fffff) >> 6) * 8;
        do {
          uVar17 = *(ulonglong *)(lVar16 + 0xADDR);
          puVar18 = (ulonglong *)(lVar16 + 0xADDR);
          LOCK();
          bVar14 = uVar17 == *puVar18;
          if (bVar14) {
            *puVar18 = uVar17 | 1L << (uVar15 & 0x3f);
          }
          UNLOCK();
        } while (!bVar14);
      }
      pPVar13 = (this->fields).hitParticles;
      if (pPVar13 != (ParticleSystem *)0x0) {
        UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::ParticleSystem_Stop_1
                  (pPVar13,1,(MethodInfo *)0x0);
        pMVar5 = (this->fields)._.owner;
        if (pMVar5 != (MVPickupOwner *)0x0) {
          if ((pMVar5->fields)._IsLocal_k__BackingField == 0) {
            return;
          }
          pPVar13 = (this->fields).rayParticles;
          if (pPVar13 != (ParticleSystem *)0x0) {
            pPVar19 = (ParticleSystemRenderer *)
                      UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                                ((Component *)pPVar13,
                                 UnityEngine__ParticleSystemRenderer_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::ParticleSystemRenderer>__
                                );
            bVar14 = iRam_? != 0;
            (this->fields).particleRenderer = pPVar19;
            if (bVar14) {
              uVar15 = (uint)((ulonglong)&(this->fields).particleRenderer >> 0xc);
              lVar16 = (ulonglong)((uVar15 & 0x1fffff) >> 6) * 8;
              do {
                uVar17 = *(ulonglong *)(lVar16 + 0xADDR);
                puVar18 = (ulonglong *)(lVar16 + 0xADDR);
                LOCK();
                bVar14 = uVar17 == *puVar18;
                if (bVar14) {
                  *puVar18 = uVar17 | 1L << (uVar15 & 0x3f);
                }
                UNLOCK();
              } while (!bVar14);
            }
            pPVar19 = (this->fields).particleRenderer;
            if (pPVar19 != (ParticleSystemRenderer *)0x0) {
              pMVar20 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material
                                  ((Renderer *)pPVar19,(MethodInfo *)0x0);
              bVar14 = iRam_? != 0;
              (this->fields).normalRayMaterial = pMVar20;
              if (bVar14) {
                uVar15 = (uint)((ulonglong)&(this->fields).normalRayMaterial >> 0xc);
                lVar16 = (ulonglong)((uVar15 & 0x1fffff) >> 6) * 8;
                do {
                  uVar17 = *(ulonglong *)(lVar16 + 0xADDR);
                  puVar18 = (ulonglong *)(lVar16 + 0xADDR);
                  LOCK();
                  bVar14 = uVar17 == *puVar18;
                  if (bVar14) {
                    *puVar18 = uVar17 | 1L << (uVar15 & 0x3f);
                  }
                  UNLOCK();
                } while (!bVar14);
              }
              pPVar19 = (this->fields).particleRenderer;
              if (pPVar19 != (ParticleSystemRenderer *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_SetMaterial
                          ((Renderer *)pPVar19,(this->fields).ZIgnoreMaterial,(MethodInfo *)0x0);
                iVar21 = iRam_?;
                (this->fields).remoteMuzzlePoint = (this->fields)._.muzzlePoint;
                if (iVar21 != 0) {
                  uVar15 = (uint)((ulonglong)&(this->fields).remoteMuzzlePoint >> 0xc);
                  lVar16 = (ulonglong)((uVar15 & 0x1fffff) >> 6) * 8;
                  do {
                    uVar17 = *(ulonglong *)(lVar16 + 0xADDR);
                    puVar18 = (ulonglong *)(lVar16 + 0xADDR);
                    LOCK();
                    bVar14 = uVar17 == *puVar18;
                    if (bVar14) {
                      *puVar18 = uVar17 | 1L << (uVar15 & 0x3f);
                    }
                    UNLOCK();
                    iVar21 = iRam_?;
                  } while (!bVar14);
                }
                (this->fields).remoteParticleSystem = (this->fields).rayParticles;
                iVar22 = 0;
                if (iVar21 != 0) {
                  uVar15 = (uint)((ulonglong)&(this->fields).remoteParticleSystem >> 0xc);
                  lVar16 = (ulonglong)((uVar15 & 0x1fffff) >> 6) * 8;
                  do {
                    uVar17 = *(ulonglong *)(lVar16 + 0xADDR);
                    puVar18 = (ulonglong *)(lVar16 + 0xADDR);
                    LOCK();
                    bVar14 = uVar17 == *puVar18;
                    if (bVar14) {
                      *puVar18 = uVar17 | 1L << (uVar15 & 0x3f);
                    }
                    UNLOCK();
                    iVar22 = iRam_?;
                  } while (!bVar14);
                }
                (this->fields)._.muzzlePoint = (this->fields).localMuzzePoint;
                iVar21 = 0;
                if (iVar22 != 0) {
                  uVar15 = (uint)((ulonglong)&(this->fields)._.muzzlePoint >> 0xc);
                  lVar16 = (ulonglong)((uVar15 & 0x1fffff) >> 6) * 8;
                  do {
                    uVar17 = *(ulonglong *)(lVar16 + 0xADDR);
                    puVar18 = (ulonglong *)(lVar16 + 0xADDR);
                    LOCK();
                    bVar14 = uVar17 == *puVar18;
                    if (bVar14) {
                      *puVar18 = uVar17 | 1L << (uVar15 & 0x3f);
                    }
                    UNLOCK();
                    iVar21 = iRam_?;
                  } while (!bVar14);
                }
                (this->fields).rayParticles = (this->fields).localRayParticles;
                if (iVar21 == 0) {
                  return;
                }
                uVar15 = (uint)((ulonglong)&(this->fields).rayParticles >> 0xc);
                lVar16 = (ulonglong)((uVar15 & 0x1fffff) >> 6) * 8;
                do {
                  uVar17 = *(ulonglong *)(lVar16 + 0xADDR);
                  puVar18 = (ulonglong *)(lVar16 + 0xADDR);
                  LOCK();
                  bVar14 = uVar17 == *puVar18;
                  if (bVar14) {
                    *puVar18 = uVar17 | 1L << (uVar15 & 0x3f);
                  }
                  UNLOCK();
                } while (!bVar14);
                return;
              }
            }
          }
        }
      }
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void OnHitParticleUpdate(Vector3, Vector3, Single) */

void Assembly-CSharp.dll::PickUpItemHealRay::PickUpItemHealRay_OnHitParticleUpdate
               (PickUpItemHealRay *this,Vector3 *hitPosition,Vector3 *firingDirection,float distance
               ,MethodInfo *method)

{
  VStack_1.x = hitPosition->x;
  VStack_1.y = hitPosition->y;
  VStack_1.z = hitPosition->z;
  aVStack_2[0].x = firingDirection->x;
  aVStack_2[0].y = firingDirection->y;
  aVStack_2[0].z = firingDirection->z;
  PickUpItemHealRay_UpdateHitParticles(this,aVStack_2,&VStack_1,(MethodInfo *)0x0);
  pPStackX_8 = (this->fields).rayParticles;
  if (pPStackX_8 == (ParticleSystem *)0x0) {
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (iRam_? != 0) {
    uVar4 = (uint)((ulonglong)&pPStackX_8 >> 0xc);
    uVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
    do {
      uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
      puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
      LOCK();
      bVar8 = uVar6 == *puVar7;
      if (bVar8) {
        *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
    } while (!bVar8);
  }
  pcVar3 = pcRam_?;
  apPStackX_10[0] = pPStackX_8;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
    uVar9 = func_?(&UNK_?);
    FUN_?(uVar9,0);
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pcRam_? = pcVar3;
  fVar10 = (float)(*pcRam_?)(apPStackX_10);
  pcVar3 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
    uVar9 = func_?(&UNK_?);
    FUN_?(uVar9,0);
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pcRam_? = pcVar3;
  (*pcRam_?)(apPStackX_10,distance / fVar10);
  return;
}


/* Void OnStateChanged(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::PickUpItemHealRay::PickUpItemHealRay_OnStateChanged
               (PickUpItemHealRay *this,Dictionary_2_System_Object_System_Object_ *newState,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__IHealRayAttachementObject);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVWorldObjectClient);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__PickUpItemHealRay);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_S);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields)._.owner;
  pMStackX_8 = (MVWorldObjectClient *)0x0;
  if (pMVar1 != (MVPickupOwner *)0x0) {
    if ((pMVar1->fields)._IsLocal_k__BackingField != 0) {
      return;
    }
    if (newState != (Dictionary_2_System_Object_System_Object_ *)0x0) {
      iVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
              UIElements::StyleComplexSelector+PseudoStateData]::
              Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                        ((Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                          *)newState,(Object *)StringLiteral_S,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                         ->klass->rgctx_data[0x21].method);
      if (iVar2 < 0) {
        return;
      }
      pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
               Object]::Dictionary_2_System_Object_System_Object__get_Item
                         (newState,(Object *)StringLiteral_S,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         );
      if (pOVar3 != (Object *)0x0) {
        if ((pOVar3->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
          FUN_?(pOVar3,lRam_?);
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        id = *(int *)&pOVar3[1].klass;
        if (id == -1) {
          (*(this->klass->vtable).TriggerEnd.methodPtr)
                    (this,(this->klass->vtable).TriggerEnd.method);
          return;
        }
        this_01 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
        if (this_01 != (MVWorldObjectClientManager *)0x0) {
          bVar5 = MVWorldObjectClientManager::MVWorldObjectClientManager_TryGetWorldObject
                            (this_01,id,(MVWorldObject **)&pMStackX_8,(MethodInfo *)0x0);
          this_00 = pMStackX_8;
          if (bVar5 == 0) {
            return;
          }
          if (pMStackX_8 == (MVWorldObjectClient *)0x0) {
            (this->fields).stuckObject = (GameObject *)0x0;
            func_?(&(this->fields).stuckObject);
            (this->fields).damageRay = 0;
            return;
          }
          bVar6 = (TypeInfo__MVWorldObjectClient->_1).naturalAligment;
          if ((((pMStackX_8->klass->_1).naturalAligment < bVar6) ||
              ((MVWorldObjectClient__Class *)
               (pMStackX_8->klass->_1).typeHierarchy[(ulonglong)bVar6 - 1] !=
               TypeInfo__MVWorldObjectClient)) || (pMStackX_8 == (MVWorldObjectClient *)0x0)) {
            FUN_?(pMStackX_8);
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          (this->fields).stuckObject = (GameObject *)0x0;
          func_?(&(this->fields).stuckObject);
          (this->fields).damageRay = 0;
          pIVar7 = MVWorldObjectClient::MVWorldObjectClient_get_InteractionDataHandlerBase
                             (this_00,(MethodInfo *)0x0);
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
          if (pIVar7 == (InteractionDataHandlerBase *)0x0) {
            return;
          }
          if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
            FUN_?();
          }
          if ((pIVar7->fields)._._._._._.m_CachedPtr == (void *)0x0) {
            return;
          }
          (this->fields).stuckObject = (this_00->fields).gameObject;
          func_?(&(this->fields).stuckObject);
          pMVar1 = (this->fields)._.owner;
          if (*(int *)&(TypeInfo__PickUpItemHealRay->_1).field_0x1c == 0) {
            FUN_?();
          }
          bVar5 = PickUpItemHealRay_IsDamageRay(pMVar1,this_00,(MethodInfo *)0x0);
          (this->fields).damageRay = bVar5;
          (this->fields).isLockedOn = 1;
          lVar8 = FUN_?(this_00,TypeInfo__IHealRayAttachementObject);
          if (lVar8 == 0) {
            return;
          }
          pGVar9 = (GameObject *)FUN_?(0,TypeInfo__IHealRayAttachementObject,lVar8);
          (this->fields).stuckObject = pGVar9;
          func_?(&(this->fields).stuckObject);
          return;
        }
      }
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void OnUnequip() */

void Assembly-CSharp.dll::PickUpItemHealRay::PickUpItemHealRay_OnUnequip
               (PickUpItemHealRay *this,MethodInfo *method)

{
  obj = (this->fields).hitParticles;
  if (obj == (ParticleSystem *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::ParticleSystem>_UnityEngine__ParticleSystem_
                  ,1,0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (obj == (ParticleSystem *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pvVar2 = (obj->fields)._._.m_CachedPtr;
  if (pvVar2 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar3 = func_?(&UNK_?);
    FUN_?(uVar3,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam_?)(pvVar2,1,1);
  return;
}


/* Void ResetAmmo() */

void Assembly-CSharp.dll::PickUpItemHealRay::PickUpItemHealRay_ResetAmmo
               (PickUpItemHealRay *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  iVar1 = (*(this->klass->vtable).get_MaxAmmo.methodPtr)(this);
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  aOStack_2[0].fakeValue = 0.0;
  aOStack_2[0].inited = 0;
  aOStack_2[0]._21_3_ = 0;
  aOStack_2[0].currentCryptoKey = 0;
  aOStack_2[0].hiddenValue.b1 = 0;
  aOStack_2[0].hiddenValue.b2 = 0;
  aOStack_2[0].hiddenValue.b3 = 0;
  aOStack_2[0].hiddenValue.b4 = 0;
  aOStack_2[0].hiddenValueOld = (Byte__Array *)0x0;
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).field_0x1c == 0) {
    FUN_?();
  }
  value = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
          ObscuredFloat_InternalEncrypt((float)iVar1,(MethodInfo *)0x0);
  Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
  ObscuredFloat__ctor(aOStack_2,value,(MethodInfo *)0x0);
  bVar3 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::ObscuredCheatingDetector::
          ObscuredCheatingDetector_get_IsRunning((MethodInfo *)0x0);
  if (bVar3 != 0) {
    aOStack_2[0].fakeValue = (float)iVar1;
  }
  bVar4 = iRam_? != 0;
  (this->fields).currentAmmoLeft.currentCryptoKey = aOStack_2[0].currentCryptoKey;
  (this->fields).currentAmmoLeft.hiddenValue = aOStack_2[0].hiddenValue;
  (this->fields).currentAmmoLeft.hiddenValueOld = aOStack_2[0].hiddenValueOld;
  (this->fields).currentAmmoLeft.fakeValue = aOStack_2[0].fakeValue;
  (this->fields).currentAmmoLeft.inited = aOStack_2[0].inited;
  *(undefined3 *)&(this->fields).currentAmmoLeft.field_0x15 = aOStack_2[0]._21_3_;
  if (bVar4) {
    uVar5 = (uint)((ulonglong)&(this->fields).currentAmmoLeft.hiddenValueOld >> 0xc);
    uVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6);
    do {
      uVar7 = *(ulonglong *)(uVar6 * 8 + 0xADDR);
      puVar8 = (ulonglong *)(uVar6 * 8 + 0xADDR);
      LOCK();
      bVar4 = uVar7 == *puVar8;
      if (bVar4) {
        *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
      }
      UNLOCK();
    } while (!bVar4);
  }
  return;
}


/* Void SetRayParticleDistance(Single) */

void Assembly-CSharp.dll::PickUpItemHealRay::PickUpItemHealRay_SetRayParticleDistance
               (PickUpItemHealRay *this,float distance,MethodInfo *method)

{
  apPStackX_8[0] = (this->fields).rayParticles;
  if (apPStackX_8[0] == (ParticleSystem *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (iRam_? != 0) {
    uVar2 = (uint)((ulonglong)apPStackX_8 >> 0xc);
    uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
    method = (MethodInfo *)(ulonglong)(uVar2 & 0x3f);
    do {
      uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
      puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
      LOCK();
      bVar6 = uVar4 == *puVar5;
      if (bVar6) {
        *puVar5 = uVar4 | 1L << (longlong)method;
      }
      UNLOCK();
    } while (!bVar6);
  }
  pcVar1 = pcRam_?;
  pPStackX_20 = apPStackX_8[0];
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?,distance,method), pcVar1 == (code *)0x0)) {
    uVar7 = func_?(&UNK_?);
    FUN_?(uVar7,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
  fVar8 = (float)(*pcRam_?)(&pPStackX_20);
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar7 = func_?(&UNK_?);
    FUN_?(uVar7,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
  (*pcRam_?)(&pPStackX_20,distance / fVar8);
  return;
}


/* Void ShowHitEffect() */

void Assembly-CSharp.dll::PickUpItemHealRay::PickUpItemHealRay_ShowHitEffect
               (PickUpItemHealRay *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__IGUICrossHair);
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
  if ((pMVar1 != (MainCameraManager *)0x0) &&
     (this_00 = (pMVar1->fields).plingSound, this_00 != (AudioSource *)0x0)) {
    UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_Play_1
              (this_00,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (TypeInfo__MVGameControllerBase->static_fields->_PlayModeUI_k__BackingField !=
        (IPlayModeUI *)0x0) {
      plVar2 = (longlong *)FUN_?(2,TypeInfo__IPlayModeUI);
      if (plVar2 != (longlong *)0x0) {
        uVar3 = 0;
        lVar4 = *plVar2;
        if (*(ushort *)(lVar4 + 0x12e) != 0) {
          do {
            if (*(IGUICrossHair__Class **)(*(longlong *)(lVar4 + 0xb0) + (ulonglong)uVar3 * 0x10) ==
                TypeInfo__IGUICrossHair) {
              puVar5 = (undefined8 *)
                       ((longlong)
                        (*(int *)(*(longlong *)(lVar4 + 0xb0) + 8 + (ulonglong)uVar3 * 0x10) + 3) *
                        0x10 + 0x138 + lVar4);
              UNRECOVERED_JUMPTABLE = (code *)*puVar5;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*UNRECOVERED_JUMPTABLE)(plVar2,puVar5[1],UNRECOVERED_JUMPTABLE);
              return;
            }
            uVar3 = uVar3 + 1;
          } while (uVar3 < *(ushort *)(lVar4 + 0x12e));
        }
        puVar5 = (undefined8 *)FUN_?(plVar2);
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)*puVar5)(plVar2,puVar5[1],(code *)*puVar5);
        return;
      }
    }
  }
  FUN_?();
  UNRECOVERED_JUMPTABLE = (code *)swi(3);
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


/* Void SyncState(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::PickUpItemHealRay::PickUpItemHealRay_SyncState
               (PickUpItemHealRay *this,Dictionary_2_System_Object_System_Object_ *newState,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__ICurrentItemOwner);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields)._.owner;
  if (pMVar1 != (MVPickupOwner *)0x0) {
    if ((pMVar1->fields)._IsLocal_k__BackingField != 0) {
      pPVar2 = (PickUpItemHealRay *)(pMVar1->fields).currentItem;
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
      if (this != (PickUpItemHealRay *)0x0 || pPVar2 != (PickUpItemHealRay *)0x0) {
        if (pPVar2 == (PickUpItemHealRay *)0x0) {
          if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
            FUN_?();
          }
          bVar3 = (this->fields)._._._._._.m_CachedPtr == (void *)0x0;
        }
        else {
          bVar3 = pPVar2 == this;
        }
        if (!bVar3) {
          return;
        }
      }
      uVar4._0_4_ = (this->fields).currentAmmoLeft.currentCryptoKey;
      uVar4._4_4_ = (this->fields).currentAmmoLeft.hiddenValue;
      pBVar5 = (this->fields).currentAmmoLeft.hiddenValueOld;
      uVar6._0_4_ = (this->fields).currentAmmoLeft.fakeValue;
      uVar6._4_1_ = (this->fields).currentAmmoLeft.inited;
      uVar6._5_3_ = *(undefined3 *)&(this->fields).currentAmmoLeft.field_0x15;
      if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).field_0x1c ==
          0) {
        FUN_?();
      }
      aOStack_7[0]._0_8_ = uVar4;
      aOStack_7[0].hiddenValueOld = pBVar5;
      aOStack_7[0]._16_8_ = uVar6;
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).field_0x1c ==
          0) {
        FUN_?();
      }
      value_00 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
                 ObscuredFloat_InternalDecrypt(aOStack_7,(MethodInfo *)0x0);
      pMVar1 = (this->fields)._.owner;
      fVar8 = (this->fields).elapsedUpdateWaitTime;
      if (pMVar1 == (MVPickupOwner *)0x0) goto code_?;
      lVar9 = FUN_?((pMVar1->fields)._.worldObjectParent);
      if (lVar9 != 0) {
        FUN_?(1,TypeInfo__ICurrentItemOwner,lVar9,newState);
      }
      if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).field_0x1c ==
          0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      aOStack_7[0].fakeValue = 0.0;
      aOStack_7[0].inited = 0;
      aOStack_7[0]._21_3_ = 0;
      aOStack_7[0].currentCryptoKey = 0;
      aOStack_7[0].hiddenValue.b1 = 0;
      aOStack_7[0].hiddenValue.b2 = 0;
      aOStack_7[0].hiddenValue.b3 = 0;
      aOStack_7[0].hiddenValue.b4 = 0;
      aOStack_7[0].hiddenValueOld = (Byte__Array *)0x0;
      if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).field_0x1c ==
          0) {
        FUN_?();
      }
      value = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
              ObscuredFloat_InternalEncrypt(value_00,(MethodInfo *)0x0);
      Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
      ObscuredFloat__ctor(aOStack_7,value,(MethodInfo *)0x0);
      bVar10 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::
               ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning((MethodInfo *)0x0);
      if (bVar10 != 0) {
        aOStack_7[0].fakeValue = value_00;
      }
      bVar3 = iRam_? != 0;
      (this->fields).currentAmmoLeft.currentCryptoKey = aOStack_7[0].currentCryptoKey;
      (this->fields).currentAmmoLeft.hiddenValue = aOStack_7[0].hiddenValue;
      (this->fields).currentAmmoLeft.hiddenValueOld = aOStack_7[0].hiddenValueOld;
      (this->fields).currentAmmoLeft.fakeValue = aOStack_7[0].fakeValue;
      (this->fields).currentAmmoLeft.inited = aOStack_7[0].inited;
      *(undefined3 *)&(this->fields).currentAmmoLeft.field_0x15 = aOStack_7[0]._21_3_;
      if (bVar3) {
        uVar11 = (uint)((ulonglong)&(this->fields).currentAmmoLeft.hiddenValueOld >> 0xc);
        uVar12 = (ulonglong)((uVar11 & 0x1fffff) >> 6);
        do {
          uVar13 = *(ulonglong *)(uVar12 * 8 + 0xADDR);
          puVar14 = (ulonglong *)(uVar12 * 8 + 0xADDR);
          LOCK();
          bVar3 = uVar13 == *puVar14;
          if (bVar3) {
            *puVar14 = uVar13 | 1L << (uVar11 & 0x3f);
          }
          UNLOCK();
        } while (!bVar3);
      }
      (this->fields).elapsedUpdateWaitTime = fVar8;
    }
    return;
  }
code_?:
  FUN_?();
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
  return;
}


/* Void TriggerBegin(Int32) */

void Assembly-CSharp.dll::PickUpItemHealRay::PickUpItemHealRay_TriggerBegin
               (PickUpItemHealRay *this,int32_t instigatorActorNr,MethodInfo *method)

{
  pMVar1 = (this->fields)._.owner;
  if (pMVar1 != (MVPickupOwner *)0x0) {
    if ((pMVar1->fields)._IsLocal_k__BackingField != 0) {
      PickUpItemHealRay_ChangeUsedParticleSystem(this,(MethodInfo *)0x0);
    }
    pPVar2 = (this->fields).rayParticles;
    if (pPVar2 != (ParticleSystem *)0x0) {
      if (iRam_? != 0) {
        uVar3 = (uint)((ulonglong)&pPStackX_8 >> 0xc);
        uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
        do {
          uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
          puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
          LOCK();
          bVar7 = uVar5 == *puVar6;
          if (bVar7) {
            *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
          }
          UNLOCK();
        } while (!bVar7);
      }
      pcVar8 = pcRam_?;
      pPStackX_8 = pPVar2;
      pPStackX_20 = pPVar2;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
        uVar9 = func_?(&UNK_?);
        FUN_?(uVar9,0);
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pcRam_? = pcVar8;
      (*pcRam_?)(&pPStackX_20);
      bVar10 = PickUpItemHealRay_IsStillChargingRay(this,(MethodInfo *)0x0);
      pcVar8 = pcRam_?;
      if (bVar10 != 0) {
        (this->fields).isShooting = 1;
        pcVar11 = pcRam_?;
        if ((pcVar8 == (code *)0x0) &&
           (pcVar8 = (code *)FUN_?(&UNK_?), pcVar11 = pcVar8, pcVar8 == (code *)0x0))
        {
          uVar9 = func_?(&UNK_?);
          FUN_?(uVar9,0);
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pcRam_? = pcVar11;
        fVar12 = (float)(*pcVar8)();
        (this->fields).rayStartTime = fVar12;
        return;
      }
      if ((pcRam_? == (code *)0x0) &&
         (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
        uVar9 = func_?(&UNK_?);
        FUN_?(uVar9,0);
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pcRam_? = pcVar8;
      fVar12 = (float)(*pcRam_?)();
      pMVar1 = (this->fields)._.owner;
      (this->fields).rayStartTime = fVar12;
      (this->fields).isShooting = 1;
      if (pMVar1 != (MVPickupOwner *)0x0) {
        if ((pMVar1->fields)._IsLocal_k__BackingField == 0) {
          pPVar2 = (this->fields).rayParticles;
          if (pPVar2 == (ParticleSystem *)0x0) goto code_?;
          obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                          ((Component *)pPVar2,(MethodInfo *)0x0);
          pVVar13 = PickUpItemHealRay_CalculateParticlesRotation(&VStack_14,this,(MethodInfo *)0x0);
          uStack_15._0_4_ = pVVar13->x;
          uStack_15._4_4_ = pVVar13->y;
          fStack_16 = pVVar13->z;
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__UnityEngine__Vector3);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pVVar17 = TypeInfo__UnityEngine__Vector3->static_fields;
          uStack_18._0_4_ = (pVVar17->upVector).x;
          uStack_18._4_4_ = (pVVar17->upVector).y;
          fStack_19 = (pVVar17->upVector).z;
          uStack_20 = 0;
          uStack_21 = 0;
          pcVar8 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
            uVar9 = func_?(&UNK_?);
            FUN_?(uVar9,0);
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          pcRam_? = pcVar8;
          (*pcRam_?)(&uStack_15,&uStack_18,&uStack_20);
          if (obj == (Transform *)0x0) {
            FUN_?();
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          VStack_14.x = (float)uStack_20;
          VStack_14.y = uStack_20._4_4_;
          VStack_14.z = (float)uStack_21;
          uStack_22 = uStack_21._4_4_;
          if (cRam_? == '\0') {
            FUN_?(&
                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pvVar23 = (obj->fields)._._.m_CachedPtr;
          if (pvVar23 == (void *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
            ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          pcVar8 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
            uVar9 = func_?(&UNK_?);
            FUN_?(uVar9,0);
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          pcRam_? = pcVar8;
          (*pcRam_?)(pvVar23,&VStack_14);
        }
        return;
      }
    }
  }
code_?:
  FUN_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void TriggerEnd() */

void Assembly-CSharp.dll::PickUpItemHealRay::PickUpItemHealRay_TriggerEnd
               (PickUpItemHealRay *this,MethodInfo *method)

{
  pPVar1 = (this->fields).rayParticles;
  (this->fields).isLockedOn = 0;
  if (pPVar1 != (ParticleSystem *)0x0) {
    if (iRam_? != 0) {
      uVar2 = (uint)((ulonglong)&pPStackX_8 >> 0xc);
      lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
      do {
        uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
        puVar5 = (ulonglong *)(lVar3 + 0xADDR);
        LOCK();
        bVar6 = uVar4 == *puVar5;
        if (bVar6) {
          *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
        }
        UNLOCK();
      } while (!bVar6);
    }
    pcVar7 = pcRam_?;
    pPStackX_8 = pPVar1;
    apPStackX_18[0] = pPVar1;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0)) {
      uVar8 = func_?(&UNK_?);
      FUN_?(uVar8,0);
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pcRam_? = pcVar7;
    (*pcRam_?)(apPStackX_18);
    obj = (this->fields).audioSource;
    (this->fields).isShooting = 0;
    if (obj != (AudioSource *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::AudioSource>_UnityEngine__AudioSource_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pvVar9 = (obj->fields)._._._._.m_CachedPtr;
      if (pvVar9 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
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
      (*pcRam_?)(pvVar9,1);
      bVar6 = iRam_? != 0;
      (this->fields).stuckObject = (GameObject *)0x0;
      if (bVar6) {
        uVar2 = (uint)((ulonglong)&(this->fields).stuckObject >> 0xc);
        lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
        do {
          uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
          puVar5 = (ulonglong *)(lVar3 + 0xADDR);
          LOCK();
          bVar6 = uVar4 == *puVar5;
          if (bVar6) {
            *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
          }
          UNLOCK();
        } while (!bVar6);
      }
      pPVar1 = (this->fields).hitParticles;
      (this->fields).damageRay = 0;
      if (pPVar1 != (ParticleSystem *)0x0) {
        UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::ParticleSystem_Stop_1
                  (pPVar1,1,(MethodInfo *)0x0);
        pMVar10 = (this->fields)._.owner;
        if (pMVar10 != (MVPickupOwner *)0x0) {
          if ((pMVar10->fields)._IsLocal_k__BackingField != 0) {
            PickUpItemHealRay_UpdateItemState(this,-1,(MethodInfo *)0x0);
          }
          return;
        }
      }
    }
  }
  FUN_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void TryHealTarget(InteractionDataHandlerBase) */

void Assembly-CSharp.dll::PickUpItemHealRay::PickUpItemHealRay_TryHealTarget
               (PickUpItemHealRay *this,InteractionDataHandlerBase *interactionHandler,
               MethodInfo *method)

{
  pIVar1 = interactionHandler;
  if (cRam_? == '\0') {
    FUN_?(&
                  MVInteractableBase_MethodInfo__UnityEngine__GameObject__GetComponent<MVInteractableBase>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVAvatarLocal);
    LOCK();
    UNLOCK();
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
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (interactionHandler != (InteractionDataHandlerBase *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((interactionHandler->fields)._._._._._.m_CachedPtr != (void *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Vector3);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      IStack_2.interactionType = 0;
      IStack_2.playerKilledByType = 0;
      IStack_2._18_2_ = 0;
      IStack_2.damage = 0.0;
      IStack_2.impulse.x = 0.0;
      IStack_2.impulse.y = 0.0;
      IStack_2.impulse.z = 0.0;
      pVVar3 = TypeInfo__UnityEngine__Vector3->static_fields;
      IStack_4.damage = (pVVar3->zeroVector).x;
      IStack_4.impulse.x = (pVVar3->zeroVector).y;
      IStack_4.impulse.y = (pVVar3->zeroVector).z;
      MVWorldObject.dll::MV::WorldObject::InteractionData::InteractionData__ctor_5
                (&IStack_2,
                 (InteractionPackageType__Enum)CONCAT71((int7)((ulonglong)pIVar1 >> 8),0x1b),0.0,
                 (Vector3 *)&IStack_4,in_stack_5 & 0xffffff00,(MethodInfo *)0x0);
      IStack_4.interactionType = IStack_2.interactionType;
      IStack_4.playerKilledByType = IStack_2.playerKilledByType;
      IStack_4._18_2_ = IStack_2._18_2_;
      IStack_4.damage = IStack_2.damage;
      IStack_4.impulse.x = IStack_2.impulse.x;
      IStack_4.impulse.y = IStack_2.impulse.y;
      IStack_4.impulse.z = IStack_2.impulse.z;
      (*(interactionHandler->klass->vtable).__unknown_1.methodPtr)
                (interactionHandler,0,&IStack_4,0,
                 (interactionHandler->klass->vtable).__unknown_1.method);
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVGameControllerBase);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pMVar6 = TypeInfo__MVGameControllerBase->static_fields->instance;
      if (((pMVar6 != (MVGameControllerBase *)0x0) &&
          (pMVar7 = (pMVar6->fields).game, pMVar7 != (MVNetworkGame *)0x0)) &&
         (pMVar8 = (pMVar7->fields).teamManager, pMVar8 != (MVTeamManager *)0x0)) {
        if (cRam_? == '\0') {
          FUN_?(&
                        MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::Collections::Generic::HashSet<int>_>__get_Count__
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pDVar9 = (pMVar8->fields).teams;
        if (pDVar9 != (Dictionary_2_MV_WorldObject_MVTeam_HashSet_1_System_Int32_ *)0x0) {
          if ((pDVar9->fields)._count - (pDVar9->fields)._freeCount < 2) {
            return;
          }
          pMVar10 = (this->fields)._.owner;
          if (pMVar10 != (MVPickupOwner *)0x0) {
            pMVar11 = (pMVar10->fields)._.worldObjectParent;
            if (pMVar11 == (MVWorldObjectClient *)0x0) {
              return;
            }
            method_00 = pMVar11->klass;
            bVar12 = (TypeInfo__MVAvatarLocal->_1).naturalAligment;
            if ((method_00->_1).naturalAligment < bVar12) {
              return;
            }
            if ((MVAvatarLocal__Class *)(method_00->_1).typeHierarchy[(ulonglong)bVar12 - 1] !=
                TypeInfo__MVAvatarLocal) {
              return;
            }
            MVTriggerBox::MVTriggerBox_OnExit
                      ((MVTriggerBox *)0x0,(MVPlayer *)TypeInfo__MVAvatarLocal,
                       (MethodInfo *)method_00);
            iVar13 = (*(interactionHandler->klass->vtable).__unknown.methodPtr)
                               (interactionHandler,
                                (interactionHandler->klass->vtable).__unknown.method);
            if (extraout_RAX != 0) {
              if (*(int *)(extraout_RAX + 0x84) == iVar13) {
                return;
              }
              this_00 = (pMVar11->fields).gameObject;
              if ((this_00 != (GameObject *)0x0) &&
                 (pOVar14 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                            GameObject_GetComponent_1
                                      (this_00,
                                       MVInteractableBase_MethodInfo__UnityEngine__GameObject__GetComponent<MVInteractableBase>__
                                      ), pOVar14 != (Object *)0x0)) {
                (*(code *)pOVar14->klass[1]._0.declaringType)
                          (pOVar14,0x15,0xffffffff,0,pOVar14->klass[1]._0.parent);
                return;
              }
            }
          }
        }
      }
      FUN_?();
      pcVar15 = (code *)swi(3);
      (*pcVar15)();
      return;
    }
  }
  if ((this->fields).isLockedOn == 0) {
    return;
  }
  (*(this->klass->vtable).TriggerEnd.methodPtr)(this,(this->klass->vtable).TriggerEnd.method);
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::PickUpItemHealRay::PickUpItemHealRay_Update
               (PickUpItemHealRay *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  PickUpItemHealRay_UpdateRaysVisualRepresentation(this,(MethodInfo *)0x0);
  if ((this->fields).isShooting == 0) {
    return;
  }
  pAVar1 = (this->fields).audioSource;
  if (pAVar1 != (AudioSource *)0x0) {
    bVar2 = UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_get_isPlaying
                       (pAVar1,(MethodInfo *)0x0);
    if (bVar2 == 0) {
      pAVar1 = (this->fields).audioSource;
      if (pAVar1 == (AudioSource *)0x0) goto DAT_?;
      UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_Play_1
                (pAVar1,(MethodInfo *)0x0);
    }
    pPVar3 = (this->fields).rayParticles;
    if (pPVar3 == (ParticleSystem *)0x0) goto DAT_?;
    bVar2 = UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::
             ParticleSystem_get_isPlaying(pPVar3,(MethodInfo *)0x0);
    if (bVar2 == 0) {
      pPVar3 = (this->fields).rayParticles;
      if (pPVar3 == (ParticleSystem *)0x0) goto DAT_?;
      UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::ParticleSystem_Play
                (pPVar3,1,(MethodInfo *)0x0);
    }
    pMVar4 = (this->fields)._.owner;
    if (pMVar4 == (MVPickupOwner *)0x0) goto DAT_?;
    if ((pMVar4->fields)._IsLocal_k__BackingField != 0) {
      fVar5 = (this->fields).elapsedUpdateWaitTime;
      pcVar6 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
        uVar7 = func_?(&UNK_?);
        FUN_?(uVar7,0);
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pcRam_? = pcVar6;
      fVar8 = (float)(*pcRam_?)();
      fVar8 = fVar8 + fVar5;
      bVar9 = _UNK_? <= fVar8;
      (this->fields).elapsedUpdateWaitTime = fVar8;
      if (bVar9) {
        (this->fields).elapsedUpdateWaitTime = 0.0;
        PickUpItemHealRay_DoHealing(this,(MethodInfo *)0x0);
      }
      PickUpItemHealRay_DoAmmoDepletion(this,(MethodInfo *)0x0);
      return;
    }
    if ((this->fields).isLockedOn == 0) {
      PickUpItemHealRay_LerpRaysVisualRepresentation(this,(MethodInfo *)0x0);
    }
    pGVar10 = (this->fields).stuckObject;
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
    if (pGVar10 != (GameObject *)0x0) {
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      if ((pGVar10->fields)._.m_CachedPtr != (void *)0x0) {
        pVVar11 = PickUpItemHealRay_CalculateStuckPosition(&VStack_12,this,(MethodInfo *)0x0);
        pMVar4 = (this->fields)._.owner;
        if (pMVar4 == (MVPickupOwner *)0x0) goto DAT_?;
        uVar13 = (pMVar4->fields).lookOrigin.x;
        uVar14 = (pMVar4->fields).lookOrigin.y;
        uVar15 = pVVar11->x;
        VStack_12.x = (float)uVar15 - (float)uVar13;
        VStack_12.z = pVVar11->z - (pMVar4->fields).lookOrigin.z;
        VStack_12.y = pVVar11->y - (float)uVar14;
        goto code_?;
      }
    }
    pPVar3 = (this->fields).rayParticles;
    if ((pPVar3 != (ParticleSystem *)0x0) &&
       (this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                            ((Component *)pPVar3,(MethodInfo *)0x0), this_00 != (Transform *)0x0)) {
      pVVar11 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_forward
                          (aVStack_16,this_00,(MethodInfo *)0x0);
      VStack_12.x = pVVar11->x;
      VStack_12.y = pVVar11->y;
      VStack_12.z = pVVar11->z;
code_?:
      PickUpItemHealRay_UpdateRaycastRemotely(this,&VStack_12,(MethodInfo *)0x0);
      return;
    }
  }
DAT_?:
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void UpdateHitParticles(Vector3, Vector3) */

void Assembly-CSharp.dll::PickUpItemHealRay::PickUpItemHealRay_UpdateHitParticles
               (PickUpItemHealRay *this,Vector3 *firingDirection,Vector3 *hitPosition,
               MethodInfo *method)

{
  pPVar1 = (this->fields).hitParticles;
  if ((pPVar1 != (ParticleSystem *)0x0) &&
     (pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                         ((Component *)pPVar1,(MethodInfo *)0x0), pTVar2 != (Transform *)0x0)) {
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pvVar3 = (pTVar2->fields)._._.m_CachedPtr;
    if (pvVar3 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar2,(MethodInfo *)0x0);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pcVar4 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
      uVar5 = func_?(&UNK_?);
      FUN_?(uVar5,0);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pcRam_? = pcVar4;
    (*pcRam_?)(pvVar3);
    pPVar1 = (this->fields).hitParticles;
    if (pPVar1 != (ParticleSystem *)0x0) {
      pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                         ((Component *)pPVar1,(MethodInfo *)0x0);
      uStack_6._0_4_ = firingDirection->x;
      uStack_6._4_4_ = firingDirection->y;
      uVar7 = (undefined4)uStack_6 ^ _UNK_?;
      uStack_8 = (uint)firingDirection->z ^ _UNK_?;
      uVar9 = uStack_6._4_4_ ^ _UNK_?;
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Vector3);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      uStack_6 = CONCAT44(uVar9,uVar7);
      uStack_10 = 0;
      uStack_11 = 0;
      pcVar4 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
        uVar5 = func_?(&UNK_?);
        FUN_?(uVar5,0);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pcRam_? = pcVar4;
      (*pcRam_?)(&uStack_6);
      if (pTVar2 != (Transform *)0x0) {
        uStack_12 = (undefined4)uStack_10;
        uStack_13 = uStack_10._4_4_;
        uStack_14 = (undefined4)uStack_11;
        uStack_15 = uStack_11._4_4_;
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pvVar3 = (pTVar2->fields)._._.m_CachedPtr;
        if (pvVar3 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar2,(MethodInfo *)0x0);
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pcVar4 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
          uVar5 = func_?(&UNK_?);
          FUN_?(uVar5,0);
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pcRam_? = pcVar4;
        (*pcRam_?)(pvVar3,&uStack_12);
        pPVar1 = (this->fields).hitParticles;
        if (pPVar1 != (ParticleSystem *)0x0) {
          UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::ParticleSystem_Play
                    (pPVar1,1,(MethodInfo *)0x0);
          return;
        }
      }
      FUN_?();
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


/* Void UpdateItemState(Int32) */

void Assembly-CSharp.dll::PickUpItemHealRay::PickUpItemHealRay_UpdateItemState
               (PickUpItemHealRay *this,int32_t stuckObjectId,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ICurrentItemOwner);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_S);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_HealRay_holder_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__is_not_a_ICurrentItemOwner__Thi);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields)._.owner;
  if (pMVar1 != (MVPickupOwner *)0x0) {
    lVar2 = FUN_?((pMVar1->fields)._.worldObjectParent);
    pIVar3 = TypeInfo__ICurrentItemOwner;
    pMVar1 = (this->fields)._.owner;
    if (pMVar1 != (MVPickupOwner *)0x0) {
      if (lVar2 == 0) {
        pMVar4 = (pMVar1->fields)._.worldObjectParent;
        if ((pMVar4 != (MVWorldObjectClient *)0x0) &&
           (this_00 = (pMVar4->fields).gameObject, this_00 != (GameObject *)0x0)) {
          pSVar5 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_GetName
                             ((Object_1 *)this_00,(MethodInfo *)0x0);
          pSVar5 = mscorlib.dll::System::String::String_Concat_5
                             (StringLiteral_HealRay_holder_,pSVar5,
                              StringLiteral__is_not_a_ICurrentItemOwner__Thi,(MethodInfo *)0x0);
          if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
            FUN_?();
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
                    ((Object *)pSVar5,(MethodInfo *)0x0);
          return;
        }
      }
      else {
        pMVar4 = (pMVar1->fields)._.worldObjectParent;
        if (pMVar4 != (MVWorldObjectClient *)0x0) {
          lVar2 = FUN_?(pMVar4,TypeInfo__ICurrentItemOwner);
          pIVar6 = TypeInfo__ICurrentItemOwner;
          if (lVar2 == 0) {
            FUN_?(pMVar4,pIVar3);
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          plVar8 = (longlong *)FUN_?(pMVar4,TypeInfo__ICurrentItemOwner);
          if (plVar8 == (longlong *)0x0) {
            FUN_?(pMVar4,pIVar6);
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          lVar2 = *plVar8;
          uVar9 = 0;
          pIVar3 = TypeInfo__ICurrentItemOwner;
          if (*(ushort *)(lVar2 + 0x12e) != 0) {
            do {
              if (*(ICurrentItemOwner__Class **)
                   (*(longlong *)(lVar2 + 0xb0) + (ulonglong)uVar9 * 0x10) ==
                  TypeInfo__ICurrentItemOwner) {
                puVar10 = (undefined8 *)
                         ((longlong)
                          *(int *)(*(longlong *)(lVar2 + 0xb0) + 8 + (ulonglong)uVar9 * 0x10) *
                          0x10 + 0x138 + lVar2);
                goto code_?;
              }
              uVar9 = uVar9 + 1;
            } while (uVar9 < *(ushort *)(lVar2 + 0x12e));
          }
          puVar10 = (undefined8 *)FUN_?(plVar8,TypeInfo__ICurrentItemOwner,0);
code_?:
          this_01 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                     *)(*(code *)*puVar10)(plVar8,puVar10[1]);
          pSVar5 = StringLiteral_S;
          if (cRam_? == '\0') {
            FUN_?(&
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                         );
            LOCK();
            UNLOCK();
            FUN_?(&
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                         );
            LOCK();
            UNLOCK();
            FUN_?(&
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          if (this_01 !=
              (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
               *)0x0) {
            iVar11 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                    Object,UnityEngine::UIElements::StyleComplexSelector+PseudoStateData]::
                    Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                              (this_01,(Object *)pSVar5,
                               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                               ->klass->rgctx_data[0x21].method);
            aiStackX_8[0] = stuckObjectId;
            if (iVar11 < 0) {
              value = (Object *)FUN_?(uRam_?,aiStackX_8);
              behavior = (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)pIVar3 >> 8),2);
              pMVar12 = 
              MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
              ;
            }
            else {
              value = (Object *)FUN_?(uRam_?,aiStackX_8);
              behavior = (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)pIVar3 >> 8),1);
              pMVar12 = 
              MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
              ;
            }
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
            ::Dictionary_2_System_Object_System_Object__TryInsert
                      ((Dictionary_2_System_Object_System_Object_ *)this_01,(Object *)pSVar5,value,
                       behavior,pMVar12->klass->rgctx_data[0x22].method);
            PickUpItemHealRay_SyncState
                      (this,(Dictionary_2_System_Object_System_Object_ *)this_01,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  FUN_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void UpdateRayHealingLogic(VoxelHit) */

void Assembly-CSharp.dll::PickUpItemHealRay::PickUpItemHealRay_UpdateRayHealingLogic
               (PickUpItemHealRay *this,VoxelHit *hitVoxel,MethodInfo *method)

{
  pMVar1 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetMVObject
                      (hitVoxel->transform,(MethodInfo *)0x0);
  if (pMVar1 == (MVWorldObjectClient *)0x0) {
    pIVar2 = (InteractionDataHandlerBase *)0x0;
  }
  else {
    pIVar2 = MVWorldObjectClient::MVWorldObjectClient_get_InteractionDataHandlerBase
                        (pMVar1,(MethodInfo *)0x0);
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  int_MethodInfo__MVWorldObjectClientManager__GetWoIDHighestInHierarchyWithComponent<InteractionDataHandlerBase>_int_
                 );
    LOCK();
    UNLOCK();
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
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (pIVar2 != (InteractionDataHandlerBase *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pIVar2->fields)._._._._._.m_CachedPtr != (void *)0x0) goto code_?;
  }
  pMVar3 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (pMVar3 != (MVWorldObjectClientManager *)0x0) {
    id = MVWorldObjectClientManager::
         MVWorldObjectClientManager_GetWoIDHighestInHierarchyWithComponent
                   (pMVar3,hitVoxel->woId,
                    int_MethodInfo__MVWorldObjectClientManager__GetWoIDHighestInHierarchyWithComponent<InteractionDataHandlerBase>_int_
                   );
    pMVar3 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (pMVar3 != (MVWorldObjectClientManager *)0x0) {
      pMVar1 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                          (pMVar3,id,(MethodInfo *)0x0);
      if (pMVar1 == (MVWorldObjectClient *)0x0) {
        pIVar2 = (InteractionDataHandlerBase *)0x0;
      }
      else {
        pIVar2 = MVWorldObjectClient::MVWorldObjectClient_get_InteractionDataHandlerBase
                            (pMVar1,(MethodInfo *)0x0);
      }
code_?:
      pIVar4 = pIVar2;
      if (cRam_? == '\0') {
        FUN_?(&
                      MVInteractableBase_MethodInfo__UnityEngine__GameObject__GetComponent<MVInteractableBase>__
                      ,pIVar2,0);
        LOCK();
        UNLOCK();
        FUN_?(&TypeInfo__MVAvatarLocal);
        LOCK();
        UNLOCK();
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
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Object);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (pIVar2 != (InteractionDataHandlerBase *)0x0) {
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        if ((pIVar2->fields)._._._._._.m_CachedPtr != (void *)0x0) {
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__UnityEngine__Vector3);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          IStack_5.interactionType = 0;
          IStack_5.playerKilledByType = 0;
          IStack_5._18_2_ = 0;
          IStack_5.damage = 0.0;
          IStack_5.impulse.x = 0.0;
          IStack_5.impulse.y = 0.0;
          IStack_5.impulse.z = 0.0;
          pVVar6 = TypeInfo__UnityEngine__Vector3->static_fields;
          IStack_7.damage = (pVVar6->zeroVector).x;
          IStack_7.impulse.x = (pVVar6->zeroVector).y;
          IStack_7.impulse.y = (pVVar6->zeroVector).z;
          MVWorldObject.dll::MV::WorldObject::InteractionData::InteractionData__ctor_5
                    (&IStack_5,
                     (InteractionPackageType__Enum)CONCAT71((int7)((ulonglong)pIVar4 >> 8),0x1b),
                     0.0,(Vector3 *)&IStack_7,in_stack_8 & 0xffffff00,
                     (MethodInfo *)0x0);
          IStack_7.interactionType = IStack_5.interactionType;
          IStack_7.playerKilledByType = IStack_5.playerKilledByType;
          IStack_7._18_2_ = IStack_5._18_2_;
          IStack_7.damage = IStack_5.damage;
          IStack_7.impulse.x = IStack_5.impulse.x;
          IStack_7.impulse.y = IStack_5.impulse.y;
          IStack_7.impulse.z = IStack_5.impulse.z;
          (*(pIVar2->klass->vtable).__unknown_1.methodPtr)
                    (pIVar2,0,&IStack_7,0,(pIVar2->klass->vtable).__unknown_1.method);
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__MVGameControllerBase);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pMVar9 = TypeInfo__MVGameControllerBase->static_fields->instance;
          if (((pMVar9 != (MVGameControllerBase *)0x0) &&
              (pMVar10 = (pMVar9->fields).game, pMVar10 != (MVNetworkGame *)0x0)) &&
             (pMVar11 = (pMVar10->fields).teamManager, pMVar11 != (MVTeamManager *)0x0)) {
            if (cRam_? == '\0') {
              FUN_?(&
                            MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::Collections::Generic::HashSet<int>_>__get_Count__
                           );
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pDVar12 = (pMVar11->fields).teams;
            if (pDVar12 != (Dictionary_2_MV_WorldObject_MVTeam_HashSet_1_System_Int32_ *)0x0) {
              if ((pDVar12->fields)._count - (pDVar12->fields)._freeCount < 2) {
                return;
              }
              pMVar13 = (this->fields)._.owner;
              if (pMVar13 != (MVPickupOwner *)0x0) {
                pMVar1 = (pMVar13->fields)._.worldObjectParent;
                if (pMVar1 == (MVWorldObjectClient *)0x0) {
                  return;
                }
                method_00 = pMVar1->klass;
                bVar14 = (TypeInfo__MVAvatarLocal->_1).naturalAligment;
                if ((method_00->_1).naturalAligment < bVar14) {
                  return;
                }
                if ((MVAvatarLocal__Class *)(method_00->_1).typeHierarchy[(ulonglong)bVar14 - 1] !=
                    TypeInfo__MVAvatarLocal) {
                  return;
                }
                MVTriggerBox::MVTriggerBox_OnExit
                          ((MVTriggerBox *)0x0,(MVPlayer *)TypeInfo__MVAvatarLocal,
                           (MethodInfo *)method_00);
                iVar15 = (*(pIVar2->klass->vtable).__unknown.methodPtr)
                                  (pIVar2,(pIVar2->klass->vtable).__unknown.method);
                if (extraout_RAX != 0) {
                  if (*(int *)(extraout_RAX + 0x84) == iVar15) {
                    return;
                  }
                  this_00 = (pMVar1->fields).gameObject;
                  if ((this_00 != (GameObject *)0x0) &&
                     (pOVar16 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                GameObject_GetComponent_1
                                          (this_00,
                                           MVInteractableBase_MethodInfo__UnityEngine__GameObject__GetComponent<MVInteractableBase>__
                                          ), pOVar16 != (Object *)0x0)) {
                    (*(code *)pOVar16->klass[1]._0.declaringType)
                              (pOVar16,0x15,0xffffffff,0,pOVar16->klass[1]._0.parent);
                    return;
                  }
                }
              }
            }
          }
          FUN_?();
          pcVar17 = (code *)swi(3);
          (*pcVar17)();
          return;
        }
      }
      if ((this->fields).isLockedOn == 0) {
        return;
      }
      (*(this->klass->vtable).TriggerEnd.methodPtr)(this,(this->klass->vtable).TriggerEnd.method);
      return;
    }
  }
  FUN_?();
  pcVar17 = (code *)swi(3);
  (*pcVar17)();
  return;
}


/* Void UpdateRayParticleEffect(VoxelHit, Vector3) */

void Assembly-CSharp.dll::PickUpItemHealRay::PickUpItemHealRay_UpdateRayParticleEffect
               (PickUpItemHealRay *this,VoxelHit *hitVoxel,Vector3 *direction,MethodInfo *method)

{
  pMVar1 = (this->fields)._.owner;
  fVar2 = hitVoxel->distance;
  if (pMVar1 != (MVPickupOwner *)0x0) {
    VStack_3.x = (pMVar1->fields).lookOrigin.x;
    VStack_3.y = (pMVar1->fields).lookOrigin.y;
    fVar4 = (pMVar1->fields).lookOrigin.z;
    if ((this->fields).isLockedOn == 0) {
      pTVar5 = (this->fields)._.muzzlePoint;
      if (pTVar5 == (Transform *)0x0) goto DAT_?;
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      aVStack_6[0].x = 0.0;
      aVStack_6[0].y = 0.0;
      aVStack_6[0].z = 0.0;
      pvVar7 = (pTVar5->fields)._._.m_CachedPtr;
      if (pvVar7 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar5,(MethodInfo *)0x0);
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pcVar8 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
        uVar9 = func_?(&UNK_?);
        FUN_?(uVar9,0);
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pcRam_? = pcVar8;
      (*pcRam_?)(pvVar7);
      uVar10 = direction->x;
      fVar4 = aVStack_6[0].z - direction->z * _UNK_?;
      VStack_3.y = aVStack_6[0].y - direction->y * _UNK_?;
      VStack_3.x = aVStack_6[0].x - (float)uVar10 * _UNK_?;
    }
    uVar11 = direction->y;
    uVar12 = direction->x;
    fVar13 = (float)uVar11 * fVar2 + VStack_3.y;
    fVar14 = (float)uVar12 * fVar2 + VStack_3.x;
    fVar4 = direction->z * fVar2 + fVar4;
    pTVar5 = (this->fields)._.muzzlePoint;
    if (pTVar5 != (Transform *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      VStack_3.x = 0.0;
      VStack_3.y = 0.0;
      VStack_3.z = 0.0;
      pvVar7 = (pTVar5->fields)._._.m_CachedPtr;
      if (pvVar7 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar5,(MethodInfo *)0x0);
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pcVar8 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
        uVar9 = func_?(&UNK_?);
        FUN_?(uVar9,0);
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pcRam_? = pcVar8;
      (*pcRam_?)(pvVar7,&VStack_3);
      uVar9._0_4_ = fVar14 - VStack_3.x;
      VStack_3.z = fVar4 - VStack_3.z;
      uVar9._4_4_ = fVar13 - VStack_3.y;
      VStack_3._0_8_ = uVar9;
      distance = (float)FUN_?(&VStack_3);
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__VehiclePickupOwner);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (((this->fields).isLockedOn == 0) &&
         (pMVar1 = (this->fields)._.owner, pMVar1 != (MVPickupOwner *)0x0)) {
        pMVar15 = pMVar1->klass;
        bVar16 = (TypeInfo__VehiclePickupOwner->_1).naturalAligment;
        if ((bVar16 <= (pMVar15->_1).naturalAligment) &&
           ((pMVar15->_1).typeHierarchy[(ulonglong)bVar16 - 1] ==
            (Il2CppClass *)TypeInfo__VehiclePickupOwner)) {
          pMVar1 = (this->fields)._.owner;
          uVar17 = (pMVar1->fields).lookOrigin.x;
          uVar18 = (pMVar1->fields).lookOrigin.y;
          uVar19 = direction->y;
          uVar20 = direction->x;
          fVar13 = (float)uVar19 * fVar2 + (float)uVar18;
          fVar14 = (float)uVar20 * fVar2 + (float)uVar17;
          fVar4 = direction->z * fVar2 + (pMVar1->fields).lookOrigin.z;
        }
      }
      VStack_3.x = direction->x;
      VStack_3.y = direction->y;
      VStack_3.z = direction->z;
      aVStack_6[0].y = fVar13;
      aVStack_6[0].x = fVar14;
      aVStack_6[0].z = fVar4;
      PickUpItemHealRay_OnHitParticleUpdate(this,aVStack_6,&VStack_3,distance,(MethodInfo *)0x0);
      return;
    }
  }
DAT_?:
  FUN_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* PickUpItemHealRay+RayCastData UpdateRaycastLocally(Vector3) */

PickUpItemHealRay_RayCastData *
Assembly-CSharp.dll::PickUpItemHealRay::PickUpItemHealRay_UpdateRaycastLocally
          (PickUpItemHealRay_RayCastData *__return_storage_ptr__,PickUpItemHealRay *this,
          Vector3 *direction,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<VoxelHit>__get_Count__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  VStack_1.z = direction->z;
  *(undefined8 *)__return_storage_ptr__ = 0;
  (__return_storage_ptr__->HitVoxel).point.x = 0.0;
  (__return_storage_ptr__->HitVoxel).point.y = 0.0;
  method_00 = (MethodInfo *)0x0;
  *(undefined8 *)&(__return_storage_ptr__->HitVoxel).point.z = 0;
  (__return_storage_ptr__->HitVoxel).normal.y = 0.0;
  (__return_storage_ptr__->HitVoxel).normal.z = 0.0;
  *(undefined8 *)&(__return_storage_ptr__->HitVoxel).cubePos = 0;
  (__return_storage_ptr__->HitVoxel).face = 0;
  (__return_storage_ptr__->HitVoxel).isCubeHit = 0;
  *(undefined3 *)&(__return_storage_ptr__->HitVoxel).field_0x25 = 0;
  *(undefined8 *)&(__return_storage_ptr__->HitVoxel).woId = 0;
  (__return_storage_ptr__->HitVoxel).cube = (Cube *)0x0;
  *(undefined8 *)&(__return_storage_ptr__->HitVoxel).distance = 0;
  (__return_storage_ptr__->HitVoxel).collider = (Collider *)0x0;
  (__return_storage_ptr__->HitVoxel).transform = (Transform *)0x0;
  (__return_storage_ptr__->HitVoxel).interactionFlags = 0;
  (__return_storage_ptr__->Direction).x = 0.0;
  (__return_storage_ptr__->Direction).y = 0.0;
  *(undefined8 *)&(__return_storage_ptr__->Direction).z = 0;
  VStack_1.x = direction->x;
  VStack_1.y = direction->y;
  bVar2 = PickUpItemHealRay_IsDirectionValid(this,&VStack_1,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_normalized
                        (&VStack_1,direction,method_00);
    fVar4 = pVVar3->y;
    VStack_1.z = pVVar3->z;
    direction->x = pVVar3->x;
    direction->y = fVar4;
    direction->z = VStack_1.z;
    VStack_1.x = direction->x;
    VStack_1.y = direction->y;
    (__return_storage_ptr__->Direction).x = VStack_1.x;
    (__return_storage_ptr__->Direction).y = VStack_1.y;
    (__return_storage_ptr__->Direction).z = VStack_1.z;
    hitVoxels = PickUpItemHealRay_DoRaycast(this,&VStack_1,(MethodInfo *)0x0);
    if (hitVoxels == (List_1_VoxelHit_ *)0x0) {
      FUN_?();
      pcVar5 = (code *)swi(3);
      pPVar6 = (PickUpItemHealRay_RayCastData *)(*pcVar5)();
      return pPVar6;
    }
    if (0 < (hitVoxels->fields)._size) {
      pVVar7 = PickUpItemHealRay_CalculateClosestVoxelHit
                          (&VStack_8,this,hitVoxels,(MethodInfo *)0x0);
      bVar9 = iRam_? != 0;
      fVar4 = (pVVar7->point).y;
      uVar10 = *(undefined8 *)&(pVVar7->point).z;
      fVar11 = (pVVar7->normal).y;
      fVar12 = (pVVar7->normal).z;
      IVar13 = pVVar7->cubePos;
      uVar14 = *(undefined2 *)&pVVar7->field_0x1e;
      iVar15 = pVVar7->face;
      bVar2 = pVVar7->isCubeHit;
      uVar16 = *(undefined3 *)&pVVar7->field_0x25;
      iVar17 = pVVar7->woId;
      uVar18 = *(undefined4 *)&pVVar7->field_0x2c;
      pCVar19 = pVVar7->cube;
      fVar20 = pVVar7->distance;
      uVar21 = *(undefined4 *)&pVVar7->field_0x3c;
      pCVar22 = pVVar7->collider;
      pTVar23 = pVVar7->transform;
      iVar24 = pVVar7->interactionFlags;
      (__return_storage_ptr__->HitVoxel).point.x = (pVVar7->point).x;
      (__return_storage_ptr__->HitVoxel).point.y = fVar4;
      *(undefined8 *)&(__return_storage_ptr__->HitVoxel).point.z = uVar10;
      (__return_storage_ptr__->HitVoxel).normal.y = fVar11;
      (__return_storage_ptr__->HitVoxel).normal.z = fVar12;
      (__return_storage_ptr__->HitVoxel).cubePos = IVar13;
      *(undefined2 *)&(__return_storage_ptr__->HitVoxel).field_0x1e = uVar14;
      (__return_storage_ptr__->HitVoxel).face = iVar15;
      (__return_storage_ptr__->HitVoxel).isCubeHit = bVar2;
      *(undefined3 *)&(__return_storage_ptr__->HitVoxel).field_0x25 = uVar16;
      (__return_storage_ptr__->HitVoxel).woId = iVar17;
      *(undefined4 *)&(__return_storage_ptr__->HitVoxel).field_0x2c = uVar18;
      (__return_storage_ptr__->HitVoxel).cube = pCVar19;
      (__return_storage_ptr__->HitVoxel).distance = fVar20;
      *(undefined4 *)&(__return_storage_ptr__->HitVoxel).field_0x3c = uVar21;
      (__return_storage_ptr__->HitVoxel).collider = pCVar22;
      (__return_storage_ptr__->HitVoxel).transform = pTVar23;
      (__return_storage_ptr__->HitVoxel).interactionFlags = iVar24;
      if (bVar9) {
        uVar25 = (uint)((ulonglong)&(__return_storage_ptr__->HitVoxel).cube >> 0xc);
        puVar26 = (ulonglong *)((ulonglong)((uVar25 & 0x1fffff) >> 6) * 8 + 0xADDR);
        do {
          uVar27 = *puVar26;
          LOCK();
          uVar28 = *puVar26;
          if (uVar27 == uVar28) {
            *puVar26 = uVar27 | 1L << (uVar25 & 0x3f);
          }
          UNLOCK();
        } while (uVar27 != uVar28);
      }
      iVar29 = ((this->fields).isLockedOn != 0) + 1;
      goto code_?;
    }
  }
  iVar29 = 0;
code_?:
  __return_storage_ptr__->Status = iVar29;
  return __return_storage_ptr__;
}


/* Void UpdateRaycastRemotely(Vector3) */

void Assembly-CSharp.dll::PickUpItemHealRay::PickUpItemHealRay_UpdateRaycastRemotely
               (PickUpItemHealRay *this,Vector3 *direction,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<VoxelHit>__get_Count__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar1 = (this->fields).stuckObject;
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
  if (pGVar1 != (GameObject *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pGVar1->fields)._.m_CachedPtr != (void *)0x0) {
      pGVar1 = (this->fields).stuckObject;
      if ((pGVar1 == (GameObject *)0x0) ||
         (pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                             (pGVar1,(MethodInfo *)0x0), pTVar2 == (Transform *)0x0))
      goto code_?;
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      aVStack_3[0].x = 0.0;
      aVStack_3[0].y = 0.0;
      aVStack_3[0].z = 0.0;
      pvVar4 = (pTVar2->fields)._._.m_CachedPtr;
      if (pvVar4 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar2,(MethodInfo *)0x0);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
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
      (*pcRam_?)(pvVar4);
      pTVar2 = (this->fields)._.muzzlePoint;
      if (pTVar2 == (Transform *)0x0) goto code_?;
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
      pvVar4 = (pTVar2->fields)._._.m_CachedPtr;
      if (pvVar4 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar2,(MethodInfo *)0x0);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
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
      (*pcRam_?)(pvVar4);
      uVar6._0_4_ = aVStack_3[0].x - VStack_7.x;
      VStack_7.z = aVStack_3[0].z - VStack_7.z;
      uVar6._4_4_ = aVStack_3[0].y - VStack_7.y;
      VStack_7._0_8_ = uVar6;
      fVar8 = (float)FUN_?(&VStack_7);
      pGVar1 = (this->fields).stuckObject;
      if ((pGVar1 == (GameObject *)0x0) ||
         (pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                             (pGVar1,(MethodInfo *)0x0), pTVar2 == (Transform *)0x0))
      goto code_?;
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
      pvVar4 = (pTVar2->fields)._._.m_CachedPtr;
      if (pvVar4 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar2,(MethodInfo *)0x0);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
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
      (*pcRam_?)(pvVar4,&VStack_7);
      aVStack_3[0].x = direction->x;
      aVStack_3[0].y = direction->y;
      firingDirection = aVStack_3;
      aVStack_3[0].z = direction->z;
      hitPosition = &VStack_9;
      VStack_9.x = VStack_7.x;
      VStack_9.y = VStack_7.y;
      VStack_9.z = VStack_7.z;
      goto code_?;
    }
  }
  VStack_9.x = direction->x;
  VStack_9.y = direction->y;
  VStack_9.z = direction->z;
  hitVoxels = PickUpItemHealRay_DoRaycast(this,&VStack_9,(MethodInfo *)0x0);
  if (hitVoxels != (List_1_VoxelHit_ *)0x0) {
    if ((hitVoxels->fields)._size < 1) {
      pPVar10 = (this->fields).rayParticles;
      if (pPVar10 != (ParticleSystem *)0x0) {
        pPStackX_8 = (ParticleSystem *)
                     UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::
                     ParticleSystem_get_collision(pPVar10,(MethodInfo *)0x0);
        lVar11 = 0xa8;
        if ((this->fields).isLockedOn != 0) {
          lVar11 = 0xac;
        }
        fVar8 = *(float *)((longlong)&this->klass + lVar11);
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
        fVar12 = (float)(*pcRam_?)(&pPStackX_8);
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
        (*pcRam_?)(&pPStackX_8,fVar8 / fVar12);
        pPVar10 = (this->fields).hitParticles;
        if (pPVar10 != (ParticleSystem *)0x0) {
          UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::ParticleSystem_Stop_1
                    (pPVar10,1,(MethodInfo *)0x0);
          return;
        }
      }
    }
    else {
      pVVar13 = PickUpItemHealRay_CalculateClosestVoxelHit
                          (&VStack_14,this,hitVoxels,(MethodInfo *)0x0);
      fVar8 = pVVar13->distance;
      pMVar15 = (this->fields)._.owner;
      if (pMVar15 != (MVPickupOwner *)0x0) {
        uVar16 = direction->x;
        uVar17 = direction->y;
        uVar18 = (pMVar15->fields).lookOrigin.x;
        uVar19 = (pMVar15->fields).lookOrigin.y;
        firingDirection = &VStack_9;
        hitPosition = &VStack_7;
        VStack_9.x = direction->x;
        VStack_9.y = direction->y;
        VStack_7.z = direction->z * fVar8 + (pMVar15->fields).lookOrigin.z;
        VStack_9.z = direction->z;
        VStack_7.y = (float)uVar17 * fVar8 + (float)uVar19;
        VStack_7.x = (float)uVar16 * fVar8 + (float)uVar18;
code_?:
        PickUpItemHealRay_OnHitParticleUpdate
                  (this,hitPosition,firingDirection,fVar8,(MethodInfo *)0x0);
        return;
      }
    }
  }
code_?:
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void UpdateRaysVisualRepresentation() */

void Assembly-CSharp.dll::PickUpItemHealRay::PickUpItemHealRay_UpdateRaysVisualRepresentation
               (PickUpItemHealRay *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__PickUpItemHealRay);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pPVar1 = (this->fields).rayParticles;
  if (pPVar1 != (ParticleSystem *)0x0) {
    if (iRam_? != 0) {
      uVar2 = (uint)((ulonglong)&pPStackX_18 >> 0xc);
      uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
      do {
        uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
        puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
        LOCK();
        bVar6 = uVar4 == *puVar5;
        if (bVar6) {
          *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
        }
        UNLOCK();
      } while (!bVar6);
    }
    pGVar7 = (this->fields).stuckObject;
    PStackX_8.m_ParticleSystem = pPVar1;
    pPStackX_18 = pPVar1;
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
    if (pGVar7 != (GameObject *)0x0) {
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      if ((pGVar7->fields)._.m_CachedPtr != (void *)0x0) {
        pVVar8 = PickUpItemHealRay_CalculateStuckPosition(&VStack_9,this,(MethodInfo *)0x0);
        pPVar1 = (this->fields).rayParticles;
        uVar10._0_4_ = pVVar8->x;
        uVar10._4_4_ = pVVar8->y;
        fVar11 = pVVar8->z;
        if ((pPVar1 != (ParticleSystem *)0x0) &&
           (pTVar12 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                ((Component *)pPVar1,(MethodInfo *)0x0), pTVar12 != (Transform *)0x0
           )) {
          VStack_9._0_8_ = uVar10;
          VStack_9.z = fVar11;
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_LookAt_2
                    (pTVar12,&VStack_9,(MethodInfo *)0x0);
          if ((this->fields).damageRay == 0) {
            if (*(int *)&(TypeInfo__PickUpItemHealRay->_1).field_0x1c == 0) {
              FUN_?(TypeInfo__PickUpItemHealRay);
            }
            pPVar13 = TypeInfo__PickUpItemHealRay->static_fields;
            CStack_14.r = (pPVar13->lockOnColorHealing).r;
            CStack_14.g = (pPVar13->lockOnColorHealing).g;
            CStack_14.b = (pPVar13->lockOnColorHealing).b;
            CStack_14.a = (pPVar13->lockOnColorHealing).a;
          }
          else {
            if (*(int *)&(TypeInfo__PickUpItemHealRay->_1).field_0x1c == 0) {
              FUN_?(TypeInfo__PickUpItemHealRay);
            }
            pPVar13 = TypeInfo__PickUpItemHealRay->static_fields;
            CStack_14.r = (pPVar13->lockOnColorDamaging).r;
            CStack_14.g = (pPVar13->lockOnColorDamaging).g;
            CStack_14.b = (pPVar13->lockOnColorDamaging).b;
            CStack_14.a = (pPVar13->lockOnColorDamaging).a;
          }
          pPVar15 = UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem+MinMaxGradient
                    ::ParticleSystem_MinMaxGradient_op_Implicit
                              (&PStack_16,&CStack_14,(MethodInfo *)0x0);
          PStack_17.m_Mode = pPVar15->m_Mode;
          PStack_17._4_4_ = *(undefined4 *)&pPVar15->field_0x4;
          PStack_17.m_GradientMin = pPVar15->m_GradientMin;
          PStack_17.m_GradientMax = pPVar15->m_GradientMax;
          PStack_17.m_ColorMin.r = (pPVar15->m_ColorMin).r;
          PStack_17.m_ColorMin.g = (pPVar15->m_ColorMin).g;
          PStack_17.m_ColorMin.b = (pPVar15->m_ColorMin).b;
          PStack_17.m_ColorMin.a = (pPVar15->m_ColorMin).a;
          PStack_17.m_ColorMax.r = (pPVar15->m_ColorMax).r;
          PStack_17.m_ColorMax.g = (pPVar15->m_ColorMax).g;
          PStack_17.m_ColorMax.b = (pPVar15->m_ColorMax).b;
          PStack_17.m_ColorMax.a = (pPVar15->m_ColorMax).a;
          UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem+MainModule::
          ParticleSystem_MainModule_set_startColor(&PStackX_8,&PStack_17,(MethodInfo *)0x0);
          pcVar18 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar18 = (code *)FUN_?(&UNK_?), pcVar18 == (code *)0x0)) {
            uVar10 = func_?(&UNK_?);
            FUN_?(uVar10,0);
            pcVar18 = (code *)swi(3);
            (*pcVar18)();
            return;
          }
          pcRam_? = pcVar18;
          (*pcRam_?)(&PStackX_8,_UNK_?);
          pAVar19 = (this->fields).audioSource;
          if (pAVar19 != (AudioSource *)0x0) {
            UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_set_pitch
                      (pAVar19,TypeRef__System__Activator__T._0_4_,(MethodInfo *)0x0);
            return;
          }
        }
        goto code_?;
      }
    }
    CStack_14.r = _UNK_?;
    CStack_14.g = _UNK_?;
    CStack_14.b = _UNK_?;
    CStack_14.a = _UNK_?;
    pPVar15 = UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem+MinMaxGradient::
              ParticleSystem_MinMaxGradient_op_Implicit(&PStack_16,&CStack_14,(MethodInfo *)0x0);
    PStack_17.m_Mode = pPVar15->m_Mode;
    PStack_17._4_4_ = *(undefined4 *)&pPVar15->field_0x4;
    PStack_17.m_GradientMin = pPVar15->m_GradientMin;
    PStack_17.m_GradientMax = pPVar15->m_GradientMax;
    PStack_17.m_ColorMin.r = (pPVar15->m_ColorMin).r;
    PStack_17.m_ColorMin.g = (pPVar15->m_ColorMin).g;
    PStack_17.m_ColorMin.b = (pPVar15->m_ColorMin).b;
    PStack_17.m_ColorMin.a = (pPVar15->m_ColorMin).a;
    PStack_17.m_ColorMax.r = (pPVar15->m_ColorMax).r;
    PStack_17.m_ColorMax.g = (pPVar15->m_ColorMax).g;
    PStack_17.m_ColorMax.b = (pPVar15->m_ColorMax).b;
    PStack_17.m_ColorMax.a = (pPVar15->m_ColorMax).a;
    UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem+MainModule::
    ParticleSystem_MainModule_set_startColor(&PStackX_8,&PStack_17,(MethodInfo *)0x0);
    pcVar18 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar18 = (code *)FUN_?(&UNK_?), pcVar18 == (code *)0x0)) {
      uVar10 = func_?(&UNK_?);
      FUN_?(uVar10,0);
      pcVar18 = (code *)swi(3);
      (*pcVar18)();
      return;
    }
    pcRam_? = pcVar18;
    (*pcRam_?)(&PStackX_8,_UNK_?);
    pAVar19 = (this->fields).audioSource;
    if (pAVar19 != (AudioSource *)0x0) {
      UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_set_pitch
                (pAVar19,_UNK_?,(MethodInfo *)0x0);
      pMVar20 = (this->fields)._.owner;
      if (pMVar20 != (MVPickupOwner *)0x0) {
        if (((pMVar20->fields)._IsLocal_k__BackingField == 0) || ((this->fields).isShooting == 0)) {
          return;
        }
        pPVar1 = (this->fields).rayParticles;
        if (pPVar1 != (ParticleSystem *)0x0) {
          this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                              ((Component *)pPVar1,(MethodInfo *)0x0);
          pTVar12 = (this->fields)._.muzzlePoint;
          if (pTVar12 != (Transform *)0x0) {
            if (cRam_? == '\0') {
              FUN_?(&
                            void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                           );
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            VStack_9.x = 0.0;
            VStack_9.y = 0.0;
            VStack_9.z = 0.0;
            pvVar21 = (pTVar12->fields)._._.m_CachedPtr;
            if (pvVar21 == (void *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
              ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar12,(MethodInfo *)0x0);
              pcVar18 = (code *)swi(3);
              (*pcVar18)();
              return;
            }
            pcVar18 = pcRam_?;
            if ((pcRam_? == (code *)0x0) &&
               (pcVar18 = (code *)FUN_?(&UNK_?), pcVar18 == (code *)0x0)) {
              uVar10 = func_?(&UNK_?);
              FUN_?(uVar10,0);
              pcVar18 = (code *)swi(3);
              (*pcVar18)();
              return;
            }
            pcRam_? = pcVar18;
            (*pcRam_?)(pvVar21,&VStack_9);
            pVVar8 = PickUpItemHealRay_CalculateParticlesRotation
                                (&VStack_22,this,(MethodInfo *)0x0);
            uVar23 = pVVar8->x;
            uVar24 = pVVar8->y;
            if (this_00 != (Transform *)0x0) {
              VStack_9.y = VStack_9.y + (float)uVar24;
              VStack_9.x = VStack_9.x + (float)uVar23;
              VStack_9.z = VStack_9.z + pVVar8->z;
              UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_LookAt_2
                        (this_00,&VStack_9,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar18 = (code *)swi(3);
  (*pcVar18)();
  return;
}


/* Void UpdateStuckObject(MVWorldObjectClient) */

void Assembly-CSharp.dll::PickUpItemHealRay::PickUpItemHealRay_UpdateStuckObject
               (PickUpItemHealRay *this,MVWorldObjectClient *hitObject,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__IHealRayAttachementObject);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (hitObject != (MVWorldObjectClient *)0x0) {
    bVar1 = iRam_? != 0;
    (this->fields).stuckObject = (hitObject->fields).gameObject;
    if (bVar1) {
      uVar2 = (uint)((ulonglong)&(this->fields).stuckObject >> 0xc);
      lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
      do {
        uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
        puVar5 = (ulonglong *)(lVar3 + 0xADDR);
        LOCK();
        bVar1 = uVar4 == *puVar5;
        if (bVar1) {
          *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
        }
        UNLOCK();
      } while (!bVar1);
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar6 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if (((pMVar6 != (MVGameControllerBase *)0x0) &&
        (pMVar7 = (pMVar6->fields).game, pMVar7 != (MVNetworkGame *)0x0)) &&
       (pMVar8 = (pMVar7->fields).teamManager, pMVar8 != (MVTeamManager *)0x0)) {
      if (cRam_? == '\0') {
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::Collections::Generic::HashSet<int>_>__get_Count__
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pDVar9 = (pMVar8->fields).teams;
      if (pDVar9 != (Dictionary_2_MV_WorldObject_MVTeam_HashSet_1_System_Int32_ *)0x0) {
        if ((pDVar9->fields)._count - (pDVar9->fields)._freeCount < 2) {
          bVar10 = 0;
        }
        else {
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__MVGameControllerBase);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pMVar6 = TypeInfo__MVGameControllerBase->static_fields->instance;
          if (((pMVar6 == (MVGameControllerBase *)0x0) ||
              (pMVar7 = (pMVar6->fields).game, pMVar7 == (MVNetworkGame *)0x0)) ||
             ((this_00 = (pMVar7->fields).playerContainer, this_00 == (MVPlayerContainer *)0x0 ||
              (this_01 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer
                                   (this_00,(MethodInfo *)0x0), this_01 == (MVLocalPlayer *)0x0))))
          goto code_?;
          bVar11 = MVPlayer::MVPlayer_IsOnSameTeam_1((MVPlayer *)this_01,hitObject,(MethodInfo *)0x0)
          ;
          bVar10 = bVar11 ^ 1;
        }
        (this->fields).damageRay = bVar10;
        lVar3 = FUN_?(hitObject,TypeInfo__IHealRayAttachementObject);
        if (lVar3 != 0) {
          pGVar12 = (GameObject *)FUN_?(0,TypeInfo__IHealRayAttachementObject,lVar3);
          bVar1 = iRam_? != 0;
          (this->fields).stuckObject = pGVar12;
          if (bVar1) {
            uVar2 = (uint)((ulonglong)&(this->fields).stuckObject >> 0xc);
            lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
            do {
              uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
              puVar5 = (ulonglong *)(lVar3 + 0xADDR);
              LOCK();
              bVar1 = uVar4 == *puVar5;
              if (bVar1) {
                *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
              }
              UNLOCK();
            } while (!bVar1);
          }
        }
        return;
      }
    }
  }
code_?:
  FUN_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* PickUpItemHealRay() */

void Assembly-CSharp.dll::PickUpItemHealRay::PickUpItemHealRay__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__PickUpItemHealRay);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uVar1 = _UNK_?;
  uVar2 = _UNK_?;
  uVar3 = _UNK_?;
  pPVar4 = TypeInfo__PickUpItemHealRay->static_fields;
  uVar5 = _UNK_?;
  (pPVar4->lockOnColorHealing).r = (float)_UNK_?;
  uVar6 = _UNK_?;
  (pPVar4->lockOnColorHealing).g = (float)uVar5;
  _UNK_? = (undefined4)uVar1;
  _UNK_? = SUB84(uVar1,4);
  uVar5 = _UNK_?;
  (pPVar4->lockOnColorHealing).b = (float)_UNK_?;
  _UNK_? = uVar6;
  uVar1 = _UNK_?;
  (pPVar4->lockOnColorHealing).a = (float)uVar5;
  pPVar4 = TypeInfo__PickUpItemHealRay->static_fields;
  _UNK_? = (undefined4)uVar3;
  _UNK_? = SUB84(uVar3,4);
  uVar5 = _UNK_?;
  (pPVar4->lockOnColorDamaging).r = (float)_UNK_?;
  _UNK_? = uVar1;
  uVar3 = _UNK_?;
  (pPVar4->lockOnColorDamaging).g = (float)uVar5;
  _UNK_? = (undefined4)uVar2;
  _UNK_? = SUB84(uVar2,4);
  uVar5 = _UNK_?;
  (pPVar4->lockOnColorDamaging).b = (float)_UNK_?;
  _UNK_? = uVar3;
  (pPVar4->lockOnColorDamaging).a = (float)uVar5;
  return;
}


/* PickUpItemHealRay() */

void Assembly-CSharp.dll::PickUpItemHealRay::PickUpItemHealRay__ctor
               (PickUpItemHealRay *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  (this->fields).maxRayRange = 20.0;
  (this->fields).maxLockOnRange = 25.0;
  (this->fields).rayMinimumChargeTime = 0.5;
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uStack_1._0_4_ = 0.0;
  uStack_1._4_1_ = 0;
  uStack_1._5_3_ = 0;
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).field_0x1c == 0) {
    FUN_?();
  }
  AVar2 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
           ObscuredFloat_InternalEncrypt(_UNK_?,(MethodInfo *)0x0);
  Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
  ObscuredFloat__ctor((ObscuredFloat *)&stack0xffffffffffffffd8,AVar2,(MethodInfo *)0x0);
  bVar3 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::ObscuredCheatingDetector
           ::ObscuredCheatingDetector_get_IsRunning((MethodInfo *)0x0);
  if (bVar3 != 0) {
    uStack_1._0_4_ = 100.0;
    uStack_1._4_1_ = 0;
    uStack_1._5_3_ = 0;
  }
  bVar4 = iRam_? != 0;
  (this->fields).maxAmmoTime.currentCryptoKey = 0;
  (this->fields).maxAmmoTime.hiddenValue.b1 = 0;
  (this->fields).maxAmmoTime.hiddenValue.b2 = 0;
  (this->fields).maxAmmoTime.hiddenValue.b3 = 0;
  (this->fields).maxAmmoTime.hiddenValue.b4 = 0;
  *(undefined4 *)&(this->fields).maxAmmoTime.hiddenValueOld = 0;
  *(undefined4 *)((longlong)&(this->fields).maxAmmoTime.hiddenValueOld + 4) = 0;
  (this->fields).maxAmmoTime.fakeValue = (float)uStack_1;
  (this->fields).maxAmmoTime.inited = uStack_1._4_1_;
  *(undefined3 *)&(this->fields).maxAmmoTime.field_0x15 = uStack_1._5_3_;
  if (bVar4) {
    uVar5 = (uint)((ulonglong)&(this->fields).maxAmmoTime.hiddenValueOld >> 0xc);
    uVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6);
    do {
      uVar7 = *(ulonglong *)(uVar6 * 8 + 0xADDR);
      puVar8 = (ulonglong *)(uVar6 * 8 + 0xADDR);
      LOCK();
      bVar4 = uVar7 == *puVar8;
      if (bVar4) {
        *puVar8 = uVar7 | 1L << (ulonglong)(uVar5 & 0x3f);
      }
      UNLOCK();
    } while (!bVar4);
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).field_0x1c == 0) {
    FUN_?();
  }
  AVar2 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
           ObscuredFloat_InternalEncrypt(0.0,(MethodInfo *)0x0);
  Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
  ObscuredFloat__ctor((ObscuredFloat *)&stack0xffffffffffffffd8,AVar2,(MethodInfo *)0x0);
  Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::ObscuredCheatingDetector::
  ObscuredCheatingDetector_get_IsRunning((MethodInfo *)0x0);
  bVar4 = iRam_? != 0;
  (this->fields).currentAmmoLeft.currentCryptoKey = 0;
  (this->fields).currentAmmoLeft.hiddenValue.b1 = 0;
  (this->fields).currentAmmoLeft.hiddenValue.b2 = 0;
  (this->fields).currentAmmoLeft.hiddenValue.b3 = 0;
  (this->fields).currentAmmoLeft.hiddenValue.b4 = 0;
  *(undefined4 *)&(this->fields).currentAmmoLeft.hiddenValueOld = 0;
  *(undefined4 *)((longlong)&(this->fields).currentAmmoLeft.hiddenValueOld + 4) = 0;
  (this->fields).currentAmmoLeft.fakeValue = 0.0;
  (this->fields).currentAmmoLeft.inited = 0;
  *(undefined3 *)&(this->fields).currentAmmoLeft.field_0x15 = 0;
  if (bVar4) {
    uVar5 = (uint)((ulonglong)&(this->fields).currentAmmoLeft.hiddenValueOld >> 0xc);
    uVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6);
    do {
      uVar7 = *(ulonglong *)(uVar6 * 8 + 0xADDR);
      puVar8 = (ulonglong *)(uVar6 * 8 + 0xADDR);
      LOCK();
      bVar4 = uVar7 == *puVar8;
      if (bVar4) {
        *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
      }
      UNLOCK();
    } while (!bVar4);
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uVar5 = 0x800;
  uVar9 = 0;
  do {
    uVar9 = uVar9 + 1;
    uVar5 = (int)uVar5 >> 1;
  } while ((uVar5 & 1) == 0);
  (this->fields).layers.m_Mask = ~(1 << (uVar9 & 0x1f)) & 0xfffffffb;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__MeshRenderer);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar10 = (MeshRenderer__Array *)FUN_?(TypeInfo__UnityEngine__MeshRenderer,0);
  bVar4 = iRam_? != 0;
  (this->fields)._.meshRenderers = pMVar10;
  if (bVar4) {
    uVar5 = (uint)((ulonglong)&(this->fields)._.meshRenderers >> 0xc);
    puVar8 = (ulonglong *)((ulonglong)((uVar5 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar7 = *puVar8;
      LOCK();
      uVar6 = *puVar8;
      if (uVar7 == uVar6) {
        *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
      }
      UNLOCK();
    } while (uVar7 != uVar6);
  }
  bVar4 = cRam_? == '\0';
  (this->fields)._._AbleToFire_k__BackingField = 1;
  if (bVar4) {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pOVar11 = TypeInfo__UnityEngine__Object;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c != 0) {
    return;
  }
  ppMVar12 = (MethodInfo **)0x0;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c != 0) {
    return;
  }
  lVar13 = _Baselib_Thread_GetCurrentThreadId_il2cpp_baselib__YA_JXZ();
  ppMVar14 = ppMVar12;
  if (lVar13 == lRam_?) {
    iRam_? = iRam_? + 1;
    lVar13 = lRam_?;
  }
  else {
    do {
      uVar5 = (uint)ppMVar14;
      LOCK();
      bVar4 = uVar5 != uRam_?;
      uVar9 = uVar5;
      uVar15 = uVar5 + 1;
      if (bVar4) {
        uVar9 = uRam_?;
        uVar15 = uRam_?;
      }
      uRam_? = uVar15;
      UNLOCK();
    } while ((bVar4) && (ppMVar14 = (MethodInfo **)(ulonglong)uVar9, uVar5 = uVar9, uVar9 != 2)
            );
    while (uVar5 != 0) {
      _Baselib_SystemFutex_Wait_il2cpp_baselib__YAXPEAHHI_Z(0xADDR,2,0xffffffff);
      uVar5 = uRam_?;
      LOCK();
      uRam_? = 2;
      UNLOCK();
    }
  }
  lRam_? = lVar13;
  puVar16 = &(pOVar11->_1).field_0x1c;
  LOCK();
  bVar4 = *(int *)puVar16 == 1;
  if (bVar4) {
    *(undefined4 *)puVar16 = 1;
  }
  uVar5 = uRam_?;
  UNLOCK();
  if (bVar4) {
    if (iRam_? != 0) {
      iRam_? = iRam_? + -1;
      return;
    }
    lRam_? = 0;
    LOCK();
    uRam_? = 0;
    UNLOCK();
    if (uVar5 != 2) {
      uRam_? = 0;
      lRam_? = 0;
      return;
    }
    _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
              (0xADDR,1,0);
    return;
  }
  puVar17 = &(pOVar11->_1).cctor_finished_or_no_cctor;
  LOCK();
  bVar4 = *puVar17 == 1;
  if (bVar4) {
    *puVar17 = 1;
  }
  uVar5 = uRam_?;
  UNLOCK();
  if (bVar4) {
    if (iRam_? == 0) {
      lRam_? = 0;
      LOCK();
      uRam_? = 0;
      UNLOCK();
      if (uVar5 == 2) {
        _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
                  (0xADDR,1,0);
      }
    }
    else {
      iRam_? = iRam_? + -1;
    }
    uVar5 = GetCurrentThreadId();
    psVar18 = &(pOVar11->_1).cctor_thread;
    LOCK();
    bVar4 = (ulonglong)uVar5 == *psVar18;
    if (bVar4) {
      *psVar18 = (ulonglong)uVar5;
    }
    UNLOCK();
    if (bVar4) {
      return;
    }
    while( true ) {
      puVar16 = &(pOVar11->_1).field_0x1c;
      LOCK();
      bVar4 = *(int *)puVar16 == 1;
      if (bVar4) {
        *(undefined4 *)puVar16 = 1;
      }
      UNLOCK();
      if (bVar4) break;
      LOCK();
      lVar13._0_4_ = (pOVar11->_1).initializationExceptionGCHandle;
      lVar13._4_4_ = (pOVar11->_1).cctor_started;
      if (lVar13 == 0) {
        (pOVar11->_1).initializationExceptionGCHandle = 0;
        (pOVar11->_1).cctor_started = 0;
      }
      UNLOCK();
      if (lVar13 != 0) break;
      FUN_?(*puRam_?);
    }
code_?:
    lVar19._0_4_ = (pOVar11->_1).initializationExceptionGCHandle;
    lVar19._4_4_ = (pOVar11->_1).cctor_started;
    if (lVar19 == 0) {
      return;
    }
  }
  else {
    uVar5 = GetCurrentThreadId();
    LOCK();
    (pOVar11->_1).cctor_thread = (ulonglong)uVar5;
    UNLOCK();
    LOCK();
    (pOVar11->_1).cctor_finished_or_no_cctor = 1;
    uVar5 = uRam_?;
    UNLOCK();
    if (iRam_? == 0) {
      lRam_? = 0;
      LOCK();
      uRam_? = 0;
      UNLOCK();
      if (uVar5 == 2) {
        _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
                  (0xADDR,1,0);
      }
    }
    else {
      iRam_? = iRam_? + -1;
    }
    alStackX_10[0] = 0;
    if (((pOVar11->_1).field_0x6e & 4) != 0) {
      FUN_?(pOVar11);
      ppMVar14 = ppMVar12;
      pIVar20 = (Il2CppClass *)pOVar11;
code_?:
      do {
        if (ppMVar14 == (MethodInfo **)0x0) {
          FUN_?(pIVar20);
          if (pIVar20->field_count != 0) {
            ppMVar14 = pIVar20->methods;
            pMVar21 = *ppMVar14;
code_?:
            if (pMVar21 != (MethodInfo *)0x0) {
              if ((*pMVar21->name == '.') && ((pMVar21->flags & 0x800) != 0)) {
                ppMVar22 = ppMVar12;
                while (ppMVar23 = ppMVar22 + 0x3052a1b1,
                      ppMVar22 = (MethodInfo **)((longlong)ppMVar22 + 1),
                      *(char *)ppMVar23 == (pMVar21->name + -1)[(longlong)ppMVar22]) {
                  if (ppMVar22 == (MethodInfo **)0x7) {
                    FUN_?(pMVar21,0,0,alStackX_10);
                    goto code_?;
                  }
                }
              }
              goto code_?;
            }
          }
        }
        else {
          ppMVar14 = ppMVar14 + 1;
          if (ppMVar14 < pIVar20->methods + pIVar20->field_count) {
            pMVar21 = *ppMVar14;
            goto code_?;
          }
        }
        pIVar20 = pIVar20->parent;
        ppMVar14 = ppMVar12;
      } while (pIVar20 != (Il2CppClass *)0x0);
    }
code_?:
    LOCK();
    (pOVar11->_1).cctor_thread = 0;
    uVar6 = _UNK_?;
    uVar24 = _UNK_?;
    UNLOCK();
    if (alStackX_10[0] == 0) {
      LOCK();
      *(undefined4 *)&(pOVar11->_1).field_0x1c = 1;
      UNLOCK();
      goto code_?;
    }
    uStack_25 = 0;
    uStack_26 = _UNK_?;
    uStack_27 = _UNK_?;
    pppppppuStack_78 = (undefined8 *******)0x0;
    FUN_?(&pppppppuStack_78,&(pOVar11->_0).byval_arg,0,0);
    pppppppuVar19 = &pppppppuStack_78;
    if (0xf < uStack_27) {
      pppppppuVar19 = pppppppuStack_78;
    }
    FUN_?(&pppppppuStack_58,&UNK_?,pppppppuVar19);
    if (uStack_27 < 0x10) {
code_?:
      lVar13 = alStackX_10[0];
      pppppppuStack_78 = (undefined8 *******)((ulonglong)pppppppuStack_78 & 0xffffffffffffff00);
      pppppppuVar19 = &pppppppuStack_58;
      if (0xf < uStack_28) {
        pppppppuVar19 = pppppppuStack_58;
      }
      uStack_26 = uVar24;
      uStack_27 = uVar6;
      lVar19 = FUN_?(uRam_?,&UNK_?,&UNK_?,pppppppuVar19);
      if (lVar13 != 0) {
        *(longlong *)(lVar19 + 0x28U) = lVar13;
        if (iRam_? != 0) {
          uVar5 = (uint)(lVar19 + 0x28U >> 0xc);
          puVar8 = (ulonglong *)((ulonglong)((uVar5 & 0x1fffff) >> 6) * 8 + 0xADDR);
          do {
            uVar7 = *puVar8;
            LOCK();
            uVar6 = *puVar8;
            if (uVar7 == uVar6) {
              *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
            }
            UNLOCK();
          } while (uVar7 != uVar6);
        }
      }
      FUN_?(pOVar11,lVar19);
      if (0xf < uStack_28) {
        pppppppuVar19 = pppppppuStack_58;
        if ((0xfff < uStack_28 + 1) &&
           (pppppppuVar19 = (undefined8 *******)pppppppuStack_58[-1],
           0x1f < (ulonglong)((longlong)pppppppuStack_58 + (-8 - (longlong)pppppppuVar19))))
        goto code_?;
        func_?(pppppppuVar19);
      }
      goto code_?;
    }
    pppppppuVar19 = pppppppuStack_78;
    if ((uStack_27 + 1 < 0x1000) ||
       (pppppppuVar19 = (undefined8 *******)pppppppuStack_78[-1],
       (ulonglong)((longlong)pppppppuStack_78 + (-8 - (longlong)pppppppuVar19)) < 0x20)) {
      func_?(pppppppuVar19);
      uVar24 = _UNK_?;
      uVar6 = _UNK_?;
      goto code_?;
    }
    FUN_?(0,0,0,0,0);
  }
  uVar24._0_4_ = (pOVar11->_1).initializationExceptionGCHandle;
  uVar24._4_4_ = (pOVar11->_1).cctor_started;
  uVar24 = FUN_?(uVar24);
  FUN_?(uVar24,0);
code_?:
  FUN_?(0,0,0,0,0);
  pcVar29 = (code *)swi(3);
  (*pcVar29)();
  return;
}


/* Int32 get_MaxAmmo() */

int32_t Assembly-CSharp.dll::PickUpItemHealRay::PickUpItemHealRay_get_MaxAmmo
                  (PickUpItemHealRay *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uVar1._0_4_ = (this->fields).maxAmmoTime.currentCryptoKey;
  uVar1._4_4_ = (this->fields).maxAmmoTime.hiddenValue;
  pBVar2 = (this->fields).maxAmmoTime.hiddenValueOld;
  uVar3._0_4_ = (this->fields).maxAmmoTime.fakeValue;
  uVar3._4_1_ = (this->fields).maxAmmoTime.inited;
  uVar3._5_3_ = *(undefined3 *)&(this->fields).maxAmmoTime.field_0x15;
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).field_0x1c == 0) {
    FUN_?();
  }
  aOStack_4[0]._0_8_ = uVar1;
  aOStack_4[0].hiddenValueOld = pBVar2;
  aOStack_4[0]._16_8_ = uVar3;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).field_0x1c == 0) {
    FUN_?();
  }
  fVar5 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
          ObscuredFloat_InternalDecrypt(aOStack_4,(MethodInfo *)0x0);
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar6 = (*(this->klass->vtable).CalculateMaxAmmo.methodPtr)
                    (this,(ulonglong)(uint)(int)fVar5,(this->klass->vtable).CalculateMaxAmmo.method)
  ;
  return iVar6;
}


/* Int32 get_Quantity() */

int32_t Assembly-CSharp.dll::PickUpItemHealRay::PickUpItemHealRay_get_Quantity
                  (PickUpItemHealRay *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uVar1._0_4_ = (this->fields).currentAmmoLeft.currentCryptoKey;
  uVar1._4_4_ = (this->fields).currentAmmoLeft.hiddenValue;
  pBVar2 = (this->fields).currentAmmoLeft.hiddenValueOld;
  uVar3._0_4_ = (this->fields).currentAmmoLeft.fakeValue;
  uVar3._4_1_ = (this->fields).currentAmmoLeft.inited;
  uVar3._5_3_ = *(undefined3 *)&(this->fields).currentAmmoLeft.field_0x15;
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).field_0x1c == 0) {
    FUN_?();
  }
  aOStack_4[0]._0_8_ = uVar1;
  aOStack_4[0].hiddenValueOld = pBVar2;
  aOStack_4[0]._16_8_ = uVar3;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).field_0x1c == 0) {
    FUN_?();
  }
  fVar5 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
          ObscuredFloat_InternalDecrypt(aOStack_4,(MethodInfo *)0x0);
  aOStack_4[0].currentCryptoKey = (this->fields).maxAmmoTime.currentCryptoKey;
  aOStack_4[0].hiddenValue = (this->fields).maxAmmoTime.hiddenValue;
  aOStack_4[0].hiddenValueOld = (this->fields).maxAmmoTime.hiddenValueOld;
  aOStack_4[0].fakeValue = (this->fields).maxAmmoTime.fakeValue;
  aOStack_4[0].inited = (this->fields).maxAmmoTime.inited;
  aOStack_4[0]._21_3_ = *(undefined3 *)&(this->fields).maxAmmoTime.field_0x15;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).field_0x1c == 0) {
    FUN_?();
  }
  fVar6 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
          ObscuredFloat_InternalDecrypt(aOStack_4,(MethodInfo *)0x0);
  fVar5 = (fVar5 / fVar6) * _UNK_?;
  if (cRam_? == '\0') {
    aOStack_4[0].hiddenValueOld = (Byte__Array *)&UNK_?;
    FUN_?(&TypeInfo__System__Math);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__System__Math->_1).field_0x1c == 0) {
    aOStack_4[0].hiddenValueOld = (Byte__Array *)&UNK_?;
    FUN_?();
  }
  aOStack_4[0].hiddenValueOld = (Byte__Array *)&UNK_?;
  dVar7 = (double)FUN_?((double)fVar5);
  return (int)dVar7;
}

