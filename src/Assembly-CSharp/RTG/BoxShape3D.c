
/* Void AlignDepth(Vector3) */

void Assembly-CSharp.dll::RTG::BoxShape3D::BoxShape3D_AlignDepth
               (BoxShape3D *this,Vector3 *axis,MethodInfo *method)

{
  pVVar1 = BoxShape3D_get_Look((Vector3 *)&QStack_2,this,(MethodInfo *)0x0);
  uVar3._0_4_ = pVVar1->x;
  uVar3._4_4_ = pVVar1->y;
  fVar4 = pVVar1->z;
  pVVar1 = BoxShape3D_get_Right((Vector3 *)&QStack_2,this,(MethodInfo *)0x0);
  VStack_5.x = pVVar1->x;
  VStack_5.y = pVVar1->y;
  VStack_5.z = pVVar1->z;
  VStack_6.x = axis->x;
  VStack_6.y = axis->y;
  VStack_6.z = axis->z;
  QStack_2._0_8_ = uVar3;
  QStack_2.z = fVar4;
  pQVar7 = QuaternionEx::QuaternionEx_FromToRotation3D
                      (aQStack_8,(Vector3 *)&QStack_2,&VStack_6,&VStack_5,(MethodInfo *)0x0);
  fVar4 = (this->fields)._rotation.x;
  fVar9 = (this->fields)._rotation.y;
  fVar10 = (this->fields)._rotation.z;
  fVar11 = (this->fields)._rotation.w;
  fVar12 = pQVar7->x;
  fVar13 = pQVar7->y;
  fVar14 = pQVar7->z;
  fVar15 = pQVar7->w;
  QStack_2.z = (fVar15 * fVar10 + fVar14 * fVar11 + fVar12 * fVar9) - fVar13 * fVar4;
  QStack_2.w = ((fVar15 * fVar11 - fVar12 * fVar4) - fVar13 * fVar9) - fVar14 * fVar10;
  QStack_2.y = (fVar15 * fVar9 + fVar13 * fVar11 + fVar14 * fVar4) - fVar12 * fVar10;
  QStack_2.x = (fVar15 * fVar4 + fVar12 * fVar11 + fVar13 * fVar10) - fVar14 * fVar9;
  BoxShape3D_set_Rotation(this,&QStack_2,(MethodInfo *)0x0);
  return;
}


/* Void AlignHeight(Vector3) */

void Assembly-CSharp.dll::RTG::BoxShape3D::BoxShape3D_AlignHeight
               (BoxShape3D *this,Vector3 *axis,MethodInfo *method)

{
  pVVar1 = BoxShape3D_get_Up((Vector3 *)&QStack_2,this,(MethodInfo *)0x0);
  uVar3._0_4_ = pVVar1->x;
  uVar3._4_4_ = pVVar1->y;
  fVar4 = pVVar1->z;
  pVVar1 = BoxShape3D_get_Right((Vector3 *)&QStack_2,this,(MethodInfo *)0x0);
  VStack_5.x = pVVar1->x;
  VStack_5.y = pVVar1->y;
  VStack_5.z = pVVar1->z;
  VStack_6.x = axis->x;
  VStack_6.y = axis->y;
  VStack_6.z = axis->z;
  QStack_2._0_8_ = uVar3;
  QStack_2.z = fVar4;
  pQVar7 = QuaternionEx::QuaternionEx_FromToRotation3D
                      (aQStack_8,(Vector3 *)&QStack_2,&VStack_6,&VStack_5,(MethodInfo *)0x0);
  fVar4 = (this->fields)._rotation.x;
  fVar9 = (this->fields)._rotation.y;
  fVar10 = (this->fields)._rotation.z;
  fVar11 = (this->fields)._rotation.w;
  fVar12 = pQVar7->x;
  fVar13 = pQVar7->y;
  fVar14 = pQVar7->z;
  fVar15 = pQVar7->w;
  QStack_2.z = (fVar15 * fVar10 + fVar14 * fVar11 + fVar12 * fVar9) - fVar13 * fVar4;
  QStack_2.w = ((fVar15 * fVar11 - fVar12 * fVar4) - fVar13 * fVar9) - fVar14 * fVar10;
  QStack_2.y = (fVar15 * fVar9 + fVar13 * fVar11 + fVar14 * fVar4) - fVar12 * fVar10;
  QStack_2.x = (fVar15 * fVar4 + fVar12 * fVar11 + fVar13 * fVar10) - fVar14 * fVar9;
  BoxShape3D_set_Rotation(this,&QStack_2,(MethodInfo *)0x0);
  return;
}


/* Void AlignWidth(Vector3) */

void Assembly-CSharp.dll::RTG::BoxShape3D::BoxShape3D_AlignWidth
               (BoxShape3D *this,Vector3 *axis,MethodInfo *method)

