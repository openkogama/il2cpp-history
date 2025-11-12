
/* Vector3 CalculateEmbedVector(List`1[UnityEngine.Vector3], GameObject, Vector3,
   ObjectSurfaceSnap+Type) */

Vector3 * Assembly-CSharp.dll::RTG::ObjectSurfaceSnap::ObjectSurfaceSnap_CalculateEmbedVector
                    (Vector3 *__return_storage_ptr__,List_1_UnityEngine_Vector3_ *embedPoints,
                    GameObject *embedSurface,Vector3 *embedDirection,
                    ObjectSurfaceSnap_Type__Enum surfaceType,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::Vector3>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::Vector3>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::Vector3>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pOVar1 = ObjectSurfaceSnap_CreateSurfaceRaycaster(surfaceType,embedSurface,0,(MethodInfo *)0x0);
  fVar2 = _UNK_?;
  bVar3 = false;
  if (embedPoints == (List_1_UnityEngine_Vector3_ *)0x0) {
    FUN_?();
  }
  else {
    if (iRam_? != 0) {
      uVar4 = (uint)((ulonglong)&pLStack_5 >> 0xc);
      uVar6 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
      do {
        uVar7 = *(ulonglong *)(uVar6 * 8 + 0xADDR);
        puVar8 = (ulonglong *)(uVar6 * 8 + 0xADDR);
        LOCK();
        bVar9 = uVar7 == *puVar8;
        if (bVar9) {
          *puVar8 = uVar7 | 1L << (uVar4 & 0x3f);
        }
        UNLOCK();
      } while (!bVar9);
    }
    uVar4 = _UNK_?;
    fVar10 = _UNK_?;
    uStack_11 = (embedPoints->fields)._version;
    lStack_12 = (ulonglong)uStack_11 << 0x20;
    uStack_13 = 0;
    uStack_14 = 0;
    uStack_15 = 0;
    uStack_16 = (List_1_UnityEngine_Vector3_ *)0x0;
    uStack_17 = 0;
    uStack_18 = 0;
    puStack_19 = &uStack_20;
    pLStack_5 = embedPoints;
    while( true ) {
      uStack_20 = embedPoints;
      cVar21 = FUN_?(&uStack_20,
                             MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::Vector3>__MoveNext__
                            );
      pLVar22 = uStack_16;
      if (cVar21 == '\0') {
        if (bVar3) {
          if (fVar2 < 0.0) {
            fVar2 = (float)FUN_?(fVar2);
          }
          else {
            fVar2 = SQRT(fVar2);
          }
          uVar23 = embedDirection->x;
          fVar10 = embedDirection->y;
          fVar24 = embedDirection->z;
          __return_storage_ptr__->x = (float)uVar23 * fVar2;
          __return_storage_ptr__->y = fVar10 * fVar2;
          __return_storage_ptr__->z = fVar24 * fVar2;
        }
        else {
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__UnityEngine__Vector3);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pVVar25 = TypeInfo__UnityEngine__Vector3->static_fields;
          fVar2 = (pVVar25->zeroVector).y;
          __return_storage_ptr__->x = (pVVar25->zeroVector).x;
          __return_storage_ptr__->y = fVar2;
          __return_storage_ptr__->z = (pVVar25->zeroVector).z;
        }
        return __return_storage_ptr__;
      }
      fStack_26 = (float)uStack_16;
      fStack_27 = uStack_16._4_4_;
      fVar28 = (float)uStack_17;
      pLStack_29 = *(List_1_UnityEngine_Vector3_ **)embedDirection;
      fVar24 = (float)((uint)pLStack_29 ^ uVar4);
      fVar30 = (float)((uint)((ulonglong)pLStack_29 >> 0x20) ^ uVar4);
      fVar31 = (float)((uint)embedDirection->z ^ uVar4);
      uStack_32 = CONCAT44(fVar30,fVar24);
      fStack_33 = fVar31;
      fVar34 = (float)FUN_?(&uStack_32);
      if (fVar10 < fVar34) {
        fVar24 = fVar24 / fVar34;
        fVar30 = fVar30 / fVar34;
        fVar31 = fVar31 / fVar34;
      }
      else {
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__UnityEngine__Vector3);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pVVar25 = TypeInfo__UnityEngine__Vector3->static_fields;
        fVar24 = (pVVar25->zeroVector).x;
        fVar30 = (pVVar25->zeroVector).y;
        fVar31 = (pVVar25->zeroVector).z;
      }
      uStack_35 = CONCAT44(fVar30,fVar24);
      if (pOVar1 == (ObjectSurfaceSnap_SurfaceRaycaster *)0x0) break;
      pLStack_29 = pLVar22;
      pLStack_5 = pLVar22;
      lStack_12 = CONCAT44(fVar24,fVar28);
      uStack_13 = CONCAT44(fVar31,fVar30);
      method_00 = (pOVar1->klass->vtable).__unknown.method;
      fStack_36 = fVar28;
      fStack_37 = fVar24;
      lVar38 = (*(pOVar1->klass->vtable).__unknown.methodPtr)(pOVar1,&pLStack_5);
      embedPoints = uStack_20;
      if (lVar38 == 0) {
        VStack_39.x = embedDirection->x;
        VStack_39.y = embedDirection->y;
        VStack_39.z = embedDirection->z;
        pVVar40 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                            (aVStack_41,&VStack_39,method_00);
        uStack_35._0_4_ = pVVar40->x;
        uStack_35._4_4_ = pVVar40->y;
        pLStack_29 = pLVar22;
        pLStack_5 = pLVar22;
        lStack_12 = CONCAT44((undefined4)uStack_35,fVar28);
        uStack_13 = CONCAT44(pVVar40->z,uStack_35._4_4_);
        fStack_36 = fVar28;
        fStack_37 = (float)(undefined4)uStack_35;
        lVar38 = (*(pOVar1->klass->vtable).__unknown.methodPtr)
                           (pOVar1,&pLStack_5,(pOVar1->klass->vtable).__unknown.method);
        embedPoints = uStack_20;
        if (lVar38 != 0) {
          pLStack_29 = *(List_1_UnityEngine_Vector3_ **)(lVar38 + 0x18);
          fVar24 = fStack_26 - SUB84(pLStack_29,0);
          fVar30 = fStack_27 - (float)((ulonglong)pLStack_29 >> 0x20);
          fVar28 = fVar28 - *(float *)(lVar38 + 0x20);
          fVar24 = fVar30 * fVar30 + fVar24 * fVar24 + fVar28 * fVar28;
          if (fVar2 < fVar24) {
            bVar3 = true;
            fVar2 = fVar24;
          }
        }
      }
    }
  }
  FUN_?();
  FUN_?();
  pcVar42 = (code *)swi(3);
  pVVar40 = (Vector3 *)(*pcVar42)();
  return pVVar40;
}


/* Vector3 CalculateSitOnSurfaceOffset(OBB, Plane, Single) */

Vector3 * Assembly-CSharp.dll::RTG::ObjectSurfaceSnap::ObjectSurfaceSnap_CalculateSitOnSurfaceOffset
                    (Vector3 *__return_storage_ptr__,OBB *obb,Plane *surfacePlane,
                    float offsetFromSurface,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                 );
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
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                ((MethodInfo *)0x0);
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
        fVar14 = fVar10 * (float)uVar13 + fVar9 * (float)uVar12 + fVar11 * pVVar8->vector[uVar2].z +
                 surfacePlane->m_Distance;
        uVar15 = pVVar8->vector[uVar2].x;
        uVar16 = pVVar8->vector[uVar2].y;
        fVar5 = pVVar8->vector[uVar2].z;
        fVar4 = pVVar8->vector[uVar2].z;
        fVar17 = (surfacePlane->m_Normal).z;
        __return_storage_ptr__->x =
             (((float)uVar15 - fVar9 * fVar14) - (float)uVar15) + fVar9 * offsetFromSurface;
        __return_storage_ptr__->y =
             (((float)uVar16 - fVar10 * fVar14) - (float)uVar16) + fVar10 * offsetFromSurface;
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

Vector3 * Assembly-CSharp.dll::RTG::ObjectSurfaceSnap::
          ObjectSurfaceSnap_CalculateSitOnSurfaceOffset_1
                    (Vector3 *__return_storage_ptr__,AABB *aabb,Plane *surfacePlane,
                    float offsetFromSurface,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                 );
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
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                ((MethodInfo *)0x0);
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
        fVar14 = fVar10 * (float)uVar13 + fVar9 * (float)uVar12 + fVar11 * pVVar8->vector[uVar2].z +
                 surfacePlane->m_Distance;
        uVar15 = pVVar8->vector[uVar2].x;
        uVar16 = pVVar8->vector[uVar2].y;
        fVar5 = pVVar8->vector[uVar2].z;
        fVar4 = pVVar8->vector[uVar2].z;
        fVar17 = (surfacePlane->m_Normal).z;
        __return_storage_ptr__->x =
             (((float)uVar15 - fVar9 * fVar14) - (float)uVar15) + fVar9 * offsetFromSurface;
        __return_storage_ptr__->y =
             (((float)uVar16 - fVar10 * fVar14) - (float)uVar16) + fVar10 * offsetFromSurface;
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


/* ObjectSurfaceSnap+SurfaceRaycaster CreateSurfaceRaycaster(ObjectSurfaceSnap+Type, GameObject,
   Boolean) */

ObjectSurfaceSnap_SurfaceRaycaster *
Assembly-CSharp.dll::RTG::ObjectSurfaceSnap::ObjectSurfaceSnap_CreateSurfaceRaycaster
          (ObjectSurfaceSnap_Type__Enum surfaceType,GameObject *surfaceObject,bool raycastReverse,
          MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__ObjectSurfaceSnap__MeshSurfaceRaycaster);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((1 < surfaceType - ObjectSurfaceSnap_Type__Enum_Mesh) &&
     (surfaceType != ObjectSurfaceSnap_Type__Enum_SphericalMesh)) {
    return (ObjectSurfaceSnap_SurfaceRaycaster *)0x0;
  }
  pOVar1 = (ObjectSurfaceSnap_SurfaceRaycaster *)
           FUN_?(TypeInfo__RTG__ObjectSurfaceSnap__MeshSurfaceRaycaster);
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

ObjectSurfaceSnap_SnapResult *
Assembly-CSharp.dll::RTG::ObjectSurfaceSnap::ObjectSurfaceSnap_SnapHierarchy
          (ObjectSurfaceSnap_SnapResult *__return_storage_ptr__,GameObject *root,
          ObjectSurfaceSnap_SnapConfig *snapConfig,MethodInfo *method)

