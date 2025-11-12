
/* Single ConvertTo2DRotation(Quaternion) */

float Assembly-CSharp.dll::RTG::QuaternionEx::QuaternionEx_ConvertTo2DRotation(Quaternion *quat,MethodInfo *method)

{
  fStack_1 = quat->x;
  fStack_2 = quat->y;
  fStack_3 = quat->z;
  fStack_4 = quat->w;
  uStack_5 = 0;
  fStack_6 = 0.0;
  afStackX_8[0] = 0.0;
  pcVar7 = pcRam_?;
  if ((pcRam_? == (code *)0x0) && (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0)) {
    uVar8 = func_?(&UNK_?);
    FUN_?(uVar8,0);
    pcVar7 = (code *)swi(3);
    fVar9 = (float)(*pcVar7)();
    return fVar9;
  }
  pcRam_? = pcVar7;
  (*pcRam_?)(&fStack_1,&uStack_5,afStackX_8);
  afStackX_8[0] = afStackX_8[0] * 57.29578;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar10 = TypeInfo__UnityEngine__Vector3->static_fields;
  uVar11 = (pVVar10->forwardVector).x;
  uVar12 = (pVVar10->forwardVector).y;
  if (uStack_5._4_4_ * (float)uVar12 + (float)uStack_5 * (float)uVar11 + fStack_6 * (pVVar10->forwardVector).z < 0.0) {
    afStackX_8[0] = -afStackX_8[0];
  }
  return afStackX_8[0];
}


/* Quaternion FromToRotation2D(Vector2, Vector2) */

Quaternion * Assembly-CSharp.dll::RTG::QuaternionEx::QuaternionEx_FromToRotation2D(Quaternion *__return_storage_ptr__,Vector2 from,Vector2 to,MethodInfo *method)

{
  aVStackX_8[0] = from;
  VStack_1 = to;
  aVStackX_8[0] = (Vector2)FUN_?(aVStackX_8);
  VStack_1 = (Vector2)FUN_?(&VStack_1);
  fVar2 = VStack_1.y;
  fVar3 = VStack_1.x;
  fVar4 = VStack_1.y * aVStackX_8[0].y + VStack_1.x * aVStackX_8[0].x;
  if (1.0 - fVar4 < 1e-05) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Quaternion);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pQVar5 = TypeInfo__UnityEngine__Quaternion->static_fields;
    fVar3 = (pQVar5->identityQuaternion).y;
    fVar2 = (pQVar5->identityQuaternion).z;
    fVar4 = (pQVar5->identityQuaternion).w;
    __return_storage_ptr__->x = (pQVar5->identityQuaternion).x;
    __return_storage_ptr__->y = fVar3;
    __return_storage_ptr__->z = fVar2;
    __return_storage_ptr__->w = fVar4;
  }
  else if (fVar4 + 1.0 < 1e-05) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pVVar6 = TypeInfo__UnityEngine__Vector3->static_fields;
    VStack_1.x = (pVVar6->forwardVector).x;
    VStack_1.y = (pVVar6->forwardVector).y;
    fStack_7 = (pVVar6->forwardVector).z;
    uStack_8 = 0;
    uStack_9 = 0;
    pcVar10 = pcRam_?;
    if ((pcRam_? == (code *)0x0) && (pcVar10 = (code *)FUN_?(&UNK_?), pcVar10 == (code *)0x0)) {
      uVar11 = func_?(&UNK_?);
      FUN_?(uVar11,0);
      pcVar10 = (code *)swi(3);
      pQVar12 = (Quaternion *)(*pcVar10)();
      return pQVar12;
    }
    pcRam_? = pcVar10;
    (*pcRam_?)(0x43340000,&VStack_1,&uStack_8);
    __return_storage_ptr__->x = (float)(undefined4)uStack_8;
    __return_storage_ptr__->y = (float)uStack_8._4_4_;
    __return_storage_ptr__->z = (float)(undefined4)uStack_9;
    __return_storage_ptr__->w = (float)uStack_9._4_4_;
  }
  else {
    fVar13 = 1.0;
    if (fVar4 <= 1.0) {
      fVar13 = fVar4;
    }
    fVar4 = -1.0;
    if (-1.0 <= fVar13) {
      fVar4 = fVar13;
    }
    fVar4 = (float)func_?(fVar4);
    fVar14 = fVar2 * aVStackX_8[0].x - fVar3 * aVStackX_8[0].y;
    fVar2 = aVStackX_8[0].y * 0.0 - fVar2 * 0.0;
    fVar3 = fVar3 * 0.0 - aVStackX_8[0].x * 0.0;
    VStack_1.y = fVar3;
    VStack_1.x = fVar2;
    fStack_7 = fVar14;
    fVar13 = (float)FUN_?(&VStack_1);
    if (1e-05 < fVar13) {
      fVar2 = fVar2 / fVar13;
      fVar3 = fVar3 / fVar13;
      fStack_7 = fVar14 / fVar13;
    }
    else {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Vector3);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pVVar6 = TypeInfo__UnityEngine__Vector3->static_fields;
      fVar2 = (pVVar6->zeroVector).x;
      fVar3 = (pVVar6->zeroVector).y;
      fStack_7 = (pVVar6->zeroVector).z;
    }
    VStack_1.y = fVar3;
    VStack_1.x = fVar2;
    uStack_8 = 0;
    uStack_9 = 0;
    pcVar10 = pcRam_?;
    if ((pcRam_? == (code *)0x0) && (pcVar10 = (code *)FUN_?(&UNK_?), pcVar10 == (code *)0x0)) {
      uVar11 = func_?(&UNK_?);
      FUN_?(uVar11,0);
      pcVar10 = (code *)swi(3);
      pQVar12 = (Quaternion *)(*pcVar10)();
      return pQVar12;
    }
    pcRam_? = pcVar10;
    (*pcRam_?)(fVar4 * 57.29578,&VStack_1,&uStack_8);
    __return_storage_ptr__->x = (float)(undefined4)uStack_8;
    __return_storage_ptr__->y = (float)uStack_8._4_4_;
    __return_storage_ptr__->z = (float)(undefined4)uStack_9;
    __return_storage_ptr__->w = (float)uStack_9._4_4_;
  }
  return __return_storage_ptr__;
}