{
  pVVar1 = BoxShape3D_get_Right((Vector3 *)&QStack_2,this,(MethodInfo *)0x0);
  uVar3._0_4_ = pVVar1->x;
  uVar3._4_4_ = pVVar1->y;
  fVar4 = pVVar1->z;
  pVVar1 = BoxShape3D_get_Up((Vector3 *)&QStack_2,this,(MethodInfo *)0x0);
  VStack_5.x = pVVar1->x;
  VStack_5.y = pVVar1->y;
  VStack_5.z = pVVar1->z;
  VStack_6.x = axis->x;
  VStack_6.y = axis->y;
  VStack_6.z = axis->z;
  QStack_2._0_8_ = uVar3;
  QStack_2.z = fVar4;
  pQVar7 = QuaternionEx::QuaternionEx_FromToRotation3D
                      (aQStack_8,(Vector3 *)&QStack_2,&VStack_6,&VStack_5,(MethodInfo *)0x0);
  fVar4 = (this->fields)._rotation.x;
  fVar9 = (this->fields)._rotation.y;
  fVar10 = (this->fields)._rotation.z;
  fVar11 = (this->fields)._rotation.w;
  fVar12 = pQVar7->x;
  fVar13 = pQVar7->y;
  fVar14 = pQVar7->z;
  fVar15 = pQVar7->w;
  QStack_2.z = (fVar15 * fVar10 + fVar14 * fVar11 + fVar12 * fVar9) - fVar13 * fVar4;
  QStack_2.w = ((fVar15 * fVar11 - fVar12 * fVar4) - fVar13 * fVar9) - fVar14 * fVar10;
  QStack_2.y = (fVar15 * fVar9 + fVar13 * fVar11 + fVar14 * fVar4) - fVar12 * fVar10;
  QStack_2.x = (fVar15 * fVar4 + fVar12 * fVar11 + fVar13 * fVar10) - fVar14 * fVar9;
  BoxShape3D_set_Rotation(this,&QStack_2,(MethodInfo *)0x0);
  return;
}


/* Boolean ContainsPoint(Vector3) */

bool Assembly-CSharp.dll::RTG::BoxShape3D::BoxShape3D_ContainsPoint
               (BoxShape3D *this,Vector3 *point,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__BoxMath);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uVar1._0_4_ = (this->fields)._center.x;
  uVar1._4_4_ = (this->fields)._center.y;
  fVar2 = (this->fields)._center.z;
  uVar3._0_4_ = (this->fields)._size.x;
  uVar3._4_4_ = (this->fields)._size.y;
  fVar4 = (this->fields)._size.z;
  uVar5._0_4_ = (this->fields)._rotation.x;
  uVar5._4_4_ = (this->fields)._rotation.y;
  uVar6._0_4_ = (this->fields)._rotation.z;
  uVar6._4_4_ = (this->fields)._rotation.w;
  uVar7._0_4_ = (this->fields)._epsilon._sizeEps.x;
  uVar7._4_4_ = (this->fields)._epsilon._sizeEps.y;
  fVar8 = (this->fields)._epsilon._sizeEps.z;
  if (*(int *)&(TypeInfo__RTG__BoxMath->_1).field_0x1c == 0) {
    FUN_?();
  }
  VStack_9.z = point->z;
  VStack_9.x = point->x;
  VStack_9.y = point->y;
  VStack_10._0_8_ = uVar7;
  VStack_10.z = fVar8;
  VStack_11._0_8_ = uVar3;
  VStack_11.z = fVar4;
  VStack_12._0_8_ = uVar1;
  VStack_12.z = fVar2;
  aQStack_13[0]._0_8_ = uVar5;
  aQStack_13[0]._8_8_ = uVar6;
  bVar14 = BoxMath::BoxMath_ContainsPoint
                    (&VStack_9,&VStack_12,&VStack_11,aQStack_13,(BoxEpsilon *)&VStack_10,
                     (MethodInfo *)0x0);
  return bVar14;
}


/* Void FromOBB(OBB) */

void Assembly-CSharp.dll::RTG::BoxShape3D::BoxShape3D_FromOBB
               (BoxShape3D *this,OBB *obb,MethodInfo *method)

{
  uVar1 = _UNK_?;
  fVar2 = (obb->_center).y;
  fVar3 = (obb->_center).z;
  fVar4 = (float)((uint)(obb->_size).z & _UNK_?);
  (this->fields)._center.x = (obb->_center).x;
  (this->fields)._center.y = fVar2;
  uVar5 = (obb->_size).x;
  uVar6 = (obb->_size).y;
  QStack_7.x = (obb->_rotation).x;
  QStack_7.y = (obb->_rotation).y;
  QStack_7.z = (obb->_rotation).z;
  QStack_7.w = (obb->_rotation).w;
  (this->fields)._center.z = fVar3;
  (this->fields)._size.x = (float)(uVar5 & uVar1);
  (this->fields)._size.y = (float)(uVar6 & uVar1);
  (this->fields)._size.z = fVar4;
  BoxShape3D_set_Rotation(this,&QStack_7,(MethodInfo *)0x0);
  return;
}


/* AABB GetAABB() */

AABB * Assembly-CSharp.dll::RTG::BoxShape3D::BoxShape3D_GetAABB
                 (AABB *__return_storage_ptr__,BoxShape3D *this,MethodInfo *method)

{
  *(undefined2 *)&__return_storage_ptr__->field_0x19 = 0;
  __return_storage_ptr__->field_0x1b = 0;
  fVar1 = (this->fields)._center.z;
  fVar2 = (this->fields)._center.y;
  (__return_storage_ptr__->_center).x = (this->fields)._center.x;
  (__return_storage_ptr__->_center).y = fVar2;
  fVar2 = (this->fields)._size.x;
  fVar3 = (this->fields)._size.y;
  (__return_storage_ptr__->_center).z = fVar1;
  fVar1 = (this->fields)._size.z;
  (__return_storage_ptr__->_size).x = fVar2;
  (__return_storage_ptr__->_size).y = fVar3;
  (__return_storage_ptr__->_size).z = fVar1;
  __return_storage_ptr__->_isValid = 1;
  return __return_storage_ptr__;
}


/* Vector3 GetFaceCenter(BoxFace) */

