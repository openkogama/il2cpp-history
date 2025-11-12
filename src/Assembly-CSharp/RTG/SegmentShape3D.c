
/* AABB GetAABB() */

AABB * Assembly-CSharp.dll::RTG::SegmentShape3D::SegmentShape3D_GetAABB
                 (AABB *__return_storage_ptr__,SegmentShape3D *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pointCloud = (IEnumerable_1_UnityEngine_Vector3_ *)FUN_?(TypeInfo__UnityEngine__Vector3,2)
  ;
  if (pointCloud != (IEnumerable_1_UnityEngine_Vector3_ *)0x0) {
    if (*(int *)&pointCloud[1].monitor != 0) {
      pointCloud[2].klass =
           *(IEnumerable_1_UnityEngine_Vector3___Class **)&(this->fields)._startPoint;
      *(float *)&pointCloud[2].monitor = (this->fields)._startPoint.z;
      if (1 < *(uint *)&pointCloud[1].monitor) {
        *(undefined8 *)((longlong)&pointCloud[2].monitor + 4) =
             *(undefined8 *)&(this->fields)._endPoint;
        *(float *)((longlong)&pointCloud[3].klass + 4) = (this->fields)._endPoint.z;
        (__return_storage_ptr__->_size).x = 0.0;
        (__return_storage_ptr__->_size).y = 0.0;
        *(undefined8 *)&(__return_storage_ptr__->_size).z = 0;
        (__return_storage_ptr__->_center).y = 0.0;
        (__return_storage_ptr__->_center).z = 0.0;
        *(undefined4 *)&__return_storage_ptr__->_isValid = 0;
        AABB::AABB__ctor_2(__return_storage_ptr__,pointCloud,(MethodInfo *)0x0);
        return __return_storage_ptr__;
      }
    }
    FUN_?();
    pcVar1 = (code *)swi(3);
    pAVar2 = (AABB *)(*pcVar1)();
    return pAVar2;
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  pAVar2 = (AABB *)(*pcVar1)();
  return pAVar2;
}


/* Boolean Raycast(Ray, Single ByRef) */

bool Assembly-CSharp.dll::RTG::SegmentShape3D::SegmentShape3D_Raycast
               (SegmentShape3D *this,Ray *ray,float *t,MethodInfo *method)

{
  fVar1 = (this->fields)._endPoint.z;
  fVar2 = (this->fields)._startPoint.z;
  cylinderRadius = (this->fields)._epsilon._raycastEps;
  uVar3._0_4_ = (this->fields)._endPoint.x;
  uVar3._4_4_ = (this->fields)._endPoint.y;
  uVar4._0_4_ = (this->fields)._startPoint.x;
  uVar4._4_4_ = (this->fields)._startPoint.y;
  VStack_5.z = (this->fields)._endPoint.z - (this->fields)._startPoint.z;
  VStack_5.y = uVar3._4_4_ - uVar4._4_4_;
  VStack_5.x = (float)uVar3 - (float)uVar4;
  VStack_6._0_8_ = uVar4;
  cylinderHeight = (float)FUN_?(&VStack_5);
  aRStack_7[0].m_Origin.x = (ray->m_Origin).x;
  aRStack_7[0].m_Origin.y = (ray->m_Origin).y;
  aRStack_7[0]._8_8_ = *(undefined8 *)&(ray->m_Origin).z;
  aRStack_7[0].m_Direction.y = (ray->m_Direction).y;
  aRStack_7[0].m_Direction.z = (ray->m_Direction).z;
  VStack_5._0_8_ = uVar3;
  VStack_5.z = fVar1;
  VStack_6._0_8_ = uVar4;
  VStack_6.z = fVar2;
  bVar8 = CylinderMath::CylinderMath_Raycast_1
                    (aRStack_7,t,&VStack_6,&VStack_5,cylinderRadius,cylinderHeight,
                     (CylinderEpsilon)0x0,(MethodInfo *)0x0);
  if (bVar8 == 0) {
    aRStack_7[0].m_Origin.x = (ray->m_Origin).x;
    aRStack_7[0].m_Origin.y = (ray->m_Origin).y;
    aRStack_7[0]._8_8_ = *(undefined8 *)&(ray->m_Origin).z;
    aRStack_7[0].m_Direction.y = (ray->m_Direction).y;
    aRStack_7[0].m_Direction.z = (ray->m_Direction).z;
    VStack_6._0_8_ = uVar4;
    VStack_6.z = fVar2;
    bVar8 = SphereMath::SphereMath_Raycast_1
                      (aRStack_7,t,&VStack_6,cylinderRadius,(SphereEpsilon)0x0,(MethodInfo *)0x0);
    if (bVar8 == 0) {
      aRStack_7[0].m_Origin.x = (ray->m_Origin).x;
      aRStack_7[0].m_Origin.y = (ray->m_Origin).y;
      aRStack_7[0]._8_8_ = *(undefined8 *)&(ray->m_Origin).z;
      aRStack_7[0].m_Direction.y = (ray->m_Direction).y;
      aRStack_7[0].m_Direction.z = (ray->m_Direction).z;
      VStack_6._0_8_ = uVar3;
      VStack_6.z = fVar1;
      bVar8 = SphereMath::SphereMath_Raycast_1
                        (aRStack_7,t,&VStack_6,cylinderRadius,(SphereEpsilon)0x0,(MethodInfo *)0x0
                        );
      return bVar8;
    }
  }
  return 1;
}


/* Void RenderWire() */

void Assembly-CSharp.dll::RTG::SegmentShape3D::SegmentShape3D_RenderWire
               (SegmentShape3D *this,MethodInfo *method)

{
  x = (this->fields)._endPoint.x;
  y = (this->fields)._endPoint.y;
  z = (this->fields)._endPoint.z;
  z_00 = (this->fields)._startPoint.z;
  x_00 = (this->fields)._startPoint.x;
  y_00 = (this->fields)._startPoint.y;
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar2 = func_?(&UNK_?);
    FUN_?(uVar2,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
  (*pcRam_?)(1);
  UnityEngine.CoreModule.dll::UnityEngine::GL::GL_Vertex3
            ((float)x_00,(float)y_00,z_00,(MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::GL::GL_Vertex3((float)x,(float)y,z,(MethodInfo *)0x0);
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar2 = func_?(&UNK_?);
    FUN_?(uVar2,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam_?)();
  return;
}


/* Void SetEndPtFromStart(Vector3, Single) */

void Assembly-CSharp.dll::RTG::SegmentShape3D::SegmentShape3D_SetEndPtFromStart
               (SegmentShape3D *this,Vector3 *dirDromStart,float offset,MethodInfo *method)

{
  uVar1 = (this->fields)._startPoint.x;
  uVar2 = (this->fields)._startPoint.y;
  uVar3 = dirDromStart->x;
  fVar4 = (float)uVar3 * offset + (float)uVar1;
  fVar5 = dirDromStart->y * offset + (float)uVar2;
  fVar6 = dirDromStart->z * offset + (this->fields)._startPoint.z;
  (this->fields)._endPoint.x = fVar4;
  (this->fields)._endPoint.y = fVar5;
  (this->fields)._endPoint.z = fVar6;
  fVar7 = (this->fields)._startPoint.z;
  (this->fields)._direction.x = fVar4 - (float)uVar1;
  (this->fields)._direction.y = fVar5 - (float)uVar2;
  (this->fields)._direction.z = fVar6 - fVar7;
  fVar7 = (float)FUN_?(&(this->fields)._direction);
  pVVar8 = &(this->fields)._direction;
  (this->fields)._length = fVar7;
  uStack_9._0_4_ = pVVar8->x;
  uStack_9._4_4_ = pVVar8->y;
  fStack_10 = (this->fields)._direction.z;
  fVar7 = (float)FUN_?(&uStack_9);
  if (fVar7 <= _UNK_?) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pVVar11 = TypeInfo__UnityEngine__Vector3->static_fields;
    fVar7 = (pVVar11->zeroVector).z;
    fVar6 = (pVVar11->zeroVector).y;
    pVVar8->x = (pVVar11->zeroVector).x;
    pVVar8->y = fVar6;
    (this->fields)._direction.z = fVar7;
    return;
  }
  uVar12 = pVVar8->x;
  fVar6 = (this->fields)._direction.y;
  fVar5 = (this->fields)._direction.z;
  pVVar8->x = (float)uVar12 / fVar7;
  pVVar8->y = fVar6 / fVar7;
  (this->fields)._direction.z = fVar5 / fVar7;
  return;
}


/* SegmentShape3D() */

void Assembly-CSharp.dll::RTG::SegmentShape3D::SegmentShape3D__ctor
               (SegmentShape3D *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  cVar1 = cRam_?;
  pVVar2 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar3 = (pVVar2->zeroVector).y;
  fVar4 = (pVVar2->zeroVector).z;
  (this->fields)._startPoint.x = (pVVar2->zeroVector).x;
  (this->fields)._startPoint.y = fVar3;
  (this->fields)._startPoint.z = fVar4;
  if (cVar1 == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cVar1 = '\x01';
    cRam_? = '\x01';
  }
  pVVar2 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar3 = (pVVar2->rightVector).y;
  fVar4 = (pVVar2->rightVector).z;
  (this->fields)._endPoint.x = (pVVar2->rightVector).x;
  (this->fields)._endPoint.y = fVar3;
  (this->fields)._endPoint.z = fVar4;
  if (cVar1 == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar2 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar3 = (pVVar2->rightVector).y;
  fVar4 = (pVVar2->rightVector).z;
  (this->fields)._direction.x = (pVVar2->rightVector).x;
  (this->fields)._direction.y = fVar3;
  (this->fields)._direction.z = fVar4;
  (this->fields)._length = 1.0;
  return;
}


/* Vector3 get_Direction() */

Vector3 * Assembly-CSharp.dll::RTG::SegmentShape3D::SegmentShape3D_get_Direction
                    (Vector3 *__return_storage_ptr__,SegmentShape3D *this,MethodInfo *method)

{
  fVar1 = (this->fields)._direction.z;
  fVar2 = (this->fields)._direction.y;
  __return_storage_ptr__->x = (this->fields)._direction.x;
  __return_storage_ptr__->y = fVar2;
  __return_storage_ptr__->z = fVar1;
  return __return_storage_ptr__;
}


/* Vector3 get_EndPoint() */

Vector3 * Assembly-CSharp.dll::RTG::SegmentShape3D::SegmentShape3D_get_EndPoint
                    (Vector3 *__return_storage_ptr__,SegmentShape3D *this,MethodInfo *method)

{
  fVar1 = (this->fields)._endPoint.z;
  fVar2 = (this->fields)._endPoint.y;
  __return_storage_ptr__->x = (this->fields)._endPoint.x;
  __return_storage_ptr__->y = fVar2;
  __return_storage_ptr__->z = fVar1;
  return __return_storage_ptr__;
}


/* Void set_Direction(Vector3) */

void Assembly-CSharp.dll::RTG::SegmentShape3D::SegmentShape3D_set_Direction
               (SegmentShape3D *this,Vector3 *value,MethodInfo *method)

{
  pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_normalized
                     (&VStack_2,value,method);
  fVar3 = (this->fields)._length;
  uVar4 = pVVar1->x;
  uVar5 = pVVar1->y;
  fVar6 = pVVar1->z;
  (this->fields)._direction.x = (float)uVar4;
  (this->fields)._direction.y = (float)uVar5;
  (this->fields)._direction.z = fVar6;
  uVar7 = (this->fields)._startPoint.x;
  uVar8 = (this->fields)._startPoint.y;
  fVar9 = (this->fields)._startPoint.z;
  (this->fields)._endPoint.x = fVar3 * (float)uVar4 + (float)uVar7;
  (this->fields)._endPoint.y = fVar3 * (float)uVar5 + (float)uVar8;
  (this->fields)._endPoint.z = fVar3 * fVar6 + fVar9;
  return;
}


/* Void set_EndPoint(Vector3) */

void Assembly-CSharp.dll::RTG::SegmentShape3D::SegmentShape3D_set_EndPoint
               (SegmentShape3D *this,Vector3 *value,MethodInfo *method)

{
  uVar1 = value->x;
  uVar2 = value->y;
  uVar3 = (this->fields)._startPoint.x;
  uVar4 = (this->fields)._startPoint.y;
  fVar5 = value->z;
  fVar6 = value->z;
  fVar7 = (this->fields)._startPoint.z;
  (this->fields)._endPoint.x = (float)uVar1;
  (this->fields)._endPoint.y = (float)uVar2;
  (this->fields)._endPoint.z = fVar6;
  (this->fields)._direction.x = (float)uVar1 - (float)uVar3;
  (this->fields)._direction.y = (float)uVar2 - (float)uVar4;
  (this->fields)._direction.z = fVar5 - fVar7;
  fVar5 = (float)FUN_?(&(this->fields)._direction);
  pVVar8 = &(this->fields)._direction;
  (this->fields)._length = fVar5;
  uStack_9._0_4_ = pVVar8->x;
  uStack_9._4_4_ = pVVar8->y;
  fStack_10 = (this->fields)._direction.z;
  fVar5 = (float)FUN_?(&uStack_9);
  if (fVar5 <= _UNK_?) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pVVar11 = TypeInfo__UnityEngine__Vector3->static_fields;
    fVar5 = (pVVar11->zeroVector).z;
    fVar7 = (pVVar11->zeroVector).y;
    pVVar8->x = (pVVar11->zeroVector).x;
    pVVar8->y = fVar7;
    (this->fields)._direction.z = fVar5;
    return;
  }
  uVar12 = pVVar8->x;
  fVar7 = (this->fields)._direction.y;
  fVar6 = (this->fields)._direction.z;
  pVVar8->x = (float)uVar12 / fVar5;
  pVVar8->y = fVar7 / fVar5;
  (this->fields)._direction.z = fVar6 / fVar5;
  return;
}


/* Void set_Length(Single) */

void Assembly-CSharp.dll::RTG::SegmentShape3D::SegmentShape3D_set_Length
               (SegmentShape3D *this,float value,MethodInfo *method)

{
  (this->fields)._length = (float)((uint)value & _UNK_?);
  uVar1 = (this->fields)._startPoint.x;
  uVar2 = (this->fields)._startPoint.y;
  uVar3 = (this->fields)._direction.x;
  fVar4 = (this->fields)._direction.y;
  fVar5 = (this->fields)._direction.z;
  fVar6 = (this->fields)._startPoint.z;
  (this->fields)._endPoint.x = (float)uVar3 * value + (float)uVar1;
  (this->fields)._endPoint.y = fVar4 * value + (float)uVar2;
  (this->fields)._endPoint.z = fVar5 * value + fVar6;
  return;
}


/* Void set_PtOnSegmentEps(Single) */

void Assembly-CSharp.dll::RTG::SegmentShape3D::SegmentShape3D_set_PtOnSegmentEps
               (SegmentShape3D *this,float value,MethodInfo *method)

{
  (this->fields)._epsilon._ptOnSegmentEps = (float)((uint)value & _UNK_?);
  return;
}


/* Void set_StartPoint(Vector3) */

void Assembly-CSharp.dll::RTG::SegmentShape3D::SegmentShape3D_set_StartPoint
               (SegmentShape3D *this,Vector3 *value,MethodInfo *method)

{
  uVar1 = value->x;
  uVar2 = value->y;
  fVar3 = value->z;
  fVar4 = (this->fields)._length;
  uVar5 = (this->fields)._direction.x;
  uVar6 = (this->fields)._direction.y;
  (this->fields)._startPoint.x = (float)uVar1;
  (this->fields)._startPoint.y = (float)uVar2;
  (this->fields)._startPoint.z = fVar3;
  fVar3 = (this->fields)._direction.z;
  fVar7 = value->z;
  (this->fields)._endPoint.x = fVar4 * (float)uVar5 + (float)uVar1;
  (this->fields)._endPoint.y = fVar4 * (float)uVar6 + (float)uVar2;
  (this->fields)._endPoint.z = fVar4 * fVar3 + fVar7;
  return;
}

