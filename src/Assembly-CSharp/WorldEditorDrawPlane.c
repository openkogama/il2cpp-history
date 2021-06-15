
/* Void CachePos() */

void Assembly-CSharp.dll::WorldEditorDrawPlane::WorldEditorDrawPlane_CachePos
               (WorldEditorDrawPlane *this,MethodInfo *method)

{
  this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                      ((Component_1 *)this,(MethodInfo *)0x0);
  if (this_00 != (Transform *)0x0) {
    pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localPosition
                       ((Vector3 *)&stack0xfffffff0,this_00,(MethodInfo *)0x0);
    fVar2 = pVVar1->y;
    fVar3 = pVVar1->z;
    (this->fields)._cachedPos.x = pVVar1->x;
    (this->fields)._cachedPos.y = fVar2;
    (this->fields)._cachedPos.z = fVar3;
    return;
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void FollowAvatar() */

void Assembly-CSharp.dll::WorldEditorDrawPlane::WorldEditorDrawPlane_FollowAvatar
               (WorldEditorDrawPlane *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                     ((Component_1 *)this,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_01 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
  if (this_01 != (MainCameraManager *)0x0) {
    this_02 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                        ((Component_1 *)this_01,(MethodInfo *)0x0);
    if (this_02 != (Transform *)0x0) {
      pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                         ((Vector3 *)&stack0xfffffff0,this_02,(MethodInfo *)0x0);
      if (pTVar1 != (Transform *)0x0) {
        pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_InverseTransformPoint
                           ((Vector3 *)&stack0xfffffff0,pTVar1,*pVVar2,(MethodInfo *)0x0);
        pVVar2 = MathFunctions::MathFunctions_RoundVector
                           ((Vector3 *)&stack0xffffffe4,*pVVar2,0,(MethodInfo *)0x0);
        fVar3 = pVVar2->x;
        fVar4 = pVVar2->z;
        this_00 = (this->fields).DrawPlaneVisualization;
        fVar5 = 0.0;
        if (this_00 != (GameObject *)0x0) {
          pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                             (this_00,(MethodInfo *)0x0);
          if (pTVar1 != (Transform *)0x0) {
            value.y = fVar5;
            value.x = fVar3;
            value.z = fVar4;
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                      (pTVar1,value,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void GenerateDrawPlane(GameObject) */

void Assembly-CSharp.dll::WorldEditorDrawPlane::WorldEditorDrawPlane_GenerateDrawPlane
               (WorldEditorDrawPlane *this,GameObject *drawPlane,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (drawPlane != (GameObject *)0x0) {
    this_00 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_47
                        (drawPlane,
                         UnityEngine__MeshFilter_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::MeshFilter>__
                        );
    if (this_00 != (UseInteractorHandler *)0x0) {
      mesh = UnityEngine.CoreModule.dll::UnityEngine::MeshFilter::MeshFilter_get_mesh
                       ((MeshFilter *)this_00,(MethodInfo *)0x0);
      y = (this->fields).DrawPlaneVisualization;
      if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      scale = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                        ((Object_1 *)drawPlane,(Object_1 *)y,(MethodInfo *)0x0);
      WorldEditorDrawPlane_GenerateMesh(this,mesh,scale,(MethodInfo *)0x0);
      return;
    }
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void GenerateMesh(Mesh, Boolean) */

void Assembly-CSharp.dll::WorldEditorDrawPlane::WorldEditorDrawPlane_GenerateMesh
               (WorldEditorDrawPlane *this,Mesh *mesh,bool scale,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  bVar1 = scale != 0;
  _scale = _UNK_?;
  if (bVar1) {
    _scale = (float)(this->fields).MeshScale;
  }
  pVVar2 = (Vector3__Array *)func_?(TypeInfo__UnityEngine__Vector3,4);
  pVStack_3 = pVVar2;
  value = (Int32__Array *)func_?(TypeInfo__System__Int32,6);
  if (pVVar2 == (Vector3__Array *)0x0) goto code_?;
  value_00 = (Vector2__Array *)func_?(TypeInfo__UnityEngine__Vector2,pVVar2->max_length);
  fStack_4 = 0.0;
  uStack_5 = 0;
  func_?(&uStack_5,0x3f000000,0,0xbf000000,0);
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Vector3);
  }
  a_00.z = fStack_4;
  a_00.x = (float)(undefined *)uStack_5;
  a_00.y = (float)uStack_5._4_4_;
  pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                     ((Vector3 *)&stack0xffffff9c,a_00,_scale,(MethodInfo *)0x0);
  fVar7 = pVVar6->y;
  fVar8 = pVVar6->z;
  if (pVVar2->max_length == 0) {
code_?:
    func_?();
    func_?();
code_?:
    func_?();
    func_?();
code_?:
    uStack_5._4_4_ = 0;
    uStack_5._0_4_ = &UNK_?;
    uVar9 = func_?();
    uStack_5 = CONCAT44(uStack_5._4_4_,uVar9);
    func_?();
code_?:
    uVar9 = func_?(0,0);
    func_?(uVar9);
code_?:
    uVar9 = func_?(0,0);
    func_?(uVar9);
code_?:
    uVar9 = func_?(0,0);
    func_?(uVar9);
code_?:
    uVar9 = func_?(0,0);
    func_?(uVar9);
code_?:
    uVar9 = func_?(0,0);
    func_?(uVar9);
code_?:
    uVar9 = func_?(0,0);
    func_?(uVar9);
code_?:
    uVar9 = 0;
    uVar10 = func_?(0,0);
    func_?(uVar10);
code_?:
    uVar9 = func_?(0,uVar9);
    func_?(uVar9);
code_?:
    uVar9 = func_?(0);
    func_?(uVar9);
  }
  else {
    pVVar2->vector[0].x = pVVar6->x;
    pVVar2->vector[0].y = fVar7;
    pVVar2->vector[0].z = fVar8;
    uStack_11 = 0;
    puStack_12 = (undefined *)0x0;
    func_?(&uStack_11,0x3f000000);
    a_01.z = (float)puStack_12;
    a_01.x = (float)(undefined4)uStack_11;
    a_01.y = (float)uStack_11._4_4_;
    pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                       ((Vector3 *)&stack0xffffff9c,a_01,_scale,(MethodInfo *)0x0);
    fVar7 = pVVar6->y;
    fVar8 = pVVar6->z;
    if (pVVar2->max_length < 2) goto code_?;
    pVVar2->vector[1].x = pVVar6->x;
    pVVar2->vector[1].y = fVar7;
    pVVar2->vector[1].z = fVar8;
    fVar8 = 0.0;
    uVar9 = 0;
    func_?();
    a_02.y = _scale;
    a_02.x = (float)uVar9;
    a_02.z = fVar8;
    pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                       ((Vector3 *)&stack0xffffff9c,a_02,_scale,(MethodInfo *)0x0);
    fVar7 = pVVar6->y;
    fVar8 = pVVar6->z;
    fStack_4 = 0.0;
    if (pVVar2->max_length < 3) goto code_?;
    pVVar2->vector[2].x = pVVar6->x;
    pVVar2->vector[2].y = fVar7;
    pVVar2->vector[2].z = fVar8;
    uVar9 = 0;
    uVar10 = 0;
    fVar8 = 0.0;
    uStack_5 = 0xbf00000000000000;
    puStack_12 = (undefined *)0xbf000000;
    uStack_11 = CONCAT44(&stack0xffffffa8,&UNK_?);
    func_?();
    a.y = (float)uVar10;
    a.x = (float)uVar9;
    a.z = fVar8;
    pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                       ((Vector3 *)&stack0xffffff9c,a,_scale,(MethodInfo *)0x0);
    fVar7 = pVVar6->y;
    fVar8 = pVVar6->z;
    if (pVVar2->max_length < 4) goto code_?;
    pVVar2->vector[3].x = pVVar6->x;
    pVVar2->vector[3].y = fVar7;
    pVVar2->vector[3].z = fVar8;
    if (value == (Int32__Array *)0x0) goto code_?;
    if (value->max_length == 0) goto code_?;
    value->vector[0] = 0;
    if (value->max_length < 2) goto code_?;
    value->vector[1] = 1;
    if (value->max_length < 3) goto code_?;
    value->vector[2] = 2;
    if (value->max_length < 4) goto code_?;
    value->vector[3] = 2;
    if (value->max_length < 5) goto code_?;
    value->vector[4] = 3;
    if (value->max_length < 6) goto code_?;
    value->vector[5] = 0;
    if (value_00 == (Vector2__Array *)0x0) {
code_?:
      func_?(0);
      goto code_?;
    }
    uStack_13 = 0;
    func_?(&uStack_13,0,0,0);
    uVar9 = 0;
    if (value_00->max_length == 0) goto code_?;
    value_00->vector[0].x = (float)uStack_13;
    value_00->vector[0].y = uStack_13._4_4_;
    uStack_14 = 0;
    func_?(&uStack_14,0,0x3f800000,0);
    if (value_00->max_length < 2) goto code_?;
    value_00->vector[1].x = (float)uStack_14;
    value_00->vector[1].y = uStack_14._4_4_;
    uStack_15 = 0;
    func_?(&uStack_15,0x3f800000,0x3f800000,0);
    if (2 < value_00->max_length) {
      value_00->vector[2].x = (float)uStack_15;
      value_00->vector[2].y = uStack_15._4_4_;
      uStack_16 = 0;
      func_?(&uStack_16,0x3f800000,0,0);
      if (value_00->max_length < 4) goto code_?;
      value_00->vector[3].x = (float)uStack_16;
      value_00->vector[3].y = uStack_16._4_4_;
      if (mesh != (Mesh *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_set_name
                  ((Object_1 *)mesh,StringLiteral_DrawPlaneMesh,(MethodInfo *)0x0);
        UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_set_vertices
                  (mesh,pVStack_3,(MethodInfo *)0x0);
        UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_set_triangles
                  (mesh,value,(MethodInfo *)0x0);
        UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_set_uv(mesh,value_00,(MethodInfo *)0x0);
        UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_RecalculateBounds
                  (mesh,(MethodInfo *)0x0);
        UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_RecalculateNormals
                  (mesh,(MethodInfo *)0x0);
        return;
      }
      goto code_?;
    }
  }
  uVar9 = func_?(0);
  func_?(uVar9);
code_?:
  uVar9 = func_?(0,0);
  func_?(uVar9);
  pcVar17 = (code *)swi(3);
  (*pcVar17)();
  return;
}


/* Vector3 GetCubePlaceOffset() */

Vector3 * Assembly-CSharp.dll::WorldEditorDrawPlane::WorldEditorDrawPlane_GetCubePlaceOffset
                    (Vector3 *__return_storage_ptr__,WorldEditorDrawPlane *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                      ((Component_1 *)this,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_02 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
  if (this_02 != (MainCameraManager *)0x0) {
    this_03 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                        ((Component_1 *)this_02,(MethodInfo *)0x0);
    if (this_03 != (Transform *)0x0) {
      pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                         ((Vector3 *)&stack0xfffffff0,this_03,(MethodInfo *)0x0);
      if (this_01 != (Transform *)0x0) {
        pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_InverseTransformPoint
                           ((Vector3 *)&stack0xffffffe4,this_01,*pVVar1,(MethodInfo *)0x0);
        __return_storage_ptr___00 = pVVar1->x;
        this_00 = (WorldEditorDrawPlane *)pVVar1->y;
        pVVar1 = WorldEditorDrawPlane_GetOffsetVector
                           ((Vector3 *)__return_storage_ptr___00,this_00,(MethodInfo *)pVVar1->z);
        fStack2 = pVVar1->z;
        fVar3 = pVVar1->x;
        fVar4 = pVVar1->y;
        if (_UNK_? < (float)this_00) {
          iVar5 = 1;
        }
        else {
          iVar5 = -1;
        }
        fStack6 = fVar4;
        if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
          func_?();
          fStack6 = fVar4;
        }
        a.y = fStack6;
        a.x = fVar3;
        a.z = fStack2;
        pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                           ((Vector3 *)&stack0xffffffe4,a,(float)iVar5,(MethodInfo *)0x0);
        _UNK_? = pVVar1->x;
        _UNK_? = pVVar1->y;
        _UNK_? = pVVar1->z;
        return (Vector3 *)&UNK_?;
      }
    }
  }
  func_?();
  pcVar7 = (code *)swi(3);
  pVVar1 = (Vector3 *)(*pcVar7)();
  return pVVar1;
}


/* Boolean GetCubePosOnDrawplane(GameObject, IntVector ByRef) */

bool Assembly-CSharp.dll::WorldEditorDrawPlane::WorldEditorDrawPlane_GetCubePosOnDrawplane
               (WorldEditorDrawPlane *this,GameObject *gameObject,IntVector *intVectorHitPos,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  fVar1 = 0.0;
  fVar2 = 0.0;
  uVar3._4_4_ = 0.0;
  bVar4 = WorldEditorDrawPlane_Pick(this,(Vector3 *)&stack0xffffffdc,(MethodInfo *)0x0);
  this_00 = (this->fields)._targetGameObject;
  if ((this_00 != (GameObject *)0x0) &&
     (pTVar5 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                         (this_00,(MethodInfo *)0x0), pTVar5 != (Transform *)0x0)) {
    VVar6.y = uVar3._4_4_;
    VVar6.x = fVar2;
    VVar6.z = fVar1;
    pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_InverseTransformPoint
                       ((Vector3 *)&fStack_8,pTVar5,VVar6,(MethodInfo *)0x0);
    uVar9._0_4_ = pVVar7->x;
    uStack_10 = pVVar7->y;
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    VStack_11.z = (float)&UNK_?;
    pTVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                       ((Component_1 *)this,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?();
    }
    this_01 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
    if ((this_01 != (MainCameraManager *)0x0) &&
       (this_02 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                            ((Component_1 *)this_01,(MethodInfo *)0x0), this_02 != (Transform *)0x0)
       ) {
      pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                         ((Vector3 *)&stack0xffffffd0,this_02,(MethodInfo *)0x0);
      uVar9 = uVar9 & 0xffffffff00000000;
      if (pTVar5 != (Transform *)0x0) {
        pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_InverseTransformPoint
                           ((Vector3 *)&stack0xffffffc4,pTVar5,*pVVar7,(MethodInfo *)0x0);
        uVar9 = uVar9 & 0xffffffff00000000;
        uVar12 = pVVar7->x;
        uVar13 = pVVar7->y;
        fStack_8 = (float)uVar12;
        puStack_14 = (undefined *)uVar13;
        pVVar7 = WorldEditorDrawPlane_GetOffsetVector(&VStack_11,this,(MethodInfo *)0x0);
        this = (WorldEditorDrawPlane *)pVVar7->z;
        uVar15 = pVVar7->x;
        fVar2 = pVVar7->y;
        if (_UNK_? < (float)puStack_14) {
          iVar16 = 1;
        }
        else {
          iVar16 = -1;
        }
        puStack_14 = (undefined *)uVar15;
        if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
          func_?();
        }
        puVar17 = puStack_14;
        fVar18 = fVar2;
        VVar6.x = (float)puVar17;
        VVar6 = (Vector3)CONCAT84(uVar19,VVar6.x);
        pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                           ((Vector3 *)&stack0xffffffac,VVar6,(float)iVar16,(MethodInfo *)0x0);
        uVar3._0_4_ = pVVar7->x;
        uVar3._4_4_ = pVVar7->y;
        fVar2 = pVVar7->z;
        puStack_14 = (undefined *)(undefined4)uVar3;
        if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
          func_?();
          uVar3 = CONCAT44(uVar3._4_4_,puStack_14);
        }
        a.z = (float)this;
        uStack_10 = (undefined4)(uVar9 >> 0x20);
        a.x = (float)(undefined4)uVar9;
        a.y = (float)uStack_10;
        b.z = fVar2;
        b.x = (float)(int)uVar3;
        b.y = (float)(int)((ulonglong)uVar3 >> 0x20);
        fStack20 = (float)this;
        pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                           ((Vector3 *)&stack0xffffffac,a,b,(MethodInfo *)0x0);
        MathFunctions::MathFunctions_RoundVector
                  ((Vector3 *)&stack0xffffffac,*pVVar7,0,(MethodInfo *)0x0);
        func_?();
        return bVar4;
      }
    }
  }
  func_?();
  pcVar21 = (code *)swi(3);
  bVar4 = (*pcVar21)();
  return bVar4;
}


/* Vector3 GetDirectionVector() */

Vector3 * Assembly-CSharp.dll::WorldEditorDrawPlane::WorldEditorDrawPlane_GetDirectionVector
                    (Vector3 *__return_storage_ptr__,WorldEditorDrawPlane *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                      ((Component_1 *)this,(MethodInfo *)0x0);
  if (this_00 != (Transform *)0x0) {
    pQVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localRotation
                       ((Quaternion *)&stack0xffffffd8,this_00,(MethodInfo *)0x0);
    fVar2 = pQVar1->x;
    if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
      func_?();
    }
    puVar3 = &UNK_?;
    pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_up
                       ((Vector3 *)&stack0xffffffe8,(MethodInfo *)0x0);
    uVar5 = pVVar4->x;
    uVar6 = pVVar4->y;
    point = *pVVar4;
    if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
      func_?();
    }
    rotation.y = (float)puVar3;
    rotation.x = fVar2;
    rotation.z = (float)uVar5;
    rotation.w = (float)uVar6;
    pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                       ((Vector3 *)&stack0xffffffe8,rotation,point,(MethodInfo *)0x0);
    fVar7 = pVVar4->y;
    fVar2 = pVVar4->z;
    __return_storage_ptr__->x = pVVar4->x;
    __return_storage_ptr__->y = fVar7;
    __return_storage_ptr__->z = fVar2;
    return __return_storage_ptr__;
  }
  func_?();
  pcVar8 = (code *)swi(3);
  pVVar4 = (Vector3 *)(*pcVar8)();
  return pVVar4;
}


/* Vector3 GetOffsetVector() */

Vector3 * Assembly-CSharp.dll::WorldEditorDrawPlane::WorldEditorDrawPlane_GetOffsetVector
                    (Vector3 *__return_storage_ptr__,WorldEditorDrawPlane *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pVVar1 = WorldEditorDrawPlane_GetDirectionVector
                     ((Vector3 *)&stack0xffffffe8,this,(MethodInfo *)0x0);
  a = *pVVar1;
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    func_?();
  }
  pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply_1
                     ((Vector3 *)&stack0xffffffe8,0.5,a,(MethodInfo *)0x0);
  fVar2 = pVVar1->y;
  fVar3 = pVVar1->z;
  __return_storage_ptr__->x = pVVar1->x;
  __return_storage_ptr__->y = fVar2;
  __return_storage_ptr__->z = fVar3;
  return __return_storage_ptr__;
}


/* Void MoveDrawPlane(Int32) */

void Assembly-CSharp.dll::WorldEditorDrawPlane::WorldEditorDrawPlane_MoveDrawPlane
               (WorldEditorDrawPlane *this,int32_t dir,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  if (fVar1 - (this->fields).lastMovePlaneDelta <= _UNK_?) {
    return;
  }
  pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                     ((Component_1 *)this,(MethodInfo *)0x0);
  if (pTVar2 != (Transform *)0x0) {
    pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localPosition
                       ((Vector3 *)&stack0xfffffff0,pTVar2,(MethodInfo *)0x0);
    fVar1 = pVVar3->z;
    pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                       ((Component_1 *)this,(MethodInfo *)0x0);
    if (pTVar2 != (Transform *)0x0) {
      pQVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localRotation
                         ((Quaternion *)&puStack_5,pTVar2,(MethodInfo *)0x0);
      puStack_5 = (undefined *)pQVar4->x;
      fVar6 = pQVar4->y;
      fVar7 = pQVar4->z;
      fVar8 = pQVar4->w;
      if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
        func_?();
      }
      pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_up
                         ((Vector3 *)&stack0xffffffdc,(MethodInfo *)0x0);
      uVar9 = pVVar3->y;
      fVar10 = pVVar3->z;
      VVar11 = *pVVar3;
      if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
        func_?();
      }
      puVar12 = puStack_5;
      rotation.y = fVar6;
      rotation.x = (float)puVar12;
      rotation.z = fVar7;
      rotation.w = fVar8;
      pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                         ((Vector3 *)&stack0xffffffdc,rotation,VVar11,(MethodInfo *)0x0);
      pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                         ((Vector3 *)&stack0xffffffdc,*pVVar3,(float)dir,(MethodInfo *)0x0);
      VVar11.y = fVar10;
      VVar11.x = (float)uVar9;
      VVar11.z = fVar1;
      pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                         ((Vector3 *)&stack0xffffffdc,VVar11,*pVVar3,(MethodInfo *)0x0);
      uVar13 = pVVar3->x;
      uVar14 = pVVar3->y;
      fVar1 = pVVar3->z;
      pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                         ((Component_1 *)this,(MethodInfo *)0x0);
      if (pTVar2 != (Transform *)0x0) {
        value.y = (float)uVar14;
        value.x = (float)uVar13;
        value.z = fVar1;
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                  (pTVar2,value,(MethodInfo *)0x0);
        WorldEditorDrawPlane_UpdateEditorPlanePosition(this,(MethodInfo *)0x0);
        WorldEditorDrawPlane_UpdateAltitude(this,(MethodInfo *)0x0);
        fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
        (this->fields).lastMovePlaneDelta = fVar1;
        return;
      }
    }
  }
  func_?();
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
  return;
}


/* Boolean Pick(Vector3 ByRef) */

bool Assembly-CSharp.dll::WorldEditorDrawPlane::WorldEditorDrawPlane_Pick
               (WorldEditorDrawPlane *this,Vector3 *hit,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pCVar1 = (this->fields).mainCamera;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)pCVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    pCVar1 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_main((MethodInfo *)0x0);
    (this->fields).mainCamera = pCVar1;
  }
  pCVar1 = (this->fields).mainCamera;
  if ((((uint)(TypeInfo__MVInputWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVInputWrapper->_1).cctor_started == 0)) {
    func_?();
  }
  UnityStandardAssets::CrossPlatformInput::PlatformSpecific::StandaloneInput::
  StandaloneInput_MousePosition
            ((Vector3 *)&stack0xffffffc8,(StandaloneInput *)0x0,in_stack_3);
  UnityStandardAssets::CrossPlatformInput::PlatformSpecific::StandaloneInput::
  StandaloneInput_MousePosition
            ((Vector3 *)&stack0xffffffec,(StandaloneInput *)0x0,in_stack_3);
  uVar4 = 0;
  uVar5 = 0;
  fVar6 = 0.0;
  func_?();
  if (pCVar1 != (Camera *)0x0) {
    pos.y = (float)uVar5;
    pos.x = (float)uVar4;
    pos.z = fVar6;
    pRVar7 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_ScreenPointToRay_2
                       ((Ray *)&pPStack_8,pCVar1,pos,(MethodInfo *)0x0);
    pIVar9 = (InputToPlayerMovementAndroid__Class *)(pRVar7->m_Origin).x;
    pMVar10 = (MonitorData *)(pRVar7->m_Origin).y;
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    if ((((uint)(TypeInfo__UnityEngine__EventSystems__EventSystem->vtable).Equals.methodPtr &
         0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__EventSystems__EventSystem->_1).cctor_started == 0)) {
      func_?();
    }
    this_00 = UnityEngine.UI.dll::UnityEngine::EventSystems::EventSystem::EventSystem_get_current
                        ((MethodInfo *)0x0);
    if (this_00 != (EventSystem *)0x0) {
      bVar2 = UnityEngine.UI.dll::UnityEngine::EventSystems::EventSystem::
              EventSystem_IsPointerOverGameObject(this_00,(MethodInfo *)0x0);
      if ((bVar2 == 0) && ((this->fields).isActive != 0)) {
        pPStack_8 = &(this->fields).editorPlane;
        pIStack_11 = pIVar9;
        pMStack_12 = pMVar10;
        cVar13 = func_?();
        if (cVar13 != '\0') {
          puVar14 = (undefined8 *)func_?();
          fVar6 = *(float *)(puVar14 + 1);
          uVar4 = (undefined4)*puVar14;
          InputToPlayerMovementAndroid::InputToPlayerMovementAndroid_get_Direction
                    ((Vector3 *)&stack0xffffffec,(InputToPlayerMovementAndroid *)&stack0xffffff98,
                     (MethodInfo *)0x0);
          puVar14 = (undefined8 *)func_?();
          uVar15 = *puVar14;
          fVar16 = *(float *)(puVar14 + 1);
          fVar17 = (float)uVar15;
          fVar18 = (float)((ulonglong)uVar15 >> 0x20);
          if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0)
             && ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
            func_?();
            uVar15 = CONCAT44(fVar18,fVar17);
          }
          a.z = fVar16;
          a.x = (float)(int)uVar15;
          a.y = (float)(int)((ulonglong)uVar15 >> 0x20);
          pVVar19 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                             ((Vector3 *)&stack0xffffffbc,a,0.0,(MethodInfo *)0x0);
          uVar20 = pVVar19->x;
          a_00.y = (float)uVar20;
          a_00.x = (float)uVar4;
          a_00.z = fVar6;
          pVVar19 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                             ((Vector3 *)&stack0xffffffbc,a_00,*pVVar19,(MethodInfo *)0x0);
          fVar16 = pVVar19->y;
          fVar6 = pVVar19->z;
          hit->x = pVVar19->x;
          hit->y = fVar16;
          hit->z = fVar6;
          return 1;
        }
      }
      return 0;
    }
  }
  func_?();
  pcVar21 = (code *)swi(3);
  bVar2 = (*pcVar21)();
  return bVar2;
}


/* Boolean RayCast(Ray, Vector3 ByRef, Boolean) */

bool Assembly-CSharp.dll::WorldEditorDrawPlane::WorldEditorDrawPlane_RayCast
               (WorldEditorDrawPlane *this,Ray ray,Vector3 *hit,bool ignoreActiveFlag,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  fStack_1 = 0.0;
  if ((((uint)(TypeInfo__UnityEngine__EventSystems__EventSystem->vtable).Equals.methodPtr &
       0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__EventSystems__EventSystem->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__EventSystems__EventSystem);
  }
  this_00 = UnityEngine.UI.dll::UnityEngine::EventSystems::EventSystem::EventSystem_get_current
                      ((MethodInfo *)0x0);
  if (this_00 != (EventSystem *)0x0) {
    bVar2 = UnityEngine.UI.dll::UnityEngine::EventSystems::EventSystem::
            EventSystem_IsPointerOverGameObject(this_00,(MethodInfo *)0x0);
    if ((bVar2 == 0) && (((this->fields).isActive != 0 || (ignoreActiveFlag != 0)))) {
      cVar3 = func_?(&(this->fields).editorPlane,ray.m_Origin.x,ray.m_Origin.y,
                              ray.m_Origin.z,ray.m_Direction.x,ray.m_Direction._4_8_,&fStack_1);
      if (cVar3 != '\0') {
        pRVar4 = &ray;
        puVar5 = &stack0xffffffe8;
        iVar6 = func_?();
        fVar7 = *(float *)(iVar6 + 8);
        InputToPlayerMovementAndroid::InputToPlayerMovementAndroid_get_Direction
                  ((Vector3 *)&stack0xffffffe8,(InputToPlayerMovementAndroid *)&ray,
                   (MethodInfo *)0x0);
        puVar8 = (undefined8 *)func_?(&stack0xffffffc8,&stack0xffffffd4,0,puVar5,pRVar4);
        d = fStack_1;
        uVar9 = *puVar8;
        fVar10 = *(float *)(puVar8 + 1);
        if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
          func_?();
        }
        a.z = fVar10;
        a.x = (float)uVar9;
        a.y = SUB84(uVar9,4);
        pVVar11 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                            ((Vector3 *)&stack0xffffffc8,a,d,(MethodInfo *)0x0);
        uVar12 = pVVar11->x;
        uVar13 = pVVar11->y;
        a_00.y = (float)uVar13;
        a_00.x = (float)uVar12;
        a_00.z = fVar7;
        pVVar11 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                            ((Vector3 *)&stack0xffffffc8,a_00,*pVVar11,(MethodInfo *)0x0);
        fVar10 = pVVar11->y;
        fVar7 = pVVar11->z;
        hit->x = pVVar11->x;
        hit->y = fVar10;
        hit->z = fVar7;
        return 1;
      }
    }
    return 0;
  }
  func_?();
  pcVar14 = (code *)swi(3);
  bVar2 = (*pcVar14)();
  return bVar2;
}


/* Void RestorePos() */

void Assembly-CSharp.dll::WorldEditorDrawPlane::WorldEditorDrawPlane_RestorePos
               (WorldEditorDrawPlane *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  VStack_1.y = (this->fields)._cachedPos.x;
  VStack_1.z = (this->fields)._cachedPos.y;
  fVar2 = (this->fields)._cachedPos.z;
  this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                      ((Component_1 *)this,(MethodInfo *)0x0);
  if (this_00 != (Transform *)0x0) {
    value.z = fVar2;
    value.x = VStack_1.y;
    value.y = VStack_1.z;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
              (this_00,value,(MethodInfo *)0x0);
    WorldEditorDrawPlane_UpdateEditorPlanePosition(this,(MethodInfo *)0x0);
    WorldEditorDrawPlane_UpdateAltitude(this,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
      func_?();
    }
    pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_zero
                       (&VStack_1,(MethodInfo *)0x0);
    fVar4 = pVVar3->y;
    fVar2 = pVVar3->z;
    (this->fields)._cachedPos.x = pVVar3->x;
    (this->fields)._cachedPos.y = fVar4;
    (this->fields)._cachedPos.z = fVar2;
    return;
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void ReturnDrawPlaneToLandscape() */

void Assembly-CSharp.dll::WorldEditorDrawPlane::WorldEditorDrawPlane_ReturnDrawPlaneToLandscape
               (WorldEditorDrawPlane *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (this_00 != (MVWorldObjectClientManager *)0x0) {
    this_01 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetSingletonWorldObject_4
                        (this_00,
                         MVCubeModelPrototypeTerrain_MethodInfo__MVWorldObjectClientManager__GetSingletonWorldObject<MVCubeModelPrototypeTerrain>__
                        );
    if (this_01 != (MVRoundCube *)0x0) {
      value_00 = DayNightCycle::DayNightCycle_get_CurrentMoonParam
                           ((DayNightCycle *)this_01,(MethodInfo *)0x0);
      WorldEditorDrawPlane_set_TargetGameObject(this,(GameObject *)value_00,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      value = (this->fields)._cachedPos;
      this_02 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                          ((Component_1 *)this,(MethodInfo *)0x0);
      if (this_02 != (Transform *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                  (this_02,value,(MethodInfo *)0x0);
        WorldEditorDrawPlane_UpdateEditorPlanePosition(this,(MethodInfo *)0x0);
        WorldEditorDrawPlane_UpdateAltitude(this,(MethodInfo *)0x0);
        if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
          func_?();
        }
        pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_zero
                           ((Vector3 *)&stack0xfffffff0,(MethodInfo *)0x0);
        fVar2 = pVVar1->y;
        fVar3 = pVVar1->z;
        (this->fields)._cachedPos.x = pVVar1->x;
        (this->fields)._cachedPos.y = fVar2;
        (this->fields)._cachedPos.z = fVar3;
        return;
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void SetDrawPlaneHeight(Single) */

void Assembly-CSharp.dll::WorldEditorDrawPlane::WorldEditorDrawPlane_SetDrawPlaneHeight
               (WorldEditorDrawPlane *this,float height,MethodInfo *method)

{
  this_00 = this;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                     ((Component_1 *)this,(MethodInfo *)0x0);
  if (pTVar1 != (Transform *)0x0) {
    pQVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localRotation
                       ((Quaternion *)&stack0xffffffd8,pTVar1,(MethodInfo *)0x0);
    puVar3 = (undefined *)pQVar2->w;
    if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
      func_?();
    }
    puVar4 = &UNK_?;
    pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_up
                       ((Vector3 *)&stack0xffffffe8,(MethodInfo *)0x0);
    uVar6 = pVVar5->x;
    uVar7 = pVVar5->y;
    VVar8 = *pVVar5;
    if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
      puVar3 = &UNK_?;
      func_?();
    }
    rotation.y = (float)uVar6;
    rotation.x = (float)puVar4;
    rotation.z = (float)uVar7;
    rotation.w = (float)puVar3;
    pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                       ((Vector3 *)&stack0xffffffe8,rotation,VVar8,(MethodInfo *)0x0);
    uVar9 = pVVar5->x;
    uVar10 = pVVar5->y;
    this = (WorldEditorDrawPlane *)pVVar5->z;
    fVar11 = (float)uVar10;
    VVar8.x = (float)uVar9;
    VVar8 = (Vector3)CONCAT84(uVar12,VVar8.x);
    pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                       ((Vector3 *)&stack0xffffffe8,VVar8,height,(MethodInfo *)0x0);
    VVar8 = *pVVar5;
    pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                       ((Component_1 *)this_00,(MethodInfo *)0x0);
    if (pTVar1 != (Transform *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                (pTVar1,VVar8,(MethodInfo *)0x0);
      WorldEditorDrawPlane_UpdateEditorPlanePosition(this_00,(MethodInfo *)0x0);
      WorldEditorDrawPlane_UpdateAltitude(this_00,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* Void SetLayer(Int32) */

void Assembly-CSharp.dll::WorldEditorDrawPlane::WorldEditorDrawPlane_SetLayer
               (WorldEditorDrawPlane *this,int32_t layer,MethodInfo *method)

{
  this_00 = (this->fields).DrawPlaneVisualization;
  if ((this_00 == (GameObject *)0x0) ||
     (UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_set_layer
                (this_00,layer,(MethodInfo *)0x0),
     (this->fields).DrawPlaneCursor == (GameObject *)0x0)) {
    func_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) && (pcVar1 = (code *)func_?(), pcVar1 == (code *)0x0))
  {
    uVar2 = func_?(&UNK_?);
    func_?(uVar2);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
  (*pcRam_?)();
  return;
}


/* Void SetToCameraPos() */

void Assembly-CSharp.dll::WorldEditorDrawPlane::WorldEditorDrawPlane_SetToCameraPos
               (WorldEditorDrawPlane *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).mainCamera;
  if ((this_00 != (Camera *)0x0) &&
     (this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                          ((Component_1 *)this_00,(MethodInfo *)0x0), this_01 != (Transform *)0x0))
  {
    pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_forward
                       ((Vector3 *)&stack0xfffffff0,this_01,(MethodInfo *)0x0);
    uVar2 = pVVar1->x;
    uVar3 = pVVar1->y;
    uVar4._0_4_ = _UNK_?;
    if ((float)uVar2 <= _UNK_?) {
      uVar4._0_4_ = _UNK_?;
    }
    uVar4._4_4_ = _UNK_?;
    if (_UNK_? < (float)uVar3) {
      uVar4._4_4_ = _UNK_?;
    }
    fVar5 = _UNK_?;
    if (pVVar1->z <= _UNK_?) {
      fVar5 = _UNK_?;
    }
    fVar6 = 0.0;
    fStack_7 = (float)uVar2;
    puStack_8 = (undefined *)uVar3;
    func_?(&stack0xffffffd8,(float)uVar4,uVar4._4_4_);
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    this_02 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                        ((MethodInfo *)0x0);
    if (this_02 != (SpawnRoleDataMediator *)0x0) {
      s = (SpawnRoleVariable_1_UnityEngine_Vector3_ *)
          PlayerListsLayout+<CreatePlayerLists>c__Iterator0::
          PlayerListsLayout_CreatePlayerLists_c_Iterator0_System_Collections_IEnumerator_get_Current
                    ((PlayerListsLayout_CreatePlayerLists_c_Iterator0 *)this_02,(MethodInfo *)0x0);
      pVVar1 = Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::
               SpawnRoleVariable`1[UnityEngine::Vector3]::
               SpawnRoleVariable_1_UnityEngine_Vector3__op_Implicit
                         ((Vector3 *)&fStack_7,s,
                          MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<UnityEngine::Vector3>__op_Implicit_MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<UnityEngine::Vector3>_
                         );
      uVar4._0_4_ = pVVar1->x;
      uVar4._4_4_ = pVVar1->y;
      fVar9 = pVVar1->z;
      puStack_8 = (undefined *)fVar5;
      if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
        func_?();
      }
      a.z = fVar9;
      a.x = (float)(int)uVar4;
      a.y = (float)(int)((ulonglong)uVar4 >> 0x20);
      b.y = fVar6;
      b.x = (float)puStack_8;
      b.z = 0.0;
      pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                         ((Vector3 *)&fStack_7,a,b,(MethodInfo *)0x0);
      WorldEditorDrawPlane_SetToGridAlignedPos(this,*pVVar1,(MethodInfo *)0x0);
      return;
    }
  }
  func_?(0);
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void SetToGridAlignedPos(Vector3) */

void Assembly-CSharp.dll::WorldEditorDrawPlane::WorldEditorDrawPlane_SetToGridAlignedPos
               (WorldEditorDrawPlane *this,Vector3 pos,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields)._targetGameObject;
  if (this_00 != (GameObject *)0x0) {
    pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                       (this_00,(MethodInfo *)0x0);
    if (pTVar1 != (Transform *)0x0) {
      pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_InverseTransformPoint
                         ((Vector3 *)&stack0xffffffe4,pTVar1,pos,(MethodInfo *)0x0);
      pVVar2 = MathFunctions::MathFunctions_RoundVector
                         ((Vector3 *)&stack0xffffffe4,*pVVar2,0,(MethodInfo *)0x0);
      uVar3._0_4_ = pVVar2->x;
      uVar3._4_4_ = pVVar2->y;
      fVar4 = pVVar2->z;
      pVVar2 = WorldEditorDrawPlane_GetDirectionVector
                         ((Vector3 *)&stack0xffffffe4,this,(MethodInfo *)0x0);
      VVar5.z = fVar4;
      VVar5.x = (float)uVar3;
      VVar5.y = SUB84(uVar3,4);
      pVVar2 = MathFunctions::MathFunctions_Multiply
                         ((Vector3 *)&stack0xfffffff0,VVar5,*pVVar2,(MethodInfo *)0x0);
      VVar5 = *pVVar2;
      pVVar2 = WorldEditorDrawPlane_GetOffsetVector
                         ((Vector3 *)&stack0xffffffd8,this,(MethodInfo *)0x0);
      uVar6._0_4_ = pVVar2->x;
      uVar6._4_4_ = pVVar2->y;
      fVar4 = pVVar2->z;
      if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
        func_?();
      }
      b.z = fVar4;
      b.x = (float)uVar6;
      b.y = SUB84(uVar6,4);
      pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                         ((Vector3 *)&stack0xffffffd8,VVar5,b,(MethodInfo *)0x0);
      VVar5 = *pVVar2;
      pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                         ((Component_1 *)this,(MethodInfo *)0x0);
      if (pTVar1 != (Transform *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                  (pTVar1,VVar5,(MethodInfo *)0x0);
        WorldEditorDrawPlane_UpdateEditorPlanePosition(this,(MethodInfo *)0x0);
        WorldEditorDrawPlane_UpdateAltitude(this,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?(0);
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void SetToTargetGameObjectZero() */

void Assembly-CSharp.dll::WorldEditorDrawPlane::WorldEditorDrawPlane_SetToTargetGameObjectZero
               (WorldEditorDrawPlane *this,MethodInfo *method)

{
  this_00 = (this->fields)._targetGameObject;
  if (this_00 != (GameObject *)0x0) {
    this_01 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                        (this_00,(MethodInfo *)0x0);
    if (this_01 != (Transform *)0x0) {
      pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                         ((Vector3 *)&stack0xfffffff0,this_01,(MethodInfo *)0x0);
      WorldEditorDrawPlane_SetToGridAlignedPos(this,*pVVar1,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void Start() */

void Assembly-CSharp.dll::WorldEditorDrawPlane::WorldEditorDrawPlane_Start
               (WorldEditorDrawPlane *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pCVar1 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_main((MethodInfo *)0x0);
  (this->fields).mainCamera = pCVar1;
  WorldEditorDrawPlane_GenerateDrawPlane
            (this,(this->fields).DrawPlaneVisualization,(MethodInfo *)0x0);
  pGVar2 = (this->fields).DrawPlaneVisualization;
  if (pGVar2 != (GameObject *)0x0) {
    pUVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_47
                       (pGVar2,
                        UnityEngine__Renderer_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::Renderer>__
                       );
    if (pUVar3 != (UseInteractorHandler *)0x0) {
      pMVar4 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material
                         ((Renderer *)pUVar3,(MethodInfo *)0x0);
      puVar5 = &stack0xfffffff4;
      fVar6 = (float)(this->fields).MeshScale;
      func_?();
      if (pMVar4 != (Material *)0x0) {
        value.y = fVar6;
        value.x = (float)puVar5;
        UnityEngine.CoreModule.dll::UnityEngine::Material::Material_set_mainTextureScale
                  (pMVar4,value,(MethodInfo *)0x0);
        pGVar2 = (this->fields).DrawPlaneVisualization;
        if (pGVar2 != (GameObject *)0x0) {
          pUVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_47
                             (pGVar2,
                              UnityEngine__Renderer_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::Renderer>__
                             );
          if (pUVar3 != (UseInteractorHandler *)0x0) {
            pMVar4 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material
                               ((Renderer *)pUVar3,(MethodInfo *)0x0);
            fVar6 = 0.0;
            puVar7 = &UNK_?;
            func_?();
            if (pMVar4 != (Material *)0x0) {
              value_00.y = (float)puVar7;
              value_00.x = fVar6;
              UnityEngine.CoreModule.dll::UnityEngine::Material::Material_set_mainTextureOffset
                        (pMVar4,value_00,(MethodInfo *)0x0);
              WorldEditorDrawPlane_GenerateDrawPlane
                        (this,(this->fields).DrawPlaneCursor,(MethodInfo *)0x0);
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


/* Void Update() */

void Assembly-CSharp.dll::WorldEditorDrawPlane::WorldEditorDrawPlane_Update
               (WorldEditorDrawPlane *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Vector3);
  }
  pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_zero
                     ((Vector3 *)&stack0xffffffe4,(MethodInfo *)0x0);
  fVar2 = pVVar1->z;
  bVar3 = WorldEditorDrawPlane_Pick(this,(Vector3 *)&stack0xfffffff0,(MethodInfo *)0x0);
  if (bVar3 == 0) {
    pGVar4 = (this->fields).DrawPlaneCursor;
    if (pGVar4 == (GameObject *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar4,0,(MethodInfo *)0x0);
  }
  else {
    pTVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                       ((Component_1 *)this,(MethodInfo *)0x0);
    if (pTVar5 == (Transform *)0x0) goto code_?;
    fVar6 = 0.0;
    pTVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                       ((Component_1 *)pTVar5,(MethodInfo *)0x0);
    if (pTVar7 == (Transform *)0x0) goto code_?;
    position.y = fVar6;
    position.x = (float)pTVar5;
    position.z = fVar2;
    pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_InverseTransformPoint
                       ((Vector3 *)&stack0xffffffe4,pTVar7,position,(MethodInfo *)0x0);
    pVVar1 = MathFunctions::MathFunctions_RoundVector
                       ((Vector3 *)&stack0xffffffe4,*pVVar1,0,(MethodInfo *)0x0);
    fVar2 = pVVar1->x;
    fVar6 = pVVar1->y;
    fVar8 = pVVar1->z;
    pGVar4 = (this->fields).DrawPlaneCursor;
    if (pGVar4 == (GameObject *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar4,1,(MethodInfo *)0x0);
    pGVar4 = (this->fields).DrawPlaneCursor;
    if (pGVar4 == (GameObject *)0x0) goto code_?;
    pTVar5 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                       (pGVar4,(MethodInfo *)0x0);
    if (pTVar5 == (Transform *)0x0) goto code_?;
    value.y = fVar6;
    value.x = fVar2;
    value.z = fVar8;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
              (pTVar5,value,(MethodInfo *)0x0);
  }
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pTVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                     ((Component_1 *)this,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?();
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
  if (this_00 != (MainCameraManager *)0x0) {
    pTVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                       ((Component_1 *)this_00,(MethodInfo *)0x0);
    if (pTVar7 != (Transform *)0x0) {
      pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                         ((Vector3 *)&stack0xffffffe4,pTVar7,(MethodInfo *)0x0);
      if (pTVar5 != (Transform *)0x0) {
        pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_InverseTransformPoint
                           ((Vector3 *)&stack0xffffffe4,pTVar5,*pVVar1,(MethodInfo *)0x0);
        pVVar1 = MathFunctions::MathFunctions_RoundVector
                           ((Vector3 *)&stack0xffffffe4,*pVVar1,0,(MethodInfo *)0x0);
        fVar8 = pVVar1->x;
        fVar2 = pVVar1->z;
        pGVar4 = (this->fields).DrawPlaneVisualization;
        fVar6 = 0.0;
        if (pGVar4 != (GameObject *)0x0) {
          pTVar5 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                             (pGVar4,(MethodInfo *)0x0);
          if (pTVar5 != (Transform *)0x0) {
            value_00.y = fVar6;
            value_00.x = fVar8;
            value_00.z = fVar2;
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                      (pTVar5,value_00,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void UpdateAltitude() */

void Assembly-CSharp.dll::WorldEditorDrawPlane::WorldEditorDrawPlane_UpdateAltitude
               (WorldEditorDrawPlane *this,MethodInfo *method)

{
  pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                     ((Component_1 *)this,(MethodInfo *)0x0);
  if (pTVar1 != (Transform *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localPosition
              ((Vector3 *)&stack0xffffffd8,pTVar1,(MethodInfo *)0x0);
    pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                       ((Component_1 *)this,(MethodInfo *)0x0);
    if (pTVar1 != (Transform *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localPosition
                ((Vector3 *)&stack0xffffffd8,pTVar1,(MethodInfo *)0x0);
      pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                         ((Component_1 *)this,(MethodInfo *)0x0);
      if (pTVar1 != (Transform *)0x0) {
        pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localPosition
                           ((Vector3 *)&stack0xffffffcc,pTVar1,(MethodInfo *)0x0);
        this_00 = (UnityAction_1_System_Boolean_ *)(this->fields).OnAltitudeChanged;
        iVar3 = (int)(((float)pTVar1 + 3.5324254e-29 + pVVar2->z) - _UNK_?);
        (this->fields)._altitude = iVar3;
        if (this_00 != (UnityAction_1_System_Boolean_ *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Boolean]::
          UnityAction_1_System_Boolean__Invoke(this_00,(bool)iVar3,(MethodInfo *)0x0);
        }
        return;
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void UpdateEditorPlanePosition() */

void Assembly-CSharp.dll::WorldEditorDrawPlane::WorldEditorDrawPlane_UpdateEditorPlanePosition
               (WorldEditorDrawPlane *this,MethodInfo *method)

{
  uVar1 = CONCAT44(unaff_ESI,unaff_EDI);
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  func_?(&fStack_2,0,0x40,uVar1);
  uStack_3 = 0;
  uStack_4 = 0;
  func_?(&fStack_5,0,0x40);
  pTVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                     ((Component_1 *)this,(MethodInfo *)0x0);
  if (pTVar6 != (Transform *)0x0) {
    pMVar7 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localToWorldMatrix
                       ((Matrix4x4 *)&stack0xffffff18,pTVar6,(MethodInfo *)0x0);
    fStack_2 = pMVar7->m00;
    fStack_8 = pMVar7->m10;
    fStack_9 = pMVar7->m20;
    fStack_10 = pMVar7->m30;
    fStack_11 = pMVar7->m01;
    fStack_12 = pMVar7->m11;
    fStack_13 = pMVar7->m21;
    fStack_14 = pMVar7->m31;
    fStack_15 = pMVar7->m02;
    fStack_16 = pMVar7->m12;
    fStack_17 = pMVar7->m22;
    fStack_18 = pMVar7->m32;
    fStack_19 = pMVar7->m03;
    fStack_20 = pMVar7->m13;
    fStack_21 = pMVar7->m23;
    fStack_22 = pMVar7->m33;
    if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_up(&VStack_23,(MethodInfo *)0x0);
    pfVar24 = &fStack_2;
    pVVar25 = &VStack_23;
    puVar26 = (undefined8 *)func_?();
    uStack_4 = *puVar26;
    uStack_3 = *(undefined4 *)(puVar26 + 1);
    puVar26 = (undefined8 *)func_?(&VStack_27,&uStack_4,0,pVVar25,pfVar24);
    VStack_23._4_8_ = *puVar26;
    uVar28 = *(undefined4 *)(puVar26 + 1);
    pTVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                       ((Component_1 *)this,(MethodInfo *)0x0);
    if (pTVar6 != (Transform *)0x0) {
      pMVar7 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localToWorldMatrix
                         ((Matrix4x4 *)&stack0xffffff18,pTVar6,(MethodInfo *)0x0);
      fStack_5 = pMVar7->m00;
      fStack_29 = pMVar7->m10;
      fStack_30 = pMVar7->m20;
      fStack_31 = pMVar7->m30;
      fStack_32 = pMVar7->m01;
      fStack_33 = pMVar7->m11;
      fStack_34 = pMVar7->m21;
      fStack_35 = pMVar7->m31;
      fStack_36 = pMVar7->m02;
      fStack_37 = pMVar7->m12;
      fStack_38 = pMVar7->m22;
      fStack_39 = pMVar7->m32;
      fStack_40 = pMVar7->m03;
      fStack_41 = pMVar7->m13;
      fStack_42 = pMVar7->m23;
      fStack_43 = pMVar7->m33;
      UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_zero
                (&VStack_27,(MethodInfo *)0x0);
      func_?();
      func_?(&(this->fields).editorPlane,VStack_23._4_8_,uVar28);
      return;
    }
  }
  func_?();
  pcVar44 = (code *)swi(3);
  (*pcVar44)();
  return;
}


/* WorldEditorDrawPlane() */

void Assembly-CSharp.dll::WorldEditorDrawPlane::WorldEditorDrawPlane__ctor
               (WorldEditorDrawPlane *this,MethodInfo *method)

{
  (this->fields).MeshScale = 100;
  (this->fields).isActive = 1;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  return;
}


/* Boolean get_IsOnLandscape() */

bool Assembly-CSharp.dll::WorldEditorDrawPlane::WorldEditorDrawPlane_get_IsOnLandscape
               (WorldEditorDrawPlane *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  x = (this->fields)._targetGameObject;
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (this_00 != (MVWorldObjectClientManager *)0x0) {
    this_01 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetSingletonWorldObject_4
                        (this_00,
                         MVCubeModelPrototypeTerrain_MethodInfo__MVWorldObjectClientManager__GetSingletonWorldObject<MVCubeModelPrototypeTerrain>__
                        );
    if (this_01 != (MVRoundCube *)0x0) {
      y = DayNightCycle::DayNightCycle_get_CurrentMoonParam
                    ((DayNightCycle *)this_01,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
        func_?();
      }
      bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                        ((Object_1 *)x,(Object_1 *)y,(MethodInfo *)0x0);
      return bVar1;
    }
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  bVar1 = (*pcVar2)();
  return bVar1;
}


/* Vector3 get_Pos() */

Vector3 * Assembly-CSharp.dll::WorldEditorDrawPlane::WorldEditorDrawPlane_get_Pos
                    (Vector3 *__return_storage_ptr__,WorldEditorDrawPlane *this,MethodInfo *method)

{
  this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                      ((Component_1 *)this,(MethodInfo *)0x0);
  if (this_00 != (Transform *)0x0) {
    pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localPosition
                       ((Vector3 *)&stack0xfffffff0,this_00,(MethodInfo *)0x0);
    fVar2 = pVVar1->y;
    fVar3 = pVVar1->z;
    __return_storage_ptr__->x = pVVar1->x;
    __return_storage_ptr__->y = fVar2;
    __return_storage_ptr__->z = fVar3;
    return __return_storage_ptr__;
  }
  func_?();
  pcVar4 = (code *)swi(3);
  pVVar1 = (Vector3 *)(*pcVar4)();
  return pVVar1;
}


/* Void set_Active(Boolean) */

void Assembly-CSharp.dll::WorldEditorDrawPlane::WorldEditorDrawPlane_set_Active
               (WorldEditorDrawPlane *this,bool value,MethodInfo *method)

{
  pGVar1 = (this->fields).DrawPlaneVisualization;
  (this->fields).isActive = value;
  if (pGVar1 != (GameObject *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar1,value,(MethodInfo *)0x0);
    pGVar1 = (this->fields).DrawPlaneCursor;
    if (pGVar1 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar1,value,(MethodInfo *)0x0);
      WorldEditorDrawPlane_UpdateAltitude(this,(MethodInfo *)0x0);
      return;
    }
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void set_Altitude(Int32) */

void Assembly-CSharp.dll::WorldEditorDrawPlane::WorldEditorDrawPlane_set_Altitude
               (WorldEditorDrawPlane *this,int32_t value,MethodInfo *method)

{
  (this->fields)._altitude = value;
  pWVar1 = (this->fields).OnAltitudeChanged;
  if (pWVar1 == (WorldEditorDrawPlane_AltitudeChangedDelegate *)0x0) {
    return;
  }
  this_00 = (UnityAction_1_System_Boolean_ *)(pWVar1->fields)._.prev;
  if (this_00 != (UnityAction_1_System_Boolean_ *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Boolean]::
    UnityAction_1_System_Boolean__Invoke(this_00,(bool)value,(MethodInfo *)0x0);
  }
  this_01 = (pWVar1->fields)._._.method;
  pMVar2 = (pWVar1->fields)._._.method_ptr;
  pOVar3 = (pWVar1->fields)._._.m_target;
  pOVar4 = pOVar3;
  pMVar5 = this_01;
  if (this_01->flags == 0xffff) {
    func_?(this_01);
  }
  cVar6 = func_?(this_01);
  if (cVar6 == '\0') {
    if ((char)this_01->iflags == '\x01') {
      (*(code *)pMVar2)();
      return;
    }
  }
  else if ((this_01->flags != 0xffff) &&
          (((pOVar3 == (Object *)0x0 || (((pOVar3->klass->_1).token & 0x100) == 0)) &&
           ((pWVar1->fields)._._.invoke_impl != (void *)0x0)))) {
    cVar6 = func_?(pOVar3);
    if (cVar6 != '\0') {
      return;
    }
    if (pOVar3 == (Object *)0x0) {
      (*(code *)pMVar2)(value);
      return;
    }
    method_00 = this_01;
    cVar6 = func_?();
    pOVar7 = mscorlib.dll::System::Collections::Generic::KeyValuePair`2[WinningConditionType,System
             ::Object]::KeyValuePair_2_WinningConditionType_System_Object__get_Value
                       ((KeyValuePair_2_WinningConditionType_System_Object_ *)this_01,method_00);
    cVar8 = func_?(pOVar7);
    if (cVar6 == '\0') {
      if (cVar8 == '\0') {
        func_?(this_01->flags,pOVar3,value);
        return;
      }
      pIVar9 = (Il2CppClass *)
               mscorlib.dll::System::Collections::Generic::
               KeyValuePair`2[WinningConditionType,System::Object]::
               KeyValuePair_2_WinningConditionType_System_Object__get_Value
                         ((KeyValuePair_2_WinningConditionType_System_Object_ *)this_01,pMVar2);
      uVar10 = 0;
      pOVar11 = pOVar3->klass;
      uVar12._0_1_ = (pOVar11->_1).rank;
      uVar12._1_1_ = (pOVar11->_1).minimumAlignment;
      if (uVar12 != 0) {
        do {
          if (pOVar11->interfaceOffsets[uVar10].interfaceType == pIVar9) {
            ppMVar13 = &(&(pOVar3->klass->vtable).Equals)
                       [pOVar11->interfaceOffsets[uVar10].offset + (uint)this_01->flags].method;
            goto code_?;
          }
          uVar10 = uVar10 + 1;
        } while (uVar10 < uVar12);
      }
      ppMVar13 = (MethodInfo **)func_?(pOVar3,pIVar9,(uint)this_01->flags);
code_?:
      (*(code *)*ppMVar13)(pOVar3,value,ppMVar13[1]);
      return;
    }
    uVar14 = (uint)this_01->flags;
    if (cVar8 == '\0') {
      pIVar15 = (&(pOVar3->klass->vtable).Finalize)[uVar14].methodPtr;
    }
    else {
      pOVar11 = pOVar3->klass;
      uVar12 = 0;
      uVar10._0_1_ = (pOVar11->_1).rank;
      uVar10._1_1_ = (pOVar11->_1).minimumAlignment;
      pMVar2 = this_01;
      if (uVar10 != 0) {
        do {
          if (pOVar11->interfaceOffsets[uVar12].interfaceType == (Il2CppClass *)this_01->name) {
            ppMVar13 = &(&(pOVar4->klass->vtable).Equals)
                       [(uint)pMVar5->flags + pOVar4->klass->interfaceOffsets[uVar12].offset].
                       method;
            goto code_?;
          }
          uVar12 = uVar12 + 1;
        } while (uVar12 < uVar10);
        uVar14 = (uint)pMVar5->flags;
        pMVar2 = pMVar5;
        pOVar3 = pOVar4;
      }
      pOVar4 = pOVar3;
      pMVar5 = pMVar2;
      ppMVar13 = (MethodInfo **)func_?(pOVar4,(Il2CppClass *)this_01->name,uVar14);
code_?:
      pIVar15 = (Il2CppMethodPointer)ppMVar13[1];
      pOVar3 = pOVar4;
      this_01 = pMVar5;
    }
    puVar16 = (undefined4 *)func_?(pIVar15,this_01);
    (*(code *)*puVar16)(pOVar3,value,puVar16);
    return;
  }
  (*(code *)pMVar2)(pOVar3,value,this_01);
  return;
}


/* Void set_Orientation(DrawPlaneAxis) */

void Assembly-CSharp.dll::WorldEditorDrawPlane::WorldEditorDrawPlane_set_Orientation
               (WorldEditorDrawPlane *this,DrawPlaneAxis__Enum value,MethodInfo *method)

{
  DVar1 = value;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (value == DrawPlaneAxis__Enum_X) {
    pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                       ((Component_1 *)this,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Vector3);
    }
    pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_back
                       ((Vector3 *)&stack0xffffffd8,(MethodInfo *)0x0);
code_?:
    uVar4._0_4_ = pVVar3->x;
    uVar4._4_4_ = pVVar3->y;
    value = (DrawPlaneAxis__Enum)pVVar3->z;
    if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Quaternion);
    }
    fVar5 = (float)uVar4;
    fVar6 = SUB84(uVar4,4);
    fVar7 = 90.0;
code_?:
    axis.y = fVar6;
    axis.x = fVar5;
    axis.z = (float)value;
    pQVar8 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_AngleAxis
                       ((Quaternion *)&stack0xffffffd4,fVar7,axis,(MethodInfo *)0x0);
    if (pTVar2 == (Transform *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localRotation
              (pTVar2,*pQVar8,(MethodInfo *)0x0);
  }
  else {
    if (value == DrawPlaneAxis__Enum_Y) {
      pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                         ((Component_1 *)this,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Vector3);
      }
      pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_up
                         ((Vector3 *)&stack0xffffffd8,(MethodInfo *)0x0);
      uVar9._0_4_ = pVVar3->x;
      uVar9._4_4_ = pVVar3->y;
      value = (DrawPlaneAxis__Enum)pVVar3->z;
      if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Quaternion);
      }
      fVar5 = (float)uVar9;
      fVar6 = SUB84(uVar9,4);
      fVar7 = 0.0;
      goto code_?;
    }
    if (value == DrawPlaneAxis__Enum_Z) {
      pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                         ((Component_1 *)this,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Vector3);
      }
      pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_right
                         ((Vector3 *)&stack0xffffffd8,(MethodInfo *)0x0);
      goto code_?;
    }
  }
  bVar10 = WorldEditorDrawPlane_get_IsOnLandscape(this,(MethodInfo *)0x0);
  if (bVar10 == 0) {
    this_00 = (this->fields)._targetGameObject;
    if ((this_00 != (GameObject *)0x0) &&
       (pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                           (this_00,(MethodInfo *)0x0), pTVar2 != (Transform *)0x0)) {
      pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                         ((Vector3 *)&stack0xffffffd8,pTVar2,(MethodInfo *)0x0);
code_?:
      WorldEditorDrawPlane_SetToGridAlignedPos(this,*pVVar3,(MethodInfo *)0x0);
      VStack_11.z = (float)&UNK_?;
      WorldEditorDrawPlane_UpdateEditorPlanePosition(this,(MethodInfo *)0x0);
      VStack_11.z = (float)&UNK_?;
      WorldEditorDrawPlane_UpdateAltitude(this,(MethodInfo *)0x0);
      (this->fields).drawPlaneAxis = DVar1;
      return;
    }
  }
  else {
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    this_01 = (this->fields).mainCamera;
    fVar7 = 0.0;
    fVar5 = 0.0;
    fVar6 = 0.0;
    if ((this_01 != (Camera *)0x0) &&
       (pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                           ((Component_1 *)this_01,(MethodInfo *)0x0), pTVar2 != (Transform *)0x0))
    {
      pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_forward
                         ((Vector3 *)&stack0xfffffff0,pTVar2,(MethodInfo *)0x0);
      uVar12 = pVVar3->x;
      uVar13 = pVVar3->y;
      VStack_11.z = pVVar3->z;
      uVar14 = _UNK_?;
      if ((float)uVar12 <= _UNK_?) {
        uVar14 = _UNK_?;
      }
      uVar15 = _UNK_?;
      if (_UNK_? < (float)uVar13) {
        uVar15 = _UNK_?;
      }
      uVar16 = _UNK_?;
      if (VStack_11.z <= 0.0) {
        uVar16 = _UNK_?;
      }
      VStack_11.x = (float)uVar12;
      VStack_11.y = (float)uVar13;
      func_?(&stack0xffffffd8,uVar14,uVar15,uVar16,0);
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?(TypeInfo__MVGameControllerBase);
      }
      this_02 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                          ((MethodInfo *)0x0);
      if (this_02 != (SpawnRoleDataMediator *)0x0) {
        s = (SpawnRoleVariable_1_UnityEngine_Vector3_ *)
            PlayerListsLayout+<CreatePlayerLists>c__Iterator0::
            PlayerListsLayout_CreatePlayerLists_c_Iterator0_System_Collections_IEnumerator_get_Current
                      ((PlayerListsLayout_CreatePlayerLists_c_Iterator0 *)this_02,(MethodInfo *)0x0)
        ;
        pVVar3 = Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes
                 ::SpawnRoleVariable`1[UnityEngine::Vector3]::
                 SpawnRoleVariable_1_UnityEngine_Vector3__op_Implicit
                           (&VStack_11,s,
                            MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<UnityEngine::Vector3>__op_Implicit_MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<UnityEngine::Vector3>_
                           );
        uVar17._0_4_ = pVVar3->x;
        uVar17._4_4_ = pVVar3->y;
        fVar18 = pVVar3->z;
        VStack_11.y = fVar7;
        VStack_11.z = fVar5;
        if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
          func_?(TypeInfo__UnityEngine__Vector3);
        }
        a.z = fVar18;
        a.x = (float)uVar17;
        a.y = SUB84(uVar17,4);
        b.y = VStack_11.z;
        b.x = VStack_11.y;
        b.z = fVar6;
        pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                           (&VStack_11,a,b,(MethodInfo *)0x0);
        goto code_?;
      }
    }
  }
code_?:
  func_?(0);
  pcVar19 = (code *)swi(3);
  (*pcVar19)();
  return;
}


/* Void set_Pos(Vector3) */

void Assembly-CSharp.dll::WorldEditorDrawPlane::WorldEditorDrawPlane_set_Pos
               (WorldEditorDrawPlane *this,Vector3 value,MethodInfo *method)

{
  this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                      ((Component_1 *)this,(MethodInfo *)0x0);
  if (this_00 != (Transform *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
              (this_00,value,(MethodInfo *)0x0);
    WorldEditorDrawPlane_UpdateEditorPlanePosition(this,(MethodInfo *)0x0);
    WorldEditorDrawPlane_UpdateAltitude(this,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void set_TargetGameObject(GameObject) */

void Assembly-CSharp.dll::WorldEditorDrawPlane::WorldEditorDrawPlane_set_TargetGameObject
               (WorldEditorDrawPlane *this,GameObject *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  (this->fields)._targetGameObject = value;
  pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                     ((Component_1 *)this,(MethodInfo *)0x0);
  pGVar2 = (this->fields)._targetGameObject;
  if (pGVar2 != (GameObject *)0x0) {
    value_00 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                         (pGVar2,(MethodInfo *)0x0);
    if (pTVar1 != (Transform *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_parent
                (pTVar1,value_00,(MethodInfo *)0x0);
      pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                         ((Component_1 *)this,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
        func_?();
      }
      pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_one
                         ((Vector3 *)&stack0xfffffff0,(MethodInfo *)0x0);
      if (pTVar1 != (Transform *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
                  (pTVar1,*pVVar3,(MethodInfo *)0x0);
        pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                           ((Component_1 *)this,(MethodInfo *)0x0);
        if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0)
           && ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
          func_?();
        }
        pQVar4 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_get_identity
                           ((Quaternion *)&stack0xffffffec,(MethodInfo *)0x0);
        if (pTVar1 != (Transform *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localRotation
                    (pTVar1,*pQVar4,(MethodInfo *)0x0);
          pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                             ((Component_1 *)this,(MethodInfo *)0x0);
          pVVar3 = WorldEditorDrawPlane_GetDirectionVector
                             ((Vector3 *)&stack0xfffffff0,this,(MethodInfo *)0x0);
          pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                             ((Vector3 *)&stack0xfffffff0,*pVVar3,0.5,(MethodInfo *)0x0);
          if (pTVar1 != (Transform *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                      (pTVar1,*pVVar3,(MethodInfo *)0x0);
            bVar5 = WorldEditorDrawPlane_get_IsOnLandscape(this,(MethodInfo *)0x0);
            if (bVar5 == 0) {
              pGVar2 = (this->fields)._targetGameObject;
              if (pGVar2 == (GameObject *)0x0) goto code_?;
              value_01 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_layer
                                   (pGVar2,(MethodInfo *)0x0);
            }
            else {
              value_01 = LayerUtil::LayerUtil_GetLayerNumber
                                   (LayerFlags__Enum_UIItems,(MethodInfo *)0x0);
            }
            pGVar2 = (this->fields).DrawPlaneVisualization;
            if (pGVar2 != (GameObject *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_set_layer
                        (pGVar2,value_01,(MethodInfo *)0x0);
              pGVar2 = (this->fields).DrawPlaneCursor;
              if (pGVar2 != (GameObject *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_set_layer
                          (pGVar2,value_01,(MethodInfo *)0x0);
                WorldEditorDrawPlane_UpdateEditorPlanePosition(this,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}

