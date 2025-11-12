
/* AABB GetAABB() */

AABB * Assembly-CSharp.dll::RTG::TorusShape3D::TorusShape3D_GetAABB
                 (AABB *__return_storage_ptr__,TorusShape3D *this,MethodInfo *method)

{
  fVar1 = (this->fields)._tubeRadius + (this->fields)._coreRadius;
  *(undefined2 *)&__return_storage_ptr__->field_0x19 = 0;
  __return_storage_ptr__->field_0x1b = 0;
  fVar2 = (this->fields)._center.y;
  fVar3 = (this->fields)._center.z;
  fVar1 = fVar1 + fVar1;
  (__return_storage_ptr__->_center).x = (this->fields)._center.x;
  (__return_storage_ptr__->_center).y = fVar2;
  (__return_storage_ptr__->_center).z = fVar3;
  __return_storage_ptr__->_isValid = 1;
  (__return_storage_ptr__->_size).x = fVar1;
  (__return_storage_ptr__->_size).y = fVar1;
  (__return_storage_ptr__->_size).z = fVar1;
  return __return_storage_ptr__;
}


/* List`1[UnityEngine.Vector3] GetHrzExtents() */

List_1_UnityEngine_Vector3_ *
Assembly-CSharp.dll::RTG::TorusShape3D::TorusShape3D_GetHrzExtents
          (TorusShape3D *this,MethodInfo *method)

{
  VStack_1.x = (this->fields)._center.x;
  VStack_1.y = (this->fields)._center.y;
  QStack_2.x = (this->fields)._rotation.x;
  QStack_2.y = (this->fields)._rotation.y;
  QStack_2.z = (this->fields)._rotation.z;
  QStack_2.w = (this->fields)._rotation.w;
  VStack_1.z = (this->fields)._center.z;
  pLVar3 = TorusMath::TorusMath_Calc3DHrzExtentPoints
                     (&VStack_1,(this->fields)._coreRadius,(this->fields)._tubeRadius,&QStack_2,
                      (MethodInfo *)0x0);
  return pLVar3;
}


/* Boolean Raycast(Ray, Single ByRef) */

bool Assembly-CSharp.dll::RTG::TorusShape3D::TorusShape3D_Raycast
               (TorusShape3D *this,Ray *ray,float *t,MethodInfo *method)

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
  bVar5 = TorusMath::TorusMath_Raycast
                    (&RStack_4,t,&VStack_2,(this->fields)._coreRadius,(this->fields)._tubeRadius,
                     &QStack_3,&TStack_1,(MethodInfo *)0x0);
  return bVar5;
}


/* Void RenderSolid() */

void Assembly-CSharp.dll::RTG::TorusShape3D::TorusShape3D_RenderSolid
               (TorusShape3D *this,MethodInfo *method)

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
  pOVar3 = pOVar1[1].klass;
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
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  CStack_4.r = _UNK_?;
  CStack_4.g = _UNK_?;
  CStack_4.b = _UNK_?;
  CStack_4.a = _UNK_?;
  pVVar5 = TypeInfo__UnityEngine__Vector3->static_fields;
  VStack_6.x = (pVVar5->zeroVector).x;
  VStack_6.y = (pVVar5->zeroVector).y;
  VStack_6.z = (pVVar5->zeroVector).z;
  pOVar3 = (Object__Class *)
           TorusMesh::TorusMesh_CreateTorus
                     (&VStack_6,_UNK_?,_UNK_?,0x50,0x50,&CStack_4,
                      (MethodInfo *)0x0);
  bVar7 = iRam_? != 0;
  pOVar1[1].klass = pOVar3;
  if (bVar7) {
    uVar8 = (uint)((ulonglong)(pOVar1 + 1) >> 0xc);
    uVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6);
    do {
      uVar10 = *(ulonglong *)(uVar9 * 8 + 0xADDR);
      puVar11 = (ulonglong *)(uVar9 * 8 + 0xADDR);
      LOCK();
      bVar7 = uVar10 == *puVar11;
      if (bVar7) {
        *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
      }
      UNLOCK();
    } while (!bVar7);
  }
