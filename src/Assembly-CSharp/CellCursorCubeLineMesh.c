
/* Void Destroy() */

void Assembly-CSharp.dll::CellCursorCubeLineMesh::CellCursorCubeLineMesh_Destroy
               (CellCursorCubeLineMesh *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  obj = (this->fields).gameObject;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
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
  pGVar1 = cubeGameObject;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  (this->fields).pos.x = position.x;
  (this->fields).pos.y = position.y;
  (this->fields).pos.z = position.z;
  fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  pGVar3 = (this->fields).gameObject;
  (this->fields).prevCursorSetTime = fVar2;
  if (pGVar3 != (GameObject *)0x0) {
    pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                       (pGVar3,(MethodInfo *)0x0);
    iVector = (this->fields).pos;
    if ((((uint)(TypeInfo__SharedCubeFunctions->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__SharedCubeFunctions->_1).cctor_started == 0)) {
      func_?(TypeInfo__SharedCubeFunctions);
    }
    pVVar5 = SharedCubeFunctions::SharedCubeFunctions_LocalToWorld
                       ((Vector3 *)&puStack_6,cubeGameObject,iVector,(MethodInfo *)0x0);
    uVar7._0_4_ = pVVar5->x;
    uVar7._4_4_ = pVVar5->y;
    fVar2 = pVVar5->z;
    pGVar3 = (this->fields).gameObject;
    in_stack_8 = (undefined2)((uint)uVar7._4_4_ >> 0x10);
    if (pGVar3 != (GameObject *)0x0) {
      pTVar9 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                         (pGVar3,(MethodInfo *)0x0);
      if (pTVar9 != (Transform *)0x0) {
        value_00.y._2_2_ = in_stack_8;
        value_00._0_6_ = (int6)uVar7;
        value_00.z = fVar2;
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                  (pTVar9,value_00,(MethodInfo *)0x0);
        if (pTVar4 != (Transform *)0x0) {
          uVar10 = CONCAT26(in_stack_8,(int6)uVar7);
          in_stack_8 = (undefined2)((uint)(undefined4)uVar7 >> 0x10);
          cubeGameObject = (GameObject *)((ulonglong)uVar10 >> 0x20);
          value.y = (float)cubeGameObject;
          value.x = (float)(undefined4)uVar7;
          value.z = 0.0;
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                    (pTVar4,value,(MethodInfo *)0x0);
          pGVar3 = (this->fields).gameObject;
          if (pGVar3 != (GameObject *)0x0) {
            pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                               (pGVar3,(MethodInfo *)0x0);
            if (pGVar1 != (GameObject *)0x0) {
              pTVar9 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                                 (pGVar1,(MethodInfo *)0x0);
              if (pTVar9 != (Transform *)0x0) {
                pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                         Transform_get_localScale((Vector3 *)&puStack_6,pTVar9,(MethodInfo *)0x0);
                if (pTVar4 != (Transform *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
                            (pTVar4,*pVVar5,(MethodInfo *)0x0);
                  pGVar3 = (this->fields).gameObject;
                  if (pGVar3 != (GameObject *)0x0) {
                    pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                             GameObject_get_transform(pGVar3,(MethodInfo *)0x0);
                    pTVar9 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                             GameObject_get_transform(pGVar1,(MethodInfo *)0x0);
                    if (pTVar9 != (Transform *)0x0) {
                      pQVar11 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                               Transform_get_rotation
                                         ((Quaternion *)&stack0xffffffec,pTVar9,(MethodInfo *)0x0);
                      if (pTVar4 != (Transform *)0x0) {
                        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
                                  (pTVar4,*pQVar11,(MethodInfo *)0x0);
                        pGVar1 = (this->fields).gameObject;
                        if (pGVar1 != (GameObject *)0x0) {
                          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                                    (pGVar1,1,(MethodInfo *)0x0);
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
  func_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::CellCursorCubeLineMesh::CellCursorCubeLineMesh_Update
               (CellCursorCubeLineMesh *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  fVar1 = (this->fields).fadeOutTime;
  fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  this_00 = (this->fields).gameObject;
  fVar1 = fVar1 - (fVar2 - (this->fields).prevCursorSetTime);
  if (_UNK_? < fVar1) {
    if ((this_00 != (GameObject *)0x0) &&
       (this_02 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_47
                            (this_00,
                             UnityEngine__Renderer_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::Renderer>__
                            ), this_02 != (UseInteractorHandler *)0x0)) {
      pMVar3 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_materials
                         ((Renderer *)this_02,(MethodInfo *)0x0);
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
          pCVar6 = UnityEngine.CoreModule.dll::UnityEngine::Material::Material_GetColor
                             ((Color *)&stack0xffffffd4,this_01,StringLiteral__Color,
                              (MethodInfo *)0x0);
          uVar7 = pCVar6->r;
          uVar8 = pCVar6->g;
          uVar9 = pCVar6->b;
          value.z = (float)uVar9;
          value.y = (float)uVar8;
          value.x = (float)uVar7;
          pMVar3 = (Material__Array *)0x0;
          value.w = (fVar1 / (this->fields).fadeOutTime) * (this->fields).baseAlpha;
          UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetVector
                    (this_01,StringLiteral__Color,value,(MethodInfo *)0x0);
          uVar4 = uVar4 + 1;
          ppMVar5 = ppMVar5 + 1;
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
  uVar10 = func_?();
  func_?(uVar10);
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* CellCursorCubeLineMesh(Single, Material, Single, Vector3[]) */

void Assembly-CSharp.dll::CellCursorCubeLineMesh::CellCursorCubeLineMesh__ctor
               (CellCursorCubeLineMesh *this,float diagonalWidth,Material *material,
               float fadeOutTime,Vector3__Array *cubeCorners,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  (this->fields).pos.x = 0;
  (this->fields).pos.y = 0;
  (this->fields).pos.z = 0;
  (this->fields).fadeOutTime = 0.5;
  ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)this,0.0,unaff_EDI);
  (this->fields).fadeOutTime = fadeOutTime;
  pGVar1 = (GameObject *)func_?(TypeInfo__UnityEngine__GameObject);
  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject__ctor
            (pGVar1,StringLiteral_CellCursorCubeLineMesh,(MethodInfo *)0x0);
  (this->fields).gameObject = pGVar1;
  value = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                    (StringLiteral_UIItems,(MethodInfo *)0x0);
  if (pGVar1 != (GameObject *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_set_layer
              (pGVar1,value,(MethodInfo *)0x0);
    pGVar1 = (this->fields).gameObject;
    if (pGVar1 != (GameObject *)0x0) {
      this_00 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_85
                          (pGVar1,
                           UnityEngine__MeshRenderer_MethodInfo__UnityEngine__GameObject__AddComponent<UnityEngine::MeshRenderer>__
                          );
      if (this_00 != (Worker *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_shadowCastingMode
                  ((Renderer *)this_00,ShadowCastingMode__Enum_Off,(MethodInfo *)0x0);
        UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_receiveShadows
                  ((Renderer *)this_00,0,(MethodInfo *)0x0);
        pGVar1 = (this->fields).gameObject;
        if (pGVar1 != (GameObject *)0x0) {
          this_01 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_85
                              (pGVar1,
                               UnityEngine__MeshFilter_MethodInfo__UnityEngine__GameObject__AddComponent<UnityEngine::MeshFilter>__
                              );
          UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_sharedMaterial
                    ((Renderer *)this_00,(Material *)0x0,(MethodInfo *)0x0);
          this_02 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material
                              ((Renderer *)this_00,(MethodInfo *)0x0);
          if (this_02 != (Material *)0x0) {
            pCVar2 = UnityEngine.CoreModule.dll::UnityEngine::Material::Material_GetColor
                               ((Color *)&stack0xffffffec,this_02,StringLiteral__Color,
                                (MethodInfo *)0x0);
            (this->fields).baseAlpha = pCVar2->a;
            if (this_01 != (Worker *)0x0) {
              mesh = UnityEngine.CoreModule.dll::UnityEngine::MeshFilter::MeshFilter_get_mesh
                               ((MeshFilter *)this_01,(MethodInfo *)0x0);
              if ((((uint)(TypeInfo__SharedCubeFunctions->vtable).Equals.methodPtr & 0x2000000) != 0
                  ) && ((TypeInfo__SharedCubeFunctions->_1).cctor_started == 0)) {
                func_?();
              }
              SharedCubeFunctions::SharedCubeFunctions_AddCubeMeshCubeLines
                        (mesh,cubeCorners,(float)this_00,(MethodInfo *)0x0);
              return;
            }
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


/* Single get_PrevCursorSetTime() */

float Assembly-CSharp.dll::CellCursorCubeLineMesh::CellCursorCubeLineMesh_get_PrevCursorSetTime
                (CellCursorCubeLineMesh *this,MethodInfo *method)

{
  return (this->fields).prevCursorSetTime;
}

