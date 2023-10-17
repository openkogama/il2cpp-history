
/* Void Remove() */

void Assembly-CSharp.dll::ModelCursor3D::ModelCursor3D_Remove
               (ModelCursor3D *this,MethodInfo *method)

{
  pFVar1 = (this->fields)._.faceCursor;
  if (pFVar1 != (FaceCursor *)0x0) {
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Object);
      cRam_? = '\x01';
    }
    pGVar2 = (pFVar1->fields).gameObject;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
              ((Object_1 *)pGVar2,(MethodInfo *)0x0);
    this_00 = (this->fields)._.errorCursor;
    if (this_00 != (CellCursor *)0x0) {
      CellCursor::CellCursor_Remove(this_00,(MethodInfo *)0x0);
      pIVar3 = (this->fields).indentArea;
      if (pIVar3 != (IndentArea *)0x0) {
        if (cRam_? == '\0') {
          func_?(&TypeInfo__UnityEngine__Object);
          cRam_? = '\x01';
        }
        pGVar2 = (pIVar3->fields).gameObject;
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__UnityEngine__Object);
        }
        UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                  ((Object_1 *)pGVar2,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void SetIndentAreaSize(Single) */

void Assembly-CSharp.dll::ModelCursor3D::ModelCursor3D_SetIndentAreaSize
               (ModelCursor3D *this,float size,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pIVar2 = (this->fields).indentArea;
  if (pIVar2 != (IndentArea *)0x0) {
    (pIVar2->fields).size = size;
    return;
  }
  uVar3 = func_?(auStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void UpdateCursor(CubePickingInfo, CubePickingInfo, GameObject, BuildState, Boolean) */

void Assembly-CSharp.dll::ModelCursor3D::ModelCursor3D_UpdateCursor
               (ModelCursor3D *this,CubePickingInfo *movingEdgeCube,CubePickingInfo *selectedCube,
               GameObject *targetGameObject,BuildState__Enum buildState,bool addCube,
               MethodInfo *method)

{
  movingEdgeCube_00 = movingEdgeCube;
  this_01 = this;
  if (movingEdgeCube == (CubePickingInfo *)0x0) {
    pFVar1 = (this->fields)._.faceCursor;
    if (selectedCube != (CubePickingInfo *)0x0) {
      if ((pFVar1 == (FaceCursor *)0x0) ||
         (pGVar2 = (pFVar1->fields).gameObject, pGVar2 == (GameObject *)0x0)) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar2,1,(MethodInfo *)0x0);
      pFVar1 = (this->fields)._.faceCursor;
      if (pFVar1 == (FaceCursor *)0x0) goto code_?;
      goto code_?;
    }
    if ((pFVar1 == (FaceCursor *)0x0) ||
       (pGVar2 = (pFVar1->fields).gameObject, pGVar2 == (GameObject *)0x0)) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar2,0,(MethodInfo *)0x0);
    pIVar3 = (this->fields).indentArea;
    if ((pIVar3 == (IndentArea *)0x0) ||
       (pGVar2 = (pIVar3->fields).gameObject, pGVar2 == (GameObject *)0x0)) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar2,0,(MethodInfo *)0x0);
  }
  else {
    pIVar3 = (this->fields).indentArea;
    if (pIVar3 == (IndentArea *)0x0) goto code_?;
    IndentArea::IndentArea_UpdateIndentArea
              (pIVar3,movingEdgeCube,targetGameObject,(MethodInfo *)0x0);
    pFVar1 = (this->fields)._.faceCursor;
    if ((pFVar1 == (FaceCursor *)0x0) ||
       (pGVar2 = (pFVar1->fields).gameObject, pGVar2 == (GameObject *)0x0)) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar2,1,(MethodInfo *)0x0);
    pFVar1 = (this->fields)._.faceCursor;
    if (pFVar1 == (FaceCursor *)0x0) goto code_?;
    movingEdgeCube = (CubePickingInfo *)0x0;
    this = (ModelCursor3D *)targetGameObject;
    unaff_retaddr = movingEdgeCube_00;
code_?:
    FaceCursor::FaceCursor_UpdateCursor
              (pFVar1,unaff_retaddr,(GameObject *)this,(MethodInfo *)movingEdgeCube);
  }
  this_00 = (this_01->fields)._.errorCursor;
  if (this_00 != (CellCursor *)0x0) {
    CellCursor::CellCursor_UpdateCursor(this_00,(MethodInfo *)0x0);
    ModelCursor::ModelCursor_HandleLaser
              ((ModelCursor *)this_01,movingEdgeCube_00,selectedCube,targetGameObject,buildState,
               addCube,(MethodInfo *)0x0);
    return;
  }
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* ModelCursor3D(Vector3[]) */

