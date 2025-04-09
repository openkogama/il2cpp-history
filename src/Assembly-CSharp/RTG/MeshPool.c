
/* MeshPool() */

void Assembly-CSharp.dll::RTG::MeshPool::MeshPool__ctor(MeshPool *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__RTG__Singleton<RTG::MeshPool>__Singleton__);
    func_?(&TypeInfo__RTG__Singleton<RTG::MeshPool>);
    cRam_? = '\x01';
  }
  if ((TypeInfo__RTG__Singleton<RTG::MeshPool>->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__RTG__Singleton<RTG::MeshPool>);
  }
  UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
  UxmlObjectListAttributeDescription`1[System::Object]::
  UxmlObjectListAttributeDescription_1_System_Object___ctor
            ((UxmlObjectListAttributeDescription_1_System_Object_ *)this,
             MethodInfo__RTG__Singleton<RTG::MeshPool>__Singleton__);
  return;
}


/* Mesh get_UnitBox() */

Mesh * Assembly-CSharp.dll::RTG::MeshPool::MeshPool_get_UnitBox(MeshPool *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  ppMVar1 = &(this->fields)._unitBox;
  pMVar2 = *ppMVar1;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)pMVar2,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar3 != 0) {
    color.g = (float)_UNK_?;
    color.r = (float)_UNK_?;
    color.b = (float)_UNK_?;
    color.a = _UNK_?;
    pMVar2 = BoxMesh::BoxMesh_CreateBox(1.0,1.0,1.0,color,(MethodInfo *)0x0);
    *ppMVar1 = pMVar2;
    func_?(ppMVar1,pMVar2);
  }
  return *ppMVar1;
}


/* Mesh get_UnitCircleXY() */

Mesh * Assembly-CSharp.dll::RTG::MeshPool::MeshPool_get_UnitCircleXY
                 (MeshPool *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  ppMVar1 = &(this->fields)._unitCircleXY;
  pMVar2 = *ppMVar1;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)pMVar2,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar3 != 0) {
    color.g = (float)_UNK_?;
    color.r = (float)_UNK_?;
    color.b = (float)_UNK_?;
    color.a = _UNK_?;
    pMVar2 = CircleMesh::CircleMesh_CreateCircleXY(1.0,200,color,(MethodInfo *)0x0);
    *ppMVar1 = pMVar2;
    func_?(ppMVar1,pMVar2);
  }
  return *ppMVar1;
}


/* Mesh get_UnitCone() */

Mesh * Assembly-CSharp.dll::RTG::MeshPool::MeshPool_get_UnitCone(MeshPool *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  ppMVar1 = &(this->fields)._unitCone;
  pMVar2 = *ppMVar1;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)pMVar2,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar3 != 0) {
    color.g = (float)_UNK_?;
    color.r = (float)_UNK_?;
    color.b = (float)_UNK_?;
    color.a = _UNK_?;
    pMVar2 = CylinderMesh::CylinderMesh_CreateCylinder
                       (1.0,0.0,1.0,0x1e,0x1e,1,1,color,(MethodInfo *)0x0);
    *ppMVar1 = pMVar2;
    func_?(ppMVar1,pMVar2);
  }
  return *ppMVar1;
}


/* Mesh get_UnitCoordSystem() */

Mesh * Assembly-CSharp.dll::RTG::MeshPool::MeshPool_get_UnitCoordSystem
                 (MeshPool *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  ppMVar1 = &(this->fields)._unitCoordSystem;
  pMVar2 = *ppMVar1;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)pMVar2,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar3 != 0) {
    color.g = (float)_UNK_?;
    color.r = (float)_UNK_?;
    color.b = (float)_UNK_?;
    color.a = _UNK_?;
    pMVar2 = LineMesh::LineMesh_CreateCoordSystemAxesLines(1.0,color,(MethodInfo *)0x0);
    *ppMVar1 = pMVar2;
    func_?(ppMVar1,pMVar2);
  }
  return *ppMVar1;
}


/* Mesh get_UnitCylinder() */

Mesh * Assembly-CSharp.dll::RTG::MeshPool::MeshPool_get_UnitCylinder
                 (MeshPool *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  ppMVar1 = &(this->fields)._unitCylinder;
  pMVar2 = *ppMVar1;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)pMVar2,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar3 != 0) {
    color.g = (float)_UNK_?;
    color.r = (float)_UNK_?;
    color.b = (float)_UNK_?;
    color.a = _UNK_?;
    pMVar2 = CylinderMesh::CylinderMesh_CreateCylinder
                       (1.0,1.0,1.0,0x1e,0x1e,1,1,color,(MethodInfo *)0x0);
    *ppMVar1 = pMVar2;
    func_?(ppMVar1,pMVar2);
  }
  return *ppMVar1;
}


/* Mesh get_UnitCylindricalTorus() */

Mesh * Assembly-CSharp.dll::RTG::MeshPool::MeshPool_get_UnitCylindricalTorus
                 (MeshPool *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  ppMVar1 = &(this->fields)._unitCylindricalTorus;
  pMVar2 = *ppMVar1;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)pMVar2,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar3 != 0) {
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Vector3);
      cRam_? = '\x01';
    }
    color.g = (float)_UNK_?;
    color.r = (float)_UNK_?;
    color.b = (float)_UNK_?;
    color.a = _UNK_?;
    pMVar2 = TorusMesh::TorusMesh_CreateCylindricalTorus
                       (TypeInfo__UnityEngine__Vector3->static_fields->zeroVector,1.0,1.0,1.0,0x50,
                        color,(MethodInfo *)0x0);
    *ppMVar1 = pMVar2;
    func_?(ppMVar1,pMVar2);
  }
  return *ppMVar1;
}


/* Mesh get_UnitEqTriangleXY() */

Mesh * Assembly-CSharp.dll::RTG::MeshPool::MeshPool_get_UnitEqTriangleXY
                 (MeshPool *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  ppMVar1 = &(this->fields)._unitEqTriangleXY;
  pMVar2 = *ppMVar1;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)pMVar2,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar3 != 0) {
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Vector3);
      cRam_? = '\x01';
    }
    color.g = (float)_UNK_?;
    color.r = (float)_UNK_?;
    color.b = (float)_UNK_?;
    color.a = _UNK_?;
    pMVar2 = TriangleMesh::TriangleMesh_CreateEqXY
                       (TypeInfo__UnityEngine__Vector3->static_fields->zeroVector,1.0,color,
                        (MethodInfo *)0x0);
    *ppMVar1 = pMVar2;
    func_?(ppMVar1,pMVar2);
  }
  return *ppMVar1;
}


/* Mesh get_UnitPyramid() */

Mesh * Assembly-CSharp.dll::RTG::MeshPool::MeshPool_get_UnitPyramid
                 (MeshPool *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  ppMVar1 = &(this->fields)._unitPyramid;
  pMVar2 = *ppMVar1;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)pMVar2,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar3 != 0) {
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Vector3);
      cRam_? = '\x01';
    }
    color.g = (float)_UNK_?;
    color.r = (float)_UNK_?;
    color.b = (float)_UNK_?;
    color.a = _UNK_?;
    pMVar2 = PyramidMesh::PyramidMesh_CreatePyramid
                       (TypeInfo__UnityEngine__Vector3->static_fields->zeroVector,1.0,1.0,1.0,color,
                        (MethodInfo *)0x0);
    *ppMVar1 = pMVar2;
    func_?(ppMVar1,pMVar2);
  }
  return *ppMVar1;
}


/* Mesh get_UnitQuadXY() */

Mesh * Assembly-CSharp.dll::RTG::MeshPool::MeshPool_get_UnitQuadXY
                 (MeshPool *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  ppMVar1 = &(this->fields)._unitQuadXY;
  pMVar2 = *ppMVar1;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)pMVar2,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar3 != 0) {
    color.g = (float)_UNK_?;
    color.r = (float)_UNK_?;
    color.b = (float)_UNK_?;
    color.a = _UNK_?;
    pMVar2 = QuadMesh::QuadMesh_CreateQuadXY(1.0,1.0,color,(MethodInfo *)0x0);
    *ppMVar1 = pMVar2;
    func_?(ppMVar1,pMVar2);
  }
  return *ppMVar1;
}


/* Mesh get_UnitQuadXZ() */

Mesh * Assembly-CSharp.dll::RTG::MeshPool::MeshPool_get_UnitQuadXZ
                 (MeshPool *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  ppMVar1 = &(this->fields)._unitQuadXZ;
  pMVar2 = *ppMVar1;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)pMVar2,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar3 != 0) {
    color.g = (float)_UNK_?;
    color.r = (float)_UNK_?;
    color.b = (float)_UNK_?;
    color.a = _UNK_?;
    pMVar2 = QuadMesh::QuadMesh_CreateQuadXZ(1.0,1.0,color,(MethodInfo *)0x0);
    *ppMVar1 = pMVar2;
    func_?(ppMVar1,pMVar2);
  }
  return *ppMVar1;
}


/* Mesh get_UnitRightAngledTriangleXY() */

Mesh * Assembly-CSharp.dll::RTG::MeshPool::MeshPool_get_UnitRightAngledTriangleXY
                 (MeshPool *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  ppMVar1 = &(this->fields)._unitRightAngledTriangleXY;
  pMVar2 = *ppMVar1;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)pMVar2,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar3 != 0) {
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Vector3);
      cRam_? = '\x01';
    }
    color.g = (float)_UNK_?;
    color.r = (float)_UNK_?;
    color.b = (float)_UNK_?;
    color.a = _UNK_?;
    pMVar2 = TriangleMesh::TriangleMesh_CreateRightAngledTriangleXY
                       (TypeInfo__UnityEngine__Vector3->static_fields->zeroVector,1.0,1.0,color,
                        (MethodInfo *)0x0);
    *ppMVar1 = pMVar2;
    func_?(ppMVar1,pMVar2);
  }
  return *ppMVar1;
}


/* Mesh get_UnitSegmentX() */

Mesh * Assembly-CSharp.dll::RTG::MeshPool::MeshPool_get_UnitSegmentX
                 (MeshPool *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  ppMVar1 = &(this->fields)._unitSegmentX;
  pMVar2 = *ppMVar1;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)pMVar2,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar3 == 0) {
code_?:
    return *ppMVar1;
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  uVar4 = 0x3f800000;
  uVar5 = 0;
  fVar6 = 0.0;
  pVVar7 = TypeInfo__UnityEngine__Vector3->static_fields;
  uVar8 = (pVVar7->zeroVector).x;
  uVar9 = (pVVar7->zeroVector).y;
  fVar10 = (pVVar7->zeroVector).z;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__UnityEngine__Mesh);
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  pMVar2 = (Mesh *)func_?(TypeInfo__UnityEngine__Mesh);
  UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh__ctor(pMVar2,(MethodInfo *)0x0);
  value = (Vector3__Array *)func_?(TypeInfo__UnityEngine__Vector3,2);
  if (value != (Vector3__Array *)0x0) {
    if (value->max_length == 0) goto code_?;
    value->vector[0].x = (float)uVar8;
    value->vector[0].y = (float)uVar9;
    value->vector[0].z = fVar10;
    if (value->max_length < 2) goto code_?;
    value->vector[1].x = (float)uVar4;
    value->vector[1].y = (float)uVar5;
    value->vector[1].z = fVar6;
    if (pMVar2 != (Mesh *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_set_vertices
                (pMVar2,value,(MethodInfo *)0x0);
      fillValue.g = (float)_UNK_?;
      fillValue.r = (float)_UNK_?;
      fillValue.b = (float)_UNK_?;
      fillValue.a = _UNK_?;
      value_00 = ColorEx::ColorEx_GetFilledColorArray(2,fillValue,(MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_set_colors
                (pMVar2,value_00,(MethodInfo *)0x0);
      indices = (Int32__Array *)func_?(TypeInfo__System__Int32,2);
      if (indices != (Int32__Array *)0x0) {
        if (1 < indices->max_length) {
          indices->vector[1] = 1;
          UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_SetIndices
                    (pMVar2,indices,MeshTopology__Enum_Lines,0,(MethodInfo *)0x0);
          UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_UploadMeshData
                    (pMVar2,0,(MethodInfo *)0x0);
          *ppMVar1 = pMVar2;
          func_?(ppMVar1,pMVar2);
          goto code_?;
        }
        goto code_?;
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar11 = (code *)swi(3);
  pMVar2 = (Mesh *)(*pcVar11)();
  return pMVar2;
}


/* Mesh get_UnitSphere() */

Mesh * Assembly-CSharp.dll::RTG::MeshPool::MeshPool_get_UnitSphere
                 (MeshPool *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  ppMVar1 = &(this->fields)._unitSphere;
  pMVar2 = *ppMVar1;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)pMVar2,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar3 != 0) {
    color.g = (float)_UNK_?;
    color.r = (float)_UNK_?;
    color.b = (float)_UNK_?;
    color.a = _UNK_?;
    pMVar2 = SphereMesh::SphereMesh_CreateSphere(1.0,0x1e,0x1e,color,(MethodInfo *)0x0);
    *ppMVar1 = pMVar2;
    func_?(ppMVar1,pMVar2);
  }
  return *ppMVar1;
}


/* Mesh get_UnitTorus() */

Mesh * Assembly-CSharp.dll::RTG::MeshPool::MeshPool_get_UnitTorus(MeshPool *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  pMVar1 = &this->fields;
  pMVar2 = pMVar1->_unitTorus;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)pMVar2,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar3 != 0) {
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Vector3);
      cRam_? = '\x01';
    }
    color.g = (float)_UNK_?;
    color.r = (float)_UNK_?;
    color.b = (float)_UNK_?;
    color.a = _UNK_?;
    pMVar2 = TorusMesh::TorusMesh_CreateTorus
                       (TypeInfo__UnityEngine__Vector3->static_fields->zeroVector,1.0,1.0,0x50,0x50,
                        color,(MethodInfo *)0x0);
    pMVar1->_unitTorus = pMVar2;
    func_?(pMVar1,pMVar2);
  }
  return pMVar1->_unitTorus;
}


/* Mesh get_UnitTriangularPrism() */

Mesh * Assembly-CSharp.dll::RTG::MeshPool::MeshPool_get_UnitTriangularPrism
                 (MeshPool *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  ppMVar1 = &(this->fields)._unitTriangularPrism;
  pMVar2 = *ppMVar1;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)pMVar2,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar3 != 0) {
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Vector3);
      cRam_? = '\x01';
    }
    color.g = (float)_UNK_?;
    color.r = (float)_UNK_?;
    color.b = (float)_UNK_?;
    color.a = _UNK_?;
    pMVar2 = PrismMesh::PrismMesh_CreateTriangularPrism
                       (TypeInfo__UnityEngine__Vector3->static_fields->zeroVector,1.0,1.0,1.0,1.0,
                        1.0,color,(MethodInfo *)0x0);
    *ppMVar1 = pMVar2;
    func_?(ppMVar1,pMVar2);
  }
  return *ppMVar1;
}


/* Mesh get_UnitWireBox() */

Mesh * Assembly-CSharp.dll::RTG::MeshPool::MeshPool_get_UnitWireBox
                 (MeshPool *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  ppMVar1 = &(this->fields)._unitWireBox;
  pMVar2 = *ppMVar1;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)pMVar2,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar3 != 0) {
    color.g = (float)_UNK_?;
    color.r = (float)_UNK_?;
    color.b = (float)_UNK_?;
    color.a = _UNK_?;
    pMVar2 = BoxMesh::BoxMesh_CreateWireBox(1.0,1.0,1.0,color,(MethodInfo *)0x0);
    *ppMVar1 = pMVar2;
    func_?(ppMVar1,pMVar2);
  }
  return *ppMVar1;
}


/* Mesh get_UnitWireCircleXY() */

Mesh * Assembly-CSharp.dll::RTG::MeshPool::MeshPool_get_UnitWireCircleXY
                 (MeshPool *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  ppMVar1 = &(this->fields)._unitWireCircleXY;
  pMVar2 = *ppMVar1;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)pMVar2,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar3 != 0) {
    color.g = (float)_UNK_?;
    color.r = (float)_UNK_?;
    color.b = (float)_UNK_?;
    color.a = _UNK_?;
    pMVar2 = CircleMesh::CircleMesh_CreateWireCircleXY(1.0,200,color,(MethodInfo *)0x0);
    *ppMVar1 = pMVar2;
    func_?(ppMVar1,pMVar2);
  }
  return *ppMVar1;
}


/* Mesh get_UnitWireEqTriangleXY() */

Mesh * Assembly-CSharp.dll::RTG::MeshPool::MeshPool_get_UnitWireEqTriangleXY
                 (MeshPool *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  ppMVar1 = &(this->fields)._unitWireEqTriangleXY;
  pMVar2 = *ppMVar1;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)pMVar2,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar3 != 0) {
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Vector3);
      cRam_? = '\x01';
    }
    color.g = (float)_UNK_?;
    color.r = (float)_UNK_?;
    color.b = (float)_UNK_?;
    color.a = _UNK_?;
    pMVar2 = TriangleMesh::TriangleMesh_CreateWireEqXY
                       (TypeInfo__UnityEngine__Vector3->static_fields->zeroVector,1.0,color,
                        (MethodInfo *)0x0);
    *ppMVar1 = pMVar2;
    func_?(ppMVar1,pMVar2);
  }
  return *ppMVar1;
}


/* Mesh get_UnitWirePyramid() */

Mesh * Assembly-CSharp.dll::RTG::MeshPool::MeshPool_get_UnitWirePyramid
                 (MeshPool *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  ppMVar1 = &(this->fields)._unitWirePyramid;
  pMVar2 = *ppMVar1;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)pMVar2,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar3 != 0) {
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Vector3);
      cRam_? = '\x01';
    }
    color.g = (float)_UNK_?;
    color.r = (float)_UNK_?;
    color.b = (float)_UNK_?;
    color.a = _UNK_?;
    pMVar2 = PyramidMesh::PyramidMesh_CreateWirePyramid
                       (TypeInfo__UnityEngine__Vector3->static_fields->zeroVector,1.0,1.0,1.0,color,
                        (MethodInfo *)0x0);
    *ppMVar1 = pMVar2;
    func_?(ppMVar1,pMVar2);
  }
  return *ppMVar1;
}


/* Mesh get_UnitWireQuadXY() */

Mesh * Assembly-CSharp.dll::RTG::MeshPool::MeshPool_get_UnitWireQuadXY
                 (MeshPool *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  ppMVar1 = &(this->fields)._unitWireQuadXY;
  pMVar2 = *ppMVar1;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)pMVar2,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar3 != 0) {
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Vector3);
      cRam_? = '\x01';
    }
    color.g = (float)_UNK_?;
    color.r = (float)_UNK_?;
    color.b = (float)_UNK_?;
    color.a = _UNK_?;
    pMVar2 = QuadMesh::QuadMesh_CreateWireQuadXY
                       (TypeInfo__UnityEngine__Vector3->static_fields->zeroVector,
                        (Vector2)0x3f80000000000000,color,(MethodInfo *)0x0);
    *ppMVar1 = pMVar2;
    func_?(ppMVar1,pMVar2);
  }
  return *ppMVar1;
}


/* Mesh get_UnitWireRightAngledTriangleXY() */

Mesh * Assembly-CSharp.dll::RTG::MeshPool::MeshPool_get_UnitWireRightAngledTriangleXY
                 (MeshPool *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  ppMVar1 = &(this->fields)._unitWireRightAngledTriangleXY;
  pMVar2 = *ppMVar1;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)pMVar2,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar3 != 0) {
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Vector3);
      cRam_? = '\x01';
    }
    color.g = (float)_UNK_?;
    color.r = (float)_UNK_?;
    color.b = (float)_UNK_?;
    color.a = _UNK_?;
    pMVar2 = TriangleMesh::TriangleMesh_CreateWireRightAngledTriangleXY
                       (TypeInfo__UnityEngine__Vector3->static_fields->zeroVector,1.0,1.0,color,
                        (MethodInfo *)0x0);
    *ppMVar1 = pMVar2;
    func_?(ppMVar1,pMVar2);
  }
  return *ppMVar1;
}


/* Mesh get_UnitWireTriangularPrism() */

Mesh * Assembly-CSharp.dll::RTG::MeshPool::MeshPool_get_UnitWireTriangularPrism
                 (MeshPool *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  ppMVar1 = &(this->fields)._unitWireTriangularPrism;
  pMVar2 = *ppMVar1;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)pMVar2,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar3 != 0) {
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Vector3);
      cRam_? = '\x01';
    }
    color.g = (float)_UNK_?;
    color.r = (float)_UNK_?;
    color.b = (float)_UNK_?;
    color.a = _UNK_?;
    pMVar2 = PrismMesh::PrismMesh_CreateWireTriangularPrism
                       (TypeInfo__UnityEngine__Vector3->static_fields->zeroVector,1.0,1.0,1.0,1.0,
                        1.0,color,(MethodInfo *)0x0);
    *ppMVar1 = pMVar2;
    func_?(ppMVar1,pMVar2);
  }
  return *ppMVar1;
}

