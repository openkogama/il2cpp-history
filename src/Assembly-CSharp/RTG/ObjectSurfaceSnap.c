
/* Vector3 CalculateEmbedVector(List`1[UnityEngine.Vector3], GameObject, Vector3, ObjectSurfaceSnap+Type) */

Vector3 * Assembly-CSharp.dll::RTG::ObjectSurfaceSnap::ObjectSurfaceSnap_CalculateEmbedVector(Vector3 *__return_storage_ptr__,List_1_UnityEngine_Vector3_ *embedPoints,GameObject *embedSurface,Vector3 *embedDirection,ObjectSurfaceSnap_Type__Enum surfaceType,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::Vector3>__Dispose__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::Vector3>__MoveNext__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::Vector3>__get_Current__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__GetEnumerator__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pOVar1 = ObjectSurfaceSnap_CreateSurfaceRaycaster(surfaceType,embedSurface,0,(MethodInfo *)0x0);
  bVar2 = false;
  if (embedPoints == (List_1_UnityEngine_Vector3_ *)0x0) {
    FUN_?();
  }
  else {
    if (iRam_? != 0) {
      uVar3 = (uint)((ulonglong)&pLStack_4 >> 0xc);
      uVar5 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
      do {
        uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
        puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
        LOCK();
        bVar8 = uVar6 == *puVar7;
        if (bVar8) {
          *puVar7 = uVar6 | 1L << (uVar3 & 0x3f);
        }
        UNLOCK();
      } while (!bVar8);
    }
    uStack_9 = (embedPoints->fields)._version;
    lStack_10 = (ulonglong)uStack_9 << 0x20;
    uStack_11 = 0;
    uStack_12 = 0;
    uStack_13 = 0;
    uStack_14 = (List_1_UnityEngine_Vector3_ *)0x0;
    uStack_15 = 0;
    uStack_16 = 0;
    puStack_17 = &uStack_18;
    fVar19 = -3.4028235e+38;
    pLStack_4 = embedPoints;
    while( true ) {
      uStack_18 = embedPoints;
      cVar20 = FUN_?(&uStack_18,MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::Vector3>__MoveNext__);
      pLVar21 = uStack_14;
      if (cVar20 == '\0') {
        if (bVar2) {
          if (fVar19 < 0.0) {
            fVar19 = (float)FUN_?(fVar19);
          }
          else {
            fVar19 = SQRT(fVar19);
          }
          uVar22 = embedDirection->x;
          fVar23 = embedDirection->y;
          fVar24 = embedDirection->z;
          __return_storage_ptr__->x = (float)uVar22 * fVar19;
          __return_storage_ptr__->y = fVar23 * fVar19;
          __return_storage_ptr__->z = fVar24 * fVar19;
        }
        else {
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__UnityEngine__Vector3);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pVVar25 = TypeInfo__UnityEngine__Vector3->static_fields;
          fVar19 = (pVVar25->zeroVector).y;
          __return_storage_ptr__->x = (pVVar25->zeroVector).x;
          __return_storage_ptr__->y = fVar19;
          __return_storage_ptr__->z = (pVVar25->zeroVector).z;
        }
        return __return_storage_ptr__;
      }
      fStack_26 = (float)uStack_14;
      fStack_27 = uStack_14._4_4_;
      fVar28 = (float)uStack_15;
      pLStack_29 = *(List_1_UnityEngine_Vector3_ **)embedDirection;
      fVar30 = SUB84(pLStack_29,0);
      uVar5 = (ulonglong)pLStack_29 >> 0x20;
      fVar23 = embedDirection->z;
      uStack_31 = (ulonglong)pLStack_29 ^ 0x8000000080000000;
      fStack_32 = -fVar23;
      fVar24 = (float)FUN_?(&uStack_31);
      if (1e-05 < fVar24) {
        fVar30 = -fVar30 / fVar24;
        fVar33 = -(float)uVar5 / fVar24;
        fVar24 = -fVar23 / fVar24;
      }
      else {
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__UnityEngine__Vector3);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pVVar25 = TypeInfo__UnityEngine__Vector3->static_fields;
        fVar30 = (pVVar25->zeroVector).x;
        fVar33 = (pVVar25->zeroVector).y;
        fVar24 = (pVVar25->zeroVector).z;
      }
      uStack_34 = CONCAT44(fVar33,fVar30);
      if (pOVar1 == (ObjectSurfaceSnap_SurfaceRaycaster *)0x0) break;
      pLStack_29 = pLVar21;
      pLStack_4 = pLVar21;
      lStack_10 = CONCAT44(fVar30,fVar28);
      uStack_11 = CONCAT44(fVar24,fVar33);
      method_00 = (pOVar1->klass->vtable).__unknown.method;
      fStack_35 = fVar28;
      fStack_36 = fVar30;
      lVar37 = (*(pOVar1->klass->vtable).__unknown.methodPtr)(pOVar1,&pLStack_4);
      embedPoints = uStack_18;
      if (lVar37 == 0) {
        VStack_38.x = embedDirection->x;
        VStack_38.y = embedDirection->y;
        VStack_38.z = embedDirection->z;
        pVVar39 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize(aVStack_40,&VStack_38,method_00);
        uStack_34._0_4_ = pVVar39->x;
        uStack_34._4_4_ = pVVar39->y;
        pLStack_29 = pLVar21;
        pLStack_4 = pLVar21;
        lStack_10 = CONCAT44((undefined4)uStack_34,fVar28);
        uStack_11 = CONCAT44(pVVar39->z,uStack_34._4_4_);
        fStack_35 = fVar28;
        fStack_36 = (float)(undefined4)uStack_34;
        lVar37 = (*(pOVar1->klass->vtable).__unknown.methodPtr)(pOVar1,&pLStack_4,(pOVar1->klass->vtable).__unknown.method);
        embedPoints = uStack_18;
        if (lVar37 != 0) {
          pLStack_29 = *(List_1_UnityEngine_Vector3_ **)(lVar37 + 0x18);
          fVar23 = fStack_26 - SUB84(pLStack_29,0);
          fVar24 = fStack_27 - (float)((ulonglong)pLStack_29 >> 0x20);
          fVar28 = fVar28 - *(float *)(lVar37 + 0x20);
          fVar23 = fVar24 * fVar24 + fVar23 * fVar23 + fVar28 * fVar28;
          if (fVar19 < fVar23) {
            bVar2 = true;
            fVar19 = fVar23;
          }
        }
      }
    }
  }
  FUN_?();
  FUN_?();
  pcVar41 = (code *)swi(3);
  pVVar39 = (Vector3 *)(*pcVar41)();
  return pVVar39;
}


/* Vector3 CalculateSitOnSurfaceOffset(OBB, Plane, Single) */

Vector3 * Assembly-CSharp.dll::RTG::ObjectSurfaceSnap::ObjectSurfaceSnap_CalculateSitOnSurfaceOffset(Vector3 *__return_storage_ptr__,OBB *obb,Plane *surfacePlane,float offsetFromSurface,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  points = OBB::OBB_GetCornerPoints(obb,(MethodInfo *)0x0);
  aPStack_1[0].m_Normal.x = (surfacePlane->m_Normal).x;
  aPStack_1[0].m_Normal.y = (surfacePlane->m_Normal).y;
  aPStack_1[0]._8_8_ = *(undefined8 *)&(surfacePlane->m_Normal).z;
  uVar2 = PlaneEx::PlaneEx_GetFurthestPtBehind(aPStack_1,points,(MethodInfo *)0x0);
  if ((int)uVar2 < 0) {
    aPStack_1[0].m_Normal.x = (surfacePlane->m_Normal).x;
    aPStack_1[0].m_Normal.y = (surfacePlane->m_Normal).y;
    aPStack_1[0]._8_8_ = *(undefined8 *)&(surfacePlane->m_Normal).z;
    uVar2 = PlaneEx::PlaneEx_GetClosestPtInFrontOrOnPlane(aPStack_1,points,(MethodInfo *)0x0);
    if ((int)uVar2 < 0) {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Vector3);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pVVar3 = TypeInfo__UnityEngine__Vector3->static_fields;
      fVar4 = (pVVar3->zeroVector).y;
      fVar5 = (pVVar3->zeroVector).z;
      __return_storage_ptr__->x = (pVVar3->zeroVector).x;
      __return_storage_ptr__->y = fVar4;
      __return_storage_ptr__->z = fVar5;
      return __return_storage_ptr__;
    }
  }
  if (points != (List_1_UnityEngine_Vector3_ *)0x0) {
    if ((uint)(points->fields)._size <= uVar2) {
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException((MethodInfo *)0x0);
      pcVar6 = (code *)swi(3);
      pVVar7 = (Vector3 *)(*pcVar6)();
      return pVVar7;
    }
    pVVar8 = (points->fields)._items;
    if (pVVar8 != (Vector3__Array *)0x0) {
      if (uVar2 < (uint)pVVar8->max_length) {
        fVar9 = (surfacePlane->m_Normal).x;
        fVar10 = (surfacePlane->m_Normal).y;
        fVar11 = (surfacePlane->m_Normal).z;
        uVar12 = pVVar8->vector[uVar2].x;
        uVar13 = pVVar8->vector[uVar2].y;
        fVar14 = fVar10 * (float)uVar13 + fVar9 * (float)uVar12 + fVar11 * pVVar8->vector[uVar2].z + surfacePlane->m_Distance;
        uVar15 = pVVar8->vector[uVar2].x;
        uVar16 = pVVar8->vector[uVar2].y;
        fVar5 = pVVar8->vector[uVar2].z;
        fVar4 = pVVar8->vector[uVar2].z;
        fVar17 = (surfacePlane->m_Normal).z;
        __return_storage_ptr__->x = (((float)uVar15 - fVar9 * fVar14) - (float)uVar15) + fVar9 * offsetFromSurface;
        __return_storage_ptr__->y = (((float)uVar16 - fVar10 * fVar14) - (float)uVar16) + fVar10 * offsetFromSurface;
        __return_storage_ptr__->z = ((fVar5 - fVar11 * fVar14) - fVar4) + fVar17 * offsetFromSurface;
        return __return_storage_ptr__;
      }
      FUN_?();
      pcVar6 = (code *)swi(3);
      pVVar7 = (Vector3 *)(*pcVar6)();
      return pVVar7;
    }
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  pVVar7 = (Vector3 *)(*pcVar6)();
  return pVVar7;
}


/* Vector3 CalculateSitOnSurfaceOffset(AABB, Plane, Single) */

Vector3 * Assembly-CSharp.dll::RTG::ObjectSurfaceSnap::ObjectSurfaceSnap_CalculateSitOnSurfaceOffset_1(Vector3 *__return_storage_ptr__,AABB *aabb,Plane *surfacePlane,float offsetFromSurface,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  points = AABB::AABB_GetCornerPoints(aabb,(MethodInfo *)0x0);
  aPStack_1[0].m_Normal.x = (surfacePlane->m_Normal).x;
  aPStack_1[0].m_Normal.y = (surfacePlane->m_Normal).y;
  aPStack_1[0]._8_8_ = *(undefined8 *)&(surfacePlane->m_Normal).z;
  uVar2 = PlaneEx::PlaneEx_GetFurthestPtBehind(aPStack_1,points,(MethodInfo *)0x0);
  if ((int)uVar2 < 0) {
    aPStack_1[0].m_Normal.x = (surfacePlane->m_Normal).x;
    aPStack_1[0].m_Normal.y = (surfacePlane->m_Normal).y;
    aPStack_1[0]._8_8_ = *(undefined8 *)&(surfacePlane->m_Normal).z;
    uVar2 = PlaneEx::PlaneEx_GetClosestPtInFrontOrOnPlane(aPStack_1,points,(MethodInfo *)0x0);
    if ((int)uVar2 < 0) {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Vector3);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pVVar3 = TypeInfo__UnityEngine__Vector3->static_fields;
      fVar4 = (pVVar3->zeroVector).y;
      fVar5 = (pVVar3->zeroVector).z;
      __return_storage_ptr__->x = (pVVar3->zeroVector).x;
      __return_storage_ptr__->y = fVar4;
      __return_storage_ptr__->z = fVar5;
      return __return_storage_ptr__;
    }
  }
  if (points != (List_1_UnityEngine_Vector3_ *)0x0) {
    if ((uint)(points->fields)._size <= uVar2) {
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException((MethodInfo *)0x0);
      pcVar6 = (code *)swi(3);
      pVVar7 = (Vector3 *)(*pcVar6)();
      return pVVar7;
    }
    pVVar8 = (points->fields)._items;
    if (pVVar8 != (Vector3__Array *)0x0) {
      if (uVar2 < (uint)pVVar8->max_length) {
        fVar9 = (surfacePlane->m_Normal).x;
        fVar10 = (surfacePlane->m_Normal).y;
        fVar11 = (surfacePlane->m_Normal).z;
        uVar12 = pVVar8->vector[uVar2].x;
        uVar13 = pVVar8->vector[uVar2].y;
        fVar14 = fVar10 * (float)uVar13 + fVar9 * (float)uVar12 + fVar11 * pVVar8->vector[uVar2].z + surfacePlane->m_Distance;
        uVar15 = pVVar8->vector[uVar2].x;
        uVar16 = pVVar8->vector[uVar2].y;
        fVar5 = pVVar8->vector[uVar2].z;
        fVar4 = pVVar8->vector[uVar2].z;
        fVar17 = (surfacePlane->m_Normal).z;
        __return_storage_ptr__->x = (((float)uVar15 - fVar9 * fVar14) - (float)uVar15) + fVar9 * offsetFromSurface;
        __return_storage_ptr__->y = (((float)uVar16 - fVar10 * fVar14) - (float)uVar16) + fVar10 * offsetFromSurface;
        __return_storage_ptr__->z = ((fVar5 - fVar11 * fVar14) - fVar4) + fVar17 * offsetFromSurface;
        return __return_storage_ptr__;
      }
      FUN_?();
      pcVar6 = (code *)swi(3);
      pVVar7 = (Vector3 *)(*pcVar6)();
      return pVVar7;
    }
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  pVVar7 = (Vector3 *)(*pcVar6)();
  return pVVar7;
}


/* ObjectSurfaceSnap+SurfaceRaycaster CreateSurfaceRaycaster(ObjectSurfaceSnap+Type, GameObject, Boolean) */

ObjectSurfaceSnap_SurfaceRaycaster * Assembly-CSharp.dll::RTG::ObjectSurfaceSnap::ObjectSurfaceSnap_CreateSurfaceRaycaster(ObjectSurfaceSnap_Type__Enum surfaceType,GameObject *surfaceObject,bool raycastReverse,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__ObjectSurfaceSnap__MeshSurfaceRaycaster);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((1 < surfaceType - ObjectSurfaceSnap_Type__Enum_Mesh) && (surfaceType != ObjectSurfaceSnap_Type__Enum_SphericalMesh)) {
    return (ObjectSurfaceSnap_SurfaceRaycaster *)0x0;
  }
  pOVar1 = (ObjectSurfaceSnap_SurfaceRaycaster *)FUN_?(TypeInfo__RTG__ObjectSurfaceSnap__MeshSurfaceRaycaster);
  bVar2 = iRam_? != 0;
  (pOVar1->fields)._surfaceObject = surfaceObject;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&pOVar1->fields >> 0xc);
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
  (pOVar1->fields)._raycastReverse = raycastReverse;
  return pOVar1;
}


/* ObjectSurfaceSnap+SnapResult SnapHierarchy(GameObject, ObjectSurfaceSnap+SnapConfig) */

ObjectSurfaceSnap_SnapResult * Assembly-CSharp.dll::RTG::ObjectSurfaceSnap::ObjectSurfaceSnap_SnapHierarchy(ObjectSurfaceSnap_SnapResult *__return_storage_ptr__,GameObject *root,ObjectSurfaceSnap_SnapConfig *snapConfig,MethodInfo *method)

