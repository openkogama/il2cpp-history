
/* Boolean ContainsPoint(Vector3) */

bool Assembly-CSharp.dll::RTG::SphereShape3D::SphereShape3D_ContainsPoint(SphereShape3D *this,Vector3 *point,MethodInfo *method)

{
  uVar1 = (this->fields)._center.x;
  uVar2 = (this->fields)._center.y;
  uVar3 = point->x;
  fVar4 = (this->fields)._epsilon._radiusEps + (this->fields)._radius;
  fVar5 = point->z - (this->fields)._center.z;
  fVar6 = point->y - (float)uVar2;
  return fVar6 * fVar6 + ((float)uVar3 - (float)uVar1) * ((float)uVar3 - (float)uVar1) + fVar5 * fVar5 <= fVar4 * fVar4;
}


/* AABB GetAABB() */

AABB * Assembly-CSharp.dll::RTG::SphereShape3D::SphereShape3D_GetAABB(AABB *__return_storage_ptr__,SphereShape3D *this,MethodInfo *method)

{
  fVar1 = (this->fields)._radius;
  *(undefined2 *)&__return_storage_ptr__->field_0x19 = 0;
  fVar1 = fVar1 + fVar1;
  __return_storage_ptr__->field_0x1b = 0;
  fVar2 = (this->fields)._center.y;
  fVar3 = (this->fields)._center.z;
  (__return_storage_ptr__->_center).x = (this->fields)._center.x;
  (__return_storage_ptr__->_center).y = fVar2;
  (__return_storage_ptr__->_center).z = fVar3;
  (__return_storage_ptr__->_size).x = fVar1;
  (__return_storage_ptr__->_size).y = fVar1;
  (__return_storage_ptr__->_size).z = fVar1;
  __return_storage_ptr__->_isValid = 1;
  return __return_storage_ptr__;
}


/* Boolean Raycast(Ray, Single ByRef) */

bool Assembly-CSharp.dll::RTG::SphereShape3D::SphereShape3D_Raycast(SphereShape3D *this,Ray *ray,float *t,MethodInfo *method)

{
  VStack_1.x = (this->fields)._center.x;
  VStack_1.y = (this->fields)._center.y;
  VStack_1.z = (this->fields)._center.z;
  RStack_2.m_Direction.y = (ray->m_Direction).y;
  RStack_2.m_Direction.z = (ray->m_Direction).z;
  RStack_2.m_Origin.x = (ray->m_Origin).x;
  RStack_2.m_Origin.y = (ray->m_Origin).y;
  RStack_2._8_8_ = *(undefined8 *)&(ray->m_Origin).z;
  bVar3 = SphereMath::SphereMath_Raycast_1(&RStack_2,t,&VStack_1,(this->fields)._radius,(SphereEpsilon)(this->fields)._epsilon._radiusEps,(MethodInfo *)0x0);
  return bVar3;
}


/* Void RenderSolid() */

