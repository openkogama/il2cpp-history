
/* Boolean ContainsPoint(Vector3) */

bool Assembly-CSharp.dll::RTG::AABB::AABB_ContainsPoint
               (AABB *this,Vector3 *point,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__BoxMath);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uVar1._0_4_ = (this->_center).x;
  uVar1._4_4_ = (this->_center).y;
  fVar2 = (this->_center).z;
  uVar3._0_4_ = (this->_size).x;
  uVar3._4_4_ = (this->_size).y;
  fVar4 = (this->_size).z;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Quaternion);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  VStack_5.x = 0.0;
  VStack_5.y = 0.0;
  pQVar6 = TypeInfo__UnityEngine__Quaternion->static_fields;
  uVar7._0_4_ = (pQVar6->identityQuaternion).x;
  uVar7._4_4_ = (pQVar6->identityQuaternion).y;
  uVar8._0_4_ = (pQVar6->identityQuaternion).z;
  uVar8._4_4_ = (pQVar6->identityQuaternion).w;
  if (*(int *)&(TypeInfo__RTG__BoxMath->_1).field_0x1c == 0) {
    FUN_?();
  }
  VStack_5.z = point->z;
  VStack_9.x = VStack_5.x;
  VStack_9.y = VStack_5.y;
  VStack_5.x = point->x;
  VStack_5.y = point->y;
  VStack_9.z = 0.0;
  VStack_10._0_8_ = uVar3;
  VStack_10.z = fVar4;
  VStack_11._0_8_ = uVar1;
  VStack_11.z = fVar2;
  aQStack_12[0]._0_8_ = uVar7;
  aQStack_12[0]._8_8_ = uVar8;
  bVar13 = BoxMath::BoxMath_ContainsPoint
                    (&VStack_5,&VStack_11,&VStack_10,aQStack_12,(BoxEpsilon *)&VStack_9,
                     (MethodInfo *)0x0);
  return bVar13;
}


/* Void Encapsulate(Vector3) */

void Assembly-CSharp.dll::RTG::AABB::AABB_Encapsulate(AABB *this,Vector3 *point,MethodInfo *method)

{
  uVar1 = (this->_size).x;
  uVar2 = (this->_size).y;
  uVar3 = (this->_center).x;
  uVar4 = (this->_center).y;
  fVar5 = (float)uVar3 - (float)uVar1 * _UNK_?;
  aVStack_6[0].z = (this->_center).z - (this->_size).z * _UNK_?;
  fVar7 = (float)uVar4 - (float)uVar2 * _UNK_?;
  uVar8 = (this->_size).x;
  uVar9 = (this->_size).y;
  fVar10 = (float)uVar8 * _UNK_? + (float)uVar3;
  fVar11 = (float)uVar9 * _UNK_? + (float)uVar4;
  fVar12 = (this->_size).z * _UNK_? + (this->_center).z;
  if (point->x <= fVar5 && fVar5 != point->x) {
    fVar5 = point->x;
  }
  if (fVar10 < point->x) {
    fVar10 = point->x;
  }
  if (point->y <= fVar7 && fVar7 != point->y) {
    fVar7 = point->y;
  }
  if (fVar11 < point->y) {
    fVar11 = point->y;
  }
  if (point->z <= aVStack_6[0].z && aVStack_6[0].z != point->z) {
    aVStack_6[0].z = point->z;
  }
  if (fVar12 < point->z) {
    fVar12 = point->z;
  }
  aVStack_6[0].y = fVar7;
  aVStack_6[0].x = fVar5;
  this->_isValid = 1;
  AABB_set_Min(this,aVStack_6,(MethodInfo *)0x0);
  aVStack_6[0].y = fVar11;
  aVStack_6[0].x = fVar10;
  aVStack_6[0].z = fVar12;
  AABB_set_Max(this,aVStack_6,(MethodInfo *)0x0);
  return;
}


/* Void Encapsulate(IEnumerable`1[UnityEngine.Vector3]) */

