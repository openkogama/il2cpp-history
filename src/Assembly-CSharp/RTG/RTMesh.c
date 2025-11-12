
/* Void BuildTree() */

void Assembly-CSharp.dll::RTG::RTMesh::RTMesh_BuildTree(RTMesh *this,MethodInfo *method)

{
  pMVar1 = (this->fields)._meshTree;
  if (pMVar1 == (MeshTree *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__RTG__SphereTree<RTG::MeshTriangle>__AddNode_RTG__MeshTriangle__RTG__Sphere_
                  ,0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((pMVar1->fields)._isBuilt != 0) {
    return;
  }
  triangleIndex = 0;
  pRVar3 = (pMVar1->fields)._mesh;
  while (pRVar3 != (RTMesh *)0x0) {
    if ((pRVar3->fields)._numTriangles <= triangleIndex) {
      (pMVar1->fields)._isBuilt = 1;
      return;
    }
    pRVar3 = (pMVar1->fields)._mesh;
    if (pRVar3 == (RTMesh *)0x0) break;
    nodeData = RTMesh_GetTriangle(pRVar3,triangleIndex,(MethodInfo *)0x0);
    this_00 = (pMVar1->fields)._tree;
    if (nodeData == (MeshTriangle *)0x0) break;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if ((nodeData->fields)._vertices == (Vector3__Array *)0x0) break;
    uVar4 = FUN_?();
    pointCloud = (IEnumerable_1_UnityEngine_Vector3_ *)
                 FUN_?(uVar4,TypeInfo__UnityEngine__Vector3);
    SStack_5._center.x = 0.0;
    SStack_5._center.y = 0.0;
    SStack_5._center.z = 0.0;
    SStack_5._radius = 0.0;
    Sphere::Sphere__ctor_2(&SStack_5,pointCloud,(MethodInfo *)0x0);
    if (this_00 == (SphereTree_1_MeshTriangle_ *)0x0) break;
    SphereTree`1[System::Object]::SphereTree_1_System_Object__AddNode
              ((SphereTree_1_System_Object_ *)this_00,(Object *)nodeData,&SStack_5,
               MethodInfo__RTG__SphereTree<RTG::MeshTriangle>__AddNode_RTG__MeshTriangle__RTG__Sphere_
              );
    triangleIndex = triangleIndex + 1;
    pRVar3 = (pMVar1->fields)._mesh;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* RTMesh Create(Mesh) */

RTMesh * Assembly-CSharp.dll::RTG::RTMesh::RTMesh_Create(Mesh *unityMesh,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__RTMesh);
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
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (unityMesh != (Mesh *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((unityMesh->fields)._.m_CachedPtr != (void *)0x0) {
      bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_get_isReadable
                        (unityMesh,(MethodInfo *)0x0);
      if (bVar1 != 0) {
        this = (RTMesh *)FUN_?(TypeInfo__RTG__RTMesh);
        RTMesh__ctor(this,unityMesh,(MethodInfo *)0x0);
        return this;
      }
    }
  }
  return (RTMesh *)0x0;
}


/* Void DebugDrawTree() */

void Assembly-CSharp.dll::RTG::RTMesh::RTMesh_DebugDrawTree(RTMesh *this,MethodInfo *method)

{
  pMVar1 = (this->fields)._meshTree;
  if (pMVar1 != (MeshTree *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&MethodInfo__RTG__SphereTree<RTG::MeshTriangle>__DebugDraw__);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar2 = MethodInfo__RTG__SphereTree<RTG::MeshTriangle>__DebugDraw__;
    pSVar3 = (pMVar1->fields)._tree;
    if (pSVar3 != (SphereTree_1_MeshTriangle_ *)0x0) {
      if (cRam_? == '\0') {
        auStack_4._24_8_ = &UNK_?;
        FUN_?(&MethodInfo__RTG__Singleton<RTG::MaterialPool>__get_Get__);
        LOCK();
        UNLOCK();
        auStack_4._24_8_ = &UNK_?;
        FUN_?(&TypeInfo__RTG__Singleton<RTG::MaterialPool>);
        LOCK();
        UNLOCK();
        auStack_4._24_8_ = &UNK_?;
        FUN_?(&StringLiteral__IsLit);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__RTG__Singleton<RTG::MaterialPool>->_1).field_0x1c == 0) {
        auStack_4._24_8_ = &UNK_?;
        FUN_?();
      }
      auStack_4._24_8_ = &UNK_?;
      this_01 = (MaterialPool *)
                Singleton`1[System::Object]::Singleton_1_System_Object__1_get_Get
                          (MethodInfo__RTG__Singleton<RTG::MaterialPool>__get_Get__);
      if (this_01 != (MaterialPool *)0x0) {
        auStack_4._24_8_ = &UNK_?;
        this_02 = MaterialPool::MaterialPool_get_GizmoSolidHandle(this_01,(MethodInfo *)0x0);
        if (this_02 != (Material *)0x0) {
          auStack_4._24_8_ = &UNK_?;
          name = UnityEngine.CoreModule.dll::UnityEngine::Shader::Shader_PropertyToID
                           (StringLiteral__IsLit,(MethodInfo *)0x0);
          auStack_4._24_8_ = &UNK_?;
          UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetFloatImpl
                    (this_02,name,0.0,(MethodInfo *)0x0);
          if (cRam_? == '\0') {
            auStack_4._24_8_ = &UNK_?;
            FUN_?(&StringLiteral__Color);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          CStack_5.r = _UNK_?;
          CStack_5.g = _UNK_?;
          CStack_5.b = _UNK_?;
          CStack_5.a = _UNK_?;
          auStack_4._24_8_ = &UNK_?;
          UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetColor
                    (this_02,StringLiteral__Color,&CStack_5,(MethodInfo *)0x0);
          auStack_4._24_8_ = &UNK_?;
          UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetPass
                    (this_02,0,(MethodInfo *)0x0);
          pSVar6 = (pSVar3->fields)._root;
          if (pSVar6 != (SphereTreeNode_1_MeshTriangle_ *)0x0) {
            pMVar2 = pMVar2->klass->rgctx_data[4].method;
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
            uVar7._0_4_ = (pSVar6->fields)._sphere._center.x;
            uVar7._4_4_ = (pSVar6->fields)._sphere._center.y;
            fVar8 = (pSVar6->fields)._sphere._center.z;
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__UnityEngine__Quaternion);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            fStack_9 = (pSVar6->fields)._sphere._radius;
            uStack_10 = CONCAT44(fStack_9,fStack_9);
            pQVar11 = TypeInfo__UnityEngine__Quaternion->static_fields;
            uStack_12._0_4_ = (pQVar11->identityQuaternion).x;
            uStack_12._4_4_ = (pQVar11->identityQuaternion).y;
            uStack_13._0_4_ = (pQVar11->identityQuaternion).z;
            uStack_13._4_4_ = (pQVar11->identityQuaternion).w;
            auStack_14._0_4_ = 0.0;
            auStack_14._4_4_ = 0.0;
            auStack_14._8_4_ = 0.0;
            auStack_14._12_4_ = 0.0;
            auStack_14._16_4_ = 0.0;
            auStack_14._20_4_ = 0.0;
            puStack_15 = (undefined *)0x0;
            uStack_16._0_4_ = 0.0;
            uStack_16._4_4_ = 0.0;
            puStack_17 = (undefined *)0x0;
            uStack_18._0_4_ = 0.0;
            uStack_18._4_4_ = 0.0;
            uStack_19._0_4_ = 0.0;
            uStack_19._4_4_ = 0.0;
            pcVar20 = pcRam_?;
            uStack_21 = uVar7;
            fStack_22 = fVar8;
            if ((pcRam_? == (code *)0x0) &&
               (pcVar20 = (code *)FUN_?(&UNK_?), pcVar20 == (code *)0x0)) {
              uVar7 = func_?(&UNK_?);
              FUN_?(uVar7,0);
              pcVar20 = (code *)swi(3);
              (*pcVar20)();
              return;
            }
            pcRam_? = pcVar20;
            (*pcRam_?)(&uStack_21,&uStack_12,&uStack_10);
            if (*(int *)&(TypeInfo__RTG__Singleton<RTG::MeshPool>->_1).field_0x1c == 0) {
              FUN_?();
            }
            this_00 = (MeshPool *)
                      Singleton`1[System::Object]::Singleton_1_System_Object__1_get_Get
                                (MethodInfo__RTG__Singleton<RTG::MeshPool>__get_Get__);
            if (this_00 != (MeshPool *)0x0) {
              mesh = MeshPool::MeshPool_get_UnitSphere(this_00,(MethodInfo *)0x0);
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
              auStack_4._0_8_ = auStack_14._0_8_;
              auStack_4._8_8_ = auStack_14._8_8_;
              auStack_4._16_8_ = auStack_14._16_8_;
              auStack_4._24_8_ = puStack_15;
              auStack_4._32_4_ = (float)uStack_16;
              auStack_4._36_4_ = uStack_16._4_4_;
              puStack_23 = puStack_17;
              fStack_24 = (float)uStack_18;
              fStack_25 = uStack_18._4_4_;
              fStack_26 = (float)uStack_19;
              fStack_27 = uStack_19._4_4_;
              UnityEngine.CoreModule.dll::UnityEngine::Graphics::Graphics_DrawMeshNow_1
                        (mesh,(Matrix4x4 *)auStack_4,-1,(MethodInfo *)0x0);
              pSVar28 = (pSVar6->fields)._children;
              uVar29 = 0;
              if (pSVar28 != (SphereTreeNode_1_MeshTriangle___Array *)0x0) {
                ppSVar30 = pSVar28->vector;
                while( true ) {
                  if ((int)pSVar28->max_length <= (int)uVar29) {
                    return;
                  }
                  if ((uint)pSVar28->max_length <= uVar29) {
                    FUN_?();
                    pcVar20 = (code *)swi(3);
                    (*pcVar20)();
                    return;
                  }
                  if (*ppSVar30 == (SphereTreeNode_1_MeshTriangle_ *)0x0) break;
                  SphereTreeNode`1[System::Object]::SphereTreeNode_1_System_Object__DebugDraw
                            ((SphereTreeNode_1_System_Object_ *)*ppSVar30,
                             pMVar2->klass->rgctx_data[10].method);
                  uVar29 = uVar29 + 1;
                  ppSVar30 = ppSVar30 + 1;
                }
              }
            }
            FUN_?();
            pcVar20 = (code *)swi(3);
            (*pcVar20)();
            return;
          }
        }
      }
      auStack_4._24_8_ = &UNK_?;
      FUN_?();
      pcVar20 = (code *)swi(3);
      (*pcVar20)();
      return;
    }
  }
  FUN_?();
  pcVar20 = (code *)swi(3);
  (*pcVar20)();
  return;
}


