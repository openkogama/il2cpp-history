
/* Single GetAbsDistanceToPoint(Plane, Vector3) */

float Assembly-CSharp.dll::RTG::PlaneEx::PlaneEx_GetAbsDistanceToPoint(Plane *plane,Vector3 *point,MethodInfo *method)

{
  uVar1 = point->x;
  uVar2 = point->y;
  uVar3 = (plane->m_Normal).x;
  uVar4 = (plane->m_Normal).y;
  return ABS((float)uVar2 * (float)uVar4 + (float)uVar1 * (float)uVar3 + point->z * (plane->m_Normal).z + plane->m_Distance);
}


/* Plane GetCameraFacingAxisSlicePlane(Vector3, Vector3, Camera) */

Plane * Assembly-CSharp.dll::RTG::PlaneEx::PlaneEx_GetCameraFacingAxisSlicePlane(Plane *__return_storage_ptr__,Vector3 *axisOrigin,Vector3 *axis,Camera *camera,MethodInfo *method)

{
  if (camera != (Camera *)0x0) {
    pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform((Component *)camera,(MethodInfo *)0x0);
    if (pTVar1 != (Transform *)0x0) {
      pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_forward(&VStack_3,pTVar1,(MethodInfo *)0x0);
      uVar4 = axis->x;
      uVar5 = axis->y;
      VStack_6.x = pVVar2->x;
      VStack_6.y = pVVar2->y;
      fVar7 = pVVar2->z;
      aVStack_8[0]._0_8_ = VStack_6._0_8_;
      if (ABS(ABS((float)uVar5 * VStack_6.y + (float)uVar4 * VStack_6.x + axis->z * pVVar2->z) - 1.0) < 1e-05) {
        pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform((Component *)camera,(MethodInfo *)0x0);
        if (pTVar1 == (Transform *)0x0) goto DAT_?;
        pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_right(aVStack_8,pTVar1,(MethodInfo *)0x0);
        VStack_6.x = pVVar2->x;
        VStack_6.y = pVVar2->y;
        fVar7 = pVVar2->z;
      }
      VStack_3.x = axis->x;
      VStack_3.y = axis->y;
      fVar9 = VStack_6.y * axis->z - fVar7 * VStack_3.y;
      fVar10 = VStack_6.x * VStack_3.y - VStack_6.y * VStack_3.x;
      fVar7 = fVar7 * VStack_3.x - VStack_6.x * axis->z;
      VStack_6.y = fVar7;
      VStack_6.x = fVar9;
      VStack_6.z = fVar10;
      fVar11 = (float)FUN_?(&VStack_6);
      if (1e-05 < fVar11) {
        fVar9 = fVar9 / fVar11;
        fVar7 = fVar7 / fVar11;
        fVar10 = fVar10 / fVar11;
      }
      else {
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__UnityEngine__Vector3);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pVVar12 = TypeInfo__UnityEngine__Vector3->static_fields;
        fVar9 = (pVVar12->zeroVector).x;
        fVar7 = (pVVar12->zeroVector).y;
        fVar10 = (pVVar12->zeroVector).z;
      }
      VStack_3.y = fVar7;
      VStack_3.x = fVar9;
      VStack_3.z = fVar10;
      VStack_6.x = fVar9;
      VStack_6.y = fVar7;
      fVar7 = (float)FUN_?(&VStack_3);
      if (fVar7 < 0.0001) {
        fVar10 = 0.0;
        fVar11 = 0.0;
        fVar7 = 0.0;
        fVar9 = 0.0;
      }
      else {
        uVar13 = axis->x;
        uVar14 = axis->y;
        fVar11 = VStack_6.y * axis->z - fVar10 * (float)uVar14;
        fVar7 = VStack_6.x * (float)uVar14 - VStack_6.y * (float)uVar13;
        fVar10 = fVar10 * (float)uVar13 - VStack_6.x * axis->z;
        VStack_3.y = fVar10;
        VStack_3.x = fVar11;
        VStack_3.z = fVar7;
        fVar9 = (float)FUN_?(&VStack_3);
        if (1e-05 < fVar9) {
          VStack_6.x = fVar11 / fVar9;
          fVar7 = fVar7 / fVar9;
          VStack_6.y = fVar10 / fVar9;
        }
        else {
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__UnityEngine__Vector3);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pVVar12 = TypeInfo__UnityEngine__Vector3->static_fields;
          VStack_6.x = (pVVar12->zeroVector).x;
          VStack_6.y = (pVVar12->zeroVector).y;
          fVar7 = (pVVar12->zeroVector).z;
        }
        fVar10 = VStack_6.x;
        fVar11 = VStack_6.y;
        VStack_3.x = VStack_6.x;
        VStack_3.y = VStack_6.y;
        VStack_3.z = fVar7;
        fVar9 = (float)FUN_?(&VStack_3);
        if (1e-05 < fVar9) {
          fVar10 = fVar10 / fVar9;
          fVar11 = fVar11 / fVar9;
          fVar7 = fVar7 / fVar9;
        }
        else {
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__UnityEngine__Vector3);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pVVar12 = TypeInfo__UnityEngine__Vector3->static_fields;
          fVar10 = (pVVar12->zeroVector).x;
          fVar11 = (pVVar12->zeroVector).y;
          fVar7 = (pVVar12->zeroVector).z;
        }
        uVar15 = axisOrigin->x;
        uVar16 = axisOrigin->y;
        fVar9 = -(fVar11 * (float)uVar16 + fVar10 * (float)uVar15 + fVar7 * axisOrigin->z);
      }
      (__return_storage_ptr__->m_Normal).x = fVar10;
      (__return_storage_ptr__->m_Normal).y = fVar11;
      (__return_storage_ptr__->m_Normal).z = fVar7;
      __return_storage_ptr__->m_Distance = fVar9;
      return __return_storage_ptr__;
    }
  }