void Assembly-CSharp.dll::RTG::AABB::AABB_Encapsulate_1
               (AABB *this,IEnumerable_1_UnityEngine_Vector3_ *points,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__IDisposable);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__IEnumerable<UnityEngine::Vector3>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__IEnumerator<UnityEngine::Vector3>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__IEnumerator);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (points == (IEnumerable_1_UnityEngine_Vector3_ *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  plStackX_10 = (longlong *)
                FUN_?(0,
                              TypeInfo__System__Collections__Generic__IEnumerable<UnityEngine::Vector3>
                              ,points);
  uStack_2 = 0;
  pplStack_3 = &plStackX_10;
  do {
    if (plStackX_10 == (longlong *)0x0) {
code_?:
      FUN_?();
      FUN_?();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    cVar4 = FUN_?(0,TypeInfo__System__Collections__IEnumerator);
    plVar5 = plStackX_10;
    if (cVar4 == '\0') {
      if (plStackX_10 != (longlong *)0x0) {
        FUN_?(0,TypeInfo__System__IDisposable,plStackX_10);
      }
      return;
    }
    if (plStackX_10 == (longlong *)0x0) {
      FUN_?();
      goto code_?;
    }
    lVar6 = *plStackX_10;
    uVar7 = 0;
    if (*(ushort *)(lVar6 + 0x12e) != 0) {
      do {
        if (*(IEnumerator_1_UnityEngine_Vector3___Class **)
             (*(longlong *)(lVar6 + 0xb0) + (ulonglong)uVar7 * 0x10) ==
            TypeInfo__System__Collections__Generic__IEnumerator<UnityEngine::Vector3>) {
          puVar8 = (undefined8 *)
                   ((longlong)*(int *)(*(longlong *)(lVar6 + 0xb0) + 8 + (ulonglong)uVar7 * 0x10) *
                    0x10 + 0x138 + lVar6);
          goto code_?;
        }
        uVar7 = uVar7 + 1;
      } while (uVar7 < *(ushort *)(lVar6 + 0x12e));
    }
    puVar8 = (undefined8 *)
             FUN_?(plStackX_10,
                           TypeInfo__System__Collections__Generic__IEnumerator<UnityEngine::Vector3>
                           ,0);
code_?:
    puVar8 = (undefined8 *)(*(code *)*puVar8)(auStack_9,plVar5);
    VStack_10._0_8_ = *puVar8;
    VStack_10.z = *(float *)(puVar8 + 1);
    AABB_Encapsulate(this,&VStack_10,(MethodInfo *)0x0);
  } while( true );
}


/* Void Encapsulate(AABB) */

void Assembly-CSharp.dll::RTG::AABB::AABB_Encapsulate_2(AABB *this,AABB *aabb,MethodInfo *method)

{
  uVar1 = (this->_size).x;
  uVar2 = (this->_size).y;
  uVar3 = (this->_center).x;
  uVar4 = (this->_center).y;
  fVar5 = (float)uVar3 - (float)uVar1 * _UNK_?;
  aVStack_6[0].z = (this->_center).z - (this->_size).z * _UNK_?;
  fVar7 = (float)uVar4 - (float)uVar2 * _UNK_?;
  uVar8 = (this->_center).x;
  uVar9 = (this->_center).y;
  fVar10 = (float)uVar1 * _UNK_? + (float)uVar8;
  fVar11 = (float)uVar2 * _UNK_? + (float)uVar9;
  fVar12 = (this->_size).z * _UNK_? + (this->_center).z;
  uVar13 = (aabb->_size).x;
  uVar14 = (aabb->_size).y;
  uVar15 = (aabb->_center).x;
  uVar16 = (aabb->_center).y;
  fVar17 = (float)uVar15 - (float)uVar13 * _UNK_?;
  fVar18 = (float)uVar16 - (float)uVar14 * _UNK_?;
  fVar19 = (aabb->_center).z - (aabb->_size).z * _UNK_?;
  fVar20 = (float)uVar13 * _UNK_? + (float)uVar15;
  fVar21 = (float)uVar14 * _UNK_? + (float)uVar16;
  fVar22 = (aabb->_size).z * _UNK_? + (aabb->_center).z;
  if (fVar17 < fVar5) {
    fVar5 = fVar17;
  }
  if (fVar18 < fVar7) {
    fVar7 = fVar18;
  }
  if (fVar19 < aVStack_6[0].z) {
    aVStack_6[0].z = fVar19;
  }
  if (fVar10 < fVar20) {
    fVar10 = fVar20;
  }
  if (fVar11 < fVar21) {
    fVar11 = fVar21;
  }
  if (fVar12 < fVar22) {
    fVar12 = fVar22;
  }
  aVStack_6[0].y = fVar7;
  aVStack_6[0].x = fVar5;
  this->_isValid = 1;
  AABB_set_Min(this,aVStack_6,(MethodInfo *)0x0);
  aVStack_6[0].y = fVar11;
  aVStack_6[0].x = fVar10;
  aVStack_6[0].z = fVar12;
  AABB_set_Max(this,aVStack_6,(MethodInfo *)0x0);
  return;
}


/* List`1[UnityEngine.Vector3] GetCenterAndCornerPoints() */

List_1_UnityEngine_Vector3_ *
Assembly-CSharp.dll::RTG::AABB::AABB_GetCenterAndCornerPoints(AABB *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)
            AABB_GetCornerPoints(this,(MethodInfo *)0x0);
  pMVar1 = 
  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_;
  if (this_00 != (List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)0x0) {
    PStack_2.Quadrant = (int32_t)(this->_center).x;
    PStack_2.FirstAxisSign = (int32_t)(this->_center).y;
    PStack_2.SecondAxisSign = (int32_t)(this->_center).z;
    piVar3 = &(this_00->fields)._version;
    *piVar3 = *piVar3 + 1;
    pPVar4 = (this_00->fields)._items;
    if (pPVar4 != (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) {
      uVar5 = (this_00->fields)._size;
      if ((uint)pPVar4->max_length <= uVar5) {
        mscorlib.dll::System::Collections::Generic::List`1[RTG::PlaneIdHelper+PlaneQuadrantInfo]::
        List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__AddWithResize
                  (this_00,&PStack_2,pMVar1->klass->rgctx_data[0xe].method);
        return (List_1_UnityEngine_Vector3_ *)this_00;
      }
      (this_00->fields)._size = uVar5 + 1;
      if (uVar5 < (uint)pPVar4->max_length) {
        pPVar4->vector[(int)uVar5].Quadrant = PStack_2.Quadrant;
        pPVar4->vector[(int)uVar5].FirstAxisSign = PStack_2.FirstAxisSign;
        pPVar4->vector[(int)uVar5].SecondAxisSign = PStack_2.SecondAxisSign;
        return (List_1_UnityEngine_Vector3_ *)this_00;
      }
      FUN_?();
      pcVar6 = (code *)swi(3);
      pLVar7 = (List_1_UnityEngine_Vector3_ *)(*pcVar6)();
      return pLVar7;
    }
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  pLVar7 = (List_1_UnityEngine_Vector3_ *)(*pcVar6)();
  return pLVar7;
}


/* List`1[UnityEngine.Vector3] GetCornerPoints() */

List_1_UnityEngine_Vector3_ *
Assembly-CSharp.dll::RTG::AABB::AABB_GetCornerPoints(AABB *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__BoxMath);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uVar1._0_4_ = (this->_center).x;
  uVar1._4_4_ = (this->_center).y;
  fVar2 = (this->_center).z;
  uVar3._0_4_ = (this->_size).x;
  uVar3._4_4_ = (this->_size).y;
  fVar4 = (this->_size).z;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Quaternion);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pQVar5 = TypeInfo__UnityEngine__Quaternion->static_fields;
  uVar6._0_4_ = (pQVar5->identityQuaternion).x;
  uVar6._4_4_ = (pQVar5->identityQuaternion).y;
  uVar7._0_4_ = (pQVar5->identityQuaternion).z;
  uVar7._4_4_ = (pQVar5->identityQuaternion).w;
  if (*(int *)&(TypeInfo__RTG__BoxMath->_1).field_0x1c == 0) {
    FUN_?();
  }
  VStack_8._0_8_ = uVar3;
  VStack_8.z = fVar4;
  VStack_9._0_8_ = uVar1;
  VStack_9.z = fVar2;
  aQStack_10[0]._0_8_ = uVar6;
  aQStack_10[0]._8_8_ = uVar7;
  pLVar11 = BoxMath::BoxMath_CalcBoxCornerPoints(&VStack_9,&VStack_8,aQStack_10,(MethodInfo *)0x0);
  return pLVar11;
}


/* AABB GetInvalid() */

AABB * Assembly-CSharp.dll::RTG::AABB::AABB_GetInvalid
                 (AABB *__return_storage_ptr__,MethodInfo *method)

{
  (__return_storage_ptr__->_size).x = 0.0;
  (__return_storage_ptr__->_size).y = 0.0;
  *(undefined8 *)&(__return_storage_ptr__->_size).z = 0;
  (__return_storage_ptr__->_center).y = 0.0;
  (__return_storage_ptr__->_center).z = 0.0;
  *(undefined4 *)&__return_storage_ptr__->_isValid = 0;
  return __return_storage_ptr__;
}


/* List`1[UnityEngine.Vector2] GetScreenCenterAndCornerPoints(Camera) */

List_1_UnityEngine_Vector2_ *
Assembly-CSharp.dll::RTG::AABB::AABB_GetScreenCenterAndCornerPoints
          (AABB *this,Camera *camera,MethodInfo *method)

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
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__List_int_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::Vector2>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = AABB_GetCenterAndCornerPoints(this,(MethodInfo *)0x0);
  if (pLVar1 == (List_1_UnityEngine_Vector3_ *)0x0) {
    FUN_?();
code_?:
    uVar2 = func_?(&UNK_?);
    FUN_?(uVar2);
code_?:
    FUN_?();
code_?:
    FUN_?();
code_?:
    FUN_?();
code_?:
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)camera,(MethodInfo *)0x0);
  }
  else {
    iVar3 = (pLVar1->fields)._size;
    pLVar4 = (List_1_UnityEngine_Vector2_ *)
              FUN_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Vector2>);
    FUN_?(pLVar4,iVar3,
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__List_int_);
    if (iRam_? != 0) {
      uVar5 = (uint)((ulonglong)&uStack_6 >> 0xc);
      uVar7 = (ulonglong)((uVar5 & 0x1fffff) >> 6);
      do {
        uVar8 = *(ulonglong *)(uVar7 * 8 + 0xADDR);
        puVar9 = (ulonglong *)(uVar7 * 8 + 0xADDR);
        LOCK();
        bVar10 = uVar8 == *puVar9;
        if (bVar10) {
          *puVar9 = uVar8 | 1L << (uVar5 & 0x3f);
        }
        UNLOCK();
      } while (!bVar10);
    }
    ppLStack_11 = (List_1_UnityEngine_Vector3_ **)
                  ((ulonglong)(uint)(pLVar1->fields)._version << 0x20);
    uStack_12 = 0;
    uStack_13 = 0;
    lStack_14 = (longlong)ppLStack_11;
    uStack_15 = 0;
    uStack_16 = 0;
    uStack_6 = 0;
    ppLStack_11 = &pLStack_17;
    pLStack_17 = pLVar1;
    while( true ) {
      cVar18 = FUN_?(&pLStack_17);
      if (cVar18 == '\0') {
        return pLVar4;
      }
      if (camera == (Camera *)0x0) break;
      uStack_19 = (undefined4)uStack_16;
      uStack_20 = uStack_15;
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Camera>_UnityEngine__Camera_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      VStack_21.x = 0.0;
      VStack_21.y = 0.0;
      uStack_22 = 0;
      pvVar23 = (camera->fields)._._._.m_CachedPtr;
      if (pvVar23 == (void *)0x0) goto code_?;
      pcVar24 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar24 = (code *)FUN_?(&UNK_?), pcVar24 == (code *)0x0))
      goto code_?;
      pcRam_? = pcVar24;
      (*pcRam_?)(pvVar23,&uStack_20,2,&VStack_21);
      pMVar25 = 
      MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
      ;
      if (pLVar4 == (List_1_UnityEngine_Vector2_ *)0x0) goto code_?;
      piVar26 = &(pLVar4->fields)._version;
      *piVar26 = *piVar26 + 1;
      pVVar27 = (pLVar4->fields)._items;
      uVar5 = (pLVar4->fields)._size;
      if (pVVar27 == (Vector2__Array *)0x0) goto code_?;
      if (uVar5 < (uint)pVVar27->max_length) {
        (pLVar4->fields)._size = uVar5 + 1;
        if ((uint)pVVar27->max_length <= uVar5) goto code_?;
        pVVar27->vector[(int)uVar5].x = VStack_21.x;
        pVVar27->vector[(int)uVar5].y = VStack_21.y;
      }
      else {
        mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
        List_1_UnityEngine_Vector2__AddWithResize
                  (pLVar4,VStack_21,pMVar25->klass->rgctx_data[0xe].method);
      }
    }
  }
  FUN_?();
  FUN_?();
  pcVar24 = (code *)swi(3);
  pLVar4 = (List_1_UnityEngine_Vector2_ *)(*pcVar24)();
  return pLVar4;
}


