
/* Void AlignCentralAxis(Vector3) */

void Assembly-CSharp.dll::RTG::CylinderShape3D::CylinderShape3D_AlignCentralAxis(CylinderShape3D *this,Vector3 *axis,MethodInfo *method)

{
  pVVar1 = TorusShape3D::TorusShape3D_get_Up(&VStack_2,(TorusShape3D *)this,(MethodInfo *)0x0);
  uVar3._0_4_ = pVVar1->x;
  uVar3._4_4_ = pVVar1->y;
  fVar4 = pVVar1->z;
  pVVar1 = TorusShape3D::TorusShape3D_get_Look(&VStack_2,(TorusShape3D *)this,(MethodInfo *)0x0);
  VStack_5.x = pVVar1->x;
  VStack_5.y = pVVar1->y;
  VStack_5.z = pVVar1->z;
  VStack_6.x = axis->x;
  VStack_6.y = axis->y;
  VStack_6.z = axis->z;
  VStack_2._0_8_ = uVar3;
  VStack_2.z = fVar4;
  pQVar7 = QuaternionEx::QuaternionEx_FromToRotation3D(aQStack_8,&VStack_2,&VStack_6,&VStack_5,(MethodInfo *)0x0);
  fVar4 = (this->fields)._rotation.x;
  fVar9 = (this->fields)._rotation.y;
  fVar10 = (this->fields)._rotation.z;
  fVar11 = (this->fields)._rotation.w;
  fVar12 = pQVar7->x;
  fVar13 = pQVar7->y;
  fVar14 = pQVar7->z;
  fVar15 = pQVar7->w;
  (this->fields)._rotation.x = (fVar15 * fVar4 + fVar12 * fVar11 + fVar13 * fVar10) - fVar14 * fVar9;
  (this->fields)._rotation.y = (fVar15 * fVar9 + fVar13 * fVar11 + fVar14 * fVar4) - fVar12 * fVar10;
  (this->fields)._rotation.z = (fVar15 * fVar10 + fVar14 * fVar11 + fVar12 * fVar9) - fVar13 * fVar4;
  (this->fields)._rotation.w = ((fVar15 * fVar11 - fVar12 * fVar4) - fVar13 * fVar9) - fVar14 * fVar10;
  return;
}


/* Boolean ContainsPoint(Vector3) */

bool Assembly-CSharp.dll::RTG::CylinderShape3D::CylinderShape3D_ContainsPoint(CylinderShape3D *this,Vector3 *point,MethodInfo *method)

{
  fVar1 = (this->fields)._baseCenter.z;
  uVar2._0_4_ = (this->fields)._baseCenter.x;
  uVar2._4_4_ = (this->fields)._baseCenter.y;
  pVVar3 = TorusShape3D::TorusShape3D_get_Up(aVStack_4,(TorusShape3D *)this,(MethodInfo *)0x0);
  fVar5 = (this->fields)._height;
  uVar6 = pVVar3->x;
  uVar7 = pVVar3->y;
  aVStack_4[0].z = point->z;
  aVStack_4[0].x = point->x;
  aVStack_4[0].y = point->y;
  VStack_8.z = fVar5 * pVVar3->z + fVar1;
  VStack_8.y = fVar5 * (float)uVar7 + uVar2._4_4_;
  VStack_8.x = fVar5 * (float)uVar6 + (float)uVar2;
  VStack_9._0_8_ = uVar2;
  VStack_9.z = fVar1;
  bVar10 = CylinderMath::CylinderMath_ContainsPoint_1(aVStack_4,&VStack_9,&VStack_8,(this->fields)._radius,(this->fields)._height,(this->fields)._epsilon,(MethodInfo *)0x0);
  return bVar10;
}


/* AABB GetAABB() */

AABB * Assembly-CSharp.dll::RTG::CylinderShape3D::CylinderShape3D_GetAABB(AABB *__return_storage_ptr__,CylinderShape3D *this,MethodInfo *method)

