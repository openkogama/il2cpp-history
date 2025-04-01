
/* OBB CalcLg3DArcOBB(Vector3, Vector3, Vector3, Single, ArcEpsilon) */

OBB * Assembly-CSharp.dll::RTG::ArcMath::ArcMath_CalcLg3DArcOBB
                (OBB *__return_storage_ptr__,Vector3 arcOrigin,Vector3 arcStartPoint,
                Vector3 arcPlaneNormal,float degreesFromStart,ArcEpsilon epsilon,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Math);
    cRam_? = '\x01';
  }
  if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__Math);
  }
  fVar1 = arcPlaneNormal.x;
  if (_UNK_? < (float)((uint)degreesFromStart & _UNK_?)) {
    fVar2 = arcStartPoint.x - arcOrigin.x;
    fStack_3 = arcStartPoint.y - arcOrigin.y;
    pQVar4 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_AngleAxis
                       ((Quaternion *)&stack0xffffff50,degreesFromStart,arcPlaneNormal,
                        (MethodInfo *)0x0);
    point.y = fStack_3;
    point.x = fVar2;
    point.z = arcStartPoint.z - arcOrigin.z;
    pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                       (&VStack_6,*pQVar4,point,(MethodInfo *)0x0);
    uStack_7._0_4_ = pVVar5->x;
    uStack_7._4_4_ = pVVar5->y;
    fStack_3 = arcStartPoint.x +
                ((arcOrigin.x + (float)(undefined4)uStack_7) - arcStartPoint.x) * _UNK_?;
    fStack_8 = arcStartPoint.y +
                ((arcOrigin.y + (float)uStack_7._4_4_) - arcStartPoint.y) * _UNK_?;
    fStack_9 = arcStartPoint.z + ((arcOrigin.z + pVVar5->z) - arcStartPoint.z) * _UNK_?;
    fVar10 = fStack_3 - arcOrigin.x;
    fVar2 = fStack_8 - arcOrigin.y;
    fVar11 = fStack_9 - arcOrigin.z;
    value.y = fVar2;
    value.x = fVar10;
    value.z = fVar11;
    fStack_12 = fVar11;
    pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                       (&VStack_6,value,(MethodInfo *)0x0);
    uVar13 = pVVar5->x;
    uVar14 = pVVar5->y;
    fVar15 = (float)uVar13 * epsilon._areaEps + fStack_3;
    fVar16 = (float)uVar14 * epsilon._areaEps + fStack_8;
    VStack_6.z = arcOrigin.z - arcStartPoint.z;
    uStack_7 = CONCAT44(arcOrigin.y - arcStartPoint.y,arcOrigin.x - arcStartPoint.x);
    fStack_12 = VStack_6.z;
    fVar17 = (float10)func_?();
    fStack_8 = (float)fVar17;
    fVar17 = (float10)func_?();
    fStack_9 = epsilon._areaEps * _UNK_?;
    fStack_3 = (float)(fVar17 + (float10)fStack_8 + (float10)fStack_9);
    value_00.y = fVar2;
    value_00.x = fVar10;
    value_00.z._0_1_ = SUB41(fVar11,0);
    value_00.z._1_2_ = (short)((uint)fVar11 >> 8);
    value_00.z._3_1_ = (char)((uint)fVar11 >> 0x18);
    pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                       (&VStack_6,value_00,(MethodInfo *)0x0);
    uVar18 = pVVar5->x;
    fVar2 = pVVar5->z;
    uVar19 = (undefined2)((uint)uVar18 >> 8);
    uVar20 = (undefined1)((uint)uVar18 >> 0x18);
    UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_LookRotation
              ((Quaternion *)&stack0xffffffb0,*pVVar5,arcPlaneNormal,(MethodInfo *)0x0);
    fVar10 = 0.0;
    pVVar5 = &VStack_6;
    value_01.y = fVar1;
    value_01.x = fVar2;
    value_01.z = fVar11;
    pVVar21 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                       (pVVar5,value_01,(MethodInfo *)0x0);
    uStack_7._0_4_ = pVVar21->x;
    uStack_7._4_4_ = pVVar21->y;
    fStack_12 = pVVar21->z;
    fVar15 = fVar15 - (float)(undefined4)uStack_7 * fStack_3 * _UNK_?;
    fVar16 = fVar16 - (float)uStack_7._4_4_ * fStack_3 * _UNK_?;
    fVar10 = fVar10 - fStack_12 * fStack_3 * _UNK_?;
    if (cRam_? == '\0') {
      ppVStack_22 = &TypeInfo__UnityEngine__Vector3;
      VStack_6.z = (float)&UNK_?;
      func_?();
      cRam_? = '\x01';
    }
    fVar23 = epsilon._extrudeEps * _UNK_?;
    (__return_storage_ptr__->_size).x = epsilon._areaEps + fStack_8 + epsilon._areaEps + fStack_8;
    (__return_storage_ptr__->_size).y = fVar23;
    (__return_storage_ptr__->_size).z = fStack_3;
    (__return_storage_ptr__->_center).x = fVar15;
    (__return_storage_ptr__->_center).y = fVar16;
    (__return_storage_ptr__->_center).z = fVar10;
    (__return_storage_ptr__->_rotation).x = (float)pVVar5;
    (__return_storage_ptr__->_rotation).y = fVar2;
    (__return_storage_ptr__->_rotation).z = fVar1;
    (__return_storage_ptr__->_rotation).w = fVar11;
    *(uint *)&__return_storage_ptr__->_isValid = CONCAT13(uVar20,CONCAT21(uVar19,1));
    return __return_storage_ptr__;
  }
  pOVar24 = ArcMath_CalcSh3DArcOBB
                     ((OBB *)&stack0xffffff60,arcOrigin,arcStartPoint,arcPlaneNormal,
                      degreesFromStart,epsilon,(MethodInfo *)0x0);
  fVar1 = (pOVar24->_size).y;
  fVar2 = (pOVar24->_size).z;
  fVar11 = (pOVar24->_center).x;
  bVar25 = pOVar24->_isValid;
  uVar26 = *(undefined3 *)&pOVar24->field_0x29;
  (__return_storage_ptr__->_size).x = (pOVar24->_size).x;
  (__return_storage_ptr__->_size).y = fVar1;
  (__return_storage_ptr__->_size).z = fVar2;
  (__return_storage_ptr__->_center).x = fVar11;
  fVar1 = (pOVar24->_center).z;
  fVar2 = (pOVar24->_rotation).x;
  fVar11 = (pOVar24->_rotation).y;
  (__return_storage_ptr__->_center).y = (pOVar24->_center).y;
  (__return_storage_ptr__->_center).z = fVar1;
  (__return_storage_ptr__->_rotation).x = fVar2;
  (__return_storage_ptr__->_rotation).y = fVar11;
  fVar1 = (pOVar24->_rotation).w;
  (__return_storage_ptr__->_rotation).z = (pOVar24->_rotation).z;
  (__return_storage_ptr__->_rotation).w = fVar1;
  __return_storage_ptr__->_isValid = bVar25;
  *(undefined3 *)&__return_storage_ptr__->field_0x29 = uVar26;
  return __return_storage_ptr__;
}


/* OBB CalcSh3DArcOBB(Vector3, Vector3, Vector3, Single, ArcEpsilon) */

OBB * Assembly-CSharp.dll::RTG::ArcMath::ArcMath_CalcSh3DArcOBB
                (OBB *__return_storage_ptr__,Vector3 arcOrigin,Vector3 arcStartPoint,
                Vector3 arcPlaneNormal,float degreesFromStart,ArcEpsilon epsilon,MethodInfo *method)

