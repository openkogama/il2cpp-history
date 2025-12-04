
/* Void AlignAxis2D(Int32, AxisSign, Vector2) */

void Assembly-CSharp.dll::RTG::GizmoTransform::GizmoTransform_AlignAxis2D
               (GizmoTransform *this,int32_t axisIndex,AxisSign__Enum axisSign,Vector2 axis,
               MethodInfo *method)

{
  if ((this->fields)._firingChanged3DEvent != 0) {
    return;
  }
  pVVar1 = (this->fields)._axes2D;
  if (pVVar1 == (Vector2__Array *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((uint)pVVar1->max_length <= (uint)axisIndex) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  fVar3 = pVVar1->vector[axisIndex].x;
  fVar4 = pVVar1->vector[axisIndex].y;
  if (axisSign == AxisSign__Enum_Negative) {
    fVar3 = (float)((uint)fVar3 ^ _UNK_?);
    fVar4 = (float)((uint)fVar4 ^ _UNK_?);
  }
  from.y = fVar4;
  from.x = fVar3;
  pQVar5 = QuaternionEx::QuaternionEx_FromToRotation2D(&QStack_6,from,axis,(MethodInfo *)0x0);
  QStack_6.x = pQVar5->x;
  QStack_6.y = pQVar5->y;
  QStack_6.z = pQVar5->z;
  QStack_6.w = pQVar5->w;
  fVar3 = QuaternionEx::QuaternionEx_ConvertTo2DRotation(&QStack_6,(MethodInfo *)0x0);
  fVar3 = (float)FUN_?(fVar3 + (this->fields)._rotation2DDegrees,_UNK_?,0);
  bVar7 = cRam_? == '\0';
  (this->fields)._rotation2DDegrees = fVar3;
  if (bVar7) {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar8 = TypeInfo__UnityEngine__Vector3->static_fields;
  uStack_9._0_4_ = (pVVar8->forwardVector).x;
  uStack_9._4_4_ = (pVVar8->forwardVector).y;
  fStack_10 = (pVVar8->forwardVector).z;
  uStack_11 = 0;
  uStack_12 = 0;
  pcVar2 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
    uVar13 = func_?(&UNK_?);
    FUN_?(uVar13,0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcRam_? = pcVar2;
  (*pcRam_?)(fVar3,&uStack_9,&uStack_11);
  uVar13 = uStack_11;
  fVar4 = uStack_11._4_4_;
  fVar3 = (float)uStack_11;
  fVar14 = (float)uStack_12;
  fStack_15 = uStack_12._4_4_;
  fVar16 = uStack_11._4_4_ * uStack_11._4_4_ + (float)uStack_11 * (float)uStack_11 +
           (float)uStack_12 * (float)uStack_12 + uStack_12._4_4_ * uStack_12._4_4_;
  if (fVar16 < 0.0) {
    fVar16 = (float)FUN_?(fVar16);
  }
  else {
    fVar16 = SQRT(fVar16);
  }
  if (fVar16 < _UNK_?) {
    uStack_9 = uVar13;
    fStack_10 = fVar14;
  }
  else {
    fVar16 = _UNK_? / fVar16;
    fStack_10 = fVar16 * fVar14;
    fStack_15 = fVar16 * fStack_15;
    uStack_9 = CONCAT44(fVar16 * fVar4,fVar16 * fVar3);
  }
  (this->fields)._rotation2D.x = (float)(undefined4)uStack_9;
  (this->fields)._rotation2D.y = (float)uStack_9._4_4_;
  (this->fields)._rotation2D.z = fStack_10;
  (this->fields)._rotation2D.w = fStack_15;
  if ((this->fields)._parent == (GizmoTransform *)0x0) {
    fVar3 = (this->fields)._rotation2D.y;
    fVar4 = (this->fields)._rotation2D.z;
    fVar14 = (this->fields)._rotation2D.w;
    (this->fields)._localRotation2D.x = (this->fields)._rotation2D.x;
    (this->fields)._localRotation2D.y = fVar3;
    (this->fields)._localRotation2D.z = fVar4;
    (this->fields)._localRotation2D.w = fVar14;
  }
  else {
    pGVar17 = (this->fields)._parent;
    aQStack_18[0].x = (pGVar17->fields)._rotation2D.x;
    aQStack_18[0].y = (pGVar17->fields)._rotation2D.y;
    aQStack_18[0].z = (pGVar17->fields)._rotation2D.z;
    aQStack_18[0].w = (pGVar17->fields)._rotation2D.w;
    pcVar2 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
      uVar13 = func_?(&UNK_?);
      FUN_?(uVar13,0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pcRam_? = pcVar2;
    uStack_11 = CONCAT44(unaff_XMM10_Db,unaff_XMM10_Da);
    uStack_12 = CONCAT44(unaff_XMM10_Dd,unaff_XMM10_Dc);
    uStack_9 = CONCAT44(unaff_XMM11_Db,unaff_XMM11_Da);
    fStack_10 = unaff_XMM11_Dc;
    fStack_15 = unaff_XMM11_Dd;
    (*pcRam_?)(aQStack_18);
    fVar3 = (this->fields)._rotation2D.x;
    fVar4 = (this->fields)._rotation2D.y;
    fVar14 = (this->fields)._rotation2D.z;
    fVar16 = (this->fields)._rotation2D.w;
    fVar19 = (fVar16 * 0.0 + fVar3 * 0.0 + fVar14 * 0.0) - fVar4 * 0.0;
    fVar20 = (fVar4 * 0.0 + fVar16 * 0.0 + fVar3 * 0.0) - fVar14 * 0.0;
    fVar21 = ((fVar16 * 0.0 - fVar3 * 0.0) - fVar4 * 0.0) - fVar14 * 0.0;
    fVar4 = (fVar14 * 0.0 + fVar16 * 0.0 + fVar4 * 0.0) - fVar3 * 0.0;
    fVar3 = fVar20 * fVar20 + fVar19 * fVar19 + fVar4 * fVar4 + fVar21 * fVar21;
    if (fVar3 < 0.0) {
      fVar3 = (float)FUN_?(fVar3);
    }
    else {
      fVar3 = SQRT(fVar3);
    }
    if (_UNK_? <= fVar3) {
      fVar3 = _UNK_? / fVar3;
      fVar19 = fVar19 * fVar3;
      fVar20 = fVar20 * fVar3;
      fVar4 = fVar4 * fVar3;
      fVar21 = fVar21 * fVar3;
    }
    (this->fields)._localRotation2D.x = fVar19;
    (this->fields)._localRotation2D.y = fVar20;
    (this->fields)._localRotation2D.z = fVar4;
    (this->fields)._localRotation2D.w = fVar21;
  }
  aQStack_18[0].x = (this->fields)._localRotation2D.x;
  aQStack_18[0].y = (this->fields)._localRotation2D.y;
  aQStack_18[0].z = (this->fields)._localRotation2D.z;
  aQStack_18[0].w = (this->fields)._localRotation2D.w;
  fVar3 = QuaternionEx::QuaternionEx_ConvertTo2DRotation(aQStack_18,(MethodInfo *)0x0);
  (this->fields)._localRotation2DDegrees = fVar3;
  GizmoTransform_Update2DAxes(this,(MethodInfo *)0x0);
  GizmoTransform_UpdateChildTransforms2D(this,(MethodInfo *)0x0);
  pGVar22 = (this->fields).Changed;
  (this->fields)._firingChanged2DEvent = 1;
  if (pGVar22 != (GizmoEntityTransformChangedHandler *)0x0) {
    (*(pGVar22->fields)._._.invoke_impl)
              ((pGVar22->fields)._._.method_code,this,0x100000000,(pGVar22->fields)._._.method);
  }
  (this->fields)._firingChanged2DEvent = 0;
  return;
}


/* Void AlignAxis3D(Int32, AxisSign, Vector3) */

void Assembly-CSharp.dll::RTG::GizmoTransform::GizmoTransform_AlignAxis3D
               (GizmoTransform *this,int32_t axisIndex,AxisSign__Enum axisSign,Vector3 *axis,
               MethodInfo *method)

{
  if ((this->fields)._firingChanged3DEvent != 0) {
    return;
  }
  pVVar1 = (this->fields)._axes3D;
  if (pVVar1 == (Vector3__Array *)0x0) {
code_?:
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((uint)axisIndex < (uint)pVVar1->max_length) {
    uVar3._0_4_ = pVVar1->vector[axisIndex].x;
    uVar3._4_4_ = pVVar1->vector[axisIndex].y;
    QStack_4.z = pVVar1->vector[axisIndex].z;
    uVar5 = uVar3;
    if (axisSign == AxisSign__Enum_Negative) {
      uVar5._0_4_ = (float)((uint)(float)uVar3 ^ _UNK_?);
      QStack_4.z = (float)((uint)pVVar1->vector[axisIndex].z ^ _UNK_?);
      uVar5._4_4_ = (float)((uint)uVar3._4_4_ ^ _UNK_?);
      QStack_4._0_8_ = uVar3;
    }
    iVar6 = axisIndex + 1;
    if (pVVar1 == (Vector3__Array *)0x0) goto code_?;
    uVar7 = iVar6 + (iVar6 / 3 + (iVar6 >> 0x1f) +
                      (int)(((longlong)iVar6 / 3 + ((longlong)iVar6 >> 0x3f) & 0xffffffffU) >>
                           0x1f)) * -3;
    if (uVar7 < (uint)pVVar1->max_length) {
      VStack_8.x = pVVar1->vector[(int)uVar7].x;
      VStack_8.y = pVVar1->vector[(int)uVar7].y;
      VStack_8.z = pVVar1->vector[(int)uVar7].z;
      if (axisSign == AxisSign__Enum_Negative) {
        VStack_8.z = (float)((uint)pVVar1->vector[(int)uVar7].z ^ _UNK_?);
        VStack_8.y = (float)((uint)VStack_8.y ^ _UNK_?);
        VStack_8.x = (float)((uint)VStack_8.x ^ _UNK_?);
      }
      VStack_9.x = axis->x;
      VStack_9.y = axis->y;
      VStack_9.z = axis->z;
      QStack_4._0_8_ = uVar5;
      pQVar10 = QuaternionEx::QuaternionEx_FromToRotation3D
                          (aQStack_11,(Vector3 *)&QStack_4,&VStack_9,&VStack_8,(MethodInfo *)0x0)
      ;
      fVar12 = (this->fields)._rotation3D.x;
      fVar13 = (this->fields)._rotation3D.y;
      fVar14 = (this->fields)._rotation3D.z;
      fVar15 = (this->fields)._rotation3D.w;
      fVar16 = pQVar10->x;
      fVar17 = pQVar10->y;
      fVar18 = pQVar10->z;
      fVar19 = pQVar10->w;
      QStack_4.w = ((fVar19 * fVar15 - fVar16 * fVar12) - fVar17 * fVar13) - fVar18 * fVar14;
      QStack_4.z = (fVar19 * fVar14 + fVar18 * fVar15 + fVar16 * fVar13) - fVar17 * fVar12;
      QStack_4.y = (fVar19 * fVar13 + fVar17 * fVar15 + fVar18 * fVar12) - fVar16 * fVar14;
      QStack_4.x = (fVar19 * fVar12 + fVar16 * fVar15 + fVar17 * fVar14) - fVar18 * fVar13;
      GizmoTransform_set_Rotation3D(this,&QStack_4,(MethodInfo *)0x0);
      return;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void ChangeLocalPosition2D(Vector2) */

void Assembly-CSharp.dll::RTG::GizmoTransform::GizmoTransform_ChangeLocalPosition2D
               (GizmoTransform *this,Vector2 localPosition,MethodInfo *method)

{
  (this->fields)._localPosition2D = localPosition;
  if ((this->fields)._parent == (GizmoTransform *)0x0) {
    fVar1 = (this->fields)._localPosition2D.x;
    fVar2 = (this->fields)._localPosition2D.y;
  }
  else {
    pGVar3 = (this->fields)._parent;
    fVar2 = (pGVar3->fields)._rotation2D.x;
    fVar4 = (pGVar3->fields)._rotation2D.y;
    fVar5 = (pGVar3->fields)._rotation2D.z;
    fVar6 = (pGVar3->fields)._rotation2D.w;
    fVar7 = fVar4 + fVar4;
    fVar8 = fVar5 + fVar5;
    if (pGVar3 == (GizmoTransform *)0x0) {
      FUN_?();
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    fVar1 = (_UNK_? - (fVar4 * fVar7 + fVar5 * fVar8)) * (this->fields)._localPosition2D.x
             + (fVar2 * fVar7 - fVar6 * fVar8) * (this->fields)._localPosition2D.y +
             (fVar2 * fVar8 + fVar6 * fVar7) * 0.0 + (pGVar3->fields)._position2D.x;
    fVar2 = (_UNK_? - (fVar2 * (fVar2 + fVar2) + fVar5 * fVar8)) *
            (this->fields)._localPosition2D.y +
            (fVar6 * fVar8 + fVar2 * fVar7) * (this->fields)._localPosition2D.x +
            (fVar4 * fVar8 - fVar6 * (fVar2 + fVar2)) * 0.0 + (pGVar3->fields)._position2D.y;
  }
  (this->fields)._position2D.x = fVar1;
  (this->fields)._position2D.y = fVar2;
  GizmoTransform_UpdateChildTransforms2D(this,(MethodInfo *)0x0);
  pGVar10 = (this->fields).Changed;
  (this->fields)._firingChanged2DEvent = 1;
  if (pGVar10 != (GizmoEntityTransformChangedHandler *)0x0) {
    (*(pGVar10->fields)._._.invoke_impl)
              ((pGVar10->fields)._._.method_code,this,0x100000000,(pGVar10->fields)._._.method);
  }
  (this->fields)._firingChanged2DEvent = 0;
  return;
}


/* Void ChangeLocalPosition3D(Vector3) */

void Assembly-CSharp.dll::RTG::GizmoTransform::GizmoTransform_ChangeLocalPosition3D
               (GizmoTransform *this,Vector3 *localPosition,MethodInfo *method)

{
  fVar1 = localPosition->y;
  fVar2 = localPosition->z;
  (this->fields)._localPosition3D.x = localPosition->x;
  (this->fields)._localPosition3D.y = fVar1;
  (this->fields)._localPosition3D.z = fVar2;
  if ((this->fields)._parent == (GizmoTransform *)0x0) {
    fVar1 = (this->fields)._localPosition3D.y;
    fVar2 = (this->fields)._localPosition3D.z;
    (this->fields)._position3D.x = (this->fields)._localPosition3D.x;
    (this->fields)._position3D.y = fVar1;
    (this->fields)._position3D.z = fVar2;
  }
  else {
    uVar3 = (this->fields)._localPosition3D.x;
    uVar4 = (this->fields)._localPosition3D.y;
    fVar2 = (this->fields)._localPosition3D.z;
    pGVar5 = (this->fields)._parent;
    fVar1 = (pGVar5->fields)._rotation3D.x;
    fVar6 = (pGVar5->fields)._rotation3D.y;
    fVar7 = (pGVar5->fields)._rotation3D.z;
    fVar8 = (pGVar5->fields)._rotation3D.w;
    fVar9 = fVar7 + fVar7;
    fVar10 = fVar1 * (fVar1 + fVar1);
    fVar11 = fVar6 + fVar6;
    fVar12 = fVar8 * (fVar1 + fVar1);
    fVar13 = _UNK_? - (fVar7 * fVar9 + fVar10);
    fVar10 = _UNK_? - (fVar6 * fVar11 + fVar10);
    if (pGVar5 == (GizmoTransform *)0x0) {
      FUN_?();
      pcVar14 = (code *)swi(3);
      (*pcVar14)();
      return;
    }
    uVar15 = (pGVar5->fields)._position3D.x;
    uVar16 = (pGVar5->fields)._position3D.y;
    fVar17 = (pGVar5->fields)._position3D.z;
    (this->fields)._position3D.x =
         (_UNK_? - (fVar7 * fVar9 + fVar6 * fVar11)) * (float)uVar3 +
         (fVar1 * fVar11 - fVar8 * fVar9) * (float)uVar4 +
         (fVar8 * fVar11 + fVar1 * fVar9) * fVar2 + (float)uVar15;
    (this->fields)._position3D.y =
         fVar13 * (float)uVar4 + (fVar8 * fVar9 + fVar1 * fVar11) * (float)uVar3 +
         (fVar6 * fVar9 - fVar12) * fVar2 + (float)uVar16;
    (this->fields)._position3D.z =
         (fVar1 * fVar9 - fVar8 * fVar11) * (float)uVar3 +
         (fVar12 + fVar6 * fVar9) * (float)uVar4 + fVar10 * fVar2 + fVar17;
  }
  GizmoTransform_UpdateChildTransforms3D(this,(MethodInfo *)0x0);
  pGVar18 = (this->fields).Changed;
  (this->fields)._firingChanged3DEvent = 1;
  if (pGVar18 != (GizmoEntityTransformChangedHandler *)0x0) {
    (*(pGVar18->fields)._._.invoke_impl)
              ((pGVar18->fields)._._.method_code,this,0x200000000,(pGVar18->fields)._._.method);
  }
  (this->fields)._firingChanged3DEvent = 0;
  return;
}


/* Void ChangeLocalRotation2D(Single) */

void Assembly-CSharp.dll::RTG::GizmoTransform::GizmoTransform_ChangeLocalRotation2D
               (GizmoTransform *this,float localRotation,MethodInfo *method)

{
  bVar1 = cRam_? == '\0';
  (this->fields)._localRotation2DDegrees = localRotation;
  if (bVar1) {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar2 = TypeInfo__UnityEngine__Vector3->static_fields;
  uStack_3._0_4_ = (pVVar2->forwardVector).x;
  uStack_3._4_4_ = (pVVar2->forwardVector).y;
  fStack_4 = (pVVar2->forwardVector).z;
  uStack_5 = 0;
  uStack_6 = 0;
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
  (*pcRam_?)(localRotation,&uStack_3,&uStack_5);
  uVar8 = uStack_5;
  fVar9 = uStack_5._4_4_;
  fVar10 = (float)uStack_5;
  fVar11 = (float)uStack_6;
  fStack_12 = uStack_6._4_4_;
  fVar13 = uStack_5._4_4_ * uStack_5._4_4_ + (float)uStack_5 * (float)uStack_5 +
           (float)uStack_6 * (float)uStack_6 + uStack_6._4_4_ * uStack_6._4_4_;
  if (fVar13 < 0.0) {
    fVar13 = (float)FUN_?(fVar13);
  }
  else {
    fVar13 = SQRT(fVar13);
  }
  if (fVar13 < _UNK_?) {
    uStack_3 = uVar8;
    fStack_4 = fVar11;
  }
  else {
    fVar13 = _UNK_? / fVar13;
    fStack_4 = fVar13 * fVar11;
    fStack_12 = fVar13 * fStack_12;
    uStack_3 = CONCAT44(fVar13 * fVar9,fVar13 * fVar10);
  }
  (this->fields)._localRotation2D.x = (float)(undefined4)uStack_3;
  (this->fields)._localRotation2D.y = (float)uStack_3._4_4_;
  (this->fields)._localRotation2D.z = fStack_4;
  (this->fields)._localRotation2D.w = fStack_12;
  if ((this->fields)._parent == (GizmoTransform *)0x0) {
    fVar10 = (this->fields)._localRotation2D.y;
    fVar9 = (this->fields)._localRotation2D.z;
    fVar11 = (this->fields)._localRotation2D.w;
    (this->fields)._rotation2D.x = (this->fields)._localRotation2D.x;
    (this->fields)._rotation2D.y = fVar10;
    (this->fields)._rotation2D.z = fVar9;
    (this->fields)._rotation2D.w = fVar11;
  }
  else {
    uStack_5 = CONCAT44(unaff_XMM10_Db,unaff_XMM10_Da);
    uStack_6 = CONCAT44(unaff_XMM10_Dd,unaff_XMM10_Dc);
    uStack_3 = CONCAT44(unaff_XMM11_Db,unaff_XMM11_Da);
    fVar10 = (this->fields)._localRotation2D.x;
    fVar9 = (this->fields)._localRotation2D.y;
    fVar11 = (this->fields)._localRotation2D.z;
    fVar13 = (this->fields)._localRotation2D.w;
    pGVar14 = (this->fields)._parent;
    fVar15 = (pGVar14->fields)._rotation2D.x;
    fVar16 = (pGVar14->fields)._rotation2D.y;
    fVar17 = (pGVar14->fields)._rotation2D.z;
    fVar18 = (pGVar14->fields)._rotation2D.w;
    fVar19 = (fVar10 * fVar18 + fVar13 * fVar15 + fVar11 * fVar16) - fVar9 * fVar17;
    fVar20 = (fVar13 * fVar16 + fVar9 * fVar18 + fVar10 * fVar17) - fVar11 * fVar15;
    fVar21 = (fVar13 * fVar17 + fVar11 * fVar18 + fVar9 * fVar15) - fVar10 * fVar16;
    fVar9 = ((fVar13 * fVar18 - fVar10 * fVar15) - fVar9 * fVar16) - fVar11 * fVar17;
    fVar10 = fVar20 * fVar20 + fVar19 * fVar19 + fVar21 * fVar21 + fVar9 * fVar9;
    fStack_12 = unaff_XMM11_Dd;
    fStack_4 = unaff_XMM11_Dc;
    if (fVar10 < 0.0) {
      fVar10 = (float)FUN_?(fVar10);
    }
    else {
      fVar10 = SQRT(fVar10);
    }
    if (_UNK_? <= fVar10) {
      fVar10 = _UNK_? / fVar10;
      fVar19 = fVar19 * fVar10;
      fVar20 = fVar20 * fVar10;
      fVar21 = fVar21 * fVar10;
      fVar9 = fVar9 * fVar10;
    }
    (this->fields)._rotation2D.x = fVar19;
    (this->fields)._rotation2D.y = fVar20;
    (this->fields)._rotation2D.z = fVar21;
    (this->fields)._rotation2D.w = fVar9;
  }
  aQStack_22[0].x = (this->fields)._rotation2D.x;
  aQStack_22[0].y = (this->fields)._rotation2D.y;
  aQStack_22[0].z = (this->fields)._rotation2D.z;
  aQStack_22[0].w = (this->fields)._rotation2D.w;
  fVar10 = QuaternionEx::QuaternionEx_ConvertTo2DRotation(aQStack_22,(MethodInfo *)0x0);
  (this->fields)._rotation2DDegrees = fVar10;
  GizmoTransform_Update2DAxes(this,(MethodInfo *)0x0);
  GizmoTransform_UpdateChildTransforms2D(this,(MethodInfo *)0x0);
  pGVar23 = (this->fields).Changed;
  (this->fields)._firingChanged2DEvent = 1;
  if (pGVar23 != (GizmoEntityTransformChangedHandler *)0x0) {
    (*(pGVar23->fields)._._.invoke_impl)
              ((pGVar23->fields)._._.method_code,this,0x100000000,(pGVar23->fields)._._.method);
  }
  (this->fields)._firingChanged2DEvent = 0;
  return;
}


/* Void ChangeLocalRotation2D(Quaternion) */

void Assembly-CSharp.dll::RTG::GizmoTransform::GizmoTransform_ChangeLocalRotation2D_1
               (GizmoTransform *this,Quaternion *localRotation,MethodInfo *method)

{
  fVar1 = localRotation->x;
  fVar2 = localRotation->y;
  fVar3 = localRotation->z;
  fVar4 = localRotation->w;
  fVar5 = fVar2 * fVar2 + fVar1 * fVar1 + fVar3 * fVar3 + fVar4 * fVar4;
  if (fVar5 < 0.0) {
    stack0xffffffffffffff80 = &UNK_?;
    fVar5 = (float)FUN_?(fVar5);
  }
  else {
    fVar5 = SQRT(fVar5);
  }
  fStack_6 = fVar1;
  fStack_7 = fVar2;
  fStack_8 = fVar3;
  fStack_9 = fVar4;
  if (_UNK_? <= fVar5) {
    fVar5 = _UNK_? / fVar5;
    fStack_6 = fVar5 * fVar1;
    fStack_7 = fVar5 * fVar2;
    fStack_8 = fVar5 * fVar3;
    fStack_9 = fVar5 * fVar4;
  }
  (this->fields)._localRotation2D.x = fStack_6;
  (this->fields)._localRotation2D.y = fStack_7;
  (this->fields)._localRotation2D.z = fStack_8;
  (this->fields)._localRotation2D.w = fStack_9;
  if ((this->fields)._parent == (GizmoTransform *)0x0) {
    fVar1 = (this->fields)._localRotation2D.y;
    fVar2 = (this->fields)._localRotation2D.z;
    fVar3 = (this->fields)._localRotation2D.w;
    (this->fields)._rotation2D.x = (this->fields)._localRotation2D.x;
    (this->fields)._rotation2D.y = fVar1;
    (this->fields)._rotation2D.z = fVar2;
    (this->fields)._rotation2D.w = fVar3;
  }
  else {
    fVar1 = (this->fields)._localRotation2D.x;
    fVar2 = (this->fields)._localRotation2D.y;
    fVar3 = (this->fields)._localRotation2D.z;
    fVar4 = (this->fields)._localRotation2D.w;
    pGVar10 = (this->fields)._parent;
    fVar5 = (pGVar10->fields)._rotation2D.x;
    fVar11 = (pGVar10->fields)._rotation2D.y;
    fVar12 = (pGVar10->fields)._rotation2D.z;
    fVar13 = (pGVar10->fields)._rotation2D.w;
    fVar14 = (fVar1 * fVar13 + fVar4 * fVar5 + fVar3 * fVar11) - fVar2 * fVar12;
    fVar15 = (fVar4 * fVar11 + fVar2 * fVar13 + fVar1 * fVar12) - fVar3 * fVar5;
    fVar16 = (fVar4 * fVar12 + fVar3 * fVar13 + fVar2 * fVar5) - fVar1 * fVar11;
    fVar2 = ((fVar4 * fVar13 - fVar1 * fVar5) - fVar2 * fVar11) - fVar3 * fVar12;
    fVar1 = fVar15 * fVar15 + fVar14 * fVar14 + fVar16 * fVar16 + fVar2 * fVar2;
    fStack_6 = unaff_XMM10_Da;
    fStack_7 = unaff_XMM10_Db;
    fStack_8 = unaff_XMM10_Dc;
    fStack_9 = unaff_XMM10_Dd;
    if (fVar1 < 0.0) {
      fVar1 = (float)FUN_?(fVar1);
    }
    else {
      fVar1 = SQRT(fVar1);
    }
    if (_UNK_? <= fVar1) {
      fVar1 = _UNK_? / fVar1;
      fVar14 = fVar14 * fVar1;
      fVar15 = fVar15 * fVar1;
      fVar16 = fVar16 * fVar1;
      fVar2 = fVar2 * fVar1;
    }
    (this->fields)._rotation2D.x = fVar14;
    (this->fields)._rotation2D.y = fVar15;
    (this->fields)._rotation2D.z = fVar16;
    (this->fields)._rotation2D.w = fVar2;
  }
  auStack_17._0_4_ = (this->fields)._rotation2D.x;
  auStack_17._4_4_ = (this->fields)._rotation2D.y;
  auStack_17._8_4_ = (this->fields)._rotation2D.z;
  unique0x100005fb = (this->fields)._rotation2D.w;
  fVar1 = QuaternionEx::QuaternionEx_ConvertTo2DRotation((Quaternion *)auStack_17,(MethodInfo *)0x0)
  ;
  (this->fields)._rotation2DDegrees = fVar1;
  GizmoTransform_Update2DAxes(this,(MethodInfo *)0x0);
  GizmoTransform_UpdateChildTransforms2D(this,(MethodInfo *)0x0);
  pGVar18 = (this->fields).Changed;
  (this->fields)._firingChanged2DEvent = 1;
  if (pGVar18 != (GizmoEntityTransformChangedHandler *)0x0) {
    (*(pGVar18->fields)._._.invoke_impl)
              ((pGVar18->fields)._._.method_code,this,0x100000000,(pGVar18->fields)._._.method);
  }
  (this->fields)._firingChanged2DEvent = 0;
  return;
}


/* Void ChangeLocalRotation3D(Quaternion) */

void Assembly-CSharp.dll::RTG::GizmoTransform::GizmoTransform_ChangeLocalRotation3D
               (GizmoTransform *this,Quaternion *localRotation,MethodInfo *method)

{
  fStack_1 = localRotation->x;
  fStack_2 = localRotation->y;
  fStack_3 = localRotation->z;
  fStack_4 = localRotation->w;
  fVar5 = fStack_2 * fStack_2 + fStack_1 * fStack_1 + fStack_3 * fStack_3 +
          fStack_4 * fStack_4;
  if (fVar5 < 0.0) {
    fVar5 = (float)FUN_?(fVar5);
  }
  else {
    fVar5 = SQRT(fVar5);
  }
  if (_UNK_? <= fVar5) {
    fVar5 = _UNK_? / fVar5;
    fStack_1 = fVar5 * fStack_1;
    fStack_2 = fVar5 * fStack_2;
    fStack_3 = fVar5 * fStack_3;
    fStack_4 = fVar5 * fStack_4;
  }
  (this->fields)._localRotation3D.x = fStack_1;
  (this->fields)._localRotation3D.y = fStack_2;
  (this->fields)._localRotation3D.z = fStack_3;
  (this->fields)._localRotation3D.w = fStack_4;
  if ((this->fields)._parent == (GizmoTransform *)0x0) {
    fVar5 = (this->fields)._localRotation3D.y;
    fVar6 = (this->fields)._localRotation3D.z;
    fVar7 = (this->fields)._localRotation3D.w;
    (this->fields)._rotation3D.x = (this->fields)._localRotation3D.x;
    (this->fields)._rotation3D.y = fVar5;
    (this->fields)._rotation3D.z = fVar6;
    (this->fields)._rotation3D.w = fVar7;
  }
  else {
    fVar5 = (this->fields)._localRotation3D.x;
    fVar6 = (this->fields)._localRotation3D.y;
    fVar7 = (this->fields)._localRotation3D.z;
    fVar8 = (this->fields)._localRotation3D.w;
    pGVar9 = (this->fields)._parent;
    fVar10 = (pGVar9->fields)._rotation3D.x;
    fVar11 = (pGVar9->fields)._rotation3D.y;
    fVar12 = (pGVar9->fields)._rotation3D.z;
    fVar13 = (pGVar9->fields)._rotation3D.w;
    fVar14 = (fVar5 * fVar13 + fVar8 * fVar10 + fVar7 * fVar11) - fVar6 * fVar12;
    fVar15 = (fVar8 * fVar11 + fVar6 * fVar13 + fVar5 * fVar12) - fVar7 * fVar10;
    fVar16 = (fVar8 * fVar12 + fVar7 * fVar13 + fVar6 * fVar10) - fVar5 * fVar11;
    fVar6 = ((fVar8 * fVar13 - fVar5 * fVar10) - fVar6 * fVar11) - fVar7 * fVar12;
    fVar5 = fVar15 * fVar15 + fVar14 * fVar14 + fVar16 * fVar16 + fVar6 * fVar6;
    if (fVar5 < 0.0) {
      fVar5 = (float)FUN_?(fVar5);
    }
    else {
      fVar5 = SQRT(fVar5);
    }
    if (_UNK_? <= fVar5) {
      fVar5 = _UNK_? / fVar5;
      fVar14 = fVar14 * fVar5;
      fVar15 = fVar15 * fVar5;
      fVar16 = fVar16 * fVar5;
      fVar6 = fVar6 * fVar5;
    }
    (this->fields)._rotation3D.x = fVar14;
    (this->fields)._rotation3D.y = fVar15;
    (this->fields)._rotation3D.z = fVar16;
    (this->fields)._rotation3D.w = fVar6;
  }
  GizmoTransform_Update3DAxes(this,(MethodInfo *)0x0);
  GizmoTransform_UpdateChildTransforms3D(this,(MethodInfo *)0x0);
  pGVar17 = (this->fields).Changed;
  (this->fields)._firingChanged3DEvent = 1;
  if (pGVar17 != (GizmoEntityTransformChangedHandler *)0x0) {
    (*(pGVar17->fields)._._.invoke_impl)
              ((pGVar17->fields)._._.method_code,this,0x200000000,(pGVar17->fields)._._.method);
  }
  (this->fields)._firingChanged3DEvent = 0;
  return;
}


/* Void ChangePosition2D(Vector2) */

void Assembly-CSharp.dll::RTG::GizmoTransform::GizmoTransform_ChangePosition2D
               (GizmoTransform *this,Vector2 position,MethodInfo *method)

{
  (this->fields)._position2D = position;
  if ((this->fields)._parent == (GizmoTransform *)0x0) {
    fVar1 = (this->fields)._position2D.x;
    fVar2 = (this->fields)._position2D.y;
  }
  else {
    pGVar3 = (this->fields)._parent;
    fStack_4 = (pGVar3->fields)._rotation2D.x;
    fStack_5 = (pGVar3->fields)._rotation2D.y;
    fStack_6 = (pGVar3->fields)._rotation2D.z;
    fStack_7 = (pGVar3->fields)._rotation2D.w;
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
    (*pcRam_?)(&fStack_4);
    pGVar3 = (this->fields)._parent;
    if (pGVar3 == (GizmoTransform *)0x0) {
      FUN_?();
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    fVar2 = (this->fields)._position2D.x - (pGVar3->fields)._position2D.x;
    fVar10 = (this->fields)._position2D.y - (pGVar3->fields)._position2D.y;
    fVar1 = (_UNK_? - 0.0) * fVar2 + fVar10 * 0.0 + 0.0;
    fVar2 = (_UNK_? - 0.0) * fVar10 + fVar2 * 0.0 + 0.0;
  }
  (this->fields)._localPosition2D.x = fVar1;
  (this->fields)._localPosition2D.y = fVar2;
  GizmoTransform_UpdateChildTransforms2D(this,(MethodInfo *)0x0);
  pGVar11 = (this->fields).Changed;
  (this->fields)._firingChanged2DEvent = 1;
  if (pGVar11 != (GizmoEntityTransformChangedHandler *)0x0) {
    (*(pGVar11->fields)._._.invoke_impl)
              ((pGVar11->fields)._._.method_code,this,0x100000000,(pGVar11->fields)._._.method);
  }
  (this->fields)._firingChanged2DEvent = 0;
  return;
}


/* Void ChangePosition3D(Vector3) */

void Assembly-CSharp.dll::RTG::GizmoTransform::GizmoTransform_ChangePosition3D
               (GizmoTransform *this,Vector3 *position,MethodInfo *method)

{
  fVar1 = position->y;
  fVar2 = position->z;
  (this->fields)._position3D.x = position->x;
  (this->fields)._position3D.y = fVar1;
  (this->fields)._position3D.z = fVar2;
  if ((this->fields)._parent == (GizmoTransform *)0x0) {
    fVar1 = (this->fields)._position3D.y;
    fVar2 = (this->fields)._position3D.z;
    (this->fields)._localPosition3D.x = (this->fields)._position3D.x;
    (this->fields)._localPosition3D.y = fVar1;
    (this->fields)._localPosition3D.z = fVar2;
  }
  else {
    pGVar3 = (this->fields)._parent;
    uStack_4 = 0;
    uStack_5 = 0;
    fStack_6 = (pGVar3->fields)._rotation3D.x;
    fStack_7 = (pGVar3->fields)._rotation3D.y;
    fStack_8 = (pGVar3->fields)._rotation3D.z;
    fStack_9 = (pGVar3->fields)._rotation3D.w;
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
    (*pcRam_?)(&fStack_6);
    pGVar3 = (this->fields)._parent;
    if (pGVar3 == (GizmoTransform *)0x0) {
      FUN_?();
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    uVar12 = (pGVar3->fields)._position3D.x;
    uVar13 = (pGVar3->fields)._position3D.y;
    fVar14 = (this->fields)._position3D.z - (pGVar3->fields)._position3D.z;
    uVar15 = (this->fields)._position3D.x;
    fVar16 = (float)uVar15 - (float)uVar12;
    fVar17 = (this->fields)._position3D.y - (float)uVar13;
    fVar1 = uStack_4._4_4_ + uStack_4._4_4_;
    fVar2 = (float)uStack_5 + (float)uStack_5;
    fVar18 = uStack_5._4_4_ * ((float)uStack_4 + (float)uStack_4);
    fVar19 = (float)uStack_4 * ((float)uStack_4 + (float)uStack_4);
    fVar20 = _UNK_? - ((float)uStack_5 * fVar2 + fVar19);
    fVar19 = _UNK_? - (uStack_4._4_4_ * fVar1 + fVar19);
    (this->fields)._localPosition3D.x =
         (_UNK_? - ((float)uStack_5 * fVar2 + uStack_4._4_4_ * fVar1)) * fVar16 +
         ((float)uStack_4 * fVar1 - uStack_5._4_4_ * fVar2) * fVar17 +
         (uStack_5._4_4_ * fVar1 + (float)uStack_4 * fVar2) * fVar14;
    (this->fields)._localPosition3D.y =
         fVar20 * fVar17 + (uStack_5._4_4_ * fVar2 + (float)uStack_4 * fVar1) * fVar16 +
         (uStack_4._4_4_ * fVar2 - fVar18) * fVar14;
    (this->fields)._localPosition3D.z =
         ((float)uStack_4 * fVar2 - uStack_5._4_4_ * fVar1) * fVar16 +
         (fVar18 + uStack_4._4_4_ * fVar2) * fVar17 + fVar19 * fVar14;
  }
  GizmoTransform_UpdateChildTransforms3D(this,(MethodInfo *)0x0);
  pGVar21 = (this->fields).Changed;
  (this->fields)._firingChanged3DEvent = 1;
  if (pGVar21 != (GizmoEntityTransformChangedHandler *)0x0) {
    (*(pGVar21->fields)._._.invoke_impl)
              ((pGVar21->fields)._._.method_code,this,0x200000000,(pGVar21->fields)._._.method);
  }
  (this->fields)._firingChanged3DEvent = 0;
  return;
}


/* Void ChangeRotation2D(Single) */

void Assembly-CSharp.dll::RTG::GizmoTransform::GizmoTransform_ChangeRotation2D
               (GizmoTransform *this,float rotation,MethodInfo *method)

{
  fVar1 = (float)FUN_?(rotation,_UNK_?);
  bVar2 = cRam_? == '\0';
  (this->fields)._rotation2DDegrees = fVar1;
  if (bVar2) {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar3 = TypeInfo__UnityEngine__Vector3->static_fields;
  uStack_4._0_4_ = (pVVar3->forwardVector).x;
  uStack_4._4_4_ = (pVVar3->forwardVector).y;
  fStack_5 = (pVVar3->forwardVector).z;
  uStack_6 = 0;
  uStack_7 = 0;
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
  (*pcRam_?)(fVar1,&uStack_4,&uStack_6);
  uVar9 = uStack_6;
  fVar10 = uStack_6._4_4_;
  fVar1 = (float)uStack_6;
  fVar11 = (float)uStack_7;
  fStack_12 = uStack_7._4_4_;
  fVar13 = uStack_6._4_4_ * uStack_6._4_4_ + (float)uStack_6 * (float)uStack_6 +
          (float)uStack_7 * (float)uStack_7 + uStack_7._4_4_ * uStack_7._4_4_;
  if (fVar13 < 0.0) {
    fVar13 = (float)FUN_?(fVar13);
  }
  else {
    fVar13 = SQRT(fVar13);
  }
  if (fVar13 < _UNK_?) {
    uStack_4 = uVar9;
    fStack_5 = fVar11;
  }
  else {
    fVar13 = _UNK_? / fVar13;
    fStack_5 = fVar13 * fVar11;
    fStack_12 = fVar13 * fStack_12;
    uStack_4 = CONCAT44(fVar13 * fVar10,fVar13 * fVar1);
  }
  (this->fields)._rotation2D.x = (float)(undefined4)uStack_4;
  (this->fields)._rotation2D.y = (float)uStack_4._4_4_;
  (this->fields)._rotation2D.z = fStack_5;
  (this->fields)._rotation2D.w = fStack_12;
  if ((this->fields)._parent == (GizmoTransform *)0x0) {
    fVar1 = (this->fields)._rotation2D.y;
    fVar10 = (this->fields)._rotation2D.z;
    fVar11 = (this->fields)._rotation2D.w;
    (this->fields)._localRotation2D.x = (this->fields)._rotation2D.x;
    (this->fields)._localRotation2D.y = fVar1;
    (this->fields)._localRotation2D.z = fVar10;
    (this->fields)._localRotation2D.w = fVar11;
  }
  else {
    pGVar14 = (this->fields)._parent;
    aQStack_15[0].x = (pGVar14->fields)._rotation2D.x;
    aQStack_15[0].y = (pGVar14->fields)._rotation2D.y;
    aQStack_15[0].z = (pGVar14->fields)._rotation2D.z;
    aQStack_15[0].w = (pGVar14->fields)._rotation2D.w;
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
    uStack_6 = CONCAT44(unaff_XMM10_Db,unaff_XMM10_Da);
    uStack_7 = CONCAT44(unaff_XMM10_Dd,unaff_XMM10_Dc);
    uStack_4 = CONCAT44(unaff_XMM11_Db,unaff_XMM11_Da);
    fStack_5 = unaff_XMM11_Dc;
    fStack_12 = unaff_XMM11_Dd;
    (*pcRam_?)(aQStack_15);
    fVar1 = (this->fields)._rotation2D.x;
    fVar10 = (this->fields)._rotation2D.y;
    fVar11 = (this->fields)._rotation2D.z;
    fVar13 = (this->fields)._rotation2D.w;
    fVar16 = (fVar13 * 0.0 + fVar1 * 0.0 + fVar11 * 0.0) - fVar10 * 0.0;
    fVar17 = (fVar10 * 0.0 + fVar13 * 0.0 + fVar1 * 0.0) - fVar11 * 0.0;
    fVar18 = ((fVar13 * 0.0 - fVar1 * 0.0) - fVar10 * 0.0) - fVar11 * 0.0;
    fVar10 = (fVar11 * 0.0 + fVar13 * 0.0 + fVar10 * 0.0) - fVar1 * 0.0;
    fVar1 = fVar17 * fVar17 + fVar16 * fVar16 + fVar10 * fVar10 + fVar18 * fVar18;
    if (fVar1 < 0.0) {
      fVar1 = (float)FUN_?(fVar1);
    }
    else {
      fVar1 = SQRT(fVar1);
    }
    if (_UNK_? <= fVar1) {
      fVar1 = _UNK_? / fVar1;
      fVar16 = fVar16 * fVar1;
      fVar17 = fVar17 * fVar1;
      fVar10 = fVar10 * fVar1;
      fVar18 = fVar18 * fVar1;
    }
    (this->fields)._localRotation2D.x = fVar16;
    (this->fields)._localRotation2D.y = fVar17;
    (this->fields)._localRotation2D.z = fVar10;
    (this->fields)._localRotation2D.w = fVar18;
  }
  aQStack_15[0].x = (this->fields)._localRotation2D.x;
  aQStack_15[0].y = (this->fields)._localRotation2D.y;
  aQStack_15[0].z = (this->fields)._localRotation2D.z;
  aQStack_15[0].w = (this->fields)._localRotation2D.w;
  fVar1 = QuaternionEx::QuaternionEx_ConvertTo2DRotation(aQStack_15,(MethodInfo *)0x0);
  (this->fields)._localRotation2DDegrees = fVar1;
  GizmoTransform_Update2DAxes(this,(MethodInfo *)0x0);
  GizmoTransform_UpdateChildTransforms2D(this,(MethodInfo *)0x0);
  pGVar19 = (this->fields).Changed;
  (this->fields)._firingChanged2DEvent = 1;
  if (pGVar19 != (GizmoEntityTransformChangedHandler *)0x0) {
    (*(pGVar19->fields)._._.invoke_impl)
              ((pGVar19->fields)._._.method_code,this,0x100000000,(pGVar19->fields)._._.method);
  }
  (this->fields)._firingChanged2DEvent = 0;
  return;
}


/* Void ChangeRotation2D(Quaternion) */

void Assembly-CSharp.dll::RTG::GizmoTransform::GizmoTransform_ChangeRotation2D_1
               (GizmoTransform *this,Quaternion *rotation,MethodInfo *method)

{
  fVar1 = rotation->x;
  fVar2 = rotation->y;
  fVar3 = rotation->z;
  fVar4 = rotation->w;
  fVar5 = fVar2 * fVar2 + fVar1 * fVar1 + fVar3 * fVar3 + fVar4 * fVar4;
  if (fVar5 < 0.0) {
    auStack_6._8_8_ = &UNK_?;
    fVar5 = (float)FUN_?(fVar5);
  }
  else {
    fVar5 = SQRT(fVar5);
  }
  fStack_7 = fVar1;
  fStack_8 = fVar2;
  fStack_9 = fVar3;
  fStack_10 = fVar4;
  if (_UNK_? <= fVar5) {
    fVar5 = _UNK_? / fVar5;
    fStack_7 = fVar5 * fVar1;
    fStack_8 = fVar5 * fVar2;
    fStack_9 = fVar5 * fVar3;
    fStack_10 = fVar5 * fVar4;
  }
  (this->fields)._rotation2D.x = fStack_7;
  (this->fields)._rotation2D.y = fStack_8;
  (this->fields)._rotation2D.z = fStack_9;
  (this->fields)._rotation2D.w = fStack_10;
  if ((this->fields)._parent == (GizmoTransform *)0x0) {
    fVar1 = (this->fields)._rotation2D.y;
    fVar2 = (this->fields)._rotation2D.z;
    fVar3 = (this->fields)._rotation2D.w;
    (this->fields)._localRotation2D.x = (this->fields)._rotation2D.x;
    (this->fields)._localRotation2D.y = fVar1;
    (this->fields)._localRotation2D.z = fVar2;
    (this->fields)._localRotation2D.w = fVar3;
  }
  else {
    pGVar11 = (this->fields)._parent;
    auStack_6._0_4_ = (pGVar11->fields)._rotation2D.x;
    auStack_6._4_4_ = (pGVar11->fields)._rotation2D.y;
    auStack_6._8_4_ = (pGVar11->fields)._rotation2D.z;
    auStack_6._12_4_ = (pGVar11->fields)._rotation2D.w;
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
    fStack_7 = unaff_XMM10_Da;
    fStack_8 = unaff_XMM10_Db;
    fStack_9 = unaff_XMM10_Dc;
    fStack_10 = unaff_XMM10_Dd;
    (*pcRam_?)(auStack_6);
    fVar1 = (this->fields)._rotation2D.x;
    fVar2 = (this->fields)._rotation2D.y;
    fVar3 = (this->fields)._rotation2D.z;
    fVar4 = (this->fields)._rotation2D.w;
    fVar14 = (fVar4 * 0.0 + fVar1 * 0.0 + fVar3 * 0.0) - fVar2 * 0.0;
    fVar15 = (fVar2 * 0.0 + fVar4 * 0.0 + fVar1 * 0.0) - fVar3 * 0.0;
    fVar5 = ((fVar4 * 0.0 - fVar1 * 0.0) - fVar2 * 0.0) - fVar3 * 0.0;
    fVar2 = (fVar3 * 0.0 + fVar4 * 0.0 + fVar2 * 0.0) - fVar1 * 0.0;
    fVar1 = fVar15 * fVar15 + fVar14 * fVar14 + fVar2 * fVar2 + fVar5 * fVar5;
    if (fVar1 < 0.0) {
      fVar1 = (float)FUN_?(fVar1);
    }
    else {
      fVar1 = SQRT(fVar1);
    }
    if (_UNK_? <= fVar1) {
      fVar1 = _UNK_? / fVar1;
      fVar14 = fVar14 * fVar1;
      fVar15 = fVar15 * fVar1;
      fVar2 = fVar2 * fVar1;
      fVar5 = fVar5 * fVar1;
    }
    (this->fields)._localRotation2D.x = fVar14;
    (this->fields)._localRotation2D.y = fVar15;
    (this->fields)._localRotation2D.z = fVar2;
    (this->fields)._localRotation2D.w = fVar5;
  }
  auStack_6._0_4_ = (this->fields)._localRotation2D.x;
  auStack_6._4_4_ = (this->fields)._localRotation2D.y;
  auStack_6._8_4_ = (this->fields)._localRotation2D.z;
  auStack_6._12_4_ = (this->fields)._localRotation2D.w;
  fVar1 = QuaternionEx::QuaternionEx_ConvertTo2DRotation((Quaternion *)auStack_6,(MethodInfo *)0x0)
  ;
  (this->fields)._localRotation2DDegrees = fVar1;
  GizmoTransform_Update2DAxes(this,(MethodInfo *)0x0);
  GizmoTransform_UpdateChildTransforms2D(this,(MethodInfo *)0x0);
  pGVar16 = (this->fields).Changed;
  (this->fields)._firingChanged2DEvent = 1;
  if (pGVar16 != (GizmoEntityTransformChangedHandler *)0x0) {
    (*(pGVar16->fields)._._.invoke_impl)
              ((pGVar16->fields)._._.method_code,this,0x100000000,(pGVar16->fields)._._.method);
  }
  (this->fields)._firingChanged2DEvent = 0;
  return;
}


/* Void ChangeRotation3D(Quaternion) */

void Assembly-CSharp.dll::RTG::GizmoTransform::GizmoTransform_ChangeRotation3D
               (GizmoTransform *this,Quaternion *rotation,MethodInfo *method)

{
  fVar1 = rotation->x;
  fVar2 = rotation->y;
  fVar3 = rotation->z;
  fVar4 = rotation->w;
  fVar5 = fVar2 * fVar2 + fVar1 * fVar1 + fVar3 * fVar3 + fVar4 * fVar4;
  if (fVar5 < 0.0) {
    fVar5 = (float)FUN_?(fVar5);
  }
  else {
    fVar5 = SQRT(fVar5);
  }
  fStack_6 = fVar1;
  fStack_7 = fVar2;
  fStack_8 = fVar3;
  fStack_9 = fVar4;
  if (_UNK_? <= fVar5) {
    fVar5 = _UNK_? / fVar5;
    fStack_6 = fVar5 * fVar1;
    fStack_7 = fVar5 * fVar2;
    fStack_8 = fVar5 * fVar3;
    fStack_9 = fVar5 * fVar4;
  }
  (this->fields)._rotation3D.x = fStack_6;
  (this->fields)._rotation3D.y = fStack_7;
  (this->fields)._rotation3D.z = fStack_8;
  (this->fields)._rotation3D.w = fStack_9;
  if ((this->fields)._parent == (GizmoTransform *)0x0) {
    fVar1 = (this->fields)._rotation3D.y;
    fVar2 = (this->fields)._rotation3D.z;
    fVar3 = (this->fields)._rotation3D.w;
    (this->fields)._localRotation3D.x = (this->fields)._rotation3D.x;
    (this->fields)._localRotation3D.y = fVar1;
    (this->fields)._localRotation3D.z = fVar2;
    (this->fields)._localRotation3D.w = fVar3;
  }
  else {
    pGVar10 = (this->fields)._parent;
    fStack_11 = (pGVar10->fields)._rotation3D.x;
    fStack_12 = (pGVar10->fields)._rotation3D.y;
    puStack_13 = *(undefined **)&(pGVar10->fields)._rotation3D.z;
    pcVar14 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar14 = (code *)FUN_?(&UNK_?), pcVar14 == (code *)0x0)) {
      uVar15 = func_?(&UNK_?);
      FUN_?(uVar15,0);
      pcVar14 = (code *)swi(3);
      (*pcVar14)();
      return;
    }
    pcRam_? = pcVar14;
    fStack_6 = unaff_XMM10_Da;
    fStack_7 = unaff_XMM10_Db;
    fStack_8 = unaff_XMM10_Dc;
    fStack_9 = unaff_XMM10_Dd;
    (*pcRam_?)(&fStack_11);
    fVar1 = (this->fields)._rotation3D.x;
    fVar2 = (this->fields)._rotation3D.y;
    fVar3 = (this->fields)._rotation3D.z;
    fVar4 = (this->fields)._rotation3D.w;
    fVar5 = (fVar4 * 0.0 + fVar1 * 0.0 + fVar3 * 0.0) - fVar2 * 0.0;
    fVar16 = (fVar4 * 0.0 + fVar2 * 0.0 + fVar1 * 0.0) - fVar3 * 0.0;
    fVar17 = (fVar4 * 0.0 + fVar3 * 0.0 + fVar2 * 0.0) - fVar1 * 0.0;
    fVar2 = ((fVar4 * 0.0 - fVar1 * 0.0) - fVar2 * 0.0) - fVar3 * 0.0;
    fVar1 = fVar16 * fVar16 + fVar5 * fVar5 + fVar17 * fVar17 + fVar2 * fVar2;
    if (fVar1 < 0.0) {
      fVar1 = (float)FUN_?(fVar1);
    }
    else {
      fVar1 = SQRT(fVar1);
    }
    if (_UNK_? <= fVar1) {
      fVar1 = _UNK_? / fVar1;
      fVar5 = fVar5 * fVar1;
      fVar16 = fVar16 * fVar1;
      fVar17 = fVar17 * fVar1;
      fVar2 = fVar2 * fVar1;
    }
    (this->fields)._localRotation3D.x = fVar5;
    (this->fields)._localRotation3D.y = fVar16;
    (this->fields)._localRotation3D.z = fVar17;
    (this->fields)._localRotation3D.w = fVar2;
  }
  GizmoTransform_Update3DAxes(this,(MethodInfo *)0x0);
  GizmoTransform_UpdateChildTransforms3D(this,(MethodInfo *)0x0);
  pGVar18 = (this->fields).Changed;
  (this->fields)._firingChanged3DEvent = 1;
  if (pGVar18 != (GizmoEntityTransformChangedHandler *)0x0) {
    (*(pGVar18->fields)._._.invoke_impl)
              ((pGVar18->fields)._._.method_code,this,0x200000000,(pGVar18->fields)._._.method);
  }
  (this->fields)._firingChanged3DEvent = 0;
  return;
}


/* List`1[RTG.GizmoTransform] FilterParentsOnly(IEnumerable`1[RTG.GizmoTransform]) */

List_1_RTG_GizmoTransform_ *
Assembly-CSharp.dll::RTG::GizmoTransform::GizmoTransform_FilterParentsOnly
          (IEnumerable_1_RTG_GizmoTransform_ *transforms,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__IDisposable);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__IEnumerable<RTG::GizmoTransform>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__IEnumerator<RTG::GizmoTransform>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__IEnumerator);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<RTG::GizmoTransform>__Add_RTG__GizmoTransform_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<RTG::GizmoTransform>__List_int_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<RTG::GizmoTransform>__List__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<RTG::GizmoTransform>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  lStackX_20 = 0;
  pLVar1 = (List_1_RTG_GizmoTransform_ *)
           FUN_?(TypeInfo__System__Collections__Generic__List<RTG::GizmoTransform>);
  if (transforms == (IEnumerable_1_RTG_GizmoTransform_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
    __Il2CppFullySharedGenericType]::
    LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
              ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)pLVar1,
               MethodInfo__System__Collections__Generic__List<RTG::GizmoTransform>__List__);
    return pLVar1;
  }
  pvVar2 = MethodInfo__System__Collections__Generic__List<RTG::GizmoTransform>__List_int_->klass->
           rgctx_data[3].rgctxDataDummy;
  if ((*(byte *)((longlong)pvVar2 + 0x135) & 1) == 0) {
    pvVar2 = (void *)FUN_?(pvVar2);
  }
  pGVar3 = (GizmoTransform__Array *)FUN_?(pvVar2,10);
  (pLVar1->fields)._items = pGVar3;
  if (iRam_? != 0) {
    uVar4 = (uint)((ulonglong)&pLVar1->fields >> 0xc);
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
  pLStack_8 = pLVar1;
  lStack_9 = FUN_?(0,
                            TypeInfo__System__Collections__Generic__IEnumerable<RTG::GizmoTransform>
                            ,transforms);
  uStack_10 = 0;
  plStack_11 = &lStack_9;
code_?:
  do {
    if (lStack_9 == 0) {
code_?:
      FUN_?();
      FUN_?();
      pcVar12 = (code *)swi(3);
      pLVar1 = (List_1_RTG_GizmoTransform_ *)(*pcVar12)();
      return pLVar1;
    }
    cVar13 = FUN_?(0,TypeInfo__System__Collections__IEnumerator);
    if (cVar13 == '\0') {
      if (*plStack_11 != 0) {
        FUN_?(0,TypeInfo__System__IDisposable,*plStack_11);
      }
      return pLVar1;
    }
    if (lStack_9 == 0) {
code_?:
      FUN_?();
      goto code_?;
    }
    lVar14 = FUN_?();
    lStack_15 = lVar14;
    lStackX_20 = FUN_?(0,
                               TypeInfo__System__Collections__Generic__IEnumerable<RTG::GizmoTransform>
                               ,transforms);
    uStack_16 = 0;
    plStack_17 = &lStackX_20;
code_?:
    do {
      do {
        if (lStackX_20 == 0) {
code_?:
          FUN_?();
          FUN_?();
code_?:
          FUN_?();
          goto code_?;
        }
        cVar13 = FUN_?(0,TypeInfo__System__Collections__IEnumerator);
        if (cVar13 == '\0') {
          if (lStackX_20 != 0) {
            FUN_?(0,TypeInfo__System__IDisposable,lStackX_20);
          }
          if (pLVar1 == (List_1_RTG_GizmoTransform_ *)0x0) goto code_?;
          FUN_?(pLVar1,lVar14);
          goto code_?;
        }
        if (lStackX_20 == 0) {
code_?:
          FUN_?();
          goto code_?;
        }
        lVar18 = FUN_?();
      } while (lVar18 == lVar14);
      if (lVar14 == 0) {
        FUN_?();
        goto code_?;
      }
      for (lVar19 = *(longlong *)(lVar14 + 0xa0); lVar19 != lVar18;
          lVar19 = *(longlong *)(lVar19 + 0xa0)) {
        if (lVar19 == 0) goto code_?;
      }
    } while (lVar19 == 0);
    if (lStackX_20 != 0) {
      FUN_?(0,TypeInfo__System__IDisposable,lStackX_20);
    }
  } while( true );
}


/* PlaneQuadrantId Get3DQuadrantFacingCamera(PlaneId, Camera) */

PlaneQuadrantId__Enum
Assembly-CSharp.dll::RTG::GizmoTransform::GizmoTransform_Get3DQuadrantFacingCamera
          (GizmoTransform *this,PlaneId__Enum planeId,Camera *camera,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__CameraEx);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__PlaneIdHelper);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__RTG__PlaneIdHelper->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (planeId == PlaneId__Enum_XY) {
    lVar1 = 0x2c;
    uVar2 = 0;
    lVar3 = 0x20;
    uVar4 = 1;
  }
  else if (planeId == PlaneId__Enum_ZX) {
    uVar2 = 2;
    lVar3 = 0x38;
    uVar4 = 0;
    lVar1 = 0x20;
  }
  else {
    lVar1 = 0x38;
    uVar2 = 1;
    lVar3 = 0x2c;
    uVar4 = 2;
  }
  pVVar5 = (this->fields)._axes3D;
  if (pVVar5 != (Vector3__Array *)0x0) {
    if ((uint)pVVar5->max_length <= uVar2) {
code_?:
      FUN_?();
      pcVar6 = (code *)swi(3);
      PVar7 = (*pcVar6)();
      return PVar7;
    }
    VStack_8._0_8_ = *(undefined8 *)((longlong)pVVar5->vector + lVar3 + -0x20);
    fVar9 = *(float *)((longlong)(pVVar5->vector + -2) + lVar3);
    if (pVVar5 != (Vector3__Array *)0x0) {
      if ((uint)pVVar5->max_length <= uVar4) goto code_?;
      aVStack_10[0]._0_8_ = *(undefined8 *)((longlong)pVVar5->vector + lVar1 + -0x20);
      fVar11 = *(float *)((longlong)(pVVar5->vector + -2) + lVar1);
      uVar12._0_4_ = (this->fields)._position3D.x;
      uVar12._4_4_ = (this->fields)._position3D.y;
      fVar13 = (this->fields)._position3D.z;
      fVar14 = VStack_8.y;
      if (*(int *)&(TypeInfo__RTG__CameraEx->_1).field_0x1c == 0) {
        FUN_?();
      }
      VStack_8.y = fVar14;
      VStack_8.z = fVar9;
      VStack_15._0_8_ = uVar12;
      VStack_15.z = fVar13;
      bVar16 = CameraEx::CameraEx_IsPointFacingCamera
                         (camera,&VStack_15,&VStack_8,(MethodInfo *)0x0);
      uVar17._0_4_ = (this->fields)._position3D.x;
      uVar17._4_4_ = (this->fields)._position3D.y;
      fVar9 = (this->fields)._position3D.z;
      fVar13 = aVStack_10[0].y;
      if (*(int *)&(TypeInfo__RTG__CameraEx->_1).field_0x1c == 0) {
        FUN_?();
      }
      aVStack_10[0].y = fVar13;
      VStack_15._0_8_ = uVar17;
      VStack_15.z = fVar9;
      aVStack_10[0].z = fVar11;
      bVar18 = CameraEx::CameraEx_IsPointFacingCamera
                         (camera,&VStack_15,aVStack_10,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__RTG__PlaneIdHelper->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&
                      MethodInfo__System__Collections__Generic__List<RTG::PlaneIdHelper::PlaneQuadrantInfo>__FindAll_System__Predicate<RTG::PlaneIdHelper::PlaneQuadrantInfo>_
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__List<RTG::PlaneIdHelper::PlaneQuadrantInfo>__get_Item_int_
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__List<RTG::PlaneIdHelper::PlaneInfo>__get_Item_int_
                     );
        LOCK();
        UNLOCK();
        FUN_?(&TypeInfo__RTG__PlaneIdHelper);
        LOCK();
        UNLOCK();
        FUN_?(&TypeInfo__System__Predicate<RTG::PlaneIdHelper::PlaneQuadrantInfo>);
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__RTG__PlaneIdHelper____c__DisplayClass11_0___GetQuadrantFromAxesSigns_b__0_RTG__PlaneIdHelper__PlaneQuadrantInfo_
                     );
        LOCK();
        UNLOCK();
        FUN_?(&TypeInfo__RTG__PlaneIdHelper____c__DisplayClass11_0);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      lVar1 = FUN_?(TypeInfo__RTG__PlaneIdHelper____c__DisplayClass11_0);
      if (lVar1 != 0) {
        *(uint *)(lVar1 + 0x10) = bVar16 ^ 1;
        *(uint *)(lVar1 + 0x14) = bVar18 ^ 1;
        if (*(int *)&(TypeInfo__RTG__PlaneIdHelper->_1).field_0x1c == 0) {
          FUN_?(TypeInfo__RTG__PlaneIdHelper);
        }
        pLVar19 = TypeInfo__RTG__PlaneIdHelper->static_fields->_planeInfo;
        if (pLVar19 != (List_1_RTG_PlaneIdHelper_PlaneInfo_ *)0x0) {
          if ((uint)(pLVar19->fields)._size <= planeId) {
code_?:
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                      ((MethodInfo *)0x0);
            pcVar6 = (code *)swi(3);
            PVar7 = (*pcVar6)();
            return PVar7;
          }
          pPVar20 = (pLVar19->fields)._items;
          if (pPVar20 != (PlaneIdHelper_PlaneInfo__Array *)0x0) {
            if ((PlaneId__Enum)pPVar20->max_length <= planeId) goto code_?;
            pLVar21 = pPVar20->vector[(int)planeId].QuadrantInfo;
            uVar12 = FUN_?(
                                  TypeInfo__System__Predicate<RTG::PlaneIdHelper::PlaneQuadrantInfo>
                                  );
            FUN_?(uVar12,lVar1,
                          MethodInfo__RTG__PlaneIdHelper____c__DisplayClass11_0___GetQuadrantFromAxesSigns_b__0_RTG__PlaneIdHelper__PlaneQuadrantInfo_
                         );
            if (pLVar21 != (List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)0x0) {
              lVar1 = FUN_?(pLVar21,uVar12);
              if (lVar1 != 0) {
                if (*(int *)(lVar1 + 0x18) == 0) goto code_?;
                lVar1 = *(longlong *)(lVar1 + 0x10);
                if (lVar1 != 0) {
                  if (*(int *)(lVar1 + 0x18) != 0) {
                    aVStack_10[0].x = (float)*(undefined8 *)(lVar1 + 0x20);
                    return (PlaneQuadrantId__Enum)aVStack_10[0].x;
                  }
                  goto code_?;
                }
              }
            }
          }
        }
      }
    }
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  PVar7 = (*pcVar6)();
  return PVar7;
}


/* Vector2[] GetAxes2D() */

Vector2__Array *
Assembly-CSharp.dll::RTG::GizmoTransform::GizmoTransform_GetAxes2D
          (GizmoTransform *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector2);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields)._axes2D == (Vector2__Array *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    pVVar2 = (Vector2__Array *)(*pcVar1)();
    return pVVar2;
  }
  pVVar2 = (Vector2__Array *)FUN_?();
  pVVar3 = TypeInfo__UnityEngine__Vector2;
  if (pVVar2 != (Vector2__Array *)0x0) {
    pVVar4 = pVVar2->klass;
    cVar5 = FUN_?(TypeInfo__UnityEngine__Vector2,pVVar4);
    if (cVar5 != '\0') {
      return pVVar2;
    }
    if (((pVVar4->_1).field_0x6e & 0x10) != 0) {
      if ((((((pVVar3->_1).token & 0x20) != 0) || ((pVVar3->_0).byval_arg.type == 0x13)) ||
          ((pVVar3->_0).byval_arg.type == 0x1e)) &&
         ((((pVVar3->_0).interopData != (Il2CppInteropData *)0x0 &&
           (((pVVar3->_0).interopData)->guid != (Il2CppGuid *)0x0)) &&
          (lVar6 = FUN_?(pVVar2), lVar6 != 0)))) {
        return pVVar2;
      }
      pVVar7 = (Vector2__Array *)0x0;
      if (pVVar3 == pVRam0000000182dbbbe0) {
        pVVar7 = pVVar2;
      }
      return pVVar7;
    }
  }
  return (Vector2__Array *)0x0;
}


/* Vector3[] GetAxes3D() */

Vector3__Array *
Assembly-CSharp.dll::RTG::GizmoTransform::GizmoTransform_GetAxes3D
          (GizmoTransform *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields)._axes3D == (Vector3__Array *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    pVVar2 = (Vector3__Array *)(*pcVar1)();
    return pVVar2;
  }
  pVVar2 = (Vector3__Array *)FUN_?();
  pVVar3 = TypeInfo__UnityEngine__Vector3;
  if (pVVar2 != (Vector3__Array *)0x0) {
    pVVar4 = pVVar2->klass;
    cVar5 = FUN_?(TypeInfo__UnityEngine__Vector3,pVVar4);
    if (cVar5 != '\0') {
      return pVVar2;
    }
    if (((pVVar4->_1).field_0x6e & 0x10) != 0) {
      if ((((((pVVar3->_1).token & 0x20) != 0) || ((pVVar3->_0).byval_arg.type == 0x13)) ||
          ((pVVar3->_0).byval_arg.type == 0x1e)) &&
         ((((pVVar3->_0).interopData != (Il2CppInteropData *)0x0 &&
           (((pVVar3->_0).interopData)->guid != (Il2CppGuid *)0x0)) &&
          (lVar6 = FUN_?(pVVar2), lVar6 != 0)))) {
        return pVVar2;
      }
      pVVar7 = (Vector3__Array *)0x0;
      if (pVVar3 == pVRam0000000182dbbbe0) {
        pVVar7 = pVVar2;
      }
      return pVVar7;
    }
  }
  return (Vector3__Array *)0x0;
}


/* Vector2 GetAxis2D(AxisDescriptor) */

Vector2 Assembly-CSharp.dll::RTG::GizmoTransform::GizmoTransform_GetAxis2D
                  (GizmoTransform *this,AxisDescriptor *axisDesc,MethodInfo *method)

{
  if ((axisDesc != (AxisDescriptor *)0x0) &&
     (pVVar1 = (this->fields)._axes2D, pVVar1 != (Vector2__Array *)0x0)) {
    uVar2 = (axisDesc->fields)._index;
    if (uVar2 < (uint)pVVar1->max_length) {
      fVar3 = pVVar1->vector[(int)uVar2].x;
      fVar4 = pVVar1->vector[(int)uVar2].y;
      if ((axisDesc->fields)._sign == 1) {
        fVar3 = (float)((uint)fVar3 ^ _UNK_?);
        fVar4 = (float)((uint)fVar4 ^ _UNK_?);
      }
      VVar5.y = fVar4;
      VVar5.x = fVar3;
      return VVar5;
    }
    FUN_?();
    pcVar6 = (code *)swi(3);
    VVar5 = (Vector2)(*pcVar6)();
    return VVar5;
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  VVar5 = (Vector2)(*pcVar6)();
  return VVar5;
}


/* Vector2 GetAxis2D(Int32, AxisSign) */

Vector2 Assembly-CSharp.dll::RTG::GizmoTransform::GizmoTransform_GetAxis2D_1
                  (GizmoTransform *this,int32_t axisIndex,AxisSign__Enum axisSign,MethodInfo *method
                  )

{
  pVVar1 = (this->fields)._axes2D;
  if (pVVar1 == (Vector2__Array *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    VVar3 = (Vector2)(*pcVar2)();
    return VVar3;
  }
  if ((uint)axisIndex < (uint)pVVar1->max_length) {
    fVar4 = pVVar1->vector[axisIndex].x;
    fVar5 = pVVar1->vector[axisIndex].y;
    if (axisSign == AxisSign__Enum_Negative) {
      fVar4 = (float)((uint)fVar4 ^ _UNK_?);
      fVar5 = (float)((uint)fVar5 ^ _UNK_?);
    }
    VVar3.y = fVar5;
    VVar3.x = fVar4;
    return VVar3;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  VVar3 = (Vector2)(*pcVar2)();
  return VVar3;
}


/* Vector3 GetAxis3D(AxisDescriptor) */

Vector3 * Assembly-CSharp.dll::RTG::GizmoTransform::GizmoTransform_GetAxis3D
                    (Vector3 *__return_storage_ptr__,GizmoTransform *this,AxisDescriptor *axisDesc,
                    MethodInfo *method)

{
  __return_storage_ptr__->x = 0.0;
  __return_storage_ptr__->y = 0.0;
  __return_storage_ptr__->z = 0.0;
  if ((axisDesc != (AxisDescriptor *)0x0) &&
     (pVVar1 = (this->fields)._axes3D, pVVar1 != (Vector3__Array *)0x0)) {
    uVar2 = (axisDesc->fields)._index;
    if (uVar2 < (uint)pVVar1->max_length) {
      iVar3 = (axisDesc->fields)._sign;
      uVar4 = pVVar1->vector[(int)uVar2].x;
      uVar5 = pVVar1->vector[(int)uVar2].y;
      fVar6 = pVVar1->vector[(int)uVar2].z;
      __return_storage_ptr__->x = (float)uVar4;
      __return_storage_ptr__->y = (float)uVar5;
      __return_storage_ptr__->z = fVar6;
      if (iVar3 == 1) {
        uVar7 = uVar5 ^ _UNK_?;
        fVar6 = (float)((uint)pVVar1->vector[(int)uVar2].z ^ _UNK_?);
        __return_storage_ptr__->x = (float)(uVar4 ^ _UNK_?);
        __return_storage_ptr__->y = (float)uVar7;
        __return_storage_ptr__->z = fVar6;
      }
      return __return_storage_ptr__;
    }
    FUN_?();
    pcVar8 = (code *)swi(3);
    pVVar9 = (Vector3 *)(*pcVar8)();
    return pVVar9;
  }
  FUN_?();
  pcVar8 = (code *)swi(3);
  pVVar9 = (Vector3 *)(*pcVar8)();
  return pVVar9;
}


/* Vector3 GetAxis3D(Int32, AxisSign) */

Vector3 * Assembly-CSharp.dll::RTG::GizmoTransform::GizmoTransform_GetAxis3D_1
                    (Vector3 *__return_storage_ptr__,GizmoTransform *this,int32_t axisIndex,
                    AxisSign__Enum axisSign,MethodInfo *method)

{
  pVVar1 = (this->fields)._axes3D;
  __return_storage_ptr__->x = 0.0;
  __return_storage_ptr__->y = 0.0;
  __return_storage_ptr__->z = 0.0;
  if (pVVar1 == (Vector3__Array *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    pVVar3 = (Vector3 *)(*pcVar2)();
    return pVVar3;
  }
  if ((uint)axisIndex < (uint)pVVar1->max_length) {
    uVar4 = pVVar1->vector[axisIndex].x;
    uVar5 = pVVar1->vector[axisIndex].y;
    fVar6 = pVVar1->vector[axisIndex].z;
    __return_storage_ptr__->x = (float)uVar4;
    __return_storage_ptr__->y = (float)uVar5;
    __return_storage_ptr__->z = fVar6;
    if (axisSign == AxisSign__Enum_Negative) {
      uVar7 = uVar5 ^ _UNK_?;
      fVar6 = (float)((uint)pVVar1->vector[axisIndex].z ^ _UNK_?);
      __return_storage_ptr__->x = (float)(uVar4 ^ _UNK_?);
      __return_storage_ptr__->y = (float)uVar7;
      __return_storage_ptr__->z = fVar6;
    }
    return __return_storage_ptr__;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  pVVar3 = (Vector3 *)(*pcVar2)();
  return pVVar3;
}


/* Plane GetPlane3D(PlaneId, PlaneQuadrantId) */

Plane * Assembly-CSharp.dll::RTG::GizmoTransform::GizmoTransform_GetPlane3D
                  (Plane *__return_storage_ptr__,GizmoTransform *this,PlaneId__Enum planeId,
                  PlaneQuadrantId__Enum planeQuadrantId,MethodInfo *method)

{
  aPStack_1[0]._secondAxisDescriptor = (AxisDescriptor *)0x0;
  aPStack_1[0]._id = 0;
  aPStack_1[0]._quadrant = 0;
  aPStack_1[0]._firstAxisDescriptor = (AxisDescriptor *)0x0;
  PlaneDescriptor::PlaneDescriptor__ctor(aPStack_1,planeId,planeQuadrantId,(MethodInfo *)0x0);
  if ((aPStack_1[0]._firstAxisDescriptor != (AxisDescriptor *)0x0) &&
     (pVVar2 = (this->fields)._axes3D, pVVar2 != (Vector3__Array *)0x0)) {
    uVar3 = ((aPStack_1[0]._firstAxisDescriptor)->fields)._index;
    if (uVar3 < (uint)pVVar2->max_length) {
      uVar4._0_4_ = pVVar2->vector[(int)uVar3].x;
      uVar4._4_4_ = pVVar2->vector[(int)uVar3].y;
      fVar5 = pVVar2->vector[(int)uVar3].z;
      uStack_6 = uVar4;
      if (((aPStack_1[0]._firstAxisDescriptor)->fields)._sign == 1) {
        fVar5 = (float)((uint)pVVar2->vector[(int)uVar3].z ^ _UNK_?);
        uStack_6 = CONCAT44(uVar4._4_4_ ^ _UNK_?,(undefined4)uVar4 ^ _UNK_?);
        uStack_7 = uVar4;
      }
      if ((aPStack_1[0]._secondAxisDescriptor == (AxisDescriptor *)0x0) ||
         (pVVar2 == (Vector3__Array *)0x0)) goto DAT_?;
      uVar3 = ((aPStack_1[0]._secondAxisDescriptor)->fields)._index;
      if (uVar3 < (uint)pVVar2->max_length) {
        uStack_7._0_4_ = pVVar2->vector[(int)uVar3].x;
        uStack_7._4_4_ = pVVar2->vector[(int)uVar3].y;
        fVar8 = pVVar2->vector[(int)uVar3].z;
        if (((aPStack_1[0]._secondAxisDescriptor)->fields)._sign == 1) {
          fVar8 = (float)((uint)pVVar2->vector[(int)uVar3].z ^ _UNK_?);
          uStack_7 = CONCAT44((uint)uStack_7._4_4_ ^ _UNK_?,
                               (uint)(float)uStack_7 ^ _UNK_?);
        }
        fVar9 = uStack_7._4_4_ * (float)uStack_6 - (float)uStack_7 * uStack_6._4_4_;
        fVar10 = fVar8 * uStack_6._4_4_ - uStack_7._4_4_ * fVar5;
        fVar8 = (float)uStack_7 * fVar5 - fVar8 * (float)uStack_6;
        uStack_6 = CONCAT44(fVar8,fVar10);
        fStack_11 = fVar9;
        fVar5 = (float)FUN_?(&uStack_6);
        if (_UNK_? < fVar5) {
          fStack_12 = fVar9 / fVar5;
          uStack_7 = CONCAT44(fVar8 / fVar5,fVar10 / fVar5);
        }
        else {
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__UnityEngine__Vector3);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pVVar13 = TypeInfo__UnityEngine__Vector3->static_fields;
          uStack_7._0_4_ = (pVVar13->zeroVector).x;
          uStack_7._4_4_ = (pVVar13->zeroVector).y;
          fStack_12 = (pVVar13->zeroVector).z;
        }
        uStack_6._0_4_ = (this->fields)._position3D.x;
        uStack_6._4_4_ = (this->fields)._position3D.y;
        fStack_11 = (this->fields)._position3D.z;
        (__return_storage_ptr__->m_Normal).x = 0.0;
        (__return_storage_ptr__->m_Normal).y = 0.0;
        *(undefined8 *)&(__return_storage_ptr__->m_Normal).z = 0;
        FUN_?(__return_storage_ptr__,&uStack_7,&uStack_6);
        return __return_storage_ptr__;
      }
    }
    FUN_?();
    pcVar14 = (code *)swi(3);
    pPVar15 = (Plane *)(*pcVar14)();
    return pPVar15;
  }
DAT_?:
  FUN_?();
  pcVar14 = (code *)swi(3);
  pPVar15 = (Plane *)(*pcVar14)();
  return pPVar15;
}


/* Plane GetPlane3D(PlaneDescriptor) */

Plane * Assembly-CSharp.dll::RTG::GizmoTransform::GizmoTransform_GetPlane3D_1
                  (Plane *__return_storage_ptr__,GizmoTransform *this,PlaneDescriptor *planeDesc,
                  MethodInfo *method)

{
  pAVar1 = planeDesc->_firstAxisDescriptor;
  pPVar2 = __return_storage_ptr__;
  if ((pAVar1 != (AxisDescriptor *)0x0) &&
     (method = (MethodInfo *)(this->fields)._axes3D,
     (Vector3__Array *)method != (Vector3__Array *)0x0)) {
    uVar3 = (pAVar1->fields)._index;
    lVar4 = (longlong)(int)uVar3;
    if (uVar3 < (uint)((Vector3__Array *)method)->max_length) {
      pPVar2 = (Plane *)(lVar4 * 3);
      uVar5._0_4_ = ((Vector3__Array *)method)->vector[lVar4].x;
      uVar5._4_4_ = ((Vector3__Array *)method)->vector[lVar4].y;
      fVar6 = ((Vector3__Array *)method)->vector[lVar4].z;
      uStack_7 = uVar5;
      if ((pAVar1->fields)._sign == 1) {
        fVar6 = (float)((uint)((Vector3__Array *)method)->vector[lVar4].z ^ _UNK_?);
        uStack_7 = CONCAT44(uVar5._4_4_ ^ _UNK_?,(undefined4)uVar5 ^ _UNK_?);
        uStack_8 = uVar5;
      }
      pAVar1 = planeDesc->_secondAxisDescriptor;
      if ((pAVar1 == (AxisDescriptor *)0x0) || ((Vector3__Array *)method == (Vector3__Array *)0x0))
      goto DAT_?;
      uVar3 = (pAVar1->fields)._index;
      if (uVar3 < (uint)((Vector3__Array *)method)->max_length) {
        uStack_8._0_4_ = ((Vector3__Array *)method)->vector[(int)uVar3].x;
        uStack_8._4_4_ = ((Vector3__Array *)method)->vector[(int)uVar3].y;
        fVar9 = ((Vector3__Array *)method)->vector[(int)uVar3].z;
        if ((pAVar1->fields)._sign == 1) {
          fVar9 = (float)((uint)((Vector3__Array *)method)->vector[(int)uVar3].z ^ _UNK_?);
          uStack_8 = CONCAT44((uint)uStack_8._4_4_ ^ _UNK_?,
                               (uint)(float)uStack_8 ^ _UNK_?);
        }
        fVar10 = uStack_8._4_4_ * (float)uStack_7 - (float)uStack_8 * uStack_7._4_4_;
        fVar11 = fVar9 * uStack_7._4_4_ - uStack_8._4_4_ * fVar6;
        fVar9 = (float)uStack_8 * fVar6 - fVar9 * (float)uStack_7;
        uStack_7 = CONCAT44(fVar9,fVar11);
        fStack_12 = fVar10;
        fVar6 = (float)FUN_?(&uStack_7);
        if (_UNK_? < fVar6) {
          fStack_13 = fVar10 / fVar6;
          uStack_8 = CONCAT44(fVar9 / fVar6,fVar11 / fVar6);
        }
        else {
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__UnityEngine__Vector3);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pVVar14 = TypeInfo__UnityEngine__Vector3->static_fields;
          uStack_8._0_4_ = (pVVar14->zeroVector).x;
          uStack_8._4_4_ = (pVVar14->zeroVector).y;
          fStack_13 = (pVVar14->zeroVector).z;
        }
        uStack_7._0_4_ = (this->fields)._position3D.x;
        uStack_7._4_4_ = (this->fields)._position3D.y;
        fStack_12 = (this->fields)._position3D.z;
        (__return_storage_ptr__->m_Normal).x = 0.0;
        (__return_storage_ptr__->m_Normal).y = 0.0;
        *(undefined8 *)&(__return_storage_ptr__->m_Normal).z = 0;
        FUN_?(__return_storage_ptr__,&uStack_8,&uStack_7);
        return __return_storage_ptr__;
      }
    }
    FUN_?();
    pcVar15 = (code *)swi(3);
    pPVar2 = (Plane *)(*pcVar15)();
    return pPVar2;
  }
DAT_?:
  FUN_?(pPVar2,pAVar1,planeDesc,method);
  pcVar15 = (code *)swi(3);
  pPVar2 = (Plane *)(*pcVar15)();
  return pPVar2;
}


/* Vector2 InverseTransformNormal2D(Vector2) */

Vector2 Assembly-CSharp.dll::RTG::GizmoTransform::GizmoTransform_InverseTransformNormal2D
                  (GizmoTransform *this,Vector2 normal,MethodInfo *method)

{
  fStack_1 = (this->fields)._rotation2D.x;
  fStack_2 = (this->fields)._rotation2D.y;
  fStack_3 = (this->fields)._rotation2D.z;
  fStack_4 = (this->fields)._rotation2D.w;
  VStack_5.x = 0.0;
  VStack_5.y = 0.0;
  uStack_6 = 0;
  pcVar7 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0)) {
    uVar8 = func_?(&UNK_?);
    FUN_?(uVar8,0);
    pcVar7 = (code *)swi(3);
    VVar9 = (Vector2)(*pcVar7)();
    return VVar9;
  }
  pcRam_? = pcVar7;
  (*pcRam_?)(&fStack_1,&VStack_5);
  fVar10 = VStack_5.y + VStack_5.y;
  fStack_11 = normal.x;
  fVar12 = (float)uStack_6 + (float)uStack_6;
  fVar13 = VStack_5.x * (VStack_5.x + VStack_5.x);
  fVar14 = uStack_6._4_4_ * (VStack_5.x + VStack_5.x);
  fStack_15 = normal.y;
  fVar16 = (_UNK_? - ((float)uStack_6 * fVar12 + VStack_5.y * fVar10)) * fStack_11 +
          (VStack_5.x * fVar10 - uStack_6._4_4_ * fVar12) * fStack_15 +
          (uStack_6._4_4_ * fVar10 + VStack_5.x * fVar12) * 0.0;
  fVar17 = (_UNK_? - ((float)uStack_6 * fVar12 + fVar13)) * fStack_15 +
          (uStack_6._4_4_ * fVar12 + VStack_5.x * fVar10) * fStack_11 +
          (VStack_5.y * fVar12 - fVar14) * 0.0;
  uStack_6 = CONCAT44(uStack_6._4_4_,
                       (VStack_5.x * fVar12 - uStack_6._4_4_ * fVar10) * fStack_11 +
                       (fVar14 + VStack_5.y * fVar12) * fStack_15 +
                       (_UNK_? - (VStack_5.y * fVar10 + fVar13)) * 0.0);
  VStack_5.y = fVar17;
  VStack_5.x = fVar16;
  fVar12 = (float)FUN_?(&VStack_5);
  if (_UNK_? < fVar12) {
    VStack_5.y = fVar17 / fVar12;
    VStack_5.x = fVar16 / fVar12;
  }
  else {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    VStack_5.x = (TypeInfo__UnityEngine__Vector3->static_fields->zeroVector).x;
    VStack_5.y = (TypeInfo__UnityEngine__Vector3->static_fields->zeroVector).y;
  }
  return VStack_5;
}


/* Vector3 InverseTransformNormal3D(Vector3) */

Vector3 * Assembly-CSharp.dll::RTG::GizmoTransform::GizmoTransform_InverseTransformNormal3D
                    (Vector3 *__return_storage_ptr__,GizmoTransform *this,Vector3 *normal,
                    MethodInfo *method)

{
  fStack_1 = (this->fields)._rotation3D.x;
  fStack_2 = (this->fields)._rotation3D.y;
  fStack_3 = (this->fields)._rotation3D.z;
  fStack_4 = (this->fields)._rotation3D.w;
  uStack_5 = 0;
  uStack_6 = 0;
  pcVar7 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0)) {
    uVar8 = func_?(&UNK_?);
    FUN_?(uVar8,0);
    pcVar7 = (code *)swi(3);
    pVVar9 = (Vector3 *)(*pcVar7)();
    return pVVar9;
  }
  pcRam_? = pcVar7;
  (*pcRam_?)(&fStack_1,&uStack_5);
  uVar10 = normal->x;
  uVar11 = normal->y;
  fVar12 = (float)uStack_6 + (float)uStack_6;
  fVar13 = normal->z;
  fVar14 = uStack_5._4_4_ + uStack_5._4_4_;
  fVar15 = ((float)uStack_5 + (float)uStack_5) * (float)uStack_5;
  fVar16 = ((float)uStack_5 + (float)uStack_5) * uStack_6._4_4_;
  fVar17 = (_UNK_? - (fVar12 * (float)uStack_6 + fVar14 * uStack_5._4_4_)) * (float)uVar10 +
          (fVar14 * (float)uStack_5 - fVar12 * uStack_6._4_4_) * (float)uVar11 +
          (fVar14 * uStack_6._4_4_ + fVar12 * (float)uStack_5) * fVar13;
  fVar18 = (fVar12 * (float)uStack_5 - fVar14 * uStack_6._4_4_) * (float)uVar10 +
           (fVar16 + fVar12 * uStack_5._4_4_) * (float)uVar11 +
           (_UNK_? - (fVar14 * uStack_5._4_4_ + fVar15)) * fVar13;
  fVar13 = (_UNK_? - (fVar12 * (float)uStack_6 + fVar15)) * (float)uVar11 +
          (fVar12 * uStack_6._4_4_ + fVar14 * (float)uStack_5) * (float)uVar10 +
          (fVar12 * uStack_5._4_4_ - fVar16) * fVar13;
  uStack_6 = CONCAT44(uStack_6._4_4_,fVar18);
  uStack_5 = CONCAT44(fVar13,fVar17);
  fVar12 = (float)FUN_?(&uStack_5);
  if (_UNK_? < fVar12) {
    fVar13 = fVar13 / fVar12;
    fVar17 = fVar17 / fVar12;
    fVar18 = fVar18 / fVar12;
  }
  else {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pVVar19 = TypeInfo__UnityEngine__Vector3->static_fields;
    fVar17 = (pVVar19->zeroVector).x;
    fVar13 = (pVVar19->zeroVector).y;
    fVar18 = (pVVar19->zeroVector).z;
  }
  __return_storage_ptr__->x = fVar17;
  __return_storage_ptr__->y = fVar13;
  __return_storage_ptr__->z = fVar18;
  return __return_storage_ptr__;
}


/* Vector2 InverseTransformPoint2D(Vector2) */

Vector2 Assembly-CSharp.dll::RTG::GizmoTransform::GizmoTransform_InverseTransformPoint2D
                  (GizmoTransform *this,Vector2 point,MethodInfo *method)

{
  fStack_1 = (this->fields)._rotation2D.x;
  fStack_2 = (this->fields)._rotation2D.y;
  fStack_3 = (this->fields)._rotation2D.z;
  fStack_4 = (this->fields)._rotation2D.w;
  uStack_5 = 0;
  uStack_6 = 0;
  pcVar7 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0)) {
    uVar8 = func_?(&UNK_?);
    FUN_?(uVar8,0);
    pcVar7 = (code *)swi(3);
    VVar9 = (Vector2)(*pcVar7)();
    return VVar9;
  }
  pcRam_? = pcVar7;
  (*pcRam_?)(&fStack_1,&uStack_5);
  fStack_10 = point.x;
  fStack_11 = point.y;
  fStack_10 = fStack_10 - (this->fields)._position2D.x;
  fStack_11 = fStack_11 - (this->fields)._position2D.y;
  fVar12 = (float)uStack_6 + (float)uStack_6;
  fVar13 = uStack_5._4_4_ + uStack_5._4_4_;
  VVar9.y = (_UNK_? -
            ((float)uStack_5 * ((float)uStack_5 + (float)uStack_5) + (float)uStack_6 * fVar12)) *
            fStack_11 + (uStack_6._4_4_ * fVar12 + (float)uStack_5 * fVar13) * fStack_10 +
            (uStack_5._4_4_ * fVar12 - uStack_6._4_4_ * ((float)uStack_5 + (float)uStack_5)) *
            0.0;
  VVar9.x = (_UNK_? - (uStack_5._4_4_ * fVar13 + (float)uStack_6 * fVar12)) * fStack_10 +
            ((float)uStack_5 * fVar13 - uStack_6._4_4_ * fVar12) * fStack_11 +
            ((float)uStack_5 * fVar12 + uStack_6._4_4_ * fVar13) * 0.0;
  return VVar9;
}


/* Vector3 InverseTransformPoint3D(Vector3) */

Vector3 * Assembly-CSharp.dll::RTG::GizmoTransform::GizmoTransform_InverseTransformPoint3D
                    (Vector3 *__return_storage_ptr__,GizmoTransform *this,Vector3 *point,
                    MethodInfo *method)

{
  fStack_1 = (this->fields)._rotation3D.x;
  fStack_2 = (this->fields)._rotation3D.y;
  fStack_3 = (this->fields)._rotation3D.z;
  fStack_4 = (this->fields)._rotation3D.w;
  uStack_5 = 0;
  uStack_6 = 0;
  pcVar7 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0)) {
    uVar8 = func_?(&UNK_?);
    FUN_?(uVar8,0);
    pcVar7 = (code *)swi(3);
    pVVar9 = (Vector3 *)(*pcVar7)();
    return pVVar9;
  }
  pcRam_? = pcVar7;
  (*pcRam_?)(&fStack_1,&uStack_5);
  uVar10 = (this->fields)._position3D.x;
  uVar11 = (this->fields)._position3D.y;
  uVar12 = point->x;
  fVar13 = (float)uVar12 - (float)uVar10;
  fVar14 = point->z - (this->fields)._position3D.z;
  fVar15 = point->y - (float)uVar11;
  fVar16 = (float)uStack_6 + (float)uStack_6;
  fVar17 = uStack_5._4_4_ + uStack_5._4_4_;
  fVar18 = ((float)uStack_5 + (float)uStack_5) * (float)uStack_5;
  fVar19 = ((float)uStack_5 + (float)uStack_5) * uStack_6._4_4_;
  fVar20 = _UNK_? - (fVar16 * (float)uStack_6 + fVar18);
  fVar18 = _UNK_? - (fVar17 * uStack_5._4_4_ + fVar18);
  __return_storage_ptr__->x =
       (_UNK_? - (fVar16 * (float)uStack_6 + fVar17 * uStack_5._4_4_)) * fVar13 +
       (fVar17 * (float)uStack_5 - fVar16 * uStack_6._4_4_) * fVar15 +
       (fVar17 * uStack_6._4_4_ + fVar16 * (float)uStack_5) * fVar14;
  __return_storage_ptr__->y =
       fVar20 * fVar15 + (fVar16 * uStack_6._4_4_ + fVar17 * (float)uStack_5) * fVar13 +
       (fVar16 * uStack_5._4_4_ - fVar19) * fVar14;
  __return_storage_ptr__->z =
       (fVar16 * (float)uStack_5 - fVar17 * uStack_6._4_4_) * fVar13 +
       (fVar19 + fVar16 * uStack_5._4_4_) * fVar15 + fVar18 * fVar14;
  return __return_storage_ptr__;
}