/* List`1[UnityEngine.Vector2] GetScreenCornerPoints(Camera) */

List_1_UnityEngine_Vector2_ *
Assembly-CSharp.dll::RTG::AABB::AABB_GetScreenCornerPoints
          (AABB *this,Camera *camera,MethodInfo *method)

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
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__List_int_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::Vector2>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = AABB_GetCornerPoints(this,(MethodInfo *)0x0);
  if (pLVar1 == (List_1_UnityEngine_Vector3_ *)0x0) {
    FUN_?();
code_?:
    uVar2 = func_?(&UNK_?);
    FUN_?(uVar2);
code_?:
    FUN_?();
code_?:
    FUN_?();
code_?:
    FUN_?();
code_?:
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)camera,(MethodInfo *)0x0);
  }
  else {
    iVar3 = (pLVar1->fields)._size;
    pLVar4 = (List_1_UnityEngine_Vector2_ *)
              FUN_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Vector2>);
    FUN_?(pLVar4,iVar3,
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__List_int_);
    if (iRam_? != 0) {
      uVar5 = (uint)((ulonglong)&uStack_6 >> 0xc);
      uVar7 = (ulonglong)((uVar5 & 0x1fffff) >> 6);
      do {
        uVar8 = *(ulonglong *)(uVar7 * 8 + 0xADDR);
        puVar9 = (ulonglong *)(uVar7 * 8 + 0xADDR);
        LOCK();
        bVar10 = uVar8 == *puVar9;
        if (bVar10) {
          *puVar9 = uVar8 | 1L << (uVar5 & 0x3f);
        }
        UNLOCK();
      } while (!bVar10);
    }
    ppLStack_11 = (List_1_UnityEngine_Vector3_ **)
                  ((ulonglong)(uint)(pLVar1->fields)._version << 0x20);
    uStack_12 = 0;
    uStack_13 = 0;
    lStack_14 = (longlong)ppLStack_11;
    uStack_15 = 0;
    uStack_16 = 0;
    uStack_6 = 0;
    ppLStack_11 = &pLStack_17;
    pLStack_17 = pLVar1;
    while( true ) {
      cVar18 = FUN_?(&pLStack_17);
      if (cVar18 == '\0') {
        return pLVar4;
      }
      if (camera == (Camera *)0x0) break;
      uStack_19 = (undefined4)uStack_16;
      uStack_20 = uStack_15;
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Camera>_UnityEngine__Camera_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      VStack_21.x = 0.0;
      VStack_21.y = 0.0;
      uStack_22 = 0;
      pvVar23 = (camera->fields)._._._.m_CachedPtr;
      if (pvVar23 == (void *)0x0) goto code_?;
      pcVar24 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar24 = (code *)FUN_?(&UNK_?), pcVar24 == (code *)0x0))
      goto code_?;
      pcRam_? = pcVar24;
      (*pcRam_?)(pvVar23,&uStack_20,2,&VStack_21);
      pMVar25 = 
      MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
      ;
      if (pLVar4 == (List_1_UnityEngine_Vector2_ *)0x0) goto code_?;
      piVar26 = &(pLVar4->fields)._version;
      *piVar26 = *piVar26 + 1;
      pVVar27 = (pLVar4->fields)._items;
      uVar5 = (pLVar4->fields)._size;
      if (pVVar27 == (Vector2__Array *)0x0) goto code_?;
      if (uVar5 < (uint)pVVar27->max_length) {
        (pLVar4->fields)._size = uVar5 + 1;
        if ((uint)pVVar27->max_length <= uVar5) goto code_?;
        pVVar27->vector[(int)uVar5].x = VStack_21.x;
        pVVar27->vector[(int)uVar5].y = VStack_21.y;
      }
      else {
        mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
        List_1_UnityEngine_Vector2__AddWithResize
                  (pLVar4,VStack_21,pMVar25->klass->rgctx_data[0xe].method);
      }
    }
  }
  FUN_?();
  FUN_?();
  pcVar24 = (code *)swi(3);
  pLVar4 = (List_1_UnityEngine_Vector2_ *)(*pcVar24)();
  return pLVar4;
}


