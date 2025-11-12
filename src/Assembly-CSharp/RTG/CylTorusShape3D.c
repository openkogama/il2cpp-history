
/* AABB GetAABB() */

AABB * Assembly-CSharp.dll::RTG::CylTorusShape3D::CylTorusShape3D_GetAABB(AABB *__return_storage_ptr__,CylTorusShape3D *this,MethodInfo *method)

{
  fVar1 = (this->fields)._center.z;
  fVar2 = (this->fields)._hrzRadius + (this->fields)._coreRadius;
  fVar3 = (this->fields)._vertRadius;
  fVar3 = fVar3 + fVar3;
  uVar4._0_4_ = (this->fields)._rotation.x;
  uVar4._4_4_ = (this->fields)._rotation.y;
  uVar5 = (this->fields)._rotation.z;
  uVar6 = (this->fields)._rotation.w;
  fVar2 = fVar2 + fVar2;
  uVar7._0_4_ = (this->fields)._center.x;
  uVar7._4_4_ = (this->fields)._center.y;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar8 = TypeInfo__UnityEngine__Vector3->static_fields;
  uStack_9 = 1;
  uVar10 = (pVVar8->zeroVector).x;
  uVar11 = (pVVar8->zeroVector).y;
  fStack_12 = (pVVar8->zeroVector).z;
  AStack_13._isValid = 1;
  AStack_13._25_3_ = 0;
  uStack_14 = CONCAT44(fVar3,fVar2);
  AStack_13._center.x = (float)uVar10;
  AStack_13._center.z = fStack_12;
  AStack_13._center.y = (float)uVar11;
  fStack_15 = (float)uVar11;
  AStack_13._size.x = fVar2;
  AStack_13._size.y = fVar3;
  AStack_13._size.z = fVar2;
  if (cRam_? == '\0') {
    fStack_16 = fVar2;
    fStack_17 = (float)uVar10;
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar8 = TypeInfo__UnityEngine__Vector3->static_fields;
  uStack_18._0_4_ = (pVVar8->oneVector).x;
  uStack_18._4_4_ = (pVVar8->oneVector).y;
  fStack_19 = (pVVar8->oneVector).z;
  MStack_20.m00 = 0.0;
  MStack_20.m10 = 0.0;
  MStack_20.m20 = 0.0;
  MStack_20.m30 = 0.0;
  MStack_20.m01 = 0.0;
  MStack_20.m11 = 0.0;
  MStack_20.m21 = 0.0;
  MStack_20.m31 = 0.0;
  MStack_20.m02 = 0.0;
  MStack_20.m12 = 0.0;
  MStack_20.m22 = 0.0;
  MStack_20.m32 = 0.0;
  MStack_20.m03 = 0.0;
  MStack_20.m13 = 0.0;
  MStack_20.m23 = 0.0;
  MStack_20.m33 = 0.0;
  pcVar21 = pcRam_?;
  uStack_14 = uVar4;
  fStack_16 = (float)uVar5;
  fStack_17 = (float)uVar6;
  uStack_22 = uVar7;
  fStack_23 = fVar1;
  if ((pcRam_? == (code *)0x0) && (pcVar21 = (code *)FUN_?(&UNK_?), pcVar21 == (code *)0x0)) {
    uVar7 = func_?(&UNK_?);
    FUN_?(uVar7,0);
    pcVar21 = (code *)swi(3);
    pAVar24 = (AABB *)(*pcVar21)();
    return pAVar24;
  }
  pcRam_? = pcVar21;
  (*pcRam_?)(&uStack_22,&uStack_14,&uStack_18,&MStack_20);
  aMStack_25[0].m00 = MStack_20.m00;
  aMStack_25[0].m10 = MStack_20.m10;
  aMStack_25[0].m20 = MStack_20.m20;
  aMStack_25[0].m30 = MStack_20.m30;
  aMStack_25[0].m01 = MStack_20.m01;
  aMStack_25[0].m11 = MStack_20.m11;
  aMStack_25[0].m21 = MStack_20.m21;
  aMStack_25[0].m31 = MStack_20.m31;
  aMStack_25[0].m02 = MStack_20.m02;
  aMStack_25[0].m12 = MStack_20.m12;
  aMStack_25[0].m22 = MStack_20.m22;
  aMStack_25[0].m32 = MStack_20.m32;
  aMStack_25[0].m03 = MStack_20.m03;
  aMStack_25[0].m13 = MStack_20.m13;
  aMStack_25[0].m23 = MStack_20.m23;
  aMStack_25[0].m33 = MStack_20.m33;
  AABB::AABB_Transform(&AStack_13,aMStack_25,(MethodInfo *)0x0);
  (__return_storage_ptr__->_size).x = AStack_13._size.x;
  (__return_storage_ptr__->_size).y = AStack_13._size.y;
  *(ulonglong *)&(__return_storage_ptr__->_size).z = CONCAT44(AStack_13._center.x,AStack_13._size.z);
  (__return_storage_ptr__->_center).y = AStack_13._center.y;
  (__return_storage_ptr__->_center).z = AStack_13._center.z;
  __return_storage_ptr__->_isValid = AStack_13._isValid;
  *(undefined3 *)&__return_storage_ptr__->field_0x19 = AStack_13._25_3_;
  return __return_storage_ptr__;
}


/* List`1[UnityEngine.Vector3] GetHrzExtents() */

List_1_UnityEngine_Vector3_ * Assembly-CSharp.dll::RTG::CylTorusShape3D::CylTorusShape3D_GetHrzExtents(CylTorusShape3D *this,MethodInfo *method)

{
  VStack_1.x = (this->fields)._center.x;
  VStack_1.y = (this->fields)._center.y;
  QStack_2.x = (this->fields)._rotation.x;
  QStack_2.y = (this->fields)._rotation.y;
  QStack_2.z = (this->fields)._rotation.z;
  QStack_2.w = (this->fields)._rotation.w;
  VStack_1.z = (this->fields)._center.z;
  pLVar3 = TorusMath::TorusMath_Calc3DHrzExtentPoints(&VStack_1,(this->fields)._coreRadius,(this->fields)._hrzRadius,&QStack_2,(MethodInfo *)0x0);
  return pLVar3;
}


/* Boolean Raycast(Ray, Single ByRef) */

bool Assembly-CSharp.dll::RTG::CylTorusShape3D::CylTorusShape3D_Raycast(CylTorusShape3D *this,Ray *ray,float *t,MethodInfo *method)

{
  TStack_1._cylVertRadius = (this->fields)._epsilon._cylVertRadius;
  TStack_1._tubeRadiusEps = (this->fields)._epsilon._tubeRadiusEps;
  TStack_1._cylHrzRadius = (this->fields)._epsilon._cylHrzRadius;
  VStack_2.x = (this->fields)._center.x;
  VStack_2.y = (this->fields)._center.y;
  QStack_3.x = (this->fields)._rotation.x;
  QStack_3.y = (this->fields)._rotation.y;
  QStack_3.z = (this->fields)._rotation.z;
  QStack_3.w = (this->fields)._rotation.w;
  VStack_2.z = (this->fields)._center.z;
  RStack_4.m_Origin.x = (ray->m_Origin).x;
  RStack_4.m_Origin.y = (ray->m_Origin).y;
  RStack_4._8_8_ = *(undefined8 *)&(ray->m_Origin).z;
  RStack_4.m_Direction.y = (ray->m_Direction).y;
  RStack_4.m_Direction.z = (ray->m_Direction).z;
  bVar5 = TorusMath::TorusMath_RaycastCylindrical(&RStack_4,t,&VStack_2,(this->fields)._coreRadius,(this->fields)._hrzRadius,(this->fields)._vertRadius,&QStack_3,&TStack_1,(MethodInfo *)0x0);
  return bVar5;
}


/* Void RenderSolid() */

void Assembly-CSharp.dll::RTG::CylTorusShape3D::CylTorusShape3D_RenderSolid(CylTorusShape3D *this,MethodInfo *method)

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
  pMVar3 = pOVar1[1].monitor;
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
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  CStack_4.r = 1.0;
  CStack_4.g = 1.0;
  CStack_4.b = 1.0;
  CStack_4.a = 1.0;
  pVVar5 = TypeInfo__UnityEngine__Vector3->static_fields;
  VStack_6.x = (pVVar5->zeroVector).x;
  VStack_6.y = (pVVar5->zeroVector).y;
  VStack_6.z = (pVVar5->zeroVector).z;
  pMVar7 = TorusMesh::TorusMesh_CreateCylindricalTorus(&VStack_6,1.0,1.0,1.0,0x50,&CStack_4,(MethodInfo *)0x0);
  bVar8 = iRam_? != 0;
  pOVar1[1].monitor = (MonitorData *)pMVar7;
  if (bVar8) {
    uVar9 = (uint)((ulonglong)&pOVar1[1].monitor >> 0xc);
    uVar10 = (ulonglong)((uVar9 & 0x1fffff) >> 6);
    do {
      uVar11 = *(ulonglong *)(uVar10 * 8 + 0xADDR);
      puVar12 = (ulonglong *)(uVar10 * 8 + 0xADDR);
      LOCK();
      bVar8 = uVar11 == *puVar12;
      if (bVar8) {
        *puVar12 = uVar11 | 1L << (uVar9 & 0x3f);
      }
      UNLOCK();
    } while (!bVar8);
  }
code_?:
  pMVar7 = (Mesh *)pOVar1[1].monitor;
  fVar13 = (this->fields)._center.z;
  uVar14._0_4_ = (this->fields)._center.x;
  uVar14._4_4_ = (this->fields)._center.y;
  uVar15._0_4_ = (this->fields)._rotation.x;
  uVar15._4_4_ = (this->fields)._rotation.y;
  uVar16._0_4_ = (this->fields)._rotation.z;
  uVar16._4_4_ = (this->fields)._rotation.w;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar5 = TypeInfo__UnityEngine__Vector3->static_fields;
  CStack_4.b = fVar13;
  VStack_6.x = (pVVar5->oneVector).x;
  VStack_6.y = (pVVar5->oneVector).y;
  VStack_6.z = (pVVar5->oneVector).z;
  MStack_17.m00 = 0.0;
  MStack_17.m10 = 0.0;
  MStack_17.m20 = 0.0;
  MStack_17.m30 = 0.0;
  MStack_17.m01 = 0.0;
  MStack_17.m11 = 0.0;
  MStack_17.m21 = 0.0;
  MStack_17.m31 = 0.0;
  MStack_17.m02 = 0.0;
  MStack_17.m12 = 0.0;
  MStack_17.m22 = 0.0;
  MStack_17.m32 = 0.0;
  MStack_17.m03 = 0.0;
  MStack_17.m13 = 0.0;
  MStack_17.m23 = 0.0;
  MStack_17.m33 = 0.0;
  pcVar2 = pcRam_?;
  CStack_4._0_8_ = uVar14;
  uStack_18 = uVar15;
  uStack_19 = uVar16;
  if ((pcRam_? == (code *)0x0) && (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
    uVar14 = func_?(&UNK_?);
    FUN_?(uVar14,0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcRam_? = pcVar2;
  (*pcRam_?)(&CStack_4,&uStack_18,&VStack_6);
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
  MStack_20.m00 = MStack_17.m00;
  MStack_20.m10 = MStack_17.m10;
  MStack_20.m20 = MStack_17.m20;
  MStack_20.m30 = MStack_17.m30;
  MStack_20.m01 = MStack_17.m01;
  MStack_20.m11 = MStack_17.m11;
  MStack_20.m21 = MStack_17.m21;
  MStack_20.m31 = MStack_17.m31;
  MStack_20.m02 = MStack_17.m02;
  MStack_20.m12 = MStack_17.m12;
  MStack_20.m22 = MStack_17.m22;
  MStack_20.m32 = MStack_17.m32;
  MStack_20.m03 = MStack_17.m03;
  MStack_20.m13 = MStack_17.m13;
  MStack_20.m23 = MStack_17.m23;
  MStack_20.m33 = MStack_17.m33;
  UnityEngine.CoreModule.dll::UnityEngine::Graphics::Graphics_DrawMeshNow_1(pMVar7,&MStack_20,-1,(MethodInfo *)0x0);
  return;
}


/* Void RenderWire() */

void Assembly-CSharp.dll::RTG::CylTorusShape3D::CylTorusShape3D_RenderWire(CylTorusShape3D *this,MethodInfo *method)

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
  this_00 = (MeshPool *)Singleton`1[System::Object]::Singleton_1_System_Object__1_get_Get(MethodInfo__RTG__Singleton<RTG::MeshPool>__get_Get__);
  if (this_00 == (MeshPool *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  mesh = MeshPool::MeshPool_get_UnitWireCircleXY(this_00,(MethodInfo *)0x0);
  fVar2 = (this->fields)._hrzRadius;
  fVar3 = (this->fields)._coreRadius;
  fVar4 = (this->fields)._hrzRadius;
  fVar5 = (this->fields)._coreRadius;
  uStack_6 = 0x3fc90fdb;
  fStack_7 = 0.0;
  uStack_8 = 0;
  uStack_9 = 0;
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) && (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar10 = func_?(&UNK_?);
    FUN_?(uVar10,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
  (*pcRam_?)(&uStack_6,&uStack_8);
  uVar11 = (this->fields)._center.x;
  uVar12 = (this->fields)._center.y;
  fVar13 = (this->fields)._center.z;
  pVVar14 = TriangPrismShape3D::TriangPrismShape3D_get_Up(&VStack_15,(TriangPrismShape3D *)this,(MethodInfo *)0x0);
  fVar16 = (this->fields)._vertRadius;
  uVar17 = pVVar14->x;
  uVar18 = pVVar14->y;
  fStack_19 = fVar13 - pVVar14->z * fVar16;
  fVar13 = (this->fields)._rotation.x;
  fVar20 = (this->fields)._rotation.y;
  fVar21 = (this->fields)._rotation.z;
  fVar22 = (this->fields)._rotation.w;
  fVar23 = uStack_9._4_4_;
  fVar24 = (float)uStack_8;
  fVar25 = (float)uStack_9;
  fVar26 = uStack_8._4_4_;
  fStack_7 = 1.0;
  fStack_27 = (fVar13 * uStack_9._4_4_ + fVar22 * (float)uStack_8 + fVar20 * (float)uStack_9) - fVar21 * uStack_8._4_4_;
  fStack_28 = (fVar20 * uStack_9._4_4_ + fVar22 * uStack_8._4_4_ + fVar21 * (float)uStack_8) - fVar13 * (float)uStack_9;
  fStack_29 = (fVar21 * uStack_9._4_4_ + fVar22 * (float)uStack_9 + fVar13 * uStack_8._4_4_) - fVar20 * (float)uStack_8;
  uVar10 = CONCAT44(fVar4 + fVar5,fVar2 + fVar3);
  fStack_30 = ((fVar22 * uStack_9._4_4_ - fVar13 * (float)uStack_8) - fVar20 * uStack_8._4_4_) - fVar21 * (float)uStack_9;
  MStack_31.m00 = 0.0;
  MStack_31.m10 = 0.0;
  MStack_31.m20 = 0.0;
  MStack_31.m30 = 0.0;
  uStack_32 = CONCAT44((float)uVar12 - (float)uVar18 * fVar16,(float)uVar11 - (float)uVar17 * fVar16);
  MStack_31.m01 = 0.0;
  MStack_31.m11 = 0.0;
  MStack_31.m21 = 0.0;
  MStack_31.m31 = 0.0;
  MStack_31.m02 = 0.0;
  MStack_31.m12 = 0.0;
  MStack_31.m22 = 0.0;
  MStack_31.m32 = 0.0;
  MStack_31.m03 = 0.0;
  MStack_31.m13 = 0.0;
  MStack_31.m23 = 0.0;
  MStack_31.m33 = 0.0;
  pcVar1 = pcRam_?;
  uStack_6 = uVar10;
  fStack_33 = fStack_30;
  if ((pcRam_? == (code *)0x0) && (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar10 = func_?(&UNK_?);
    FUN_?(uVar10,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
  (*pcRam_?)(&uStack_32,&fStack_27,&uStack_6);
  if (*(int *)&(TypeInfo__UnityEngine__Graphics->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Graphics);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
    fVar25 = (float)uStack_9;
    fVar26 = uStack_8._4_4_;
    fVar23 = uStack_9._4_4_;
    fVar24 = (float)uStack_8;
  }
  if (*(int *)&(TypeInfo__UnityEngine__Graphics->_1).field_0x1c == 0) {
    FUN_?();
  }
  aMStack_34[0].m00 = MStack_31.m00;
  aMStack_34[0].m10 = MStack_31.m10;
  aMStack_34[0].m20 = MStack_31.m20;
  aMStack_34[0].m30 = MStack_31.m30;
  aMStack_34[0].m01 = MStack_31.m01;
  aMStack_34[0].m11 = MStack_31.m11;
  aMStack_34[0].m21 = MStack_31.m21;
  aMStack_34[0].m31 = MStack_31.m31;
  aMStack_34[0].m02 = MStack_31.m02;
  aMStack_34[0].m12 = MStack_31.m12;
  aMStack_34[0].m22 = MStack_31.m22;
  aMStack_34[0].m32 = MStack_31.m32;
  aMStack_34[0].m03 = MStack_31.m03;
  aMStack_34[0].m13 = MStack_31.m13;
  aMStack_34[0].m23 = MStack_31.m23;
  aMStack_34[0].m33 = MStack_31.m33;
  UnityEngine.CoreModule.dll::UnityEngine::Graphics::Graphics_DrawMeshNow_1(mesh,aMStack_34,-1,(MethodInfo *)0x0);
  uVar35 = (this->fields)._center.x;
  uVar36 = (this->fields)._center.y;
  fVar3 = (this->fields)._center.z;
  pVVar14 = TriangPrismShape3D::TriangPrismShape3D_get_Up(&VStack_15,(TriangPrismShape3D *)this,(MethodInfo *)0x0);
  fVar2 = (this->fields)._vertRadius;
  uVar37 = pVVar14->x;
  uVar38 = pVVar14->y;
  fVar4 = (this->fields)._rotation.x;
  fVar5 = (this->fields)._rotation.y;
  fVar16 = (this->fields)._rotation.z;
  fVar13 = (this->fields)._rotation.w;
  fStack_7 = pVVar14->z * fVar2 + fVar3;
  fStack_19 = 1.0;
  fStack_27 = (fVar4 * fVar23 + fVar13 * fVar24 + fVar5 * fVar25) - fVar16 * fVar26;
  fStack_28 = (fVar5 * fVar23 + fVar13 * fVar26 + fVar16 * fVar24) - fVar4 * fVar25;
  fStack_29 = (fVar16 * fVar23 + fVar13 * fVar25 + fVar4 * fVar26) - fVar5 * fVar24;
  fStack_39 = ((fVar13 * fVar23 - fVar4 * fVar24) - fVar5 * fVar26) - fVar16 * fVar25;
  MStack_31.m00 = 0.0;
  MStack_31.m10 = 0.0;
  MStack_31.m20 = 0.0;
  MStack_31.m30 = 0.0;
  uStack_6 = CONCAT44((float)uVar38 * fVar2 + (float)uVar36,(float)uVar37 * fVar2 + (float)uVar35);
  MStack_31.m01 = 0.0;
  MStack_31.m11 = 0.0;
  MStack_31.m21 = 0.0;
  MStack_31.m31 = 0.0;
  MStack_31.m02 = 0.0;
  MStack_31.m12 = 0.0;
  MStack_31.m22 = 0.0;
  MStack_31.m32 = 0.0;
  MStack_31.m03 = 0.0;
  MStack_31.m13 = 0.0;
  MStack_31.m23 = 0.0;
  MStack_31.m33 = 0.0;
  pcVar1 = pcRam_?;
  uStack_32 = uVar10;
  fStack_33 = fStack_39;
  if ((pcRam_? == (code *)0x0) && (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar10 = func_?(&UNK_?);
    FUN_?(uVar10,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
  (*pcRam_?)(&uStack_6,&fStack_27,&uStack_32);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Graphics);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
    fVar23 = uStack_9._4_4_;
    fVar24 = (float)uStack_8;
  }
  if (*(int *)&(TypeInfo__UnityEngine__Graphics->_1).field_0x1c == 0) {
    FUN_?();
  }
  aMStack_34[0].m00 = MStack_31.m00;
  aMStack_34[0].m10 = MStack_31.m10;
  aMStack_34[0].m20 = MStack_31.m20;
  aMStack_34[0].m30 = MStack_31.m30;
  aMStack_34[0].m01 = MStack_31.m01;
  aMStack_34[0].m11 = MStack_31.m11;
  aMStack_34[0].m21 = MStack_31.m21;
  aMStack_34[0].m31 = MStack_31.m31;
  aMStack_34[0].m02 = MStack_31.m02;
  aMStack_34[0].m12 = MStack_31.m12;
  aMStack_34[0].m22 = MStack_31.m22;
  aMStack_34[0].m32 = MStack_31.m32;
  aMStack_34[0].m03 = MStack_31.m03;
  aMStack_34[0].m13 = MStack_31.m13;
  aMStack_34[0].m23 = MStack_31.m23;
  aMStack_34[0].m33 = MStack_31.m33;
  UnityEngine.CoreModule.dll::UnityEngine::Graphics::Graphics_DrawMeshNow_1(mesh,aMStack_34,-1,(MethodInfo *)0x0);
  fVar2 = (this->fields)._coreRadius;
  fVar3 = (this->fields)._coreRadius;
  fVar4 = (this->fields)._hrzRadius;
  fVar5 = (this->fields)._hrzRadius;
  uVar40 = (this->fields)._center.x;
  uVar41 = (this->fields)._center.y;
  fVar13 = (this->fields)._center.z;
  pVVar14 = TriangPrismShape3D::TriangPrismShape3D_get_Up(&VStack_15,(TriangPrismShape3D *)this,(MethodInfo *)0x0);
  fVar16 = (this->fields)._vertRadius;
  uVar42 = pVVar14->x;
  uVar43 = pVVar14->y;
  fStack_7 = fVar13 - pVVar14->z * fVar16;
  fVar13 = (this->fields)._rotation.x;
  fVar20 = (this->fields)._rotation.y;
  fVar21 = (this->fields)._rotation.z;
  fVar22 = (this->fields)._rotation.w;
  fStack_19 = 1.0;
  fStack_27 = (fVar13 * fVar23 + fVar22 * fVar24 + fVar20 * (float)uStack_9) - fVar21 * uStack_8._4_4_;
  fStack_28 = (fVar20 * fVar23 + fVar22 * uStack_8._4_4_ + fVar21 * fVar24) - fVar13 * (float)uStack_9;
  fStack_29 = (fVar21 * fVar23 + fVar22 * (float)uStack_9 + fVar13 * uStack_8._4_4_) - fVar20 * fVar24;
  uVar10 = CONCAT44(fVar3 - fVar5,fVar2 - fVar4);
  fStack_39 = ((fVar22 * fVar23 - fVar13 * fVar24) - fVar20 * uStack_8._4_4_) - fVar21 * (float)uStack_9;
  MStack_31.m00 = 0.0;
  MStack_31.m10 = 0.0;
  MStack_31.m20 = 0.0;
  MStack_31.m30 = 0.0;
  uStack_6 = CONCAT44((float)uVar41 - (float)uVar43 * fVar16,(float)uVar40 - (float)uVar42 * fVar16);
  MStack_31.m01 = 0.0;
  MStack_31.m11 = 0.0;
  MStack_31.m21 = 0.0;
  MStack_31.m31 = 0.0;
  MStack_31.m02 = 0.0;
  MStack_31.m12 = 0.0;
  MStack_31.m22 = 0.0;
  MStack_31.m32 = 0.0;
  MStack_31.m03 = 0.0;
  MStack_31.m13 = 0.0;
  MStack_31.m23 = 0.0;
  MStack_31.m33 = 0.0;
  pcVar1 = pcRam_?;
  uStack_32 = uVar10;
  fStack_33 = fStack_39;
  if ((pcRam_? == (code *)0x0) && (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar10 = func_?(&UNK_?);
    FUN_?(uVar10,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
  (*pcRam_?)(&uStack_6,&fStack_27,&uStack_32);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Graphics);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
    fVar23 = uStack_9._4_4_;
    fVar24 = (float)uStack_8;
  }
  if (*(int *)&(TypeInfo__UnityEngine__Graphics->_1).field_0x1c == 0) {
    FUN_?();
  }
  aMStack_34[0].m00 = MStack_31.m00;
  aMStack_34[0].m10 = MStack_31.m10;
  aMStack_34[0].m20 = MStack_31.m20;
  aMStack_34[0].m30 = MStack_31.m30;
  aMStack_34[0].m01 = MStack_31.m01;
  aMStack_34[0].m11 = MStack_31.m11;
  aMStack_34[0].m21 = MStack_31.m21;
  aMStack_34[0].m31 = MStack_31.m31;
  aMStack_34[0].m02 = MStack_31.m02;
  aMStack_34[0].m12 = MStack_31.m12;
  aMStack_34[0].m22 = MStack_31.m22;
  aMStack_34[0].m32 = MStack_31.m32;
  aMStack_34[0].m03 = MStack_31.m03;
  aMStack_34[0].m13 = MStack_31.m13;
  aMStack_34[0].m23 = MStack_31.m23;
  aMStack_34[0].m33 = MStack_31.m33;
  UnityEngine.CoreModule.dll::UnityEngine::Graphics::Graphics_DrawMeshNow_1(mesh,aMStack_34,-1,(MethodInfo *)0x0);
  uVar44 = (this->fields)._center.x;
  uVar45 = (this->fields)._center.y;
  fVar3 = (this->fields)._center.z;
  pVVar14 = TriangPrismShape3D::TriangPrismShape3D_get_Up(&VStack_15,(TriangPrismShape3D *)this,(MethodInfo *)0x0);
  fVar2 = (this->fields)._vertRadius;
  uVar46 = pVVar14->x;
  uVar47 = pVVar14->y;
  fVar4 = (this->fields)._rotation.x;
  fVar5 = (this->fields)._rotation.y;
  fVar16 = (this->fields)._rotation.z;
  fVar13 = (this->fields)._rotation.w;
  fStack_7 = pVVar14->z * fVar2 + fVar3;
  fStack_19 = 1.0;
  uStack_6 = CONCAT44((float)uVar47 * fVar2 + (float)uVar45,(float)uVar46 * fVar2 + (float)uVar44);
  fStack_27 = (fVar4 * fVar23 + fVar13 * fVar24 + fVar5 * (float)uStack_9) - fVar16 * uStack_8._4_4_;
  fStack_28 = (fVar5 * fVar23 + fVar13 * uStack_8._4_4_ + fVar16 * fVar24) - fVar4 * (float)uStack_9;
  fStack_29 = (fVar16 * fVar23 + fVar13 * (float)uStack_9 + fVar4 * uStack_8._4_4_) - fVar5 * fVar24;
  fStack_33 = ((fVar13 * fVar23 - fVar4 * fVar24) - fVar5 * uStack_8._4_4_) - fVar16 * (float)uStack_9;
  MStack_31.m00 = 0.0;
  MStack_31.m10 = 0.0;
  MStack_31.m20 = 0.0;
  MStack_31.m30 = 0.0;
  uStack_8 = CONCAT44(fStack_28,fStack_27);
  uStack_9 = CONCAT44(fStack_33,fStack_29);
  MStack_31.m01 = 0.0;
  MStack_31.m11 = 0.0;
  MStack_31.m21 = 0.0;
  MStack_31.m31 = 0.0;
  MStack_31.m02 = 0.0;
  MStack_31.m12 = 0.0;
  MStack_31.m22 = 0.0;
  MStack_31.m32 = 0.0;
  MStack_31.m03 = 0.0;
  MStack_31.m13 = 0.0;
  MStack_31.m23 = 0.0;
  MStack_31.m33 = 0.0;
  pcVar1 = pcRam_?;
  uStack_32 = uVar10;
  if ((pcRam_? == (code *)0x0) && (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar10 = func_?(&UNK_?);
    FUN_?(uVar10,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
  (*pcRam_?)(&uStack_6,&fStack_27,&uStack_32);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Graphics);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Graphics->_1).field_0x1c == 0) {
    FUN_?();
  }
  aMStack_34[0].m00 = MStack_31.m00;
  aMStack_34[0].m10 = MStack_31.m10;
  aMStack_34[0].m20 = MStack_31.m20;
  aMStack_34[0].m30 = MStack_31.m30;
  aMStack_34[0].m01 = MStack_31.m01;
  aMStack_34[0].m11 = MStack_31.m11;
  aMStack_34[0].m21 = MStack_31.m21;
  aMStack_34[0].m31 = MStack_31.m31;
  aMStack_34[0].m02 = MStack_31.m02;
  aMStack_34[0].m12 = MStack_31.m12;
  aMStack_34[0].m22 = MStack_31.m22;
  aMStack_34[0].m32 = MStack_31.m32;
  aMStack_34[0].m03 = MStack_31.m03;
  aMStack_34[0].m13 = MStack_31.m13;
  aMStack_34[0].m23 = MStack_31.m23;
  aMStack_34[0].m33 = MStack_31.m33;
  UnityEngine.CoreModule.dll::UnityEngine::Graphics::Graphics_DrawMeshNow_1(mesh,aMStack_34,-1,(MethodInfo *)0x0);
  return;
}


/* CylTorusShape3D() */

void Assembly-CSharp.dll::RTG::CylTorusShape3D::CylTorusShape3D__ctor(CylTorusShape3D *this,MethodInfo *method)

{
  bVar1 = cRam_? == '\0';
  (this->fields)._coreRadius = 1.0;
  (this->fields)._hrzRadius = 1.0;
  (this->fields)._vertRadius = 1.0;
  if (bVar1) {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar1 = cRam_? == '\0';
  pVVar2 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar3 = (pVVar2->zeroVector).y;
  fVar4 = (pVVar2->zeroVector).z;
  (this->fields)._center.x = (pVVar2->zeroVector).x;
  (this->fields)._center.y = fVar3;
  (this->fields)._center.z = fVar4;
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


/* Vector3 get_Bottom() */

Vector3 * Assembly-CSharp.dll::RTG::CylTorusShape3D::CylTorusShape3D_get_Bottom(Vector3 *__return_storage_ptr__,CylTorusShape3D *this,MethodInfo *method)

{
  fVar1 = (this->fields)._center.z;
  uVar2 = (this->fields)._center.x;
  uVar3 = (this->fields)._center.y;
  pVVar4 = TriangPrismShape3D::TriangPrismShape3D_get_Up(aVStack_5,(TriangPrismShape3D *)this,(MethodInfo *)0x0);
  fVar6 = (this->fields)._vertRadius;
  uVar7 = pVVar4->x;
  uVar8 = pVVar4->y;
  fVar9 = pVVar4->z;
  __return_storage_ptr__->x = (float)uVar2 - fVar6 * (float)uVar7;
  __return_storage_ptr__->y = (float)uVar3 - fVar6 * (float)uVar8;
  __return_storage_ptr__->z = fVar1 - fVar6 * fVar9;
  return __return_storage_ptr__;
}


/* Vector3 get_Top() */

Vector3 * Assembly-CSharp.dll::RTG::CylTorusShape3D::CylTorusShape3D_get_Top(Vector3 *__return_storage_ptr__,CylTorusShape3D *this,MethodInfo *method)

{
  fVar1 = (this->fields)._center.z;
  uVar2 = (this->fields)._center.x;
  uVar3 = (this->fields)._center.y;
  pVVar4 = TriangPrismShape3D::TriangPrismShape3D_get_Up(aVStack_5,(TriangPrismShape3D *)this,(MethodInfo *)0x0);
  fVar6 = (this->fields)._vertRadius;
  uVar7 = pVVar4->x;
  uVar8 = pVVar4->y;
  fVar9 = pVVar4->z;
  __return_storage_ptr__->x = fVar6 * (float)uVar7 + (float)uVar2;
  __return_storage_ptr__->y = fVar6 * (float)uVar8 + (float)uVar3;
  __return_storage_ptr__->z = fVar6 * fVar9 + fVar1;
  return __return_storage_ptr__;
}


/* Void set_Bottom(Vector3) */

void Assembly-CSharp.dll::RTG::CylTorusShape3D::CylTorusShape3D_set_Bottom(CylTorusShape3D *this,Vector3 *value,MethodInfo *method)

{
  pVVar1 = TriangPrismShape3D::TriangPrismShape3D_get_Up(aVStack_2,(TriangPrismShape3D *)this,(MethodInfo *)0x0);
  fVar3 = (this->fields)._vertRadius;
  uVar4 = pVVar1->x;
  uVar5 = pVVar1->y;
  uVar6 = value->x;
  uVar7 = value->y;
  fVar8 = pVVar1->z;
  fVar9 = value->z;
  (this->fields)._center.x = fVar3 * (float)uVar4 + (float)uVar6;
  (this->fields)._center.y = fVar3 * (float)uVar5 + (float)uVar7;
  (this->fields)._center.z = fVar3 * fVar8 + fVar9;
  return;
}


/* Void set_Center(Vector3) */

void Assembly-CSharp.dll::RTG::CylTorusShape3D::CylTorusShape3D_set_Center(CylTorusShape3D *this,Vector3 *value,MethodInfo *method)

{
  fVar1 = value->y;
  fVar2 = value->z;
  (this->fields)._center.x = value->x;
  (this->fields)._center.y = fVar1;
  (this->fields)._center.z = fVar2;
  return;
}


/* Void set_CylHrzRadiusEps(Single) */

void Assembly-CSharp.dll::RTG::CylTorusShape3D::CylTorusShape3D_set_CylHrzRadiusEps(CylTorusShape3D *this,float value,MethodInfo *method)

{
  (this->fields)._epsilon._cylHrzRadius = ABS(value);
  return;
}


/* Void set_CylVertRadiusEps(Single) */

void Assembly-CSharp.dll::RTG::CylTorusShape3D::CylTorusShape3D_set_CylVertRadiusEps(CylTorusShape3D *this,float value,MethodInfo *method)

{
  (this->fields)._epsilon._cylVertRadius = ABS(value);
  return;
}


/* Void set_Top(Vector3) */

void Assembly-CSharp.dll::RTG::CylTorusShape3D::CylTorusShape3D_set_Top(CylTorusShape3D *this,Vector3 *value,MethodInfo *method)

{
  pVVar1 = TriangPrismShape3D::TriangPrismShape3D_get_Up(aVStack_2,(TriangPrismShape3D *)this,(MethodInfo *)0x0);
  fVar3 = (this->fields)._vertRadius;
  uVar4 = pVVar1->x;
  uVar5 = pVVar1->y;
  uVar6 = value->x;
  fVar7 = value->y;
  fVar8 = pVVar1->z;
  fVar9 = value->z;
  (this->fields)._center.x = (float)uVar6 - fVar3 * (float)uVar4;
  (this->fields)._center.y = fVar7 - fVar3 * (float)uVar5;
  (this->fields)._center.z = fVar9 - fVar3 * fVar8;
  return;
}

