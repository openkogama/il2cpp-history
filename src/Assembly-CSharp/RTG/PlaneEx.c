
/* Single GetAbsDistanceToPoint(Plane, Vector3) */

float Assembly-CSharp.dll::RTG::PlaneEx::PlaneEx_GetAbsDistanceToPoint
                (Plane *plane,Vector3 *point,MethodInfo *method)

{
  uVar1 = point->x;
  uVar2 = point->y;
  uVar3 = (plane->m_Normal).x;
  uVar4 = (plane->m_Normal).y;
  return (float)((uint)((float)uVar2 * (float)uVar4 + (float)uVar1 * (float)uVar3 +
                        point->z * (plane->m_Normal).z + plane->m_Distance) & _UNK_?);
}


/* Plane GetCameraFacingAxisSlicePlane(Vector3, Vector3, Camera) */

Plane * Assembly-CSharp.dll::RTG::PlaneEx::PlaneEx_GetCameraFacingAxisSlicePlane
                  (Plane *__return_storage_ptr__,Vector3 *axisOrigin,Vector3 *axis,Camera *camera,
                  MethodInfo *method)

{
  if (camera != (Camera *)0x0) {
    pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        ((Component *)camera,(MethodInfo *)0x0);
    if (pTVar1 != (Transform *)0x0) {
      pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_forward
                          (&VStack_3,pTVar1,(MethodInfo *)0x0);
      fVar4 = _UNK_?;
      uVar5 = axis->x;
      uVar6 = axis->y;
      VStack_7.x = pVVar2->x;
      VStack_7.y = pVVar2->y;
      fVar8 = pVVar2->z;
      aVStack_9[0]._0_8_ = VStack_7._0_8_;
      if ((float)((uint)((float)((uint)((float)uVar6 * VStack_7.y + (float)uVar5 * VStack_7.x +
                                       axis->z * pVVar2->z) & _UNK_?) - _UNK_?) &
                 _UNK_?) < _UNK_?) {
        pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                            ((Component *)camera,(MethodInfo *)0x0);
        if (pTVar1 == (Transform *)0x0) goto DAT_?;
        pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_right
                            (aVStack_9,pTVar1,(MethodInfo *)0x0);
        VStack_7.x = pVVar2->x;
        VStack_7.y = pVVar2->y;
        fVar8 = pVVar2->z;
      }
      VStack_3.x = axis->x;
      VStack_3.y = axis->y;
      fVar10 = VStack_7.y * axis->z - fVar8 * VStack_3.y;
      fVar11 = VStack_7.x * VStack_3.y - VStack_7.y * VStack_3.x;
      fVar8 = fVar8 * VStack_3.x - VStack_7.x * axis->z;
      VStack_7.y = fVar8;
      VStack_7.x = fVar10;
      VStack_7.z = fVar11;
      fVar12 = (float)FUN_?(&VStack_7);
      if (fVar4 < fVar12) {
        fVar10 = fVar10 / fVar12;
        fVar8 = fVar8 / fVar12;
        fVar11 = fVar11 / fVar12;
      }
      else {
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__UnityEngine__Vector3);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pVVar13 = TypeInfo__UnityEngine__Vector3->static_fields;
        fVar10 = (pVVar13->zeroVector).x;
        fVar8 = (pVVar13->zeroVector).y;
        fVar11 = (pVVar13->zeroVector).z;
      }
      VStack_3.y = fVar8;
      VStack_3.x = fVar10;
      VStack_3.z = fVar11;
      VStack_7.x = fVar10;
      VStack_7.y = fVar8;
      fVar8 = (float)FUN_?(&VStack_3);
      if (fVar8 < _UNK_?) {
        fVar11 = 0.0;
        fVar12 = 0.0;
        fVar8 = 0.0;
        fVar4 = 0.0;
      }
      else {
        uVar14 = axis->x;
        uVar15 = axis->y;
        fVar12 = VStack_7.y * axis->z - fVar11 * (float)uVar15;
        fVar8 = VStack_7.x * (float)uVar15 - VStack_7.y * (float)uVar14;
        fVar11 = fVar11 * (float)uVar14 - VStack_7.x * axis->z;
        VStack_3.y = fVar11;
        VStack_3.x = fVar12;
        VStack_3.z = fVar8;
        fVar10 = (float)FUN_?(&VStack_3);
        if (fVar4 < fVar10) {
          VStack_7.x = fVar12 / fVar10;
          fVar8 = fVar8 / fVar10;
          VStack_7.y = fVar11 / fVar10;
        }
        else {
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__UnityEngine__Vector3);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pVVar13 = TypeInfo__UnityEngine__Vector3->static_fields;
          VStack_7.x = (pVVar13->zeroVector).x;
          VStack_7.y = (pVVar13->zeroVector).y;
          fVar8 = (pVVar13->zeroVector).z;
        }
        fVar11 = VStack_7.x;
        fVar12 = VStack_7.y;
        VStack_3.x = VStack_7.x;
        VStack_3.y = VStack_7.y;
        VStack_3.z = fVar8;
        fVar10 = (float)FUN_?(&VStack_3);
        if (fVar4 < fVar10) {
          fVar11 = fVar11 / fVar10;
          fVar12 = fVar12 / fVar10;
          fVar8 = fVar8 / fVar10;
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
          fVar8 = (pVVar13->zeroVector).z;
        }
        uVar16 = axisOrigin->x;
        uVar17 = axisOrigin->y;
        fVar4 = (float)((uint)(fVar12 * (float)uVar17 + fVar11 * (float)uVar16 + fVar8 * axisOrigin->z
                               ) ^ _UNK_?);
      }
      (__return_storage_ptr__->m_Normal).x = fVar11;
      (__return_storage_ptr__->m_Normal).y = fVar12;
      (__return_storage_ptr__->m_Normal).z = fVar8;
      __return_storage_ptr__->m_Distance = fVar4;
      return __return_storage_ptr__;
    }
  }