/* Quaternion FromToRotation3D(Vector3, Vector3, Vector3) */

Quaternion * Assembly-CSharp.dll::RTG::QuaternionEx::QuaternionEx_FromToRotation3D(Quaternion *__return_storage_ptr__,Vector3 *from,Vector3 *to,Vector3 *perp180,MethodInfo *method)

{
  method_00 = (MethodInfo *)to;
  pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_normalized((Vector3 *)auStack_2,from,(MethodInfo *)to);
  fVar3 = pVVar1->y;
  fVar4 = pVVar1->z;
  from->x = pVVar1->x;
  from->y = fVar3;
  from->z = fVar4;
  pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_normalized((Vector3 *)auStack_2,to,method_00);
  uStack_5._0_4_ = from->x;
  uStack_5._4_4_ = from->y;
  uVar6 = pVVar1->x;
  uVar7 = pVVar1->y;
  fVar4 = (float)uVar7 * (float)uStack_5._4_4_ + (float)uVar6 * (float)(undefined4)uStack_5 + pVVar1->z * from->z;
  if (1.0 - fVar4 < 1e-05) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Quaternion);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pQVar8 = TypeInfo__UnityEngine__Quaternion->static_fields;
    fVar4 = (pQVar8->identityQuaternion).y;
    fVar3 = (pQVar8->identityQuaternion).z;
    fVar9 = (pQVar8->identityQuaternion).w;
    __return_storage_ptr__->x = (pQVar8->identityQuaternion).x;
    __return_storage_ptr__->y = fVar4;
    __return_storage_ptr__->z = fVar3;
    __return_storage_ptr__->w = fVar9;
  }
  else if (fVar4 + 1.0 < 1e-05) {
    uStack_5._0_4_ = perp180->x;
    uStack_5._4_4_ = perp180->y;
    fStack_10 = perp180->z;
    uStack_11 = 0;
    uStack_12 = 0;
    pcVar13 = pcRam_?;
    if ((pcRam_? == (code *)0x0) && (pcVar13 = (code *)FUN_?(&UNK_?), pcVar13 == (code *)0x0)) {
      uVar14 = func_?(&UNK_?);
      FUN_?(uVar14,0);
      pcVar13 = (code *)swi(3);
      pQVar15 = (Quaternion *)(*pcVar13)();
      return pQVar15;
    }
    pcRam_? = pcVar13;
    (*pcRam_?)(0x43340000,&uStack_5,&uStack_11);
    __return_storage_ptr__->x = (float)(undefined4)uStack_11;
    __return_storage_ptr__->y = (float)uStack_11._4_4_;
    __return_storage_ptr__->z = (float)(undefined4)uStack_12;
    __return_storage_ptr__->w = (float)uStack_12._4_4_;
  }
  else {
    fVar3 = 1.0;
    if (fVar4 <= 1.0) {
      fVar3 = fVar4;
    }
    fVar4 = -1.0;
    if (-1.0 <= fVar3) {
      fVar4 = fVar3;
    }
    fVar9 = (float)func_?(fVar4);
    uVar16 = pVVar1->x;
    uVar17 = pVVar1->y;
    auStack_2._0_4_ = from->x;
    auStack_2._4_4_ = from->y;
    fVar4 = pVVar1->z * (float)auStack_2._4_4_ - (float)uVar17 * from->z;
    fVar3 = (float)uVar16 * from->z - pVVar1->z * (float)auStack_2._0_4_;
    fVar18 = (float)uVar17 * (float)auStack_2._0_4_ - (float)uVar16 * (float)auStack_2._4_4_;
    uStack_5 = CONCAT44(fVar3,fVar4);
    fStack_10 = fVar18;
    fVar19 = (float)FUN_?(&uStack_5);
    if (1e-05 < fVar19) {
      fVar4 = fVar4 / fVar19;
      fVar3 = fVar3 / fVar19;
      fStack_10 = fVar18 / fVar19;
    }
    else {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Vector3);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pVVar20 = TypeInfo__UnityEngine__Vector3->static_fields;
      fVar4 = (pVVar20->zeroVector).x;
      fVar3 = (pVVar20->zeroVector).y;
      fStack_10 = (pVVar20->zeroVector).z;
    }
    uStack_5 = CONCAT44(fVar3,fVar4);
    auStack_2._0_4_ = 0.0;
    auStack_2._4_4_ = 0.0;
    uStack_21 = 0;
    pcVar13 = pcRam_?;
    if ((pcRam_? == (code *)0x0) && (pcVar13 = (code *)FUN_?(&UNK_?), pcVar13 == (code *)0x0)) {
      uVar14 = func_?(&UNK_?);
      FUN_?(uVar14,0);
      pcVar13 = (code *)swi(3);
      pQVar15 = (Quaternion *)(*pcVar13)();
      return pQVar15;
    }
    pcRam_? = pcVar13;
    (*pcRam_?)(fVar9 * 57.29578,&uStack_5,auStack_2);
    __return_storage_ptr__->x = (float)auStack_2._0_4_;
    __return_storage_ptr__->y = (float)auStack_2._4_4_;
    __return_storage_ptr__->z = (float)(undefined4)uStack_21;
    __return_storage_ptr__->w = (float)uStack_21._4_4_;
  }
  return __return_storage_ptr__;
}