{
  this = __return_storage_ptr__;
  func_?(__return_storage_ptr__,0,0x2c);
  fVar1 = arcPlaneNormal.z;
  VVar2.y = arcOrigin.y;
  VVar2.x = arcOrigin.x;
  VVar2.z = arcOrigin.z;
  arcPlaneNormal_00.y = arcPlaneNormal.y;
  arcPlaneNormal_00.x = arcPlaneNormal.x;
  arcPlaneNormal_00.z = arcPlaneNormal.z;
  fVar3 = ArcMath_ConvertToSh3DArcAngle
                    (VVar2,arcStartPoint,arcPlaneNormal_00,degreesFromStart,(MethodInfo *)0x0);
  fVar4 = 0.0;
  __return_storage_ptr__ = (OBB *)0x0;
  arcOrigin.x = 0.0;
  axis.y = arcPlaneNormal.y;
  axis.x = arcPlaneNormal.x;
  axis.z = fVar1;
  fVar5 = in_stack_6;
  pQVar7 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_AngleAxis
                     ((Quaternion *)&stack0xffffffec,fVar3 * _UNK_?,axis,(MethodInfo *)0x0);
  arcPlaneNormal.y = fVar5;
  point_00.y = (float)in_stack_8;
  point_00.x = arcPlaneNormal.y;
  point_00.z = fVar4;
  pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                     ((Vector3 *)&__return_storage_ptr__,*pQVar7,point_00,(MethodInfo *)0x0);
  uVar10 = pVVar9->x;
  uVar11 = pVVar9->y;
  arcOrigin.y = pVVar9->z;
  __return_storage_ptr__ = (OBB *)uVar10;
  arcOrigin.x = (float)uVar11;
  arcOrigin.z = (float)uVar10;
  pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                     ((Vector3 *)&arcPlaneNormal.z,*pVVar9,(MethodInfo *)0x0);
  upwards.y = arcPlaneNormal.y;
  upwards.x = arcPlaneNormal.x;
  upwards.z = fVar1;
  pQVar7 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_LookRotation
                     ((Quaternion *)&method,*pVVar9,upwards,(MethodInfo *)0x0);
  in_stack_12 = in_stack_12 * _UNK_?;
  fVar5 = in_stack_13 + in_stack_14 * _UNK_?;
  in_stack_15 = arcOrigin.z + in_stack_15 * _UNK_?;
  in_stack_13 = pQVar7->x;
  fStack16 = pQVar7->y;
  fStack17 = pQVar7->z;
  fStack18 = pQVar7->w;
  (this->_center).x = fVar5;
  (this->_center).y = arcOrigin.y + in_stack_12;
  (this->_center).z = in_stack_15;
  if (cRam_? == '\0') {
    arcOrigin.x = (float)&TypeInfo__UnityEngine__Vector3;
    __return_storage_ptr__ = (OBB *)&UNK_?;
    func_?();
    cRam_? = '\x01';
  }
  pVVar19 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar3 = (pVVar19->zeroVector).y;
  fVar5 = (pVVar19->zeroVector).z;
  (this->_size).x = (pVVar19->zeroVector).x;
  (this->_size).y = fVar3;
  arcOrigin.x = 0.0;
  (this->_size).z = fVar5;
  this->_isValid = 1;
  (this->_rotation).x = in_stack_13;
  (this->_rotation).y = fStack16;
  (this->_rotation).z = fStack17;
  (this->_rotation).w = fStack18;
  __return_storage_ptr__ = (OBB *)fVar1;
  fVar4 = arcPlaneNormal.y;
  VVar2.x = arcPlaneNormal.x;
  VVar2 = (Vector3)CONCAT84(VVar2._0_8_,VVar2.x);
  pQVar7 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_AngleAxis
                     ((Quaternion *)&stack0x0000006c,0.0,VVar2,(MethodInfo *)0x0);
  arcPlaneNormal.x = 0.0;
  __return_storage_ptr__ = (OBB *)pQVar7->x;
  arcOrigin.x = pQVar7->y;
  arcOrigin.y = pQVar7->z;
  arcOrigin.z = pQVar7->w;
  point.y = in_stack_20;
  point.x = in_stack_21;
  point.z = fStack16;
  pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                     ((Vector3 *)&stack0x00000074,*pQVar7,point,(MethodInfo *)0x0);
  fStack22 = _UNK_? * 0.0;
  arcPlaneNormal.x = 0.0;
  fStack17 = pVVar9->x;
  fStack18 = pVVar9->y;
  fStack23 = pVVar9->z;
  pVVar9 = SphereShape3D::SphereShape3D_get_Right
                     ((Vector3 *)&stack0x00000098,(SphereShape3D *)this,(MethodInfo *)0x0);
  fStack24 = pVVar9->x;
  fStack25 = pVVar9->y;
  in_stack_21 = pVVar9->z;
  arcPlaneNormal.x = 0.0;
  pVVar9 = SphereShape3D::SphereShape3D_get_Right
                     ((Vector3 *)&uStack26,(SphereShape3D *)this,(MethodInfo *)0x0);
  uStack26._0_4_ = pVVar9->x;
  uStack26._4_4_ = pVVar9->y;
  fStack27 = pVVar9->z;
  fStack28 =
       (float)((uint)(in_stack_29 * fStack25 + in_stack_20 * fStack24 +
                     in_stack_30 * in_stack_21) & _UNK_?) +
       (float)((uint)(uStack26._4_4_ * fStack16 + (float)uStack26 * fStack17
                     + fStack27 * fStack23) & _UNK_?) + fStack18;
  uStack31 = 0;
  uStack32 = 0;
  uStack33 = 0;
  if (cRam_? == '\0') {
    ppMStack34 = &TypeInfo__System__Math;
    in_stack_35 = &UNK_?;
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
    ppMStack34 = (Math__Class **)TypeInfo__System__Math;
    in_stack_35 = &UNK_?;
    func_?();
  }
  fStack23 = epsilon._extrudeEps * _UNK_?;
  dVar36 = (double)(in_stack_37 * in_stack_37 + in_stack_38 * in_stack_38 +
                  in_stack_39 * in_stack_39);
  if (dVar36 < 0.0) {
    func_?();
  }
  else {
    dVar36 = SQRT(dVar36);
  }
  (this->_size).x = fStack28;
  (this->_size).y = fStack23;
  (this->_size).z = (float)dVar36 + fStack18;
  return this;
}


/* Single ConvertToSh2DArcAngle(Vector2, Vector2, Single) */

float Assembly-CSharp.dll::RTG::ArcMath::ArcMath_ConvertToSh2DArcAngle
                (Vector2 arcOrigin,Vector2 arcStartPoint,float degreesFromStart,MethodInfo *method)