void Assembly-CSharp.dll::ModelCursor3D::ModelCursor3D__ctor
               (ModelCursor3D *this,Vector3__Array *cubeCorners,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__FaceCursor);
    func_?(&TypeInfo__IndentArea);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CellCursor);
    cRam_? = '\x01';
  }
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_EDI);
  if (cRam_? == '\0') {
    func_?(&TypeInfo__PrefabPool);
    cRam_? = '\x01';
  }
  pPVar1 = TypeInfo__PrefabPool->static_fields->instance;
  if (pPVar1 != (PrefabPool *)0x0) {
    pMVar2 = (pPVar1->fields).cellCursorErrorMaterial;
    this_00 = (CellCursor *)func_?(TypeInfo__CellCursor);
    if (this_00 != (CellCursor *)0x0) {
      CellCursor::CellCursor__ctor(this_00,1,0.03,pMVar2,1.0,cubeCorners,(MethodInfo *)0x0);
      (this->fields)._.errorCursor = this_00;
      func_?(&(this->fields)._.errorCursor,this_00);
      value = (IndentArea *)func_?(TypeInfo__IndentArea);
      if (value != (IndentArea *)0x0) {
        if (cRam_? == '\0') {
          func_?(&
                          UnityEngine__MeshFilter_MethodInfo__UnityEngine__GameObject__AddComponent<UnityEngine::MeshFilter>__
                         );
          func_?(&
                          UnityEngine__MeshRenderer_MethodInfo__UnityEngine__GameObject__AddComponent<UnityEngine::MeshRenderer>__
                         );
          func_?(&TypeInfo__UnityEngine__GameObject);
          func_?(&StringLiteral_UIItems);
          func_?(&StringLiteral_IndentArea);
          cRam_? = '\x01';
        }
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                  ((Object *)value,ExceptionArgument__Enum_obj,unaff_EBX);
        pGVar3 = (GameObject *)func_?(TypeInfo__UnityEngine__GameObject);
        if (pGVar3 != (GameObject *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject__ctor
                    (pGVar3,StringLiteral_IndentArea,(MethodInfo *)0x0);
          (value->fields).gameObject = pGVar3;
          func_?(&(value->fields).gameObject,pGVar3);
          pGVar3 = (value->fields).gameObject;
          iVar4 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                            (StringLiteral_UIItems,(MethodInfo *)0x0);
          if (pGVar3 != (GameObject *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_set_layer
                      (pGVar3,iVar4,(MethodInfo *)0x0);
            pCVar5 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_main
                               ((MethodInfo *)0x0);
            (value->fields).mainCamera = pCVar5;
            func_?(&(value->fields).mainCamera,pCVar5);
            pGVar3 = (value->fields).gameObject;
            if (pGVar3 != (GameObject *)0x0) {
              pRVar6 = (Renderer *)
                       UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                       GameObject_AddComponent_1
                                 (pGVar3,
                                  UnityEngine__MeshRenderer_MethodInfo__UnityEngine__GameObject__AddComponent<UnityEngine::MeshRenderer>__
                                 );
              pGVar3 = (value->fields).gameObject;
              if (pGVar3 != (GameObject *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_1
                          (pGVar3,
                           UnityEngine__MeshFilter_MethodInfo__UnityEngine__GameObject__AddComponent<UnityEngine::MeshFilter>__
                          );
                if (cRam_? == '\0') {
                  func_?(&TypeInfo__PrefabPool);
                  cRam_? = '\x01';
                }
                pPVar1 = TypeInfo__PrefabPool->static_fields->instance;
                if (pPVar1 != (PrefabPool *)0x0) {
                  pMVar2 = (pPVar1->fields).indentMaterial;
                  (value->fields).materialNone = pMVar2;
                  func_?(&(value->fields).materialNone,pMVar2);
                  if (pRVar6 != (Renderer *)0x0) {
                    UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_sharedMaterial
                              (pRVar6,(value->fields).materialNone,(MethodInfo *)0x0);
                    (this->fields).indentArea = value;
                    func_?(&(this->fields).indentArea,value);
                    if (cRam_? == '\0') {
                      func_?(&TypeInfo__PrefabPool);
                      cRam_? = '\x01';
                    }
                    pPVar1 = TypeInfo__PrefabPool->static_fields->instance;
                    if (pPVar1 != (PrefabPool *)0x0) {
                      pMVar2 = (pPVar1->fields).cursorMaterial;
                      if (cRam_? == '\0') {
                        func_?(&TypeInfo__PrefabPool);
                        cRam_? = '\x01';
                      }
                      pPVar1 = TypeInfo__PrefabPool->static_fields->instance;
                      if (pPVar1 != (PrefabPool *)0x0) {
                        pMVar7 = (pPVar1->fields).cursorCornerMaterial;
                        if (cRam_? == '\0') {
                          func_?(&TypeInfo__PrefabPool);
                          cRam_? = '\x01';
                        }
                        pPVar1 = TypeInfo__PrefabPool->static_fields->instance;
                        if (pPVar1 != (PrefabPool *)0x0) {
                          pMVar8 = (pPVar1->fields).cursorNoneMaterial;
                          value_00 = (FaceCursor *)func_?(TypeInfo__FaceCursor);
                          if (value_00 != (FaceCursor *)0x0) {
                            if (cRam_? == '\0') {
                              func_?(&
                                              UnityEngine__MeshFilter_MethodInfo__UnityEngine__GameObject__AddComponent<UnityEngine::MeshFilter>__
                                             );
                              func_?(&
                                              UnityEngine__MeshRenderer_MethodInfo__UnityEngine__GameObject__AddComponent<UnityEngine::MeshRenderer>__
                                             );
                              func_?(&TypeInfo__UnityEngine__GameObject);
                              func_?(&StringLiteral_Cursor);
                              func_?(&StringLiteral_UIItems);
                              cRam_? = '\x01';
                            }
                            mscorlib.dll::System::ThrowHelper::
                            ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                                      ((Object *)value_00,ExceptionArgument__Enum_obj,unaff_EBX);
                            pGVar3 = (GameObject *)
                                     func_?(TypeInfo__UnityEngine__GameObject);
                            if (pGVar3 != (GameObject *)0x0) {
                              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject__ctor
                                        (pGVar3,StringLiteral_Cursor,(MethodInfo *)0x0);
                              (value_00->fields).gameObject = pGVar3;
                              func_?(&(value_00->fields).gameObject,pGVar3);
                              pGVar3 = (value_00->fields).gameObject;
                              iVar4 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::
                                      LayerMask_NameToLayer(StringLiteral_UIItems,(MethodInfo *)0x0)
                              ;
                              if (pGVar3 != (GameObject *)0x0) {
                                UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                GameObject_set_layer(pGVar3,iVar4,(MethodInfo *)0x0);
                                pGVar3 = (value_00->fields).gameObject;
                                if (pGVar3 != (GameObject *)0x0) {
                                  pRVar6 = (Renderer *)
                                           UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                           GameObject_AddComponent_1
                                                     (pGVar3,
                                                  UnityEngine__MeshRenderer_MethodInfo__UnityEngine__GameObject__AddComponent<UnityEngine::MeshRenderer>__
                                                  );
                                  pGVar3 = (value_00->fields).gameObject;
                                  if (pGVar3 != (GameObject *)0x0) {
                                    UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                    GameObject_AddComponent_1
                                              (pGVar3,
                                               UnityEngine__MeshFilter_MethodInfo__UnityEngine__GameObject__AddComponent<UnityEngine::MeshFilter>__
                                              );
                                    (value_00->fields).materialEdge = pMVar2;
                                    func_?(&(value_00->fields).materialEdge,pMVar2);
                                    (value_00->fields).materialCorner = pMVar7;
                                    func_?(&value_00->fields,pMVar7);
                                    (value_00->fields).materialNone = pMVar8;
                                    func_?(&(value_00->fields).materialNone,pMVar8);
                                    if (pRVar6 != (Renderer *)0x0) {
                                      UnityEngine.CoreModule.dll::UnityEngine::Renderer::
                                      Renderer_set_sharedMaterial
                                                (pRVar6,(value_00->fields).materialEdge,
                                                 (MethodInfo *)0x0);
                                      (this->fields)._.faceCursor = value_00;
                                      func_?(&this->fields,value_00);
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
                }
              }
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void set_CursorVisible(Boolean) */

void Assembly-CSharp.dll::ModelCursor3D::ModelCursor3D_set_CursorVisible
               (ModelCursor3D *this,bool value,MethodInfo *method)

{
  pFVar1 = (this->fields)._.faceCursor;
  if ((pFVar1 != (FaceCursor *)0x0) &&
     (pGVar2 = (pFVar1->fields).gameObject, pGVar2 != (GameObject *)0x0)) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar2,value,(MethodInfo *)0x0);
    this_00 = (this->fields)._.errorCursor;
    if (this_00 != (CellCursor *)0x0) {
      CellCursor::CellCursor_set_Active(this_00,value,(MethodInfo *)0x0);
      pIVar3 = (this->fields).indentArea;
      if ((pIVar3 != (IndentArea *)0x0) &&
         (pGVar2 = (pIVar3->fields).gameObject, pGVar2 != (GameObject *)0x0)) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar2,value,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