/* Boolean IsChildOf(GizmoTransform) */

bool Assembly-CSharp.dll::RTG::GizmoTransform::GizmoTransform_IsChildOf
               (GizmoTransform *this,GizmoTransform *transform,MethodInfo *method)

{
  for (pGVar1 = (this->fields)._parent; pGVar1 != transform; pGVar1 = (pGVar1->fields)._parent) {
    bVar2 = true;
    if (pGVar1 == (GizmoTransform *)0x0) goto code_?;
  }
  bVar2 = pGVar1 == (GizmoTransform *)0x0;
code_?:
  return !bVar2;
}


/* Void OnChanged(GizmoTransform+ChangeData) */

void Assembly-CSharp.dll::RTG::GizmoTransform::GizmoTransform_OnChanged
               (GizmoTransform *this,GizmoTransform_ChangeData changeData,MethodInfo *method)

{
  pGVar1 = (this->fields).Changed;
  if (changeData.TRSDimension != 2) {
    (this->fields)._firingChanged2DEvent = 1;
    if (pGVar1 != (GizmoEntityTransformChangedHandler *)0x0) {
      (*(pGVar1->fields)._._.invoke_impl)
                ((pGVar1->fields)._._.method_code,this,changeData,(pGVar1->fields)._._.method);
    }
    (this->fields)._firingChanged2DEvent = 0;
    return;
  }
  (this->fields)._firingChanged3DEvent = 1;
  if (pGVar1 != (GizmoEntityTransformChangedHandler *)0x0) {
    (*(pGVar1->fields)._._.invoke_impl)
              ((pGVar1->fields)._._.method_code,this,changeData,(pGVar1->fields)._._.method);
  }
  (this->fields)._firingChanged3DEvent = 0;
  return;
}


