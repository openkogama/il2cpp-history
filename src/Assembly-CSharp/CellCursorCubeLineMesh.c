
/* Void ChangeMaterial(Material) */

void Assembly-CSharp.dll::CellCursorCubeLineMesh::CellCursorCubeLineMesh_ChangeMaterial
               (CellCursorCubeLineMesh *this,Material *material,MethodInfo *method)

{
  pMStack_1 = (Material *)&stack0xfffffffc;
  pMVar2 = (this->fields).meshRenderer;
  if (pMVar2 != (MeshRenderer *)0x0) {
    if (pcRam_? == (code *)0x0) {
      pcRam_? = (code *)func_?();
    }
    pMStack_1 = material;
    pMStack_3 = pMVar2;
    (*pcRam_?)();
    return;
  }
  uVar4 = func_?(&puStack_5);
  func_?(uVar4);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void Destroy() */

void Assembly-CSharp.dll::CellCursorCubeLineMesh::CellCursorCubeLineMesh_Destroy
               (CellCursorCubeLineMesh *this,MethodInfo *method)

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

void Assembly-CSharp.dll::CellCursorCubeLineMesh::CellCursorCubeLineMesh_SetCursorCube
               (CellCursorCubeLineMesh *this,IntVector position,GameObject *cubeGameObject,
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
        in_stack_5 = (undefined2)((uint)pGVar2 >> 0x10);
        pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                           (pGVar2,(MethodInfo *)0x0);
        if (cubeGameObject != (GameObject *)0x0) {
          pTVar6 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                             (cubeGameObject,(MethodInfo *)0x0);
          if (pTVar6 != (Transform *)0x0) {
            pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localScale
                               ((Vector3 *)&stack0xfffffff0,pTVar6,(MethodInfo *)0x0);
            if (pTVar3 != (Transform *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
                        (pTVar3,*pVVar4,(MethodInfo *)0x0);
              pGVar2 = (this->fields).gameObject;
              if (pGVar2 != (GameObject *)0x0) {
                pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                         GameObject_get_transform(pGVar2,(MethodInfo *)0x0);
                pTVar6 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                         GameObject_get_transform(cubeGameObject,(MethodInfo *)0x0);
                if (pTVar6 != (Transform *)0x0) {
                  pQVar7 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                           Transform_get_rotation
                                     ((Quaternion *)&stack0xffffffec,pTVar6,(MethodInfo *)0x0);
                  if (pTVar3 != (Transform *)0x0) {
                    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
                              (pTVar3,*pQVar7,(MethodInfo *)0x0);
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
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::CellCursorCubeLineMesh::CellCursorCubeLineMesh_Update
               (CellCursorCubeLineMesh *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CellCursorCubeLineMesh);
    func_?(&
                    UnityEngine__Renderer_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::Renderer>__
                   );
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
          if ((TypeInfo__CellCursorCubeLineMesh->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          pCVar6 = UnityEngine.CoreModule.dll::UnityEngine::Material::Material_GetColor_1
                             ((Color *)&stack0xffffffd4,this_01,
                              TypeInfo__CellCursorCubeLineMesh->static_fields->ColorID,
                              (MethodInfo *)0x0);
          uVar7 = pCVar6->r;
          uVar8 = pCVar6->g;
          uVar9 = pCVar6->b;
          value.z = (float)uVar9;
          value.y = (float)uVar8;
          value.x = (float)uVar7;
          iVar10 = 0;
          value.w = (fVar1 / (this->fields).fadeOutTime) * (this->fields).baseAlpha;
          UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetVector_1
                    (this_01,TypeInfo__CellCursorCubeLineMesh->static_fields->ColorID,value,
                     (MethodInfo *)0x0);
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


/* CellCursorCubeLineMesh() */

void Assembly-CSharp.dll::CellCursorCubeLineMesh::CellCursorCubeLineMesh__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CellCursorCubeLineMesh);
    func_?(&StringLiteral__Color);
    cRam_? = '\x01';
  }
  iVar1 = UnityEngine.CoreModule.dll::UnityEngine::Shader::Shader_PropertyToID
                    (StringLiteral__Color,(MethodInfo *)0x0);
  TypeInfo__CellCursorCubeLineMesh->static_fields->ColorID = iVar1;
  return;
}


/* CellCursorCubeLineMesh(Single, Material, Single, Vector3[]) */

void Assembly-CSharp.dll::CellCursorCubeLineMesh::CellCursorCubeLineMesh__ctor
               (CellCursorCubeLineMesh *this,float diagonalWidth,Material *material,
               float fadeOutTime,Vector3__Array *cubeCorners,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CellCursorCubeLineMesh);
    func_?(&
                    UnityEngine__MeshFilter_MethodInfo__UnityEngine__GameObject__AddComponent<UnityEngine::MeshFilter>__
                   );
    func_?(&
                    UnityEngine__MeshRenderer_MethodInfo__UnityEngine__GameObject__AddComponent<UnityEngine::MeshRenderer>__
                   );
    func_?(&TypeInfo__UnityEngine__GameObject);
    func_?(&TypeInfo__SharedCubeFunctions);
    func_?(&StringLiteral_UIItems);
    func_?(&StringLiteral_CellCursorCubeLineMesh);
    cRam_? = '\x01';
  }
  (this->fields).fadeOutTime = 0.5;
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_EDI);
  (this->fields).fadeOutTime = fadeOutTime;
  pGVar1 = (GameObject *)func_?(TypeInfo__UnityEngine__GameObject);
  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject__ctor
            (pGVar1,StringLiteral_CellCursorCubeLineMesh,(MethodInfo *)0x0);
  value = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                    (StringLiteral_UIItems,(MethodInfo *)0x0);
  if (pGVar1 != (GameObject *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_set_layer
              (pGVar1,value,(MethodInfo *)0x0);
    (this->fields).gameObject = pGVar1;
    func_?();
    pGVar1 = (this->fields).gameObject;
    if (pGVar1 != (GameObject *)0x0) {
      pMVar2 = (MeshRenderer *)
               UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_1
                         (pGVar1,
                          UnityEngine__MeshRenderer_MethodInfo__UnityEngine__GameObject__AddComponent<UnityEngine::MeshRenderer>__
                         );
      (this->fields).meshRenderer = pMVar2;
      func_?();
      pMVar2 = (this->fields).meshRenderer;
      if (pMVar2 != (MeshRenderer *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_shadowCastingMode
                  ((Renderer *)pMVar2,ShadowCastingMode__Enum_Off,(MethodInfo *)0x0);
        pMVar2 = (this->fields).meshRenderer;
        if (pMVar2 != (MeshRenderer *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_receiveShadows
                    ((Renderer *)pMVar2,0,(MethodInfo *)0x0);
          pGVar1 = (this->fields).gameObject;
          if (pGVar1 != (GameObject *)0x0) {
            this_00 = (MeshFilter *)
                      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_1
                                (pGVar1,
                                 UnityEngine__MeshFilter_MethodInfo__UnityEngine__GameObject__AddComponent<UnityEngine::MeshFilter>__
                                );
            pMVar2 = (this->fields).meshRenderer;
            if (pMVar2 != (MeshRenderer *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_sharedMaterial
                        ((Renderer *)pMVar2,material,(MethodInfo *)0x0);
              pMVar2 = (this->fields).meshRenderer;
              if (pMVar2 != (MeshRenderer *)0x0) {
                this_01 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material
                                    ((Renderer *)pMVar2,(MethodInfo *)0x0);
                if ((TypeInfo__CellCursorCubeLineMesh->_1).cctor_finished_or_no_cctor == 0) {
                  func_?();
                }
                if (this_01 != (Material *)0x0) {
                  pCVar3 = UnityEngine.CoreModule.dll::UnityEngine::Material::Material_GetColor_1
                                     ((Color *)&stack0xffffffec,this_01,
                                      TypeInfo__CellCursorCubeLineMesh->static_fields->ColorID,
                                      (MethodInfo *)0x0);
                  (this->fields).baseAlpha = pCVar3->a;
                  if (this_00 != (MeshFilter *)0x0) {
                    mesh = UnityEngine.CoreModule.dll::UnityEngine::MeshFilter::MeshFilter_get_mesh
                                     (this_00,(MethodInfo *)0x0);
                    if ((TypeInfo__SharedCubeFunctions->_1).cctor_finished_or_no_cctor == 0) {
                      func_?();
                    }
                    SharedCubeFunctions::SharedCubeFunctions_AddCubeMeshCubeLines
                              (mesh,(Vector3__Array *)&UNK_?,3.8636664e-29,(MethodInfo *)0x0)
                    ;
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
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