/* MeshTriangle GetTriangle(Int32) */

MeshTriangle *
Assembly-CSharp.dll::RTG::RTMesh::RTMesh_GetTriangle
          (RTMesh *this,int32_t triangleIndex,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__MeshTriangle);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pIVar1 = (this->fields)._vertIndices;
  uVar2 = triangleIndex * 3;
  if (pIVar1 == (Int32__Array *)0x0) goto code_?;
  if (uVar2 < (uint)pIVar1->max_length) {
    vertIndex0 = pIVar1->vector[(int)uVar2];
    if (uVar2 + 1 < (uint)pIVar1->max_length) {
      vertIndex1 = pIVar1->vector[(longlong)(int)uVar2 + 1];
      if (pIVar1 == (Int32__Array *)0x0) {
code_?:
        FUN_?();
        pcVar3 = (code *)swi(3);
        pMVar4 = (MeshTriangle *)(*pcVar3)();
        return pMVar4;
      }
      if (uVar2 + 2 < (uint)pIVar1->max_length) {
        uVar2 = pIVar1->vector[(longlong)(int)uVar2 + 2];
        vertices = (Vector3__Array *)FUN_?(TypeInfo__UnityEngine__Vector3,3);
        pVVar5 = (this->fields)._vertices;
        if (pVVar5 == (Vector3__Array *)0x0) goto code_?;
        if (vertIndex0 < (uint)pVVar5->max_length) {
          if (vertices == (Vector3__Array *)0x0) goto code_?;
          if ((int)vertices->max_length != 0) {
            fVar6 = pVVar5->vector[(int)vertIndex0].y;
            vertices->vector[0].x = pVVar5->vector[(int)vertIndex0].x;
            vertices->vector[0].y = fVar6;
            vertices->vector[0].z = pVVar5->vector[(int)vertIndex0].z;
            pVVar5 = (this->fields)._vertices;
            if (pVVar5 == (Vector3__Array *)0x0) goto code_?;
            if ((vertIndex1 < (uint)pVVar5->max_length) && (1 < (uint)vertices->max_length)) {
              fVar6 = pVVar5->vector[(int)vertIndex1].y;
              vertices->vector[1].x = pVVar5->vector[(int)vertIndex1].x;
              vertices->vector[1].y = fVar6;
              vertices->vector[1].z = pVVar5->vector[(int)vertIndex1].z;
              pVVar5 = (this->fields)._vertices;
              if (pVVar5 == (Vector3__Array *)0x0) goto code_?;
              if ((uVar2 < (uint)pVVar5->max_length) && (2 < (uint)vertices->max_length)) {
                fVar6 = pVVar5->vector[(int)uVar2].y;
                vertices->vector[2].x = pVVar5->vector[(int)uVar2].x;
                vertices->vector[2].y = fVar6;
                vertices->vector[2].z = pVVar5->vector[(int)uVar2].z;
                pMVar4 = (MeshTriangle *)FUN_?(TypeInfo__RTG__MeshTriangle);
                MeshTriangle::MeshTriangle__ctor
                          (pMVar4,vertices,triangleIndex,vertIndex0,vertIndex1,uVar2,
                           (MethodInfo *)0x0);
                return pMVar4;
              }
            }
          }
        }
      }
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  pMVar4 = (MeshTriangle *)(*pcVar3)();
  return pMVar4;
}


/* Boolean OverlapModelVerts(OBB, List`1[UnityEngine.Vector3]) */

bool Assembly-CSharp.dll::RTG::RTMesh::RTMesh_OverlapModelVerts
               (RTMesh *this,OBB *modelOBB,List_1_UnityEngine_Vector3_ *verts,MethodInfo *method)

{
  this_00 = (this->fields)._meshTree;
  if (this_00 != (MeshTree *)0x0) {
    OStack_1._size.x = (modelOBB->_size).x;
    OStack_1._size.y = (modelOBB->_size).y;
    OStack_1._8_8_ = *(undefined8 *)&(modelOBB->_size).z;
    OStack_1._isValid = modelOBB->_isValid;
    OStack_1._41_3_ = *(undefined3 *)&modelOBB->field_0x29;
    OStack_1._center.y = (modelOBB->_center).y;
    OStack_1._center.z = (modelOBB->_center).z;
    OStack_1._rotation.x = (modelOBB->_rotation).x;
    OStack_1._rotation.y = (modelOBB->_rotation).y;
    OStack_1._rotation.z = (modelOBB->_rotation).z;
    OStack_1._rotation.w = (modelOBB->_rotation).w;
    bVar2 = MeshTree::MeshTree_OverlapModelVerts(this_00,&OStack_1,verts,(MethodInfo *)0x0);
    return bVar2;
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  bVar2 = (*pcVar3)();
  return bVar2;
}


/* Boolean OverlapModelVerts(AABB, List`1[UnityEngine.Vector3]) */

bool Assembly-CSharp.dll::RTG::RTMesh::RTMesh_OverlapModelVerts_1
               (RTMesh *this,AABB *modelAABB,List_1_UnityEngine_Vector3_ *verts,MethodInfo *method)

{
  OStack_1._size.x = (modelAABB->_size).x;
  OStack_1._size.y = (modelAABB->_size).y;
  uVar2 = *(undefined8 *)&(modelAABB->_size).z;
  this_00 = (this->fields)._meshTree;
  QStack_3.x = 0.0;
  QStack_3.y = 0.0;
  QStack_3.z = 0.0;
  QStack_3.w = 0.0;
  uVar4 = (modelAABB->_center).y;
  uVar5 = (modelAABB->_center).z;
  uStack_6 = (uint)(byte)uStack_6;
  OStack_1._size.z = (float)uVar2;
  OStack_1._center.x = (float)((ulonglong)uVar2 >> 0x20);
  OStack_1._rotation.x = *(float *)&modelAABB->_isValid;
  fStack_7 = OStack_1._center.x;
  fStack_8 = (float)uVar4;
  fStack_9 = (float)uVar5;
  VStack_10.z = (float)*(undefined8 *)&(modelAABB->_size).z;
  OStack_1._center.y = (float)uVar4;
  OStack_1._center.z = (float)uVar5;
  VStack_10._0_8_ = OStack_1._size._0_8_;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Quaternion);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uStack_6 = CONCAT31(uStack_6._1_3_,1);
  pQVar11 = TypeInfo__UnityEngine__Quaternion->static_fields;
  QStack_3.x = (pQVar11->identityQuaternion).x;
  QStack_3.y = (pQVar11->identityQuaternion).y;
  OStack_1._rotation.z = (pQVar11->identityQuaternion).z;
  OStack_1._rotation.w = (pQVar11->identityQuaternion).w;
  QStack_3.z = (pQVar11->identityQuaternion).z;
  QStack_3.w = (pQVar11->identityQuaternion).w;
  if (this_00 != (MeshTree *)0x0) {
    OStack_1._size.x = VStack_10.x;
    OStack_1._size.y = VStack_10.y;
    OStack_1._size.z = VStack_10.z;
    OStack_1._center.x = fStack_7;
    OStack_1._center.y = fStack_8;
    OStack_1._center.z = fStack_9;
    OStack_1._40_4_ = uStack_6;
    OStack_1._rotation._0_8_ = QStack_3._0_8_;
    bVar12 = MeshTree::MeshTree_OverlapModelVerts(this_00,&OStack_1,verts,(MethodInfo *)0x0);
    return bVar12;
  }
  FUN_?();
  pcVar13 = (code *)swi(3);
  bVar12 = (*pcVar13)();
  return bVar12;
}


/* Boolean OverlapVerts(OBB, Transform, List`1[UnityEngine.Vector3]) */

bool Assembly-CSharp.dll::RTG::RTMesh::RTMesh_OverlapVerts
               (RTMesh *this,OBB *obb,Transform *meshObjectTransform,
               List_1_UnityEngine_Vector3_ *verts,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__MeshTransform);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this->fields)._meshTree;
  this_01 = (MeshTransform *)FUN_?(TypeInfo__RTG__MeshTransform);
  MeshTransform::MeshTransform__ctor_1(this_01,meshObjectTransform,(MethodInfo *)0x0);
  if (this_00 != (MeshTree *)0x0) {
    OStack_1._size.x = (obb->_size).x;
    OStack_1._size.y = (obb->_size).y;
    OStack_1._8_8_ = *(undefined8 *)&(obb->_size).z;
    OStack_1._isValid = obb->_isValid;
    OStack_1._41_3_ = *(undefined3 *)&obb->field_0x29;
    OStack_1._center.y = (obb->_center).y;
    OStack_1._center.z = (obb->_center).z;
    OStack_1._rotation.x = (obb->_rotation).x;
    OStack_1._rotation.y = (obb->_rotation).y;
    OStack_1._rotation.z = (obb->_rotation).z;
    OStack_1._rotation.w = (obb->_rotation).w;
    bVar2 = MeshTree::MeshTree_OverlapVerts(this_00,&OStack_1,this_01,verts,(MethodInfo *)0x0);
    return bVar2;
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  bVar2 = (*pcVar3)();
  return bVar2;
}