/* Rect GetScreenRectangle(Camera) */

Rect * Assembly-CSharp.dll::RTG::AABB::AABB_GetScreenRectangle
                 (Rect *__return_storage_ptr__,AABB *this,Camera *camera,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = AABB_GetScreenCornerPoints(this,camera,(MethodInfo *)0x0);
  if (pLVar1 != (List_1_UnityEngine_Vector2_ *)0x0) {
    if ((pLVar1->fields)._size != 0) {
      pVVar2 = (pLVar1->fields)._items;
      if (pVVar2 == (Vector2__Array *)0x0) goto code_?;
      if ((int)pVVar2->max_length == 0) {
code_?:
        FUN_?();
        pcVar3 = (code *)swi(3);
        pRVar4 = (Rect *)(*pcVar3)();
        return pRVar4;
      }
      fVar5 = pVVar2->vector[0].x;
      fVar6 = pVVar2->vector[0].y;
      uVar7 = (pLVar1->fields)._size;
      pVVar2 = (pLVar1->fields)._items;
      uVar8 = 1;
      lVar9 = 0x28;
      fVar10 = fVar6;
      fVar11 = fVar5;
      while( true ) {
        if ((int)uVar7 <= (int)uVar8) {
          __return_storage_ptr__->m_XMin = fVar5;
          __return_storage_ptr__->m_YMin = fVar10;
          __return_storage_ptr__->m_Width = fVar11 - fVar5;
          __return_storage_ptr__->m_Height = fVar6 - fVar10;
          return __return_storage_ptr__;
        }
        if (uVar7 <= uVar8) break;
        if (pVVar2 == (Vector2__Array *)0x0) goto code_?;
        if ((uint)pVVar2->max_length <= uVar8) goto code_?;
        fVar12 = *(float *)((longlong)&((Vector2__Array *)(pVVar2->vector + -4))->klass + lVar9);
        fVar13 = *(float *)((longlong)pVVar2->vector + lVar9 + -0x1c);
        if (fVar12 <= fVar5) {
          fVar5 = fVar12;
        }
        if (fVar13 <= fVar10) {
          fVar10 = fVar13;
        }
        if (uVar7 <= uVar8) break;
        if ((uint)pVVar2->max_length <= uVar8) goto code_?;
        if (fVar11 <= fVar12) {
          fVar11 = fVar12;
        }
        if (fVar6 <= fVar13) {
          fVar6 = fVar13;
        }
        uVar8 = uVar8 + 1;
        lVar9 = lVar9 + 8;
      }
    }
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
              ((MethodInfo *)0x0);
    pcVar3 = (code *)swi(3);
    pRVar4 = (Rect *)(*pcVar3)();
    return pRVar4;
  }
code_?:
  FUN_?();
  pcVar3 = (code *)swi(3);
  pRVar4 = (Rect *)(*pcVar3)();
  return pRVar4;
}