/* Void OnLocalPosition2DChanged() */

void Assembly-CSharp.dll::RTG::GizmoTransform::GizmoTransform_OnLocalPosition2DChanged
               (GizmoTransform *this,MethodInfo *method)

{
  if ((this->fields)._parent == (GizmoTransform *)0x0) {
    fVar1 = (this->fields)._localPosition2D.x;
    fVar2 = (this->fields)._localPosition2D.y;
  }
  else {
    pGVar3 = (this->fields)._parent;
    fVar2 = (pGVar3->fields)._rotation2D.x;
    fVar4 = (pGVar3->fields)._rotation2D.y;
    fVar5 = (pGVar3->fields)._rotation2D.z;
    fVar6 = (pGVar3->fields)._rotation2D.w;
    fVar7 = fVar4 + fVar4;
    fVar8 = fVar5 + fVar5;
    if (pGVar3 == (GizmoTransform *)0x0) {
      FUN_?();
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    fVar1 = (_UNK_? - (fVar4 * fVar7 + fVar5 * fVar8)) * (this->fields)._localPosition2D.x
             + (fVar2 * fVar7 - fVar6 * fVar8) * (this->fields)._localPosition2D.y +
             (fVar2 * fVar8 + fVar6 * fVar7) * 0.0 + (pGVar3->fields)._position2D.x;
    fVar2 = (_UNK_? - (fVar2 * (fVar2 + fVar2) + fVar5 * fVar8)) *
            (this->fields)._localPosition2D.y +
            (fVar6 * fVar8 + fVar2 * fVar7) * (this->fields)._localPosition2D.x +
            (fVar4 * fVar8 - fVar6 * (fVar2 + fVar2)) * 0.0 + (pGVar3->fields)._position2D.y;
  }
  (this->fields)._position2D.x = fVar1;
  (this->fields)._position2D.y = fVar2;
  GizmoTransform_UpdateChildTransforms2D(this,(MethodInfo *)0x0);
  pGVar10 = (this->fields).Changed;
  (this->fields)._firingChanged2DEvent = 1;
  if (pGVar10 != (GizmoEntityTransformChangedHandler *)0x0) {
    (*(pGVar10->fields)._._.invoke_impl)
              ((pGVar10->fields)._._.method_code,this,0x100000000,(pGVar10->fields)._._.method);
  }
  (this->fields)._firingChanged2DEvent = 0;
  return;
}


/* Void OnLocalPosition3DChanged() */

void Assembly-CSharp.dll::RTG::GizmoTransform::GizmoTransform_OnLocalPosition3DChanged
               (GizmoTransform *this,MethodInfo *method)

{
  if ((this->fields)._parent == (GizmoTransform *)0x0) {
    fVar1 = (this->fields)._localPosition3D.y;
    fVar2 = (this->fields)._localPosition3D.z;
    (this->fields)._position3D.x = (this->fields)._localPosition3D.x;
    (this->fields)._position3D.y = fVar1;
    (this->fields)._position3D.z = fVar2;
  }
  else {
    uVar3 = (this->fields)._localPosition3D.x;
    uVar4 = (this->fields)._localPosition3D.y;
    fVar2 = (this->fields)._localPosition3D.z;
    pGVar5 = (this->fields)._parent;
    fVar1 = (pGVar5->fields)._rotation3D.x;
    fVar6 = (pGVar5->fields)._rotation3D.y;
    fVar7 = (pGVar5->fields)._rotation3D.z;
    fVar8 = (pGVar5->fields)._rotation3D.w;
    fVar9 = fVar7 + fVar7;
    fVar10 = fVar1 * (fVar1 + fVar1);
    fVar11 = fVar6 + fVar6;
    fVar12 = fVar8 * (fVar1 + fVar1);
    fVar13 = _UNK_? - (fVar7 * fVar9 + fVar10);
    fVar10 = _UNK_? - (fVar6 * fVar11 + fVar10);
    if (pGVar5 == (GizmoTransform *)0x0) {
      FUN_?();
      pcVar14 = (code *)swi(3);
      (*pcVar14)();
      return;
    }
    uVar15 = (pGVar5->fields)._position3D.x;
    uVar16 = (pGVar5->fields)._position3D.y;
    fVar17 = (pGVar5->fields)._position3D.z;
    (this->fields)._position3D.x =
         (_UNK_? - (fVar7 * fVar9 + fVar6 * fVar11)) * (float)uVar3 +
         (fVar1 * fVar11 - fVar8 * fVar9) * (float)uVar4 +
         (fVar8 * fVar11 + fVar1 * fVar9) * fVar2 + (float)uVar15;
    (this->fields)._position3D.y =
         fVar13 * (float)uVar4 + (fVar8 * fVar9 + fVar1 * fVar11) * (float)uVar3 +
         (fVar6 * fVar9 - fVar12) * fVar2 + (float)uVar16;
    (this->fields)._position3D.z =
         (fVar1 * fVar9 - fVar8 * fVar11) * (float)uVar3 +
         (fVar12 + fVar6 * fVar9) * (float)uVar4 + fVar10 * fVar2 + fVar17;
  }
  GizmoTransform_UpdateChildTransforms3D(this,(MethodInfo *)0x0);
  pGVar18 = (this->fields).Changed;
  (this->fields)._firingChanged3DEvent = 1;
  if (pGVar18 != (GizmoEntityTransformChangedHandler *)0x0) {
    (*(pGVar18->fields)._._.invoke_impl)
              ((pGVar18->fields)._._.method_code,this,0x200000000,(pGVar18->fields)._._.method);
  }
  (this->fields)._firingChanged3DEvent = 0;
  return;
}


/* Void OnLocalRotation2DChanged() */

void Assembly-CSharp.dll::RTG::GizmoTransform::GizmoTransform_OnLocalRotation2DChanged
               (GizmoTransform *this,MethodInfo *method)

{
  if ((this->fields)._parent == (GizmoTransform *)0x0) {
    fVar1 = (this->fields)._localRotation2D.y;
    fVar2 = (this->fields)._localRotation2D.z;
    fVar3 = (this->fields)._localRotation2D.w;
    (this->fields)._rotation2D.x = (this->fields)._localRotation2D.x;
    (this->fields)._rotation2D.y = fVar1;
    (this->fields)._rotation2D.z = fVar2;
    (this->fields)._rotation2D.w = fVar3;
  }
  else {
    fVar1 = (this->fields)._localRotation2D.x;
    fVar2 = (this->fields)._localRotation2D.y;
    fVar3 = (this->fields)._localRotation2D.z;
    fVar4 = (this->fields)._localRotation2D.w;
    pGVar5 = (this->fields)._parent;
    fVar6 = (pGVar5->fields)._rotation2D.x;
    fVar7 = (pGVar5->fields)._rotation2D.y;
    fVar8 = (pGVar5->fields)._rotation2D.z;
    fVar9 = (pGVar5->fields)._rotation2D.w;
    fVar10 = (fVar1 * fVar9 + fVar4 * fVar6 + fVar3 * fVar7) - fVar2 * fVar8;
    fVar11 = (fVar4 * fVar7 + fVar2 * fVar9 + fVar1 * fVar8) - fVar3 * fVar6;
    fVar12 = (fVar4 * fVar8 + fVar3 * fVar9 + fVar2 * fVar6) - fVar1 * fVar7;
    fVar2 = ((fVar4 * fVar9 - fVar1 * fVar6) - fVar2 * fVar7) - fVar3 * fVar8;
    fVar1 = fVar11 * fVar11 + fVar10 * fVar10 + fVar12 * fVar12 + fVar2 * fVar2;
    if (fVar1 < 0.0) {
      fVar1 = (float)FUN_?(fVar1);
    }
    else {
      fVar1 = SQRT(fVar1);
    }
    if (_UNK_? <= fVar1) {
      fVar1 = _UNK_? / fVar1;
      fVar10 = fVar10 * fVar1;
      fVar11 = fVar11 * fVar1;
      fVar12 = fVar12 * fVar1;
      fVar2 = fVar2 * fVar1;
    }
    (this->fields)._rotation2D.x = fVar10;
    (this->fields)._rotation2D.y = fVar11;
    (this->fields)._rotation2D.z = fVar12;
    (this->fields)._rotation2D.w = fVar2;
  }
  aQStack_13[0].x = (this->fields)._rotation2D.x;
  aQStack_13[0].y = (this->fields)._rotation2D.y;
  aQStack_13[0].z = (this->fields)._rotation2D.z;
  aQStack_13[0].w = (this->fields)._rotation2D.w;
  fVar1 = QuaternionEx::QuaternionEx_ConvertTo2DRotation(aQStack_13,(MethodInfo *)0x0);
  (this->fields)._rotation2DDegrees = fVar1;
  GizmoTransform_Update2DAxes(this,(MethodInfo *)0x0);
  GizmoTransform_UpdateChildTransforms2D(this,(MethodInfo *)0x0);
  pGVar14 = (this->fields).Changed;
  (this->fields)._firingChanged2DEvent = 1;
  if (pGVar14 != (GizmoEntityTransformChangedHandler *)0x0) {
    (*(pGVar14->fields)._._.invoke_impl)
              ((pGVar14->fields)._._.method_code,this,0x100000000,(pGVar14->fields)._._.method);
  }
  (this->fields)._firingChanged2DEvent = 0;
  return;
}


/* Void OnLocalRotation3DChanged() */

void Assembly-CSharp.dll::RTG::GizmoTransform::GizmoTransform_OnLocalRotation3DChanged
               (GizmoTransform *this,MethodInfo *method)

{
  if ((this->fields)._parent == (GizmoTransform *)0x0) {
    fVar1 = (this->fields)._localRotation3D.y;
    fVar2 = (this->fields)._localRotation3D.z;
    fVar3 = (this->fields)._localRotation3D.w;
    (this->fields)._rotation3D.x = (this->fields)._localRotation3D.x;
    (this->fields)._rotation3D.y = fVar1;
    (this->fields)._rotation3D.z = fVar2;
    (this->fields)._rotation3D.w = fVar3;
  }
  else {
    fVar1 = (this->fields)._localRotation3D.x;
    fVar2 = (this->fields)._localRotation3D.y;
    fVar3 = (this->fields)._localRotation3D.z;
    fVar4 = (this->fields)._localRotation3D.w;
    pGVar5 = (this->fields)._parent;
    fVar6 = (pGVar5->fields)._rotation3D.x;
    fVar7 = (pGVar5->fields)._rotation3D.y;
    fVar8 = (pGVar5->fields)._rotation3D.z;
    fVar9 = (pGVar5->fields)._rotation3D.w;
    fVar10 = (fVar1 * fVar9 + fVar4 * fVar6 + fVar3 * fVar7) - fVar2 * fVar8;
    fVar11 = (fVar4 * fVar7 + fVar2 * fVar9 + fVar1 * fVar8) - fVar3 * fVar6;
    fVar12 = (fVar4 * fVar8 + fVar3 * fVar9 + fVar2 * fVar6) - fVar1 * fVar7;
    fVar2 = ((fVar4 * fVar9 - fVar1 * fVar6) - fVar2 * fVar7) - fVar3 * fVar8;
    fVar1 = fVar11 * fVar11 + fVar10 * fVar10 + fVar12 * fVar12 + fVar2 * fVar2;
    if (fVar1 < 0.0) {
      fVar1 = (float)FUN_?(fVar1);
    }
    else {
      fVar1 = SQRT(fVar1);
    }
    if (_UNK_? <= fVar1) {
      fVar1 = _UNK_? / fVar1;
      fVar10 = fVar10 * fVar1;
      fVar11 = fVar11 * fVar1;
      fVar12 = fVar12 * fVar1;
      fVar2 = fVar2 * fVar1;
    }
    (this->fields)._rotation3D.x = fVar10;
    (this->fields)._rotation3D.y = fVar11;
    (this->fields)._rotation3D.z = fVar12;
    (this->fields)._rotation3D.w = fVar2;
  }
  GizmoTransform_Update3DAxes(this,(MethodInfo *)0x0);
  GizmoTransform_UpdateChildTransforms3D(this,(MethodInfo *)0x0);
  pGVar13 = (this->fields).Changed;
  (this->fields)._firingChanged3DEvent = 1;
  if (pGVar13 != (GizmoEntityTransformChangedHandler *)0x0) {
    (*(pGVar13->fields)._._.invoke_impl)
              ((pGVar13->fields)._._.method_code,this,0x200000000,(pGVar13->fields)._._.method);
  }
  (this->fields)._firingChanged3DEvent = 0;
  return;
}


/* Void OnParentChanged() */

void Assembly-CSharp.dll::RTG::GizmoTransform::GizmoTransform_OnParentChanged
               (GizmoTransform *this,MethodInfo *method)

{
  if ((this->fields)._parent == (GizmoTransform *)0x0) {
    fVar1 = (this->fields)._position3D.y;
    fVar2 = (this->fields)._position3D.z;
    (this->fields)._localPosition3D.x = (this->fields)._position3D.x;
    (this->fields)._localPosition3D.y = fVar1;
    fVar1 = (this->fields)._rotation3D.x;
    fVar3 = (this->fields)._rotation3D.y;
    fVar4 = (this->fields)._rotation3D.z;
    fVar5 = (this->fields)._rotation3D.w;
    (this->fields)._localPosition3D.z = fVar2;
    fVar2 = (this->fields)._position2D.x;
    (this->fields)._localRotation3D.x = fVar1;
    (this->fields)._localRotation3D.y = fVar3;
    (this->fields)._localRotation3D.z = fVar4;
    (this->fields)._localRotation3D.w = fVar5;
    (this->fields)._localPosition2D.x = fVar2;
    fVar2 = (this->fields)._rotation2D.x;
    fVar1 = (this->fields)._rotation2D.y;
    fVar3 = (this->fields)._rotation2D.z;
    fVar4 = (this->fields)._rotation2D.w;
    (this->fields)._localPosition2D.y = (this->fields)._position2D.y;
    (this->fields)._localRotation2D.x = fVar2;
    (this->fields)._localRotation2D.y = fVar1;
    (this->fields)._localRotation2D.z = fVar3;
    (this->fields)._localRotation2D.w = fVar4;
    fVar2 = (this->fields)._rotation2DDegrees;
code_?:
    (this->fields)._localRotation2DDegrees = fVar2;
    GizmoTransform_UpdateChildTransforms3D(this,(MethodInfo *)0x0);
    GizmoTransform_UpdateChildTransforms2D(this,(MethodInfo *)0x0);
    pGVar6 = (this->fields).Changed;
    (this->fields)._firingChanged2DEvent = 1;
    if (pGVar6 != (GizmoEntityTransformChangedHandler *)0x0) {
      (*(pGVar6->fields)._._.invoke_impl)
                ((pGVar6->fields)._._.method_code,this,1,(pGVar6->fields)._._.method);
    }
    (this->fields)._firingChanged2DEvent = 0;
    return;
  }
  pGVar7 = (this->fields)._parent;
  uStack_8 = 0;
  uStack_9 = 0;
  fStack_10 = (pGVar7->fields)._rotation3D.x;
  fStack_11 = (pGVar7->fields)._rotation3D.y;
  fStack_12 = (pGVar7->fields)._rotation3D.z;
  fStack_13 = (pGVar7->fields)._rotation3D.w;
  pcVar14 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar14 = (code *)FUN_?(&UNK_?), pcVar14 == (code *)0x0)) {
    uVar15 = func_?(&UNK_?);
    FUN_?(uVar15,0);
    pcVar14 = (code *)swi(3);
    (*pcVar14)();
    return;
  }
  pcRam_? = pcVar14;
  (*pcRam_?)(&fStack_10,&uStack_8);
  fVar2 = _UNK_?;
  pGVar7 = (this->fields)._parent;
  if (pGVar7 != (GizmoTransform *)0x0) {
    uVar16 = (this->fields)._position3D.x;
    uVar17 = (this->fields)._position3D.y;
    uVar18 = (pGVar7->fields)._position3D.x;
    uVar19 = (pGVar7->fields)._position3D.y;
    fVar20 = (float)uVar16 - (float)uVar18;
    fVar21 = (this->fields)._position3D.z - (pGVar7->fields)._position3D.z;
    fVar22 = (float)uVar17 - (float)uVar19;
    fVar4 = uStack_8._4_4_ + uStack_8._4_4_;
    fVar1 = (float)uStack_9 + (float)uStack_9;
    fVar23 = uStack_9._4_4_ * ((float)uStack_8 + (float)uStack_8);
    fVar3 = (float)uStack_8 * ((float)uStack_8 + (float)uStack_8);
    fVar5 = _UNK_? - ((float)uStack_9 * fVar1 + fVar3);
    fVar3 = _UNK_? - (uStack_8._4_4_ * fVar4 + fVar3);
    (this->fields)._localPosition3D.x =
         (_UNK_? - ((float)uStack_9 * fVar1 + uStack_8._4_4_ * fVar4)) * fVar20 +
         ((float)uStack_8 * fVar4 - uStack_9._4_4_ * fVar1) * fVar22 +
         (uStack_9._4_4_ * fVar4 + (float)uStack_8 * fVar1) * fVar21;
    (this->fields)._localPosition3D.y =
         fVar5 * fVar22 + (uStack_9._4_4_ * fVar1 + (float)uStack_8 * fVar4) * fVar20 +
         (uStack_8._4_4_ * fVar1 - fVar23) * fVar21;
    (this->fields)._localPosition3D.z =
         ((float)uStack_8 * fVar1 - uStack_9._4_4_ * fVar4) * fVar20 +
         (fVar23 + uStack_8._4_4_ * fVar1) * fVar22 + fVar3 * fVar21;
    aQStack_24[0].x = (pGVar7->fields)._rotation3D.x;
    aQStack_24[0].y = (pGVar7->fields)._rotation3D.y;
    aQStack_24[0].z = (pGVar7->fields)._rotation3D.z;
    aQStack_24[0].w = (pGVar7->fields)._rotation3D.w;
    uStack_25 = 0;
    uStack_26 = 0;
    pcVar14 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar14 = (code *)FUN_?(&UNK_?), pcVar14 == (code *)0x0)) {
      uVar15 = func_?(&UNK_?);
      FUN_?(uVar15,0);
      pcVar14 = (code *)swi(3);
      (*pcVar14)();
      return;
    }
    pcRam_? = pcVar14;
    (*pcRam_?)(aQStack_24,&uStack_25);
    fVar1 = (this->fields)._rotation3D.x;
    fVar3 = (this->fields)._rotation3D.y;
    fVar4 = (this->fields)._rotation3D.z;
    fVar5 = (this->fields)._rotation3D.w;
    QStack_27.x = ((float)uStack_25 * fVar5 + uStack_26._4_4_ * fVar1 + uStack_25._4_4_ * fVar4) -
                  (float)uStack_26 * fVar3;
    QStack_27.y = (uStack_26._4_4_ * fVar3 + uStack_25._4_4_ * fVar5 + (float)uStack_26 * fVar1) -
                  (float)uStack_25 * fVar4;
    QStack_27.w = ((uStack_26._4_4_ * fVar5 - (float)uStack_25 * fVar1) - uStack_25._4_4_ * fVar3)
                  - (float)uStack_26 * fVar4;
    QStack_27.z = (uStack_26._4_4_ * fVar4 + (float)uStack_26 * fVar5 + (float)uStack_25 * fVar3)
                  - uStack_25._4_4_ * fVar1;
    fVar1 = QStack_27.y * QStack_27.y + QStack_27.x * QStack_27.x + QStack_27.z * QStack_27.z +
            QStack_27.w * QStack_27.w;
    if (fVar1 < 0.0) {
      fVar1 = (float)FUN_?(fVar1);
    }
    else {
      fVar1 = SQRT(fVar1);
    }
    fVar3 = _UNK_?;
    if (_UNK_? <= fVar1) {
      fVar1 = fVar2 / fVar1;
      QStack_27.x = fVar1 * QStack_27.x;
      QStack_27.y = fVar1 * QStack_27.y;
      QStack_27.z = fVar1 * QStack_27.z;
      QStack_27.w = fVar1 * QStack_27.w;
    }
    pGVar7 = (this->fields)._parent;
    (this->fields)._localRotation3D.x = QStack_27.x;
    (this->fields)._localRotation3D.y = QStack_27.y;
    (this->fields)._localRotation3D.z = QStack_27.z;
    (this->fields)._localRotation3D.w = QStack_27.w;
    if (pGVar7 != (GizmoTransform *)0x0) {
      fStack_10 = (pGVar7->fields)._rotation2D.x;
      fStack_11 = (pGVar7->fields)._rotation2D.y;
      fStack_12 = (pGVar7->fields)._rotation2D.z;
      fStack_13 = (pGVar7->fields)._rotation2D.w;
      uStack_8 = 0;
      uStack_9 = 0;
      pcVar14 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar14 = (code *)FUN_?(&UNK_?), pcVar14 == (code *)0x0)) {
        uVar15 = func_?(&UNK_?);
        FUN_?(uVar15,0);
        pcVar14 = (code *)swi(3);
        (*pcVar14)();
        return;
      }
      pcRam_? = pcVar14;
      (*pcRam_?)(&fStack_10,&uStack_8);
      pGVar7 = (this->fields)._parent;
      if (pGVar7 != (GizmoTransform *)0x0) {
        fVar5 = (this->fields)._position2D.x - (pGVar7->fields)._position2D.x;
        fVar23 = (this->fields)._position2D.y - (pGVar7->fields)._position2D.y;
        fVar4 = (float)uStack_9 + (float)uStack_9;
        fVar1 = uStack_8._4_4_ + uStack_8._4_4_;
        uStack_25 = 0;
        uStack_26 = 0;
        (this->fields)._localPosition2D.x =
             (fVar2 - (uStack_8._4_4_ * fVar1 + (float)uStack_9 * fVar4)) * fVar5 +
             ((float)uStack_8 * fVar1 - uStack_9._4_4_ * fVar4) * fVar23 +
             ((float)uStack_8 * fVar4 + uStack_9._4_4_ * fVar1) * 0.0;
        (this->fields)._localPosition2D.y =
             (fVar2 - ((float)uStack_8 * ((float)uStack_8 + (float)uStack_8) +
                       (float)uStack_9 * fVar4)) * fVar23 +
             (uStack_9._4_4_ * fVar4 + (float)uStack_8 * fVar1) * fVar5 +
             (uStack_8._4_4_ * fVar4 - uStack_9._4_4_ * ((float)uStack_8 + (float)uStack_8)) *
             0.0;
        aQStack_24[0].x = (pGVar7->fields)._rotation2D.x;
        aQStack_24[0].y = (pGVar7->fields)._rotation2D.y;
        aQStack_24[0].z = (pGVar7->fields)._rotation2D.z;
        aQStack_24[0].w = (pGVar7->fields)._rotation2D.w;
        pcVar14 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar14 = (code *)FUN_?(&UNK_?), pcVar14 == (code *)0x0)) {
          uVar15 = func_?(&UNK_?);
          FUN_?(uVar15,0);
          pcVar14 = (code *)swi(3);
          (*pcVar14)();
          return;
        }
        pcRam_? = pcVar14;
        (*pcRam_?)(aQStack_24);
        fVar1 = (this->fields)._rotation2D.x;
        fVar4 = (this->fields)._rotation2D.y;
        fVar5 = (this->fields)._rotation2D.z;
        fVar23 = (this->fields)._rotation2D.w;
        fVar20 = ((float)uStack_25 * fVar23 + uStack_26._4_4_ * fVar1 + uStack_25._4_4_ * fVar5) -
                 (float)uStack_26 * fVar4;
        fVar22 = (uStack_26._4_4_ * fVar4 + uStack_25._4_4_ * fVar23 + (float)uStack_26 * fVar1) -
                 (float)uStack_25 * fVar5;
        fVar21 = ((uStack_26._4_4_ * fVar23 - (float)uStack_25 * fVar1) - uStack_25._4_4_ * fVar4)
                 - (float)uStack_26 * fVar5;
        fVar4 = (uStack_26._4_4_ * fVar5 + (float)uStack_26 * fVar23 + (float)uStack_25 * fVar4)
                 - uStack_25._4_4_ * fVar1;
        fVar1 = fVar22 * fVar22 + fVar20 * fVar20 + fVar4 * fVar4 + fVar21 * fVar21;
        if (fVar1 < 0.0) {
          fVar1 = (float)FUN_?(fVar1);
        }
        else {
          fVar1 = SQRT(fVar1);
        }
        if (fVar3 <= fVar1) {
          fVar2 = fVar2 / fVar1;
          fVar20 = fVar20 * fVar2;
          fVar22 = fVar22 * fVar2;
          fVar4 = fVar4 * fVar2;
          fVar21 = fVar21 * fVar2;
        }
        aQStack_24[0].w = fVar21;
        aQStack_24[0].z = fVar4;
        (this->fields)._localRotation2D.x = fVar20;
        (this->fields)._localRotation2D.y = fVar22;
        (this->fields)._localRotation2D.z = fVar4;
        (this->fields)._localRotation2D.w = fVar21;
        aQStack_24[0].x = fVar20;
        aQStack_24[0].y = fVar22;
        fVar2 = QuaternionEx::QuaternionEx_ConvertTo2DRotation(aQStack_24,(MethodInfo *)0x0);
        goto code_?;
      }
    }
  }
  FUN_?();
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}


