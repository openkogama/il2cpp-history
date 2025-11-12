
/* Void Map(GizmoTransform, Int32, AxisSign) */

void Assembly-CSharp.dll::RTG::GizmoTransformAxisMap2D::GizmoTransformAxisMap2D_Map
               (GizmoTransformAxisMap2D *this,GizmoTransform *transform,int32_t axisIndex,
               AxisSign__Enum axisSign,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__AxisDescriptor);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((transform != (GizmoTransform *)0x0) && (axisIndex < 2)) {
    pAVar1 = (AxisDescriptor *)FUN_?(TypeInfo__RTG__AxisDescriptor);
    (pAVar1->fields)._sign = axisSign;
    (pAVar1->fields)._index = axisIndex;
    (this->fields)._mappedAxisDesc = pAVar1;
    if (iRam_? != 0) {
      uVar2 = (uint)((ulonglong)&(this->fields)._mappedAxisDesc >> 0xc);
      lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
      do {
        uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
        puVar5 = (ulonglong *)(lVar3 + 0xADDR);
        LOCK();
        bVar6 = uVar4 == *puVar5;
        if (bVar6) {
          *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
        }
        UNLOCK();
      } while (!bVar6);
    }
    iVar7 = iRam_?;
    (this->fields)._transform = transform;
    if (iVar7 != 0) {
      uVar2 = (uint)((ulonglong)&(this->fields)._transform >> 0xc);
      lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
      do {
        uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
        puVar5 = (ulonglong *)(lVar3 + 0xADDR);
        LOCK();
        bVar6 = uVar4 == *puVar5;
        if (bVar6) {
          *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
        }
        UNLOCK();
      } while (!bVar6);
    }
  }
  return;
}


/* Void SetAxis(Vector2) */

void Assembly-CSharp.dll::RTG::GizmoTransformAxisMap2D::GizmoTransformAxisMap2D_SetAxis
               (GizmoTransformAxisMap2D *this,Vector2 axis,MethodInfo *method)

