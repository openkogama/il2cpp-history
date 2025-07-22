
/* AABB GetAABB() */

AABB * Assembly-CSharp.dll::RTG::SegmentShape3D::SegmentShape3D_GetAABB
                 (AABB *__return_storage_ptr__,SegmentShape3D *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  pointCloud = (IEnumerable_1_UnityEngine_Vector3_ *)
               func_?(TypeInfo__UnityEngine__Vector3,2);
  if (pointCloud == (IEnumerable_1_UnityEngine_Vector3_ *)0x0) {
    func_?();
  }
  else {
    fVar1 = (this->fields)._startPoint.y;
    pIVar2 = (IEnumerable_1_UnityEngine_Vector3___Class *)(this->fields)._startPoint.z;
    if (pointCloud[1].monitor != (MonitorData *)0x0) {
      pointCloud[2].klass =
           (IEnumerable_1_UnityEngine_Vector3___Class *)(this->fields)._startPoint.x;
      pointCloud[2].monitor = (MonitorData *)fVar1;
      pointCloud[3].klass = pIVar2;
      pMVar3 = (MonitorData *)(this->fields)._endPoint.z;
      if ((MonitorData *)0x1 < pointCloud[1].monitor) {
        *(undefined8 *)&pointCloud[3].monitor = *(undefined8 *)&(this->fields)._endPoint;
        pointCloud[4].monitor = pMVar3;
        (__return_storage_ptr__->_size).x = 0.0;
        (__return_storage_ptr__->_size).y = 0.0;
        (__return_storage_ptr__->_size).z = 0.0;
        (__return_storage_ptr__->_center).x = 0.0;
        (__return_storage_ptr__->_center).y = 0.0;
        (__return_storage_ptr__->_center).z = 0.0;
        *(undefined4 *)&__return_storage_ptr__->_isValid = 0;
        AABB::AABB__ctor_2(__return_storage_ptr__,pointCloud,(MethodInfo *)0x0);
        return __return_storage_ptr__;
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  pAVar5 = (AABB *)(*pcVar4)();
  return pAVar5;
}


/* Boolean Raycast(Ray, Single ByRef) */

bool Assembly-CSharp.dll::RTG::SegmentShape3D::SegmentShape3D_Raycast
               (SegmentShape3D *this,Ray ray,float *t,MethodInfo *method)

{
  bVar1 = SegmentMath::SegmentMath_Raycast
                    (ray,t,(this->fields)._startPoint,(this->fields)._endPoint,
                     (this->fields)._epsilon,(MethodInfo *)0x0);
  return bVar1;
}


/* Void RenderWire() */

void Assembly-CSharp.dll::RTG::SegmentShape3D::SegmentShape3D_RenderWire
               (SegmentShape3D *this,MethodInfo *method)

{
  GLRenderer::GLRenderer_DrawLine3D
            ((this->fields)._startPoint,(this->fields)._endPoint,(MethodInfo *)0x0);
  return;
}


/* Void SetEndPtFromStart(Vector3, Single) */

void Assembly-CSharp.dll::RTG::SegmentShape3D::SegmentShape3D_SetEndPtFromStart
               (SegmentShape3D *this,Vector3 dirDromStart,float offset,MethodInfo *method)

{
  uVar1 = (this->fields)._startPoint.x;
  uVar2 = (this->fields)._startPoint.y;
  value.y = (float)uVar2 + dirDromStart.y * offset;
  value.x = (float)uVar1 + dirDromStart.x * offset;
  value.z = (this->fields)._startPoint.z + dirDromStart.z * offset;
  SegmentShape3D_set_EndPoint(this,value,(MethodInfo *)0x0);
  return;
}


/* SegmentShape3D() */

void Assembly-CSharp.dll::RTG::SegmentShape3D::SegmentShape3D__ctor
               (SegmentShape3D *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  pVVar1 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar2 = (pVVar1->zeroVector).y;
  fVar3 = (pVVar1->zeroVector).z;
  (this->fields)._startPoint.x = (pVVar1->zeroVector).x;
  (this->fields)._startPoint.y = fVar2;
  (this->fields)._startPoint.z = fVar3;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  pVVar1 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar2 = (pVVar1->rightVector).y;
  fVar3 = (pVVar1->rightVector).z;
  (this->fields)._endPoint.x = (pVVar1->rightVector).x;
  (this->fields)._endPoint.y = fVar2;
  (this->fields)._endPoint.z = fVar3;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  pVVar1 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar2 = (pVVar1->rightVector).y;
  fVar3 = (pVVar1->rightVector).z;
  (this->fields)._direction.x = (pVVar1->rightVector).x;
  (this->fields)._direction.y = fVar2;
  (this->fields)._direction.z = fVar3;
  (this->fields)._length = 1.0;
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_ESI);
  return;
}


/* Vector3 get_Direction() */

Vector3 * Assembly-CSharp.dll::RTG::SegmentShape3D::SegmentShape3D_get_Direction
                    (Vector3 *__return_storage_ptr__,SegmentShape3D *this,MethodInfo *method)

{
  fVar1 = (this->fields)._direction.y;
  fVar2 = (this->fields)._direction.z;
  __return_storage_ptr__->x = (this->fields)._direction.x;
  __return_storage_ptr__->y = fVar1;
  __return_storage_ptr__->z = fVar2;
  return __return_storage_ptr__;
}


/* SegmentEpsilon get_Epsilon() */

SegmentEpsilon
Assembly-CSharp.dll::RTG::SegmentShape3D::SegmentShape3D_get_Epsilon
          (SegmentShape3D *this,MethodInfo *method)

{
  return (this->fields)._epsilon;
}


/* Void set_Direction(Vector3) */

void Assembly-CSharp.dll::RTG::SegmentShape3D::SegmentShape3D_set_Direction
               (SegmentShape3D *this,Vector3 value,MethodInfo *method)

{
  pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                     (&VStack_2,value,(MethodInfo *)0x0);
  uVar3 = pVVar1->x;
  uVar4 = pVVar1->y;
  fVar5 = pVVar1->z;
  (this->fields)._direction.x = (float)uVar3;
  (this->fields)._direction.y = (float)uVar4;
  uVar6 = (this->fields)._startPoint.x;
  uVar7 = (this->fields)._startPoint.y;
  fVar8 = (this->fields)._length;
  (this->fields)._direction.z = fVar5;
  fVar9 = (this->fields)._startPoint.z;
  (this->fields)._endPoint.x = (float)uVar6 + (float)uVar3 * fVar8;
  (this->fields)._endPoint.y = (float)uVar7 + (float)uVar4 * fVar8;
  (this->fields)._endPoint.z = fVar9 + fVar5 * fVar8;
  return;
}


/* Void set_EndPoint(Vector3) */

void Assembly-CSharp.dll::RTG::SegmentShape3D::SegmentShape3D_set_EndPoint
               (SegmentShape3D *this,Vector3 value,MethodInfo *method)

{
  (this->fields)._endPoint.x = (float)(int)value._0_8_;
  (this->fields)._endPoint.y = (float)(int)((ulonglong)value._0_8_ >> 0x20);
  uVar1 = (this->fields)._startPoint.x;
  uVar2 = (this->fields)._startPoint.y;
  (this->fields)._endPoint.z = value.z;
  fVar3 = (this->fields)._startPoint.z;
  (this->fields)._direction.x = value.x - (float)uVar1;
  (this->fields)._direction.y = value.y - (float)uVar2;
  (this->fields)._direction.z = value.z - fVar3;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Math);
    cRam_? = '\x01';
  }
  fVar3 = (this->fields)._direction.x;
  fVar4 = (this->fields)._direction.y;
  fVar5 = (this->fields)._direction.z;
  if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__Math);
  }
  dVar6 = (double)(fVar4 * fVar4 + fVar3 * fVar3 + fVar5 * fVar5);
  if (dVar6 < 0.0) {
    func_?();
  }
  else {
    dVar6 = SQRT(dVar6);
  }
  (this->fields)._length = (float)dVar6;
  uVar7 = (this->fields)._direction.x;
  uVar8 = (this->fields)._direction.y;
  fVar3 = (this->fields)._direction.z;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Math);
    cRam_? = '\x01';
  }
  if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__Math);
  }
  dVar6 = (double)((float)uVar8 * (float)uVar8 + (float)uVar7 * (float)uVar7 + fVar3 * fVar3);
  if (dVar6 < 0.0) {
    func_?();
  }
  else {
    dVar6 = SQRT(dVar6);
  }
  fVar3 = (float)dVar6;
  if (fVar3 <= _UNK_?) {
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Vector3);
      cRam_? = '\x01';
    }
    pVVar9 = TypeInfo__UnityEngine__Vector3->static_fields;
    fVar4 = (pVVar9->zeroVector).y;
    fVar3 = (pVVar9->zeroVector).z;
    (this->fields)._direction.x = (pVVar9->zeroVector).x;
    (this->fields)._direction.y = fVar4;
    (this->fields)._direction.z = fVar3;
    return;
  }
  uVar10 = (this->fields)._direction.x;
  uVar11 = (this->fields)._direction.y;
  fVar4 = (this->fields)._direction.z;
  (this->fields)._direction.x = (float)uVar10 / fVar3;
  (this->fields)._direction.y = (float)uVar11 / fVar3;
  (this->fields)._direction.z = fVar4 / fVar3;
  return;
}