/* Void OnPosition2DChanged() */

void Assembly-CSharp.dll::RTG::GizmoTransform::GizmoTransform_OnPosition2DChanged
               (GizmoTransform *this,MethodInfo *method)

{
  if ((this->fields)._parent == (GizmoTransform *)0x0) {
    fVar1 = (this->fields)._position2D.x;
    fVar2 = (this->fields)._position2D.y;
  }
  else {
    pGVar3 = (this->fields)._parent;
    fStack_4 = (pGVar3->fields)._rotation2D.x;
    fStack_5 = (pGVar3->fields)._rotation2D.y;
    fStack_6 = (pGVar3->fields)._rotation2D.z;
    fStack_7 = (pGVar3->fields)._rotation2D.w;
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
    (*pcRam_?)(&fStack_4);
    pGVar3 = (this->fields)._parent;
    if (pGVar3 == (GizmoTransform *)0x0) {
      FUN_?();
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    fVar2 = (this->fields)._position2D.x - (pGVar3->fields)._position2D.x;
    fVar10 = (this->fields)._position2D.y - (pGVar3->fields)._position2D.y;
    fVar1 = (_UNK_? - 0.0) * fVar2 + fVar10 * 0.0 + 0.0;
    fVar2 = (_UNK_? - 0.0) * fVar10 + fVar2 * 0.0 + 0.0;
  }
  (this->fields)._localPosition2D.x = fVar1;
  (this->fields)._localPosition2D.y = fVar2;
  GizmoTransform_UpdateChildTransforms2D(this,(MethodInfo *)0x0);
  pGVar11 = (this->fields).Changed;
  (this->fields)._firingChanged2DEvent = 1;
  if (pGVar11 != (GizmoEntityTransformChangedHandler *)0x0) {
    (*(pGVar11->fields)._._.invoke_impl)
              ((pGVar11->fields)._._.method_code,this,0x100000000,(pGVar11->fields)._._.method);
  }
  (this->fields)._firingChanged2DEvent = 0;
  return;
}


/* Void OnPosition3DChanged() */

void Assembly-CSharp.dll::RTG::GizmoTransform::GizmoTransform_OnPosition3DChanged
               (GizmoTransform *this,MethodInfo *method)

{
  if ((this->fields)._parent == (GizmoTransform *)0x0) {
    fVar1 = (this->fields)._position3D.y;
    fVar2 = (this->fields)._position3D.z;
    (this->fields)._localPosition3D.x = (this->fields)._position3D.x;
    (this->fields)._localPosition3D.y = fVar1;
    (this->fields)._localPosition3D.z = fVar2;
  }
  else {
    pGVar3 = (this->fields)._parent;
    uStack_4 = 0;
    uStack_5 = 0;
    fStack_6 = (pGVar3->fields)._rotation3D.x;
    fStack_7 = (pGVar3->fields)._rotation3D.y;
    fStack_8 = (pGVar3->fields)._rotation3D.z;
    fStack_9 = (pGVar3->fields)._rotation3D.w;
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
    (*pcRam_?)(&fStack_6);
    pGVar3 = (this->fields)._parent;
    if (pGVar3 == (GizmoTransform *)0x0) {
      FUN_?();
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    uVar12 = (pGVar3->fields)._position3D.x;
    uVar13 = (pGVar3->fields)._position3D.y;
    fVar14 = (this->fields)._position3D.z - (pGVar3->fields)._position3D.z;
    uVar15 = (this->fields)._position3D.x;
    fVar16 = (float)uVar15 - (float)uVar12;
    fVar17 = (this->fields)._position3D.y - (float)uVar13;
    fVar1 = uStack_4._4_4_ + uStack_4._4_4_;
    fVar2 = (float)uStack_5 + (float)uStack_5;
    fVar18 = uStack_5._4_4_ * ((float)uStack_4 + (float)uStack_4);
    fVar19 = (float)uStack_4 * ((float)uStack_4 + (float)uStack_4);
    fVar20 = _UNK_? - ((float)uStack_5 * fVar2 + fVar19);
    fVar19 = _UNK_? - (uStack_4._4_4_ * fVar1 + fVar19);
    (this->fields)._localPosition3D.x =
         (_UNK_? - ((float)uStack_5 * fVar2 + uStack_4._4_4_ * fVar1)) * fVar16 +
         ((float)uStack_4 * fVar1 - uStack_5._4_4_ * fVar2) * fVar17 +
         (uStack_5._4_4_ * fVar1 + (float)uStack_4 * fVar2) * fVar14;
    (this->fields)._localPosition3D.y =
         fVar20 * fVar17 + (uStack_5._4_4_ * fVar2 + (float)uStack_4 * fVar1) * fVar16 +
         (uStack_4._4_4_ * fVar2 - fVar18) * fVar14;
    (this->fields)._localPosition3D.z =
         ((float)uStack_4 * fVar2 - uStack_5._4_4_ * fVar1) * fVar16 +
         (fVar18 + uStack_4._4_4_ * fVar2) * fVar17 + fVar19 * fVar14;
  }
  GizmoTransform_UpdateChildTransforms3D(this,(MethodInfo *)0x0);
  pGVar21 = (this->fields).Changed;
  (this->fields)._firingChanged3DEvent = 1;
  if (pGVar21 != (GizmoEntityTransformChangedHandler *)0x0) {
    (*(pGVar21->fields)._._.invoke_impl)
              ((pGVar21->fields)._._.method_code,this,0x200000000,(pGVar21->fields)._._.method);
  }
  (this->fields)._firingChanged3DEvent = 0;
  return;
}


/* Void OnRotation2DChanged() */

void Assembly-CSharp.dll::RTG::GizmoTransform::GizmoTransform_OnRotation2DChanged
               (GizmoTransform *this,MethodInfo *method)

{
  if ((this->fields)._parent == (GizmoTransform *)0x0) {
    fVar1 = (this->fields)._rotation2D.y;
    fVar2 = (this->fields)._rotation2D.z;
    fVar3 = (this->fields)._rotation2D.w;
    (this->fields)._localRotation2D.x = (this->fields)._rotation2D.x;
    (this->fields)._localRotation2D.y = fVar1;
    (this->fields)._localRotation2D.z = fVar2;
    (this->fields)._localRotation2D.w = fVar3;
  }
  else {
    pGVar4 = (this->fields)._parent;
    aQStack_5[0].x = (pGVar4->fields)._rotation2D.x;
    aQStack_5[0].y = (pGVar4->fields)._rotation2D.y;
    aQStack_5[0].z = (pGVar4->fields)._rotation2D.z;
    aQStack_5[0].w = (pGVar4->fields)._rotation2D.w;
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
    (*pcRam_?)(aQStack_5);
    fVar1 = (this->fields)._rotation2D.x;
    fVar2 = (this->fields)._rotation2D.y;
    fVar3 = (this->fields)._rotation2D.z;
    fVar8 = (this->fields)._rotation2D.w;
    fVar9 = (fVar8 * 0.0 + fVar1 * 0.0 + fVar3 * 0.0) - fVar2 * 0.0;
    fVar10 = (fVar2 * 0.0 + fVar8 * 0.0 + fVar1 * 0.0) - fVar3 * 0.0;
    fVar11 = ((fVar8 * 0.0 - fVar1 * 0.0) - fVar2 * 0.0) - fVar3 * 0.0;
    fVar2 = (fVar3 * 0.0 + fVar8 * 0.0 + fVar2 * 0.0) - fVar1 * 0.0;
    fVar1 = fVar10 * fVar10 + fVar9 * fVar9 + fVar2 * fVar2 + fVar11 * fVar11;
    if (fVar1 < 0.0) {
      fVar1 = (float)FUN_?(fVar1);
    }
    else {
      fVar1 = SQRT(fVar1);
    }
    if (_UNK_? <= fVar1) {
      fVar1 = _UNK_? / fVar1;
      fVar9 = fVar9 * fVar1;
      fVar10 = fVar10 * fVar1;
      fVar2 = fVar2 * fVar1;
      fVar11 = fVar11 * fVar1;
    }
    (this->fields)._localRotation2D.x = fVar9;
    (this->fields)._localRotation2D.y = fVar10;
    (this->fields)._localRotation2D.z = fVar2;
    (this->fields)._localRotation2D.w = fVar11;
  }
  aQStack_5[0].x = (this->fields)._localRotation2D.x;
  aQStack_5[0].y = (this->fields)._localRotation2D.y;
  aQStack_5[0].z = (this->fields)._localRotation2D.z;
  aQStack_5[0].w = (this->fields)._localRotation2D.w;
  fVar1 = QuaternionEx::QuaternionEx_ConvertTo2DRotation(aQStack_5,(MethodInfo *)0x0);
  (this->fields)._localRotation2DDegrees = fVar1;
  GizmoTransform_Update2DAxes(this,(MethodInfo *)0x0);
  GizmoTransform_UpdateChildTransforms2D(this,(MethodInfo *)0x0);
  pGVar12 = (this->fields).Changed;
  (this->fields)._firingChanged2DEvent = 1;
  if (pGVar12 != (GizmoEntityTransformChangedHandler *)0x0) {
    (*(pGVar12->fields)._._.invoke_impl)
              ((pGVar12->fields)._._.method_code,this,0x100000000,(pGVar12->fields)._._.method);
  }
  (this->fields)._firingChanged2DEvent = 0;
  return;
}


/* Void OnRotation3DChanged() */

void Assembly-CSharp.dll::RTG::GizmoTransform::GizmoTransform_OnRotation3DChanged
               (GizmoTransform *this,MethodInfo *method)

{
  if ((this->fields)._parent == (GizmoTransform *)0x0) {
    fVar1 = (this->fields)._rotation3D.y;
    fVar2 = (this->fields)._rotation3D.z;
    fVar3 = (this->fields)._rotation3D.w;
    (this->fields)._localRotation3D.x = (this->fields)._rotation3D.x;
    (this->fields)._localRotation3D.y = fVar1;
    (this->fields)._localRotation3D.z = fVar2;
    (this->fields)._localRotation3D.w = fVar3;
  }
  else {
    pGVar4 = (this->fields)._parent;
    fStack_5 = (pGVar4->fields)._rotation3D.x;
    fStack_6 = (pGVar4->fields)._rotation3D.y;
    fStack_7 = (pGVar4->fields)._rotation3D.z;
    fStack_8 = (pGVar4->fields)._rotation3D.w;
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
    (*pcRam_?)(&fStack_5);
    fVar1 = (this->fields)._rotation3D.x;
    fVar2 = (this->fields)._rotation3D.y;
    fVar3 = (this->fields)._rotation3D.z;
    fVar11 = (this->fields)._rotation3D.w;
    fVar12 = (fVar11 * 0.0 + fVar1 * 0.0 + fVar3 * 0.0) - fVar2 * 0.0;
    fVar13 = (fVar11 * 0.0 + fVar2 * 0.0 + fVar1 * 0.0) - fVar3 * 0.0;
    fVar14 = (fVar11 * 0.0 + fVar3 * 0.0 + fVar2 * 0.0) - fVar1 * 0.0;
    fVar2 = ((fVar11 * 0.0 - fVar1 * 0.0) - fVar2 * 0.0) - fVar3 * 0.0;
    fVar1 = fVar13 * fVar13 + fVar12 * fVar12 + fVar14 * fVar14 + fVar2 * fVar2;
    if (fVar1 < 0.0) {
      fVar1 = (float)FUN_?(fVar1);
    }
    else {
      fVar1 = SQRT(fVar1);
    }
    if (_UNK_? <= fVar1) {
      fVar1 = _UNK_? / fVar1;
      fVar12 = fVar12 * fVar1;
      fVar13 = fVar13 * fVar1;
      fVar14 = fVar14 * fVar1;
      fVar2 = fVar2 * fVar1;
    }
    (this->fields)._localRotation3D.x = fVar12;
    (this->fields)._localRotation3D.y = fVar13;
    (this->fields)._localRotation3D.z = fVar14;
    (this->fields)._localRotation3D.w = fVar2;
  }
  GizmoTransform_Update3DAxes(this,(MethodInfo *)0x0);
  GizmoTransform_UpdateChildTransforms3D(this,(MethodInfo *)0x0);
  pGVar15 = (this->fields).Changed;
  (this->fields)._firingChanged3DEvent = 1;
  if (pGVar15 != (GizmoEntityTransformChangedHandler *)0x0) {
    (*(pGVar15->fields)._._.invoke_impl)
              ((pGVar15->fields)._._.method_code,this,0x200000000,(pGVar15->fields)._._.method);
  }
  (this->fields)._firingChanged3DEvent = 0;
  return;
}


/* Void Rotate2D(Single) */

void Assembly-CSharp.dll::RTG::GizmoTransform::GizmoTransform_Rotate2D
               (GizmoTransform *this,float rotation,MethodInfo *method)

{
  if (((this->fields)._firingChanged2DEvent != 0) ||
     (fVar1 = rotation + (this->fields)._rotation2DDegrees,
     (this->fields)._rotation2DDegrees == fVar1)) {
    return;
  }
  fVar1 = (float)FUN_?(fVar1,_UNK_?,0);
  bVar2 = cRam_? == '\0';
  (this->fields)._rotation2DDegrees = fVar1;
  if (bVar2) {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar3 = TypeInfo__UnityEngine__Vector3->static_fields;
  uStack_4._0_4_ = (pVVar3->forwardVector).x;
  uStack_4._4_4_ = (pVVar3->forwardVector).y;
  fStack_5 = (pVVar3->forwardVector).z;
  uStack_6 = 0;
  uStack_7 = 0;
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
  (*pcRam_?)(fVar1,&uStack_4,&uStack_6);
  uVar9 = uStack_6;
  fVar10 = uStack_6._4_4_;
  fVar1 = (float)uStack_6;
  fVar11 = (float)uStack_7;
  fStack_12 = uStack_7._4_4_;
  fVar13 = uStack_6._4_4_ * uStack_6._4_4_ + (float)uStack_6 * (float)uStack_6 +
          (float)uStack_7 * (float)uStack_7 + uStack_7._4_4_ * uStack_7._4_4_;
  if (fVar13 < 0.0) {
    fVar13 = (float)FUN_?(fVar13);
  }
  else {
    fVar13 = SQRT(fVar13);
  }
  if (fVar13 < _UNK_?) {
    uStack_4 = uVar9;
    fStack_5 = fVar11;
  }
  else {
    fVar13 = _UNK_? / fVar13;
    fStack_5 = fVar13 * fVar11;
    fStack_12 = fVar13 * fStack_12;
    uStack_4 = CONCAT44(fVar13 * fVar10,fVar13 * fVar1);
  }
  (this->fields)._rotation2D.x = (float)(undefined4)uStack_4;
  (this->fields)._rotation2D.y = (float)uStack_4._4_4_;
  (this->fields)._rotation2D.z = fStack_5;
  (this->fields)._rotation2D.w = fStack_12;
  if ((this->fields)._parent == (GizmoTransform *)0x0) {
    fVar1 = (this->fields)._rotation2D.y;
    fVar10 = (this->fields)._rotation2D.z;
    fVar11 = (this->fields)._rotation2D.w;
    (this->fields)._localRotation2D.x = (this->fields)._rotation2D.x;
    (this->fields)._localRotation2D.y = fVar1;
    (this->fields)._localRotation2D.z = fVar10;
    (this->fields)._localRotation2D.w = fVar11;
  }
  else {
    pGVar14 = (this->fields)._parent;
    aQStack_15[0].x = (pGVar14->fields)._rotation2D.x;
    aQStack_15[0].y = (pGVar14->fields)._rotation2D.y;
    aQStack_15[0].z = (pGVar14->fields)._rotation2D.z;
    aQStack_15[0].w = (pGVar14->fields)._rotation2D.w;
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
    uStack_6 = CONCAT44(unaff_XMM10_Db,unaff_XMM10_Da);
    uStack_7 = CONCAT44(unaff_XMM10_Dd,unaff_XMM10_Dc);
    uStack_4 = CONCAT44(unaff_XMM11_Db,unaff_XMM11_Da);
    fStack_5 = unaff_XMM11_Dc;
    fStack_12 = unaff_XMM11_Dd;
    (*pcRam_?)(aQStack_15);
    fVar1 = (this->fields)._rotation2D.x;
    fVar10 = (this->fields)._rotation2D.y;
    fVar11 = (this->fields)._rotation2D.z;
    fVar13 = (this->fields)._rotation2D.w;
    fVar16 = (fVar13 * 0.0 + fVar1 * 0.0 + fVar11 * 0.0) - fVar10 * 0.0;
    fVar17 = (fVar10 * 0.0 + fVar13 * 0.0 + fVar1 * 0.0) - fVar11 * 0.0;
    fVar18 = ((fVar13 * 0.0 - fVar1 * 0.0) - fVar10 * 0.0) - fVar11 * 0.0;
    fVar10 = (fVar11 * 0.0 + fVar13 * 0.0 + fVar10 * 0.0) - fVar1 * 0.0;
    fVar1 = fVar17 * fVar17 + fVar16 * fVar16 + fVar10 * fVar10 + fVar18 * fVar18;
    if (fVar1 < 0.0) {
      fVar1 = (float)FUN_?(fVar1);
    }
    else {
      fVar1 = SQRT(fVar1);
    }
    if (_UNK_? <= fVar1) {
      fVar1 = _UNK_? / fVar1;
      fVar16 = fVar16 * fVar1;
      fVar17 = fVar17 * fVar1;
      fVar10 = fVar10 * fVar1;
      fVar18 = fVar18 * fVar1;
    }
    (this->fields)._localRotation2D.x = fVar16;
    (this->fields)._localRotation2D.y = fVar17;
    (this->fields)._localRotation2D.z = fVar10;
    (this->fields)._localRotation2D.w = fVar18;
  }
  aQStack_15[0].x = (this->fields)._localRotation2D.x;
  aQStack_15[0].y = (this->fields)._localRotation2D.y;
  aQStack_15[0].z = (this->fields)._localRotation2D.z;
  aQStack_15[0].w = (this->fields)._localRotation2D.w;
  fVar1 = QuaternionEx::QuaternionEx_ConvertTo2DRotation(aQStack_15,(MethodInfo *)0x0);
  (this->fields)._localRotation2DDegrees = fVar1;
  GizmoTransform_Update2DAxes(this,(MethodInfo *)0x0);
  GizmoTransform_UpdateChildTransforms2D(this,(MethodInfo *)0x0);
  pGVar19 = (this->fields).Changed;
  (this->fields)._firingChanged2DEvent = 1;
  if (pGVar19 != (GizmoEntityTransformChangedHandler *)0x0) {
    (*(pGVar19->fields)._._.invoke_impl)
              ((pGVar19->fields)._._.method_code,this,0x100000000,(pGVar19->fields)._._.method);
  }
  (this->fields)._firingChanged2DEvent = 0;
  return;
}


/* Void Rotate2D(Quaternion) */

void Assembly-CSharp.dll::RTG::GizmoTransform::GizmoTransform_Rotate2D_1
               (GizmoTransform *this,Quaternion *rotation,MethodInfo *method)

{
  QStack_1.x = rotation->x;
  QStack_1.y = rotation->y;
  QStack_1.z = rotation->z;
  QStack_1.w = rotation->w;
  fVar2 = QuaternionEx::QuaternionEx_ConvertTo2DRotation(&QStack_1,(MethodInfo *)0x0);
  if (((this->fields)._firingChanged2DEvent != 0) ||
     (fVar2 = fVar2 + (this->fields)._rotation2DDegrees, (this->fields)._rotation2DDegrees == fVar2)
     ) {
    return;
  }
  fVar2 = (float)FUN_?(fVar2,_UNK_?,0);
  bVar3 = cRam_? == '\0';
  (this->fields)._rotation2DDegrees = fVar2;
  if (bVar3) {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar4 = TypeInfo__UnityEngine__Vector3->static_fields;
  uStack_5._0_4_ = (pVVar4->forwardVector).x;
  uStack_5._4_4_ = (pVVar4->forwardVector).y;
  fStack_6 = (pVVar4->forwardVector).z;
  uStack_7 = 0;
  uStack_8 = 0;
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
  (*pcRam_?)(fVar2,&uStack_5,&uStack_7);
  uVar10 = uStack_7;
  fVar11 = uStack_7._4_4_;
  fVar2 = (float)uStack_7;
  fVar12 = (float)uStack_8;
  fStack_13 = uStack_8._4_4_;
  fVar14 = uStack_7._4_4_ * uStack_7._4_4_ + (float)uStack_7 * (float)uStack_7 +
          (float)uStack_8 * (float)uStack_8 + uStack_8._4_4_ * uStack_8._4_4_;
  if (fVar14 < 0.0) {
    fVar14 = (float)FUN_?(fVar14);
  }
  else {
    fVar14 = SQRT(fVar14);
  }
  if (fVar14 < _UNK_?) {
    uStack_5 = uVar10;
    fStack_6 = fVar12;
  }
  else {
    fVar14 = _UNK_? / fVar14;
    fStack_6 = fVar14 * fVar12;
    fStack_13 = fVar14 * fStack_13;
    uStack_5 = CONCAT44(fVar14 * fVar11,fVar14 * fVar2);
  }
  (this->fields)._rotation2D.x = (float)(undefined4)uStack_5;
  (this->fields)._rotation2D.y = (float)uStack_5._4_4_;
  (this->fields)._rotation2D.z = fStack_6;
  (this->fields)._rotation2D.w = fStack_13;
  if ((this->fields)._parent == (GizmoTransform *)0x0) {
    fVar2 = (this->fields)._rotation2D.y;
    fVar11 = (this->fields)._rotation2D.z;
    fVar12 = (this->fields)._rotation2D.w;
    (this->fields)._localRotation2D.x = (this->fields)._rotation2D.x;
    (this->fields)._localRotation2D.y = fVar2;
    (this->fields)._localRotation2D.z = fVar11;
    (this->fields)._localRotation2D.w = fVar12;
  }
  else {
    pGVar15 = (this->fields)._parent;
    aQStack_16[0].x = (pGVar15->fields)._rotation2D.x;
    aQStack_16[0].y = (pGVar15->fields)._rotation2D.y;
    aQStack_16[0].z = (pGVar15->fields)._rotation2D.z;
    aQStack_16[0].w = (pGVar15->fields)._rotation2D.w;
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
    uStack_7 = CONCAT44(unaff_XMM10_Db,unaff_XMM10_Da);
    uStack_8 = CONCAT44(unaff_XMM10_Dd,unaff_XMM10_Dc);
    uStack_5 = CONCAT44(unaff_XMM11_Db,unaff_XMM11_Da);
    fStack_6 = unaff_XMM11_Dc;
    fStack_13 = unaff_XMM11_Dd;
    (*pcRam_?)(aQStack_16);
    fVar2 = (this->fields)._rotation2D.x;
    fVar11 = (this->fields)._rotation2D.y;
    fVar12 = (this->fields)._rotation2D.z;
    fVar14 = (this->fields)._rotation2D.w;
    fVar17 = (fVar14 * 0.0 + fVar2 * 0.0 + fVar12 * 0.0) - fVar11 * 0.0;
    fVar18 = (fVar11 * 0.0 + fVar14 * 0.0 + fVar2 * 0.0) - fVar12 * 0.0;
    fVar19 = ((fVar14 * 0.0 - fVar2 * 0.0) - fVar11 * 0.0) - fVar12 * 0.0;
    fVar11 = (fVar12 * 0.0 + fVar14 * 0.0 + fVar11 * 0.0) - fVar2 * 0.0;
    fVar2 = fVar18 * fVar18 + fVar17 * fVar17 + fVar11 * fVar11 + fVar19 * fVar19;
    if (fVar2 < 0.0) {
      fVar2 = (float)FUN_?(fVar2);
    }
    else {
      fVar2 = SQRT(fVar2);
    }
    if (_UNK_? <= fVar2) {
      fVar2 = _UNK_? / fVar2;
      fVar17 = fVar17 * fVar2;
      fVar18 = fVar18 * fVar2;
      fVar11 = fVar11 * fVar2;
      fVar19 = fVar19 * fVar2;
    }
    (this->fields)._localRotation2D.x = fVar17;
    (this->fields)._localRotation2D.y = fVar18;
    (this->fields)._localRotation2D.z = fVar11;
    (this->fields)._localRotation2D.w = fVar19;
  }
  aQStack_16[0].x = (this->fields)._localRotation2D.x;
  aQStack_16[0].y = (this->fields)._localRotation2D.y;
  aQStack_16[0].z = (this->fields)._localRotation2D.z;
  aQStack_16[0].w = (this->fields)._localRotation2D.w;
  fVar2 = QuaternionEx::QuaternionEx_ConvertTo2DRotation(aQStack_16,(MethodInfo *)0x0);
  (this->fields)._localRotation2DDegrees = fVar2;
  GizmoTransform_Update2DAxes(this,(MethodInfo *)0x0);
  GizmoTransform_UpdateChildTransforms2D(this,(MethodInfo *)0x0);
  pGVar20 = (this->fields).Changed;
  (this->fields)._firingChanged2DEvent = 1;
  if (pGVar20 != (GizmoEntityTransformChangedHandler *)0x0) {
    (*(pGVar20->fields)._._.invoke_impl)
              ((pGVar20->fields)._._.method_code,this,0x100000000,(pGVar20->fields)._._.method);
  }
  (this->fields)._firingChanged2DEvent = 0;
  return;
}


/* Void Rotate3D(Quaternion) */

void Assembly-CSharp.dll::RTG::GizmoTransform::GizmoTransform_Rotate3D
               (GizmoTransform *this,Quaternion *rotation,MethodInfo *method)

{
  fVar1 = rotation->x;
  fVar2 = rotation->y;
  fVar3 = rotation->z;
  fVar4 = rotation->w;
  fVar5 = (this->fields)._rotation3D.x;
  fVar6 = (this->fields)._rotation3D.y;
  fVar7 = (this->fields)._rotation3D.z;
  fVar8 = (this->fields)._rotation3D.w;
  aQStack_9[0].x = (fVar5 * fVar4 + fVar8 * fVar1 + fVar7 * fVar2) - fVar6 * fVar3;
  aQStack_9[0].y = (fVar8 * fVar2 + fVar6 * fVar4 + fVar5 * fVar3) - fVar7 * fVar1;
  aQStack_9[0].z = (fVar8 * fVar3 + fVar7 * fVar4 + fVar6 * fVar1) - fVar5 * fVar2;
  aQStack_9[0].w = ((fVar8 * fVar4 - fVar5 * fVar1) - fVar6 * fVar2) - fVar7 * fVar3;
  GizmoTransform_set_Rotation3D(this,aQStack_9,(MethodInfo *)0x0);
  return;
}


/* Void SetParent(GizmoTransform) */

void Assembly-CSharp.dll::RTG::GizmoTransform::GizmoTransform_SetParent
               (GizmoTransform *this,GizmoTransform *newParent,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<RTG::GizmoTransform>__Add_RTG__GizmoTransform_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<RTG::GizmoTransform>__Remove_RTG__GizmoTransform_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (((this->fields)._firingChanged3DEvent == 0) && ((this->fields)._parent != newParent)) {
    pGVar1 = (this->fields)._parent;
    if (pGVar1 != (GizmoTransform *)0x0) {
      this_00 = (pGVar1->fields)._children;
      if (this_00 == (List_1_RTG_GizmoTransform_ *)0x0) goto code_?;
      mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
      List_1_System_Object__Remove
                ((List_1_System_Object_ *)this_00,(Object *)this,
                 MethodInfo__System__Collections__Generic__List<RTG::GizmoTransform>__Remove_RTG__GizmoTransform_
                );
    }
    bVar2 = iRam_? != 0;
    (this->fields)._parent = newParent;
    if (bVar2) {
      uVar3 = (uint)((ulonglong)&(this->fields)._parent >> 0xc);
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
    pGVar1 = (this->fields)._parent;
    if ((pGVar1 == (GizmoTransform *)0x0) ||
       ((pGVar1->fields)._children == (List_1_RTG_GizmoTransform_ *)0x0)) {
code_?:
      FUN_?();
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    FUN_?();
    GizmoTransform_OnParentChanged(this,(MethodInfo *)0x0);
  }
  return;
}


/* Vector2 TransformNormal2D(Vector2) */

Vector2 Assembly-CSharp.dll::RTG::GizmoTransform::GizmoTransform_TransformNormal2D
                  (GizmoTransform *this,Vector2 normal,MethodInfo *method)

{
  fVar1 = (this->fields)._rotation2D.x;
  fVar2 = (this->fields)._rotation2D.y;
  fVar3 = (this->fields)._rotation2D.z;
  fVar4 = (this->fields)._rotation2D.w;
  fStackX_8 = normal.x;
  fVar5 = fVar3 + fVar3;
  fVar6 = fVar1 * (fVar1 + fVar1);
  fVar7 = fVar2 + fVar2;
  fVar8 = fVar4 * (fVar1 + fVar1);
  fStackX_c = normal.y;
  fVar9 = (_UNK_? - (fVar3 * fVar5 + fVar2 * fVar7)) * fStackX_8 +
          (fVar1 * fVar7 - fVar4 * fVar5) * fStackX_c + (fVar4 * fVar7 + fVar1 * fVar5) * 0.0;
  fStack_10 = (fVar1 * fVar5 - fVar4 * fVar7) * fStackX_8 + (fVar8 + fVar2 * fVar5) * fStackX_c +
              (_UNK_? - (fVar2 * fVar7 + fVar6)) * 0.0;
  fVar2 = (_UNK_? - (fVar3 * fVar5 + fVar6)) * fStackX_c +
          (fVar4 * fVar5 + fVar1 * fVar7) * fStackX_8 + (fVar2 * fVar5 - fVar8) * 0.0;
  VStack_11.y = fVar2;
  VStack_11.x = fVar9;
  fVar1 = (float)FUN_?(&VStack_11);
  if (_UNK_? < fVar1) {
    VStack_11.y = fVar2 / fVar1;
    VStack_11.x = fVar9 / fVar1;
  }
  else {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    VStack_11.x = (TypeInfo__UnityEngine__Vector3->static_fields->zeroVector).x;
    VStack_11.y = (TypeInfo__UnityEngine__Vector3->static_fields->zeroVector).y;
  }
  return VStack_11;
}


/* Vector3 TransformNormal3D(Vector3) */

Vector3 * Assembly-CSharp.dll::RTG::GizmoTransform::GizmoTransform_TransformNormal3D
                    (Vector3 *__return_storage_ptr__,GizmoTransform *this,Vector3 *normal,
                    MethodInfo *method)

{
  fVar1 = (this->fields)._rotation3D.x;
  fVar2 = (this->fields)._rotation3D.y;
  fVar3 = (this->fields)._rotation3D.z;
  fVar4 = (this->fields)._rotation3D.w;
  fVar5 = normal->z;
  fVar6 = fVar3 + fVar3;
  fVar7 = fVar2 + fVar2;
  uVar8 = normal->x;
  uVar9 = normal->y;
  fVar10 = (fVar1 + fVar1) * fVar1;
  fVar11 = (fVar1 + fVar1) * fVar4;
  fVar12 = (_UNK_? - (fVar6 * fVar3 + fVar7 * fVar2)) * (float)uVar8 +
           (fVar7 * fVar1 - fVar6 * fVar4) * (float)uVar9 +
           (fVar7 * fVar4 + fVar6 * fVar1) * fVar5;
  fVar13 = (fVar6 * fVar1 - fVar7 * fVar4) * (float)uVar8 +
           (fVar11 + fVar6 * fVar2) * (float)uVar9 +
           (_UNK_? - (fVar7 * fVar2 + fVar10)) * fVar5;
  fVar1 = (_UNK_? - (fVar6 * fVar3 + fVar10)) * (float)uVar9 +
          (fVar6 * fVar4 + fVar7 * fVar1) * (float)uVar8 + (fVar6 * fVar2 - fVar11) * fVar5;
  uStack_14 = CONCAT44(fVar1,fVar12);
  fStack_15 = fVar13;
  fVar5 = (float)FUN_?(&uStack_14);
  if (_UNK_? < fVar5) {
    fVar13 = fVar13 / fVar5;
    uVar16 = CONCAT44(fVar1 / fVar5,fVar12 / fVar5);
  }
  else {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pVVar17 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar16._0_4_ = (pVVar17->zeroVector).x;
    uVar16._4_4_ = (pVVar17->zeroVector).y;
    fVar13 = (pVVar17->zeroVector).z;
  }
  __return_storage_ptr__->x = (float)(int)uVar16;
  __return_storage_ptr__->y = (float)(int)((ulonglong)uVar16 >> 0x20);
  __return_storage_ptr__->z = fVar13;
  return __return_storage_ptr__;
}


/* Vector2 TransformPoint2D(Vector2) */

Vector2 Assembly-CSharp.dll::RTG::GizmoTransform::GizmoTransform_TransformPoint2D
                  (GizmoTransform *this,Vector2 point,MethodInfo *method)

{
  fVar1 = (this->fields)._rotation2D.x;
  fVar2 = (this->fields)._rotation2D.y;
  fVar3 = (this->fields)._rotation2D.z;
  fVar4 = (this->fields)._rotation2D.w;
  fVar5 = fVar3 + fVar3;
  fVar6 = fVar2 + fVar2;
  fStackX_8 = point.x;
  fStackX_c = point.y;
  VVar7.y = (_UNK_? - ((fVar1 + fVar1) * fVar1 + fVar5 * fVar3)) * fStackX_c +
            (fVar5 * fVar4 + fVar6 * fVar1) * fStackX_8 +
            (fVar5 * fVar2 - (fVar1 + fVar1) * fVar4) * 0.0 + (this->fields)._position2D.y;
  VVar7.x = (_UNK_? - (fVar6 * fVar2 + fVar5 * fVar3)) * fStackX_8 +
            (fVar6 * fVar1 - fVar5 * fVar4) * fStackX_c + (fVar6 * fVar4 + fVar5 * fVar1) * 0.0 +
            (this->fields)._position2D.x;
  return VVar7;
}


/* Vector3 TransformPoint3D(Vector3) */

Vector3 * Assembly-CSharp.dll::RTG::GizmoTransform::GizmoTransform_TransformPoint3D
                    (Vector3 *__return_storage_ptr__,GizmoTransform *this,Vector3 *point,
                    MethodInfo *method)

{
  fVar1 = (this->fields)._rotation3D.x;
  fVar2 = (this->fields)._rotation3D.y;
  fVar3 = (this->fields)._rotation3D.z;
  fVar4 = (this->fields)._rotation3D.w;
  uVar5 = point->x;
  uVar6 = point->y;
  fVar7 = fVar2 + fVar2;
  fVar8 = fVar3 + fVar3;
  fVar9 = (fVar1 + fVar1) * fVar1;
  fVar10 = (fVar1 + fVar1) * fVar4;
  uVar11 = (this->fields)._position3D.x;
  uVar12 = (this->fields)._position3D.y;
  fVar13 = point->z;
  fVar14 = _UNK_? - (fVar8 * fVar3 + fVar9);
  uVar15 = point->x;
  fVar16 = _UNK_? - (fVar7 * fVar2 + fVar9);
  fVar9 = (this->fields)._position3D.z;
  __return_storage_ptr__->x =
       (_UNK_? - (fVar8 * fVar3 + fVar7 * fVar2)) * (float)uVar5 +
       (fVar7 * fVar1 - fVar8 * fVar4) * (float)uVar6 +
       (fVar7 * fVar4 + fVar8 * fVar1) * fVar13 + (float)uVar11;
  __return_storage_ptr__->y =
       fVar14 * (float)uVar6 + (fVar8 * fVar4 + fVar7 * fVar1) * (float)uVar15 +
       (fVar8 * fVar2 - fVar10) * fVar13 + (float)uVar12;
  __return_storage_ptr__->z =
       (fVar8 * fVar1 - fVar7 * fVar4) * (float)uVar15 + (fVar10 + fVar8 * fVar2) * (float)uVar6
       + fVar16 * fVar13 + fVar9;
  return __return_storage_ptr__;
}


/* Vector2 TransformVector2D(Vector2) */

Vector2 Assembly-CSharp.dll::RTG::GizmoTransform::GizmoTransform_TransformVector2D
                  (GizmoTransform *this,Vector2 vec,MethodInfo *method)

{
  fVar1 = (this->fields)._rotation2D.x;
  fVar2 = (this->fields)._rotation2D.y;
  fVar3 = (this->fields)._rotation2D.z;
  fVar4 = (this->fields)._rotation2D.w;
  fVar5 = fVar3 + fVar3;
  fVar6 = fVar2 + fVar2;
  fStackX_c = vec.y;
  fStackX_8 = vec.x;
  VVar7.y = (_UNK_? - ((fVar1 + fVar1) * fVar1 + fVar5 * fVar3)) * fStackX_c +
            (fVar5 * fVar4 + fVar6 * fVar1) * fStackX_8 +
            (fVar5 * fVar2 - (fVar1 + fVar1) * fVar4) * 0.0;
  VVar7.x = (_UNK_? - (fVar6 * fVar2 + fVar5 * fVar3)) * fStackX_8 +
            (fVar6 * fVar1 - fVar5 * fVar4) * fStackX_c + (fVar5 * fVar1 + fVar6 * fVar4) * 0.0;
  return VVar7;
}


/* Vector3 TransformVector3D(Vector3) */

Vector3 * Assembly-CSharp.dll::RTG::GizmoTransform::GizmoTransform_TransformVector3D
                    (Vector3 *__return_storage_ptr__,GizmoTransform *this,Vector3 *vec,
                    MethodInfo *method)

{
  fVar1 = (this->fields)._rotation3D.x;
  fVar2 = (this->fields)._rotation3D.y;
  fVar3 = (this->fields)._rotation3D.z;
  fVar4 = (this->fields)._rotation3D.w;
  fVar5 = vec->z;
  fVar6 = fVar3 + fVar3;
  fVar7 = fVar2 + fVar2;
  uVar8 = vec->x;
  uVar9 = vec->y;
  fVar10 = (fVar1 + fVar1) * fVar1;
  fVar11 = (fVar1 + fVar1) * fVar4;
  fVar12 = _UNK_? - (fVar6 * fVar3 + fVar10);
  fVar10 = _UNK_? - (fVar7 * fVar2 + fVar10);
  __return_storage_ptr__->x =
       (_UNK_? - (fVar6 * fVar3 + fVar7 * fVar2)) * (float)uVar8 +
       (fVar7 * fVar1 - fVar6 * fVar4) * (float)uVar9 + (fVar7 * fVar4 + fVar6 * fVar1) * fVar5;
  __return_storage_ptr__->y =
       fVar12 * (float)uVar9 + (fVar6 * fVar4 + fVar7 * fVar1) * (float)uVar8 +
       (fVar6 * fVar2 - fVar11) * fVar5;
  __return_storage_ptr__->z =
       (fVar6 * fVar1 - fVar7 * fVar4) * (float)uVar8 + (fVar11 + fVar6 * fVar2) * (float)uVar9 +
       fVar10 * fVar5;
  return __return_storage_ptr__;
}


/* Void Update2DAxes() */

void Assembly-CSharp.dll::RTG::GizmoTransform::GizmoTransform_Update2DAxes
               (GizmoTransform *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uVar1._0_4_ = (this->fields)._rotation2D.x;
  uVar1._4_4_ = (this->fields)._rotation2D.y;
  uVar2._0_4_ = (this->fields)._rotation2D.z;
  uVar2._4_4_ = (this->fields)._rotation2D.w;
  pVVar3 = TypeInfo__UnityEngine__Vector3->static_fields;
  uVar4._0_4_ = (pVVar3->zeroVector).x;
  uVar4._4_4_ = (pVVar3->zeroVector).y;
  fVar5 = (pVVar3->zeroVector).z;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar3 = TypeInfo__UnityEngine__Vector3->static_fields;
  uStack_6._0_4_ = (pVVar3->oneVector).x;
  uStack_6._4_4_ = (pVVar3->oneVector).y;
  fStack_7 = (pVVar3->oneVector).z;
  uStack_8 = 0;
  uStack_9 = 0;
  uStack_10 = 0;
  uStack_11 = 0;
  uStack_12 = 0;
  uStack_13 = 0;
  uStack_14 = 0;
  uStack_15 = 0;
  pcVar16 = pcRam_?;
  uStack_17 = uVar4;
  fStack_18 = fVar5;
  uStack_19 = uVar1;
  uStack_20 = uVar2;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar16 = (code *)FUN_?(&UNK_?), pcVar16 == (code *)0x0)) {
    uVar4 = func_?(&UNK_?);
    FUN_?(uVar4,0);
    pcVar16 = (code *)swi(3);
    (*pcVar16)();
    return;
  }
  pcRam_? = pcVar16;
  (*pcRam_?)(&uStack_17,&uStack_19,&uStack_6,&uStack_8);
  pVVar21 = (this->fields)._axes2D;
  fVar5 = (float)uStack_8;
  fVar22 = uStack_8._4_4_;
  fVar23 = (float)uStack_9;
  uStack_17 = uStack_8;
  fStack_18 = (float)uStack_9;
  fVar24 = (float)FUN_?(&uStack_17);
  if (_UNK_? < fVar24) {
    fStack_7 = fVar23 / fVar24;
    uStack_6 = CONCAT44(fVar22 / fVar24,fVar5 / fVar24);
  }
  else {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pVVar3 = TypeInfo__UnityEngine__Vector3->static_fields;
    uStack_6._0_4_ = (pVVar3->zeroVector).x;
    uStack_6._4_4_ = (pVVar3->zeroVector).y;
    fStack_7 = (pVVar3->zeroVector).z;
  }
  if (pVVar21 == (Vector2__Array *)0x0) {
code_?:
    FUN_?();
    pcVar16 = (code *)swi(3);
    (*pcVar16)();
    return;
  }
  if ((int)pVVar21->max_length != 0) {
    pVVar21->vector[0].x = (float)uStack_6;
    pVVar21->vector[0].y = uStack_6._4_4_;
    pVVar21 = (this->fields)._axes2D;
    fVar5 = (float)uStack_10;
    fVar22 = uStack_10._4_4_;
    uStack_17 = uStack_10;
    fStack_18 = (float)uStack_11;
    fVar23 = (float)FUN_?(&uStack_17);
    if (_UNK_? < fVar23) {
      uStack_6 = CONCAT44(fVar22 / fVar23,fVar5 / fVar23);
    }
    else {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Vector3);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      uStack_6._0_4_ = (TypeInfo__UnityEngine__Vector3->static_fields->zeroVector).x;
      uStack_6._4_4_ = (TypeInfo__UnityEngine__Vector3->static_fields->zeroVector).y;
    }
    if (pVVar21 == (Vector2__Array *)0x0) goto code_?;
    if (1 < (uint)pVVar21->max_length) {
      pVVar21->vector[1].x = (float)uStack_6;
      pVVar21->vector[1].y = uStack_6._4_4_;
      return;
    }
  }
  FUN_?();
  pcVar16 = (code *)swi(3);
  (*pcVar16)();
  return;
}


/* Void Update3DAxes() */

void Assembly-CSharp.dll::RTG::GizmoTransform::GizmoTransform_Update3DAxes
               (GizmoTransform *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uVar1._0_4_ = (this->fields)._rotation3D.x;
  uVar1._4_4_ = (this->fields)._rotation3D.y;
  uVar2._0_4_ = (this->fields)._rotation3D.z;
  uVar2._4_4_ = (this->fields)._rotation3D.w;
  pVVar3 = TypeInfo__UnityEngine__Vector3->static_fields;
  uVar4._0_4_ = (pVVar3->zeroVector).x;
  uVar4._4_4_ = (pVVar3->zeroVector).y;
  fVar5 = (pVVar3->zeroVector).z;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar3 = TypeInfo__UnityEngine__Vector3->static_fields;
  uStack_6._0_4_ = (pVVar3->oneVector).x;
  uStack_6._4_4_ = (pVVar3->oneVector).y;
  fStack_7 = (pVVar3->oneVector).z;
  uStack_8 = 0;
  uStack_9 = 0;
  uStack_10 = 0;
  uStack_11 = 0;
  uStack_12 = 0;
  uStack_13 = 0;
  uStack_14 = 0;
  uStack_15 = 0;
  pcVar16 = pcRam_?;
  uStack_17 = uVar4;
  fStack_18 = fVar5;
  uStack_19 = uVar1;
  uStack_20 = uVar2;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar16 = (code *)FUN_?(&UNK_?), pcVar16 == (code *)0x0)) {
    uVar4 = func_?(&UNK_?);
    FUN_?(uVar4,0);
    pcVar16 = (code *)swi(3);
    (*pcVar16)();
    return;
  }
  pcRam_? = pcVar16;
  (*pcRam_?)(&uStack_17,&uStack_19,&uStack_6,&uStack_8);
  pVVar21 = (this->fields)._axes3D;
  fVar22 = (float)uStack_8;
  fVar23 = uStack_8._4_4_;
  fVar5 = (float)uStack_9;
  uStack_17 = uStack_8;
  fStack_18 = (float)uStack_9;
  fVar24 = (float)FUN_?(&uStack_17);
  if (_UNK_? < fVar24) {
    fVar5 = fVar5 / fVar24;
    uStack_6 = CONCAT44(fVar23 / fVar24,fVar22 / fVar24);
  }
  else {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pVVar3 = TypeInfo__UnityEngine__Vector3->static_fields;
    uStack_6._0_4_ = (pVVar3->zeroVector).x;
    uStack_6._4_4_ = (pVVar3->zeroVector).y;
    fVar5 = (pVVar3->zeroVector).z;
  }
  if (pVVar21 == (Vector3__Array *)0x0) {
code_?:
    FUN_?();
    pcVar16 = (code *)swi(3);
    (*pcVar16)();
    return;
  }
  if ((int)pVVar21->max_length != 0) {
    pVVar21->vector[0].x = (float)(undefined4)uStack_6;
    pVVar21->vector[0].y = (float)uStack_6._4_4_;
    pVVar21->vector[0].z = fVar5;
    pVVar21 = (this->fields)._axes3D;
    fVar22 = (float)uStack_10;
    fVar23 = uStack_10._4_4_;
    fVar5 = (float)uStack_11;
    uStack_17 = uStack_10;
    fStack_18 = (float)uStack_11;
    fVar24 = (float)FUN_?(&uStack_17);
    if (_UNK_? < fVar24) {
      fVar5 = fVar5 / fVar24;
      uStack_6 = CONCAT44(fVar23 / fVar24,fVar22 / fVar24);
    }
    else {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Vector3);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pVVar3 = TypeInfo__UnityEngine__Vector3->static_fields;
      uStack_6._0_4_ = (pVVar3->zeroVector).x;
      uStack_6._4_4_ = (pVVar3->zeroVector).y;
      fVar5 = (pVVar3->zeroVector).z;
    }
    if (pVVar21 == (Vector3__Array *)0x0) goto code_?;
    if (1 < (uint)pVVar21->max_length) {
      pVVar21->vector[1].x = (float)(undefined4)uStack_6;
      pVVar21->vector[1].y = (float)uStack_6._4_4_;
      pVVar21->vector[1].z = fVar5;
      pVVar21 = (this->fields)._axes3D;
      fVar22 = (float)uStack_12;
      fVar23 = uStack_12._4_4_;
      fVar5 = (float)uStack_13;
      uStack_17 = uStack_12;
      fStack_18 = (float)uStack_13;
      fVar24 = (float)FUN_?(&uStack_17);
      if (_UNK_? < fVar24) {
        fVar5 = fVar5 / fVar24;
        uStack_6 = CONCAT44(fVar23 / fVar24,fVar22 / fVar24);
      }
      else {
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__UnityEngine__Vector3);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pVVar3 = TypeInfo__UnityEngine__Vector3->static_fields;
        uStack_6._0_4_ = (pVVar3->zeroVector).x;
        uStack_6._4_4_ = (pVVar3->zeroVector).y;
        fVar5 = (pVVar3->zeroVector).z;
      }
      if (pVVar21 == (Vector3__Array *)0x0) goto code_?;
      if (2 < (uint)pVVar21->max_length) {
        pVVar21->vector[2].x = (float)(undefined4)uStack_6;
        pVVar21->vector[2].y = (float)uStack_6._4_4_;
        pVVar21->vector[2].z = fVar5;
        return;
      }
    }
  }
  FUN_?();
  pcVar16 = (code *)swi(3);
  (*pcVar16)();
  return;
}


