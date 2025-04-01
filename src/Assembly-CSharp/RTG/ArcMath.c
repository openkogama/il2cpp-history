
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
  if (_UNK_? < (float)((uint)degreesFromStart & _UNK_?)) {
    fVar1 = arcStartPoint.x - arcOrigin.x;
    fVar2 = arcStartPoint.z - arcOrigin.z;
    pQVar3 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_AngleAxis
                        ((Quaternion *)&stack0xffffffb8,degreesFromStart,arcPlaneNormal,
                         (MethodInfo *)0x0);
    point.y = arcStartPoint.y - arcOrigin.y;
    point.x = fVar1;
    point.z = fVar2;
    pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                        ((Vector3 *)&stack0xffffffb8,*pQVar3,point,(MethodInfo *)0x0);
    uVar5 = pVVar4->x;
    uVar6 = pVVar4->y;
    fVar7 = arcStartPoint.x + ((arcOrigin.x + (float)uVar5) - arcStartPoint.x) * _UNK_?;
    fVar8 = arcStartPoint.y + ((arcOrigin.y + (float)uVar6) - arcStartPoint.y) * _UNK_?;
    fVar9 = arcStartPoint.z + ((arcOrigin.z + pVVar4->z) - arcStartPoint.z) * _UNK_?;
    fVar10 = fVar9 - arcOrigin.z;
    fVar11 = fVar7 - arcOrigin.x;
    fVar12 = fVar8 - arcOrigin.y;
    value.y = fVar12;
    value.x = fVar11;
    value.z = fVar10;
    pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                        ((Vector3 *)&stack0xffffffb8,value,(MethodInfo *)0x0);
    uVar13 = pVVar4->x;
    uVar14 = pVVar4->y;
    fVar2 = pVVar4->z;
    fVar15 = (float10)func_?();
    fVar16 = (float10)func_?();
    fVar1 = (float)(fVar16 + (float10)(float)fVar15 + (float10)(epsilon._areaEps * _UNK_?));
    value_00.y = fVar12;
    value_00.x = fVar11;
    value_00.z._0_1_ = SUB41(fVar10,0);
    value_00.z._1_2_ = (short)((uint)fVar10 >> 8);
    value_00.z._3_1_ = (char)((uint)fVar10 >> 0x18);
    pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                        ((Vector3 *)&stack0xffffffb8,value_00,(MethodInfo *)0x0);
    uVar17 = pVVar4->x;
    uVar18 = (undefined2)((uint)uVar17 >> 8);
    uVar19 = (undefined1)((uint)uVar17 >> 0x18);
    pQVar3 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_LookRotation
                        ((Quaternion *)&stack0xffffffa0,*pVVar4,arcPlaneNormal,(MethodInfo *)0x0);
    fVar20 = pQVar3->x;
    fVar21 = pQVar3->y;
    fVar22 = pQVar3->z;
    value_01.y = fVar12;
    value_01.x = fVar11;
    value_01.z = fVar10;
    pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                        ((Vector3 *)&stack0xffffffb8,value_01,(MethodInfo *)0x0);
    uVar23 = pVVar4->x;
    uVar24 = pVVar4->y;
    fVar12 = (fVar7 + (float)uVar13 * epsilon._areaEps) - (float)uVar23 * fVar1 * _UNK_?;
    fVar10 = (fVar8 + (float)uVar14 * epsilon._areaEps) - (float)uVar24 * fVar1 * _UNK_?;
    fVar2 = (fVar9 + fVar2 * epsilon._areaEps) - pVVar4->z * fVar1 * _UNK_?;
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    fVar11 = epsilon._areaEps + (float)fVar15;
    fVar9 = epsilon._extrudeEps * _UNK_?;
    (__return_storage_ptr__->_size).x = fVar11 + fVar11;
    (__return_storage_ptr__->_size).y = fVar9;
    (__return_storage_ptr__->_size).z = fVar1;
    (__return_storage_ptr__->_center).x = fVar12;
    (__return_storage_ptr__->_center).y = fVar10;
    (__return_storage_ptr__->_center).z = fVar2;
    (__return_storage_ptr__->_rotation).x = fVar20;
    (__return_storage_ptr__->_rotation).y = fVar21;
    (__return_storage_ptr__->_rotation).z = fVar22;
    (__return_storage_ptr__->_rotation).w = (float)&UNK_?;
    *(uint *)&__return_storage_ptr__->_isValid = CONCAT13(uVar19,CONCAT21(uVar18,1));
    return __return_storage_ptr__;
  }
  pOVar25 = ArcMath_CalcSh3DArcOBB
                      ((OBB *)&stack0xffffff60,arcOrigin,arcStartPoint,arcPlaneNormal,
                       degreesFromStart,epsilon,(MethodInfo *)0x0);
  fVar1 = (pOVar25->_size).y;
  fVar2 = (pOVar25->_size).z;
  fVar20 = (pOVar25->_center).x;
  bVar26 = pOVar25->_isValid;
  uVar27 = *(undefined3 *)&pOVar25->field_0x29;
  (__return_storage_ptr__->_size).x = (pOVar25->_size).x;
  (__return_storage_ptr__->_size).y = fVar1;
  (__return_storage_ptr__->_size).z = fVar2;
  (__return_storage_ptr__->_center).x = fVar20;
  fVar1 = (pOVar25->_center).z;
  fVar2 = (pOVar25->_rotation).x;
  fVar20 = (pOVar25->_rotation).y;
  (__return_storage_ptr__->_center).y = (pOVar25->_center).y;
  (__return_storage_ptr__->_center).z = fVar1;
  (__return_storage_ptr__->_rotation).x = fVar2;
  (__return_storage_ptr__->_rotation).y = fVar20;
  fVar1 = (pOVar25->_rotation).w;
  (__return_storage_ptr__->_rotation).z = (pOVar25->_rotation).z;
  (__return_storage_ptr__->_rotation).w = fVar1;
  __return_storage_ptr__->_isValid = bVar26;
  *(undefined3 *)&__return_storage_ptr__->field_0x29 = uVar27;
  return __return_storage_ptr__;
}


