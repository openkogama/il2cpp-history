
/* Void BuildTree() */

void Assembly-CSharp.dll::RTG::RTMesh::RTMesh_BuildTree(RTMesh *this,MethodInfo *method)

{
  pMVar1 = (this->fields)._meshTree;
  if (pMVar1 != (MeshTree *)0x0) {
    if (cRam_? == '\0') {
      func_?(&
                      MethodInfo__RTG__SphereTree<RTG::MeshTriangle>__AddNode_RTG__MeshTriangle__RTG__Sphere_
                     );
      cRam_? = '\x01';
    }
    if ((pMVar1->fields)._isBuilt != 0) {
      return;
    }
    triangleIndex = 0;
    pRVar2 = (pMVar1->fields)._mesh;
    while (pRVar2 != (RTMesh *)0x0) {
      if ((pRVar2->fields)._numTriangles <= triangleIndex) {
        (pMVar1->fields)._isBuilt = 1;
        return;
      }
      pRVar2 = (pMVar1->fields)._mesh;
      if (pRVar2 == (RTMesh *)0x0) break;
      nodeData = RTMesh_GetTriangle(pRVar2,triangleIndex,(MethodInfo *)0x0);
      this = (RTMesh *)(pMVar1->fields)._tree;
      if (nodeData == (MeshTriangle *)0x0) break;
      if (cRam_? == '\0') {
        this = (RTMesh *)&UNK_?;
        func_?();
        cRam_? = '\x01';
      }
      this_00 = (nodeData->fields)._vertices;
      if (this_00 == (Vector3__Array *)0x0) break;
      UnityEngine.CoreModule.dll::UnityEngine::Playables::PlayableBehaviour::PlayableBehaviour_Clone
                ((PlayableBehaviour *)this_00,(MethodInfo *)0x0);
      pointCloud = (IEnumerable_1_UnityEngine_Vector3_ *)func_?();
      ppuStack_3 = (undefined **)0x0;
      puStack_4 = (undefined *)0x0;
      fVar5 = 0.0;
      fVar6 = 0.0;
      Sphere::Sphere__ctor_2((Sphere *)&ppuStack_3,pointCloud,(MethodInfo *)0x0);
      if (this == (RTMesh *)0x0) break;
      sphere._center.y = (float)puStack_4;
      sphere._center.x = (float)ppuStack_3;
      sphere._center.z = fVar5;
      sphere._radius = fVar6;
      SphereTree`1[System::Object]::SphereTree_1_System_Object__AddNode
                ((SphereTree_1_System_Object_ *)this,(Object *)nodeData,sphere,
                 MethodInfo__RTG__SphereTree<RTG::MeshTriangle>__AddNode_RTG__MeshTriangle__RTG__Sphere_
                );
      triangleIndex = triangleIndex + 1;
      pRVar2 = (pMVar1->fields)._mesh;
    }
  }
  ppuStack_3 = &puStack_4;
  ppuStack_3 = (undefined **)func_?();
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* RTMesh Create(Mesh) */

RTMesh * Assembly-CSharp.dll::RTG::RTMesh::RTMesh_Create(Mesh *unityMesh,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&TypeInfo__RTG__RTMesh);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)unityMesh,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    if (unityMesh == (Mesh *)0x0) {
      func_?();
      pcVar2 = (code *)swi(3);
      pRVar3 = (RTMesh *)(*pcVar2)();
      return pRVar3;
    }
    bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_get_isReadable
                      (unityMesh,(MethodInfo *)0x0);
    if (bVar1 != 0) {
      pRVar3 = (RTMesh *)func_?();
      RTMesh__ctor(pRVar3,unityMesh,(MethodInfo *)0x0);
      return pRVar3;
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
      func_?(&MethodInfo__RTG__SphereTree<RTG::MeshTriangle>__DebugDraw__);
      cRam_? = '\x01';
    }
    this_00 = (pMVar1->fields)._tree;
    if (this_00 != (SphereTree_1_MeshTriangle_ *)0x0) {
      SphereTree`1[System::Object]::SphereTree_1_System_Object__DebugDraw
                ((SphereTree_1_System_Object_ *)this_00,
                 MethodInfo__RTG__SphereTree<RTG::MeshTriangle>__DebugDraw__);
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* MeshTriangle GetTriangle(Int32) */

MeshTriangle *
Assembly-CSharp.dll::RTG::RTMesh::RTMesh_GetTriangle
          (RTMesh *this,int32_t triangleIndex,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__MeshTriangle);
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  pIVar1 = (this->fields)._vertIndices;
  uVar2 = triangleIndex * 3;
  if (pIVar1 != (Int32__Array *)0x0) {
    if (pIVar1->max_length <= uVar2) goto code_?;
    vertIndex0 = pIVar1->vector[triangleIndex * 3];
    if (pIVar1->max_length <= uVar2 + 1) goto code_?;
    vertIndex1 = pIVar1->vector[triangleIndex * 3 + 1];
    if (pIVar1->max_length <= uVar2 + 2) goto code_?;
    uVar2 = pIVar1->vector[triangleIndex * 3 + 2];
    vertices = (Vector3__Array *)func_?(TypeInfo__UnityEngine__Vector3,3);
    pVVar3 = (this->fields)._vertices;
    if (pVVar3 != (Vector3__Array *)0x0) {
      if (pVVar3->max_length <= vertIndex0) goto code_?;
      if (vertices != (Vector3__Array *)0x0) {
        fVar4 = pVVar3->vector[vertIndex0].y;
        fVar5 = pVVar3->vector[vertIndex0].z;
        if (vertices->max_length == 0) goto code_?;
        vertices->vector[0].x = pVVar3->vector[vertIndex0].x;
        vertices->vector[0].y = fVar4;
        vertices->vector[0].z = fVar5;
        pVVar3 = (this->fields)._vertices;
        if (pVVar3 != (Vector3__Array *)0x0) {
          if (pVVar3->max_length <= vertIndex1) goto code_?;
          fVar4 = pVVar3->vector[vertIndex1].y;
          fVar5 = pVVar3->vector[vertIndex1].z;
          if (vertices->max_length < 2) goto code_?;
          vertices->vector[1].x = pVVar3->vector[vertIndex1].x;
          vertices->vector[1].y = fVar4;
          vertices->vector[1].z = fVar5;
          pVVar3 = (this->fields)._vertices;
          if (pVVar3 != (Vector3__Array *)0x0) {
            if (uVar2 < pVVar3->max_length) {
              fVar4 = pVVar3->vector[uVar2].y;
              fVar5 = pVVar3->vector[uVar2].z;
              if (2 < vertices->max_length) {
                vertices->vector[2].x = pVVar3->vector[uVar2].x;
                vertices->vector[2].y = fVar4;
                vertices->vector[2].z = fVar5;
                pMVar6 = (MeshTriangle *)func_?(TypeInfo__RTG__MeshTriangle);
                MeshTriangle::MeshTriangle__ctor
                          (pMVar6,vertices,triangleIndex,vertIndex0,vertIndex1,uVar2,
                           (MethodInfo *)0x0);
                return pMVar6;
              }
            }
            goto code_?;
          }
        }
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar7 = (code *)swi(3);
  pMVar6 = (MeshTriangle *)(*pcVar7)();
  return pMVar6;
}


/* Boolean OverlapModelVerts(OBB, List`1[UnityEngine.Vector3]) */

bool Assembly-CSharp.dll::RTG::RTMesh::RTMesh_OverlapModelVerts
               (RTMesh *this,OBB modelOBB,List_1_UnityEngine_Vector3_ *verts,MethodInfo *method)

{
  this_00 = (this->fields)._meshTree;
  if (this_00 != (MeshTree *)0x0) {
    bVar1 = MeshTree::MeshTree_OverlapModelVerts(this_00,modelOBB,verts,(MethodInfo *)0x0);
    return bVar1;
  }
  uVar2 = func_?(&stack0xfffffff0);
  func_?(uVar2);
  pcVar3 = (code *)swi(3);
  bVar1 = (*pcVar3)();
  return bVar1;
}


/* Boolean OverlapModelVerts(AABB, List`1[UnityEngine.Vector3]) */

bool Assembly-CSharp.dll::RTG::RTMesh::RTMesh_OverlapModelVerts_1
               (RTMesh *this,AABB modelAABB,List_1_UnityEngine_Vector3_ *verts,MethodInfo *method)

{
  this_00 = (this->fields)._meshTree;
  func_?(&stack0xffffffd0,0,0x2c);
  OBB::OBB__ctor_5((OBB *)&stack0xffffffd0,modelAABB,(MethodInfo *)0x0);
  if (this_00 != (MeshTree *)0x0) {
    modelOBB._size.y = in_stack_1;
    modelOBB._size.x = in_stack_2;
    modelOBB._size.z = in_stack_3;
    modelOBB._center.x = in_stack_4;
    modelOBB._center.y = in_stack_5;
    modelOBB._center.z = in_stack_6;
    modelOBB._rotation.x = (float)verts;
    modelOBB._rotation.y = 0.0;
    modelOBB._rotation.z = (float)uStack_7;
    modelOBB._rotation.w = SUB84(uStack_7,4);
    modelOBB._40_4_ = uStack_8;
    bVar9 = MeshTree::MeshTree_OverlapModelVerts(this_00,modelOBB,verts,(MethodInfo *)0x0);
    return bVar9;
  }
  func_?();
  pcVar10 = (code *)swi(3);
  bVar9 = (*pcVar10)();
  return bVar9;
}


/* Boolean OverlapVerts(OBB, Transform, List`1[UnityEngine.Vector3]) */

bool Assembly-CSharp.dll::RTG::RTMesh::RTMesh_OverlapVerts
               (RTMesh *this,OBB obb,Transform *meshObjectTransform,
               List_1_UnityEngine_Vector3_ *verts,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__MeshTransform);
    cRam_? = '\x01';
  }
  this_00 = (this->fields)._meshTree;
  method_00 = TypeInfo__RTG__MeshTransform;
  meshTransform = (MeshTransform *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)meshTransform,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  if (meshObjectTransform != (Transform *)0x0) {
    pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                       ((Vector3 *)&stack0xfffffff0,meshObjectTransform,(MethodInfo *)0x0);
    fVar2 = pVVar1->y;
    fVar3 = pVVar1->z;
    (meshTransform->fields)._position.x = pVVar1->x;
    (meshTransform->fields)._position.y = fVar2;
    (meshTransform->fields)._position.z = fVar3;
    pQVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                       ((Quaternion *)&stack0xffffffec,meshObjectTransform,(MethodInfo *)0x0);
    fVar3 = pQVar4->y;
    fVar2 = pQVar4->z;
    fVar5 = pQVar4->w;
    (meshTransform->fields)._rotation.x = pQVar4->x;
    (meshTransform->fields)._rotation.y = fVar3;
    (meshTransform->fields)._rotation.z = fVar2;
    (meshTransform->fields)._rotation.w = fVar5;
    pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_lossyScale
                       ((Vector3 *)&stack0xfffffff0,meshObjectTransform,(MethodInfo *)0x0);
    fVar2 = pVVar1->y;
    fVar3 = pVVar1->z;
    (meshTransform->fields)._scale.x = pVVar1->x;
    (meshTransform->fields)._scale.y = fVar2;
    (meshTransform->fields)._scale.z = fVar3;
    if (this_00 != (MeshTree *)0x0) {
      bVar6 = MeshTree::MeshTree_OverlapVerts(this_00,obb,meshTransform,verts,(MethodInfo *)0x0);
      return bVar6;
    }
  }
  func_?();
  pcVar7 = (code *)swi(3);
  bVar6 = (*pcVar7)();
  return bVar6;
}


/* MeshRayHit Raycast(Ray, Matrix4x4) */

MeshRayHit *
Assembly-CSharp.dll::RTG::RTMesh::RTMesh_Raycast
          (RTMesh *this,Ray ray,Matrix4x4 meshTransform,MethodInfo *method)

{
  this_00 = (this->fields)._meshTree;
  if (this_00 != (MeshTree *)0x0) {
    pMVar1 = MeshTree::MeshTree_RaycastClosest(this_00,ray,meshTransform,(MethodInfo *)0x0);
    return pMVar1;
  }
  uVar2 = func_?(&stack0xfffffff0);
  func_?(uVar2);
  pcVar3 = (code *)swi(3);
  pMVar1 = (MeshRayHit *)(*pcVar3)();
  return pMVar1;
}


/* Void SetDirty() */

void Assembly-CSharp.dll::RTG::RTMesh::RTMesh_SetDirty(RTMesh *this,MethodInfo *method)

{
  pMVar1 = (this->fields)._unityMesh;
  if (pMVar1 != (Mesh *)0x0) {
    pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_get_vertices
                       (pMVar1,(MethodInfo *)0x0);
    (this->fields)._vertices = pVVar2;
    func_?(&(this->fields)._vertices,pVVar2);
    pMVar1 = (this->fields)._unityMesh;
    if (pMVar1 != (Mesh *)0x0) {
      pIVar3 = UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_get_triangles
                         (pMVar1,(MethodInfo *)0x0);
      (this->fields)._vertIndices = pIVar3;
      func_?(&(this->fields)._vertIndices,pIVar3);
      pIVar3 = (this->fields)._vertIndices;
      if (pIVar3 != (Int32__Array *)0x0) {
        (this->fields)._numTriangles = (int)pIVar3->max_length / 3;
        pMVar1 = (this->fields)._unityMesh;
        if (pMVar1 != (Mesh *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_RecalculateBounds
                    (pMVar1,(MethodInfo *)0x0);
          pMVar1 = (this->fields)._unityMesh;
          if (pMVar1 != (Mesh *)0x0) {
            pBVar4 = UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_get_bounds
                               (&BStack_5,pMVar1,(MethodInfo *)0x0);
            AStack_6._center.y = 0.0;
            AStack_6._center.z = 0.0;
            AStack_6._size.x = 0.0;
            AStack_6._size.y = 0.0;
            AStack_6._size.z = 0.0;
            AStack_6._center.x = 0.0;
            AStack_6._isValid = 0;
            AStack_6._25_3_ = 0;
            AABB::AABB__ctor_1(&AStack_6,*pBVar4,(MethodInfo *)0x0);
            pMVar7 = (this->fields)._meshTree;
            (this->fields)._aabb._size.x = AStack_6._size.x;
            (this->fields)._aabb._size.y = AStack_6._size.y;
            (this->fields)._aabb._size.z = AStack_6._size.z;
            (this->fields)._aabb._center.x = AStack_6._center.x;
            (this->fields)._aabb._center.y = AStack_6._center.y;
            (this->fields)._aabb._center.z = AStack_6._center.z;
            (this->fields)._aabb._isValid = AStack_6._isValid;
            *(undefined3 *)&(this->fields)._aabb.field_0x19 = AStack_6._25_3_;
            if (pMVar7 != (MeshTree *)0x0) {
              if (cRam_? == '\0') {
                func_?(&MethodInfo__RTG__SphereTree<RTG::MeshTriangle>__SphereTree__);
                func_?(&TypeInfo__RTG__SphereTree<RTG::MeshTriangle>);
                cRam_? = '\x01';
              }
              (pMVar7->fields)._isBuilt = 0;
              this_00 = (SphereTree_1_MeshTriangle_ *)
                        func_?(TypeInfo__RTG__SphereTree<RTG::MeshTriangle>);
              SphereTree`1[System::Object]::SphereTree_1_System_Object___ctor
                        ((SphereTree_1_System_Object_ *)this_00,
                         MethodInfo__RTG__SphereTree<RTG::MeshTriangle>__SphereTree__);
              (pMVar7->fields)._tree = this_00;
              func_?(&(pMVar7->fields)._tree,this_00);
              return;
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* RTMesh(Mesh) */

void Assembly-CSharp.dll::RTG::RTMesh::RTMesh__ctor(RTMesh *this,Mesh *unityMesh,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__MeshTree);
    cRam_? = '\x01';
  }
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_EDI);
  (this->fields)._unityMesh = unityMesh;
  func_?(&this->fields,unityMesh);
  pMVar1 = (this->fields)._unityMesh;
  if (pMVar1 != (Mesh *)0x0) {
    pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_get_vertices
                       (pMVar1,(MethodInfo *)0x0);
    (this->fields)._vertices = pVVar2;
    func_?(&(this->fields)._vertices,pVVar2);
    pMVar1 = (this->fields)._unityMesh;
    if (pMVar1 != (Mesh *)0x0) {
      pIVar3 = UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_get_triangles
                          (pMVar1,(MethodInfo *)0x0);
      (this->fields)._vertIndices = pIVar3;
      func_?(&(this->fields)._vertIndices,pIVar3);
      pIVar3 = (this->fields)._vertIndices;
      if (pIVar3 != (Int32__Array *)0x0) {
        (this->fields)._numTriangles = (int)pIVar3->max_length / 3;
        value = (MeshTree *)func_?(TypeInfo__RTG__MeshTree);
        if (cRam_? == '\0') {
          func_?(&MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
          func_?(&TypeInfo__System__Collections__Generic__HashSet<int>);
          func_?(&
                          MethodInfo__System__Collections__Generic__List<RTG::SphereTreeNodeRayHit<RTG::MeshTriangle>_>__List__
                         );
          func_?(&
                          MethodInfo__System__Collections__Generic__List<RTG::SphereTreeNode<RTG::MeshTriangle>_>__List__
                         );
          func_?(&
                          TypeInfo__System__Collections__Generic__List<RTG::SphereTreeNode<RTG::MeshTriangle>_>
                         );
          func_?(&
                          TypeInfo__System__Collections__Generic__List<RTG::SphereTreeNodeRayHit<RTG::MeshTriangle>_>
                         );
          func_?(&MethodInfo__RTG__SphereTree<RTG::MeshTriangle>__SphereTree__);
          func_?(&TypeInfo__RTG__SphereTree<RTG::MeshTriangle>);
          cRam_? = '\x01';
        }
        this_00 = (SphereTree_1_MeshTriangle_ *)
                  func_?(TypeInfo__RTG__SphereTree<RTG::MeshTriangle>);
        SphereTree`1[System::Object]::SphereTree_1_System_Object___ctor
                  ((SphereTree_1_System_Object_ *)this_00,
                   MethodInfo__RTG__SphereTree<RTG::MeshTriangle>__SphereTree__);
        (value->fields)._tree = this_00;
        func_?(&(value->fields)._tree,this_00);
        this_01 = (List_1_RTG_SphereTreeNode_1_MeshTriangle_ *)
                  func_?(
                                 TypeInfo__System__Collections__Generic__List<RTG::SphereTreeNode<RTG::MeshTriangle>_>
                                 );
        mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
        __Il2CppFullySharedGenericType]::
        LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
                  ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_01,
                   MethodInfo__System__Collections__Generic__List<RTG::SphereTreeNode<RTG::MeshTriangle>_>__List__
                  );
        (value->fields)._nodeBuffer = this_01;
        func_?(&(value->fields)._nodeBuffer,this_01);
        this_02 = (List_1_RTG_SphereTreeNodeRayHit_1_MeshTriangle_ *)
                  func_?(
                                 TypeInfo__System__Collections__Generic__List<RTG::SphereTreeNodeRayHit<RTG::MeshTriangle>_>
                                 );
        mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
        __Il2CppFullySharedGenericType]::
        LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
                  ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_02,
                   MethodInfo__System__Collections__Generic__List<RTG::SphereTreeNodeRayHit<RTG::MeshTriangle>_>__List__
                  );
        (value->fields)._nodeHitBuffer = this_02;
        func_?(&(value->fields)._nodeHitBuffer,this_02);
        this_03 = (HashSet_1_System_Int32_ *)
                  func_?(TypeInfo__System__Collections__Generic__HashSet<int>);
        System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32]::
        HashSet_1_System_Int32___ctor
                  (this_03,MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
        method_00 = (MethodInfo *)&(value->fields)._vertexIndexSet;
        (value->fields)._vertexIndexSet = this_03;
        func_?();
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                  ((Object *)value,ExceptionArgument__Enum_obj,method_00);
        (value->fields)._mesh = this;
        func_?();
        (this->fields)._meshTree = value;
        func_?(&(this->fields)._meshTree);
        pMVar1 = (this->fields)._unityMesh;
        if (pMVar1 != (Mesh *)0x0) {
          pBVar4 = UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_get_bounds
                              (&BStack_5,pMVar1,(MethodInfo *)0x0);
          fVar6 = (pBVar4->m_Extents).z;
          uVar7 = (pBVar4->m_Center).x;
          uVar8 = (pBVar4->m_Center).y;
          uVar9 = (pBVar4->m_Center).z;
          bounds.m_Center.z = (float)uVar9;
          bounds.m_Center.y = (float)uVar8;
          bounds.m_Center.x = (float)uVar7;
          uVar10 = (pBVar4->m_Extents).x;
          uVar11 = (pBVar4->m_Extents).y;
          bounds.m_Extents.y = (float)uVar11;
          bounds.m_Extents.x = (float)uVar10;
          uVar12._0_4_ = 0.0;
          uVar12._4_4_ = 0.0;
          fVar13 = 0.0;
          fVar14 = 0.0;
          fVar15 = 0.0;
          bounds.m_Extents.z = fVar6;
          AABB::AABB__ctor_1((AABB *)&stack0xffffffc8,bounds,(MethodInfo *)0x0);
          (this->fields)._aabb._size.x = fVar6;
          (this->fields)._aabb._size.y = fVar13;
          (this->fields)._aabb._size.z = fVar14;
          (this->fields)._aabb._center.x = fVar15;
          (this->fields)._aabb._center.y = (float)uVar12;
          (this->fields)._aabb._center.z = uVar12._4_4_;
          *(undefined4 *)&(this->fields)._aabb._isValid = 0;
          return;
        }
      }
    }
  }
  func_?();
  pcVar16 = (code *)swi(3);
  (*pcVar16)();
  return;
}


/* AABB get_AABB() */

AABB * Assembly-CSharp.dll::RTG::RTMesh::RTMesh_get_AABB
                 (AABB *__return_storage_ptr__,RTMesh *this,MethodInfo *method)

{
  fVar1 = (this->fields)._aabb._size.y;
  fVar2 = (this->fields)._aabb._size.z;
  fVar3 = (this->fields)._aabb._center.x;
  (__return_storage_ptr__->_size).x = (this->fields)._aabb._size.x;
  (__return_storage_ptr__->_size).y = fVar1;
  (__return_storage_ptr__->_size).z = fVar2;
  (__return_storage_ptr__->_center).x = fVar3;
  fVar1 = (this->fields)._aabb._center.z;
  bVar4 = (this->fields)._aabb._isValid;
  uVar5 = *(undefined3 *)&(this->fields)._aabb.field_0x19;
  (__return_storage_ptr__->_center).y = (this->fields)._aabb._center.y;
  (__return_storage_ptr__->_center).z = fVar1;
  __return_storage_ptr__->_isValid = bVar4;
  *(undefined3 *)&__return_storage_ptr__->field_0x19 = uVar5;
  return __return_storage_ptr__;
}


/* Boolean get_IsTreeBuilt() */

bool Assembly-CSharp.dll::RTG::RTMesh::RTMesh_get_IsTreeBuilt(RTMesh *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pMVar2 = (this->fields)._meshTree;
  if (pMVar2 != (MeshTree *)0x0) {
    return (pMVar2->fields)._isBuilt;
  }
  uVar3 = func_?(auStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  bVar6 = (*pcVar5)();
  return bVar6;
}