/* Matrix4x4 GetUnitBoxTransform() */

Matrix4x4 *
Assembly-CSharp.dll::RTG::AABB::AABB_GetUnitBoxTransform
          (Matrix4x4 *__return_storage_ptr__,AABB *this,MethodInfo *method)

{
  uVar1._0_4_ = (this->_center).x;
  uVar1._4_4_ = (this->_center).y;
  fVar2 = (this->_center).z;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Quaternion);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  fStack_3 = (this->_size).z;
  uStack_4._0_4_ = (this->_size).x;
  uStack_4._4_4_ = (this->_size).y;
  pQVar5 = TypeInfo__UnityEngine__Quaternion->static_fields;
  uStack_6._0_4_ = (pQVar5->identityQuaternion).x;
  uStack_6._4_4_ = (pQVar5->identityQuaternion).y;
  uStack_7._0_4_ = (pQVar5->identityQuaternion).z;
  uStack_7._4_4_ = (pQVar5->identityQuaternion).w;
  uStack_8 = 0;
  uStack_9 = 0;
  uStack_10 = 0;
  uStack_11 = 0;
  uStack_12 = 0;
  uStack_13 = 0;
  uStack_14 = 0;
  uStack_15 = 0;
  pcVar16 = pcRam_?;
  uStack_17 = uVar1;
  fStack_18 = fVar2;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar16 = (code *)FUN_?(&UNK_?), pcVar16 == (code *)0x0)) {
    uVar1 = func_?(&UNK_?);
    FUN_?(uVar1,0);
    pcVar16 = (code *)swi(3);
    pMVar19 = (Matrix4x4 *)(*pcVar16)();
    return pMVar19;
  }
  pcRam_? = pcVar16;
  (*pcRam_?)(&uStack_17,&uStack_6,&uStack_4,&uStack_8);
  __return_storage_ptr__->m00 = (float)(undefined4)uStack_8;
  __return_storage_ptr__->m10 = (float)uStack_8._4_4_;
  __return_storage_ptr__->m20 = (float)(undefined4)uStack_9;
  __return_storage_ptr__->m30 = (float)uStack_9._4_4_;
  __return_storage_ptr__->m01 = (float)(undefined4)uStack_10;
  __return_storage_ptr__->m11 = (float)uStack_10._4_4_;
  __return_storage_ptr__->m21 = (float)(undefined4)uStack_11;
  __return_storage_ptr__->m31 = (float)uStack_11._4_4_;
  __return_storage_ptr__->m02 = (float)(undefined4)uStack_12;
  __return_storage_ptr__->m12 = (float)uStack_12._4_4_;
  __return_storage_ptr__->m22 = (float)(undefined4)uStack_13;
  __return_storage_ptr__->m32 = (float)uStack_13._4_4_;
  __return_storage_ptr__->m03 = (float)(undefined4)uStack_14;
  __return_storage_ptr__->m13 = (float)uStack_14._4_4_;
  __return_storage_ptr__->m23 = (float)(undefined4)uStack_15;
  __return_storage_ptr__->m33 = (float)uStack_15._4_4_;
  return __return_storage_ptr__;
}


/* Void Inflate(Vector3) */

void Assembly-CSharp.dll::RTG::AABB::AABB_Inflate_1(AABB *this,Vector3 *amount,MethodInfo *method)

{
  uVar1 = (this->_size).x;
  uVar2 = (this->_size).y;
  uVar3 = amount->x;
  fVar4 = amount->y;
  fVar5 = amount->z;
  (this->_size).x = (float)uVar3 + (float)uVar1;
  (this->_size).y = fVar4 + (float)uVar2;
  (this->_size).z = fVar5 + (this->_size).z;
  return;
}


/* Void RecalculateCenterAndSize(Vector3, Vector3) */

void Assembly-CSharp.dll::RTG::AABB::AABB_RecalculateCenterAndSize
               (AABB *this,Vector3 *min,Vector3 *max,MethodInfo *method)

{
  uVar1 = min->x;
  uVar2 = min->y;
  uVar3 = max->x;
  fVar4 = (max->z + min->z) * _UNK_?;
  fVar5 = (max->y + (float)uVar2) * _UNK_?;
  fVar6 = max->y;
  uVar7 = max->x;
  (this->_center).x = ((float)uVar3 + (float)uVar1) * _UNK_?;
  (this->_center).y = fVar5;
  (this->_center).z = fVar4;
  fVar4 = max->z;
  fVar5 = min->z;
  (this->_size).x = (float)uVar7 - (float)uVar1;
  (this->_size).y = fVar6 - (float)uVar2;
  (this->_size).z = fVar4 - fVar5;
  return;
}


/* Bounds ToBounds() */

Bounds * Assembly-CSharp.dll::RTG::AABB::AABB_ToBounds
                   (Bounds *__return_storage_ptr__,AABB *this,MethodInfo *method)