/* Void UpdateChildTransforms2D() */

void Assembly-CSharp.dll::RTG::GizmoTransform::GizmoTransform_UpdateChildTransforms2D
               (GizmoTransform *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoTransform>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoTransform>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoTransform>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<RTG::GizmoTransform>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLStack_1 = (this->fields)._children;
  if (pLStack_1 != (List_1_RTG_GizmoTransform_ *)0x0) {
    if (iRam_? != 0) {
      uVar2 = (uint)((ulonglong)&pLStack_1 >> 0xc);
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
    fVar7 = _UNK_?;
    lStack_8 = (ulonglong)(uint)(pLStack_1->fields)._version << 0x20;
    uStack_9 = 0;
    aLStack_10[0]._index = (undefined4)lStack_8;
    aLStack_10[0]._version = lStack_8._4_4_;
    aLStack_10[0]._current = (Object *)0x0;
    aLStack_10[0]._list = (List_1_System_Object_ *)pLStack_1;
    while( true ) {
      bVar11 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
               List_1_T_Enumerator_System_Object__MoveNext
                         (aLStack_10,
                          MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoTransform>__MoveNext__
                         );
      this_00 = aLStack_10[0]._current;
      if (bVar11 == 0) {
        return;
      }
      fVar12 = (this->fields)._rotation2D.x;
      fVar13 = (this->fields)._rotation2D.y;
      fVar14 = (this->fields)._rotation2D.z;
      fVar15 = (this->fields)._rotation2D.w;
      if ((GizmoTransform *)aLStack_10[0]._current == (GizmoTransform *)0x0) break;
      fVar16 = (fVar14 + fVar14) * fVar14;
      fVar17 = (fVar13 + fVar13) * fVar12;
      fVar18 = (fVar14 + fVar14) * fVar15;
      fVar19 = (((GizmoTransform__Fields *)((longlong)aLStack_10[0]._current + 0x10))->
              _localPosition2D).y;
      fVar20 = (this->fields)._position2D.y;
      (((GizmoTransform__Fields *)((longlong)aLStack_10[0]._current + 0x10))->_position2D).x =
           (fVar7 - ((fVar13 + fVar13) * fVar13 + fVar16)) *
           (((GizmoTransform__Fields *)((longlong)aLStack_10[0]._current + 0x10))->_localPosition2D)
           .x + (fVar17 - fVar18) *
                (((GizmoTransform__Fields *)((longlong)aLStack_10[0]._current + 0x10))->
                _localPosition2D).y + ((fVar14 + fVar14) * fVar12 + (fVar13 + fVar13) * fVar15) * 0.0 +
           (this->fields)._position2D.x;
      (((GizmoTransform__Fields *)((longlong)aLStack_10[0]._current + 0x10))->_position2D).y =
           (fVar18 + fVar17) *
           (((GizmoTransform__Fields *)((longlong)aLStack_10[0]._current + 0x10))->_localPosition2D)
           .x + (fVar7 - ((fVar12 + fVar12) * fVar12 + fVar16)) * fVar19 +
           ((fVar14 + fVar14) * fVar13 - (fVar12 + fVar12) * fVar15) * 0.0 + fVar20;
      fVar12 = (this->fields)._rotation2D.x;
      fVar13 = (this->fields)._rotation2D.y;
      fVar14 = (this->fields)._rotation2D.z;
      fVar15 = (this->fields)._rotation2D.w;
      fVar19 = (((GizmoTransform__Fields *)((longlong)aLStack_10[0]._current + 0x10))->
              _localRotation2D).x;
      fVar20 = (((GizmoTransform__Fields *)((longlong)aLStack_10[0]._current + 0x10))->
              _localRotation2D).y;
      fVar17 = (((GizmoTransform__Fields *)((longlong)aLStack_10[0]._current + 0x10))->
               _localRotation2D).z;
      fVar16 = (((GizmoTransform__Fields *)((longlong)aLStack_10[0]._current + 0x10))->
               _localRotation2D).w;
      fStack_21 = ((fVar16 * fVar15 - fVar19 * fVar12) - fVar20 * fVar13) - fVar17 * fVar14;
      fStack_22 = (fVar20 * fVar12 + fVar16 * fVar14 + fVar17 * fVar15) - fVar19 * fVar13;
      fStack_23 = (fVar20 * fVar15 + fVar16 * fVar13 + fVar19 * fVar14) - fVar17 * fVar12;
      fStack_24 = (fVar19 * fVar15 + fVar16 * fVar12 + fVar17 * fVar13) - fVar20 * fVar14;
      fVar12 = fStack_24 * fStack_24 + fStack_23 * fStack_23 + fStack_22 * fStack_22 +
               fStack_21 * fStack_21;
      if (fVar12 < 0.0) {
        fVar12 = (float)FUN_?(fVar12);
      }
      else {
        fVar12 = SQRT(fVar12);
      }
      if (_UNK_? <= fVar12) {
        fVar12 = fVar7 / fVar12;
        fStack_21 = fVar12 * fStack_21;
        fStack_22 = fVar12 * fStack_22;
        fStack_23 = fVar12 * fStack_23;
        fStack_24 = fVar12 * fStack_24;
      }
      pLStack_1 = (List_1_RTG_GizmoTransform_ *)CONCAT44(fStack_23,fStack_24);
      lStack_8 = CONCAT44(fStack_21,fStack_22);
      *(List_1_RTG_GizmoTransform_ **)
       &((GizmoTransform__Fields *)((longlong)this_00 + 0x10))->_rotation2D = pLStack_1;
      *(float *)&this_00[7].klass = fStack_22;
      *(float *)((longlong)&this_00[7].klass + 4) = fStack_21;
      fVar12 = QuaternionEx::QuaternionEx_ConvertTo2DRotation
                         ((Quaternion *)&pLStack_1,(MethodInfo *)0x0);
      ((GizmoTransform__Fields *)((longlong)this_00 + 0x10))->_rotation2DDegrees = fVar12;
      GizmoTransform_Update2DAxes((GizmoTransform *)this_00,(MethodInfo *)0x0);
      GizmoTransform_UpdateChildTransforms2D((GizmoTransform *)this_00,(MethodInfo *)0x0);
      pGVar25 = ((GizmoTransform__Fields *)((longlong)this_00 + 0x10))->Changed;
      ((GizmoTransform__Fields *)((longlong)this_00 + 0x10))->_firingChanged2DEvent = 1;
      if (pGVar25 != (GizmoEntityTransformChangedHandler *)0x0) {
        (*(pGVar25->fields)._._.invoke_impl)
                  ((pGVar25->fields)._._.method_code,this_00,0x100000000,(pGVar25->fields)._._.method)
        ;
      }
      ((GizmoTransform__Fields *)((longlong)this_00 + 0x10))->_firingChanged2DEvent = 0;
    }
    FUN_?();
    FUN_?();
    pcVar26 = (code *)swi(3);
    (*pcVar26)();
    return;
  }
  FUN_?();
  pcVar26 = (code *)swi(3);
  (*pcVar26)();
  return;
}


/* Void UpdateChildTransforms3D() */

void Assembly-CSharp.dll::RTG::GizmoTransform::GizmoTransform_UpdateChildTransforms3D
               (GizmoTransform *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoTransform>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoTransform>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoTransform>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<RTG::GizmoTransform>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  LStack_1._list = (List_1_System_Object_ *)(this->fields)._children;
  if ((List_1_RTG_GizmoTransform_ *)LStack_1._list != (List_1_RTG_GizmoTransform_ *)0x0) {
    if (iRam_? != 0) {
      uVar2 = (uint)((ulonglong)&uStack_3 >> 0xc);
      uVar4 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
      do {
        uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
        puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
        LOCK();
        bVar7 = uVar5 == *puVar6;
        if (bVar7) {
          *puVar6 = uVar5 | 1L << (uVar2 & 0x3f);
        }
        UNLOCK();
      } while (!bVar7);
    }
    pLStack_8 = (List_1_T_Enumerator_System_Object_ *)
                  ((ulonglong)
                   (uint)(((List_1_RTG_GizmoTransform_ *)LStack_1._list)->fields)._version << 0x20)
    ;
    uStack_9 = 0;
    LStack_1._8_8_ = pLStack_8;
    LStack_1._current = (Object *)0x0;
    uStack_3 = 0;
    pLStack_8 = &LStack_1;
    fVar10 = _UNK_?;
    while( true ) {
      bVar11 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
              List_1_T_Enumerator_System_Object__MoveNext
                        (&LStack_1,
                         MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoTransform>__MoveNext__
                        );
      pOVar12 = LStack_1._current;
      if (bVar11 == 0) {
        return;
      }
      QVar13 = (this->fields)._rotation3D;
      fVar14 = QVar13.x;
      fVar15 = QVar13.y;
      fVar16 = QVar13.z;
      fVar17 = QVar13.w;
      if ((GizmoTransform *)LStack_1._current == (GizmoTransform *)0x0) break;
      uStack_18._0_4_ = *(float *)&LStack_1._current[2].monitor;
      uStack_18._4_4_ = *(float *)((longlong)&LStack_1._current[2].monitor + 4);
      fVar19 = (fVar14 + fVar14) * fVar14;
      fVar20 = (fVar15 + fVar15) * fVar15;
      fVar21 = (fVar16 + fVar16) * fVar16;
      fVar22 = (fVar15 + fVar15) * fVar14;
      fVar23 = (fVar16 + fVar16) * fVar14;
      fVar24 = (fVar16 + fVar16) * fVar15;
      fVar25 = (fVar14 + fVar14) * fVar17;
      fVar26 = (fVar15 + fVar15) * fVar17;
      fVar17 = (fVar16 + fVar16) * fVar17;
      fVar14 = (((GizmoTransform__Fields *)((longlong)LStack_1._current + 0x10))->_localPosition3D)
               .z;
      fVar27 = _UNK_? - (fVar21 + fVar19);
      fVar19 = _UNK_? - (fVar20 + fVar19);
      uStack_28._0_4_ = (this->fields)._position3D.x;
      uStack_28._4_4_ = (this->fields)._position3D.y;
      fVar15 = (this->fields)._position3D.z;
      *(float *)((longlong)&pOVar12[1].monitor + 4) =
           (fVar10 - (fVar21 + fVar20)) * (float)(undefined4)uStack_18 +
           (fVar22 - fVar17) * (float)uStack_18._4_4_ + (fVar26 + fVar23) * fVar14 +
           (float)(undefined4)uStack_28;
      *(float *)&pOVar12[2].klass =
           (fVar17 + fVar22) * (float)(undefined4)uStack_18 + fVar27 * (float)uStack_18._4_4_ +
           (fVar24 - fVar25) * fVar14 + (float)uStack_28._4_4_;
      (((GizmoTransform__Fields *)((longlong)LStack_1._current + 0x10))->_position3D).z =
           (fVar23 - fVar26) * (float)(undefined4)uStack_18 +
           (fVar25 + fVar24) * (float)uStack_18._4_4_ + fVar19 * fVar14 + fVar15;
      fVar10 = (this->fields)._rotation3D.x;
      fVar14 = (this->fields)._rotation3D.y;
      fVar15 = (this->fields)._rotation3D.z;
      fVar17 = (this->fields)._rotation3D.w;
      fVar27 = (((GizmoTransform__Fields *)((longlong)LStack_1._current + 0x10))->_localRotation3D)
               .x;
      fVar19 = (((GizmoTransform__Fields *)((longlong)LStack_1._current + 0x10))->_localRotation3D)
               .y;
      fVar22 = (((GizmoTransform__Fields *)((longlong)LStack_1._current + 0x10))->_localRotation3D)
               .z;
      fVar21 = (((GizmoTransform__Fields *)((longlong)LStack_1._current + 0x10))->_localRotation3D)
               .w;
      fStack_29 = ((fVar21 * fVar17 - fVar27 * fVar10) - fVar19 * fVar14) - fVar22 * fVar15;
      fStack_30 = (fVar22 * fVar17 + fVar21 * fVar15 + fVar19 * fVar10) - fVar27 * fVar14;
      fStack_31 = (fVar19 * fVar17 + fVar21 * fVar14 + fVar27 * fVar15) - fVar22 * fVar10;
      fStack_32 = (fVar22 * fVar14 + fVar27 * fVar17 + fVar21 * fVar10) - fVar19 * fVar15;
      fVar14 = fStack_32 * fStack_32 + fStack_31 * fStack_31 + fStack_30 * fStack_30 +
               fStack_29 * fStack_29;
      fStack_33 = fVar16;
      fStack_34 = fVar16;
      if (fVar14 < 0.0) {
        fVar14 = (float)FUN_?(fVar14);
      }
      else {
        fVar14 = SQRT(fVar14);
      }
      fVar10 = _UNK_?;
      if (_UNK_? <= fVar14) {
        fVar14 = _UNK_? / fVar14;
        fStack_29 = fVar14 * fStack_29;
        fStack_30 = fVar14 * fStack_30;
        fStack_31 = fVar14 * fStack_31;
        fStack_32 = fVar14 * fStack_32;
      }
      *(float *)((longlong)&pOVar12[3].klass + 4) = fStack_32;
      *(float *)&pOVar12[3].monitor = fStack_31;
      *(float *)((longlong)&pOVar12[3].monitor + 4) = fStack_30;
      *(float *)&pOVar12[4].klass = fStack_29;
      GizmoTransform_Update3DAxes((GizmoTransform *)pOVar12,(MethodInfo *)0x0);
      GizmoTransform_UpdateChildTransforms3D((GizmoTransform *)pOVar12,(MethodInfo *)0x0);
      pGVar35 = ((GizmoTransform__Fields *)((longlong)pOVar12 + 0x10))->Changed;
      ((GizmoTransform__Fields *)((longlong)pOVar12 + 0x10))->_firingChanged3DEvent = 1;
      if (pGVar35 != (GizmoEntityTransformChangedHandler *)0x0) {
        (*(pGVar35->fields)._._.invoke_impl)
                  ((pGVar35->fields)._._.method_code,pOVar12,0x200000000,(pGVar35->fields)._._.method);
      }
      ((GizmoTransform__Fields *)((longlong)pOVar12 + 0x10))->_firingChanged3DEvent = 0;
    }
    FUN_?();
    FUN_?();
    pcVar36 = (code *)swi(3);
    (*pcVar36)();
    return;
  }
  FUN_?();
  pcVar36 = (code *)swi(3);
  (*pcVar36)();
  return;
}


/* GizmoTransform() */

void Assembly-CSharp.dll::RTG::GizmoTransform::GizmoTransform__ctor
               (GizmoTransform *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<RTG::GizmoTransform>__List_int_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<RTG::GizmoTransform>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Vector2);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Quaternion);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  cVar1 = cRam_?;
  pQVar2 = TypeInfo__UnityEngine__Quaternion->static_fields;
  fVar3 = (pQVar2->identityQuaternion).y;
  fVar4 = (pQVar2->identityQuaternion).z;
  fVar5 = (pQVar2->identityQuaternion).w;
  (this->fields)._rotation3D.x = (pQVar2->identityQuaternion).x;
  (this->fields)._rotation3D.y = fVar3;
  (this->fields)._rotation3D.z = fVar4;
  (this->fields)._rotation3D.w = fVar5;
  if (cVar1 == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Quaternion);
    LOCK();
    UNLOCK();
    cVar1 = '\x01';
    cRam_? = '\x01';
  }
  pQVar2 = TypeInfo__UnityEngine__Quaternion->static_fields;
  fVar3 = (pQVar2->identityQuaternion).y;
  fVar4 = (pQVar2->identityQuaternion).z;
  fVar5 = (pQVar2->identityQuaternion).w;
  (this->fields)._localRotation3D.x = (pQVar2->identityQuaternion).x;
  (this->fields)._localRotation3D.y = fVar3;
  (this->fields)._localRotation3D.z = fVar4;
  (this->fields)._localRotation3D.w = fVar5;
  if (cVar1 == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Quaternion);
    LOCK();
    UNLOCK();
    cVar1 = '\x01';
    cRam_? = '\x01';
  }
  pQVar2 = TypeInfo__UnityEngine__Quaternion->static_fields;
  fVar3 = (pQVar2->identityQuaternion).y;
  fVar4 = (pQVar2->identityQuaternion).z;
  fVar5 = (pQVar2->identityQuaternion).w;
  (this->fields)._rotation2D.x = (pQVar2->identityQuaternion).x;
  (this->fields)._rotation2D.y = fVar3;
  (this->fields)._rotation2D.z = fVar4;
  (this->fields)._rotation2D.w = fVar5;
  if (cVar1 == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Quaternion);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pQVar2 = TypeInfo__UnityEngine__Quaternion->static_fields;
  fVar3 = (pQVar2->identityQuaternion).y;
  fVar4 = (pQVar2->identityQuaternion).z;
  fVar5 = (pQVar2->identityQuaternion).w;
  (this->fields)._localRotation2D.x = (pQVar2->identityQuaternion).x;
  (this->fields)._localRotation2D.y = fVar3;
  (this->fields)._localRotation2D.z = fVar4;
  (this->fields)._localRotation2D.w = fVar5;
  pVVar6 = (Vector3__Array *)FUN_?(TypeInfo__UnityEngine__Vector3,3);
  bVar7 = iRam_? != 0;
  (this->fields)._axes3D = pVVar6;
  if (bVar7) {
    uVar8 = (uint)((ulonglong)&(this->fields)._axes3D >> 0xc);
    lVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6) * 8;
    do {
      uVar10 = *(ulonglong *)(lVar9 + 0xADDR);
      puVar11 = (ulonglong *)(lVar9 + 0xADDR);
      LOCK();
      bVar7 = uVar10 == *puVar11;
      if (bVar7) {
        *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
      }
      UNLOCK();
    } while (!bVar7);
  }
  pVVar12 = (Vector2__Array *)FUN_?(TypeInfo__UnityEngine__Vector2,2);
  bVar7 = iRam_? != 0;
  (this->fields)._axes2D = pVVar12;
  if (bVar7) {
    uVar8 = (uint)((ulonglong)&(this->fields)._axes2D >> 0xc);
    lVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6) * 8;
    do {
      uVar10 = *(ulonglong *)(lVar9 + 0xADDR);
      puVar11 = (ulonglong *)(lVar9 + 0xADDR);
      LOCK();
      bVar7 = uVar10 == *puVar11;
      if (bVar7) {
        *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
      }
      UNLOCK();
    } while (!bVar7);
  }
  pLVar13 = (List_1_RTG_GizmoTransform_ *)
            FUN_?(TypeInfo__System__Collections__Generic__List<RTG::GizmoTransform>);
  pvVar14 = MethodInfo__System__Collections__Generic__List<RTG::GizmoTransform>__List_int_->klass->
            rgctx_data[3].rgctxDataDummy;
  if ((*(byte *)((longlong)pvVar14 + 0x135) & 1) == 0) {
    pvVar14 = (void *)FUN_?(pvVar14);
  }
  pGVar15 = (GizmoTransform__Array *)FUN_?(pvVar14);
  (pLVar13->fields)._items = pGVar15;
  if (iRam_? != 0) {
    uVar8 = (uint)((ulonglong)&pLVar13->fields >> 0xc);
    lVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6) * 8;
    do {
      uVar10 = *(ulonglong *)(lVar9 + 0xADDR);
      puVar11 = (ulonglong *)(lVar9 + 0xADDR);
      LOCK();
      bVar7 = uVar10 == *puVar11;
      if (bVar7) {
        *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
      }
      UNLOCK();
    } while (!bVar7);
  }
  iVar16 = iRam_?;
  (this->fields)._children = pLVar13;
  if (iVar16 != 0) {
    uVar8 = (uint)((ulonglong)&(this->fields)._children >> 0xc);
    lVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6) * 8;
    do {
      uVar10 = *(ulonglong *)(lVar9 + 0xADDR);
      puVar11 = (ulonglong *)(lVar9 + 0xADDR);
      LOCK();
      bVar7 = uVar10 == *puVar11;
      if (bVar7) {
        *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
      }
      UNLOCK();
    } while (!bVar7);
  }
  GizmoTransform_Update3DAxes(this,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3,0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uVar17._0_4_ = (this->fields)._rotation2D.x;
  uVar17._4_4_ = (this->fields)._rotation2D.y;
  uVar18._0_4_ = (this->fields)._rotation2D.z;
  uVar18._4_4_ = (this->fields)._rotation2D.w;
  pVVar19 = TypeInfo__UnityEngine__Vector3->static_fields;
  uVar20._0_4_ = (pVVar19->zeroVector).x;
  uVar20._4_4_ = (pVVar19->zeroVector).y;
  fVar3 = (pVVar19->zeroVector).z;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar19 = TypeInfo__UnityEngine__Vector3->static_fields;
  uStack_21._0_4_ = (pVVar19->oneVector).x;
  uStack_21._4_4_ = (pVVar19->oneVector).y;
  fStack_22 = (pVVar19->oneVector).z;
  uStack_23 = 0;
  uStack_24 = 0;
  uStack_25 = 0;
  uStack_26 = 0;
  uStack_27 = 0;
  uStack_28 = 0;
  uStack_29 = 0;
  uStack_30 = 0;
  pcVar31 = pcRam_?;
  uStack_32 = uVar20;
  fStack_33 = fVar3;
  uStack_34 = uVar17;
  uStack_35 = uVar18;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar31 = (code *)FUN_?(&UNK_?), pcVar31 == (code *)0x0)) {
    uVar20 = func_?(&UNK_?);
    FUN_?(uVar20,0);
    pcVar31 = (code *)swi(3);
    (*pcVar31)();
    return;
  }
  pcRam_? = pcVar31;
  (*pcRam_?)(&uStack_32,&uStack_34,&uStack_21,&uStack_23);
  pVVar12 = (this->fields)._axes2D;
  fVar3 = (float)uStack_23;
  fVar4 = uStack_23._4_4_;
  fVar5 = (float)uStack_24;
  uStack_32 = uStack_23;
  fStack_33 = (float)uStack_24;
  fVar36 = (float)FUN_?(&uStack_32);
  if (_UNK_? < fVar36) {
    fStack_22 = fVar5 / fVar36;
    uStack_21 = CONCAT44(fVar4 / fVar36,fVar3 / fVar36);
  }
  else {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pVVar19 = TypeInfo__UnityEngine__Vector3->static_fields;
    uStack_21._0_4_ = (pVVar19->zeroVector).x;
    uStack_21._4_4_ = (pVVar19->zeroVector).y;
    fStack_22 = (pVVar19->zeroVector).z;
  }
  if (pVVar12 == (Vector2__Array *)0x0) {
code_?:
    FUN_?();
    pcVar31 = (code *)swi(3);
    (*pcVar31)();
    return;
  }
  if ((int)pVVar12->max_length != 0) {
    pVVar12->vector[0].x = (float)uStack_21;
    pVVar12->vector[0].y = uStack_21._4_4_;
    pVVar12 = (this->fields)._axes2D;
    fVar3 = (float)uStack_25;
    fVar4 = uStack_25._4_4_;
    uStack_32 = uStack_25;
    fStack_33 = (float)uStack_26;
    fVar5 = (float)FUN_?(&uStack_32);
    if (_UNK_? < fVar5) {
      uStack_21 = CONCAT44(fVar4 / fVar5,fVar3 / fVar5);
    }
    else {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Vector3);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      uStack_21._0_4_ = (TypeInfo__UnityEngine__Vector3->static_fields->zeroVector).x;
      uStack_21._4_4_ = (TypeInfo__UnityEngine__Vector3->static_fields->zeroVector).y;
    }
    if (pVVar12 == (Vector2__Array *)0x0) goto code_?;
    if (1 < (uint)pVVar12->max_length) {
      pVVar12->vector[1].x = (float)uStack_21;
      pVVar12->vector[1].y = uStack_21._4_4_;
      return;
    }
  }
  FUN_?();
  pcVar31 = (code *)swi(3);
  (*pcVar31)();
  return;
}