/* Quaternion GetRelativeRotation(Quaternion, Quaternion) */

Quaternion * Assembly-CSharp.dll::RTG::QuaternionEx::QuaternionEx_GetRelativeRotation(Quaternion *__return_storage_ptr__,Quaternion *from,Quaternion *to,MethodInfo *method)

{
  fStack_1 = from->x;
  fStack_2 = from->y;
  fStack_3 = from->z;
  fStack_4 = from->w;
  uStack_5 = 0;
  uStack_6 = 0;
  pcVar7 = pcRam_?;
  if ((pcRam_? == (code *)0x0) && (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0)) {
    uVar8 = func_?(&UNK_?);
    FUN_?(uVar8,0);
    pcVar7 = (code *)swi(3);
    pQVar9 = (Quaternion *)(*pcVar7)();
    return pQVar9;
  }
  pcRam_? = pcVar7;
  (*pcRam_?)(&fStack_1,&uStack_5);
  fVar10 = to->x;
  fVar11 = to->y;
  fVar12 = to->z;
  fVar13 = to->w;
  __return_storage_ptr__->x = ((float)uStack_5 * fVar13 + uStack_6._4_4_ * fVar10 + uStack_5._4_4_ * fVar12) - (float)uStack_6 * fVar11;
  __return_storage_ptr__->y = (uStack_6._4_4_ * fVar11 + uStack_5._4_4_ * fVar13 + (float)uStack_6 * fVar10) - (float)uStack_5 * fVar12;
  __return_storage_ptr__->z = (uStack_6._4_4_ * fVar12 + (float)uStack_6 * fVar13 + (float)uStack_5 * fVar11) - uStack_5._4_4_ * fVar10;
  __return_storage_ptr__->w = ((uStack_6._4_4_ * fVar13 - (float)uStack_5 * fVar10) - uStack_5._4_4_ * fVar11) - (float)uStack_6 * fVar12;
  return __return_storage_ptr__;
}


/* Single Length(Quaternion) */

float Assembly-CSharp.dll::RTG::QuaternionEx::QuaternionEx_Length(Quaternion *quat,MethodInfo *method)

{
  fVar1 = quat->x * quat->x + quat->y * quat->y + quat->z * quat->z + quat->w * quat->w;
  if (0.0 <= fVar1) {
    return SQRT(fVar1);
  }
  if (((uint)fVar1 & 0x7f800000) == 0x7f800000) {
    if (((uint)fVar1 & 0x7fffff) != 0) {
      return (float)((uint)fVar1 | 0x400000);
    }
    if ((int)fVar1 < 0) goto code_?;
  }
  if (-1 < (int)fVar1 || ABS(fVar1) == 0.0) {
    return SQRT(fVar1);
  }
code_?:
  fVar1 = (float)FUN_?(&UNK_?,5,0xffc00000,1,8,0x21,fVar1,0,1);
  return fVar1;
}


