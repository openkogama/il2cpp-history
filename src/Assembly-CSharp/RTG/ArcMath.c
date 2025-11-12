
/* OBB CalcLg3DArcOBB(Vector3, Vector3, Vector3, Single, ArcEpsilon) */

OBB * Assembly-CSharp.dll::RTG::ArcMath::ArcMath_CalcLg3DArcOBB
                (OBB *__return_storage_ptr__,Vector3 *arcOrigin,Vector3 *arcStartPoint,
                Vector3 *arcPlaneNormal,float degreesFromStart,ArcEpsilon *epsilon,
                MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Math);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  OStack_1._41_3_ = 0;
  if (*(int *)&(TypeInfo__System__Math->_1).field_0x1c == 0) {
    FUN_?();
  }
  if ((float)((uint)degreesFromStart & _UNK_?) <= _UNK_?) {
    AStack_2._areaEps = epsilon->_areaEps;
    AStack_2._extrudeEps = epsilon->_extrudeEps;
    AStack_2._wireEps = epsilon->_wireEps;
    AStack_3._wireEps = arcPlaneNormal->z;
    AStack_3._areaEps = arcPlaneNormal->x;
    AStack_3._extrudeEps = arcPlaneNormal->y;
    aVStack_4[0].z = arcStartPoint->z;
    aVStack_4[0].x = arcStartPoint->x;
    aVStack_4[0].y = arcStartPoint->y;
    uStack_5 = CONCAT44(uStack_5._4_4_,arcOrigin->z);
    auStack_6._0_4_ = arcOrigin->x;
    auStack_6._4_4_ = arcOrigin->y;
    pOVar7 = ArcMath_CalcSh3DArcOBB
                        (&OStack_1,(Vector3 *)auStack_6,aVStack_4,(Vector3 *)&AStack_3,
                         degreesFromStart,&AStack_2,(MethodInfo *)0x0);
    fVar8 = (pOVar7->_size).y;
    uVar9 = *(undefined8 *)&(pOVar7->_size).z;
    fVar10 = (pOVar7->_center).y;
    fVar11 = (pOVar7->_center).z;
    fVar12 = (pOVar7->_rotation).x;
    fVar13 = (pOVar7->_rotation).y;
    (__return_storage_ptr__->_size).x = (pOVar7->_size).x;
    (__return_storage_ptr__->_size).y = fVar8;
    *(undefined8 *)&(__return_storage_ptr__->_size).z = uVar9;
    fVar8 = (pOVar7->_rotation).z;
    fVar14 = (pOVar7->_rotation).w;
    bVar15 = pOVar7->_isValid;
    uVar16 = *(undefined3 *)&pOVar7->field_0x29;
    (__return_storage_ptr__->_center).y = fVar10;
    (__return_storage_ptr__->_center).z = fVar11;
    (__return_storage_ptr__->_rotation).x = fVar12;
    (__return_storage_ptr__->_rotation).y = fVar13;
    (__return_storage_ptr__->_rotation).z = fVar8;
    (__return_storage_ptr__->_rotation).w = fVar14;
    __return_storage_ptr__->_isValid = bVar15;
    *(undefined3 *)&__return_storage_ptr__->field_0x29 = uVar16;
  }
  else {
    uVar17 = arcStartPoint->x;
    uVar18 = arcStartPoint->y;
    uVar19 = arcOrigin->x;
    uVar20 = arcOrigin->y;
    fVar10 = (float)uVar17 - (float)uVar19;
    fStack_21 = arcStartPoint->z - arcOrigin->z;
    fVar8 = (float)uVar18 - (float)uVar20;
    AStack_2._areaEps = arcPlaneNormal->x;
    AStack_2._extrudeEps = arcPlaneNormal->y;
    AStack_2._wireEps = arcPlaneNormal->z;
    auStack_6._0_4_ = 0.0;
    auStack_6._4_4_ = 0.0;
    uStack_5 = 0;
    pcVar22 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar22 = (code *)FUN_?(&UNK_?), pcVar22 == (code *)0x0)) {
      uVar9 = func_?(&UNK_?);
      FUN_?(uVar9,0);
      pcVar22 = (code *)swi(3);
      pOVar7 = (OBB *)(*pcVar22)();
      return pOVar7;
    }
    pcRam_? = pcVar22;
    (*pcRam_?)();
    fVar11 = _UNK_?;
    fVar12 = (float)uStack_5 + (float)uStack_5;
    fVar14 = (float)auStack_6._4_4_ + (float)auStack_6._4_4_;
    fVar23 = (float)auStack_6._0_4_ * ((float)auStack_6._0_4_ + (float)auStack_6._0_4_);
    fStack_24 = (float)auStack_6._0_4_ * fVar12;
    fVar25 = (float)auStack_6._4_4_ * fVar14;
    fVar26 = uStack_5._4_4_ * ((float)auStack_6._0_4_ + (float)auStack_6._0_4_);
    fVar27 = (float)auStack_6._0_4_ * fVar14;
    fVar28 = (float)auStack_6._4_4_ * fVar12;
    auStack_6._0_4_ = arcOrigin->x;
    auStack_6._4_4_ = arcOrigin->y;
    uVar29 = arcStartPoint->x;
    uVar30 = arcStartPoint->y;
    fVar13 = (((_UNK_? - ((float)uStack_5 * fVar12 + fVar25)) * fVar10 +
               (fVar27 - uStack_5._4_4_ * fVar12) * fVar8 +
               (uStack_5._4_4_ * fVar14 + fStack_24) * fStack_21 + (float)auStack_6._0_4_) -
             (float)uVar29) * _UNK_? + (float)uVar29;
    fVar27 = (((_UNK_? - ((float)uStack_5 * fVar12 + fVar23)) * fVar8 +
               (uStack_5._4_4_ * fVar12 + fVar27) * fVar10 + (fVar28 - fVar26) * fStack_21 +
              (float)auStack_6._4_4_) - (float)uVar30) * _UNK_? + (float)uVar30;
    fVar12 = (((fStack_24 - uStack_5._4_4_ * fVar14) * fVar10 + (fVar26 + fVar28) * fVar8 +
               (_UNK_? - (fVar25 + fVar23)) * fStack_21 + arcOrigin->z) - arcStartPoint->z)
             * _UNK_? + arcStartPoint->z;
    fVar14 = fVar13 - (float)auStack_6._0_4_;
    fVar8 = fVar12 - arcOrigin->z;
    fVar26 = fVar27 - (float)auStack_6._4_4_;
    AStack_2._extrudeEps = fVar26;
    AStack_2._areaEps = fVar14;
    AStack_2._wireEps = fVar8;
    AStack_3._0_8_ = AStack_2._0_8_;
    AStack_3._wireEps = fVar8;
    fVar10 = (float)FUN_?(&AStack_3);
    if (_UNK_? < fVar10) {
      fVar25 = fVar8 / fVar10;
      uVar9 = CONCAT44(fVar26 / fVar10,fVar14 / fVar10);
    }
    else {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Vector3);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pVVar31 = TypeInfo__UnityEngine__Vector3->static_fields;
      uVar9._0_4_ = (pVVar31->zeroVector).x;
      uVar9._4_4_ = (pVVar31->zeroVector).y;
      fVar25 = (pVVar31->zeroVector).z;
    }
    fVar10 = epsilon->_areaEps;
    AStack_3._areaEps = (float)uVar9;
    fVar32 = fVar10 * AStack_3._areaEps;
    AStack_3._extrudeEps = (float)((ulonglong)uVar9 >> 0x20);
    fVar33 = fVar10 * AStack_3._extrudeEps;
    uVar34 = arcOrigin->x;
    uVar35 = arcOrigin->y;
    auStack_6._0_4_ = arcStartPoint->x;
    auStack_6._4_4_ = arcStartPoint->y;
    AStack_3._wireEps = arcOrigin->z - arcStartPoint->z;
    AStack_3._extrudeEps = (float)uVar35 - (float)auStack_6._4_4_;
    AStack_3._areaEps = (float)uVar34 - (float)auStack_6._0_4_;
    fVar28 = (float)FUN_?(&AStack_3);
    fVar23 = epsilon->_areaEps;
    fVar36 = (float)FUN_?(&AStack_2);
    uVar9 = AStack_2._0_8_;
    fVar36 = fVar36 + fVar28 + fVar23 + fVar23;
    AStack_2._wireEps = fVar8;
    fVar23 = (float)FUN_?(&AStack_2);
    if (_UNK_? < fVar23) {
      AStack_2._areaEps = fVar14 / fVar23;
      AStack_2._wireEps = fVar8 / fVar23;
      AStack_2._extrudeEps = fVar26 / fVar23;
    }
    else {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Vector3);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pVVar31 = TypeInfo__UnityEngine__Vector3->static_fields;
      AStack_2._areaEps = (pVVar31->zeroVector).x;
      AStack_2._extrudeEps = (pVVar31->zeroVector).y;
      AStack_2._wireEps = (pVVar31->zeroVector).z;
    }
    AStack_3._areaEps = arcPlaneNormal->x;
    AStack_3._extrudeEps = arcPlaneNormal->y;
    AStack_3._wireEps = arcPlaneNormal->z;
    auStack_6._0_4_ = 0.0;
    auStack_6._4_4_ = 0.0;
    uStack_5 = 0;
    pcVar22 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar22 = (code *)FUN_?(&UNK_?), pcVar22 == (code *)0x0)) {
      uVar9 = func_?(&UNK_?);
      FUN_?(uVar9,0);
      pcVar22 = (code *)swi(3);
      pOVar7 = (OBB *)(*pcVar22)();
      return pOVar7;
    }
    pcRam_? = pcVar22;
    (*pcRam_?)(&AStack_2,&AStack_3,auStack_6);
    AStack_2._0_8_ = uVar9;
    AStack_2._wireEps = fVar8;
    fVar23 = (float)FUN_?(&AStack_2);
    if (_UNK_? < fVar23) {
      fVar8 = fVar8 / fVar23;
      AStack_2._extrudeEps = fVar26 / fVar23;
      AStack_2._areaEps = fVar14 / fVar23;
    }
    else {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Vector3);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pVVar31 = TypeInfo__UnityEngine__Vector3->static_fields;
      AStack_2._areaEps = (pVVar31->zeroVector).x;
      AStack_2._extrudeEps = (pVVar31->zeroVector).y;
      fVar8 = (pVVar31->zeroVector).z;
    }
    OStack_1._center.x = (fVar32 + fVar13) - AStack_2._areaEps * fVar36 * fVar11;
    OStack_1._center.y = (fVar33 + fVar27) - AStack_2._extrudeEps * fVar36 * fVar11;
    OStack_1._center.z = (fVar10 * fVar25 + fVar12) - fVar8 * fVar36 * fVar11;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    fVar28 = fVar28 + epsilon->_areaEps;
    fVar8 = epsilon->_extrudeEps;
    (__return_storage_ptr__->_size).x = fVar28 + fVar28;
    (__return_storage_ptr__->_size).y = fVar8 + fVar8;
    (__return_storage_ptr__->_size).z = fVar36;
    (__return_storage_ptr__->_center).x = OStack_1._center.x;
    (__return_storage_ptr__->_center).y = OStack_1._center.y;
    (__return_storage_ptr__->_center).z = OStack_1._center.z;
    (__return_storage_ptr__->_rotation).x = (float)auStack_6._0_4_;
    (__return_storage_ptr__->_rotation).y = (float)auStack_6._4_4_;
    (__return_storage_ptr__->_rotation).z = (float)uStack_5;
    (__return_storage_ptr__->_rotation).w = uStack_5._4_4_;
    __return_storage_ptr__->_isValid = 1;
    *(undefined3 *)&__return_storage_ptr__->field_0x29 = OStack_1._41_3_;
  }
  return __return_storage_ptr__;
}


/* OBB CalcSh3DArcOBB(Vector3, Vector3, Vector3, Single, ArcEpsilon) */

OBB * Assembly-CSharp.dll::RTG::ArcMath::ArcMath_CalcSh3DArcOBB
                (OBB *__return_storage_ptr__,Vector3 *arcOrigin,Vector3 *arcStartPoint,
                Vector3 *arcPlaneNormal,float degreesFromStart,ArcEpsilon *epsilon,
                MethodInfo *method)

