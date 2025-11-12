
/* List`1[UnityEngine.Vector3] CalcConeBaseExtentPoints(Vector3, Single, Quaternion) */

List_1_UnityEngine_Vector3_ * Assembly-CSharp.dll::RTG::ConeMath::ConeMath_CalcConeBaseExtentPoints(Vector3 *coneBaseCenter,float coneBaseRadius,Quaternion *coneRotation,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::Vector3>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  fVar1 = coneRotation->x;
  fVar2 = coneRotation->y;
  fVar3 = coneRotation->z;
  fVar4 = coneRotation->w;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar5 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar6 = fVar3 + fVar3;
  fVar7 = fVar1 * (fVar1 + fVar1);
  PStack_8.Quadrant = (int32_t)(pVVar5->rightVector).x;
  PStack_8.FirstAxisSign = (int32_t)(pVVar5->rightVector).y;
  fVar9 = (pVVar5->rightVector).z;
  fVar10 = fVar4 * (fVar1 + fVar1);
  fVar11 = fVar2 + fVar2;
  fVar12 = (1.0 - (fVar3 * fVar6 + fVar2 * fVar11)) * (float)PStack_8.Quadrant + (fVar1 * fVar11 - fVar4 * fVar6) * (float)PStack_8.FirstAxisSign + (fVar4 * fVar11 + fVar1 * fVar6) * fVar9;
  fVar3 = (1.0 - (fVar3 * fVar6 + fVar7)) * (float)PStack_8.FirstAxisSign + (fVar4 * fVar6 + fVar1 * fVar11) * (float)PStack_8.Quadrant + (fVar2 * fVar6 - fVar10) * fVar9;
  fVar1 = (fVar1 * fVar6 - fVar4 * fVar11) * (float)PStack_8.Quadrant + (fVar10 + fVar2 * fVar6) * (float)PStack_8.FirstAxisSign + (1.0 - (fVar2 * fVar11 + fVar7)) * fVar9;
  fStack_13 = coneRotation->x;
  fStack_14 = coneRotation->y;
  fStack_15 = coneRotation->z;
  fStack_16 = coneRotation->w;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar5 = TypeInfo__UnityEngine__Vector3->static_fields;
  PStack_8.Quadrant = (int32_t)(pVVar5->forwardVector).x;
  PStack_8.FirstAxisSign = (int32_t)(pVVar5->forwardVector).y;
  fVar4 = fStack_15 + fStack_15;
  fVar10 = fStack_13 * (fStack_13 + fStack_13);
  fVar9 = fStack_14 + fStack_14;
  fVar6 = fStack_16 * fVar4;
  fVar11 = fStack_16 * (fStack_13 + fStack_13);
  fVar2 = (pVVar5->forwardVector).z;
  fVar7 = (1.0 - (fStack_15 * fVar4 + fStack_14 * fVar9)) * (float)PStack_8.Quadrant + (fStack_13 * fVar9 - fVar6) * (float)PStack_8.FirstAxisSign + (fStack_16 * fVar9 + fStack_13 * fVar4) * fVar2;
  fVar17 = (1.0 - (fStack_15 * fVar4 + fVar10)) * (float)PStack_8.FirstAxisSign + (fVar6 + fStack_13 * fVar9) * (float)PStack_8.Quadrant + (fStack_14 * fVar4 - fVar11) * fVar2;
  fVar11 = (fStack_13 * fVar4 - fStack_16 * fVar9) * (float)PStack_8.Quadrant + (fVar11 + fStack_14 * fVar4) * (float)PStack_8.FirstAxisSign + (1.0 - (fStack_14 * fVar9 + fVar10)) * fVar2;
  fStack_13 = fVar6;
  fStack_14 = fStack_16;
  fStack_15 = fStack_16;
  this = (List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)FUN_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Vector3>);
  FUN_?(this,MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List__);
  pMVar18 = MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_;
  PStack_8.Quadrant = (int32_t)coneBaseCenter->x;
  PStack_8.FirstAxisSign = (int32_t)coneBaseCenter->y;
  fVar2 = fVar12 * coneBaseRadius + (float)PStack_8.Quadrant;
  fVar4 = fVar3 * coneBaseRadius + (float)PStack_8.FirstAxisSign;
  fVar9 = fVar1 * coneBaseRadius + coneBaseCenter->z;
  if (this != (List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)0x0) {
    piVar19 = &(this->fields)._version;
    *piVar19 = *piVar19 + 1;
    pPVar20 = (this->fields)._items;
    if (pPVar20 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    uVar21 = (this->fields)._size;
    if (uVar21 < (uint)pPVar20->max_length) {
      (this->fields)._size = uVar21 + 1;
      if ((uint)pPVar20->max_length <= uVar21) goto code_?;
      pPVar20->vector[(int)uVar21].Quadrant = (int32_t)fVar2;
      pPVar20->vector[(int)uVar21].FirstAxisSign = (int32_t)fVar4;
      pPVar20->vector[(int)uVar21].SecondAxisSign = (int32_t)fVar9;
    }
    else {
      PStack_8.FirstAxisSign = (int32_t)fVar4;
      PStack_8.Quadrant = (int32_t)fVar2;
      PStack_8.SecondAxisSign = (int32_t)fVar9;
      mscorlib.dll::System::Collections::Generic::List`1[RTG::PlaneIdHelper+PlaneQuadrantInfo]::List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__AddWithResize(this,&PStack_8,pMVar18->klass->rgctx_data[0xe].method);
    }
    pMVar18 = MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_;
    PStack_8.Quadrant = (int32_t)coneBaseCenter->x;
    PStack_8.FirstAxisSign = (int32_t)coneBaseCenter->y;
    fVar4 = (float)PStack_8.Quadrant - fVar7 * coneBaseRadius;
    fVar2 = (float)PStack_8.FirstAxisSign - fVar17 * coneBaseRadius;
    fVar9 = coneBaseCenter->z - fVar11 * coneBaseRadius;
    piVar19 = &(this->fields)._version;
    *piVar19 = *piVar19 + 1;
    pPVar20 = (this->fields)._items;
    if (pPVar20 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    uVar21 = (this->fields)._size;
    if (uVar21 < (uint)pPVar20->max_length) {
      (this->fields)._size = uVar21 + 1;
      if ((uint)pPVar20->max_length <= uVar21) goto code_?;
      pPVar20->vector[(int)uVar21].Quadrant = (int32_t)fVar4;
      pPVar20->vector[(int)uVar21].FirstAxisSign = (int32_t)fVar2;
      pPVar20->vector[(int)uVar21].SecondAxisSign = (int32_t)fVar9;
    }
    else {
      PStack_8.FirstAxisSign = (int32_t)fVar2;
      PStack_8.Quadrant = (int32_t)fVar4;
      PStack_8.SecondAxisSign = (int32_t)fVar9;
      mscorlib.dll::System::Collections::Generic::List`1[RTG::PlaneIdHelper+PlaneQuadrantInfo]::List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__AddWithResize(this,&PStack_8,pMVar18->klass->rgctx_data[0xe].method);
    }
    pMVar18 = MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_;
    PStack_8.Quadrant = (int32_t)coneBaseCenter->x;
    PStack_8.FirstAxisSign = (int32_t)coneBaseCenter->y;
    fVar4 = (float)PStack_8.Quadrant - fVar12 * coneBaseRadius;
    fVar2 = (float)PStack_8.FirstAxisSign - fVar3 * coneBaseRadius;
    fVar1 = coneBaseCenter->z - fVar1 * coneBaseRadius;
    piVar19 = &(this->fields)._version;
    *piVar19 = *piVar19 + 1;
    pPVar20 = (this->fields)._items;
    if (pPVar20 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    uVar21 = (this->fields)._size;
    if (uVar21 < (uint)pPVar20->max_length) {
      (this->fields)._size = uVar21 + 1;
      if ((uint)pPVar20->max_length <= uVar21) goto code_?;
      pPVar20->vector[(int)uVar21].Quadrant = (int32_t)fVar4;
      pPVar20->vector[(int)uVar21].FirstAxisSign = (int32_t)fVar2;
      pPVar20->vector[(int)uVar21].SecondAxisSign = (int32_t)fVar1;
    }
    else {
      PStack_8.FirstAxisSign = (int32_t)fVar2;
      PStack_8.Quadrant = (int32_t)fVar4;
      PStack_8.SecondAxisSign = (int32_t)fVar1;
      mscorlib.dll::System::Collections::Generic::List`1[RTG::PlaneIdHelper+PlaneQuadrantInfo]::List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__AddWithResize(this,&PStack_8,pMVar18->klass->rgctx_data[0xe].method);
    }
    pMVar18 = MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_;
    PStack_8.Quadrant = (int32_t)coneBaseCenter->x;
    PStack_8.FirstAxisSign = (int32_t)coneBaseCenter->y;
    fVar2 = fVar7 * coneBaseRadius + (float)PStack_8.Quadrant;
    fVar3 = fVar17 * coneBaseRadius + (float)PStack_8.FirstAxisSign;
    fVar1 = fVar11 * coneBaseRadius + coneBaseCenter->z;
    piVar19 = &(this->fields)._version;
    *piVar19 = *piVar19 + 1;
    pPVar20 = (this->fields)._items;
    if (pPVar20 != (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) {
      uVar21 = (this->fields)._size;
      if (uVar21 < (uint)pPVar20->max_length) {
        (this->fields)._size = uVar21 + 1;
        if ((uint)pPVar20->max_length <= uVar21) {
code_?:
          FUN_?();
          pcVar22 = (code *)swi(3);
          pLVar23 = (List_1_UnityEngine_Vector3_ *)(*pcVar22)();
          return pLVar23;
        }
        pPVar20->vector[(int)uVar21].Quadrant = (int32_t)fVar2;
        pPVar20->vector[(int)uVar21].FirstAxisSign = (int32_t)fVar3;
        pPVar20->vector[(int)uVar21].SecondAxisSign = (int32_t)fVar1;
      }
      else {
        PStack_8.FirstAxisSign = (int32_t)fVar3;
        PStack_8.Quadrant = (int32_t)fVar2;
        PStack_8.SecondAxisSign = (int32_t)fVar1;
        mscorlib.dll::System::Collections::Generic::List`1[RTG::PlaneIdHelper+PlaneQuadrantInfo]::List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__AddWithResize(this,&PStack_8,pMVar18->klass->rgctx_data[0xe].method);
      }
      return (List_1_UnityEngine_Vector3_ *)this;
    }
  }
code_?:
  FUN_?();
  pcVar22 = (code *)swi(3);
  pLVar23 = (List_1_UnityEngine_Vector3_ *)(*pcVar22)();
  return pLVar23;
}