{
  fVar1 = _UNK_?;
  fVar2 = (this->_center).y;
  uVar3 = (this->_size).x;
  fVar4 = (this->_size).y;
  fVar5 = (this->_size).z;
  fVar6 = (this->_center).z;
  (__return_storage_ptr__->m_Center).x = (this->_center).x;
  (__return_storage_ptr__->m_Center).y = fVar2;
  (__return_storage_ptr__->m_Center).z = fVar6;
  (__return_storage_ptr__->m_Extents).x = (float)uVar3 * fVar1;
  (__return_storage_ptr__->m_Extents).y = fVar4 * fVar1;
  (__return_storage_ptr__->m_Extents).z = fVar5 * fVar1;
  return __return_storage_ptr__;
}


/* Void Transform(Matrix4x4) */

void Assembly-CSharp.dll::RTG::AABB::AABB_Transform
               (AABB *this,Matrix4x4 *transformMatrix,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__BoxMath);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uVar1._0_4_ = (this->_center).x;
  uVar1._4_4_ = (this->_center).y;
  fVar2 = (this->_center).z;
  fVar3 = (this->_size).z;
  uVar4._0_4_ = (this->_size).x;
  uVar4._4_4_ = (this->_size).y;
  if (*(int *)&(TypeInfo__RTG__BoxMath->_1).field_0x1c == 0) {
    FUN_?();
  }
  MStack_5.m00 = transformMatrix->m00;
  MStack_5.m10 = transformMatrix->m10;
  MStack_5.m20 = transformMatrix->m20;
  MStack_5.m30 = transformMatrix->m30;
  MStack_5.m01 = transformMatrix->m01;
  MStack_5.m11 = transformMatrix->m11;
  MStack_5.m21 = transformMatrix->m21;
  MStack_5.m31 = transformMatrix->m31;
  MStack_5.m02 = transformMatrix->m02;
  MStack_5.m12 = transformMatrix->m12;
  MStack_5.m22 = transformMatrix->m22;
  MStack_5.m32 = transformMatrix->m32;
  MStack_5.m03 = transformMatrix->m03;
  MStack_5.m13 = transformMatrix->m13;
  MStack_5.m23 = transformMatrix->m23;
  MStack_5.m33 = transformMatrix->m33;
  VStack_6._0_8_ = uVar4;
  VStack_6.z = fVar3;
  VStack_7._0_8_ = uVar1;
  VStack_7.z = fVar2;
  BoxMath::BoxMath_TransformBox
            (&VStack_7,&VStack_6,&MStack_5,&this->_center,&this->_size,(MethodInfo *)0x0);
  return;
}


/* AABB(Vector3, Vector3) */

void Assembly-CSharp.dll::RTG::AABB::AABB__ctor
               (AABB *this,Vector3 *center,Vector3 *size,MethodInfo *method)

{
  fVar1 = center->y;
  fVar2 = center->z;
  (this->_center).x = center->x;
  (this->_center).y = fVar1;
  fVar1 = size->x;
  fVar3 = size->y;
  (this->_center).z = fVar2;
  fVar2 = size->z;
  (this->_size).x = fVar1;
  (this->_size).y = fVar3;
  (this->_size).z = fVar2;
  this->_isValid = 1;
  return;
}


/* AABB(Bounds) */

void Assembly-CSharp.dll::RTG::AABB::AABB__ctor_1(AABB *this,Bounds *bounds,MethodInfo *method)

{
  fVar1 = (bounds->m_Center).y;
  fVar2 = (bounds->m_Center).z;
  (this->_center).x = (bounds->m_Center).x;
  (this->_center).y = fVar1;
  (this->_center).z = fVar2;
  uVar3 = (bounds->m_Extents).x;
  fVar2 = (bounds->m_Extents).y;
  fVar1 = (bounds->m_Extents).z;
  (this->_size).x = (float)uVar3 * TypeRef__System__Activator__T._0_4_;
  (this->_size).y = fVar2 + fVar2;
  (this->_size).z = fVar1 + fVar1;
  this->_isValid = 1;
  return;
}


/* AABB(IEnumerable`1[UnityEngine.Vector3]) */

void Assembly-CSharp.dll::RTG::AABB::AABB__ctor_2
               (AABB *this,IEnumerable_1_UnityEngine_Vector3_ *pointCloud,MethodInfo *method)