code_?:
  pOVar3 = pOVar1[1].klass;
  fVar12 = (this->fields)._center.z;
  uVar13._0_4_ = (this->fields)._center.x;
  uVar13._4_4_ = (this->fields)._center.y;
  uVar14._0_4_ = (this->fields)._rotation.x;
  uVar14._4_4_ = (this->fields)._rotation.y;
  uVar15._0_4_ = (this->fields)._rotation.z;
  uVar15._4_4_ = (this->fields)._rotation.w;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar5 = TypeInfo__UnityEngine__Vector3->static_fields;
  CStack_4.b = fVar12;
  VStack_6.x = (pVVar5->oneVector).x;
  VStack_6.y = (pVVar5->oneVector).y;
  VStack_6.z = (pVVar5->oneVector).z;
  MStack_16.m00 = 0.0;
  MStack_16.m10 = 0.0;
  MStack_16.m20 = 0.0;
  MStack_16.m30 = 0.0;
  MStack_16.m01 = 0.0;
  MStack_16.m11 = 0.0;
  MStack_16.m21 = 0.0;
  MStack_16.m31 = 0.0;
  MStack_16.m02 = 0.0;
  MStack_16.m12 = 0.0;
  MStack_16.m22 = 0.0;
  MStack_16.m32 = 0.0;
  MStack_16.m03 = 0.0;
  MStack_16.m13 = 0.0;
  MStack_16.m23 = 0.0;
  MStack_16.m33 = 0.0;
  pcVar2 = pcRam_?;
  CStack_4._0_8_ = uVar13;
  uStack_17 = uVar14;
  uStack_18 = uVar15;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
    uVar13 = func_?(&UNK_?);
    FUN_?(uVar13,0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcRam_? = pcVar2;
  (*pcRam_?)(&CStack_4,&uStack_17,&VStack_6);
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
  MStack_19.m00 = MStack_16.m00;
  MStack_19.m10 = MStack_16.m10;
  MStack_19.m20 = MStack_16.m20;
  MStack_19.m30 = MStack_16.m30;
  MStack_19.m01 = MStack_16.m01;
  MStack_19.m11 = MStack_16.m11;
  MStack_19.m21 = MStack_16.m21;
  MStack_19.m31 = MStack_16.m31;
  MStack_19.m02 = MStack_16.m02;
  MStack_19.m12 = MStack_16.m12;
  MStack_19.m22 = MStack_16.m22;
  MStack_19.m32 = MStack_16.m32;
  MStack_19.m03 = MStack_16.m03;
  MStack_19.m13 = MStack_16.m13;
  MStack_19.m23 = MStack_16.m23;
  MStack_19.m33 = MStack_16.m33;
  UnityEngine.CoreModule.dll::UnityEngine::Graphics::Graphics_DrawMeshNow_1
            ((Mesh *)pOVar3,&MStack_19,-1,(MethodInfo *)0x0);
  return;
}


/* Void RenderWire() */