Vector3 * Assembly-CSharp.dll::RTG::BoxShape3D::BoxShape3D_GetFaceCenter
                    (Vector3 *__return_storage_ptr__,BoxShape3D *this,BoxFace__Enum boxFace,
                    MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__BoxMath);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uVar1._0_4_ = (this->fields)._center.x;
  uVar1._4_4_ = (this->fields)._center.y;
  fVar2 = (this->fields)._center.z;
  uVar3._0_4_ = (this->fields)._size.x;
  uVar3._4_4_ = (this->fields)._size.y;
  fVar4 = (this->fields)._size.z;
  uVar5._0_4_ = (this->fields)._rotation.x;
  uVar5._4_4_ = (this->fields)._rotation.y;
  uVar6._0_4_ = (this->fields)._rotation.z;
  uVar6._4_4_ = (this->fields)._rotation.w;
  if (*(int *)&(TypeInfo__RTG__BoxMath->_1).field_0x1c == 0) {
    FUN_?();
  }
  VStack_7._0_8_ = uVar3;
  VStack_7.z = fVar4;
  VStack_8._0_8_ = uVar1;
  VStack_8.z = fVar2;
  aQStack_9[0]._0_8_ = uVar5;
  aQStack_9[0]._8_8_ = uVar6;
  pVVar10 = BoxMath::BoxMath_CalcBoxFaceCenter
                     (&VStack_11,&VStack_8,&VStack_7,aQStack_9,boxFace,(MethodInfo *)0x0);
  fVar4 = pVVar10->y;
  fVar2 = pVVar10->z;
  __return_storage_ptr__->x = pVVar10->x;
  __return_storage_ptr__->y = fVar4;
  __return_storage_ptr__->z = fVar2;
  return __return_storage_ptr__;
}


/* OBB GetOBB() */

OBB * Assembly-CSharp.dll::RTG::BoxShape3D::BoxShape3D_GetOBB
                (OBB *__return_storage_ptr__,BoxShape3D *this,MethodInfo *method)

{
  pfVar1 = (float *)(*(this->klass->vtable).GetAABB.methodPtr)
                              (auStack_2,this,(this->klass->vtable).GetAABB.method);
  *(undefined2 *)&__return_storage_ptr__->field_0x29 = 0;
  __return_storage_ptr__->field_0x2b = 0;
  fVar3 = *pfVar1;
  fVar4 = pfVar1[1];
  fVar5 = pfVar1[2];
  fVar6 = pfVar1[3];
  __return_storage_ptr__->_isValid = 1;
  uStack_7 = (undefined4)*(undefined8 *)(pfVar1 + 4);
  fStack_8 = (float)((ulonglong)*(undefined8 *)(pfVar1 + 4) >> 0x20);
  (__return_storage_ptr__->_center).x = fVar6;
  (__return_storage_ptr__->_center).y = (float)uStack_7;
  fVar6 = (this->fields)._rotation.x;
  fVar9 = (this->fields)._rotation.y;
  fVar10 = (this->fields)._rotation.z;
  fVar11 = (this->fields)._rotation.w;
  (__return_storage_ptr__->_size).x = fVar3;
  (__return_storage_ptr__->_size).y = fVar4;
  (__return_storage_ptr__->_center).z = fStack_8;
  (__return_storage_ptr__->_rotation).x = fVar6;
  (__return_storage_ptr__->_rotation).y = fVar9;
  (__return_storage_ptr__->_rotation).z = fVar10;
  (__return_storage_ptr__->_rotation).w = fVar11;
  (__return_storage_ptr__->_size).z = fVar5;
  return __return_storage_ptr__;
}


/* Single GetSizeAlongDirection(Vector3) */

float Assembly-CSharp.dll::RTG::BoxShape3D::BoxShape3D_GetSizeAlongDirection
                (BoxShape3D *this,Vector3 *direction,MethodInfo *method)

{
  fVar1 = (this->fields)._rotation.x;
  fVar2 = (this->fields)._rotation.y;
  fVar3 = (this->fields)._rotation.z;
  fVar4 = (this->fields)._rotation.w;
  uVar5 = (this->fields)._size.x;
  uVar6 = (this->fields)._size.y;
  fVar7 = fVar2 + fVar2;
  fVar8 = fVar3 + fVar3;
  fVar9 = (fVar1 + fVar1) * fVar1;
  fVar10 = (fVar1 + fVar1) * fVar4;
  uVar11 = direction->x;
  uVar12 = direction->y;
  fVar13 = (this->fields)._size.z;
  uVar14 = (this->fields)._size.x;
  return (float)((uint)(((_UNK_? - (fVar8 * fVar3 + fVar7 * fVar2)) * (float)uVar5 +
                         (fVar7 * fVar1 - fVar8 * fVar4) * (float)uVar6 +
                        (fVar7 * fVar4 + fVar8 * fVar1) * fVar13) * (float)uVar11 +
                        ((_UNK_? - (fVar8 * fVar3 + fVar9)) * (float)uVar6 +
                         (fVar8 * fVar4 + fVar7 * fVar1) * (float)uVar14 +
                        (fVar8 * fVar2 - fVar10) * fVar13) * (float)uVar12 +
                       ((fVar8 * fVar1 - fVar7 * fVar4) * (float)uVar14 +
                        (fVar10 + fVar8 * fVar2) * (float)uVar6 +
                       (_UNK_? - (fVar7 * fVar2 + fVar9)) * fVar13) * direction->z) &
                _UNK_?);
}


/* Boolean Raycast(Ray, Single ByRef) */

