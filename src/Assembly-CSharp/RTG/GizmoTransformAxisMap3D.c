
/* Void Map(GizmoTransform, Int32, AxisSign) */

void Assembly-CSharp.dll::RTG::GizmoTransformAxisMap3D::GizmoTransformAxisMap3D_Map
               (GizmoTransformAxisMap3D *this,GizmoTransform *transform,int32_t axisIndex,
               AxisSign__Enum axisSign,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__AxisDescriptor);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (transform != (GizmoTransform *)0x0) {
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


/* Void SetAxis(Vector3) */

void Assembly-CSharp.dll::RTG::GizmoTransformAxisMap3D::GizmoTransformAxisMap3D_SetAxis
               (GizmoTransformAxisMap3D *this,Vector3 *axis,MethodInfo *method)

{
  if ((this->fields)._transform == (GizmoTransform *)0x0) {
    VStack_1.x = axis->x;
    VStack_1.y = axis->y;
    VStack_1.z = axis->z;
    fVar2 = (float)FUN_?(&VStack_1);
    if (fVar2 <= _UNK_?) {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Vector3);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pVVar3 = TypeInfo__UnityEngine__Vector3->static_fields;
      fVar4 = (pVVar3->zeroVector).y;
      fVar2 = (pVVar3->zeroVector).z;
      (this->fields)._freeAxis.x = (pVVar3->zeroVector).x;
      (this->fields)._freeAxis.y = fVar4;
      (this->fields)._freeAxis.z = fVar2;
      return;
    }
    uVar5 = axis->x;
    fVar4 = axis->y;
    fVar6 = axis->z;
    (this->fields)._freeAxis.x = (float)uVar5 / fVar2;
    (this->fields)._freeAxis.y = fVar4 / fVar2;
    (this->fields)._freeAxis.z = fVar6 / fVar2;
    return;
  }
  pVVar7 = (((this->fields)._transform)->fields)._axes3D;
  if (pVVar7 != (Vector3__Array *)0x0) {
    if ((int)pVVar7->max_length == 0) {
code_?:
      FUN_?();
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    pAVar9 = (this->fields)._mappedAxisDesc;
    fVar2 = pVVar7->vector[0].x;
    fVar4 = pVVar7->vector[0].y;
    fVar6 = pVVar7->vector[0].z;
    if (pAVar9 != (AxisDescriptor *)0x0) {
      if ((pAVar9->fields)._index == 0) {
        pGVar10 = (this->fields)._transform;
        if ((pGVar10 == (GizmoTransform *)0x0) ||
           (pVVar7 = (pGVar10->fields)._axes3D, pVVar7 == (Vector3__Array *)0x0)) goto DAT_?;
        if ((uint)pVVar7->max_length < 2) goto code_?;
        uVar11 = pVVar7->vector[1].x;
        uVar12 = pVVar7->vector[1].y;
        fVar6 = pVVar7->vector[1].z;
        fVar2 = (float)uVar11;
        fVar4 = (float)uVar12;
      }
      VStack_13.z = axis->z;
      pGVar10 = (this->fields)._transform;
      VStack_1.y = fVar4;
      VStack_1.x = fVar2;
      VStack_13.x = axis->x;
      VStack_13.y = axis->y;
      VStack_1.z = fVar6;
      pVVar14 = GizmoTransformAxisMap3D_get_Axis((Vector3 *)&QStack_15,this,(MethodInfo *)0x0);
      VStack_16.x = pVVar14->x;
      VStack_16.y = pVVar14->y;
      VStack_16.z = pVVar14->z;
      pQVar17 = QuaternionEx::QuaternionEx_FromToRotation3D
                          (&QStack_15,&VStack_16,&VStack_13,&VStack_1,(MethodInfo *)0x0);
      if (pGVar10 != (GizmoTransform *)0x0) {
        QStack_15.x = pQVar17->x;
        QStack_15.y = pQVar17->y;
        QStack_15.z = pQVar17->z;
        QStack_15.w = pQVar17->w;
        GizmoTransform::GizmoTransform_Rotate3D(pGVar10,&QStack_15,(MethodInfo *)0x0);
        return;
      }
    }
  }
DAT_?:
  FUN_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void SetFreeAxis(Vector3) */

void Assembly-CSharp.dll::RTG::GizmoTransformAxisMap3D::GizmoTransformAxisMap3D_SetFreeAxis
               (GizmoTransformAxisMap3D *this,Vector3 *axis,MethodInfo *method)

{
  pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_normalized
                     (&VStack_2,axis,method);
  fVar3 = pVVar1->y;
  fVar4 = pVVar1->z;
  (this->fields)._freeAxis.x = pVVar1->x;
  (this->fields)._freeAxis.y = fVar3;
  (this->fields)._freeAxis.z = fVar4;
  return;
}


/* Void SetMappedAxis(Vector3) */

void Assembly-CSharp.dll::RTG::GizmoTransformAxisMap3D::GizmoTransformAxisMap3D_SetMappedAxis
               (GizmoTransformAxisMap3D *this,Vector3 *axis,MethodInfo *method)

{
  if ((this->fields)._transform == (GizmoTransform *)0x0) {
    return;
  }
  pVVar1 = (((this->fields)._transform)->fields)._axes3D;
  if (pVVar1 != (Vector3__Array *)0x0) {
    if ((int)pVVar1->max_length == 0) {
code_?:
      FUN_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pAVar3 = (this->fields)._mappedAxisDesc;
    fVar4 = pVVar1->vector[0].x;
    fVar5 = pVVar1->vector[0].y;
    fVar6 = pVVar1->vector[0].z;
    if (pAVar3 != (AxisDescriptor *)0x0) {
      if ((pAVar3->fields)._index == 0) {
        pGVar7 = (this->fields)._transform;
        if ((pGVar7 == (GizmoTransform *)0x0) ||
           (pVVar1 = (pGVar7->fields)._axes3D, pVVar1 == (Vector3__Array *)0x0)) goto DAT_?;
        if ((uint)pVVar1->max_length < 2) goto code_?;
        uVar8 = pVVar1->vector[1].x;
        uVar9 = pVVar1->vector[1].y;
        fVar6 = pVVar1->vector[1].z;
        fVar4 = (float)uVar8;
        fVar5 = (float)uVar9;
      }
      pGVar7 = (this->fields)._transform;
      VStack_10.z = axis->z;
      VStack_11.y = fVar5;
      VStack_11.x = fVar4;
      VStack_10.x = axis->x;
      VStack_10.y = axis->y;
      VStack_11.z = fVar6;
      pVVar12 = GizmoTransformAxisMap3D_get_Axis((Vector3 *)&QStack_13,this,(MethodInfo *)0x0);
      VStack_14.x = pVVar12->x;
      VStack_14.y = pVVar12->y;
      VStack_14.z = pVVar12->z;
      pQVar15 = QuaternionEx::QuaternionEx_FromToRotation3D
                          (&QStack_13,&VStack_14,&VStack_10,&VStack_11,(MethodInfo *)0x0);
      if (pGVar7 != (GizmoTransform *)0x0) {
        QStack_13.x = pQVar15->x;
        QStack_13.y = pQVar15->y;
        QStack_13.z = pQVar15->z;
        QStack_13.w = pQVar15->w;
        GizmoTransform::GizmoTransform_Rotate3D(pGVar7,&QStack_13,(MethodInfo *)0x0);
        return;
      }
    }
  }
DAT_?:
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* GizmoTransformAxisMap3D() */

void Assembly-CSharp.dll::RTG::GizmoTransformAxisMap3D::GizmoTransformAxisMap3D__ctor
               (GizmoTransformAxisMap3D *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__AxisDescriptor);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar1 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar2 = (pVVar1->rightVector).y;
  fVar3 = (pVVar1->rightVector).z;
  (this->fields)._freeAxis.x = (pVVar1->rightVector).x;
  (this->fields)._freeAxis.y = fVar2;
  (this->fields)._freeAxis.z = fVar3;
  pAVar4 = (AxisDescriptor *)FUN_?();
  bVar5 = iRam_? != 0;
  (pAVar4->fields)._sign = 0;
  (pAVar4->fields)._index = 0;
  (this->fields)._mappedAxisDesc = pAVar4;
  if (bVar5) {
    uVar6 = (uint)((ulonglong)&(this->fields)._mappedAxisDesc >> 0xc);
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
  return;
}


/* Vector3 get_Axis() */

Vector3 * Assembly-CSharp.dll::RTG::GizmoTransformAxisMap3D::GizmoTransformAxisMap3D_get_Axis
                    (Vector3 *__return_storage_ptr__,GizmoTransformAxisMap3D *this,
                    MethodInfo *method)

{
  if ((this->fields)._transform == (GizmoTransform *)0x0) {
    fVar1 = (this->fields)._freeAxis.z;
    fVar2 = (this->fields)._freeAxis.y;
    __return_storage_ptr__->x = (this->fields)._freeAxis.x;
    __return_storage_ptr__->y = fVar2;
    __return_storage_ptr__->z = fVar1;
    return __return_storage_ptr__;
  }
  pGVar3 = (this->fields)._transform;
  if (((pGVar3 != (GizmoTransform *)0x0) &&
      (method = (MethodInfo *)(this->fields)._mappedAxisDesc, method != (MethodInfo *)0x0)) &&
     (pVVar4 = (pGVar3->fields)._axes3D, this = (GizmoTransformAxisMap3D *)0x0,
     pVVar4 != (Vector3__Array *)0x0)) {
    uVar5 = ((AxisDescriptor__Fields *)&method->invoker_method)->_index;
    if (uVar5 < (uint)pVVar4->max_length) {
      uVar6._0_4_ = pVVar4->vector[(int)uVar5].x;
      uVar6._4_4_ = pVVar4->vector[(int)uVar5].y;
      fVar1 = pVVar4->vector[(int)uVar5].z;
      if (((AxisDescriptor__Fields *)&method->invoker_method)->_sign == 1) {
        fVar1 = (float)((uint)pVVar4->vector[(int)uVar5].z ^ _UNK_?);
        uVar6 = CONCAT44(uVar6._4_4_ ^ _UNK_?,(undefined4)uVar6 ^ _UNK_?);
      }
      __return_storage_ptr__->x = (float)(int)uVar6;
      __return_storage_ptr__->y = (float)(int)((ulonglong)uVar6 >> 0x20);
      __return_storage_ptr__->z = fVar1;
      return __return_storage_ptr__;
    }
    FUN_?();
    pcVar7 = (code *)swi(3);
    pVVar8 = (Vector3 *)(*pcVar7)();
    return pVVar8;
  }
  FUN_?(__return_storage_ptr__,this,method);
  pcVar7 = (code *)swi(3);
  pVVar8 = (Vector3 *)(*pcVar7)();
  return pVVar8;
}


/* Int32 get_MappedAxisIndex() */

int32_t Assembly-CSharp.dll::RTG::GizmoTransformAxisMap3D::
        GizmoTransformAxisMap3D_get_MappedAxisIndex
                  (GizmoTransformAxisMap3D *this,MethodInfo *method)

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