/* OBB CalcSh3DArcOBB(Vector3, Vector3, Vector3, Single, ArcEpsilon) */

OBB * Assembly-CSharp.dll::RTG::ArcMath::ArcMath_CalcSh3DArcOBB
                (OBB *__return_storage_ptr__,Vector3 arcOrigin,Vector3 arcStartPoint,
                Vector3 arcPlaneNormal,float degreesFromStart,ArcEpsilon epsilon,MethodInfo *method)

{
  func_?(__return_storage_ptr__,0,0x2c);
  angle = ArcMath_ConvertToSh3DArcAngle
                    (arcOrigin,arcStartPoint,arcPlaneNormal,degreesFromStart,(MethodInfo *)0x0);
  fVar1 = arcStartPoint.x - arcOrigin.x;
  fVar2 = arcStartPoint.y - arcOrigin.y;
  fVar3 = arcStartPoint.z - arcOrigin.z;
  pQVar4 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_AngleAxis
                      ((Quaternion *)&stack0xffffff98,angle * _UNK_?,arcPlaneNormal,
                       (MethodInfo *)0x0);
  point_00.y = fVar2;
  point_00.x = fVar1;
  pVVar5 = (Vector3 *)&stack0xffffff98;
  point_00.z = fVar3;
  pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                      (pVVar5,*pQVar4,point_00,(MethodInfo *)0x0);
  pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                      ((Vector3 *)&stack0xffffff98,*pVVar6,(MethodInfo *)0x0);
  fVar3 = pVVar6->x;
  fVar7 = pVVar6->y;
  fVar8 = pVVar6->z;
  pQVar4 = (Quaternion *)&stack0xffffff98;
  pQVar9 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_LookRotation
                      (pQVar4,*pVVar6,arcPlaneNormal,(MethodInfo *)0x0);
  fVar7 = fVar7 * _UNK_?;
  fVar8 = fVar8 * _UNK_?;
  fVar10 = pQVar9->x;
  fVar11 = pQVar9->y;
  fVar12 = pQVar9->z;
  fVar13 = pQVar9->w;
  (__return_storage_ptr__->_center).x = (float)pVVar5 + fVar3 * _UNK_?;
  (__return_storage_ptr__->_center).y = arcOrigin.y + fVar7;
  (__return_storage_ptr__->_center).z = arcOrigin.z + fVar8;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pVVar14 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar7 = (pVVar14->zeroVector).y;
  fVar3 = (pVVar14->zeroVector).z;
  (__return_storage_ptr__->_size).x = (pVVar14->zeroVector).x;
  (__return_storage_ptr__->_size).y = fVar7;
  (__return_storage_ptr__->_size).z = fVar3;
  __return_storage_ptr__->_isValid = 1;
  (__return_storage_ptr__->_rotation).x = fVar10;
  (__return_storage_ptr__->_rotation).y = fVar11;
  (__return_storage_ptr__->_rotation).z = fVar12;
  (__return_storage_ptr__->_rotation).w = fVar13;
  pQVar9 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_AngleAxis
                      ((Quaternion *)&stack0xffffff80,angle,arcPlaneNormal,(MethodInfo *)0x0);
  puVar15 = &UNK_?;
  point.y = fVar2;
  point.x = fVar1;
  point.z = (float)pQVar4;
  pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                      ((Vector3 *)&stack0xffffff98,*pQVar9,point,(MethodInfo *)0x0);
  fVar13 = epsilon._areaEps * _UNK_?;
  fVar8 = pVVar5->x;
  fVar11 = pVVar5->y;
  fVar3 = pVVar5->z;
  pVVar5 = SphereShape3D::SphereShape3D_get_Right
                      ((Vector3 *)&stack0xffffff98,(SphereShape3D *)__return_storage_ptr__,
                       (MethodInfo *)0x0);
  fVar10 = pVVar5->x;
  fVar12 = pVVar5->y;
  fVar7 = pVVar5->z;
  pVVar5 = SphereShape3D::SphereShape3D_get_Right
                      ((Vector3 *)&stack0xffffff98,(SphereShape3D *)__return_storage_ptr__,
                       (MethodInfo *)0x0);
  uVar16 = pVVar5->x;
  uVar17 = pVVar5->y;
  fVar2 = epsilon._extrudeEps * _UNK_?;
  fVar3 = (float)((uint)((float)uVar16 * (float)puVar15 + (float)uVar17 * angle +
                        pVVar5->z * 4.3660233e-29) & _UNK_?) +
          (float)((uint)(fVar12 * fVar11 + fVar10 * fVar8 + fVar7 * fVar3) & _UNK_?) + fVar13;
  fVar18 = (float10)func_?();
  (__return_storage_ptr__->_size).x = fVar3;
  (__return_storage_ptr__->_size).y = fVar2;
  (__return_storage_ptr__->_size).z = (float)(fVar18 + (float10)fVar13);
  return __return_storage_ptr__;
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
  func_?(&stack0xffffffcc);
  func_?(&stack0xffffffcc,0);
  pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                     ((Vector3 *)&stack0xffffffa8,arcPlaneNormal,(MethodInfo *)0x0);
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
  pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                     ((Vector3 *)&stack0xffffffa8,*pQVar11,point_00,(MethodInfo *)0x0);
  uVar12 = pVVar7->x;
  uVar13 = pVVar7->y;
  method_00 = (MethodInfo *)(fVar10 + (float)uVar12);
  fVar3 = arcOrigin.y + (float)uVar13;
  fVar2 = arcOrigin.z + pVVar7->z;
  point0.y = arcOrigin.y;
  point0.x = fVar10;
  point0.z = arcOrigin.z;
  fVar4 = arcStartPoint.x;
  fVar14 = Vector3Ex::Vector3Ex_GetDistanceToSegment(point,point0,arcStartPoint,method_00);
  if ((epsilon._wireEps < fVar14) &&
     (point0_00.y = arcOrigin.y, point0_00.x = fVar10, point0_00.z = arcOrigin.z, point1.y = fVar3,
     point1.x = (float)method_00, point1.z = fVar2, fVar3 = fVar10, fVar2 = arcOrigin.y,
     fVar14 = arcOrigin.z,
     fVar15 = Vector3Ex::Vector3Ex_GetDistanceToSegment(point,point0_00,point1,(MethodInfo *)0x0),
     epsilon._wireEps < fVar15)) {
    arcOrigin_00.y = arcOrigin.y;
    arcOrigin_00.x = fVar10;
    arcOrigin_00.z = arcOrigin.z;
    ArcMath_ConvertToSh3DArcAngle
              (arcOrigin_00,arcStartPoint,arcPlaneNormal,degreesFromStart,(MethodInfo *)0x0);
    from.y = fVar3;
    from.x = point.z;
    from.z = fVar2;
    to.y = fVar6;
    to.x = fVar5;
    to.z = fVar4;
    fVar6 = Vector3Ex::Vector3Ex_SignedAngle(from,to,arcPlaneNormal,(MethodInfo *)0x0);
    fVar3 = _UNK_?;
    if (0.0 <= fVar6) {
      fVar3 = _UNK_?;
    }
    fVar2 = _UNK_?;
    if (fVar4 < 0.0) {
      fVar2 = _UNK_?;
    }
    if (((fVar3 != fVar2) ||
        ((float)((uint)fVar4 & _UNK_?) < (float)((uint)fVar6 & _UNK_?))) &&
       ((float)method_00 - arcPlaneNormal.z <= fVar14)) {
      return fVar14 <= arcPlaneNormal.z + (float)method_00;
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
  fVar1 = arcStartPoint.x - arcOrigin.x;
  fVar2 = arcStartPoint.y - arcOrigin.y;
  fVar3 = arcStartPoint.z - arcOrigin.z;
  fVar4 = point.x - arcOrigin.x;
  fVar5 = point.y - arcOrigin.y;
  fVar6 = (float10)func_?(&stack0xffffffcc,0);
  fVar7 = (float)fVar6;
  fVar6 = (float10)func_?(&stack0xffffffcc,0);
  fVar8 = (float)fVar6;
  pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                     ((Vector3 *)&stack0xffffffb8,arcPlaneNormal,(MethodInfo *)0x0);
  uVar10 = pVVar9->x;
  uVar11 = pVVar9->y;
  if (checkOnPlane != 0) {
    fVar4 = 0.0;
    plane.m_Distance =
         (float)((uint)(arcOrigin.y * (float)uVar11 + arcOrigin.x * (float)uVar10 +
                       arcOrigin.z * pVVar9->z) ^
                __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
    plane.m_Normal = *pVVar9;
    fVar12 = PlaneEx::PlaneEx_GetAbsDistanceToPoint(plane,point,(MethodInfo *)0x0);
    if (epsilon._extrudeEps < fVar12) {
      return 0;
    }
  }
  fVar12 = 0.0;
  from.y = fVar2;
  from.x = fVar1;
  from.z = fVar3;
  to.y = fVar5;
  to.x = fVar4;
  to.z = point.z - arcOrigin.z;
  fVar4 = Vector3Ex::Vector3Ex_SignedAngle(from,to,arcPlaneNormal,(MethodInfo *)0x0);
  fVar5 = _UNK_?;
  if (0.0 <= fVar4) {
    fVar5 = _UNK_?;
  }
  fVar13 = _UNK_?;
  if (degreesFromStart < 0.0) {
    fVar13 = _UNK_?;
  }
  if ((((fVar5 != fVar13) ||
       ((float)((uint)degreesFromStart & _UNK_?) < (float)((uint)fVar4 & _UNK_?))) ||
      (fVar7 < fVar8 - epsilon._wireEps)) || (epsilon._wireEps + fVar8 < fVar7)) {
    pQVar14 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_AngleAxis
                       ((Quaternion *)&stack0xffffff80,degreesFromStart,arcPlaneNormal,
                        (MethodInfo *)0x0);
    point_00.y = fVar2;
    point_00.x = fVar1;
    point_00.z = fVar3;
    pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                       ((Vector3 *)&stack0xffffffb8,*pQVar14,point_00,(MethodInfo *)0x0);
    uVar15 = pVVar9->x;
    uVar16 = pVVar9->y;
    fVar8 = fVar12 + (float)uVar15;
    fVar7 = arcOrigin.y + (float)uVar16;
    fVar3 = arcOrigin.z + pVVar9->z;
    auVar17._8_4_ = 0;
    auVar17._0_8_ = point._4_8_;
    point0_00.y = arcOrigin.y;
    point0_00.x = fVar12;
    point0_00.z = arcOrigin.z;
    fVar2 = Vector3Ex::Vector3Ex_GetDistanceToSegment
                       ((Vector3)(auVar17 << 0x20),point0_00,arcStartPoint,(MethodInfo *)0x0);
    if ((epsilon._wireEps < fVar2) &&
       (auVar18._8_4_ = 0, auVar18._0_8_ = point._4_8_, point0.y = arcOrigin.y, point0.x = fVar12,
       point0.z = arcOrigin.z, point1.y = fVar7, point1.x = fVar8, point1.z = fVar3,
       fVar7 = Vector3Ex::Vector3Ex_GetDistanceToSegment
                          ((Vector3)(auVar18 << 0x20),point0,point1,(MethodInfo *)0x0),
       epsilon._wireEps < fVar7)) {
      return 0;
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
    puVar13 = puVar12;
    fVar2 = arcOrigin.z;
    fVar6 = Vector3Ex::Vector3Ex_GetDistanceToSegment(point,point0,point1_00,(MethodInfo *)0x0);
    if ((epsilon._areaEps < fVar6) &&
       (point_01.y = (float)puVar13, point_01.x = point.x, point_01.z = point.z,
       point.x = arcOrigin.z, fVar14 = (float)puVar12, VVar9.x = angle,
       VVar9 = (Vector3)CONCAT84(VVar9._0_8_,VVar9.x), point1.y = fVar2, point1.x = (float)puVar13,
       point1.z = fVar3,
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
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__BoxMath);
    cRam_? = '\x01';
  }
  fVar1 = 0.0;
  *t = 0.0;
  UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
            ((Vector3 *)&stack0xffffffa4,arcPlaneNormal,(MethodInfo *)0x0);
  ray_00.m_Origin.y = ray.m_Origin.y;
  ray_00.m_Origin.x = ray.m_Origin.x;
  ray_00.m_Origin.z = ray.m_Origin.z;
  ray_00.m_Direction.x = ray.m_Direction.x;
  ray_00.m_Direction.y = ray.m_Direction.y;
  ray_00.m_Direction.z = ray.m_Direction.z;
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Plane::Plane_Raycast
                     ((Plane *)&stack0xffffffe8,ray_00,(float *)&stack0xfffffff8,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Ray::Ray_GetPoint
                        ((Vector3 *)&stack0xffffffa4,&ray,fVar1,(MethodInfo *)0x0);
    bVar2 = ArcMath_LgArcContains3DPoint
                       (*pVVar3,0,arcOrigin,arcStartPoint,arcPlaneNormal,degreesFromStart,epsilon,
                        (MethodInfo *)0x0);
    if (bVar2 != 0) {
      *t = fVar1;
      return 1;
    }
  }
  if ((epsilon._extrudeEps != 0.0) &&
     ((float)((uint)(ray.m_Direction.x * arcPlaneNormal.x + ray.m_Direction.y * arcPlaneNormal.y +
                    ray.m_Direction.z * arcPlaneNormal.z) & _UNK_?) < _UNK_?)) {
    pOVar4 = ArcMath_CalcLg3DArcOBB
                        ((OBB *)&stack0xffffff78,arcOrigin,arcStartPoint,arcPlaneNormal,
                         degreesFromStart,epsilon,(MethodInfo *)0x0);
    fVar5 = ray.m_Direction.z;
    fVar6 = ray.m_Direction.y;
    fVar7 = (pOVar4->_size).x;
    fVar8 = (pOVar4->_size).y;
    fVar9 = (pOVar4->_size).z;
    pVVar3 = &pOVar4->_center;
    fVar10 = pVVar3->x;
    fVar11 = (pOVar4->_center).y;
    uVar12 = pVVar3->x;
    uVar13 = pVVar3->y;
    boxCenter.y = (float)uVar13;
    boxCenter.x = (float)uVar12;
    fVar14 = (pOVar4->_center).z;
    fVar15 = (pOVar4->_rotation).x;
    fVar16 = (pOVar4->_rotation).y;
    uVar17 = (pOVar4->_rotation).z;
    fVar1 = (pOVar4->_rotation).w;
    fVar18 = ray.m_Origin.z;
    fVar19 = ray.m_Direction.x;
    if ((TypeInfo__RTG__BoxMath->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
      fVar18 = ray.m_Origin.z;
      fVar19 = ray.m_Direction.x;
    }
    ray.m_Origin.z = fVar14;
    ray.m_Direction.y = fVar8;
    ray.m_Direction.x = fVar7;
    ray_01.m_Origin.y = ray.m_Origin.y;
    ray_01.m_Origin.x = ray.m_Origin.x;
    ray_01.m_Origin.z = fVar18;
    ray_01.m_Direction.x = fVar19;
    ray_01.m_Direction.y = fVar6;
    ray_01.m_Direction.z = fVar5;
    boxCenter.z = ray.m_Origin.z;
    boxSize.y = ray.m_Direction.y;
    boxSize.x = ray.m_Direction.x;
    boxSize.z = fVar9;
    boxRotation.y = fVar16;
    boxRotation.x = fVar15;
    boxRotation.z = (float)uVar17;
    boxRotation.w = fVar1;
    ray.m_Origin.x = fVar10;
    ray.m_Origin.y = fVar11;
    ray.m_Direction.z = fVar9;
    bVar2 = BoxMath::BoxMath_Raycast
                       (ray_01,boxCenter,boxSize,boxRotation,(BoxEpsilon)ZEXT812(0),
                        (MethodInfo *)0x0);
    return bVar2;
  }
  return 0;
}


/* Boolean RaycastLgArcWire(Ray, Single ByRef, Vector3, Vector3, Vector3, Single, ArcEpsilon) */

bool Assembly-CSharp.dll::RTG::ArcMath::ArcMath_RaycastLgArcWire
               (Ray ray,float *t,Vector3 arcOrigin,Vector3 arcStartPoint,Vector3 arcPlaneNormal,
               float degreesFromStart,ArcEpsilon epsilon,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__BoxMath);
    cRam_? = '\x01';
  }
  fVar1 = 0.0;
  *t = 0.0;
  UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
            ((Vector3 *)&stack0xffffffa4,arcPlaneNormal,(MethodInfo *)0x0);
  ray_00.m_Origin.y = ray.m_Origin.y;
  ray_00.m_Origin.x = ray.m_Origin.x;
  ray_00.m_Origin.z = ray.m_Origin.z;
  ray_00.m_Direction.x = ray.m_Direction.x;
  ray_00.m_Direction.y = ray.m_Direction.y;
  ray_00.m_Direction.z = ray.m_Direction.z;
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Plane::Plane_Raycast
                     ((Plane *)&stack0xffffffe8,ray_00,(float *)&stack0xfffffff8,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Ray::Ray_GetPoint
                        ((Vector3 *)&stack0xffffffa4,&ray,fVar1,(MethodInfo *)0x0);
    bVar2 = ArcMath_Is3DPointOnLgArcWire
                       (*pVVar3,0,arcOrigin,arcStartPoint,arcPlaneNormal,degreesFromStart,epsilon,
                        (MethodInfo *)0x0);
    if (bVar2 != 0) {
      *t = fVar1;
      return 1;
    }
  }
  if ((epsilon._extrudeEps != 0.0) &&
     ((float)((uint)(ray.m_Direction.x * arcPlaneNormal.x + ray.m_Direction.y * arcPlaneNormal.y +
                    ray.m_Direction.z * arcPlaneNormal.z) & _UNK_?) < _UNK_?)) {
    pOVar4 = ArcMath_CalcLg3DArcOBB
                        ((OBB *)&stack0xffffff78,arcOrigin,arcStartPoint,arcPlaneNormal,
                         degreesFromStart,epsilon,(MethodInfo *)0x0);
    fVar5 = ray.m_Direction.z;
    fVar6 = ray.m_Direction.y;
    fVar7 = (pOVar4->_size).x;
    fVar8 = (pOVar4->_size).y;
    fVar9 = (pOVar4->_size).z;
    pVVar3 = &pOVar4->_center;
    fVar10 = pVVar3->x;
    fVar11 = (pOVar4->_center).y;
    uVar12 = pVVar3->x;
    uVar13 = pVVar3->y;
    boxCenter.y = (float)uVar13;
    boxCenter.x = (float)uVar12;
    fVar14 = (pOVar4->_center).z;
    fVar15 = (pOVar4->_rotation).x;
    fVar16 = (pOVar4->_rotation).y;
    uVar17 = (pOVar4->_rotation).z;
    fVar1 = (pOVar4->_rotation).w;
    fVar18 = ray.m_Origin.z;
    fVar19 = ray.m_Direction.x;
    if ((TypeInfo__RTG__BoxMath->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
      fVar18 = ray.m_Origin.z;
      fVar19 = ray.m_Direction.x;
    }
    ray.m_Origin.z = fVar14;
    ray.m_Direction.y = fVar8;
    ray.m_Direction.x = fVar7;
    ray_01.m_Origin.y = ray.m_Origin.y;
    ray_01.m_Origin.x = ray.m_Origin.x;
    ray_01.m_Origin.z = fVar18;
    ray_01.m_Direction.x = fVar19;
    ray_01.m_Direction.y = fVar6;
    ray_01.m_Direction.z = fVar5;
    boxCenter.z = ray.m_Origin.z;
    boxSize.y = ray.m_Direction.y;
    boxSize.x = ray.m_Direction.x;
    boxSize.z = fVar9;
    boxRotation.y = fVar16;
    boxRotation.x = fVar15;
    boxRotation.z = (float)uVar17;
    boxRotation.w = fVar1;
    ray.m_Origin.x = fVar10;
    ray.m_Origin.y = fVar11;
    ray.m_Direction.z = fVar9;
    bVar2 = BoxMath::BoxMath_Raycast
                       (ray_01,boxCenter,boxSize,boxRotation,(BoxEpsilon)ZEXT812(0),
                        (MethodInfo *)0x0);
    return bVar2;
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
  uStack_2._0_4_ = 0.0;
  uStack_2._4_4_ = 0.0;
  *t = 0.0;
  fVar3 = ArcMath_ConvertToSh3DArcAngle
                    (arcOrigin,arcStartPoint,arcPlaneNormal,degreesFromStart,(MethodInfo *)0x0);
  pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                     ((Vector3 *)&stack0xffffffa4,arcPlaneNormal,(MethodInfo *)0x0);
  uStack_2._0_4_ = pVVar4->x;
  uStack_2._4_4_ = pVVar4->y;
  ray_01.m_Origin.y = ray.m_Origin.y;
  ray_01.m_Origin.x = ray.m_Origin.x;
  ray_01.m_Origin.z = ray.m_Origin.z;
  ray_01.m_Direction.x = ray.m_Direction.x;
  ray_01.m_Direction.y = ray.m_Direction.y;
  ray_01.m_Direction.z = ray.m_Direction.z;
  bVar5 = UnityEngine.CoreModule.dll::UnityEngine::Plane::Plane_Raycast
                    ((Plane *)&uStack_2,ray_01,(float *)&stack0xfffffff8,(MethodInfo *)0x0);
  if (bVar5 != 0) {
    pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Ray::Ray_GetPoint
                       ((Vector3 *)&stack0xffffffa4,&ray,fVar1,(MethodInfo *)0x0);
    bVar5 = ArcMath_ShArcContains3DPoint
                      (*pVVar4,0,arcOrigin,arcStartPoint,arcPlaneNormal,fVar3,epsilon,
                       (MethodInfo *)0x0);
    if (bVar5 != 0) {
      *t = fVar1;
      return 1;
    }
  }
  if ((epsilon._extrudeEps != 0.0) &&
     ((float)((uint)(ray.m_Direction.x * arcPlaneNormal.x + ray.m_Direction.y * arcPlaneNormal.y +
                    ray.m_Direction.z * arcPlaneNormal.z) & _UNK_?) < _UNK_?)) {
    ray.m_Direction.y = arcPlaneNormal.z;
    ray.m_Origin.y = arcStartPoint.z;
    uStack_2._4_4_ = (float)&UNK_?;
    arcOrigin_00.z = 0.0;
    arcOrigin_00.x = (float)(int)epsilon._4_8_;
    arcOrigin_00.y = (float)(int)(epsilon._4_8_ >> 0x20);
    ray.m_Origin.x = arcStartPoint.y;
    ray.m_Origin.z = arcPlaneNormal.x;
    ray.m_Direction.x = arcPlaneNormal.y;
    ray.m_Direction.z = fVar3;
    pOVar6 = ArcMath_CalcSh3DArcOBB
                       ((OBB *)&stack0xffffff78,arcOrigin_00,arcStartPoint,arcPlaneNormal,fVar3,
                        epsilon,(MethodInfo *)0x0);
    fVar7 = ray.m_Direction.z;
    fVar1 = (pOVar6->_size).x;
    fVar8 = (pOVar6->_size).y;
    fVar9 = (pOVar6->_size).z;
    fVar10 = (pOVar6->_center).x;
    fVar11 = (pOVar6->_center).y;
    fVar12 = (pOVar6->_center).z;
    fVar13 = (pOVar6->_rotation).x;
    fVar14 = (pOVar6->_rotation).y;
    uVar15 = (pOVar6->_rotation).z;
    fVar3 = (pOVar6->_rotation).w;
    uStack_2._0_4_ = ray.m_Origin.x;
    uStack_2._4_4_ = ray.m_Origin.y;
    fVar16 = ray.m_Origin.z;
    fVar17 = ray.m_Direction.x;
    if ((TypeInfo__RTG__BoxMath->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    ray.m_Direction.z = (float)uStack_2;
    ray.m_Direction.y = (float)&UNK_?;
    ray_00.m_Origin.y = uStack_2._4_4_;
    ray_00.m_Origin.x = (float)uStack_2;
    ray_00.m_Origin.z = fVar16;
    ray_00.m_Direction.x = fVar17;
    ray_00.m_Direction.y = fVar17;
    ray_00.m_Direction.z = fVar7;
    boxCenter.y = fVar11;
    boxCenter.x = fVar10;
    boxCenter.z = fVar12;
    boxSize.y = fVar8;
    boxSize.x = fVar1;
    boxSize.z = fVar9;
    boxRotation.y = fVar14;
    boxRotation.x = fVar13;
    boxRotation.z = (float)uVar15;
    boxRotation.w = fVar3;
    bVar5 = BoxMath::BoxMath_Raycast
                      (ray_00,boxCenter,boxSize,boxRotation,(BoxEpsilon)ZEXT812(0),(MethodInfo *)0x0
                      );
    return bVar5;
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
  uStack_2._0_4_ = 0.0;
  uStack_2._4_4_ = 0.0;
  *t = 0.0;
  fVar3 = ArcMath_ConvertToSh3DArcAngle
                    (arcOrigin,arcStartPoint,arcPlaneNormal,degreesFromStart,(MethodInfo *)0x0);
  pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                     ((Vector3 *)&stack0xffffffa4,arcPlaneNormal,(MethodInfo *)0x0);
  uStack_2._0_4_ = pVVar4->x;
  uStack_2._4_4_ = pVVar4->y;
  ray_01.m_Origin.y = ray.m_Origin.y;
  ray_01.m_Origin.x = ray.m_Origin.x;
  ray_01.m_Origin.z = ray.m_Origin.z;
  ray_01.m_Direction.x = ray.m_Direction.x;
  ray_01.m_Direction.y = ray.m_Direction.y;
  ray_01.m_Direction.z = ray.m_Direction.z;
  bVar5 = UnityEngine.CoreModule.dll::UnityEngine::Plane::Plane_Raycast
                    ((Plane *)&uStack_2,ray_01,(float *)&stack0xfffffff8,(MethodInfo *)0x0);
  if (bVar5 != 0) {
    pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Ray::Ray_GetPoint
                       ((Vector3 *)&stack0xffffffa4,&ray,fVar1,(MethodInfo *)0x0);
    bVar5 = ArcMath_Is3DPointOnShArcWire
                      (*pVVar4,0,arcOrigin,arcStartPoint,arcPlaneNormal,fVar3,epsilon,
                       (MethodInfo *)0x0);
    if (bVar5 != 0) {
      *t = fVar1;
      return 1;
    }
  }
  if ((epsilon._extrudeEps != 0.0) &&
     ((float)((uint)(ray.m_Direction.x * arcPlaneNormal.x + ray.m_Direction.y * arcPlaneNormal.y +
                    ray.m_Direction.z * arcPlaneNormal.z) & _UNK_?) < _UNK_?)) {
    ray.m_Direction.y = arcPlaneNormal.z;
    ray.m_Origin.y = arcStartPoint.z;
    uStack_2._4_4_ = (float)&UNK_?;
    arcOrigin_00.z = 0.0;
    arcOrigin_00.x = (float)(int)epsilon._4_8_;
    arcOrigin_00.y = (float)(int)(epsilon._4_8_ >> 0x20);
    ray.m_Origin.x = arcStartPoint.y;
    ray.m_Origin.z = arcPlaneNormal.x;
    ray.m_Direction.x = arcPlaneNormal.y;
    ray.m_Direction.z = fVar3;
    pOVar6 = ArcMath_CalcSh3DArcOBB
                       ((OBB *)&stack0xffffff78,arcOrigin_00,arcStartPoint,arcPlaneNormal,fVar3,
                        epsilon,(MethodInfo *)0x0);
    fVar7 = ray.m_Direction.z;
    fVar1 = (pOVar6->_size).x;
    fVar8 = (pOVar6->_size).y;
    fVar9 = (pOVar6->_size).z;
    fVar10 = (pOVar6->_center).x;
    fVar11 = (pOVar6->_center).y;
    fVar12 = (pOVar6->_center).z;
    fVar13 = (pOVar6->_rotation).x;
    fVar14 = (pOVar6->_rotation).y;
    uVar15 = (pOVar6->_rotation).z;
    fVar3 = (pOVar6->_rotation).w;
    uStack_2._0_4_ = ray.m_Origin.x;
    uStack_2._4_4_ = ray.m_Origin.y;
    fVar16 = ray.m_Origin.z;
    fVar17 = ray.m_Direction.x;
    if ((TypeInfo__RTG__BoxMath->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    ray.m_Direction.z = (float)uStack_2;
    ray.m_Direction.y = (float)&UNK_?;
    ray_00.m_Origin.y = uStack_2._4_4_;
    ray_00.m_Origin.x = (float)uStack_2;
    ray_00.m_Origin.z = fVar16;
    ray_00.m_Direction.x = fVar17;
    ray_00.m_Direction.y = fVar17;
    ray_00.m_Direction.z = fVar7;
    boxCenter.y = fVar11;
    boxCenter.x = fVar10;
    boxCenter.z = fVar12;
    boxSize.y = fVar8;
    boxSize.x = fVar1;
    boxSize.z = fVar9;
    boxRotation.y = fVar14;
    boxRotation.x = fVar13;
    boxRotation.z = (float)uVar15;
    boxRotation.w = fVar3;
    bVar5 = BoxMath::BoxMath_Raycast
                      (ray_00,boxCenter,boxSize,boxRotation,(BoxEpsilon)ZEXT812(0),(MethodInfo *)0x0
                      );
    return bVar5;
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
  fVar1 = arcStartPoint.x - arcOrigin.x;
  fVar2 = arcStartPoint.y - arcOrigin.y;
  fVar3 = arcStartPoint.z - arcOrigin.z;
  fVar4 = point.z - arcOrigin.z;
  fVar5 = point.x - arcOrigin.x;
  fVar6 = point.y - arcOrigin.y;
  fVar7 = (float10)func_?(&stack0xffffffd0,0);
  fVar8 = epsilon._areaEps + (float)fVar7;
  fVar7 = (float10)func_?(&stack0xffffffc4,0);
  if ((float)fVar7 <= fVar8) {
    pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                       ((Vector3 *)&puStack_10,arcPlaneNormal,(MethodInfo *)0x0);
    uVar11 = pVVar9->x;
    uVar12 = pVVar9->y;
    if (checkOnPlane != 0) {
      fVar5 = 0.0;
      plane.m_Distance =
           (float)((uint)(arcOrigin.y * (float)uVar12 + arcOrigin.x * (float)uVar11 +
                         arcOrigin.z * pVVar9->z) ^
                  __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
      plane.m_Normal = *pVVar9;
      fVar8 = PlaneEx::PlaneEx_GetAbsDistanceToPoint(plane,point,(MethodInfo *)0x0);
      if (epsilon._extrudeEps < fVar8) {
        return 0;
      }
    }
    VVar13.y = fVar2;
    VVar13.x = fVar1;
    VVar13.z = fVar3;
    to.y = fVar6;
    to.x = fVar5;
    to.z = fVar4;
    fVar6 = Vector3Ex::Vector3Ex_SignedAngle(VVar13,to,arcPlaneNormal,(MethodInfo *)0x0);
    fVar8 = _UNK_?;
    if (0.0 <= fVar6) {
      fVar8 = _UNK_?;
    }
    fVar5 = _UNK_?;
    if (degreesFromStart < 0.0) {
      fVar5 = _UNK_?;
    }
    if ((fVar8 == fVar5) &&
       ((float)((uint)fVar6 & _UNK_?) <= (float)((uint)degreesFromStart & _UNK_?))) {
      return 1;
    }
    if (epsilon._areaEps != 0.0) {
      pQVar14 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_AngleAxis
                         ((Quaternion *)&stack0xffffff70,degreesFromStart,arcPlaneNormal,
                          (MethodInfo *)0x0);
      point_00.y = fVar2;
      point_00.x = fVar1;
      point_00.z = fVar3;
      UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                ((Vector3 *)&puStack_10,*pQVar14,point_00,(MethodInfo *)0x0);
      point0_00.y = arcOrigin.y;
      point0_00.x = fVar4;
      point0_00.z = arcOrigin.z;
      fVar3 = point.z;
      fVar8 = Vector3Ex::Vector3Ex_GetDistanceToSegment
                        (point,point0_00,arcStartPoint,(MethodInfo *)0x0);
      if (fVar8 <= epsilon._areaEps) {
        return 1;
      }
      stack0xfffffffc = arcOrigin.y;
      fStack_15 = fVar4;
      VVar13.z = point.z;
      VVar13 = (Vector3)CONCAT48(VVar13.z,uVar16);
      point0.y = arcOrigin.y;
      point0.x = fVar4;
      point0.z = arcOrigin.z;
      point1.y = point.y;
      point1.x = point.x;
      point1.z = fVar3;
      fVar3 = Vector3Ex::Vector3Ex_GetDistanceToSegment(VVar13,point0,point1,(MethodInfo *)0x0);
      if (fVar3 <= epsilon._areaEps) {
        return 1;
      }
    }
  }
  return 0;
}

