
/* Boolean DoDetailedCheck(Cube, Vector3) */

bool Assembly-CSharp.dll::MVElipsoidOverlapCheck::MVElipsoidOverlapCheck_DoDetailedCheck
               (Cube *cube,Vector3 *localPos,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MV__WorldObject__CubeBase);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVElipsoidOverlapCheck);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__MVElipsoidOverlapCheck->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (*(int *)&(TypeInfo__MV__WorldObject__CubeBase->_1).field_0x1c == 0) {
    FUN_?();
  }
  MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_GetCorners
            ((CubeBase *)cube,&TypeInfo__MVElipsoidOverlapCheck->static_fields->cachedCorners,
             (MethodInfo *)0x0);
  r = _UNK_?;
  uVar1 = 0;
  FVar2 = Face__Enum_Top;
  uVar3 = uVar1;
  uVar4 = uVar1;
  while( true ) {
    if (*(int *)&(TypeInfo__MVElipsoidOverlapCheck->_1).field_0x1c == 0) {
      FUN_?();
    }
    pVVar5 = TypeInfo__MVElipsoidOverlapCheck->static_fields->cachedCorners;
    if (pVVar5 == (Vector3__Array *)0x0) goto code_?;
    uVar6 = (uint)uVar4;
    if ((int)pVVar5->max_length <= (int)uVar6) break;
    if (*(int *)&(TypeInfo__MVElipsoidOverlapCheck->_1).field_0x1c == 0) {
      FUN_?();
    }
    pVVar5 = TypeInfo__MVElipsoidOverlapCheck->static_fields->cachedCorners;
    if (pVVar5 == (Vector3__Array *)0x0) goto code_?;
    if ((uint)pVVar5->max_length <= uVar6) goto code_?;
    uVar7 = localPos->x;
    uVar8 = localPos->y;
    VStack_9._0_8_ = *(undefined8 *)((longlong)&pVVar5->vector[0].x + uVar3);
    fVar10 = localPos->z;
    *(ulonglong *)((longlong)&pVVar5->vector[0].x + uVar3) =
         CONCAT44((float)uVar8 + VStack_9.y,(float)uVar7 + VStack_9.x);
    *(float *)((longlong)&pVVar5->vector[0].z + uVar3) =
         fVar10 + *(float *)((longlong)&pVVar5->vector[0].z + uVar3);
    pMVar11 = TypeInfo__MVElipsoidOverlapCheck->static_fields;
    pVVar5 = pMVar11->cachedCorners;
    if (pVVar5 == (Vector3__Array *)0x0) goto code_?;
    if ((uint)pVVar5->max_length <= uVar6) goto code_?;
    aVStack_12[0]._0_8_ = *(undefined8 *)((longlong)&pVVar5->vector[0].x + uVar3);
    fVar10 = *(float *)((longlong)&pVVar5->vector[0].z + uVar3);
    fVar13 = SUB84(aVStack_12[0]._0_8_,4);
    fVar14 = r / (fVar13 * (pMVar11->localToElipsoidSpace).m31 +
                  aVStack_12[0].x * (pMVar11->localToElipsoidSpace).m30 +
                  fVar10 * (pMVar11->localToElipsoidSpace).m32 + (pMVar11->localToElipsoidSpace).m33)
    ;
    fVar15 = (pMVar11->localToElipsoidSpace).m21;
    fVar16 = (pMVar11->localToElipsoidSpace).m20;
    fVar17 = (pMVar11->localToElipsoidSpace).m22;
    fVar18 = (pMVar11->localToElipsoidSpace).m23;
    *(ulonglong *)((longlong)&pVVar5->vector[0].x + uVar3) =
         CONCAT44((fVar13 * (pMVar11->localToElipsoidSpace).m11 +
                   aVStack_12[0].x * (pMVar11->localToElipsoidSpace).m10 +
                   fVar10 * (pMVar11->localToElipsoidSpace).m12 + (pMVar11->localToElipsoidSpace).m13
                  ) * fVar14,
                  (fVar13 * (pMVar11->localToElipsoidSpace).m01 +
                   aVStack_12[0].x * (pMVar11->localToElipsoidSpace).m00 +
                   fVar10 * (pMVar11->localToElipsoidSpace).m02 + (pMVar11->localToElipsoidSpace).m03
                  ) * fVar14);
    *(float *)((longlong)&pVVar5->vector[0].z + uVar3) =
         (fVar13 * fVar15 + aVStack_12[0].x * fVar16 + fVar10 * fVar17 + fVar18) * fVar14;
    pVVar5 = TypeInfo__MVElipsoidOverlapCheck->static_fields->cachedCorners;
    if (pVVar5 == (Vector3__Array *)0x0) goto code_?;
    if ((uint)pVVar5->max_length <= uVar6) goto code_?;
    fVar10 = *(float *)((longlong)&pVVar5->vector[0].y + uVar3);
    fVar15 = *(float *)((longlong)&pVVar5->vector[0].x + uVar3);
    fVar16 = *(float *)((longlong)&pVVar5->vector[0].z + uVar3);
    if (fVar10 * fVar10 + fVar15 * fVar15 + fVar16 * fVar16 <= r) {
      return 1;
    }
    uVar4 = (ulonglong)(uVar6 + 1);
    uVar3 = uVar3 + 0xc;
  }
  if (*(int *)&(TypeInfo__MV__WorldObject__CubeBase->_1).field_0x1c == 0) {
    FUN_?();
  }
  lVar19 = FUN_?();
  if (lVar19 != 0) {
    pbVar20 = (byte *)(lVar19 + 0x20);
    do {
      uVar6 = (uint)uVar1;
      if (*(int *)(lVar19 + 0x18) <= (int)uVar6) {
        return 0;
      }
      if (*(uint *)(lVar19 + 0x18) <= uVar6) {
code_?:
        FUN_?();
        pcVar21 = (code *)swi(3);
        bVar22 = (*pcVar21)();
        return bVar22;
      }
      bVar23 = *pbVar20;
      if (*(int *)&(TypeInfo__MVElipsoidOverlapCheck->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__MVElipsoidOverlapCheck);
      }
      if (*(int *)&(TypeInfo__MV__WorldObject__CubeBase->_1).field_0x1c == 0) {
        FUN_?();
      }
      FVar24 = FVar2;
      if (bVar23 < 9) {
        if (bVar23 != 1) {
          if (bVar23 == 2) {
            FVar24 = Face__Enum_Bottom;
          }
          else if (bVar23 != 3) {
            if (bVar23 == 4) {
              FVar24 = Face__Enum_Front;
            }
            else if (bVar23 == 8) {
              FVar24 = Face__Enum_Back;
            }
          }
        }
      }
      else if (bVar23 == 0x10) {
        FVar24 = Face__Enum_Left;
      }
      else if (bVar23 == 0x20) {
        FVar24 = Face__Enum_Right;
      }
      MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_GetFace
                (&TypeInfo__MVElipsoidOverlapCheck->static_fields->cachedCorners,
                 &TypeInfo__MVElipsoidOverlapCheck->static_fields->cachedFace,FVar24,
                 (MethodInfo *)0x0);
      pVVar5 = TypeInfo__MVElipsoidOverlapCheck->static_fields->cachedFace;
      if (pVVar5 == (Vector3__Array *)0x0) break;
      if ((int)pVVar5->max_length == 0) goto code_?;
      uVar25._0_4_ = pVVar5->vector[0].x;
      uVar25._4_4_ = pVVar5->vector[0].y;
      fVar10 = pVVar5->vector[0].z;
      if ((uint)pVVar5->max_length < 4) goto code_?;
      uVar26._0_4_ = pVVar5->vector[3].x;
      uVar26._4_4_ = pVVar5->vector[3].y;
      fVar15 = pVVar5->vector[3].z;
      uVar27._0_4_ = pVVar5->vector[2].x;
      uVar27._4_4_ = pVVar5->vector[2].y;
      fVar16 = pVVar5->vector[2].z;
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Vector3);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pVVar28 = TypeInfo__UnityEngine__Vector3->static_fields;
      VStack_29.x = (pVVar28->zeroVector).x;
      VStack_29.y = (pVVar28->zeroVector).y;
      VStack_29.z = (pVVar28->zeroVector).z;
      VStack_30._0_8_ = uVar27;
      VStack_30.z = fVar16;
      VStack_31._0_8_ = uVar26;
      VStack_31.z = fVar15;
      VStack_32._0_8_ = uVar25;
      VStack_32.z = fVar10;
      bVar22 = MVElipsoidOverlapCheck_HandleTriangleTest
                         (&VStack_32,&VStack_31,&VStack_30,&VStack_29,r,(MethodInfo *)0x0);
      if (bVar22 == 0) {
        return 1;
      }
      if (*(int *)&(TypeInfo__MVElipsoidOverlapCheck->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__MVElipsoidOverlapCheck);
      }
      pVVar5 = TypeInfo__MVElipsoidOverlapCheck->static_fields->cachedFace;
      if (pVVar5 == (Vector3__Array *)0x0) break;
      if ((uint)pVVar5->max_length < 3) goto code_?;
      uVar33._0_4_ = pVVar5->vector[2].x;
      uVar33._4_4_ = pVVar5->vector[2].y;
      fVar10 = pVVar5->vector[2].z;
      uVar34._0_4_ = pVVar5->vector[1].x;
      uVar34._4_4_ = pVVar5->vector[1].y;
      fVar15 = pVVar5->vector[1].z;
      uVar35._0_4_ = pVVar5->vector[0].x;
      uVar35._4_4_ = pVVar5->vector[0].y;
      fVar16 = pVVar5->vector[0].z;
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Vector3);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pVVar28 = TypeInfo__UnityEngine__Vector3->static_fields;
      VStack_36.x = (pVVar28->zeroVector).x;
      VStack_36.y = (pVVar28->zeroVector).y;
      VStack_36.z = (pVVar28->zeroVector).z;
      VStack_37._0_8_ = uVar35;
      VStack_37.z = fVar16;
      VStack_9._0_8_ = uVar34;
      VStack_9.z = fVar15;
      aVStack_12[0]._0_8_ = uVar33;
      aVStack_12[0].z = fVar10;
      bVar22 = MVElipsoidOverlapCheck_HandleTriangleTest
                         (aVStack_12,&VStack_9,&VStack_37,&VStack_36,r,(MethodInfo *)0x0);
      if (bVar22 == 0) {
        return 1;
      }
      uVar1 = (ulonglong)(uVar6 + 1);
      pbVar20 = pbVar20 + 1;
    } while( true );
  }
code_?:
  FUN_?();
  pcVar21 = (code *)swi(3);
  bVar22 = (*pcVar21)();
  return bVar22;
}


/* List`1[MVOverlapResult] ElipsoidOverlapCheck(Vector3, Transform, Bounds, HashSet`1[System.Int32],
   Int32) */

List_1_MVOverlapResult_ *
Assembly-CSharp.dll::MVElipsoidOverlapCheck::MVElipsoidOverlapCheck_ElipsoidOverlapCheck
          (Vector3 *position,Transform *transform,Bounds *localBounds,
          HashSet_1_System_Int32_ *ignoreWoIds,int32_t layerMask,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVElipsoidOverlapCheck);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uVar1 = (localBounds->m_Extents).x;
  aQStack_2[0].x = (localBounds->m_Extents).x;
  aQStack_2[0].y = (localBounds->m_Extents).y;
  aQStack_2[0].z = (localBounds->m_Extents).z;
  fVar3 = (float)uVar1 * TypeRef__System__Activator__T._0_4_ * _UNK_?;
  fVar4 = (aQStack_2[0].y + aQStack_2[0].y) * _UNK_?;
  fVar5 = (localBounds->m_Extents).z;
  fVar5 = (fVar5 + fVar5) * _UNK_?;
  if (transform == (Transform *)0x0) {
    FUN_?();
    pcVar6 = (code *)swi(3);
    pLVar7 = (List_1_MVOverlapResult_ *)(*pcVar6)();
    return pLVar7;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  QStack_8.x = 0.0;
  QStack_8.y = 0.0;
  QStack_8._8_8_ = (ulonglong)(uint)QStack_8.w << 0x20;
  pvVar9 = (transform->fields)._._.m_CachedPtr;
  if (pvVar9 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)transform,(MethodInfo *)0x0);
    pcVar6 = (code *)swi(3);
    pLVar7 = (List_1_MVOverlapResult_ *)(*pcVar6)();
    return pLVar7;
  }
  pcVar6 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
    uVar10 = func_?(&UNK_?);
    FUN_?(uVar10,0);
    pcVar6 = (code *)swi(3);
    pLVar7 = (List_1_MVOverlapResult_ *)(*pcVar6)();
    return pLVar7;
  }
  pcRam_? = pcVar6;
  (*pcRam_?)(pvVar9);
  aQStack_2[0].x = (localBounds->m_Center).x;
  aQStack_2[0].y = (localBounds->m_Center).y;
  aQStack_2[0].z = (localBounds->m_Center).z;
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  VStack_11.x = 0.0;
  VStack_11.y = 0.0;
  VStack_11.z = 0.0;
  pvVar9 = (transform->fields)._._.m_CachedPtr;
  if (pvVar9 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)transform,(MethodInfo *)0x0);
    pcVar6 = (code *)swi(3);
    pLVar7 = (List_1_MVOverlapResult_ *)(*pcVar6)();
    return pLVar7;
  }
  pcVar6 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
    uVar10 = func_?(&UNK_?);
    FUN_?(uVar10,0);
    pcVar6 = (code *)swi(3);
    pLVar7 = (List_1_MVOverlapResult_ *)(*pcVar6)();
    return pLVar7;
  }
  pcRam_? = pcVar6;
  (*pcRam_?)(pvVar9,aQStack_2,&VStack_11);
  fVar3 = QStack_8.x * fVar3;
  fVar4 = QStack_8.y * fVar4;
  fVar5 = QStack_8.z * fVar5;
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  QStack_8.x = 0.0;
  QStack_8.y = 0.0;
  QStack_8._8_8_ = QStack_8._8_8_ & 0xffffffff00000000;
  pvVar9 = (transform->fields)._._.m_CachedPtr;
  if (pvVar9 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)transform,(MethodInfo *)0x0);
    pcVar6 = (code *)swi(3);
    pLVar7 = (List_1_MVOverlapResult_ *)(*pcVar6)();
    return pLVar7;
  }
  pcVar6 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
    uVar10 = func_?(&UNK_?);
    FUN_?(uVar10,0);
    pcVar6 = (code *)swi(3);
    pLVar7 = (List_1_MVOverlapResult_ *)(*pcVar6)();
    return pLVar7;
  }
  pcRam_? = pcVar6;
  (*pcRam_?)(pvVar9);
  aQStack_2[0].x = position->x;
  aQStack_2[0].y = position->y;
  fVar12 = VStack_11.z - QStack_8.z;
  fVar13 = (VStack_11.x - QStack_8.x) + aQStack_2[0].x;
  fVar14 = (VStack_11.y - QStack_8.y) + aQStack_2[0].y;
  fVar15 = position->z;
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  aQStack_2[0].x = 0.0;
  aQStack_2[0].y = 0.0;
  aQStack_2[0].z = 0.0;
  aQStack_2[0].w = 0.0;
  pvVar9 = (transform->fields)._._.m_CachedPtr;
  if (pvVar9 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)transform,(MethodInfo *)0x0);
    pcVar6 = (code *)swi(3);
    pLVar7 = (List_1_MVOverlapResult_ *)(*pcVar6)();
    return pLVar7;
  }
  pcVar6 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
    uVar10 = func_?(&UNK_?);
    FUN_?(uVar10,0);
    pcVar6 = (code *)swi(3);
    pLVar7 = (List_1_MVOverlapResult_ *)(*pcVar6)();
    return pLVar7;
  }
  pcRam_? = pcVar6;
  (*pcRam_?)(pvVar9,aQStack_2);
  if (*(int *)&(TypeInfo__MVElipsoidOverlapCheck->_1).field_0x1c == 0) {
    FUN_?();
  }
  QStack_8.x = aQStack_2[0].x;
  QStack_8.y = aQStack_2[0].y;
  QStack_8.z = aQStack_2[0].z;
  QStack_8.w = aQStack_2[0].w;
  aQStack_2[0].z = fVar12 + fVar15;
  aQStack_2[0].y = fVar14;
  aQStack_2[0].x = fVar13;
  VStack_11.y = fVar4;
  VStack_11.x = fVar3;
  VStack_11.z = fVar5;
  pLVar7 = MVElipsoidOverlapCheck_ElipsoidOverlapCheck_1
                     (&VStack_11,(Vector3 *)aQStack_2,&QStack_8,ignoreWoIds,layerMask,
                      (MethodInfo *)0x0);
  return pLVar7;
}


/* Boolean ElipsoidOverlapCheckBool(Vector3, Vector3, Quaternion, Int32, HashSet`1[System.Int32]) */

bool Assembly-CSharp.dll::MVElipsoidOverlapCheck::MVElipsoidOverlapCheck_ElipsoidOverlapCheckBool
               (Vector3 *radius,Vector3 *position,Quaternion *rotation,int32_t layerMask,
               HashSet_1_System_Int32_ *ignoreWoIds,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<MVOverlapResult>__get_Count__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<MVOverlapResult>__get_Item_int_);
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__MVElipsoidOverlapCheck->_1).field_0x1c == 0) {
    FUN_?();
  }
  QStack_1.x = rotation->x;
  QStack_1.y = rotation->y;
  QStack_1.z = rotation->z;
  QStack_1.w = rotation->w;
  VStack_2.x = position->x;
  VStack_2.y = position->y;
  TypeInfo__MVElipsoidOverlapCheck->static_fields->checkType = 0;
  VStack_2.z = position->z;
  VStack_3.x = radius->x;
  VStack_3.y = radius->y;
  VStack_3.z = radius->z;
  pLVar4 = MVElipsoidOverlapCheck_ElipsoidOverlapCheck_1
                     (&VStack_3,&VStack_2,&QStack_1,ignoreWoIds,layerMask,(MethodInfo *)0x0);
  if (pLVar4 != (List_1_MVOverlapResult_ *)0x0) {
    iVar5 = (pLVar4->fields)._size;
    if (iVar5 < 1) {
      return 0;
    }
    if (iVar5 == 0) {
code_?:
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                ((MethodInfo *)0x0);
      pcVar6 = (code *)swi(3);
      bVar7 = (*pcVar6)();
      return bVar7;
    }
    pMVar8 = (pLVar4->fields)._items;
    if (pMVar8 != (MVOverlapResult__Array *)0x0) {
      if ((int)pMVar8->max_length == 0) {
code_?:
        FUN_?();
        pcVar6 = (code *)swi(3);
        bVar7 = (*pcVar6)();
        return bVar7;
      }
      if (pMVar8->vector[0].localCubePos == (IntVector__Array *)0x0) {
        return 0;
      }
      if ((pLVar4->fields)._size == 0) goto code_?;
      pMVar8 = (pLVar4->fields)._items;
      if (pMVar8 != (MVOverlapResult__Array *)0x0) {
        if ((int)pMVar8->max_length == 0) goto code_?;
        pIVar9 = pMVar8->vector[0].localCubePos;
        if (pIVar9 != (IntVector__Array *)0x0) {
          return pIVar9->max_length != 0;
        }
      }
    }
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  bVar7 = (*pcVar6)();
  return bVar7;
}