{
  (__return_storage_ptr__->_size).x = 0.0;
  (__return_storage_ptr__->_size).y = 0.0;
  *(undefined8 *)&(__return_storage_ptr__->_size).z = 0;
  bVar1 = cRam_? == '\0';
  (__return_storage_ptr__->_center).y = 0.0;
  (__return_storage_ptr__->_center).z = 0.0;
  *(undefined4 *)&__return_storage_ptr__->_isValid = 0;
  fVar2 = (this->fields)._radius;
  fVar2 = fVar2 + fVar2;
  if (bVar1) {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar3 = TypeInfo__UnityEngine__Vector3->static_fields;
  uStack_4._0_4_ = (pVVar3->zeroVector).x;
  uStack_4._4_4_ = (pVVar3->zeroVector).y;
  fVar5 = (pVVar3->zeroVector).z;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  fVar6 = (this->fields)._height;
  pVVar3 = TypeInfo__UnityEngine__Vector3->static_fields;
  uStack_7._0_4_ = (pVVar3->upVector).x;
  uStack_7._4_4_ = (pVVar3->upVector).y;
  fVar8 = fVar6 * (pVVar3->upVector).z;
  fVar9 = (this->fields)._height;
  bVar1 = cRam_? == '\0';
  fVar10 = fVar6 * (float)(undefined4)uStack_7 + fVar6 * (float)(undefined4)uStack_7 + (float)uStack_4;
  uStack_11 = 1;
  (__return_storage_ptr__->_size).x = fVar2;
  (__return_storage_ptr__->_size).y = fVar9;
  (__return_storage_ptr__->_size).z = fVar2;
  (__return_storage_ptr__->_center).x = fVar10;
  (__return_storage_ptr__->_center).y = fVar6 * (float)uStack_7._4_4_ + fVar6 * (float)uStack_7._4_4_ + uStack_4._4_4_;
  (__return_storage_ptr__->_center).z = fVar8 + fVar8 + fVar5;
  *(undefined4 *)&__return_storage_ptr__->_isValid = 1;
  uVar12._0_4_ = (this->fields)._baseCenter.x;
  uVar12._4_4_ = (this->fields)._baseCenter.y;
  fVar5 = (this->fields)._baseCenter.z;
  uVar13._0_4_ = (this->fields)._rotation.x;
  uVar13._4_4_ = (this->fields)._rotation.y;
  uVar14._0_4_ = (this->fields)._rotation.z;
  uVar14._4_4_ = (this->fields)._rotation.w;
  uStack_15 = CONCAT44(fVar9,fVar2);
  uStack_16 = CONCAT44(fVar10,fVar2);
  if (bVar1) {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar3 = TypeInfo__UnityEngine__Vector3->static_fields;
  uStack_4._0_4_ = (pVVar3->oneVector).x;
  uStack_4._4_4_ = (pVVar3->oneVector).y;
  fStack_17 = (pVVar3->oneVector).z;
  MStack_18.m00 = 0.0;
  MStack_18.m10 = 0.0;
  MStack_18.m20 = 0.0;
  MStack_18.m30 = 0.0;
  MStack_18.m01 = 0.0;
  MStack_18.m11 = 0.0;
  MStack_18.m21 = 0.0;
  MStack_18.m31 = 0.0;
  MStack_18.m02 = 0.0;
  MStack_18.m12 = 0.0;
  MStack_18.m22 = 0.0;
  MStack_18.m32 = 0.0;
  MStack_18.m03 = 0.0;
  MStack_18.m13 = 0.0;
  MStack_18.m23 = 0.0;
  MStack_18.m33 = 0.0;
  pcVar19 = pcRam_?;
  uStack_15 = uVar13;
  uStack_16 = uVar14;
  uStack_7 = uVar12;
  fStack_20 = fVar5;
  if ((pcRam_? == (code *)0x0) && (pcVar19 = (code *)FUN_?(&UNK_?), pcVar19 == (code *)0x0)) {
    uVar12 = func_?(&UNK_?);
    FUN_?(uVar12,0);
    pcVar19 = (code *)swi(3);
    pAVar21 = (AABB *)(*pcVar19)();
    return pAVar21;
  }
  pcRam_? = pcVar19;
  (*pcRam_?)(&uStack_7,&uStack_15,&uStack_4,&MStack_18);
  MStack_22.m00 = MStack_18.m00;
  MStack_22.m10 = MStack_18.m10;
  MStack_22.m20 = MStack_18.m20;
  MStack_22.m30 = MStack_18.m30;
  MStack_22.m01 = MStack_18.m01;
  MStack_22.m11 = MStack_18.m11;
  MStack_22.m21 = MStack_18.m21;
  MStack_22.m31 = MStack_18.m31;
  MStack_22.m02 = MStack_18.m02;
  MStack_22.m12 = MStack_18.m12;
  MStack_22.m22 = MStack_18.m22;
  MStack_22.m32 = MStack_18.m32;
  MStack_22.m03 = MStack_18.m03;
  MStack_22.m13 = MStack_18.m13;
  MStack_22.m23 = MStack_18.m23;
  MStack_22.m33 = MStack_18.m33;
  AABB::AABB_Transform(__return_storage_ptr__,&MStack_22,(MethodInfo *)0x0);
  return __return_storage_ptr__;
}


/* List`1[UnityEngine.Vector3] GetBottomCapExtentPoints() */

List_1_UnityEngine_Vector3_ * Assembly-CSharp.dll::RTG::CylinderShape3D::CylinderShape3D_GetBottomCapExtentPoints(CylinderShape3D *this,MethodInfo *method)

{
  VStack_1.x = (this->fields)._baseCenter.x;
  VStack_1.y = (this->fields)._baseCenter.y;
  QStack_2.x = (this->fields)._rotation.x;
  QStack_2.y = (this->fields)._rotation.y;
  QStack_2.z = (this->fields)._rotation.z;
  QStack_2.w = (this->fields)._rotation.w;
  VStack_1.z = (this->fields)._baseCenter.z;
  pLVar3 = CylinderMath::CylinderMath_CalcExtentPoints(&VStack_1,(this->fields)._radius,&QStack_2,(MethodInfo *)0x0);
  return pLVar3;
}


/* AABB GetModelAABB() */

AABB * Assembly-CSharp.dll::RTG::CylinderShape3D::CylinderShape3D_GetModelAABB(AABB *__return_storage_ptr__,CylinderShape3D *this,MethodInfo *method)

{
  fVar1 = (this->fields)._radius;
  fVar1 = fVar1 + fVar1;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar2 = TypeInfo__UnityEngine__Vector3->static_fields;
  uVar3 = (pVVar2->zeroVector).x;
  uVar4 = (pVVar2->zeroVector).y;
  fVar5 = (pVVar2->zeroVector).z;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  fVar6 = (this->fields)._height;
  pVVar2 = TypeInfo__UnityEngine__Vector3->static_fields;
  uVar7 = (pVVar2->upVector).x;
  uVar8 = (pVVar2->upVector).y;
  fVar9 = fVar6 * (pVVar2->upVector).z;
  fVar10 = (this->fields)._height;
  *(undefined2 *)&__return_storage_ptr__->field_0x19 = 0;
  __return_storage_ptr__->field_0x1b = 0;
  (__return_storage_ptr__->_size).x = fVar1;
  (__return_storage_ptr__->_size).y = fVar10;
  (__return_storage_ptr__->_center).x = fVar6 * (float)uVar7 + fVar6 * (float)uVar7 + (float)uVar3;
  (__return_storage_ptr__->_center).y = fVar6 * (float)uVar8 + fVar6 * (float)uVar8 + (float)uVar4;
  (__return_storage_ptr__->_size).z = fVar1;
  (__return_storage_ptr__->_center).z = fVar9 + fVar9 + fVar5;
  __return_storage_ptr__->_isValid = 1;
  return __return_storage_ptr__;
}


/* List`1[UnityEngine.Vector3] GetTopCapExtentPoints() */

List_1_UnityEngine_Vector3_ * Assembly-CSharp.dll::RTG::CylinderShape3D::CylinderShape3D_GetTopCapExtentPoints(CylinderShape3D *this,MethodInfo *method)

{
  fVar1 = (this->fields)._baseCenter.z;
  uVar2 = (this->fields)._baseCenter.x;
  uVar3 = (this->fields)._baseCenter.y;
  pVVar4 = TorusShape3D::TorusShape3D_get_Up(&VStack_5,(TorusShape3D *)this,(MethodInfo *)0x0);
  fVar6 = (this->fields)._height;
  uVar7 = pVVar4->x;
  uVar8 = pVVar4->y;
  aQStack_9[0].x = (this->fields)._rotation.x;
  aQStack_9[0].y = (this->fields)._rotation.y;
  aQStack_9[0].z = (this->fields)._rotation.z;
  aQStack_9[0].w = (this->fields)._rotation.w;
  VStack_5.z = fVar6 * pVVar4->z + fVar1;
  VStack_5.y = fVar6 * (float)uVar8 + (float)uVar3;
  VStack_5.x = fVar6 * (float)uVar7 + (float)uVar2;
  pLVar10 = CylinderMath::CylinderMath_CalcExtentPoints(&VStack_5,(this->fields)._radius,aQStack_9,(MethodInfo *)0x0);
  return pLVar10;
}


/* Boolean Raycast(Ray, Single ByRef) */

bool Assembly-CSharp.dll::RTG::CylinderShape3D::CylinderShape3D_Raycast(CylinderShape3D *this,Ray *ray,float *t,MethodInfo *method)

{
  fVar1 = (this->fields)._baseCenter.z;
  uVar2._0_4_ = (this->fields)._baseCenter.x;
  uVar2._4_4_ = (this->fields)._baseCenter.y;
  pVVar3 = TorusShape3D::TorusShape3D_get_Up(&VStack_4,(TorusShape3D *)this,(MethodInfo *)0x0);
  fVar5 = (this->fields)._height;
  uVar6 = pVVar3->x;
  uVar7 = pVVar3->y;
  aRStack_8[0].m_Origin.x = (ray->m_Origin).x;
  aRStack_8[0].m_Origin.y = (ray->m_Origin).y;
  aRStack_8[0]._8_8_ = *(undefined8 *)&(ray->m_Origin).z;
  VStack_9.z = fVar5 * pVVar3->z + fVar1;
  aRStack_8[0].m_Direction.y = (ray->m_Direction).y;
  aRStack_8[0].m_Direction.z = (ray->m_Direction).z;
  VStack_9.y = fVar5 * (float)uVar7 + uVar2._4_4_;
  VStack_9.x = fVar5 * (float)uVar6 + (float)uVar2;
  VStack_4._0_8_ = uVar2;
  VStack_4.z = fVar1;
  bVar10 = CylinderMath::CylinderMath_Raycast_1(aRStack_8,t,&VStack_4,&VStack_9,(this->fields)._radius,(this->fields)._height,(this->fields)._epsilon,(MethodInfo *)0x0);
  return bVar10;
}


/* Void RenderSolid() */

void Assembly-CSharp.dll::RTG::CylinderShape3D::CylinderShape3D_RenderSolid(CylinderShape3D *this,MethodInfo *method)

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
  pOVar1 = Singleton`1[System::Object]::Singleton_1_System_Object__1_get_Get(MethodInfo__RTG__Singleton<RTG::MeshPool>__get_Get__);
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
  pMVar3 = pOVar1[5].monitor;
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
  if (pMVar3 != (MonitorData *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (*(longlong *)(pMVar3 + 0x10) != 0) goto code_?;
  }
  CStack_4.r = 1.0;
  CStack_4.g = 1.0;
  CStack_4.b = 1.0;
  CStack_4.a = 1.0;
  pMVar5 = CylinderMesh::CylinderMesh_CreateCylinder(1.0,1.0,1.0,0x1e,0x1e,1,1,&CStack_4,(MethodInfo *)0x0);
  bVar6 = iRam_? != 0;
  pOVar1[5].monitor = (MonitorData *)pMVar5;
  if (bVar6) {
    uVar7 = (uint)((ulonglong)&pOVar1[5].monitor >> 0xc);
    uVar8 = (ulonglong)((uVar7 & 0x1fffff) >> 6);
    do {
      uVar9 = *(ulonglong *)(uVar8 * 8 + 0xADDR);
      puVar10 = (ulonglong *)(uVar8 * 8 + 0xADDR);
      LOCK();
      bVar6 = uVar9 == *puVar10;
      if (bVar6) {
        *puVar10 = uVar9 | 1L << (uVar7 & 0x3f);
      }
      UNLOCK();
    } while (!bVar6);
  }
code_?:
  fStack_11 = (this->fields)._radius;
  uStack_12._0_4_ = (this->fields)._radius;
  uStack_12._4_4_ = (this->fields)._height;
  pMVar5 = (Mesh *)pOVar1[5].monitor;
  CStack_4.r = (this->fields)._baseCenter.x;
  CStack_4.g = (this->fields)._baseCenter.y;
  uStack_13._0_4_ = (this->fields)._rotation.x;
  uStack_13._4_4_ = (this->fields)._rotation.y;
  uStack_14._0_4_ = (this->fields)._rotation.z;
  uStack_14._4_4_ = (this->fields)._rotation.w;
  CStack_4.b = (this->fields)._baseCenter.z;
  MStack_15.m00 = 0.0;
  MStack_15.m10 = 0.0;
  MStack_15.m20 = 0.0;
  MStack_15.m30 = 0.0;
  MStack_15.m01 = 0.0;
  MStack_15.m11 = 0.0;
  MStack_15.m21 = 0.0;
  MStack_15.m31 = 0.0;
  MStack_15.m02 = 0.0;
  MStack_15.m12 = 0.0;
  MStack_15.m22 = 0.0;
  MStack_15.m32 = 0.0;
  MStack_15.m03 = 0.0;
  MStack_15.m13 = 0.0;
  MStack_15.m23 = 0.0;
  MStack_15.m33 = 0.0;
  pcVar2 = pcRam_?;
  if ((pcRam_? == (code *)0x0) && (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
    uVar16 = func_?(&UNK_?);
    FUN_?(uVar16,0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcRam_? = pcVar2;
  (*pcRam_?)(&CStack_4,&uStack_13,&uStack_12);
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
  MStack_17.m00 = MStack_15.m00;
  MStack_17.m10 = MStack_15.m10;
  MStack_17.m20 = MStack_15.m20;
  MStack_17.m30 = MStack_15.m30;
  MStack_17.m01 = MStack_15.m01;
  MStack_17.m11 = MStack_15.m11;
  MStack_17.m21 = MStack_15.m21;
  MStack_17.m31 = MStack_15.m31;
  MStack_17.m02 = MStack_15.m02;
  MStack_17.m12 = MStack_15.m12;
  MStack_17.m22 = MStack_15.m22;
  MStack_17.m32 = MStack_15.m32;
  MStack_17.m03 = MStack_15.m03;
  MStack_17.m13 = MStack_15.m13;
  MStack_17.m23 = MStack_15.m23;
  MStack_17.m33 = MStack_15.m33;
  UnityEngine.CoreModule.dll::UnityEngine::Graphics::Graphics_DrawMeshNow_1(pMVar5,&MStack_17,-1,(MethodInfo *)0x0);
  return;
}


/* Void RenderWire() */

void Assembly-CSharp.dll::RTG::CylinderShape3D::CylinderShape3D_RenderWire(CylinderShape3D *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Graphics);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::Vector3>);
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
  fVar1 = (this->fields)._radius;
  QVar2 = (this->fields)._rotation;
  fVar3 = QVar2.x;
  fVar4 = QVar2.y;
  fVar5 = QVar2.z;
  fVar6 = QVar2.w;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar7 = TypeInfo__UnityEngine__Vector3->static_fields;
  uStack_8._0_4_ = (pVVar7->rightVector).x;
  uStack_8._4_4_ = (pVVar7->rightVector).y;
  fStack_9 = (pVVar7->rightVector).z;
  QStack_10.x = 0.0;
  QStack_10.y = 0.0;
  QStack_10.z = 0.0;
  QStack_10.w = 0.0;
  pcVar11 = pcRam_?;
  if ((pcRam_? == (code *)0x0) && (pcVar11 = (code *)FUN_?(&UNK_?), pcVar11 == (code *)0x0)) {
    uVar12 = func_?(&UNK_?);
    FUN_?(uVar12,0);
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  pcRam_? = pcVar11;
  (*pcRam_?)(0x42b40000,&uStack_8,&QStack_10);
  fVar13 = QStack_10.x;
  fVar14 = QStack_10.y;
  fVar15 = fVar5 * QStack_10.y;
  fVar16 = fVar3 * QStack_10.x;
  fVar17 = fVar3 * QStack_10.y;
  fVar18 = fVar5 * QStack_10.w;
  QStack_10.y = (fVar6 * QStack_10.y + fVar4 * QStack_10.w + fVar5 * QStack_10.x) - fVar3 * QStack_10.z;
  QStack_10.x = (fVar6 * QStack_10.x + fVar3 * QStack_10.w + fVar4 * QStack_10.z) - fVar15;
  QStack_10.w = ((fVar6 * QStack_10.w - fVar16) - fVar4 * fVar14) - fVar5 * QStack_10.z;
  QStack_10.z = (fVar6 * QStack_10.z + fVar18 + fVar17) - fVar4 * fVar13;
  if (*(int *)&(TypeInfo__RTG__Singleton<RTG::MeshPool>->_1).field_0x1c == 0) {
    FUN_?();
  }
  pMVar19 = (MeshPool *)Singleton`1[System::Object]::Singleton_1_System_Object__1_get_Get(MethodInfo__RTG__Singleton<RTG::MeshPool>__get_Get__);
  if (pMVar19 != (MeshPool *)0x0) {
    pMVar20 = MeshPool::MeshPool_get_UnitWireCircleXY(pMVar19,(MethodInfo *)0x0);
    uVar21 = QStack_10._8_8_;
    uVar12 = QStack_10._0_8_;
    PStack_22.Quadrant = (int32_t)(this->fields)._baseCenter.x;
    PStack_22.FirstAxisSign = (int32_t)(this->fields)._baseCenter.y;
    PStack_22.SecondAxisSign = (int32_t)(this->fields)._baseCenter.z;
    fStack_9 = 1.0;
    uStack_8 = CONCAT44(fVar1,fVar1);
    MStack_23.m00 = 0.0;
    MStack_23.m10 = 0.0;
    MStack_23.m20 = 0.0;
    MStack_23.m30 = 0.0;
    MStack_23.m01 = 0.0;
    MStack_23.m11 = 0.0;
    MStack_23.m21 = 0.0;
    MStack_23.m31 = 0.0;
    MStack_23.m02 = 0.0;
    MStack_23.m12 = 0.0;
    MStack_23.m22 = 0.0;
    MStack_23.m32 = 0.0;
    MStack_23.m03 = 0.0;
    MStack_23.m13 = 0.0;
    MStack_23.m23 = 0.0;
    MStack_23.m33 = 0.0;
    pcVar11 = pcRam_?;
    if ((pcRam_? == (code *)0x0) && (pcVar11 = (code *)FUN_?(&UNK_?), pcVar11 == (code *)0x0)) {
      uVar12 = func_?(&UNK_?);
      FUN_?(uVar12,0);
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    pcRam_? = pcVar11;
    (*pcRam_?)(&PStack_22,&QStack_10,&uStack_8);
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
    aMStack_24[0].m00 = MStack_23.m00;
    aMStack_24[0].m10 = MStack_23.m10;
    aMStack_24[0].m20 = MStack_23.m20;
    aMStack_24[0].m30 = MStack_23.m30;
    aMStack_24[0].m01 = MStack_23.m01;
    aMStack_24[0].m11 = MStack_23.m11;
    aMStack_24[0].m21 = MStack_23.m21;
    aMStack_24[0].m31 = MStack_23.m31;
    aMStack_24[0].m02 = MStack_23.m02;
    aMStack_24[0].m12 = MStack_23.m12;
    aMStack_24[0].m22 = MStack_23.m22;
    aMStack_24[0].m32 = MStack_23.m32;
    aMStack_24[0].m03 = MStack_23.m03;
    aMStack_24[0].m13 = MStack_23.m13;
    aMStack_24[0].m23 = MStack_23.m23;
    aMStack_24[0].m33 = MStack_23.m33;
    UnityEngine.CoreModule.dll::UnityEngine::Graphics::Graphics_DrawMeshNow_1(pMVar20,aMStack_24,-1,(MethodInfo *)0x0);
    pMVar19 = (MeshPool *)Singleton`1[System::Object]::Singleton_1_System_Object__1_get_Get(MethodInfo__RTG__Singleton<RTG::MeshPool>__get_Get__);
    if (pMVar19 != (MeshPool *)0x0) {
      pMVar20 = MeshPool::MeshPool_get_UnitWireCircleXY(pMVar19,(MethodInfo *)0x0);
      uVar25 = (this->fields)._baseCenter.x;
      uVar26 = (this->fields)._baseCenter.y;
      fVar4 = (this->fields)._baseCenter.z;
      pVVar27 = TorusShape3D::TorusShape3D_get_Up((Vector3 *)&QStack_10,(TorusShape3D *)this,(MethodInfo *)0x0);
      uVar28 = QStack_10._8_8_;
      uVar29 = QStack_10._0_8_;
      fVar3 = (this->fields)._height;
      uVar30 = pVVar27->x;
      uVar31 = pVVar27->y;
      PStack_22.SecondAxisSign = 0x3f800000;
      PStack_22.FirstAxisSign = (int32_t)fVar1;
      PStack_22.Quadrant = (int32_t)fVar1;
      fStack_9 = fVar3 * pVVar27->z + fVar4;
      QStack_10.x = (float)uVar12;
      QStack_10.y = SUB84(uVar12,4);
      QStack_32.x = QStack_10.x;
      QStack_32.y = QStack_10.y;
      QStack_10.z = (float)uVar21;
      QStack_10.w = SUB84(uVar21,4);
      QStack_32.z = QStack_10.z;
      QStack_32.w = QStack_10.w;
      MStack_23.m00 = 0.0;
      MStack_23.m10 = 0.0;
      MStack_23.m20 = 0.0;
      MStack_23.m30 = 0.0;
      uStack_8 = CONCAT44(fVar3 * (float)uVar31 + (float)uVar26,fVar3 * (float)uVar30 + (float)uVar25);
      MStack_23.m01 = 0.0;
      MStack_23.m11 = 0.0;
      MStack_23.m21 = 0.0;
      MStack_23.m31 = 0.0;
      MStack_23.m02 = 0.0;
      MStack_23.m12 = 0.0;
      MStack_23.m22 = 0.0;
      MStack_23.m32 = 0.0;
      MStack_23.m03 = 0.0;
      MStack_23.m13 = 0.0;
      MStack_23.m23 = 0.0;
      MStack_23.m33 = 0.0;
      pcVar11 = pcRam_?;
      QStack_10._0_8_ = uVar29;
      QStack_10._8_8_ = uVar28;
      if ((pcRam_? == (code *)0x0) && (pcVar11 = (code *)FUN_?(&UNK_?), pcVar11 == (code *)0x0)) {
        uVar12 = func_?(&UNK_?);
        FUN_?(uVar12,0);
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      pcRam_? = pcVar11;
      (*pcRam_?)(&uStack_8,&QStack_32,&PStack_22);
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Graphics);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__UnityEngine__Graphics->_1).field_0x1c == 0) {
        FUN_?();
      }
      aMStack_24[0].m00 = MStack_23.m00;
      aMStack_24[0].m10 = MStack_23.m10;
      aMStack_24[0].m20 = MStack_23.m20;
      aMStack_24[0].m30 = MStack_23.m30;
      aMStack_24[0].m01 = MStack_23.m01;
      aMStack_24[0].m11 = MStack_23.m11;
      aMStack_24[0].m21 = MStack_23.m21;
      aMStack_24[0].m31 = MStack_23.m31;
      aMStack_24[0].m02 = MStack_23.m02;
      aMStack_24[0].m12 = MStack_23.m12;
      aMStack_24[0].m22 = MStack_23.m22;
      aMStack_24[0].m32 = MStack_23.m32;
      aMStack_24[0].m03 = MStack_23.m03;
      aMStack_24[0].m13 = MStack_23.m13;
      aMStack_24[0].m23 = MStack_23.m23;
      aMStack_24[0].m33 = MStack_23.m33;
      UnityEngine.CoreModule.dll::UnityEngine::Graphics::Graphics_DrawMeshNow_1(pMVar20,aMStack_24,-1,(MethodInfo *)0x0);
      PStack_22.Quadrant = (int32_t)(this->fields)._baseCenter.x;
      PStack_22.FirstAxisSign = (int32_t)(this->fields)._baseCenter.y;
      QStack_32.x = (this->fields)._rotation.x;
      QStack_32.y = (this->fields)._rotation.y;
      QStack_32.z = (this->fields)._rotation.z;
      QStack_32.w = (this->fields)._rotation.w;
      PStack_22.SecondAxisSign = (int32_t)(this->fields)._baseCenter.z;
      pLVar33 = CylinderMath::CylinderMath_CalcExtentPoints((Vector3 *)&PStack_22,(this->fields)._radius,&QStack_32,(MethodInfo *)0x0);
      uVar34 = (this->fields)._baseCenter.x;
      uVar35 = (this->fields)._baseCenter.y;
      fVar3 = (this->fields)._baseCenter.z;
      pVVar27 = TorusShape3D::TorusShape3D_get_Up((Vector3 *)&QStack_10,(TorusShape3D *)this,(MethodInfo *)0x0);
      fVar1 = (this->fields)._height;
      uVar36 = pVVar27->x;
      uVar37 = pVVar27->y;
      QStack_32.x = (this->fields)._rotation.x;
      QStack_32.y = (this->fields)._rotation.y;
      QStack_32.z = (this->fields)._rotation.z;
      QStack_32.w = (this->fields)._rotation.w;
      PStack_22.SecondAxisSign = (int32_t)(fVar1 * pVVar27->z + fVar3);
      PStack_22.FirstAxisSign = (int32_t)(fVar1 * (float)uVar37 + (float)uVar35);
      PStack_22.Quadrant = (int32_t)(fVar1 * (float)uVar36 + (float)uVar34);
      pLVar38 = CylinderMath::CylinderMath_CalcExtentPoints((Vector3 *)&PStack_22,(this->fields)._radius,&QStack_32,(MethodInfo *)0x0);
      this_00 = (List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)FUN_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Vector3>);
      FUN_?(this_00,MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List__);
      pMVar39 = MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_;
      if (pLVar33 != (List_1_UnityEngine_Vector3_ *)0x0) {
        if ((pLVar33->fields)._size == 0) {
code_?:
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException((MethodInfo *)0x0);
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        pVVar40 = (pLVar33->fields)._items;
        if (pVVar40 != (Vector3__Array *)0x0) {
          if ((int)pVVar40->max_length == 0) goto code_?;
          if (this_00 != (List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)0x0) {
            uVar12._0_4_ = (int32_t)pVVar40->vector[0].x;
            uVar12._4_4_ = (int32_t)pVVar40->vector[0].y;
            fVar1 = pVVar40->vector[0].z;
            piVar41 = &(this_00->fields)._version;
            *piVar41 = *piVar41 + 1;
            pPVar42 = (this_00->fields)._items;
            if (pPVar42 != (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) {
              uVar43 = (this_00->fields)._size;
              if (uVar43 < (uint)pPVar42->max_length) {
                (this_00->fields)._size = uVar43 + 1;
                if ((uint)pPVar42->max_length <= uVar43) goto code_?;
                pPVar42->vector[(int)uVar43].Quadrant = (int32_t)uVar12;
                pPVar42->vector[(int)uVar43].FirstAxisSign = uVar12._4_4_;
                pPVar42->vector[(int)uVar43].SecondAxisSign = (int32_t)fVar1;
              }
              else {
                PStack_22._0_8_ = uVar12;
                PStack_22.SecondAxisSign = (int32_t)fVar1;
                mscorlib.dll::System::Collections::Generic::List`1[RTG::PlaneIdHelper+PlaneQuadrantInfo]::List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__AddWithResize(this_00,&PStack_22,pMVar39->klass->rgctx_data[0xe].method);
              }
              pMVar39 = MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_;
              if (pLVar38 != (List_1_UnityEngine_Vector3_ *)0x0) {
                if ((pLVar38->fields)._size == 0) goto code_?;
                pVVar40 = (pLVar38->fields)._items;
                if (pVVar40 != (Vector3__Array *)0x0) {
                  if ((int)pVVar40->max_length == 0) goto code_?;
                  uVar21._0_4_ = (int32_t)pVVar40->vector[0].x;
                  uVar21._4_4_ = (int32_t)pVVar40->vector[0].y;
                  fVar1 = pVVar40->vector[0].z;
                  piVar41 = &(this_00->fields)._version;
                  *piVar41 = *piVar41 + 1;
                  pPVar42 = (this_00->fields)._items;
                  if (pPVar42 != (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) {
                    uVar43 = (this_00->fields)._size;
                    if (uVar43 < (uint)pPVar42->max_length) {
                      (this_00->fields)._size = uVar43 + 1;
                      if ((uint)pPVar42->max_length <= uVar43) goto code_?;
                      pPVar42->vector[(int)uVar43].Quadrant = (int32_t)uVar21;
                      pPVar42->vector[(int)uVar43].FirstAxisSign = uVar21._4_4_;
                      pPVar42->vector[(int)uVar43].SecondAxisSign = (int32_t)fVar1;
                    }
                    else {
                      PStack_22._0_8_ = uVar21;
                      PStack_22.SecondAxisSign = (int32_t)fVar1;
                      mscorlib.dll::System::Collections::Generic::List`1[RTG::PlaneIdHelper+PlaneQuadrantInfo]::List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__AddWithResize(this_00,&PStack_22,pMVar39->klass->rgctx_data[0xe].method);
                    }
                    pMVar39 = MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_;
                    if ((uint)(pLVar33->fields)._size < 2) goto code_?;
                    pVVar40 = (pLVar33->fields)._items;
                    if (pVVar40 != (Vector3__Array *)0x0) {
                      if ((uint)pVVar40->max_length < 2) goto code_?;
                      uVar29._0_4_ = (int32_t)pVVar40->vector[1].x;
                      uVar29._4_4_ = (int32_t)pVVar40->vector[1].y;
                      fVar1 = pVVar40->vector[1].z;
                      piVar41 = &(this_00->fields)._version;
                      *piVar41 = *piVar41 + 1;
                      pPVar42 = (this_00->fields)._items;
                      if (pPVar42 != (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) {
                        uVar43 = (this_00->fields)._size;
                        if (uVar43 < (uint)pPVar42->max_length) {
                          (this_00->fields)._size = uVar43 + 1;
                          if ((uint)pPVar42->max_length <= uVar43) goto code_?;
                          pPVar42->vector[(int)uVar43].Quadrant = (int32_t)uVar29;
                          pPVar42->vector[(int)uVar43].FirstAxisSign = uVar29._4_4_;
                          pPVar42->vector[(int)uVar43].SecondAxisSign = (int32_t)fVar1;
                        }
                        else {
                          PStack_22._0_8_ = uVar29;
                          PStack_22.SecondAxisSign = (int32_t)fVar1;
                          mscorlib.dll::System::Collections::Generic::List`1[RTG::PlaneIdHelper+PlaneQuadrantInfo]::List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__AddWithResize(this_00,&PStack_22,pMVar39->klass->rgctx_data[0xe].method);
                        }
                        pMVar39 = MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_;
                        if ((uint)(pLVar38->fields)._size < 2) goto code_?;
                        pVVar40 = (pLVar38->fields)._items;
                        if (pVVar40 != (Vector3__Array *)0x0) {
                          if ((uint)pVVar40->max_length < 2) goto code_?;
                          uVar28._0_4_ = (int32_t)pVVar40->vector[1].x;
                          uVar28._4_4_ = (int32_t)pVVar40->vector[1].y;
                          fVar1 = pVVar40->vector[1].z;
                          piVar41 = &(this_00->fields)._version;
                          *piVar41 = *piVar41 + 1;
                          pPVar42 = (this_00->fields)._items;
                          if (pPVar42 != (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) {
                            uVar43 = (this_00->fields)._size;
                            if (uVar43 < (uint)pPVar42->max_length) {
                              (this_00->fields)._size = uVar43 + 1;
                              if ((uint)pPVar42->max_length <= uVar43) goto code_?;
                              pPVar42->vector[(int)uVar43].Quadrant = (int32_t)uVar28;
                              pPVar42->vector[(int)uVar43].FirstAxisSign = uVar28._4_4_;
                              pPVar42->vector[(int)uVar43].SecondAxisSign = (int32_t)fVar1;
                            }
                            else {
                              PStack_22._0_8_ = uVar28;
                              PStack_22.SecondAxisSign = (int32_t)fVar1;
                              mscorlib.dll::System::Collections::Generic::List`1[RTG::PlaneIdHelper+PlaneQuadrantInfo]::List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__AddWithResize(this_00,&PStack_22,pMVar39->klass->rgctx_data[0xe].method);
                            }
                            pMVar39 = MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_;
                            if ((uint)(pLVar33->fields)._size < 3) goto code_?;
                            pVVar40 = (pLVar33->fields)._items;
                            if (pVVar40 != (Vector3__Array *)0x0) {
                              if ((uint)pVVar40->max_length < 3) goto code_?;
                              uVar44._0_4_ = (int32_t)pVVar40->vector[2].x;
                              uVar44._4_4_ = (int32_t)pVVar40->vector[2].y;
                              fVar1 = pVVar40->vector[2].z;
                              piVar41 = &(this_00->fields)._version;
                              *piVar41 = *piVar41 + 1;
                              pPVar42 = (this_00->fields)._items;
                              if (pPVar42 != (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) {
                                uVar43 = (this_00->fields)._size;
                                if (uVar43 < (uint)pPVar42->max_length) {
                                  (this_00->fields)._size = uVar43 + 1;
                                  if ((uint)pPVar42->max_length <= uVar43) goto code_?;
                                  pPVar42->vector[(int)uVar43].Quadrant = (int32_t)uVar44;
                                  pPVar42->vector[(int)uVar43].FirstAxisSign = uVar44._4_4_;
                                  pPVar42->vector[(int)uVar43].SecondAxisSign = (int32_t)fVar1;
                                }
                                else {
                                  PStack_22._0_8_ = uVar44;
                                  PStack_22.SecondAxisSign = (int32_t)fVar1;
                                  mscorlib.dll::System::Collections::Generic::List`1[RTG::PlaneIdHelper+PlaneQuadrantInfo]::List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__AddWithResize(this_00,&PStack_22,pMVar39->klass->rgctx_data[0xe].method);
                                }
                                pMVar39 = MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_;
                                if ((uint)(pLVar38->fields)._size < 3) goto code_?;
                                pVVar40 = (pLVar38->fields)._items;
                                if (pVVar40 != (Vector3__Array *)0x0) {
                                  if ((uint)pVVar40->max_length < 3) goto code_?;
                                  uVar45._0_4_ = (int32_t)pVVar40->vector[2].x;
                                  uVar45._4_4_ = (int32_t)pVVar40->vector[2].y;
                                  fVar1 = pVVar40->vector[2].z;
                                  piVar41 = &(this_00->fields)._version;
                                  *piVar41 = *piVar41 + 1;
                                  pPVar42 = (this_00->fields)._items;
                                  if (pPVar42 != (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) {
                                    uVar43 = (this_00->fields)._size;
                                    if (uVar43 < (uint)pPVar42->max_length) {
                                      (this_00->fields)._size = uVar43 + 1;
                                      if ((uint)pPVar42->max_length <= uVar43) goto code_?;
                                      pPVar42->vector[(int)uVar43].Quadrant = (int32_t)uVar45;
                                      pPVar42->vector[(int)uVar43].FirstAxisSign = uVar45._4_4_;
                                      pPVar42->vector[(int)uVar43].SecondAxisSign = (int32_t)fVar1;
                                    }
                                    else {
                                      PStack_22._0_8_ = uVar45;
                                      PStack_22.SecondAxisSign = (int32_t)fVar1;
                                      mscorlib.dll::System::Collections::Generic::List`1[RTG::PlaneIdHelper+PlaneQuadrantInfo]::List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__AddWithResize(this_00,&PStack_22,pMVar39->klass->rgctx_data[0xe].method);
                                    }
                                    pMVar39 = MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_;
                                    if ((uint)(pLVar33->fields)._size < 4) goto code_?;
                                    pVVar40 = (pLVar33->fields)._items;
                                    if (pVVar40 != (Vector3__Array *)0x0) {
                                      if ((uint)pVVar40->max_length < 4) goto code_?;
                                      uVar46._0_4_ = (int32_t)pVVar40->vector[3].x;
                                      uVar46._4_4_ = (int32_t)pVVar40->vector[3].y;
                                      fVar1 = pVVar40->vector[3].z;
                                      piVar41 = &(this_00->fields)._version;
                                      *piVar41 = *piVar41 + 1;
                                      pPVar42 = (this_00->fields)._items;
                                      if (pPVar42 != (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) {
                                        uVar43 = (this_00->fields)._size;
                                        if (uVar43 < (uint)pPVar42->max_length) {
                                          (this_00->fields)._size = uVar43 + 1;
                                          if ((uint)pPVar42->max_length <= uVar43) goto code_?;
                                          pPVar42->vector[(int)uVar43].Quadrant = (int32_t)uVar46;
                                          pPVar42->vector[(int)uVar43].FirstAxisSign = uVar46._4_4_;
                                          pPVar42->vector[(int)uVar43].SecondAxisSign = (int32_t)fVar1;
                                        }
                                        else {
                                          PStack_22._0_8_ = uVar46;
                                          PStack_22.SecondAxisSign = (int32_t)fVar1;
                                          mscorlib.dll::System::Collections::Generic::List`1[RTG::PlaneIdHelper+PlaneQuadrantInfo]::List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__AddWithResize(this_00,&PStack_22,pMVar39->klass->rgctx_data[0xe].method);
                                        }
                                        pMVar39 = MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_;
                                        if ((uint)(pLVar38->fields)._size < 4) goto code_?;
                                        pVVar40 = (pLVar38->fields)._items;
                                        if (pVVar40 != (Vector3__Array *)0x0) {
                                          if ((uint)pVVar40->max_length < 4) {
code_?:
                                            FUN_?();
                                            pcVar11 = (code *)swi(3);
                                            (*pcVar11)();
                                            return;
                                          }
                                          uVar47._0_4_ = (int32_t)pVVar40->vector[3].x;
                                          uVar47._4_4_ = (int32_t)pVVar40->vector[3].y;
                                          fVar1 = pVVar40->vector[3].z;
                                          piVar41 = &(this_00->fields)._version;
                                          *piVar41 = *piVar41 + 1;
                                          pPVar42 = (this_00->fields)._items;
                                          if (pPVar42 != (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) {
                                            uVar43 = (this_00->fields)._size;
                                            if (uVar43 < (uint)pPVar42->max_length) {
                                              (this_00->fields)._size = uVar43 + 1;
                                              if ((uint)pPVar42->max_length <= uVar43) goto code_?;
                                              pPVar42->vector[(int)uVar43].Quadrant = (int32_t)uVar47;
                                              pPVar42->vector[(int)uVar43].FirstAxisSign = uVar47._4_4_;
                                              pPVar42->vector[(int)uVar43].SecondAxisSign = (int32_t)fVar1;
                                            }
                                            else {
                                              PStack_22._0_8_ = uVar47;
                                              PStack_22.SecondAxisSign = (int32_t)fVar1;
                                              mscorlib.dll::System::Collections::Generic::List`1[RTG::PlaneIdHelper+PlaneQuadrantInfo]::List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__AddWithResize(this_00,&PStack_22,pMVar39->klass->rgctx_data[0xe].method);
                                            }
                                            if (cRam_? == '\0') {
                                              FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Count__);
                                              LOCK();
                                              UNLOCK();
                                              FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_);
                                              LOCK();
                                              UNLOCK();
                                              cRam_? = '\x01';
                                            }
                                            if ((1 < (this_00->fields)._size) && (((this_00->fields)._size & 1) == 0)) {
                                              pcVar11 = pcRam_?;
                                              if ((pcRam_? == (code *)0x0) && (pcVar11 = (code *)FUN_?(&UNK_?), pcVar11 == (code *)0x0)) {
                                                uVar12 = func_?(&UNK_?);
                                                FUN_?(uVar12,0);
                                                pcVar11 = (code *)swi(3);
                                                (*pcVar11)();
                                                return;
                                              }
                                              pcRam_? = pcVar11;
                                              (*pcRam_?)();
                                              lVar48 = 0;
                                              for (uVar43 = 0; (int)uVar43 < (this_00->fields)._size; uVar43 = uVar43 + 2) {
                                                if ((uint)(this_00->fields)._size <= uVar43) goto code_?;
                                                pPVar42 = (this_00->fields)._items;
                                                if (pPVar42 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto DAT_?;
                                                if ((uint)pPVar42->max_length <= uVar43) goto code_?;
                                                if ((uint)(this_00->fields)._size <= uVar43 + 1) goto code_?;
                                                if ((uint)pPVar42->max_length <= uVar43 + 1) goto code_?;
                                                uVar12 = *(undefined8 *)((longlong)&pPVar42->vector[1].Quadrant + lVar48);
                                                fVar1 = *(float *)((longlong)&pPVar42->vector[1].SecondAxisSign + lVar48);
                                                UnityEngine.CoreModule.dll::UnityEngine::GL::GL_Vertex3((float)*(undefined8 *)((longlong)&pPVar42->vector[0].Quadrant + lVar48),*(float *)((longlong)&pPVar42->vector[0].FirstAxisSign + lVar48),*(float *)((longlong)&pPVar42->vector[0].SecondAxisSign + lVar48),(MethodInfo *)0x0);
                                                UnityEngine.CoreModule.dll::UnityEngine::GL::GL_Vertex3((float)uVar12,(float)((ulonglong)uVar12 >> 0x20),fVar1,(MethodInfo *)0x0);
                                                lVar48 = lVar48 + 0x18;
                                              }
                                              pcVar11 = pcRam_?;
                                              if ((pcRam_? == (code *)0x0) && (pcVar11 = (code *)FUN_?(&UNK_?), pcVar11 == (code *)0x0)) {
                                                uVar12 = func_?(&UNK_?);
                                                FUN_?(uVar12,0);
                                                pcVar11 = (code *)swi(3);
                                                (*pcVar11)();
                                                return;
                                              }
                                              pcRam_? = pcVar11;
                                              (*pcRam_?)();
                                            }
                                            return;
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
DAT_?:
  FUN_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* CylinderShape3D() */

void Assembly-CSharp.dll::RTG::CylinderShape3D::CylinderShape3D__ctor(CylinderShape3D *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar1 = cRam_? == '\0';
  pVVar2 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar3 = (pVVar2->zeroVector).y;
  fVar4 = (pVVar2->zeroVector).z;
  (this->fields)._baseCenter.x = (pVVar2->zeroVector).x;
  (this->fields)._baseCenter.y = fVar3;
  (this->fields)._baseCenter.z = fVar4;
  (this->fields)._radius = 1.0;
  (this->fields)._height = 1.0;
  if (bVar1) {
    FUN_?(&TypeInfo__UnityEngine__Quaternion);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pQVar5 = TypeInfo__UnityEngine__Quaternion->static_fields;
  fVar4 = (pQVar5->identityQuaternion).y;
  fVar3 = (pQVar5->identityQuaternion).z;
  fVar6 = (pQVar5->identityQuaternion).w;
  (this->fields)._rotation.x = (pQVar5->identityQuaternion).x;
  (this->fields)._rotation.y = fVar4;
  (this->fields)._rotation.z = fVar3;
  (this->fields)._rotation.w = fVar6;
  return;
}


/* Vector3 get_Center() */

Vector3 * Assembly-CSharp.dll::RTG::CylinderShape3D::CylinderShape3D_get_Center(Vector3 *__return_storage_ptr__,CylinderShape3D *this,MethodInfo *method)

{
  fVar1 = (this->fields)._baseCenter.z;
  uVar2 = (this->fields)._baseCenter.x;
  uVar3 = (this->fields)._baseCenter.y;
  pVVar4 = TorusShape3D::TorusShape3D_get_Up(aVStack_5,(TorusShape3D *)this,(MethodInfo *)0x0);
  fVar6 = (this->fields)._height;
  uVar7 = pVVar4->x;
  uVar8 = pVVar4->y;
  fVar9 = pVVar4->z;
  __return_storage_ptr__->x = fVar6 * (float)uVar7 * 0.5 + (float)uVar2;
  __return_storage_ptr__->y = fVar6 * (float)uVar8 * 0.5 + (float)uVar3;
  __return_storage_ptr__->z = fVar6 * fVar9 * 0.5 + fVar1;
  return __return_storage_ptr__;
}


/* CylinderEpsilon get_Epsilon() */

CylinderEpsilon Assembly-CSharp.dll::RTG::CylinderShape3D::CylinderShape3D_get_Epsilon(CylinderShape3D *this,MethodInfo *method)

{
  return (this->fields)._epsilon;
}


/* Vector3 get_TopCenter() */

Vector3 * Assembly-CSharp.dll::RTG::CylinderShape3D::CylinderShape3D_get_TopCenter(Vector3 *__return_storage_ptr__,CylinderShape3D *this,MethodInfo *method)

{
  fVar1 = (this->fields)._baseCenter.z;
  uVar2 = (this->fields)._baseCenter.x;
  uVar3 = (this->fields)._baseCenter.y;
  pVVar4 = TorusShape3D::TorusShape3D_get_Up(aVStack_5,(TorusShape3D *)this,(MethodInfo *)0x0);
  fVar6 = (this->fields)._height;
  uVar7 = pVVar4->x;
  uVar8 = pVVar4->y;
  fVar9 = pVVar4->z;
  __return_storage_ptr__->x = fVar6 * (float)uVar7 + (float)uVar2;
  __return_storage_ptr__->y = fVar6 * (float)uVar8 + (float)uVar3;
  __return_storage_ptr__->z = fVar6 * fVar9 + fVar1;
  return __return_storage_ptr__;
}


/* Void set_Center(Vector3) */

void Assembly-CSharp.dll::RTG::CylinderShape3D::CylinderShape3D_set_Center(CylinderShape3D *this,Vector3 *value,MethodInfo *method)

{
  pVVar1 = TorusShape3D::TorusShape3D_get_Up(aVStack_2,(TorusShape3D *)this,(MethodInfo *)0x0);
  fVar3 = (this->fields)._height;
  uVar4 = pVVar1->x;
  uVar5 = pVVar1->y;
  uVar6 = value->x;
  fVar7 = pVVar1->z;
  fVar8 = value->y;
  fVar9 = value->z;
  (this->fields)._baseCenter.x = (float)uVar6 - fVar3 * (float)uVar4 * 0.5;
  (this->fields)._baseCenter.y = fVar8 - fVar3 * (float)uVar5 * 0.5;
  (this->fields)._baseCenter.z = fVar9 - fVar3 * fVar7 * 0.5;
  return;
}


/* Void set_Epsilon(CylinderEpsilon) */

void Assembly-CSharp.dll::RTG::CylinderShape3D::CylinderShape3D_set_Epsilon(CylinderShape3D *this,CylinderEpsilon value,MethodInfo *method)

{
  (this->fields)._epsilon = value;
  return;
}


/* Void set_TopCenter(Vector3) */

void Assembly-CSharp.dll::RTG::CylinderShape3D::CylinderShape3D_set_TopCenter(CylinderShape3D *this,Vector3 *value,MethodInfo *method)

{
  pVVar1 = TorusShape3D::TorusShape3D_get_Up(aVStack_2,(TorusShape3D *)this,(MethodInfo *)0x0);
  fVar3 = (this->fields)._height;
  uVar4 = pVVar1->x;
  uVar5 = pVVar1->y;
  uVar6 = value->x;
  fVar7 = value->y;
  fVar8 = pVVar1->z;
  fVar9 = value->z;
  (this->fields)._baseCenter.x = (float)uVar6 - fVar3 * (float)uVar4;
  (this->fields)._baseCenter.y = fVar7 - fVar3 * (float)uVar5;
  (this->fields)._baseCenter.z = fVar9 - fVar3 * fVar8;
  return;
}