{
  pAStack_1 = this;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__IDisposable);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__IEnumerable<UnityEngine::Vector3>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__IEnumerator<UnityEngine::Vector3>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__IEnumerator);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  fVar2 = _UNK_?;
  fVar3 = _UNK_?;
  if (pointCloud == (IEnumerable_1_UnityEngine_Vector3_ *)0x0) {
    FUN_?();
code_?:
    FUN_?();
  }
  else {
    fVar4 = _UNK_?;
    fVar5 = _UNK_?;
    plStack_6 = (longlong *)
                 FUN_?(0,
                               TypeInfo__System__Collections__Generic__IEnumerable<UnityEngine::Vector3>
                               ,pointCloud);
    uStack_7 = 0;
    pplStack_8 = &plStack_6;
    fVar9 = fVar2;
    fVar10 = fVar2;
    fVar11 = fVar3;
    fVar12 = fVar3;
    while (plStack_6 != (longlong *)0x0) {
      cVar13 = FUN_?(0,TypeInfo__System__Collections__IEnumerator);
      plVar14 = plStack_6;
      if (cVar13 == '\0') {
        if (plStack_6 != (longlong *)0x0) {
          FUN_?(0,TypeInfo__System__IDisposable,plStack_6);
        }
        fVar4 = (fVar10 + fVar12) * _UNK_?;
        fVar5 = (fVar9 + fVar11) * _UNK_?;
        (this->_center).x = (fVar2 + fVar3) * _UNK_?;
        (this->_center).y = fVar4;
        (this->_center).z = fVar5;
        (this->_size).x = fVar2 - fVar3;
        (this->_size).y = fVar10 - fVar12;
        (this->_size).z = fVar9 - fVar11;
        this->_isValid = 1;
        return;
      }
      if (plStack_6 == (longlong *)0x0) goto code_?;
      lVar15 = *plStack_6;
      uVar16 = 0;
      if (*(ushort *)(lVar15 + 0x12e) != 0) {
        do {
          if (*(IEnumerator_1_UnityEngine_Vector3___Class **)
               (*(longlong *)(lVar15 + 0xb0) + (ulonglong)uVar16 * 0x10) ==
              TypeInfo__System__Collections__Generic__IEnumerator<UnityEngine::Vector3>) {
            puVar17 = (undefined8 *)
                     ((longlong)*(int *)(*(longlong *)(lVar15 + 0xb0) + 8 + (ulonglong)uVar16 * 0x10)
                      * 0x10 + 0x138 + lVar15);
            goto code_?;
          }
          uVar16 = uVar16 + 1;
        } while (uVar16 < *(ushort *)(lVar15 + 0x12e));
      }
      puVar17 = (undefined8 *)
               FUN_?(plStack_6,
                             TypeInfo__System__Collections__Generic__IEnumerator<UnityEngine::Vector3>
                             ,0,
                             TypeInfo__System__Collections__Generic__IEnumerator<UnityEngine::Vector3>
                             ,fVar4,fVar5);
code_?:
      puVar17 = (undefined8 *)(*(code *)*puVar17)(auStack_18,plVar14,puVar17[1]);
      uVar19 = *puVar17;
      if ((float)uVar19 < fVar3) {
        fVar3 = (float)uVar19;
      }
      uStack_20._4_4_ = (float)((ulonglong)uVar19 >> 0x20);
      if (uStack_20._4_4_ < fVar12) {
        fVar12 = uStack_20._4_4_;
      }
      if (*(float *)(puVar17 + 1) < fVar11) {
        fVar11 = *(float *)(puVar17 + 1);
      }
      uVar21 = *puVar17;
      if (fVar2 < (float)uVar21) {
        fVar2 = (float)uVar21;
      }
      uStack_22._4_4_ = (float)((ulonglong)uVar21 >> 0x20);
      if (fVar10 < uStack_22._4_4_) {
        fVar10 = uStack_22._4_4_;
      }
      fVar4 = fVar11;
      fVar5 = fVar10;
      uStack_20 = uVar19;
      uStack_22 = uVar21;
      if (fVar9 < *(float *)(puVar17 + 1)) {
        fVar9 = *(float *)(puVar17 + 1);
      }
    }
  }
  FUN_?();
  FUN_?();
  pcVar23 = (code *)swi(3);
  (*pcVar23)();
  return;
}


/* AABB(IEnumerable`1[UnityEngine.Vector2]) */

void Assembly-CSharp.dll::RTG::AABB::AABB__ctor_3
               (AABB *this,IEnumerable_1_UnityEngine_Vector2_ *pointCloud,MethodInfo *method)

{
  pAStack_1 = this;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__IDisposable);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__IEnumerable<UnityEngine::Vector2>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__IEnumerator<UnityEngine::Vector2>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__IEnumerator);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  fVar2 = _UNK_?;
  fVar3 = _UNK_?;
  if (pointCloud == (IEnumerable_1_UnityEngine_Vector2_ *)0x0) {
    FUN_?();
code_?:
    FUN_?();
  }
  else {
    fVar4 = _UNK_?;
    plStack_5 = (longlong *)
                 FUN_?(0,
                               TypeInfo__System__Collections__Generic__IEnumerable<UnityEngine::Vector2>
                               ,pointCloud);
    uStack_6 = 0;
    pplStack_7 = &plStack_5;
    fVar8 = fVar2;
    fVar9 = fVar3;
    uVar10 = uStack_11;
    while (uStack_11 = uVar10, plStack_5 != (longlong *)0x0) {
      cVar12 = FUN_?(0,TypeInfo__System__Collections__IEnumerator);
      plVar13 = plStack_5;
      if (cVar12 == '\0') {
        if (plStack_5 != (longlong *)0x0) {
          FUN_?(0,TypeInfo__System__IDisposable,plStack_5);
        }
        fVar4 = (fVar8 + fVar9) * _UNK_?;
        (this->_center).x = (fVar2 + fVar3) * _UNK_?;
        (this->_center).y = fVar4;
        (this->_center).z = 0.0;
        (this->_size).x = fVar2 - fVar3;
        (this->_size).y = fVar8 - fVar9;
        (this->_size).z = 0.0;
        this->_isValid = 1;
        return;
      }
      if (plStack_5 == (longlong *)0x0) goto code_?;
      lVar14 = *plStack_5;
      uVar15 = 0;
      if (*(ushort *)(lVar14 + 0x12e) != 0) {
        do {
          if (*(IEnumerator_1_UnityEngine_Vector2___Class **)
               (*(longlong *)(lVar14 + 0xb0) + (ulonglong)uVar15 * 0x10) ==
              TypeInfo__System__Collections__Generic__IEnumerator<UnityEngine::Vector2>) {
            puVar16 = (undefined8 *)
                     ((longlong)*(int *)(*(longlong *)(lVar14 + 0xb0) + 8 + (ulonglong)uVar15 * 0x10)
                      * 0x10 + 0x138 + lVar14);
            goto code_?;
          }
          uVar15 = uVar15 + 1;
        } while (uVar15 < *(ushort *)(lVar14 + 0x12e));
      }
      puVar16 = (undefined8 *)
               FUN_?(plStack_5,
                             TypeInfo__System__Collections__Generic__IEnumerator<UnityEngine::Vector2>
                             ,0,
                             TypeInfo__System__Collections__Generic__IEnumerator<UnityEngine::Vector2>
                             ,fVar4);
code_?:
      uVar10 = (*(code *)*puVar16)(plVar13,puVar16[1]);
      uStack_11._0_4_ = (float)uVar10;
      if ((float)uStack_11 < fVar3) {
        fVar3 = (float)uStack_11;
      }
      uStack_11._4_4_ = (float)((ulonglong)uVar10 >> 0x20);
      if (uStack_11._4_4_ < fVar9) {
        fVar9 = uStack_11._4_4_;
      }
      if (fVar2 < (float)uStack_11) {
        fVar2 = (float)uStack_11;
      }
      fVar4 = fVar2;
      if (fVar8 < uStack_11._4_4_) {
        fVar8 = uStack_11._4_4_;
      }
    }
  }
  FUN_?();
  FUN_?();
  pcVar17 = (code *)swi(3);
  (*pcVar17)();
  return;
}