void Assembly-CSharp.dll::RTG::SphereShape3D::SphereShape3D_RenderSolid(SphereShape3D *this,MethodInfo *method)

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
  mesh = MeshPool::MeshPool_get_UnitSphere(this_00,(MethodInfo *)0x0);
  uStack_2._0_4_ = (this->fields)._center.x;
  uStack_2._4_4_ = (this->fields)._center.y;
  fStack_3 = (this->fields)._center.z;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Quaternion);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  fStack_4 = (this->fields)._radius;
  uStack_5 = CONCAT44(fStack_4,fStack_4);
  pQVar6 = TypeInfo__UnityEngine__Quaternion->static_fields;
  uStack_7._0_4_ = (pQVar6->identityQuaternion).x;
  uStack_7._4_4_ = (pQVar6->identityQuaternion).y;
  uStack_8._0_4_ = (pQVar6->identityQuaternion).z;
  uStack_8._4_4_ = (pQVar6->identityQuaternion).w;
  MStack_9.m00 = 0.0;
  MStack_9.m10 = 0.0;
  MStack_9.m20 = 0.0;
  MStack_9.m30 = 0.0;
  MStack_9.m01 = 0.0;
  MStack_9.m11 = 0.0;
  MStack_9.m21 = 0.0;
  MStack_9.m31 = 0.0;
  MStack_9.m02 = 0.0;
  MStack_9.m12 = 0.0;
  MStack_9.m22 = 0.0;
  MStack_9.m32 = 0.0;
  MStack_9.m03 = 0.0;
  MStack_9.m13 = 0.0;
  MStack_9.m23 = 0.0;
  MStack_9.m33 = 0.0;
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) && (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar10 = func_?(&UNK_?);
    FUN_?(uVar10,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
  (*pcRam_?)(&uStack_2,&uStack_7,&uStack_5);
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
  MStack_11.m00 = MStack_9.m00;
  MStack_11.m10 = MStack_9.m10;
  MStack_11.m20 = MStack_9.m20;
  MStack_11.m30 = MStack_9.m30;
  MStack_11.m01 = MStack_9.m01;
  MStack_11.m11 = MStack_9.m11;
  MStack_11.m21 = MStack_9.m21;
  MStack_11.m31 = MStack_9.m31;
  MStack_11.m02 = MStack_9.m02;
  MStack_11.m12 = MStack_9.m12;
  MStack_11.m22 = MStack_9.m22;
  MStack_11.m32 = MStack_9.m32;
  MStack_11.m03 = MStack_9.m03;
  MStack_11.m13 = MStack_9.m13;
  MStack_11.m23 = MStack_9.m23;
  MStack_11.m33 = MStack_9.m33;
  UnityEngine.CoreModule.dll::UnityEngine::Graphics::Graphics_DrawMeshNow_1(mesh,&MStack_11,-1,(MethodInfo *)0x0);
  return;
}


/* Void RenderWire() */

void Assembly-CSharp.dll::RTG::SphereShape3D::SphereShape3D_RenderWire(SphereShape3D *this,MethodInfo *method)

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
  pSVar1 = (this->fields)._wireRenderDesc;
  uStack_2 = 0;
  uStack_3 = 0;
  if (pSVar1 != (SphereShape3D_WireRenderDescriptor *)0x0) {
    fVar4 = (pSVar1->fields)._radiusAdd + (this->fields)._radius;
    if ((pSVar1->fields)._wireMode == 0) {
      if (*(int *)&(TypeInfo__RTG__Singleton<RTG::MeshPool>->_1).field_0x1c == 0) {
        FUN_?();
      }
      pMVar5 = (MeshPool *)Singleton`1[System::Object]::Singleton_1_System_Object__1_get_Get(MethodInfo__RTG__Singleton<RTG::MeshPool>__get_Get__);
      if (pMVar5 != (MeshPool *)0x0) {
        pMVar6 = MeshPool::MeshPool_get_UnitWireCircleXY(pMVar5,(MethodInfo *)0x0);
        uStack_7._0_4_ = (this->fields)._rotation.x;
        uStack_7._4_4_ = (this->fields)._rotation.y;
        uStack_8._0_4_ = (this->fields)._rotation.z;
        uStack_8._4_4_ = (this->fields)._rotation.w;
        fStack_9 = (this->fields)._center.z;
        uStack_10._0_4_ = (this->fields)._center.x;
        uStack_10._4_4_ = (this->fields)._center.y;
        uStack_11 = CONCAT44(fVar4,fVar4);
        fStack_12 = 1.0;
        auStack_13 = ZEXT816(0);
        auStack_14 = ZEXT816(0);
        auStack_15 = ZEXT816(0);
        auStack_16 = ZEXT816(0);
        pcVar17 = pcRam_?;
        if ((pcRam_? == (code *)0x0) && (pcVar17 = (code *)FUN_?(&UNK_?), pcVar17 == (code *)0x0)) {
          uVar18 = func_?(&UNK_?);
          FUN_?(uVar18,0);
          pcVar17 = (code *)swi(3);
          (*pcVar17)();
          return;
        }
        pcRam_? = pcVar17;
        (*pcRam_?)(&uStack_10,&uStack_7,&uStack_11);
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
        auVar19 = auStack_16;
        auVar20 = auStack_15;
        auVar21 = auStack_14;
        auVar22 = auStack_13;
        aMStack_23[0].m00 = (float)auStack_13._0_4_;
        aMStack_23[0].m10 = (float)auStack_13._4_4_;
        aMStack_23[0].m20 = (float)auStack_13._8_4_;
        aMStack_23[0].m30 = (float)auStack_13._12_4_;
        aMStack_23[0].m01 = (float)auStack_14._0_4_;
        aMStack_23[0].m11 = (float)auStack_14._4_4_;
        aMStack_23[0].m21 = (float)auStack_14._8_4_;
        aMStack_23[0].m31 = (float)auStack_14._12_4_;
        aMStack_23[0].m02 = (float)auStack_15._0_4_;
        aMStack_23[0].m12 = (float)auStack_15._4_4_;
        aMStack_23[0].m22 = (float)auStack_15._8_4_;
        aMStack_23[0].m32 = (float)auStack_15._12_4_;
        aMStack_23[0].m03 = (float)auStack_16._0_4_;
        aMStack_23[0].m13 = (float)auStack_16._4_4_;
        aMStack_23[0].m23 = (float)auStack_16._8_4_;
        aMStack_23[0].m33 = (float)auStack_16._12_4_;
        auStack_13 = auVar22;
        auStack_14 = auVar21;
        auStack_15 = auVar20;
        auStack_16 = auVar19;
        UnityEngine.CoreModule.dll::UnityEngine::Graphics::Graphics_DrawMeshNow_1(pMVar6,aMStack_23,-1,(MethodInfo *)0x0);
        pMVar5 = (MeshPool *)Singleton`1[System::Object]::Singleton_1_System_Object__1_get_Get(MethodInfo__RTG__Singleton<RTG::MeshPool>__get_Get__);
        if (pMVar5 != (MeshPool *)0x0) {
          pMVar6 = MeshPool::MeshPool_get_UnitWireCircleXY(pMVar5,(MethodInfo *)0x0);
          uVar18._0_4_ = (this->fields)._center.x;
          uVar18._4_4_ = (this->fields)._center.y;
          fVar24 = (this->fields)._center.z;
          fVar25 = (this->fields)._rotation.x;
          fVar26 = (this->fields)._rotation.y;
          fVar27 = (this->fields)._rotation.z;
          fVar28 = (this->fields)._rotation.w;
          uStack_11 = 0x3fc90fdb;
          fStack_12 = 0.0;
          uStack_29 = 0;
          uStack_30 = 0;
          pcVar17 = pcRam_?;
          if ((pcRam_? == (code *)0x0) && (pcVar17 = (code *)FUN_?(&UNK_?), pcVar17 == (code *)0x0)) {
            uVar18 = func_?(&UNK_?);
            FUN_?(uVar18,0);
            pcVar17 = (code *)swi(3);
            (*pcVar17)();
            return;
          }
          pcRam_? = pcVar17;
          (*pcRam_?)(&uStack_11,&uStack_29);
          fStack_9 = 1.0;
          uStack_10 = CONCAT44(fVar4,fVar4);
          auStack_13 = ZEXT416(0);
          uStack_7 = CONCAT44((uStack_29._4_4_ * fVar28 + uStack_30._4_4_ * fVar26 + (float)uStack_29 * fVar27) - (float)uStack_30 * fVar25,((float)uStack_29 * fVar28 + uStack_30._4_4_ * fVar25 + (float)uStack_30 * fVar26) - uStack_29._4_4_ * fVar27);
          uStack_8 = CONCAT44(((uStack_30._4_4_ * fVar28 - (float)uStack_29 * fVar25) - uStack_29._4_4_ * fVar26) - (float)uStack_30 * fVar27,((float)uStack_30 * fVar28 + uStack_30._4_4_ * fVar27 + uStack_29._4_4_ * fVar25) - (float)uStack_29 * fVar26);
          pcVar17 = pcRam_?;
          uStack_31 = uVar18;
          fStack_32 = fVar24;
          auStack_14 = auStack_13;
          auStack_15 = auStack_13;
          auStack_16 = auStack_13;
          if ((pcRam_? == (code *)0x0) && (pcVar17 = (code *)FUN_?(&UNK_?), pcVar17 == (code *)0x0)) {
            uVar18 = func_?(&UNK_?);
            FUN_?(uVar18,0);
            pcVar17 = (code *)swi(3);
            (*pcVar17)();
            return;
          }
          pcRam_? = pcVar17;
          (*pcRam_?)(&uStack_31,&uStack_7,&uStack_10);
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__UnityEngine__Graphics);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          if (*(int *)&(TypeInfo__UnityEngine__Graphics->_1).field_0x1c == 0) {
            FUN_?();
          }
          auVar19 = auStack_16;
          auVar20 = auStack_15;
          auVar21 = auStack_14;
          auVar22 = auStack_13;
          aMStack_23[0].m00 = (float)auStack_13._0_4_;
          aMStack_23[0].m10 = (float)auStack_13._4_4_;
          aMStack_23[0].m20 = (float)auStack_13._8_4_;
          aMStack_23[0].m30 = (float)auStack_13._12_4_;
          aMStack_23[0].m01 = (float)auStack_14._0_4_;
          aMStack_23[0].m11 = (float)auStack_14._4_4_;
          aMStack_23[0].m21 = (float)auStack_14._8_4_;
          aMStack_23[0].m31 = (float)auStack_14._12_4_;
          aMStack_23[0].m02 = (float)auStack_15._0_4_;
          aMStack_23[0].m12 = (float)auStack_15._4_4_;
          aMStack_23[0].m22 = (float)auStack_15._8_4_;
          aMStack_23[0].m32 = (float)auStack_15._12_4_;
          aMStack_23[0].m03 = (float)auStack_16._0_4_;
          aMStack_23[0].m13 = (float)auStack_16._4_4_;
          aMStack_23[0].m23 = (float)auStack_16._8_4_;
          aMStack_23[0].m33 = (float)auStack_16._12_4_;
          auStack_13 = auVar22;
          auStack_14 = auVar21;
          auStack_15 = auVar20;
          auStack_16 = auVar19;
          UnityEngine.CoreModule.dll::UnityEngine::Graphics::Graphics_DrawMeshNow_1(pMVar6,aMStack_23,-1,(MethodInfo *)0x0);
          pMVar5 = (MeshPool *)Singleton`1[System::Object]::Singleton_1_System_Object__1_get_Get(MethodInfo__RTG__Singleton<RTG::MeshPool>__get_Get__);
          if (pMVar5 != (MeshPool *)0x0) {
            pMVar6 = MeshPool::MeshPool_get_UnitWireCircleXY(pMVar5,(MethodInfo *)0x0);
            uVar33._0_4_ = (this->fields)._center.x;
            uVar33._4_4_ = (this->fields)._center.y;
            fVar24 = (this->fields)._center.z;
            fVar25 = (this->fields)._rotation.x;
            fVar26 = (this->fields)._rotation.y;
            fVar27 = (this->fields)._rotation.z;
            fVar28 = (this->fields)._rotation.w;
            uStack_11 = 0xbfc90fdb00000000;
            fStack_12 = 0.0;
            uStack_29 = 0;
            uStack_30 = 0;
            pcVar17 = pcRam_?;
            if ((pcRam_? == (code *)0x0) && (pcVar17 = (code *)FUN_?(&UNK_?), pcVar17 == (code *)0x0)) {
              uVar18 = func_?(&UNK_?);
              FUN_?(uVar18,0);
              pcVar17 = (code *)swi(3);
              (*pcVar17)();
              return;
            }
            pcRam_? = pcVar17;
            (*pcRam_?)(&uStack_11,&uStack_29);
            fStack_9 = 1.0;
            uStack_10 = CONCAT44(fVar4,fVar4);
            auStack_13 = ZEXT416(0);
            uStack_7 = CONCAT44((uStack_29._4_4_ * fVar28 + uStack_30._4_4_ * fVar26 + (float)uStack_29 * fVar27) - (float)uStack_30 * fVar25,((float)uStack_29 * fVar28 + uStack_30._4_4_ * fVar25 + (float)uStack_30 * fVar26) - uStack_29._4_4_ * fVar27);
            uStack_8 = CONCAT44(((uStack_30._4_4_ * fVar28 - (float)uStack_29 * fVar25) - uStack_29._4_4_ * fVar26) - (float)uStack_30 * fVar27,((float)uStack_30 * fVar28 + uStack_30._4_4_ * fVar27 + uStack_29._4_4_ * fVar25) - (float)uStack_29 * fVar26);
            pcVar17 = pcRam_?;
            uStack_31 = uVar33;
            fStack_32 = fVar24;
            auStack_14 = auStack_13;
            auStack_15 = auStack_13;
            auStack_16 = auStack_13;
            if ((pcRam_? == (code *)0x0) && (pcVar17 = (code *)FUN_?(&UNK_?), pcVar17 == (code *)0x0)) {
              uVar18 = func_?(&UNK_?);
              FUN_?(uVar18,0);
              pcVar17 = (code *)swi(3);
              (*pcVar17)();
              return;
            }
            pcRam_? = pcVar17;
            (*pcRam_?)(&uStack_31,&uStack_7,&uStack_10);
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__UnityEngine__Graphics);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            if (*(int *)&(TypeInfo__UnityEngine__Graphics->_1).field_0x1c == 0) {
              FUN_?();
            }
            auVar19 = auStack_16;
            auVar20 = auStack_15;
            auVar21 = auStack_14;
            auVar22 = auStack_13;
            aMStack_23[0].m00 = (float)auStack_13._0_4_;
            aMStack_23[0].m10 = (float)auStack_13._4_4_;
            aMStack_23[0].m20 = (float)auStack_13._8_4_;
            aMStack_23[0].m30 = (float)auStack_13._12_4_;
            aMStack_23[0].m01 = (float)auStack_14._0_4_;
            aMStack_23[0].m11 = (float)auStack_14._4_4_;
            aMStack_23[0].m21 = (float)auStack_14._8_4_;
            aMStack_23[0].m31 = (float)auStack_14._12_4_;
            aMStack_23[0].m02 = (float)auStack_15._0_4_;
            aMStack_23[0].m12 = (float)auStack_15._4_4_;
            aMStack_23[0].m22 = (float)auStack_15._8_4_;
            aMStack_23[0].m32 = (float)auStack_15._12_4_;
            aMStack_23[0].m03 = (float)auStack_16._0_4_;
            aMStack_23[0].m13 = (float)auStack_16._4_4_;
            aMStack_23[0].m23 = (float)auStack_16._8_4_;
            aMStack_23[0].m33 = (float)auStack_16._12_4_;
            auStack_13 = auVar22;
            auStack_14 = auVar21;
            auStack_15 = auVar20;
            auStack_16 = auVar19;
            UnityEngine.CoreModule.dll::UnityEngine::Graphics::Graphics_DrawMeshNow_1(pMVar6,aMStack_23,-1,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
    else {
      iVar34 = 0;
      if ((pSVar1->fields)._numDetailSliceRings == 0) {
code_?:
        fVar24 = (this->fields)._rotation.x;
        fVar25 = (this->fields)._rotation.y;
        fVar26 = (this->fields)._rotation.z;
        fVar27 = (this->fields)._rotation.w;
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__UnityEngine__Vector3);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pVVar35 = TypeInfo__UnityEngine__Vector3->static_fields;
        uStack_11._0_4_ = (pVVar35->rightVector).x;
        uStack_11._4_4_ = (pVVar35->rightVector).y;
        fStack_12 = (pVVar35->rightVector).z;
        uStack_29 = 0;
        uStack_30 = 0;
        pcVar17 = pcRam_?;
        if ((pcRam_? == (code *)0x0) && (pcVar17 = (code *)FUN_?(&UNK_?), pcVar17 == (code *)0x0)) {
          uVar18 = func_?(&UNK_?);
          FUN_?(uVar18,0);
          pcVar17 = (code *)swi(3);
          (*pcVar17)();
          return;
        }
        pcRam_? = pcVar17;
        (*pcRam_?)();
        fVar36 = (float)uStack_29;
        fVar28 = (this->fields)._center.z;
        fVar37 = uStack_29._4_4_ * fVar24;
        fVar38 = uStack_29._4_4_ * fVar25;
        uStack_29 = CONCAT44((uStack_29._4_4_ * fVar27 + uStack_30._4_4_ * fVar25 + (float)uStack_29 * fVar26) - (float)uStack_30 * fVar24,((float)uStack_29 * fVar27 + uStack_30._4_4_ * fVar24 + (float)uStack_30 * fVar25) - uStack_29._4_4_ * fVar26);
        uStack_11._0_4_ = (this->fields)._center.x;
        uStack_11._4_4_ = (this->fields)._center.y;
        uStack_30 = CONCAT44(((uStack_30._4_4_ * fVar27 - fVar36 * fVar24) - fVar38) - (float)uStack_30 * fVar26,((float)uStack_30 * fVar27 + uStack_30._4_4_ * fVar26 + fVar37) - fVar36 * fVar25);
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__UnityEngine__Vector3);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        uVar33 = uStack_30;
        uVar18 = uStack_29;
        pVVar35 = TypeInfo__UnityEngine__Vector3->static_fields;
        uStack_10._0_4_ = (pVVar35->upVector).x;
        uStack_10._4_4_ = (pVVar35->upVector).y;
        fVar24 = (pVVar35->upVector).z;
        fVar25 = (float)uStack_10._4_4_ * fVar4 + uStack_11._4_4_;
        fVar26 = (float)(undefined4)uStack_10 * fVar4 + (float)uStack_11;
        pSVar1 = (this->fields)._wireRenderDesc;
        if (pSVar1 != (SphereShape3D_WireRenderDescriptor *)0x0) {
          fVar27 = (fVar4 + fVar4) / (float)(pSVar1->fields)._numDetailAxialRings;
          do {
            if ((pSVar1->fields)._numDetailAxialRings <= iVar34) {
              return;
            }
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__UnityEngine__Vector3);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pVVar35 = TypeInfo__UnityEngine__Vector3->static_fields;
            uVar39 = (pVVar35->upVector).x;
            uVar40 = (pVVar35->upVector).y;
            fVar36 = (float)iVar34;
            fVar41 = fVar26 - (float)uVar39 * fVar27 * fVar36;
            fVar42 = fVar25 - (float)uVar40 * fVar27 * fVar36;
            fVar43 = (fVar24 * fVar4 + fVar28) - (pVVar35->upVector).z * fVar27 * fVar36;
            uStack_31._0_4_ = (this->fields)._center.x;
            uStack_31._4_4_ = (this->fields)._center.y;
            fVar37 = fVar41 - (float)(undefined4)uStack_31;
            fVar36 = fVar43 - (this->fields)._center.z;
            fVar38 = fVar42 - (float)uStack_31._4_4_;
            fVar36 = fVar4 * fVar4 - (fVar38 * fVar38 + fVar37 * fVar37 + fVar36 * fVar36);
            if (fVar36 < 0.0) {
              fVar36 = (float)FUN_?();
            }
            else {
              fVar36 = SQRT(fVar36);
            }
            if (*(int *)&(TypeInfo__RTG__Singleton<RTG::MeshPool>->_1).field_0x1c == 0) {
              FUN_?();
            }
            pMVar5 = (MeshPool *)Singleton`1[System::Object]::Singleton_1_System_Object__1_get_Get(MethodInfo__RTG__Singleton<RTG::MeshPool>__get_Get__);
            if (pMVar5 == (MeshPool *)0x0) break;
            pMVar6 = MeshPool::MeshPool_get_UnitWireCircleXY(pMVar5,(MethodInfo *)0x0);
            uStack_11 = CONCAT44(fVar36,fVar36);
            fStack_12 = 1.0;
            uStack_10 = CONCAT44(fVar42,fVar41);
            uStack_7 = uVar18;
            uStack_8 = uVar33;
            auStack_13 = ZEXT816(0);
            auStack_14 = ZEXT816(0);
            auStack_15 = ZEXT816(0);
            auStack_16 = ZEXT816(0);
            pcVar17 = pcRam_?;
            fStack_9 = fVar43;
            if ((pcRam_? == (code *)0x0) && (pcVar17 = (code *)FUN_?(&UNK_?), pcVar17 == (code *)0x0)) {
              uVar18 = func_?(&UNK_?);
              FUN_?(uVar18,0);
              pcVar17 = (code *)swi(3);
              (*pcVar17)();
              return;
            }
            pcRam_? = pcVar17;
            (*pcRam_?)(&uStack_10,&uStack_7,&uStack_11);
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
            auVar19 = auStack_16;
            auVar20 = auStack_15;
            auVar21 = auStack_14;
            auVar22 = auStack_13;
            aMStack_23[0].m00 = (float)auStack_13._0_4_;
            aMStack_23[0].m10 = (float)auStack_13._4_4_;
            aMStack_23[0].m20 = (float)auStack_13._8_4_;
            aMStack_23[0].m30 = (float)auStack_13._12_4_;
            aMStack_23[0].m01 = (float)auStack_14._0_4_;
            aMStack_23[0].m11 = (float)auStack_14._4_4_;
            aMStack_23[0].m21 = (float)auStack_14._8_4_;
            aMStack_23[0].m31 = (float)auStack_14._12_4_;
            aMStack_23[0].m02 = (float)auStack_15._0_4_;
            aMStack_23[0].m12 = (float)auStack_15._4_4_;
            aMStack_23[0].m22 = (float)auStack_15._8_4_;
            aMStack_23[0].m32 = (float)auStack_15._12_4_;
            aMStack_23[0].m03 = (float)auStack_16._0_4_;
            aMStack_23[0].m13 = (float)auStack_16._4_4_;
            aMStack_23[0].m23 = (float)auStack_16._8_4_;
            aMStack_23[0].m33 = (float)auStack_16._12_4_;
            auStack_13 = auVar22;
            auStack_14 = auVar21;
            auStack_15 = auVar20;
            auStack_16 = auVar19;
            UnityEngine.CoreModule.dll::UnityEngine::Graphics::Graphics_DrawMeshNow_1(pMVar6,aMStack_23,-1,(MethodInfo *)0x0);
            pSVar1 = (this->fields)._wireRenderDesc;
            iVar34 = iVar34 + 1;
          } while (pSVar1 != (SphereShape3D_WireRenderDescriptor *)0x0);
        }
      }
      else {
        uStack_2 = CONCAT44(fVar4,fVar4);
        uStack_3 = 0x3f800000;
        if (pSVar1 != (SphereShape3D_WireRenderDescriptor *)0x0) {
          iVar44 = 0;
          pSVar1 = (this->fields)._wireRenderDesc;
          do {
            if ((pSVar1->fields)._numDetailSliceRings <= iVar44) goto code_?;
            uVar45._0_4_ = (this->fields)._center.x;
            uVar45._4_4_ = (this->fields)._center.y;
            fVar24 = (this->fields)._center.z;
            fVar25 = (this->fields)._rotation.x;
            fVar26 = (this->fields)._rotation.y;
            fVar27 = (this->fields)._rotation.z;
            fVar28 = (this->fields)._rotation.w;
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__UnityEngine__Vector3);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pVVar35 = TypeInfo__UnityEngine__Vector3->static_fields;
            uStack_31._0_4_ = (pVVar35->upVector).x;
            uStack_31._4_4_ = (pVVar35->upVector).y;
            fStack_32 = (pVVar35->upVector).z;
            uStack_29 = 0;
            uStack_30 = 0;
            pcVar17 = pcRam_?;
            if ((pcRam_? == (code *)0x0) && (pcVar17 = (code *)FUN_?(&UNK_?), pcVar17 == (code *)0x0)) {
              uVar18 = func_?(&UNK_?);
              FUN_?(uVar18,0);
              pcVar17 = (code *)swi(3);
              (*pcVar17)();
              return;
            }
            pcRam_? = pcVar17;
            (*pcRam_?)();
            fStack_9 = 1.0;
            uStack_10 = uStack_2;
            auStack_13 = ZEXT816(0);
            auStack_14 = ZEXT816(0);
            auStack_15 = ZEXT816(0);
            uStack_7 = CONCAT44((uStack_29._4_4_ * fVar28 + uStack_30._4_4_ * fVar26 + (float)uStack_29 * fVar27) - (float)uStack_30 * fVar25,((float)uStack_29 * fVar28 + uStack_30._4_4_ * fVar25 + (float)uStack_30 * fVar26) - uStack_29._4_4_ * fVar27);
            uStack_8 = CONCAT44(((uStack_30._4_4_ * fVar28 - (float)uStack_29 * fVar25) - uStack_29._4_4_ * fVar26) - (float)uStack_30 * fVar27,((float)uStack_30 * fVar28 + uStack_30._4_4_ * fVar27 + uStack_29._4_4_ * fVar25) - (float)uStack_29 * fVar26);
            auStack_16 = ZEXT816(0);
            pcVar17 = pcRam_?;
            uStack_11 = uVar45;
            fStack_12 = fVar24;
            if ((pcRam_? == (code *)0x0) && (pcVar17 = (code *)FUN_?(&UNK_?), pcVar17 == (code *)0x0)) {
              uVar18 = func_?(&UNK_?);
              FUN_?(uVar18,0);
              pcVar17 = (code *)swi(3);
              (*pcVar17)();
              return;
            }
            pcRam_? = pcVar17;
            (*pcRam_?)(&uStack_11,&uStack_7,&uStack_10);
            if (*(int *)&(TypeInfo__RTG__Singleton<RTG::MeshPool>->_1).field_0x1c == 0) {
              FUN_?();
            }
            pMVar5 = (MeshPool *)Singleton`1[System::Object]::Singleton_1_System_Object__1_get_Get(MethodInfo__RTG__Singleton<RTG::MeshPool>__get_Get__);
            if (pMVar5 == (MeshPool *)0x0) break;
            pMVar6 = MeshPool::MeshPool_get_UnitWireCircleXY(pMVar5,(MethodInfo *)0x0);
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
            auVar19 = auStack_16;
            auVar20 = auStack_15;
            auVar21 = auStack_14;
            auVar22 = auStack_13;
            aMStack_23[0].m00 = (float)auStack_13._0_4_;
            aMStack_23[0].m10 = (float)auStack_13._4_4_;
            aMStack_23[0].m20 = (float)auStack_13._8_4_;
            aMStack_23[0].m30 = (float)auStack_13._12_4_;
            aMStack_23[0].m01 = (float)auStack_14._0_4_;
            aMStack_23[0].m11 = (float)auStack_14._4_4_;
            aMStack_23[0].m21 = (float)auStack_14._8_4_;
            aMStack_23[0].m31 = (float)auStack_14._12_4_;
            aMStack_23[0].m02 = (float)auStack_15._0_4_;
            aMStack_23[0].m12 = (float)auStack_15._4_4_;
            aMStack_23[0].m22 = (float)auStack_15._8_4_;
            aMStack_23[0].m32 = (float)auStack_15._12_4_;
            aMStack_23[0].m03 = (float)auStack_16._0_4_;
            aMStack_23[0].m13 = (float)auStack_16._4_4_;
            aMStack_23[0].m23 = (float)auStack_16._8_4_;
            aMStack_23[0].m33 = (float)auStack_16._12_4_;
            auStack_13 = auVar22;
            auStack_14 = auVar21;
            auStack_15 = auVar20;
            auStack_16 = auVar19;
            UnityEngine.CoreModule.dll::UnityEngine::Graphics::Graphics_DrawMeshNow_1(pMVar6,aMStack_23,-1,(MethodInfo *)0x0);
            pSVar1 = (this->fields)._wireRenderDesc;
            iVar44 = iVar44 + 1;
          } while (pSVar1 != (SphereShape3D_WireRenderDescriptor *)0x0);
        }
      }
    }
  }
  FUN_?();
  pcVar17 = (code *)swi(3);
  (*pcVar17)();
  return;
}


/* SphereShape3D() */

void Assembly-CSharp.dll::RTG::SphereShape3D::SphereShape3D__ctor(SphereShape3D *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__SphereShape3D__WireRenderDescriptor);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar1 = cRam_? == '\0';
  (this->fields)._radius = 1.0;
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
  pSVar7 = (SphereShape3D_WireRenderDescriptor *)FUN_?(TypeInfo__RTG__SphereShape3D__WireRenderDescriptor);
  bVar1 = iRam_? != 0;
  (pSVar7->fields)._numDetailAxialRings = 0x14;
  (pSVar7->fields)._numDetailSliceRings = 0x14;
  (this->fields)._wireRenderDesc = pSVar7;
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


/* Vector3 get_CentralAxis() */

Vector3 * Assembly-CSharp.dll::RTG::SphereShape3D::SphereShape3D_get_CentralAxis(Vector3 *__return_storage_ptr__,SphereShape3D *this,MethodInfo *method)

{
  pVVar1 = SphereShape3D_get_Up(&VStack_2,this,(MethodInfo *)0x0);
  fVar3 = pVVar1->y;
  fVar4 = pVVar1->z;
  __return_storage_ptr__->x = pVVar1->x;
  __return_storage_ptr__->y = fVar3;
  __return_storage_ptr__->z = fVar4;
  return __return_storage_ptr__;
}


/* Vector3 get_Look() */

Vector3 * Assembly-CSharp.dll::RTG::SphereShape3D::SphereShape3D_get_Look(Vector3 *__return_storage_ptr__,SphereShape3D *this,MethodInfo *method)

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
  __return_storage_ptr__->x = (1.0 - (fVar6 * fVar3 + fVar7 * fVar2)) * (float)uVar9 + (fVar7 * fVar1 - fVar6 * fVar4) * (float)uVar10 + (fVar7 * fVar4 + fVar6 * fVar1) * fVar11;
  __return_storage_ptr__->y = (1.0 - (fVar6 * fVar3 + fVar8)) * (float)uVar10 + (fVar6 * fVar4 + fVar7 * fVar1) * (float)uVar9 + (fVar6 * fVar2 - fVar12) * fVar11;
  __return_storage_ptr__->z = (fVar6 * fVar1 - fVar7 * fVar4) * (float)uVar9 + (fVar12 + fVar6 * fVar2) * (float)uVar10 + (1.0 - (fVar7 * fVar2 + fVar8)) * fVar11;
  return __return_storage_ptr__;
}


/* Vector3 get_Right() */

Vector3 * Assembly-CSharp.dll::RTG::SphereShape3D::SphereShape3D_get_Right(Vector3 *__return_storage_ptr__,SphereShape3D *this,MethodInfo *method)

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
  __return_storage_ptr__->x = (1.0 - (fVar6 * fVar3 + fVar7 * fVar2)) * (float)uVar9 + (fVar7 * fVar1 - fVar6 * fVar4) * (float)uVar10 + (fVar7 * fVar4 + fVar6 * fVar1) * fVar11;
  __return_storage_ptr__->y = (1.0 - (fVar6 * fVar3 + fVar8)) * (float)uVar10 + (fVar6 * fVar4 + fVar7 * fVar1) * (float)uVar9 + (fVar6 * fVar2 - fVar12) * fVar11;
  __return_storage_ptr__->z = (fVar6 * fVar1 - fVar7 * fVar4) * (float)uVar9 + (fVar12 + fVar6 * fVar2) * (float)uVar10 + (1.0 - (fVar7 * fVar2 + fVar8)) * fVar11;
  return __return_storage_ptr__;
}


/* Vector3 get_Up() */

Vector3 * Assembly-CSharp.dll::RTG::SphereShape3D::SphereShape3D_get_Up(Vector3 *__return_storage_ptr__,SphereShape3D *this,MethodInfo *method)

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
  __return_storage_ptr__->x = (1.0 - (fVar6 * fVar3 + fVar7 * fVar2)) * (float)uVar9 + (fVar7 * fVar1 - fVar6 * fVar4) * (float)uVar10 + (fVar7 * fVar4 + fVar6 * fVar1) * fVar11;
  __return_storage_ptr__->y = (1.0 - (fVar6 * fVar3 + fVar8)) * (float)uVar10 + (fVar6 * fVar4 + fVar7 * fVar1) * (float)uVar9 + (fVar6 * fVar2 - fVar12) * fVar11;
  __return_storage_ptr__->z = (fVar6 * fVar1 - fVar7 * fVar4) * (float)uVar9 + (fVar12 + fVar6 * fVar2) * (float)uVar10 + (1.0 - (fVar7 * fVar2 + fVar8)) * fVar11;
  return __return_storage_ptr__;
}


/* Single get_WireRadius() */

float Assembly-CSharp.dll::RTG::SphereShape3D::SphereShape3D_get_WireRadius(SphereShape3D *this,MethodInfo *method)

{
  pSVar1 = (this->fields)._wireRenderDesc;
  if (pSVar1 != (SphereShape3D_WireRenderDescriptor *)0x0) {
    return (pSVar1->fields)._radiusAdd + (this->fields)._radius;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  fVar3 = (float)(*pcVar2)();
  return fVar3;
}


/* Void set_Center(Vector3) */

void Assembly-CSharp.dll::RTG::SphereShape3D::SphereShape3D_set_Center(SphereShape3D *this,Vector3 *value,MethodInfo *method)

{
  fVar1 = value->y;
  fVar2 = value->z;
  (this->fields)._center.x = value->x;
  (this->fields)._center.y = fVar1;
  (this->fields)._center.z = fVar2;
  return;
}


/* Void set_RadiusEps(Single) */

void Assembly-CSharp.dll::RTG::SphereShape3D::SphereShape3D_set_RadiusEps(SphereShape3D *this,float value,MethodInfo *method)

{
  (this->fields)._epsilon._radiusEps = ABS(value);
  return;
}