{
  (__return_storage_ptr__->_size).x = 0.0;
  (__return_storage_ptr__->_size).y = 0.0;
  *(undefined8 *)&(__return_storage_ptr__->_size).z = 0;
  (__return_storage_ptr__->_center).y = 0.0;
  (__return_storage_ptr__->_center).z = 0.0;
  (__return_storage_ptr__->_rotation).x = 0.0;
  (__return_storage_ptr__->_rotation).y = 0.0;
  VStack_1.x = arcPlaneNormal->x;
  VStack_1.y = arcPlaneNormal->y;
  (__return_storage_ptr__->_rotation).z = 0.0;
  (__return_storage_ptr__->_rotation).w = 0.0;
  *(undefined4 *)&__return_storage_ptr__->_isValid = 0;
  VStack_1.z = arcPlaneNormal->z;
  VStack_2.x = arcStartPoint->x;
  VStack_2.y = arcStartPoint->y;
  VStack_2.z = arcStartPoint->z;
  VStack_3.z = arcOrigin->z;
  VStack_3.x = arcOrigin->x;
  VStack_3.y = arcOrigin->y;
  ArcMath_ConvertToSh3DArcAngle
            (&VStack_3,&VStack_2,&VStack_1,degreesFromStart,(MethodInfo *)0x0);
  fVar4 = _UNK_?;
  uVar5 = arcStartPoint->x;
  uVar6 = arcStartPoint->y;
  uVar7 = arcOrigin->x;
  uVar8 = arcOrigin->y;
  fVar9 = (float)uVar5 - (float)uVar7;
  fVar10 = arcStartPoint->z - arcOrigin->z;
  fVar11 = (float)uVar6 - (float)uVar8;
  VStack_3.x = arcPlaneNormal->x;
  VStack_3.y = arcPlaneNormal->y;
  VStack_3.z = arcPlaneNormal->z;
  uStack_12 = 0;
  uStack_13 = 0;
  pcVar14 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar14 = (code *)FUN_?(&UNK_?), pcVar14 == (code *)0x0)) {
    uVar15 = func_?(&UNK_?);
    FUN_?(uVar15,0);
    pcVar14 = (code *)swi(3);
    pOVar16 = (OBB *)(*pcVar14)();
    return pOVar16;
  }
  pcRam_? = pcVar14;
  (*pcRam_?)();
  fVar17 = (float)uStack_13 + (float)uStack_13;
  fVar18 = uStack_12._4_4_ + uStack_12._4_4_;
  fVar19 = ((float)uStack_12 + (float)uStack_12) * (float)uStack_12;
  fVar20 = ((float)uStack_12 + (float)uStack_12) * uStack_13._4_4_;
  fVar21 = (_UNK_? - (fVar17 * (float)uStack_13 + fVar18 * uStack_12._4_4_)) * fVar9 +
           (fVar18 * (float)uStack_12 - fVar17 * uStack_13._4_4_) * fVar11 +
           (fVar18 * uStack_13._4_4_ + fVar17 * (float)uStack_12) * fVar10;
  fVar22 = (_UNK_? - (fVar17 * (float)uStack_13 + fVar19)) * fVar11 +
           (fVar17 * uStack_13._4_4_ + fVar18 * (float)uStack_12) * fVar9 +
           (fVar17 * uStack_12._4_4_ - fVar20) * fVar10;
  fVar19 = (fVar20 + fVar17 * uStack_12._4_4_) * fVar11 +
           (fVar17 * (float)uStack_12 - fVar18 * uStack_13._4_4_) * fVar9 +
           (_UNK_? - (fVar18 * uStack_12._4_4_ + fVar19)) * fVar10;
  uVar23 = arcOrigin->x;
  uVar24 = arcOrigin->y;
  uStack_12 = CONCAT44((float)uVar24 + fVar22,(float)uVar23 + fVar21);
  VStack_3.y = fVar22;
  VStack_3.x = fVar21;
  uStack_13 = CONCAT44(uStack_13._4_4_,arcOrigin->z + fVar19);
  VStack_3.z = fVar19;
  fVar17 = (float)FUN_?(&VStack_3);
  if (_UNK_? < fVar17) {
    VStack_1.x = fVar21 / fVar17;
    VStack_2.z = fVar19 / fVar17;
    VStack_1.y = fVar22 / fVar17;
  }
  else {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pVVar25 = TypeInfo__UnityEngine__Vector3->static_fields;
    VStack_1.x = (pVVar25->zeroVector).x;
    VStack_1.y = (pVVar25->zeroVector).y;
    VStack_2.z = (pVVar25->zeroVector).z;
  }
  VStack_3.x = arcPlaneNormal->x;
  VStack_3.y = arcPlaneNormal->y;
  VStack_3.z = arcPlaneNormal->z;
  uStack_26 = 0;
  uStack_27 = 0;
  pcVar14 = pcRam_?;
  VStack_2._0_8_ = VStack_1._0_8_;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar14 = (code *)FUN_?(&UNK_?), pcVar14 == (code *)0x0)) {
    uVar15 = func_?(&UNK_?);
    FUN_?(uVar15,0);
    pcVar14 = (code *)swi(3);
    pOVar16 = (OBB *)(*pcVar14)();
    return pOVar16;
  }
  pcRam_? = pcVar14;
  (*pcRam_?)(&VStack_2,&VStack_3,&uStack_26);
  VStack_1.x = arcOrigin->x;
  VStack_1.y = arcOrigin->y;
  bVar28 = cRam_? == '\0';
  fVar17 = arcOrigin->z;
  (__return_storage_ptr__->_center).x = fVar21 * fVar4 + VStack_1.x;
  (__return_storage_ptr__->_center).y = fVar22 * fVar4 + VStack_1.y;
  (__return_storage_ptr__->_center).z = fVar19 * fVar4 + fVar17;
  if (bVar28) {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar25 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar4 = (pVVar25->zeroVector).z;
  fVar17 = (pVVar25->zeroVector).y;
  (__return_storage_ptr__->_size).x = (pVVar25->zeroVector).x;
  (__return_storage_ptr__->_size).y = fVar17;
  (__return_storage_ptr__->_size).z = fVar4;
  VStack_1.z = arcPlaneNormal->z;
  (__return_storage_ptr__->_rotation).x = (float)(undefined4)uStack_26;
  (__return_storage_ptr__->_rotation).y = (float)uStack_26._4_4_;
  (__return_storage_ptr__->_rotation).z = (float)(undefined4)uStack_27;
  pcVar14 = pcRam_?;
  (__return_storage_ptr__->_rotation).w = (float)uStack_27._4_4_;
  VStack_1.x = arcPlaneNormal->x;
  VStack_1.y = arcPlaneNormal->y;
  __return_storage_ptr__->_isValid = 1;
  uStack_29 = 0;
  uStack_30 = 0;
  pcVar31 = pcRam_?;
  if ((pcVar14 == (code *)0x0) &&
     (pcVar14 = (code *)FUN_?(&UNK_?), pcVar31 = pcVar14, pcVar14 == (code *)0x0)) {
    uVar15 = func_?(&UNK_?);
    FUN_?(uVar15,0);
    pcVar14 = (code *)swi(3);
    pOVar16 = (OBB *)(*pcVar14)();
    return pOVar16;
  }
  pcRam_? = pcVar31;
  (*pcVar14)();
  fVar32 = (float)uStack_30 + (float)uStack_30;
  fVar33 = uStack_29._4_4_ + uStack_29._4_4_;
  fVar34 = ((float)uStack_29 + (float)uStack_29) * (float)uStack_29;
  fVar20 = fVar32 * (float)uStack_30;
  fVar18 = ((float)uStack_29 + (float)uStack_29) * uStack_30._4_4_;
  fVar35 = fVar33 * uStack_29._4_4_;
  fVar21 = fVar33 * (float)uStack_29;
  fVar36 = fVar32 * (float)uStack_29;
  fVar22 = fVar32 * uStack_29._4_4_;
  fVar33 = fVar33 * uStack_30._4_4_;
  fVar32 = fVar32 * uStack_30._4_4_;
  fVar19 = epsilon->_areaEps + epsilon->_areaEps;
  pVVar37 = OBB::OBB_get_Right(&VStack_3,__return_storage_ptr__,(MethodInfo *)0x0);
  uVar38 = pVVar37->x;
  uVar39 = pVVar37->y;
  fVar17 = pVVar37->z;
  pVVar37 = OBB::OBB_get_Right(&VStack_3,__return_storage_ptr__,(MethodInfo *)0x0);
  uVar40 = pVVar37->x;
  uVar41 = pVVar37->y;
  fVar4 = epsilon->_extrudeEps;
  fVar17 = (float)((uint)(((_UNK_? - (fVar20 + fVar34)) * fVar11 +
                           (fVar32 + fVar21) * fVar9 + (fVar22 - fVar18) * fVar10) * (float)uVar39 +
                          ((_UNK_? - (fVar20 + fVar35)) * fVar9 +
                           (fVar21 - fVar32) * fVar11 + (fVar33 + fVar36) * fVar10) * (float)uVar38 +
                         ((fVar18 + fVar22) * fVar11 + (fVar36 - fVar33) * fVar9 +
                         (_UNK_? - (fVar35 + fVar34)) * fVar10) * fVar17) & _UNK_?);
  fVar9 = (float)((uint)((float)uVar41 * fVar11 + (float)uVar40 * fVar9 + pVVar37->z * fVar10) &
                  _UNK_?);
  fVar10 = (float)FUN_?(&uStack_12);
  (__return_storage_ptr__->_size).x = fVar17 + fVar9 + fVar19;
  (__return_storage_ptr__->_size).y = fVar4 + fVar4;
  (__return_storage_ptr__->_size).z = fVar10 + fVar19;
  return __return_storage_ptr__;
}


/* Single ConvertToSh2DArcAngle(Vector2, Vector2, Single) */

float Assembly-CSharp.dll::RTG::ArcMath::ArcMath_ConvertToSh2DArcAngle
                (Vector2 arcOrigin,Vector2 arcStartPoint,float degreesFromStart,MethodInfo *method)

{
  fVar1 = (float)FUN_?(degreesFromStart,_UNK_?,in_R8,method,arcStartPoint,arcOrigin)
  ;
  if (_UNK_? < (float)((uint)fVar1 & _UNK_?)) {
    fVar2 = arcStartPoint.x - arcOrigin.x;
    fVar3 = arcStartPoint.y - arcOrigin.y;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pVVar4 = TypeInfo__UnityEngine__Vector3->static_fields;
    VStack_5.x = (pVVar4->forwardVector).x;
    VStack_5.y = (pVVar4->forwardVector).y;
    VStack_5.z = (pVVar4->forwardVector).z;
    auStack_6._0_4_ = 0.0;
    auStack_6._4_4_ = 0.0;
    uStack_7 = 0;
    pcVar8 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
      uVar9 = func_?(&UNK_?);
      FUN_?(uVar9,0);
      pcVar8 = (code *)swi(3);
      fVar1 = (float)(*pcVar8)();
      return fVar1;
    }
    pcRam_? = pcVar8;
    (*pcRam_?)(fVar1,&VStack_5,auStack_6);
    fVar10 = (float)auStack_6._4_4_ + (float)auStack_6._4_4_;
    fVar1 = (float)uStack_7 + (float)uStack_7;
    fVar11 = uStack_7._4_4_ * ((float)auStack_6._0_4_ + (float)auStack_6._0_4_);
    fVar12 = (float)auStack_6._0_4_ * ((float)auStack_6._0_4_ + (float)auStack_6._0_4_);
    fVar13 = (_UNK_? - ((float)uStack_7 * fVar1 + (float)auStack_6._4_4_ * fVar10)) * fVar2
             + ((float)auStack_6._0_4_ * fVar10 - uStack_7._4_4_ * fVar1) * fVar3 +
             (uStack_7._4_4_ * fVar10 + (float)auStack_6._0_4_ * fVar1) * _UNK_?;
    fVar14 = (_UNK_? - ((float)uStack_7 * fVar1 + fVar12)) * fVar3 +
             (uStack_7._4_4_ * fVar1 + (float)auStack_6._0_4_ * fVar10) * fVar2 +
             ((float)auStack_6._4_4_ * fVar1 - fVar11) * _UNK_?;
    fVar10 = ((float)auStack_6._0_4_ * fVar1 - uStack_7._4_4_ * fVar10) * fVar2 +
            (fVar11 + (float)auStack_6._4_4_ * fVar1) * fVar3 +
            (_UNK_? - ((float)auStack_6._4_4_ * fVar10 + fVar12)) * 0.0;
    VStack_5.y = fVar14;
    VStack_5.x = fVar13;
    VStack_5.z = fVar10;
    fVar1 = (float)FUN_?(&VStack_5);
    if (_UNK_? < fVar1) {
      VStack_5.z = fVar10 / fVar1;
      VStack_5.y = fVar14 / fVar1;
      VStack_5.x = fVar13 / fVar1;
    }
    else {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Vector3);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pVVar4 = TypeInfo__UnityEngine__Vector3->static_fields;
      VStack_5.x = (pVVar4->zeroVector).x;
      VStack_5.y = (pVVar4->zeroVector).y;
      VStack_5.z = (pVVar4->zeroVector).z;
    }
    fVar1 = VStack_5.y;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    VStack_5.z = 0.0;
    uStack_7 = uStack_7 & 0xffffffff00000000;
    pVVar4 = TypeInfo__UnityEngine__Vector3->static_fields;
    VStack_15.x = (pVVar4->forwardVector).x;
    VStack_15.y = (pVVar4->forwardVector).y;
    VStack_15.z = (pVVar4->forwardVector).z;
    VStack_5.y = fVar1;
    auStack_6._4_4_ = fVar3;
    auStack_6._0_4_ = fVar2;
    fVar1 = Vector3Ex::Vector3Ex_SignedAngle
                      ((Vector3 *)auStack_6,&VStack_5,&VStack_15,(MethodInfo *)0x0);
  }
  return fVar1;
}