/* Boolean ElipsoidOverlapCheckBool(Vector3, Transform, Bounds, Int32, HashSet`1[System.Int32]) */

bool Assembly-CSharp.dll::MVElipsoidOverlapCheck::MVElipsoidOverlapCheck_ElipsoidOverlapCheckBool_1
               (Vector3 *position,Transform *transform,Bounds *localBounds,int32_t layerMask,
               HashSet_1_System_Int32_ *ignoreWoIds,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<MVOverlapResult>__get_Count__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<MVOverlapResult>__get_Item_int_);
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__MVElipsoidOverlapCheck->_1).field_0x1c == 0) {
    FUN_?();
  }
  BStack_1.m_Center.x = (localBounds->m_Center).x;
  BStack_1.m_Center.y = (localBounds->m_Center).y;
  BStack_1._8_8_ = *(undefined8 *)&(localBounds->m_Center).z;
  BStack_1.m_Extents.y = (localBounds->m_Extents).y;
  BStack_1.m_Extents.z = (localBounds->m_Extents).z;
  TypeInfo__MVElipsoidOverlapCheck->static_fields->checkType = 0;
  VStack_2.z = position->z;
  VStack_2.x = position->x;
  VStack_2.y = position->y;
  pLVar3 = MVElipsoidOverlapCheck_ElipsoidOverlapCheck
                     (&VStack_2,transform,&BStack_1,ignoreWoIds,layerMask,(MethodInfo *)0x0);
  if (pLVar3 != (List_1_MVOverlapResult_ *)0x0) {
    iVar4 = (pLVar3->fields)._size;
    if (iVar4 < 1) {
      return 0;
    }
    if (iVar4 == 0) {
code_?:
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                ((MethodInfo *)0x0);
      pcVar5 = (code *)swi(3);
      bVar6 = (*pcVar5)();
      return bVar6;
    }
    pMVar7 = (pLVar3->fields)._items;
    if (pMVar7 != (MVOverlapResult__Array *)0x0) {
      if ((int)pMVar7->max_length == 0) {
code_?:
        FUN_?();
        pcVar5 = (code *)swi(3);
        bVar6 = (*pcVar5)();
        return bVar6;
      }
      if (pMVar7->vector[0].localCubePos == (IntVector__Array *)0x0) {
        return 0;
      }
      if ((pLVar3->fields)._size == 0) goto code_?;
      pMVar7 = (pLVar3->fields)._items;
      if (pMVar7 != (MVOverlapResult__Array *)0x0) {
        if ((int)pMVar7->max_length == 0) goto code_?;
        pIVar8 = pMVar7->vector[0].localCubePos;
        if (pIVar8 != (IntVector__Array *)0x0) {
          return pIVar8->max_length != 0;
        }
      }
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  bVar6 = (*pcVar5)();
  return bVar6;
}


/* Boolean ElipsoidOverlapCheckOnWo(Vector3, Vector3, Quaternion, BoxCollider, MVWorldObjectClient,
   MVOverlapResult ByRef) */

bool Assembly-CSharp.dll::MVElipsoidOverlapCheck::MVElipsoidOverlapCheck_ElipsoidOverlapCheckOnWo
               (Vector3 *radius,Vector3 *position,Quaternion *rotation,BoxCollider *chunk,
               MVWorldObjectClient *wo,MVOverlapResult *elipsoidOverlapResult,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__ICubeModelCollider);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVElipsoidOverlapCheck);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  *(undefined8 *)elipsoidOverlapResult = 0;
  elipsoidOverlapResult->localCubePos = (IntVector__Array *)0x0;
  lVar1 = FUN_?(wo);
  pIVar2 = TypeInfo__ICubeModelCollider;
  if (lVar1 == 0) {
    return 0;
  }
  if (wo == (MVWorldObjectClient *)0x0) {
    cmb = (ICubeModelCollider *)0x0;
  }
  else {
    cmb = (ICubeModelCollider *)FUN_?(wo);
    if (cmb == (ICubeModelCollider *)0x0) {
      FUN_?(wo,pIVar2);
      pcVar3 = (code *)swi(3);
      bVar4 = (*pcVar3)();
      return bVar4;
    }
  }
  if ((chunk != (BoxCollider *)0x0) &&
     (pTVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                          ((Component *)chunk,(MethodInfo *)0x0), pTVar5 != (Transform *)0x0)) {
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    MStack_6.m00 = 0.0;
    MStack_6.m10 = 0.0;
    MStack_6.m20 = 0.0;
    MStack_6.m30 = 0.0;
    MStack_6.m01 = 0.0;
    MStack_6.m11 = 0.0;
    MStack_6.m21 = 0.0;
    MStack_6.m31 = 0.0;
    MStack_6.m02 = 0.0;
    MStack_6.m12 = 0.0;
    MStack_6.m22 = 0.0;
    MStack_6.m32 = 0.0;
    MStack_6.m03 = 0.0;
    MStack_6.m13 = 0.0;
    MStack_6.m23 = 0.0;
    MStack_6.m33 = 0.0;
    pvVar7 = (pTVar5->fields)._._.m_CachedPtr;
    if (pvVar7 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar5,(MethodInfo *)0x0);
      pcVar3 = (code *)swi(3);
      bVar4 = (*pcVar3)();
      return bVar4;
    }
    pcVar3 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
      uVar8 = func_?(&UNK_?);
      FUN_?(uVar8,0);
      pcVar3 = (code *)swi(3);
      bVar4 = (*pcVar3)();
      return bVar4;
    }
    pcRam_? = pcVar3;
    (*pcRam_?)(pvVar7);
    if (*(int *)&(TypeInfo__MVElipsoidOverlapCheck->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__MVElipsoidOverlapCheck);
    }
    pMVar9 = TypeInfo__MVElipsoidOverlapCheck->static_fields;
    (pMVar9->localToWorld).m00 = MStack_6.m00;
    (pMVar9->localToWorld).m10 = MStack_6.m10;
    (pMVar9->localToWorld).m20 = MStack_6.m20;
    (pMVar9->localToWorld).m30 = MStack_6.m30;
    (pMVar9->localToWorld).m01 = MStack_6.m01;
    (pMVar9->localToWorld).m11 = MStack_6.m11;
    (pMVar9->localToWorld).m21 = MStack_6.m21;
    (pMVar9->localToWorld).m31 = MStack_6.m31;
    (pMVar9->localToWorld).m02 = MStack_6.m02;
    (pMVar9->localToWorld).m12 = MStack_6.m12;
    (pMVar9->localToWorld).m22 = MStack_6.m22;
    (pMVar9->localToWorld).m32 = MStack_6.m32;
    (pMVar9->localToWorld).m03 = MStack_6.m03;
    (pMVar9->localToWorld).m13 = MStack_6.m13;
    (pMVar9->localToWorld).m23 = MStack_6.m23;
    (pMVar9->localToWorld).m33 = MStack_6.m33;
    pTVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        ((Component *)chunk,(MethodInfo *)0x0);
    if (pTVar5 != (Transform *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      MStack_6.m00 = 0.0;
      MStack_6.m10 = 0.0;
      MStack_6.m20 = 0.0;
      MStack_6.m30 = 0.0;
      MStack_6.m01 = 0.0;
      MStack_6.m11 = 0.0;
      MStack_6.m21 = 0.0;
      MStack_6.m31 = 0.0;
      MStack_6.m02 = 0.0;
      MStack_6.m12 = 0.0;
      MStack_6.m22 = 0.0;
      MStack_6.m32 = 0.0;
      MStack_6.m03 = 0.0;
      MStack_6.m13 = 0.0;
      MStack_6.m23 = 0.0;
      MStack_6.m33 = 0.0;
      pvVar7 = (pTVar5->fields)._._.m_CachedPtr;
      if (pvVar7 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar5,(MethodInfo *)0x0);
        pcVar3 = (code *)swi(3);
        bVar4 = (*pcVar3)();
        return bVar4;
      }
      pcVar3 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
        uVar8 = func_?(&UNK_?);
        FUN_?(uVar8,0);
        pcVar3 = (code *)swi(3);
        bVar4 = (*pcVar3)();
        return bVar4;
      }
      pcRam_? = pcVar3;
      (*pcRam_?)(pvVar7,&MStack_6);
      pMVar9 = TypeInfo__MVElipsoidOverlapCheck->static_fields;
      fStack_10 = radius->z;
      fStack_11 = position->z;
      (pMVar9->worldToLocal).m00 = MStack_6.m00;
      (pMVar9->worldToLocal).m10 = MStack_6.m10;
      (pMVar9->worldToLocal).m20 = MStack_6.m20;
      (pMVar9->worldToLocal).m30 = MStack_6.m30;
      (pMVar9->worldToLocal).m01 = MStack_6.m01;
      (pMVar9->worldToLocal).m11 = MStack_6.m11;
      (pMVar9->worldToLocal).m21 = MStack_6.m21;
      (pMVar9->worldToLocal).m31 = MStack_6.m31;
      (pMVar9->worldToLocal).m02 = MStack_6.m02;
      (pMVar9->worldToLocal).m12 = MStack_6.m12;
      (pMVar9->worldToLocal).m22 = MStack_6.m22;
      (pMVar9->worldToLocal).m32 = MStack_6.m32;
      uStack_12._0_4_ = radius->x;
      uStack_12._4_4_ = radius->y;
      uStack_13._0_4_ = rotation->x;
      uStack_13._4_4_ = rotation->y;
      uStack_14._0_4_ = rotation->z;
      uStack_14._4_4_ = rotation->w;
      (pMVar9->worldToLocal).m03 = MStack_6.m03;
      (pMVar9->worldToLocal).m13 = MStack_6.m13;
      (pMVar9->worldToLocal).m23 = MStack_6.m23;
      (pMVar9->worldToLocal).m33 = MStack_6.m33;
      uStack_15._0_4_ = position->x;
      uStack_15._4_4_ = position->y;
      MStack_16.m00 = 0.0;
      MStack_16.m10 = 0.0;
      MStack_16.m20 = 0.0;
      MStack_16.m30 = 0.0;
      MStack_16.m01 = 0.0;
      MStack_16.m11 = 0.0;
      MStack_16.m21 = 0.0;
      MStack_16.m31 = 0.0;
      MStack_16.m02 = 0.0;
      MStack_16.m12 = 0.0;
      MStack_16.m22 = 0.0;
      MStack_16.m32 = 0.0;
      MStack_16.m03 = 0.0;
      MStack_16.m13 = 0.0;
      MStack_16.m23 = 0.0;
      MStack_16.m33 = 0.0;
      pcVar3 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
        uVar8 = func_?(&UNK_?);
        FUN_?(uVar8,0);
        pcVar3 = (code *)swi(3);
        bVar4 = (*pcVar3)();
        return bVar4;
      }
      pcRam_? = pcVar3;
      (*pcRam_?)(&uStack_15,&uStack_13);
      pMVar9 = TypeInfo__MVElipsoidOverlapCheck->static_fields;
      (pMVar9->elipsoidSpaceToWorld).m00 = MStack_16.m00;
      (pMVar9->elipsoidSpaceToWorld).m10 = MStack_16.m10;
      (pMVar9->elipsoidSpaceToWorld).m20 = MStack_16.m20;
      (pMVar9->elipsoidSpaceToWorld).m30 = MStack_16.m30;
      (pMVar9->elipsoidSpaceToWorld).m01 = MStack_16.m01;
      (pMVar9->elipsoidSpaceToWorld).m11 = MStack_16.m11;
      (pMVar9->elipsoidSpaceToWorld).m21 = MStack_16.m21;
      (pMVar9->elipsoidSpaceToWorld).m31 = MStack_16.m31;
      (pMVar9->elipsoidSpaceToWorld).m02 = MStack_16.m02;
      (pMVar9->elipsoidSpaceToWorld).m12 = MStack_16.m12;
      (pMVar9->elipsoidSpaceToWorld).m22 = MStack_16.m22;
      (pMVar9->elipsoidSpaceToWorld).m32 = MStack_16.m32;
      (pMVar9->elipsoidSpaceToWorld).m03 = MStack_16.m03;
      (pMVar9->elipsoidSpaceToWorld).m13 = MStack_16.m13;
      (pMVar9->elipsoidSpaceToWorld).m23 = MStack_16.m23;
      (pMVar9->elipsoidSpaceToWorld).m33 = MStack_16.m33;
      pMVar17 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_get_inverse
                          (&MStack_16,
                           &TypeInfo__MVElipsoidOverlapCheck->static_fields->elipsoidSpaceToWorld,
                           (MethodInfo *)0x0);
      fVar18 = pMVar17->m10;
      fVar19 = pMVar17->m20;
      fVar20 = pMVar17->m30;
      fVar21 = pMVar17->m01;
      fVar22 = pMVar17->m11;
      fVar23 = pMVar17->m21;
      fVar24 = pMVar17->m31;
      fVar25 = pMVar17->m02;
      fVar26 = pMVar17->m12;
      fVar27 = pMVar17->m22;
      fVar28 = pMVar17->m32;
      fVar29 = pMVar17->m03;
      fVar30 = pMVar17->m13;
      fVar31 = pMVar17->m23;
      fVar32 = pMVar17->m33;
      pMVar9 = TypeInfo__MVElipsoidOverlapCheck->static_fields;
      (pMVar9->worldToElipsoidSpace).m00 = pMVar17->m00;
      (pMVar9->worldToElipsoidSpace).m10 = fVar18;
      (pMVar9->worldToElipsoidSpace).m20 = fVar19;
      (pMVar9->worldToElipsoidSpace).m30 = fVar20;
      (pMVar9->worldToElipsoidSpace).m01 = fVar21;
      (pMVar9->worldToElipsoidSpace).m11 = fVar22;
      (pMVar9->worldToElipsoidSpace).m21 = fVar23;
      (pMVar9->worldToElipsoidSpace).m31 = fVar24;
      (pMVar9->worldToElipsoidSpace).m02 = fVar25;
      (pMVar9->worldToElipsoidSpace).m12 = fVar26;
      (pMVar9->worldToElipsoidSpace).m22 = fVar27;
      (pMVar9->worldToElipsoidSpace).m32 = fVar28;
      (pMVar9->worldToElipsoidSpace).m03 = fVar29;
      (pMVar9->worldToElipsoidSpace).m13 = fVar30;
      (pMVar9->worldToElipsoidSpace).m23 = fVar31;
      (pMVar9->worldToElipsoidSpace).m33 = fVar32;
      pMVar9 = TypeInfo__MVElipsoidOverlapCheck->static_fields;
      MStack_16.m00 = (pMVar9->localToWorld).m00;
      MStack_16.m10 = (pMVar9->localToWorld).m10;
      MStack_16.m20 = (pMVar9->localToWorld).m20;
      MStack_16.m30 = (pMVar9->localToWorld).m30;
      MStack_16.m01 = (pMVar9->localToWorld).m01;
      MStack_16.m11 = (pMVar9->localToWorld).m11;
      MStack_16.m21 = (pMVar9->localToWorld).m21;
      MStack_16.m31 = (pMVar9->localToWorld).m31;
      MStack_16.m02 = (pMVar9->localToWorld).m02;
      MStack_16.m12 = (pMVar9->localToWorld).m12;
      MStack_16.m22 = (pMVar9->localToWorld).m22;
      MStack_16.m32 = (pMVar9->localToWorld).m32;
      MStack_16.m03 = (pMVar9->localToWorld).m03;
      MStack_16.m13 = (pMVar9->localToWorld).m13;
      MStack_16.m23 = (pMVar9->localToWorld).m23;
      MStack_16.m33 = (pMVar9->localToWorld).m33;
      MStack_6.m00 = (pMVar9->worldToElipsoidSpace).m00;
      MStack_6.m10 = (pMVar9->worldToElipsoidSpace).m10;
      MStack_6.m20 = (pMVar9->worldToElipsoidSpace).m20;
      MStack_6.m30 = (pMVar9->worldToElipsoidSpace).m30;
      MStack_6.m01 = (pMVar9->worldToElipsoidSpace).m01;
      MStack_6.m11 = (pMVar9->worldToElipsoidSpace).m11;
      MStack_6.m21 = (pMVar9->worldToElipsoidSpace).m21;
      MStack_6.m31 = (pMVar9->worldToElipsoidSpace).m31;
      MStack_6.m02 = (pMVar9->worldToElipsoidSpace).m02;
      MStack_6.m12 = (pMVar9->worldToElipsoidSpace).m12;
      MStack_6.m22 = (pMVar9->worldToElipsoidSpace).m22;
      MStack_6.m32 = (pMVar9->worldToElipsoidSpace).m32;
      MStack_6.m03 = (pMVar9->worldToElipsoidSpace).m03;
      MStack_6.m13 = (pMVar9->worldToElipsoidSpace).m13;
      MStack_6.m23 = (pMVar9->worldToElipsoidSpace).m23;
      MStack_6.m33 = (pMVar9->worldToElipsoidSpace).m33;
      pMVar17 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_op_Multiply
                          (aMStack_33,&MStack_6,&MStack_16,(MethodInfo *)0x0);
      fVar18 = position->z;
      fVar19 = pMVar17->m10;
      fVar20 = pMVar17->m20;
      fVar21 = pMVar17->m30;
      fVar22 = pMVar17->m01;
      fVar23 = pMVar17->m11;
      fVar24 = pMVar17->m21;
      fVar25 = pMVar17->m31;
      fVar26 = pMVar17->m02;
      fVar27 = pMVar17->m12;
      fVar28 = pMVar17->m22;
      fVar29 = pMVar17->m32;
      fVar30 = pMVar17->m03;
      fVar31 = pMVar17->m13;
      fVar32 = pMVar17->m23;
      fVar34 = pMVar17->m33;
      pMVar9 = TypeInfo__MVElipsoidOverlapCheck->static_fields;
      (pMVar9->localToElipsoidSpace).m00 = pMVar17->m00;
      (pMVar9->localToElipsoidSpace).m10 = fVar19;
      (pMVar9->localToElipsoidSpace).m20 = fVar20;
      (pMVar9->localToElipsoidSpace).m30 = fVar21;
      uStack_15._0_4_ = position->x;
      uStack_15._4_4_ = position->y;
      (pMVar9->localToElipsoidSpace).m01 = fVar22;
      (pMVar9->localToElipsoidSpace).m11 = fVar23;
      (pMVar9->localToElipsoidSpace).m21 = fVar24;
      (pMVar9->localToElipsoidSpace).m31 = fVar25;
      (pMVar9->localToElipsoidSpace).m02 = fVar26;
      (pMVar9->localToElipsoidSpace).m12 = fVar27;
      (pMVar9->localToElipsoidSpace).m22 = fVar28;
      (pMVar9->localToElipsoidSpace).m32 = fVar29;
      (pMVar9->localToElipsoidSpace).m03 = fVar30;
      (pMVar9->localToElipsoidSpace).m13 = fVar31;
      (pMVar9->localToElipsoidSpace).m23 = fVar32;
      fVar27 = _UNK_?;
      (pMVar9->localToElipsoidSpace).m33 = fVar34;
      pMVar9 = TypeInfo__MVElipsoidOverlapCheck->static_fields;
      fVar28 = _UNK_? /
               ((float)uStack_15._4_4_ * (pMVar9->worldToLocal).m31 +
                (float)(undefined4)uStack_15 * (pMVar9->worldToLocal).m30 +
                fVar18 * (pMVar9->worldToLocal).m32 + (pMVar9->worldToLocal).m33);
      fVar19 = (pMVar9->worldToLocal).m11;
      fVar20 = (pMVar9->worldToLocal).m21;
      fVar21 = (pMVar9->worldToLocal).m10;
      fVar22 = (pMVar9->worldToLocal).m20;
      fVar23 = (pMVar9->worldToLocal).m12;
      fVar24 = (pMVar9->worldToLocal).m22;
      fVar25 = (pMVar9->worldToLocal).m13;
      fVar26 = (pMVar9->worldToLocal).m23;
      (pMVar9->localElipsoidPosition).x =
           ((float)uStack_15._4_4_ * (pMVar9->worldToLocal).m01 +
            (float)(undefined4)uStack_15 * (pMVar9->worldToLocal).m00 +
            fVar18 * (pMVar9->worldToLocal).m02 + (pMVar9->worldToLocal).m03) * fVar28;
      (pMVar9->localElipsoidPosition).y =
           ((float)uStack_15._4_4_ * fVar19 + (float)(undefined4)uStack_15 * fVar21 +
            fVar18 * fVar23 + fVar25) * fVar28;
      (pMVar9->localElipsoidPosition).z =
           ((float)uStack_15._4_4_ * fVar20 + (float)(undefined4)uStack_15 * fVar22 +
            fVar18 * fVar24 + fVar26) * fVar28;
      if (wo != (MVWorldObjectClient *)0x0) {
        puVar35 = (undefined8 *)
                  (*(wo->klass->vtable).get_Scale.methodPtr)
                            (&uStack_13,wo,(wo->klass->vtable).get_Scale.method);
        fVar18 = (float)((ulonglong)*puVar35 >> 0x20) * _UNK_?;
        fVar19 = (float)*puVar35 * _UNK_?;
        fVar20 = *(float *)(puVar35 + 1) * _UNK_?;
        uVar36 = radius->x;
        uVar37 = radius->y;
        fStack_10 = position->z;
        fStack_11 = fVar20 + radius->z;
        BStack_38.m_Center.x = rotation->x;
        BStack_38.m_Center.y = rotation->y;
        BStack_38.m_Center.z = rotation->z;
        BStack_38.m_Extents.x = rotation->w;
        uStack_12._0_4_ = position->x;
        uStack_12._4_4_ = position->y;
        uStack_15 = CONCAT44(fVar18 + (float)uVar37,fVar19 + (float)uVar36);
        MStack_16.m00 = 0.0;
        MStack_16.m10 = 0.0;
        MStack_16.m20 = 0.0;
        MStack_16.m30 = 0.0;
        MStack_16.m01 = 0.0;
        MStack_16.m11 = 0.0;
        MStack_16.m21 = 0.0;
        MStack_16.m31 = 0.0;
        MStack_16.m02 = 0.0;
        MStack_16.m12 = 0.0;
        MStack_16.m22 = 0.0;
        MStack_16.m32 = 0.0;
        MStack_16.m03 = 0.0;
        MStack_16.m13 = 0.0;
        MStack_16.m23 = 0.0;
        MStack_16.m33 = 0.0;
        pcVar3 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
          uVar8 = func_?(&UNK_?);
          FUN_?(uVar8,0);
          pcVar3 = (code *)swi(3);
          bVar4 = (*pcVar3)();
          return bVar4;
        }
        pcRam_? = pcVar3;
        (*pcRam_?)(&uStack_12,&BStack_38);
        pMVar9 = TypeInfo__MVElipsoidOverlapCheck->static_fields;
        (pMVar9->radiusExtendedElipsoidSpaceToWorld).m00 = MStack_16.m00;
        (pMVar9->radiusExtendedElipsoidSpaceToWorld).m10 = MStack_16.m10;
        (pMVar9->radiusExtendedElipsoidSpaceToWorld).m20 = MStack_16.m20;
        (pMVar9->radiusExtendedElipsoidSpaceToWorld).m30 = MStack_16.m30;
        (pMVar9->radiusExtendedElipsoidSpaceToWorld).m01 = MStack_16.m01;
        (pMVar9->radiusExtendedElipsoidSpaceToWorld).m11 = MStack_16.m11;
        (pMVar9->radiusExtendedElipsoidSpaceToWorld).m21 = MStack_16.m21;
        (pMVar9->radiusExtendedElipsoidSpaceToWorld).m31 = MStack_16.m31;
        (pMVar9->radiusExtendedElipsoidSpaceToWorld).m02 = MStack_16.m02;
        (pMVar9->radiusExtendedElipsoidSpaceToWorld).m12 = MStack_16.m12;
        (pMVar9->radiusExtendedElipsoidSpaceToWorld).m22 = MStack_16.m22;
        (pMVar9->radiusExtendedElipsoidSpaceToWorld).m32 = MStack_16.m32;
        (pMVar9->radiusExtendedElipsoidSpaceToWorld).m03 = MStack_16.m03;
        (pMVar9->radiusExtendedElipsoidSpaceToWorld).m13 = MStack_16.m13;
        (pMVar9->radiusExtendedElipsoidSpaceToWorld).m23 = MStack_16.m23;
        (pMVar9->radiusExtendedElipsoidSpaceToWorld).m33 = MStack_16.m33;
        pMVar17 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_get_inverse
                            (aMStack_33,
                             &TypeInfo__MVElipsoidOverlapCheck->static_fields->
                              radiusExtendedElipsoidSpaceToWorld,(MethodInfo *)0x0);
        fVar21 = pMVar17->m10;
        fVar22 = pMVar17->m20;
        fVar23 = pMVar17->m30;
        fVar24 = pMVar17->m01;
        fVar25 = pMVar17->m11;
        fVar26 = pMVar17->m21;
        fVar28 = pMVar17->m31;
        fVar29 = pMVar17->m02;
        fVar30 = pMVar17->m12;
        fVar31 = pMVar17->m22;
        fVar32 = pMVar17->m32;
        fVar34 = pMVar17->m03;
        fVar39 = pMVar17->m13;
        fVar40 = pMVar17->m23;
        fVar41 = pMVar17->m33;
        pMVar9 = TypeInfo__MVElipsoidOverlapCheck->static_fields;
        (pMVar9->worldToRadiusExtendedElipsoidSpace).m00 = pMVar17->m00;
        (pMVar9->worldToRadiusExtendedElipsoidSpace).m10 = fVar21;
        (pMVar9->worldToRadiusExtendedElipsoidSpace).m20 = fVar22;
        (pMVar9->worldToRadiusExtendedElipsoidSpace).m30 = fVar23;
        (pMVar9->worldToRadiusExtendedElipsoidSpace).m01 = fVar24;
        (pMVar9->worldToRadiusExtendedElipsoidSpace).m11 = fVar25;
        (pMVar9->worldToRadiusExtendedElipsoidSpace).m21 = fVar26;
        (pMVar9->worldToRadiusExtendedElipsoidSpace).m31 = fVar28;
        (pMVar9->worldToRadiusExtendedElipsoidSpace).m02 = fVar29;
        (pMVar9->worldToRadiusExtendedElipsoidSpace).m12 = fVar30;
        (pMVar9->worldToRadiusExtendedElipsoidSpace).m22 = fVar31;
        (pMVar9->worldToRadiusExtendedElipsoidSpace).m32 = fVar32;
        (pMVar9->worldToRadiusExtendedElipsoidSpace).m03 = fVar34;
        (pMVar9->worldToRadiusExtendedElipsoidSpace).m13 = fVar39;
        (pMVar9->worldToRadiusExtendedElipsoidSpace).m23 = fVar40;
        (pMVar9->worldToRadiusExtendedElipsoidSpace).m33 = fVar41;
        pMVar9 = TypeInfo__MVElipsoidOverlapCheck->static_fields;
        MStack_16.m00 = (pMVar9->localToWorld).m00;
        MStack_16.m10 = (pMVar9->localToWorld).m10;
        MStack_16.m20 = (pMVar9->localToWorld).m20;
        MStack_16.m30 = (pMVar9->localToWorld).m30;
        MStack_16.m01 = (pMVar9->localToWorld).m01;
        MStack_16.m11 = (pMVar9->localToWorld).m11;
        MStack_16.m21 = (pMVar9->localToWorld).m21;
        MStack_16.m31 = (pMVar9->localToWorld).m31;
        MStack_16.m02 = (pMVar9->localToWorld).m02;
        MStack_16.m12 = (pMVar9->localToWorld).m12;
        MStack_16.m22 = (pMVar9->localToWorld).m22;
        MStack_16.m32 = (pMVar9->localToWorld).m32;
        MStack_16.m03 = (pMVar9->localToWorld).m03;
        MStack_16.m13 = (pMVar9->localToWorld).m13;
        MStack_16.m23 = (pMVar9->localToWorld).m23;
        MStack_16.m33 = (pMVar9->localToWorld).m33;
        MStack_6.m00 = (pMVar9->worldToRadiusExtendedElipsoidSpace).m00;
        MStack_6.m10 = (pMVar9->worldToRadiusExtendedElipsoidSpace).m10;
        MStack_6.m20 = (pMVar9->worldToRadiusExtendedElipsoidSpace).m20;
        MStack_6.m30 = (pMVar9->worldToRadiusExtendedElipsoidSpace).m30;
        MStack_6.m01 = (pMVar9->worldToRadiusExtendedElipsoidSpace).m01;
        MStack_6.m11 = (pMVar9->worldToRadiusExtendedElipsoidSpace).m11;
        MStack_6.m21 = (pMVar9->worldToRadiusExtendedElipsoidSpace).m21;
        MStack_6.m31 = (pMVar9->worldToRadiusExtendedElipsoidSpace).m31;
        MStack_6.m02 = (pMVar9->worldToRadiusExtendedElipsoidSpace).m02;
        MStack_6.m12 = (pMVar9->worldToRadiusExtendedElipsoidSpace).m12;
        MStack_6.m22 = (pMVar9->worldToRadiusExtendedElipsoidSpace).m22;
        MStack_6.m32 = (pMVar9->worldToRadiusExtendedElipsoidSpace).m32;
        MStack_6.m03 = (pMVar9->worldToRadiusExtendedElipsoidSpace).m03;
        MStack_6.m13 = (pMVar9->worldToRadiusExtendedElipsoidSpace).m13;
        MStack_6.m23 = (pMVar9->worldToRadiusExtendedElipsoidSpace).m23;
        MStack_6.m33 = (pMVar9->worldToRadiusExtendedElipsoidSpace).m33;
        pMVar17 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_op_Multiply
                            (aMStack_33,&MStack_6,&MStack_16,(MethodInfo *)0x0);
        fVar21 = pMVar17->m10;
        fVar22 = pMVar17->m20;
        fVar23 = pMVar17->m30;
        fVar24 = pMVar17->m01;
        fVar25 = pMVar17->m11;
        fVar26 = pMVar17->m21;
        fVar28 = pMVar17->m31;
        fVar34 = pMVar17->m03;
        fVar39 = pMVar17->m13;
        fVar40 = pMVar17->m23;
        fVar41 = pMVar17->m33;
        fVar29 = pMVar17->m02;
        fVar30 = pMVar17->m12;
        fVar31 = pMVar17->m22;
        fVar32 = pMVar17->m32;
        pMVar9 = TypeInfo__MVElipsoidOverlapCheck->static_fields;
        (pMVar9->localToRadiusExtendedElipsoidSpace).m00 = pMVar17->m00;
        (pMVar9->localToRadiusExtendedElipsoidSpace).m10 = fVar21;
        (pMVar9->localToRadiusExtendedElipsoidSpace).m20 = fVar22;
        (pMVar9->localToRadiusExtendedElipsoidSpace).m30 = fVar23;
        uVar42 = radius->x;
        uVar43 = radius->y;
        (pMVar9->localToRadiusExtendedElipsoidSpace).m01 = fVar24;
        (pMVar9->localToRadiusExtendedElipsoidSpace).m11 = fVar25;
        (pMVar9->localToRadiusExtendedElipsoidSpace).m21 = fVar26;
        (pMVar9->localToRadiusExtendedElipsoidSpace).m31 = fVar28;
        (pMVar9->localToRadiusExtendedElipsoidSpace).m02 = fVar29;
        (pMVar9->localToRadiusExtendedElipsoidSpace).m12 = fVar30;
        (pMVar9->localToRadiusExtendedElipsoidSpace).m22 = fVar31;
        (pMVar9->localToRadiusExtendedElipsoidSpace).m32 = fVar32;
        (pMVar9->localToRadiusExtendedElipsoidSpace).m03 = fVar34;
        (pMVar9->localToRadiusExtendedElipsoidSpace).m13 = fVar39;
        (pMVar9->localToRadiusExtendedElipsoidSpace).m23 = fVar40;
        (pMVar9->localToRadiusExtendedElipsoidSpace).m33 = fVar41;
        if ((((float)uVar42 - fVar19 <= 0.0) || ((float)uVar43 - fVar18 <= 0.0)) ||
           (radius->z - fVar20 <= 0.0)) {
          if (*(int *)&(TypeInfo__MVElipsoidOverlapCheck->_1).field_0x1c == 0) {
            FUN_?(TypeInfo__MVElipsoidOverlapCheck);
          }
          TypeInfo__MVElipsoidOverlapCheck->static_fields->reducedElipsoidSpaceExists = 0;
        }
        else {
          uVar44 = radius->x;
          fStack_11 = radius->z - fVar20;
          BStack_38.m_Center.x = rotation->x;
          BStack_38.m_Center.y = rotation->y;
          BStack_38.m_Center.z = rotation->z;
          BStack_38.m_Extents.x = rotation->w;
          fStack_10 = position->z;
          uStack_12._0_4_ = position->x;
          uStack_12._4_4_ = position->y;
          uStack_15 = CONCAT44(radius->y - fVar18,(float)uVar44 - fVar19);
          MStack_16.m00 = 0.0;
          MStack_16.m10 = 0.0;
          MStack_16.m20 = 0.0;
          MStack_16.m30 = 0.0;
          MStack_16.m01 = 0.0;
          MStack_16.m11 = 0.0;
          MStack_16.m21 = 0.0;
          MStack_16.m31 = 0.0;
          MStack_16.m02 = 0.0;
          MStack_16.m12 = 0.0;
          MStack_16.m22 = 0.0;
          MStack_16.m32 = 0.0;
          MStack_16.m03 = 0.0;
          MStack_16.m13 = 0.0;
          MStack_16.m23 = 0.0;
          MStack_16.m33 = 0.0;
          pcVar3 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
            uVar8 = func_?(&UNK_?);
            FUN_?(uVar8,0);
            pcVar3 = (code *)swi(3);
            bVar4 = (*pcVar3)();
            return bVar4;
          }
          pcRam_? = pcVar3;
          (*pcRam_?)(&uStack_12,&BStack_38);
          if (*(int *)&(TypeInfo__MVElipsoidOverlapCheck->_1).field_0x1c == 0) {
            FUN_?(TypeInfo__MVElipsoidOverlapCheck);
          }
          pMVar9 = TypeInfo__MVElipsoidOverlapCheck->static_fields;
          (pMVar9->radiusReducedElipsoidSpaceToWorld).m00 = MStack_16.m00;
          (pMVar9->radiusReducedElipsoidSpaceToWorld).m10 = MStack_16.m10;
          (pMVar9->radiusReducedElipsoidSpaceToWorld).m20 = MStack_16.m20;
          (pMVar9->radiusReducedElipsoidSpaceToWorld).m30 = MStack_16.m30;
          (pMVar9->radiusReducedElipsoidSpaceToWorld).m01 = MStack_16.m01;
          (pMVar9->radiusReducedElipsoidSpaceToWorld).m11 = MStack_16.m11;
          (pMVar9->radiusReducedElipsoidSpaceToWorld).m21 = MStack_16.m21;
          (pMVar9->radiusReducedElipsoidSpaceToWorld).m31 = MStack_16.m31;
          (pMVar9->radiusReducedElipsoidSpaceToWorld).m02 = MStack_16.m02;
          (pMVar9->radiusReducedElipsoidSpaceToWorld).m12 = MStack_16.m12;
          (pMVar9->radiusReducedElipsoidSpaceToWorld).m22 = MStack_16.m22;
          (pMVar9->radiusReducedElipsoidSpaceToWorld).m32 = MStack_16.m32;
          (pMVar9->radiusReducedElipsoidSpaceToWorld).m03 = MStack_16.m03;
          (pMVar9->radiusReducedElipsoidSpaceToWorld).m13 = MStack_16.m13;
          (pMVar9->radiusReducedElipsoidSpaceToWorld).m23 = MStack_16.m23;
          (pMVar9->radiusReducedElipsoidSpaceToWorld).m33 = MStack_16.m33;
          pMVar17 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_get_inverse
                              (aMStack_33,
                               &TypeInfo__MVElipsoidOverlapCheck->static_fields->
                                radiusReducedElipsoidSpaceToWorld,(MethodInfo *)0x0);
          fVar18 = pMVar17->m10;
          fVar19 = pMVar17->m20;
          fVar20 = pMVar17->m30;
          fVar21 = pMVar17->m01;
          fVar22 = pMVar17->m11;
          fVar23 = pMVar17->m21;
          fVar24 = pMVar17->m31;
          fVar25 = pMVar17->m02;
          fVar26 = pMVar17->m12;
          fVar28 = pMVar17->m22;
          fVar29 = pMVar17->m32;
          fVar30 = pMVar17->m03;
          fVar31 = pMVar17->m13;
          fVar32 = pMVar17->m23;
          fVar34 = pMVar17->m33;
          pMVar9 = TypeInfo__MVElipsoidOverlapCheck->static_fields;
          (pMVar9->worldToRadiusReducedElipsoidSpace).m00 = pMVar17->m00;
          (pMVar9->worldToRadiusReducedElipsoidSpace).m10 = fVar18;
          (pMVar9->worldToRadiusReducedElipsoidSpace).m20 = fVar19;
          (pMVar9->worldToRadiusReducedElipsoidSpace).m30 = fVar20;
          (pMVar9->worldToRadiusReducedElipsoidSpace).m01 = fVar21;
          (pMVar9->worldToRadiusReducedElipsoidSpace).m11 = fVar22;
          (pMVar9->worldToRadiusReducedElipsoidSpace).m21 = fVar23;
          (pMVar9->worldToRadiusReducedElipsoidSpace).m31 = fVar24;
          (pMVar9->worldToRadiusReducedElipsoidSpace).m02 = fVar25;
          (pMVar9->worldToRadiusReducedElipsoidSpace).m12 = fVar26;
          (pMVar9->worldToRadiusReducedElipsoidSpace).m22 = fVar28;
          (pMVar9->worldToRadiusReducedElipsoidSpace).m32 = fVar29;
          (pMVar9->worldToRadiusReducedElipsoidSpace).m03 = fVar30;
          (pMVar9->worldToRadiusReducedElipsoidSpace).m13 = fVar31;
          (pMVar9->worldToRadiusReducedElipsoidSpace).m23 = fVar32;
          (pMVar9->worldToRadiusReducedElipsoidSpace).m33 = fVar34;
          pMVar9 = TypeInfo__MVElipsoidOverlapCheck->static_fields;
          MStack_16.m00 = (pMVar9->localToWorld).m00;
          MStack_16.m10 = (pMVar9->localToWorld).m10;
          MStack_16.m20 = (pMVar9->localToWorld).m20;
          MStack_16.m30 = (pMVar9->localToWorld).m30;
          MStack_16.m01 = (pMVar9->localToWorld).m01;
          MStack_16.m11 = (pMVar9->localToWorld).m11;
          MStack_16.m21 = (pMVar9->localToWorld).m21;
          MStack_16.m31 = (pMVar9->localToWorld).m31;
          MStack_16.m02 = (pMVar9->localToWorld).m02;
          MStack_16.m12 = (pMVar9->localToWorld).m12;
          MStack_16.m22 = (pMVar9->localToWorld).m22;
          MStack_16.m32 = (pMVar9->localToWorld).m32;
          MStack_16.m03 = (pMVar9->localToWorld).m03;
          MStack_16.m13 = (pMVar9->localToWorld).m13;
          MStack_16.m23 = (pMVar9->localToWorld).m23;
          MStack_16.m33 = (pMVar9->localToWorld).m33;
          MStack_6.m00 = (pMVar9->worldToRadiusReducedElipsoidSpace).m00;
          MStack_6.m10 = (pMVar9->worldToRadiusReducedElipsoidSpace).m10;
          MStack_6.m20 = (pMVar9->worldToRadiusReducedElipsoidSpace).m20;
          MStack_6.m30 = (pMVar9->worldToRadiusReducedElipsoidSpace).m30;
          MStack_6.m01 = (pMVar9->worldToRadiusReducedElipsoidSpace).m01;
          MStack_6.m11 = (pMVar9->worldToRadiusReducedElipsoidSpace).m11;
          MStack_6.m21 = (pMVar9->worldToRadiusReducedElipsoidSpace).m21;
          MStack_6.m31 = (pMVar9->worldToRadiusReducedElipsoidSpace).m31;
          MStack_6.m02 = (pMVar9->worldToRadiusReducedElipsoidSpace).m02;
          MStack_6.m12 = (pMVar9->worldToRadiusReducedElipsoidSpace).m12;
          MStack_6.m22 = (pMVar9->worldToRadiusReducedElipsoidSpace).m22;
          MStack_6.m32 = (pMVar9->worldToRadiusReducedElipsoidSpace).m32;
          MStack_6.m03 = (pMVar9->worldToRadiusReducedElipsoidSpace).m03;
          MStack_6.m13 = (pMVar9->worldToRadiusReducedElipsoidSpace).m13;
          MStack_6.m23 = (pMVar9->worldToRadiusReducedElipsoidSpace).m23;
          MStack_6.m33 = (pMVar9->worldToRadiusReducedElipsoidSpace).m33;
          pMVar17 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_op_Multiply
                              (aMStack_33,&MStack_6,&MStack_16,(MethodInfo *)0x0);
          fVar18 = pMVar17->m10;
          fVar19 = pMVar17->m20;
          fVar20 = pMVar17->m30;
          fVar21 = pMVar17->m01;
          fVar22 = pMVar17->m11;
          fVar23 = pMVar17->m21;
          fVar24 = pMVar17->m31;
          fVar25 = pMVar17->m02;
          fVar26 = pMVar17->m12;
          fVar28 = pMVar17->m22;
          fVar29 = pMVar17->m32;
          fVar30 = pMVar17->m03;
          fVar31 = pMVar17->m13;
          fVar32 = pMVar17->m23;
          fVar34 = pMVar17->m33;
          pMVar9 = TypeInfo__MVElipsoidOverlapCheck->static_fields;
          (pMVar9->localToRadiusReducedElipsoidSpace).m00 = pMVar17->m00;
          (pMVar9->localToRadiusReducedElipsoidSpace).m10 = fVar18;
          (pMVar9->localToRadiusReducedElipsoidSpace).m20 = fVar19;
          (pMVar9->localToRadiusReducedElipsoidSpace).m30 = fVar20;
          (pMVar9->localToRadiusReducedElipsoidSpace).m01 = fVar21;
          (pMVar9->localToRadiusReducedElipsoidSpace).m11 = fVar22;
          (pMVar9->localToRadiusReducedElipsoidSpace).m21 = fVar23;
          (pMVar9->localToRadiusReducedElipsoidSpace).m31 = fVar24;
          (pMVar9->localToRadiusReducedElipsoidSpace).m02 = fVar25;
          (pMVar9->localToRadiusReducedElipsoidSpace).m12 = fVar26;
          (pMVar9->localToRadiusReducedElipsoidSpace).m22 = fVar28;
          (pMVar9->localToRadiusReducedElipsoidSpace).m32 = fVar29;
          (pMVar9->localToRadiusReducedElipsoidSpace).m03 = fVar30;
          (pMVar9->localToRadiusReducedElipsoidSpace).m13 = fVar31;
          (pMVar9->localToRadiusReducedElipsoidSpace).m23 = fVar32;
          (pMVar9->localToRadiusReducedElipsoidSpace).m33 = fVar34;
          TypeInfo__MVElipsoidOverlapCheck->static_fields->reducedElipsoidSpaceExists = 1;
        }
        if (*(int *)&(TypeInfo__MVElipsoidOverlapCheck->_1).field_0x1c == 0) {
          FUN_?();
        }
        vectors = MVElipsoidOverlapCheck_GetTangentNormalsLocalSpace((MethodInfo *)0x0);
        pBVar45 = MVElipsoidOverlapCheck_GetBoundsFromAxisAlignedVectors
                            (&BStack_38,vectors,(MethodInfo *)0x0);
        uStack_15._0_4_ = position->x;
        uStack_15._4_4_ = position->y;
        fVar18 = position->z;
        BStack_38.m_Extents.y = (pBVar45->m_Extents).y;
        BStack_38.m_Extents.z = (pBVar45->m_Extents).z;
        pMVar9 = TypeInfo__MVElipsoidOverlapCheck->static_fields;
        fVar27 = fVar27 / ((float)uStack_15._4_4_ * (pMVar9->worldToLocal).m31 +
                           (float)(undefined4)uStack_15 * (pMVar9->worldToLocal).m30 +
                           fVar18 * (pMVar9->worldToLocal).m32 + (pMVar9->worldToLocal).m33);
        BStack_38.m_Center.y =
             ((float)uStack_15._4_4_ * (pMVar9->worldToLocal).m11 +
              (float)(undefined4)uStack_15 * (pMVar9->worldToLocal).m10 +
              fVar18 * (pMVar9->worldToLocal).m12 + (pMVar9->worldToLocal).m13) * fVar27;
        BStack_38.m_Center.x =
             ((float)uStack_15._4_4_ * (pMVar9->worldToLocal).m01 +
              (float)(undefined4)uStack_15 * (pMVar9->worldToLocal).m00 +
              fVar18 * (pMVar9->worldToLocal).m02 + (pMVar9->worldToLocal).m03) * fVar27;
        BStack_38.m_Extents.x = (pBVar45->m_Extents).x;
        BStack_38.m_Center.z =
             ((float)uStack_15._4_4_ * (pMVar9->worldToLocal).m21 +
              (float)(undefined4)uStack_15 * (pMVar9->worldToLocal).m20 +
              fVar18 * (pMVar9->worldToLocal).m22 + (pMVar9->worldToLocal).m23) * fVar27;
        bVar4 = MVElipsoidOverlapCheck_ScanElipsoidBounds
                           (&BStack_38,chunk,cmb,elipsoidOverlapResult,(MethodInfo *)0x0);
        return bVar4;
      }
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  bVar4 = (*pcVar3)();
  return bVar4;
}