/* Boolean ContainsPoint(Vector3, Vector3, Single, Single, Quaternion, ConeEpsilon) */

bool Assembly-CSharp.dll::RTG::ConeMath::ConeMath_ContainsPoint(Vector3 *point,Vector3 *coneBaseCenter,float coneBaseRadius,float coneHeight,Quaternion *coneRotation,ConeEpsilon epsilon,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  VStack_1.x = coneBaseCenter->x;
  VStack_1.y = coneBaseCenter->y;
  pVVar2 = TypeInfo__UnityEngine__Vector3->static_fields;
  VStack_3.x = (pVVar2->oneVector).x;
  VStack_3.y = (pVVar2->oneVector).y;
  VStack_3.z = (pVVar2->oneVector).z;
  auStack_4._0_4_ = coneRotation->x;
  auStack_4._4_4_ = coneRotation->y;
  auStack_4._8_4_ = coneRotation->z;
  auStack_4._12_4_ = coneRotation->w;
  VStack_1.z = coneBaseCenter->z;
  uStack_5 = 0;
  uStack_6 = 0;
  uStack_7 = 0;
  uStack_8 = 0;
  uStack_9 = 0;
  uStack_10 = 0;
  uStack_11 = 0;
  uStack_12 = 0;
  pcVar13 = pcRam_?;
  if ((pcRam_? == (code *)0x0) && (pcVar13 = (code *)FUN_?(&UNK_?), pcVar13 == (code *)0x0)) {
    uVar14 = func_?(&UNK_?);
    FUN_?(uVar14,0);
    pcVar13 = (code *)swi(3);
    bVar15 = (*pcVar13)();
    return bVar15;
  }
  pcRam_? = pcVar13;
  (*pcRam_?)(&VStack_1,auStack_4,&VStack_3);
  uStack_16 = uStack_5;
  uStack_17 = uStack_6;
  uStack_18 = uStack_7;
  uStack_19 = uStack_8;
  uStack_20 = uStack_9;
  uStack_21 = uStack_10;
  uStack_22 = (undefined4)uStack_11;
  uStack_23 = uStack_11._4_4_;
  uStack_24 = (undefined4)uStack_12;
  uStack_25 = uStack_12._4_4_;
  uStack_26 = 0;
  uStack_27 = 0;
  uStack_28 = 0;
  uStack_29 = 0;
  uStack_30 = 0;
  uStack_31 = 0;
  uStack_32 = 0;
  uStack_33 = 0;
  pcVar13 = pcRam_?;
  if ((pcRam_? == (code *)0x0) && (pcVar13 = (code *)FUN_?(&UNK_?), pcVar13 == (code *)0x0)) {
    uVar14 = func_?(&UNK_?);
    FUN_?(uVar14,0);
    pcVar13 = (code *)swi(3);
    bVar15 = (*pcVar13)();
    return bVar15;
  }
  pcRam_? = pcVar13;
  (*pcRam_?)(&uStack_16,&uStack_26);
  fVar34 = point->z;
  auStack_4._0_4_ = point->x;
  auStack_4._4_4_ = point->y;
  fVar35 = 1.0 / (uStack_29._4_4_ * auStack_4._4_4_ + uStack_27._4_4_ * auStack_4._0_4_ + uStack_31._4_4_ * fVar34 + uStack_33._4_4_);
  fVar36 = fVar35 * ((float)uStack_28 * auStack_4._4_4_ + (float)uStack_26 * auStack_4._0_4_ + (float)uStack_30 * fVar34 + (float)uStack_32);
  fVar37 = fVar35 * (uStack_28._4_4_ * auStack_4._4_4_ + uStack_26._4_4_ * auStack_4._0_4_ + uStack_30._4_4_ * fVar34 + uStack_32._4_4_);
  fVar35 = fVar35 * ((float)uStack_29 * auStack_4._4_4_ + (float)uStack_27 * auStack_4._0_4_ + (float)uStack_31 * fVar34 + (float)uStack_33);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar2 = TypeInfo__UnityEngine__Vector3->static_fields;
  auStack_4._0_4_ = (pVVar2->upVector).x;
  auStack_4._4_4_ = (pVVar2->upVector).y;
  fVar34 = auStack_4._4_4_ * fVar37 + auStack_4._0_4_ * fVar36 + (pVVar2->upVector).z * fVar35;
  if ((fVar34 < -epsilon._vertEps) || (epsilon._vertEps + coneHeight < fVar34)) {
    bVar38 = false;
  }
  else {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pVVar2 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar14._0_4_ = (pVVar2->zeroVector).x;
    uVar14._4_4_ = (pVVar2->zeroVector).y;
    fVar39 = (pVVar2->zeroVector).z;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pVVar2 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar40 = (pVVar2->upVector).x;
    uVar41 = (pVVar2->upVector).y;
    VStack_1.z = (pVVar2->upVector).z * coneHeight;
    auStack_4._4_4_ = fVar37;
    auStack_4._0_4_ = fVar36;
    auStack_4._8_4_ = fVar35;
    VStack_1.y = (float)uVar41 * coneHeight;
    VStack_1.x = (float)uVar40 * coneHeight;
    VStack_3._0_8_ = uVar14;
    VStack_3.z = fVar39;
    fVar37 = Vector3Ex::Vector3Ex_GetDistanceToSegment((Vector3 *)auStack_4,&VStack_3,&VStack_1,(MethodInfo *)0x0);
    bVar38 = fVar37 <= epsilon._hrzEps + (coneHeight / coneBaseRadius) * fVar34;
  }
  return bVar38;
}


