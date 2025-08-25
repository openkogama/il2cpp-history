
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
  pMVar1 = (this->fields)._unitBox;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)pMVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    color.g = (float)_UNK_?;
    color.r = (float)_UNK_?;
    color.b = (float)_UNK_?;
    color.a = _UNK_?;
    pMVar1 = BoxMesh::BoxMesh_CreateBox(1.0,1.0,1.0,color,(MethodInfo *)0x0);
    (this->fields)._unitBox = pMVar1;
    func_?(&(this->fields)._unitBox,pMVar1);
  }
  return (this->fields)._unitBox;
}


/* Mesh get_UnitCircleXY() */

Mesh * Assembly-CSharp.dll::RTG::MeshPool::MeshPool_get_UnitCircleXY
                 (MeshPool *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields)._unitCircleXY;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)pMVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    color.g = (float)_UNK_?;
    color.r = (float)_UNK_?;
    color.b = (float)_UNK_?;
    color.a = _UNK_?;
    pMVar1 = CircleMesh::CircleMesh_CreateCircleXY(1.0,200,color,(MethodInfo *)0x0);
    (this->fields)._unitCircleXY = pMVar1;
    func_?(&(this->fields)._unitCircleXY,pMVar1);
  }
  return (this->fields)._unitCircleXY;
}


/* Mesh get_UnitCone() */

Mesh * Assembly-CSharp.dll::RTG::MeshPool::MeshPool_get_UnitCone(MeshPool *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields)._unitCone;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)pMVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    color.g = (float)_UNK_?;
    color.r = (float)_UNK_?;
    color.b = (float)_UNK_?;
    color.a = _UNK_?;
    pMVar1 = CylinderMesh::CylinderMesh_CreateCylinder
                       (1.0,0.0,1.0,0x1e,0x1e,1,1,color,(MethodInfo *)0x0);
    (this->fields)._unitCone = pMVar1;
    func_?(&(this->fields)._unitCone,pMVar1);
  }
  return (this->fields)._unitCone;
}


/* Mesh get_UnitCoordSystem() */

Mesh * Assembly-CSharp.dll::RTG::MeshPool::MeshPool_get_UnitCoordSystem
                 (MeshPool *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields)._unitCoordSystem;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)pMVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    color.g = (float)_UNK_?;
    color.r = (float)_UNK_?;
    color.b = (float)_UNK_?;
    color.a = _UNK_?;
    pMVar1 = LineMesh::LineMesh_CreateCoordSystemAxesLines(1.0,color,(MethodInfo *)0x0);
    (this->fields)._unitCoordSystem = pMVar1;
    func_?(&(this->fields)._unitCoordSystem,pMVar1);
  }
  return (this->fields)._unitCoordSystem;
}


/* Mesh get_UnitCylinder() */

Mesh * Assembly-CSharp.dll::RTG::MeshPool::MeshPool_get_UnitCylinder
                 (MeshPool *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields)._unitCylinder;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)pMVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    color.g = (float)_UNK_?;
    color.r = (float)_UNK_?;
    color.b = (float)_UNK_?;
    color.a = _UNK_?;
    pMVar1 = CylinderMesh::CylinderMesh_CreateCylinder
                       (1.0,1.0,1.0,0x1e,0x1e,1,1,color,(MethodInfo *)0x0);
    (this->fields)._unitCylinder = pMVar1;
    func_?(&(this->fields)._unitCylinder,pMVar1);
  }
  return (this->fields)._unitCylinder;
}


/* Mesh get_UnitCylindricalTorus() */

Mesh * Assembly-CSharp.dll::RTG::MeshPool::MeshPool_get_UnitCylindricalTorus
                 (MeshPool *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields)._unitCylindricalTorus;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)pMVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Vector3);
      cRam_? = '\x01';
    }
    color.g = (float)_UNK_?;
    color.r = (float)_UNK_?;
    color.b = (float)_UNK_?;
    color.a = _UNK_?;
    pMVar1 = TorusMesh::TorusMesh_CreateCylindricalTorus
                       (TypeInfo__UnityEngine__Vector3->static_fields->zeroVector,1.0,1.0,1.0,0x50,
                        color,(MethodInfo *)0x0);
    (this->fields)._unitCylindricalTorus = pMVar1;
    func_?(&(this->fields)._unitCylindricalTorus,pMVar1);
  }
  return (this->fields)._unitCylindricalTorus;
}


/* Mesh get_UnitEqTriangleXY() */