/* Void add_Changed(GizmoEntityTransformChangedHandler) */

void Assembly-CSharp.dll::RTG::GizmoTransform::GizmoTransform_add_Changed
               (GizmoTransform *this,GizmoEntityTransformChangedHandler *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__GizmoEntityTransformChangedHandler);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar1 = &this->fields;
  a = (this->fields).Changed;
  do {
    pGVar2 = (GizmoEntityTransformChangedHandler *)
             mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pGVar3 = (GizmoEntityTransformChangedHandler *)0x0;
    if (pGVar2 != (GizmoEntityTransformChangedHandler *)0x0) {
      if (pGVar2->klass == TypeInfo__RTG__GizmoEntityTransformChangedHandler) {
        pGVar3 = pGVar2;
      }
      if (pGVar3 == (GizmoEntityTransformChangedHandler *)0x0) {
        FUN_?(pGVar2);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    LOCK();
    pGVar2 = pGVar1->Changed;
    bVar5 = a == pGVar2;
    if (bVar5) {
      pGVar1->Changed = pGVar3;
      pGVar2 = a;
    }
    UNLOCK();
    pGVar3 = a;
    if (!bVar5) {
      pGVar3 = pGVar2;
    }
    if (iRam_? != 0) {
      uVar6 = (uint)((ulonglong)pGVar1 >> 0xc);
      uVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6);
      do {
        uVar8 = *(ulonglong *)(uVar7 * 8 + 0xADDR);
        puVar9 = (ulonglong *)(uVar7 * 8 + 0xADDR);
        LOCK();
        bVar5 = uVar8 == *puVar9;
        if (bVar5) {
          *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
        }
        UNLOCK();
      } while (!bVar5);
    }
    bVar5 = pGVar3 != a;
    a = pGVar3;
  } while (bVar5);
  return;
}