{
  fVar1 = (float10)func_?();
  degreesFromStart = (float)fVar1;
  if (_UNK_? < (float)((uint)degreesFromStart & _UNK_?)) {
    fVar2 = arcStartPoint.x - arcOrigin.x;
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    pQVar3 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_AngleAxis
                       ((Quaternion *)&stack0xffffffdc,degreesFromStart,
                        TypeInfo__UnityEngine__Vector3->static_fields->forwardVector,
                        (MethodInfo *)0x0);
    point.y = arcStartPoint.y - arcOrigin.y;
    point.x = fVar2;
    point.z = 0.0;
    pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                       ((Vector3 *)&stack0xffffffd0,*pQVar3,point,(MethodInfo *)0x0);
    uVar5 = pVVar4->x;
    uVar6 = pVVar4->y;
    __return_storage_ptr__ = (Vector3 *)&stack0xffffffe0;
    arcOrigin.x = pVVar4->z;
    fVar2 = (float)uVar6;
    fVar7 = (float)uVar5;
    VVar8 = (Vector3)CONCAT84(VVar8._0_8_,fVar7);
    pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                       (__return_storage_ptr__,VVar8,(MethodInfo *)0x0);
    uVar9 = pVVar4->x;
    uVar10 = pVVar4->y;
    VVar8.y = (float)uVar10;
    VVar8.x = (float)uVar9;
    puVar11 = &UNK_?;
    if (cRam_? == '\0') {
      ppVStack12 = &TypeInfo__UnityEngine__Vector3;
      func_?();
      cRam_? = '\x01';
    }
    ppVStack12 = (Vector3__Class **)0x0;
    fVar2 = 0.0;
    VVar8.z = 0.0;
    degreesFromStart =
         Vector3Ex::Vector3Ex_SignedAngle
                   ((Vector3)CONCAT48(fVar2,CONCAT44((float)puVar11,(float)__return_storage_ptr__)),
                    VVar8,TypeInfo__UnityEngine__Vector3->static_fields->forwardVector,
                    (MethodInfo *)0x0);
  }
  return degreesFromStart;
}


/* Single ConvertToSh3DArcAngle(Vector3, Vector3, Vector3, Single) */

float Assembly-CSharp.dll::RTG::ArcMath::ArcMath_ConvertToSh3DArcAngle
                (Vector3 arcOrigin,Vector3 arcStartPoint,Vector3 arcPlaneNormal,
                float degreesFromStart,MethodInfo *method)

{
  fVar1 = (float10)func_?();
  degreesFromStart = (float)fVar1;
  if (_UNK_? < (float)((uint)degreesFromStart & _UNK_?)) {
    fVar2 = arcStartPoint.y - arcOrigin.y;
    fVar3 = arcStartPoint.z - arcOrigin.z;
    pQVar4 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_AngleAxis
                       ((Quaternion *)&stack0xffffffb0,degreesFromStart,arcPlaneNormal,
                        (MethodInfo *)0x0);
    point.y = fVar2;
    point.x = arcStartPoint.x - arcOrigin.x;
    point.z = fVar3;
    pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                       ((Vector3 *)&stack0xffffffd8,*pQVar4,point,(MethodInfo *)0x0);
    pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                       ((Vector3 *)&stack0xffffffd8,*pVVar5,(MethodInfo *)0x0);
    from.y = (float)&UNK_?;
    from.x = arcStartPoint.x - arcOrigin.x;
    from.z = fVar3;
    degreesFromStart =
         Vector3Ex::Vector3Ex_SignedAngle(from,*pVVar5,arcPlaneNormal,(MethodInfo *)0x0);
  }
  return degreesFromStart;
}


/* Boolean Is3DPointOnLgArcWire(Vector3, Boolean, Vector3, Vector3, Vector3, Single, ArcEpsilon) */

bool Assembly-CSharp.dll::RTG::ArcMath::ArcMath_Is3DPointOnLgArcWire
               (Vector3 point,bool checkOnPlane,Vector3 arcOrigin,Vector3 arcStartPoint,
               Vector3 arcPlaneNormal,float degreesFromStart,ArcEpsilon epsilon,MethodInfo *method)