Mesh * Assembly-CSharp.dll::RTG::MeshPool::MeshPool_get_UnitEqTriangleXY
                 (MeshPool *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields)._unitEqTriangleXY;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)pMVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Vector3);
      cRam_? = '\x01';
    }
    color.g = (float)_UNK_?;
    color.r = (float)_UNK_?;
    color.b = (float)_UNK_?;
    color.a = _UNK_?;
    pMVar1 = TriangleMesh::TriangleMesh_CreateEqXY
                       (TypeInfo__UnityEngine__Vector3->static_fields->zeroVector,1.0,color,
                        (MethodInfo *)0x0);
    (this->fields)._unitEqTriangleXY = pMVar1;
    func_?(&(this->fields)._unitEqTriangleXY,pMVar1);
  }
  return (this->fields)._unitEqTriangleXY;
}


/* Mesh get_UnitPyramid() */

Mesh * Assembly-CSharp.dll::RTG::MeshPool::MeshPool_get_UnitPyramid
                 (MeshPool *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields)._unitPyramid;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)pMVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Vector3);
      cRam_? = '\x01';
    }
    color.g = (float)_UNK_?;
    color.r = (float)_UNK_?;
    color.b = (float)_UNK_?;
    color.a = _UNK_?;
    pMVar1 = PyramidMesh::PyramidMesh_CreatePyramid
                       (TypeInfo__UnityEngine__Vector3->static_fields->zeroVector,1.0,1.0,1.0,color,
                        (MethodInfo *)0x0);
    (this->fields)._unitPyramid = pMVar1;
    func_?(&(this->fields)._unitPyramid,pMVar1);
  }
  return (this->fields)._unitPyramid;
}


/* Mesh get_UnitQuadXY() */

Mesh * Assembly-CSharp.dll::RTG::MeshPool::MeshPool_get_UnitQuadXY
                 (MeshPool *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields)._unitQuadXY;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)pMVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    color.g = (float)_UNK_?;
    color.r = (float)_UNK_?;
    color.b = (float)_UNK_?;
    color.a = _UNK_?;
    pMVar1 = QuadMesh::QuadMesh_CreateQuadXY(1.0,1.0,color,(MethodInfo *)0x0);
    (this->fields)._unitQuadXY = pMVar1;
    func_?(&(this->fields)._unitQuadXY,pMVar1);
  }
  return (this->fields)._unitQuadXY;
}


/* Mesh get_UnitQuadXZ() */

Mesh * Assembly-CSharp.dll::RTG::MeshPool::MeshPool_get_UnitQuadXZ
                 (MeshPool *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields)._unitQuadXZ;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)pMVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    color.g = (float)_UNK_?;
    color.r = (float)_UNK_?;
    color.b = (float)_UNK_?;
    color.a = _UNK_?;
    pMVar1 = QuadMesh::QuadMesh_CreateQuadXZ(1.0,1.0,color,(MethodInfo *)0x0);
    (this->fields)._unitQuadXZ = pMVar1;
    func_?(&(this->fields)._unitQuadXZ,pMVar1);
  }
  return (this->fields)._unitQuadXZ;
}


/* Mesh get_UnitRightAngledTriangleXY() */

Mesh * Assembly-CSharp.dll::RTG::MeshPool::MeshPool_get_UnitRightAngledTriangleXY
                 (MeshPool *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields)._unitRightAngledTriangleXY;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)pMVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Vector3);
      cRam_? = '\x01';
    }
    color.g = (float)_UNK_?;
    color.r = (float)_UNK_?;
    color.b = (float)_UNK_?;
    color.a = _UNK_?;
    pMVar1 = TriangleMesh::TriangleMesh_CreateRightAngledTriangleXY
                       (TypeInfo__UnityEngine__Vector3->static_fields->zeroVector,1.0,1.0,color,
                        (MethodInfo *)0x0);
    (this->fields)._unitRightAngledTriangleXY = pMVar1;
    func_?(&(this->fields)._unitRightAngledTriangleXY,pMVar1);
  }
  return (this->fields)._unitRightAngledTriangleXY;
}


/* Mesh get_UnitSegmentX() */