{
  lVar1 = FUN_?();
  lVar1 = -lVar1;
  if (cRam_? == '\0') {
    *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
    FUN_?(&TypeInfo__RTG__BoxMath);
    LOCK();
    *(undefined4 *)(&stack0xffffffffffffffd8 + lVar1) = *(undefined4 *)(&stack0xffffffffffffffd8 + lVar1);
    UNLOCK();
    *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
    FUN_?(&TypeInfo__RTG__GameObjectEx);
    LOCK();
    *(undefined4 *)(&stack0xffffffffffffffd8 + lVar1) = *(undefined4 *)(&stack0xffffffffffffffd8 + lVar1);
    UNLOCK();
    *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Count__);
    LOCK();
    *(undefined4 *)(&stack0xffffffffffffffd8 + lVar1) = *(undefined4 *)(&stack0xffffffffffffffd8 + lVar1);
    UNLOCK();
    *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
    FUN_?(&TypeInfo__RTG__ObjectBounds);
    LOCK();
    *(undefined4 *)(&stack0xffffffffffffffd8 + lVar1) = *(undefined4 *)(&stack0xffffffffffffffd8 + lVar1);
    UNLOCK();
    *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
    FUN_?(&TypeInfo__RTG__ObjectVertexCollect);
    LOCK();
    *(undefined4 *)(&stack0xffffffffffffffd8 + lVar1) = *(undefined4 *)(&stack0xffffffffffffffd8 + lVar1);
    UNLOCK();
    cRam_? = '\x01';
  }
  QStack_3.z = 0.0;
  QStack_3.w = 0.0;
  uStack_4 = 0;
  fStack_5 = 0.0;
  fStack_6 = 0.0;
  uStack_7 = 0;
  fStack_8 = 0.0;
  fStack_9 = 0.0;
  QStack_3.x = 0.0;
  QStack_3.y = 0.0;
  VStack_10.x = 0.0;
  VStack_10.y = 0.0;
  VStack_10.z = 0.0;
  uStack_11 = 0;
  uStack_12 = 0;
  uStack_13 = 0;
  VStack_14.x = 0.0;
  VStack_14.y = 0.0;
  VStack_14.z = 0.0;
  uStack_15 = 0;
  uStack_16 = 0;
  pIStack_17 = (Il2CppClass *)0x0;
  uStack_18 = 0;
  VStack_19.x = 0.0;
  VStack_19.y = 0.0;
  VStack_19.z = 0.0;
  fStack_20 = 0.0;
  QStack_21.z = 0.0;
  QStack_21.w = 0.0;
  fStack_22 = 0.0;
  fStack_23 = 0.0;
  QStack_21.x = 0.0;
  QStack_21.y = 0.0;
  uStack_24 = 0;
  uStack_25 = 0;
  fStack_26 = 0.0;
  uStack_27 = 0;
  uStack_28 = 0;
  fStack_29 = 0.0;
  VStack_30.x = 0.0;
  VStack_30.y = 0.0;
  VStack_30.z = 0.0;
  uStack_31 = 0;
  uStack_32 = 0;
  uStack_33 = 0;
  uStack_34 = 0;
  VStack_35.x = 0.0;
  VStack_35.y = 0.0;
  VStack_35.z = 0.0;
  VStack_36.x = 0.0;
  VStack_36.y = 0.0;
  VStack_36.z = 0.0;
  fStack_37 = 0.0;
  uStack_38 = 0;
  fStack_39 = 0.0;
  fStack_40 = 0.0;
  uStack_41 = 0;
  fStack_42 = 0.0;
  auStack_43._0_4_ = 0.0;
  auStack_43._4_4_ = 0.0;
  auStack_43._8_4_ = 0.0;
  auStack_43._12_4_ = 0.0;
  VStack_44.x = 0.0;
  VStack_44.y = 0.0;
  VStack_44.z = 0.0;
  uStack_45 = 0;
  fStack_46 = 0.0;
  uStack_47 = 0;
  uStack_48 = 0;
  uStack_49 = 0;
  uStack_50 = 0;
  uStack_51 = 0;
  fStack_52 = 0.0;
  auStack_53._0_4_ = 0.0;
  auStack_53._4_4_ = 0.0;
  auStack_53._8_4_ = 0.0;
  auStack_53._12_4_ = 0.0;
  VStack_54.x = 0.0;
  VStack_54.y = 0.0;
  VStack_54.z = 0.0;
  uStack_55 = 0;
  uStack_56 = 0;
  uStack_57._0_4_ = 0.0;
  uStack_57._4_4_ = 0.0;
  uStack_58 = 0;
  uStack_59 = 0;
  uStack_60._0_1_ = 0;
  uStack_60._1_3_ = 0;
  if (*(int *)&(TypeInfo__RTG__GameObjectEx->_1).field_0x1c == 0) {
    *(undefined **)((longlong)&puStack_2 + lVar1) = &DAT_?;
    FUN_?();
  }
  *(undefined8 *)(&stack0x00001418 + lVar1) = unaff_RSI;
  *(undefined8 *)(&stack0x000013d0 + lVar1) = unaff_R12;
  *(undefined8 *)(&stack0x000013c8 + lVar1) = unaff_R15;
  *(undefined8 *)(&stack0x000013b8 + lVar1) = unaff_XMM6_Qa;
  *(undefined8 *)(&stack0x000013c0 + lVar1) = unaff_XMM6_Qb;
  *(undefined8 *)(&stack0x000013a8 + lVar1) = unaff_XMM7_Qa;
  *(undefined8 *)(&stack0x000013b0 + lVar1) = unaff_XMM7_Qb;
  *(undefined8 *)(&stack0x00001398 + lVar1) = unaff_XMM8_Qa;
  *(undefined8 *)(&stack0x000013a0 + lVar1) = unaff_XMM8_Qb;
  *(undefined4 *)(&stack0x00001388 + lVar1) = unaff_XMM9_Da;
  *(undefined4 *)(&stack0x0000138c + lVar1) = unaff_XMM9_Db;
  *(undefined4 *)(&stack0x00001390 + lVar1) = unaff_XMM9_Dc;
  *(undefined4 *)(&stack0x00001394 + lVar1) = unaff_XMM9_Dd;
  *(undefined4 *)(&stack0x00001378 + lVar1) = unaff_XMM10_Da;
  *(undefined4 *)(&stack0x0000137c + lVar1) = unaff_XMM10_Db;
  *(undefined4 *)(&stack0x00001380 + lVar1) = unaff_XMM10_Dc;
  *(undefined4 *)(&stack0x00001384 + lVar1) = unaff_XMM10_Dd;
  *(undefined4 *)(&stack0x00001368 + lVar1) = unaff_XMM11_Da;
  *(undefined4 *)(&stack0x0000136c + lVar1) = unaff_XMM11_Db;
  *(undefined4 *)(&stack0x00001370 + lVar1) = unaff_XMM11_Dc;
  *(undefined4 *)(&stack0x00001374 + lVar1) = unaff_XMM11_Dd;
  *(undefined4 *)(&stack0x00001358 + lVar1) = unaff_XMM12_Da;
  *(undefined4 *)(&stack0x0000135c + lVar1) = unaff_XMM12_Db;
  *(undefined4 *)(&stack0x00001360 + lVar1) = unaff_XMM12_Dc;
  *(undefined4 *)(&stack0x00001364 + lVar1) = unaff_XMM12_Dd;
  *(undefined4 *)(&stack0x00001348 + lVar1) = unaff_XMM13_Da;
  *(undefined4 *)(&stack0x0000134c + lVar1) = unaff_XMM13_Db;
  *(undefined4 *)(&stack0x00001350 + lVar1) = unaff_XMM13_Dc;
  *(undefined4 *)(&stack0x00001354 + lVar1) = unaff_XMM13_Dd;
  *(undefined4 *)(&stack0x00001338 + lVar1) = unaff_XMM14_Da;
  *(undefined4 *)(&stack0x0000133c + lVar1) = unaff_XMM14_Db;
  *(undefined4 *)(&stack0x00001340 + lVar1) = unaff_XMM14_Dc;
  *(undefined4 *)(&stack0x00001344 + lVar1) = unaff_XMM14_Dd;
  *(undefined4 *)(&stack0x00001328 + lVar1) = unaff_XMM15_Da;
  *(undefined4 *)(&stack0x0000132c + lVar1) = unaff_XMM15_Db;
  *(undefined4 *)(&stack0x00001330 + lVar1) = unaff_XMM15_Dc;
  *(undefined4 *)(&stack0x00001334 + lVar1) = unaff_XMM15_Dd;
  *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
  bVar61 = GameObjectEx::GameObjectEx_HierarchyHasMesh(root,(MethodInfo *)0x0);
  *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
  bVar62 = GameObjectEx::GameObjectEx_HierarchyHasSprite(root,(MethodInfo *)0x0);
  if ((bVar61 == 0) && (bVar62 == 0)) {
    uVar63 = uStack_64;
    if (root != (GameObject *)0x0) {
      *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
      pTVar65 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform(root,(MethodInfo *)0x0);
      fVar66 = (snapConfig->SurfaceHitPlane).m_Normal.x;
      fVar67 = (snapConfig->SurfaceHitPlane).m_Normal.y;
      fVar68 = (snapConfig->SurfaceHitPlane).m_Normal.z;
      fVar69 = (snapConfig->SurfaceHitPlane).m_Distance;
      uVar63 = uStack_64;
      if (pTVar65 != (Transform *)0x0) {
        if (cRam_? == '\0') {
          *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
          FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_);
          LOCK();
          *(undefined4 *)(&stack0xffffffffffffffd8 + lVar1) = *(undefined4 *)(&stack0xffffffffffffffd8 + lVar1);
          UNLOCK();
          cRam_? = '\x01';
        }
        stack0xffffffffffffed68 = 0;
        fStack_70 = 0.0;
        pvVar71 = (pTVar65->fields)._._.m_CachedPtr;
        if (pvVar71 == (void *)0x0) {
          *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar65,(MethodInfo *)0x0);
          pcVar72 = (code *)swi(3);
          pOVar73 = (ObjectSurfaceSnap_SnapResult *)(*pcVar72)();
          return pOVar73;
        }
        pcVar72 = pcRam_?;
        if (pcRam_? == (code *)0x0) {
          *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
          pcVar72 = (code *)FUN_?(&UNK_?);
          if (pcVar72 == (code *)0x0) {
            *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
            uVar63 = func_?(&UNK_?);
            *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
            FUN_?(uVar63,0);
            pcVar72 = (code *)swi(3);
            pOVar73 = (ObjectSurfaceSnap_SnapResult *)(*pcVar72)();
            return pOVar73;
          }
        }
        pcRam_? = pcVar72;
        *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
        (*pcRam_?)(pvVar71);
        fVar69 = fStack_74 * fVar67 + (float)auStack_75._8_4_ * fVar66 + fStack_70 * fVar68 + fVar69;
        auVar76 = *(undefined1 (*) [16])&(snapConfig->SurfaceHitNormal).y;
        fVar77 = snapConfig->OffsetFromSurface;
        fStack_78 = (fStack_70 - fVar69 * fVar68) + auVar76._4_4_ * fVar77;
        uStack_79 = CONCAT44((fStack_74 - fVar69 * fVar67) + auVar76._0_4_ * fVar77,((float)auStack_75._8_4_ - fVar69 * fVar66) + (snapConfig->SurfaceHitNormal).x * fVar77);
        if (cRam_? == '\0') {
          *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
          FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_);
          LOCK();
          *(undefined4 *)(&stack0xffffffffffffffd8 + lVar1) = *(undefined4 *)(&stack0xffffffffffffffd8 + lVar1);
          UNLOCK();
          cRam_? = '\x01';
        }
        pvVar71 = (pTVar65->fields)._._.m_CachedPtr;
        if (pvVar71 != (void *)0x0) {
          pcVar72 = pcRam_?;
          if (pcRam_? == (code *)0x0) {
            *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
            pcVar72 = (code *)FUN_?(&UNK_?);
            if (pcVar72 == (code *)0x0) {
              *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
              uVar63 = func_?(&UNK_?);
              *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
              FUN_?(uVar63,0);
              pcVar72 = (code *)swi(3);
              pOVar73 = (ObjectSurfaceSnap_SnapResult *)(*pcVar72)();
              return pOVar73;
            }
          }
          pcRam_? = pcVar72;
          *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
          (*pcRam_?)(pvVar71);
          auStack_80._0_8_ = *(undefined8 *)snapConfig;
          auStack_80._8_4_ = snapConfig->SurfaceType;
          auStack_80._12_4_ = snapConfig->OffsetFromSurface;
          auStack_80._16_4_ = (snapConfig->SurfaceHitPoint).x;
          auStack_80._20_4_ = (snapConfig->SurfaceHitPoint).y;
          uVar63 = *(undefined8 *)&(snapConfig->SurfaceHitPoint).z;
          uVar81 = (snapConfig->SurfaceHitNormal).y;
          uVar82 = (snapConfig->SurfaceHitNormal).z;
          auStack_83._0_4_ = (snapConfig->SurfaceHitPlane).m_Normal.x;
          auStack_83._4_4_ = (snapConfig->SurfaceHitPlane).m_Normal.y;
          auStack_80._24_4_ = (undefined4)uVar63;
          auStack_80._28_4_ = (undefined4)((ulonglong)uVar63 >> 0x20);
          auStack_83._8_8_ = *(undefined8 *)&(snapConfig->SurfaceHitPlane).m_Normal.z;
          pGStack_84 = snapConfig->SurfaceObject;
          auStack_80._32_4_ = uVar81;
          auStack_80._36_4_ = uVar82;
          if (cRam_? == '\0') {
            *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
            FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_);
            LOCK();
            *(undefined4 *)(&stack0xffffffffffffffd8 + lVar1) = *(undefined4 *)(&stack0xffffffffffffffd8 + lVar1);
            UNLOCK();
            cRam_? = '\x01';
          }
          uStack_85 = 0;
          uStack_86 = 0;
          pvVar71 = (pTVar65->fields)._._.m_CachedPtr;
          if (pvVar71 != (void *)0x0) {
            pcVar72 = pcRam_?;
            if (pcRam_? == (code *)0x0) {
              *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
              pcVar72 = (code *)FUN_?(&UNK_?);
              if (pcVar72 == (code *)0x0) {
                *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
                uVar63 = func_?(&UNK_?);
                *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
                FUN_?(uVar63,0);
                pcVar72 = (code *)swi(3);
                pOVar73 = (ObjectSurfaceSnap_SnapResult *)(*pcVar72)();
                return pOVar73;
              }
            }
            pcRam_? = pcVar72;
            *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
            (*pcRam_?)(pvVar71,&uStack_85);
            uStack_87 = (undefined4)auStack_83._0_8_;
            uStack_88 = SUB84(auStack_83._0_8_,4);
            uStack_89 = (undefined4)auStack_83._8_8_;
            uStack_90 = SUB84(auStack_83._8_8_,4);
            uStack_91 = (undefined4)uStack_85;
            uStack_92 = (undefined4)((ulonglong)uStack_85 >> 0x20);
            __return_storage_ptr__->Success = (char)1;
            *(int3 *)&__return_storage_ptr__->field_0x1 = (int3)(1 >> 8);
            (__return_storage_ptr__->SittingPlane).m_Normal.x = (float)uStack_87;
            (__return_storage_ptr__->SittingPlane).m_Normal.y = (float)uStack_88;
            (__return_storage_ptr__->SittingPlane).m_Normal.z = (float)uStack_89;
            *(ulonglong *)&(__return_storage_ptr__->SittingPlane).m_Distance = CONCAT44(uStack_91,uStack_90);
            (__return_storage_ptr__->SittingPoint).y = (float)uStack_92;
            (__return_storage_ptr__->SittingPoint).z = (float)uStack_86;
            return __return_storage_ptr__;
          }
          *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar65,(MethodInfo *)0x0);
          pcVar72 = (code *)swi(3);
          pOVar73 = (ObjectSurfaceSnap_SnapResult *)(*pcVar72)();
          return pOVar73;
        }
        *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar65,(MethodInfo *)0x0);
        pcVar72 = (code *)swi(3);
        pOVar73 = (ObjectSurfaceSnap_SnapResult *)(*pcVar72)();
        return pOVar73;
      }
    }
    goto code_?;
  }
  uVar93._0_4_ = (snapConfig->SurfaceHitNormal).y;
  uVar93._4_4_ = (snapConfig->SurfaceHitNormal).z;
  uVar94._0_4_ = (snapConfig->SurfaceHitPlane).m_Normal.x;
  uVar94._4_4_ = (snapConfig->SurfaceHitPlane).m_Normal.y;
  uVar63 = *(undefined8 *)&snapConfig->SurfaceHitPoint;
  uVar95 = *(undefined8 *)&(snapConfig->SurfaceHitPoint).z;
  afStackX_8[0] = (float)CONCAT31(afStackX_8[0]._1_3_,snapConfig->SurfaceType == 3);
  *(undefined8 *)(&stack0x00000028 + lVar1) = uVar93;
  *(undefined8 *)(&stack0x00000030 + lVar1) = uVar94;
  *(undefined8 *)((longlong)apMStackX_10 + lVar1 + 8) = uVar63;
  *(undefined8 *)((longlong)apMStackX_10 + lVar1 + 0x10) = uVar95;
  uVar63 = *(undefined8 *)&(snapConfig->SurfaceHitPlane).m_Normal.z;
  pGVar96 = snapConfig->SurfaceObject;
  *(undefined8 *)(&stack0x00000028 + lVar1) = uVar93;
  *(undefined8 *)(&stack0x00000030 + lVar1) = uVar94;
  *(undefined8 *)(&stack0x00000038 + lVar1) = uVar63;
  *(GameObject **)(&stack0x00000040 + lVar1) = pGVar96;
  uVar63 = *(undefined8 *)&(snapConfig->SurfaceHitPoint).z;
  *(undefined8 *)((longlong)apMStackX_10 + lVar1 + 8) = *(undefined8 *)&snapConfig->SurfaceHitPoint;
  *(undefined8 *)((longlong)apMStackX_10 + lVar1 + 0x10) = uVar63;
  pGVar96 = snapConfig->SurfaceObject;
  *(undefined8 *)(&stack0x00000038 + lVar1) = *(undefined8 *)&(snapConfig->SurfaceHitPlane).m_Normal.z;
  *(GameObject **)(&stack0x00000040 + lVar1) = pGVar96;
  if (snapConfig->SurfaceType == 0) {
    uVar97 = 1;
  }
  else {
    uVar63 = *(undefined8 *)&(snapConfig->SurfaceHitPoint).z;
    uVar93 = *(undefined8 *)&(snapConfig->SurfaceHitNormal).y;
    uVar94 = *(undefined8 *)&(snapConfig->SurfaceHitPlane).m_Normal;
    uVar97 = (uint)(snapConfig->SurfaceType == 2);
    *(undefined8 *)((longlong)apMStackX_10 + lVar1 + 8) = *(undefined8 *)&snapConfig->SurfaceHitPoint;
    *(undefined8 *)((longlong)apMStackX_10 + lVar1 + 0x10) = uVar63;
    uVar63 = *(undefined8 *)&(snapConfig->SurfaceHitPlane).m_Normal.z;
    pGVar96 = snapConfig->SurfaceObject;
    *(undefined8 *)(&stack0x00000028 + lVar1) = uVar93;
    *(undefined8 *)(&stack0x00000030 + lVar1) = uVar94;
    *(undefined8 *)(&stack0x00000038 + lVar1) = uVar63;
    *(GameObject **)(&stack0x00000040 + lVar1) = pGVar96;
  }
  *(uint *)(&stack0x00000048 + lVar1) = uVar97;
  uVar63 = *(undefined8 *)&(snapConfig->SurfaceHitPoint).z;
  pGVar96 = snapConfig->SurfaceObject;
  uVar93 = *(undefined8 *)&(snapConfig->SurfaceHitNormal).y;
  uVar94 = *(undefined8 *)&(snapConfig->SurfaceHitPlane).m_Normal;
  surfaceType = snapConfig->SurfaceType;
  *(undefined8 *)((longlong)apMStackX_10 + lVar1 + 8) = *(undefined8 *)&snapConfig->SurfaceHitPoint;
  *(undefined8 *)((longlong)apMStackX_10 + lVar1 + 0x10) = uVar63;
  uVar63 = *(undefined8 *)&(snapConfig->SurfaceHitPlane).m_Normal.z;
  pGVar98 = snapConfig->SurfaceObject;
  *(undefined8 *)(&stack0x00000028 + lVar1) = uVar93;
  *(undefined8 *)(&stack0x00000030 + lVar1) = uVar94;
  uVar93 = *(undefined8 *)snapConfig;
  uVar94 = *(undefined8 *)&snapConfig->SurfaceType;
  *(undefined8 *)(&stack0x00000038 + lVar1) = uVar63;
  *(GameObject **)(&stack0x00000040 + lVar1) = pGVar98;
  uVar63 = *(undefined8 *)&snapConfig->SurfaceHitPoint;
  uVar95 = *(undefined8 *)&(snapConfig->SurfaceHitPoint).z;
  *(undefined8 *)((longlong)afStackX_8 + lVar1) = uVar93;
  *(undefined8 *)((longlong)apMStackX_10 + lVar1) = uVar94;
  uVar93 = *(undefined8 *)&(snapConfig->SurfaceHitNormal).y;
  uVar94 = *(undefined8 *)&(snapConfig->SurfaceHitPlane).m_Normal;
  *(undefined8 *)((longlong)apMStackX_10 + lVar1 + 8) = uVar63;
  *(undefined8 *)((longlong)apMStackX_10 + lVar1 + 0x10) = uVar95;
  *(undefined8 *)(&stack0x00000028 + lVar1) = uVar93;
  *(undefined8 *)(&stack0x00000030 + lVar1) = uVar94;
  *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
  pOVar99 = ObjectSurfaceSnap_CreateSurfaceRaycaster(surfaceType,pGVar96,1,(MethodInfo *)0x0);
  iVar100 = snapConfig->SurfaceType;
  uVar63 = *(undefined8 *)&(snapConfig->SurfaceHitPoint).z;
  uVar93 = *(undefined8 *)&(snapConfig->SurfaceHitNormal).y;
  uVar94 = *(undefined8 *)&(snapConfig->SurfaceHitPlane).m_Normal;
  *(undefined8 *)((longlong)apMStackX_10 + lVar1 + 8) = *(undefined8 *)&snapConfig->SurfaceHitPoint;
  *(undefined8 *)((longlong)apMStackX_10 + lVar1 + 0x10) = uVar63;
  uVar63 = *(undefined8 *)&(snapConfig->SurfaceHitPlane).m_Normal.z;
  pGVar96 = snapConfig->SurfaceObject;
  *(undefined8 *)(&stack0x00000028 + lVar1) = uVar93;
  *(undefined8 *)(&stack0x00000030 + lVar1) = uVar94;
  *(undefined8 *)(&stack0x00000038 + lVar1) = uVar63;
  *(GameObject **)(&stack0x00000040 + lVar1) = pGVar96;
  if (iVar100 != 4) {
    uVar63 = uStack_64;
    if (root == (GameObject *)0x0) goto code_?;
    *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
    pTVar65 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform(root,(MethodInfo *)0x0);
    uVar63 = *(undefined8 *)&(snapConfig->SurfaceHitPoint).z;
    uVar93 = *(undefined8 *)&(snapConfig->SurfaceHitNormal).y;
    uVar94 = *(undefined8 *)&(snapConfig->SurfaceHitPlane).m_Normal;
    *(undefined8 *)((longlong)apMStackX_10 + lVar1 + 8) = *(undefined8 *)&snapConfig->SurfaceHitPoint;
    *(undefined8 *)((longlong)apMStackX_10 + lVar1 + 0x10) = uVar63;
    uVar63 = *(undefined8 *)&(snapConfig->SurfaceHitPlane).m_Normal.z;
    pGVar96 = snapConfig->SurfaceObject;
    *(undefined8 *)(&stack0x00000028 + lVar1) = uVar93;
    *(undefined8 *)(&stack0x00000030 + lVar1) = uVar94;
    *(undefined8 *)(&stack0x00000038 + lVar1) = uVar63;
    *(GameObject **)(&stack0x00000040 + lVar1) = pGVar96;
    if (snapConfig->AlignAxis == 0) {
      if (*(int *)&(TypeInfo__RTG__ObjectBounds->_1).field_0x1c == 0) {
        *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
        FUN_?();
      }
      OStack_101.ObjectTypes = 5;
      OStack_101.NoVolumeSize.x = 0.0;
      OStack_101.NoVolumeSize.y = 0.0;
      OStack_101.NoVolumeSize.z = 0.0;
      *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
      pOVar102 = ObjectBounds::ObjectBounds_CalcHierarchyWorldOBB(&OStack_103,root,&OStack_101,(MethodInfo *)0x0);
      uVar104._0_1_ = pOVar102->_isValid;
      uVar104._1_3_ = *(undefined3 *)&pOVar102->field_0x29;
      fVar105 = (pOVar102->_rotation).z;
      fVar106 = (pOVar102->_rotation).w;
      apMStackX_10[0] = (MethodInfo *)CONCAT44(apMStackX_10[0]._4_4_,uVar104);
      auVar107._0_4_ = (pOVar102->_size).x;
      auVar107._4_4_ = (pOVar102->_size).y;
      auVar107._8_4_ = (pOVar102->_size).z;
      auVar107._12_4_ = (pOVar102->_center).x;
      auVar76 = *(undefined1 (*) [16])&(pOVar102->_center).y;
      fStack_108 = auVar76._0_4_;
      fStack_109 = auVar76._4_4_;
      QStack_110._0_8_ = auVar76._8_8_;
      if ((bool)uVar104 == 0) goto code_?;
      uVar93 = auVar107._0_8_;
      if ((&stack0x00000048)[lVar1] == '\0') {
        if (afStackX_8[0]._0_1_ != '\0') {
          uVar63 = *(undefined8 *)&snapConfig->SurfaceType;
          pGVar96 = snapConfig->SurfaceObject;
          uVar94 = *(undefined8 *)&snapConfig->SurfaceHitPoint;
          uVar95 = *(undefined8 *)&(snapConfig->SurfaceHitPoint).z;
          *(undefined8 *)((longlong)afStackX_8 + lVar1) = *(undefined8 *)snapConfig;
          *(undefined8 *)((longlong)apMStackX_10 + lVar1) = uVar63;
          *(undefined8 *)((longlong)apMStackX_10 + lVar1 + 8) = uVar94;
          *(undefined8 *)((longlong)apMStackX_10 + lVar1 + 0x10) = uVar95;
          uVar63 = *(undefined8 *)&(snapConfig->SurfaceHitPlane).m_Normal;
          *(undefined8 *)(&stack0x00000028 + lVar1) = *(undefined8 *)&(snapConfig->SurfaceHitNormal).y;
          *(undefined8 *)(&stack0x00000030 + lVar1) = uVar63;
          uVar63 = uStack_64;
          if (pGVar96 != (GameObject *)0x0) {
            *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
            pTStack_111 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform(pGVar96,(MethodInfo *)0x0);
            uVar63 = uStack_64;
            if (pTStack_111 != (Transform *)0x0) {
              *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
              pVVar112 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position(&VStack_113,pTStack_111,(MethodInfo *)0x0);
              uVar114._0_4_ = pVVar112->x;
              uVar114._4_4_ = pVVar112->y;
              fVar66 = pVVar112->z;
              uStack_51 = uVar114;
              fStack_52 = fVar66;
              uVar63 = uStack_64;
              if (pTVar65 != (Transform *)0x0) {
                pMVar115 = (MethodInfo *)0x0;
                *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
                pVVar112 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position(&VStack_116,pTVar65,(MethodInfo *)0x0);
                uVar117 = pVVar112->x;
                uVar118 = pVVar112->y;
                VStack_119.z = pVVar112->z - fVar66;
                VStack_119.y = (float)uVar118 - (float)uVar114._4_4_;
                VStack_119.x = (float)uVar117 - (float)(undefined4)uVar114;
                *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
                VStack_120._0_8_ = VStack_119._0_8_;
                VStack_120.z = VStack_119.z;
                pVVar112 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_normalized(&VStack_121,&VStack_119,pMVar115);
                fVar66 = pVVar112->z;
                uVar122._0_4_ = pVVar112->x;
                uVar122._4_4_ = pVVar112->y;
                *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
                afStackX_8[0] = fVar66;
                pVVar112 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_lossyScale(&VStack_123,pTStack_111,(MethodInfo *)0x0);
                uVar124 = pVVar112->x;
                uVar125 = pVVar112->y;
                auStack_75._0_4_ = (float)uVar93;
                auStack_75._4_4_ = SUB84(uVar93,4);
                fVar67 = ABS((float)uVar125);
                if (ABS((float)uVar125) <= ABS((float)uVar124)) {
                  fVar67 = ABS((float)uVar124);
                }
                fVar68 = ABS(pVVar112->z);
                if (ABS(pVVar112->z) <= fVar67) {
                  fVar68 = fVar67;
                }
                pTStack_111 = (Transform *)CONCAT44(pTStack_111._4_4_,auVar107._8_4_);
                *(float *)(&stack0x00000048 + lVar1) = fStack_109;
                QStack_126.x = QStack_110.x;
                QStack_126.y = QStack_110.y;
                fVar68 = fVar68 * 0.5;
                QStack_126.z = fVar105;
                QStack_126.w = fVar106;
                if (*(int *)&(TypeInfo__RTG__BoxMath->_1).field_0x1c == 0) {
                  *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
                  FUN_?();
                  afStackX_8[0] = fVar66;
                  VStack_127.z = *(float *)(&stack0x00000048 + lVar1);
                  auStack_128._40_4_ = uVar104;
                  uVar129 = uVar122 & 0xffffffff;
                }
                else {
                  VStack_127.z = fStack_109;
                  auStack_128._40_4_ = apMStackX_10[0]._0_4_;
                  uVar129 = uVar122;
                }
                QStack_130.x = QStack_126.x;
                QStack_130.y = QStack_126.y;
                QStack_130.z = QStack_126.z;
                QStack_130.w = QStack_126.w;
                VStack_131.x = (float)auStack_75._0_4_;
                VStack_131.y = (float)auStack_75._4_4_;
                VStack_131.z = pTStack_111._0_4_;
                VStack_127.x = (float)auVar107._12_4_;
                VStack_127.y = fStack_108;
                VStack_132.z = -fVar66;
                VStack_132.x = (float)(int)(uVar122 ^ 0x8000000080000000);
                VStack_132.y = (float)(int)((uVar122 ^ 0x8000000080000000) >> 0x20);
                *(undefined8 *)(&stack0xfffffffffffffff8 + lVar1) = 0;
                *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
                BVar133 = BoxMath::BoxMath_GetMostAlignedFace(&VStack_127,&VStack_131,&QStack_130,&VStack_132,*(MethodInfo **)(&stack0xfffffffffffffff8 + lVar1));
                fVar67 = (float)uVar129;
                if (*(int *)&(TypeInfo__RTG__ObjectVertexCollect->_1).field_0x1c == 0) {
                  *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
                  FUN_?();
                  afStackX_8[0] = fVar66;
                  auStack_128._40_4_ = uVar104;
                  fVar67 = (float)(undefined4)uVar122;
                }
                *(undefined8 *)(&stack0xfffffffffffffff8 + lVar1) = 0;
                *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
                pLVar134 = ObjectVertexCollect::ObjectVertexCollect_CollectHierarchyVerts(root,BVar133,0.001,0.01,*(MethodInfo **)(&stack0xfffffffffffffff8 + lVar1));
                fStack_135 = fVar66 * fVar68 + fStack_52;
                fStack_136 = fVar67 * fVar68 + (float)uStack_51;
                fStack_137 = (float)uVar122._4_4_ * fVar68 + uStack_51._4_4_;
                fStack_138 = afStackX_8[0];
                *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
                fStack_139 = fStack_135;
                uStack_140 = uVar122;
                fStack_141 = fStack_135;
                fStack_142 = fStack_136;
                fStack_143 = fStack_137;
                fStack_144 = fStack_136;
                fStack_145 = fStack_137;
                FUN_?(auStack_53,&uStack_140,&fStack_142);
                auStack_128._0_4_ = auVar107._0_4_;
                auStack_128._4_4_ = auVar107._4_4_;
                auStack_128._8_4_ = auVar107._8_4_;
                auStack_128._12_4_ = auVar107._12_4_;
                PStack_146.m_Normal.x = (float)auStack_53._0_4_;
                PStack_146.m_Normal.y = (float)auStack_53._4_4_;
                PStack_146.m_Normal.z = (float)auStack_53._8_4_;
                PStack_146.m_Distance = (float)auStack_53._12_4_;
                auStack_128._16_16_ = auVar76;
                auStack_128._32_4_ = fVar105;
                auStack_128._36_4_ = fVar106;
                *(undefined8 *)(&stack0xfffffffffffffff8 + lVar1) = 0;
                *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
                pVVar112 = ObjectSurfaceSnap_CalculateSitOnSurfaceOffset(&VStack_147,(OBB *)auStack_128,&PStack_146,0.0,*(MethodInfo **)(&stack0xfffffffffffffff8 + lVar1));
                fVar67 = pVVar112->z;
                uVar148._0_4_ = pVVar112->x;
                uVar148._4_4_ = pVVar112->y;
                *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
                VStack_54.z = fVar67;
                pVVar112 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position(&VStack_149,pTVar65,(MethodInfo *)0x0);
                uVar150 = pVVar112->x;
                uVar151 = pVVar112->y;
                VStack_152.z = fVar67 + pVVar112->z;
                VStack_152.y = uVar148._4_4_ + (float)uVar151;
                VStack_152.x = (float)uVar148 + (float)uVar150;
                *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
                UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position(pTVar65,&VStack_152,(MethodInfo *)0x0);
                fStack_153 = fVar67 + fStack_109;
                uStack_154 = CONCAT44(uVar148._4_4_ + fStack_108,(float)auVar107._12_4_ + (float)uVar148);
                *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
                VStack_54._0_8_ = uVar148;
                VStack_155._0_8_ = uVar148;
                VStack_155.z = fVar67;
                Vector3Ex::Vector3Ex_OffsetPoints(pLVar134,&VStack_155,(MethodInfo *)0x0);
                *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
                pVVar112 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position(&VStack_156,pTVar65,(MethodInfo *)0x0);
                uVar157 = pVVar112->x;
                uVar158 = pVVar112->y;
                fVar67 = snapConfig->OffsetFromSurface;
                VStack_159.z = fVar66 * fVar67 + pVVar112->z;
                VStack_159.y = (float)uVar122._4_4_ * fVar67 + (float)uVar158;
                VStack_159.x = (float)(undefined4)uVar122 * fVar67 + (float)uVar157;
                *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
                UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position(pTVar65,&VStack_159,(MethodInfo *)0x0);
                fStack_160 = (float)auStack_53._0_8_;
                fStack_161 = SUB84(auStack_53._0_8_,4);
                fStack_162 = (float)auStack_53._8_8_;
                fStack_163 = SUB84(auStack_53._8_8_,4);
                __return_storage_ptr__->Success = (char)1;
                *(int3 *)&__return_storage_ptr__->field_0x1 = (int3)(1 >> 8);
                (__return_storage_ptr__->SittingPlane).m_Normal.x = fStack_160;
                (__return_storage_ptr__->SittingPlane).m_Normal.y = fStack_161;
                (__return_storage_ptr__->SittingPlane).m_Normal.z = fStack_162;
                (__return_storage_ptr__->SittingPlane).m_Distance = fStack_163;
                (__return_storage_ptr__->SittingPoint).x = fStack_136;
                (__return_storage_ptr__->SittingPoint).y = fStack_137;
                (__return_storage_ptr__->SittingPoint).z = fStack_135;
                return __return_storage_ptr__;
              }
            }
          }
          goto code_?;
        }
        iVar100 = snapConfig->SurfaceType;
        uVar63 = *(undefined8 *)&(snapConfig->SurfaceHitPoint).z;
        fVar67 = (snapConfig->SurfaceHitNormal).y;
        fVar66 = (snapConfig->SurfaceHitNormal).z;
        fVar68 = (snapConfig->SurfaceHitPlane).m_Normal.x;
        fVar69 = (snapConfig->SurfaceHitPlane).m_Normal.y;
        *(undefined8 *)((longlong)apMStackX_10 + lVar1 + 8) = *(undefined8 *)&snapConfig->SurfaceHitPoint;
        *(undefined8 *)((longlong)apMStackX_10 + lVar1 + 0x10) = uVar63;
        uVar63 = *(undefined8 *)&(snapConfig->SurfaceHitPlane).m_Normal.z;
        pGVar96 = snapConfig->SurfaceObject;
        *(float *)(&stack0x00000028 + lVar1) = fVar67;
        *(float *)(&stack0x0000002c + lVar1) = fVar66;
        *(float *)(&stack0x00000030 + lVar1) = fVar68;
        *(float *)(&stack0x00000034 + lVar1) = fVar69;
        *(undefined8 *)(&stack0x00000038 + lVar1) = uVar63;
        *(GameObject **)(&stack0x00000040 + lVar1) = pGVar96;
        if (iVar100 != 1) goto code_?;
        uStack_164 = CONCAT44(fStack_108,auVar107._12_4_);
        uStack_165._0_1_ = snapConfig->AlignAxis;
        uStack_165._1_3_ = *(undefined3 *)&snapConfig->field_0x1;
        uStack_165._4_4_ = snapConfig->AlignmentAxis;
        uStack_166._0_4_ = snapConfig->SurfaceType;
        uStack_166._4_4_ = snapConfig->OffsetFromSurface;
        fVar66 = -fVar66;
        uStack_167 = *(undefined8 *)&(snapConfig->SurfaceHitPlane).m_Normal.z;
        pGStack_168 = snapConfig->SurfaceObject;
        fStack_169 = fStack_109;
        uStack_170 = CONCAT44(fVar67,(snapConfig->SurfaceHitNormal).x) ^ 0x8000000080000000;
        uStack_171 = uStack_170;
        fStack_172 = fVar66;
      }
      else {
        uStack_173 = CONCAT44(fStack_108,auVar107._12_4_);
        fStack_174 = fStack_109;
        if (cRam_? == '\0') {
          *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
          FUN_?(&TypeInfo__UnityEngine__Vector3);
          LOCK();
          *(undefined4 *)(&stack0xffffffffffffffd8 + lVar1) = *(undefined4 *)(&stack0xffffffffffffffd8 + lVar1);
          UNLOCK();
          cRam_? = '\x01';
        }
        pVVar175 = TypeInfo__UnityEngine__Vector3->static_fields;
        uStack_170._0_4_ = (pVVar175->upVector).x;
        uStack_170._4_4_ = (pVVar175->upVector).y;
        fVar66 = -(pVVar175->upVector).z;
        uStack_170 = uStack_170 ^ 0x8000000080000000;
        uStack_176 = uStack_170;
        fStack_177 = fVar66;
      }
      uStack_178 = CONCAT44(fStack_108,auVar107._12_4_);
      fStack_179 = fStack_109;
      uStack_180._0_4_ = (float)uStack_170;
      fVar67 = (float)uStack_180;
      uStack_180._4_4_ = (float)(uStack_170 >> 0x20);
      fVar68 = uStack_180._4_4_;
      fStack_181 = fStack_109;
      *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
      uStack_180 = uStack_170;
      fStack_182 = fVar66;
      fStack_183 = fVar66;
      uStack_184 = uStack_178;
      fVar69 = (float)FUN_?(&uStack_170);
      if (1e-05 < fVar69) {
        fStack_185 = fVar66 / fVar69;
        uStack_186 = CONCAT44(fVar68 / fVar69,fVar67 / fVar69);
        uStack_187 = uStack_186;
        fStack_188 = fStack_185;
      }
      else {
        if (cRam_? == '\0') {
          *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
          FUN_?(&TypeInfo__UnityEngine__Vector3);
          LOCK();
          *(undefined4 *)(&stack0xffffffffffffffd8 + lVar1) = *(undefined4 *)(&stack0xffffffffffffffd8 + lVar1);
          UNLOCK();
          cRam_? = '\x01';
        }
        pVVar175 = TypeInfo__UnityEngine__Vector3->static_fields;
        uStack_186._0_4_ = (pVVar175->zeroVector).x;
        uStack_186._4_4_ = (pVVar175->zeroVector).y;
        fStack_185 = (pVVar175->zeroVector).z;
      }
      uStack_189 = (undefined4)uStack_186;
      uStack_190 = (undefined4)((ulonglong)uStack_186 >> 0x20);
      uVar63 = uStack_64;
      fStack_191 = fStack_185;
      if (pOVar99 == (ObjectSurfaceSnap_SurfaceRaycaster *)0x0) goto code_?;
      uStack_192 = CONCAT44(uStack_189,fStack_181);
      uStack_193 = CONCAT44(fStack_185,uStack_190);
      pIVar194 = (pOVar99->klass->vtable).__unknown.methodPtr;
      uStack_195 = uStack_184;
      pMVar115 = (pOVar99->klass->vtable).__unknown.method;
      *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
      lVar196 = (*pIVar194)(pOVar99,&uStack_195,pMVar115);
      pMVar115 = apMStackX_10[0];
      if (lVar196 != 0) {
        auStack_197 = auVar107;
        PStack_198.m_Normal._0_8_ = *(undefined8 *)(lVar196 + 0x34);
        PStack_198._8_8_ = *(undefined8 *)(lVar196 + 0x3c);
        auStack_199 = auVar76;
        fStack_200 = fVar105;
        fStack_201 = fVar106;
        bStack_202 = (bool)apMStackX_10[0];
        uStack_203 = apMStackX_10[0]._1_3_;
        *(undefined8 *)(&stack0xfffffffffffffff8 + lVar1) = 0;
        *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
        apMStackX_10[0] = pMVar115;
        pVVar112 = ObjectSurfaceSnap_CalculateSitOnSurfaceOffset(&VStack_204,(OBB *)auStack_197,&PStack_198,0.0,*(MethodInfo **)(&stack0xfffffffffffffff8 + lVar1));
        fStack_205 = pVVar112->z;
        uVar206._0_4_ = pVVar112->x;
        uVar206._4_4_ = pVVar112->y;
        afStackX_8[0] = fStack_205;
        uStack_45 = uVar206;
        fStack_46 = fStack_205;
        uVar63 = uStack_64;
        if (pTVar65 != (Transform *)0x0) {
          *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
          pVVar112 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position(&VStack_207,pTVar65,(MethodInfo *)0x0);
          uVar208 = pVVar112->x;
          uVar209 = pVVar112->y;
          fStack_205 = fStack_205 + pVVar112->z;
          uStack_210 = CONCAT44((float)uVar206._4_4_ + (float)uVar209,(float)(undefined4)uVar206 + (float)uVar208);
          if (cRam_? == '\0') {
            *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
            FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_);
            LOCK();
            *(undefined4 *)(&stack0xffffffffffffffd8 + lVar1) = *(undefined4 *)(&stack0xffffffffffffffd8 + lVar1);
            UNLOCK();
            cRam_? = '\x01';
          }
          pvVar71 = (pTVar65->fields)._._.m_CachedPtr;
          if (pvVar71 == (void *)0x0) {
            *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar65,(MethodInfo *)0x0);
            pcVar72 = (code *)swi(3);
            pOVar73 = (ObjectSurfaceSnap_SnapResult *)(*pcVar72)();
            return pOVar73;
          }
          pcVar72 = pcRam_?;
          if (pcRam_? == (code *)0x0) {
            *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
            pcVar72 = (code *)FUN_?(&UNK_?);
            if (pcVar72 == (code *)0x0) {
              *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
              uVar63 = func_?(&UNK_?);
              *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
              FUN_?(uVar63,0);
              pcVar72 = (code *)swi(3);
              pOVar73 = (ObjectSurfaceSnap_SnapResult *)(*pcVar72)();
              return pOVar73;
            }
          }
          pcRam_? = pcVar72;
          *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
          (*pcRam_?)(pvVar71,&uStack_210);
          if ((&stack0x00000048)[lVar1] != '\0') {
            VStack_211.x = (float)auVar107._12_4_ + (float)uStack_45;
            VStack_211.y = fStack_108 + uStack_45._4_4_;
            fStack_212 = fStack_109 + afStackX_8[0];
            uStack_213 = CONCAT44(VStack_211.y,VStack_211.x);
            uVar129 = *(ulonglong *)(lVar196 + 0x28);
            fVar66 = *(float *)(lVar196 + 0x30);
            if (*(int *)&(TypeInfo__RTG__BoxMath->_1).field_0x1c == 0) {
              *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
              FUN_?();
              VStack_211.x = (float)uStack_213;
              VStack_211.y = (float)((ulonglong)uStack_213 >> 0x20);
            }
            uVar129 = uVar129 ^ 0x8000000080000000;
            VStack_214.x = (float)(int)uVar129;
            VStack_214.y = (float)(int)(uVar129 >> 0x20);
            VStack_214.z = -fVar66;
            QStack_215.x = QStack_110.x;
            QStack_215.y = QStack_110.y;
            QStack_215.z = fVar105;
            QStack_215.w = fVar106;
            VStack_216.x = (float)uVar93;
            VStack_216.y = SUB84(uVar93,4);
            VStack_216.z = (float)auVar107._8_4_;
            VStack_211.z = fStack_212;
            *(undefined8 *)(&stack0xfffffffffffffff8 + lVar1) = 0;
            *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
            BVar133 = BoxMath::BoxMath_GetMostAlignedFace(&VStack_211,&VStack_216,&QStack_215,&VStack_214,*(MethodInfo **)(&stack0xfffffffffffffff8 + lVar1));
            if (*(int *)&(TypeInfo__RTG__ObjectVertexCollect->_1).field_0x1c == 0) {
              *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
              FUN_?();
            }
            pMVar115 = (MethodInfo *)(ulonglong)BVar133;
            *(undefined8 *)(&stack0xfffffffffffffff8 + lVar1) = 0;
            *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
            pLVar134 = ObjectVertexCollect::ObjectVertexCollect_CollectHierarchyVerts(root,BVar133,0.001,0.01,*(MethodInfo **)(&stack0xfffffffffffffff8 + lVar1));
            *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
            pVVar112 = TriangPrismShape3D::TriangPrismShape3D_get_ModelUp(&VStack_217,pMVar115);
            uVar218 = pVVar112->x;
            fVar66 = pVVar112->z;
            uVar219 = snapConfig->SurfaceType;
            pGVar96 = snapConfig->SurfaceObject;
            uVar129 = CONCAT44(pVVar112->y,uVar218) ^ 0x8000000080000000;
            *(undefined8 *)((longlong)apMStackX_10 + lVar1 + -0x10) = 0;
            VStack_220.x = (float)(int)uVar129;
            VStack_220.y = (float)(int)(uVar129 >> 0x20);
            VStack_220.z = -fVar66;
            *(undefined4 *)(&stack0xfffffffffffffff8 + lVar1) = uVar219;
            *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
            pVVar112 = ObjectSurfaceSnap_CalculateEmbedVector(&VStack_221,pLVar134,pGVar96,&VStack_220,*(ObjectSurfaceSnap_Type__Enum *)(&stack0xfffffffffffffff8 + lVar1),*(MethodInfo **)((longlong)apMStackX_10 + lVar1 + -0x10));
            uVar222 = pVVar112->x;
            uVar223 = pVVar112->y;
            fVar66 = pVVar112->z;
            *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
            pVVar112 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position(&VStack_224,pTVar65,(MethodInfo *)0x0);
            VStack_221.x = pVVar112->x;
            VStack_221.y = pVVar112->y;
            VStack_225.z = fVar66 + pVVar112->z;
            VStack_225.y = (float)uVar223 + VStack_221.y;
            VStack_225.x = (float)uVar222 + VStack_221.x;
            *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position(pTVar65,&VStack_225,(MethodInfo *)0x0);
          }
          *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
          pVVar112 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position(&VStack_226,pTVar65,(MethodInfo *)0x0);
          VStack_224.x = pVVar112->x;
          VStack_224.y = pVVar112->y;
          fVar66 = snapConfig->OffsetFromSurface;
          fStack_227 = fVar66 * *(float *)(lVar196 + 0x30) + pVVar112->z;
          uStack_228 = CONCAT44(fVar66 * (float)((ulonglong)*(undefined8 *)(lVar196 + 0x28) >> 0x20) + VStack_224.y,fVar66 * (float)*(undefined8 *)(lVar196 + 0x28) + VStack_224.x);
          if (cRam_? == '\0') {
            *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
            FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_);
            LOCK();
            *(undefined4 *)(&stack0xffffffffffffffd8 + lVar1) = *(undefined4 *)(&stack0xffffffffffffffd8 + lVar1);
            UNLOCK();
            cRam_? = '\x01';
          }
          pvVar71 = (pTVar65->fields)._._.m_CachedPtr;
          if (pvVar71 != (void *)0x0) {
            pcVar72 = pcRam_?;
            if (pcRam_? == (code *)0x0) {
              *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
              pcVar72 = (code *)FUN_?(&UNK_?);
              if (pcVar72 == (code *)0x0) {
                *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
                uVar63 = func_?(&UNK_?);
                *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
                FUN_?(uVar63,0);
                pcVar72 = (code *)swi(3);
                pOVar73 = (ObjectSurfaceSnap_SnapResult *)(*pcVar72)();
                return pOVar73;
              }
            }
            pcRam_? = pcVar72;
            *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
            (*pcRam_?)(pvVar71,&uStack_228);
            uVar104 = *(undefined4 *)(lVar196 + 0x20);
            uStack_229 = (undefined4)*(undefined8 *)(lVar196 + 0x18);
            uStack_230 = (undefined4)((ulonglong)*(undefined8 *)(lVar196 + 0x18) >> 0x20);
            uStack_231 = (undefined4)*(undefined8 *)(lVar196 + 0x34);
            uStack_232 = (undefined4)((ulonglong)*(undefined8 *)(lVar196 + 0x34) >> 0x20);
            uStack_233 = (undefined4)*(undefined8 *)(lVar196 + 0x3c);
            uStack_234 = (undefined4)((ulonglong)*(undefined8 *)(lVar196 + 0x3c) >> 0x20);
            __return_storage_ptr__->Success = (char)1;
            *(int3 *)&__return_storage_ptr__->field_0x1 = (int3)(1 >> 8);
            (__return_storage_ptr__->SittingPlane).m_Normal.x = (float)uStack_231;
            (__return_storage_ptr__->SittingPlane).m_Normal.y = (float)uStack_232;
            (__return_storage_ptr__->SittingPlane).m_Normal.z = (float)uStack_233;
            *(ulonglong *)&(__return_storage_ptr__->SittingPlane).m_Distance = CONCAT44(uStack_229,uStack_234);
            (__return_storage_ptr__->SittingPoint).y = (float)uStack_230;
            (__return_storage_ptr__->SittingPoint).z = (float)uVar104;
            return __return_storage_ptr__;
          }
          *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar65,(MethodInfo *)0x0);
          pcVar72 = (code *)swi(3);
          pOVar73 = (ObjectSurfaceSnap_SnapResult *)(*pcVar72)();
          return pOVar73;
        }
        goto code_?;
      }
      if (afStackX_8[0]._0_1_ == '\0') {
        iVar100 = snapConfig->SurfaceType;
        uVar63 = *(undefined8 *)&(snapConfig->SurfaceHitPoint).z;
        uVar235._0_4_ = (snapConfig->SurfaceHitNormal).y;
        uVar235._4_4_ = (snapConfig->SurfaceHitNormal).z;
        uVar236._0_4_ = (snapConfig->SurfaceHitPlane).m_Normal.x;
        uVar236._4_4_ = (snapConfig->SurfaceHitPlane).m_Normal.y;
        *(undefined8 *)((longlong)apMStackX_10 + lVar1 + 8) = *(undefined8 *)&snapConfig->SurfaceHitPoint;
        *(undefined8 *)((longlong)apMStackX_10 + lVar1 + 0x10) = uVar63;
        uVar63 = *(undefined8 *)&(snapConfig->SurfaceHitPlane).m_Normal.z;
        pGVar96 = snapConfig->SurfaceObject;
        *(undefined8 *)(&stack0x00000028 + lVar1) = uVar235;
        *(undefined8 *)(&stack0x00000030 + lVar1) = uVar236;
        *(undefined8 *)(&stack0x00000038 + lVar1) = uVar63;
        *(GameObject **)(&stack0x00000040 + lVar1) = pGVar96;
        if (iVar100 == 1) {
          auStack_80._32_4_ = (undefined4)uVar235;
          auStack_80._36_4_ = uVar235._4_4_;
          auStack_83._0_4_ = (float)uVar236;
          auStack_83._4_4_ = uVar236._4_4_;
          uVar63 = *(undefined8 *)&(snapConfig->SurfaceHitPlane).m_Normal.z;
          bStack_237 = (bool)apMStackX_10[0];
          uStack_238 = apMStackX_10[0]._1_3_;
          auStack_239 = auVar107;
          auStack_83._8_4_ = (float)uVar63;
          auStack_83._12_4_ = SUB84(uVar63,4);
          pGStack_84 = snapConfig->SurfaceObject;
          *(undefined8 *)(&stack0xfffffffffffffff8 + lVar1) = 0;
          auStack_240 = auVar76;
          PStack_241.m_Normal.x = (float)uVar236;
          PStack_241.m_Normal.y = uVar236._4_4_;
          PStack_241.m_Normal.z = (float)uVar63;
          PStack_241.m_Distance = SUB84(uVar63,4);
          fStack_242 = fVar105;
          fStack_243 = fVar106;
          *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
          apMStackX_10[0] = pMVar115;
          pVVar112 = ObjectSurfaceSnap_CalculateSitOnSurfaceOffset(&VStack_244,(OBB *)auStack_239,&PStack_241,0.0,*(MethodInfo **)(&stack0xfffffffffffffff8 + lVar1));
          uVar63 = uStack_64;
          if (pTVar65 != (Transform *)0x0) {
            uVar245 = pVVar112->x;
            uVar246 = pVVar112->y;
            fVar66 = pVVar112->z;
            *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
            pVVar112 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position(&VStack_247,pTVar65,(MethodInfo *)0x0);
            uVar248 = pVVar112->x;
            uVar249 = pVVar112->y;
            VStack_250.z = fVar66 + pVVar112->z;
            VStack_250.y = (float)uVar246 + (float)uVar249;
            VStack_250.x = (float)uVar245 + (float)uVar248;
            *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position(pTVar65,&VStack_250,(MethodInfo *)0x0);
            *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
            pVVar112 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position(&VStack_251,pTVar65,(MethodInfo *)0x0);
            uVar252 = pVVar112->x;
            uVar253 = pVVar112->y;
            fVar66 = snapConfig->OffsetFromSurface;
            VStack_254.z = (snapConfig->SurfaceHitNormal).z * fVar66 + pVVar112->z;
            VStack_254.y = (snapConfig->SurfaceHitNormal).y * fVar66 + (float)uVar253;
            VStack_254.x = (snapConfig->SurfaceHitNormal).x * fVar66 + (float)uVar252;
            *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position(pTVar65,&VStack_254,(MethodInfo *)0x0);
            fVar66 = (snapConfig->SurfaceHitPlane).m_Normal.x;
            fVar67 = (snapConfig->SurfaceHitPlane).m_Normal.y;
            fVar68 = (snapConfig->SurfaceHitPlane).m_Normal.z;
            fVar77 = (snapConfig->SurfaceHitPlane).m_Normal.y;
            fVar255 = (snapConfig->SurfaceHitPlane).m_Normal.z;
            fVar69 = (snapConfig->SurfaceHitPlane).m_Distance;
            fVar256 = fStack_108 * fVar67 + (float)auVar107._12_4_ * fVar66 + fStack_109 * fVar68 + fVar69;
            __return_storage_ptr__->Success = (char)1;
            *(int3 *)&__return_storage_ptr__->field_0x1 = (int3)(1 >> 8);
            (__return_storage_ptr__->SittingPlane).m_Normal.x = fVar66;
            (__return_storage_ptr__->SittingPlane).m_Normal.y = fVar77;
            (__return_storage_ptr__->SittingPlane).m_Normal.z = fVar255;
            (__return_storage_ptr__->SittingPlane).m_Distance = fVar69;
            (__return_storage_ptr__->SittingPoint).x = (float)auVar107._12_4_ - fVar256 * fVar66;
            (__return_storage_ptr__->SittingPoint).y = fStack_108 - fVar256 * fVar67;
            (__return_storage_ptr__->SittingPoint).z = fStack_109 - fVar256 * fVar68;
            return __return_storage_ptr__;
          }
          goto code_?;
        }
      }
    }
    else if ((char)uVar97 == '\0') {
      uVar63 = *(undefined8 *)snapConfig;
      uVar257._0_4_ = (float)snapConfig->SurfaceType;
      uVar257._4_4_ = snapConfig->OffsetFromSurface;
      uVar258._0_4_ = (snapConfig->SurfaceHitPoint).x;
      uVar258._4_4_ = (snapConfig->SurfaceHitPoint).y;
      uVar93 = *(undefined8 *)&(snapConfig->SurfaceHitPoint).z;
      if (afStackX_8[0]._0_1_ != '\0') {
        *(undefined8 *)((longlong)apMStackX_10 + lVar1 + 8) = uVar258;
        *(undefined8 *)((longlong)apMStackX_10 + lVar1 + 0x10) = uVar93;
        pGVar96 = snapConfig->SurfaceObject;
        *(undefined8 *)((longlong)afStackX_8 + lVar1) = uVar63;
        *(undefined8 *)((longlong)apMStackX_10 + lVar1) = uVar257;
        uVar63 = *(undefined8 *)&(snapConfig->SurfaceHitPlane).m_Normal;
        *(undefined8 *)(&stack0x00000028 + lVar1) = *(undefined8 *)&(snapConfig->SurfaceHitNormal).y;
        *(undefined8 *)(&stack0x00000030 + lVar1) = uVar63;
        uVar63 = uStack_64;
        if (pGVar96 != (GameObject *)0x0) {
          *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
          pTVar259 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform(pGVar96,(MethodInfo *)0x0);
          uVar63 = uStack_64;
          if (pTVar259 != (Transform *)0x0) {
            *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
            pVVar112 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position(&VStack_260,pTVar259,(MethodInfo *)0x0);
            VStack_226.x = pVVar112->x;
            VStack_226.y = pVVar112->y;
            fVar66 = pVVar112->z;
            VStack_35._0_8_ = VStack_226._0_8_;
            VStack_35.z = fVar66;
            uVar63 = uStack_64;
            if (pTVar65 != (Transform *)0x0) {
              *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
              pVVar112 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position(&VStack_261,pTVar65,(MethodInfo *)0x0);
              uVar262 = pVVar112->x;
              uVar263 = pVVar112->y;
              fVar69 = (float)uVar262 - VStack_226.x;
              fVar68 = (float)uVar263 - VStack_226.y;
              fVar66 = pVVar112->z - fVar66;
              VStack_119.y = fVar68;
              VStack_119.x = fVar69;
              *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
              VStack_119.z = fVar66;
              VStack_264._0_8_ = VStack_119._0_8_;
              VStack_264.z = fVar66;
              VStack_265._0_8_ = VStack_119._0_8_;
              VStack_265.z = fVar66;
              fVar67 = (float)FUN_?(&VStack_264);
              if (1e-05 < fVar67) {
                fVar66 = fVar66 / fVar67;
                VStack_266.y = fVar68 / fVar67;
                VStack_266.x = fVar69 / fVar67;
                VStack_267._0_8_ = VStack_266._0_8_;
                VStack_267.z = fVar66;
              }
              else {
                if (cRam_? == '\0') {
                  *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
                  FUN_?(&TypeInfo__UnityEngine__Vector3);
                  LOCK();
                  *(undefined4 *)(&stack0xffffffffffffffd8 + lVar1) = *(undefined4 *)(&stack0xffffffffffffffd8 + lVar1);
                  UNLOCK();
                  cRam_? = '\x01';
                }
                pVVar175 = TypeInfo__UnityEngine__Vector3->static_fields;
                VStack_266.x = (pVVar175->zeroVector).x;
                VStack_266.y = (pVVar175->zeroVector).y;
                fVar66 = (pVVar175->zeroVector).z;
              }
              uVar93 = VStack_266._0_8_;
              *(undefined8 *)(&stack0x00000050 + lVar1) = VStack_266._0_8_;
              fVar68 = VStack_266.x;
              fVar69 = VStack_266.y;
              *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
              VStack_266.z = fVar66;
              pVVar112 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_lossyScale(&VStack_268,pTVar259,(MethodInfo *)0x0);
              uVar94 = VStack_266._0_8_;
              fVar269 = pVVar112->x;
              fVar270 = pVVar112->y;
              fVar67 = pVVar112->z;
              alignmentAxis = snapConfig->AlignmentAxis;
              VStack_226.x = fVar269;
              VStack_226.y = fVar270;
              uVar63 = *(undefined8 *)&(snapConfig->SurfaceHitPoint).z;
              VStack_271.z = fVar66;
              fVar77 = ABS(fVar270);
              if (ABS(fVar270) <= ABS(fVar269)) {
                fVar77 = ABS(fVar269);
              }
              VStack_266.x = (float)uVar93;
              VStack_266.y = SUB84(uVar93,4);
              VStack_271.x = VStack_266.x;
              VStack_271.y = VStack_266.y;
              *(undefined8 *)((longlong)apMStackX_10 + lVar1 + 8) = *(undefined8 *)&snapConfig->SurfaceHitPoint;
              *(undefined8 *)((longlong)apMStackX_10 + lVar1 + 0x10) = uVar63;
              uVar63 = *(undefined8 *)&(snapConfig->SurfaceHitPlane).m_Normal.z;
              pGVar96 = snapConfig->SurfaceObject;
              *(undefined8 *)(&stack0xfffffffffffffff8 + lVar1) = 0;
              fVar255 = ABS(fVar67);
              if (ABS(fVar67) <= fVar77) {
                fVar255 = fVar77;
              }
              *(undefined8 *)(&stack0x00000038 + lVar1) = uVar63;
              *(GameObject **)(&stack0x00000040 + lVar1) = pGVar96;
              uVar63 = *(undefined8 *)&(snapConfig->SurfaceHitPlane).m_Normal;
              *(undefined8 *)(&stack0x00000028 + lVar1) = *(undefined8 *)&(snapConfig->SurfaceHitNormal).y;
              *(undefined8 *)(&stack0x00000030 + lVar1) = uVar63;
              fVar255 = fVar255 * 0.5;
              *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
              VStack_266._0_8_ = uVar94;
              TransformEx::TransformEx_Align(&QStack_272,pTVar65,&VStack_271,alignmentAxis,*(MethodInfo **)(&stack0xfffffffffffffff8 + lVar1));
              if (*(int *)&(TypeInfo__RTG__ObjectBounds->_1).field_0x1c == 0) {
                *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
                FUN_?();
                fVar68 = (float)*(undefined8 *)(&stack0x00000050 + lVar1);
                fVar69 = (float)((ulonglong)*(undefined8 *)(&stack0x00000050 + lVar1) >> 0x20);
              }
              OStack_273.ObjectTypes = 5;
              OStack_273.NoVolumeSize.x = 0.0;
              OStack_273.NoVolumeSize.y = 0.0;
              OStack_273.NoVolumeSize.z = 0.0;
              *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
              pOVar102 = ObjectBounds::ObjectBounds_CalcHierarchyWorldOBB(&OStack_274,root,&OStack_273,(MethodInfo *)0x0);
              afStackX_8[0] = *(float *)&pOVar102->_isValid;
              fVar275 = (pOVar102->_rotation).z;
              fVar276 = (pOVar102->_rotation).w;
              uStack_38._0_4_ = fVar275;
              uStack_38._4_4_ = fVar276;
              fStack_42 = afStackX_8[0];
              auVar76._0_4_ = (pOVar102->_size).x;
              auVar76._4_4_ = (pOVar102->_size).y;
              auVar76._8_4_ = (pOVar102->_size).z;
              auVar76._12_4_ = (pOVar102->_center).x;
              fStack_39 = (pOVar102->_center).y;
              VStack_277.z = (pOVar102->_center).z;
              uStack_41._0_4_ = (pOVar102->_rotation).x;
              uStack_41._4_4_ = (pOVar102->_rotation).y;
              VStack_36._0_8_ = auVar76._0_8_;
              uVar63 = VStack_36._0_8_;
              VStack_36.z = (float)auVar76._8_4_;
              fStack_37 = (float)auVar76._12_4_;
              fStack_40 = VStack_277.z;
              if (SUB41(afStackX_8[0],0) != 0) {
                auStack_75._0_4_ = fStack_37;
                auStack_75._4_4_ = fStack_39;
                QStack_126.x = (float)uStack_41;
                QStack_126.y = uStack_41._4_4_;
                QStack_126.z = fVar275;
                QStack_126.w = fVar276;
                apMStackX_10[0] = (MethodInfo *)CONCAT44(apMStackX_10[0]._4_4_,VStack_36.z);
                fVar67 = *(float *)(&stack0x00000050 + lVar1);
                fVar77 = *(float *)(&stack0x00000054 + lVar1);
                fVar256 = fVar77;
                VStack_278.z = VStack_36.z;
                fVar279 = fVar67;
                if (*(int *)&(TypeInfo__RTG__BoxMath->_1).field_0x1c == 0) {
                  *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
                  FUN_?();
                  fVar68 = *(float *)(&stack0x00000050 + lVar1);
                  fVar256 = *(float *)(&stack0x00000054 + lVar1);
                  afStackX_8[0] = fStack_42;
                  auVar76._8_4_ = VStack_36.z;
                  auVar76._0_4_ = VStack_36.x;
                  auVar76._4_4_ = VStack_36.y;
                  auVar76._12_4_ = fStack_37;
                  *(undefined8 *)(&stack0x00000050 + lVar1) = *(undefined8 *)(&stack0x00000050 + lVar1);
                  fVar69 = fVar256;
                  VStack_278.z = apMStackX_10[0]._0_4_;
                  fVar279 = fVar68;
                }
                fVar280 = uStack_41._4_4_;
                fVar281 = (float)uStack_41;
                fVar282 = fStack_40;
                fVar283 = fStack_39;
                uVar93 = VStack_36._0_8_;
                QStack_284.x = QStack_126.x;
                QStack_284.y = QStack_126.y;
                QStack_284.z = QStack_126.z;
                QStack_284.w = QStack_126.w;
                VStack_36.x = (float)uVar63;
                VStack_36.y = SUB84(uVar63,4);
                VStack_278.x = VStack_36.x;
                VStack_278.y = VStack_36.y;
                VStack_277.x = (float)auStack_75._0_4_;
                VStack_277.y = (float)auStack_75._4_4_;
                VStack_285.z = -fVar66;
                uVar129 = CONCAT44(fVar77,fVar67) ^ 0x8000000080000000;
                VStack_285.x = (float)(int)uVar129;
                VStack_285.y = (float)(int)(uVar129 >> 0x20);
                *(undefined8 *)(&stack0xfffffffffffffff8 + lVar1) = 0;
                *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
                afStackX_8[0] = fStack_42;
                VStack_36._0_8_ = uVar93;
                BVar133 = BoxMath::BoxMath_GetMostAlignedFace(&VStack_277,&VStack_278,&QStack_284,&VStack_285,*(MethodInfo **)(&stack0xfffffffffffffff8 + lVar1));
                if (*(int *)&(TypeInfo__RTG__ObjectVertexCollect->_1).field_0x1c == 0) {
                  *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
                  FUN_?();
                  fVar68 = *(float *)(&stack0x00000050 + lVar1);
                  fVar256 = *(float *)(&stack0x00000054 + lVar1);
                  afStackX_8[0] = fStack_42;
                  auVar76._8_4_ = VStack_36.z;
                  auVar76._0_4_ = VStack_36.x;
                  auVar76._4_4_ = VStack_36.y;
                  auVar76._12_4_ = fStack_37;
                  *(undefined8 *)(&stack0x00000050 + lVar1) = *(undefined8 *)(&stack0x00000050 + lVar1);
                  fVar283 = fStack_39;
                  fVar282 = fStack_40;
                  fVar281 = (float)uStack_41;
                  fVar280 = uStack_41._4_4_;
                  fVar69 = fVar256;
                  fVar279 = fVar68;
                }
                *(undefined8 *)(&stack0xfffffffffffffff8 + lVar1) = 0;
                *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
                pLVar134 = ObjectVertexCollect::ObjectVertexCollect_CollectHierarchyVerts(root,BVar133,0.001,0.01,*(MethodInfo **)(&stack0xfffffffffffffff8 + lVar1));
                fStack_286 = fVar66 * fVar255 + VStack_35.z;
                uStack_287 = CONCAT44(fVar256 * fVar255 + VStack_35.y,fVar279 * fVar255 + VStack_35.x);
                uStack_288 = CONCAT44(fVar69,fVar68);
                *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
                uStack_289 = uStack_287;
                fStack_290 = fStack_286;
                fStack_291 = fVar66;
                uStack_292 = uStack_287;
                fStack_293 = fStack_286;
                FUN_?(auStack_43,&uStack_288,&uStack_289);
                auStack_294 = auVar76;
                PStack_295.m_Normal.x = (float)auStack_43._0_4_;
                PStack_295.m_Normal.y = (float)auStack_43._4_4_;
                PStack_295.m_Normal.z = (float)auStack_43._8_4_;
                PStack_295.m_Distance = (float)auStack_43._12_4_;
                fStack_296 = (float)uStack_38;
                fStack_297 = uStack_38._4_4_;
                fStack_298 = fVar283;
                fStack_299 = fVar282;
                fStack_300 = fVar281;
                fStack_301 = fVar280;
                fStack_302 = afStackX_8[0];
                *(undefined8 *)(&stack0xfffffffffffffff8 + lVar1) = 0;
                *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
                pVVar112 = ObjectSurfaceSnap_CalculateSitOnSurfaceOffset(&VStack_303,(OBB *)auStack_294,&PStack_295,0.0,*(MethodInfo **)(&stack0xfffffffffffffff8 + lVar1));
                fVar67 = pVVar112->z;
                uVar304._0_4_ = pVVar112->x;
                uVar304._4_4_ = pVVar112->y;
                *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
                VStack_44.z = fVar67;
                pVVar112 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position(&VStack_305,pTVar65,(MethodInfo *)0x0);
                uVar306 = pVVar112->x;
                uVar307 = pVVar112->y;
                VStack_308.z = fVar67 + pVVar112->z;
                VStack_308.y = uVar304._4_4_ + (float)uVar307;
                VStack_308.x = (float)uVar304 + (float)uVar306;
                *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
                UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position(pTVar65,&VStack_308,(MethodInfo *)0x0);
                fStack_37 = auVar76._12_4_ + (float)uVar304;
                fStack_39 = fVar283 + uVar304._4_4_;
                fStack_40 = fVar282 + fVar67;
                uStack_309 = CONCAT44(fStack_39,fStack_37);
                *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
                VStack_44._0_8_ = uVar304;
                VStack_310._0_8_ = uVar304;
                VStack_310.z = fVar67;
                fStack_311 = fStack_40;
                Vector3Ex::Vector3Ex_OffsetPoints(pLVar134,&VStack_310,(MethodInfo *)0x0);
                *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
                pVVar112 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position(&VStack_312,pTVar65,(MethodInfo *)0x0);
                VStack_305.x = pVVar112->x;
                VStack_305.y = pVVar112->y;
                fVar67 = snapConfig->OffsetFromSurface;
                fStack_313 = fVar67 * fVar66 + pVVar112->z;
                uStack_314 = CONCAT44(fVar67 * *(float *)(&stack0x00000054 + lVar1) + VStack_305.y,fVar67 * *(float *)(&stack0x00000050 + lVar1) + VStack_305.x);
                if (cRam_? == '\0') {
                  *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
                  FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_);
                  LOCK();
                  *(undefined4 *)(&stack0xffffffffffffffd8 + lVar1) = *(undefined4 *)(&stack0xffffffffffffffd8 + lVar1);
                  UNLOCK();
                  cRam_? = '\x01';
                }
                pvVar71 = (pTVar65->fields)._._.m_CachedPtr;
                if (pvVar71 != (void *)0x0) {
                  pcVar72 = pcRam_?;
                  if (pcRam_? == (code *)0x0) {
                    *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
                    pcVar72 = (code *)FUN_?(&UNK_?);
                    if (pcVar72 == (code *)0x0) {
                      *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
                      uVar63 = func_?(&UNK_?);
                      *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
                      FUN_?(uVar63,0);
                      pcVar72 = (code *)swi(3);
                      pOVar73 = (ObjectSurfaceSnap_SnapResult *)(*pcVar72)();
                      return pOVar73;
                    }
                  }
                  pcRam_? = pcVar72;
                  *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
                  (*pcRam_?)(pvVar71,&uStack_314);
                  fStack_315 = (float)auStack_43._0_8_;
                  fStack_316 = SUB84(auStack_43._0_8_,4);
                  fStack_317 = (float)auStack_43._8_8_;
                  fStack_318 = SUB84(auStack_43._8_8_,4);
                  __return_storage_ptr__->Success = (char)1;
                  *(int3 *)&__return_storage_ptr__->field_0x1 = (int3)(1 >> 8);
                  (__return_storage_ptr__->SittingPlane).m_Normal.x = fStack_315;
                  (__return_storage_ptr__->SittingPlane).m_Normal.y = fStack_316;
                  (__return_storage_ptr__->SittingPlane).m_Normal.z = fStack_317;
                  (__return_storage_ptr__->SittingPlane).m_Distance = fStack_318;
                  (__return_storage_ptr__->SittingPoint).x = (float)uStack_287;
                  (__return_storage_ptr__->SittingPoint).y = uStack_287._4_4_;
                  (__return_storage_ptr__->SittingPoint).z = fStack_286;
                  return __return_storage_ptr__;
                }
                *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
                UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar65,(MethodInfo *)0x0);
                pcVar72 = (code *)swi(3);
                pOVar73 = (ObjectSurfaceSnap_SnapResult *)(*pcVar72)();
                return pOVar73;
              }
              goto code_?;
            }
          }
        }
        goto code_?;
      }
      auStack_80._32_4_ = (snapConfig->SurfaceHitNormal).y;
      auStack_80._36_4_ = (snapConfig->SurfaceHitNormal).z;
      pPVar319 = &snapConfig->SurfaceHitPlane;
      fVar66 = (pPVar319->m_Normal).x;
      fVar67 = (snapConfig->SurfaceHitPlane).m_Normal.y;
      alignmentAxis_00 = snapConfig->AlignmentAxis;
      auStack_80._0_4_ = (float)uVar63;
      auStack_80._4_4_ = SUB84(uVar63,4);
      auStack_80._8_4_ = (float)uVar257;
      auStack_80._12_4_ = uVar257._4_4_;
      auStack_80._16_4_ = (float)uVar258;
      auStack_80._20_4_ = uVar258._4_4_;
      auStack_80._24_4_ = (undefined4)uVar93;
      auStack_80._28_4_ = (undefined4)((ulonglong)uVar93 >> 0x20);
      auStack_83._8_8_ = *(undefined8 *)&(snapConfig->SurfaceHitPlane).m_Normal.z;
      pGStack_84 = snapConfig->SurfaceObject;
      uVar63 = *(undefined8 *)&snapConfig->SurfaceHitPoint;
      uVar93 = *(undefined8 *)&(snapConfig->SurfaceHitPoint).z;
      *(undefined8 *)(&stack0xfffffffffffffff8 + lVar1) = 0;
      auStack_83._0_4_ = (pPVar319->m_Normal).x;
      auStack_83._4_4_ = (pPVar319->m_Normal).y;
      *(undefined8 *)((longlong)apMStackX_10 + lVar1 + 8) = uVar63;
      *(undefined8 *)((longlong)apMStackX_10 + lVar1 + 0x10) = uVar93;
      uVar63 = *(undefined8 *)&(snapConfig->SurfaceHitPlane).m_Normal.z;
      pGVar96 = snapConfig->SurfaceObject;
      *(undefined4 *)(&stack0x00000028 + lVar1) = auStack_80._32_4_;
      *(undefined4 *)(&stack0x0000002c + lVar1) = auStack_80._36_4_;
      *(float *)(&stack0x00000030 + lVar1) = fVar66;
      *(float *)(&stack0x00000034 + lVar1) = fVar67;
      *(undefined8 *)(&stack0x00000038 + lVar1) = uVar63;
      *(GameObject **)(&stack0x00000040 + lVar1) = pGVar96;
      VStack_320.x = (float)auStack_80._28_4_;
      VStack_320.y = (float)auStack_80._32_4_;
      VStack_320.z = (float)auStack_80._36_4_;
      *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
      TransformEx::TransformEx_Align(&QStack_321,pTVar65,&VStack_320,alignmentAxis_00,*(MethodInfo **)(&stack0xfffffffffffffff8 + lVar1));
      if (*(int *)&(TypeInfo__RTG__ObjectBounds->_1).field_0x1c == 0) {
        *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
        FUN_?();
      }
      OStack_322.ObjectTypes = 5;
      OStack_322.NoVolumeSize.x = 0.0;
      OStack_322.NoVolumeSize.y = 0.0;
      OStack_322.NoVolumeSize.z = 0.0;
      *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
      pOVar102 = ObjectBounds::ObjectBounds_CalcHierarchyWorldOBB(&OStack_323,root,&OStack_322,(MethodInfo *)0x0);
      fVar324 = (pOVar102->_size).x;
      fVar325 = (pOVar102->_size).y;
      uVar63 = *(undefined8 *)&(pOVar102->_size).z;
      VStack_19.z = (float)uVar63;
      auVar76 = *(undefined1 (*) [16])&(pOVar102->_center).y;
      VStack_326.z = auVar76._4_4_;
      fVar327 = (pOVar102->_rotation).z;
      fVar328 = (pOVar102->_rotation).w;
      QStack_21.z = fVar327;
      QStack_21.w = fVar328;
      uStack_24 = *(undefined4 *)&pOVar102->_isValid;
      VStack_19.x = fVar324;
      VStack_19.y = fVar325;
      fStack_20 = (float)((ulonglong)uVar63 >> 0x20);
      VStack_326.x = fStack_20;
      fStack_22 = auVar76._0_4_;
      VStack_326.y = fStack_22;
      QStack_21._0_8_ = auVar76._8_8_;
      uVar63 = QStack_21._0_8_;
      if ((char)*(undefined4 *)&pOVar102->_isValid == '\0') goto code_?;
      fVar66 = (snapConfig->SurfaceHitNormal).z;
      uStack_165._0_1_ = snapConfig->AlignAxis;
      uStack_165._1_3_ = *(undefined3 *)&snapConfig->field_0x1;
      uStack_165._4_4_ = snapConfig->AlignmentAxis;
      uStack_166._0_4_ = snapConfig->SurfaceType;
      uStack_166._4_4_ = snapConfig->OffsetFromSurface;
      uStack_167 = *(undefined8 *)&(snapConfig->SurfaceHitPlane).m_Normal.z;
      pGStack_168 = snapConfig->SurfaceObject;
      afStackX_8[0] = VStack_19.z;
      uVar329._0_4_ = (snapConfig->SurfaceHitNormal).x;
      uVar329._4_4_ = (snapConfig->SurfaceHitNormal).y;
      fStack_23 = VStack_326.z;
      if (*(int *)&(TypeInfo__RTG__BoxMath->_1).field_0x1c == 0) {
        *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
        FUN_?();
      }
      uVar93 = QStack_21._0_8_;
      VStack_330.x = (float)(int)(uVar329 ^ 0x8000000080000000);
      VStack_330.y = (float)(int)((uVar329 ^ 0x8000000080000000) >> 0x20);
      VStack_330.z = -fVar66;
      QStack_21.x = (float)uVar63;
      QStack_21.y = SUB84(uVar63,4);
      QStack_331.x = QStack_21.x;
      QStack_331.y = QStack_21.y;
      QStack_331.z = fVar327;
      QStack_331.w = fVar328;
      VStack_332.x = fVar324;
      VStack_332.y = fVar325;
      VStack_332.z = afStackX_8[0];
      *(undefined8 *)(&stack0xfffffffffffffff8 + lVar1) = 0;
      *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
      QStack_21._0_8_ = uVar93;
      BVar133 = BoxMath::BoxMath_GetMostAlignedFace(&VStack_326,&VStack_332,&QStack_331,&VStack_330,*(MethodInfo **)(&stack0xfffffffffffffff8 + lVar1));
      if (*(int *)&(TypeInfo__RTG__ObjectVertexCollect->_1).field_0x1c == 0) {
        *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
        FUN_?();
      }
      *(undefined8 *)(&stack0xfffffffffffffff8 + lVar1) = 0;
      *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
      pLVar134 = ObjectVertexCollect::ObjectVertexCollect_CollectHierarchyVerts(root,BVar133,0.001,0.01,*(MethodInfo **)(&stack0xfffffffffffffff8 + lVar1));
      uVar63 = uStack_64;
      if (pLVar134 == (List_1_UnityEngine_Vector3_ *)0x0) goto code_?;
      if ((pLVar134->fields)._size != 0) {
        *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
        pVVar112 = Vector3Ex::Vector3Ex_GetPointCloudCenter(&VStack_333,(IEnumerable_1_UnityEngine_Vector3_ *)pLVar134,(MethodInfo *)0x0);
        uVar63 = *(undefined8 *)&(snapConfig->SurfaceHitPoint).z;
        pGVar96 = snapConfig->SurfaceObject;
        uVar334 = pVVar112->x;
        uVar335 = pVVar112->y;
        fVar66 = pVVar112->z;
        uVar93 = *(undefined8 *)snapConfig;
        uVar94 = *(undefined8 *)&snapConfig->SurfaceType;
        *(undefined8 *)((longlong)apMStackX_10 + lVar1 + 8) = *(undefined8 *)&snapConfig->SurfaceHitPoint;
        *(undefined8 *)((longlong)apMStackX_10 + lVar1 + 0x10) = uVar63;
        *(undefined8 *)((longlong)afStackX_8 + lVar1) = uVar93;
        *(undefined8 *)((longlong)apMStackX_10 + lVar1) = uVar94;
        uVar63 = *(undefined8 *)&(snapConfig->SurfaceHitPlane).m_Normal;
        *(undefined8 *)(&stack0x00000028 + lVar1) = *(undefined8 *)&(snapConfig->SurfaceHitNormal).y;
        *(undefined8 *)(&stack0x00000030 + lVar1) = uVar63;
        if (*(int *)&(TypeInfo__RTG__ObjectBounds->_1).field_0x1c == 0) {
          *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
          FUN_?();
        }
        if (cRam_? == '\0') {
          *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
          FUN_?(&TypeInfo__RTG__ObjectBounds);
          LOCK();
          *(undefined4 *)(&stack0xffffffffffffffd8 + lVar1) = *(undefined4 *)(&stack0xffffffffffffffd8 + lVar1);
          UNLOCK();
          cRam_? = '\x01';
        }
        uStack_336._0_4_ = 0.0;
        uStack_336._4_4_ = 0.0;
        auStack_337 = ZEXT816(0);
        uStack_338._0_1_ = 0;
        uStack_338._1_3_ = 0;
        if (*(int *)&(TypeInfo__RTG__ObjectBounds->_1).field_0x1c == 0) {
          *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
          FUN_?();
        }
        pMVar115 = (MethodInfo *)0x0;
        *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
        pAVar339 = ObjectBounds::ObjectBounds_CalcMeshModelAABB(&AStack_340,pGVar96,(MethodInfo *)0x0);
        uStack_338._0_1_ = pAVar339->_isValid;
        uStack_338._1_3_ = *(undefined3 *)&pAVar339->field_0x19;
        uStack_336._0_4_ = (pAVar339->_center).y;
        uStack_336._4_4_ = (pAVar339->_center).z;
        auStack_337._0_4_ = (pAVar339->_size).x;
        auStack_337._4_4_ = (pAVar339->_size).y;
        auStack_337._8_4_ = (pAVar339->_size).z;
        auStack_337._12_4_ = (pAVar339->_center).x;
        if ((bool)uStack_338 != 0) {
          uVar63 = uStack_64;
          if (pGVar96 == (GameObject *)0x0) goto code_?;
          *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
          pTVar259 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform(pGVar96,(MethodInfo *)0x0);
          uVar63 = uStack_64;
          if (pTVar259 == (Transform *)0x0) goto code_?;
          *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
          pMVar341 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localToWorldMatrix(aMStack_342,pTVar259,(MethodInfo *)0x0);
          pMVar115 = (MethodInfo *)0x0;
          MStack_343.m00 = pMVar341->m00;
          MStack_343.m10 = pMVar341->m10;
          MStack_343.m20 = pMVar341->m20;
          MStack_343.m30 = pMVar341->m30;
          MStack_343.m01 = pMVar341->m01;
          MStack_343.m11 = pMVar341->m11;
          MStack_343.m21 = pMVar341->m21;
          MStack_343.m31 = pMVar341->m31;
          MStack_343.m02 = pMVar341->m02;
          MStack_343.m12 = pMVar341->m12;
          MStack_343.m22 = pMVar341->m22;
          MStack_343.m32 = pMVar341->m32;
          MStack_343.m03 = pMVar341->m03;
          MStack_343.m13 = pMVar341->m13;
          MStack_343.m23 = pMVar341->m23;
          MStack_343.m33 = pMVar341->m33;
          *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
          AABB::AABB_Transform((AABB *)auStack_337,&MStack_343,(MethodInfo *)0x0);
        }
        VStack_119.z = auStack_337._8_4_ * 0.5;
        fVar67 = (snapConfig->SurfaceHitNormal).y;
        fVar68 = (snapConfig->SurfaceHitNormal).z;
        VStack_119.y = auStack_337._4_4_ * 0.5;
        VStack_119.x = auStack_337._0_4_ * 0.5;
        uStack_165._0_1_ = snapConfig->AlignAxis;
        uStack_165._1_3_ = *(undefined3 *)&snapConfig->field_0x1;
        uStack_165._4_4_ = snapConfig->AlignmentAxis;
        uStack_166._0_4_ = snapConfig->SurfaceType;
        uStack_166._4_4_ = snapConfig->OffsetFromSurface;
        uStack_167 = *(undefined8 *)&(snapConfig->SurfaceHitPlane).m_Normal.z;
        pGStack_168 = snapConfig->SurfaceObject;
        *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
        VStack_344._0_8_ = VStack_119._0_8_;
        VStack_344.z = VStack_119.z;
        auStack_345 = auStack_337;
        uStack_346 = uStack_336;
        uStack_347 = uStack_338;
        fVar69 = (float)FUN_?(&VStack_119);
        fVar77 = fVar69 * (snapConfig->SurfaceHitNormal).x + (float)uVar334;
        fVar67 = fVar69 * fVar67 + (float)uVar335;
        fVar68 = fVar69 * fVar68 + fVar66;
        uStack_348 = CONCAT44(fVar67,fVar77);
        uStack_165._0_1_ = snapConfig->AlignAxis;
        uStack_165._1_3_ = *(undefined3 *)&snapConfig->field_0x1;
        uStack_165._4_4_ = snapConfig->AlignmentAxis;
        uStack_166._0_4_ = snapConfig->SurfaceType;
        uStack_166._4_4_ = snapConfig->OffsetFromSurface;
        VStack_349.z = -(snapConfig->SurfaceHitNormal).z;
        uStack_167 = *(undefined8 *)&(snapConfig->SurfaceHitPlane).m_Normal.z;
        pGStack_168 = snapConfig->SurfaceObject;
        VStack_349.x = (snapConfig->SurfaceHitNormal).x;
        VStack_349.y = (snapConfig->SurfaceHitNormal).y;
        VStack_349._0_8_ = VStack_349._0_8_ ^ 0x8000000080000000;
        uStack_25 = CONCAT44(fVar67,fVar77);
        *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
        fStack_26 = fVar68;
        fStack_350 = fVar68;
        uStack_351 = uStack_348;
        fStack_352 = fVar68;
        uStack_353 = VStack_349._0_8_;
        fStack_354 = VStack_349.z;
        pVVar112 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_normalized(&VStack_355,&VStack_349,pMVar115);
        uVar356 = pVVar112->x;
        uVar357 = pVVar112->y;
        fStack_29 = pVVar112->z;
        uVar63 = uStack_64;
        uStack_27 = uVar356;
        uStack_28 = uVar357;
        if (pOVar99 != (ObjectSurfaceSnap_SurfaceRaycaster *)0x0) {
          uStack_358 = CONCAT44(fStack_29,uVar357);
          QStack_126.y = fVar67;
          QStack_126.x = fVar77;
          pIVar194 = (pOVar99->klass->vtable).__unknown.methodPtr;
          uStack_359 = CONCAT44(uVar356,fVar68);
          uStack_360._0_4_ = fVar77;
          uStack_360._4_4_ = fVar67;
          pMVar115 = (pOVar99->klass->vtable).__unknown.method;
          *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
          QStack_126.z = fVar68;
          QStack_126.w = (float)uVar356;
          uStack_361 = uVar357;
          fStack_362 = fStack_29;
          lVar196 = (*pIVar194)(pOVar99,&uStack_360,pMVar115);
          alignmentAxis_01 = snapConfig->AlignmentAxis;
          *(undefined8 *)(&stack0xfffffffffffffff8 + lVar1) = 0;
          if (lVar196 == 0) {
            uVar363._0_4_ = (snapConfig->SurfaceHitPoint).x;
            uVar363._4_4_ = (snapConfig->SurfaceHitPoint).y;
            uVar93 = *(undefined8 *)&(snapConfig->SurfaceHitPoint).z;
            uVar63 = *(undefined8 *)&snapConfig->SurfaceType;
            fVar67 = (snapConfig->SurfaceHitNormal).y;
            VStack_364.z = (snapConfig->SurfaceHitNormal).z;
            fVar68 = (snapConfig->SurfaceHitPlane).m_Normal.x;
            fVar69 = (snapConfig->SurfaceHitPlane).m_Normal.y;
            *(undefined8 *)((longlong)afStackX_8 + lVar1) = *(undefined8 *)snapConfig;
            *(undefined8 *)((longlong)apMStackX_10 + lVar1) = uVar63;
            uVar63 = *(undefined8 *)&(snapConfig->SurfaceHitPlane).m_Normal.z;
            pGVar96 = snapConfig->SurfaceObject;
            *(undefined8 *)((longlong)apMStackX_10 + lVar1 + 8) = uVar363;
            *(undefined8 *)((longlong)apMStackX_10 + lVar1 + 0x10) = uVar93;
            *(undefined8 *)(&stack0x00000038 + lVar1) = uVar63;
            *(GameObject **)(&stack0x00000040 + lVar1) = pGVar96;
            uVar94 = *(undefined8 *)&(snapConfig->SurfaceHitPlane).m_Normal.z;
            pGVar96 = snapConfig->SurfaceObject;
            *(float *)(&stack0x00000028 + lVar1) = fVar67;
            *(float *)(&stack0x0000002c + lVar1) = VStack_364.z;
            *(float *)(&stack0x00000030 + lVar1) = fVar68;
            *(float *)(&stack0x00000034 + lVar1) = fVar69;
            uVar63 = *(undefined8 *)((longlong)apMStackX_10 + lVar1 + 0x14);
            *(undefined8 *)((longlong)apMStackX_10 + lVar1 + 8) = uVar363;
            *(undefined8 *)((longlong)apMStackX_10 + lVar1 + 0x10) = uVar93;
            uVar93 = *(undefined8 *)&(snapConfig->SurfaceHitNormal).y;
            uVar95 = *(undefined8 *)&(snapConfig->SurfaceHitPlane).m_Normal;
            *(undefined8 *)(&stack0x00000038 + lVar1) = uVar94;
            *(GameObject **)(&stack0x00000040 + lVar1) = pGVar96;
            VStack_364.x = (float)uVar63;
            VStack_364.y = SUB84(uVar63,4);
            *(undefined8 *)(&stack0x00000028 + lVar1) = uVar93;
            *(undefined8 *)(&stack0x00000030 + lVar1) = uVar95;
            VStack_365.x = (float)uVar63;
            VStack_365.y = SUB84(uVar63,4);
            VStack_365.z = VStack_364.z;
            *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
            TransformEx::TransformEx_Align(&QStack_366,pTVar65,&VStack_365,alignmentAxis_01,*(MethodInfo **)(&stack0xfffffffffffffff8 + lVar1));
            if (*(int *)&(TypeInfo__RTG__ObjectBounds->_1).field_0x1c == 0) {
              *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
              FUN_?();
            }
            OStack_367.ObjectTypes = 5;
            OStack_367.NoVolumeSize.x = 0.0;
            OStack_367.NoVolumeSize.y = 0.0;
            OStack_367.NoVolumeSize.z = 0.0;
            *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
            pOVar102 = ObjectBounds::ObjectBounds_CalcHierarchyWorldOBB(&OStack_368,root,&OStack_367,(MethodInfo *)0x0);
            uVar63 = *(undefined8 *)&(snapConfig->SurfaceHitNormal).y;
            uVar93 = *(undefined8 *)&(snapConfig->SurfaceHitPlane).m_Normal;
            *(undefined8 *)(&stack0xfffffffffffffff8 + lVar1) = 0;
            uVar94 = *(undefined8 *)&(snapConfig->SurfaceHitPlane).m_Normal.z;
            pGVar96 = snapConfig->SurfaceObject;
            *(undefined8 *)(&stack0x00000028 + lVar1) = uVar63;
            *(undefined8 *)(&stack0x00000030 + lVar1) = uVar93;
            *(undefined8 *)(&stack0x00000038 + lVar1) = uVar94;
            *(GameObject **)(&stack0x00000040 + lVar1) = pGVar96;
            OStack_369._size.x = (pOVar102->_size).x;
            OStack_369._size.y = (pOVar102->_size).y;
            OStack_369._8_8_ = *(undefined8 *)&(pOVar102->_size).z;
            PStack_370.m_Normal._0_8_ = *(undefined8 *)(&stack0x00000030 + lVar1);
            PStack_370._8_8_ = *(undefined8 *)(&stack0x00000038 + lVar1);
            OStack_369._rotation.z = (pOVar102->_rotation).z;
            OStack_369._rotation.w = (pOVar102->_rotation).w;
            OStack_369._center.y = (pOVar102->_center).y;
            OStack_369._center.z = (pOVar102->_center).z;
            OStack_369._rotation.x = (pOVar102->_rotation).x;
            OStack_369._rotation.y = (pOVar102->_rotation).y;
            OStack_369._isValid = pOVar102->_isValid;
            OStack_369._41_3_ = *(undefined3 *)&pOVar102->field_0x29;
            *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
            pVVar112 = ObjectSurfaceSnap_CalculateSitOnSurfaceOffset(&VStack_371,&OStack_369,&PStack_370,0.0,*(MethodInfo **)(&stack0xfffffffffffffff8 + lVar1));
            uVar63 = uStack_64;
            if (pTVar65 != (Transform *)0x0) {
              uVar372 = pVVar112->x;
              uVar373 = pVVar112->y;
              fVar67 = pVVar112->z;
              *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
              pVVar112 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position(&VStack_374,pTVar65,(MethodInfo *)0x0);
              uVar375 = pVVar112->x;
              uVar376 = pVVar112->y;
              VStack_377.z = fVar67 + pVVar112->z;
              VStack_377.y = (float)uVar373 + (float)uVar376;
              VStack_377.x = (float)uVar372 + (float)uVar375;
              *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
              UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position(pTVar65,&VStack_377,(MethodInfo *)0x0);
              *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
              pVVar112 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position(&VStack_378,pTVar65,(MethodInfo *)0x0);
              uVar63 = *(undefined8 *)&(snapConfig->SurfaceHitPlane).m_Normal;
              uVar93 = *(undefined8 *)&(snapConfig->SurfaceHitPlane).m_Normal.z;
              pGVar96 = snapConfig->SurfaceObject;
              *(undefined8 *)(&stack0x00000028 + lVar1) = *(undefined8 *)&(snapConfig->SurfaceHitNormal).y;
              *(undefined8 *)(&stack0x00000030 + lVar1) = uVar63;
              *(undefined8 *)(&stack0x00000038 + lVar1) = uVar93;
              *(GameObject **)(&stack0x00000040 + lVar1) = pGVar96;
              uVar379 = pVVar112->x;
              uVar380 = pVVar112->y;
              fVar67 = snapConfig->OffsetFromSurface;
              VStack_381.x = fVar67 * VStack_364.x + (float)uVar379;
              VStack_381.z = fVar67 * VStack_364.z + pVVar112->z;
              VStack_381.y = fVar67 * VStack_364.y + (float)uVar380;
              *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
              UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position(pTVar65,&VStack_381,(MethodInfo *)0x0);
              fVar67 = (snapConfig->SurfaceHitNormal).z;
              fVar68 = (snapConfig->SurfaceHitPlane).m_Normal.x;
              fVar69 = (snapConfig->SurfaceHitPlane).m_Normal.y;
              fVar77 = (snapConfig->SurfaceHitPlane).m_Normal.z;
              fVar255 = (snapConfig->SurfaceHitPlane).m_Distance;
              uVar104 = *(undefined4 *)&snapConfig->SurfaceObject;
              uVar382 = *(undefined4 *)((longlong)&snapConfig->SurfaceObject + 4);
              *(float *)(&stack0x00000028 + lVar1) = (snapConfig->SurfaceHitNormal).y;
              *(float *)(&stack0x0000002c + lVar1) = fVar67;
              *(float *)(&stack0x00000030 + lVar1) = fVar68;
              *(float *)(&stack0x00000034 + lVar1) = fVar69;
              *(float *)(&stack0x00000038 + lVar1) = fVar77;
              *(float *)(&stack0x0000003c + lVar1) = fVar255;
              *(undefined4 *)(&stack0x00000040 + lVar1) = uVar104;
              *(undefined4 *)(&stack0x00000044 + lVar1) = uVar382;
              fVar255 = fVar69 * (float)uVar335 + fVar68 * (float)uVar334 + fVar77 * fVar66 + fVar255;
              uStack_383 = (undefined4)*(undefined8 *)(&stack0x00000030 + lVar1);
              uStack_384 = (undefined4)((ulonglong)*(undefined8 *)(&stack0x00000030 + lVar1) >> 0x20);
              uStack_385 = (undefined4)*(undefined8 *)(&stack0x00000038 + lVar1);
              fStack_386 = (float)((ulonglong)*(undefined8 *)(&stack0x00000038 + lVar1) >> 0x20);
              __return_storage_ptr__->Success = (char)1;
              *(int3 *)&__return_storage_ptr__->field_0x1 = (int3)(1 >> 8);
              (__return_storage_ptr__->SittingPlane).m_Normal.x = (float)uStack_383;
              (__return_storage_ptr__->SittingPlane).m_Normal.y = (float)uStack_384;
              (__return_storage_ptr__->SittingPlane).m_Normal.z = (float)uStack_385;
              (__return_storage_ptr__->SittingPlane).m_Distance = fStack_386;
              (__return_storage_ptr__->SittingPoint).x = (float)uVar334 - fVar255 * fVar68;
              (__return_storage_ptr__->SittingPoint).y = (float)uVar335 - fVar255 * fVar69;
              (__return_storage_ptr__->SittingPoint).z = fVar66 - fVar255 * fVar77;
              return __return_storage_ptr__;
            }
          }
          else {
            afStackX_8[0] = *(float *)(lVar196 + 0x30);
            uVar63 = *(undefined8 *)&(snapConfig->SurfaceHitPoint).z;
            uVar93 = *(undefined8 *)(lVar196 + 0x28);
            uVar94 = *(undefined8 *)&(snapConfig->SurfaceHitNormal).y;
            uVar95 = *(undefined8 *)&(snapConfig->SurfaceHitPlane).m_Normal;
            VStack_30.z = afStackX_8[0];
            *(undefined8 *)((longlong)apMStackX_10 + lVar1 + 8) = *(undefined8 *)&snapConfig->SurfaceHitPoint;
            *(undefined8 *)((longlong)apMStackX_10 + lVar1 + 0x10) = uVar63;
            pGVar96 = snapConfig->SurfaceObject;
            VStack_387.z = afStackX_8[0];
            VStack_30.x = (float)uVar93;
            VStack_30.y = SUB84(uVar93,4);
            *(undefined8 *)(&stack0x00000038 + lVar1) = *(undefined8 *)&(snapConfig->SurfaceHitPlane).m_Normal.z;
            *(GameObject **)(&stack0x00000040 + lVar1) = pGVar96;
            *(undefined8 *)(&stack0x00000028 + lVar1) = uVar94;
            *(undefined8 *)(&stack0x00000030 + lVar1) = uVar95;
            VStack_387.x = (float)uVar93;
            VStack_387.y = SUB84(uVar93,4);
            *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
            TransformEx::TransformEx_Align(&QStack_388,pTVar65,&VStack_387,alignmentAxis_01,*(MethodInfo **)(&stack0xfffffffffffffff8 + lVar1));
            if (*(int *)&(TypeInfo__RTG__ObjectBounds->_1).field_0x1c == 0) {
              *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
              FUN_?();
              afStackX_8[0] = VStack_30.z;
              uVar93 = VStack_30._0_8_;
            }
            OStack_389.ObjectTypes = 5;
            OStack_389.NoVolumeSize.x = 0.0;
            OStack_389.NoVolumeSize.y = 0.0;
            OStack_389.NoVolumeSize.z = 0.0;
            *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
            pOVar102 = ObjectBounds::ObjectBounds_CalcHierarchyWorldOBB(&OStack_390,root,&OStack_389,(MethodInfo *)0x0);
            PStack_391.m_Normal._0_8_ = *(undefined8 *)(lVar196 + 0x34);
            PStack_391._8_8_ = *(undefined8 *)(lVar196 + 0x3c);
            *(undefined8 *)(&stack0xfffffffffffffff8 + lVar1) = 0;
            OStack_392._size.x = (pOVar102->_size).x;
            OStack_392._size.y = (pOVar102->_size).y;
            OStack_392._8_8_ = *(undefined8 *)&(pOVar102->_size).z;
            OStack_392._rotation.z = (pOVar102->_rotation).z;
            OStack_392._rotation.w = (pOVar102->_rotation).w;
            OStack_392._isValid = pOVar102->_isValid;
            OStack_392._41_3_ = *(undefined3 *)&pOVar102->field_0x29;
            OStack_392._center.y = (pOVar102->_center).y;
            OStack_392._center.z = (pOVar102->_center).z;
            OStack_392._rotation.x = (pOVar102->_rotation).x;
            OStack_392._rotation.y = (pOVar102->_rotation).y;
            *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
            pVVar112 = ObjectSurfaceSnap_CalculateSitOnSurfaceOffset(&VStack_393,&OStack_392,&PStack_391,0.0,*(MethodInfo **)(&stack0xfffffffffffffff8 + lVar1));
            uVar63 = uStack_64;
            if (pTVar65 != (Transform *)0x0) {
              uVar394 = pVVar112->x;
              uVar395 = pVVar112->y;
              fVar66 = pVVar112->z;
              *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
              pVVar112 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position(&VStack_396,pTVar65,(MethodInfo *)0x0);
              uVar397 = pVVar112->x;
              uVar398 = pVVar112->y;
              VStack_399.z = fVar66 + pVVar112->z;
              VStack_399.y = (float)uVar395 + (float)uVar398;
              VStack_399.x = (float)uVar394 + (float)uVar397;
              *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
              UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position(pTVar65,&VStack_399,(MethodInfo *)0x0);
              *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
              pVVar112 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position(&VStack_400,pTVar65,(MethodInfo *)0x0);
              fVar67 = afStackX_8[0];
              uVar401 = pVVar112->x;
              uVar402 = pVVar112->y;
              fVar66 = snapConfig->OffsetFromSurface;
              VStack_403.x = fVar66 * VStack_30.x + (float)uVar401;
              VStack_403.z = fVar66 * afStackX_8[0] + pVVar112->z;
              VStack_403.y = fVar66 * VStack_30.y + (float)uVar402;
              *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
              UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position(pTVar65,&VStack_403,(MethodInfo *)0x0);
              uStack_404 = *(undefined8 *)(lVar196 + 0x18);
              uStack_405 = *(undefined4 *)(lVar196 + 0x20);
              uStack_406 = 0;
              uStack_407 = 0;
              VStack_408.z = fVar67;
              *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
              VStack_408._0_8_ = uVar93;
              FUN_?(&uStack_406,&VStack_408,&uStack_404);
              uVar104 = *(undefined4 *)(lVar196 + 0x20);
              uStack_409 = (undefined4)*(undefined8 *)(lVar196 + 0x18);
              uStack_410 = (undefined4)((ulonglong)*(undefined8 *)(lVar196 + 0x18) >> 0x20);
              uStack_411 = (undefined4)uStack_406;
              uStack_412 = (undefined4)((ulonglong)uStack_406 >> 0x20);
              uStack_413 = (undefined4)uStack_407;
              uStack_414 = (undefined4)((ulonglong)uStack_407 >> 0x20);
              __return_storage_ptr__->Success = (char)1;
              *(int3 *)&__return_storage_ptr__->field_0x1 = (int3)(1 >> 8);
              (__return_storage_ptr__->SittingPlane).m_Normal.x = (float)uStack_411;
              (__return_storage_ptr__->SittingPlane).m_Normal.y = (float)uStack_412;
              (__return_storage_ptr__->SittingPlane).m_Normal.z = (float)uStack_413;
              *(ulonglong *)&(__return_storage_ptr__->SittingPlane).m_Distance = CONCAT44(uStack_409,uStack_414);
              (__return_storage_ptr__->SittingPoint).y = (float)uStack_410;
              (__return_storage_ptr__->SittingPoint).z = (float)uVar104;
              return __return_storage_ptr__;
            }
          }
        }
        goto code_?;
      }
    }
    else {
      if (cRam_? == '\0') {
        *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
        FUN_?(&TypeInfo__UnityEngine__Vector3);
        LOCK();
        *(undefined4 *)(&stack0xffffffffffffffd8 + lVar1) = *(undefined4 *)(&stack0xffffffffffffffd8 + lVar1);
        UNLOCK();
        cRam_? = '\x01';
      }
      uVar63 = *(undefined8 *)&(snapConfig->SurfaceHitPoint).z;
      uVar93 = *(undefined8 *)&(snapConfig->SurfaceHitNormal).y;
      uVar94 = *(undefined8 *)&(snapConfig->SurfaceHitPlane).m_Normal;
      alignmentAxis_02 = snapConfig->AlignmentAxis;
      *(undefined8 *)((longlong)apMStackX_10 + lVar1 + 8) = *(undefined8 *)&snapConfig->SurfaceHitPoint;
      *(undefined8 *)((longlong)apMStackX_10 + lVar1 + 0x10) = uVar63;
      pGVar96 = snapConfig->SurfaceObject;
      pVVar175 = TypeInfo__UnityEngine__Vector3->static_fields;
      *(undefined8 *)(&stack0x00000038 + lVar1) = *(undefined8 *)&(snapConfig->SurfaceHitPlane).m_Normal.z;
      *(GameObject **)(&stack0x00000040 + lVar1) = pGVar96;
      *(undefined8 *)(&stack0x00000028 + lVar1) = uVar93;
      *(undefined8 *)(&stack0x00000030 + lVar1) = uVar94;
      VStack_415.x = (pVVar175->upVector).x;
      VStack_415.y = (pVVar175->upVector).y;
      VStack_415.z = (pVVar175->upVector).z;
      *(undefined8 *)(&stack0xfffffffffffffff8 + lVar1) = 0;
      *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
      TransformEx::TransformEx_Align(&QStack_416,pTVar65,&VStack_415,alignmentAxis_02,*(MethodInfo **)(&stack0xfffffffffffffff8 + lVar1));
      if (*(int *)&(TypeInfo__RTG__ObjectBounds->_1).field_0x1c == 0) {
        *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
        FUN_?();
      }
      OStack_417.ObjectTypes = 5;
      OStack_417.NoVolumeSize.x = 0.0;
      OStack_417.NoVolumeSize.y = 0.0;
      OStack_417.NoVolumeSize.z = 0.0;
      *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
      pOVar102 = ObjectBounds::ObjectBounds_CalcHierarchyWorldOBB(&OStack_418,root,&OStack_417,(MethodInfo *)0x0);
      fVar66 = (pOVar102->_size).x;
      fVar67 = (pOVar102->_size).y;
      fVar68 = (pOVar102->_size).z;
      fVar69 = (pOVar102->_center).z;
      QStack_3.z = (pOVar102->_rotation).z;
      QStack_3.w = (pOVar102->_rotation).w;
      uStack_7 = *(undefined4 *)&pOVar102->_isValid;
      uStack_4._0_4_ = (pOVar102->_size).x;
      uStack_4._4_4_ = (pOVar102->_size).y;
      fStack_5 = fVar68;
      fStack_6 = (pOVar102->_center).x;
      fStack_8 = (pOVar102->_center).y;
      fStack_9 = fVar69;
      QStack_3.x = (pOVar102->_rotation).x;
      QStack_3.y = (pOVar102->_rotation).y;
      if ((char)*(undefined4 *)&pOVar102->_isValid == '\0') goto code_?;
      if (cRam_? == '\0') {
        *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
        FUN_?(&TypeInfo__UnityEngine__Vector3);
        LOCK();
        *(undefined4 *)(&stack0xffffffffffffffd8 + lVar1) = *(undefined4 *)(&stack0xffffffffffffffd8 + lVar1);
        UNLOCK();
        cRam_? = '\x01';
      }
      pVVar175 = TypeInfo__UnityEngine__Vector3->static_fields;
      uVar129._0_4_ = (pVVar175->upVector).x;
      uVar129._4_4_ = (pVVar175->upVector).y;
      fVar77 = (pVVar175->upVector).z;
      VStack_400.x = (float)(undefined4)uVar129;
      VStack_400.y = (float)uVar129._4_4_;
      if (*(int *)&(TypeInfo__RTG__BoxMath->_1).field_0x1c == 0) {
        *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
        FUN_?();
      }
      *(undefined8 *)(&stack0xfffffffffffffff8 + lVar1) = 0;
      VStack_419.x = fVar66;
      VStack_419.y = fVar67;
      QStack_420.x = QStack_3.x;
      QStack_420.y = QStack_3.y;
      QStack_420.z = QStack_3.z;
      QStack_420.w = QStack_3.w;
      VStack_421.x = fStack_6;
      VStack_421.y = fStack_8;
      VStack_422.z = -fVar77;
      VStack_422.x = (float)(int)(uVar129 ^ 0x8000000080000000);
      VStack_422.y = (float)(int)((uVar129 ^ 0x8000000080000000) >> 0x20);
      VStack_419.z = fVar68;
      VStack_421.z = fVar69;
      *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
      BVar133 = BoxMath::BoxMath_GetMostAlignedFace(&VStack_421,&VStack_419,&QStack_420,&VStack_422,*(MethodInfo **)(&stack0xfffffffffffffff8 + lVar1));
      if (*(int *)&(TypeInfo__RTG__ObjectVertexCollect->_1).field_0x1c == 0) {
        *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
        FUN_?();
      }
      *(undefined8 *)(&stack0xfffffffffffffff8 + lVar1) = 0;
      *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
      apMStackX_10[0] = (MethodInfo *)ObjectVertexCollect::ObjectVertexCollect_CollectHierarchyVerts(root,BVar133,0.001,0.01,*(MethodInfo **)(&stack0xfffffffffffffff8 + lVar1));
      uVar63 = uStack_64;
      if (apMStackX_10[0] == (MethodInfo *)0x0) goto code_?;
      if (*(int *)&apMStackX_10[0]->name != 0) {
        *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
        pVVar112 = Vector3Ex::Vector3Ex_GetPointCloudCenter(&VStack_423,(IEnumerable_1_UnityEngine_Vector3_ *)apMStackX_10[0],(MethodInfo *)0x0);
        fVar66 = pVVar112->z;
        VStack_408.x = pVVar112->x;
        VStack_408.y = pVVar112->y;
        VStack_10._0_8_ = VStack_408._0_8_;
        VStack_10.z = fVar66;
        if (cRam_? == '\0') {
          *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
          FUN_?(&TypeInfo__UnityEngine__Vector3);
          LOCK();
          *(undefined4 *)(&stack0xffffffffffffffd8 + lVar1) = *(undefined4 *)(&stack0xffffffffffffffd8 + lVar1);
          UNLOCK();
          cRam_? = '\x01';
        }
        pVVar175 = TypeInfo__UnityEngine__Vector3->static_fields;
        VStack_400.x = (pVVar175->upVector).x;
        VStack_400.y = (pVVar175->upVector).y;
        fVar67 = VStack_400.y * 0.001 + VStack_408.y;
        fVar68 = VStack_400.x * 0.001 + VStack_408.x;
        fVar66 = (pVVar175->upVector).z * 0.001 + fVar66;
        if (cRam_? == '\0') {
          *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
          FUN_?(&TypeInfo__UnityEngine__Vector3);
          LOCK();
          *(undefined4 *)(&stack0xffffffffffffffd8 + lVar1) = *(undefined4 *)(&stack0xffffffffffffffd8 + lVar1);
          UNLOCK();
          cRam_? = '\x01';
        }
        pVVar175 = TypeInfo__UnityEngine__Vector3->static_fields;
        VStack_400.x = (pVVar175->upVector).x;
        VStack_400.y = (pVVar175->upVector).y;
        fVar77 = -VStack_400.y;
        fVar256 = -VStack_400.x;
        fVar255 = -(pVVar175->upVector).z;
        uStack_424 = VStack_400._0_8_ ^ 0x8000000080000000;
        uStack_11 = CONCAT44(fVar67,fVar68);
        uStack_12 = CONCAT44(uStack_12._4_4_,fVar66);
        *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
        fStack_425 = fVar255;
        fVar69 = (float)FUN_?(&uStack_424);
        if (1e-05 < fVar69) {
          fStack_426 = fVar255 / fVar69;
          uVar63 = CONCAT44(fVar77 / fVar69,fVar256 / fVar69);
          uStack_427 = uVar63;
          fStack_428 = fStack_426;
        }
        else {
          if (cRam_? == '\0') {
            *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
            FUN_?(&TypeInfo__UnityEngine__Vector3);
            LOCK();
            *(undefined4 *)(&stack0xffffffffffffffd8 + lVar1) = *(undefined4 *)(&stack0xffffffffffffffd8 + lVar1);
            UNLOCK();
            cRam_? = '\x01';
          }
          pVVar175 = TypeInfo__UnityEngine__Vector3->static_fields;
          uVar63._0_4_ = (pVVar175->zeroVector).x;
          uVar63._4_4_ = (pVVar175->zeroVector).y;
          fStack_426 = (pVVar175->zeroVector).z;
        }
        uStack_64._0_4_ = (undefined4)uVar63;
        uStack_64._4_4_ = (undefined4)((ulonglong)uVar63 >> 0x20);
        uStack_12 = CONCAT44((undefined4)uStack_64,(undefined4)uStack_12);
        uStack_13 = CONCAT44(fStack_426,uStack_64._4_4_);
        if (pOVar99 == (ObjectSurfaceSnap_SurfaceRaycaster *)0x0) goto code_?;
        QStack_126.y = fVar67;
        QStack_126.x = fVar68;
        QStack_126.w = (float)(undefined4)uStack_64;
        pIVar194 = (pOVar99->klass->vtable).__unknown.methodPtr;
        uStack_429 = CONCAT44((undefined4)uStack_64,fVar66);
        uStack_430 = CONCAT44(fStack_426,uStack_64._4_4_);
        uStack_431._0_4_ = fVar68;
        uStack_431._4_4_ = fVar67;
        pMVar115 = (pOVar99->klass->vtable).__unknown.method;
        *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
        QStack_126.z = fVar66;
        uStack_64 = uVar63;
        lVar196 = (*pIVar194)(pOVar99,&uStack_431,pMVar115);
        if (lVar196 != 0) {
          afStackX_8[0] = *(float *)(lVar196 + 0x30);
          uVar63 = *(undefined8 *)&(snapConfig->SurfaceHitPoint).z;
          alignmentAxis_03 = snapConfig->AlignmentAxis;
          uVar93 = *(undefined8 *)(lVar196 + 0x28);
          uVar94 = *(undefined8 *)&(snapConfig->SurfaceHitNormal).y;
          uVar95 = *(undefined8 *)&(snapConfig->SurfaceHitPlane).m_Normal;
          *(undefined8 *)((longlong)apMStackX_10 + lVar1 + 8) = *(undefined8 *)&snapConfig->SurfaceHitPoint;
          *(undefined8 *)((longlong)apMStackX_10 + lVar1 + 0x10) = uVar63;
          pGVar96 = snapConfig->SurfaceObject;
          VStack_14.x = (float)uVar93;
          VStack_14.y = SUB84(uVar93,4);
          *(undefined8 *)(&stack0x00000038 + lVar1) = *(undefined8 *)&(snapConfig->SurfaceHitPlane).m_Normal.z;
          *(GameObject **)(&stack0x00000040 + lVar1) = pGVar96;
          VStack_14.z = afStackX_8[0];
          *(undefined8 *)(&stack0x00000028 + lVar1) = uVar94;
          *(undefined8 *)(&stack0x00000030 + lVar1) = uVar95;
          VStack_432.x = (float)uVar93;
          VStack_432.y = SUB84(uVar93,4);
          VStack_432.z = afStackX_8[0];
          *(undefined8 *)(&stack0xfffffffffffffff8 + lVar1) = 0;
          *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
          pQVar433 = TransformEx::TransformEx_Align(&QStack_434,pTVar65,&VStack_432,alignmentAxis_03,*(MethodInfo **)(&stack0xfffffffffffffff8 + lVar1));
          uVar95._0_4_ = pQVar433->x;
          uVar95._4_4_ = pQVar433->y;
          uVar435._0_4_ = pQVar433->z;
          uVar435._4_4_ = pQVar433->w;
          if (*(int *)&(TypeInfo__RTG__ObjectBounds->_1).field_0x1c == 0) {
            *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
            FUN_?();
            afStackX_8[0] = VStack_14.z;
            uVar93 = VStack_14._0_8_;
          }
          OStack_436.ObjectTypes = 5;
          OStack_436.NoVolumeSize.x = 0.0;
          OStack_436.NoVolumeSize.y = 0.0;
          OStack_436.NoVolumeSize.z = 0.0;
          *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
          pOVar102 = ObjectBounds::ObjectBounds_CalcHierarchyWorldOBB(&OStack_437,root,&OStack_436,(MethodInfo *)0x0);
          OStack_438._8_8_ = *(undefined8 *)&(pOVar102->_size).z;
          uVar63 = uStack_64;
          if (pTVar65 != (Transform *)0x0) {
            *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
            pVVar112 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position(&VStack_439,pTVar65,(MethodInfo *)0x0);
            VStack_440.x = pVVar112->x;
            VStack_440.y = pVVar112->y;
            VStack_440.z = pVVar112->z;
            *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
            pMVar115 = apMStackX_10[0];
            QStack_441._0_8_ = uVar95;
            QStack_441._8_8_ = uVar435;
            QuaternionEx::QuaternionEx_RotatePoints(&QStack_441,(List_1_UnityEngine_Vector3_ *)apMStackX_10[0],&VStack_440,(MethodInfo *)0x0);
            *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
            pVVar112 = TriangPrismShape3D::TriangPrismShape3D_get_ModelUp(&VStack_442,pMVar115);
            uStack_443 = *(undefined4 *)(lVar196 + 0x20);
            uStack_444 = *(undefined8 *)(lVar196 + 0x18);
            auStack_445._0_4_ = 0.0;
            auStack_445._4_4_ = 0.0;
            auStack_445._8_4_ = 0.0;
            auStack_445._12_4_ = 0.0;
            uStack_446._0_4_ = pVVar112->x;
            uStack_446._4_4_ = pVVar112->y;
            fStack_447 = pVVar112->z;
            *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
            FUN_?(auStack_445,&uStack_446,&uStack_444);
            OStack_438._isValid = pOVar102->_isValid;
            OStack_438._41_3_ = *(undefined3 *)&pOVar102->field_0x29;
            PStack_448.m_Normal.x = (float)auStack_445._0_4_;
            PStack_448.m_Normal.y = (float)auStack_445._4_4_;
            PStack_448.m_Normal.z = (float)auStack_445._8_4_;
            PStack_448.m_Distance = (float)auStack_445._12_4_;
            OStack_438._size.x = (pOVar102->_size).x;
            OStack_438._size.y = (pOVar102->_size).y;
            OStack_438._center.y = (pOVar102->_center).y;
            OStack_438._center.z = (pOVar102->_center).z;
            OStack_438._rotation.x = (pOVar102->_rotation).x;
            OStack_438._rotation.y = (pOVar102->_rotation).y;
            OStack_438._rotation.z = (pOVar102->_rotation).z;
            OStack_438._rotation.w = (pOVar102->_rotation).w;
            *(undefined8 *)(&stack0xfffffffffffffff8 + lVar1) = 0;
            *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
            pVVar112 = ObjectSurfaceSnap_CalculateSitOnSurfaceOffset(&VStack_449,&OStack_438,&PStack_448,0.1,*(MethodInfo **)(&stack0xfffffffffffffff8 + lVar1));
            pIVar194 = *(Il2CppMethodPointer *)pVVar112;
            fVar66 = pVVar112->z;
            *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
            pVVar112 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position(&VStack_450,pTVar65,(MethodInfo *)0x0);
            uVar451 = pVVar112->x;
            uVar452 = pVVar112->y;
            VStack_453.z = fVar66 + pVVar112->z;
            VStack_453.y = (float)((ulonglong)pIVar194 >> 0x20) + (float)uVar452;
            VStack_453.x = SUB84(pIVar194,0) + (float)uVar451;
            *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position(pTVar65,&VStack_453,(MethodInfo *)0x0);
            pMVar115 = (MethodInfo *)auStack_454;
            *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
            auStack_454._0_8_ = pIVar194;
            auStack_454._8_4_ = fVar66;
            Vector3Ex::Vector3Ex_OffsetPoints((List_1_UnityEngine_Vector3_ *)apMStackX_10[0],(Vector3 *)pMVar115,(MethodInfo *)0x0);
            *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
            pVVar112 = TriangPrismShape3D::TriangPrismShape3D_get_ModelUp(&VStack_455,pMVar115);
            pMVar115 = apMStackX_10[0];
            uVar456 = pVVar112->x;
            fVar66 = pVVar112->y;
            fVar67 = pVVar112->z;
            uVar457 = snapConfig->SurfaceType;
            pGVar96 = snapConfig->SurfaceObject;
            *(undefined8 *)((longlong)apMStackX_10 + lVar1 + -0x10) = 0;
            pIStack_458 = (InvokerMethod)(CONCAT44(fVar66,uVar456) ^ 0x8000000080000000);
            fStack_459 = -fVar67;
            *(undefined4 *)(&stack0xfffffffffffffff8 + lVar1) = uVar457;
            *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
            pVVar112 = ObjectSurfaceSnap_CalculateEmbedVector(&VStack_460,(List_1_UnityEngine_Vector3_ *)pMVar115,pGVar96,(Vector3 *)&pIStack_458,*(ObjectSurfaceSnap_Type__Enum *)(&stack0xfffffffffffffff8 + lVar1),*(MethodInfo **)((longlong)apMStackX_10 + lVar1 + -0x10));
            uVar461 = pVVar112->x;
            uVar462 = pVVar112->y;
            fVar67 = pVVar112->z;
            *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
            pVVar112 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position(&VStack_463,pTVar65,(MethodInfo *)0x0);
            fVar68 = afStackX_8[0];
            uVar464 = pVVar112->x;
            uVar465 = pVVar112->y;
            fVar66 = snapConfig->OffsetFromSurface;
            ppIStack_466 = (Il2CppType **)CONCAT44(VStack_14.y * fVar66 + (float)uVar462 + (float)uVar465,VStack_14.x * fVar66 + (float)uVar461 + (float)uVar464);
            _Stack_cf0._0_4_ = afStackX_8[0] * fVar66 + fVar67 + pVVar112->z;
            *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position(pTVar65,(Vector3 *)&ppIStack_466,(MethodInfo *)0x0);
            _Stack_ce8 = *(_union_155 *)(lVar196 + 0x18);
            uStack_467 = *(uint32_t *)(lVar196 + 0x20);
            uStack_468 = 0;
            uStack_469 = 0;
            VStack_470.z = fVar68;
            *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
            VStack_470._0_8_ = uVar93;
            FUN_?(&uStack_468,&VStack_470,&_Stack_ce8);
            uVar104 = *(undefined4 *)(lVar196 + 0x20);
            uStack_471 = (undefined4)*(undefined8 *)(lVar196 + 0x18);
            uStack_472 = (undefined4)((ulonglong)*(undefined8 *)(lVar196 + 0x18) >> 0x20);
            uStack_473 = (undefined4)uStack_468;
            uStack_474 = (undefined4)((ulonglong)uStack_468 >> 0x20);
            uStack_475 = (undefined4)uStack_469;
            uStack_476 = (undefined4)((ulonglong)uStack_469 >> 0x20);
            __return_storage_ptr__->Success = (char)1;
            *(int3 *)&__return_storage_ptr__->field_0x1 = (int3)(1 >> 8);
            (__return_storage_ptr__->SittingPlane).m_Normal.x = (float)uStack_473;
            (__return_storage_ptr__->SittingPlane).m_Normal.y = (float)uStack_474;
            (__return_storage_ptr__->SittingPlane).m_Normal.z = (float)uStack_475;
            *(ulonglong *)&(__return_storage_ptr__->SittingPlane).m_Distance = CONCAT44(uStack_471,uStack_476);
            (__return_storage_ptr__->SittingPoint).y = (float)uStack_472;
            (__return_storage_ptr__->SittingPoint).z = (float)uVar104;
            return __return_storage_ptr__;
          }
          goto code_?;
        }
      }
    }
  }