/* List`1[MVOverlapResult] ElipsoidOverlapCheckSector(Vector3, Vector3, Quaternion, Int32,
   HashSet`1[System.Int32]) */

List_1_MVOverlapResult_ *
Assembly-CSharp.dll::MVElipsoidOverlapCheck::MVElipsoidOverlapCheck_ElipsoidOverlapCheckSector
          (Vector3 *radius,Vector3 *position,Quaternion *rotation,int32_t layerMask,
          HashSet_1_System_Int32_ *ignoreWoIds,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVElipsoidOverlapCheck);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__MVElipsoidOverlapCheck->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__MVElipsoidOverlapCheck);
  }
  QStack_1.x = rotation->x;
  QStack_1.y = rotation->y;
  QStack_1.z = rotation->z;
  QStack_1.w = rotation->w;
  VStack_2.x = position->x;
  VStack_2.y = position->y;
  TypeInfo__MVElipsoidOverlapCheck->static_fields->checkType = 1;
  VStack_2.z = position->z;
  VStack_3.x = radius->x;
  VStack_3.y = radius->y;
  VStack_3.z = radius->z;
  pLVar4 = MVElipsoidOverlapCheck_ElipsoidOverlapCheck_1
                     (&VStack_3,&VStack_2,&QStack_1,ignoreWoIds,layerMask,(MethodInfo *)0x0);
  return pLVar4;
}