Mesh * Assembly-CSharp.dll::RTG::MeshPool::MeshPool_get_UnitSegmentX
                 (MeshPool *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields)._unitSegmentX;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)pMVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 == 0) {
code_?:
    return (this->fields)._unitSegmentX;
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  pVVar3 = TypeInfo__UnityEngine__Vector3->static_fields;
  uVar4 = (pVVar3->zeroVector).x;
  uVar5 = (pVVar3->zeroVector).y;
  fVar6 = (pVVar3->zeroVector).z;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__UnityEngine__Mesh);
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  pMVar1 = (Mesh *)func_?(TypeInfo__UnityEngine__Mesh);
  UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh__ctor(pMVar1,(MethodInfo *)0x0);
  value = (Vector3__Array *)func_?(TypeInfo__UnityEngine__Vector3,2);
  if (value != (Vector3__Array *)0x0) {
    if (value->max_length == 0) goto code_?;
    value->vector[0].x = (float)uVar4;
    value->vector[0].y = (float)uVar5;
    value->vector[0].z = fVar6;
    if (value->max_length < 2) goto code_?;
    value->vector[1].x = 1.0;
    value->vector[1].y = 0.0;
    value->vector[1].z = 0.0;
    if (pMVar1 != (Mesh *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_set_vertices
                (pMVar1,value,(MethodInfo *)0x0);
      fillValue.g = (float)_UNK_?;
      fillValue.r = (float)_UNK_?;
      fillValue.b = (float)_UNK_?;
      fillValue.a = _UNK_?;
      value_00 = ColorEx::ColorEx_GetFilledColorArray(2,fillValue,(MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_set_colors
                (pMVar1,value_00,(MethodInfo *)0x0);
      indices = (Int32__Array *)func_?(TypeInfo__System__Int32);
      if (indices != (Int32__Array *)0x0) {
        if (1 < indices->max_length) {
          indices->vector[1] = 1;
          UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_SetIndices
                    (pMVar1,indices,MeshTopology__Enum_Lines,0,(MethodInfo *)0x0);
          UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_UploadMeshData
                    (pMVar1,0,(MethodInfo *)0x0);
          (this->fields)._unitSegmentX = pMVar1;
          func_?(&(this->fields)._unitSegmentX,pMVar1);
          goto code_?;
        }
        goto code_?;
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar7 = (code *)swi(3);
  pMVar1 = (Mesh *)(*pcVar7)();
  return pMVar1;
}


/* Mesh get_UnitSphere() */

Mesh * Assembly-CSharp.dll::RTG::MeshPool::MeshPool_get_UnitSphere
                 (MeshPool *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields)._unitSphere;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)pMVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    color.g = (float)_UNK_?;
    color.r = (float)_UNK_?;
    color.b = (float)_UNK_?;
    color.a = _UNK_?;
    pMVar1 = SphereMesh::SphereMesh_CreateSphere(1.0,0x1e,0x1e,color,(MethodInfo *)0x0);
    (this->fields)._unitSphere = pMVar1;
    func_?(&(this->fields)._unitSphere,pMVar1);
  }
  return (this->fields)._unitSphere;
}


/* Mesh get_UnitTorus() */

Mesh * Assembly-CSharp.dll::RTG::MeshPool::MeshPool_get_UnitTorus(MeshPool *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields)._unitTorus;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)pMVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Vector3);
      cRam_? = '\x01';
    }
    color.g = (float)_UNK_?;
    color.r = (float)_UNK_?;
    color.b = (float)_UNK_?;
    color.a = _UNK_?;
    pMVar1 = TorusMesh::TorusMesh_CreateTorus
                       (TypeInfo__UnityEngine__Vector3->static_fields->zeroVector,1.0,1.0,0x50,0x50,
                        color,(MethodInfo *)0x0);
    (this->fields)._unitTorus = pMVar1;
    func_?(&this->fields,pMVar1);
  }
  return (this->fields)._unitTorus;
}


/* Mesh get_UnitTriangularPrism() */

Mesh * Assembly-CSharp.dll::RTG::MeshPool::MeshPool_get_UnitTriangularPrism
                 (MeshPool *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields)._unitTriangularPrism;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)pMVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Vector3);
      cRam_? = '\x01';
    }
    color.g = (float)_UNK_?;
    color.r = (float)_UNK_?;
    color.b = (float)_UNK_?;
    color.a = _UNK_?;
    pMVar1 = PrismMesh::PrismMesh_CreateTriangularPrism
                       (TypeInfo__UnityEngine__Vector3->static_fields->zeroVector,1.0,1.0,1.0,1.0,
                        1.0,color,(MethodInfo *)0x0);
    (this->fields)._unitTriangularPrism = pMVar1;
    func_?(&(this->fields)._unitTriangularPrism,pMVar1);
  }
  return (this->fields)._unitTriangularPrism;
}


/* Mesh get_UnitWireBox() */