/* Single ConvertToSh3DArcAngle(Vector3, Vector3, Vector3, Single) */

float Assembly-CSharp.dll::RTG::ArcMath::ArcMath_ConvertToSh3DArcAngle
                (Vector3 *arcOrigin,Vector3 *arcStartPoint,Vector3 *arcPlaneNormal,
                float degreesFromStart,MethodInfo *method)

{
  fVar1 = (float)FUN_?(degreesFromStart,_UNK_?);
  if (_UNK_? < (float)((uint)fVar1 & _UNK_?)) {
    uVar2 = arcStartPoint->x;
    uVar3 = arcStartPoint->y;
    uVar4 = arcOrigin->x;
    uVar5 = arcOrigin->y;
    fVar6 = (float)uVar2 - (float)uVar4;
    fVar7 = arcStartPoint->z - arcOrigin->z;
    fVar8 = (float)uVar3 - (float)uVar5;
    VStack_9.x = arcPlaneNormal->x;
    VStack_9.y = arcPlaneNormal->y;
    VStack_9.z = arcPlaneNormal->z;
    auStack_10._0_4_ = 0.0;
    auStack_10._4_4_ = 0.0;
    stack0xffffffffffffff50 = 0;
    pcVar11 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar11 = (code *)FUN_?(&UNK_?), pcVar11 == (code *)0x0)) {
      uVar12 = func_?(&UNK_?);
      FUN_?(uVar12,0);
      pcVar11 = (code *)swi(3);
      fVar1 = (float)(*pcVar11)();
      return fVar1;
    }
    pcRam_? = pcVar11;
    (*pcRam_?)(fVar1,&VStack_9,auStack_10);
    fVar1 = (float)auStack_10._8_4_ + (float)auStack_10._8_4_;
    fVar13 = (float)auStack_10._4_4_ + (float)auStack_10._4_4_;
    fVar14 = fStack_15 * ((float)auStack_10._0_4_ + (float)auStack_10._0_4_);
    fVar16 = (float)auStack_10._0_4_ * ((float)auStack_10._0_4_ + (float)auStack_10._0_4_);
    fVar17 = (_UNK_? - ((float)auStack_10._8_4_ * fVar1 + (float)auStack_10._4_4_ * fVar13))
             * fVar6 + ((float)auStack_10._0_4_ * fVar13 - fStack_15 * fVar1) * fVar8 +
             (fStack_15 * fVar13 + (float)auStack_10._0_4_ * fVar1) * fVar7;
    fVar18 = (_UNK_? - ((float)auStack_10._8_4_ * fVar1 + fVar16)) * fVar8 +
             (fStack_15 * fVar1 + (float)auStack_10._0_4_ * fVar13) * fVar6 +
             ((float)auStack_10._4_4_ * fVar1 - fVar14) * fVar7;
    fVar13 = ((float)auStack_10._0_4_ * fVar1 - fStack_15 * fVar13) * fVar6 +
            (fVar14 + (float)auStack_10._4_4_ * fVar1) * fVar8 +
            (_UNK_? - ((float)auStack_10._4_4_ * fVar13 + fVar16)) * fVar7;
    VStack_9.y = fVar18;
    VStack_9.x = fVar17;
    VStack_9.z = fVar13;
    fVar1 = (float)FUN_?(&VStack_9);
    if (_UNK_? < fVar1) {
      VStack_9.z = fVar13 / fVar1;
      VStack_9.y = fVar18 / fVar1;
      VStack_9.x = fVar17 / fVar1;
    }
    else {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Vector3);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pVVar19 = TypeInfo__UnityEngine__Vector3->static_fields;
      VStack_9.x = (pVVar19->zeroVector).x;
      VStack_9.y = (pVVar19->zeroVector).y;
      VStack_9.z = (pVVar19->zeroVector).z;
    }
    VStack_20.x = arcPlaneNormal->x;
    VStack_20.y = arcPlaneNormal->y;
    VStack_20.z = arcPlaneNormal->z;
    auStack_10._4_4_ = fVar8;
    auStack_10._0_4_ = fVar6;
    stack0xffffffffffffff50 = CONCAT44(fStack_15,fVar7);
    fVar1 = Vector3Ex::Vector3Ex_SignedAngle
                      ((Vector3 *)auStack_10,&VStack_9,&VStack_20,(MethodInfo *)0x0);
  }
  return fVar1;
}


/* Boolean Is3DPointOnLgArcWire(Vector3, Boolean, Vector3, Vector3, Vector3, Single, ArcEpsilon) */

bool Assembly-CSharp.dll::RTG::ArcMath::ArcMath_Is3DPointOnLgArcWire
               (Vector3 *point,bool checkOnPlane,Vector3 *arcOrigin,Vector3 *arcStartPoint,
               Vector3 *arcPlaneNormal,float degreesFromStart,ArcEpsilon *epsilon,MethodInfo *method
               )

{
  if ((float)((uint)degreesFromStart & _UNK_?) <= _UNK_?) {
    AStack_1._areaEps = epsilon->_areaEps;
    AStack_1._extrudeEps = epsilon->_extrudeEps;
    AStack_1._wireEps = epsilon->_wireEps;
    VStack_2.x = arcPlaneNormal->x;
    VStack_2.y = arcPlaneNormal->y;
    VStack_2.z = arcPlaneNormal->z;
    VStack_3.z = arcStartPoint->z;
    VStack_3.x = arcStartPoint->x;
    VStack_3.y = arcStartPoint->y;
    QStack_4.z = arcOrigin->z;
    aQStack_5[0].z = point->z;
    QStack_4.x = arcOrigin->x;
    QStack_4.y = arcOrigin->y;
    aQStack_5[0].x = point->x;
    aQStack_5[0].y = point->y;
    bVar6 = ArcMath_Is3DPointOnShArcWire
                       ((Vector3 *)aQStack_5,checkOnPlane,(Vector3 *)&QStack_4,&VStack_3,
                        &VStack_2,degreesFromStart,&AStack_1,(MethodInfo *)0x0);
    return bVar6;
  }
  aQStack_5[0].x = arcOrigin->x;
  aQStack_5[0].y = arcOrigin->y;
  uVar7 = arcStartPoint->x;
  uVar8 = arcStartPoint->y;
  fVar9 = arcStartPoint->z - arcOrigin->z;
  fVar10 = (float)uVar7 - aQStack_5[0].x;
  fVar11 = (float)uVar8 - aQStack_5[0].y;
  uVar12 = point->x;
  uVar13 = point->y;
  fVar14 = (float)uVar12 - aQStack_5[0].x;
  fVar15 = (float)uVar13 - aQStack_5[0].y;
  fVar16 = point->z - arcOrigin->z;
  VStack_3.y = fVar15;
  VStack_3.x = fVar14;
  VStack_3.z = fVar16;
  fVar17 = (float)FUN_?(&VStack_3);
  uVar18 = arcOrigin->x;
  uVar19 = arcOrigin->y;
  aQStack_5[0].x = arcStartPoint->x;
  aQStack_5[0].y = arcStartPoint->y;
  VStack_3.z = arcOrigin->z - arcStartPoint->z;
  VStack_3.y = (float)uVar19 - aQStack_5[0].y;
  VStack_3.x = (float)uVar18 - aQStack_5[0].x;
  fVar20 = (float)FUN_?(&VStack_3);
  VStack_3.x = arcPlaneNormal->x;
  VStack_3.y = arcPlaneNormal->y;
  VStack_3.z = arcPlaneNormal->z;
  fVar21 = (float)FUN_?(&VStack_3);
  if (_UNK_? < fVar21) {
    uVar22 = arcPlaneNormal->x;
    uVar23 = arcPlaneNormal->y;
    VStack_3.x = (float)uVar22 / fVar21;
    fVar24 = arcPlaneNormal->z / fVar21;
    VStack_3.y = (float)uVar23 / fVar21;
  }
  else {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pVVar25 = TypeInfo__UnityEngine__Vector3->static_fields;
    VStack_3.x = (pVVar25->zeroVector).x;
    VStack_3.y = (pVVar25->zeroVector).y;
    fVar24 = (pVVar25->zeroVector).z;
  }
  uVar26 = arcOrigin->x;
  uVar27 = arcOrigin->y;
  if ((checkOnPlane == 0) ||
     (uVar28 = point->x, uVar29 = point->y,
     fVar21 = (float)((uint)((float)uVar29 * VStack_3.y + (float)uVar28 * VStack_3.x +
                             point->z * fVar24 +
                            (float)((uint)(VStack_3.y * (float)uVar27 + VStack_3.x * (float)uVar26
                                          + fVar24 * arcOrigin->z) ^ _UNK_?)) &
                     _UNK_?),
     fVar21 < epsilon->_extrudeEps || fVar21 == epsilon->_extrudeEps)) {
    VStack_3.x = arcPlaneNormal->x;
    VStack_3.y = arcPlaneNormal->y;
    VStack_3.z = arcPlaneNormal->z;
    aQStack_5[0].x = 0.0;
    aQStack_5[0].y = 0.0;
    aQStack_5[0].z = 0.0;
    aQStack_5[0].w = 0.0;
    pcVar30 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar30 = (code *)FUN_?(&UNK_?), pcVar30 == (code *)0x0)) {
      uVar31 = func_?(&UNK_?);
      FUN_?(uVar31,0);
      pcVar30 = (code *)swi(3);
      bVar6 = (*pcVar30)();
      return bVar6;
    }
    pcRam_? = pcVar30;
    (*pcRam_?)(degreesFromStart,&VStack_3,aQStack_5);
    QStack_4.x = aQStack_5[0].x;
    QStack_4.y = aQStack_5[0].y;
    QStack_4.z = aQStack_5[0].z;
    QStack_4.w = aQStack_5[0].w;
    VStack_3.y = fVar11;
    VStack_3.x = fVar10;
    VStack_3.z = fVar9;
    pVVar32 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                        ((Vector3 *)aQStack_5,&QStack_4,&VStack_3,(MethodInfo *)0x0);
    uVar33 = pVVar32->x;
    uVar34 = pVVar32->y;
    fVar21 = arcOrigin->y;
    fVar24 = arcOrigin->z;
    fVar35 = pVVar32->z;
    VStack_3.z = arcStartPoint->z;
    uVar36 = arcOrigin->x;
    VStack_2.z = arcOrigin->z;
    VStack_3.x = arcStartPoint->x;
    VStack_3.y = arcStartPoint->y;
    VStack_2.x = arcOrigin->x;
    VStack_2.y = arcOrigin->y;
    AStack_1._areaEps = point->x;
    AStack_1._extrudeEps = point->y;
    AStack_1._wireEps = point->z;
    fVar37 = Vector3Ex::Vector3Ex_GetDistanceToSegment
                       ((Vector3 *)&AStack_1,&VStack_2,&VStack_3,(MethodInfo *)0x0);
    if (epsilon->_wireEps < fVar37) {
      VStack_2.z = arcOrigin->z;
      VStack_2.x = arcOrigin->x;
      VStack_2.y = arcOrigin->y;
      VStack_3.x = point->x;
      VStack_3.y = point->y;
      VStack_3.z = point->z;
      AStack_1._extrudeEps = fVar21 + (float)uVar34;
      AStack_1._areaEps = (float)uVar36 + (float)uVar33;
      AStack_1._wireEps = fVar24 + fVar35;
      fVar21 = Vector3Ex::Vector3Ex_GetDistanceToSegment
                         (&VStack_3,&VStack_2,(Vector3 *)&AStack_1,(MethodInfo *)0x0);
      if (epsilon->_wireEps < fVar21) {
        AStack_1._wireEps = arcPlaneNormal->z;
        AStack_1._areaEps = arcPlaneNormal->x;
        AStack_1._extrudeEps = arcPlaneNormal->y;
        VStack_2.x = arcStartPoint->x;
        VStack_2.y = arcStartPoint->y;
        VStack_2.z = arcStartPoint->z;
        VStack_3.x = arcOrigin->x;
        VStack_3.y = arcOrigin->y;
        VStack_3.z = arcOrigin->z;
        fVar24 = ArcMath_ConvertToSh3DArcAngle
                           (&VStack_3,&VStack_2,(Vector3 *)&AStack_1,degreesFromStart,
                            (MethodInfo *)0x0);
        AStack_1._areaEps = arcPlaneNormal->x;
        AStack_1._extrudeEps = arcPlaneNormal->y;
        AStack_1._wireEps = arcPlaneNormal->z;
        VStack_2.y = fVar15;
        VStack_2.x = fVar14;
        VStack_3.y = fVar11;
        VStack_3.x = fVar10;
        VStack_3.z = fVar9;
        VStack_2.z = fVar16;
        fVar16 = Vector3Ex::Vector3Ex_SignedAngle
                           (&VStack_3,&VStack_2,(Vector3 *)&AStack_1,(MethodInfo *)0x0);
        fVar21 = _UNK_?;
        if (0.0 <= fVar16) {
          fVar21 = _UNK_?;
        }
        fVar15 = _UNK_?;
        if (fVar24 < 0.0) {
          fVar15 = _UNK_?;
        }
        if (((fVar21 != fVar15) ||
            ((float)((uint)fVar24 & _UNK_?) < (float)((uint)fVar16 & _UNK_?))) &&
           (fVar20 - epsilon->_wireEps <= fVar17)) {
          return fVar17 <= fVar20 + epsilon->_wireEps;
        }
        goto code_?;
      }
    }
    bVar6 = 1;
  }
  else {
code_?:
    bVar6 = 0;
  }
  return bVar6;
}