/* List`1[MVOverlapResult] ElipsoidOverlapCheckSector(Vector3, Transform, Bounds, Int32,
   HashSet`1[System.Int32]) */

List_1_MVOverlapResult_ *
Assembly-CSharp.dll::MVElipsoidOverlapCheck::MVElipsoidOverlapCheck_ElipsoidOverlapCheckSector_1
          (Vector3 *position,Transform *transform,Bounds *localBounds,int32_t layerMask,
          HashSet_1_System_Int32_ *ignoreWoIds,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVElipsoidOverlapCheck);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__MVElipsoidOverlapCheck->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__MVElipsoidOverlapCheck);
  }
  BStack_1.m_Center.x = (localBounds->m_Center).x;
  BStack_1.m_Center.y = (localBounds->m_Center).y;
  BStack_1._8_8_ = *(undefined8 *)&(localBounds->m_Center).z;
  BStack_1.m_Extents.y = (localBounds->m_Extents).y;
  BStack_1.m_Extents.z = (localBounds->m_Extents).z;
  VStack_2.x = position->x;
  VStack_2.y = position->y;
  TypeInfo__MVElipsoidOverlapCheck->static_fields->checkType = 1;
  VStack_2.z = position->z;
  pLVar3 = MVElipsoidOverlapCheck_ElipsoidOverlapCheck
                     (&VStack_2,transform,&BStack_1,ignoreWoIds,layerMask,(MethodInfo *)0x0);
  return pLVar3;
}


/* List`1[MVOverlapResult] ElipsoidOverlapCheck(Vector3, Vector3, Quaternion,
   HashSet`1[System.Int32], Int32) */

List_1_MVOverlapResult_ *
Assembly-CSharp.dll::MVElipsoidOverlapCheck::MVElipsoidOverlapCheck_ElipsoidOverlapCheck_1
          (Vector3 *radius,Vector3 *position,Quaternion *rotation,
          HashSet_1_System_Int32_ *ignoreWoIds,int32_t layerMask,MethodInfo *method)

{
  method_00 = (MethodInfo *)rotation;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__BoxCollider);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CollisionDetectionGlobalBuffers);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<MVOverlapResult>__Add_MVOverlapResult_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<MVOverlapResult>__List__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<MVOverlapResult>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVElipsoidOverlapCheck);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Physics);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__SharedCollisionFunctions);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  auStack_1 = (undefined1  [8])0x0;
  pIStack_2 = (IntVector__Array *)0x0;
  pLVar3 = (List_1_MVOverlapResult_ *)
           FUN_?(TypeInfo__System__Collections__Generic__List<MVOverlapResult>);
  FUN_?(pLVar3);
  index = 0;
  fVar4 = 0.0;
  do {
    if (index == 0) {
      fVar5 = radius->x;
    }
    else if (index == 1) {
      fVar5 = radius->y;
    }
    else {
      if (index != 2) {
        uVar6 = func_?(&TypeInfo__System__IndexOutOfRangeException);
        this = (IndexOutOfRangeException *)func_?(uVar6);
        message = (String *)func_?(&StringLiteral_Invalid_Vector3_index_);
        mscorlib.dll::System::IndexOutOfRangeException::IndexOutOfRangeException__ctor_1
                  (this,message,(MethodInfo *)0x0);
        uVar6 = func_?(&MethodInfo__UnityEngine__Vector3__get_Item_int_);
        FUN_?(this,uVar6);
        pcVar7 = (code *)swi(3);
        pLVar3 = (List_1_MVOverlapResult_ *)(*pcVar7)();
        return pLVar3;
      }
      fVar5 = radius->z;
    }
    if (fVar4 < fVar5) {
      fVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_Item
                         (radius,index,method_00);
    }
    index = index + 1;
  } while (index < 3);
  if (*(int *)&(TypeInfo__CollisionDetectionGlobalBuffers->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__CollisionDetectionGlobalBuffers);
  }
  pCVar8 = TypeInfo__CollisionDetectionGlobalBuffers->static_fields->colliderBuffer;
  if (*(int *)&(TypeInfo__UnityEngine__Physics->_1).field_0x1c == 0) {
    FUN_?();
  }
  VStack_9.x = position->x;
  VStack_9.y = position->y;
  VStack_9.z = position->z;
  iVar10 = UnityEngine.PhysicsModule.dll::UnityEngine::Physics::Physics_OverlapSphereNonAlloc_1
                    (&VStack_9,fVar4,pCVar8,layerMask,(MethodInfo *)0x0);
  uVar11 = 0;
  if (0 < iVar10) {
    lVar12 = 0;
    lVar13 = 0x20;
    do {
      if (*(int *)&(TypeInfo__CollisionDetectionGlobalBuffers->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__CollisionDetectionGlobalBuffers);
      }
      pCVar8 = TypeInfo__CollisionDetectionGlobalBuffers->static_fields->colliderBuffer;
      if (pCVar8 == (Collider__Array *)0x0) {
DAT_?:
        FUN_?();
        pcVar7 = (code *)swi(3);
        pLVar3 = (List_1_MVOverlapResult_ *)(*pcVar7)();
        return pLVar3;
      }
      if ((uint)pCVar8->max_length <= uVar11) {
        FUN_?();
        pcVar7 = (code *)swi(3);
        pLVar3 = (List_1_MVOverlapResult_ *)(*pcVar7)();
        return pLVar3;
      }
      obj = *(BoxCollider **)((longlong)pCVar8->vector + lVar13 + -0x20);
      if (obj == (BoxCollider *)0x0) goto DAT_?;
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
      pvVar14 = (obj->fields)._._._.m_CachedPtr;
      if (pvVar14 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
        pcVar7 = (code *)swi(3);
        pLVar3 = (List_1_MVOverlapResult_ *)(*pcVar7)();
        return pLVar3;
      }
      pcVar7 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0)) {
        uVar6 = func_?(&UNK_?);
        FUN_?(uVar6,0);
        pcVar7 = (code *)swi(3);
        pLVar3 = (List_1_MVOverlapResult_ *)(*pcVar7)();
        return pLVar3;
      }
      pcRam_? = pcVar7;
      pvVar14 = (void *)(*pcRam_?)(pvVar14);
      t = (Transform *)
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::Unmarshal::
          Unmarshal_UnmarshalUnityObject
                    (pvVar14,
                     UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__
                    );
      wo = MVWorldObjectClientManager::MVWorldObjectClientManager_GetMVObject(t,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__SharedCollisionFunctions->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&MethodInfo__System__Collections__Generic__HashSet<int>__Contains_int_);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if ((wo != (MVWorldObjectClient *)0x0) &&
         ((ignoreWoIds == (HashSet_1_System_Int32_ *)0x0 ||
          (bVar15 = System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32Enum]::
                   HashSet_1_System_Int32Enum__Contains
                             ((HashSet_1_System_Int32Enum_ *)ignoreWoIds,(wo->fields)._.id,
                              MethodInfo__System__Collections__Generic__HashSet<int>__Contains_int_)
          , bVar15 == 0)))) {
        if (*(int *)&(TypeInfo__MVElipsoidOverlapCheck->_1).field_0x1c == 0) {
          FUN_?();
        }
        auStack_16._0_4_ = rotation->x;
        auStack_16._4_4_ = rotation->y;
        auStack_16._8_8_ = *(undefined8 *)&rotation->z;
        VStack_17.x = radius->x;
        VStack_17.y = radius->y;
        VStack_9.x = position->x;
        VStack_9.y = position->y;
        VStack_9.z = position->z;
        VStack_17.z = radius->z;
        bVar18 = (TypeInfo__UnityEngine__BoxCollider->_1).naturalAligment;
        if (((((Object__Class *)obj->klass)->_1).naturalAligment < bVar18) ||
           ((((Object__Class *)obj->klass)->_1).typeHierarchy[(ulonglong)bVar18 - 1] !=
            (Il2CppClass *)TypeInfo__UnityEngine__BoxCollider)) {
          bVar19 = false;
        }
        else {
          bVar19 = true;
        }
        chunk = (BoxCollider *)0x0;
        if (bVar19) {
          chunk = obj;
        }
        bVar15 = MVElipsoidOverlapCheck_ElipsoidOverlapCheckOnWo
                          (&VStack_17,&VStack_9,(Quaternion *)auStack_16,chunk,wo,
                           (MVOverlapResult *)auStack_1,(MethodInfo *)0x0);
        if (bVar15 != 0) {
          fVar4 = (float)(wo->fields)._.id;
          auStack_1._0_4_ = fVar4;
          if (pLVar3 == (List_1_MVOverlapResult_ *)0x0) goto DAT_?;
          auStack_16._4_4_ = auStack_1._4_4_;
          auStack_16._0_4_ = fVar4;
          auStack_16._8_8_ = pIStack_2;
          FUN_?(pLVar3,auStack_16,
                        MethodInfo__System__Collections__Generic__List<MVOverlapResult>__Add_MVOverlapResult_
                       );
          if (*(int *)&(TypeInfo__MVElipsoidOverlapCheck->_1).field_0x1c == 0) {
            FUN_?(TypeInfo__MVElipsoidOverlapCheck);
          }
          if (TypeInfo__MVElipsoidOverlapCheck->static_fields->checkType == 0) {
            return pLVar3;
          }
        }
      }
      uVar11 = uVar11 + 1;
      lVar12 = lVar12 + 1;
      lVar13 = lVar13 + 8;
    } while (lVar12 < iVar10);
  }
  return pLVar3;
}