void Assembly-CSharp.dll::RTG::TorusShape3D::TorusShape3D_RenderWire
               (TorusShape3D *this,MethodInfo *method)

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
  uStack_1 = 0;
  uStack_2 = 0;
  if (*(int *)&(TypeInfo__RTG__Singleton<RTG::MeshPool>->_1).field_0x1c == 0) {
    FUN_?();
  }
  this_00 = (MeshPool *)
            Singleton`1[System::Object]::Singleton_1_System_Object__1_get_Get
                      (MethodInfo__RTG__Singleton<RTG::MeshPool>__get_Get__);
  if (this_00 != (MeshPool *)0x0) {
    mesh = MeshPool::MeshPool_get_UnitWireCircleXY(this_00,(MethodInfo *)0x0);
    pTVar3 = (this->fields)._wireRenderDesc;
    if (pTVar3 != (TorusShape3D_WireRenderDescriptor *)0x0) {
      iVar4 = 0;
      if (((pTVar3->fields)._numTubeSlices == 0) || (((pTVar3->fields)._wireFlags & 1) == 0)) {
code_?:
        pTVar3 = (this->fields)._wireRenderDesc;
        if (pTVar3 != (TorusShape3D_WireRenderDescriptor *)0x0) {
          if (((pTVar3->fields)._numAxialSlices == 0) || (((pTVar3->fields)._wireFlags & 2) == 0))
          {
            return;
          }
          fVar5 = (this->fields)._rotation.x;
          fVar6 = (this->fields)._rotation.y;
          fVar7 = (this->fields)._rotation.z;
          fVar8 = (this->fields)._rotation.w;
          uStack_9 = (ulonglong)_UNK_?;
          fStack_10 = 0.0;
          auStack_11._0_4_ = 0.0;
          auStack_11._4_4_ = 0.0;
          uStack_12 = 0;
          pcVar13 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar13 = (code *)FUN_?(&UNK_?), pcVar13 == (code *)0x0)) {
            uVar14 = func_?(&UNK_?);
            FUN_?(uVar14,0);
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          pcRam_? = pcVar13;
          (*pcRam_?)(&uStack_9,auStack_11);
          uVar15 = auStack_11._0_4_;
          pTVar3 = (this->fields)._wireRenderDesc;
          fVar16 = (float)auStack_11._4_4_ * fVar7;
          fVar17 = (float)auStack_11._4_4_ * fVar5;
          fVar18 = (float)auStack_11._4_4_ * fVar6;
          auStack_11._4_4_ =
               ((float)auStack_11._4_4_ * fVar8 + uStack_12._4_4_ * fVar6 +
               (float)auStack_11._0_4_ * fVar7) - (float)uStack_12 * fVar5;
          auStack_11._0_4_ =
               ((float)auStack_11._0_4_ * fVar8 + uStack_12._4_4_ * fVar5 +
               (float)uStack_12 * fVar6) - fVar16;
          auVar19 = auStack_11;
          uStack_12 = CONCAT44(((uStack_12._4_4_ * fVar8 - (float)uVar15 * fVar5) - fVar18) -
                                (float)uStack_12 * fVar7,
                                ((float)uStack_12 * fVar8 + uStack_12._4_4_ * fVar7 + fVar17) -
                                (float)uVar15 * fVar6);
          uVar14 = uStack_12;
          while (pTVar3 != (TorusShape3D_WireRenderDescriptor *)0x0) {
            if ((pTVar3->fields)._numAxialSlices <= iVar4) {
              return;
            }
            fVar6 = (float)FUN_?();
            fVar5 = (this->fields)._center.z;
            uVar20._0_4_ = (this->fields)._center.x;
            uVar20._4_4_ = (this->fields)._center.y;
            fVar7 = (this->fields)._coreRadius - fVar6 * (this->fields)._tubeRadius;
            fVar6 = (float)FUN_?();
            fVar6 = fVar6 * (this->fields)._tubeRadius;
            pVVar21 = TorusShape3D_get_Up((Vector3 *)auStack_11,this,(MethodInfo *)0x0);
            uVar22 = pVVar21->x;
            uVar23 = pVVar21->y;
            uStack_9 = CONCAT44(fVar7,fVar7);
            fStack_10 = _UNK_?;
            fStack_24 = fVar6 * pVVar21->z + fVar5;
            auStack_25._0_8_ = auVar19;
            auStack_25._8_8_ = uVar14;
            uStack_26 = CONCAT44(fVar6 * (float)uVar23 + uVar20._4_4_,
                                  fVar6 * (float)uVar22 + (float)uVar20);
            MStack_27.m00 = 0.0;
            MStack_27.m10 = 0.0;
            MStack_27.m20 = 0.0;
            MStack_27.m30 = 0.0;
            MStack_27.m01 = 0.0;
            MStack_27.m11 = 0.0;
            MStack_27.m21 = 0.0;
            MStack_27.m31 = 0.0;
            MStack_27.m02 = 0.0;
            MStack_27.m12 = 0.0;
            MStack_27.m22 = 0.0;
            MStack_27.m32 = 0.0;
            MStack_27.m03 = 0.0;
            MStack_27.m13 = 0.0;
            MStack_27.m23 = 0.0;
            MStack_27.m33 = 0.0;
            pcVar13 = pcRam_?;
            VStack_28._0_8_ = uVar20;
            if ((pcRam_? == (code *)0x0) &&
               (pcVar13 = (code *)FUN_?(&UNK_?), pcVar13 == (code *)0x0)) {
              uVar14 = func_?(&UNK_?);
              FUN_?(uVar14,0);
              pcVar13 = (code *)swi(3);
              (*pcVar13)();
              return;
            }
            pcRam_? = pcVar13;
            (*pcRam_?)(&uStack_26,auStack_25,&uStack_9);
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
            MStack_29.m00 = MStack_27.m00;
            MStack_29.m10 = MStack_27.m10;
            MStack_29.m20 = MStack_27.m20;
            MStack_29.m30 = MStack_27.m30;
            MStack_29.m01 = MStack_27.m01;
            MStack_29.m11 = MStack_27.m11;
            MStack_29.m21 = MStack_27.m21;
            MStack_29.m31 = MStack_27.m31;
            MStack_29.m02 = MStack_27.m02;
            MStack_29.m12 = MStack_27.m12;
            MStack_29.m22 = MStack_27.m22;
            MStack_29.m32 = MStack_27.m32;
            MStack_29.m03 = MStack_27.m03;
            MStack_29.m13 = MStack_27.m13;
            MStack_29.m23 = MStack_27.m23;
            MStack_29.m33 = MStack_27.m33;
            UnityEngine.CoreModule.dll::UnityEngine::Graphics::Graphics_DrawMeshNow_1
                      (mesh,&MStack_29,-1,(MethodInfo *)0x0);
            iVar4 = iVar4 + 1;
            pTVar3 = (this->fields)._wireRenderDesc;
          }
        }
      }
      else {
        fStack_30 = (this->fields)._tubeRadius;
        uStack_31 = 0x3f800000;
        fStack_32 = fStack_30;
        if (pTVar3 != (TorusShape3D_WireRenderDescriptor *)0x0) {
          iVar33 = 0;
          do {
            if ((pTVar3->fields)._numTubeSlices <= iVar33) goto code_?;
            uVar14._0_4_ = (this->fields)._center.x;
            uVar14._4_4_ = (this->fields)._center.y;
            fVar8 = (this->fields)._center.z;
            fVar16 = (float)FUN_?();
            pVVar21 = TorusShape3D_get_Right(&VStack_34,this,(MethodInfo *)0x0);
            uVar35 = pVVar21->x;
            uVar36 = pVVar21->y;
            fVar5 = (this->fields)._coreRadius;
            fVar6 = pVVar21->z;
            auStack_37 = (undefined1  [8])uVar14;
            fVar17 = (float)FUN_?();
            pVVar21 = TorusShape3D_get_Look(aVStack_38,this,(MethodInfo *)0x0);
            uVar39 = pVVar21->x;
            uVar40 = pVVar21->y;
            fVar7 = (this->fields)._coreRadius;
            fVar18 = (float)uVar40 * fVar17 * fVar7 +
                     (float)uVar36 * fVar16 * fVar5 + (float)uVar14._4_4_;
            fVar41 = (float)uVar39 * fVar17 * fVar7 +
                     (float)uVar35 * fVar16 * fVar5 + (float)(undefined4)uVar14;
            fVar16 = pVVar21->z * fVar17 * fVar7 + fVar6 * fVar16 * fVar5 + fVar8;
            auStack_37._0_4_ = (this->fields)._center.x;
            auStack_37._4_4_ = (this->fields)._center.y;
            fVar7 = fVar41 - (float)auStack_37._0_4_;
            fVar6 = fVar16 - (this->fields)._center.z;
            fVar5 = fVar18 - (float)auStack_37._4_4_;
            pVVar21 = TorusShape3D_get_Up(&VStack_28,this,(MethodInfo *)0x0);
            uStack_42._0_4_ = pVVar21->x;
            uStack_42._4_4_ = pVVar21->y;
            fVar8 = pVVar21->z * fVar5 - (float)uStack_42._4_4_ * fVar6;
            fVar5 = (float)uStack_42._4_4_ * fVar7 - (float)(undefined4)uStack_42 * fVar5;
            fVar7 = (float)(undefined4)uStack_42 * fVar6 - pVVar21->z * fVar7;
            uStack_43 = CONCAT44(fVar7,fVar8);
            fStack_44 = fVar5;
            fVar6 = (float)FUN_?(&uStack_43);
            if (_UNK_? < fVar6) {
              fVar5 = fVar5 / fVar6;
              uStack_1 = CONCAT44(fVar7 / fVar6,fVar8 / fVar6);
            }
            else {
              if (cRam_? == '\0') {
                FUN_?(&TypeInfo__UnityEngine__Vector3);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              pVVar45 = TypeInfo__UnityEngine__Vector3->static_fields;
              uStack_1._0_4_ = (pVVar45->zeroVector).x;
              uStack_1._4_4_ = (pVVar45->zeroVector).y;
              fVar5 = (pVVar45->zeroVector).z;
            }
            uVar15 = uStack_1._4_4_;
            pVVar21 = TorusShape3D_get_Up((Vector3 *)auStack_11,this,(MethodInfo *)0x0);
            uStack_46._0_4_ = pVVar21->x;
            uStack_46._4_4_ = pVVar21->y;
            fStack_47 = pVVar21->z;
            uStack_48 = CONCAT44(uVar15,(undefined4)uStack_1);
            auStack_37._0_4_ = 0.0;
            auStack_37._4_4_ = 0.0;
            uStack_49 = 0;
            pcVar13 = pcRam_?;
            fStack_50 = fVar5;
            if ((pcRam_? == (code *)0x0) &&
               (pcVar13 = (code *)FUN_?(&UNK_?), pcVar13 == (code *)0x0)) {
              uVar14 = func_?(&UNK_?);
              FUN_?(uVar14,0);
              pcVar13 = (code *)swi(3);
              (*pcVar13)();
              return;
            }
            pcRam_? = pcVar13;
            (*pcRam_?)(&uStack_48,&uStack_46,auStack_37);
            uStack_26 = CONCAT44(fStack_32,fStack_30);
            uStack_9 = CONCAT44(fVar18,fVar41);
            fStack_24 = 1.0;
            auStack_25._0_8_ = auStack_37;
            auStack_25._8_8_ = uStack_49;
            MStack_27.m00 = 0.0;
            MStack_27.m10 = 0.0;
            MStack_27.m20 = 0.0;
            MStack_27.m30 = 0.0;
            MStack_27.m01 = 0.0;
            MStack_27.m11 = 0.0;
            MStack_27.m21 = 0.0;
            MStack_27.m31 = 0.0;
            MStack_27.m02 = 0.0;
            MStack_27.m12 = 0.0;
            MStack_27.m22 = 0.0;
            MStack_27.m32 = 0.0;
            MStack_27.m03 = 0.0;
            MStack_27.m13 = 0.0;
            MStack_27.m23 = 0.0;
            MStack_27.m33 = 0.0;
            pcVar13 = pcRam_?;
            fStack_10 = fVar16;
            if ((pcRam_? == (code *)0x0) &&
               (pcVar13 = (code *)FUN_?(&UNK_?), pcVar13 == (code *)0x0)) {
              uVar14 = func_?(&UNK_?);
              FUN_?(uVar14,0);
              pcVar13 = (code *)swi(3);
              (*pcVar13)();
              return;
            }
            pcRam_? = pcVar13;
            (*pcRam_?)(&uStack_9,auStack_25,&uStack_26);
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
            MStack_29.m00 = MStack_27.m00;
            MStack_29.m10 = MStack_27.m10;
            MStack_29.m20 = MStack_27.m20;
            MStack_29.m30 = MStack_27.m30;
            MStack_29.m01 = MStack_27.m01;
            MStack_29.m11 = MStack_27.m11;
            MStack_29.m21 = MStack_27.m21;
            MStack_29.m31 = MStack_27.m31;
            MStack_29.m02 = MStack_27.m02;
            MStack_29.m12 = MStack_27.m12;
            MStack_29.m22 = MStack_27.m22;
            MStack_29.m32 = MStack_27.m32;
            MStack_29.m03 = MStack_27.m03;
            MStack_29.m13 = MStack_27.m13;
            MStack_29.m23 = MStack_27.m23;
            MStack_29.m33 = MStack_27.m33;
            UnityEngine.CoreModule.dll::UnityEngine::Graphics::Graphics_DrawMeshNow_1
                      (mesh,&MStack_29,-1,(MethodInfo *)0x0);
            pTVar3 = (this->fields)._wireRenderDesc;
            iVar33 = iVar33 + 1;
          } while (pTVar3 != (TorusShape3D_WireRenderDescriptor *)0x0);
        }
      }
    }
  }
  FUN_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* TorusShape3D() */

void Assembly-CSharp.dll::RTG::TorusShape3D::TorusShape3D__ctor
               (TorusShape3D *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__TorusShape3D__WireRenderDescriptor);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar1 = cRam_? == '\0';
  (this->fields)._coreRadius = 1.0;
  (this->fields)._tubeRadius = 1.0;
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
  pTVar7 = (TorusShape3D_WireRenderDescriptor *)
           FUN_?(TypeInfo__RTG__TorusShape3D__WireRenderDescriptor);
  bVar1 = iRam_? != 0;
  (pTVar7->fields)._wireFlags = 2;
  (pTVar7->fields)._numTubeSlices = 0x1e;
  (pTVar7->fields)._numAxialSlices = 0x1e;
  (this->fields)._wireRenderDesc = pTVar7;
  if (bVar1) {
    uVar8 = (uint)((ulonglong)&(this->fields)._wireRenderDesc >> 0xc);
    uVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6);
    do {
      uVar10 = *(ulonglong *)(uVar9 * 8 + 0xADDR);
      puVar11 = (ulonglong *)(uVar9 * 8 + 0xADDR);
      LOCK();
      bVar1 = uVar10 == *puVar11;
      if (bVar1) {
        *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  return;
}


/* TorusEpsilon get_Epsilon() */

TorusEpsilon *
Assembly-CSharp.dll::RTG::TorusShape3D::TorusShape3D_get_Epsilon
          (TorusEpsilon *__return_storage_ptr__,TorusShape3D *this,MethodInfo *method)

{
  fVar1 = (this->fields)._epsilon._cylVertRadius;
  fVar2 = (this->fields)._epsilon._cylHrzRadius;
  __return_storage_ptr__->_tubeRadiusEps = (this->fields)._epsilon._tubeRadiusEps;
  __return_storage_ptr__->_cylHrzRadius = fVar2;
  __return_storage_ptr__->_cylVertRadius = fVar1;
  return __return_storage_ptr__;
}


/* Vector3 get_Look() */

Vector3 * Assembly-CSharp.dll::RTG::TorusShape3D::TorusShape3D_get_Look
                    (Vector3 *__return_storage_ptr__,TorusShape3D *this,MethodInfo *method)

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


/* Vector3 get_Right() */

Vector3 * Assembly-CSharp.dll::RTG::TorusShape3D::TorusShape3D_get_Right
                    (Vector3 *__return_storage_ptr__,TorusShape3D *this,MethodInfo *method)

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


/* Quaternion get_Rotation() */

Quaternion *
Assembly-CSharp.dll::RTG::TorusShape3D::TorusShape3D_get_Rotation
          (Quaternion *__return_storage_ptr__,TorusShape3D *this,MethodInfo *method)

{
  fVar1 = (this->fields)._rotation.y;
  fVar2 = (this->fields)._rotation.z;
  fVar3 = (this->fields)._rotation.w;
  __return_storage_ptr__->x = (this->fields)._rotation.x;
  __return_storage_ptr__->y = fVar1;
  __return_storage_ptr__->z = fVar2;
  __return_storage_ptr__->w = fVar3;
  return __return_storage_ptr__;
}


/* Vector3 get_Up() */

Vector3 * Assembly-CSharp.dll::RTG::TorusShape3D::TorusShape3D_get_Up
                    (Vector3 *__return_storage_ptr__,TorusShape3D *this,MethodInfo *method)

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


/* Void set_Center(Vector3) */

void Assembly-CSharp.dll::RTG::TorusShape3D::TorusShape3D_set_Center
               (TorusShape3D *this,Vector3 *value,MethodInfo *method)

{
  fVar1 = value->y;
  fVar2 = value->z;
  (this->fields)._center.x = value->x;
  (this->fields)._center.y = fVar1;
  (this->fields)._center.z = fVar2;
  return;
}


/* Void set_CoreRadius(Single) */

void Assembly-CSharp.dll::RTG::TorusShape3D::TorusShape3D_set_CoreRadius
               (TorusShape3D *this,float value,MethodInfo *method)

{
  (this->fields)._coreRadius = (float)((uint)value & _UNK_?);
  return;
}


/* Void set_Epsilon(TorusEpsilon) */

void Assembly-CSharp.dll::RTG::TorusShape3D::TorusShape3D_set_Epsilon
               (TorusShape3D *this,TorusEpsilon *value,MethodInfo *method)

{
  fVar1 = value->_cylHrzRadius;
  fVar2 = value->_cylVertRadius;
  (this->fields)._epsilon._tubeRadiusEps = value->_tubeRadiusEps;
  (this->fields)._epsilon._cylHrzRadius = fVar1;
  (this->fields)._epsilon._cylVertRadius = fVar2;
  return;
}


/* Void set_Rotation(Quaternion) */

void Assembly-CSharp.dll::RTG::TorusShape3D::TorusShape3D_set_Rotation
               (TorusShape3D *this,Quaternion *value,MethodInfo *method)

{
  fVar1 = value->y;
  fVar2 = value->z;
  fVar3 = value->w;
  (this->fields)._rotation.x = value->x;
  (this->fields)._rotation.y = fVar1;
  (this->fields)._rotation.z = fVar2;
  (this->fields)._rotation.w = fVar3;
  return;
}


/* Void set_TubeRadius(Single) */

void Assembly-CSharp.dll::RTG::TorusShape3D::TorusShape3D_set_TubeRadius
               (TorusShape3D *this,float value,MethodInfo *method)

{
  (this->fields)._tubeRadius = (float)((uint)value & _UNK_?);
  return;
}


/* Void set_TubeRadiusEps(Single) */

void Assembly-CSharp.dll::RTG::TorusShape3D::TorusShape3D_set_TubeRadiusEps
               (TorusShape3D *this,float value,MethodInfo *method)

{
  (this->fields)._epsilon._tubeRadiusEps = (float)((uint)value & _UNK_?);
  return;
}