/* Boolean Is3DPointOnShArcWire(Vector3, Boolean, Vector3, Vector3, Vector3, Single, ArcEpsilon) */

bool Assembly-CSharp.dll::RTG::ArcMath::ArcMath_Is3DPointOnShArcWire
               (Vector3 *point,bool checkOnPlane,Vector3 *arcOrigin,Vector3 *arcStartPoint,
               Vector3 *arcPlaneNormal,float degreesFromStart,ArcEpsilon *epsilon,MethodInfo *method
               )

{
  uVar1 = arcStartPoint->x;
  uVar2 = arcStartPoint->y;
  aVStack_3[0].x = arcOrigin->x;
  aVStack_3[0].y = arcOrigin->y;
  fVar4 = arcStartPoint->z - arcOrigin->z;
  fVar5 = (float)uVar1 - aVStack_3[0].x;
  fVar6 = (float)uVar2 - aVStack_3[0].y;
  uVar7 = point->x;
  uVar8 = point->y;
  fVar9 = (float)uVar7 - aVStack_3[0].x;
  fVar10 = (float)uVar8 - aVStack_3[0].y;
  fVar11 = point->z - arcOrigin->z;
  VStack_12.y = fVar10;
  VStack_12.x = fVar9;
  VStack_12.z = fVar11;
  fVar13 = (float)FUN_?(&VStack_12);
  uVar14 = arcOrigin->x;
  uVar15 = arcOrigin->y;
  aVStack_3[0].x = arcStartPoint->x;
  aVStack_3[0].y = arcStartPoint->y;
  VStack_12.z = arcOrigin->z - arcStartPoint->z;
  VStack_12.y = (float)uVar15 - aVStack_3[0].y;
  VStack_12.x = (float)uVar14 - aVStack_3[0].x;
  fVar16 = (float)FUN_?(&VStack_12);
  VStack_12.x = arcPlaneNormal->x;
  VStack_12.y = arcPlaneNormal->y;
  VStack_12.z = arcPlaneNormal->z;
  fVar17 = (float)FUN_?(&VStack_12);
  if (_UNK_? < fVar17) {
    uVar18 = arcPlaneNormal->x;
    uVar19 = arcPlaneNormal->y;
    VStack_12.x = (float)uVar18 / fVar17;
    fVar20 = arcPlaneNormal->z / fVar17;
    VStack_12.y = (float)uVar19 / fVar17;
  }
  else {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pVVar21 = TypeInfo__UnityEngine__Vector3->static_fields;
    VStack_12.x = (pVVar21->zeroVector).x;
    VStack_12.y = (pVVar21->zeroVector).y;
    fVar20 = (pVVar21->zeroVector).z;
  }
  uVar22 = arcOrigin->x;
  uVar23 = arcOrigin->y;
  if ((checkOnPlane == 0) ||
     (uVar24 = point->x, uVar25 = point->y,
     fVar17 = (float)((uint)((float)uVar25 * VStack_12.y + (float)uVar24 * VStack_12.x +
                             point->z * fVar20 +
                            (float)((uint)(VStack_12.y * (float)uVar23 +
                                           VStack_12.x * (float)uVar22 + fVar20 * arcOrigin->z) ^
                                   _UNK_?)) & _UNK_?),
     fVar17 < epsilon->_extrudeEps || fVar17 == epsilon->_extrudeEps)) {
    VStack_12.x = arcPlaneNormal->x;
    VStack_12.y = arcPlaneNormal->y;
    VStack_12.z = arcPlaneNormal->z;
    aVStack_3[0].y = fVar6;
    aVStack_3[0].x = fVar5;
    auStack_26._4_4_ = fVar10;
    auStack_26._0_4_ = fVar9;
    stack0xffffffffffffff10 = CONCAT44(fStack_27,fVar11);
    aVStack_3[0].z = fVar4;
    fVar10 = Vector3Ex::Vector3Ex_SignedAngle
                       (aVStack_3,(Vector3 *)auStack_26,&VStack_12,(MethodInfo *)0x0);
    fVar17 = _UNK_?;
    fVar11 = _UNK_?;
    if (0.0 <= fVar10) {
      fVar11 = _UNK_?;
    }
    fVar9 = _UNK_?;
    if (0.0 <= degreesFromStart) {
      fVar9 = _UNK_?;
    }
    if ((((fVar11 != fVar9) ||
         ((float)((uint)degreesFromStart & _UNK_?) < (float)((uint)fVar10 & _UNK_?))
         ) || (fVar13 < fVar16 - epsilon->_wireEps)) || (fVar16 + epsilon->_wireEps < fVar13)) {
      aVStack_3[0].x = arcPlaneNormal->x;
      aVStack_3[0].y = arcPlaneNormal->y;
      aVStack_3[0].z = arcPlaneNormal->z;
      auStack_26._0_4_ = 0.0;
      auStack_26._4_4_ = 0.0;
      stack0xffffffffffffff10 = 0;
      pcVar28 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar28 = (code *)FUN_?(&UNK_?), pcVar28 == (code *)0x0)) {
        uVar29 = func_?(&UNK_?);
        FUN_?(uVar29,0);
        pcVar28 = (code *)swi(3);
        bVar30 = (*pcVar28)();
        return bVar30;
      }
      pcRam_? = pcVar28;
      (*pcRam_?)(degreesFromStart,aVStack_3,auStack_26);
      fVar11 = (float)auStack_26._8_4_ + (float)auStack_26._8_4_;
      fVar16 = (float)auStack_26._4_4_ + (float)auStack_26._4_4_;
      fVar31 = ((float)auStack_26._0_4_ + (float)auStack_26._0_4_) * (float)auStack_26._0_4_;
      fVar13 = fVar11 * (float)auStack_26._8_4_;
      fVar32 = ((float)auStack_26._0_4_ + (float)auStack_26._0_4_) * fStack_27;
      fVar9 = fVar16 * fStack_27;
      fVar20 = fVar16 * (float)auStack_26._4_4_;
      fVar16 = fVar16 * (float)auStack_26._0_4_;
      fVar33 = fVar11 * (float)auStack_26._0_4_;
      fVar10 = fVar11 * (float)auStack_26._4_4_;
      auStack_26._0_4_ = arcOrigin->x;
      auStack_26._4_4_ = arcOrigin->y;
      aVStack_3[0].z = arcStartPoint->z;
      auStack_26._8_4_ = arcOrigin->z;
      VStack_12.z = point->z;
      fVar34 = (fVar17 - (fVar13 + fVar20)) * fVar5 + (fVar16 - fVar11 * fStack_27) * fVar6 +
               (fVar9 + fVar33) * fVar4 + (float)auStack_26._0_4_;
      fVar11 = (fVar17 - (fVar13 + fVar31)) * fVar6 + (fVar11 * fStack_27 + fVar16) * fVar5 +
               (fVar10 - fVar32) * fVar4 + (float)auStack_26._4_4_;
      aVStack_3[0].x = arcStartPoint->x;
      aVStack_3[0].y = arcStartPoint->y;
      VStack_12.x = point->x;
      VStack_12.y = point->y;
      fVar13 = arcOrigin->z;
      fVar16 = Vector3Ex::Vector3Ex_GetDistanceToSegment
                         (&VStack_12,(Vector3 *)auStack_26,aVStack_3,(MethodInfo *)0x0);
      if (epsilon->_wireEps < fVar16) {
        auStack_26._0_4_ = arcOrigin->x;
        auStack_26._4_4_ = arcOrigin->y;
        VStack_12.x = point->x;
        VStack_12.y = point->y;
        stack0xffffffffffffff10 = CONCAT44(fStack_27,arcOrigin->z);
        VStack_12.z = point->z;
        aVStack_3[0].y = fVar11;
        aVStack_3[0].x = fVar34;
        aVStack_3[0].z =
             (fVar33 - fVar9) * fVar5 + (fVar32 + fVar10) * fVar6 +
             (fVar17 - (fVar20 + fVar31)) * fVar4 + fVar13;
        fVar13 = Vector3Ex::Vector3Ex_GetDistanceToSegment
                           (&VStack_12,(Vector3 *)auStack_26,aVStack_3,(MethodInfo *)0x0);
        if (epsilon->_wireEps < fVar13) {
          return 0;
        }
      }
    }
    bVar30 = 1;
  }
  else {
    bVar30 = 0;
  }
  return bVar30;
}


/* Boolean LgArcContains2DPoint(Vector2, Vector2, Vector2, Single, ArcEpsilon) */

bool Assembly-CSharp.dll::RTG::ArcMath::ArcMath_LgArcContains2DPoint
               (Vector2 point,Vector2 arcOrigin,Vector2 arcStartPoint,float degreesFromStart,
               ArcEpsilon *epsilon,MethodInfo *method)