/* Void set_Length(Single) */

void Assembly-CSharp.dll::RTG::SegmentShape3D::SegmentShape3D_set_Length
               (SegmentShape3D *this,float value,MethodInfo *method)

{
  fVar1 = (this->fields)._startPoint.z;
  (this->fields)._length = (float)((uint)value & _UNK_?);
  uVar2 = (this->fields)._startPoint.x;
  uVar3 = (this->fields)._startPoint.y;
  uVar4 = (this->fields)._direction.x;
  uVar5 = (this->fields)._direction.y;
  fVar6 = (this->fields)._direction.z;
  (this->fields)._endPoint.x = (float)uVar2 + (float)uVar4 * value;
  (this->fields)._endPoint.y = (float)uVar3 + (float)uVar5 * value;
  (this->fields)._endPoint.z = fVar1 + fVar6 * value;
  return;
}


/* Void set_PtOnSegmentEps(Single) */

void Assembly-CSharp.dll::RTG::SegmentShape3D::SegmentShape3D_set_PtOnSegmentEps
               (SegmentShape3D *this,float value,MethodInfo *method)

{
  TorusEpsilon::TorusEpsilon_set_CylHrzRadius
            ((TorusEpsilon *)&(this->fields)._epsilon,value,(MethodInfo *)0x0);
  return;
}


/* Void set_StartPoint(Vector3) */

void Assembly-CSharp.dll::RTG::SegmentShape3D::SegmentShape3D_set_StartPoint
               (SegmentShape3D *this,Vector3 value,MethodInfo *method)

{
  (this->fields)._startPoint.x = (float)(int)value._0_8_;
  (this->fields)._startPoint.y = (float)(int)((ulonglong)value._0_8_ >> 0x20);
  uVar1 = (this->fields)._direction.x;
  uVar2 = (this->fields)._direction.y;
  (this->fields)._startPoint.z = value.z;
  fVar3 = (this->fields)._direction.z;
  fVar4 = (this->fields)._length;
  (this->fields)._endPoint.x = value.x + (float)uVar1 * fVar4;
  (this->fields)._endPoint.y = value.y + (float)uVar2 * fVar4;
  (this->fields)._endPoint.z = value.z + fVar3 * fVar4;
  return;
}

