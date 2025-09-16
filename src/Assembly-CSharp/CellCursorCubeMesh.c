
/* Void Destroy() */

void Assembly-CSharp.dll::CellCursorCubeMesh::CellCursorCubeMesh_Destroy
               (CellCursorCubeMesh *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  obj = (this->fields).gameObject;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
            ((Object_1 *)obj,(MethodInfo *)0x0);
  return;
}


/* Void SetCursorCube(IntVector, GameObject) */

void Assembly-CSharp.dll::CellCursorCubeMesh::CellCursorCubeMesh_SetCursorCube
               (CellCursorCubeMesh *this,IntVector position,GameObject *cubeGameObject,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__SharedCubeFunctions);
    cRam_? = '\x01';
  }
  (this->fields).pos.x = position.x;
  (this->fields).pos.y = position.y;
  (this->fields).pos.z = position.z;
  fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  pGVar2 = (this->fields).gameObject;
  (this->fields).prevCursorSetTime = fVar1;
  if (pGVar2 != (GameObject *)0x0) {
    pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                       (pGVar2,(MethodInfo *)0x0);
    iVector = (this->fields).pos;
    if ((TypeInfo__SharedCubeFunctions->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__SharedCubeFunctions);
    }
    pVVar4 = SharedCubeFunctions::SharedCubeFunctions_LocalToWorld
                       ((Vector3 *)&stack0xfffffff0,cubeGameObject,iVector,(MethodInfo *)0x0);
    if (pTVar3 != (Transform *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                (pTVar3,*pVVar4,(MethodInfo *)0x0);
      pGVar2 = (this->fields).gameObject;
      if (pGVar2 != (GameObject *)0x0) {
        pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                           (pGVar2,(MethodInfo *)0x0);
        if (cubeGameObject != (GameObject *)0x0) {
          in_stack_5 = 0;
          pTVar6 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                             (cubeGameObject,(MethodInfo *)0x0);
          if (pTVar6 != (Transform *)0x0) {
            in_stack_5 = (undefined2)((uint)&stack0xffffffe4 >> 0x10);
            pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localScale
                               ((Vector3 *)&stack0xffffffe4,pTVar6,(MethodInfo *)0x0);
            uVar7 = pVVar4->x;
            uVar8 = pVVar4->y;
            if (pTVar3 != (Transform *)0x0) {
              in_stack_5 = 0x1044;
              value.y = (float)uVar8 * _UNK_?;
              value.x = (float)uVar7 * _UNK_?;
              value.z = pVVar4->z * _UNK_?;
              UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
                        (pTVar3,value,(MethodInfo *)0x0);
              pGVar2 = (this->fields).gameObject;
              if (pGVar2 != (GameObject *)0x0) {
                pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                         GameObject_get_transform(pGVar2,(MethodInfo *)0x0);
                pTVar6 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                         GameObject_get_transform(cubeGameObject,(MethodInfo *)0x0);
                if (pTVar6 != (Transform *)0x0) {
                  pQVar9 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                           Transform_get_rotation
                                     ((Quaternion *)&stack0xffffffe0,pTVar6,(MethodInfo *)0x0);
                  if (pTVar3 != (Transform *)0x0) {
                    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
                              (pTVar3,*pQVar9,(MethodInfo *)0x0);
                    pGVar2 = (this->fields).gameObject;
                    if (pGVar2 != (GameObject *)0x0) {
                      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                                (pGVar2,1,(MethodInfo *)0x0);
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
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::CellCursorCubeMesh::CellCursorCubeMesh_Update
               (CellCursorCubeMesh *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    UnityEngine__Renderer_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::Renderer>__
                   );
    func_?(&StringLiteral__Color);
    cRam_? = '\x01';
  }
  fVar1 = (this->fields).fadeOutTime;
  fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  this_00 = (this->fields).gameObject;
  fVar1 = fVar1 - (fVar2 - (this->fields).prevCursorSetTime);
  if (_UNK_? < fVar1) {
    if ((this_00 != (GameObject *)0x0) &&
       (this_02 = (Renderer *)
                  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                            (this_00,
                             UnityEngine__Renderer_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::Renderer>__
                            ), this_02 != (Renderer *)0x0)) {
      pMVar3 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_materials
                         (this_02,(MethodInfo *)0x0);
      uVar4 = 0;
      if (pMVar3 != (Material__Array *)0x0) {
        ppMVar5 = pMVar3->vector;
        while( true ) {
          if ((int)pMVar3->max_length <= (int)uVar4) {
            return;
          }
          if (pMVar3->max_length <= uVar4) break;
          this_01 = *ppMVar5;
          if (this_01 == (Material *)0x0) goto code_?;
          UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_set_hideFlags
                    ((Object_1 *)this_01,HideFlags__Enum_DontSave,(MethodInfo *)0x0);
          pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Material::Material_GetVector
                             ((Vector4 *)&stack0xffffffd4,this_01,StringLiteral__Color,
                              (MethodInfo *)0x0);
          uVar7 = pVVar6->x;
          uVar8 = pVVar6->y;
          uVar9 = pVVar6->z;
          value.z = (float)uVar9;
          value.y = (float)uVar8;
          value.x = (float)uVar7;
          iVar10 = 0;
          value.w = fVar1 / (this->fields).fadeOutTime;
          UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetVector
                    (this_01,StringLiteral__Color,value,(MethodInfo *)0x0);
          uVar4 = uVar4 + 1;
          ppMVar5 = (Material **)(iVar10 + 4);
        }
        goto code_?;
      }
    }
  }
  else if (this_00 != (GameObject *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (this_00,0,(MethodInfo *)0x0);
    return;
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* CellCursorCubeMesh() */

void Assembly-CSharp.dll::CellCursorCubeMesh::CellCursorCubeMesh__ctor
               (CellCursorCubeMesh *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MV__WorldObject__CubeBase);
    func_?(&
                    UnityEngine__MeshFilter_MethodInfo__UnityEngine__GameObject__AddComponent<UnityEngine::MeshFilter>__
                   );
    func_?(&
                    UnityEngine__MeshRenderer_MethodInfo__UnityEngine__GameObject__AddComponent<UnityEngine::MeshRenderer>__
                   );
    func_?(&TypeInfo__UnityEngine__GameObject);
    func_?(&TypeInfo__SharedCubeFunctions);
    func_?(&StringLiteral_UIItems);
    func_?(&StringLiteral_CellCursor);
    cRam_? = '\x01';
  }
  (this->fields).fadeOutTime = 0.5;
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_EDI);
  pGVar1 = (GameObject *)func_?(TypeInfo__UnityEngine__GameObject);
  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject__ctor
            (pGVar1,StringLiteral_CellCursor,(MethodInfo *)0x0);
  (this->fields).gameObject = pGVar1;
  func_?(&(this->fields).gameObject,pGVar1);
  pGVar1 = (this->fields).gameObject;
  value = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                    (StringLiteral_UIItems,(MethodInfo *)0x0);
  if (pGVar1 != (GameObject *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_set_layer
              (pGVar1,value,(MethodInfo *)0x0);
    pGVar1 = (this->fields).gameObject;
    if (pGVar1 != (GameObject *)0x0) {
      this_00 = (Renderer *)
                UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_1
                          (pGVar1,
                           UnityEngine__MeshRenderer_MethodInfo__UnityEngine__GameObject__AddComponent<UnityEngine::MeshRenderer>__
                          );
      pGVar1 = (this->fields).gameObject;
      if (pGVar1 != (GameObject *)0x0) {
        this_01 = (MeshFilter *)
                  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_1
                            (pGVar1,
                             UnityEngine__MeshFilter_MethodInfo__UnityEngine__GameObject__AddComponent<UnityEngine::MeshFilter>__
                            );
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        pPVar2 = TypeInfo__PrefabPool->static_fields->instance;
        if ((pPVar2 != (PrefabPool *)0x0) && (this_00 != (Renderer *)0x0)) {
          UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_sharedMaterial
                    (this_00,(pPVar2->fields).modelCubeSpaceMaterial,(MethodInfo *)0x0);
          if (this_01 != (MeshFilter *)0x0) {
            mesh = UnityEngine.CoreModule.dll::UnityEngine::MeshFilter::MeshFilter_get_mesh
                             (this_01,(MethodInfo *)0x0);
            if ((TypeInfo__MV__WorldObject__CubeBase->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            corners = MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_get_IdentityCorners
                                ((MethodInfo *)0x0);
            if ((TypeInfo__SharedCubeFunctions->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            SharedCubeFunctions::SharedCubeFunctions_AddCubeMesh(mesh,corners,1,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