/* MeshRayHit Raycast(Ray, Matrix4x4) */

MeshRayHit *
Assembly-CSharp.dll::RTG::RTMesh::RTMesh_Raycast
          (RTMesh *this,Ray *ray,Matrix4x4 *meshTransform,MethodInfo *method)

{
  this_00 = (this->fields)._meshTree;
  if (this_00 != (MeshTree *)0x0) {
    MStack_1.m00 = meshTransform->m00;
    MStack_1.m10 = meshTransform->m10;
    MStack_1.m20 = meshTransform->m20;
    MStack_1.m30 = meshTransform->m30;
    MStack_1.m01 = meshTransform->m01;
    MStack_1.m11 = meshTransform->m11;
    MStack_1.m21 = meshTransform->m21;
    MStack_1.m31 = meshTransform->m31;
    MStack_1.m02 = meshTransform->m02;
    MStack_1.m12 = meshTransform->m12;
    MStack_1.m22 = meshTransform->m22;
    MStack_1.m32 = meshTransform->m32;
    MStack_1.m03 = meshTransform->m03;
    MStack_1.m13 = meshTransform->m13;
    MStack_1.m23 = meshTransform->m23;
    MStack_1.m33 = meshTransform->m33;
    RStack_2.m_Origin.x = (ray->m_Origin).x;
    RStack_2.m_Origin.y = (ray->m_Origin).y;
    RStack_2._8_8_ = *(undefined8 *)&(ray->m_Origin).z;
    RStack_2.m_Direction.y = (ray->m_Direction).y;
    RStack_2.m_Direction.z = (ray->m_Direction).z;
    pMVar3 = MeshTree::MeshTree_RaycastClosest(this_00,&RStack_2,&MStack_1,(MethodInfo *)0x0);
    return pMVar3;
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  pMVar3 = (MeshRayHit *)(*pcVar4)();
  return pMVar3;
}


/* Void SetDirty() */

void Assembly-CSharp.dll::RTG::RTMesh::RTMesh_SetDirty(RTMesh *this,MethodInfo *method)

{
  pMVar1 = (this->fields)._unityMesh;
  if (pMVar1 != (Mesh *)0x0) {
    pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_get_vertices
                       (pMVar1,(MethodInfo *)0x0);
    bVar3 = iRam_? != 0;
    (this->fields)._vertices = pVVar2;
    if (bVar3) {
      uVar4 = (uint)((ulonglong)&(this->fields)._vertices >> 0xc);
      uVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
      do {
        uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
        puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
        LOCK();
        bVar3 = uVar6 == *puVar7;
        if (bVar3) {
          *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
        }
        UNLOCK();
      } while (!bVar3);
    }
    pMVar1 = (this->fields)._unityMesh;
    if (pMVar1 != (Mesh *)0x0) {
      pIVar8 = UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_get_triangles
                         (pMVar1,(MethodInfo *)0x0);
      bVar3 = iRam_? != 0;
      (this->fields)._vertIndices = pIVar8;
      if (bVar3) {
        uVar4 = (uint)((ulonglong)&(this->fields)._vertIndices >> 0xc);
        uVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
        do {
          uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
          puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
          LOCK();
          bVar3 = uVar6 == *puVar7;
          if (bVar3) {
            *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
          }
          UNLOCK();
        } while (!bVar3);
      }
      pIVar8 = (this->fields)._vertIndices;
      if (pIVar8 != (Int32__Array *)0x0) {
        iVar9 = (int)pIVar8->max_length;
        pMVar1 = (this->fields)._unityMesh;
        (this->fields)._numTriangles =
             iVar9 / 3 + (iVar9 >> 0x1f) +
             (int)(((longlong)iVar9 / 3 + ((longlong)iVar9 >> 0x3f) & 0xffffffffU) >> 0x1f);
        if (pMVar1 != (Mesh *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_RecalculateBounds_1
                    (pMVar1,MeshUpdateFlags__Enum_Default,(MethodInfo *)0x0);
          pMVar1 = (this->fields)._unityMesh;
          if (pMVar1 != (Mesh *)0x0) {
            if (cRam_? == '\0') {
              FUN_?(&
                            void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Mesh>_UnityEngine__Mesh_
                           );
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            uStack_10 = 0;
            uStack_11 = 0;
            uStack_12 = 0;
            pvVar13 = (pMVar1->fields)._.m_CachedPtr;
            if (pvVar13 == (void *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
              ThrowHelper_2_ThrowNullReferenceException((Object *)pMVar1,(MethodInfo *)0x0);
              pcVar14 = (code *)swi(3);
              (*pcVar14)();
              return;
            }
            pcVar14 = pcRam_?;
            if ((pcRam_? == (code *)0x0) &&
               (pcVar14 = (code *)FUN_?(&UNK_?), pcVar14 == (code *)0x0)) {
              uVar15 = func_?(&UNK_?);
              FUN_?(uVar15,0);
              pcVar14 = (code *)swi(3);
              (*pcVar14)();
              return;
            }
            pcRam_? = pcVar14;
            (*pcRam_?)(pvVar13,&uStack_10);
            fStack_16 = (float)uStack_10;
            uStack_17 = uStack_10._4_4_;
            uStack_18 = (undefined4)uStack_11;
            pMVar19 = (this->fields)._meshTree;
            uStack_20 = 1;
            (this->fields)._aabb._size.x = uStack_11._4_4_ * TypeRef__System__Activator__T._0_4_;
            (this->fields)._aabb._size.y = (float)uStack_12 + (float)uStack_12;
            (this->fields)._aabb._size.z = uStack_12._4_4_ + uStack_12._4_4_;
            (this->fields)._aabb._center.x = (float)uStack_10;
            (this->fields)._aabb._center.y = (float)uStack_10._4_4_;
            (this->fields)._aabb._center.z = (float)(undefined4)uStack_11;
            *(undefined4 *)&(this->fields)._aabb._isValid = 1;
            if (pMVar19 != (MeshTree *)0x0) {
              if (cRam_? == '\0') {
                FUN_?(&MethodInfo__RTG__SphereTree<RTG::MeshTriangle>__SphereTree__);
                LOCK();
                UNLOCK();
                FUN_?(&TypeInfo__RTG__SphereTree<RTG::MeshTriangle>);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              (pMVar19->fields)._isBuilt = 0;
              this_00 = (SphereTree_1_MeshTriangle_ *)
                        FUN_?(TypeInfo__RTG__SphereTree<RTG::MeshTriangle>);
              SphereTree`1[System::Object]::SphereTree_1_System_Object___ctor
                        ((SphereTree_1_System_Object_ *)this_00,
                         MethodInfo__RTG__SphereTree<RTG::MeshTriangle>__SphereTree__);
              bVar3 = iRam_? != 0;
              (pMVar19->fields)._tree = this_00;
              if (bVar3) {
                uVar4 = (uint)((ulonglong)&(pMVar19->fields)._tree >> 0xc);
                uVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
                do {
                  uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
                  puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
                  LOCK();
                  bVar3 = uVar6 == *puVar7;
                  if (bVar3) {
                    *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
                  }
                  UNLOCK();
                } while (!bVar3);
              }
              return;
            }
          }
        }
      }
    }
  }
  FUN_?();
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}


/* RTMesh(Mesh) */

void Assembly-CSharp.dll::RTG::RTMesh::RTMesh__ctor(RTMesh *this,Mesh *unityMesh,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__MeshTree);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar1 = iRam_? != 0;
  (this->fields)._unityMesh = unityMesh;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&this->fields >> 0xc);
    uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
    do {
      uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
      puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  pMVar6 = (this->fields)._unityMesh;
  if (pMVar6 != (Mesh *)0x0) {
    pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_get_vertices
                       (pMVar6,(MethodInfo *)0x0);
    bVar1 = iRam_? != 0;
    (this->fields)._vertices = pVVar7;
    if (bVar1) {
      uVar2 = (uint)((ulonglong)&(this->fields)._vertices >> 0xc);
      uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
      do {
        uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
        puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
        LOCK();
        bVar1 = uVar4 == *puVar5;
        if (bVar1) {
          *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
        }
        UNLOCK();
      } while (!bVar1);
    }
    pMVar6 = (this->fields)._unityMesh;
    if (pMVar6 != (Mesh *)0x0) {
      pIVar8 = UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_get_triangles
                         (pMVar6,(MethodInfo *)0x0);
      bVar1 = iRam_? != 0;
      (this->fields)._vertIndices = pIVar8;
      if (bVar1) {
        uVar2 = (uint)((ulonglong)&(this->fields)._vertIndices >> 0xc);
        uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
        do {
          uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
          puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
          LOCK();
          bVar1 = uVar4 == *puVar5;
          if (bVar1) {
            *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
          }
          UNLOCK();
        } while (!bVar1);
      }
      pIVar8 = (this->fields)._vertIndices;
      if (pIVar8 != (Int32__Array *)0x0) {
        iVar9 = (int)pIVar8->max_length;
        (this->fields)._numTriangles =
             iVar9 / 3 + (iVar9 >> 0x1f) +
             (int)(((longlong)iVar9 / 3 + ((longlong)iVar9 >> 0x3f) & 0xffffffffU) >> 0x1f);
        this_00 = (MeshTree *)FUN_?(TypeInfo__RTG__MeshTree);
        MeshTree::MeshTree__ctor(this_00,this,(MethodInfo *)0x0);
        bVar1 = iRam_? != 0;
        (this->fields)._meshTree = this_00;
        if (bVar1) {
          uVar2 = (uint)((ulonglong)&(this->fields)._meshTree >> 0xc);
          uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
          do {
            uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
            puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
            LOCK();
            bVar1 = uVar4 == *puVar5;
            if (bVar1) {
              *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
            }
            UNLOCK();
          } while (!bVar1);
        }
        pMVar6 = (this->fields)._unityMesh;
        if (pMVar6 != (Mesh *)0x0) {
          if (cRam_? == '\0') {
            FUN_?(&
                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Mesh>_UnityEngine__Mesh_
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          uStack_10 = 0;
          uStack_11 = 0;
          uStack_12 = 0;
          pvVar13 = (pMVar6->fields)._.m_CachedPtr;
          if (pvVar13 == (void *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
            ThrowHelper_2_ThrowNullReferenceException((Object *)pMVar6,(MethodInfo *)0x0);
            pcVar14 = (code *)swi(3);
            (*pcVar14)();
            return;
          }
          pcVar14 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar14 = (code *)FUN_?(&UNK_?), pcVar14 == (code *)0x0)) {
            uVar15 = func_?(&UNK_?);
            FUN_?(uVar15,0);
            pcVar14 = (code *)swi(3);
            (*pcVar14)();
            return;
          }
          pcRam_? = pcVar14;
          (*pcRam_?)(pvVar13,&uStack_10);
          (this->fields)._aabb._size.x = uStack_11._4_4_ * TypeRef__System__Activator__T._0_4_;
          (this->fields)._aabb._size.y = (float)uStack_12 + (float)uStack_12;
          (this->fields)._aabb._size.z = uStack_12._4_4_ + uStack_12._4_4_;
          (this->fields)._aabb._center.x = (float)uStack_10;
          (this->fields)._aabb._center.y = (float)uStack_10._4_4_;
          (this->fields)._aabb._center.z = (float)(undefined4)uStack_11;
          *(undefined4 *)&(this->fields)._aabb._isValid = 1;
          return;
        }
      }
    }
  }
  FUN_?();
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}


/* AABB get_AABB() */

AABB * Assembly-CSharp.dll::RTG::RTMesh::RTMesh_get_AABB
                 (AABB *__return_storage_ptr__,RTMesh *this,MethodInfo *method)

{
  bVar1 = (this->fields)._aabb._isValid;
  uVar2 = *(undefined3 *)&(this->fields)._aabb.field_0x19;
  fVar3 = (this->fields)._aabb._size.y;
  uVar4 = *(undefined8 *)&(this->fields)._aabb._size.z;
  fVar5 = (this->fields)._aabb._center.y;
  fVar6 = (this->fields)._aabb._center.z;
  (__return_storage_ptr__->_size).x = (this->fields)._aabb._size.x;
  (__return_storage_ptr__->_size).y = fVar3;
  *(undefined8 *)&(__return_storage_ptr__->_size).z = uVar4;
  (__return_storage_ptr__->_center).y = fVar5;
  (__return_storage_ptr__->_center).z = fVar6;
  __return_storage_ptr__->_isValid = bVar1;
  *(undefined3 *)&__return_storage_ptr__->field_0x19 = uVar2;
  return __return_storage_ptr__;
}


/* Boolean get_IsTreeBuilt() */

bool Assembly-CSharp.dll::RTG::RTMesh::RTMesh_get_IsTreeBuilt(RTMesh *this,MethodInfo *method)

{
  pMVar1 = (this->fields)._meshTree;
  if (pMVar1 != (MeshTree *)0x0) {
    return (pMVar1->fields)._isBuilt;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  bVar3 = (*pcVar2)();
  return bVar3;
}