/* Vector3 get_Max() */

Vector3 * Assembly-CSharp.dll::RTG::AABB::AABB_get_Max
                    (Vector3 *__return_storage_ptr__,AABB *this,MethodInfo *method)

{
  uVar1 = (this->_center).x;
  uVar2 = (this->_center).y;
  uVar3 = (this->_size).x;
  fVar4 = (this->_size).y * _UNK_?;
  fVar5 = (this->_size).z * _UNK_?;
  fVar6 = (this->_center).z;
  __return_storage_ptr__->x = (float)uVar3 * _UNK_? + (float)uVar1;
  __return_storage_ptr__->y = fVar4 + (float)uVar2;
  __return_storage_ptr__->z = fVar5 + fVar6;
  return __return_storage_ptr__;
}


/* Vector3 get_Min() */

Vector3 * Assembly-CSharp.dll::RTG::AABB::AABB_get_Min
                    (Vector3 *__return_storage_ptr__,AABB *this,MethodInfo *method)

{
  uVar1 = (this->_size).x;
  uVar2 = (this->_center).x;
  fVar3 = (this->_center).y;
  fVar4 = (this->_center).z;
  fVar5 = (this->_size).y * _UNK_?;
  fVar6 = (this->_size).z * _UNK_?;
  __return_storage_ptr__->x = (float)uVar2 - (float)uVar1 * _UNK_?;
  __return_storage_ptr__->y = fVar3 - fVar5;
  __return_storage_ptr__->z = fVar4 - fVar6;
  return __return_storage_ptr__;
}


/* Void set_Max(Vector3) */

void Assembly-CSharp.dll::RTG::AABB::AABB_set_Max(AABB *this,Vector3 *value,MethodInfo *method)

{
  if (this->_isValid != 0) {
    uVar1 = (this->_size).x;
    uVar2 = (this->_size).y;
    uVar3 = (this->_center).x;
    uVar4 = (this->_center).y;
    uVar5 = value->x;
    fVar6 = (float)uVar3 - (float)uVar1 * _UNK_?;
    fVar7 = (float)uVar5;
    if ((float)uVar5 <= fVar6) {
      fVar7 = fVar6;
    }
    fVar8 = (float)uVar4 - (float)uVar2 * _UNK_?;
    fVar6 = value->y;
    if (value->y <= fVar8) {
      fVar6 = fVar8;
    }
    fVar9 = (this->_center).z - (this->_size).z * _UNK_?;
    fVar8 = value->z;
    if (value->z <= fVar9) {
      fVar8 = fVar9;
    }
    fVar10 = (float)uVar3 - (float)uVar1 * _UNK_?;
    fVar11 = (float)uVar4 - (float)uVar2 * _UNK_?;
    fVar12 = (this->_center).z - (this->_size).z * _UNK_?;
    fVar9 = (fVar11 + fVar6) * _UNK_?;
    fVar13 = (fVar12 + fVar8) * _UNK_?;
    (this->_center).x = (fVar10 + fVar7) * _UNK_?;
    (this->_center).y = fVar9;
    (this->_center).z = fVar13;
    (this->_size).x = fVar7 - fVar10;
    (this->_size).y = fVar6 - fVar11;
    (this->_size).z = fVar8 - fVar12;
  }
  return;
}


/* Void set_Min(Vector3) */

void Assembly-CSharp.dll::RTG::AABB::AABB_set_Min(AABB *this,Vector3 *value,MethodInfo *method)

{
  if (this->_isValid != 0) {
    uVar1 = (this->_size).x;
    uVar2 = (this->_size).y;
    uVar3 = (this->_center).x;
    uVar4 = (this->_center).y;
    uVar5 = value->x;
    fVar6 = (float)uVar1 * _UNK_? + (float)uVar3;
    fVar7 = (float)uVar5;
    if (fVar6 <= (float)uVar5) {
      fVar7 = fVar6;
    }
    fVar8 = (float)uVar2 * _UNK_? + (float)uVar4;
    fVar6 = value->y;
    if (fVar8 <= value->y) {
      fVar6 = fVar8;
    }
    fVar9 = (this->_size).z * _UNK_? + (this->_center).z;
    fVar8 = value->z;
    if (fVar9 <= value->z) {
      fVar8 = fVar9;
    }
    fVar10 = (float)uVar1 * _UNK_? + (float)uVar3;
    fVar11 = (float)uVar2 * _UNK_? + (float)uVar4;
    fVar12 = (this->_size).z * _UNK_? + (this->_center).z;
    fVar9 = (fVar11 + fVar6) * _UNK_?;
    fVar13 = (fVar12 + fVar8) * _UNK_?;
    (this->_center).x = (fVar10 + fVar7) * _UNK_?;
    (this->_center).y = fVar9;
    (this->_center).z = fVar13;
    (this->_size).x = fVar10 - fVar7;
    (this->_size).y = fVar11 - fVar6;
    (this->_size).z = fVar12 - fVar8;
  }
  return;
}