DAT_?:
  FUN_?();
  pcVar17 = (code *)swi(3);
  pPVar18 = (Plane *)(*pcVar17)();
  return pPVar18;
}


/* Int32 GetClosestPtInFront(Plane, List`1[UnityEngine.Vector3]) */

int32_t Assembly-CSharp.dll::RTG::PlaneEx::PlaneEx_GetClosestPtInFront(Plane *plane,List_1_UnityEngine_Vector3_ *points,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Count__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  fVar1 = 3.4028235e+38;
  uVar2 = 0xffffffff;
  uVar3 = 0;
  if (points != (List_1_UnityEngine_Vector3_ *)0x0) {
    uVar4 = (points->fields)._size;
    lVar5 = 0;
    while( true ) {
      if ((int)uVar4 <= (int)uVar3) {
        return uVar2;
      }
      if (uVar4 <= uVar3) {
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException((MethodInfo *)0x0);
        pcVar6 = (code *)swi(3);
        iVar7 = (*pcVar6)();
        return iVar7;
      }
      pVVar8 = (points->fields)._items;
      if (pVVar8 == (Vector3__Array *)0x0) break;
      if ((uint)pVVar8->max_length <= uVar3) {
        FUN_?();
        pcVar6 = (code *)swi(3);
        iVar7 = (*pcVar6)();
        return iVar7;
      }
      uVar9 = *(undefined8 *)((longlong)&pVVar8->vector[0].x + lVar5);
      uVar10 = (plane->m_Normal).x;
      uVar11 = (plane->m_Normal).y;
      fVar12 = (float)((ulonglong)uVar9 >> 0x20) * (float)uVar11 + (float)uVar9 * (float)uVar10 + *(float *)((longlong)&pVVar8->vector[0].z + lVar5) * (plane->m_Normal).z + plane->m_Distance;
      if ((0.0 < fVar12) && (fVar12 < fVar1)) {
        fVar1 = fVar12;
        uVar2 = uVar3;
      }
      uVar3 = uVar3 + 1;
      lVar5 = lVar5 + 0xc;
    }
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  iVar7 = (*pcVar6)();
  return iVar7;
}


/* Int32 GetClosestPtInFrontOrOnPlane(Plane, List`1[UnityEngine.Vector3]) */

int32_t Assembly-CSharp.dll::RTG::PlaneEx::PlaneEx_GetClosestPtInFrontOrOnPlane(Plane *plane,List_1_UnityEngine_Vector3_ *points,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Count__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  fVar1 = 3.4028235e+38;
  uVar2 = 0xffffffff;
  uVar3 = 0;
  if (points != (List_1_UnityEngine_Vector3_ *)0x0) {
    uVar4 = (points->fields)._size;
    lVar5 = 0;
    while( true ) {
      if ((int)uVar4 <= (int)uVar3) {
        return uVar2;
      }
      if (uVar4 <= uVar3) {
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException((MethodInfo *)0x0);
        pcVar6 = (code *)swi(3);
        iVar7 = (*pcVar6)();
        return iVar7;
      }
      pVVar8 = (points->fields)._items;
      if (pVVar8 == (Vector3__Array *)0x0) break;
      if ((uint)pVVar8->max_length <= uVar3) {
        FUN_?();
        pcVar6 = (code *)swi(3);
        iVar7 = (*pcVar6)();
        return iVar7;
      }
      uVar9 = *(undefined8 *)((longlong)&pVVar8->vector[0].x + lVar5);
      uVar10 = (plane->m_Normal).x;
      uVar11 = (plane->m_Normal).y;
      fVar12 = (float)((ulonglong)uVar9 >> 0x20) * (float)uVar11 + (float)uVar9 * (float)uVar10 + *(float *)((longlong)&pVVar8->vector[0].z + lVar5) * (plane->m_Normal).z + plane->m_Distance;
      if (((0.0 <= fVar12) && (fVar12 < fVar1)) || (ABS(fVar12) < 0.0001)) {
        fVar1 = fVar12;
        uVar2 = uVar3;
      }
      uVar3 = uVar3 + 1;
      lVar5 = lVar5 + 0xc;
    }
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  iVar7 = (*pcVar6)();
  return iVar7;
}


/* Int32 GetFurthestPtBehind(Plane, List`1[UnityEngine.Vector3]) */

int32_t Assembly-CSharp.dll::RTG::PlaneEx::PlaneEx_GetFurthestPtBehind(Plane *plane,List_1_UnityEngine_Vector3_ *points,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Count__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  fVar1 = 3.4028235e+38;
  uVar2 = 0xffffffff;
  uVar3 = 0;
  if (points != (List_1_UnityEngine_Vector3_ *)0x0) {
    uVar4 = (points->fields)._size;
    lVar5 = 0;
    while( true ) {
      if ((int)uVar4 <= (int)uVar3) {
        return uVar2;
      }
      if (uVar4 <= uVar3) {
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException((MethodInfo *)0x0);
        pcVar6 = (code *)swi(3);
        iVar7 = (*pcVar6)();
        return iVar7;
      }
      pVVar8 = (points->fields)._items;
      if (pVVar8 == (Vector3__Array *)0x0) break;
      if ((uint)pVVar8->max_length <= uVar3) {
        FUN_?();
        pcVar6 = (code *)swi(3);
        iVar7 = (*pcVar6)();
        return iVar7;
      }
      uVar9 = *(undefined8 *)((longlong)&pVVar8->vector[0].x + lVar5);
      uVar10 = (plane->m_Normal).x;
      uVar11 = (plane->m_Normal).y;
      fVar12 = (float)((ulonglong)uVar9 >> 0x20) * (float)uVar11 + (float)uVar9 * (float)uVar10 + *(float *)((longlong)&pVVar8->vector[0].z + lVar5) * (plane->m_Normal).z + plane->m_Distance;
      if ((fVar12 < 0.0) && (fVar12 < fVar1)) {
        fVar1 = fVar12;
        uVar2 = uVar3;
      }
      uVar3 = uVar3 + 1;
      lVar5 = lVar5 + 0xc;
    }
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  iVar7 = (*pcVar6)();
  return iVar7;
}


/* Int32 GetFurthestPtInFront(Plane, List`1[UnityEngine.Vector3]) */

int32_t Assembly-CSharp.dll::RTG::PlaneEx::PlaneEx_GetFurthestPtInFront(Plane *plane,List_1_UnityEngine_Vector3_ *points,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Count__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  fVar1 = -3.4028235e+38;
  uVar2 = 0xffffffff;
  uVar3 = 0;
  if (points != (List_1_UnityEngine_Vector3_ *)0x0) {
    uVar4 = (points->fields)._size;
    lVar5 = 0;
    while( true ) {
      if ((int)uVar4 <= (int)uVar3) {
        return uVar2;
      }
      if (uVar4 <= uVar3) {
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException((MethodInfo *)0x0);
        pcVar6 = (code *)swi(3);
        iVar7 = (*pcVar6)();
        return iVar7;
      }
      pVVar8 = (points->fields)._items;
      if (pVVar8 == (Vector3__Array *)0x0) break;
      if ((uint)pVVar8->max_length <= uVar3) {
        FUN_?();
        pcVar6 = (code *)swi(3);
        iVar7 = (*pcVar6)();
        return iVar7;
      }
      uVar9 = *(undefined8 *)((longlong)&pVVar8->vector[0].x + lVar5);
      uVar10 = (plane->m_Normal).x;
      uVar11 = (plane->m_Normal).y;
      fVar12 = (float)((ulonglong)uVar9 >> 0x20) * (float)uVar11 + (float)uVar9 * (float)uVar10 + *(float *)((longlong)&pVVar8->vector[0].z + lVar5) * (plane->m_Normal).z + plane->m_Distance;
      if ((0.0 < fVar12) && (fVar1 < fVar12)) {
        fVar1 = fVar12;
        uVar2 = uVar3;
      }
      uVar3 = uVar3 + 1;
      lVar5 = lVar5 + 0xc;
    }
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  iVar7 = (*pcVar6)();
  return iVar7;
}


/* Plane InvertNormal(Plane) */

Plane * Assembly-CSharp.dll::RTG::PlaneEx::PlaneEx_InvertNormal(Plane *__return_storage_ptr__,Plane *plane,MethodInfo *method)

{
  VStack_1.x = (plane->m_Normal).x;
  VStack_1.y = (plane->m_Normal).y;
  VStack_1.z = -(plane->m_Normal).z;
  fVar2 = plane->m_Distance;
  (__return_storage_ptr__->m_Normal).x = 0.0;
  (__return_storage_ptr__->m_Normal).y = 0.0;
  *(undefined8 *)&(__return_storage_ptr__->m_Normal).z = 0;
  VStack_1._0_8_ = VStack_1._0_8_ ^ 0x8000000080000000;
  UnityEngine.CoreModule.dll::UnityEngine::Plane::Plane__ctor_1(__return_storage_ptr__,&VStack_1,-fVar2,in_R9);
  return __return_storage_ptr__;
}


/* List`1[UnityEngine.Vector3] ProjectAllPoints(Plane, List`1[UnityEngine.Vector3]) */

List_1_UnityEngine_Vector3_ * Assembly-CSharp.dll::RTG::PlaneEx::PlaneEx_ProjectAllPoints(Plane *plane,List_1_UnityEngine_Vector3_ *points,MethodInfo *method)

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
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__GetEnumerator__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List_int_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Count__);
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
    this = (List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)FUN_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Vector3>);
    FUN_?(this,MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List__);
  }
  else {
    iVar3 = (points->fields)._size;
    this = (List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)FUN_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Vector3>);
    FUN_?(this,iVar3,MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List_int_);
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
    ppLStack_10 = (List_1_UnityEngine_Vector3_ **)((ulonglong)(uint)(points->fields)._version << 0x20);
    uStack_11 = 0;
    uStack_12 = 0;
    lStack_13 = (longlong)ppLStack_10;
    uStack_14 = 0;
    uStack_15 = 0;
    uStack_5 = 0;
    ppLStack_10 = &pLStack_16;
    pLStack_16 = points;
    while (cVar17 = FUN_?(&pLStack_16,MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::Vector3>__MoveNext__), pMVar18 = MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_, cVar17 != '\0') {
      fVar19 = (plane->m_Normal).x;
      fVar20 = (plane->m_Normal).y;
      fVar21 = (plane->m_Normal).z;
      fVar22 = fVar21 * (float)uStack_15 + fVar19 * (float)uStack_14 + fVar20 * uStack_14._4_4_ + plane->m_Distance;
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
        mscorlib.dll::System::Collections::Generic::List`1[RTG::PlaneIdHelper+PlaneQuadrantInfo]::List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__AddWithResize(this,&PStack_25,pMVar18->klass->rgctx_data[0xe].method);
      }
    }
  }
  return (List_1_UnityEngine_Vector3_ *)this;
}


/* Vector3 ProjectPoint(Plane, Vector3) */

Vector3 * Assembly-CSharp.dll::RTG::PlaneEx::PlaneEx_ProjectPoint(Vector3 *__return_storage_ptr__,Plane *plane,Vector3 *pt,MethodInfo *method)

{
  uVar1 = pt->x;
  uVar2 = pt->y;
  uVar3 = (plane->m_Normal).x;
  uVar4 = (plane->m_Normal).y;
  fVar5 = (float)uVar2 * (float)uVar4 + (float)uVar1 * (float)uVar3 + pt->z * (plane->m_Normal).z + plane->m_Distance;
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