/* Boolean Raycast(Ray, Single ByRef, Vector3, Single, Single, Quaternion, ConeEpsilon) */

bool Assembly-CSharp.dll::RTG::ConeMath::ConeMath_Raycast(Ray *ray,float *t,Vector3 *coneBaseCenter,float coneBaseRadius,float coneHeight,Quaternion *coneRotation,ConeEpsilon epsilon,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__BoxMath);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar1 = cRam_? == '\0';
  *t = 0.0;
  if (bVar1) {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  VStack_2.x = coneBaseCenter->x;
  VStack_2.y = coneBaseCenter->y;
  pVVar3 = TypeInfo__UnityEngine__Vector3->static_fields;
  VStack_4.x = (pVVar3->oneVector).x;
  VStack_4.y = (pVVar3->oneVector).y;
  VStack_4.z = (pVVar3->oneVector).z;
  RStack_5.m_Origin.x = coneRotation->x;
  RStack_5.m_Origin.y = coneRotation->y;
  RStack_5.m_Origin.z = coneRotation->z;
  RStack_5.m_Direction.x = coneRotation->w;
  VStack_2.z = coneBaseCenter->z;
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
  pcVar7 = pcRam_?;
  if (pcRam_? == (code *)0x0) {
    pcVar7 = (code *)FUN_?(&UNK_?);
    if (pcVar7 == (code *)0x0) {
      uVar8 = func_?(&UNK_?);
      FUN_?(uVar8,0);
      pcVar7 = (code *)swi(3);
      bVar9 = (*pcVar7)();
      return bVar9;
    }
  }
  pcRam_? = pcVar7;
  (*pcRam_?)(&VStack_2,&RStack_5,&VStack_4);
  aMStack_10[0].m00 = MStack_6.m00;
  aMStack_10[0].m10 = MStack_6.m10;
  aMStack_10[0].m20 = MStack_6.m20;
  aMStack_10[0].m30 = MStack_6.m30;
  aMStack_10[0].m01 = MStack_6.m01;
  aMStack_10[0].m11 = MStack_6.m11;
  aMStack_10[0].m21 = MStack_6.m21;
  aMStack_10[0].m31 = MStack_6.m31;
  aMStack_10[0].m02 = MStack_6.m02;
  aMStack_10[0].m12 = MStack_6.m12;
  aMStack_10[0].m22 = MStack_6.m22;
  aMStack_10[0].m32 = MStack_6.m32;
  RStack_5.m_Origin.x = (ray->m_Origin).x;
  RStack_5.m_Origin.y = (ray->m_Origin).y;
  RStack_5._8_8_ = *(undefined8 *)&(ray->m_Origin).z;
  aMStack_10[0].m03 = MStack_6.m03;
  aMStack_10[0].m13 = MStack_6.m13;
  aMStack_10[0].m23 = MStack_6.m23;
  aMStack_10[0].m33 = MStack_6.m33;
  RStack_5.m_Direction.y = (ray->m_Direction).y;
  RStack_5.m_Direction.z = (ray->m_Direction).z;
  pRVar11 = RayEx::RayEx_InverseTransform(&RStack_12,&RStack_5,aMStack_10,(MethodInfo *)0x0);
  fVar13 = epsilon._vertEps;
  uVar8._0_4_ = (pRVar11->m_Direction).y;
  uVar8._4_4_ = (pRVar11->m_Direction).z;
  fVar14 = epsilon._vertEps + epsilon._vertEps;
  fVar15 = (pRVar11->m_Origin).x;
  fVar16 = (pRVar11->m_Origin).y;
  fVar17 = (pRVar11->m_Origin).z;
  fVar18 = (pRVar11->m_Direction).x;
  _fStack_108 = uVar8;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar3 = TypeInfo__UnityEngine__Vector3->static_fields;
  VStack_19.x = (pVVar3->upVector).x;
  VStack_19.y = (pVVar3->upVector).y;
  fVar20 = (pVVar3->upVector).z;
  fVar21 = VStack_19.y * coneHeight;
  fVar22 = VStack_19.x * coneHeight;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Quaternion);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  VStack_19.x = 0.0;
  VStack_19.y = 0.0;
  pQVar23 = TypeInfo__UnityEngine__Quaternion->static_fields;
  uVar24._0_4_ = (pQVar23->identityQuaternion).x;
  uVar24._4_4_ = (pQVar23->identityQuaternion).y;
  uVar25._0_4_ = (pQVar23->identityQuaternion).z;
  uVar25._4_4_ = (pQVar23->identityQuaternion).w;
  pQVar26 = coneRotation;
  if (*(int *)&(TypeInfo__RTG__BoxMath->_1).field_0x1c == 0) {
    FUN_?();
    pQVar26 = coneRotation;
  }
  coneRotation._4_4_ = (undefined4)((ulonglong)pQVar26 >> 0x20);
  if (cRam_? == '\0') {
    coneRotation = pQVar26;
    FUN_?(&TypeInfo__RTG__BoxMath);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  coneRotation._0_4_ = 0;
  if (*(int *)&(TypeInfo__RTG__BoxMath->_1).field_0x1c == 0) {
    FUN_?();
  }
  VStack_2.x = VStack_19.x;
  VStack_2.y = VStack_19.y;
  VStack_4.y = fVar14 + coneHeight;
  VStack_4.x = coneBaseRadius + coneBaseRadius;
  VStack_2.z = 0.0;
  VStack_19.y = fVar21 * 0.5;
  VStack_19.x = fVar22 * 0.5;
  VStack_19.z = fVar20 * coneHeight * 0.5;
  VStack_4.z = coneBaseRadius + coneBaseRadius;
  RStack_5.m_Origin._0_8_ = uVar24;
  RStack_5._8_8_ = uVar25;
  RStack_12.m_Origin.x = fVar15;
  RStack_12.m_Origin.y = fVar16;
  RStack_12.m_Origin.z = fVar17;
  RStack_12.m_Direction.x = fVar18;
  RStack_12.m_Direction._4_8_ = uVar8;
  bVar9 = BoxMath::BoxMath_Raycast_1(&RStack_12,(float *)&coneRotation,&VStack_19,&VStack_4,(Quaternion *)&RStack_5,(BoxEpsilon *)&VStack_2,(MethodInfo *)0x0);
  if (bVar9 != 0) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pVVar3 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar27._0_4_ = (pVVar3->upVector).x;
    uVar27._4_4_ = (pVVar3->upVector).y;
    fVar14 = -(pVVar3->upVector).z;
    if (cRam_? == '\0') {
      VStack_19._0_8_ = uVar27;
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pVVar3 = TypeInfo__UnityEngine__Vector3->static_fields;
    VStack_2.x = (pVVar3->zeroVector).x;
    VStack_2.y = (pVVar3->zeroVector).y;
    fVar20 = (pVVar3->zeroVector).z;
    VStack_19._0_8_ = uVar27 ^ 0x8000000080000000;
    VStack_19.z = fVar14;
    fVar21 = (float)FUN_?(&VStack_19);
    if (1e-05 < fVar21) {
      fVar14 = fVar14 / fVar21;
      VStack_4.y = -(float)uVar27._4_4_ / fVar21;
      VStack_4.x = -(float)(undefined4)uVar27 / fVar21;
    }
    else {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Vector3);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pVVar3 = TypeInfo__UnityEngine__Vector3->static_fields;
      VStack_4.x = (pVVar3->zeroVector).x;
      VStack_4.y = (pVVar3->zeroVector).y;
      fVar14 = (pVVar3->zeroVector).z;
    }
    fVar21 = fStack_28;
    fVar22 = fStack_29;
    RStack_5.m_Origin.y = fVar18;
    RStack_5.m_Origin.x = fVar18;
    RStack_5.m_Direction.x = fVar18;
    RStack_5.m_Origin.z = fVar18;
    fVar30 = fStack_28 * VStack_4.y + fVar18 * VStack_4.x + fStack_29 * fVar14;
    fVar18 = fVar15 * VStack_4.x;
    fVar31 = VStack_2.y * VStack_4.y;
    fVar32 = fVar16 * VStack_4.y;
    fVar33 = VStack_2.x * VStack_4.x;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Mathf);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    fVar34 = ABS(fVar30);
    if (ABS(fVar30) <= 0.0) {
      fVar34 = 0.0;
    }
    fVar35 = TypeInfo__UnityEngine__Mathf->static_fields->Epsilon * 8.0;
    fVar36 = fVar34 * 1e-06;
    if (fVar34 * 1e-06 <= fVar35) {
      fVar36 = fVar35;
    }
    if ((fVar36 <= ABS(0.0 - fVar30)) && (fVar30 = (-(fVar32 + fVar18 + fVar17 * fVar14) - -(fVar31 + fVar33 + fVar20 * fVar14)) / fVar30, 0.0 < fVar30)) {
      VStack_19.z = fVar22 * fVar30 + fVar17;
      VStack_19._0_8_ = CONCAT44(fVar21 * fVar30 + fVar16,RStack_5.m_Origin.x * fVar30 + fVar15);
      fVar18 = (float)FUN_?(&VStack_19);
      if (fVar18 <= coneBaseRadius) {
        *t = fVar30;
        return 1;
      }
    }
    fVar14 = (coneBaseRadius / coneHeight) * (coneBaseRadius / coneHeight);
    fVar20 = (fVar17 * fVar22 + fVar15 * RStack_5.m_Origin.x) - (fVar16 - coneHeight) * fVar14 * fVar21;
    fVar20 = fVar20 + fVar20;
    fVar18 = (fVar22 * fVar22 + RStack_5.m_Origin.x * RStack_5.m_Origin.x) - fVar14 * fVar21 * fVar21;
    fVar15 = fVar20 * fVar20 - ((fVar17 * fVar17 + fVar15 * fVar15) - (fVar16 - coneHeight) * fVar14 * (fVar16 - coneHeight)) * fVar18 * 4.0;
    if ((0.0 <= fVar15) && (fVar18 = fVar18 + fVar18, fVar18 != 0.0)) {
      if (fVar15 == 0.0) {
        fVar18 = -fVar20 / fVar18;
        fVar17 = fVar18;
      }
      else {
        if (fVar15 < 0.0) {
          fVar15 = (float)FUN_?(fVar15);
        }
        else {
          fVar15 = SQRT(fVar15);
        }
        fVar17 = (fVar15 + -fVar20) / fVar18;
        fVar15 = (-fVar20 - fVar15) / fVar18;
        fVar18 = fVar15;
        if (fVar15 < fVar17) {
          fVar18 = fVar17;
          fVar17 = fVar15;
        }
      }
      if ((0.0 <= fVar17) || (fVar17 = fVar18, 0.0 <= fVar18)) {
        *t = fVar17;
        fVar16 = fVar21 * fVar17 + fVar16;
        if ((-fVar13 <= fVar16) && (fVar16 <= fVar13 + coneHeight)) {
          return 1;
        }
        *t = 0.0;
      }
    }
  }
  return 0;
}