/* Bounds GetBoundsFromAxisAlignedVectors(Vector3[]) */

Bounds * Assembly-CSharp.dll::MVElipsoidOverlapCheck::
         MVElipsoidOverlapCheck_GetBoundsFromAxisAlignedVectors
                   (Bounds *__return_storage_ptr__,Vector3__Array *vectors,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVElipsoidOverlapCheck);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uVar1 = 0;
  if (vectors == (Vector3__Array *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    pBVar3 = (Bounds *)(*pcVar2)();
    return pBVar3;
  }
  pVVar4 = vectors->vector;
  for (; (int)uVar1 < (int)vectors->max_length; uVar1 = uVar1 + 1) {
    if (*(int *)&(TypeInfo__MVElipsoidOverlapCheck->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__MVElipsoidOverlapCheck);
    }
    if ((uint)vectors->max_length <= uVar1) goto DAT_?;
    pMVar5 = TypeInfo__MVElipsoidOverlapCheck->static_fields;
    VStack_6.x = pVVar4->x;
    VStack_6.y = pVVar4->y;
    fVar7 = pVVar4->z;
    fVar8 = (pMVar5->worldToLocal).m11;
    fVar9 = (pMVar5->worldToLocal).m21;
    fVar10 = (pMVar5->worldToLocal).m20;
    fVar11 = (pMVar5->worldToLocal).m10;
    fVar12 = (pMVar5->worldToLocal).m12;
    fVar13 = (pMVar5->worldToLocal).m22;
    pVVar4->x = VStack_6.y * (pMVar5->worldToLocal).m01 + VStack_6.x * (pMVar5->worldToLocal).m00
                + fVar7 * (pMVar5->worldToLocal).m02;
    pVVar4->y = VStack_6.y * fVar8 + VStack_6.x * fVar11 + fVar7 * fVar12;
    pVVar4->z = VStack_6.y * fVar9 + VStack_6.x * fVar10 + fVar7 * fVar13;
    pVVar4 = pVVar4 + 1;
  }
  if (*(int *)&(TypeInfo__MVElipsoidOverlapCheck->_1).field_0x1c == 0) {
    FUN_?();
  }
  uVar1 = _UNK_?;
  pVVar4 = vectors->vector;
  fStack_14 = 0.0;
  fStack_15 = 0.0;
  uVar16 = 0;
  uStack_17 = 0;
  uStack_18 = 0;
  fStack_19 = 0.0;
  while( true ) {
    if ((int)vectors->max_length <= (int)uVar16) {
      (__return_storage_ptr__->m_Center).x = (float)(undefined4)uStack_17;
      (__return_storage_ptr__->m_Center).y = (float)uStack_17._4_4_;
      *(ulonglong *)&(__return_storage_ptr__->m_Center).z = CONCAT44(fStack_19,uStack_18);
      (__return_storage_ptr__->m_Extents).y = fStack_14;
      (__return_storage_ptr__->m_Extents).z = fStack_15;
      return __return_storage_ptr__;
    }
    if ((uint)vectors->max_length <= uVar16) break;
    VStack_20.x = pVVar4->x;
    VStack_20.y = pVVar4->y;
    index = 0;
    VStack_20.z = pVVar4->z;
    fVar7 = fStack_19;
    fVar8 = fStack_14;
    fVar9 = fStack_15;
    do {
      VStack_6.y = fVar8;
      VStack_6.x = fVar7;
      VStack_6.z = fVar9;
      fVar10 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_Item
                         (&VStack_6,index,method);
      fVar11 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_Item
                         (&VStack_20,index,method);
      if (fVar10 < (float)((uint)fVar11 & uVar1)) {
        VStack_21.y = fVar8;
        VStack_21.x = fVar7;
        VStack_21.z = fVar9;
        fVar7 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_Item
                           (&VStack_20,index,method);
        UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_set_Item
                  (&VStack_21,index,(float)((uint)fVar7 & uVar1),in_R9);
        fVar7 = VStack_21.x;
        fVar8 = VStack_21.y;
        fVar9 = VStack_21.z;
      }
      index = index + 1;
    } while (index < 3);
    uVar16 = uVar16 + 1;
    pVVar4 = pVVar4 + 1;
    fStack_19 = fVar7;
    fStack_14 = fVar8;
    fStack_15 = fVar9;
  }
DAT_?:
  FUN_?();
  pcVar2 = (code *)swi(3);
  pBVar3 = (Bounds *)(*pcVar2)();
  return pBVar3;
}


/* Bounds GetBoundsFromVectors(Vector3[]) */

Bounds * Assembly-CSharp.dll::MVElipsoidOverlapCheck::MVElipsoidOverlapCheck_GetBoundsFromVectors
                   (Bounds *__return_storage_ptr__,Vector3__Array *vectors,MethodInfo *method)

{
  uVar1 = 0;
  (__return_storage_ptr__->m_Center).x = 0.0;
  (__return_storage_ptr__->m_Center).y = 0.0;
  *(undefined8 *)&(__return_storage_ptr__->m_Center).z = 0;
  (__return_storage_ptr__->m_Extents).y = 0.0;
  uVar2 = _UNK_?;
  (__return_storage_ptr__->m_Extents).z = 0.0;
  if (vectors == (Vector3__Array *)0x0) {
    FUN_?();
    pcVar3 = (code *)swi(3);
    pBVar4 = (Bounds *)(*pcVar3)();
    return pBVar4;
  }
  pVVar5 = vectors->vector;
  while( true ) {
    if ((int)vectors->max_length <= (int)uVar1) {
      return __return_storage_ptr__;
    }
    if ((uint)vectors->max_length <= uVar1) break;
    VStack_6.x = pVVar5->x;
    VStack_6.y = pVVar5->y;
    index = 0;
    VStack_6.z = pVVar5->z;
    do {
      aVStack_7[0].x = (__return_storage_ptr__->m_Extents).x;
      aVStack_7[0].y = (__return_storage_ptr__->m_Extents).y;
      aVStack_7[0].z = (__return_storage_ptr__->m_Extents).z;
      fVar8 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_Item
                        (aVStack_7,index,method);
      fVar9 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_Item
                        (&VStack_6,index,method);
      if (fVar8 < (float)((uint)fVar9 & uVar2)) {
        VStack_10.x = (__return_storage_ptr__->m_Extents).x;
        VStack_10.y = (__return_storage_ptr__->m_Extents).y;
        VStack_10.z = (__return_storage_ptr__->m_Extents).z;
        fVar8 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_Item
                          (&VStack_6,index,method);
        UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_set_Item
                  (&VStack_10,index,(float)((uint)fVar8 & uVar2),in_R9);
        (__return_storage_ptr__->m_Extents).x = VStack_10.x;
        (__return_storage_ptr__->m_Extents).y = VStack_10.y;
        (__return_storage_ptr__->m_Extents).z = VStack_10.z;
      }
      index = index + 1;
    } while (index < 3);
    uVar1 = uVar1 + 1;
    pVVar5 = pVVar5 + 1;
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  pBVar4 = (Bounds *)(*pcVar3)();
  return pBVar4;
}


/* Vector3 GetTangentNormal(Vector3, Vector3) */

Vector3 * Assembly-CSharp.dll::MVElipsoidOverlapCheck::MVElipsoidOverlapCheck_GetTangentNormal
                    (Vector3 *__return_storage_ptr__,Vector3 *tangent0,Vector3 *tangent1,
                    MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVElipsoidOverlapCheck);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__MVElipsoidOverlapCheck->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__MVElipsoidOverlapCheck);
  }
  pMVar1 = TypeInfo__MVElipsoidOverlapCheck->static_fields;
  uVar2 = tangent0->x;
  uVar3 = tangent0->y;
  fVar4 = tangent0->z;
  fVar5 = (float)uVar3 * (pMVar1->worldToElipsoidSpace).m01 +
           (float)uVar2 * (pMVar1->worldToElipsoidSpace).m00 +
           fVar4 * (pMVar1->worldToElipsoidSpace).m02;
  fVar6 = (float)uVar3 * (pMVar1->worldToElipsoidSpace).m21 +
           (float)uVar2 * (pMVar1->worldToElipsoidSpace).m20 +
           fVar4 * (pMVar1->worldToElipsoidSpace).m22;
  fVar7 = (float)uVar3 * (pMVar1->worldToElipsoidSpace).m11 +
           (float)uVar2 * (pMVar1->worldToElipsoidSpace).m10 +
           fVar4 * (pMVar1->worldToElipsoidSpace).m12;
  uStack_8 = CONCAT44(fVar7,fVar5);
  fStack_9 = fVar6;
  fVar4 = (float)FUN_?(&uStack_8);
  if (_UNK_? < fVar4) {
    fVar6 = fVar6 / fVar4;
    uStack_8 = CONCAT44(fVar7 / fVar4,fVar5 / fVar4);
  }
  else {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pVVar10 = TypeInfo__UnityEngine__Vector3->static_fields;
    uStack_8._0_4_ = (pVVar10->zeroVector).x;
    uStack_8._4_4_ = (pVVar10->zeroVector).y;
    fVar6 = (pVVar10->zeroVector).z;
  }
  uVar11 = tangent1->x;
  uVar12 = tangent1->y;
  fVar4 = tangent1->z;
  pMVar1 = TypeInfo__MVElipsoidOverlapCheck->static_fields;
  fVar7 = (float)uVar12 * (pMVar1->worldToElipsoidSpace).m01 +
           (float)uVar11 * (pMVar1->worldToElipsoidSpace).m00 +
           fVar4 * (pMVar1->worldToElipsoidSpace).m02;
  fVar5 = (float)uVar12 * (pMVar1->worldToElipsoidSpace).m21 +
           (float)uVar11 * (pMVar1->worldToElipsoidSpace).m20 +
           fVar4 * (pMVar1->worldToElipsoidSpace).m22;
  fVar13 = (float)uVar12 * (pMVar1->worldToElipsoidSpace).m11 +
           (float)uVar11 * (pMVar1->worldToElipsoidSpace).m10 +
           fVar4 * (pMVar1->worldToElipsoidSpace).m12;
  uStack_14 = CONCAT44(fVar13,fVar7);
  fStack_15 = fVar5;
  fVar4 = (float)FUN_?(&uStack_14);
  if (_UNK_? < fVar4) {
    fVar5 = fVar5 / fVar4;
    uStack_14 = CONCAT44(fVar13 / fVar4,fVar7 / fVar4);
  }
  else {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pVVar10 = TypeInfo__UnityEngine__Vector3->static_fields;
    uStack_14._0_4_ = (pVVar10->zeroVector).x;
    uStack_14._4_4_ = (pVVar10->zeroVector).y;
    fVar5 = (pVVar10->zeroVector).z;
  }
  fVar4 = uStack_14._4_4_ * (float)uStack_8 - (float)uStack_14 * uStack_8._4_4_;
  fVar7 = fVar5 * uStack_8._4_4_ - uStack_14._4_4_ * fVar6;
  fVar5 = (float)uStack_14 * fVar6 - fVar5 * (float)uStack_8;
  uStack_8 = CONCAT44(fVar5,fVar7);
  fStack_9 = fVar4;
  fVar6 = (float)FUN_?(&uStack_8);
  if (_UNK_? < fVar6) {
    fVar4 = fVar4 / fVar6;
    uStack_8 = CONCAT44(fVar5 / fVar6,fVar7 / fVar6);
  }
  else {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pVVar10 = TypeInfo__UnityEngine__Vector3->static_fields;
    uStack_8._0_4_ = (pVVar10->zeroVector).x;
    uStack_8._4_4_ = (pVVar10->zeroVector).y;
    fVar4 = (pVVar10->zeroVector).z;
  }
  pMVar1 = TypeInfo__MVElipsoidOverlapCheck->static_fields;
  fVar6 = (pMVar1->elipsoidSpaceToWorld).m11;
  fVar5 = (pMVar1->elipsoidSpaceToWorld).m21;
  fVar7 = (pMVar1->elipsoidSpaceToWorld).m20;
  fVar13 = (pMVar1->elipsoidSpaceToWorld).m10;
  fVar16 = (pMVar1->elipsoidSpaceToWorld).m12;
  fVar17 = (pMVar1->elipsoidSpaceToWorld).m22;
  __return_storage_ptr__->x =
       uStack_8._4_4_ * (pMVar1->elipsoidSpaceToWorld).m01 +
       (float)uStack_8 * (pMVar1->elipsoidSpaceToWorld).m00 +
       fVar4 * (pMVar1->elipsoidSpaceToWorld).m02;
  __return_storage_ptr__->y = uStack_8._4_4_ * fVar6 + (float)uStack_8 * fVar13 + fVar4 * fVar16;
  __return_storage_ptr__->z = uStack_8._4_4_ * fVar5 + (float)uStack_8 * fVar7 + fVar4 * fVar17;
  return __return_storage_ptr__;
}


/* Vector3[] GetTangentNormalsLocalSpace() */