/* Boolean get_CanChange2D() */

bool Assembly-CSharp.dll::RTG::GizmoTransform::GizmoTransform_get_CanChange2D
               (GizmoTransform *this,MethodInfo *method)

{
  return (this->fields)._firingChanged2DEvent == 0;
}


/* List`1[RTG.GizmoTransform] get_Children() */

List_1_RTG_GizmoTransform_ *
Assembly-CSharp.dll::RTG::GizmoTransform::GizmoTransform_get_Children
          (GizmoTransform *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<RTG::GizmoTransform>__List_System__Collections__Generic__IEnumerable<RTG::GizmoTransform>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<RTG::GizmoTransform>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  collection = (this->fields)._children;
  this_00 = (List_1_RTG_GizmoTransform_ *)
            FUN_?(TypeInfo__System__Collections__Generic__List<RTG::GizmoTransform>);
  mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object___ctor_1
            ((List_1_System_Object_ *)this_00,(IEnumerable_1_System_Object_ *)collection,
             MethodInfo__System__Collections__Generic__List<RTG::GizmoTransform>__List_System__Collections__Generic__IEnumerable<RTG::GizmoTransform>_
            );
  return this_00;
}


/* Vector2 get_LocalPosition2D() */

Vector2 Assembly-CSharp.dll::RTG::GizmoTransform::GizmoTransform_get_LocalPosition2D
                  (GizmoTransform *this,MethodInfo *method)

{
  return (this->fields)._localPosition2D;
}


/* Single get_LocalRotation2DDegrees() */

float Assembly-CSharp.dll::RTG::GizmoTransform::GizmoTransform_get_LocalRotation2DDegrees
                (GizmoTransform *this,MethodInfo *method)

{
  return (this->fields)._localRotation2DDegrees;
}


/* Quaternion get_LocalRotation3D() */

Quaternion *
Assembly-CSharp.dll::RTG::GizmoTransform::GizmoTransform_get_LocalRotation3D
          (Quaternion *__return_storage_ptr__,GizmoTransform *this,MethodInfo *method)

{
  fVar1 = (this->fields)._localRotation3D.y;
  fVar2 = (this->fields)._localRotation3D.z;
  fVar3 = (this->fields)._localRotation3D.w;
  __return_storage_ptr__->x = (this->fields)._localRotation3D.x;
  __return_storage_ptr__->y = fVar1;
  __return_storage_ptr__->z = fVar2;
  __return_storage_ptr__->w = fVar3;
  return __return_storage_ptr__;
}


/* Vector3 get_Look3D() */

Vector3 * Assembly-CSharp.dll::RTG::GizmoTransform::GizmoTransform_get_Look3D
                    (Vector3 *__return_storage_ptr__,GizmoTransform *this,MethodInfo *method)