{
  if ((float)((uint)degreesFromStart & _UNK_?) <= _UNK_?) {
    bVar1 = ArcMath_Is3DPointOnShArcWire
                      (point,checkOnPlane,arcOrigin,arcStartPoint,arcPlaneNormal,degreesFromStart,
                       epsilon,(MethodInfo *)0x0);
    return bVar1;
  }
  fVar2 = arcStartPoint.x - arcOrigin.x;
  fVar3 = arcStartPoint.y - arcOrigin.y;
  fVar4 = arcStartPoint.z - arcOrigin.z;
  fVar5 = point.x - arcOrigin.x;
  fVar6 = point.y - arcOrigin.y;
  func_?(&stack0xffffffbc);
  func_?(&stack0xffffffbc,0);
  pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                     ((Vector3 *)&stack0xffffffb8,arcPlaneNormal,(MethodInfo *)0x0);
  uVar8 = pVVar7->x;
  uVar9 = pVVar7->y;
  if (checkOnPlane != 0) {
    fVar5 = 0.0;
    plane.m_Distance =
         (float)((uint)(arcOrigin.y * (float)uVar9 + arcOrigin.x * (float)uVar8 +
                       arcOrigin.z * pVVar7->z) ^
                __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
    plane.m_Normal = *pVVar7;
    fVar10 = PlaneEx::PlaneEx_GetAbsDistanceToPoint(plane,point,(MethodInfo *)0x0);
    if (epsilon._extrudeEps < fVar10) {
      return 0;
    }
  }
  pQVar11 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_AngleAxis
                     ((Quaternion *)&stack0xffffff80,degreesFromStart,arcPlaneNormal,
                      (MethodInfo *)0x0);
  fVar10 = pQVar11->y;
  point_00.y = fVar3;
  point_00.x = fVar2;
  point_00.z = fVar4;
  UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
            ((Vector3 *)&stack0xffffffb8,*pQVar11,point_00,(MethodInfo *)0x0);
  point0.y = arcOrigin.y;
  point0.x = fVar10;
  point0.z = arcOrigin.z;
  fVar2 = fVar10;
  fVar3 = arcOrigin.z;
  fVar4 = arcStartPoint.x;
  fVar12 = arcStartPoint.y;
  fVar13 = Vector3Ex::Vector3Ex_GetDistanceToSegment(point,point0,arcStartPoint,(MethodInfo *)0x0);
  if ((epsilon._wireEps < fVar13) &&
     (point0_00.y = arcOrigin.y, point0_00.x = fVar10, point0_00.z = arcOrigin.z, point1.y = fVar4,
     point1.x = fVar3, point1.z = fVar12, fVar4 = fVar10, fVar12 = arcOrigin.y, fVar13 = arcOrigin.z
     , fVar14 = Vector3Ex::Vector3Ex_GetDistanceToSegment(point,point0_00,point1,(MethodInfo *)0x0),
     epsilon._wireEps < fVar14)) {
    arcOrigin_00.y = arcOrigin.y;
    arcOrigin_00.x = fVar10;
    arcOrigin_00.z = arcOrigin.z;
    ArcMath_ConvertToSh3DArcAngle
              (arcOrigin_00,arcStartPoint,arcPlaneNormal,degreesFromStart,(MethodInfo *)0x0);
    from.y = fVar4;
    from.x = point.z;
    from.z = fVar12;
    to.y = fVar6;
    to.x = fVar5;
    to.z = fVar2;
    fVar6 = Vector3Ex::Vector3Ex_SignedAngle(from,to,arcPlaneNormal,(MethodInfo *)0x0);
    fVar4 = _UNK_?;
    if (0.0 <= fVar6) {
      fVar4 = _UNK_?;
    }
    fVar5 = _UNK_?;
    if (fVar2 < 0.0) {
      fVar5 = _UNK_?;
    }
    if (((fVar4 != fVar5) ||
        ((float)((uint)fVar2 & _UNK_?) < (float)((uint)fVar6 & _UNK_?))) &&
       (fVar3 - arcPlaneNormal.z <= fVar13)) {
      return fVar13 <= arcPlaneNormal.z + fVar3;
    }
    return 0;
  }
  return 1;
}


/* Boolean Is3DPointOnShArcWire(Vector3, Boolean, Vector3, Vector3, Vector3, Single, ArcEpsilon) */

bool Assembly-CSharp.dll::RTG::ArcMath::ArcMath_Is3DPointOnShArcWire
               (Vector3 point,bool checkOnPlane,Vector3 arcOrigin,Vector3 arcStartPoint,
               Vector3 arcPlaneNormal,float degreesFromStart,ArcEpsilon epsilon,MethodInfo *method)

{
  fVar1 = 0.0;
  fVar2 = 0.0;
  fVar3 = point.x - arcOrigin.x;
  fVar4 = point.y - arcOrigin.y;
  fVar5 = point.z - arcOrigin.z;
  uStack_6 = CONCAT44(uStack_6._4_4_,fVar5);
  fVar7 = arcOrigin.x;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Math);
    cRam_? = '\x01';
  }
  if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__Math);
  }
  if (fVar4 * fVar4 + fVar3 * fVar3 + fVar5 * fVar5 < 0.0) {
    func_?();
  }
  fVar3 = fVar7 - arcStartPoint.x;
  fVar4 = arcOrigin.y - arcStartPoint.y;
  fVar5 = arcOrigin.z - arcStartPoint.z;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Math);
    cRam_? = '\x01';
  }
  if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__Math);
  }
  if (fVar4 * fVar4 + fVar3 * fVar3 + fVar5 * fVar5 < 0.0) {
    func_?();
  }
  fVar3 = arcPlaneNormal.z;
  value.y = arcPlaneNormal.y;
  value.x = arcPlaneNormal.x;
  value.z = arcPlaneNormal.z;
  pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                     ((Vector3 *)((int)&uStack_6 + 4),value,(MethodInfo *)0x0);
  uStack_6._0_4_ = pVVar8->x;
  uStack_6._4_4_ = pVVar8->y;
  fVar4 = (float)(undefined4)uStack_6;
  if ((checkOnPlane != 0) &&
     (plane.m_Distance =
           (float)((uint)(arcOrigin.y * (float)uStack_6._4_4_ +
                          in_stack_9 * (float)(undefined4)uStack_6 + arcOrigin.z * pVVar8->z
                         ) ^
                  __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field),
     plane.m_Normal = *pVVar8, fVar1 = (float)(undefined4)uStack_6, fVar2 = (float)uStack_6._4_4_,
     fVar5 = PlaneEx::PlaneEx_GetAbsDistanceToPoint(plane,point,(MethodInfo *)0x0),
     epsilon._extrudeEps < fVar5)) {
    return 0;
  }
  from.y = fVar1;
  from.x = fVar7;
  from.z = fVar2;
  to.y = in_stack_10;
  to.x = (float)in_stack_11;
  to.z = in_stack_12;
  axis.y = arcPlaneNormal.y;
  axis.x = arcPlaneNormal.x;
  axis.z = fVar3;
  fVar1 = Vector3Ex::Vector3Ex_SignedAngle(from,to,axis,(MethodInfo *)0x0);
  fVar7 = _UNK_?;
  if (0.0 <= fVar1) {
    fVar7 = _UNK_?;
  }
  fVar2 = _UNK_?;
  if (degreesFromStart < 0.0) {
    fVar2 = _UNK_?;
  }
  if ((((fVar7 != fVar2) ||
       ((float)((uint)degreesFromStart & _UNK_?) < (float)((uint)fVar1 & _UNK_?))) ||
      (fVar4 < in_stack_10 - epsilon._wireEps)) ||
     (epsilon._wireEps + in_stack_10 < fVar4)) {
    uStack_6 = CONCAT44(&UNK_?,(undefined4)uStack_6);
    axis_00.y = arcPlaneNormal.y;
    axis_00.x = arcPlaneNormal.x;
    axis_00.z = fVar3;
    pQVar13 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_AngleAxis
                       ((Quaternion *)&epsilon,degreesFromStart,axis_00,(MethodInfo *)0x0);
    point_01.y = arcOrigin.x;
    point_01.x = (float)_checkOnPlane;
    point_01.z = arcOrigin.y;
    pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                       ((Vector3 *)&arcPlaneNormal.z,*pQVar13,point_01,(MethodInfo *)0x0);
    uStack14._0_4_ = pVVar8->x;
    uStack14._4_4_ = pVVar8->y;
    fStack15 = pVVar8->z;
    epsilon._extrudeEps = in_stack_16 + (float)(undefined4)uStack14;
    epsilon._wireEps = arcOrigin.y + (float)uStack14._4_4_;
    fStack17 = in_stack_18;
    uStack19 = 0;
    point_02.y = arcStartPoint.x;
    point_02.x = point.x;
    point_02.z = point.z;
    fVar20 = (float)(int)arcOrigin._4_8_;
    point.x = (float)(int)((ulonglong)arcOrigin._4_8_ >> 0x20);
    fStack21 =
         Vector3Ex::Vector3Ex_GetDistanceToSegment
                   (point_02,(Vector3)CONCAT84(CONCAT44(point.x,fVar20),in_stack_16),
                    arcStartPoint,(MethodInfo *)0x0);
    if (epsilon._wireEps < fStack21) {
      epsilon._areaEps = 0.0;
      arcPlaneNormal.z = arcOrigin.y;
      arcPlaneNormal.x = arcOrigin.z;
      point_00.y = arcStartPoint.x;
      point_00.x = arcOrigin.z;
      point_00.z = point.z;
      point0.z = arcOrigin.z;
      point0._0_8_ = in_stack_22;
      point1.y = arcOrigin.y;
      point1.x = in_stack_16;
      point1.z = fStack17;
      fVar7 = Vector3Ex::Vector3Ex_GetDistanceToSegment(point_00,point0,point1,(MethodInfo *)0x0);
      if (epsilon._wireEps < fVar7) {
        return 0;
      }
    }
  }
  return 1;
}


/* Boolean LgArcContains2DPoint(Vector2, Vector2, Vector2, Single, ArcEpsilon) */

bool Assembly-CSharp.dll::RTG::ArcMath::ArcMath_LgArcContains2DPoint
               (Vector2 point,Vector2 arcOrigin,Vector2 arcStartPoint,float degreesFromStart,
               ArcEpsilon epsilon,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  epsilon_00._extrudeEps = 0.0;
  epsilon_00._areaEps = epsilon._areaEps;
  point_00.z = 0.0;
  point_00._0_8_ = point;
  arcOrigin_00.z = 0.0;
  arcOrigin_00._0_8_ = arcOrigin;
  arcStartPoint_00.z = 0.0;
  arcStartPoint_00._0_8_ = arcStartPoint;
  epsilon_00._wireEps = epsilon._wireEps;
  bVar1 = ArcMath_LgArcContains3DPoint
                    (point_00,0,arcOrigin_00,arcStartPoint_00,
                     TypeInfo__UnityEngine__Vector3->static_fields->forwardVector,degreesFromStart,
                     epsilon_00,(MethodInfo *)0x0);
  return bVar1;
}


/* Boolean LgArcContains3DPoint(Vector3, Boolean, Vector3, Vector3, Vector3, Single, ArcEpsilon) */

bool Assembly-CSharp.dll::RTG::ArcMath::ArcMath_LgArcContains3DPoint
               (Vector3 point,bool checkOnPlane,Vector3 arcOrigin,Vector3 arcStartPoint,
               Vector3 arcPlaneNormal,float degreesFromStart,ArcEpsilon epsilon,MethodInfo *method)