Vector3__Array *
Assembly-CSharp.dll::MVElipsoidOverlapCheck::MVElipsoidOverlapCheck_GetTangentNormalsLocalSpace
          (MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVElipsoidOverlapCheck);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__MVElipsoidOverlapCheck->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar1 = TypeInfo__UnityEngine__Vector3->static_fields;
  VStack_2.x = (pVVar1->rightVector).x;
  VStack_2.y = (pVVar1->rightVector).y;
  fVar3 = (pVVar1->rightVector).z;
  pMVar4 = TypeInfo__MVElipsoidOverlapCheck->static_fields;
  fVar5 = VStack_2.y * (pMVar4->localToWorld).m01 + VStack_2.x * (pMVar4->localToWorld).m00 +
           fVar3 * (pMVar4->localToWorld).m02;
  fVar6 = VStack_2.y * (pMVar4->localToWorld).m11 + VStack_2.x * (pMVar4->localToWorld).m10 +
           fVar3 * (pMVar4->localToWorld).m12;
  fVar3 = VStack_2.y * (pMVar4->localToWorld).m21 + VStack_2.x * (pMVar4->localToWorld).m20 +
           fVar3 * (pMVar4->localToWorld).m22;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar1 = TypeInfo__UnityEngine__Vector3->static_fields;
  VStack_2.x = (pVVar1->upVector).x;
  VStack_2.y = (pVVar1->upVector).y;
  fVar7 = (pVVar1->upVector).z;
  pMVar4 = TypeInfo__MVElipsoidOverlapCheck->static_fields;
  fVar8 = VStack_2.y * (pMVar4->localToWorld).m01 + VStack_2.x * (pMVar4->localToWorld).m00 +
           fVar7 * (pMVar4->localToWorld).m02;
  fVar9 = VStack_2.y * (pMVar4->localToWorld).m11 + VStack_2.x * (pMVar4->localToWorld).m10 +
           fVar7 * (pMVar4->localToWorld).m12;
  fVar7 = VStack_2.y * (pMVar4->localToWorld).m21 + VStack_2.x * (pMVar4->localToWorld).m20 +
           fVar7 * (pMVar4->localToWorld).m22;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar1 = TypeInfo__UnityEngine__Vector3->static_fields;
  VStack_2.x = (pVVar1->forwardVector).x;
  VStack_2.y = (pVVar1->forwardVector).y;
  fVar10 = (pVVar1->forwardVector).z;
  pMVar4 = TypeInfo__MVElipsoidOverlapCheck->static_fields;
  fVar11 = VStack_2.y * (pMVar4->localToWorld).m01 + VStack_2.x * (pMVar4->localToWorld).m00 +
          fVar10 * (pMVar4->localToWorld).m02;
  fVar12 = VStack_2.y * (pMVar4->localToWorld).m11 + VStack_2.x * (pMVar4->localToWorld).m10 +
          fVar10 * (pMVar4->localToWorld).m12;
  fVar10 = VStack_2.y * (pMVar4->localToWorld).m21 + VStack_2.x * (pMVar4->localToWorld).m20 +
          fVar10 * (pMVar4->localToWorld).m22;
  pVVar13 = (Vector3__Array *)FUN_?(TypeInfo__UnityEngine__Vector3,3);
  VStack_14.y = fVar12;
  VStack_14.x = fVar11;
  VStack_2.y = fVar6;
  VStack_2.x = fVar5;
  VStack_14.z = fVar10;
  VStack_2.z = fVar3;
  pVVar15 = MVElipsoidOverlapCheck_GetTangentNormal
                     (aVStack_16,&VStack_2,&VStack_14,(MethodInfo *)0x0);
  if (pVVar13 != (Vector3__Array *)0x0) {
    if ((int)pVVar13->max_length != 0) {
      fVar17 = pVVar15->y;
      VStack_2.y = fVar12;
      VStack_2.x = fVar11;
      pVVar13->vector[0].x = pVVar15->x;
      pVVar13->vector[0].y = fVar17;
      VStack_14.y = fVar9;
      VStack_14.x = fVar8;
      pVVar13->vector[0].z = pVVar15->z;
      VStack_14.z = fVar7;
      VStack_2.z = fVar10;
      pVVar15 = MVElipsoidOverlapCheck_GetTangentNormal
                         (aVStack_16,&VStack_14,&VStack_2,(MethodInfo *)0x0);
      if (1 < (uint)pVVar13->max_length) {
        fVar10 = pVVar15->y;
        pVVar13->vector[1].x = pVVar15->x;
        pVVar13->vector[1].y = fVar10;
        pVVar13->vector[1].z = pVVar15->z;
        VStack_2.y = fVar6;
        VStack_2.x = fVar5;
        VStack_14.z = fVar7;
        VStack_2.z = fVar3;
        pVVar15 = MVElipsoidOverlapCheck_GetTangentNormal
                           (aVStack_16,&VStack_14,&VStack_2,(MethodInfo *)0x0);
        if (2 < (uint)pVVar13->max_length) {
          fVar3 = pVVar15->y;
          pVVar13->vector[2].x = pVVar15->x;
          pVVar13->vector[2].y = fVar3;
          pVVar13->vector[2].z = pVVar15->z;
          return pVVar13;
        }
      }
    }
    FUN_?();
    pcVar18 = (code *)swi(3);
    pVVar13 = (Vector3__Array *)(*pcVar18)();
    return pVVar13;
  }
  FUN_?();
  pcVar18 = (code *)swi(3);
  pVVar13 = (Vector3__Array *)(*pcVar18)();
  return pVVar13;
}


/* Boolean HandleCube(IntVector, ICubeModelCollider, MVOverlapResult ByRef) */