bool Assembly-CSharp.dll::RTG::BoxShape3D::BoxShape3D_Raycast
               (BoxShape3D *this,Ray *ray,float *t,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__BoxMath);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uVar1._0_4_ = (this->fields)._center.x;
  uVar1._4_4_ = (this->fields)._center.y;
  fVar2 = (this->fields)._center.z;
  uVar3._0_4_ = (this->fields)._size.x;
  uVar3._4_4_ = (this->fields)._size.y;
  fVar4 = (this->fields)._size.z;
  uVar5._0_4_ = (this->fields)._rotation.x;
  uVar5._4_4_ = (this->fields)._rotation.y;
  uVar6._0_4_ = (this->fields)._rotation.z;
  uVar6._4_4_ = (this->fields)._rotation.w;
  uVar7._0_4_ = (this->fields)._epsilon._sizeEps.x;
  uVar7._4_4_ = (this->fields)._epsilon._sizeEps.y;
  fVar8 = (this->fields)._epsilon._sizeEps.z;
  if (*(int *)&(TypeInfo__RTG__BoxMath->_1).field_0x1c == 0) {
    FUN_?();
  }
  aRStack_9[0].m_Origin.x = (ray->m_Origin).x;
  aRStack_9[0].m_Origin.y = (ray->m_Origin).y;
  aRStack_9[0]._8_8_ = *(undefined8 *)&(ray->m_Origin).z;
  aRStack_9[0].m_Direction.y = (ray->m_Direction).y;
  aRStack_9[0].m_Direction.z = (ray->m_Direction).z;
  VStack_10._0_8_ = uVar7;
  VStack_10.z = fVar8;
  VStack_11._0_8_ = uVar3;
  VStack_11.z = fVar4;
  VStack_12._0_8_ = uVar1;
  VStack_12.z = fVar2;
  QStack_13._0_8_ = uVar5;
  QStack_13._8_8_ = uVar6;
  bVar14 = BoxMath::BoxMath_Raycast_1
                    (aRStack_9,t,&VStack_12,&VStack_11,&QStack_13,(BoxEpsilon *)&VStack_10,
                     (MethodInfo *)0x0);
  return bVar14;
}


/* Void RenderSolid() */