code_?:
  iVar100 = snapConfig->SurfaceType;
  uVar63 = *(undefined8 *)&(snapConfig->SurfaceHitPoint).z;
  uVar93 = *(undefined8 *)&(snapConfig->SurfaceHitNormal).y;
  uVar94 = *(undefined8 *)&(snapConfig->SurfaceHitPlane).m_Normal;
  *(undefined8 *)((longlong)apMStackX_10 + lVar1 + 8) = *(undefined8 *)&snapConfig->SurfaceHitPoint;
  *(undefined8 *)((longlong)apMStackX_10 + lVar1 + 0x10) = uVar63;
  uVar63 = *(undefined8 *)&(snapConfig->SurfaceHitPlane).m_Normal.z;
  pGVar96 = snapConfig->SurfaceObject;
  *(undefined8 *)(&stack0x00000028 + lVar1) = uVar93;
  *(undefined8 *)(&stack0x00000030 + lVar1) = uVar94;
  *(undefined8 *)(&stack0x00000038 + lVar1) = uVar63;
  *(GameObject **)(&stack0x00000040 + lVar1) = pGVar96;
  if (iVar100 == 4) {
    if (*(int *)&(TypeInfo__RTG__ObjectBounds->_1).field_0x1c == 0) {
      *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
      FUN_?();
    }
    OStack_477.ObjectTypes = 5;
    OStack_477.NoVolumeSize.x = 0.0;
    OStack_477.NoVolumeSize.y = 0.0;
    OStack_477.NoVolumeSize.z = 0.0;
    *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
    pOVar102 = ObjectBounds::ObjectBounds_CalcHierarchyWorldOBB(&OStack_478,root,&OStack_477,(MethodInfo *)0x0);
    uVar382._0_1_ = pOVar102->_isValid;
    uVar382._1_3_ = *(undefined3 *)&pOVar102->field_0x29;
    uVar479._0_4_ = (pOVar102->_rotation).z;
    uVar479._4_4_ = (pOVar102->_rotation).w;
    fVar66 = (pOVar102->_size).x;
    fVar67 = (pOVar102->_size).y;
    uStack_55._0_4_ = (pOVar102->_size).x;
    uStack_55._4_4_ = (pOVar102->_size).y;
    pfVar480 = &(pOVar102->_size).z;
    fVar68 = *pfVar480;
    fVar69 = (pOVar102->_center).x;
    uStack_56 = *(undefined8 *)pfVar480;
    fVar77 = (pOVar102->_center).y;
    fVar255 = (pOVar102->_center).z;
    uStack_58._0_4_ = (pOVar102->_center).y;
    uStack_58._4_4_ = (pOVar102->_center).z;
    pQVar433 = &pOVar102->_rotation;
    fVar256 = pQVar433->x;
    fVar279 = (pOVar102->_rotation).y;
    uStack_59._0_4_ = pQVar433->x;
    uStack_59._4_4_ = pQVar433->y;
    if ((bool)uVar382 != 0) {
      uVar63 = uStack_64;
      uStack_57 = uVar479;
      uStack_60 = uVar382;
      if (root != (GameObject *)0x0) {
        *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
        pTVar65 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform(root,(MethodInfo *)0x0);
        uVar63 = *(undefined8 *)&(snapConfig->SurfaceHitPoint).z;
        uVar93 = *(undefined8 *)&(snapConfig->SurfaceHitNormal).y;
        uVar94 = *(undefined8 *)&(snapConfig->SurfaceHitPlane).m_Normal;
        *(undefined8 *)((longlong)apMStackX_10 + lVar1 + 8) = *(undefined8 *)&snapConfig->SurfaceHitPoint;
        *(undefined8 *)((longlong)apMStackX_10 + lVar1 + 0x10) = uVar63;
        uVar63 = *(undefined8 *)&(snapConfig->SurfaceHitPlane).m_Normal.z;
        pGVar96 = snapConfig->SurfaceObject;
        *(undefined8 *)(&stack0x00000028 + lVar1) = uVar93;
        *(undefined8 *)(&stack0x00000030 + lVar1) = uVar94;
        *(undefined8 *)(&stack0x00000038 + lVar1) = uVar63;
        *(GameObject **)(&stack0x00000040 + lVar1) = pGVar96;
        if (snapConfig->AlignAxis != 0) {
          uStack_481._0_4_ = (snapConfig->SurfaceHitPoint).x;
          uStack_481._4_4_ = (snapConfig->SurfaceHitPoint).y;
          uStack_482 = *(undefined8 *)&(snapConfig->SurfaceHitPoint).z;
          alignmentAxis_04 = snapConfig->AlignmentAxis;
          fStack_483 = (snapConfig->SurfaceHitNormal).y;
          fStack_484 = (snapConfig->SurfaceHitNormal).z;
          fStack_485 = (snapConfig->SurfaceHitPlane).m_Normal.x;
          fStack_486 = (snapConfig->SurfaceHitPlane).m_Normal.y;
          uVar63 = *(undefined8 *)snapConfig;
          uVar93 = *(undefined8 *)&snapConfig->SurfaceType;
          *(undefined8 *)(&stack0xfffffffffffffff8 + lVar1) = 0;
          *(undefined8 *)((longlong)apMStackX_10 + lVar1 + 8) = uStack_481;
          *(undefined8 *)((longlong)apMStackX_10 + lVar1 + 0x10) = uStack_482;
          *(undefined8 *)((longlong)afStackX_8 + lVar1) = uVar63;
          *(undefined8 *)((longlong)apMStackX_10 + lVar1) = uVar93;
          pGVar96 = snapConfig->SurfaceObject;
          *(undefined8 *)(&stack0x00000038 + lVar1) = *(undefined8 *)&(snapConfig->SurfaceHitPlane).m_Normal.z;
          *(GameObject **)(&stack0x00000040 + lVar1) = pGVar96;
          uStack_167 = *(undefined8 *)&(snapConfig->SurfaceHitPlane).m_Normal.z;
          pGStack_168 = snapConfig->SurfaceObject;
          *(float *)(&stack0x00000028 + lVar1) = fStack_483;
          *(float *)(&stack0x0000002c + lVar1) = fStack_484;
          *(float *)(&stack0x00000030 + lVar1) = fStack_485;
          *(float *)(&stack0x00000034 + lVar1) = fStack_486;
          VStack_487._0_8_ = *(undefined8 *)((longlong)apMStackX_10 + lVar1 + 0x14);
          VStack_487.z = fStack_484;
          *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
          TransformEx::TransformEx_Align(&QStack_488,pTVar65,&VStack_487,alignmentAxis_04,*(MethodInfo **)(&stack0xfffffffffffffff8 + lVar1));
          if (*(int *)&(TypeInfo__RTG__ObjectBounds->_1).field_0x1c == 0) {
            *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
            FUN_?();
          }
          OStack_489.ObjectTypes = 5;
          OStack_489.NoVolumeSize.x = 0.0;
          OStack_489.NoVolumeSize.y = 0.0;
          OStack_489.NoVolumeSize.z = 0.0;
          *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
          pOVar102 = ObjectBounds::ObjectBounds_CalcHierarchyWorldOBB((OBB *)auStack_80,root,&OStack_489,(MethodInfo *)0x0);
          fVar66 = (pOVar102->_size).x;
          fVar67 = (pOVar102->_size).y;
          fVar68 = (pOVar102->_size).z;
          fVar69 = (pOVar102->_center).x;
          uVar382._0_1_ = pOVar102->_isValid;
          uVar382._1_3_ = *(undefined3 *)&pOVar102->field_0x29;
          fVar77 = (pOVar102->_center).y;
          fVar255 = (pOVar102->_center).z;
          fVar256 = (pOVar102->_rotation).x;
          fVar279 = (pOVar102->_rotation).y;
          uVar479._0_4_ = (pOVar102->_rotation).z;
          uVar479._4_4_ = (pOVar102->_rotation).w;
        }
        uVar63 = uStack_64;
        if (pTVar65 != (Transform *)0x0) {
          if (cRam_? == '\0') {
            *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
            FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_);
            LOCK();
            *(undefined4 *)(&stack0xffffffffffffffd8 + lVar1) = *(undefined4 *)(&stack0xffffffffffffffd8 + lVar1);
            UNLOCK();
            cRam_? = '\x01';
          }
          uStack_490 = 0;
          fStack_491 = 0.0;
          pvVar71 = (pTVar65->fields)._._.m_CachedPtr;
          if (pvVar71 == (void *)0x0) {
            *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar65,(MethodInfo *)0x0);
            pcVar72 = (code *)swi(3);
            pOVar73 = (ObjectSurfaceSnap_SnapResult *)(*pcVar72)();
            return pOVar73;
          }
          pcVar72 = pcRam_?;
          if (pcRam_? == (code *)0x0) {
            *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
            pcVar72 = (code *)FUN_?(&UNK_?);
            if (pcVar72 == (code *)0x0) {
              *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
              uVar63 = func_?(&UNK_?);
              *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
              FUN_?(uVar63,0);
              pcVar72 = (code *)swi(3);
              pOVar73 = (ObjectSurfaceSnap_SnapResult *)(*pcVar72)();
              return pOVar73;
            }
          }
          pcRam_? = pcVar72;
          *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
          (*pcRam_?)(pvVar71,&uStack_490);
          uVar63 = *(undefined8 *)&(snapConfig->SurfaceHitPlane).m_Normal.z;
          pGVar96 = snapConfig->SurfaceObject;
          OStack_492._isValid = (bool)uVar382;
          OStack_492._41_3_ = SUB43(uVar382,1);
          uVar93 = *(undefined8 *)&(snapConfig->SurfaceHitNormal).y;
          uVar94 = *(undefined8 *)&(snapConfig->SurfaceHitPlane).m_Normal;
          *(undefined8 *)(&stack0xfffffffffffffff8 + lVar1) = 0;
          fVar283 = snapConfig->OffsetFromSurface;
          *(undefined8 *)(&stack0x00000028 + lVar1) = uVar93;
          *(undefined8 *)(&stack0x00000030 + lVar1) = uVar94;
          *(undefined8 *)(&stack0x00000038 + lVar1) = uVar63;
          *(GameObject **)(&stack0x00000040 + lVar1) = pGVar96;
          OStack_492._size.x = fVar66;
          OStack_492._size.y = fVar67;
          OStack_492._size.z = fVar68;
          OStack_492._center.x = fVar69;
          PStack_493.m_Normal._0_8_ = *(undefined8 *)(&stack0x00000030 + lVar1);
          PStack_493._8_8_ = *(undefined8 *)(&stack0x00000038 + lVar1);
          OStack_492._center.y = fVar77;
          OStack_492._center.z = fVar255;
          OStack_492._rotation.x = fVar256;
          OStack_492._rotation.y = fVar279;
          OStack_492._rotation.z = (float)uVar479;
          OStack_492._rotation.w = SUB84(uVar479,4);
          *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
          pVVar112 = ObjectSurfaceSnap_CalculateSitOnSurfaceOffset(&VStack_494,&OStack_492,&PStack_493,fVar283,*(MethodInfo **)(&stack0xfffffffffffffff8 + lVar1));
          VStack_463.x = pVVar112->x;
          VStack_463.y = pVVar112->y;
          fStack_495 = fStack_491 + pVVar112->z;
          uStack_496 = CONCAT44(uStack_490._4_4_ + VStack_463.y,(float)uStack_490 + VStack_463.x);
          if (cRam_? == '\0') {
            *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
            FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_);
            LOCK();
            *(undefined4 *)(&stack0xffffffffffffffd8 + lVar1) = *(undefined4 *)(&stack0xffffffffffffffd8 + lVar1);
            UNLOCK();
            cRam_? = '\x01';
          }
          pvVar71 = (pTVar65->fields)._._.m_CachedPtr;
          if (pvVar71 != (void *)0x0) {
            pcVar72 = pcRam_?;
            if (pcRam_? == (code *)0x0) {
              *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
              pcVar72 = (code *)FUN_?(&UNK_?);
              if (pcVar72 == (code *)0x0) {
                *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
                uVar63 = func_?(&UNK_?);
                *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
                FUN_?(uVar63,0);
                pcVar72 = (code *)swi(3);
                pOVar73 = (ObjectSurfaceSnap_SnapResult *)(*pcVar72)();
                return pOVar73;
              }
            }
            pcRam_? = pcVar72;
            *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
            (*pcRam_?)(pvVar71,&uStack_496);
            fVar66 = (snapConfig->SurfaceHitNormal).z;
            fVar67 = (snapConfig->SurfaceHitPlane).m_Normal.x;
            fVar68 = (snapConfig->SurfaceHitPlane).m_Normal.y;
            fVar256 = (snapConfig->SurfaceHitPlane).m_Normal.z;
            fVar279 = (snapConfig->SurfaceHitPlane).m_Distance;
            uVar104 = *(undefined4 *)&snapConfig->SurfaceObject;
            uVar382 = *(undefined4 *)((longlong)&snapConfig->SurfaceObject + 4);
            *(float *)(&stack0x00000028 + lVar1) = (snapConfig->SurfaceHitNormal).y;
            *(float *)(&stack0x0000002c + lVar1) = fVar66;
            *(float *)(&stack0x00000030 + lVar1) = fVar67;
            *(float *)(&stack0x00000034 + lVar1) = fVar68;
            *(float *)(&stack0x00000038 + lVar1) = fVar256;
            *(float *)(&stack0x0000003c + lVar1) = fVar279;
            *(undefined4 *)(&stack0x00000040 + lVar1) = uVar104;
            *(undefined4 *)(&stack0x00000044 + lVar1) = uVar382;
            fVar279 = fVar77 * fVar68 + fVar69 * fVar67 + fVar255 * fVar256 + fVar279;
            uStack_497 = (undefined4)*(undefined8 *)(&stack0x00000030 + lVar1);
            uStack_498 = (undefined4)((ulonglong)*(undefined8 *)(&stack0x00000030 + lVar1) >> 0x20);
            uStack_499 = (undefined4)*(undefined8 *)(&stack0x00000038 + lVar1);
            fStack_500 = (float)((ulonglong)*(undefined8 *)(&stack0x00000038 + lVar1) >> 0x20);
            __return_storage_ptr__->Success = (char)1;
            *(int3 *)&__return_storage_ptr__->field_0x1 = (int3)(1 >> 8);
            (__return_storage_ptr__->SittingPlane).m_Normal.x = (float)uStack_497;
            (__return_storage_ptr__->SittingPlane).m_Normal.y = (float)uStack_498;
            (__return_storage_ptr__->SittingPlane).m_Normal.z = (float)uStack_499;
            (__return_storage_ptr__->SittingPlane).m_Distance = fStack_500;
            (__return_storage_ptr__->SittingPoint).x = fVar69 - fVar67 * fVar279;
            (__return_storage_ptr__->SittingPoint).y = fVar77 - fVar68 * fVar279;
            (__return_storage_ptr__->SittingPoint).z = fVar255 - fVar256 * fVar279;
            return __return_storage_ptr__;
          }
          *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar65,(MethodInfo *)0x0);
          pcVar72 = (code *)swi(3);
          pOVar73 = (ObjectSurfaceSnap_SnapResult *)(*pcVar72)();
          return pOVar73;
        }
      }
code_?:
      uStack_64 = uVar63;
      *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
      FUN_?();
      pcVar72 = (code *)swi(3);
      pOVar73 = (ObjectSurfaceSnap_SnapResult *)(*pcVar72)();
      return pOVar73;
    }
  }
code_?:
  __return_storage_ptr__->Success = 0;
  *(undefined3 *)&__return_storage_ptr__->field_0x1 = 0;
  (__return_storage_ptr__->SittingPlane).m_Normal.x = 0.0;
  (__return_storage_ptr__->SittingPlane).m_Normal.y = 0.0;
  (__return_storage_ptr__->SittingPlane).m_Normal.z = 0.0;
  *(undefined8 *)&(__return_storage_ptr__->SittingPlane).m_Distance = 0;
  (__return_storage_ptr__->SittingPoint).y = 0.0;
  (__return_storage_ptr__->SittingPoint).z = 0.0;
  return __return_storage_ptr__;
}