bool Assembly-CSharp.dll::MVElipsoidOverlapCheck::MVElipsoidOverlapCheck_HandleCube
               (IntVector *cubePos,ICubeModelCollider *cmb,MVOverlapResult *elipsoidOverlapResult,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MV__WorldObject__CubeBase);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ICubeModelCollider);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVElipsoidOverlapCheck);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cmb == (ICubeModelCollider *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    bVar2 = (*pcVar1)();
    return bVar2;
  }
  cube = (Cube *)FUN_?();
  fVar3 = (float)(int)cubePos->x;
  fVar4 = (float)(int)cubePos->z;
  fVar5 = (float)(int)cubePos->y;
  if (*(int *)&(TypeInfo__MV__WorldObject__CubeBase->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MV__WorldObject__CubeBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__MV__WorldObject__CubeBase->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cube != (Cube *)0x0) {
    if (*(int *)&(TypeInfo__MVElipsoidOverlapCheck->_1).field_0x1c == 0) {
      FUN_?();
    }
    fVar6 = _UNK_?;
    pMVar7 = TypeInfo__MVElipsoidOverlapCheck->static_fields;
    fVar8 = _UNK_? /
            (fVar5 * (pMVar7->localToRadiusExtendedElipsoidSpace).m31 +
             fVar3 * (pMVar7->localToRadiusExtendedElipsoidSpace).m30 +
             fVar4 * (pMVar7->localToRadiusExtendedElipsoidSpace).m32 +
            (pMVar7->localToRadiusExtendedElipsoidSpace).m33);
    fVar9 = (fVar5 * (pMVar7->localToRadiusExtendedElipsoidSpace).m01 +
             fVar3 * (pMVar7->localToRadiusExtendedElipsoidSpace).m00 +
             fVar4 * (pMVar7->localToRadiusExtendedElipsoidSpace).m02 +
            (pMVar7->localToRadiusExtendedElipsoidSpace).m03) * fVar8;
    fVar10 = (fVar5 * (pMVar7->localToRadiusExtendedElipsoidSpace).m11 +
             fVar3 * (pMVar7->localToRadiusExtendedElipsoidSpace).m10 +
             fVar4 * (pMVar7->localToRadiusExtendedElipsoidSpace).m12 +
            (pMVar7->localToRadiusExtendedElipsoidSpace).m13) * fVar8;
    fVar8 = (fVar5 * (pMVar7->localToRadiusExtendedElipsoidSpace).m21 +
             fVar3 * (pMVar7->localToRadiusExtendedElipsoidSpace).m20 +
             fVar4 * (pMVar7->localToRadiusExtendedElipsoidSpace).m22 +
            (pMVar7->localToRadiusExtendedElipsoidSpace).m23) * fVar8;
    if (fVar10 * fVar10 + fVar9 * fVar9 + fVar8 * fVar8 <= _UNK_?) {
      if (*(int *)&(TypeInfo__MVElipsoidOverlapCheck->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (TypeInfo__MVElipsoidOverlapCheck->static_fields->reducedElipsoidSpaceExists == 0) {
        if (*(int *)&(TypeInfo__MVElipsoidOverlapCheck->_1).field_0x1c == 0) {
          FUN_?();
        }
        aVStack_11[0].y = fVar5;
        aVStack_11[0].x = fVar3;
        aVStack_11[0].z = fVar4;
        bVar2 = MVElipsoidOverlapCheck_IsCenterPointWithinCube(cube,aVStack_11,(MethodInfo *)0x0);
        if (bVar2 != 0) {
          return 1;
        }
      }
      else {
        if (*(int *)&(TypeInfo__MVElipsoidOverlapCheck->_1).field_0x1c == 0) {
          FUN_?();
        }
        pMVar7 = TypeInfo__MVElipsoidOverlapCheck->static_fields;
        fVar8 = fVar6 / (fVar3 * (pMVar7->localToRadiusReducedElipsoidSpace).m30 +
                         fVar5 * (pMVar7->localToRadiusReducedElipsoidSpace).m31 +
                         fVar4 * (pMVar7->localToRadiusReducedElipsoidSpace).m32 +
                        (pMVar7->localToRadiusReducedElipsoidSpace).m33);
        fVar9 = (fVar5 * (pMVar7->localToRadiusReducedElipsoidSpace).m01 +
                 fVar3 * (pMVar7->localToRadiusReducedElipsoidSpace).m00 +
                 fVar4 * (pMVar7->localToRadiusReducedElipsoidSpace).m02 +
                (pMVar7->localToRadiusReducedElipsoidSpace).m03) * fVar8;
        fVar10 = (fVar3 * (pMVar7->localToRadiusReducedElipsoidSpace).m10 +
                 fVar5 * (pMVar7->localToRadiusReducedElipsoidSpace).m11 +
                 fVar4 * (pMVar7->localToRadiusReducedElipsoidSpace).m12 +
                (pMVar7->localToRadiusReducedElipsoidSpace).m13) * fVar8;
        fVar8 = (fVar3 * (pMVar7->localToRadiusReducedElipsoidSpace).m20 +
                 fVar5 * (pMVar7->localToRadiusReducedElipsoidSpace).m21 +
                 fVar4 * (pMVar7->localToRadiusReducedElipsoidSpace).m22 +
                (pMVar7->localToRadiusReducedElipsoidSpace).m23) * fVar8;
        if (fVar10 * fVar10 + fVar9 * fVar9 + fVar8 * fVar8 <= fVar6) {
          return 1;
        }
      }
      if (*(int *)&(TypeInfo__MVElipsoidOverlapCheck->_1).field_0x1c == 0) {
        FUN_?();
      }
      aVStack_11[0].y = fVar5;
      aVStack_11[0].x = fVar3;
      aVStack_11[0].z = fVar4;
      bVar2 = MVElipsoidOverlapCheck_DoDetailedCheck(cube,aVStack_11,(MethodInfo *)0x0);
      return bVar2;
    }
  }
  return 0;
}


/* Boolean HandleTriangleTest(Vector3, Vector3, Vector3, Vector3, Single) */

bool Assembly-CSharp.dll::MVElipsoidOverlapCheck::MVElipsoidOverlapCheck_HandleTriangleTest
               (Vector3 *A,Vector3 *B,Vector3 *C,Vector3 *P,float r,MethodInfo *method)

{
  uVar1 = A->x;
  uVar2 = A->y;
  uVar3 = B->x;
  uVar4 = B->y;
  fVar5 = A->z - B->z;
  if (((_UNK_? <=
        ((float)uVar2 - (float)uVar4) * ((float)uVar2 - (float)uVar4) +
        ((float)uVar1 - (float)uVar3) * ((float)uVar1 - (float)uVar3) + fVar5 * fVar5) &&
      (uVar6 = A->x, uVar7 = A->y, uVar8 = C->x, uVar9 = C->y, fVar5 = A->z - C->z,
      _UNK_? <=
      ((float)uVar7 - (float)uVar9) * ((float)uVar7 - (float)uVar9) +
      ((float)uVar6 - (float)uVar8) * ((float)uVar6 - (float)uVar8) + fVar5 * fVar5)) &&
     (uVar10 = B->x, uVar11 = B->y, uVar12 = C->x, uVar13 = C->y, fVar5 = B->z - C->z,
     _UNK_? <=
     ((float)uVar11 - (float)uVar13) * ((float)uVar11 - (float)uVar13) +
     ((float)uVar10 - (float)uVar12) * ((float)uVar10 - (float)uVar12) + fVar5 * fVar5)) {
    uVar14 = A->x;
    uVar15 = A->y;
    uVar16 = P->x;
    uVar17 = P->y;
    fVar18 = (float)uVar14 - (float)uVar16;
    fVar19 = A->z - P->z;
    fVar20 = (float)uVar15 - (float)uVar17;
    uStack_21 = CONCAT44(uVar15,fVar20);
    uVar22 = B->x;
    uVar23 = B->y;
    fStack_24 = B->z - P->z;
    fStack_25 = (float)uVar22 - (float)uVar16;
    fVar26 = (float)uVar23 - (float)uVar17;
    uStack_27 = CONCAT44(uVar23,fVar26);
    uVar28 = C->x;
    uVar29 = C->y;
    fVar30 = (float)uVar28 - (float)uVar16;
    fVar31 = (float)uVar29 - (float)uVar17;
    fVar32 = C->z - P->z;
    uStack_33 = CONCAT44(uVar29,fVar31);
    fVar34 = r * r;
    fVar35 = (fVar32 - fVar19) * (fVar26 - fVar20) - (fVar31 - fVar20) * (fStack_24 - fVar19);
    fVar36 = (fVar30 - fVar18) * (fStack_24 - fVar19) - (fVar32 - fVar19) * (fStack_25 - fVar18);
    fVar5 = (fVar31 - fVar20) * (fStack_25 - fVar18) - (fVar30 - fVar18) * (fVar26 - fVar20);
    uStack_37 = CONCAT44(fVar36,fVar35);
    fStack_38 = fVar5;
    fStack_39 = fVar18;
    fStack_40 = fVar19;
    fVar41 = (float)FUN_?(&uStack_37);
    if (_UNK_? < fVar41) {
      fVar5 = fVar5 / fVar41;
      uStack_37 = CONCAT44(fVar36 / fVar41,fVar35 / fVar41);
    }
    else {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Vector3);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pVVar42 = TypeInfo__UnityEngine__Vector3->static_fields;
      uStack_37._0_4_ = (pVVar42->zeroVector).x;
      uStack_37._4_4_ = (pVVar42->zeroVector).y;
      fVar5 = (pVVar42->zeroVector).z;
    }
    fVar43 = fVar20 * uStack_37._4_4_ + fVar18 * (float)uStack_37 + fVar19 * fVar5;
    fVar44 = fVar20 * fVar20 + fVar18 * fVar18 + fVar19 * fVar19;
    fVar45 = fVar26 * fVar20 + fStack_25 * fVar18 + fStack_24 * fVar19;
    fVar35 = fVar31 * fVar20 + fVar30 * fVar18 + fVar32 * fVar19;
    fVar36 = fVar26 * fVar26 + fStack_25 * fStack_25 + fStack_24 * fStack_24;
    fVar46 = fVar31 * fVar26 + fVar30 * fStack_25 + fVar32 * fStack_24;
    fVar47 = fVar26 - fVar20;
    fVar48 = fStack_24 - fVar19;
    fVar49 = fVar31 * fVar31 + fVar30 * fVar30 + fVar32 * fVar32;
    fVar50 = fStack_25 - fVar18;
    fVar51 = fVar30 - fStack_25;
    fVar26 = fVar31 - fVar26;
    fVar52 = fVar32 - fStack_24;
    fVar20 = fVar20 - fVar31;
    fVar18 = fVar18 - fVar30;
    fVar19 = fVar19 - fVar32;
    fVar53 = fVar47 * fVar47 + fVar50 * fVar50 + fVar48 * fVar48;
    fVar54 = fVar26 * fVar26 + fVar51 * fVar51 + fVar52 * fVar52;
    fVar55 = fVar20 * fVar20 + fVar18 * fVar18 + fVar19 * fVar19;
    fVar41 = fVar45 - fVar44;
    fVar56 = fStack_39 * fVar53 - fVar41 * fVar50;
    fVar31 = fStack_40 * fVar53 - fVar41 * fVar48;
    fVar57 = (float)uStack_21 * fVar53 - fVar41 * fVar47;
    fVar41 = fVar46 - fVar36;
    fVar47 = fStack_25 * fVar54 - fVar41 * fVar51;
    fVar50 = fStack_24 * fVar54 - fVar41 * fVar52;
    fVar26 = (float)uStack_27 * fVar54 - fVar41 * fVar26;
    fVar41 = fVar35 - fVar49;
    fVar48 = fVar30 * fVar55 - fVar41 * fVar18;
    fVar18 = fVar32 * fVar55 - fVar41 * fVar19;
    fVar41 = (float)uStack_33 * fVar55 - fVar41 * fVar20;
    return ((((uStack_37._4_4_ * uStack_37._4_4_ + (float)uStack_37 * (float)uStack_37 +
              fVar5 * fVar5) * fVar34 < fVar43 * fVar43 ||
             ((0.0 < ((float)uStack_33 * fVar53 - fVar57) * fVar57 +
                     (fVar30 * fVar53 - fVar56) * fVar56 + (fVar32 * fVar53 - fVar31) * fVar31 &&
               fVar53 * fVar34 * fVar53 < fVar57 * fVar57 + fVar56 * fVar56 + fVar31 * fVar31 ||
              0.0 < ((float)uStack_21 * fVar54 - fVar26) * fVar26 +
                    (fStack_39 * fVar54 - fVar47) * fVar47 + (fStack_40 * fVar54 - fVar50) * fVar50
              && fVar54 * fVar34 * fVar54 < fVar26 * fVar26 + fVar47 * fVar47 + fVar50 * fVar50) ||
             0.0 < ((float)uStack_27 * fVar55 - fVar41) * fVar41 +
                   (fStack_25 * fVar55 - fVar48) * fVar48 + (fStack_24 * fVar55 - fVar18) * fVar18
             && fVar55 * fVar34 * fVar55 < fVar41 * fVar41 + fVar48 * fVar48 + fVar18 * fVar18)) ||
            fVar34 < fVar49 && (fVar49 < fVar46 && fVar49 < fVar35)) ||
           fVar34 < fVar36 && (fVar36 < fVar46 && fVar36 < fVar45)) ||
           fVar34 < fVar44 && (fVar44 < fVar35 && fVar44 < fVar45);
  }
  return 1;
}


/* Boolean IsCenterPointWithinCube(Cube, Vector3) */

bool Assembly-CSharp.dll::MVElipsoidOverlapCheck::MVElipsoidOverlapCheck_IsCenterPointWithinCube
               (Cube *cube,Vector3 *localPos,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MV__WorldObject__CubeBase);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVElipsoidOverlapCheck);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uVar1 = 0;
  VStack_2.x = 0.0;
  VStack_2.y = 0.0;
  VStack_2.z = 0.0;
  FVar3 = Face__Enum_Top;
  if (*(int *)&(TypeInfo__MVElipsoidOverlapCheck->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (*(int *)&(TypeInfo__MV__WorldObject__CubeBase->_1).field_0x1c == 0) {
    FUN_?();
  }
  MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_GetCorners
            ((CubeBase *)cube,&TypeInfo__MVElipsoidOverlapCheck->static_fields->cachedCorners,
             (MethodInfo *)0x0);
  uVar4 = uVar1;
  uVar5 = uVar1;
  while( true ) {
    if (*(int *)&(TypeInfo__MVElipsoidOverlapCheck->_1).field_0x1c == 0) {
      FUN_?();
    }
    pVVar6 = TypeInfo__MVElipsoidOverlapCheck->static_fields->cachedCorners;
    if (pVVar6 == (Vector3__Array *)0x0) goto code_?;
    uVar7 = (uint)uVar5;
    if ((int)pVVar6->max_length <= (int)uVar7) {
      if (*(int *)&(TypeInfo__MV__WorldObject__CubeBase->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MV__WorldObject__CubeBase);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__MV__WorldObject__CubeBase->_1).field_0x1c == 0) {
        FUN_?();
      }
      fVar8 = _UNK_?;
      pFVar9 = TypeInfo__MV__WorldObject__CubeBase->static_fields->faceFlagsArray;
      if (pFVar9 == (FaceFlags__Enum__Array *)0x0) goto code_?;
      pFVar10 = pFVar9->vector;
      uVar4 = uVar1;
      goto code_?;
    }
    if (*(int *)&(TypeInfo__MVElipsoidOverlapCheck->_1).field_0x1c == 0) {
      FUN_?();
    }
    pVVar6 = TypeInfo__MVElipsoidOverlapCheck->static_fields->cachedCorners;
    if (pVVar6 == (Vector3__Array *)0x0) goto code_?;
    if ((uint)pVVar6->max_length <= uVar7) break;
    *(float *)((longlong)&pVVar6->vector[0].x + uVar4) =
         localPos->x + *(float *)((longlong)&pVVar6->vector[0].x + uVar4);
    pVVar6 = TypeInfo__MVElipsoidOverlapCheck->static_fields->cachedCorners;
    if (pVVar6 == (Vector3__Array *)0x0) goto code_?;
    if ((uint)pVVar6->max_length <= uVar7) break;
    *(float *)((longlong)&pVVar6->vector[0].y + uVar4) =
         *(float *)((longlong)&pVVar6->vector[0].y + uVar4) + localPos->y;
    pVVar6 = TypeInfo__MVElipsoidOverlapCheck->static_fields->cachedCorners;
    if (pVVar6 == (Vector3__Array *)0x0) goto code_?;
    if ((uint)pVVar6->max_length <= uVar7) break;
    uVar5 = (ulonglong)(uVar7 + 1);
    *(float *)((longlong)&pVVar6->vector[0].z + uVar4) =
         *(float *)((longlong)&pVVar6->vector[0].z + uVar4) + localPos->z;
    uVar4 = uVar4 + 0xc;
  }
code_?:
  FUN_?();
  pcVar11 = (code *)swi(3);
  bVar12 = (*pcVar11)();
  return bVar12;
code_?:
  uVar7 = (uint)uVar1;
  if ((int)pFVar9->max_length <= (int)uVar7) {
    return (byte)uVar4 & 1;
  }
  if ((uint)pFVar9->max_length <= uVar7) goto code_?;
  uVar13 = (undefined1)*pFVar10;
  if (*(int *)&(TypeInfo__MVElipsoidOverlapCheck->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (*(int *)&(TypeInfo__MV__WorldObject__CubeBase->_1).field_0x1c == 0) {
    FUN_?();
  }
  FVar14 = FVar3;
  if ((byte)uVar13 < (FaceFlags__Enum_Back|FaceFlags__Enum_Top)) {
    if (uVar13 != FaceFlags__Enum_Top) {
      if (uVar13 == FaceFlags__Enum_Bottom) {
        FVar14 = Face__Enum_Bottom;
      }
      else if (uVar13 != (FaceFlags__Enum_Bottom|FaceFlags__Enum_Top)) {
        if (uVar13 == FaceFlags__Enum_Front) {
          FVar14 = Face__Enum_Front;
        }
        else if (uVar13 == FaceFlags__Enum_Back) {
          FVar14 = Face__Enum_Back;
        }
      }
    }
  }
  else if (uVar13 == FaceFlags__Enum_Left) {
    FVar14 = Face__Enum_Left;
  }
  else if (uVar13 == FaceFlags__Enum_Right) {
    FVar14 = Face__Enum_Right;
  }
  MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_GetFace
            (&TypeInfo__MVElipsoidOverlapCheck->static_fields->cachedCorners,
             &TypeInfo__MVElipsoidOverlapCheck->static_fields->cachedFace,FVar14,(MethodInfo *)0x0);
  pMVar15 = TypeInfo__MVElipsoidOverlapCheck->static_fields;
  pVVar6 = pMVar15->cachedFace;
  fVar16 = (pMVar15->localElipsoidPosition).y;
  fVar17 = (pMVar15->localElipsoidPosition).x + fVar8;
  fVar18 = (pMVar15->localElipsoidPosition).z;
  if (pVVar6 == (Vector3__Array *)0x0) {
code_?:
    FUN_?();
    pcVar11 = (code *)swi(3);
    bVar12 = (*pcVar11)();
    return bVar12;
  }
  if (((int)pVVar6->max_length == 0) || ((uint)pVVar6->max_length < 4)) goto code_?;
  VStack_19.x = pVVar6->vector[2].x;
  VStack_19.y = pVVar6->vector[2].y;
  VStack_19.z = pVVar6->vector[2].z;
  VStack_20.x = pVVar6->vector[3].x;
  VStack_20.y = pVVar6->vector[3].y;
  VStack_21.x = pVVar6->vector[0].x;
  VStack_21.y = pVVar6->vector[0].y;
  VStack_20.z = pVVar6->vector[3].z;
  VStack_22.y = fVar16;
  VStack_22.x = fVar17;
  VStack_21.z = pVVar6->vector[0].z;
  VStack_23.x = (pMVar15->localElipsoidPosition).x;
  VStack_23.y = (pMVar15->localElipsoidPosition).y;
  VStack_23.z = (pMVar15->localElipsoidPosition).z;
  VStack_22.z = fVar18;
  bVar12 = MathFunctions::MathFunctions_LineFacet
                    (&VStack_23,&VStack_22,&VStack_21,&VStack_20,&VStack_19,&VStack_2,
                     (MethodInfo *)0x0);
  uVar24 = (uint)uVar4 + 1;
  if (bVar12 == 0) {
    uVar24 = (uint)uVar4;
  }
  if (*(int *)&(TypeInfo__MVElipsoidOverlapCheck->_1).field_0x1c == 0) {
    FUN_?();
  }
  pMVar15 = TypeInfo__MVElipsoidOverlapCheck->static_fields;
  pVVar6 = pMVar15->cachedFace;
  if (pVVar6 == (Vector3__Array *)0x0) goto code_?;
  if ((uint)pVVar6->max_length < 3) goto code_?;
  VStack_25.x = pVVar6->vector[0].x;
  VStack_25.y = pVVar6->vector[0].y;
  VStack_25.z = pVVar6->vector[0].z;
  VStack_26.x = pVVar6->vector[1].x;
  VStack_26.y = pVVar6->vector[1].y;
  VStack_27.x = pVVar6->vector[2].x;
  VStack_27.y = pVVar6->vector[2].y;
  VStack_26.z = pVVar6->vector[1].z;
  VStack_28.y = fVar16;
  VStack_28.x = fVar17;
  VStack_27.z = pVVar6->vector[2].z;
  aVStack_29[0].x = (pMVar15->localElipsoidPosition).x;
  aVStack_29[0].y = (pMVar15->localElipsoidPosition).y;
  aVStack_29[0].z = (pMVar15->localElipsoidPosition).z;
  uVar1 = (ulonglong)(uVar7 + 1);
  pFVar10 = (FaceFlags__Enum *)((longlong)pFVar10 + 1);
  VStack_28.z = fVar18;
  bVar12 = MathFunctions::MathFunctions_LineFacet
                    (aVStack_29,&VStack_28,&VStack_27,&VStack_26,&VStack_25,&VStack_2,
                     (MethodInfo *)0x0);
  uVar7 = uVar24 + 1;
  if (bVar12 == 0) {
    uVar7 = uVar24;
  }
  uVar4 = (ulonglong)uVar7;
  goto code_?;
}


/* Boolean ScanElipsoidBounds(Bounds, BoxCollider, ICubeModelCollider, MVOverlapResult ByRef) */

bool Assembly-CSharp.dll::MVElipsoidOverlapCheck::MVElipsoidOverlapCheck_ScanElipsoidBounds
               (Bounds *localElipsoidBounds,BoxCollider *chunk,ICubeModelCollider *cmb,
               MVOverlapResult *elipsoidOverlapResult,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MV__WorldObject__IntVector);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<MV::WorldObject::IntVector>__Add_MV__WorldObject__IntVector_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<MV::WorldObject::IntVector>__Clear__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<MV::WorldObject::IntVector>__ToArray__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVElipsoidOverlapCheck);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__SharedCollisionFunctions);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__MVElipsoidOverlapCheck->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__MVElipsoidOverlapCheck);
  }
  pLVar1 = TypeInfo__MVElipsoidOverlapCheck->static_fields->cachedIntVectors;
  if (pLVar1 != (List_1_MV_WorldObject_IntVector_ *)0x0) {
    piVar2 = &(pLVar1->fields)._version;
    *piVar2 = *piVar2 + 1;
    (pLVar1->fields)._size = 0;
    uStack_3._0_4_ = (localElipsoidBounds->m_Extents).x;
    uStack_3._4_4_ = (localElipsoidBounds->m_Extents).y;
    uVar4 = (localElipsoidBounds->m_Center).x;
    uVar5 = (localElipsoidBounds->m_Center).y;
    VStack_6.z = (localElipsoidBounds->m_Center).z - (localElipsoidBounds->m_Extents).z;
    VStack_6.y = (float)uVar5 - uStack_3._4_4_;
    VStack_6.x = (float)uVar4 - (float)uStack_3;
    pIVar7 = MVWorldObject.dll::MV::WorldObject::CubeMathFunctions::
              CubeMathFunctions_LocalPosToLocalIntVector
                        ((IntVector *)&uStack_3,&VStack_6,(MethodInfo *)0x0);
    aIStack_8[0].x = pIVar7->x;
    aIStack_8[0].y = pIVar7->y;
    aIStack_8[0].z = pIVar7->z;
    uVar9 = (localElipsoidBounds->m_Extents).x;
    uVar10 = (localElipsoidBounds->m_Extents).y;
    uStack_3._0_4_ = (localElipsoidBounds->m_Center).x;
    uStack_3._4_4_ = (localElipsoidBounds->m_Center).y;
    VStack_6.z = (localElipsoidBounds->m_Extents).z + (localElipsoidBounds->m_Center).z;
    VStack_6.y = (float)uVar10 + uStack_3._4_4_;
    VStack_6.x = (float)uVar9 + (float)uStack_3;
    pIVar7 = MVWorldObject.dll::MV::WorldObject::CubeMathFunctions::
              CubeMathFunctions_LocalPosToLocalIntVector
                        ((IntVector *)&uStack_3,&VStack_6,(MethodInfo *)0x0);
    IStack_11.x = pIVar7->x;
    IStack_11.y = pIVar7->y;
    IStack_11.z = pIVar7->z;
    IStack_12.x = 0;
    IStack_12.y = 0;
    IStack_12.z = 0;
    aIStack_13[0].x = 0;
    aIStack_13[0].y = 0;
    aIStack_13[0].z = 0;
    if (chunk != (BoxCollider *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::BoxCollider>_UnityEngine__BoxCollider_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      VStack_6.x = 0.0;
      VStack_6.y = 0.0;
      VStack_6.z = 0.0;
      pvVar14 = (chunk->fields)._._._.m_CachedPtr;
      if (pvVar14 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)chunk,(MethodInfo *)0x0);
        pcVar15 = (code *)swi(3);
        bVar16 = (*pcVar15)();
        return bVar16;
      }
      pcVar15 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar15 = (code *)FUN_?(&UNK_?), pcVar15 == (code *)0x0)) {
        uVar17 = func_?(&UNK_?);
        FUN_?(uVar17,0);
        pcVar15 = (code *)swi(3);
        bVar16 = (*pcVar15)();
        return bVar16;
      }
      pcRam_? = pcVar15;
      (*pcRam_?)(pvVar14);
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::BoxCollider>_UnityEngine__BoxCollider_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      uStack_3 = 0;
      fStack_18 = 0.0;
      pvVar14 = (chunk->fields)._._._.m_CachedPtr;
      if (pvVar14 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)chunk,(MethodInfo *)0x0);
        pcVar15 = (code *)swi(3);
        bVar16 = (*pcVar15)();
        return bVar16;
      }
      pcVar15 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar15 = (code *)FUN_?(&UNK_?), pcVar15 == (code *)0x0)) {
        uVar17 = func_?(&UNK_?);
        FUN_?(uVar17,0);
        pcVar15 = (code *)swi(3);
        bVar16 = (*pcVar15)();
        return bVar16;
      }
      pcRam_? = pcVar15;
      (*pcRam_?)(pvVar14,&uStack_3);
      aBStack_19[0].m_Center.x = VStack_6.x;
      aBStack_19[0].m_Center.y = VStack_6.y;
      fVar20 = uStack_3._4_4_ * _UNK_?;
      aBStack_19[0].m_Extents.x = (float)uStack_3 * _UNK_?;
      aBStack_19[0].m_Center.z = VStack_6.z;
      fVar21 = fStack_18 * _UNK_?;
      if (*(int *)&(TypeInfo__SharedCollisionFunctions->_1).field_0x1c == 0) {
        FUN_?();
      }
      aBStack_19[0].m_Extents.z = fVar21;
      aBStack_19[0].m_Extents.y = fVar20;
      SharedCollisionFunctions::SharedCollisionFunctions_GetVoxelBounds
                (&IStack_12,aIStack_13,aBStack_19,(MethodInfo *)0x0);
      iVar22 = IStack_12.z;
      uVar23 = IStack_12._0_4_;
      iVar24 = aIStack_13[0].z;
      uVar25 = aIStack_13[0]._0_4_;
      aIStack_26[0].z = aIStack_13[0].z;
      aIStack_13[0].z = IStack_12.z;
      aIStack_26[0].x = aIStack_13[0].x;
      aIStack_26[0].y = aIStack_13[0].y;
      aIStack_13[0].x = IStack_12.x;
      aIStack_13[0].y = IStack_12.y;
      MathFunctions::MathFunctions_ClampIntVector
                (aIStack_8,aIStack_13,aIStack_26,(MethodInfo *)0x0);
      uVar27 = IStack_12._0_4_;
      aIStack_13[0].x = (int16_t)uVar25;
      aIStack_13[0].y = SUB42(uVar25,2);
      aIStack_26[0].x = aIStack_13[0].x;
      aIStack_26[0].y = aIStack_13[0].y;
      aIStack_26[0].z = iVar24;
      IStack_12.x = (int16_t)uVar23;
      IStack_12.y = SUB42(uVar23,2);
      aIStack_13[0].x = IStack_12.x;
      aIStack_13[0].y = IStack_12.y;
      aIStack_13[0].z = iVar22;
      IStack_12._0_4_ = uVar27;
      MathFunctions::MathFunctions_ClampIntVector
                (&IStack_11,aIStack_13,aIStack_26,(MethodInfo *)0x0);
      iVar28 = (int)IStack_11.x;
      bVar16 = 0;
      iVar29 = (int)aIStack_8[0].x;
      if (iVar29 <= iVar28) {
        iVar30 = (int)aIStack_8[0].y;
        iVar31 = (int)IStack_11.y;
        aIStack_13[0]._0_4_ = iVar28;
        do {
          if (iVar30 <= iVar31) {
            iVar28 = (int)aIStack_8[0].z;
            iVar32 = (int)IStack_11.z;
            IStack_12._0_4_ = iVar28;
            do {
              if (iVar28 <= iVar32) {
                iVar31 = CONCAT22((short)iVar30,(short)iVar29);
                aIStack_26[0]._0_4_ = iVar31;
                do {
                  if (*(int *)&(TypeInfo__MV__WorldObject__IntVector->_1).field_0x1c == 0) {
                    FUN_?();
                  }
                  if (*(int *)&(TypeInfo__MVElipsoidOverlapCheck->_1).field_0x1c == 0) {
                    FUN_?();
                  }
                  aIStack_33[0]._0_4_ = iVar31;
                  aIStack_33[0].z = (int16_t)iVar28;
                  bVar34 = MVElipsoidOverlapCheck_HandleCube
                                     (aIStack_33,cmb,elipsoidOverlapResult,(MethodInfo *)0x0);
                  if (bVar34 != 0) {
                    bVar16 = 1;
                    if (*(int *)&(TypeInfo__MVElipsoidOverlapCheck->_1).field_0x1c == 0) {
                      FUN_?(TypeInfo__MVElipsoidOverlapCheck);
                    }
                    VStack_6.x = (float)CONCAT22((short)iVar30,(short)iVar29);
                    pLVar1 = TypeInfo__MVElipsoidOverlapCheck->static_fields->cachedIntVectors;
                    if (pLVar1 == (List_1_MV_WorldObject_IntVector_ *)0x0)
                    goto code_?;
                    uStack_3._0_6_ = (IntVector)CONCAT24((int16_t)iVar28,VStack_6.x);
                    FUN_?(pLVar1,&uStack_3,
                                  MethodInfo__System__Collections__Generic__List<MV::WorldObject::IntVector>__Add_MV__WorldObject__IntVector_
                                 );
                    if (TypeInfo__MVElipsoidOverlapCheck->static_fields->checkType == 0) {
                      if (*(int *)&(TypeInfo__MVElipsoidOverlapCheck->_1).field_0x1c == 0) {
                        FUN_?();
                      }
                      if (TypeInfo__MVElipsoidOverlapCheck->static_fields->cachedIntVectors !=
                          (List_1_MV_WorldObject_IntVector_ *)0x0) {
                        pIVar35 = (IntVector__Array *)FUN_?();
                        elipsoidOverlapResult->localCubePos = pIVar35;
                        func_?(&elipsoidOverlapResult->localCubePos);
                        return 1;
                      }
                      goto code_?;
                    }
                  }
                  iVar28 = iVar28 + 1;
                } while (iVar28 <= iVar32);
                iVar31 = (int)IStack_11.y;
                iVar28 = IStack_12._0_4_;
              }
              iVar30 = iVar30 + 1;
            } while (iVar30 <= iVar31);
            iVar30 = (int)aIStack_8[0].y;
            iVar28 = aIStack_13[0]._0_4_;
          }
          iVar29 = iVar29 + 1;
        } while (iVar29 <= iVar28);
        if (bVar16 != 0) {
          if (*(int *)&(TypeInfo__MVElipsoidOverlapCheck->_1).field_0x1c == 0) {
            FUN_?();
          }
          if (TypeInfo__MVElipsoidOverlapCheck->static_fields->cachedIntVectors ==
              (List_1_MV_WorldObject_IntVector_ *)0x0) goto code_?;
          pIVar35 = (IntVector__Array *)FUN_?();
          bVar36 = iRam_? != 0;
          elipsoidOverlapResult->localCubePos = pIVar35;
          if (bVar36) {
            uVar37 = (uint)((ulonglong)&elipsoidOverlapResult->localCubePos >> 0xc);
            uVar38 = (ulonglong)((uVar37 & 0x1fffff) >> 6);
            do {
              uVar39 = *(ulonglong *)(uVar38 * 8 + 0xADDR);
              puVar40 = (ulonglong *)(uVar38 * 8 + 0xADDR);
              LOCK();
              bVar36 = uVar39 == *puVar40;
              if (bVar36) {
                *puVar40 = uVar39 | 1L << (uVar37 & 0x3f);
              }
              UNLOCK();
            } while (!bVar36);
          }
        }
      }
      return bVar16;
    }
  }