void Assembly-CSharp.dll::RTG::BoxShape3D::BoxShape3D_RenderSolid
               (BoxShape3D *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Graphics);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__RTG__Singleton<RTG::MeshPool>__get_Get__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__Singleton<RTG::MeshPool>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__RTG__Singleton<RTG::MeshPool>->_1).field_0x1c == 0) {
    FUN_?();
  }
  pOVar1 = Singleton`1[System::Object]::Singleton_1_System_Object__1_get_Get
                     (MethodInfo__RTG__Singleton<RTG::MeshPool>__get_Get__);
  if (pOVar1 == (Object *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pOVar3 = pOVar1[2].klass;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (pOVar3 != (Object__Class *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pOVar3->_0).name != (char *)0x0) goto code_?;
  }
  CStack_4.r = _UNK_?;
  CStack_4.g = _UNK_?;
  CStack_4.b = _UNK_?;
  CStack_4.a = _UNK_?;
  pOVar3 = (Object__Class *)
           BoxMesh::BoxMesh_CreateBox
                     (_UNK_?,_UNK_?,_UNK_?,&CStack_4,(MethodInfo *)0x0);
  bVar5 = iRam_? != 0;
  pOVar1[2].klass = pOVar3;
  if (bVar5) {
    uVar6 = (uint)((ulonglong)(pOVar1 + 2) >> 0xc);
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
code_?:
  fStack_10 = (this->fields)._size.z;
  uStack_11._0_4_ = (this->fields)._size.x;
  uStack_11._4_4_ = (this->fields)._size.y;
  CStack_4.r = (this->fields)._center.x;
  CStack_4.g = (this->fields)._center.y;
  pOVar3 = pOVar1[2].klass;
  uStack_12._0_4_ = (this->fields)._rotation.x;
  uStack_12._4_4_ = (this->fields)._rotation.y;
  uStack_13._0_4_ = (this->fields)._rotation.z;
  uStack_13._4_4_ = (this->fields)._rotation.w;
  CStack_4.b = (this->fields)._center.z;
  MStack_14.m00 = 0.0;
  MStack_14.m10 = 0.0;
  MStack_14.m20 = 0.0;
  MStack_14.m30 = 0.0;
  MStack_14.m01 = 0.0;
  MStack_14.m11 = 0.0;
  MStack_14.m21 = 0.0;
  MStack_14.m31 = 0.0;
  MStack_14.m02 = 0.0;
  MStack_14.m12 = 0.0;
  MStack_14.m22 = 0.0;
  MStack_14.m32 = 0.0;
  MStack_14.m03 = 0.0;
  MStack_14.m13 = 0.0;
  MStack_14.m23 = 0.0;
  MStack_14.m33 = 0.0;
  pcVar2 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
    uVar15 = func_?(&UNK_?);
    FUN_?(uVar15,0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcRam_? = pcVar2;
  (*pcRam_?)(&CStack_4,&uStack_12,&uStack_11);
  if (*(int *)&(TypeInfo__UnityEngine__Graphics->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Graphics);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Graphics->_1).field_0x1c == 0) {
    FUN_?();
  }
  MStack_16.m00 = MStack_14.m00;
  MStack_16.m10 = MStack_14.m10;
  MStack_16.m20 = MStack_14.m20;
  MStack_16.m30 = MStack_14.m30;
  MStack_16.m01 = MStack_14.m01;
  MStack_16.m11 = MStack_14.m11;
  MStack_16.m21 = MStack_14.m21;
  MStack_16.m31 = MStack_14.m31;
  MStack_16.m02 = MStack_14.m02;
  MStack_16.m12 = MStack_14.m12;
  MStack_16.m22 = MStack_14.m22;
  MStack_16.m32 = MStack_14.m32;
  MStack_16.m03 = MStack_14.m03;
  MStack_16.m13 = MStack_14.m13;
  MStack_16.m23 = MStack_14.m23;
  MStack_16.m33 = MStack_14.m33;
  UnityEngine.CoreModule.dll::UnityEngine::Graphics::Graphics_DrawMeshNow_1
            ((Mesh *)pOVar3,&MStack_16,-1,(MethodInfo *)0x0);
  return;
}


/* Void RenderWire() */

void Assembly-CSharp.dll::RTG::BoxShape3D::BoxShape3D_RenderWire
               (BoxShape3D *this,MethodInfo *method)

{
  fStack_1 = (float)(uint)fStack_1._0_1_;
  puVar2 = (undefined8 *)(*(this->klass->vtable).GetAABB.methodPtr)(auStack_3);
  auStack_4._24_4_ = (this->fields)._rotation.x;
  auStack_4._28_4_ = (this->fields)._rotation.y;
  fVar5 = (this->fields)._rotation.z;
  fVar6 = (this->fields)._rotation.w;
  auStack_4._32_4_ = (this->fields)._rotation.z;
  auStack_4._36_4_ = (this->fields)._rotation.w;
  fStack_1._0_1_ = 1;
  uStack_7 = *(undefined4 *)puVar2;
  uStack_8 = *(undefined4 *)((longlong)puVar2 + 4);
  auStack_4._0_8_ = *puVar2;
  pfVar9 = (float *)(puVar2 + 1);
  auStack_4._8_4_ = *pfVar9;
  uStack_10 = *(undefined4 *)((longlong)puVar2 + 0xc);
  uVar11 = *(undefined8 *)((longlong)puVar2 + 0xc);
  uVar12._0_4_ = pfVar9[0];
  uVar12._4_4_ = pfVar9[1];
  uVar13._0_4_ = pfVar9[0];
  uVar13._4_4_ = pfVar9[1];
  uStack_14 = (undefined4)puVar2[2];
  fStack_15 = (float)((ulonglong)puVar2[2] >> 0x20);
  auStack_4._20_4_ = fStack_15;
  pBVar16 = (this->fields)._wireRenderDesc;
  auStack_4._12_4_ = (undefined4)uVar11;
  auStack_4._16_4_ = (undefined4)((ulonglong)uVar11 >> 0x20);
  fStack_17 = (float)auStack_4._8_4_;
  if (pBVar16 != (BoxShape3D_WireRenderDescriptor *)0x0) {
    if ((pBVar16->fields)._wireMode == 0) {
      auStack_3._20_4_ = fStack_15;
      auStack_3._16_4_ = (float)auStack_4._16_4_;
      fStack_18 = fStack_1;
      auStack_3._0_8_ = *puVar2;
      auStack_3._8_8_ = uVar12;
      auStack_3._24_8_ = auStack_4._24_8_;
      fStack_19 = fVar5;
      fStack_20 = fVar6;
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Graphics);
        LOCK();
        UNLOCK();
        FUN_?(&MethodInfo__RTG__Singleton<RTG::MeshPool>__get_Get__);
        LOCK();
        UNLOCK();
        FUN_?(&TypeInfo__RTG__Singleton<RTG::MeshPool>);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__RTG__Singleton<RTG::MeshPool>->_1).field_0x1c == 0) {
        FUN_?();
      }
      this_00 = (MeshPool *)
                Singleton`1[System::Object]::Singleton_1_System_Object__1_get_Get
                          (MethodInfo__RTG__Singleton<RTG::MeshPool>__get_Get__);
      if (this_00 != (MeshPool *)0x0) {
        mesh = MeshPool::MeshPool_get_UnitWireBox(this_00,(MethodInfo *)0x0);
        pMVar21 = OBB::OBB_GetUnitBoxTransform
                            ((Matrix4x4 *)auStack_4,(OBB *)auStack_3,(MethodInfo *)0x0);
        uVar11._0_4_ = pMVar21->m00;
        uVar11._4_4_ = pMVar21->m10;
        uVar22 = pMVar21->m20;
        uVar23 = pMVar21->m30;
        uVar24 = pMVar21->m01;
        uVar25 = pMVar21->m11;
        uVar26._0_4_ = pMVar21->m21;
        uVar26._4_4_ = pMVar21->m31;
        uVar27._0_4_ = pMVar21->m02;
        uVar27._4_4_ = pMVar21->m12;
        uVar28._0_4_ = pMVar21->m22;
        uVar28._4_4_ = pMVar21->m32;
        uVar29._0_4_ = pMVar21->m03;
        uVar29._4_4_ = pMVar21->m13;
        uVar30._0_4_ = pMVar21->m23;
        uVar30._4_4_ = pMVar21->m33;
        if (*(int *)&(TypeInfo__UnityEngine__Graphics->_1).field_0x1c == 0) {
          FUN_?();
        }
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__UnityEngine__Graphics);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (*(int *)&(TypeInfo__UnityEngine__Graphics->_1).field_0x1c == 0) {
          FUN_?();
        }
        auStack_4._0_8_ = uVar11;
        auStack_4._8_4_ = uVar22;
        auStack_4._12_4_ = uVar23;
        auStack_4._16_4_ = uVar24;
        auStack_4._20_4_ = uVar25;
        auStack_4._24_8_ = uVar26;
        auStack_4._32_8_ = uVar27;
        _fStack_b0 = uVar28;
        uStack_31 = uVar29;
        uStack_32 = uVar30;
        UnityEngine.CoreModule.dll::UnityEngine::Graphics::Graphics_DrawMeshNow_1
                  (mesh,(Matrix4x4 *)auStack_4,-1,(MethodInfo *)0x0);
        return;
      }
    }
    else if (pBVar16 != (BoxShape3D_WireRenderDescriptor *)0x0) {
      auStack_3._20_4_ = fStack_15;
      auStack_3._16_4_ = (float)auStack_4._16_4_;
      fStack_18 = fStack_1;
      auStack_3._0_8_ = auStack_4._0_8_;
      auStack_3._8_8_ = uVar13;
      auStack_3._24_8_ = auStack_4._24_8_;
      fStack_19 = fVar5;
      fStack_20 = fVar6;
      GraphicsEx::GraphicsEx_DrawWireCornerBox_1
                ((OBB *)auStack_3,(pBVar16->fields)._cornerLinePercentage,(MethodInfo *)0x0);
      return;
    }
  }
  FUN_?();
  pcVar33 = (code *)swi(3);
  (*pcVar33)();
  return;
}