Mesh * Assembly-CSharp.dll::RTG::MeshPool::MeshPool_get_UnitWireBox
                 (MeshPool *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields)._unitWireBox;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)pMVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    color.g = (float)_UNK_?;
    color.r = (float)_UNK_?;
    color.b = (float)_UNK_?;
    color.a = _UNK_?;
    pMVar1 = BoxMesh::BoxMesh_CreateWireBox(1.0,1.0,1.0,color,(MethodInfo *)0x0);
    (this->fields)._unitWireBox = pMVar1;
    func_?(&(this->fields)._unitWireBox,pMVar1);
  }
  return (this->fields)._unitWireBox;
}


/* Mesh get_UnitWireCircleXY() */

Mesh * Assembly-CSharp.dll::RTG::MeshPool::MeshPool_get_UnitWireCircleXY
                 (MeshPool *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields)._unitWireCircleXY;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)pMVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    color.g = (float)_UNK_?;
    color.r = (float)_UNK_?;
    color.b = (float)_UNK_?;
    color.a = _UNK_?;
    pMVar1 = CircleMesh::CircleMesh_CreateWireCircleXY(1.0,200,color,(MethodInfo *)0x0);
    (this->fields)._unitWireCircleXY = pMVar1;
    func_?(&(this->fields)._unitWireCircleXY,pMVar1);
  }
  return (this->fields)._unitWireCircleXY;
}


/* Mesh get_UnitWireEqTriangleXY() */

Mesh * Assembly-CSharp.dll::RTG::MeshPool::MeshPool_get_UnitWireEqTriangleXY
                 (MeshPool *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields)._unitWireEqTriangleXY;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)pMVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 == 0) {
code_?:
    return (this->fields)._unitWireEqTriangleXY;
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  pVVar3 = TypeInfo__UnityEngine__Vector3->static_fields;
  uVar4._0_4_ = (pVVar3->zeroVector).x;
  uVar4._4_4_ = (pVVar3->zeroVector).y;
  fVar5 = (pVVar3->zeroVector).z;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Color);
    func_?(&TypeInfo__System__Int32);
    func_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__ToArray__
                   );
    func_?(&TypeInfo__UnityEngine__Mesh);
    func_?(&TypeInfo__RTG__TriangleMath);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Quaternion);
    cRam_? = '\x01';
  }
  pQVar6 = TypeInfo__UnityEngine__Quaternion->static_fields;
  uVar7 = (pQVar6->identityQuaternion).x;
  uVar8 = (pQVar6->identityQuaternion).y;
  rotation.y = (float)uVar8;
  rotation.x = (float)uVar7;
  fVar9 = (pQVar6->identityQuaternion).z;
  fVar10 = (pQVar6->identityQuaternion).w;
  if ((TypeInfo__RTG__TriangleMath->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__RTG__TriangleMath);
  }
  centroid.z = fVar5;
  centroid.x = (float)(int)uVar4;
  centroid.y = (float)(int)((ulonglong)uVar4 >> 0x20);
  rotation.z = fVar9;
  rotation.w = fVar10;
  this_00 = (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
             *)TriangleMath::TriangleMath_CalcEqTriangle3DPoints
                         (centroid,1.0,rotation,(MethodInfo *)0x0);
  if (this_00 !=
      (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_ *)
      0x0) {
    value = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::Internal::
            MultiColumnCollectionHeader+ViewState+ColumnState]::
            List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState__ToArray
                      (this_00,
                       MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__ToArray__
                      );
    pMVar1 = (Mesh *)func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh__ctor(pMVar1,(MethodInfo *)0x0);
    if (pMVar1 != (Mesh *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_set_vertices
                (pMVar1,(Vector3__Array *)value,(MethodInfo *)0x0);
      value_00 = (Color__Array *)func_?();
      fVar11 = _UNK_?;
      fVar10 = _UNK_?;
      fVar9 = _UNK_?;
      fVar5 = _UNK_?;
      if (value_00 != (Color__Array *)0x0) {
        if (value_00->max_length == 0) goto code_?;
        value_00->vector[0].r = _UNK_?;
        value_00->vector[0].g = fVar9;
        value_00->vector[0].b = fVar10;
        value_00->vector[0].a = fVar11;
        if (value_00->max_length < 2) goto code_?;
        value_00->vector[1].r = fVar5;
        value_00->vector[1].g = fVar9;
        value_00->vector[1].b = fVar10;
        value_00->vector[1].a = fVar11;
        if (value_00->max_length < 3) goto code_?;
        value_00->vector[2].r = fVar5;
        value_00->vector[2].g = fVar9;
        value_00->vector[2].b = fVar10;
        value_00->vector[2].a = fVar11;
        UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_set_colors
                  (pMVar1,value_00,(MethodInfo *)0x0);
        indices = (Int32__Array *)func_?();
        if (indices != (Int32__Array *)0x0) {
          if ((1 < indices->max_length) && (indices->vector[1] = 1, 2 < indices->max_length)) {
            indices->vector[2] = 2;
            UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_SetIndices
                      (pMVar1,indices,MeshTopology__Enum_LineStrip,0,(MethodInfo *)0x0);
            UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_UploadMeshData
                      (pMVar1,0,(MethodInfo *)0x0);
            (this->fields)._unitWireEqTriangleXY = pMVar1;
            func_?();
            goto code_?;
          }
          goto code_?;
        }
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar12 = (code *)swi(3);
  pMVar1 = (Mesh *)(*pcVar12)();
  return pMVar1;
}


/* Mesh get_UnitWirePyramid() */

Mesh * Assembly-CSharp.dll::RTG::MeshPool::MeshPool_get_UnitWirePyramid
                 (MeshPool *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields)._unitWirePyramid;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)pMVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Vector3);
      cRam_? = '\x01';
    }
    color.g = (float)_UNK_?;
    color.r = (float)_UNK_?;
    color.b = (float)_UNK_?;
    color.a = _UNK_?;
    pMVar1 = PyramidMesh::PyramidMesh_CreateWirePyramid
                       (TypeInfo__UnityEngine__Vector3->static_fields->zeroVector,1.0,1.0,1.0,color,
                        (MethodInfo *)0x0);
    (this->fields)._unitWirePyramid = pMVar1;
    func_?(&(this->fields)._unitWirePyramid,pMVar1);
  }
  return (this->fields)._unitWirePyramid;
}