{
  fVar1 = (float10)func_?();
  fVar2 = (float)fVar1;
  fVar3 = arcPlaneNormal.y;
  if ((float)((uint)fVar2 & _UNK_?) <= _UNK_?) {
    bVar4 = ArcMath_ShArcContains3DPoint
                      (point,checkOnPlane,arcOrigin,arcStartPoint,arcPlaneNormal,fVar2,epsilon,
                       (MethodInfo *)0x0);
    return bVar4;
  }
  fVar5 = point.y - arcOrigin.y;
  fVar6 = arcStartPoint.x - arcOrigin.x;
  fVar7 = arcStartPoint.y - arcOrigin.y;
  fVar8 = arcStartPoint.z - arcOrigin.z;
  angle = ArcMath_ConvertToSh3DArcAngle
                    (arcOrigin,arcStartPoint,arcPlaneNormal,fVar2,(MethodInfo *)0x0);
  VVar9.y = fVar7;
  VVar9.x = fVar6;
  VVar9.z = fVar8;
  to.y = fVar5;
  to.x = fVar3;
  to.z = point.z - arcOrigin.z;
  fVar6 = Vector3Ex::Vector3Ex_SignedAngle(VVar9,to,arcPlaneNormal,(MethodInfo *)0x0);
  fVar2 = _UNK_?;
  if (0.0 <= fVar6) {
    fVar2 = _UNK_?;
  }
  fVar10 = _UNK_?;
  if (angle < 0.0) {
    fVar10 = _UNK_?;
  }
  if (((fVar2 == fVar10) &&
      ((float)((uint)fVar6 & _UNK_?) <= (float)((uint)angle & _UNK_?))) &&
     (epsilon._areaEps != 0.0)) {
    fVar2 = 0.0;
    pQVar11 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_AngleAxis
                       ((Quaternion *)&stack0xffffff80,angle,arcPlaneNormal,(MethodInfo *)0x0);
    puVar12 = &UNK_?;
    point_00.y = fVar7;
    point_00.x = fVar2;
    point_00.z = fVar8;
    UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
              ((Vector3 *)&stack0xffffffb0,*pQVar11,point_00,(MethodInfo *)0x0);
    point0.y = (float)puVar12;
    point0.x = angle;
    point0.z = arcOrigin.z;
    point1_00.y = fVar5;
    point1_00.x = fVar3;
    point1_00.z = arcStartPoint.z;
    fVar2 = point.z;
    fVar3 = angle;
    fVar6 = Vector3Ex::Vector3Ex_GetDistanceToSegment(point,point0,point1_00,(MethodInfo *)0x0);
    if ((epsilon._areaEps < fVar6) &&
       (point_01.y = point.y, point_01.x = point.x, point_01.z = point.z, point.x = arcOrigin.z,
       fVar13 = (float)puVar12, VVar9.x = angle, VVar9 = (Vector3)CONCAT84(VVar9._0_8_,VVar9.x),
       point1.y = fVar2, point1.x = point.y, point1.z = fVar3,
       fVar2 = Vector3Ex::Vector3Ex_GetDistanceToSegment(point_01,VVar9,point1,(MethodInfo *)0x0),
       epsilon._areaEps < fVar2)) {
      return 0;
    }
    return 1;
  }
  fVar1 = (float10)func_?();
  fVar2 = (float)fVar1;
  fVar1 = (float10)func_?();
  return (float)fVar1 <= epsilon._areaEps + fVar2;
}


/* Boolean RaycastLgArc(Ray, Single ByRef, Vector3, Vector3, Vector3, Single, ArcEpsilon) */

bool Assembly-CSharp.dll::RTG::ArcMath::ArcMath_RaycastLgArc
               (Ray ray,float *t,Vector3 arcOrigin,Vector3 arcStartPoint,Vector3 arcPlaneNormal,
               float degreesFromStart,ArcEpsilon epsilon,MethodInfo *method)

{
  auVar1._0_16_ = in_stack_2._0_16_;
  auVar1._16_4_ = unaff_EBP;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__BoxMath);
    cRam_? = '\x01';
  }
  auVar3._16_4_ = auVar1._16_4_;
  auVar3._0_12_ = auVar1._0_12_;
  auVar3._12_4_ = 0;
  *t = 0.0;
  pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                      ((Vector3 *)&stack0xffffffa4,arcPlaneNormal,(MethodInfo *)0x0);
  auVar5._12_8_ = auVar3._12_8_;
  auVar5._0_4_ = pVVar4->x;
  auVar5._4_4_ = pVVar4->y;
  auVar5._8_4_ = pVVar4->z;
  ray_00.m_Origin.y = ray.m_Origin.y;
  ray_00.m_Origin.x = ray.m_Origin.x;
  ray_00.m_Origin.z = ray.m_Origin.z;
  ray_00.m_Direction.x = ray.m_Direction.x;
  ray_00.m_Direction.y = ray.m_Direction.y;
  ray_00.m_Direction.z = ray.m_Direction.z;
  bVar6 = UnityEngine.CoreModule.dll::UnityEngine::Plane::Plane_Raycast
                     ((Plane *)&stack0xffffffdc,ray_00,(float *)&stack0xfffffff8,(MethodInfo *)0x0);
  auVar7 = auVar5._0_16_;
  if (bVar6 != 0) {
    pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Ray::Ray_GetPoint
                        ((Vector3 *)&stack0xffffffa4,&ray,auVar5._12_4_,(MethodInfo *)0x0);
    bVar6 = ArcMath_LgArcContains3DPoint
                       (*pVVar4,0,arcOrigin,arcStartPoint,arcPlaneNormal,degreesFromStart,epsilon,
                        (MethodInfo *)0x0);
    auVar7 = auVar5._0_16_;
    if (bVar6 != 0) {
      *t = auVar5._12_4_;
      return 1;
    }
  }
  if ((epsilon._extrudeEps != 0.0) &&
     ((float)((uint)(ray.m_Direction.x * arcPlaneNormal.x + ray.m_Direction.y * arcPlaneNormal.y +
                    ray.m_Direction.z * arcPlaneNormal.z) & _UNK_?) < _UNK_?)) {
    auVar8._8_4_ = auVar7._12_4_;
    auVar8._0_8_ = epsilon._0_8_;
    auVar7._0_12_ = auVar8 << 0x20;
    auVar7._12_4_ = epsilon._wireEps;
    pOVar9 = ArcMath_CalcLg3DArcOBB
                        ((OBB *)&stack0xffffff78,arcOrigin,arcStartPoint,arcPlaneNormal,
                         degreesFromStart,auVar7._4_12_,(MethodInfo *)0x0);
    fVar10 = ray.m_Direction.z;
    fVar11 = ray.m_Direction.y;
    fVar12 = (pOVar9->_size).x;
    fVar13 = (pOVar9->_size).y;
    fVar14 = (pOVar9->_size).z;
    pVVar4 = &pOVar9->_center;
    fVar15 = pVVar4->x;
    fVar16 = (pOVar9->_center).y;
    uVar17 = pVVar4->x;
    uVar18 = pVVar4->y;
    boxCenter.y = (float)uVar18;
    boxCenter.x = (float)uVar17;
    fVar19 = (pOVar9->_center).z;
    fVar20 = (pOVar9->_rotation).x;
    fVar21 = (pOVar9->_rotation).y;
    uVar22 = (pOVar9->_rotation).z;
    fVar23 = (pOVar9->_rotation).w;
    fVar24 = ray.m_Origin.z;
    fVar25 = ray.m_Direction.x;
    if ((TypeInfo__RTG__BoxMath->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
      fVar24 = ray.m_Origin.z;
      fVar25 = ray.m_Direction.x;
    }
    ray.m_Origin.z = fVar19;
    ray.m_Direction.y = fVar13;
    ray.m_Direction.x = fVar12;
    ray_01.m_Origin.y = ray.m_Origin.y;
    ray_01.m_Origin.x = ray.m_Origin.x;
    ray_01.m_Origin.z = fVar24;
    ray_01.m_Direction.x = fVar25;
    ray_01.m_Direction.y = fVar11;
    ray_01.m_Direction.z = fVar10;
    boxCenter.z = ray.m_Origin.z;
    boxSize.y = ray.m_Direction.y;
    boxSize.x = ray.m_Direction.x;
    boxSize.z = fVar14;
    boxRotation.y = fVar21;
    boxRotation.x = fVar20;
    boxRotation.z = (float)uVar22;
    boxRotation.w = fVar23;
    ray.m_Origin.x = fVar15;
    ray.m_Origin.y = fVar16;
    ray.m_Direction.z = fVar14;
    bVar6 = BoxMath::BoxMath_Raycast
                       (ray_01,boxCenter,boxSize,boxRotation,(BoxEpsilon)ZEXT812(0),
                        (MethodInfo *)0x0);
    return bVar6;
  }
  return 0;
}