{
  bVar1 = cRam_? == '\0';
  VStack_2.y = arcStartPoint.y;
  fVar3 = VStack_2.y;
  VStack_4.y = arcOrigin.y;
  fVar5 = VStack_4.y;
  VStack_6.y = point.y;
  fVar7 = VStack_6.y;
  epsilon->_extrudeEps = 0.0;
  VStack_2 = arcStartPoint;
  VStack_4 = arcOrigin;
  VStack_6 = point;
  if (bVar1) {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  AStack_8._areaEps = epsilon->_areaEps;
  AStack_8._extrudeEps = epsilon->_extrudeEps;
  AStack_8._wireEps = epsilon->_wireEps;
  fStack_9 = 0.0;
  fStack_10 = 0.0;
  pVVar11 = TypeInfo__UnityEngine__Vector3->static_fields;
  fStack_12 = 0.0;
  aVStack_13[0].x = (pVVar11->forwardVector).x;
  aVStack_13[0].y = (pVVar11->forwardVector).y;
  aVStack_13[0].z = (pVVar11->forwardVector).z;
  VStack_2.y = fVar3;
  VStack_4.y = fVar5;
  VStack_6.y = fVar7;
  bVar14 = ArcMath_LgArcContains3DPoint
                    ((Vector3 *)&VStack_6,0,(Vector3 *)&VStack_4,(Vector3 *)&VStack_2,aVStack_13,
                     degreesFromStart,&AStack_8,(MethodInfo *)0x0);
  return bVar14;
}


/* Boolean LgArcContains3DPoint(Vector3, Boolean, Vector3, Vector3, Vector3, Single, ArcEpsilon) */

bool Assembly-CSharp.dll::RTG::ArcMath::ArcMath_LgArcContains3DPoint
               (Vector3 *point,bool checkOnPlane,Vector3 *arcOrigin,Vector3 *arcStartPoint,
               Vector3 *arcPlaneNormal,float degreesFromStart,ArcEpsilon *epsilon,MethodInfo *method
               )

{
  fVar1 = (float)FUN_?(degreesFromStart,_UNK_?);
  if ((float)((uint)fVar1 & _UNK_?) <= _UNK_?) {
    QStack_2.x = epsilon->_areaEps;
    QStack_2.y = epsilon->_extrudeEps;
    QStack_2.z = epsilon->_wireEps;
    QStack_3.x = arcPlaneNormal->x;
    QStack_3.y = arcPlaneNormal->y;
    QStack_3.z = arcPlaneNormal->z;
    VStack_4.z = arcStartPoint->z;
    VStack_5.z = arcOrigin->z;
    VStack_4.x = arcStartPoint->x;
    VStack_4.y = arcStartPoint->y;
    aQStack_6[0].z = point->z;
    VStack_5.x = arcOrigin->x;
    VStack_5.y = arcOrigin->y;
    aQStack_6[0].x = point->x;
    aQStack_6[0].y = point->y;
    bVar7 = ArcMath_ShArcContains3DPoint
                       ((Vector3 *)aQStack_6,checkOnPlane,&VStack_5,&VStack_4,
                        (Vector3 *)&QStack_3,fVar1,(ArcEpsilon *)&QStack_2,(MethodInfo *)0x0);
  }
  else {
    uVar8 = point->x;
    uVar9 = point->y;
    uVar10 = arcOrigin->x;
    uVar11 = arcOrigin->y;
    fVar12 = point->z - arcOrigin->z;
    uVar13 = arcStartPoint->x;
    uVar14 = arcStartPoint->y;
    QStack_3.x = arcOrigin->x;
    QStack_3.y = arcOrigin->y;
    QStack_2.z = fVar12;
    QStack_2.y = (float)uVar9 - (float)uVar11;
    QStack_2.x = (float)uVar8 - (float)uVar10;
    fVar15 = arcStartPoint->z - arcOrigin->z;
    VStack_5.z = arcPlaneNormal->z;
    VStack_4.z = arcStartPoint->z;
    fVar16 = (float)uVar13 - QStack_3.x;
    fVar17 = (float)uVar14 - QStack_3.y;
    VStack_5.x = arcPlaneNormal->x;
    VStack_5.y = arcPlaneNormal->y;
    QStack_3.z = arcOrigin->z;
    VStack_4.x = arcStartPoint->x;
    VStack_4.y = arcStartPoint->y;
    aQStack_6[0]._0_8_ = QStack_3._0_8_;
    fVar18 = ArcMath_ConvertToSh3DArcAngle
                       ((Vector3 *)&QStack_3,&VStack_4,&VStack_5,fVar1,(MethodInfo *)0x0);
    QStack_3.x = arcPlaneNormal->x;
    QStack_3.y = arcPlaneNormal->y;
    QStack_3.z = arcPlaneNormal->z;
    VStack_5.y = fVar17;
    VStack_5.x = fVar16;
    VStack_4.y = (float)uVar9 - (float)uVar11;
    VStack_4.x = (float)uVar8 - (float)uVar10;
    VStack_5.z = fVar15;
    VStack_4.z = fVar12;
    fVar12 = Vector3Ex::Vector3Ex_SignedAngle
                       (&VStack_5,&VStack_4,(Vector3 *)&QStack_3,(MethodInfo *)0x0);
    fVar1 = _UNK_?;
    if (0.0 <= fVar12) {
      fVar1 = _UNK_?;
    }
    fVar19 = _UNK_?;
    if (fVar18 < 0.0) {
      fVar19 = _UNK_?;
    }
    if (((fVar1 != fVar19) ||
        ((float)((uint)fVar18 & _UNK_?) < (float)((uint)fVar12 & _UNK_?))) ||
       (epsilon->_areaEps == 0.0)) {
      uVar20 = arcStartPoint->x;
      uVar21 = arcStartPoint->y;
      uVar22 = arcOrigin->x;
      QStack_3.x = (float)uVar22 - (float)uVar20;
      QStack_3.z = arcOrigin->z - arcStartPoint->z;
      QStack_3.y = arcOrigin->y - (float)uVar21;
      fVar18 = (float)FUN_?(&QStack_3);
      fVar1 = epsilon->_areaEps;
      fVar12 = (float)FUN_?(&QStack_2);
      bVar7 = fVar12 <= fVar18 + fVar1;
    }
    else {
      QStack_3.x = arcPlaneNormal->x;
      QStack_3.y = arcPlaneNormal->y;
      QStack_3.z = arcPlaneNormal->z;
      aQStack_6[0].x = 0.0;
      aQStack_6[0].y = 0.0;
      aQStack_6[0].z = 0.0;
      aQStack_6[0].w = 0.0;
      pcVar23 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar23 = (code *)FUN_?(&UNK_?), pcVar23 == (code *)0x0)) {
        uVar24 = func_?(&UNK_?);
        FUN_?(uVar24,0);
        pcVar23 = (code *)swi(3);
        bVar7 = (*pcVar23)();
        return bVar7;
      }
      pcRam_? = pcVar23;
      (*pcRam_?)(fVar18,&QStack_3,aQStack_6);
      QStack_2.x = aQStack_6[0].x;
      QStack_2.y = aQStack_6[0].y;
      QStack_2.z = aQStack_6[0].z;
      QStack_2.w = aQStack_6[0].w;
      QStack_3.y = fVar17;
      QStack_3.x = fVar16;
      QStack_3.z = fVar15;
      pVVar25 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                          ((Vector3 *)aQStack_6,&QStack_2,(Vector3 *)&QStack_3,(MethodInfo *)0x0)
      ;
      uVar26 = pVVar25->x;
      uVar27 = pVVar25->y;
      fVar1 = arcOrigin->y;
      fVar18 = arcOrigin->z;
      fVar12 = pVVar25->z;
      QStack_3.z = arcStartPoint->z;
      uVar28 = arcOrigin->x;
      VStack_4.z = arcOrigin->z;
      QStack_3.x = arcStartPoint->x;
      QStack_3.y = arcStartPoint->y;
      VStack_4.x = arcOrigin->x;
      VStack_4.y = arcOrigin->y;
      VStack_5.x = point->x;
      VStack_5.y = point->y;
      VStack_5.z = point->z;
      fVar15 = Vector3Ex::Vector3Ex_GetDistanceToSegment
                         (&VStack_5,&VStack_4,(Vector3 *)&QStack_3,(MethodInfo *)0x0);
      if (epsilon->_areaEps < fVar15) {
        VStack_4.z = arcOrigin->z;
        VStack_4.x = arcOrigin->x;
        VStack_4.y = arcOrigin->y;
        VStack_5.x = point->x;
        VStack_5.y = point->y;
        VStack_5.z = point->z;
        QStack_3.y = fVar1 + (float)uVar27;
        QStack_3.x = (float)uVar28 + (float)uVar26;
        QStack_3.z = fVar18 + fVar12;
        fVar1 = Vector3Ex::Vector3Ex_GetDistanceToSegment
                           (&VStack_5,&VStack_4,(Vector3 *)&QStack_3,(MethodInfo *)0x0);
        if (epsilon->_areaEps < fVar1) {
          return 0;
        }
      }
      bVar7 = 1;
    }
  }
  return bVar7;
}


/* Boolean RaycastLgArc(Ray, Single ByRef, Vector3, Vector3, Vector3, Single, ArcEpsilon) */

bool Assembly-CSharp.dll::RTG::ArcMath::ArcMath_RaycastLgArc
               (Ray *ray,float *t,Vector3 *arcOrigin,Vector3 *arcStartPoint,Vector3 *arcPlaneNormal,
               float degreesFromStart,ArcEpsilon *epsilon,MethodInfo *method)

{
  pVVar1 = arcPlaneNormal;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__BoxMath);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
    pVVar1 = arcPlaneNormal;
  }
  *t = 0.0;
  RStack_2.m_Origin.x = pVVar1->x;
  RStack_2.m_Origin.y = pVVar1->y;
  RStack_2.m_Origin.z = pVVar1->z;
  arcPlaneNormal = pVVar1;
  fVar3 = (float)FUN_?(&RStack_2);
  if (_UNK_? < fVar3) {
    uVar4 = pVVar1->x;
    uVar5 = pVVar1->y;
    RStack_2.m_Origin.x = (float)uVar4 / fVar3;
    fVar6 = pVVar1->z / fVar3;
    RStack_2.m_Origin.y = (float)uVar5 / fVar3;
  }
  else {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pVVar7 = TypeInfo__UnityEngine__Vector3->static_fields;
    RStack_2.m_Origin.x = (pVVar7->zeroVector).x;
    RStack_2.m_Origin.y = (pVVar7->zeroVector).y;
    fVar6 = (pVVar7->zeroVector).z;
  }
  AStack_8._areaEps = arcOrigin->x;
  AStack_8._extrudeEps = arcOrigin->y;
  uStack_9._0_4_ = (ray->m_Direction).y;
  uStack_9._4_4_ = (ray->m_Direction).z;
  fVar10 = (float)(undefined4)uStack_9 * RStack_2.m_Origin.y +
           (ray->m_Direction).x * RStack_2.m_Origin.x + (float)uStack_9._4_4_ * fVar6;
  fVar11 = (float)((uint)((ray->m_Origin).y * RStack_2.m_Origin.y +
                          (ray->m_Origin).x * RStack_2.m_Origin.x + (ray->m_Origin).z * fVar6) ^
                  _UNK_?);
  fVar3 = (float)((uint)(RStack_2.m_Origin.y * AStack_8._extrudeEps +
                          RStack_2.m_Origin.x * AStack_8._areaEps + fVar6 * arcOrigin->z) ^
                  _UNK_?);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Mathf);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pAVar12 = epsilon;
  fVar6 = degreesFromStart;
  fVar13 = (float)((uint)fVar10 & _UNK_?);
  if ((float)((uint)fVar10 & _UNK_?) <= 0.0) {
    fVar13 = 0.0;
  }
  fVar14 = TypeInfo__UnityEngine__Mathf->static_fields->Epsilon * _UNK_?;
  fVar15 = fVar13 * _UNK_?;
  if (fVar13 * _UNK_? <= fVar14) {
    fVar15 = fVar14;
  }
  if ((fVar15 <= (float)((uint)(0.0 - fVar10) & _UNK_?)) &&
     (fVar10 = (fVar11 - fVar3) / fVar10, 0.0 < fVar10)) {
    uVar16 = (ray->m_Direction).x;
    uVar17 = (ray->m_Direction).y;
    uVar18 = (ray->m_Origin).x;
    uVar19 = (ray->m_Origin).y;
    RStack_2.m_Origin.z = epsilon->_wireEps;
    QStack_20.z = pVVar1->z;
    VStack_21.z = arcStartPoint->z;
    VStack_22.z = arcOrigin->z;
    AStack_8._areaEps = (float)uVar16 * fVar10 + (float)uVar18;
    RStack_2.m_Origin.x = epsilon->_areaEps;
    RStack_2.m_Origin.y = epsilon->_extrudeEps;
    AStack_8._wireEps = (ray->m_Direction).z * fVar10 + (ray->m_Origin).z;
    QStack_20.x = pVVar1->x;
    QStack_20.y = pVVar1->y;
    VStack_21.x = arcStartPoint->x;
    VStack_21.y = arcStartPoint->y;
    VStack_22.x = arcOrigin->x;
    VStack_22.y = arcOrigin->y;
    AStack_8._extrudeEps = (float)uVar17 * fVar10 + (float)uVar19;
    bVar23 = ArcMath_LgArcContains3DPoint
                       ((Vector3 *)&AStack_8,0,&VStack_22,&VStack_21,(Vector3 *)&QStack_20,
                        degreesFromStart,(ArcEpsilon *)&RStack_2,(MethodInfo *)0x0);
    if (bVar23 != 0) {
      *t = fVar10;
      return 1;
    }
  }
  if ((pAVar12->_extrudeEps == 0.0) ||
     (uVar24 = pVVar1->x, uVar25 = pVVar1->y, uVar26 = (ray->m_Direction).x,
     uVar27 = (ray->m_Direction).y,
     _UNK_? <=
     (float)((uint)((float)uVar25 * (float)uVar27 + (float)uVar24 * (float)uVar26 +
                   pVVar1->z * (ray->m_Direction).z) & _UNK_?))) {
    bVar23 = 0;
  }
  else {
    AStack_8._areaEps = pAVar12->_areaEps;
    AStack_8._extrudeEps = pAVar12->_extrudeEps;
    AStack_8._wireEps = pAVar12->_wireEps;
    VStack_22.z = pVVar1->z;
    VStack_22.x = pVVar1->x;
    VStack_22.y = pVVar1->y;
    VStack_21.z = arcStartPoint->z;
    VStack_21.x = arcStartPoint->x;
    VStack_21.y = arcStartPoint->y;
    QStack_20.z = arcOrigin->z;
    QStack_20.x = arcOrigin->x;
    QStack_20.y = arcOrigin->y;
    pOVar28 = ArcMath_CalcLg3DArcOBB
                        (aOStack_29,(Vector3 *)&QStack_20,&VStack_21,&VStack_22,fVar6,&AStack_8,
                         (MethodInfo *)0x0);
    AStack_8._areaEps = 0.0;
    AStack_8._extrudeEps = 0.0;
    uVar30._0_4_ = (pOVar28->_size).x;
    uVar30._4_4_ = (pOVar28->_size).y;
    RStack_2.m_Origin.x = (pOVar28->_size).x;
    RStack_2.m_Origin.y = (pOVar28->_size).y;
    fVar3 = (pOVar28->_size).z;
    RStack_2.m_Direction.x = (pOVar28->_center).x;
    RStack_2.m_Direction.y = (pOVar28->_center).y;
    fVar6 = (pOVar28->_center).z;
    fStack_31 = (pOVar28->_rotation).x;
    fStack_32 = (pOVar28->_rotation).y;
    fStack_33 = (pOVar28->_rotation).z;
    fStack_34 = (pOVar28->_rotation).w;
    uStack_35 = *(undefined4 *)&pOVar28->_isValid;
    RStack_2.m_Origin.z = fVar3;
    RStack_2.m_Direction.z = fVar6;
    pVVar1 = arcPlaneNormal;
    if (*(int *)&(TypeInfo__RTG__BoxMath->_1).field_0x1c == 0) {
      FUN_?();
      pVVar1 = arcPlaneNormal;
    }
    arcPlaneNormal._4_4_ = (undefined4)((ulonglong)pVVar1 >> 0x20);
    if (cRam_? == '\0') {
      arcPlaneNormal = pVVar1;
      FUN_?(&TypeInfo__RTG__BoxMath);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    arcPlaneNormal._0_4_ = 0;
    if (*(int *)&(TypeInfo__RTG__BoxMath->_1).field_0x1c == 0) {
      FUN_?();
    }
    uVar36 = (ray->m_Direction).y;
    uVar37 = (ray->m_Direction).z;
    QStack_20.y = fStack_32;
    QStack_20.x = fStack_31;
    QStack_20.z = fStack_33;
    QStack_20.w = fStack_34;
    VStack_21.y = RStack_2.m_Direction.y;
    VStack_21.x = RStack_2.m_Direction.x;
    RStack_2.m_Origin.x = (ray->m_Origin).x;
    RStack_2.m_Origin.y = (ray->m_Origin).y;
    uVar38 = *(undefined8 *)&(ray->m_Origin).z;
    AStack_8._wireEps = 0.0;
    RStack_2.m_Origin.z = (float)uVar38;
    RStack_2.m_Direction.x = (float)((ulonglong)uVar38 >> 0x20);
    VStack_21.z = fVar6;
    VStack_22._0_8_ = uVar30;
    VStack_22.z = fVar3;
    RStack_2.m_Direction.y = (float)uVar36;
    RStack_2.m_Direction.z = (float)uVar37;
    bVar23 = BoxMath::BoxMath_Raycast_1
                       (&RStack_2,(float *)&arcPlaneNormal,&VStack_21,&VStack_22,&QStack_20,
                        (BoxEpsilon *)&AStack_8,(MethodInfo *)0x0);
  }
  return bVar23;
}