/* Mesh get_UnitWireQuadXY() */

Mesh * Assembly-CSharp.dll::RTG::MeshPool::MeshPool_get_UnitWireQuadXY
                 (MeshPool *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields)._unitWireQuadXY;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)pMVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Vector3);
      cRam_? = '\x01';
    }
    color.g = (float)_UNK_?;
    color.r = (float)_UNK_?;
    color.b = (float)_UNK_?;
    color.a = _UNK_?;
    pMVar1 = QuadMesh::QuadMesh_CreateWireQuadXY
                       (TypeInfo__UnityEngine__Vector3->static_fields->zeroVector,
                        (Vector2)0x3f80000000000000,color,(MethodInfo *)0x0);
    (this->fields)._unitWireQuadXY = pMVar1;
    func_?(&(this->fields)._unitWireQuadXY,pMVar1);
  }
  return (this->fields)._unitWireQuadXY;
}


/* Mesh get_UnitWireRightAngledTriangleXY() */

Mesh * Assembly-CSharp.dll::RTG::MeshPool::MeshPool_get_UnitWireRightAngledTriangleXY
                 (MeshPool *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields)._unitWireRightAngledTriangleXY;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)pMVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Vector3);
      cRam_? = '\x01';
    }
    color.g = (float)_UNK_?;
    color.r = (float)_UNK_?;
    color.b = (float)_UNK_?;
    color.a = _UNK_?;
    pMVar1 = TriangleMesh::TriangleMesh_CreateWireRightAngledTriangleXY
                       (TypeInfo__UnityEngine__Vector3->static_fields->zeroVector,1.0,1.0,color,
                        (MethodInfo *)0x0);
    (this->fields)._unitWireRightAngledTriangleXY = pMVar1;
    func_?(&(this->fields)._unitWireRightAngledTriangleXY,pMVar1);
  }
  return (this->fields)._unitWireRightAngledTriangleXY;
}


/* Mesh get_UnitWireTriangularPrism() */

Mesh * Assembly-CSharp.dll::RTG::MeshPool::MeshPool_get_UnitWireTriangularPrism
                 (MeshPool *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields)._unitWireTriangularPrism;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)pMVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Vector3);
      cRam_? = '\x01';
    }
    color.g = (float)_UNK_?;
    color.r = (float)_UNK_?;
    color.b = (float)_UNK_?;
    color.a = _UNK_?;
    pMVar1 = PrismMesh::PrismMesh_CreateWireTriangularPrism
                       (TypeInfo__UnityEngine__Vector3->static_fields->zeroVector,1.0,1.0,1.0,1.0,
                        1.0,color,(MethodInfo *)0x0);
    (this->fields)._unitWireTriangularPrism = pMVar1;
    func_?(&(this->fields)._unitWireTriangularPrism,pMVar1);
  }
  return (this->fields)._unitWireTriangularPrism;
}