/* Boolean RaycastLgArcWire(Ray, Single ByRef, Vector3, Vector3, Vector3, Single, ArcEpsilon) */

bool Assembly-CSharp.dll::RTG::ArcMath::ArcMath_RaycastLgArcWire
               (Ray ray,float *t,Vector3 arcOrigin,Vector3 arcStartPoint,Vector3 arcPlaneNormal,
               float degreesFromStart,ArcEpsilon epsilon,MethodInfo *method)

{
  auVar1._0_16_ = in_stack_2._0_16_;
  auVar1._16_4_ = unaff_EBP;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__BoxMath);
    cRam_? = '\x01';
  }
  auVar3._16_4_ = auVar1._16_4_;
  auVar3._0_12_ = auVar1._0_12_;
  auVar3._12_4_ = 0;
  *t = 0.0;
  pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                      ((Vector3 *)&stack0xffffffa4,arcPlaneNormal,(MethodInfo *)0x0);
  auVar5._12_8_ = auVar3._12_8_;
  auVar5._0_4_ = pVVar4->x;
  auVar5._4_4_ = pVVar4->y;
  auVar5._8_4_ = pVVar4->z;
  ray_00.m_Origin.y = ray.m_Origin.y;
  ray_00.m_Origin.x = ray.m_Origin.x;
  ray_00.m_Origin.z = ray.m_Origin.z;
  ray_00.m_Direction.x = ray.m_Direction.x;
  ray_00.m_Direction.y = ray.m_Direction.y;
  ray_00.m_Direction.z = ray.m_Direction.z;
  bVar6 = UnityEngine.CoreModule.dll::UnityEngine::Plane::Plane_Raycast
                     ((Plane *)&stack0xffffffdc,ray_00,(float *)&stack0xfffffff8,(MethodInfo *)0x0);
  auVar7 = auVar5._0_16_;
  if (bVar6 != 0) {
    pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Ray::Ray_GetPoint
                        ((Vector3 *)&stack0xffffffa4,&ray,auVar5._12_4_,(MethodInfo *)0x0);
    bVar6 = ArcMath_Is3DPointOnLgArcWire
                       (*pVVar4,0,arcOrigin,arcStartPoint,arcPlaneNormal,degreesFromStart,epsilon,
                        (MethodInfo *)0x0);
    auVar7 = auVar5._0_16_;
    if (bVar6 != 0) {
      *t = auVar5._12_4_;
      return 1;
    }
  }
  if ((epsilon._extrudeEps != 0.0) &&
     ((float)((uint)(ray.m_Direction.x * arcPlaneNormal.x + ray.m_Direction.y * arcPlaneNormal.y +
                    ray.m_Direction.z * arcPlaneNormal.z) & _UNK_?) < _UNK_?)) {
    auVar8._8_4_ = auVar7._12_4_;
    auVar8._0_8_ = epsilon._0_8_;
    auVar7._0_12_ = auVar8 << 0x20;
    auVar7._12_4_ = epsilon._wireEps;
    pOVar9 = ArcMath_CalcLg3DArcOBB
                        ((OBB *)&stack0xffffff78,arcOrigin,arcStartPoint,arcPlaneNormal,
                         degreesFromStart,auVar7._4_12_,(MethodInfo *)0x0);
    fVar10 = ray.m_Direction.z;
    fVar11 = ray.m_Direction.y;
    fVar12 = (pOVar9->_size).x;
    fVar13 = (pOVar9->_size).y;
    fVar14 = (pOVar9->_size).z;
    pVVar4 = &pOVar9->_center;
    fVar15 = pVVar4->x;
    fVar16 = (pOVar9->_center).y;
    uVar17 = pVVar4->x;
    uVar18 = pVVar4->y;
    boxCenter.y = (float)uVar18;
    boxCenter.x = (float)uVar17;
    fVar19 = (pOVar9->_center).z;
    fVar20 = (pOVar9->_rotation).x;
    fVar21 = (pOVar9->_rotation).y;
    uVar22 = (pOVar9->_rotation).z;
    fVar23 = (pOVar9->_rotation).w;
    fVar24 = ray.m_Origin.z;
    fVar25 = ray.m_Direction.x;
    if ((TypeInfo__RTG__BoxMath->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
      fVar24 = ray.m_Origin.z;
      fVar25 = ray.m_Direction.x;
    }
    ray.m_Origin.z = fVar19;
    ray.m_Direction.y = fVar13;
    ray.m_Direction.x = fVar12;
    ray_01.m_Origin.y = ray.m_Origin.y;
    ray_01.m_Origin.x = ray.m_Origin.x;
    ray_01.m_Origin.z = fVar24;
    ray_01.m_Direction.x = fVar25;
    ray_01.m_Direction.y = fVar11;
    ray_01.m_Direction.z = fVar10;
    boxCenter.z = ray.m_Origin.z;
    boxSize.y = ray.m_Direction.y;
    boxSize.x = ray.m_Direction.x;
    boxSize.z = fVar14;
    boxRotation.y = fVar21;
    boxRotation.x = fVar20;
    boxRotation.z = (float)uVar22;
    boxRotation.w = fVar23;
    ray.m_Origin.x = fVar15;
    ray.m_Origin.y = fVar16;
    ray.m_Direction.z = fVar14;
    bVar6 = BoxMath::BoxMath_Raycast
                       (ray_01,boxCenter,boxSize,boxRotation,(BoxEpsilon)ZEXT812(0),
                        (MethodInfo *)0x0);
    return bVar6;
  }
  return 0;
}


/* Boolean RaycastShArc(Ray, Single ByRef, Vector3, Vector3, Vector3, Single, ArcEpsilon) */

