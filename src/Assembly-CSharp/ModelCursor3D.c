
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
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_EDI);
  if (cRam_? == '\0') {
    func_?(&TypeInfo__PrefabPool);
    cRam_? = '\x01';
  }
  pPVar1 = TypeInfo__PrefabPool->static_fields->instance;
  if (pPVar1 != (PrefabPool *)0x0) {
    pMVar2 = (pPVar1->fields).cellCursorErrorMaterial;
    this_00 = (CellCursor *)func_?(TypeInfo__CellCursor);
    CellCursor::CellCursor__ctor(this_00,1,0.03,pMVar2,1.0,cubeCorners,(MethodInfo *)0x0);
    ppCVar3 = &(this->fields)._.errorCursor;
    *ppCVar3 = this_00;
    func_?(ppCVar3,this_00);
    value = (Il2CppType *)func_?(TypeInfo__IndentArea);
    if (cRam_? == '\0') {
      func_?();
      func_?();
      func_?(&TypeInfo__UnityEngine__GameObject);
      func_?(&StringLiteral_UIItems);
      func_?(&StringLiteral_IndentArea);
      cRam_? = '\x01';
    }
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
              ((Object *)value,ExceptionArgument__Enum_obj,(MethodInfo *)cubeCorners);
    pGVar4 = TypeInfo__UnityEngine__GameObject;
    pGVar5 = (GameObject *)func_?();
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject__ctor
              (pGVar5,StringLiteral_IndentArea,(MethodInfo *)0x0);
    puVar6 = &value[2].attrs;
    *(GameObject **)puVar6 = pGVar5;
    func_?(puVar6);
    pGVar5 = *(GameObject **)puVar6;
    iVar7 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                       (StringLiteral_UIItems,(MethodInfo *)0x0);
    if (pGVar5 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_set_layer
                (pGVar5,iVar7,(MethodInfo *)0x0);
      pCVar8 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_main((MethodInfo *)0x0);
      value[2].data.typeHandle = (Il2CppMetadataTypeHandle)pCVar8;
      func_?(value + 2,pCVar8);
      if (*(GameObject **)puVar6 != (GameObject *)0x0) {
        pRVar9 = (Renderer *)
                  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_1
                            (*(GameObject **)puVar6,
                             UnityEngine__MeshRenderer_MethodInfo__UnityEngine__GameObject__AddComponent<UnityEngine::MeshRenderer>__
                            );
        if (*(GameObject **)puVar6 != (GameObject *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_1
                    (*(GameObject **)puVar6,
                     UnityEngine__MeshFilter_MethodInfo__UnityEngine__GameObject__AddComponent<UnityEngine::MeshFilter>__
                    );
          if (cRam_? == '\0') {
            func_?(&TypeInfo__PrefabPool);
            cRam_? = '\x01';
          }
          pPVar1 = TypeInfo__PrefabPool->static_fields->instance;
          if (pPVar1 != (PrefabPool *)0x0) {
            pMVar2 = (pPVar1->fields).indentMaterial;
            puVar6 = &value[1].attrs;
            *(Material **)puVar6 = pMVar2;
            func_?(puVar6,pMVar2);
            if (pRVar9 != (Renderer *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_sharedMaterial
                        (pRVar9,*(Material **)puVar6,(MethodInfo *)0x0);
              pIVar10 = &(pGVar4->_0).byval_arg;
              (pIVar10->data).type = value;
              func_?(pIVar10,value);
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
                  pOVar11 = (Object__Class *)(pPVar1->fields).cursorCornerMaterial;
                  if (cRam_? == '\0') {
                    func_?(&TypeInfo__PrefabPool);
                    cRam_? = '\x01';
                  }
                  pPVar1 = TypeInfo__PrefabPool->static_fields->instance;
                  if (pPVar1 != (PrefabPool *)0x0) {
                    pOVar12 = (Object__Class *)(pPVar1->fields).cursorNoneMaterial;
                    value_00 = (Object *)func_?(TypeInfo__FaceCursor);
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
                    ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                              (value_00,ExceptionArgument__Enum_obj,unaff_EBX);
                    pGVar5 = (GameObject *)func_?(TypeInfo__UnityEngine__GameObject);
                    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject__ctor
                              (pGVar5,StringLiteral_Cursor,(MethodInfo *)0x0);
                    value_00[2].monitor = (MonitorData *)pGVar5;
                    func_?(&value_00[2].monitor,pGVar5);
                    pGVar5 = (GameObject *)value_00[2].monitor;
                    iVar7 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::
                             LayerMask_NameToLayer(StringLiteral_UIItems,(MethodInfo *)0x0);
                    if (pGVar5 != (GameObject *)0x0) {
                      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_set_layer
                                (pGVar5,iVar7,(MethodInfo *)0x0);
                      if ((GameObject *)value_00[2].monitor != (GameObject *)0x0) {
                        pRVar9 = (Renderer *)
                                  UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                  GameObject_AddComponent_1
                                            ((GameObject *)value_00[2].monitor,
                                             UnityEngine__MeshRenderer_MethodInfo__UnityEngine__GameObject__AddComponent<UnityEngine::MeshRenderer>__
                                            );
                        if ((GameObject *)value_00[2].monitor != (GameObject *)0x0) {
                          UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                          GameObject_AddComponent_1
                                    ((GameObject *)value_00[2].monitor,
                                     UnityEngine__MeshFilter_MethodInfo__UnityEngine__GameObject__AddComponent<UnityEngine::MeshFilter>__
                                    );
                          ppMVar13 = &value_00[1].monitor;
                          *ppMVar13 = (MonitorData *)pMVar2;
                          func_?(ppMVar13,pMVar2);
                          value_00[1].klass = pOVar11;
                          func_?(value_00 + 1,pOVar11);
                          value_00[2].klass = pOVar12;
                          func_?(value_00 + 2,pOVar12);
                          if (pRVar9 != (Renderer *)0x0) {
                            UnityEngine.CoreModule.dll::UnityEngine::Renderer::
                            Renderer_set_sharedMaterial
                                      (pRVar9,(Material *)*ppMVar13,(MethodInfo *)0x0);
                            ppcVar14 = &(pGVar4->_0).name;
                            *ppcVar14 = (char *)value_00;
                            func_?(ppcVar14,value_00);
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
  func_?();
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
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