{
  pVVar1 = (this->fields)._axes3D;
  if (pVVar1 == (Vector3__Array *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    pVVar3 = (Vector3 *)(*pcVar2)();
    return pVVar3;
  }
  if (2 < (uint)pVVar1->max_length) {
    fVar4 = pVVar1->vector[2].y;
    fVar5 = pVVar1->vector[2].z;
    __return_storage_ptr__->x = pVVar1->vector[2].x;
    __return_storage_ptr__->y = fVar4;
    __return_storage_ptr__->z = fVar5;
    return __return_storage_ptr__;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  pVVar3 = (Vector3 *)(*pcVar2)();
  return pVVar3;
}


/* Int32 get_NumChildren() */

int32_t Assembly-CSharp.dll::RTG::GizmoTransform::GizmoTransform_get_NumChildren
                  (GizmoTransform *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<RTG::GizmoTransform>__get_Count__)
    ;
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields)._children;
  if (pLVar1 != (List_1_RTG_GizmoTransform_ *)0x0) {
    return (pLVar1->fields)._size;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  iVar3 = (*pcVar2)();
  return iVar3;
}


/* Vector2 get_Position2D() */

Vector2 Assembly-CSharp.dll::RTG::GizmoTransform::GizmoTransform_get_Position2D
                  (GizmoTransform *this,MethodInfo *method)

{
  return (this->fields)._position2D;
}


/* Vector2 get_Right2D() */

Vector2 Assembly-CSharp.dll::RTG::GizmoTransform::GizmoTransform_get_Right2D
                  (GizmoTransform *this,MethodInfo *method)

{
  pVVar1 = (this->fields)._axes2D;
  if (pVVar1 == (Vector2__Array *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    VVar3 = (Vector2)(*pcVar2)();
    return VVar3;
  }
  if ((int)pVVar1->max_length != 0) {
    return pVVar1->vector[0];
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  VVar3 = (Vector2)(*pcVar2)();
  return VVar3;
}


/* Vector3 get_Right3D() */

Vector3 * Assembly-CSharp.dll::RTG::GizmoTransform::GizmoTransform_get_Right3D
                    (Vector3 *__return_storage_ptr__,GizmoTransform *this,MethodInfo *method)

{
  pVVar1 = (this->fields)._axes3D;
  if (pVVar1 == (Vector3__Array *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    pVVar3 = (Vector3 *)(*pcVar2)();
    return pVVar3;
  }
  if ((int)pVVar1->max_length != 0) {
    fVar4 = pVVar1->vector[0].y;
    fVar5 = pVVar1->vector[0].z;
    __return_storage_ptr__->x = pVVar1->vector[0].x;
    __return_storage_ptr__->y = fVar4;
    __return_storage_ptr__->z = fVar5;
    return __return_storage_ptr__;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  pVVar3 = (Vector3 *)(*pcVar2)();
  return pVVar3;
}


/* Vector2 get_Up2D() */

Vector2 Assembly-CSharp.dll::RTG::GizmoTransform::GizmoTransform_get_Up2D
                  (GizmoTransform *this,MethodInfo *method)

{
  pVVar1 = (this->fields)._axes2D;
  if (pVVar1 == (Vector2__Array *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    VVar3 = (Vector2)(*pcVar2)();
    return VVar3;
  }
  if (1 < (uint)pVVar1->max_length) {
    return pVVar1->vector[1];
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  VVar3 = (Vector2)(*pcVar2)();
  return VVar3;
}


/* Vector3 get_Up3D() */

Vector3 * Assembly-CSharp.dll::RTG::GizmoTransform::GizmoTransform_get_Up3D
                    (Vector3 *__return_storage_ptr__,GizmoTransform *this,MethodInfo *method)

{
  pVVar1 = (this->fields)._axes3D;
  if (pVVar1 == (Vector3__Array *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    pVVar3 = (Vector3 *)(*pcVar2)();
    return pVVar3;
  }
  if (1 < (uint)pVVar1->max_length) {
    fVar4 = pVVar1->vector[1].y;
    fVar5 = pVVar1->vector[1].z;
    __return_storage_ptr__->x = pVVar1->vector[1].x;
    __return_storage_ptr__->y = fVar4;
    __return_storage_ptr__->z = fVar5;
    return __return_storage_ptr__;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  pVVar3 = (Vector3 *)(*pcVar2)();
  return pVVar3;
}


/* Void remove_Changed(GizmoEntityTransformChangedHandler) */

void Assembly-CSharp.dll::RTG::GizmoTransform::GizmoTransform_remove_Changed
               (GizmoTransform *this,GizmoEntityTransformChangedHandler *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__GizmoEntityTransformChangedHandler);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar1 = &this->fields;
  source = (this->fields).Changed;
  do {
    pGVar2 = (GizmoEntityTransformChangedHandler *)
             mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pGVar3 = (GizmoEntityTransformChangedHandler *)0x0;
    if (pGVar2 != (GizmoEntityTransformChangedHandler *)0x0) {
      if (pGVar2->klass == TypeInfo__RTG__GizmoEntityTransformChangedHandler) {
        pGVar3 = pGVar2;
      }
      if (pGVar3 == (GizmoEntityTransformChangedHandler *)0x0) {
        FUN_?(pGVar2);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    LOCK();
    pGVar2 = pGVar1->Changed;
    bVar5 = source == pGVar2;
    if (bVar5) {
      pGVar1->Changed = pGVar3;
      pGVar2 = source;
    }
    UNLOCK();
    pGVar3 = source;
    if (!bVar5) {
      pGVar3 = pGVar2;
    }
    if (iRam_? != 0) {
      uVar6 = (uint)((ulonglong)pGVar1 >> 0xc);
      uVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6);
      do {
        uVar8 = *(ulonglong *)(uVar7 * 8 + 0xADDR);
        puVar9 = (ulonglong *)(uVar7 * 8 + 0xADDR);
        LOCK();
        bVar5 = uVar8 == *puVar9;
        if (bVar5) {
          *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
        }
        UNLOCK();
      } while (!bVar5);
    }
    bVar5 = pGVar3 != source;
    source = pGVar3;
  } while (bVar5);
  return;
}


/* Void set_LocalPosition2D(Vector2) */

void Assembly-CSharp.dll::RTG::GizmoTransform::GizmoTransform_set_LocalPosition2D
               (GizmoTransform *this,Vector2 value,MethodInfo *method)

{
  if ((this->fields)._firingChanged2DEvent == 0) {
    fStack_1 = value.x;
    fStack_1 = (this->fields)._localPosition2D.x - fStack_1;
    fStack_2 = value.y;
    fStack_2 = (this->fields)._localPosition2D.y - fStack_2;
    if (_UNK_? <= fStack_2 * fStack_2 + fStack_1 * fStack_1) {
      (this->fields)._localPosition2D = value;
      if ((this->fields)._parent == (GizmoTransform *)0x0) {
        fVar3 = (this->fields)._localPosition2D.x;
        fVar4 = (this->fields)._localPosition2D.y;
      }
      else {
        pGVar5 = (this->fields)._parent;
        fVar4 = (pGVar5->fields)._rotation2D.x;
        fVar6 = (pGVar5->fields)._rotation2D.y;
        fVar7 = (pGVar5->fields)._rotation2D.z;
        fVar8 = (pGVar5->fields)._rotation2D.w;
        fVar9 = fVar6 + fVar6;
        fVar10 = fVar7 + fVar7;
        if (pGVar5 == (GizmoTransform *)0x0) {
          FUN_?();
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        fVar3 = (_UNK_? - (fVar6 * fVar9 + fVar7 * fVar10)) *
                 (this->fields)._localPosition2D.x +
                 (fVar4 * fVar9 - fVar8 * fVar10) * (this->fields)._localPosition2D.y +
                 (fVar4 * fVar10 + fVar8 * fVar9) * 0.0 + (pGVar5->fields)._position2D.x;
        fVar4 = (_UNK_? - (fVar4 * (fVar4 + fVar4) + fVar7 * fVar10)) *
                (this->fields)._localPosition2D.y +
                (fVar8 * fVar10 + fVar4 * fVar9) * (this->fields)._localPosition2D.x +
                (fVar6 * fVar10 - fVar8 * (fVar4 + fVar4)) * 0.0 + (pGVar5->fields)._position2D.y;
      }
      (this->fields)._position2D.x = fVar3;
      (this->fields)._position2D.y = fVar4;
      GizmoTransform_UpdateChildTransforms2D(this,(MethodInfo *)0x0);
      pGVar12 = (this->fields).Changed;
      (this->fields)._firingChanged2DEvent = 1;
      if (pGVar12 != (GizmoEntityTransformChangedHandler *)0x0) {
        (*(pGVar12->fields)._._.invoke_impl)
                  ((pGVar12->fields)._._.method_code,this,0x100000000,(pGVar12->fields)._._.method);
      }
      (this->fields)._firingChanged2DEvent = 0;
      return;
    }
  }
  return;
}


/* Void set_LocalPosition3D(Vector3) */

void Assembly-CSharp.dll::RTG::GizmoTransform::GizmoTransform_set_LocalPosition3D
               (GizmoTransform *this,Vector3 *value,MethodInfo *method)

{
  if (((this->fields)._firingChanged3DEvent == 0) &&
     (uVar1 = value->x, uVar2 = value->y, uVar3 = (this->fields)._localPosition3D.x,
     fVar4 = (this->fields)._localPosition3D.z - value->z,
     fVar5 = (this->fields)._localPosition3D.y - (float)uVar2,
     _UNK_? <=
     fVar5 * fVar5 + ((float)uVar3 - (float)uVar1) * ((float)uVar3 - (float)uVar1) +
     fVar4 * fVar4)) {
    fVar5 = value->y;
    fVar4 = value->z;
    (this->fields)._localPosition3D.x = value->x;
    (this->fields)._localPosition3D.y = fVar5;
    (this->fields)._localPosition3D.z = fVar4;
    if ((this->fields)._parent == (GizmoTransform *)0x0) {
      fVar5 = (this->fields)._localPosition3D.y;
      fVar4 = (this->fields)._localPosition3D.z;
      (this->fields)._position3D.x = (this->fields)._localPosition3D.x;
      (this->fields)._position3D.y = fVar5;
      (this->fields)._position3D.z = fVar4;
    }
    else {
      uVar6 = (this->fields)._localPosition3D.x;
      uVar7 = (this->fields)._localPosition3D.y;
      fVar4 = (this->fields)._localPosition3D.z;
      pGVar8 = (this->fields)._parent;
      fVar5 = (pGVar8->fields)._rotation3D.x;
      fVar9 = (pGVar8->fields)._rotation3D.y;
      fVar10 = (pGVar8->fields)._rotation3D.z;
      fVar11 = (pGVar8->fields)._rotation3D.w;
      fVar12 = fVar10 + fVar10;
      fVar13 = fVar5 * (fVar5 + fVar5);
      fVar14 = fVar9 + fVar9;
      fVar15 = fVar11 * (fVar5 + fVar5);
      fVar16 = _UNK_? - (fVar10 * fVar12 + fVar13);
      fVar13 = _UNK_? - (fVar9 * fVar14 + fVar13);
      if (pGVar8 == (GizmoTransform *)0x0) {
        FUN_?();
        pcVar17 = (code *)swi(3);
        (*pcVar17)();
        return;
      }
      uVar18 = (pGVar8->fields)._position3D.x;
      uVar19 = (pGVar8->fields)._position3D.y;
      fVar20 = (pGVar8->fields)._position3D.z;
      (this->fields)._position3D.x =
           (_UNK_? - (fVar10 * fVar12 + fVar9 * fVar14)) * (float)uVar6 +
           (fVar5 * fVar14 - fVar11 * fVar12) * (float)uVar7 +
           (fVar11 * fVar14 + fVar5 * fVar12) * fVar4 + (float)uVar18;
      (this->fields)._position3D.y =
           fVar16 * (float)uVar7 + (fVar11 * fVar12 + fVar5 * fVar14) * (float)uVar6 +
           (fVar9 * fVar12 - fVar15) * fVar4 + (float)uVar19;
      (this->fields)._position3D.z =
           (fVar5 * fVar12 - fVar11 * fVar14) * (float)uVar6 +
           (fVar15 + fVar9 * fVar12) * (float)uVar7 + fVar13 * fVar4 + fVar20;
    }
    GizmoTransform_UpdateChildTransforms3D(this,(MethodInfo *)0x0);
    pGVar21 = (this->fields).Changed;
    (this->fields)._firingChanged3DEvent = 1;
    if (pGVar21 != (GizmoEntityTransformChangedHandler *)0x0) {
      (*(pGVar21->fields)._._.invoke_impl)
                ((pGVar21->fields)._._.method_code,this,0x200000000,(pGVar21->fields)._._.method);
    }
    (this->fields)._firingChanged3DEvent = 0;
    return;
  }
  return;
}


/* Void set_LocalRotation2DDegrees(Single) */

void Assembly-CSharp.dll::RTG::GizmoTransform::GizmoTransform_set_LocalRotation2DDegrees
               (GizmoTransform *this,float value,MethodInfo *method)

{
  if (((this->fields)._firingChanged2DEvent == 0) &&
     ((this->fields)._localRotation2DDegrees != value)) {
    bVar1 = cRam_? == '\0';
    (this->fields)._localRotation2DDegrees = value;
    if (bVar1) {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pVVar2 = TypeInfo__UnityEngine__Vector3->static_fields;
    uStack_3._0_4_ = (pVVar2->forwardVector).x;
    uStack_3._4_4_ = (pVVar2->forwardVector).y;
    fStack_4 = (pVVar2->forwardVector).z;
    uStack_5 = 0;
    uStack_6 = 0;
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
    (*pcRam_?)(value,&uStack_3,&uStack_5);
    uVar8 = uStack_5;
    fVar9 = uStack_5._4_4_;
    fVar10 = (float)uStack_5;
    fVar11 = (float)uStack_6;
    fStack_12 = uStack_6._4_4_;
    fVar13 = uStack_5._4_4_ * uStack_5._4_4_ + (float)uStack_5 * (float)uStack_5 +
            (float)uStack_6 * (float)uStack_6 + uStack_6._4_4_ * uStack_6._4_4_;
    if (fVar13 < 0.0) {
      fVar13 = (float)FUN_?(fVar13);
    }
    else {
      fVar13 = SQRT(fVar13);
    }
    if (fVar13 < _UNK_?) {
      uStack_3 = uVar8;
      fStack_4 = fVar11;
    }
    else {
      fVar13 = _UNK_? / fVar13;
      fStack_4 = fVar13 * fVar11;
      fStack_12 = fVar13 * fStack_12;
      uStack_3 = CONCAT44(fVar13 * fVar9,fVar13 * fVar10);
    }
    (this->fields)._localRotation2D.x = (float)(undefined4)uStack_3;
    (this->fields)._localRotation2D.y = (float)uStack_3._4_4_;
    (this->fields)._localRotation2D.z = fStack_4;
    (this->fields)._localRotation2D.w = fStack_12;
    GizmoTransform_OnLocalRotation2DChanged(this,(MethodInfo *)0x0);
  }
  return;
}


/* Void set_LocalRotation3D(Quaternion) */

void Assembly-CSharp.dll::RTG::GizmoTransform::GizmoTransform_set_LocalRotation3D
               (GizmoTransform *this,Quaternion *value,MethodInfo *method)

{
  if ((this->fields)._firingChanged3DEvent == 0) {
    pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_get_eulerAngles
                       (&VStack_2,&(this->fields)._localRotation3D,method);
    uVar3 = pVVar1->x;
    uVar4 = pVVar1->y;
    fVar5 = pVVar1->z;
    pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_get_eulerAngles
                       (&VStack_2,value,method);
    uStack_6._0_4_ = pVVar1->x;
    uStack_6._4_4_ = pVVar1->y;
    fVar5 = fVar5 - pVVar1->z;
    if (_UNK_? <=
        ((float)uVar4 - (float)uStack_6._4_4_) * ((float)uVar4 - (float)uStack_6._4_4_) +
        ((float)uVar3 - (float)(undefined4)uStack_6) *
        ((float)uVar3 - (float)(undefined4)uStack_6) + fVar5 * fVar5) {
      fVar5 = value->x;
      fVar7 = value->y;
      uVar8._0_4_ = value->x;
      uVar8._4_4_ = value->y;
      fVar9 = value->z;
      fVar10 = value->w;
      fVar11 = fVar7 * fVar7 + fVar5 * fVar5 + fVar9 * fVar9 + fVar10 * fVar10;
      if (fVar11 < 0.0) {
        fVar11 = (float)FUN_?(fVar11);
      }
      else {
        fVar11 = SQRT(fVar11);
      }
      uStack_6 = uVar8;
      fStack_12 = fVar9;
      fStack_13 = fVar10;
      if (_UNK_? <= fVar11) {
        fVar11 = _UNK_? / fVar11;
        uStack_6 = CONCAT44(fVar11 * fVar7,fVar11 * fVar5);
        fStack_12 = fVar11 * fVar9;
        fStack_13 = fVar11 * fVar10;
      }
      (this->fields)._localRotation3D.x = (float)(undefined4)uStack_6;
      (this->fields)._localRotation3D.y = (float)uStack_6._4_4_;
      (this->fields)._localRotation3D.z = fStack_12;
      (this->fields)._localRotation3D.w = fStack_13;
      GizmoTransform_OnLocalRotation3DChanged(this,(MethodInfo *)0x0);
    }
  }
  return;
}


/* Void set_Position2D(Vector2) */

void Assembly-CSharp.dll::RTG::GizmoTransform::GizmoTransform_set_Position2D
               (GizmoTransform *this,Vector2 value,MethodInfo *method)

{
  if ((this->fields)._firingChanged2DEvent == 0) {
    VStack_1.x = value.x;
    VStack_1.x = (this->fields)._position2D.x - VStack_1.x;
    VStack_1.y = value.y;
    VStack_1.y = (this->fields)._position2D.y - VStack_1.y;
    if (_UNK_? <= VStack_1.y * VStack_1.y + VStack_1.x * VStack_1.x) {
      (this->fields)._position2D = value;
      VStack_1 = value;
      if ((this->fields)._parent == (GizmoTransform *)0x0) {
        fVar2 = (this->fields)._position2D.x;
        fVar3 = (this->fields)._position2D.y;
      }
      else {
        pGVar4 = (this->fields)._parent;
        fStack_5 = (pGVar4->fields)._rotation2D.x;
        fStack_6 = (pGVar4->fields)._rotation2D.y;
        fStack_7 = (pGVar4->fields)._rotation2D.z;
        fStack_8 = (pGVar4->fields)._rotation2D.w;
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
        (*pcRam_?)(&fStack_5);
        pGVar4 = (this->fields)._parent;
        if (pGVar4 == (GizmoTransform *)0x0) {
          FUN_?();
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        fVar3 = (this->fields)._position2D.x - (pGVar4->fields)._position2D.x;
        fVar11 = (this->fields)._position2D.y - (pGVar4->fields)._position2D.y;
        VStack_1.y = unaff_XMM6_Db;
        VStack_1.x = unaff_XMM6_Da;
        fVar2 = (_UNK_? - 0.0) * fVar3 + fVar11 * 0.0 + 0.0;
        fVar3 = (_UNK_? - 0.0) * fVar11 + fVar3 * 0.0 + 0.0;
      }
      (this->fields)._localPosition2D.x = fVar2;
      (this->fields)._localPosition2D.y = fVar3;
      GizmoTransform_UpdateChildTransforms2D(this,(MethodInfo *)0x0);
      pGVar12 = (this->fields).Changed;
      (this->fields)._firingChanged2DEvent = 1;
      if (pGVar12 != (GizmoEntityTransformChangedHandler *)0x0) {
        (*(pGVar12->fields)._._.invoke_impl)
                  ((pGVar12->fields)._._.method_code,this,0x100000000,(pGVar12->fields)._._.method);
      }
      (this->fields)._firingChanged2DEvent = 0;
      return;
    }
  }
  return;
}


/* Void set_Position3D(Vector3) */

void Assembly-CSharp.dll::RTG::GizmoTransform::GizmoTransform_set_Position3D
               (GizmoTransform *this,Vector3 *value,MethodInfo *method)

{
  if (((this->fields)._firingChanged3DEvent != 0) ||
     (uVar1 = value->x, uVar2 = value->y, uVar3 = (this->fields)._position3D.x,
     fVar4 = (this->fields)._position3D.z - value->z,
     fVar5 = (this->fields)._position3D.y - (float)uVar2,
     fVar5 * fVar5 + ((float)uVar3 - (float)uVar1) * ((float)uVar3 - (float)uVar1) +
     fVar4 * fVar4 < _UNK_?)) {
    return;
  }
  fVar5 = value->y;
  fVar4 = value->z;
  (this->fields)._position3D.x = value->x;
  (this->fields)._position3D.y = fVar5;
  (this->fields)._position3D.z = fVar4;
  if ((this->fields)._parent == (GizmoTransform *)0x0) {
    fVar5 = (this->fields)._position3D.y;
    fVar4 = (this->fields)._position3D.z;
    (this->fields)._localPosition3D.x = (this->fields)._position3D.x;
    (this->fields)._localPosition3D.y = fVar5;
    (this->fields)._localPosition3D.z = fVar4;
  }
  else {
    pGVar6 = (this->fields)._parent;
    uStack_7 = 0;
    uStack_8 = 0;
    fStack_9 = (pGVar6->fields)._rotation3D.x;
    fStack_10 = (pGVar6->fields)._rotation3D.y;
    fStack_11 = (pGVar6->fields)._rotation3D.z;
    fStack_12 = (pGVar6->fields)._rotation3D.w;
    pcVar13 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar13 = (code *)FUN_?(&UNK_?), pcVar13 == (code *)0x0)) {
      uVar14 = func_?(&UNK_?);
      FUN_?(uVar14,0);
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
    pcRam_? = pcVar13;
    (*pcRam_?)(&fStack_9);
    pGVar6 = (this->fields)._parent;
    if (pGVar6 == (GizmoTransform *)0x0) {
      FUN_?();
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
    uVar15 = (pGVar6->fields)._position3D.x;
    uVar16 = (pGVar6->fields)._position3D.y;
    fVar17 = (this->fields)._position3D.z - (pGVar6->fields)._position3D.z;
    uVar18 = (this->fields)._position3D.x;
    fVar19 = (float)uVar18 - (float)uVar15;
    fVar20 = (this->fields)._position3D.y - (float)uVar16;
    fVar5 = uStack_7._4_4_ + uStack_7._4_4_;
    fVar4 = (float)uStack_8 + (float)uStack_8;
    fVar21 = uStack_8._4_4_ * ((float)uStack_7 + (float)uStack_7);
    fVar22 = (float)uStack_7 * ((float)uStack_7 + (float)uStack_7);
    fVar23 = _UNK_? - ((float)uStack_8 * fVar4 + fVar22);
    fVar22 = _UNK_? - (uStack_7._4_4_ * fVar5 + fVar22);
    (this->fields)._localPosition3D.x =
         (_UNK_? - ((float)uStack_8 * fVar4 + uStack_7._4_4_ * fVar5)) * fVar19 +
         ((float)uStack_7 * fVar5 - uStack_8._4_4_ * fVar4) * fVar20 +
         (uStack_8._4_4_ * fVar5 + (float)uStack_7 * fVar4) * fVar17;
    (this->fields)._localPosition3D.y =
         fVar23 * fVar20 + (uStack_8._4_4_ * fVar4 + (float)uStack_7 * fVar5) * fVar19 +
         (uStack_7._4_4_ * fVar4 - fVar21) * fVar17;
    (this->fields)._localPosition3D.z =
         ((float)uStack_7 * fVar4 - uStack_8._4_4_ * fVar5) * fVar19 +
         (fVar21 + uStack_7._4_4_ * fVar4) * fVar20 + fVar22 * fVar17;
  }
  GizmoTransform_UpdateChildTransforms3D(this,(MethodInfo *)0x0);
  pGVar24 = (this->fields).Changed;
  (this->fields)._firingChanged3DEvent = 1;
  if (pGVar24 != (GizmoEntityTransformChangedHandler *)0x0) {
    (*(pGVar24->fields)._._.invoke_impl)
              ((pGVar24->fields)._._.method_code,this,0x200000000,(pGVar24->fields)._._.method);
  }
  (this->fields)._firingChanged3DEvent = 0;
  return;
}


/* Void set_Rotation2DDegrees(Single) */

void Assembly-CSharp.dll::RTG::GizmoTransform::GizmoTransform_set_Rotation2DDegrees
               (GizmoTransform *this,float value,MethodInfo *method)

{
  if (((this->fields)._firingChanged2DEvent != 0) || ((this->fields)._rotation2DDegrees == value)) {
    return;
  }
  fVar1 = (float)FUN_?(value,_UNK_?,0);
  bVar2 = cRam_? == '\0';
  (this->fields)._rotation2DDegrees = fVar1;
  if (bVar2) {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar3 = TypeInfo__UnityEngine__Vector3->static_fields;
  uStack_4._0_4_ = (pVVar3->forwardVector).x;
  uStack_4._4_4_ = (pVVar3->forwardVector).y;
  fStack_5 = (pVVar3->forwardVector).z;
  uStack_6 = 0;
  uStack_7 = 0;
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
  (*pcRam_?)(fVar1,&uStack_4,&uStack_6);
  uVar9 = uStack_6;
  fVar10 = uStack_6._4_4_;
  fVar1 = (float)uStack_6;
  fVar11 = (float)uStack_7;
  fStack_12 = uStack_7._4_4_;
  fVar13 = uStack_6._4_4_ * uStack_6._4_4_ + (float)uStack_6 * (float)uStack_6 +
          (float)uStack_7 * (float)uStack_7 + uStack_7._4_4_ * uStack_7._4_4_;
  if (fVar13 < 0.0) {
    fVar13 = (float)FUN_?(fVar13);
  }
  else {
    fVar13 = SQRT(fVar13);
  }
  if (fVar13 < _UNK_?) {
    uStack_4 = uVar9;
    fStack_5 = fVar11;
  }
  else {
    fVar13 = _UNK_? / fVar13;
    fStack_5 = fVar13 * fVar11;
    fStack_12 = fVar13 * fStack_12;
    uStack_4 = CONCAT44(fVar13 * fVar10,fVar13 * fVar1);
  }
  (this->fields)._rotation2D.x = (float)(undefined4)uStack_4;
  (this->fields)._rotation2D.y = (float)uStack_4._4_4_;
  (this->fields)._rotation2D.z = fStack_5;
  (this->fields)._rotation2D.w = fStack_12;
  if ((this->fields)._parent == (GizmoTransform *)0x0) {
    fVar1 = (this->fields)._rotation2D.y;
    fVar10 = (this->fields)._rotation2D.z;
    fVar11 = (this->fields)._rotation2D.w;
    (this->fields)._localRotation2D.x = (this->fields)._rotation2D.x;
    (this->fields)._localRotation2D.y = fVar1;
    (this->fields)._localRotation2D.z = fVar10;
    (this->fields)._localRotation2D.w = fVar11;
  }
  else {
    pGVar14 = (this->fields)._parent;
    aQStack_15[0].x = (pGVar14->fields)._rotation2D.x;
    aQStack_15[0].y = (pGVar14->fields)._rotation2D.y;
    aQStack_15[0].z = (pGVar14->fields)._rotation2D.z;
    aQStack_15[0].w = (pGVar14->fields)._rotation2D.w;
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
    uStack_6 = CONCAT44(unaff_XMM10_Db,unaff_XMM10_Da);
    uStack_7 = CONCAT44(unaff_XMM10_Dd,unaff_XMM10_Dc);
    uStack_4 = CONCAT44(unaff_XMM11_Db,unaff_XMM11_Da);
    fStack_5 = unaff_XMM11_Dc;
    fStack_12 = unaff_XMM11_Dd;
    (*pcRam_?)(aQStack_15);
    fVar1 = (this->fields)._rotation2D.x;
    fVar10 = (this->fields)._rotation2D.y;
    fVar11 = (this->fields)._rotation2D.z;
    fVar13 = (this->fields)._rotation2D.w;
    fVar16 = (fVar13 * 0.0 + fVar1 * 0.0 + fVar11 * 0.0) - fVar10 * 0.0;
    fVar17 = (fVar10 * 0.0 + fVar13 * 0.0 + fVar1 * 0.0) - fVar11 * 0.0;
    fVar18 = ((fVar13 * 0.0 - fVar1 * 0.0) - fVar10 * 0.0) - fVar11 * 0.0;
    fVar10 = (fVar11 * 0.0 + fVar13 * 0.0 + fVar10 * 0.0) - fVar1 * 0.0;
    fVar1 = fVar17 * fVar17 + fVar16 * fVar16 + fVar10 * fVar10 + fVar18 * fVar18;
    if (fVar1 < 0.0) {
      fVar1 = (float)FUN_?(fVar1);
    }
    else {
      fVar1 = SQRT(fVar1);
    }
    if (_UNK_? <= fVar1) {
      fVar1 = _UNK_? / fVar1;
      fVar16 = fVar16 * fVar1;
      fVar17 = fVar17 * fVar1;
      fVar10 = fVar10 * fVar1;
      fVar18 = fVar18 * fVar1;
    }
    (this->fields)._localRotation2D.x = fVar16;
    (this->fields)._localRotation2D.y = fVar17;
    (this->fields)._localRotation2D.z = fVar10;
    (this->fields)._localRotation2D.w = fVar18;
  }
  aQStack_15[0].x = (this->fields)._localRotation2D.x;
  aQStack_15[0].y = (this->fields)._localRotation2D.y;
  aQStack_15[0].z = (this->fields)._localRotation2D.z;
  aQStack_15[0].w = (this->fields)._localRotation2D.w;
  fVar1 = QuaternionEx::QuaternionEx_ConvertTo2DRotation(aQStack_15,(MethodInfo *)0x0);
  (this->fields)._localRotation2DDegrees = fVar1;
  GizmoTransform_Update2DAxes(this,(MethodInfo *)0x0);
  GizmoTransform_UpdateChildTransforms2D(this,(MethodInfo *)0x0);
  pGVar19 = (this->fields).Changed;
  (this->fields)._firingChanged2DEvent = 1;
  if (pGVar19 != (GizmoEntityTransformChangedHandler *)0x0) {
    (*(pGVar19->fields)._._.invoke_impl)
              ((pGVar19->fields)._._.method_code,this,0x100000000,(pGVar19->fields)._._.method);
  }
  (this->fields)._firingChanged2DEvent = 0;
  return;
}


/* Void set_Rotation3D(Quaternion) */

void Assembly-CSharp.dll::RTG::GizmoTransform::GizmoTransform_set_Rotation3D
               (GizmoTransform *this,Quaternion *value,MethodInfo *method)

{
  if ((this->fields)._firingChanged3DEvent == 0) {
    pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_get_eulerAngles
                       (&VStack_2,&(this->fields)._rotation3D,method);
    uVar3 = pVVar1->x;
    uVar4 = pVVar1->y;
    fVar5 = pVVar1->z;
    pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_get_eulerAngles
                       (&VStack_2,value,method);
    uStack_6._0_4_ = pVVar1->x;
    uStack_6._4_4_ = pVVar1->y;
    fVar5 = fVar5 - pVVar1->z;
    if (_UNK_? <=
        ((float)uVar4 - (float)uStack_6._4_4_) * ((float)uVar4 - (float)uStack_6._4_4_) +
        ((float)uVar3 - (float)(undefined4)uStack_6) *
        ((float)uVar3 - (float)(undefined4)uStack_6) + fVar5 * fVar5) {
      fVar5 = value->x;
      fVar7 = value->y;
      uVar8._0_4_ = value->x;
      uVar8._4_4_ = value->y;
      fVar9 = value->z;
      fVar10 = value->w;
      fVar11 = fVar7 * fVar7 + fVar5 * fVar5 + fVar9 * fVar9 + fVar10 * fVar10;
      if (fVar11 < 0.0) {
        fVar11 = (float)FUN_?(fVar11);
      }
      else {
        fVar11 = SQRT(fVar11);
      }
      uStack_6 = uVar8;
      fStack_12 = fVar9;
      fStack_13 = fVar10;
      if (_UNK_? <= fVar11) {
        fVar11 = _UNK_? / fVar11;
        uStack_6 = CONCAT44(fVar11 * fVar7,fVar11 * fVar5);
        fStack_12 = fVar11 * fVar9;
        fStack_13 = fVar11 * fVar10;
      }
      (this->fields)._rotation3D.x = (float)(undefined4)uStack_6;
      (this->fields)._rotation3D.y = (float)uStack_6._4_4_;
      (this->fields)._rotation3D.z = fStack_12;
      (this->fields)._rotation3D.w = fStack_13;
      GizmoTransform_OnRotation3DChanged(this,(MethodInfo *)0x0);
    }
  }
  return;
}