bool Assembly-CSharp.dll::RTG::ArcMath::ArcMath_RaycastShArc
               (Ray ray,float *t,Vector3 arcOrigin,Vector3 arcStartPoint,Vector3 arcPlaneNormal,
               float degreesFromStart,ArcEpsilon epsilon,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__BoxMath);
    cRam_? = '\x01';
  }
  fVar1 = 0.0;
  *t = 0.0;
  fVar2 = ArcMath_ConvertToSh3DArcAngle
                    (arcOrigin,arcStartPoint,arcPlaneNormal,degreesFromStart,(MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
            ((Vector3 *)&stack0xffffffa4,arcPlaneNormal,(MethodInfo *)0x0);
  ray_01.m_Origin.y = ray.m_Origin.y;
  ray_01.m_Origin.x = ray.m_Origin.x;
  ray_01.m_Origin.z = ray.m_Origin.z;
  ray_01.m_Direction.x = ray.m_Direction.x;
  ray_01.m_Direction.y = ray.m_Direction.y;
  ray_01.m_Direction.z = ray.m_Direction.z;
  bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Plane::Plane_Raycast
                    ((Plane *)&stack0xffffffdc,ray_01,(float *)&stack0xfffffff8,(MethodInfo *)0x0);
  if (bVar3 != 0) {
    pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Ray::Ray_GetPoint
                       ((Vector3 *)&stack0xffffffa4,&ray,fVar1,(MethodInfo *)0x0);
    bVar3 = ArcMath_ShArcContains3DPoint
                      (*pVVar4,0,arcOrigin,arcStartPoint,arcPlaneNormal,fVar2,epsilon,
                       (MethodInfo *)0x0);
    if (bVar3 != 0) {
      *t = fVar1;
      return 1;
    }
  }
  if ((epsilon._extrudeEps != 0.0) &&
     ((float)((uint)(ray.m_Direction.x * arcPlaneNormal.x + ray.m_Direction.y * arcPlaneNormal.y +
                    ray.m_Direction.z * arcPlaneNormal.z) & _UNK_?) < _UNK_?)) {
    ray.m_Direction.y = arcPlaneNormal.z;
    ray.m_Origin.y = arcStartPoint.z;
    arcOrigin_00.z = 0.0;
    arcOrigin_00.x = (float)(int)epsilon._4_8_;
    arcOrigin_00.y = (float)(int)(epsilon._4_8_ >> 0x20);
    ray.m_Origin.x = arcStartPoint.y;
    ray.m_Origin.z = arcPlaneNormal.x;
    ray.m_Direction.x = arcPlaneNormal.y;
    ray.m_Direction.z = fVar2;
    pOVar5 = ArcMath_CalcSh3DArcOBB
                       ((OBB *)&stack0xffffff78,arcOrigin_00,arcStartPoint,arcPlaneNormal,fVar2,
                        epsilon,(MethodInfo *)0x0);
    fVar6 = ray.m_Direction.z;
    fVar7 = ray.m_Direction.x;
    fVar8 = ray.m_Origin.z;
    fVar1 = (pOVar5->_size).x;
    fVar9 = (pOVar5->_size).y;
    fVar10 = (pOVar5->_size).z;
    fVar11 = (pOVar5->_center).x;
    fVar12 = (pOVar5->_center).y;
    fVar13 = (pOVar5->_center).z;
    fVar14 = (pOVar5->_rotation).x;
    fVar15 = (pOVar5->_rotation).y;
    uVar16 = (pOVar5->_rotation).z;
    fVar2 = (pOVar5->_rotation).w;
    fVar17 = ray.m_Origin.x;
    fVar18 = ray.m_Origin.y;
    if ((TypeInfo__RTG__BoxMath->_1).cctor_finished_or_no_cctor == 0) {
      fVar17 = ray.m_Origin.x;
      func_?();
    }
    ray.m_Direction.z = fVar17;
    ray.m_Direction.y = (float)&UNK_?;
    ray_00.m_Origin.y = fVar18;
    ray_00.m_Origin.x = ray.m_Direction.z;
    ray_00.m_Origin.z = fVar8;
    ray_00.m_Direction.x = fVar7;
    ray_00.m_Direction.y = fVar7;
    ray_00.m_Direction.z = fVar6;
    boxCenter.y = fVar12;
    boxCenter.x = fVar11;
    boxCenter.z = fVar13;
    boxSize.y = fVar9;
    boxSize.x = fVar1;
    boxSize.z = fVar10;
    boxRotation.y = fVar15;
    boxRotation.x = fVar14;
    boxRotation.z = (float)uVar16;
    boxRotation.w = fVar2;
    bVar3 = BoxMath::BoxMath_Raycast
                      (ray_00,boxCenter,boxSize,boxRotation,(BoxEpsilon)ZEXT812(0),(MethodInfo *)0x0
                      );
    return bVar3;
  }
  return 0;
}


/* Boolean RaycastShArcWire(Ray, Single ByRef, Vector3, Vector3, Vector3, Single, ArcEpsilon) */

bool Assembly-CSharp.dll::RTG::ArcMath::ArcMath_RaycastShArcWire
               (Ray ray,float *t,Vector3 arcOrigin,Vector3 arcStartPoint,Vector3 arcPlaneNormal,
               float degreesFromStart,ArcEpsilon epsilon,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__BoxMath);
    cRam_? = '\x01';
  }
  fVar1 = 0.0;
  *t = 0.0;
  fVar2 = ArcMath_ConvertToSh3DArcAngle
                    (arcOrigin,arcStartPoint,arcPlaneNormal,degreesFromStart,(MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
            ((Vector3 *)&stack0xffffffa4,arcPlaneNormal,(MethodInfo *)0x0);
  ray_01.m_Origin.y = ray.m_Origin.y;
  ray_01.m_Origin.x = ray.m_Origin.x;
  ray_01.m_Origin.z = ray.m_Origin.z;
  ray_01.m_Direction.x = ray.m_Direction.x;
  ray_01.m_Direction.y = ray.m_Direction.y;
  ray_01.m_Direction.z = ray.m_Direction.z;
  bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Plane::Plane_Raycast
                    ((Plane *)&stack0xffffffdc,ray_01,(float *)&stack0xfffffff8,(MethodInfo *)0x0);
  if (bVar3 != 0) {
    pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Ray::Ray_GetPoint
                       ((Vector3 *)&stack0xffffffa4,&ray,fVar1,(MethodInfo *)0x0);
    bVar3 = ArcMath_Is3DPointOnShArcWire
                      (*pVVar4,0,arcOrigin,arcStartPoint,arcPlaneNormal,fVar2,epsilon,
                       (MethodInfo *)0x0);
    if (bVar3 != 0) {
      *t = fVar1;
      return 1;
    }
  }
  if ((epsilon._extrudeEps != 0.0) &&
     ((float)((uint)(ray.m_Direction.x * arcPlaneNormal.x + ray.m_Direction.y * arcPlaneNormal.y +
                    ray.m_Direction.z * arcPlaneNormal.z) & _UNK_?) < _UNK_?)) {
    ray.m_Direction.y = arcPlaneNormal.z;
    ray.m_Origin.y = arcStartPoint.z;
    arcOrigin_00.z = 0.0;
    arcOrigin_00.x = (float)(int)epsilon._4_8_;
    arcOrigin_00.y = (float)(int)(epsilon._4_8_ >> 0x20);
    ray.m_Origin.x = arcStartPoint.y;
    ray.m_Origin.z = arcPlaneNormal.x;
    ray.m_Direction.x = arcPlaneNormal.y;
    ray.m_Direction.z = fVar2;
    pOVar5 = ArcMath_CalcSh3DArcOBB
                       ((OBB *)&stack0xffffff78,arcOrigin_00,arcStartPoint,arcPlaneNormal,fVar2,
                        epsilon,(MethodInfo *)0x0);
    fVar6 = ray.m_Direction.z;
    fVar7 = ray.m_Direction.x;
    fVar8 = ray.m_Origin.z;
    fVar1 = (pOVar5->_size).x;
    fVar9 = (pOVar5->_size).y;
    fVar10 = (pOVar5->_size).z;
    fVar11 = (pOVar5->_center).x;
    fVar12 = (pOVar5->_center).y;
    fVar13 = (pOVar5->_center).z;
    fVar14 = (pOVar5->_rotation).x;
    fVar15 = (pOVar5->_rotation).y;
    uVar16 = (pOVar5->_rotation).z;
    fVar2 = (pOVar5->_rotation).w;
    fVar17 = ray.m_Origin.x;
    fVar18 = ray.m_Origin.y;
    if ((TypeInfo__RTG__BoxMath->_1).cctor_finished_or_no_cctor == 0) {
      fVar17 = ray.m_Origin.x;
      func_?();
    }
    ray.m_Direction.z = fVar17;
    ray.m_Direction.y = (float)&UNK_?;
    ray_00.m_Origin.y = fVar18;
    ray_00.m_Origin.x = ray.m_Direction.z;
    ray_00.m_Origin.z = fVar8;
    ray_00.m_Direction.x = fVar7;
    ray_00.m_Direction.y = fVar7;
    ray_00.m_Direction.z = fVar6;
    boxCenter.y = fVar12;
    boxCenter.x = fVar11;
    boxCenter.z = fVar13;
    boxSize.y = fVar9;
    boxSize.x = fVar1;
    boxSize.z = fVar10;
    boxRotation.y = fVar15;
    boxRotation.x = fVar14;
    boxRotation.z = (float)uVar16;
    boxRotation.w = fVar2;
    bVar3 = BoxMath::BoxMath_Raycast
                      (ray_00,boxCenter,boxSize,boxRotation,(BoxEpsilon)ZEXT812(0),(MethodInfo *)0x0
                      );
    return bVar3;
  }
  return 0;
}


/* Boolean ShArcContains2DPoint(Vector2, Vector2, Vector2, Single, ArcEpsilon) */

bool Assembly-CSharp.dll::RTG::ArcMath::ArcMath_ShArcContains2DPoint
               (Vector2 point,Vector2 arcOrigin,Vector2 arcStartPoint,float degreesFromStart,
               ArcEpsilon epsilon,MethodInfo *method)

{
  degreesFromStart_00 =
       ArcMath_ConvertToSh2DArcAngle(arcOrigin,arcStartPoint,degreesFromStart,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  point_00.y = degreesFromStart_00;
  point_00.x = (TypeInfo__UnityEngine__Vector3->static_fields->forwardVector).z;
  point_00.z = epsilon._areaEps;
  auVar1._4_8_ = 0;
  auVar1._0_4_ = epsilon._wireEps;
  arcStartPoint_00.z = 0.0;
  arcStartPoint_00._0_8_ = arcStartPoint;
  epsilon_00._extrudeEps = 0.0;
  epsilon_00._areaEps = epsilon._areaEps;
  epsilon_00._wireEps = epsilon._wireEps;
  bVar2 = ArcMath_ShArcContains3DPoint
                    (point_00,0,(Vector3)(auVar1 << 0x20),arcStartPoint_00,
                     TypeInfo__UnityEngine__Vector3->static_fields->forwardVector,
                     degreesFromStart_00,epsilon_00,(MethodInfo *)0x0);
  return bVar2;
}


/* Boolean ShArcContains3DPoint(Vector3, Boolean, Vector3, Vector3, Vector3, Single, ArcEpsilon) */

bool Assembly-CSharp.dll::RTG::ArcMath::ArcMath_ShArcContains3DPoint
               (Vector3 point,bool checkOnPlane,Vector3 arcOrigin,Vector3 arcStartPoint,
               Vector3 arcPlaneNormal,float degreesFromStart,ArcEpsilon epsilon,MethodInfo *method)

{
  fVar1 = point.x - arcOrigin.x;
  fVar2 = point.y - arcOrigin.y;
  fVar3 = point.z - arcOrigin.z;
  fVar4 = arcOrigin.x - arcStartPoint.x;
  fVar5 = arcOrigin.y - arcStartPoint.y;
  fVar6 = arcOrigin.z - arcStartPoint.z;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Math);
    cRam_? = '\x01';
  }
  if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__Math);
  }
  dVar7 = (double)(fVar5 * fVar5 + fVar4 * fVar4 + fVar6 * fVar6);
  if (dVar7 < 0.0) {
    func_?();
  }
  else {
    dVar7 = SQRT(dVar7);
  }
  fVar4 = (float)dVar7;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Math);
    cRam_? = '\x01';
  }
  if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__Math);
  }
  fVar4 = epsilon._areaEps + fVar4;
  dVar7 = (double)(fVar1 * fVar1 + fVar2 * fVar2 + fVar3 * fVar3);
  if (dVar7 < 0.0) {
    func_?();
  }
  else {
    dVar7 = SQRT(dVar7);
  }
  fVar1 = arcPlaneNormal.z;
  if ((float)dVar7 <= fVar4) {
    value.y = arcPlaneNormal.y;
    value.x = arcPlaneNormal.x;
    value.z = arcPlaneNormal.z;
    pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                       ((Vector3 *)&stack0xffffffc0,value,(MethodInfo *)0x0);
    fVar2 = pVVar8->x;
    fVar3 = pVVar8->y;
    fVar4 = pVVar8->z;
    fVar5 = fVar3;
    if ((checkOnPlane == 0) ||
       (plane.m_Distance =
             (float)((uint)(arcOrigin.y * fVar3 + in_stack_9 * fVar2 + arcOrigin.z * fVar4) ^
                    __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field),
       plane.m_Normal = *pVVar8,
       fVar6 = PlaneEx::PlaneEx_GetAbsDistanceToPoint(plane,point,(MethodInfo *)0x0),
       in_stack_10 = fVar2, in_stack_11 = fVar3, fVar6 <= epsilon._extrudeEps)) {
      from.y = in_stack_10;
      from.x = (float)in_stack_12;
      from.z = in_stack_11;
      to.y = fVar4;
      to.x = fVar5;
      to.z = in_stack_13;
      axis.y = arcPlaneNormal.y;
      axis.x = arcPlaneNormal.x;
      axis.z = fVar1;
      fVar3 = Vector3Ex::Vector3Ex_SignedAngle(from,to,axis,(MethodInfo *)0x0);
      fVar2 = _UNK_?;
      if (0.0 <= fVar3) {
        fVar2 = _UNK_?;
      }
      fVar4 = _UNK_?;
      if (degreesFromStart < 0.0) {
        fVar4 = _UNK_?;
      }
      if ((fVar2 != fVar4) ||
         ((float)((uint)degreesFromStart & _UNK_?) < (float)((uint)fVar3 & _UNK_?))) {
        if (epsilon._areaEps == 0.0) {
          return 0;
        }
        axis_00.y = arcPlaneNormal.y;
        axis_00.x = arcPlaneNormal.x;
        axis_00.z = fVar1;
        pQVar14 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_AngleAxis
                           ((Quaternion *)&arcPlaneNormal,degreesFromStart,axis_00,(MethodInfo *)0x0
                           );
        point_00.y = arcOrigin.x;
        point_00.x = (float)_checkOnPlane;
        point_00.z = arcOrigin.y;
        pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                           ((Vector3 *)&arcPlaneNormal.z,*pQVar14,point_00,(MethodInfo *)0x0);
        uStack15._0_4_ = pVVar8->x;
        uStack15._4_4_ = pVVar8->y;
        fStack16 = pVVar8->z;
        uStack17 = 0;
        auVar18._8_4_ = 0;
        auVar18._0_8_ = point._4_8_;
        point0_00.y = arcOrigin.y;
        point0_00.x = (float)in_stack_19;
        point0_00.z = arcOrigin.z;
        fStack20 =
             Vector3Ex::Vector3Ex_GetDistanceToSegment
                       ((Vector3)(auVar18 << 0x20),point0_00,arcStartPoint,(MethodInfo *)0x0);
        if (epsilon._areaEps < fStack20) {
          arcPlaneNormal.x = 0.0;
          auVar21._8_4_ = 0;
          auVar21._0_8_ = point._4_8_;
          point0.z = arcOrigin.z;
          point0._0_8_ = in_stack_22;
          point1.z = in_stack_23;
          point1._0_8_ = in_stack_24;
          fVar1 = Vector3Ex::Vector3Ex_GetDistanceToSegment
                            ((Vector3)(auVar21 << 0x20),point0,point1,(MethodInfo *)0x0);
          if (epsilon._areaEps < fVar1) {
            return 0;
          }
        }
      }
      return 1;
    }
  }
  return 0;
}