/* Boolean RaycastLgArcWire(Ray, Single ByRef, Vector3, Vector3, Vector3, Single, ArcEpsilon) */

bool Assembly-CSharp.dll::RTG::ArcMath::ArcMath_RaycastLgArcWire
               (Ray *ray,float *t,Vector3 *arcOrigin,Vector3 *arcStartPoint,Vector3 *arcPlaneNormal,
               float degreesFromStart,ArcEpsilon *epsilon,MethodInfo *method)

{
  pVVar1 = arcPlaneNormal;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__BoxMath);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
    pVVar1 = arcPlaneNormal;
  }
  *t = 0.0;
  RStack_2.m_Origin.x = pVVar1->x;
  RStack_2.m_Origin.y = pVVar1->y;
  RStack_2.m_Origin.z = pVVar1->z;
  arcPlaneNormal = pVVar1;
  fVar3 = (float)FUN_?(&RStack_2);
  if (_UNK_? < fVar3) {
    uVar4 = pVVar1->x;
    uVar5 = pVVar1->y;
    RStack_2.m_Origin.x = (float)uVar4 / fVar3;
    fVar6 = pVVar1->z / fVar3;
    RStack_2.m_Origin.y = (float)uVar5 / fVar3;
  }
  else {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pVVar7 = TypeInfo__UnityEngine__Vector3->static_fields;
    RStack_2.m_Origin.x = (pVVar7->zeroVector).x;
    RStack_2.m_Origin.y = (pVVar7->zeroVector).y;
    fVar6 = (pVVar7->zeroVector).z;
  }
  AStack_8._areaEps = arcOrigin->x;
  AStack_8._extrudeEps = arcOrigin->y;
  uStack_9._0_4_ = (ray->m_Direction).y;
  uStack_9._4_4_ = (ray->m_Direction).z;
  fVar10 = (float)(undefined4)uStack_9 * RStack_2.m_Origin.y +
           (ray->m_Direction).x * RStack_2.m_Origin.x + (float)uStack_9._4_4_ * fVar6;
  fVar11 = (float)((uint)((ray->m_Origin).y * RStack_2.m_Origin.y +
                          (ray->m_Origin).x * RStack_2.m_Origin.x + (ray->m_Origin).z * fVar6) ^
                  _UNK_?);
  fVar3 = (float)((uint)(RStack_2.m_Origin.y * AStack_8._extrudeEps +
                          RStack_2.m_Origin.x * AStack_8._areaEps + fVar6 * arcOrigin->z) ^
                  _UNK_?);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Mathf);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pAVar12 = epsilon;
  fVar6 = degreesFromStart;
  fVar13 = (float)((uint)fVar10 & _UNK_?);
  if ((float)((uint)fVar10 & _UNK_?) <= 0.0) {
    fVar13 = 0.0;
  }
  fVar14 = TypeInfo__UnityEngine__Mathf->static_fields->Epsilon * _UNK_?;
  fVar15 = fVar13 * _UNK_?;
  if (fVar13 * _UNK_? <= fVar14) {
    fVar15 = fVar14;
  }
  if ((fVar15 <= (float)((uint)(0.0 - fVar10) & _UNK_?)) &&
     (fVar10 = (fVar11 - fVar3) / fVar10, 0.0 < fVar10)) {
    uVar16 = (ray->m_Direction).x;
    uVar17 = (ray->m_Direction).y;
    uVar18 = (ray->m_Origin).x;
    uVar19 = (ray->m_Origin).y;
    RStack_2.m_Origin.z = epsilon->_wireEps;
    QStack_20.z = pVVar1->z;
    VStack_21.z = arcStartPoint->z;
    VStack_22.z = arcOrigin->z;
    AStack_8._areaEps = (float)uVar16 * fVar10 + (float)uVar18;
    RStack_2.m_Origin.x = epsilon->_areaEps;
    RStack_2.m_Origin.y = epsilon->_extrudeEps;
    AStack_8._wireEps = (ray->m_Direction).z * fVar10 + (ray->m_Origin).z;
    QStack_20.x = pVVar1->x;
    QStack_20.y = pVVar1->y;
    VStack_21.x = arcStartPoint->x;
    VStack_21.y = arcStartPoint->y;
    VStack_22.x = arcOrigin->x;
    VStack_22.y = arcOrigin->y;
    AStack_8._extrudeEps = (float)uVar17 * fVar10 + (float)uVar19;
    bVar23 = ArcMath_Is3DPointOnLgArcWire
                       ((Vector3 *)&AStack_8,0,&VStack_22,&VStack_21,(Vector3 *)&QStack_20,
                        degreesFromStart,(ArcEpsilon *)&RStack_2,(MethodInfo *)0x0);
    if (bVar23 != 0) {
      *t = fVar10;
      return 1;
    }
  }
  if ((pAVar12->_extrudeEps == 0.0) ||
     (uVar24 = pVVar1->x, uVar25 = pVVar1->y, uVar26 = (ray->m_Direction).x,
     uVar27 = (ray->m_Direction).y,
     _UNK_? <=
     (float)((uint)((float)uVar25 * (float)uVar27 + (float)uVar24 * (float)uVar26 +
                   pVVar1->z * (ray->m_Direction).z) & _UNK_?))) {
    bVar23 = 0;
  }
  else {
    AStack_8._areaEps = pAVar12->_areaEps;
    AStack_8._extrudeEps = pAVar12->_extrudeEps;
    AStack_8._wireEps = pAVar12->_wireEps;
    VStack_22.z = pVVar1->z;
    VStack_22.x = pVVar1->x;
    VStack_22.y = pVVar1->y;
    VStack_21.z = arcStartPoint->z;
    VStack_21.x = arcStartPoint->x;
    VStack_21.y = arcStartPoint->y;
    QStack_20.z = arcOrigin->z;
    QStack_20.x = arcOrigin->x;
    QStack_20.y = arcOrigin->y;
    pOVar28 = ArcMath_CalcLg3DArcOBB
                        (aOStack_29,(Vector3 *)&QStack_20,&VStack_21,&VStack_22,fVar6,&AStack_8,
                         (MethodInfo *)0x0);
    AStack_8._areaEps = 0.0;
    AStack_8._extrudeEps = 0.0;
    uVar30._0_4_ = (pOVar28->_size).x;
    uVar30._4_4_ = (pOVar28->_size).y;
    RStack_2.m_Origin.x = (pOVar28->_size).x;
    RStack_2.m_Origin.y = (pOVar28->_size).y;
    fVar3 = (pOVar28->_size).z;
    RStack_2.m_Direction.x = (pOVar28->_center).x;
    RStack_2.m_Direction.y = (pOVar28->_center).y;
    fVar6 = (pOVar28->_center).z;
    fStack_31 = (pOVar28->_rotation).x;
    fStack_32 = (pOVar28->_rotation).y;
    fStack_33 = (pOVar28->_rotation).z;
    fStack_34 = (pOVar28->_rotation).w;
    uStack_35 = *(undefined4 *)&pOVar28->_isValid;
    RStack_2.m_Origin.z = fVar3;
    RStack_2.m_Direction.z = fVar6;
    pVVar1 = arcPlaneNormal;
    if (*(int *)&(TypeInfo__RTG__BoxMath->_1).field_0x1c == 0) {
      FUN_?();
      pVVar1 = arcPlaneNormal;
    }
    arcPlaneNormal._4_4_ = (undefined4)((ulonglong)pVVar1 >> 0x20);
    if (cRam_? == '\0') {
      arcPlaneNormal = pVVar1;
      FUN_?(&TypeInfo__RTG__BoxMath);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    arcPlaneNormal._0_4_ = 0;
    if (*(int *)&(TypeInfo__RTG__BoxMath->_1).field_0x1c == 0) {
      FUN_?();
    }
    uVar36 = (ray->m_Direction).y;
    uVar37 = (ray->m_Direction).z;
    QStack_20.y = fStack_32;
    QStack_20.x = fStack_31;
    QStack_20.z = fStack_33;
    QStack_20.w = fStack_34;
    VStack_21.y = RStack_2.m_Direction.y;
    VStack_21.x = RStack_2.m_Direction.x;
    RStack_2.m_Origin.x = (ray->m_Origin).x;
    RStack_2.m_Origin.y = (ray->m_Origin).y;
    uVar38 = *(undefined8 *)&(ray->m_Origin).z;
    AStack_8._wireEps = 0.0;
    RStack_2.m_Origin.z = (float)uVar38;
    RStack_2.m_Direction.x = (float)((ulonglong)uVar38 >> 0x20);
    VStack_21.z = fVar6;
    VStack_22._0_8_ = uVar30;
    VStack_22.z = fVar3;
    RStack_2.m_Direction.y = (float)uVar36;
    RStack_2.m_Direction.z = (float)uVar37;
    bVar23 = BoxMath::BoxMath_Raycast_1
                       (&RStack_2,(float *)&arcPlaneNormal,&VStack_21,&VStack_22,&QStack_20,
                        (BoxEpsilon *)&AStack_8,(MethodInfo *)0x0);
  }
  return bVar23;
}


/* Boolean RaycastShArc(Ray, Single ByRef, Vector3, Vector3, Vector3, Single, ArcEpsilon) */