{
  lVar1 = FUN_?();
  lVar1 = -lVar1;
  if (cRam_? == '\0') {
    *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
    FUN_?(&TypeInfo__RTG__BoxMath);
    LOCK();
    *(undefined4 *)(&stack0xffffffffffffffd8 + lVar1) =
         *(undefined4 *)(&stack0xffffffffffffffd8 + lVar1);
    UNLOCK();
    *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
    FUN_?(&TypeInfo__RTG__GameObjectEx);
    LOCK();
    *(undefined4 *)(&stack0xffffffffffffffd8 + lVar1) =
         *(undefined4 *)(&stack0xffffffffffffffd8 + lVar1);
    UNLOCK();
    *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Count__
                 );
    LOCK();
    *(undefined4 *)(&stack0xffffffffffffffd8 + lVar1) =
         *(undefined4 *)(&stack0xffffffffffffffd8 + lVar1);
    UNLOCK();
    *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
    FUN_?(&TypeInfo__RTG__ObjectBounds);
    LOCK();
    *(undefined4 *)(&stack0xffffffffffffffd8 + lVar1) =
         *(undefined4 *)(&stack0xffffffffffffffd8 + lVar1);
    UNLOCK();
    *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
    FUN_?(&TypeInfo__RTG__ObjectVertexCollect);
    LOCK();
    *(undefined4 *)(&stack0xffffffffffffffd8 + lVar1) =
         *(undefined4 *)(&stack0xffffffffffffffd8 + lVar1);
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
      pTVar65 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                          (root,(MethodInfo *)0x0);
      fVar66 = (snapConfig->SurfaceHitPlane).m_Normal.x;
      fVar67 = (snapConfig->SurfaceHitPlane).m_Normal.y;
      fVar68 = (snapConfig->SurfaceHitPlane).m_Normal.z;
      fVar69 = (snapConfig->SurfaceHitPlane).m_Distance;
      uVar63 = uStack_64;
      if (pTVar65 != (Transform *)0x0) {
        if (cRam_? == '\0') {
          *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                       );
          LOCK();
          *(undefined4 *)(&stack0xffffffffffffffd8 + lVar1) =
               *(undefined4 *)(&stack0xffffffffffffffd8 + lVar1);
          UNLOCK();
          cRam_? = '\x01';
        }
        stack0xffffffffffffed68 = 0;
        fStack_70 = 0.0;
        pvVar71 = (pTVar65->fields)._._.m_CachedPtr;
        if (pvVar71 == (void *)0x0) {
          *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar65,(MethodInfo *)0x0);
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
        fVar69 = fStack_74 * fVar67 + (float)auStack_75._8_4_ * fVar66 +
                  fStack_70 * fVar68 + fVar69;
        auVar76 = *(undefined1 (*) [16])&(snapConfig->SurfaceHitNormal).y;
        fVar77 = snapConfig->OffsetFromSurface;
        fStack_78 = (fStack_70 - fVar69 * fVar68) + auVar76._4_4_ * fVar77;
        uStack_79 = CONCAT44((fStack_74 - fVar69 * fVar67) + auVar76._0_4_ * fVar77,
                              ((float)auStack_75._8_4_ - fVar69 * fVar66) +
                              (snapConfig->SurfaceHitNormal).x * fVar77);
        if (cRam_? == '\0') {
          *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                       );
          LOCK();
          *(undefined4 *)(&stack0xffffffffffffffd8 + lVar1) =
               *(undefined4 *)(&stack0xffffffffffffffd8 + lVar1);
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
            FUN_?(&
                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                         );
            LOCK();
            *(undefined4 *)(&stack0xffffffffffffffd8 + lVar1) =
                 *(undefined4 *)(&stack0xffffffffffffffd8 + lVar1);
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
            *(ulonglong *)&(__return_storage_ptr__->SittingPlane).m_Distance =
                 CONCAT44(uStack_91,uStack_90);
            (__return_storage_ptr__->SittingPoint).y = (float)uStack_92;
            (__return_storage_ptr__->SittingPoint).z = (float)uStack_86;
            return __return_storage_ptr__;
          }
          *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar65,(MethodInfo *)0x0);
          pcVar72 = (code *)swi(3);
          pOVar73 = (ObjectSurfaceSnap_SnapResult *)(*pcVar72)();
          return pOVar73;
        }
        *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar65,(MethodInfo *)0x0);
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
  *(undefined8 *)((longlong)apMStackX_10 + lVar1 + 8) = *(undefined8 *)&snapConfig->SurfaceHitPoint
  ;
  *(undefined8 *)((longlong)apMStackX_10 + lVar1 + 0x10) = uVar63;
  pGVar96 = snapConfig->SurfaceObject;
  *(undefined8 *)(&stack0x00000038 + lVar1) =
       *(undefined8 *)&(snapConfig->SurfaceHitPlane).m_Normal.z;
  *(GameObject **)(&stack0x00000040 + lVar1) = pGVar96;
  if (snapConfig->SurfaceType == 0) {
    uVar97 = 1;
  }
  else {
    uVar63 = *(undefined8 *)&(snapConfig->SurfaceHitPoint).z;
    uVar93 = *(undefined8 *)&(snapConfig->SurfaceHitNormal).y;
    uVar94 = *(undefined8 *)&(snapConfig->SurfaceHitPlane).m_Normal;
    uVar97 = (uint)(snapConfig->SurfaceType == 2);
    *(undefined8 *)((longlong)apMStackX_10 + lVar1 + 8) =
         *(undefined8 *)&snapConfig->SurfaceHitPoint;
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
  *(undefined8 *)((longlong)apMStackX_10 + lVar1 + 8) = *(undefined8 *)&snapConfig->SurfaceHitPoint
  ;
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
  *(undefined8 *)((longlong)apMStackX_10 + lVar1 + 8) = *(undefined8 *)&snapConfig->SurfaceHitPoint
  ;
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
    pTVar65 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                        (root,(MethodInfo *)0x0);
    uVar63 = *(undefined8 *)&(snapConfig->SurfaceHitPoint).z;
    uVar93 = *(undefined8 *)&(snapConfig->SurfaceHitNormal).y;
    uVar94 = *(undefined8 *)&(snapConfig->SurfaceHitPlane).m_Normal;
    *(undefined8 *)((longlong)apMStackX_10 + lVar1 + 8) =
         *(undefined8 *)&snapConfig->SurfaceHitPoint;
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
      pOVar102 = ObjectBounds::ObjectBounds_CalcHierarchyWorldOBB
                          (&OStack_103,root,&OStack_101,(MethodInfo *)0x0);
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
          *(undefined8 *)(&stack0x00000028 + lVar1) =
               *(undefined8 *)&(snapConfig->SurfaceHitNormal).y;
          *(undefined8 *)(&stack0x00000030 + lVar1) = uVar63;
          uVar63 = uStack_64;
          if (pGVar96 != (GameObject *)0x0) {
            *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
            pTStack_111 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                           GameObject_get_transform(pGVar96,(MethodInfo *)0x0);
            uVar63 = uStack_64;
            if (pTStack_111 != (Transform *)0x0) {
              *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
              pVVar112 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                                   (&VStack_113,pTStack_111,(MethodInfo *)0x0);
              uVar114._0_4_ = pVVar112->x;
              uVar114._4_4_ = pVVar112->y;
              fVar66 = pVVar112->z;
              uStack_51 = uVar114;
              fStack_52 = fVar66;
              uVar63 = uStack_64;
              if (pTVar65 != (Transform *)0x0) {
                pMVar115 = (MethodInfo *)0x0;
                *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
                pVVar112 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                           Transform_get_position(&VStack_116,pTVar65,(MethodInfo *)0x0);
                uVar117 = pVVar112->x;
                uVar118 = pVVar112->y;
                VStack_119.z = pVVar112->z - fVar66;
                VStack_119.y = (float)uVar118 - (float)uVar114._4_4_;
                VStack_119.x = (float)uVar117 - (float)(undefined4)uVar114;
                *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
                VStack_120._0_8_ = VStack_119._0_8_;
                VStack_120.z = VStack_119.z;
                pVVar112 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_normalized
                                     (&VStack_121,&VStack_119,pMVar115);
                fVar66 = pVVar112->z;
                uVar122._0_4_ = pVVar112->x;
                uVar122._4_4_ = pVVar112->y;
                *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
                afStackX_8[0] = fVar66;
                pVVar112 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                           Transform_get_lossyScale(&VStack_123,pTStack_111,(MethodInfo *)0x0);
                uVar124 = pVVar112->x;
                uVar125 = pVVar112->y;
                fVar67 = (float)((uint)pVVar112->z & _UNK_?);
                auStack_75._0_4_ = (float)uVar93;
                auStack_75._4_4_ = SUB84(uVar93,4);
                fVar68 = (float)(uVar125 & _UNK_?);
                if ((float)(uVar125 & _UNK_?) <= (float)(uVar124 & _UNK_?)) {
                  fVar68 = (float)(uVar124 & _UNK_?);
                }
                if (fVar67 <= fVar68) {
                  fVar67 = fVar68;
                }
                pTStack_111 = (Transform *)CONCAT44(pTStack_111._4_4_,auVar107._8_4_);
                *(float *)(&stack0x00000048 + lVar1) = fStack_109;
                QStack_126.x = QStack_110.x;
                QStack_126.y = QStack_110.y;
                fVar67 = fVar67 * _UNK_?;
                VStack_127.x = (float)((undefined4)uVar122 ^ _UNK_?);
                VStack_127.y = (float)(uVar122._4_4_ ^ _UNK_?);
                VStack_127.z = (float)((uint)fVar66 ^ _UNK_?);
                QStack_126.z = fVar105;
                QStack_126.w = fVar106;
                if (*(int *)&(TypeInfo__RTG__BoxMath->_1).field_0x1c == 0) {
                  *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
                  FUN_?();
                  afStackX_8[0] = fVar66;
                  VStack_128.z = *(float *)(&stack0x00000048 + lVar1);
                  auStack_129._40_4_ = uVar104;
                  uVar130 = uVar122 & 0xffffffff;
                }
                else {
                  VStack_128.z = fStack_109;
                  auStack_129._40_4_ = apMStackX_10[0]._0_4_;
                  uVar130 = uVar122;
                }
                QStack_131.x = QStack_126.x;
                QStack_131.y = QStack_126.y;
                QStack_131.z = QStack_126.z;
                QStack_131.w = QStack_126.w;
                VStack_132.x = (float)auStack_75._0_4_;
                VStack_132.y = (float)auStack_75._4_4_;
                VStack_132.z = pTStack_111._0_4_;
                VStack_128.x = (float)auVar107._12_4_;
                VStack_128.y = fStack_108;
                *(undefined8 *)(&stack0xfffffffffffffff8 + lVar1) = 0;
                *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
                BVar133 = BoxMath::BoxMath_GetMostAlignedFace
                                   (&VStack_128,&VStack_132,&QStack_131,&VStack_127,
                                    *(MethodInfo **)(&stack0xfffffffffffffff8 + lVar1));
                fVar68 = (float)uVar130;
                if (*(int *)&(TypeInfo__RTG__ObjectVertexCollect->_1).field_0x1c == 0) {
                  *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
                  FUN_?();
                  afStackX_8[0] = fVar66;
                  auStack_129._40_4_ = uVar104;
                  fVar68 = (float)(undefined4)uVar122;
                }
                *(undefined8 *)(&stack0xfffffffffffffff8 + lVar1) = 0;
                *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
                pLVar134 = ObjectVertexCollect::ObjectVertexCollect_CollectHierarchyVerts
                                     (root,BVar133,_UNK_?,_UNK_?,
                                      *(MethodInfo **)(&stack0xfffffffffffffff8 + lVar1));
                fStack_135 = fVar66 * fVar67 + fStack_52;
                fStack_136 = fVar68 * fVar67 + (float)uStack_51;
                fStack_137 = (float)uVar122._4_4_ * fVar67 + uStack_51._4_4_;
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
                auStack_129._0_4_ = auVar107._0_4_;
                auStack_129._4_4_ = auVar107._4_4_;
                auStack_129._8_4_ = auVar107._8_4_;
                auStack_129._12_4_ = auVar107._12_4_;
                PStack_146.m_Normal.x = (float)auStack_53._0_4_;
                PStack_146.m_Normal.y = (float)auStack_53._4_4_;
                PStack_146.m_Normal.z = (float)auStack_53._8_4_;
                PStack_146.m_Distance = (float)auStack_53._12_4_;
                auStack_129._16_16_ = auVar76;
                auStack_129._32_4_ = fVar105;
                auStack_129._36_4_ = fVar106;
                *(undefined8 *)(&stack0xfffffffffffffff8 + lVar1) = 0;
                *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
                pVVar112 = ObjectSurfaceSnap_CalculateSitOnSurfaceOffset
                                     (&VStack_147,(OBB *)auStack_129,&PStack_146,0.0,
                                      *(MethodInfo **)(&stack0xfffffffffffffff8 + lVar1));
                fVar67 = pVVar112->z;
                uVar148._0_4_ = pVVar112->x;
                uVar148._4_4_ = pVVar112->y;
                *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
                VStack_54.z = fVar67;
                pVVar112 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                           Transform_get_position(&VStack_149,pTVar65,(MethodInfo *)0x0);
                uVar150 = pVVar112->x;
                uVar151 = pVVar112->y;
                VStack_152.z = fVar67 + pVVar112->z;
                VStack_152.y = uVar148._4_4_ + (float)uVar151;
                VStack_152.x = (float)uVar148 + (float)uVar150;
                *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
                UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                          (pTVar65,&VStack_152,(MethodInfo *)0x0);
                fStack_153 = fVar67 + fStack_109;
                uStack_154 = CONCAT44(uVar148._4_4_ + fStack_108,
                                      (float)auVar107._12_4_ + (float)uVar148);
                *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
                VStack_54._0_8_ = uVar148;
                VStack_155._0_8_ = uVar148;
                VStack_155.z = fVar67;
                Vector3Ex::Vector3Ex_OffsetPoints(pLVar134,&VStack_155,(MethodInfo *)0x0);
                *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
                pVVar112 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                           Transform_get_position(&VStack_156,pTVar65,(MethodInfo *)0x0);
                uVar157 = pVVar112->x;
                uVar158 = pVVar112->y;
                fVar67 = snapConfig->OffsetFromSurface;
                VStack_159.z = fVar66 * fVar67 + pVVar112->z;
                VStack_159.y = (float)uVar122._4_4_ * fVar67 + (float)uVar158;
                VStack_159.x = (float)(undefined4)uVar122 * fVar67 + (float)uVar157;
                *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
                UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                          (pTVar65,&VStack_159,(MethodInfo *)0x0);
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
        *(undefined8 *)((longlong)apMStackX_10 + lVar1 + 8) =
             *(undefined8 *)&snapConfig->SurfaceHitPoint;
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
        fVar66 = (float)((uint)fVar66 ^ _UNK_?);
        uStack_167 = *(undefined8 *)&(snapConfig->SurfaceHitPlane).m_Normal.z;
        pGStack_168 = snapConfig->SurfaceObject;
        fStack_169 = fStack_109;
        uStack_170 = CONCAT44((uint)fVar67 ^ _UNK_?,
                              (uint)(snapConfig->SurfaceHitNormal).x ^ _UNK_?);
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
          *(undefined4 *)(&stack0xffffffffffffffd8 + lVar1) =
               *(undefined4 *)(&stack0xffffffffffffffd8 + lVar1);
          UNLOCK();
          cRam_? = '\x01';
        }
        pVVar175 = TypeInfo__UnityEngine__Vector3->static_fields;
        uVar176 = (pVVar175->upVector).x;
        uVar177 = (pVVar175->upVector).y;
        fVar66 = (float)((uint)(pVVar175->upVector).z ^ _UNK_?);
        uStack_170 = CONCAT44(uVar177 ^ _UNK_?,uVar176 ^ _UNK_?);
        uStack_178 = uStack_170;
        fStack_179 = fVar66;
      }
      uVar97 = _UNK_?;
      uStack_180 = CONCAT44(fStack_108,auVar107._12_4_);
      fStack_181 = fStack_109;
      uStack_182._0_4_ = (float)uStack_170;
      fVar67 = (float)uStack_182;
      uStack_182._4_4_ = (float)((ulonglong)uStack_170 >> 0x20);
      fVar68 = uStack_182._4_4_;
      fStack_183 = fStack_109;
      *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
      uStack_182 = uStack_170;
      fStack_184 = fVar66;
      fStack_185 = fVar66;
      uStack_186 = uStack_180;
      fVar69 = (float)FUN_?(&uStack_170);
      if (_UNK_? < fVar69) {
        fStack_187 = fVar66 / fVar69;
        uStack_188 = CONCAT44(fVar68 / fVar69,fVar67 / fVar69);
        uStack_189 = uStack_188;
        fStack_190 = fStack_187;
      }
      else {
        if (cRam_? == '\0') {
          *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
          FUN_?(&TypeInfo__UnityEngine__Vector3);
          LOCK();
          *(undefined4 *)(&stack0xffffffffffffffd8 + lVar1) =
               *(undefined4 *)(&stack0xffffffffffffffd8 + lVar1);
          UNLOCK();
          cRam_? = '\x01';
        }
        pVVar175 = TypeInfo__UnityEngine__Vector3->static_fields;
        uStack_188._0_4_ = (pVVar175->zeroVector).x;
        uStack_188._4_4_ = (pVVar175->zeroVector).y;
        fStack_187 = (pVVar175->zeroVector).z;
      }
      uStack_191 = (undefined4)uStack_188;
      uStack_192 = (undefined4)((ulonglong)uStack_188 >> 0x20);
      uVar63 = uStack_64;
      fStack_193 = fStack_187;
      if (pOVar99 == (ObjectSurfaceSnap_SurfaceRaycaster *)0x0) goto code_?;
      uStack_194 = CONCAT44(uStack_191,fStack_183);
      uStack_195 = CONCAT44(fStack_187,uStack_192);
      pIVar196 = (pOVar99->klass->vtable).__unknown.methodPtr;
      uStack_197 = uStack_186;
      pMVar115 = (pOVar99->klass->vtable).__unknown.method;
      *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
      lVar198 = (*pIVar196)(pOVar99,&uStack_197,pMVar115);
      pMVar115 = apMStackX_10[0];
      if (lVar198 != 0) {
        auStack_199 = auVar107;
        PStack_200.m_Normal._0_8_ = *(undefined8 *)(lVar198 + 0x34);
        PStack_200._8_8_ = *(undefined8 *)(lVar198 + 0x3c);
        auStack_201 = auVar76;
        fStack_202 = fVar105;
        fStack_203 = fVar106;
        bStack_204 = (bool)apMStackX_10[0];
        uStack_205 = apMStackX_10[0]._1_3_;
        *(undefined8 *)(&stack0xfffffffffffffff8 + lVar1) = 0;
        *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
        apMStackX_10[0] = pMVar115;
        pVVar112 = ObjectSurfaceSnap_CalculateSitOnSurfaceOffset
                             (&VStack_206,(OBB *)auStack_199,&PStack_200,0.0,
                              *(MethodInfo **)(&stack0xfffffffffffffff8 + lVar1));
        fStack_207 = pVVar112->z;
        uVar208._0_4_ = pVVar112->x;
        uVar208._4_4_ = pVVar112->y;
        afStackX_8[0] = fStack_207;
        uStack_45 = uVar208;
        fStack_46 = fStack_207;
        uVar63 = uStack_64;
        if (pTVar65 != (Transform *)0x0) {
          *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
          pVVar112 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                               (&VStack_209,pTVar65,(MethodInfo *)0x0);
          uVar210 = pVVar112->x;
          uVar211 = pVVar112->y;
          fStack_207 = fStack_207 + pVVar112->z;
          uStack_212 = CONCAT44((float)uVar208._4_4_ + (float)uVar211,
                                (float)(undefined4)uVar208 + (float)uVar210);
          if (cRam_? == '\0') {
            *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
            FUN_?(&
                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                         );
            LOCK();
            *(undefined4 *)(&stack0xffffffffffffffd8 + lVar1) =
                 *(undefined4 *)(&stack0xffffffffffffffd8 + lVar1);
            UNLOCK();
            cRam_? = '\x01';
          }
          pvVar71 = (pTVar65->fields)._._.m_CachedPtr;
          if (pvVar71 == (void *)0x0) {
            *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
            ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar65,(MethodInfo *)0x0);
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
          (*pcRam_?)(pvVar71,&uStack_212);
          if ((&stack0x00000048)[lVar1] != '\0') {
            VStack_213.x = (float)auVar107._12_4_ + (float)uStack_45;
            VStack_213.y = fStack_108 + uStack_45._4_4_;
            fStack_214 = fStack_109 + afStackX_8[0];
            uStack_215 = CONCAT44(VStack_213.y,VStack_213.x);
            uVar63 = *(undefined8 *)(lVar198 + 0x28);
            uVar216 = *(uint *)(lVar198 + 0x30);
            fVar217 = (float)((uint)uVar63 ^ uVar97);
            if (*(int *)&(TypeInfo__RTG__BoxMath->_1).field_0x1c == 0) {
              *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
              FUN_?();
              VStack_213.x = (float)uStack_215;
              VStack_213.y = (float)((ulonglong)uStack_215 >> 0x20);
            }
            VStack_218.x = fVar217;
            VStack_218.y = (float)((uint)((ulonglong)uVar63 >> 0x20) ^ uVar97);
            VStack_218.z = (float)(uVar216 ^ uVar97);
            QStack_219.x = QStack_110.x;
            QStack_219.y = QStack_110.y;
            QStack_219.z = fVar105;
            QStack_219.w = fVar106;
            VStack_220.x = (float)uVar93;
            VStack_220.y = SUB84(uVar93,4);
            VStack_220.z = (float)auVar107._8_4_;
            VStack_213.z = fStack_214;
            *(undefined8 *)(&stack0xfffffffffffffff8 + lVar1) = 0;
            *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
            BVar133 = BoxMath::BoxMath_GetMostAlignedFace
                               (&VStack_213,&VStack_220,&QStack_219,&VStack_218,
                                *(MethodInfo **)(&stack0xfffffffffffffff8 + lVar1));
            if (*(int *)&(TypeInfo__RTG__ObjectVertexCollect->_1).field_0x1c == 0) {
              *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
              FUN_?();
            }
            pMVar115 = (MethodInfo *)(ulonglong)BVar133;
            *(undefined8 *)(&stack0xfffffffffffffff8 + lVar1) = 0;
            *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
            pLVar134 = ObjectVertexCollect::ObjectVertexCollect_CollectHierarchyVerts
                                 (root,BVar133,_UNK_?,_UNK_?,
                                  *(MethodInfo **)(&stack0xfffffffffffffff8 + lVar1));
            *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
            pVVar112 = TriangPrismShape3D::TriangPrismShape3D_get_ModelUp(&VStack_221,pMVar115);
            uVar222 = pVVar112->x;
            fVar66 = pVVar112->y;
            fVar67 = pVVar112->z;
            fVar223 = (float)(uVar222 ^ uVar97);
            uVar224 = snapConfig->SurfaceType;
            pGVar96 = snapConfig->SurfaceObject;
            *(undefined8 *)((longlong)apMStackX_10 + lVar1 + -0x10) = 0;
            VStack_225.x = fVar223;
            VStack_225.y = (float)((uint)fVar66 ^ uVar97);
            VStack_225.z = (float)((uint)fVar67 ^ uVar97);
            *(undefined4 *)(&stack0xfffffffffffffff8 + lVar1) = uVar224;
            *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
            pVVar112 = ObjectSurfaceSnap_CalculateEmbedVector
                                 (&VStack_226,pLVar134,pGVar96,&VStack_225,
                                  *(ObjectSurfaceSnap_Type__Enum *)
                                   (&stack0xfffffffffffffff8 + lVar1),
                                  *(MethodInfo **)((longlong)apMStackX_10 + lVar1 + -0x10));
            uVar227 = pVVar112->x;
            uVar228 = pVVar112->y;
            fVar66 = pVVar112->z;
            *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
            pVVar112 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                                 (&VStack_229,pTVar65,(MethodInfo *)0x0);
            VStack_226.x = pVVar112->x;
            VStack_226.y = pVVar112->y;
            VStack_230.z = fVar66 + pVVar112->z;
            VStack_230.y = (float)uVar228 + VStack_226.y;
            VStack_230.x = (float)uVar227 + VStack_226.x;
            *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                      (pTVar65,&VStack_230,(MethodInfo *)0x0);
          }
          *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
          pVVar112 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                               (&VStack_231,pTVar65,(MethodInfo *)0x0);
          VStack_229.x = pVVar112->x;
          VStack_229.y = pVVar112->y;
          fVar66 = snapConfig->OffsetFromSurface;
          fStack_232 = fVar66 * *(float *)(lVar198 + 0x30) + pVVar112->z;
          uStack_233 = CONCAT44(fVar66 * (float)((ulonglong)*(undefined8 *)(lVar198 + 0x28) >> 0x20)
                                + VStack_229.y,
                                fVar66 * (float)*(undefined8 *)(lVar198 + 0x28) + VStack_229.x);
          if (cRam_? == '\0') {
            *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
            FUN_?(&
                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                         );
            LOCK();
            *(undefined4 *)(&stack0xffffffffffffffd8 + lVar1) =
                 *(undefined4 *)(&stack0xffffffffffffffd8 + lVar1);
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
            (*pcRam_?)(pvVar71,&uStack_233);
            uVar104 = *(undefined4 *)(lVar198 + 0x20);
            uStack_234 = (undefined4)*(undefined8 *)(lVar198 + 0x18);
            uStack_235 = (undefined4)((ulonglong)*(undefined8 *)(lVar198 + 0x18) >> 0x20);
            uStack_236 = (undefined4)*(undefined8 *)(lVar198 + 0x34);
            uStack_237 = (undefined4)((ulonglong)*(undefined8 *)(lVar198 + 0x34) >> 0x20);
            uStack_238 = (undefined4)*(undefined8 *)(lVar198 + 0x3c);
            uStack_239 = (undefined4)((ulonglong)*(undefined8 *)(lVar198 + 0x3c) >> 0x20);
            __return_storage_ptr__->Success = (char)1;
            *(int3 *)&__return_storage_ptr__->field_0x1 = (int3)(1 >> 8);
            (__return_storage_ptr__->SittingPlane).m_Normal.x = (float)uStack_236;
            (__return_storage_ptr__->SittingPlane).m_Normal.y = (float)uStack_237;
            (__return_storage_ptr__->SittingPlane).m_Normal.z = (float)uStack_238;
            *(ulonglong *)&(__return_storage_ptr__->SittingPlane).m_Distance =
                 CONCAT44(uStack_234,uStack_239);
            (__return_storage_ptr__->SittingPoint).y = (float)uStack_235;
            (__return_storage_ptr__->SittingPoint).z = (float)uVar104;
            return __return_storage_ptr__;
          }
          *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar65,(MethodInfo *)0x0);
          pcVar72 = (code *)swi(3);
          pOVar73 = (ObjectSurfaceSnap_SnapResult *)(*pcVar72)();
          return pOVar73;
        }
        goto code_?;
      }
      if (afStackX_8[0]._0_1_ == '\0') {
        iVar100 = snapConfig->SurfaceType;
        uVar63 = *(undefined8 *)&(snapConfig->SurfaceHitPoint).z;
        uVar240._0_4_ = (snapConfig->SurfaceHitNormal).y;
        uVar240._4_4_ = (snapConfig->SurfaceHitNormal).z;
        uVar241._0_4_ = (snapConfig->SurfaceHitPlane).m_Normal.x;
        uVar241._4_4_ = (snapConfig->SurfaceHitPlane).m_Normal.y;
        *(undefined8 *)((longlong)apMStackX_10 + lVar1 + 8) =
             *(undefined8 *)&snapConfig->SurfaceHitPoint;
        *(undefined8 *)((longlong)apMStackX_10 + lVar1 + 0x10) = uVar63;
        uVar63 = *(undefined8 *)&(snapConfig->SurfaceHitPlane).m_Normal.z;
        pGVar96 = snapConfig->SurfaceObject;
        *(undefined8 *)(&stack0x00000028 + lVar1) = uVar240;
        *(undefined8 *)(&stack0x00000030 + lVar1) = uVar241;
        *(undefined8 *)(&stack0x00000038 + lVar1) = uVar63;
        *(GameObject **)(&stack0x00000040 + lVar1) = pGVar96;
        if (iVar100 == 1) {
          auStack_80._32_4_ = (undefined4)uVar240;
          auStack_80._36_4_ = uVar240._4_4_;
          auStack_83._0_4_ = (float)uVar241;
          auStack_83._4_4_ = uVar241._4_4_;
          uVar63 = *(undefined8 *)&(snapConfig->SurfaceHitPlane).m_Normal.z;
          bStack_242 = (bool)apMStackX_10[0];
          uStack_243 = apMStackX_10[0]._1_3_;
          auStack_244 = auVar107;
          auStack_83._8_4_ = (float)uVar63;
          auStack_83._12_4_ = SUB84(uVar63,4);
          pGStack_84 = snapConfig->SurfaceObject;
          *(undefined8 *)(&stack0xfffffffffffffff8 + lVar1) = 0;
          auStack_245 = auVar76;
          PStack_246.m_Normal.x = (float)uVar241;
          PStack_246.m_Normal.y = uVar241._4_4_;
          PStack_246.m_Normal.z = (float)uVar63;
          PStack_246.m_Distance = SUB84(uVar63,4);
          fStack_247 = fVar105;
          fStack_248 = fVar106;
          *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
          apMStackX_10[0] = pMVar115;
          pVVar112 = ObjectSurfaceSnap_CalculateSitOnSurfaceOffset
                               (&VStack_249,(OBB *)auStack_244,&PStack_246,0.0,
                                *(MethodInfo **)(&stack0xfffffffffffffff8 + lVar1));
          uVar63 = uStack_64;
          if (pTVar65 != (Transform *)0x0) {
            uVar250 = pVVar112->x;
            uVar251 = pVVar112->y;
            fVar66 = pVVar112->z;
            *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
            pVVar112 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                                 (&VStack_252,pTVar65,(MethodInfo *)0x0);
            uVar253 = pVVar112->x;
            uVar254 = pVVar112->y;
            VStack_255.z = fVar66 + pVVar112->z;
            VStack_255.y = (float)uVar251 + (float)uVar254;
            VStack_255.x = (float)uVar250 + (float)uVar253;
            *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                      (pTVar65,&VStack_255,(MethodInfo *)0x0);
            *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
            pVVar112 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                                 (&VStack_256,pTVar65,(MethodInfo *)0x0);
            uVar257 = pVVar112->x;
            uVar258 = pVVar112->y;
            fVar66 = snapConfig->OffsetFromSurface;
            VStack_259.z = (snapConfig->SurfaceHitNormal).z * fVar66 + pVVar112->z;
            VStack_259.y = (snapConfig->SurfaceHitNormal).y * fVar66 + (float)uVar258;
            VStack_259.x = (snapConfig->SurfaceHitNormal).x * fVar66 + (float)uVar257;
            *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                      (pTVar65,&VStack_259,(MethodInfo *)0x0);
            fVar66 = (snapConfig->SurfaceHitPlane).m_Normal.x;
            fVar67 = (snapConfig->SurfaceHitPlane).m_Normal.y;
            fVar68 = (snapConfig->SurfaceHitPlane).m_Normal.z;
            fVar77 = (snapConfig->SurfaceHitPlane).m_Normal.y;
            fVar260 = (snapConfig->SurfaceHitPlane).m_Normal.z;
            fVar69 = (snapConfig->SurfaceHitPlane).m_Distance;
            fVar261 = fStack_108 * fVar67 + (float)auVar107._12_4_ * fVar66 +
                      fStack_109 * fVar68 + fVar69;
            __return_storage_ptr__->Success = (char)1;
            *(int3 *)&__return_storage_ptr__->field_0x1 = (int3)(1 >> 8);
            (__return_storage_ptr__->SittingPlane).m_Normal.x = fVar66;
            (__return_storage_ptr__->SittingPlane).m_Normal.y = fVar77;
            (__return_storage_ptr__->SittingPlane).m_Normal.z = fVar260;
            (__return_storage_ptr__->SittingPlane).m_Distance = fVar69;
            (__return_storage_ptr__->SittingPoint).x = (float)auVar107._12_4_ - fVar261 * fVar66;
            (__return_storage_ptr__->SittingPoint).y = fStack_108 - fVar261 * fVar67;
            (__return_storage_ptr__->SittingPoint).z = fStack_109 - fVar261 * fVar68;
            return __return_storage_ptr__;
          }
          goto code_?;
        }
      }
    }
    else if ((char)uVar97 == '\0') {
      uVar63 = *(undefined8 *)snapConfig;
      uVar262._0_4_ = (float)snapConfig->SurfaceType;
      uVar262._4_4_ = snapConfig->OffsetFromSurface;
      uVar263._0_4_ = (snapConfig->SurfaceHitPoint).x;
      uVar263._4_4_ = (snapConfig->SurfaceHitPoint).y;
      uVar93 = *(undefined8 *)&(snapConfig->SurfaceHitPoint).z;
      if (afStackX_8[0]._0_1_ != '\0') {
        *(undefined8 *)((longlong)apMStackX_10 + lVar1 + 8) = uVar263;
        *(undefined8 *)((longlong)apMStackX_10 + lVar1 + 0x10) = uVar93;
        pGVar96 = snapConfig->SurfaceObject;
        *(undefined8 *)((longlong)afStackX_8 + lVar1) = uVar63;
        *(undefined8 *)((longlong)apMStackX_10 + lVar1) = uVar262;
        uVar63 = *(undefined8 *)&(snapConfig->SurfaceHitPlane).m_Normal;
        *(undefined8 *)(&stack0x00000028 + lVar1) =
             *(undefined8 *)&(snapConfig->SurfaceHitNormal).y;
        *(undefined8 *)(&stack0x00000030 + lVar1) = uVar63;
        uVar63 = uStack_64;
        if (pGVar96 != (GameObject *)0x0) {
          *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
          pTVar264 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                               (pGVar96,(MethodInfo *)0x0);
          uVar63 = uStack_64;
          if (pTVar264 != (Transform *)0x0) {
            *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
            pVVar112 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                                 (&VStack_265,pTVar264,(MethodInfo *)0x0);
            VStack_231.x = pVVar112->x;
            VStack_231.y = pVVar112->y;
            fVar66 = pVVar112->z;
            VStack_35._0_8_ = VStack_231._0_8_;
            VStack_35.z = fVar66;
            uVar63 = uStack_64;
            if (pTVar65 != (Transform *)0x0) {
              *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
              pVVar112 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                                   (&VStack_266,pTVar65,(MethodInfo *)0x0);
              uVar267 = pVVar112->x;
              uVar268 = pVVar112->y;
              fVar69 = (float)uVar267 - VStack_231.x;
              fVar68 = (float)uVar268 - VStack_231.y;
              fVar66 = pVVar112->z - fVar66;
              VStack_119.y = fVar68;
              VStack_119.x = fVar69;
              *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
              VStack_119.z = fVar66;
              VStack_269._0_8_ = VStack_119._0_8_;
              VStack_269.z = fVar66;
              VStack_270._0_8_ = VStack_119._0_8_;
              VStack_270.z = fVar66;
              fVar67 = (float)FUN_?(&VStack_269);
              if (_UNK_? < fVar67) {
                fVar66 = fVar66 / fVar67;
                VStack_271.y = fVar68 / fVar67;
                VStack_271.x = fVar69 / fVar67;
                VStack_272._0_8_ = VStack_271._0_8_;
                VStack_272.z = fVar66;
              }
              else {
                if (cRam_? == '\0') {
                  *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
                  FUN_?(&TypeInfo__UnityEngine__Vector3);
                  LOCK();
                  *(undefined4 *)(&stack0xffffffffffffffd8 + lVar1) =
                       *(undefined4 *)(&stack0xffffffffffffffd8 + lVar1);
                  UNLOCK();
                  cRam_? = '\x01';
                }
                pVVar175 = TypeInfo__UnityEngine__Vector3->static_fields;
                VStack_271.x = (pVVar175->zeroVector).x;
                VStack_271.y = (pVVar175->zeroVector).y;
                fVar66 = (pVVar175->zeroVector).z;
              }
              uVar93 = VStack_271._0_8_;
              *(undefined8 *)(&stack0x00000050 + lVar1) = VStack_271._0_8_;
              fVar67 = VStack_271.x;
              fVar68 = VStack_271.y;
              *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
              VStack_271.z = fVar66;
              pVVar112 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                         Transform_get_lossyScale(&VStack_273,pTVar264,(MethodInfo *)0x0);
              uVar94 = VStack_271._0_8_;
              fVar274 = pVVar112->x;
              fVar275 = pVVar112->y;
              alignmentAxis = snapConfig->AlignmentAxis;
              fVar69 = (float)((uint)pVVar112->z & _UNK_?);
              VStack_231.x = fVar274;
              VStack_231.y = fVar275;
              uVar63 = *(undefined8 *)&(snapConfig->SurfaceHitPoint).z;
              VStack_276.z = fVar66;
              fVar77 = (float)((uint)fVar275 & _UNK_?);
              if ((float)((uint)fVar275 & _UNK_?) <= (float)((uint)fVar274 & _UNK_?))
              {
                fVar77 = (float)((uint)fVar274 & _UNK_?);
              }
              VStack_271.x = (float)uVar93;
              VStack_271.y = SUB84(uVar93,4);
              VStack_276.x = VStack_271.x;
              VStack_276.y = VStack_271.y;
              *(undefined8 *)((longlong)apMStackX_10 + lVar1 + 8) =
                   *(undefined8 *)&snapConfig->SurfaceHitPoint;
              *(undefined8 *)((longlong)apMStackX_10 + lVar1 + 0x10) = uVar63;
              uVar63 = *(undefined8 *)&(snapConfig->SurfaceHitPlane).m_Normal.z;
              pGVar96 = snapConfig->SurfaceObject;
              *(undefined8 *)(&stack0xfffffffffffffff8 + lVar1) = 0;
              if (fVar69 <= fVar77) {
                fVar69 = fVar77;
              }
              *(undefined8 *)(&stack0x00000038 + lVar1) = uVar63;
              *(GameObject **)(&stack0x00000040 + lVar1) = pGVar96;
              uVar63 = *(undefined8 *)&(snapConfig->SurfaceHitPlane).m_Normal;
              *(undefined8 *)(&stack0x00000028 + lVar1) =
                   *(undefined8 *)&(snapConfig->SurfaceHitNormal).y;
              *(undefined8 *)(&stack0x00000030 + lVar1) = uVar63;
              fVar69 = fVar69 * _UNK_?;
              *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
              VStack_271._0_8_ = uVar94;
              TransformEx::TransformEx_Align
                        (&QStack_277,pTVar65,&VStack_276,alignmentAxis,
                         *(MethodInfo **)(&stack0xfffffffffffffff8 + lVar1));
              if (*(int *)&(TypeInfo__RTG__ObjectBounds->_1).field_0x1c == 0) {
                *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
                FUN_?();
                fVar67 = (float)*(undefined8 *)(&stack0x00000050 + lVar1);
                fVar68 = (float)((ulonglong)*(undefined8 *)(&stack0x00000050 + lVar1) >> 0x20);
              }
              OStack_278.ObjectTypes = 5;
              OStack_278.NoVolumeSize.x = 0.0;
              OStack_278.NoVolumeSize.y = 0.0;
              OStack_278.NoVolumeSize.z = 0.0;
              *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
              pOVar102 = ObjectBounds::ObjectBounds_CalcHierarchyWorldOBB
                                  (&OStack_279,root,&OStack_278,(MethodInfo *)0x0);
              afStackX_8[0] = *(float *)&pOVar102->_isValid;
              fVar280 = (pOVar102->_rotation).z;
              fVar281 = (pOVar102->_rotation).w;
              uStack_38._0_4_ = fVar280;
              uStack_38._4_4_ = fVar281;
              fStack_42 = afStackX_8[0];
              auVar76._0_4_ = (pOVar102->_size).x;
              auVar76._4_4_ = (pOVar102->_size).y;
              auVar76._8_4_ = (pOVar102->_size).z;
              auVar76._12_4_ = (pOVar102->_center).x;
              fStack_39 = (pOVar102->_center).y;
              VStack_282.z = (pOVar102->_center).z;
              uStack_41._0_4_ = (pOVar102->_rotation).x;
              uStack_41._4_4_ = (pOVar102->_rotation).y;
              VStack_36._0_8_ = auVar76._0_8_;
              uVar63 = VStack_36._0_8_;
              VStack_36.z = (float)auVar76._8_4_;
              fStack_37 = (float)auVar76._12_4_;
              fStack_40 = VStack_282.z;
              if (SUB41(afStackX_8[0],0) != 0) {
                auStack_75._0_4_ = fStack_37;
                auStack_75._4_4_ = fStack_39;
                QStack_126.x = (float)uStack_41;
                QStack_126.y = uStack_41._4_4_;
                QStack_126.z = fVar280;
                QStack_126.w = fVar281;
                apMStackX_10[0] = (MethodInfo *)CONCAT44(apMStackX_10[0]._4_4_,VStack_36.z);
                fVar77 = *(float *)(&stack0x00000054 + lVar1);
                fVar261 = (float)((uint)*(float *)(&stack0x00000050 + lVar1) ^ _UNK_?);
                fVar283 = (float)((uint)fVar77 ^ _UNK_?);
                fVar284 = (float)((uint)fVar66 ^ _UNK_?);
                VStack_285.z = VStack_36.z;
                fVar260 = *(float *)(&stack0x00000050 + lVar1);
                if (*(int *)&(TypeInfo__RTG__BoxMath->_1).field_0x1c == 0) {
                  *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
                  FUN_?();
                  fVar67 = *(float *)(&stack0x00000050 + lVar1);
                  fVar77 = *(float *)(&stack0x00000054 + lVar1);
                  afStackX_8[0] = fStack_42;
                  auVar76._8_4_ = VStack_36.z;
                  auVar76._0_4_ = VStack_36.x;
                  auVar76._4_4_ = VStack_36.y;
                  auVar76._12_4_ = fStack_37;
                  *(undefined8 *)(&stack0x00000050 + lVar1) =
                       *(undefined8 *)(&stack0x00000050 + lVar1);
                  fVar68 = fVar77;
                  VStack_285.z = apMStackX_10[0]._0_4_;
                  fVar260 = fVar67;
                }
                fVar286 = uStack_41._4_4_;
                fVar287 = (float)uStack_41;
                fVar288 = fStack_40;
                fVar289 = fStack_39;
                uVar93 = VStack_36._0_8_;
                QStack_290.x = QStack_126.x;
                QStack_290.y = QStack_126.y;
                QStack_290.z = QStack_126.z;
                QStack_290.w = QStack_126.w;
                VStack_36.x = (float)uVar63;
                VStack_36.y = SUB84(uVar63,4);
                VStack_285.x = VStack_36.x;
                VStack_285.y = VStack_36.y;
                VStack_282.x = (float)auStack_75._0_4_;
                VStack_282.y = (float)auStack_75._4_4_;
                VStack_291.z = fVar284;
                VStack_291.x = fVar261;
                VStack_291.y = fVar283;
                *(undefined8 *)(&stack0xfffffffffffffff8 + lVar1) = 0;
                *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
                afStackX_8[0] = fStack_42;
                VStack_36._0_8_ = uVar93;
                BVar133 = BoxMath::BoxMath_GetMostAlignedFace
                                   (&VStack_282,&VStack_285,&QStack_290,&VStack_291,
                                    *(MethodInfo **)(&stack0xfffffffffffffff8 + lVar1));
                if (*(int *)&(TypeInfo__RTG__ObjectVertexCollect->_1).field_0x1c == 0) {
                  *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
                  FUN_?();
                  fVar67 = *(float *)(&stack0x00000050 + lVar1);
                  fVar77 = *(float *)(&stack0x00000054 + lVar1);
                  afStackX_8[0] = fStack_42;
                  auVar76._8_4_ = VStack_36.z;
                  auVar76._0_4_ = VStack_36.x;
                  auVar76._4_4_ = VStack_36.y;
                  auVar76._12_4_ = fStack_37;
                  *(undefined8 *)(&stack0x00000050 + lVar1) =
                       *(undefined8 *)(&stack0x00000050 + lVar1);
                  fVar289 = fStack_39;
                  fVar288 = fStack_40;
                  fVar287 = (float)uStack_41;
                  fVar286 = uStack_41._4_4_;
                  fVar68 = fVar77;
                  fVar260 = fVar67;
                }
                *(undefined8 *)(&stack0xfffffffffffffff8 + lVar1) = 0;
                *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
                pLVar134 = ObjectVertexCollect::ObjectVertexCollect_CollectHierarchyVerts
                                     (root,BVar133,_UNK_?,_UNK_?,
                                      *(MethodInfo **)(&stack0xfffffffffffffff8 + lVar1));
                fStack_292 = fVar66 * fVar69 + VStack_35.z;
                uStack_293 = CONCAT44(fVar77 * fVar69 + VStack_35.y,
                                       fVar260 * fVar69 + VStack_35.x);
                uStack_294 = CONCAT44(fVar68,fVar67);
                *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
                uStack_295 = uStack_293;
                fStack_296 = fStack_292;
                fStack_297 = fVar66;
                uStack_298 = uStack_293;
                fStack_299 = fStack_292;
                FUN_?(auStack_43,&uStack_294,&uStack_295);
                auStack_300 = auVar76;
                PStack_301.m_Normal.x = (float)auStack_43._0_4_;
                PStack_301.m_Normal.y = (float)auStack_43._4_4_;
                PStack_301.m_Normal.z = (float)auStack_43._8_4_;
                PStack_301.m_Distance = (float)auStack_43._12_4_;
                fStack_302 = (float)uStack_38;
                fStack_303 = uStack_38._4_4_;
                fStack_304 = fVar289;
                fStack_305 = fVar288;
                fStack_306 = fVar287;
                fStack_307 = fVar286;
                fStack_308 = afStackX_8[0];
                *(undefined8 *)(&stack0xfffffffffffffff8 + lVar1) = 0;
                *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
                pVVar112 = ObjectSurfaceSnap_CalculateSitOnSurfaceOffset
                                     (&VStack_309,(OBB *)auStack_300,&PStack_301,0.0,
                                      *(MethodInfo **)(&stack0xfffffffffffffff8 + lVar1));
                fVar67 = pVVar112->z;
                uVar310._0_4_ = pVVar112->x;
                uVar310._4_4_ = pVVar112->y;
                *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
                VStack_44.z = fVar67;
                pVVar112 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                           Transform_get_position(&VStack_311,pTVar65,(MethodInfo *)0x0);
                uVar312 = pVVar112->x;
                uVar313 = pVVar112->y;
                VStack_314.z = fVar67 + pVVar112->z;
                VStack_314.y = uVar310._4_4_ + (float)uVar313;
                VStack_314.x = (float)uVar310 + (float)uVar312;
                *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
                UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                          (pTVar65,&VStack_314,(MethodInfo *)0x0);
                fStack_37 = auVar76._12_4_ + (float)uVar310;
                fStack_39 = fVar289 + uVar310._4_4_;
                fStack_40 = fVar288 + fVar67;
                uStack_315 = CONCAT44(fStack_39,fStack_37);
                *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
                VStack_44._0_8_ = uVar310;
                VStack_316._0_8_ = uVar310;
                VStack_316.z = fVar67;
                fStack_317 = fStack_40;
                Vector3Ex::Vector3Ex_OffsetPoints(pLVar134,&VStack_316,(MethodInfo *)0x0);
                *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
                pVVar112 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                           Transform_get_position(&VStack_318,pTVar65,(MethodInfo *)0x0);
                VStack_311.x = pVVar112->x;
                VStack_311.y = pVVar112->y;
                fVar67 = snapConfig->OffsetFromSurface;
                fStack_319 = fVar67 * fVar66 + pVVar112->z;
                uStack_320 = CONCAT44(fVar67 * *(float *)(&stack0x00000054 + lVar1) + VStack_311.y
                                      ,fVar67 * *(float *)(&stack0x00000050 + lVar1) +
                                       VStack_311.x);
                if (cRam_? == '\0') {
                  *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
                  FUN_?(&
                                void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                               );
                  LOCK();
                  *(undefined4 *)(&stack0xffffffffffffffd8 + lVar1) =
                       *(undefined4 *)(&stack0xffffffffffffffd8 + lVar1);
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
                  (*pcRam_?)(pvVar71,&uStack_320);
                  fStack_321 = (float)auStack_43._0_8_;
                  fStack_322 = SUB84(auStack_43._0_8_,4);
                  fStack_323 = (float)auStack_43._8_8_;
                  fStack_324 = SUB84(auStack_43._8_8_,4);
                  __return_storage_ptr__->Success = (char)1;
                  *(int3 *)&__return_storage_ptr__->field_0x1 = (int3)(1 >> 8);
                  (__return_storage_ptr__->SittingPlane).m_Normal.x = fStack_321;
                  (__return_storage_ptr__->SittingPlane).m_Normal.y = fStack_322;
                  (__return_storage_ptr__->SittingPlane).m_Normal.z = fStack_323;
                  (__return_storage_ptr__->SittingPlane).m_Distance = fStack_324;
                  (__return_storage_ptr__->SittingPoint).x = (float)uStack_293;
                  (__return_storage_ptr__->SittingPoint).y = uStack_293._4_4_;
                  (__return_storage_ptr__->SittingPoint).z = fStack_292;
                  return __return_storage_ptr__;
                }
                *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
                UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar65,(MethodInfo *)0x0);
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
      pPVar325 = &snapConfig->SurfaceHitPlane;
      fVar66 = (pPVar325->m_Normal).x;
      fVar67 = (snapConfig->SurfaceHitPlane).m_Normal.y;
      alignmentAxis_00 = snapConfig->AlignmentAxis;
      auStack_80._0_4_ = (float)uVar63;
      auStack_80._4_4_ = SUB84(uVar63,4);
      auStack_80._8_4_ = (float)uVar262;
      auStack_80._12_4_ = uVar262._4_4_;
      auStack_80._16_4_ = (float)uVar263;
      auStack_80._20_4_ = uVar263._4_4_;
      auStack_80._24_4_ = (undefined4)uVar93;
      auStack_80._28_4_ = (undefined4)((ulonglong)uVar93 >> 0x20);
      auStack_83._8_8_ = *(undefined8 *)&(snapConfig->SurfaceHitPlane).m_Normal.z;
      pGStack_84 = snapConfig->SurfaceObject;
      uVar63 = *(undefined8 *)&snapConfig->SurfaceHitPoint;
      uVar93 = *(undefined8 *)&(snapConfig->SurfaceHitPoint).z;
      *(undefined8 *)(&stack0xfffffffffffffff8 + lVar1) = 0;
      auStack_83._0_4_ = (pPVar325->m_Normal).x;
      auStack_83._4_4_ = (pPVar325->m_Normal).y;
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
      VStack_326.x = (float)auStack_80._28_4_;
      VStack_326.y = (float)auStack_80._32_4_;
      VStack_326.z = (float)auStack_80._36_4_;
      *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
      TransformEx::TransformEx_Align
                (&QStack_327,pTVar65,&VStack_326,alignmentAxis_00,
                 *(MethodInfo **)(&stack0xfffffffffffffff8 + lVar1));
      if (*(int *)&(TypeInfo__RTG__ObjectBounds->_1).field_0x1c == 0) {
        *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
        FUN_?();
      }
      OStack_328.ObjectTypes = 5;
      OStack_328.NoVolumeSize.x = 0.0;
      OStack_328.NoVolumeSize.y = 0.0;
      OStack_328.NoVolumeSize.z = 0.0;
      *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
      pOVar102 = ObjectBounds::ObjectBounds_CalcHierarchyWorldOBB
                          (&OStack_329,root,&OStack_328,(MethodInfo *)0x0);
      uVar97 = _UNK_?;
      fVar330 = (pOVar102->_size).x;
      fVar331 = (pOVar102->_size).y;
      uVar63 = *(undefined8 *)&(pOVar102->_size).z;
      VStack_19.z = (float)uVar63;
      auVar76 = *(undefined1 (*) [16])&(pOVar102->_center).y;
      VStack_332.z = auVar76._4_4_;
      fVar333 = (pOVar102->_rotation).z;
      fVar334 = (pOVar102->_rotation).w;
      QStack_21.z = fVar333;
      QStack_21.w = fVar334;
      uStack_24 = *(undefined4 *)&pOVar102->_isValid;
      VStack_19.x = fVar330;
      VStack_19.y = fVar331;
      fStack_20 = (float)((ulonglong)uVar63 >> 0x20);
      VStack_332.x = fStack_20;
      fStack_22 = auVar76._0_4_;
      VStack_332.y = fStack_22;
      QStack_21._0_8_ = auVar76._8_8_;
      uVar63 = QStack_21._0_8_;
      if ((char)*(undefined4 *)&pOVar102->_isValid == '\0') goto code_?;
      uStack_165._0_1_ = snapConfig->AlignAxis;
      uStack_165._1_3_ = *(undefined3 *)&snapConfig->field_0x1;
      uStack_165._4_4_ = snapConfig->AlignmentAxis;
      uStack_166._0_4_ = snapConfig->SurfaceType;
      uStack_166._4_4_ = snapConfig->OffsetFromSurface;
      uStack_167 = *(undefined8 *)&(snapConfig->SurfaceHitPlane).m_Normal.z;
      pGStack_168 = snapConfig->SurfaceObject;
      afStackX_8[0] = VStack_19.z;
      fVar67 = (float)((uint)(snapConfig->SurfaceHitNormal).y ^ _UNK_?);
      fVar335 = (float)((uint)(snapConfig->SurfaceHitNormal).x ^ _UNK_?);
      fVar66 = (float)((uint)(snapConfig->SurfaceHitNormal).z ^ _UNK_?);
      fStack_23 = VStack_332.z;
      if (*(int *)&(TypeInfo__RTG__BoxMath->_1).field_0x1c == 0) {
        *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
        FUN_?();
      }
      uVar93 = QStack_21._0_8_;
      VStack_336.x = fVar335;
      VStack_336.y = fVar67;
      VStack_336.z = fVar66;
      QStack_21.x = (float)uVar63;
      QStack_21.y = SUB84(uVar63,4);
      QStack_337.x = QStack_21.x;
      QStack_337.y = QStack_21.y;
      QStack_337.z = fVar333;
      QStack_337.w = fVar334;
      VStack_338.x = fVar330;
      VStack_338.y = fVar331;
      VStack_338.z = afStackX_8[0];
      *(undefined8 *)(&stack0xfffffffffffffff8 + lVar1) = 0;
      *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
      QStack_21._0_8_ = uVar93;
      BVar133 = BoxMath::BoxMath_GetMostAlignedFace
                         (&VStack_332,&VStack_338,&QStack_337,&VStack_336,
                          *(MethodInfo **)(&stack0xfffffffffffffff8 + lVar1));
      if (*(int *)&(TypeInfo__RTG__ObjectVertexCollect->_1).field_0x1c == 0) {
        *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
        FUN_?();
      }
      *(undefined8 *)(&stack0xfffffffffffffff8 + lVar1) = 0;
      *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
      pLVar134 = ObjectVertexCollect::ObjectVertexCollect_CollectHierarchyVerts
                           (root,BVar133,_UNK_?,_UNK_?,
                            *(MethodInfo **)(&stack0xfffffffffffffff8 + lVar1));
      uVar63 = uStack_64;
      if (pLVar134 == (List_1_UnityEngine_Vector3_ *)0x0) goto code_?;
      if ((pLVar134->fields)._size != 0) {
        *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
        pVVar112 = Vector3Ex::Vector3Ex_GetPointCloudCenter
                             (&VStack_339,(IEnumerable_1_UnityEngine_Vector3_ *)pLVar134,
                              (MethodInfo *)0x0);
        uVar63 = *(undefined8 *)&(snapConfig->SurfaceHitPoint).z;
        pGVar96 = snapConfig->SurfaceObject;
        uVar340 = pVVar112->x;
        uVar341 = pVVar112->y;
        fVar66 = pVVar112->z;
        uVar93 = *(undefined8 *)snapConfig;
        uVar94 = *(undefined8 *)&snapConfig->SurfaceType;
        *(undefined8 *)((longlong)apMStackX_10 + lVar1 + 8) =
             *(undefined8 *)&snapConfig->SurfaceHitPoint;
        *(undefined8 *)((longlong)apMStackX_10 + lVar1 + 0x10) = uVar63;
        *(undefined8 *)((longlong)afStackX_8 + lVar1) = uVar93;
        *(undefined8 *)((longlong)apMStackX_10 + lVar1) = uVar94;
        uVar63 = *(undefined8 *)&(snapConfig->SurfaceHitPlane).m_Normal;
        *(undefined8 *)(&stack0x00000028 + lVar1) =
             *(undefined8 *)&(snapConfig->SurfaceHitNormal).y;
        *(undefined8 *)(&stack0x00000030 + lVar1) = uVar63;
        if (*(int *)&(TypeInfo__RTG__ObjectBounds->_1).field_0x1c == 0) {
          *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
          FUN_?();
        }
        if (cRam_? == '\0') {
          *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
          FUN_?(&TypeInfo__RTG__ObjectBounds);
          LOCK();
          *(undefined4 *)(&stack0xffffffffffffffd8 + lVar1) =
               *(undefined4 *)(&stack0xffffffffffffffd8 + lVar1);
          UNLOCK();
          cRam_? = '\x01';
        }
        uStack_342._0_4_ = 0.0;
        uStack_342._4_4_ = 0.0;
        auStack_343 = ZEXT816(0);
        uStack_344._0_1_ = 0;
        uStack_344._1_3_ = 0;
        if (*(int *)&(TypeInfo__RTG__ObjectBounds->_1).field_0x1c == 0) {
          *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
          FUN_?();
        }
        pMVar115 = (MethodInfo *)0x0;
        *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
        pAVar345 = ObjectBounds::ObjectBounds_CalcMeshModelAABB
                             (&AStack_346,pGVar96,(MethodInfo *)0x0);
        uStack_344._0_1_ = pAVar345->_isValid;
        uStack_344._1_3_ = *(undefined3 *)&pAVar345->field_0x19;
        uStack_342._0_4_ = (pAVar345->_center).y;
        uStack_342._4_4_ = (pAVar345->_center).z;
        auStack_343._0_4_ = (pAVar345->_size).x;
        auStack_343._4_4_ = (pAVar345->_size).y;
        auStack_343._8_4_ = (pAVar345->_size).z;
        auStack_343._12_4_ = (pAVar345->_center).x;
        if ((bool)uStack_344 != 0) {
          uVar63 = uStack_64;
          if (pGVar96 == (GameObject *)0x0) goto code_?;
          *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
          pTVar264 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                               (pGVar96,(MethodInfo *)0x0);
          uVar63 = uStack_64;
          if (pTVar264 == (Transform *)0x0) goto code_?;
          *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
          pMVar347 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                     Transform_get_localToWorldMatrix(aMStack_348,pTVar264,(MethodInfo *)0x0);
          pMVar115 = (MethodInfo *)0x0;
          MStack_349.m00 = pMVar347->m00;
          MStack_349.m10 = pMVar347->m10;
          MStack_349.m20 = pMVar347->m20;
          MStack_349.m30 = pMVar347->m30;
          MStack_349.m01 = pMVar347->m01;
          MStack_349.m11 = pMVar347->m11;
          MStack_349.m21 = pMVar347->m21;
          MStack_349.m31 = pMVar347->m31;
          MStack_349.m02 = pMVar347->m02;
          MStack_349.m12 = pMVar347->m12;
          MStack_349.m22 = pMVar347->m22;
          MStack_349.m32 = pMVar347->m32;
          MStack_349.m03 = pMVar347->m03;
          MStack_349.m13 = pMVar347->m13;
          MStack_349.m23 = pMVar347->m23;
          MStack_349.m33 = pMVar347->m33;
          *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
          AABB::AABB_Transform((AABB *)auStack_343,&MStack_349,(MethodInfo *)0x0);
        }
        VStack_119.z = auStack_343._8_4_ * _UNK_?;
        fVar67 = (snapConfig->SurfaceHitNormal).y;
        fVar68 = (snapConfig->SurfaceHitNormal).z;
        VStack_119.y = auStack_343._4_4_ * _UNK_?;
        VStack_119.x = auStack_343._0_4_ * _UNK_?;
        uStack_165._0_1_ = snapConfig->AlignAxis;
        uStack_165._1_3_ = *(undefined3 *)&snapConfig->field_0x1;
        uStack_165._4_4_ = snapConfig->AlignmentAxis;
        uStack_166._0_4_ = snapConfig->SurfaceType;
        uStack_166._4_4_ = snapConfig->OffsetFromSurface;
        uStack_167 = *(undefined8 *)&(snapConfig->SurfaceHitPlane).m_Normal.z;
        pGStack_168 = snapConfig->SurfaceObject;
        *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
        VStack_350._0_8_ = VStack_119._0_8_;
        VStack_350.z = VStack_119.z;
        auStack_351 = auStack_343;
        uStack_352 = uStack_342;
        uStack_353 = uStack_344;
        fVar69 = (float)FUN_?(&VStack_119);
        fVar77 = fVar69 * (snapConfig->SurfaceHitNormal).x + (float)uVar340;
        fVar67 = fVar69 * fVar67 + (float)uVar341;
        fVar68 = fVar69 * fVar68 + fVar66;
        uStack_354 = CONCAT44(fVar67,fVar77);
        uStack_165._0_1_ = snapConfig->AlignAxis;
        uStack_165._1_3_ = *(undefined3 *)&snapConfig->field_0x1;
        uStack_165._4_4_ = snapConfig->AlignmentAxis;
        uStack_166._0_4_ = snapConfig->SurfaceType;
        uStack_166._4_4_ = snapConfig->OffsetFromSurface;
        VStack_355.z = (float)((uint)(snapConfig->SurfaceHitNormal).z ^ uVar97);
        uStack_167 = *(undefined8 *)&(snapConfig->SurfaceHitPlane).m_Normal.z;
        pGStack_168 = snapConfig->SurfaceObject;
        VStack_355.x = (float)((uint)(snapConfig->SurfaceHitNormal).x ^ uVar97);
        VStack_355.y = (float)((uint)(snapConfig->SurfaceHitNormal).y ^ uVar97);
        uStack_25 = CONCAT44(fVar67,fVar77);
        *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
        fStack_26 = fVar68;
        fStack_356 = fVar68;
        uStack_357 = uStack_354;
        fStack_358 = fVar68;
        VStack_359._0_8_ = VStack_355._0_8_;
        VStack_359.z = VStack_355.z;
        pVVar112 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_normalized
                             (&VStack_360,&VStack_355,pMVar115);
        uVar361 = pVVar112->x;
        uVar362 = pVVar112->y;
        fStack_29 = pVVar112->z;
        uVar63 = uStack_64;
        uStack_27 = uVar361;
        uStack_28 = uVar362;
        if (pOVar99 != (ObjectSurfaceSnap_SurfaceRaycaster *)0x0) {
          uStack_363 = CONCAT44(fStack_29,uVar362);
          QStack_126.y = fVar67;
          QStack_126.x = fVar77;
          pIVar196 = (pOVar99->klass->vtable).__unknown.methodPtr;
          uStack_364 = CONCAT44(uVar361,fVar68);
          uStack_365._0_4_ = fVar77;
          uStack_365._4_4_ = fVar67;
          pMVar115 = (pOVar99->klass->vtable).__unknown.method;
          *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
          QStack_126.z = fVar68;
          QStack_126.w = (float)uVar361;
          uStack_366 = uVar362;
          fStack_367 = fStack_29;
          lVar198 = (*pIVar196)(pOVar99,&uStack_365,pMVar115);
          alignmentAxis_01 = snapConfig->AlignmentAxis;
          *(undefined8 *)(&stack0xfffffffffffffff8 + lVar1) = 0;
          if (lVar198 == 0) {
            uVar368._0_4_ = (snapConfig->SurfaceHitPoint).x;
            uVar368._4_4_ = (snapConfig->SurfaceHitPoint).y;
            uVar93 = *(undefined8 *)&(snapConfig->SurfaceHitPoint).z;
            uVar63 = *(undefined8 *)&snapConfig->SurfaceType;
            fVar67 = (snapConfig->SurfaceHitNormal).y;
            VStack_369.z = (snapConfig->SurfaceHitNormal).z;
            fVar68 = (snapConfig->SurfaceHitPlane).m_Normal.x;
            fVar69 = (snapConfig->SurfaceHitPlane).m_Normal.y;
            *(undefined8 *)((longlong)afStackX_8 + lVar1) = *(undefined8 *)snapConfig;
            *(undefined8 *)((longlong)apMStackX_10 + lVar1) = uVar63;
            uVar63 = *(undefined8 *)&(snapConfig->SurfaceHitPlane).m_Normal.z;
            pGVar96 = snapConfig->SurfaceObject;
            *(undefined8 *)((longlong)apMStackX_10 + lVar1 + 8) = uVar368;
            *(undefined8 *)((longlong)apMStackX_10 + lVar1 + 0x10) = uVar93;
            *(undefined8 *)(&stack0x00000038 + lVar1) = uVar63;
            *(GameObject **)(&stack0x00000040 + lVar1) = pGVar96;
            uVar94 = *(undefined8 *)&(snapConfig->SurfaceHitPlane).m_Normal.z;
            pGVar96 = snapConfig->SurfaceObject;
            *(float *)(&stack0x00000028 + lVar1) = fVar67;
            *(float *)(&stack0x0000002c + lVar1) = VStack_369.z;
            *(float *)(&stack0x00000030 + lVar1) = fVar68;
            *(float *)(&stack0x00000034 + lVar1) = fVar69;
            uVar63 = *(undefined8 *)((longlong)apMStackX_10 + lVar1 + 0x14);
            *(undefined8 *)((longlong)apMStackX_10 + lVar1 + 8) = uVar368;
            *(undefined8 *)((longlong)apMStackX_10 + lVar1 + 0x10) = uVar93;
            uVar93 = *(undefined8 *)&(snapConfig->SurfaceHitNormal).y;
            uVar95 = *(undefined8 *)&(snapConfig->SurfaceHitPlane).m_Normal;
            *(undefined8 *)(&stack0x00000038 + lVar1) = uVar94;
            *(GameObject **)(&stack0x00000040 + lVar1) = pGVar96;
            VStack_369.x = (float)uVar63;
            VStack_369.y = SUB84(uVar63,4);
            *(undefined8 *)(&stack0x00000028 + lVar1) = uVar93;
            *(undefined8 *)(&stack0x00000030 + lVar1) = uVar95;
            VStack_370.x = (float)uVar63;
            VStack_370.y = SUB84(uVar63,4);
            VStack_370.z = VStack_369.z;
            *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
            TransformEx::TransformEx_Align
                      (&QStack_371,pTVar65,&VStack_370,alignmentAxis_01,
                       *(MethodInfo **)(&stack0xfffffffffffffff8 + lVar1));
            if (*(int *)&(TypeInfo__RTG__ObjectBounds->_1).field_0x1c == 0) {
              *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
              FUN_?();
            }
            OStack_372.ObjectTypes = 5;
            OStack_372.NoVolumeSize.x = 0.0;
            OStack_372.NoVolumeSize.y = 0.0;
            OStack_372.NoVolumeSize.z = 0.0;
            *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
            pOVar102 = ObjectBounds::ObjectBounds_CalcHierarchyWorldOBB
                                (&OStack_373,root,&OStack_372,(MethodInfo *)0x0);
            uVar63 = *(undefined8 *)&(snapConfig->SurfaceHitNormal).y;
            uVar93 = *(undefined8 *)&(snapConfig->SurfaceHitPlane).m_Normal;
            *(undefined8 *)(&stack0xfffffffffffffff8 + lVar1) = 0;
            uVar94 = *(undefined8 *)&(snapConfig->SurfaceHitPlane).m_Normal.z;
            pGVar96 = snapConfig->SurfaceObject;
            *(undefined8 *)(&stack0x00000028 + lVar1) = uVar63;
            *(undefined8 *)(&stack0x00000030 + lVar1) = uVar93;
            *(undefined8 *)(&stack0x00000038 + lVar1) = uVar94;
            *(GameObject **)(&stack0x00000040 + lVar1) = pGVar96;
            OStack_374._size.x = (pOVar102->_size).x;
            OStack_374._size.y = (pOVar102->_size).y;
            OStack_374._8_8_ = *(undefined8 *)&(pOVar102->_size).z;
            PStack_375.m_Normal._0_8_ = *(undefined8 *)(&stack0x00000030 + lVar1);
            PStack_375._8_8_ = *(undefined8 *)(&stack0x00000038 + lVar1);
            OStack_374._rotation.z = (pOVar102->_rotation).z;
            OStack_374._rotation.w = (pOVar102->_rotation).w;
            OStack_374._center.y = (pOVar102->_center).y;
            OStack_374._center.z = (pOVar102->_center).z;
            OStack_374._rotation.x = (pOVar102->_rotation).x;
            OStack_374._rotation.y = (pOVar102->_rotation).y;
            OStack_374._isValid = pOVar102->_isValid;
            OStack_374._41_3_ = *(undefined3 *)&pOVar102->field_0x29;
            *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
            pVVar112 = ObjectSurfaceSnap_CalculateSitOnSurfaceOffset
                                 (&VStack_376,&OStack_374,&PStack_375,0.0,
                                  *(MethodInfo **)(&stack0xfffffffffffffff8 + lVar1));
            uVar63 = uStack_64;
            if (pTVar65 != (Transform *)0x0) {
              uVar377 = pVVar112->x;
              uVar378 = pVVar112->y;
              fVar67 = pVVar112->z;
              *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
              pVVar112 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                                   (&VStack_379,pTVar65,(MethodInfo *)0x0);
              uVar380 = pVVar112->x;
              uVar381 = pVVar112->y;
              VStack_382.z = fVar67 + pVVar112->z;
              VStack_382.y = (float)uVar378 + (float)uVar381;
              VStack_382.x = (float)uVar377 + (float)uVar380;
              *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
              UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                        (pTVar65,&VStack_382,(MethodInfo *)0x0);
              *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
              pVVar112 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                                   (&VStack_383,pTVar65,(MethodInfo *)0x0);
              uVar63 = *(undefined8 *)&(snapConfig->SurfaceHitPlane).m_Normal;
              uVar93 = *(undefined8 *)&(snapConfig->SurfaceHitPlane).m_Normal.z;
              pGVar96 = snapConfig->SurfaceObject;
              *(undefined8 *)(&stack0x00000028 + lVar1) =
                   *(undefined8 *)&(snapConfig->SurfaceHitNormal).y;
              *(undefined8 *)(&stack0x00000030 + lVar1) = uVar63;
              *(undefined8 *)(&stack0x00000038 + lVar1) = uVar93;
              *(GameObject **)(&stack0x00000040 + lVar1) = pGVar96;
              uVar384 = pVVar112->x;
              uVar385 = pVVar112->y;
              fVar67 = snapConfig->OffsetFromSurface;
              VStack_386.x = fVar67 * VStack_369.x + (float)uVar384;
              VStack_386.z = fVar67 * VStack_369.z + pVVar112->z;
              VStack_386.y = fVar67 * VStack_369.y + (float)uVar385;
              *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
              UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                        (pTVar65,&VStack_386,(MethodInfo *)0x0);
              fVar67 = (snapConfig->SurfaceHitNormal).z;
              fVar68 = (snapConfig->SurfaceHitPlane).m_Normal.x;
              fVar69 = (snapConfig->SurfaceHitPlane).m_Normal.y;
              fVar77 = (snapConfig->SurfaceHitPlane).m_Normal.z;
              fVar260 = (snapConfig->SurfaceHitPlane).m_Distance;
              uVar104 = *(undefined4 *)&snapConfig->SurfaceObject;
              uVar387 = *(undefined4 *)((longlong)&snapConfig->SurfaceObject + 4);
              *(float *)(&stack0x00000028 + lVar1) = (snapConfig->SurfaceHitNormal).y;
              *(float *)(&stack0x0000002c + lVar1) = fVar67;
              *(float *)(&stack0x00000030 + lVar1) = fVar68;
              *(float *)(&stack0x00000034 + lVar1) = fVar69;
              *(float *)(&stack0x00000038 + lVar1) = fVar77;
              *(float *)(&stack0x0000003c + lVar1) = fVar260;
              *(undefined4 *)(&stack0x00000040 + lVar1) = uVar104;
              *(undefined4 *)(&stack0x00000044 + lVar1) = uVar387;
              fVar260 = fVar69 * (float)uVar341 + fVar68 * (float)uVar340 + fVar77 * fVar66 +
                        fVar260;
              uStack_388 = (undefined4)*(undefined8 *)(&stack0x00000030 + lVar1);
              uStack_389 = (undefined4)
                            ((ulonglong)*(undefined8 *)(&stack0x00000030 + lVar1) >> 0x20);
              uStack_390 = (undefined4)*(undefined8 *)(&stack0x00000038 + lVar1);
              fStack_391 = (float)((ulonglong)*(undefined8 *)(&stack0x00000038 + lVar1) >> 0x20);
              __return_storage_ptr__->Success = (char)1;
              *(int3 *)&__return_storage_ptr__->field_0x1 = (int3)(1 >> 8);
              (__return_storage_ptr__->SittingPlane).m_Normal.x = (float)uStack_388;
              (__return_storage_ptr__->SittingPlane).m_Normal.y = (float)uStack_389;
              (__return_storage_ptr__->SittingPlane).m_Normal.z = (float)uStack_390;
              (__return_storage_ptr__->SittingPlane).m_Distance = fStack_391;
              (__return_storage_ptr__->SittingPoint).x = (float)uVar340 - fVar260 * fVar68;
              (__return_storage_ptr__->SittingPoint).y = (float)uVar341 - fVar260 * fVar69;
              (__return_storage_ptr__->SittingPoint).z = fVar66 - fVar260 * fVar77;
              return __return_storage_ptr__;
            }
          }
          else {
            afStackX_8[0] = *(float *)(lVar198 + 0x30);
            uVar63 = *(undefined8 *)&(snapConfig->SurfaceHitPoint).z;
            uVar93 = *(undefined8 *)(lVar198 + 0x28);
            uVar94 = *(undefined8 *)&(snapConfig->SurfaceHitNormal).y;
            uVar95 = *(undefined8 *)&(snapConfig->SurfaceHitPlane).m_Normal;
            VStack_30.z = afStackX_8[0];
            *(undefined8 *)((longlong)apMStackX_10 + lVar1 + 8) =
                 *(undefined8 *)&snapConfig->SurfaceHitPoint;
            *(undefined8 *)((longlong)apMStackX_10 + lVar1 + 0x10) = uVar63;
            pGVar96 = snapConfig->SurfaceObject;
            VStack_392.z = afStackX_8[0];
            VStack_30.x = (float)uVar93;
            VStack_30.y = SUB84(uVar93,4);
            *(undefined8 *)(&stack0x00000038 + lVar1) =
                 *(undefined8 *)&(snapConfig->SurfaceHitPlane).m_Normal.z;
            *(GameObject **)(&stack0x00000040 + lVar1) = pGVar96;
            *(undefined8 *)(&stack0x00000028 + lVar1) = uVar94;
            *(undefined8 *)(&stack0x00000030 + lVar1) = uVar95;
            VStack_392.x = (float)uVar93;
            VStack_392.y = SUB84(uVar93,4);
            *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
            TransformEx::TransformEx_Align
                      (&QStack_393,pTVar65,&VStack_392,alignmentAxis_01,
                       *(MethodInfo **)(&stack0xfffffffffffffff8 + lVar1));
            if (*(int *)&(TypeInfo__RTG__ObjectBounds->_1).field_0x1c == 0) {
              *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
              FUN_?();
              afStackX_8[0] = VStack_30.z;
              uVar93 = VStack_30._0_8_;
            }
            OStack_394.ObjectTypes = 5;
            OStack_394.NoVolumeSize.x = 0.0;
            OStack_394.NoVolumeSize.y = 0.0;
            OStack_394.NoVolumeSize.z = 0.0;
            *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
            pOVar102 = ObjectBounds::ObjectBounds_CalcHierarchyWorldOBB
                                (&OStack_395,root,&OStack_394,(MethodInfo *)0x0);
            PStack_396.m_Normal._0_8_ = *(undefined8 *)(lVar198 + 0x34);
            PStack_396._8_8_ = *(undefined8 *)(lVar198 + 0x3c);
            *(undefined8 *)(&stack0xfffffffffffffff8 + lVar1) = 0;
            OStack_397._size.x = (pOVar102->_size).x;
            OStack_397._size.y = (pOVar102->_size).y;
            OStack_397._8_8_ = *(undefined8 *)&(pOVar102->_size).z;
            OStack_397._rotation.z = (pOVar102->_rotation).z;
            OStack_397._rotation.w = (pOVar102->_rotation).w;
            OStack_397._isValid = pOVar102->_isValid;
            OStack_397._41_3_ = *(undefined3 *)&pOVar102->field_0x29;
            OStack_397._center.y = (pOVar102->_center).y;
            OStack_397._center.z = (pOVar102->_center).z;
            OStack_397._rotation.x = (pOVar102->_rotation).x;
            OStack_397._rotation.y = (pOVar102->_rotation).y;
            *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
            pVVar112 = ObjectSurfaceSnap_CalculateSitOnSurfaceOffset
                                 (&VStack_398,&OStack_397,&PStack_396,0.0,
                                  *(MethodInfo **)(&stack0xfffffffffffffff8 + lVar1));
            uVar63 = uStack_64;
            if (pTVar65 != (Transform *)0x0) {
              uVar399 = pVVar112->x;
              uVar400 = pVVar112->y;
              fVar66 = pVVar112->z;
              *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
              pVVar112 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                                   (&VStack_401,pTVar65,(MethodInfo *)0x0);
              uVar402 = pVVar112->x;
              uVar403 = pVVar112->y;
              VStack_404.z = fVar66 + pVVar112->z;
              VStack_404.y = (float)uVar400 + (float)uVar403;
              VStack_404.x = (float)uVar399 + (float)uVar402;
              *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
              UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                        (pTVar65,&VStack_404,(MethodInfo *)0x0);
              *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
              pVVar112 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                                   (&VStack_405,pTVar65,(MethodInfo *)0x0);
              fVar67 = afStackX_8[0];
              uVar406 = pVVar112->x;
              uVar407 = pVVar112->y;
              fVar66 = snapConfig->OffsetFromSurface;
              VStack_408.x = fVar66 * VStack_30.x + (float)uVar406;
              VStack_408.z = fVar66 * afStackX_8[0] + pVVar112->z;
              VStack_408.y = fVar66 * VStack_30.y + (float)uVar407;
              *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
              UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                        (pTVar65,&VStack_408,(MethodInfo *)0x0);
              uStack_409 = *(undefined8 *)(lVar198 + 0x18);
              uStack_410 = *(undefined4 *)(lVar198 + 0x20);
              uStack_411 = 0;
              uStack_412 = 0;
              VStack_413.z = fVar67;
              *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
              VStack_413._0_8_ = uVar93;
              FUN_?(&uStack_411,&VStack_413,&uStack_409);
              uVar104 = *(undefined4 *)(lVar198 + 0x20);
              uStack_414 = (undefined4)*(undefined8 *)(lVar198 + 0x18);
              uStack_415 = (undefined4)((ulonglong)*(undefined8 *)(lVar198 + 0x18) >> 0x20);
              uStack_416 = (undefined4)uStack_411;
              uStack_417 = (undefined4)((ulonglong)uStack_411 >> 0x20);
              uStack_418 = (undefined4)uStack_412;
              uStack_419 = (undefined4)((ulonglong)uStack_412 >> 0x20);
              __return_storage_ptr__->Success = (char)1;
              *(int3 *)&__return_storage_ptr__->field_0x1 = (int3)(1 >> 8);
              (__return_storage_ptr__->SittingPlane).m_Normal.x = (float)uStack_416;
              (__return_storage_ptr__->SittingPlane).m_Normal.y = (float)uStack_417;
              (__return_storage_ptr__->SittingPlane).m_Normal.z = (float)uStack_418;
              *(ulonglong *)&(__return_storage_ptr__->SittingPlane).m_Distance =
                   CONCAT44(uStack_414,uStack_419);
              (__return_storage_ptr__->SittingPoint).y = (float)uStack_415;
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
        *(undefined4 *)(&stack0xffffffffffffffd8 + lVar1) =
             *(undefined4 *)(&stack0xffffffffffffffd8 + lVar1);
        UNLOCK();
        cRam_? = '\x01';
      }
      uVar63 = *(undefined8 *)&(snapConfig->SurfaceHitPoint).z;
      uVar93 = *(undefined8 *)&(snapConfig->SurfaceHitNormal).y;
      uVar94 = *(undefined8 *)&(snapConfig->SurfaceHitPlane).m_Normal;
      alignmentAxis_02 = snapConfig->AlignmentAxis;
      *(undefined8 *)((longlong)apMStackX_10 + lVar1 + 8) =
           *(undefined8 *)&snapConfig->SurfaceHitPoint;
      *(undefined8 *)((longlong)apMStackX_10 + lVar1 + 0x10) = uVar63;
      pGVar96 = snapConfig->SurfaceObject;
      pVVar175 = TypeInfo__UnityEngine__Vector3->static_fields;
      *(undefined8 *)(&stack0x00000038 + lVar1) =
           *(undefined8 *)&(snapConfig->SurfaceHitPlane).m_Normal.z;
      *(GameObject **)(&stack0x00000040 + lVar1) = pGVar96;
      *(undefined8 *)(&stack0x00000028 + lVar1) = uVar93;
      *(undefined8 *)(&stack0x00000030 + lVar1) = uVar94;
      VStack_420.x = (pVVar175->upVector).x;
      VStack_420.y = (pVVar175->upVector).y;
      VStack_420.z = (pVVar175->upVector).z;
      *(undefined8 *)(&stack0xfffffffffffffff8 + lVar1) = 0;
      *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
      TransformEx::TransformEx_Align
                (&QStack_421,pTVar65,&VStack_420,alignmentAxis_02,
                 *(MethodInfo **)(&stack0xfffffffffffffff8 + lVar1));
      if (*(int *)&(TypeInfo__RTG__ObjectBounds->_1).field_0x1c == 0) {
        *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
        FUN_?();
      }
      OStack_422.ObjectTypes = 5;
      OStack_422.NoVolumeSize.x = 0.0;
      OStack_422.NoVolumeSize.y = 0.0;
      OStack_422.NoVolumeSize.z = 0.0;
      *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
      pOVar102 = ObjectBounds::ObjectBounds_CalcHierarchyWorldOBB
                          (&OStack_423,root,&OStack_422,(MethodInfo *)0x0);
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
        *(undefined4 *)(&stack0xffffffffffffffd8 + lVar1) =
             *(undefined4 *)(&stack0xffffffffffffffd8 + lVar1);
        UNLOCK();
        cRam_? = '\x01';
      }
      uVar97 = _UNK_?;
      pVVar175 = TypeInfo__UnityEngine__Vector3->static_fields;
      fVar424 = (pVVar175->upVector).x;
      fVar425 = (pVVar175->upVector).y;
      fVar260 = (float)((uint)fVar424 ^ _UNK_?);
      fVar261 = (float)((uint)(pVVar175->upVector).z ^ _UNK_?);
      VStack_405.x = fVar424;
      VStack_405.y = fVar425;
      fVar77 = (float)((uint)fVar425 ^ _UNK_?);
      if (*(int *)&(TypeInfo__RTG__BoxMath->_1).field_0x1c == 0) {
        *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
        FUN_?();
      }
      *(undefined8 *)(&stack0xfffffffffffffff8 + lVar1) = 0;
      VStack_426.x = fVar66;
      VStack_426.y = fVar67;
      QStack_427.x = QStack_3.x;
      QStack_427.y = QStack_3.y;
      QStack_427.z = QStack_3.z;
      QStack_427.w = QStack_3.w;
      VStack_428.x = fStack_6;
      VStack_428.y = fStack_8;
      VStack_429.z = fVar261;
      VStack_429.x = fVar260;
      VStack_429.y = fVar77;
      VStack_426.z = fVar68;
      VStack_428.z = fVar69;
      *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
      BVar133 = BoxMath::BoxMath_GetMostAlignedFace
                         (&VStack_428,&VStack_426,&QStack_427,&VStack_429,
                          *(MethodInfo **)(&stack0xfffffffffffffff8 + lVar1));
      if (*(int *)&(TypeInfo__RTG__ObjectVertexCollect->_1).field_0x1c == 0) {
        *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
        FUN_?();
      }
      fVar66 = _UNK_?;
      *(undefined8 *)(&stack0xfffffffffffffff8 + lVar1) = 0;
      *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
      apMStackX_10[0] =
           (MethodInfo *)
           ObjectVertexCollect::ObjectVertexCollect_CollectHierarchyVerts
                     (root,BVar133,_UNK_?,_UNK_?,
                      *(MethodInfo **)(&stack0xfffffffffffffff8 + lVar1));
      uVar63 = uStack_64;
      if (apMStackX_10[0] == (MethodInfo *)0x0) goto code_?;
      if (*(int *)&apMStackX_10[0]->name != 0) {
        *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
        pVVar112 = Vector3Ex::Vector3Ex_GetPointCloudCenter
                             (&VStack_430,(IEnumerable_1_UnityEngine_Vector3_ *)apMStackX_10[0],
                              (MethodInfo *)0x0);
        fVar67 = pVVar112->z;
        VStack_413.x = pVVar112->x;
        VStack_413.y = pVVar112->y;
        VStack_10._0_8_ = VStack_413._0_8_;
        VStack_10.z = fVar67;
        if (cRam_? == '\0') {
          *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
          FUN_?(&TypeInfo__UnityEngine__Vector3);
          LOCK();
          *(undefined4 *)(&stack0xffffffffffffffd8 + lVar1) =
               *(undefined4 *)(&stack0xffffffffffffffd8 + lVar1);
          UNLOCK();
          cRam_? = '\x01';
        }
        pVVar175 = TypeInfo__UnityEngine__Vector3->static_fields;
        VStack_405.x = (pVVar175->upVector).x;
        VStack_405.y = (pVVar175->upVector).y;
        fVar68 = VStack_405.y * fVar66 + VStack_413.y;
        fVar69 = VStack_405.x * fVar66 + VStack_413.x;
        fVar67 = (pVVar175->upVector).z * fVar66 + fVar67;
        if (cRam_? == '\0') {
          *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
          FUN_?(&TypeInfo__UnityEngine__Vector3);
          LOCK();
          *(undefined4 *)(&stack0xffffffffffffffd8 + lVar1) =
               *(undefined4 *)(&stack0xffffffffffffffd8 + lVar1);
          UNLOCK();
          cRam_? = '\x01';
        }
        pVVar175 = TypeInfo__UnityEngine__Vector3->static_fields;
        VStack_405.x = (pVVar175->upVector).x;
        VStack_405.y = (pVVar175->upVector).y;
        fVar77 = (float)((uint)VStack_405.y ^ uVar97);
        fVar261 = (float)((uint)VStack_405.x ^ uVar97);
        fVar260 = (float)((uint)(pVVar175->upVector).z ^ uVar97);
        uStack_431 = CONCAT44(fVar77,fVar261);
        uStack_11 = CONCAT44(fVar68,fVar69);
        uStack_12 = CONCAT44(uStack_12._4_4_,fVar67);
        *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
        fStack_432 = fVar260;
        fVar66 = (float)FUN_?(&uStack_431);
        if (_UNK_? < fVar66) {
          fStack_433 = fVar260 / fVar66;
          uVar63 = CONCAT44(fVar77 / fVar66,fVar261 / fVar66);
          uStack_434 = uVar63;
          fStack_435 = fStack_433;
        }
        else {
          if (cRam_? == '\0') {
            *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
            FUN_?(&TypeInfo__UnityEngine__Vector3);
            LOCK();
            *(undefined4 *)(&stack0xffffffffffffffd8 + lVar1) =
                 *(undefined4 *)(&stack0xffffffffffffffd8 + lVar1);
            UNLOCK();
            cRam_? = '\x01';
          }
          pVVar175 = TypeInfo__UnityEngine__Vector3->static_fields;
          uVar63._0_4_ = (pVVar175->zeroVector).x;
          uVar63._4_4_ = (pVVar175->zeroVector).y;
          fStack_433 = (pVVar175->zeroVector).z;
        }
        uStack_64._0_4_ = (undefined4)uVar63;
        uStack_64._4_4_ = (undefined4)((ulonglong)uVar63 >> 0x20);
        uStack_12 = CONCAT44((undefined4)uStack_64,(undefined4)uStack_12);
        uStack_13 = CONCAT44(fStack_433,uStack_64._4_4_);
        if (pOVar99 == (ObjectSurfaceSnap_SurfaceRaycaster *)0x0) goto code_?;
        QStack_126.y = fVar68;
        QStack_126.x = fVar69;
        QStack_126.w = (float)(undefined4)uStack_64;
        pIVar196 = (pOVar99->klass->vtable).__unknown.methodPtr;
        uStack_436 = CONCAT44((undefined4)uStack_64,fVar67);
        uStack_437 = CONCAT44(fStack_433,uStack_64._4_4_);
        uStack_438._0_4_ = fVar69;
        uStack_438._4_4_ = fVar68;
        pMVar115 = (pOVar99->klass->vtable).__unknown.method;
        *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
        QStack_126.z = fVar67;
        uStack_64 = uVar63;
        lVar198 = (*pIVar196)(pOVar99,&uStack_438,pMVar115);
        if (lVar198 != 0) {
          afStackX_8[0] = *(float *)(lVar198 + 0x30);
          uVar63 = *(undefined8 *)&(snapConfig->SurfaceHitPoint).z;
          alignmentAxis_03 = snapConfig->AlignmentAxis;
          uVar93 = *(undefined8 *)(lVar198 + 0x28);
          uVar94 = *(undefined8 *)&(snapConfig->SurfaceHitNormal).y;
          uVar95 = *(undefined8 *)&(snapConfig->SurfaceHitPlane).m_Normal;
          *(undefined8 *)((longlong)apMStackX_10 + lVar1 + 8) =
               *(undefined8 *)&snapConfig->SurfaceHitPoint;
          *(undefined8 *)((longlong)apMStackX_10 + lVar1 + 0x10) = uVar63;
          pGVar96 = snapConfig->SurfaceObject;
          VStack_14.x = (float)uVar93;
          VStack_14.y = SUB84(uVar93,4);
          *(undefined8 *)(&stack0x00000038 + lVar1) =
               *(undefined8 *)&(snapConfig->SurfaceHitPlane).m_Normal.z;
          *(GameObject **)(&stack0x00000040 + lVar1) = pGVar96;
          VStack_14.z = afStackX_8[0];
          *(undefined8 *)(&stack0x00000028 + lVar1) = uVar94;
          *(undefined8 *)(&stack0x00000030 + lVar1) = uVar95;
          VStack_439.x = (float)uVar93;
          VStack_439.y = SUB84(uVar93,4);
          VStack_439.z = afStackX_8[0];
          *(undefined8 *)(&stack0xfffffffffffffff8 + lVar1) = 0;
          *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
          pQVar440 = TransformEx::TransformEx_Align
                               (&QStack_441,pTVar65,&VStack_439,alignmentAxis_03,
                                *(MethodInfo **)(&stack0xfffffffffffffff8 + lVar1));
          uVar95._0_4_ = pQVar440->x;
          uVar95._4_4_ = pQVar440->y;
          uVar442._0_4_ = pQVar440->z;
          uVar442._4_4_ = pQVar440->w;
          if (*(int *)&(TypeInfo__RTG__ObjectBounds->_1).field_0x1c == 0) {
            *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
            FUN_?();
            afStackX_8[0] = VStack_14.z;
            uVar93 = VStack_14._0_8_;
          }
          OStack_443.ObjectTypes = 5;
          OStack_443.NoVolumeSize.x = 0.0;
          OStack_443.NoVolumeSize.y = 0.0;
          OStack_443.NoVolumeSize.z = 0.0;
          *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
          pOVar102 = ObjectBounds::ObjectBounds_CalcHierarchyWorldOBB
                              (&OStack_444,root,&OStack_443,(MethodInfo *)0x0);
          OStack_445._8_8_ = *(undefined8 *)&(pOVar102->_size).z;
          uVar63 = uStack_64;
          if (pTVar65 != (Transform *)0x0) {
            *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
            pVVar112 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                                 (&VStack_446,pTVar65,(MethodInfo *)0x0);
            VStack_447.x = pVVar112->x;
            VStack_447.y = pVVar112->y;
            VStack_447.z = pVVar112->z;
            *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
            pMVar115 = apMStackX_10[0];
            QStack_448._0_8_ = uVar95;
            QStack_448._8_8_ = uVar442;
            QuaternionEx::QuaternionEx_RotatePoints
                      (&QStack_448,(List_1_UnityEngine_Vector3_ *)apMStackX_10[0],&VStack_447,
                       (MethodInfo *)0x0);
            *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
            pVVar112 = TriangPrismShape3D::TriangPrismShape3D_get_ModelUp(&VStack_449,pMVar115);
            uStack_450 = *(undefined4 *)(lVar198 + 0x20);
            uStack_451 = *(undefined8 *)(lVar198 + 0x18);
            auStack_452._0_4_ = 0.0;
            auStack_452._4_4_ = 0.0;
            auStack_452._8_4_ = 0.0;
            auStack_452._12_4_ = 0.0;
            uStack_453._0_4_ = pVVar112->x;
            uStack_453._4_4_ = pVVar112->y;
            fStack_454 = pVVar112->z;
            *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
            FUN_?(auStack_452,&uStack_453,&uStack_451);
            OStack_445._isValid = pOVar102->_isValid;
            OStack_445._41_3_ = *(undefined3 *)&pOVar102->field_0x29;
            PStack_455.m_Normal.x = (float)auStack_452._0_4_;
            PStack_455.m_Normal.y = (float)auStack_452._4_4_;
            PStack_455.m_Normal.z = (float)auStack_452._8_4_;
            PStack_455.m_Distance = (float)auStack_452._12_4_;
            OStack_445._size.x = (pOVar102->_size).x;
            OStack_445._size.y = (pOVar102->_size).y;
            OStack_445._center.y = (pOVar102->_center).y;
            OStack_445._center.z = (pOVar102->_center).z;
            OStack_445._rotation.x = (pOVar102->_rotation).x;
            OStack_445._rotation.y = (pOVar102->_rotation).y;
            OStack_445._rotation.z = (pOVar102->_rotation).z;
            OStack_445._rotation.w = (pOVar102->_rotation).w;
            *(undefined8 *)(&stack0xfffffffffffffff8 + lVar1) = 0;
            *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
            pVVar112 = ObjectSurfaceSnap_CalculateSitOnSurfaceOffset
                                 (&VStack_456,&OStack_445,&PStack_455,_UNK_?,
                                  *(MethodInfo **)(&stack0xfffffffffffffff8 + lVar1));
            pIVar196 = *(Il2CppMethodPointer *)pVVar112;
            fVar66 = pVVar112->z;
            *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
            pVVar112 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                                 (&VStack_457,pTVar65,(MethodInfo *)0x0);
            uVar458 = pVVar112->x;
            uVar459 = pVVar112->y;
            VStack_460.z = fVar66 + pVVar112->z;
            VStack_460.y = (float)((ulonglong)pIVar196 >> 0x20) + (float)uVar459;
            VStack_460.x = SUB84(pIVar196,0) + (float)uVar458;
            *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                      (pTVar65,&VStack_460,(MethodInfo *)0x0);
            pMVar115 = (MethodInfo *)auStack_461;
            *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
            auStack_461._0_8_ = pIVar196;
            auStack_461._8_4_ = fVar66;
            Vector3Ex::Vector3Ex_OffsetPoints
                      ((List_1_UnityEngine_Vector3_ *)apMStackX_10[0],(Vector3 *)pMVar115,
                       (MethodInfo *)0x0);
            *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
            pVVar112 = TriangPrismShape3D::TriangPrismShape3D_get_ModelUp(&VStack_462,pMVar115);
            pMVar115 = apMStackX_10[0];
            uVar463 = pVVar112->x;
            fVar66 = pVVar112->y;
            fVar67 = pVVar112->z;
            uVar464 = snapConfig->SurfaceType;
            pGVar96 = snapConfig->SurfaceObject;
            *(undefined8 *)((longlong)apMStackX_10 + lVar1 + -0x10) = 0;
            pIStack_465 = (InvokerMethod)CONCAT44((uint)fVar66 ^ uVar97,uVar463 ^ uVar97);
            fStack_466 = (float)((uint)fVar67 ^ uVar97);
            *(undefined4 *)(&stack0xfffffffffffffff8 + lVar1) = uVar464;
            *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
            pVVar112 = ObjectSurfaceSnap_CalculateEmbedVector
                                 (&VStack_467,(List_1_UnityEngine_Vector3_ *)pMVar115,pGVar96,
                                  (Vector3 *)&pIStack_465,
                                  *(ObjectSurfaceSnap_Type__Enum *)
                                   (&stack0xfffffffffffffff8 + lVar1),
                                  *(MethodInfo **)((longlong)apMStackX_10 + lVar1 + -0x10));
            uVar468 = pVVar112->x;
            uVar469 = pVVar112->y;
            fVar67 = pVVar112->z;
            *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
            pVVar112 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                                 (&VStack_470,pTVar65,(MethodInfo *)0x0);
            fVar68 = afStackX_8[0];
            uVar471 = pVVar112->x;
            uVar472 = pVVar112->y;
            fVar66 = snapConfig->OffsetFromSurface;
            ppIStack_473 = (Il2CppType **)
                           CONCAT44(VStack_14.y * fVar66 + (float)uVar469 + (float)uVar472,
                                    VStack_14.x * fVar66 + (float)uVar468 + (float)uVar471);
            _Stack_cf0._0_4_ = afStackX_8[0] * fVar66 + fVar67 + pVVar112->z;
            *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                      (pTVar65,(Vector3 *)&ppIStack_473,(MethodInfo *)0x0);
            _Stack_ce8 = *(_union_155 *)(lVar198 + 0x18);
            uStack_474 = *(uint32_t *)(lVar198 + 0x20);
            uStack_475 = 0;
            uStack_476 = 0;
            VStack_477.z = fVar68;
            *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
            VStack_477._0_8_ = uVar93;
            FUN_?(&uStack_475,&VStack_477,&_Stack_ce8);
            uVar104 = *(undefined4 *)(lVar198 + 0x20);
            uStack_478 = (undefined4)*(undefined8 *)(lVar198 + 0x18);
            uStack_479 = (undefined4)((ulonglong)*(undefined8 *)(lVar198 + 0x18) >> 0x20);
            uStack_480 = (undefined4)uStack_475;
            uStack_481 = (undefined4)((ulonglong)uStack_475 >> 0x20);
            uStack_482 = (undefined4)uStack_476;
            uStack_483 = (undefined4)((ulonglong)uStack_476 >> 0x20);
            __return_storage_ptr__->Success = (char)1;
            *(int3 *)&__return_storage_ptr__->field_0x1 = (int3)(1 >> 8);
            (__return_storage_ptr__->SittingPlane).m_Normal.x = (float)uStack_480;
            (__return_storage_ptr__->SittingPlane).m_Normal.y = (float)uStack_481;
            (__return_storage_ptr__->SittingPlane).m_Normal.z = (float)uStack_482;
            *(ulonglong *)&(__return_storage_ptr__->SittingPlane).m_Distance =
                 CONCAT44(uStack_478,uStack_483);
            (__return_storage_ptr__->SittingPoint).y = (float)uStack_479;
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
  *(undefined8 *)((longlong)apMStackX_10 + lVar1 + 8) = *(undefined8 *)&snapConfig->SurfaceHitPoint
  ;
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
    OStack_484.ObjectTypes = 5;
    OStack_484.NoVolumeSize.x = 0.0;
    OStack_484.NoVolumeSize.y = 0.0;
    OStack_484.NoVolumeSize.z = 0.0;
    *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
    pOVar102 = ObjectBounds::ObjectBounds_CalcHierarchyWorldOBB
                        (&OStack_485,root,&OStack_484,(MethodInfo *)0x0);
    uVar387._0_1_ = pOVar102->_isValid;
    uVar387._1_3_ = *(undefined3 *)&pOVar102->field_0x29;
    uVar486._0_4_ = (pOVar102->_rotation).z;
    uVar486._4_4_ = (pOVar102->_rotation).w;
    fVar66 = (pOVar102->_size).x;
    fVar67 = (pOVar102->_size).y;
    uStack_55._0_4_ = (pOVar102->_size).x;
    uStack_55._4_4_ = (pOVar102->_size).y;
    pfVar487 = &(pOVar102->_size).z;
    fVar68 = *pfVar487;
    fVar69 = (pOVar102->_center).x;
    uStack_56 = *(undefined8 *)pfVar487;
    fVar77 = (pOVar102->_center).y;
    fVar260 = (pOVar102->_center).z;
    uStack_58._0_4_ = (pOVar102->_center).y;
    uStack_58._4_4_ = (pOVar102->_center).z;
    pQVar440 = &pOVar102->_rotation;
    fVar261 = pQVar440->x;
    fVar283 = (pOVar102->_rotation).y;
    uStack_59._0_4_ = pQVar440->x;
    uStack_59._4_4_ = pQVar440->y;
    if ((bool)uVar387 != 0) {
      uVar63 = uStack_64;
      uStack_57 = uVar486;
      uStack_60 = uVar387;
      if (root != (GameObject *)0x0) {
        *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
        pTVar65 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                            (root,(MethodInfo *)0x0);
        uVar63 = *(undefined8 *)&(snapConfig->SurfaceHitPoint).z;
        uVar93 = *(undefined8 *)&(snapConfig->SurfaceHitNormal).y;
        uVar94 = *(undefined8 *)&(snapConfig->SurfaceHitPlane).m_Normal;
        *(undefined8 *)((longlong)apMStackX_10 + lVar1 + 8) =
             *(undefined8 *)&snapConfig->SurfaceHitPoint;
        *(undefined8 *)((longlong)apMStackX_10 + lVar1 + 0x10) = uVar63;
        uVar63 = *(undefined8 *)&(snapConfig->SurfaceHitPlane).m_Normal.z;
        pGVar96 = snapConfig->SurfaceObject;
        *(undefined8 *)(&stack0x00000028 + lVar1) = uVar93;
        *(undefined8 *)(&stack0x00000030 + lVar1) = uVar94;
        *(undefined8 *)(&stack0x00000038 + lVar1) = uVar63;
        *(GameObject **)(&stack0x00000040 + lVar1) = pGVar96;
        if (snapConfig->AlignAxis != 0) {
          uStack_488._0_4_ = (snapConfig->SurfaceHitPoint).x;
          uStack_488._4_4_ = (snapConfig->SurfaceHitPoint).y;
          uStack_489 = *(undefined8 *)&(snapConfig->SurfaceHitPoint).z;
          alignmentAxis_04 = snapConfig->AlignmentAxis;
          fStack_490 = (snapConfig->SurfaceHitNormal).y;
          fStack_491 = (snapConfig->SurfaceHitNormal).z;
          fStack_492 = (snapConfig->SurfaceHitPlane).m_Normal.x;
          fStack_493 = (snapConfig->SurfaceHitPlane).m_Normal.y;
          uVar63 = *(undefined8 *)snapConfig;
          uVar93 = *(undefined8 *)&snapConfig->SurfaceType;
          *(undefined8 *)(&stack0xfffffffffffffff8 + lVar1) = 0;
          *(undefined8 *)((longlong)apMStackX_10 + lVar1 + 8) = uStack_488;
          *(undefined8 *)((longlong)apMStackX_10 + lVar1 + 0x10) = uStack_489;
          *(undefined8 *)((longlong)afStackX_8 + lVar1) = uVar63;
          *(undefined8 *)((longlong)apMStackX_10 + lVar1) = uVar93;
          pGVar96 = snapConfig->SurfaceObject;
          *(undefined8 *)(&stack0x00000038 + lVar1) =
               *(undefined8 *)&(snapConfig->SurfaceHitPlane).m_Normal.z;
          *(GameObject **)(&stack0x00000040 + lVar1) = pGVar96;
          uStack_167 = *(undefined8 *)&(snapConfig->SurfaceHitPlane).m_Normal.z;
          pGStack_168 = snapConfig->SurfaceObject;
          *(float *)(&stack0x00000028 + lVar1) = fStack_490;
          *(float *)(&stack0x0000002c + lVar1) = fStack_491;
          *(float *)(&stack0x00000030 + lVar1) = fStack_492;
          *(float *)(&stack0x00000034 + lVar1) = fStack_493;
          VStack_494._0_8_ = *(undefined8 *)((longlong)apMStackX_10 + lVar1 + 0x14);
          VStack_494.z = fStack_491;
          *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
          TransformEx::TransformEx_Align
                    (&QStack_495,pTVar65,&VStack_494,alignmentAxis_04,
                     *(MethodInfo **)(&stack0xfffffffffffffff8 + lVar1));
          if (*(int *)&(TypeInfo__RTG__ObjectBounds->_1).field_0x1c == 0) {
            *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
            FUN_?();
          }
          OStack_496.ObjectTypes = 5;
          OStack_496.NoVolumeSize.x = 0.0;
          OStack_496.NoVolumeSize.y = 0.0;
          OStack_496.NoVolumeSize.z = 0.0;
          *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
          pOVar102 = ObjectBounds::ObjectBounds_CalcHierarchyWorldOBB
                              ((OBB *)auStack_80,root,&OStack_496,(MethodInfo *)0x0);
          fVar66 = (pOVar102->_size).x;
          fVar67 = (pOVar102->_size).y;
          fVar68 = (pOVar102->_size).z;
          fVar69 = (pOVar102->_center).x;
          uVar387._0_1_ = pOVar102->_isValid;
          uVar387._1_3_ = *(undefined3 *)&pOVar102->field_0x29;
          fVar77 = (pOVar102->_center).y;
          fVar260 = (pOVar102->_center).z;
          fVar261 = (pOVar102->_rotation).x;
          fVar283 = (pOVar102->_rotation).y;
          uVar486._0_4_ = (pOVar102->_rotation).z;
          uVar486._4_4_ = (pOVar102->_rotation).w;
        }
        uVar63 = uStack_64;
        if (pTVar65 != (Transform *)0x0) {
          if (cRam_? == '\0') {
            *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
            FUN_?(&
                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                         );
            LOCK();
            *(undefined4 *)(&stack0xffffffffffffffd8 + lVar1) =
                 *(undefined4 *)(&stack0xffffffffffffffd8 + lVar1);
            UNLOCK();
            cRam_? = '\x01';
          }
          uStack_497 = 0;
          fStack_498 = 0.0;
          pvVar71 = (pTVar65->fields)._._.m_CachedPtr;
          if (pvVar71 == (void *)0x0) {
            *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
            ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar65,(MethodInfo *)0x0);
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
          (*pcRam_?)(pvVar71,&uStack_497);
          uVar63 = *(undefined8 *)&(snapConfig->SurfaceHitPlane).m_Normal.z;
          pGVar96 = snapConfig->SurfaceObject;
          OStack_499._isValid = (bool)uVar387;
          OStack_499._41_3_ = SUB43(uVar387,1);
          uVar93 = *(undefined8 *)&(snapConfig->SurfaceHitNormal).y;
          uVar94 = *(undefined8 *)&(snapConfig->SurfaceHitPlane).m_Normal;
          *(undefined8 *)(&stack0xfffffffffffffff8 + lVar1) = 0;
          fVar284 = snapConfig->OffsetFromSurface;
          *(undefined8 *)(&stack0x00000028 + lVar1) = uVar93;
          *(undefined8 *)(&stack0x00000030 + lVar1) = uVar94;
          *(undefined8 *)(&stack0x00000038 + lVar1) = uVar63;
          *(GameObject **)(&stack0x00000040 + lVar1) = pGVar96;
          OStack_499._size.x = fVar66;
          OStack_499._size.y = fVar67;
          OStack_499._size.z = fVar68;
          OStack_499._center.x = fVar69;
          PStack_500.m_Normal._0_8_ = *(undefined8 *)(&stack0x00000030 + lVar1);
          PStack_500._8_8_ = *(undefined8 *)(&stack0x00000038 + lVar1);
          OStack_499._center.y = fVar77;
          OStack_499._center.z = fVar260;
          OStack_499._rotation.x = fVar261;
          OStack_499._rotation.y = fVar283;
          OStack_499._rotation.z = (float)uVar486;
          OStack_499._rotation.w = SUB84(uVar486,4);
          *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
          pVVar112 = ObjectSurfaceSnap_CalculateSitOnSurfaceOffset
                               (&VStack_501,&OStack_499,&PStack_500,fVar284,
                                *(MethodInfo **)(&stack0xfffffffffffffff8 + lVar1));
          VStack_470.x = pVVar112->x;
          VStack_470.y = pVVar112->y;
          fStack_502 = fStack_498 + pVVar112->z;
          uStack_503 = CONCAT44(uStack_497._4_4_ + VStack_470.y,(float)uStack_497 + VStack_470.x);
          if (cRam_? == '\0') {
            *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
            FUN_?(&
                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                         );
            LOCK();
            *(undefined4 *)(&stack0xffffffffffffffd8 + lVar1) =
                 *(undefined4 *)(&stack0xffffffffffffffd8 + lVar1);
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
            (*pcRam_?)(pvVar71,&uStack_503);
            fVar66 = (snapConfig->SurfaceHitNormal).z;
            fVar67 = (snapConfig->SurfaceHitPlane).m_Normal.x;
            fVar68 = (snapConfig->SurfaceHitPlane).m_Normal.y;
            fVar261 = (snapConfig->SurfaceHitPlane).m_Normal.z;
            fVar283 = (snapConfig->SurfaceHitPlane).m_Distance;
            uVar104 = *(undefined4 *)&snapConfig->SurfaceObject;
            uVar387 = *(undefined4 *)((longlong)&snapConfig->SurfaceObject + 4);
            *(float *)(&stack0x00000028 + lVar1) = (snapConfig->SurfaceHitNormal).y;
            *(float *)(&stack0x0000002c + lVar1) = fVar66;
            *(float *)(&stack0x00000030 + lVar1) = fVar67;
            *(float *)(&stack0x00000034 + lVar1) = fVar68;
            *(float *)(&stack0x00000038 + lVar1) = fVar261;
            *(float *)(&stack0x0000003c + lVar1) = fVar283;
            *(undefined4 *)(&stack0x00000040 + lVar1) = uVar104;
            *(undefined4 *)(&stack0x00000044 + lVar1) = uVar387;
            fVar283 = fVar77 * fVar68 + fVar69 * fVar67 + fVar260 * fVar261 + fVar283;
            uStack_504 = (undefined4)*(undefined8 *)(&stack0x00000030 + lVar1);
            uStack_505 = (undefined4)
                          ((ulonglong)*(undefined8 *)(&stack0x00000030 + lVar1) >> 0x20);
            uStack_506 = (undefined4)*(undefined8 *)(&stack0x00000038 + lVar1);
            fStack_507 = (float)((ulonglong)*(undefined8 *)(&stack0x00000038 + lVar1) >> 0x20);
            __return_storage_ptr__->Success = (char)1;
            *(int3 *)&__return_storage_ptr__->field_0x1 = (int3)(1 >> 8);
            (__return_storage_ptr__->SittingPlane).m_Normal.x = (float)uStack_504;
            (__return_storage_ptr__->SittingPlane).m_Normal.y = (float)uStack_505;
            (__return_storage_ptr__->SittingPlane).m_Normal.z = (float)uStack_506;
            (__return_storage_ptr__->SittingPlane).m_Distance = fStack_507;
            (__return_storage_ptr__->SittingPoint).x = fVar69 - fVar67 * fVar283;
            (__return_storage_ptr__->SittingPoint).y = fVar77 - fVar68 * fVar283;
            (__return_storage_ptr__->SittingPoint).z = fVar260 - fVar261 * fVar283;
            return __return_storage_ptr__;
          }
          *(undefined **)((longlong)&puStack_2 + lVar1) = &UNK_?;
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar65,(MethodInfo *)0x0);
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