{
  if ((this->fields)._transform == (GizmoTransform *)0x0) {
    VStackX_8 = axis;
    uVar1 = FUN_?(&VStackX_8);
    VStackX_8.x = (float)uVar1;
    VStackX_8.y = (float)((ulonglong)uVar1 >> 0x20);
    (this->fields)._freeAxis.x = VStackX_8.x;
    (this->fields)._freeAxis.y = VStackX_8.y;
    return;
  }
  pAVar2 = (this->fields)._mappedAxisDesc;
  this_00 = (this->fields)._transform;
  if ((pAVar2 != (AxisDescriptor *)0x0) &&
     (pVVar3 = (this_00->fields)._axes2D, pVVar3 != (Vector2__Array *)0x0)) {
    uVar4 = (pAVar2->fields)._index;
    if ((uint)pVVar3->max_length <= uVar4) {
      FUN_?();
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    fVar6 = pVVar3->vector[(int)uVar4].x;
    fVar7 = pVVar3->vector[(int)uVar4].y;
    if ((pAVar2->fields)._sign == 1) {
      fVar6 = (float)((uint)fVar6 ^ _UNK_?);
      fVar7 = (float)((uint)fVar7 ^ _UNK_?);
    }
    from.y = fVar7;
    from.x = fVar6;
    pQVar8 = QuaternionEx::QuaternionEx_FromToRotation2D(&QStack_9,from,axis,(MethodInfo *)0x0);
    QStack_9.x = pQVar8->x;
    QStack_9.y = pQVar8->y;
    QStack_9.z = pQVar8->z;
    QStack_9.w = pQVar8->w;
    fVar6 = QuaternionEx::QuaternionEx_ConvertTo2DRotation(&QStack_9,(MethodInfo *)0x0);
    if (((this_00->fields)._firingChanged2DEvent == 0) &&
       (fVar6 = fVar6 + (this_00->fields)._rotation2DDegrees,
       (this_00->fields)._rotation2DDegrees != fVar6)) {
      GizmoTransform::GizmoTransform_ChangeRotation2D(this_00,fVar6,(MethodInfo *)0x0);
    }
    return;
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void SetMappedAxis(Vector2) */

void Assembly-CSharp.dll::RTG::GizmoTransformAxisMap2D::GizmoTransformAxisMap2D_SetMappedAxis
               (GizmoTransformAxisMap2D *this,Vector2 axis,MethodInfo *method)

{
  if ((this->fields)._transform != (GizmoTransform *)0x0) {
    pAVar1 = (this->fields)._mappedAxisDesc;
    this_00 = (this->fields)._transform;
    if ((pAVar1 == (AxisDescriptor *)0x0) ||
       (pVVar2 = (this_00->fields)._axes2D, pVVar2 == (Vector2__Array *)0x0)) {
      FUN_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    uVar4 = (pAVar1->fields)._index;
    if ((uint)pVVar2->max_length <= uVar4) {
      FUN_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    fVar5 = pVVar2->vector[(int)uVar4].x;
    fVar6 = pVVar2->vector[(int)uVar4].y;
    if ((pAVar1->fields)._sign == 1) {
      fVar5 = (float)((uint)fVar5 ^ _UNK_?);
      fVar6 = (float)((uint)fVar6 ^ _UNK_?);
    }
    from.y = fVar6;
    from.x = fVar5;
    pQVar7 = QuaternionEx::QuaternionEx_FromToRotation2D(&QStack_8,from,axis,(MethodInfo *)0x0);
    QStack_8.x = pQVar7->x;
    QStack_8.y = pQVar7->y;
    QStack_8.z = pQVar7->z;
    QStack_8.w = pQVar7->w;
    fVar5 = QuaternionEx::QuaternionEx_ConvertTo2DRotation(&QStack_8,(MethodInfo *)0x0);
    if (((this_00->fields)._firingChanged2DEvent == 0) &&
       (fVar5 = fVar5 + (this_00->fields)._rotation2DDegrees,
       (this_00->fields)._rotation2DDegrees != fVar5)) {
      GizmoTransform::GizmoTransform_ChangeRotation2D(this_00,fVar5,(MethodInfo *)0x0);
    }
  }
  return;
}


/* GizmoTransformAxisMap2D() */

void Assembly-CSharp.dll::RTG::GizmoTransformAxisMap2D::GizmoTransformAxisMap2D__ctor
               (GizmoTransformAxisMap2D *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__AxisDescriptor);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector2);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  fVar1 = (TypeInfo__UnityEngine__Vector2->static_fields->rightVector).y;
  (this->fields)._freeAxis.x = (TypeInfo__UnityEngine__Vector2->static_fields->rightVector).x;
  (this->fields)._freeAxis.y = fVar1;
  pAVar2 = (AxisDescriptor *)FUN_?();
  bVar3 = iRam_? != 0;
  (pAVar2->fields)._sign = 0;
  (pAVar2->fields)._index = 0;
  (this->fields)._mappedAxisDesc = pAVar2;
  if (bVar3) {
    uVar4 = (uint)((ulonglong)&(this->fields)._mappedAxisDesc >> 0xc);
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
  return;
}


/* Vector2 get_Axis() */

Vector2 Assembly-CSharp.dll::RTG::GizmoTransformAxisMap2D::GizmoTransformAxisMap2D_get_Axis
                  (GizmoTransformAxisMap2D *this,MethodInfo *method)

{
  if ((this->fields)._transform == (GizmoTransform *)0x0) {
    return (this->fields)._freeAxis;
  }
  pGVar1 = (this->fields)._transform;
  if (((pGVar1 != (GizmoTransform *)0x0) &&
      (method = (MethodInfo *)(this->fields)._mappedAxisDesc, method != (MethodInfo *)0x0)) &&
     (pVVar2 = (pGVar1->fields)._axes2D, this = (GizmoTransformAxisMap2D *)0x0,
     pVVar2 != (Vector2__Array *)0x0)) {
    uVar3 = ((AxisDescriptor__Fields *)&method->invoker_method)->_index;
    if (uVar3 < (uint)pVVar2->max_length) {
      fVar4 = pVVar2->vector[(int)uVar3].x;
      fVar5 = pVVar2->vector[(int)uVar3].y;
      if (((AxisDescriptor__Fields *)&method->invoker_method)->_sign == 1) {
        fVar4 = (float)((uint)fVar4 ^ _UNK_?);
        fVar5 = (float)((uint)fVar5 ^ _UNK_?);
      }
      VVar6.y = fVar5;
      VVar6.x = fVar4;
      return VVar6;
    }
    FUN_?();
    pcVar7 = (code *)swi(3);
    VVar6 = (Vector2)(*pcVar7)();
    return VVar6;
  }
  FUN_?(this,method);
  pcVar7 = (code *)swi(3);
  VVar6 = (Vector2)(*pcVar7)();
  return VVar6;
}


/* Int32 get_MappedAxisIndex() */

int32_t Assembly-CSharp.dll::RTG::GizmoTransformAxisMap2D::
        GizmoTransformAxisMap2D_get_MappedAxisIndex
                  (GizmoTransformAxisMap2D *this,MethodInfo *method)

{
  pAVar1 = (this->fields)._mappedAxisDesc;
  if (pAVar1 != (AxisDescriptor *)0x0) {
    return (pAVar1->fields)._index;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  iVar3 = (*pcVar2)();
  return iVar3;
}


/* AxisSign get_MappedAxisSign() */

AxisSign__Enum
Assembly-CSharp.dll::RTG::GizmoTransformAxisMap2D::GizmoTransformAxisMap2D_get_MappedAxisSign
          (GizmoTransformAxisMap2D *this,MethodInfo *method)

{
  pAVar1 = (this->fields)._mappedAxisDesc;
  if (pAVar1 != (AxisDescriptor *)0x0) {
    return (pAVar1->fields)._sign;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  AVar3 = (*pcVar2)();
  return AVar3;
}