bool Assembly-CSharp.dll::RTG::ArcMath::ArcMath_RaycastShArc
               (Ray *ray,float *t,Vector3 *arcOrigin,Vector3 *arcStartPoint,Vector3 *arcPlaneNormal,
               float degreesFromStart,ArcEpsilon *epsilon,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__BoxMath);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  *t = 0.0;
  RStack_1.m_Origin.z = arcPlaneNormal->z;
  RStack_1.m_Origin.x = arcPlaneNormal->x;
  RStack_1.m_Origin.y = arcPlaneNormal->y;
  QStack_2.x = arcStartPoint->x;
  QStack_2.y = arcStartPoint->y;
  AStack_3._areaEps = arcOrigin->x;
  AStack_3._extrudeEps = arcOrigin->y;
  QStack_2.z = arcStartPoint->z;
  AStack_3._wireEps = arcOrigin->z;
  fVar4 = ArcMath_ConvertToSh3DArcAngle
                     ((Vector3 *)&AStack_3,(Vector3 *)&QStack_2,&RStack_1.m_Origin,
                      degreesFromStart,(MethodInfo *)0x0);
  AStack_3._areaEps = arcPlaneNormal->x;
  AStack_3._extrudeEps = arcPlaneNormal->y;
  AStack_3._wireEps = arcPlaneNormal->z;
  fVar5 = (float)FUN_?(&AStack_3);
  if (_UNK_? < fVar5) {
    uVar6 = arcPlaneNormal->x;
    uVar7 = arcPlaneNormal->y;
    RStack_1.m_Origin.x = (float)uVar6 / fVar5;
    fVar8 = arcPlaneNormal->z / fVar5;
    RStack_1.m_Origin.y = (float)uVar7 / fVar5;
  }
  else {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pVVar9 = TypeInfo__UnityEngine__Vector3->static_fields;
    RStack_1.m_Origin.x = (pVVar9->zeroVector).x;
    RStack_1.m_Origin.y = (pVVar9->zeroVector).y;
    fVar8 = (pVVar9->zeroVector).z;
  }
  AStack_10._areaEps = arcOrigin->x;
  AStack_10._extrudeEps = arcOrigin->y;
  uStack_11._0_4_ = (ray->m_Direction).y;
  uStack_11._4_4_ = (ray->m_Direction).z;
  fVar12 = (float)(undefined4)uStack_11 * RStack_1.m_Origin.y +
           (ray->m_Direction).x * RStack_1.m_Origin.x + (float)uStack_11._4_4_ * fVar8;
  fVar13 = (float)((uint)((ray->m_Origin).y * RStack_1.m_Origin.y +
                          (ray->m_Origin).x * RStack_1.m_Origin.x + (ray->m_Origin).z * fVar8) ^
                  _UNK_?);
  fVar5 = (float)((uint)(RStack_1.m_Origin.y * AStack_10._extrudeEps +
                          RStack_1.m_Origin.x * AStack_10._areaEps + fVar8 * arcOrigin->z) ^
                  _UNK_?);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Mathf);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pAVar14 = epsilon;
  fVar8 = (float)((uint)fVar12 & _UNK_?);
  if ((float)((uint)fVar12 & _UNK_?) <= 0.0) {
    fVar8 = 0.0;
  }
  fVar15 = TypeInfo__UnityEngine__Mathf->static_fields->Epsilon * _UNK_?;
  fVar16 = fVar8 * _UNK_?;
  if (fVar8 * _UNK_? <= fVar15) {
    fVar16 = fVar15;
  }
  if ((fVar16 <= (float)((uint)(0.0 - fVar12) & _UNK_?)) &&
     (fVar12 = (fVar13 - fVar5) / fVar12, 0.0 < fVar12)) {
    uVar17 = (ray->m_Direction).x;
    uVar18 = (ray->m_Direction).y;
    uVar19 = (ray->m_Origin).x;
    uVar20 = (ray->m_Origin).y;
    AStack_3._wireEps = epsilon->_wireEps;
    QStack_2.z = arcPlaneNormal->z;
    RStack_1.m_Origin.z = arcStartPoint->z;
    VStack_21.z = arcOrigin->z;
    AStack_10._areaEps = (float)uVar17 * fVar12 + (float)uVar19;
    AStack_3._areaEps = epsilon->_areaEps;
    AStack_3._extrudeEps = epsilon->_extrudeEps;
    AStack_10._wireEps = (ray->m_Direction).z * fVar12 + (ray->m_Origin).z;
    QStack_2.x = arcPlaneNormal->x;
    QStack_2.y = arcPlaneNormal->y;
    RStack_1.m_Origin.x = arcStartPoint->x;
    RStack_1.m_Origin.y = arcStartPoint->y;
    VStack_21.x = arcOrigin->x;
    VStack_21.y = arcOrigin->y;
    AStack_10._extrudeEps = (float)uVar18 * fVar12 + (float)uVar20;
    bVar22 = ArcMath_ShArcContains3DPoint
                       ((Vector3 *)&AStack_10,0,&VStack_21,&RStack_1.m_Origin,
                        (Vector3 *)&QStack_2,fVar4,&AStack_3,(MethodInfo *)0x0);
    if (bVar22 != 0) {
      *t = fVar12;
      return 1;
    }
  }
  if ((pAVar14->_extrudeEps == 0.0) ||
     (uVar23 = arcPlaneNormal->x, uVar24 = arcPlaneNormal->y, uVar25 = (ray->m_Direction).x,
     uVar26 = (ray->m_Direction).y,
     _UNK_? <=
     (float)((uint)((float)uVar24 * (float)uVar26 + (float)uVar23 * (float)uVar25 +
                   arcPlaneNormal->z * (ray->m_Direction).z) & _UNK_?))) {
    bVar22 = 0;
  }
  else {
    AStack_10._areaEps = pAVar14->_areaEps;
    AStack_10._extrudeEps = pAVar14->_extrudeEps;
    AStack_10._wireEps = pAVar14->_wireEps;
    VStack_21.z = arcPlaneNormal->z;
    VStack_21.x = arcPlaneNormal->x;
    VStack_21.y = arcPlaneNormal->y;
    AStack_3._wireEps = arcStartPoint->z;
    AStack_3._areaEps = arcStartPoint->x;
    AStack_3._extrudeEps = arcStartPoint->y;
    QStack_2.z = arcOrigin->z;
    QStack_2.x = arcOrigin->x;
    QStack_2.y = arcOrigin->y;
    pOVar27 = ArcMath_CalcSh3DArcOBB
                        (aOStack_28,(Vector3 *)&QStack_2,(Vector3 *)&AStack_3,&VStack_21,fVar4,
                         &AStack_10,(MethodInfo *)0x0);
    AStack_10._areaEps = 0.0;
    AStack_10._extrudeEps = 0.0;
    uVar29._0_4_ = (pOVar27->_size).x;
    uVar29._4_4_ = (pOVar27->_size).y;
    RStack_1.m_Origin.x = (pOVar27->_size).x;
    RStack_1.m_Origin.y = (pOVar27->_size).y;
    fVar4 = (pOVar27->_size).z;
    RStack_1.m_Direction.x = (pOVar27->_center).x;
    RStack_1.m_Direction.y = (pOVar27->_center).y;
    fVar5 = (pOVar27->_center).z;
    fStack_30 = (pOVar27->_rotation).x;
    fStack_31 = (pOVar27->_rotation).y;
    fStack_32 = (pOVar27->_rotation).z;
    fStack_33 = (pOVar27->_rotation).w;
    uStack_34 = *(undefined4 *)&pOVar27->_isValid;
    RStack_1.m_Origin.z = fVar4;
    RStack_1.m_Direction.z = fVar5;
    if (*(int *)&(TypeInfo__RTG__BoxMath->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__RTG__BoxMath);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    degreesFromStart = 0.0;
    if (*(int *)&(TypeInfo__RTG__BoxMath->_1).field_0x1c == 0) {
      FUN_?();
    }
    uVar35 = (ray->m_Direction).y;
    uVar36 = (ray->m_Direction).z;
    QStack_2.y = fStack_31;
    QStack_2.x = fStack_30;
    QStack_2.z = fStack_32;
    QStack_2.w = fStack_33;
    AStack_3._extrudeEps = RStack_1.m_Direction.y;
    AStack_3._areaEps = RStack_1.m_Direction.x;
    RStack_1.m_Origin.x = (ray->m_Origin).x;
    RStack_1.m_Origin.y = (ray->m_Origin).y;
    uVar37 = *(undefined8 *)&(ray->m_Origin).z;
    AStack_10._wireEps = 0.0;
    RStack_1.m_Origin.z = (float)uVar37;
    RStack_1.m_Direction.x = (float)((ulonglong)uVar37 >> 0x20);
    AStack_3._wireEps = fVar5;
    VStack_21._0_8_ = uVar29;
    VStack_21.z = fVar4;
    RStack_1.m_Direction.y = (float)uVar35;
    RStack_1.m_Direction.z = (float)uVar36;
    bVar22 = BoxMath::BoxMath_Raycast_1
                       (&RStack_1,&degreesFromStart,(Vector3 *)&AStack_3,&VStack_21,&QStack_2,
                        (BoxEpsilon *)&AStack_10,(MethodInfo *)0x0);
  }
  return bVar22;
}


/* Boolean RaycastShArcWire(Ray, Single ByRef, Vector3, Vector3, Vector3, Single, ArcEpsilon) */

bool Assembly-CSharp.dll::RTG::ArcMath::ArcMath_RaycastShArcWire
               (Ray *ray,float *t,Vector3 *arcOrigin,Vector3 *arcStartPoint,Vector3 *arcPlaneNormal,
               float degreesFromStart,ArcEpsilon *epsilon,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__BoxMath);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  *t = 0.0;
  RStack_1.m_Origin.z = arcPlaneNormal->z;
  RStack_1.m_Origin.x = arcPlaneNormal->x;
  RStack_1.m_Origin.y = arcPlaneNormal->y;
  QStack_2.x = arcStartPoint->x;
  QStack_2.y = arcStartPoint->y;
  AStack_3._areaEps = arcOrigin->x;
  AStack_3._extrudeEps = arcOrigin->y;
  QStack_2.z = arcStartPoint->z;
  AStack_3._wireEps = arcOrigin->z;
  fVar4 = ArcMath_ConvertToSh3DArcAngle
                     ((Vector3 *)&AStack_3,(Vector3 *)&QStack_2,&RStack_1.m_Origin,
                      degreesFromStart,(MethodInfo *)0x0);
  AStack_3._areaEps = arcPlaneNormal->x;
  AStack_3._extrudeEps = arcPlaneNormal->y;
  AStack_3._wireEps = arcPlaneNormal->z;
  fVar5 = (float)FUN_?(&AStack_3);
  if (_UNK_? < fVar5) {
    uVar6 = arcPlaneNormal->x;
    uVar7 = arcPlaneNormal->y;
    RStack_1.m_Origin.x = (float)uVar6 / fVar5;
    fVar8 = arcPlaneNormal->z / fVar5;
    RStack_1.m_Origin.y = (float)uVar7 / fVar5;
  }
  else {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pVVar9 = TypeInfo__UnityEngine__Vector3->static_fields;
    RStack_1.m_Origin.x = (pVVar9->zeroVector).x;
    RStack_1.m_Origin.y = (pVVar9->zeroVector).y;
    fVar8 = (pVVar9->zeroVector).z;
  }
  AStack_10._areaEps = arcOrigin->x;
  AStack_10._extrudeEps = arcOrigin->y;
  uStack_11._0_4_ = (ray->m_Direction).y;
  uStack_11._4_4_ = (ray->m_Direction).z;
  fVar12 = (float)(undefined4)uStack_11 * RStack_1.m_Origin.y +
           (ray->m_Direction).x * RStack_1.m_Origin.x + (float)uStack_11._4_4_ * fVar8;
  fVar13 = (float)((uint)((ray->m_Origin).y * RStack_1.m_Origin.y +
                          (ray->m_Origin).x * RStack_1.m_Origin.x + (ray->m_Origin).z * fVar8) ^
                  _UNK_?);
  fVar5 = (float)((uint)(RStack_1.m_Origin.y * AStack_10._extrudeEps +
                          RStack_1.m_Origin.x * AStack_10._areaEps + fVar8 * arcOrigin->z) ^
                  _UNK_?);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Mathf);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pAVar14 = epsilon;
  fVar8 = (float)((uint)fVar12 & _UNK_?);
  if ((float)((uint)fVar12 & _UNK_?) <= 0.0) {
    fVar8 = 0.0;
  }
  fVar15 = TypeInfo__UnityEngine__Mathf->static_fields->Epsilon * _UNK_?;
  fVar16 = fVar8 * _UNK_?;
  if (fVar8 * _UNK_? <= fVar15) {
    fVar16 = fVar15;
  }
  if ((fVar16 <= (float)((uint)(0.0 - fVar12) & _UNK_?)) &&
     (fVar12 = (fVar13 - fVar5) / fVar12, 0.0 < fVar12)) {
    uVar17 = (ray->m_Direction).x;
    uVar18 = (ray->m_Direction).y;
    uVar19 = (ray->m_Origin).x;
    uVar20 = (ray->m_Origin).y;
    AStack_3._wireEps = epsilon->_wireEps;
    QStack_2.z = arcPlaneNormal->z;
    RStack_1.m_Origin.z = arcStartPoint->z;
    VStack_21.z = arcOrigin->z;
    AStack_10._areaEps = (float)uVar17 * fVar12 + (float)uVar19;
    AStack_3._areaEps = epsilon->_areaEps;
    AStack_3._extrudeEps = epsilon->_extrudeEps;
    AStack_10._wireEps = (ray->m_Direction).z * fVar12 + (ray->m_Origin).z;
    QStack_2.x = arcPlaneNormal->x;
    QStack_2.y = arcPlaneNormal->y;
    RStack_1.m_Origin.x = arcStartPoint->x;
    RStack_1.m_Origin.y = arcStartPoint->y;
    VStack_21.x = arcOrigin->x;
    VStack_21.y = arcOrigin->y;
    AStack_10._extrudeEps = (float)uVar18 * fVar12 + (float)uVar20;
    bVar22 = ArcMath_Is3DPointOnShArcWire
                       ((Vector3 *)&AStack_10,0,&VStack_21,&RStack_1.m_Origin,
                        (Vector3 *)&QStack_2,fVar4,&AStack_3,(MethodInfo *)0x0);
    if (bVar22 != 0) {
      *t = fVar12;
      return 1;
    }
  }
  if ((pAVar14->_extrudeEps == 0.0) ||
     (uVar23 = arcPlaneNormal->x, uVar24 = arcPlaneNormal->y, uVar25 = (ray->m_Direction).x,
     uVar26 = (ray->m_Direction).y,
     _UNK_? <=
     (float)((uint)((float)uVar24 * (float)uVar26 + (float)uVar23 * (float)uVar25 +
                   arcPlaneNormal->z * (ray->m_Direction).z) & _UNK_?))) {
    bVar22 = 0;
  }
  else {
    AStack_10._areaEps = pAVar14->_areaEps;
    AStack_10._extrudeEps = pAVar14->_extrudeEps;
    AStack_10._wireEps = pAVar14->_wireEps;
    VStack_21.z = arcPlaneNormal->z;
    VStack_21.x = arcPlaneNormal->x;
    VStack_21.y = arcPlaneNormal->y;
    AStack_3._wireEps = arcStartPoint->z;
    AStack_3._areaEps = arcStartPoint->x;
    AStack_3._extrudeEps = arcStartPoint->y;
    QStack_2.z = arcOrigin->z;
    QStack_2.x = arcOrigin->x;
    QStack_2.y = arcOrigin->y;
    pOVar27 = ArcMath_CalcSh3DArcOBB
                        (aOStack_28,(Vector3 *)&QStack_2,(Vector3 *)&AStack_3,&VStack_21,fVar4,
                         &AStack_10,(MethodInfo *)0x0);
    AStack_10._areaEps = 0.0;
    AStack_10._extrudeEps = 0.0;
    uVar29._0_4_ = (pOVar27->_size).x;
    uVar29._4_4_ = (pOVar27->_size).y;
    RStack_1.m_Origin.x = (pOVar27->_size).x;
    RStack_1.m_Origin.y = (pOVar27->_size).y;
    fVar4 = (pOVar27->_size).z;
    RStack_1.m_Direction.x = (pOVar27->_center).x;
    RStack_1.m_Direction.y = (pOVar27->_center).y;
    fVar5 = (pOVar27->_center).z;
    fStack_30 = (pOVar27->_rotation).x;
    fStack_31 = (pOVar27->_rotation).y;
    fStack_32 = (pOVar27->_rotation).z;
    fStack_33 = (pOVar27->_rotation).w;
    uStack_34 = *(undefined4 *)&pOVar27->_isValid;
    RStack_1.m_Origin.z = fVar4;
    RStack_1.m_Direction.z = fVar5;
    if (*(int *)&(TypeInfo__RTG__BoxMath->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__RTG__BoxMath);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    degreesFromStart = 0.0;
    if (*(int *)&(TypeInfo__RTG__BoxMath->_1).field_0x1c == 0) {
      FUN_?();
    }
    uVar35 = (ray->m_Direction).y;
    uVar36 = (ray->m_Direction).z;
    QStack_2.y = fStack_31;
    QStack_2.x = fStack_30;
    QStack_2.z = fStack_32;
    QStack_2.w = fStack_33;
    AStack_3._extrudeEps = RStack_1.m_Direction.y;
    AStack_3._areaEps = RStack_1.m_Direction.x;
    RStack_1.m_Origin.x = (ray->m_Origin).x;
    RStack_1.m_Origin.y = (ray->m_Origin).y;
    uVar37 = *(undefined8 *)&(ray->m_Origin).z;
    AStack_10._wireEps = 0.0;
    RStack_1.m_Origin.z = (float)uVar37;
    RStack_1.m_Direction.x = (float)((ulonglong)uVar37 >> 0x20);
    AStack_3._wireEps = fVar5;
    VStack_21._0_8_ = uVar29;
    VStack_21.z = fVar4;
    RStack_1.m_Direction.y = (float)uVar35;
    RStack_1.m_Direction.z = (float)uVar36;
    bVar22 = BoxMath::BoxMath_Raycast_1
                       (&RStack_1,&degreesFromStart,(Vector3 *)&AStack_3,&VStack_21,&QStack_2,
                        (BoxEpsilon *)&AStack_10,(MethodInfo *)0x0);
  }
  return bVar22;
}


