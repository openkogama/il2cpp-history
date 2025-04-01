
/* Void Awake() */

void Assembly-CSharp.dll::WorldEditorDrawPlane::WorldEditorDrawPlane_Awake
               (WorldEditorDrawPlane *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    UnityEngine__Renderer_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::Renderer>__
                   );
    cRam_? = '\x01';
  }
  pCVar1 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_main((MethodInfo *)0x0);
  ppCVar2 = &(this->fields).mainCamera;
  *ppCVar2 = pCVar1;
  func_?(ppCVar2,pCVar1);
  WorldEditorDrawPlane_GenerateDrawPlane
            (this,(this->fields).DrawPlaneVisualization,(MethodInfo *)0x0);
  pGVar3 = (this->fields).DrawPlaneVisualization;
  if (pGVar3 != (GameObject *)0x0) {
    pRVar4 = (Renderer *)
             UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                       (pGVar3,
                        UnityEngine__Renderer_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::Renderer>__
                       );
    if (pRVar4 != (Renderer *)0x0) {
      pMVar5 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material
                         (pRVar4,(MethodInfo *)0x0);
      if (pMVar5 != (Material *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Material::Material_set_mainTextureScale
                  (pMVar5,(Vector2)0x42c8000042c80000,(MethodInfo *)0x0);
        pGVar3 = (this->fields).DrawPlaneVisualization;
        if (pGVar3 != (GameObject *)0x0) {
          pRVar4 = (Renderer *)
                   UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                             (pGVar3,
                              UnityEngine__Renderer_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::Renderer>__
                             );
          if (pRVar4 != (Renderer *)0x0) {
            pMVar5 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material
                               (pRVar4,(MethodInfo *)0x0);
            if (pMVar5 != (Material *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Material::Material_set_mainTextureOffset
                        (pMVar5,(Vector2)0x3f0000003f000000,(MethodInfo *)0x0);
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
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void CachePos() */

void Assembly-CSharp.dll::WorldEditorDrawPlane::WorldEditorDrawPlane_CachePos
               (WorldEditorDrawPlane *this,MethodInfo *method)

{
  this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                      ((Component *)this,(MethodInfo *)0x0);
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
  pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                     ((Component *)this,(MethodInfo *)0x0);
  this_01 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
  if (this_01 != (MainCameraManager *)0x0) {
    this_02 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        ((Component *)this_01,(MethodInfo *)0x0);
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
    func_?(&
                    UnityEngine__MeshFilter_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::MeshFilter>__
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if (drawPlane != (GameObject *)0x0) {
    this_00 = (MeshFilter *)
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                        (drawPlane,
                         UnityEngine__MeshFilter_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::MeshFilter>__
                        );
    if (this_00 != (MeshFilter *)0x0) {
      mesh = UnityEngine.CoreModule.dll::UnityEngine::MeshFilter::MeshFilter_get_mesh
                       (this_00,(MethodInfo *)0x0);
      y = (this->fields).DrawPlaneVisualization;
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      scale = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                        ((Object_1 *)drawPlane,(Object_1 *)y,(MethodInfo *)0x0);
      WorldEditorDrawPlane_GenerateMesh(this,mesh,scale,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void GenerateMesh(Mesh, Boolean) */

void Assembly-CSharp.dll::WorldEditorDrawPlane::WorldEditorDrawPlane_GenerateMesh
               (WorldEditorDrawPlane *this,Mesh *mesh,bool scale,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__UnityEngine__Vector2);
    func_?(&TypeInfo__UnityEngine__Vector3);
    func_?(&StringLiteral_DrawPlaneMesh);
    cRam_? = '\x01';
  }
  bVar1 = scale != 0;
  _scale = _UNK_?;
  if (bVar1) {
    _scale = _UNK_?;
  }
  value = (Vector3__Array *)func_?(TypeInfo__UnityEngine__Vector3,4);
  value_00 = (Int32__Array *)func_?(TypeInfo__System__Int32,6);
  if (value != (Vector3__Array *)0x0) {
    value_01 = (Vector2__Array *)func_?(TypeInfo__UnityEngine__Vector2,value->max_length);
    fVar2 = _scale * _UNK_?;
    fVar3 = _scale * _UNK_?;
    _scale = _scale * 0.0;
    if (value->max_length == 0) goto code_?;
    value->vector[0].x = fVar2;
    value->vector[0].y = _scale;
    value->vector[0].z = fVar3;
    if (value->max_length < 2) goto code_?;
    value->vector[1].x = fVar2;
    value->vector[1].y = _scale;
    value->vector[1].z = fVar2;
    if (value->max_length < 3) goto code_?;
    value->vector[2].x = fVar3;
    value->vector[2].y = _scale;
    value->vector[2].z = fVar2;
    if (value->max_length < 4) goto code_?;
    value->vector[3].x = fVar3;
    value->vector[3].y = _scale;
    value->vector[3].z = fVar3;
    if (value_00 != (Int32__Array *)0x0) {
      if ((((value_00->max_length == 0) || (value_00->vector[0] = 0, value_00->max_length < 2)) ||
          (value_00->vector[1] = 1, value_00->max_length < 3)) ||
         (((value_00->vector[2] = 2, value_00->max_length < 4 ||
           (value_00->vector[3] = 2, value_00->max_length < 5)) ||
          (value_00->vector[4] = 3, value_00->max_length < 6)))) goto code_?;
      value_00->vector[5] = 0;
      if (value_01 != (Vector2__Array *)0x0) {
        if (value_01->max_length == 0) goto code_?;
        value_01->vector[0].x = 0.0;
        value_01->vector[0].y = 0.0;
        if (value_01->max_length < 2) goto code_?;
        value_01->vector[1].x = 0.0;
        value_01->vector[1].y = 1.0;
        if (value_01->max_length < 3) goto code_?;
        value_01->vector[2].x = 1.0;
        value_01->vector[2].y = 1.0;
        if (value_01->max_length < 4) goto code_?;
        value_01->vector[3].x = 1.0;
        value_01->vector[3].y = 0.0;
        if (mesh != (Mesh *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_set_name
                    ((Object_1 *)mesh,StringLiteral_DrawPlaneMesh,(MethodInfo *)0x0);
          UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_set_vertices
                    (mesh,value,(MethodInfo *)0x0);
          UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_set_triangles
                    (mesh,value_00,(MethodInfo *)0x0);
          UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_set_uv
                    (mesh,value_01,(MethodInfo *)0x0);
          UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_RecalculateBounds
                    (mesh,(MethodInfo *)0x0);
          UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_RecalculateNormals
                    (mesh,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Vector3 GetCubePlaceOffset() */

Vector3 * Assembly-CSharp.dll::WorldEditorDrawPlane::WorldEditorDrawPlane_GetCubePlaceOffset
                    (Vector3 *__return_storage_ptr__,WorldEditorDrawPlane *this,MethodInfo *method)

{
  this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                      ((Component *)this,(MethodInfo *)0x0);
  this_01 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
  if (this_01 != (MainCameraManager *)0x0) {
    this_02 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        ((Component *)this_01,(MethodInfo *)0x0);
    if (this_02 != (Transform *)0x0) {
      pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                         ((Vector3 *)&stack0xffffffe4,this_02,(MethodInfo *)0x0);
      if (this_00 != (Transform *)0x0) {
        pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_InverseTransformPoint
                           ((Vector3 *)&stack0xfffffff0,this_00,*pVVar1,(MethodInfo *)0x0);
        pVVar1 = (Vector3 *)pVVar2->y;
        pVVar2 = WorldEditorDrawPlane_GetDirectionVector
                           (pVVar1,(WorldEditorDrawPlane *)pVVar2->z,(MethodInfo *)0x0);
        uVar3 = pVVar2->x;
        uVar4 = pVVar2->y;
        fVar5 = (float)uVar4 * _UNK_?;
        fVar6 = pVVar2->z * _UNK_?;
        fVar7 = (float)(int)((uint)(_UNK_? < (float)pVVar1) * 2 + -1);
        __return_storage_ptr__->x = fVar7 * (float)uVar3 * _UNK_?;
        __return_storage_ptr__->y = fVar5 * fVar7;
        __return_storage_ptr__->z = fVar6 * fVar7;
        return __return_storage_ptr__;
      }
    }
  }
  func_?();
  pcVar8 = (code *)swi(3);
  pVVar1 = (Vector3 *)(*pcVar8)();
  return pVVar1;
}


/* Boolean GetCubePosOnDrawplane(GameObject, IntVector ByRef) */

bool Assembly-CSharp.dll::WorldEditorDrawPlane::WorldEditorDrawPlane_GetCubePosOnDrawplane
               (WorldEditorDrawPlane *this,GameObject *gameObject,IntVector *intVectorHitPos,
               MethodInfo *method)

{
  fVar1 = 0.0;
  puStack_2 = (undefined *)0x0;
  stack0xffffffec = 0.0;
  bVar3 = WorldEditorDrawPlane_Pick(this,(Vector3 *)&puStack_2,(MethodInfo *)0x0);
  this_00 = (this->fields)._targetGameObject;
  if (this_00 != (GameObject *)0x0) {
    pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                       (this_00,(MethodInfo *)0x0);
    if (pTVar4 != (Transform *)0x0) {
      position.z = fVar1;
      position.x = (float)puStack_2;
      position.y = stack0xffffffec;
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_InverseTransformPoint
                ((Vector3 *)&stack0xffffffc4,pTVar4,position,(MethodInfo *)0x0);
      pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                         ((Component *)this,(MethodInfo *)0x0);
      this_01 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
      if (this_01 != (MainCameraManager *)0x0) {
        VStack_5.z = (float)&UNK_?;
        this_02 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                            ((Component *)this_01,(MethodInfo *)0x0);
        if (this_02 != (Transform *)0x0) {
          pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                             (&VStack_5,this_02,(MethodInfo *)0x0);
          if (pTVar4 != (Transform *)0x0) {
            pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                     Transform_InverseTransformPoint(&VStack_7,pTVar4,*pVVar6,(MethodInfo *)0x0);
            fVar1 = pVVar6->y;
            pVVar6 = (Vector3 *)&stack0xffffffa0;
            puVar8 = &UNK_?;
            pVVar9 = WorldEditorDrawPlane_GetDirectionVector(pVVar6,this,(MethodInfo *)0x0);
            uVar10 = pVVar9->x;
            uVar11 = pVVar9->y;
            fVar12 = (float)(int)((uint)(_UNK_? < fVar1) * 2 + -1);
            fVar1 = (float)this + fVar12 * pVVar9->z * _UNK_?;
            stack0xffffffec = (float)&stack0xffffffa0;
            vector.y = (float)pVVar6 + fVar12 * (float)uVar11 * _UNK_?;
            vector.x = (float)puVar8 + fVar12 * (float)uVar10 * _UNK_?;
            vector.z._0_2_ = SUB42(fVar1,0);
            vector.z._2_2_ = (short)((uint)fVar1 >> 0x10);
            pVVar6 = MathFunctions::MathFunctions_RoundVector
                               ((Vector3 *)&stack0xffffffa0,vector,0,(MethodInfo *)0x0);
            uVar13 = pVVar6->x;
            uVar14 = pVVar6->y;
            iVar15 = (int16_t)(int)(float)uVar14;
            x = (int)(float)uVar13 & 0xffff;
            stack0xffffffec = (float)&UNK_?;
            puStack_2 = (undefined *)uVar13;
            MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
                      ((IntVector *)&stack0xfffffff4,x,(int)(float)uVar14 & 0xffff,
                       (int)pVVar6->z & 0xffff,(MethodInfo *)0x0);
            intVectorHitPos->x = (short)x;
            intVectorHitPos->y = (short)(x >> 0x10);
            intVectorHitPos->z = iVar15;
            return bVar3;
          }
        }
      }
    }
  }
  func_?();
  pcVar16 = (code *)swi(3);
  bVar3 = (*pcVar16)();
  return bVar3;
}


/* Vector3 GetDirectionVector() */

Vector3 * Assembly-CSharp.dll::WorldEditorDrawPlane::WorldEditorDrawPlane_GetDirectionVector
                    (Vector3 *__return_storage_ptr__,WorldEditorDrawPlane *this,MethodInfo *method)

{
  this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                      ((Component *)this,(MethodInfo *)0x0);
  if (this_00 != (Transform *)0x0) {
    pQVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localRotation
                       ((Quaternion *)&stack0xffffffec,this_00,(MethodInfo *)0x0);
    fVar2 = pQVar1->x;
    puVar3 = (undefined *)pQVar1->w;
    if (cRam_? == '\0') {
      puVar3 = &UNK_?;
      func_?();
      cRam_? = '\x01';
    }
    pVVar4 = &TypeInfo__UnityEngine__Vector3->static_fields->upVector;
    uVar5 = pVVar4->x;
    uVar6 = pVVar4->y;
    rotation.y = (float)uVar5;
    rotation.x = fVar2;
    rotation.z = (float)uVar6;
    rotation.w = (float)puVar3;
    pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                       ((Vector3 *)&stack0xfffffff0,rotation,*pVVar4,(MethodInfo *)0x0);
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
  pVVar1 = WorldEditorDrawPlane_GetDirectionVector(&VStack_2,this,(MethodInfo *)0x0);
  uVar3 = pVVar1->x;
  uVar4 = pVVar1->y;
  fVar5 = pVVar1->z * _UNK_?;
  fVar6 = (float)uVar4 * _UNK_?;
  __return_storage_ptr__->x = (float)uVar3 * _UNK_?;
  __return_storage_ptr__->y = fVar6;
  __return_storage_ptr__->z = fVar5;
  return __return_storage_ptr__;
}


/* Void MoveDrawPlane(Int32) */

void Assembly-CSharp.dll::WorldEditorDrawPlane::WorldEditorDrawPlane_MoveDrawPlane
               (WorldEditorDrawPlane *this,int32_t dir,MethodInfo *method)

{
  fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  if (fVar1 - (this->fields).lastMovePlaneDelta <= _UNK_?) {
    return;
  }
  pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                     ((Component *)this,(MethodInfo *)0x0);
  if (pTVar2 != (Transform *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localPosition
              ((Vector3 *)&stack0xffffffec,pTVar2,(MethodInfo *)0x0);
    pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                       ((Component *)this,(MethodInfo *)0x0);
    if (pTVar2 != (Transform *)0x0) {
      pQVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localRotation
                         ((Quaternion *)&stack0xffffffd0,pTVar2,(MethodInfo *)0x0);
      fVar1 = pQVar3->x;
      fVar4 = pQVar3->y;
      fVar5 = pQVar3->z;
      fVar6 = pQVar3->w;
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      rotation.y = fVar4;
      rotation.x = fVar1;
      rotation.z = fVar5;
      rotation.w = fVar6;
      UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                ((Vector3 *)&stack0xffffffd4,rotation,
                 TypeInfo__UnityEngine__Vector3->static_fields->upVector,(MethodInfo *)0x0);
      fVar1 = 0.0;
      puVar7 = &UNK_?;
      pWVar8 = this;
      pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                         ((Component *)this,(MethodInfo *)0x0);
      if (pTVar2 != (Transform *)0x0) {
        value.y = (float)pWVar8;
        value.x = (float)puVar7;
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
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Boolean Pick(Vector3 ByRef) */

bool Assembly-CSharp.dll::WorldEditorDrawPlane::WorldEditorDrawPlane_Pick
               (WorldEditorDrawPlane *this,Vector3 *hit,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVInputWrapper);
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  ppCVar1 = &(this->fields).mainCamera;
  pCVar2 = *ppCVar1;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                     ((Object_1 *)pCVar2,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar3 != 0) {
    pCVar2 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_main((MethodInfo *)0x0);
    *ppCVar1 = pCVar2;
    func_?(ppCVar1,pCVar2);
  }
  pCVar2 = *ppCVar1;
  if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__MVInputWrapper);
  }
  pVVar4 = UnityEngine.InputLegacyModule.dll::UnityEngine::Input::Input_get_mousePosition
                      ((Vector3 *)&stack0xffffffe4,(MethodInfo *)0x0);
  uVar5 = pVVar4->x;
  pVVar4 = UnityEngine.InputLegacyModule.dll::UnityEngine::Input::Input_get_mousePosition
                      ((Vector3 *)&stack0xffffffd8,(MethodInfo *)0x0);
  uVar6 = pVVar4->y;
  if (pCVar2 != (Camera *)0x0) {
    pos.y = (float)uVar6;
    pos.x = (float)uVar5;
    pos.z = 0.0;
    pRVar7 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_ScreenPointToRay_2
                        ((Ray *)&stack0xffffffcc,pCVar2,pos,(MethodInfo *)0x0);
    uVar8 = (pRVar7->m_Direction).z;
    uVar9 = (pRVar7->m_Origin).x;
    uVar10 = (pRVar7->m_Origin).y;
    uVar11 = (pRVar7->m_Origin).z;
    ray.m_Origin.z = (float)uVar11;
    ray.m_Origin.y = (float)uVar10;
    ray.m_Origin.x = (float)uVar9;
    uVar12 = (pRVar7->m_Direction).x;
    uVar13 = (pRVar7->m_Direction).y;
    ray.m_Direction.y = (float)uVar13;
    ray.m_Direction.x = (float)uVar12;
    ray.m_Direction.z = (float)uVar8;
    bVar3 = WorldEditorDrawPlane_RayCast(this,ray,hit,0,(MethodInfo *)0x0);
    return bVar3;
  }
  func_?();
  pcVar14 = (code *)swi(3);
  bVar3 = (*pcVar14)();
  return bVar3;
}


/* Boolean RayCast(Ray, Vector3 ByRef, Boolean) */

bool Assembly-CSharp.dll::WorldEditorDrawPlane::WorldEditorDrawPlane_RayCast
               (WorldEditorDrawPlane *this,Ray ray,Vector3 *hit,bool ignoreActiveFlag,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__EventSystems__EventSystem);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__EventSystems__EventSystem->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__EventSystems__EventSystem);
  }
  this_00 = UnityEngine.UI.dll::UnityEngine::EventSystems::EventSystem::EventSystem_get_current
                      ((MethodInfo *)0x0);
  if (this_00 != (EventSystem *)0x0) {
    bVar1 = UnityEngine.UI.dll::UnityEngine::EventSystems::EventSystem::
            EventSystem_IsPointerOverGameObject(this_00,(MethodInfo *)0x0);
    if ((bVar1 == 0) && (((this->fields).isActive != 0 || (ignoreActiveFlag != 0)))) {
      uVar2 = (this->fields).editorPlane.m_Normal.x;
      uVar3 = (this->fields).editorPlane.m_Normal.y;
      fStack_4 = (this->fields).editorPlane.m_Normal.z;
      fStack_5 = ray.m_Direction.y * (float)uVar3 + ray.m_Direction.x * (float)uVar2 +
                  ray.m_Direction.z * fStack_4;
      uStack_6._0_4_ = (this->fields).editorPlane.m_Normal.x;
      uStack_6._4_4_ = (this->fields).editorPlane.m_Normal.y;
      fStack_7 = (float)((uint)(ray.m_Origin.y * (float)uStack_6._4_4_ +
                                 ray.m_Origin.x * (float)(undefined4)uStack_6 +
                                ray.m_Origin.z * fStack_4) ^
                         __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field) -
                  (this->fields).editorPlane.m_Distance;
      if (cRam_? == '\0') {
        func_?(&TypeInfo__UnityEngine__Mathf,0);
        cRam_? = '\x01';
      }
      fVar8 = (float)((uint)fStack_5 & _UNK_?);
      if ((float)((uint)fStack_5 & _UNK_?) <= 0.0) {
        fVar8 = 0.0;
      }
      fVar9 = TypeInfo__UnityEngine__Mathf->static_fields->Epsilon * _UNK_?;
      fVar10 = fVar8 * _UNK_?;
      if (fVar8 * _UNK_? <= fVar9) {
        fVar10 = fVar9;
      }
      if ((fVar10 <= (float)((uint)(0.0 - fStack_5) & _UNK_?)) &&
         (fStack_7 = fStack_7 / fStack_5, 0.0 < fStack_7)) {
        pVVar11 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                           (&VStack_12,ray.m_Direction,(MethodInfo *)0x0);
        uVar13 = pVVar11->x;
        uVar14 = pVVar11->y;
        fVar8 = pVVar11->z;
        hit->x = ray.m_Direction.y + (float)uVar13 * fStack_7;
        hit->y = ray.m_Origin.y + (float)uVar14 * fStack_7;
        hit->z = ray.m_Origin.z + fVar8 * fStack_7;
        return 1;
      }
    }
    return 0;
  }
  func_?();
  pcVar15 = (code *)swi(3);
  bVar1 = (*pcVar15)();
  return bVar1;
}


/* Void RestorePos() */

void Assembly-CSharp.dll::WorldEditorDrawPlane::WorldEditorDrawPlane_RestorePos
               (WorldEditorDrawPlane *this,MethodInfo *method)

{
  value = (this->fields)._cachedPos;
  this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                      ((Component *)this,(MethodInfo *)0x0);
  if (this_00 != (Transform *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
              (this_00,value,(MethodInfo *)0x0);
    WorldEditorDrawPlane_UpdateEditorPlanePosition(this,(MethodInfo *)0x0);
    WorldEditorDrawPlane_UpdateAltitude(this,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      ppVStack1 = &TypeInfo__UnityEngine__Vector3;
      func_?();
      cRam_? = '\x01';
    }
    pVVar2 = TypeInfo__UnityEngine__Vector3->static_fields;
    fVar3 = (pVVar2->zeroVector).y;
    fVar4 = (pVVar2->zeroVector).z;
    (this->fields)._cachedPos.x = (pVVar2->zeroVector).x;
    (this->fields)._cachedPos.y = fVar3;
    (this->fields)._cachedPos.z = fVar4;
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
  this_00 = this;
  if (cRam_? == '\0') {
    func_?(&
                    MVCubeModelPrototypeTerrain_MethodInfo__MVWorldObjectClientManager__GetSingletonWorldObject<MVCubeModelPrototypeTerrain>__
                   );
    cRam_? = '\x01';
  }
  this_01 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (this_01 != (MVWorldObjectClientManager *)0x0) {
    pOVar1 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetSingletonWorldObject
                       (this_01,
                        MVCubeModelPrototypeTerrain_MethodInfo__MVWorldObjectClientManager__GetSingletonWorldObject<MVCubeModelPrototypeTerrain>__
                       );
    if (pOVar1 != (Object *)0x0) {
      WorldEditorDrawPlane_set_TargetGameObject
                (this,(GameObject *)pOVar1[0x11].klass,(MethodInfo *)0x0);
      uVar2._0_4_ = (this->fields)._cachedPos.x;
      uVar2._4_4_ = (this->fields)._cachedPos.y;
      fVar3 = (this->fields)._cachedPos.z;
      this_02 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                          ((Component *)this,(MethodInfo *)(undefined4)uVar2);
      if (this_02 != (Transform *)0x0) {
        fVar4 = (float)uVar2;
        this = (WorldEditorDrawPlane *)fVar3;
        fVar5 = (float)(int)((ulonglong)uVar2 >> 0x20);
        value = (Vector3)CONCAT84(uVar6,fVar4);
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                  (this_02,value,(MethodInfo *)0x0);
        WorldEditorDrawPlane_UpdateEditorPlanePosition(this_00,(MethodInfo *)0x0);
        WorldEditorDrawPlane_UpdateAltitude(this_00,(MethodInfo *)0x0);
        if (cRam_? == '\0') {
          ppVStack7 = &TypeInfo__UnityEngine__Vector3;
          func_?();
          cRam_? = '\x01';
        }
        pVVar8 = TypeInfo__UnityEngine__Vector3->static_fields;
        fVar9 = (pVVar8->zeroVector).y;
        fVar3 = (pVVar8->zeroVector).z;
        (this_00->fields)._cachedPos.x = (pVVar8->zeroVector).x;
        (this_00->fields)._cachedPos.y = fVar9;
        (this_00->fields)._cachedPos.z = fVar3;
        return;
      }
    }
  }
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void SetDrawPlaneHeight(Single) */

void Assembly-CSharp.dll::WorldEditorDrawPlane::WorldEditorDrawPlane_SetDrawPlaneHeight
               (WorldEditorDrawPlane *this,float height,MethodInfo *method)

{
  pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                     ((Component *)this,(MethodInfo *)0x0);
  if (pTVar1 != (Transform *)0x0) {
    pQVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localRotation
                       ((Quaternion *)&stack0xffffffe0,pTVar1,(MethodInfo *)0x0);
    puVar3 = (undefined *)pQVar2->z;
    if (cRam_? == '\0') {
      puVar3 = &UNK_?;
      func_?();
      cRam_? = '\x01';
    }
    pVVar4 = &TypeInfo__UnityEngine__Vector3->static_fields->upVector;
    uVar5 = pVVar4->x;
    uVar6 = pVVar4->y;
    rotation.y = (float)uVar6;
    rotation.x = (float)uVar5;
    rotation.z = (float)puVar3;
    rotation.w = 0.0;
    UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
              ((Vector3 *)&stack0xffffffe4,rotation,*pVVar4,(MethodInfo *)0x0);
    fVar7 = 0.0;
    puVar3 = &UNK_?;
    pWStack8 = this;
    pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                       ((Component *)this,(MethodInfo *)0x0);
    if (pTVar1 != (Transform *)0x0) {
      value.y = (float)pWStack8;
      value.x = (float)puVar3;
      value.z = fVar7;
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                (pTVar1,value,(MethodInfo *)0x0);
      WorldEditorDrawPlane_UpdateEditorPlanePosition(this,(MethodInfo *)0x0);
      WorldEditorDrawPlane_UpdateAltitude(this,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void SetLayer(Int32) */

void Assembly-CSharp.dll::WorldEditorDrawPlane::WorldEditorDrawPlane_SetLayer
               (WorldEditorDrawPlane *this,int32_t layer,MethodInfo *method)

{
  this_00 = (this->fields).DrawPlaneVisualization;
  if (this_00 != (GameObject *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_set_layer
              (this_00,layer,(MethodInfo *)0x0);
    if ((this->fields).DrawPlaneCursor != (GameObject *)0x0) {
      if (pcRam_? == (code *)0x0) {
        pcRam_? = (code *)func_?();
      }
      (*pcRam_?)();
      return;
    }
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void SetToCameraPos() */

void Assembly-CSharp.dll::WorldEditorDrawPlane::WorldEditorDrawPlane_SetToCameraPos
               (WorldEditorDrawPlane *this,MethodInfo *method)

{
  this_01 = this;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<UnityEngine::Vector3>__op_Implicit_MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<UnityEngine::Vector3>_
                   );
    cRam_? = '\x01';
  }
  this_00 = (this->fields).mainCamera;
  if (this_00 != (Camera *)0x0) {
    this_02 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        ((Component *)this_00,(MethodInfo *)0x0);
    if (this_02 != (Transform *)0x0) {
      pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_forward
                         ((Vector3 *)&stack0xffffffdc,this_02,(MethodInfo *)0x0);
      uVar2 = pVVar1->x;
      uVar3 = pVVar1->y;
      if ((float)uVar2 <= _UNK_?) {
        this = _UNK_?;
      }
      else {
        this = _UNK_?;
      }
      pWVar4 = _UNK_?;
      if (_UNK_? < (float)uVar3) {
        pWVar4 = _UNK_?;
      }
      pWVar5 = _UNK_?;
      if (pVVar1->z <= _UNK_?) {
        pWVar5 = _UNK_?;
      }
      pSVar6 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                         ((MethodInfo *)0x0);
      if (pSVar6 != (SpawnRoleDataMediator *)0x0) {
        pVVar1 = Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes
                 ::SpawnRoleVariable`1[UnityEngine::Vector3]::
                 SpawnRoleVariable_1_UnityEngine_Vector3__op_Implicit
                           ((Vector3 *)&stack0xffffffdc,
                            (SpawnRoleVariable_1_UnityEngine_Vector3_ *)(pSVar6->fields).position,
                            MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<UnityEngine::Vector3>__op_Implicit_MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<UnityEngine::Vector3>_
                           );
        uVar7 = pVVar1->x;
        uVar8 = pVVar1->y;
        pos.y = (float)uVar8 + (float)pWVar4;
        pos.x = (float)uVar7 + (float)this;
        pos.z = pVVar1->z + (float)pWVar5;
        WorldEditorDrawPlane_SetToGridAlignedPos(this_01,pos,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void SetToGridAlignedPos(Vector3) */

void Assembly-CSharp.dll::WorldEditorDrawPlane::WorldEditorDrawPlane_SetToGridAlignedPos
               (WorldEditorDrawPlane *this,Vector3 pos,MethodInfo *method)

{
  this_00 = (this->fields)._targetGameObject;
  if (this_00 != (GameObject *)0x0) {
    pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                       (this_00,(MethodInfo *)0x0);
    if (pTVar1 != (Transform *)0x0) {
      pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_InverseTransformPoint
                         ((Vector3 *)&stack0xffffffe4,pTVar1,pos,(MethodInfo *)0x0);
      pVVar2 = MathFunctions::MathFunctions_RoundVector
                         ((Vector3 *)&stack0xffffffe4,*pVVar2,0,(MethodInfo *)0x0);
      fVar3 = pVVar2->x;
      fVar4 = pVVar2->y;
      fVar5 = pVVar2->z;
      pVVar2 = WorldEditorDrawPlane_GetDirectionVector
                         ((Vector3 *)&stack0xffffffe4,this,(MethodInfo *)0x0);
      a.y = fVar4;
      a.x = fVar3;
      a.z = fVar5;
      pVVar2 = MathFunctions::MathFunctions_Multiply
                         ((Vector3 *)&puStack_6,a,*pVVar2,(MethodInfo *)0x0);
      fVar5 = pVVar2->x;
      fVar7 = pVVar2->y;
      fVar3 = pVVar2->z;
      pVVar2 = WorldEditorDrawPlane_GetDirectionVector
                         ((Vector3 *)&stack0xffffffd8,this,(MethodInfo *)0x0);
      uVar8 = pVVar2->x;
      uVar9 = pVVar2->y;
      puStack_6 = (undefined *)(fVar5 + (float)uVar8 * _UNK_?);
      fVar7 = fVar7 + (float)uVar9 * _UNK_?;
      fVar3 = fVar3 + pVVar2->z * _UNK_?;
      pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                         ((Component *)this,(MethodInfo *)0x0);
      if (pTVar1 != (Transform *)0x0) {
        value.y = fVar7;
        value.x = (float)puStack_6;
        value.z = fVar3;
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                  (pTVar1,value,(MethodInfo *)0x0);
        WorldEditorDrawPlane_UpdateEditorPlanePosition(this,(MethodInfo *)0x0);
        WorldEditorDrawPlane_UpdateAltitude(this,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
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


/* Void Update() */

void Assembly-CSharp.dll::WorldEditorDrawPlane::WorldEditorDrawPlane_Update
               (WorldEditorDrawPlane *this,MethodInfo *method)

{
  this_00 = this;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  pVVar1 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar2 = (pVVar1->zeroVector).x;
  fVar3 = (pVVar1->zeroVector).y;
  fVar4 = (pVVar1->zeroVector).z;
  bVar5 = WorldEditorDrawPlane_Pick(this,(Vector3 *)&stack0xfffffff0,(MethodInfo *)0x0);
  if (bVar5 == 0) {
    pGVar6 = (this->fields).DrawPlaneCursor;
    if (pGVar6 == (GameObject *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar6,0,(MethodInfo *)0x0);
  }
  else {
    pTVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        ((Component *)this,(MethodInfo *)0x0);
    if (pTVar7 == (Transform *)0x0) goto code_?;
    pTVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        ((Component *)pTVar7,(MethodInfo *)0x0);
    if (pTVar7 == (Transform *)0x0) goto code_?;
    VVar8.y = fVar3;
    VVar8.x = fVar2;
    VVar8.z = fVar4;
    pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_InverseTransformPoint
                        ((Vector3 *)&stack0xfffffff0,pTVar7,VVar8,(MethodInfo *)0x0);
    uVar10 = pVVar9->x;
    uVar11 = pVVar9->y;
    this = (WorldEditorDrawPlane *)pVVar9->z;
    fVar12 = (float)uVar11;
    VVar8.x = (float)uVar10;
    VVar8 = (Vector3)CONCAT84(uVar13,VVar8.x);
    pVVar9 = MathFunctions::MathFunctions_RoundVector
                        ((Vector3 *)&stack0xffffffe4,VVar8,0,(MethodInfo *)0x0);
    fVar4 = pVVar9->x;
    fVar14 = pVVar9->y;
    fVar2 = pVVar9->z;
    pGVar6 = (this_00->fields).DrawPlaneCursor;
    if (pGVar6 == (GameObject *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar6,1,(MethodInfo *)0x0);
    pGVar6 = (this_00->fields).DrawPlaneCursor;
    if (pGVar6 == (GameObject *)0x0) goto code_?;
    pTVar7 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                        (pGVar6,(MethodInfo *)0x0);
    if (pTVar7 == (Transform *)0x0) goto code_?;
    value.y = fVar14;
    value.x = fVar4;
    value.z = fVar2;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
              (pTVar7,value,(MethodInfo *)0x0);
  }
  pTVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                      ((Component *)this_00,(MethodInfo *)0x0);
  this_01 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
  if (this_01 != (MainCameraManager *)0x0) {
    this_02 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        ((Component *)this_01,(MethodInfo *)0x0);
    if (this_02 != (Transform *)0x0) {
      pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                          ((Vector3 *)&stack0xffffffe4,this_02,(MethodInfo *)0x0);
      if (pTVar7 != (Transform *)0x0) {
        pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                  Transform_InverseTransformPoint
                            ((Vector3 *)&stack0xffffffe4,pTVar7,*pVVar9,(MethodInfo *)0x0);
        pVVar9 = MathFunctions::MathFunctions_RoundVector
                            ((Vector3 *)&stack0xffffffe4,*pVVar9,0,(MethodInfo *)0x0);
        fVar15 = pVVar9->x;
        fVar2 = pVVar9->z;
        pGVar6 = (this_00->fields).DrawPlaneVisualization;
        fVar3 = 0.0;
        if (pGVar6 != (GameObject *)0x0) {
          pTVar7 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                              (pGVar6,(MethodInfo *)0x0);
          if (pTVar7 != (Transform *)0x0) {
            value_00.y = fVar3;
            value_00.x = fVar15;
            value_00.z = fVar2;
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                      (pTVar7,value_00,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar16 = (code *)swi(3);
  (*pcVar16)();
  return;
}


/* Void UpdateAltitude() */

void Assembly-CSharp.dll::WorldEditorDrawPlane::WorldEditorDrawPlane_UpdateAltitude
               (WorldEditorDrawPlane *this,MethodInfo *method)

{
  pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                     ((Component *)this,(MethodInfo *)0x0);
  if (pTVar1 != (Transform *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localPosition
              ((Vector3 *)&stack0xffffffe8,pTVar1,(MethodInfo *)0x0);
    pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                       ((Component *)this,(MethodInfo *)0x0);
    if (pTVar1 != (Transform *)0x0) {
      pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localPosition
                         ((Vector3 *)&stack0xffffffe8,pTVar1,(MethodInfo *)0x0);
      this_00 = (Component *)pVVar2->y;
      puVar3 = &UNK_?;
      pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                         (this_00,(MethodInfo *)0x0);
      if (pTVar1 != (Transform *)0x0) {
        pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localPosition
                           ((Vector3 *)&stack0xffffffe8,pTVar1,(MethodInfo *)0x0);
        pWVar4 = (this->fields).OnAltitudeChanged;
        iStack5 = (int)(((float)this_00 + (float)puVar3 + pVVar2->z) - _UNK_?);
        (this->fields)._altitude = iStack5;
        if (pWVar4 != (WorldEditorDrawPlane_AltitudeChangedDelegate *)0x0) {
          pvStack6 = (pWVar4->fields)._._.method;
          pvStack7 = (pWVar4->fields)._._.method_code;
          (*(pWVar4->fields)._._.invoke_impl)();
        }
        return;
      }
    }
  }
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void UpdateEditorPlanePosition() */

void Assembly-CSharp.dll::WorldEditorDrawPlane::WorldEditorDrawPlane_UpdateEditorPlanePosition
               (WorldEditorDrawPlane *this,MethodInfo *method)

{
  pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                     ((Component *)this,(MethodInfo *)0x0);
  if (pTVar1 != (Transform *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localToWorldMatrix
              ((Matrix4x4 *)&stack0xffffff58,pTVar1,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_MultiplyVector
                       (&VStack_3,(Matrix4x4 *)&stack0xffffff98,
                        TypeInfo__UnityEngine__Vector3->static_fields->upVector,(MethodInfo *)0x0);
    pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                       (&VStack_3,*pVVar2,(MethodInfo *)0x0);
    uVar4 = pVVar2->x;
    uVar5 = pVVar2->y;
    fVar6 = pVVar2->z;
    fStack_7 = (float)uVar4;
    uStack_8 = uVar5;
    pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                       ((Component *)this,(MethodInfo *)0x0);
    if (pTVar1 != (Transform *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localToWorldMatrix
                ((Matrix4x4 *)&stack0xffffff58,pTVar1,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_MultiplyPoint
                         (&VStack_9,(Matrix4x4 *)&stack0xffffff98,
                          TypeInfo__UnityEngine__Vector3->static_fields->zeroVector,
                          (MethodInfo *)0x0);
      VStack_3.x = pVVar2->x;
      VStack_3.y = pVVar2->y;
      VStack_3.z = pVVar2->z;
      value.y = (float)uStack_8;
      value.x = fStack_7;
      value.z = fVar6;
      pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                         (&VStack_9,value,(MethodInfo *)0x0);
      uVar10 = pVVar2->x;
      uVar11 = pVVar2->y;
      fVar6 = pVVar2->z;
      (this->fields).editorPlane.m_Normal.x = (float)uVar10;
      (this->fields).editorPlane.m_Normal.y = (float)uVar11;
      (this->fields).editorPlane.m_Normal.z = fVar6;
      (this->fields).editorPlane.m_Distance =
           (float)((uint)((float)uVar10 * VStack_3.x + (float)uVar11 * VStack_3.y +
                         fVar6 * VStack_3.z) ^
                  __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
      return;
    }
  }
  func_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* WorldEditorDrawPlane() */

void Assembly-CSharp.dll::WorldEditorDrawPlane::WorldEditorDrawPlane__ctor
               (WorldEditorDrawPlane *this,MethodInfo *method)

{
  (this->fields).isActive = 1;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  return;
}


/* Boolean get_IsOnLandscape() */

bool Assembly-CSharp.dll::WorldEditorDrawPlane::WorldEditorDrawPlane_get_IsOnLandscape
               (WorldEditorDrawPlane *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MVCubeModelPrototypeTerrain_MethodInfo__MVWorldObjectClientManager__GetSingletonWorldObject<MVCubeModelPrototypeTerrain>__
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  x = (this->fields)._targetGameObject;
  this_00 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (this_00 != (MVWorldObjectClientManager *)0x0) {
    pOVar1 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetSingletonWorldObject
                       (this_00,
                        MVCubeModelPrototypeTerrain_MethodInfo__MVWorldObjectClientManager__GetSingletonWorldObject<MVCubeModelPrototypeTerrain>__
                       );
    if (pOVar1 != (Object *)0x0) {
      y = pOVar1[0x11].klass;
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                        ((Object_1 *)x,(Object_1 *)y,(MethodInfo *)0x0);
      return bVar2;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  bVar2 = (*pcVar3)();
  return bVar2;
}


/* Vector3 get_Pos() */

Vector3 * Assembly-CSharp.dll::WorldEditorDrawPlane::WorldEditorDrawPlane_get_Pos
                    (Vector3 *__return_storage_ptr__,WorldEditorDrawPlane *this,MethodInfo *method)

{
  this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                      ((Component *)this,(MethodInfo *)0x0);
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
  func_?();
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
  if (pWVar1 != (WorldEditorDrawPlane_AltitudeChangedDelegate *)0x0) {
    (*(pWVar1->fields)._._.invoke_impl)
              ((pWVar1->fields)._._.method_code,value,(pWVar1->fields)._._.method);
  }
  return;
}


/* Void set_Orientation(DrawPlaneAxis) */

void Assembly-CSharp.dll::WorldEditorDrawPlane::WorldEditorDrawPlane_set_Orientation
               (WorldEditorDrawPlane *this,DrawPlaneAxis__Enum value,MethodInfo *method)

{
  if (value == DrawPlaneAxis__Enum_X) {
    pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        ((Component *)this,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    pVVar2 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar3._0_4_ = (pVVar2->backVector).x;
    uVar3._4_4_ = (pVVar2->backVector).y;
    fVar4 = (pVVar2->backVector).z;
code_?:
    uVar5 = (undefined4)uVar3;
    uVar6 = (undefined4)((ulonglong)uVar3 >> 0x20);
    fVar7 = 90.0;
code_?:
    axis.y = (float)uVar6;
    axis.x = (float)uVar5;
    axis.z = fVar4;
    pQVar8 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_AngleAxis
                        ((Quaternion *)&stack0xffffffd8,fVar7,axis,(MethodInfo *)0x0);
    if (pTVar1 == (Transform *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localRotation
              (pTVar1,*pQVar8,(MethodInfo *)0x0);
  }
  else {
    if (value == DrawPlaneAxis__Enum_Y) {
      pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                          ((Component *)this,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      pVVar2 = TypeInfo__UnityEngine__Vector3->static_fields;
      uVar5 = (pVVar2->upVector).x;
      uVar6 = (pVVar2->upVector).y;
      fVar4 = (pVVar2->upVector).z;
      fVar7 = 0.0;
      goto code_?;
    }
    if (value == DrawPlaneAxis__Enum_Z) {
      pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                          ((Component *)this,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      pVVar2 = TypeInfo__UnityEngine__Vector3->static_fields;
      uVar3._0_4_ = (pVVar2->rightVector).x;
      uVar3._4_4_ = (pVVar2->rightVector).y;
      fVar4 = (pVVar2->rightVector).z;
      goto code_?;
    }
  }
  bVar9 = WorldEditorDrawPlane_get_IsOnLandscape(this,(MethodInfo *)0x0);
  if (bVar9 == 0) {
    this_00 = (this->fields)._targetGameObject;
    if ((this_00 != (GameObject *)0x0) &&
       (pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                            (this_00,(MethodInfo *)0x0), pTVar1 != (Transform *)0x0)) {
      pVVar10 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                          ((Vector3 *)&stack0xffffffe8,pTVar1,(MethodInfo *)0x0);
      fVar11 = pVVar10->x;
      fVar4 = pVVar10->y;
      fVar7 = pVVar10->z;
code_?:
      pos.y = fVar4;
      pos.x = fVar11;
      pos.z = fVar7;
      WorldEditorDrawPlane_SetToGridAlignedPos(this,pos,(MethodInfo *)0x0);
      WorldEditorDrawPlane_UpdateEditorPlanePosition(this,(MethodInfo *)0x0);
      WorldEditorDrawPlane_UpdateAltitude(this,(MethodInfo *)0x0);
      (this->fields).drawPlaneAxis = value;
      return;
    }
  }
  else {
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    this_01 = (this->fields).mainCamera;
    if ((this_01 != (Camera *)0x0) &&
       (pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                            ((Component *)this_01,(MethodInfo *)0x0), pTVar1 != (Transform *)0x0))
    {
      pVVar10 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_forward
                          ((Vector3 *)&stack0xffffffdc,pTVar1,(MethodInfo *)0x0);
      uVar12 = pVVar10->y;
      fVar4 = _UNK_?;
      if (_UNK_? < (float)uVar12) {
        fVar4 = _UNK_?;
      }
      fVar7 = _UNK_?;
      if (pVVar10->z <= 0.0) {
        fVar7 = _UNK_?;
      }
      pSVar13 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                          ((MethodInfo *)0x0);
      if (pSVar13 != (SpawnRoleDataMediator *)0x0) {
        pVVar10 = Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
                  SpawnRoleVariableTypes::SpawnRoleVariable`1[UnityEngine::Vector3]::
                  SpawnRoleVariable_1_UnityEngine_Vector3__op_Implicit
                            ((Vector3 *)&stack0xffffffdc,
                             (SpawnRoleVariable_1_UnityEngine_Vector3_ *)(pSVar13->fields).position,
                             MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<UnityEngine::Vector3>__op_Implicit_MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<UnityEngine::Vector3>_
                            );
        uVar14 = pVVar10->x;
        uVar15 = pVVar10->y;
        fVar11 = (float)uVar14 + (float)&stack0xffffffdc;
        fVar4 = (float)uVar15 + fVar4;
        fVar7 = pVVar10->z + fVar7;
        goto code_?;
      }
    }
  }
code_?:
  func_?();
  pcVar16 = (code *)swi(3);
  (*pcVar16)();
  return;
}


/* Void set_Pos(Vector3) */

void Assembly-CSharp.dll::WorldEditorDrawPlane::WorldEditorDrawPlane_set_Pos
               (WorldEditorDrawPlane *this,Vector3 value,MethodInfo *method)

{
  this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                      ((Component *)this,(MethodInfo *)0x0);
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
  ppGVar1 = &(this->fields)._targetGameObject;
  *ppGVar1 = value;
  func_?(ppGVar1,value);
  pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                     ((Component *)this,(MethodInfo *)0x0);
  if (*ppGVar1 != (GameObject *)0x0) {
    value_01 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                         (*ppGVar1,(MethodInfo *)0x0);
    if (pTVar2 != (Transform *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_parent
                (pTVar2,value_01,(MethodInfo *)0x0);
      pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                         ((Component *)this,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      if (pTVar2 != (Transform *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
                  (pTVar2,TypeInfo__UnityEngine__Vector3->static_fields->oneVector,(MethodInfo *)0x0
                  );
        pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                           ((Component *)this,(MethodInfo *)0x0);
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        if (pTVar2 != (Transform *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localRotation
                    (pTVar2,TypeInfo__UnityEngine__Quaternion->static_fields->identityQuaternion,
                     (MethodInfo *)0x0);
          pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                             ((Component *)this,(MethodInfo *)0x0);
          pVVar3 = WorldEditorDrawPlane_GetDirectionVector
                             ((Vector3 *)&stack0xffffffe4,this,(MethodInfo *)0x0);
          uVar4 = pVVar3->x;
          uVar5 = pVVar3->y;
          if (pTVar2 != (Transform *)0x0) {
            value_00.y = (float)uVar5 * _UNK_?;
            value_00.x = (float)uVar4 * _UNK_?;
            value_00.z = pVVar3->z * _UNK_?;
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                      (pTVar2,value_00,(MethodInfo *)0x0);
            bVar6 = WorldEditorDrawPlane_get_IsOnLandscape(this,(MethodInfo *)0x0);
            if (bVar6 == 0) {
              if (*ppGVar1 == (GameObject *)0x0) goto code_?;
              value_02 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_layer
                                   (*ppGVar1,(MethodInfo *)0x0);
            }
            else {
              value_02 = LayerUtil::LayerUtil_GetLayerNumber
                                   (LayerFlags__Enum_UIItems,(MethodInfo *)0x0);
            }
            pGVar7 = (this->fields).DrawPlaneVisualization;
            if (pGVar7 != (GameObject *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_set_layer
                        (pGVar7,value_02,(MethodInfo *)0x0);
              pGVar7 = (this->fields).DrawPlaneCursor;
              if (pGVar7 != (GameObject *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_set_layer
                          (pGVar7,value_02,(MethodInfo *)0x0);
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
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}