/* Void SetFaceCenter(BoxFace, Vector3) */

void Assembly-CSharp.dll::RTG::BoxShape3D::BoxShape3D_SetFaceCenter
               (BoxShape3D *this,BoxFace__Enum boxFace,Vector3 *newCenter,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__BoxMath);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uVar1._0_4_ = (this->fields)._center.x;
  uVar1._4_4_ = (this->fields)._center.y;
  fVar2 = (this->fields)._center.z;
  uVar3._0_4_ = (this->fields)._size.x;
  uVar3._4_4_ = (this->fields)._size.y;
  fVar4 = (this->fields)._size.z;
  uVar5._0_4_ = (this->fields)._rotation.x;
  uVar5._4_4_ = (this->fields)._rotation.y;
  uVar6._0_4_ = (this->fields)._rotation.z;
  uVar6._4_4_ = (this->fields)._rotation.w;
  if (*(int *)&(TypeInfo__RTG__BoxMath->_1).field_0x1c == 0) {
    FUN_?();
  }
  VStack_7._0_8_ = uVar3;
  VStack_7.z = fVar4;
  VStack_8._0_8_ = uVar1;
  VStack_8.z = fVar2;
  aQStack_9[0]._0_8_ = uVar5;
  aQStack_9[0]._8_8_ = uVar6;
  pVVar10 = BoxMath::BoxMath_CalcBoxFaceCenter
                      (&VStack_11,&VStack_8,&VStack_7,aQStack_9,boxFace,(MethodInfo *)0x0);
  uVar12 = pVVar10->x;
  uVar13 = pVVar10->y;
  uVar14 = newCenter->x;
  uVar15 = newCenter->y;
  uVar16 = (this->fields)._center.x;
  fVar2 = (this->fields)._center.y;
  fVar4 = (this->fields)._center.z;
  fVar17 = pVVar10->z;
  fVar18 = newCenter->z;
  (this->fields)._center.x = ((float)uVar16 - (float)uVar12) + (float)uVar14;
  (this->fields)._center.y = (fVar2 - (float)uVar13) + (float)uVar15;
  (this->fields)._center.z = (fVar4 - fVar17) + fVar18;
  return;
}


/* BoxShape3D() */