code_?:
  FUN_?();
  pcVar15 = (code *)swi(3);
  bVar16 = (*pcVar15)();
  return bVar16;
}


/* MVElipsoidOverlapCheck() */

void Assembly-CSharp.dll::MVElipsoidOverlapCheck::MVElipsoidOverlapCheck__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<MV::WorldObject::IntVector>__List__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<MV::WorldObject::IntVector>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVElipsoidOverlapCheck);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVElipsoidOverlapCheck->static_fields;
  (pMVar1->worldToElipsoidSpace).m00 = 0.0;
  (pMVar1->worldToElipsoidSpace).m10 = 0.0;
  (pMVar1->worldToElipsoidSpace).m20 = 0.0;
  (pMVar1->worldToElipsoidSpace).m30 = 0.0;
  (pMVar1->worldToElipsoidSpace).m01 = 0.0;
  (pMVar1->worldToElipsoidSpace).m11 = 0.0;
  (pMVar1->worldToElipsoidSpace).m21 = 0.0;
  (pMVar1->worldToElipsoidSpace).m31 = 0.0;
  (pMVar1->worldToElipsoidSpace).m02 = 0.0;
  (pMVar1->worldToElipsoidSpace).m12 = 0.0;
  (pMVar1->worldToElipsoidSpace).m22 = 0.0;
  (pMVar1->worldToElipsoidSpace).m32 = 0.0;
  (pMVar1->worldToElipsoidSpace).m03 = 0.0;
  (pMVar1->worldToElipsoidSpace).m13 = 0.0;
  (pMVar1->worldToElipsoidSpace).m23 = 0.0;
  (pMVar1->worldToElipsoidSpace).m33 = 0.0;
  pMVar1 = TypeInfo__MVElipsoidOverlapCheck->static_fields;
  (pMVar1->elipsoidSpaceToWorld).m00 = 0.0;
  (pMVar1->elipsoidSpaceToWorld).m10 = 0.0;
  (pMVar1->elipsoidSpaceToWorld).m20 = 0.0;
  (pMVar1->elipsoidSpaceToWorld).m30 = 0.0;
  (pMVar1->elipsoidSpaceToWorld).m01 = 0.0;
  (pMVar1->elipsoidSpaceToWorld).m11 = 0.0;
  (pMVar1->elipsoidSpaceToWorld).m21 = 0.0;
  (pMVar1->elipsoidSpaceToWorld).m31 = 0.0;
  (pMVar1->elipsoidSpaceToWorld).m02 = 0.0;
  (pMVar1->elipsoidSpaceToWorld).m12 = 0.0;
  (pMVar1->elipsoidSpaceToWorld).m22 = 0.0;
  (pMVar1->elipsoidSpaceToWorld).m32 = 0.0;
  (pMVar1->elipsoidSpaceToWorld).m03 = 0.0;
  (pMVar1->elipsoidSpaceToWorld).m13 = 0.0;
  (pMVar1->elipsoidSpaceToWorld).m23 = 0.0;
  (pMVar1->elipsoidSpaceToWorld).m33 = 0.0;
  pMVar1 = TypeInfo__MVElipsoidOverlapCheck->static_fields;
  (pMVar1->localToElipsoidSpace).m00 = 0.0;
  (pMVar1->localToElipsoidSpace).m10 = 0.0;
  (pMVar1->localToElipsoidSpace).m20 = 0.0;
  (pMVar1->localToElipsoidSpace).m30 = 0.0;
  (pMVar1->localToElipsoidSpace).m01 = 0.0;
  (pMVar1->localToElipsoidSpace).m11 = 0.0;
  (pMVar1->localToElipsoidSpace).m21 = 0.0;
  (pMVar1->localToElipsoidSpace).m31 = 0.0;
  (pMVar1->localToElipsoidSpace).m02 = 0.0;
  (pMVar1->localToElipsoidSpace).m12 = 0.0;
  (pMVar1->localToElipsoidSpace).m22 = 0.0;
  (pMVar1->localToElipsoidSpace).m32 = 0.0;
  (pMVar1->localToElipsoidSpace).m03 = 0.0;
  (pMVar1->localToElipsoidSpace).m13 = 0.0;
  (pMVar1->localToElipsoidSpace).m23 = 0.0;
  (pMVar1->localToElipsoidSpace).m33 = 0.0;
  pMVar1 = TypeInfo__MVElipsoidOverlapCheck->static_fields;
  (pMVar1->localElipsoidPosition).x = 0.0;
  (pMVar1->localElipsoidPosition).y = 0.0;
  (pMVar1->localElipsoidPosition).z = 0.0;
  pMVar1 = TypeInfo__MVElipsoidOverlapCheck->static_fields;
  (pMVar1->worldToRadiusExtendedElipsoidSpace).m00 = 0.0;
  (pMVar1->worldToRadiusExtendedElipsoidSpace).m10 = 0.0;
  (pMVar1->worldToRadiusExtendedElipsoidSpace).m20 = 0.0;
  (pMVar1->worldToRadiusExtendedElipsoidSpace).m30 = 0.0;
  (pMVar1->worldToRadiusExtendedElipsoidSpace).m01 = 0.0;
  (pMVar1->worldToRadiusExtendedElipsoidSpace).m11 = 0.0;
  (pMVar1->worldToRadiusExtendedElipsoidSpace).m21 = 0.0;
  (pMVar1->worldToRadiusExtendedElipsoidSpace).m31 = 0.0;
  (pMVar1->worldToRadiusExtendedElipsoidSpace).m02 = 0.0;
  (pMVar1->worldToRadiusExtendedElipsoidSpace).m12 = 0.0;
  (pMVar1->worldToRadiusExtendedElipsoidSpace).m22 = 0.0;
  (pMVar1->worldToRadiusExtendedElipsoidSpace).m32 = 0.0;
  (pMVar1->worldToRadiusExtendedElipsoidSpace).m03 = 0.0;
  (pMVar1->worldToRadiusExtendedElipsoidSpace).m13 = 0.0;
  (pMVar1->worldToRadiusExtendedElipsoidSpace).m23 = 0.0;
  (pMVar1->worldToRadiusExtendedElipsoidSpace).m33 = 0.0;
  pMVar1 = TypeInfo__MVElipsoidOverlapCheck->static_fields;
  (pMVar1->radiusExtendedElipsoidSpaceToWorld).m00 = 0.0;
  (pMVar1->radiusExtendedElipsoidSpaceToWorld).m10 = 0.0;
  (pMVar1->radiusExtendedElipsoidSpaceToWorld).m20 = 0.0;
  (pMVar1->radiusExtendedElipsoidSpaceToWorld).m30 = 0.0;
  (pMVar1->radiusExtendedElipsoidSpaceToWorld).m01 = 0.0;
  (pMVar1->radiusExtendedElipsoidSpaceToWorld).m11 = 0.0;
  (pMVar1->radiusExtendedElipsoidSpaceToWorld).m21 = 0.0;
  (pMVar1->radiusExtendedElipsoidSpaceToWorld).m31 = 0.0;
  (pMVar1->radiusExtendedElipsoidSpaceToWorld).m02 = 0.0;
  (pMVar1->radiusExtendedElipsoidSpaceToWorld).m12 = 0.0;
  (pMVar1->radiusExtendedElipsoidSpaceToWorld).m22 = 0.0;
  (pMVar1->radiusExtendedElipsoidSpaceToWorld).m32 = 0.0;
  (pMVar1->radiusExtendedElipsoidSpaceToWorld).m03 = 0.0;
  (pMVar1->radiusExtendedElipsoidSpaceToWorld).m13 = 0.0;
  (pMVar1->radiusExtendedElipsoidSpaceToWorld).m23 = 0.0;
  (pMVar1->radiusExtendedElipsoidSpaceToWorld).m33 = 0.0;
  pMVar1 = TypeInfo__MVElipsoidOverlapCheck->static_fields;
  (pMVar1->localToRadiusExtendedElipsoidSpace).m00 = 0.0;
  (pMVar1->localToRadiusExtendedElipsoidSpace).m10 = 0.0;
  (pMVar1->localToRadiusExtendedElipsoidSpace).m20 = 0.0;
  (pMVar1->localToRadiusExtendedElipsoidSpace).m30 = 0.0;
  (pMVar1->localToRadiusExtendedElipsoidSpace).m01 = 0.0;
  (pMVar1->localToRadiusExtendedElipsoidSpace).m11 = 0.0;
  (pMVar1->localToRadiusExtendedElipsoidSpace).m21 = 0.0;
  (pMVar1->localToRadiusExtendedElipsoidSpace).m31 = 0.0;
  (pMVar1->localToRadiusExtendedElipsoidSpace).m02 = 0.0;
  (pMVar1->localToRadiusExtendedElipsoidSpace).m12 = 0.0;
  (pMVar1->localToRadiusExtendedElipsoidSpace).m22 = 0.0;
  (pMVar1->localToRadiusExtendedElipsoidSpace).m32 = 0.0;
  (pMVar1->localToRadiusExtendedElipsoidSpace).m03 = 0.0;
  (pMVar1->localToRadiusExtendedElipsoidSpace).m13 = 0.0;
  (pMVar1->localToRadiusExtendedElipsoidSpace).m23 = 0.0;
  (pMVar1->localToRadiusExtendedElipsoidSpace).m33 = 0.0;
  TypeInfo__MVElipsoidOverlapCheck->static_fields->reducedElipsoidSpaceExists = 0;
  pMVar1 = TypeInfo__MVElipsoidOverlapCheck->static_fields;
  (pMVar1->worldToRadiusReducedElipsoidSpace).m00 = 0.0;
  (pMVar1->worldToRadiusReducedElipsoidSpace).m10 = 0.0;
  (pMVar1->worldToRadiusReducedElipsoidSpace).m20 = 0.0;
  (pMVar1->worldToRadiusReducedElipsoidSpace).m30 = 0.0;
  (pMVar1->worldToRadiusReducedElipsoidSpace).m01 = 0.0;
  (pMVar1->worldToRadiusReducedElipsoidSpace).m11 = 0.0;
  (pMVar1->worldToRadiusReducedElipsoidSpace).m21 = 0.0;
  (pMVar1->worldToRadiusReducedElipsoidSpace).m31 = 0.0;
  (pMVar1->worldToRadiusReducedElipsoidSpace).m02 = 0.0;
  (pMVar1->worldToRadiusReducedElipsoidSpace).m12 = 0.0;
  (pMVar1->worldToRadiusReducedElipsoidSpace).m22 = 0.0;
  (pMVar1->worldToRadiusReducedElipsoidSpace).m32 = 0.0;
  (pMVar1->worldToRadiusReducedElipsoidSpace).m03 = 0.0;
  (pMVar1->worldToRadiusReducedElipsoidSpace).m13 = 0.0;
  (pMVar1->worldToRadiusReducedElipsoidSpace).m23 = 0.0;
  (pMVar1->worldToRadiusReducedElipsoidSpace).m33 = 0.0;
  pMVar1 = TypeInfo__MVElipsoidOverlapCheck->static_fields;
  (pMVar1->radiusReducedElipsoidSpaceToWorld).m00 = 0.0;
  (pMVar1->radiusReducedElipsoidSpaceToWorld).m10 = 0.0;
  (pMVar1->radiusReducedElipsoidSpaceToWorld).m20 = 0.0;
  (pMVar1->radiusReducedElipsoidSpaceToWorld).m30 = 0.0;
  (pMVar1->radiusReducedElipsoidSpaceToWorld).m01 = 0.0;
  (pMVar1->radiusReducedElipsoidSpaceToWorld).m11 = 0.0;
  (pMVar1->radiusReducedElipsoidSpaceToWorld).m21 = 0.0;
  (pMVar1->radiusReducedElipsoidSpaceToWorld).m31 = 0.0;
  (pMVar1->radiusReducedElipsoidSpaceToWorld).m02 = 0.0;
  (pMVar1->radiusReducedElipsoidSpaceToWorld).m12 = 0.0;
  (pMVar1->radiusReducedElipsoidSpaceToWorld).m22 = 0.0;
  (pMVar1->radiusReducedElipsoidSpaceToWorld).m32 = 0.0;
  (pMVar1->radiusReducedElipsoidSpaceToWorld).m03 = 0.0;
  (pMVar1->radiusReducedElipsoidSpaceToWorld).m13 = 0.0;
  (pMVar1->radiusReducedElipsoidSpaceToWorld).m23 = 0.0;
  (pMVar1->radiusReducedElipsoidSpaceToWorld).m33 = 0.0;
  pMVar1 = TypeInfo__MVElipsoidOverlapCheck->static_fields;
  (pMVar1->localToRadiusReducedElipsoidSpace).m00 = 0.0;
  (pMVar1->localToRadiusReducedElipsoidSpace).m10 = 0.0;
  (pMVar1->localToRadiusReducedElipsoidSpace).m20 = 0.0;
  (pMVar1->localToRadiusReducedElipsoidSpace).m30 = 0.0;
  (pMVar1->localToRadiusReducedElipsoidSpace).m01 = 0.0;
  (pMVar1->localToRadiusReducedElipsoidSpace).m11 = 0.0;
  (pMVar1->localToRadiusReducedElipsoidSpace).m21 = 0.0;
  (pMVar1->localToRadiusReducedElipsoidSpace).m31 = 0.0;
  (pMVar1->localToRadiusReducedElipsoidSpace).m02 = 0.0;
  (pMVar1->localToRadiusReducedElipsoidSpace).m12 = 0.0;
  (pMVar1->localToRadiusReducedElipsoidSpace).m22 = 0.0;
  (pMVar1->localToRadiusReducedElipsoidSpace).m32 = 0.0;
  (pMVar1->localToRadiusReducedElipsoidSpace).m03 = 0.0;
  (pMVar1->localToRadiusReducedElipsoidSpace).m13 = 0.0;
  (pMVar1->localToRadiusReducedElipsoidSpace).m23 = 0.0;
  (pMVar1->localToRadiusReducedElipsoidSpace).m33 = 0.0;
  pMVar1 = TypeInfo__MVElipsoidOverlapCheck->static_fields;
  (pMVar1->localToWorld).m00 = 0.0;
  (pMVar1->localToWorld).m10 = 0.0;
  (pMVar1->localToWorld).m20 = 0.0;
  (pMVar1->localToWorld).m30 = 0.0;
  (pMVar1->localToWorld).m01 = 0.0;
  (pMVar1->localToWorld).m11 = 0.0;
  (pMVar1->localToWorld).m21 = 0.0;
  (pMVar1->localToWorld).m31 = 0.0;
  (pMVar1->localToWorld).m02 = 0.0;
  (pMVar1->localToWorld).m12 = 0.0;
  (pMVar1->localToWorld).m22 = 0.0;
  (pMVar1->localToWorld).m32 = 0.0;
  (pMVar1->localToWorld).m03 = 0.0;
  (pMVar1->localToWorld).m13 = 0.0;
  (pMVar1->localToWorld).m23 = 0.0;
  (pMVar1->localToWorld).m33 = 0.0;
  pMVar1 = TypeInfo__MVElipsoidOverlapCheck->static_fields;
  (pMVar1->worldToLocal).m00 = 0.0;
  (pMVar1->worldToLocal).m10 = 0.0;
  (pMVar1->worldToLocal).m20 = 0.0;
  (pMVar1->worldToLocal).m30 = 0.0;
  (pMVar1->worldToLocal).m01 = 0.0;
  (pMVar1->worldToLocal).m11 = 0.0;
  (pMVar1->worldToLocal).m21 = 0.0;
  (pMVar1->worldToLocal).m31 = 0.0;
  (pMVar1->worldToLocal).m02 = 0.0;
  (pMVar1->worldToLocal).m12 = 0.0;
  (pMVar1->worldToLocal).m22 = 0.0;
  (pMVar1->worldToLocal).m32 = 0.0;
  (pMVar1->worldToLocal).m03 = 0.0;
  (pMVar1->worldToLocal).m13 = 0.0;
  (pMVar1->worldToLocal).m23 = 0.0;
  (pMVar1->worldToLocal).m33 = 0.0;
  pVVar2 = (Vector3__Array *)FUN_?(TypeInfo__UnityEngine__Vector3,8);
  TypeInfo__MVElipsoidOverlapCheck->static_fields->cachedCorners = pVVar2;
  if (iRam_? != 0) {
    uVar3 = (uint)((ulonglong)&TypeInfo__MVElipsoidOverlapCheck->static_fields->cachedCorners >> 0xc
                  );
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar7 = uVar5 == *puVar6;
      if (bVar7) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar7);
  }
  pVVar2 = (Vector3__Array *)FUN_?(TypeInfo__UnityEngine__Vector3,4);
  TypeInfo__MVElipsoidOverlapCheck->static_fields->cachedFace = pVVar2;
  if (iRam_? != 0) {
    uVar3 = (uint)((ulonglong)&TypeInfo__MVElipsoidOverlapCheck->static_fields->cachedFace >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar7 = uVar5 == *puVar6;
      if (bVar7) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar7);
  }
  TypeInfo__MVElipsoidOverlapCheck->static_fields->checkType = 0;
  pLVar8 = (List_1_MV_WorldObject_IntVector_ *)
           FUN_?(TypeInfo__System__Collections__Generic__List<MV::WorldObject::IntVector>);
  FUN_?(pLVar8,
                MethodInfo__System__Collections__Generic__List<MV::WorldObject::IntVector>__List__);
  bVar7 = iRam_? != 0;
  TypeInfo__MVElipsoidOverlapCheck->static_fields->cachedIntVectors = pLVar8;
  if (bVar7) {
    uVar3 = (uint)((ulonglong)&TypeInfo__MVElipsoidOverlapCheck->static_fields->cachedIntVectors >>
                  0xc);
    uVar5 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
    do {
      uVar9 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
      puVar6 = (ulonglong *)(uVar5 * 8 + 0xADDR);
      LOCK();
      bVar7 = uVar9 == *puVar6;
      if (bVar7) {
        *puVar6 = uVar9 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar7);
  }
  return;
}