DAT_?:
  FUN_?();
  pcVar18 = (code *)swi(3);
  pPVar19 = (Plane *)(*pcVar18)();
  return pPVar19;
}


/* Int32 GetClosestPtInFront(Plane, List`1[UnityEngine.Vector3]) */

int32_t Assembly-CSharp.dll::RTG::PlaneEx::PlaneEx_GetClosestPtInFront
                  (Plane *plane,List_1_UnityEngine_Vector3_ *points,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uVar1 = 0xffffffff;
  uVar2 = 0;
  if (points != (List_1_UnityEngine_Vector3_ *)0x0) {
    uVar3 = (points->fields)._size;
    lVar4 = 0;
    fVar5 = _UNK_?;
    while( true ) {
      if ((int)uVar3 <= (int)uVar2) {
        return uVar1;
      }
      if (uVar3 <= uVar2) {
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                  ((MethodInfo *)0x0);
        pcVar6 = (code *)swi(3);
        iVar7 = (*pcVar6)();
        return iVar7;
      }
      pVVar8 = (points->fields)._items;
      if (pVVar8 == (Vector3__Array *)0x0) break;
      if ((uint)pVVar8->max_length <= uVar2) {
        FUN_?();
        pcVar6 = (code *)swi(3);
        iVar7 = (*pcVar6)();
        return iVar7;
      }
      uVar9 = *(undefined8 *)((longlong)&pVVar8->vector[0].x + lVar4);
      uVar10 = (plane->m_Normal).x;
      uVar11 = (plane->m_Normal).y;
      fVar12 = (float)((ulonglong)uVar9 >> 0x20) * (float)uVar11 + (float)uVar9 * (float)uVar10 +
               *(float *)((longlong)&pVVar8->vector[0].z + lVar4) * (plane->m_Normal).z +
               plane->m_Distance;
      if ((0.0 < fVar12) && (fVar12 < fVar5)) {
        fVar5 = fVar12;
        uVar1 = uVar2;
      }
      uVar2 = uVar2 + 1;
      lVar4 = lVar4 + 0xc;
    }
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  iVar7 = (*pcVar6)();
  return iVar7;
}


/* Int32 GetClosestPtInFrontOrOnPlane(Plane, List`1[UnityEngine.Vector3]) */

int32_t Assembly-CSharp.dll::RTG::PlaneEx::PlaneEx_GetClosestPtInFrontOrOnPlane
                  (Plane *plane,List_1_UnityEngine_Vector3_ *points,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uVar1 = 0xffffffff;
  uVar2 = 0;
  if (points != (List_1_UnityEngine_Vector3_ *)0x0) {
    uVar3 = (points->fields)._size;
    lVar4 = 0;
    fVar5 = _UNK_?;
    while( true ) {
      if ((int)uVar3 <= (int)uVar2) {
        return uVar1;
      }
      if (uVar3 <= uVar2) {
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                  ((MethodInfo *)0x0);
        pcVar6 = (code *)swi(3);
        iVar7 = (*pcVar6)();
        return iVar7;
      }
      pVVar8 = (points->fields)._items;
      if (pVVar8 == (Vector3__Array *)0x0) break;
      if ((uint)pVVar8->max_length <= uVar2) {
        FUN_?();
        pcVar6 = (code *)swi(3);
        iVar7 = (*pcVar6)();
        return iVar7;
      }
      uVar9 = *(undefined8 *)((longlong)&pVVar8->vector[0].x + lVar4);
      uVar10 = (plane->m_Normal).x;
      uVar11 = (plane->m_Normal).y;
      fVar12 = (float)((ulonglong)uVar9 >> 0x20) * (float)uVar11 + (float)uVar9 * (float)uVar10 +
               *(float *)((longlong)&pVVar8->vector[0].z + lVar4) * (plane->m_Normal).z +
               plane->m_Distance;
      if (((0.0 <= fVar12) && (fVar12 < fVar5)) ||
         ((float)((uint)fVar12 & _UNK_?) < _UNK_?)) {
        fVar5 = fVar12;
        uVar1 = uVar2;
      }
      uVar2 = uVar2 + 1;
      lVar4 = lVar4 + 0xc;
    }
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  iVar7 = (*pcVar6)();
  return iVar7;
}


/* Int32 GetFurthestPtBehind(Plane, List`1[UnityEngine.Vector3]) */

int32_t Assembly-CSharp.dll::RTG::PlaneEx::PlaneEx_GetFurthestPtBehind
                  (Plane *plane,List_1_UnityEngine_Vector3_ *points,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uVar1 = 0xffffffff;
  uVar2 = 0;
  if (points != (List_1_UnityEngine_Vector3_ *)0x0) {
    uVar3 = (points->fields)._size;
    lVar4 = 0;
    fVar5 = _UNK_?;
    while( true ) {
      if ((int)uVar3 <= (int)uVar2) {
        return uVar1;
      }
      if (uVar3 <= uVar2) {
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                  ((MethodInfo *)0x0);
        pcVar6 = (code *)swi(3);
        iVar7 = (*pcVar6)();
        return iVar7;
      }
      pVVar8 = (points->fields)._items;
      if (pVVar8 == (Vector3__Array *)0x0) break;
      if ((uint)pVVar8->max_length <= uVar2) {
        FUN_?();
        pcVar6 = (code *)swi(3);
        iVar7 = (*pcVar6)();
        return iVar7;
      }
      uVar9 = *(undefined8 *)((longlong)&pVVar8->vector[0].x + lVar4);
      uVar10 = (plane->m_Normal).x;
      uVar11 = (plane->m_Normal).y;
      fVar12 = (float)((ulonglong)uVar9 >> 0x20) * (float)uVar11 + (float)uVar9 * (float)uVar10 +
               *(float *)((longlong)&pVVar8->vector[0].z + lVar4) * (plane->m_Normal).z +
               plane->m_Distance;
      if ((fVar12 < 0.0) && (fVar12 < fVar5)) {
        fVar5 = fVar12;
        uVar1 = uVar2;
      }
      uVar2 = uVar2 + 1;
      lVar4 = lVar4 + 0xc;
    }
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  iVar7 = (*pcVar6)();
  return iVar7;
}


/* Int32 GetFurthestPtInFront(Plane, List`1[UnityEngine.Vector3]) */

int32_t Assembly-CSharp.dll::RTG::PlaneEx::PlaneEx_GetFurthestPtInFront
                  (Plane *plane,List_1_UnityEngine_Vector3_ *points,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uVar1 = 0xffffffff;
  uVar2 = 0;
  if (points != (List_1_UnityEngine_Vector3_ *)0x0) {
    uVar3 = (points->fields)._size;
    lVar4 = 0;
    fVar5 = _UNK_?;
    while( true ) {
      if ((int)uVar3 <= (int)uVar2) {
        return uVar1;
      }
      if (uVar3 <= uVar2) {
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                  ((MethodInfo *)0x0);
        pcVar6 = (code *)swi(3);
        iVar7 = (*pcVar6)();
        return iVar7;
      }
      pVVar8 = (points->fields)._items;
      if (pVVar8 == (Vector3__Array *)0x0) break;
      if ((uint)pVVar8->max_length <= uVar2) {
        FUN_?();
        pcVar6 = (code *)swi(3);
        iVar7 = (*pcVar6)();
        return iVar7;
      }
      uVar9 = *(undefined8 *)((longlong)&pVVar8->vector[0].x + lVar4);
      uVar10 = (plane->m_Normal).x;
      uVar11 = (plane->m_Normal).y;
      fVar12 = (float)((ulonglong)uVar9 >> 0x20) * (float)uVar11 + (float)uVar9 * (float)uVar10 +
               *(float *)((longlong)&pVVar8->vector[0].z + lVar4) * (plane->m_Normal).z +
               plane->m_Distance;
      if ((0.0 < fVar12) && (fVar5 < fVar12)) {
        fVar5 = fVar12;
        uVar1 = uVar2;
      }
      uVar2 = uVar2 + 1;
      lVar4 = lVar4 + 0xc;
    }
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  iVar7 = (*pcVar6)();
  return iVar7;
}


/* Plane InvertNormal(Plane) */

Plane * Assembly-CSharp.dll::RTG::PlaneEx::PlaneEx_InvertNormal
                  (Plane *__return_storage_ptr__,Plane *plane,MethodInfo *method)

{
  uVar1 = (plane->m_Normal).x;
  uVar2 = (plane->m_Normal).y;
  fVar3 = (float)(uVar1 ^ _UNK_?);
  fVar4 = (float)(uVar2 ^ _UNK_?);
  VStack_5.z = (float)((uint)(plane->m_Normal).z ^ _UNK_?);
  d = (float)((uint)plane->m_Distance ^ _UNK_?);
  (__return_storage_ptr__->m_Normal).x = 0.0;
  (__return_storage_ptr__->m_Normal).y = 0.0;
  *(undefined8 *)&(__return_storage_ptr__->m_Normal).z = 0;
  VStack_5.y = fVar4;
  VStack_5.x = fVar3;
  UnityEngine.CoreModule.dll::UnityEngine::Plane::Plane__ctor_1
            (__return_storage_ptr__,&VStack_5,d,in_R9);
  return __return_storage_ptr__;
}


/* List`1[UnityEngine.Vector3] ProjectAllPoints(Plane, List`1[UnityEngine.Vector3]) */

List_1_UnityEngine_Vector3_ *
Assembly-CSharp.dll::RTG::PlaneEx::PlaneEx_ProjectAllPoints
          (Plane *plane,List_1_UnityEngine_Vector3_ *points,MethodInfo *method)

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
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List_int_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::Vector3>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (points == (List_1_UnityEngine_Vector3_ *)0x0) {
    FUN_?();
code_?:
    FUN_?();
code_?:
    FUN_?();
code_?:
    FUN_?();
    FUN_?();
    pcVar1 = (code *)swi(3);
    pLVar2 = (List_1_UnityEngine_Vector3_ *)(*pcVar1)();
    return pLVar2;
  }
  if ((points->fields)._size == 0) {
    this = (List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)
           FUN_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Vector3>);
    FUN_?(this,MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List__)
    ;
  }
  else {
    iVar3 = (points->fields)._size;
    this = (List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)
           FUN_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Vector3>);
    FUN_?(this,iVar3,
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List_int_);
    if (iRam_? != 0) {
      uVar4 = (uint)((ulonglong)&uStack_5 >> 0xc);
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
    ppLStack_10 = (List_1_UnityEngine_Vector3_ **)
                  ((ulonglong)(uint)(points->fields)._version << 0x20);
    uStack_11 = 0;
    uStack_12 = 0;
    lStack_13 = (longlong)ppLStack_10;
    uStack_14 = 0;
    uStack_15 = 0;
    uStack_5 = 0;
    ppLStack_10 = &pLStack_16;
    pLStack_16 = points;
    while (cVar17 = FUN_?(&pLStack_16,
                                 MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::Vector3>__MoveNext__
                                ),
          pMVar18 = 
          MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
          , cVar17 != '\0') {
      fVar19 = (plane->m_Normal).x;
      fVar20 = (plane->m_Normal).y;
      fVar21 = (plane->m_Normal).z;
      fVar22 = fVar21 * (float)uStack_15 + fVar19 * (float)uStack_14 + fVar20 * uStack_14._4_4_ +
               plane->m_Distance;
      fVar21 = (float)uStack_15 - fVar22 * fVar21;
      fVar20 = uStack_14._4_4_ - fVar22 * fVar20;
      fVar19 = (float)uStack_14 - fVar22 * fVar19;
      if (this == (List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)0x0) goto code_?;
      piVar23 = &(this->fields)._version;
      *piVar23 = *piVar23 + 1;
      pPVar24 = (this->fields)._items;
      uVar4 = (this->fields)._size;
      if (pPVar24 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
      if (uVar4 < (uint)pPVar24->max_length) {
        (this->fields)._size = uVar4 + 1;
        if ((uint)pPVar24->max_length <= uVar4) goto code_?;
        pPVar24->vector[(int)uVar4].Quadrant = (int32_t)fVar19;
        pPVar24->vector[(int)uVar4].FirstAxisSign = (int32_t)fVar20;
        pPVar24->vector[(int)uVar4].SecondAxisSign = (int32_t)fVar21;
      }
      else {
        PStack_25.FirstAxisSign = (int32_t)fVar20;
        PStack_25.Quadrant = (int32_t)fVar19;
        PStack_25.SecondAxisSign = (int32_t)fVar21;
        mscorlib.dll::System::Collections::Generic::List`1[RTG::PlaneIdHelper+PlaneQuadrantInfo]::
        List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__AddWithResize
                  (this,&PStack_25,pMVar18->klass->rgctx_data[0xe].method);
      }
    }
  }
  return (List_1_UnityEngine_Vector3_ *)this;
}


/* Vector3 ProjectPoint(Plane, Vector3) */

Vector3 * Assembly-CSharp.dll::RTG::PlaneEx::PlaneEx_ProjectPoint
                    (Vector3 *__return_storage_ptr__,Plane *plane,Vector3 *pt,MethodInfo *method)

{
  uVar1 = pt->x;
  uVar2 = pt->y;
  uVar3 = (plane->m_Normal).x;
  uVar4 = (plane->m_Normal).y;
  fVar5 = (float)uVar2 * (float)uVar4 + (float)uVar1 * (float)uVar3 + pt->z * (plane->m_Normal).z +
           plane->m_Distance;
  uVar6 = (plane->m_Normal).x;
  uVar7 = (plane->m_Normal).y;
  uVar8 = pt->x;
  fVar9 = pt->y;
  fVar10 = (plane->m_Normal).z;
  fVar11 = pt->z;
  __return_storage_ptr__->x = (float)uVar8 - fVar5 * (float)uVar6;
  __return_storage_ptr__->y = fVar9 - fVar5 * (float)uVar7;
  __return_storage_ptr__->z = fVar11 - fVar5 * fVar10;
  return __return_storage_ptr__;
}