void Assembly-CSharp.dll::RTG::BoxShape3D::BoxShape3D__ctor(BoxShape3D *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__BoxShape3D__WireRenderDescriptor);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pBVar1 = (BoxShape3D_WireRenderDescriptor *)
           FUN_?(TypeInfo__RTG__BoxShape3D__WireRenderDescriptor);
  bVar2 = iRam_? != 0;
  (pBVar1->fields)._cornerLinePercentage = 0.2;
  (this->fields)._wireRenderDesc = pBVar1;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&this->fields >> 0xc);
    uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
    do {
      uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
      puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar2 = cRam_? == '\0';
  pVVar7 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar8 = (pVVar7->oneVector).y;
  fVar9 = (pVVar7->oneVector).z;
  (this->fields)._size.x = (pVVar7->oneVector).x;
  (this->fields)._size.y = fVar8;
  (this->fields)._size.z = fVar9;
  if (bVar2) {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar2 = cRam_? == '\0';
  pVVar7 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar8 = (pVVar7->zeroVector).y;
  fVar9 = (pVVar7->zeroVector).z;
  (this->fields)._center.x = (pVVar7->zeroVector).x;
  (this->fields)._center.y = fVar8;
  (this->fields)._center.z = fVar9;
  if (bVar2) {
    FUN_?(&TypeInfo__UnityEngine__Quaternion);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pQVar10 = TypeInfo__UnityEngine__Quaternion->static_fields;
  fVar9 = (pQVar10->identityQuaternion).y;
  fVar8 = (pQVar10->identityQuaternion).z;
  fVar11 = (pQVar10->identityQuaternion).w;
  (this->fields)._rotation.x = (pQVar10->identityQuaternion).x;
  (this->fields)._rotation.y = fVar9;
  (this->fields)._rotation.z = fVar8;
  (this->fields)._rotation.w = fVar11;
  return;
}


/* Vector3 get_Extents() */

Vector3 * Assembly-CSharp.dll::RTG::BoxShape3D::BoxShape3D_get_Extents
                    (Vector3 *__return_storage_ptr__,BoxShape3D *this,MethodInfo *method)

{
  uVar1 = (this->fields)._size.x;
  fVar2 = (this->fields)._size.y * _UNK_?;
  fVar3 = (this->fields)._size.z * _UNK_?;
  __return_storage_ptr__->x = (float)uVar1 * _UNK_?;
  __return_storage_ptr__->y = fVar2;
  __return_storage_ptr__->z = fVar3;
  return __return_storage_ptr__;
}


/* Vector3 get_Look() */

Vector3 * Assembly-CSharp.dll::RTG::BoxShape3D::BoxShape3D_get_Look
                    (Vector3 *__return_storage_ptr__,BoxShape3D *this,MethodInfo *method)

{
  fVar1 = (this->fields)._rotation.x;
  fVar2 = (this->fields)._rotation.y;
  fVar3 = (this->fields)._rotation.z;
  fVar4 = (this->fields)._rotation.w;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar5 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar6 = fVar3 + fVar3;
  fVar7 = fVar2 + fVar2;
  fVar8 = (fVar1 + fVar1) * fVar1;
  uVar9 = (pVVar5->forwardVector).x;
  uVar10 = (pVVar5->forwardVector).y;
  fVar11 = (pVVar5->forwardVector).z;
  fVar12 = (fVar1 + fVar1) * fVar4;
  fVar13 = _UNK_? - (fVar6 * fVar3 + fVar8);
  fVar8 = _UNK_? - (fVar7 * fVar2 + fVar8);
  __return_storage_ptr__->x =
       (_UNK_? - (fVar6 * fVar3 + fVar7 * fVar2)) * (float)uVar9 +
       (fVar7 * fVar1 - fVar6 * fVar4) * (float)uVar10 + (fVar7 * fVar4 + fVar6 * fVar1) * fVar11;
  __return_storage_ptr__->y =
       fVar13 * (float)uVar10 + (fVar6 * fVar4 + fVar7 * fVar1) * (float)uVar9 +
       (fVar6 * fVar2 - fVar12) * fVar11;
  __return_storage_ptr__->z =
       (fVar6 * fVar1 - fVar7 * fVar4) * (float)uVar9 + (fVar12 + fVar6 * fVar2) * (float)uVar10 +
       fVar8 * fVar11;
  return __return_storage_ptr__;
}


/* Vector3 get_Max() */

Vector3 * Assembly-CSharp.dll::RTG::BoxShape3D::BoxShape3D_get_Max
                    (Vector3 *__return_storage_ptr__,BoxShape3D *this,MethodInfo *method)

{
  uVar1 = (this->fields)._center.x;
  uVar2 = (this->fields)._center.y;
  uVar3 = (this->fields)._size.x;
  fVar4 = (this->fields)._size.y * _UNK_?;
  fVar5 = (this->fields)._size.z * _UNK_?;
  fVar6 = (this->fields)._center.z;
  __return_storage_ptr__->x = (float)uVar3 * _UNK_? + (float)uVar1;
  __return_storage_ptr__->y = fVar4 + (float)uVar2;
  __return_storage_ptr__->z = fVar5 + fVar6;
  return __return_storage_ptr__;
}


/* Vector3 get_Min() */

Vector3 * Assembly-CSharp.dll::RTG::BoxShape3D::BoxShape3D_get_Min
                    (Vector3 *__return_storage_ptr__,BoxShape3D *this,MethodInfo *method)

{
  uVar1 = (this->fields)._size.x;
  uVar2 = (this->fields)._center.x;
  fVar3 = (this->fields)._center.y;
  fVar4 = (this->fields)._center.z;
  fVar5 = (this->fields)._size.y * _UNK_?;
  fVar6 = (this->fields)._size.z * _UNK_?;
  __return_storage_ptr__->x = (float)uVar2 - (float)uVar1 * _UNK_?;
  __return_storage_ptr__->y = fVar3 - fVar5;
  __return_storage_ptr__->z = fVar4 - fVar6;
  return __return_storage_ptr__;
}


/* Vector3 get_Right() */

Vector3 * Assembly-CSharp.dll::RTG::BoxShape3D::BoxShape3D_get_Right
                    (Vector3 *__return_storage_ptr__,BoxShape3D *this,MethodInfo *method)

{
  fVar1 = (this->fields)._rotation.x;
  fVar2 = (this->fields)._rotation.y;
  fVar3 = (this->fields)._rotation.z;
  fVar4 = (this->fields)._rotation.w;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar5 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar6 = fVar3 + fVar3;
  fVar7 = fVar2 + fVar2;
  fVar8 = (fVar1 + fVar1) * fVar1;
  uVar9 = (pVVar5->rightVector).x;
  uVar10 = (pVVar5->rightVector).y;
  fVar11 = (pVVar5->rightVector).z;
  fVar12 = (fVar1 + fVar1) * fVar4;
  fVar13 = _UNK_? - (fVar6 * fVar3 + fVar8);
  fVar8 = _UNK_? - (fVar7 * fVar2 + fVar8);
  __return_storage_ptr__->x =
       (_UNK_? - (fVar6 * fVar3 + fVar7 * fVar2)) * (float)uVar9 +
       (fVar7 * fVar1 - fVar6 * fVar4) * (float)uVar10 + (fVar7 * fVar4 + fVar6 * fVar1) * fVar11;
  __return_storage_ptr__->y =
       fVar13 * (float)uVar10 + (fVar6 * fVar4 + fVar7 * fVar1) * (float)uVar9 +
       (fVar6 * fVar2 - fVar12) * fVar11;
  __return_storage_ptr__->z =
       (fVar6 * fVar1 - fVar7 * fVar4) * (float)uVar9 + (fVar12 + fVar6 * fVar2) * (float)uVar10 +
       fVar8 * fVar11;
  return __return_storage_ptr__;
}


/* Vector3 get_Up() */

Vector3 * Assembly-CSharp.dll::RTG::BoxShape3D::BoxShape3D_get_Up
                    (Vector3 *__return_storage_ptr__,BoxShape3D *this,MethodInfo *method)

{
  fVar1 = (this->fields)._rotation.x;
  fVar2 = (this->fields)._rotation.y;
  fVar3 = (this->fields)._rotation.z;
  fVar4 = (this->fields)._rotation.w;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar5 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar6 = fVar3 + fVar3;
  fVar7 = fVar2 + fVar2;
  fVar8 = (fVar1 + fVar1) * fVar1;
  uVar9 = (pVVar5->upVector).x;
  uVar10 = (pVVar5->upVector).y;
  fVar11 = (pVVar5->upVector).z;
  fVar12 = (fVar1 + fVar1) * fVar4;
  fVar13 = _UNK_? - (fVar6 * fVar3 + fVar8);
  fVar8 = _UNK_? - (fVar7 * fVar2 + fVar8);
  __return_storage_ptr__->x =
       (_UNK_? - (fVar6 * fVar3 + fVar7 * fVar2)) * (float)uVar9 +
       (fVar7 * fVar1 - fVar6 * fVar4) * (float)uVar10 + (fVar7 * fVar4 + fVar6 * fVar1) * fVar11;
  __return_storage_ptr__->y =
       fVar13 * (float)uVar10 + (fVar6 * fVar4 + fVar7 * fVar1) * (float)uVar9 +
       (fVar6 * fVar2 - fVar12) * fVar11;
  __return_storage_ptr__->z =
       (fVar6 * fVar1 - fVar7 * fVar4) * (float)uVar9 + (fVar12 + fVar6 * fVar2) * (float)uVar10 +
       fVar8 * fVar11;
  return __return_storage_ptr__;
}


/* Void set_Max(Vector3) */

void Assembly-CSharp.dll::RTG::BoxShape3D::BoxShape3D_set_Max
               (BoxShape3D *this,Vector3 *value,MethodInfo *method)

{
  uVar1 = (this->fields)._size.x;
  uVar2 = (this->fields)._center.x;
  uVar3 = (this->fields)._center.y;
  fVar4 = (float)uVar2 - (float)uVar1 * _UNK_?;
  fVar5 = (float)uVar3 - (this->fields)._size.y * _UNK_?;
  fVar6 = (this->fields)._center.z - (this->fields)._size.z * _UNK_?;
  uVar7 = value->x;
  uVar8 = value->y;
  fVar9 = (fVar6 + value->z) * _UNK_?;
  fVar10 = (fVar5 + (float)uVar8) * _UNK_?;
  (this->fields)._center.x = (fVar4 + (float)uVar7) * _UNK_?;
  (this->fields)._center.y = fVar10;
  (this->fields)._center.z = fVar9;
  fVar9 = value->z;
  (this->fields)._size.x = (float)uVar7 - fVar4;
  (this->fields)._size.y = (float)uVar8 - fVar5;
  (this->fields)._size.z = fVar9 - fVar6;
  return;
}


/* Void set_Min(Vector3) */

void Assembly-CSharp.dll::RTG::BoxShape3D::BoxShape3D_set_Min
               (BoxShape3D *this,Vector3 *value,MethodInfo *method)

{
  uVar1 = (this->fields)._center.x;
  uVar2 = (this->fields)._center.y;
  uVar3 = (this->fields)._size.y;
  uVar4 = (this->fields)._size.x;
  fVar5 = (float)uVar4 * _UNK_? + (float)uVar1;
  fVar6 = (float)uVar3 * _UNK_? + (float)uVar2;
  fVar7 = (this->fields)._size.z * _UNK_? + (this->fields)._center.z;
  uVar8 = value->x;
  uVar9 = value->y;
  fVar10 = (fVar7 + value->z) * _UNK_?;
  fVar11 = (fVar6 + (float)uVar9) * _UNK_?;
  fVar12 = value->z;
  (this->fields)._center.x = (fVar5 + (float)uVar8) * _UNK_?;
  (this->fields)._center.y = fVar11;
  (this->fields)._center.z = fVar10;
  (this->fields)._size.x = fVar5 - (float)uVar8;
  (this->fields)._size.y = fVar6 - (float)uVar9;
  (this->fields)._size.z = fVar7 - fVar12;
  return;
}


/* Void set_Rotation(Quaternion) */

void Assembly-CSharp.dll::RTG::BoxShape3D::BoxShape3D_set_Rotation
               (BoxShape3D *this,Quaternion *value,MethodInfo *method)

{
  fStack_1 = value->x;
  fStack_2 = value->y;
  fStack_3 = value->z;
  fStack_4 = value->w;
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
  (this->fields)._rotation.x = fStack_1;
  (this->fields)._rotation.y = fStack_2;
  (this->fields)._rotation.z = fStack_3;
  (this->fields)._rotation.w = fStack_4;
  return;
}


/* Void set_Size(Vector3) */

void Assembly-CSharp.dll::RTG::BoxShape3D::BoxShape3D_set_Size
               (BoxShape3D *this,Vector3 *value,MethodInfo *method)

{
  uVar1 = value->y;
  uVar2 = value->x;
  fVar3 = (float)((uint)value->z & _UNK_?);
  uVar4 = uVar1 & _UNK_?;
  (this->fields)._size.x = (float)(uVar2 & _UNK_?);
  (this->fields)._size.y = (float)uVar4;
  (this->fields)._size.z = fVar3;
  return;
}


/* Void set_SizeEps(Vector3) */

void Assembly-CSharp.dll::RTG::BoxShape3D::BoxShape3D_set_SizeEps
               (BoxShape3D *this,Vector3 *value,MethodInfo *method)

{
  uVar1 = value->y;
  uVar2 = value->x;
  fVar3 = (float)((uint)value->z & _UNK_?);
  uVar4 = uVar1 & _UNK_?;
  (this->fields)._epsilon._sizeEps.x = (float)(uVar2 & _UNK_?);
  (this->fields)._epsilon._sizeEps.y = (float)uVar4;
  (this->fields)._epsilon._sizeEps.z = fVar3;
  return;
}