/* Boolean ShArcContains2DPoint(Vector2, Vector2, Vector2, Single, ArcEpsilon) */

bool Assembly-CSharp.dll::RTG::ArcMath::ArcMath_ShArcContains2DPoint
               (Vector2 point,Vector2 arcOrigin,Vector2 arcStartPoint,float degreesFromStart,
               ArcEpsilon *epsilon,MethodInfo *method)

{
  VStack_1 = arcStartPoint;
  VStack_2 = arcOrigin;
  VStack_3 = point;
  degreesFromStart_00 =
       ArcMath_ConvertToSh2DArcAngle(arcOrigin,arcStartPoint,degreesFromStart,(MethodInfo *)0x0);
  bVar4 = cRam_? == '\0';
  fVar5 = VStack_3.y;
  fVar6 = VStack_2.y;
  fVar7 = VStack_1.y;
  epsilon->_extrudeEps = 0.0;
  if (bVar4) {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  AStack_8._areaEps = epsilon->_areaEps;
  AStack_8._extrudeEps = epsilon->_extrudeEps;
  AStack_8._wireEps = epsilon->_wireEps;
  fStack_9 = 0.0;
  fStack_10 = 0.0;
  pVVar11 = TypeInfo__UnityEngine__Vector3->static_fields;
  fStack_12 = 0.0;
  aVStack_13[0].x = (pVVar11->forwardVector).x;
  aVStack_13[0].y = (pVVar11->forwardVector).y;
  aVStack_13[0].z = (pVVar11->forwardVector).z;
  VStack_1.y = fVar7;
  VStack_2.y = fVar6;
  VStack_3.y = fVar5;
  bVar14 = ArcMath_ShArcContains3DPoint
                    ((Vector3 *)&VStack_3,0,(Vector3 *)&VStack_2,(Vector3 *)&VStack_1,aVStack_13,
                     degreesFromStart_00,&AStack_8,(MethodInfo *)0x0);
  return bVar14;
}


/* Boolean ShArcContains3DPoint(Vector3, Boolean, Vector3, Vector3, Vector3, Single, ArcEpsilon) */

bool Assembly-CSharp.dll::RTG::ArcMath::ArcMath_ShArcContains3DPoint
               (Vector3 *point,bool checkOnPlane,Vector3 *arcOrigin,Vector3 *arcStartPoint,
               Vector3 *arcPlaneNormal,float degreesFromStart,ArcEpsilon *epsilon,MethodInfo *method
               )

{
  uVar1 = arcOrigin->x;
  uVar2 = arcOrigin->y;
  uVar3 = arcStartPoint->x;
  uVar4 = arcStartPoint->y;
  fVar5 = arcStartPoint->z - arcOrigin->z;
  uVar6 = point->x;
  uVar7 = point->y;
  fVar8 = point->z - arcOrigin->z;
  uVar9 = arcOrigin->x;
  uVar10 = arcOrigin->y;
  aVStack_11[0].x = arcStartPoint->x;
  aVStack_11[0].y = arcStartPoint->y;
  QStack_12.y = (float)uVar7 - (float)uVar2;
  QStack_12.x = (float)uVar6 - (float)uVar1;
  QStack_13.y = (float)uVar10 - aVStack_11[0].y;
  QStack_13.x = (float)uVar9 - aVStack_11[0].x;
  QStack_13.z = arcOrigin->z - arcStartPoint->z;
  QStack_12.z = fVar8;
  fVar14 = (float)FUN_?(&QStack_13);
  fVar15 = epsilon->_areaEps;
  fVar16 = (float)FUN_?(&QStack_12);
  if (fVar16 <= fVar14 + fVar15) {
    QStack_12.x = arcPlaneNormal->x;
    QStack_12.y = arcPlaneNormal->y;
    QStack_12.z = arcPlaneNormal->z;
    fVar15 = (float)FUN_?(&QStack_12);
    if (_UNK_? < fVar15) {
      uVar17 = arcPlaneNormal->x;
      uVar18 = arcPlaneNormal->y;
      fVar14 = arcPlaneNormal->z / fVar15;
      QStack_13.y = (float)uVar18 / fVar15;
      QStack_13.x = (float)uVar17 / fVar15;
    }
    else {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Vector3);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pVVar19 = TypeInfo__UnityEngine__Vector3->static_fields;
      QStack_13.x = (pVVar19->zeroVector).x;
      QStack_13.y = (pVVar19->zeroVector).y;
      fVar14 = (pVVar19->zeroVector).z;
    }
    uVar20 = arcOrigin->x;
    uVar21 = arcOrigin->y;
    if ((checkOnPlane == 0) ||
       (uVar22 = point->x, uVar23 = point->y,
       fVar15 = (float)((uint)((float)uVar23 * QStack_13.y + (float)uVar22 * QStack_13.x +
                               point->z * fVar14 +
                              (float)((uint)(QStack_13.y * (float)uVar21 +
                                             QStack_13.x * (float)uVar20 + fVar14 * arcOrigin->z) ^
                                     _UNK_?)) & _UNK_?),
       fVar15 < epsilon->_extrudeEps || fVar15 == epsilon->_extrudeEps)) {
      QStack_12.x = arcPlaneNormal->x;
      QStack_12.y = arcPlaneNormal->y;
      aVStack_11[0].y = (float)uVar4 - (float)uVar2;
      aVStack_11[0].x = (float)uVar3 - (float)uVar1;
      QStack_12.z = arcPlaneNormal->z;
      QStack_13.y = (float)uVar7 - (float)uVar2;
      QStack_13.x = (float)uVar6 - (float)uVar1;
      QStack_13.z = fVar8;
      aVStack_11[0].z = fVar5;
      fVar14 = Vector3Ex::Vector3Ex_SignedAngle
                         (aVStack_11,(Vector3 *)&QStack_13,(Vector3 *)&QStack_12,(MethodInfo *)0x0);
      fVar15 = _UNK_?;
      if (0.0 <= fVar14) {
        fVar15 = _UNK_?;
      }
      fVar16 = _UNK_?;
      if (degreesFromStart < 0.0) {
        fVar16 = _UNK_?;
      }
      if ((fVar15 != fVar16) ||
         ((float)((uint)degreesFromStart & _UNK_?) < (float)((uint)fVar14 & _UNK_?))
         ) {
        if (epsilon->_areaEps == 0.0) {
          return 0;
        }
        aVStack_11[0].x = arcPlaneNormal->x;
        aVStack_11[0].y = arcPlaneNormal->y;
        aVStack_11[0].z = arcPlaneNormal->z;
        QStack_12.x = 0.0;
        QStack_12.y = 0.0;
        QStack_12.z = 0.0;
        QStack_12.w = 0.0;
        pcVar24 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar24 = (code *)FUN_?(&UNK_?), pcVar24 == (code *)0x0)) {
          uVar25 = func_?(&UNK_?);
          FUN_?(uVar25,0);
          pcVar24 = (code *)swi(3);
          bVar26 = (*pcVar24)();
          return bVar26;
        }
        pcRam_? = pcVar24;
        (*pcRam_?)(degreesFromStart,aVStack_11,&QStack_12);
        uVar27 = arcOrigin->x;
        uVar28 = arcOrigin->y;
        QStack_13.x = QStack_12.x;
        QStack_13.y = QStack_12.y;
        QStack_13.z = QStack_12.z;
        QStack_13.w = QStack_12.w;
        aVStack_11[0].y = (float)uVar4 - (float)uVar2;
        aVStack_11[0].x = (float)uVar3 - (float)uVar1;
        aVStack_11[0].z = fVar5;
        pVVar29 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                            ((Vector3 *)&QStack_12,&QStack_13,aVStack_11,(MethodInfo *)0x0);
        uVar30 = pVVar29->x;
        uVar31 = pVVar29->y;
        fVar15 = arcOrigin->z;
        fVar14 = pVVar29->z;
        aVStack_11[0].z = arcStartPoint->z;
        aVStack_11[0].x = arcStartPoint->x;
        aVStack_11[0].y = arcStartPoint->y;
        QStack_12.x = arcOrigin->x;
        QStack_12.y = arcOrigin->y;
        QStack_13.x = point->x;
        QStack_13.y = point->y;
        QStack_12.z = arcOrigin->z;
        QStack_13.z = point->z;
        fVar16 = Vector3Ex::Vector3Ex_GetDistanceToSegment
                           ((Vector3 *)&QStack_13,(Vector3 *)&QStack_12,aVStack_11,(MethodInfo *)0x0
                           );
        if (epsilon->_areaEps < fVar16) {
          QStack_12.x = arcOrigin->x;
          QStack_12.y = arcOrigin->y;
          QStack_13.x = point->x;
          QStack_13.y = point->y;
          QStack_12.z = arcOrigin->z;
          aVStack_11[0].y = (float)uVar28 + (float)uVar31;
          aVStack_11[0].x = (float)uVar27 + (float)uVar30;
          QStack_13.z = point->z;
          aVStack_11[0].z = fVar15 + fVar14;
          fVar15 = Vector3Ex::Vector3Ex_GetDistanceToSegment
                             ((Vector3 *)&QStack_13,(Vector3 *)&QStack_12,aVStack_11,
                              (MethodInfo *)0x0);
          if (epsilon->_areaEps < fVar15) {
            return 0;
          }
        }
      }
      return 1;
    }
  }
  return 0;
}