/* Quaternion Normalize(Quaternion) */

Quaternion * Assembly-CSharp.dll::RTG::QuaternionEx::QuaternionEx_Normalize(Quaternion *__return_storage_ptr__,Quaternion *quat,MethodInfo *method)

{
  fVar1 = quat->y * quat->y + quat->x * quat->x + quat->z * quat->z + quat->w * quat->w;
  if (fVar1 < 0.0) {
    fVar1 = (float)FUN_?(fVar1);
  }
  else {
    fVar1 = SQRT(fVar1);
  }
  if (1e-05 <= fVar1) {
    fVar1 = 1.0 / fVar1;
    fVar2 = quat->y;
    fVar3 = quat->z;
    fVar4 = quat->w;
    __return_storage_ptr__->x = quat->x * fVar1;
    __return_storage_ptr__->y = fVar2 * fVar1;
    __return_storage_ptr__->z = fVar3 * fVar1;
    __return_storage_ptr__->w = fVar4 * fVar1;
    return __return_storage_ptr__;
  }
  fVar1 = quat->y;
  fVar2 = quat->z;
  fVar3 = quat->w;
  __return_storage_ptr__->x = quat->x;
  __return_storage_ptr__->y = fVar1;
  __return_storage_ptr__->z = fVar2;
  __return_storage_ptr__->w = fVar3;
  return __return_storage_ptr__;
}


/* Void RotatePoints(Quaternion, List`1[UnityEngine.Vector3], Vector3) */

void Assembly-CSharp.dll::RTG::QuaternionEx::QuaternionEx_RotatePoints(Quaternion *quat,List_1_UnityEngine_Vector3_ *points,Vector3 *pivot,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Count__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_);
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uVar1 = 0;
  uVar2 = uVar1;
  if (points == (List_1_UnityEngine_Vector3_ *)0x0) {
code_?:
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  do {
    uVar4 = (uint)uVar1;
    if ((points->fields)._size <= (int)uVar4) {
      return;
    }
    if ((uint)(points->fields)._size <= uVar4) {
code_?:
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException((MethodInfo *)0x0);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pVVar5 = (points->fields)._items;
    if (pVVar5 == (Vector3__Array *)0x0) goto code_?;
    if ((uint)pVVar5->max_length <= uVar4) {
code_?:
      FUN_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    uVar6 = pivot->x;
    uVar7 = pivot->y;
    fVar8 = (float)*(undefined8 *)((longlong)&pVVar5->vector[0].x + uVar2) - (float)uVar6;
    fVar9 = *(float *)((longlong)&pVVar5->vector[0].z + uVar2) - pivot->z;
    fVar10 = *(float *)((longlong)&pVVar5->vector[0].y + uVar2) - (float)uVar7;
    fVar11 = quat->x;
    fVar12 = quat->y;
    fVar13 = quat->z;
    fVar14 = quat->w;
    fVar15 = (fVar11 + fVar11) * fVar11;
    fVar16 = (fVar12 + fVar12) * fVar12;
    fVar17 = (fVar13 + fVar13) * fVar13;
    fVar18 = (fVar13 + fVar13) * fVar12;
    fVar19 = (fVar12 + fVar12) * fVar11;
    fVar20 = (fVar13 + fVar13) * fVar11;
    fVar21 = (fVar12 + fVar12) * fVar14;
    fVar12 = (fVar13 + fVar13) * fVar14;
    fVar14 = (fVar11 + fVar11) * fVar14;
    fVar11 = pivot->z;
    if ((uint)(points->fields)._size <= uVar4) goto code_?;
    if (pVVar5 == (Vector3__Array *)0x0) goto code_?;
    if ((uint)pVVar5->max_length <= uVar4) goto code_?;
    uVar1 = (ulonglong)(uVar4 + 1);
    *(ulonglong *)((longlong)&pVVar5->vector[0].x + uVar2) = CONCAT44((1.0 - (fVar17 + fVar15)) * fVar10 + (fVar12 + fVar19) * fVar8 + (fVar18 - fVar14) * fVar9 + (float)uVar7,(1.0 - (fVar17 + fVar16)) * fVar8 + (fVar19 - fVar12) * fVar10 + (fVar21 + fVar20) * fVar9 + (float)uVar6);
    *(float *)((longlong)&pVVar5->vector[0].z + uVar2) = (fVar20 - fVar21) * fVar8 + (fVar14 + fVar18) * fVar10 + (1.0 - (fVar16 + fVar15)) * fVar9 + fVar11;
    piVar22 = &(points->fields)._version;
    *piVar22 = *piVar22 + 1;
    uVar2 = uVar2 + 0xc;
  } while( true );
}

