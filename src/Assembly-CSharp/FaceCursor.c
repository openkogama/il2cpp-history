
/* Void Remove() */

void Assembly-CSharp.dll::FaceCursor::FaceCursor_Remove(FaceCursor *this,MethodInfo *method)

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


/* Vector2[] SetUVs(Edge, Boolean) */

Vector2__Array *
Assembly-CSharp.dll::FaceCursor::FaceCursor_SetUVs
          (FaceCursor *this,Edge__Enum edge,bool mirror,MethodInfo *method)

{
  uVar1 = uRam_?;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__ToArray__
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__List__);
    func_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::Vector2>);
    cRam_? = '\x01';
  }
  this_00 = (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)
            func_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Vector2>);
  bVar2 = 0;
  if (this_00 == (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)0x0) {
    func_?();
    bVar3 = *extraout_ECX;
    bVar4 = *extraout_ECX + (byte)unaff_EBX;
    *extraout_ECX = bVar4 + bVar2;
    extraout_ECX[0x3e103e27] =
         extraout_ECX[0x3e103e27] + (char)((uint)uVar1 >> 8) +
         (0x99 < (byte)uVar1 || (CARRY1(bVar3,(byte)unaff_EBX) || CARRY1(bVar4,bVar2)));
    cRam_? = cRam_? + (char)((uint)unaff_EBX >> 8) * -2;
    pcVar5 = (code *)swi(3);
    pVVar6 = (Vector2__Array *)(*pcVar5)();
    return pVVar6;
  }
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[System::Object]::
  LowLevelList_1_System_Object___ctor
            ((LowLevelList_1_System_Object_ *)this_00,
             MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__List__);
  switch(edge) {
  case Edge__Enum_None:
    func_?(this_00,0,0,
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
                   );
    func_?(this_00,0x3f800000,0,
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
                   );
    func_?(this_00,0x3f800000,0x3f800000,
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
                   );
    fVar7 = 0.0;
    goto code_?;
  case Edge__Enum_Front:
    func_?(this_00,(float)mirror,0,
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
                   );
    func_?(this_00,(float)(mirror ^ 1),0,
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
                   );
    func_?(this_00,(float)(mirror ^ 1),0x3f800000,
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
                   );
    break;
  case Edge__Enum_Back:
    func_?(this_00,(float)(mirror ^ 1),0x3f800000,
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
                   );
    func_?(this_00,(float)mirror,0x3f800000,
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
                   );
    func_?(this_00,(float)mirror,0,
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
                   );
    mirror = mirror ^ 1;
    goto code_?;
  case Edge__Enum_Left:
    func_?(this_00,(float)(mirror ^ 1),0,
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
                   );
    func_?(this_00,(float)(mirror ^ 1),0x3f800000,
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
                   );
    func_?(this_00,(float)mirror,0x3f800000,
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
                   );
code_?:
    uStack_8 = 0;
    fVar7 = (float)mirror;
    goto code_?;
  case Edge__Enum_Right:
    func_?(this_00,(float)mirror,0x3f800000,
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
                   );
    func_?(this_00,(float)mirror,0,
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
                   );
    func_?(this_00,(float)(mirror ^ 1),0,
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
                   );
    mirror = mirror ^ 1;
    break;
  default:
    goto code_?;
  }
  fVar7 = (float)mirror;
code_?:
  uStack_8 = 0x3f800000;
code_?:
  func_?(this_00,fVar7,uStack_8,
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
                 );
code_?:
  pUVar9 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
           UnitySynchronizationContext+WorkRequest]::
           List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__ToArray
                     (this_00,
                      MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__ToArray__
                     );
  return (Vector2__Array *)pUVar9;
}


/* Void UpdateCursor(CubePickingInfo, GameObject) */

void Assembly-CSharp.dll::FaceCursor::FaceCursor_UpdateCursor
               (FaceCursor *this,CubePickingInfo *info,GameObject *cubeGameObject,MethodInfo *method
               )

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Cube);
    func_?(0xd70c);
    func_?(&
                    UnityEngine__MeshRenderer_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::MeshRenderer>__
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<int>__Add_int_);
    func_?(&MethodInfo__System__Collections__Generic__List<int>__ToArray__);
    func_?(&MethodInfo__System__Collections__Generic__List<int>__List__);
    func_?(&TypeInfo__System__Collections__Generic__List<int>);
    cRam_? = '\x01';
  }
  if (info != (CubePickingInfo *)0x0) {
    uVar1._0_2_ = (info->fields).iLocalPos.x;
    uVar1._2_2_ = (info->fields).iLocalPos.y;
    cube = (info->fields).cube;
    face = (info->fields).pickedFace;
    iVar2 = (info->fields).iLocalPos.z;
    if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__Cube);
    }
    iVector.z = iVar2;
    iVector.x = (short)uVar1;
    iVector.y = (short)((uint)uVar1 >> 0x10);
    value_00 = Cube::Cube_GetFaceVerticesWorld(cubeGameObject,cube,face,iVector,(MethodInfo *)0x0);
    this_00 = (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)
              func_?(TypeInfo__System__Collections__Generic__List<int>);
    if (this_00 != (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::LowLevelList`1[System::Object]::
      LowLevelList_1_System_Object___ctor
                ((LowLevelList_1_System_Object_ *)this_00,
                 MethodInfo__System__Collections__Generic__List<int>__List__);
      pGVar3 = (this->fields).gameObject;
      if (pGVar3 != (GameObject *)0x0) {
        this_01 = (MeshFilter *)
                  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                            (pGVar3,
                             UnityEngine__MeshFilter_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::MeshFilter>__
                            );
        if (this_01 != (MeshFilter *)0x0) {
          this_02 = UnityEngine.CoreModule.dll::UnityEngine::MeshFilter::MeshFilter_get_mesh
                              (this_01,(MethodInfo *)0x0);
          if (this_02 != (Mesh *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_Clear(this_02,(MethodInfo *)0x0);
            func_?(this_00,0,MethodInfo__System__Collections__Generic__List<int>__Add_int_)
            ;
            func_?(this_00,3,MethodInfo__System__Collections__Generic__List<int>__Add_int_)
            ;
            func_?(this_00,2,MethodInfo__System__Collections__Generic__List<int>__Add_int_)
            ;
            func_?(this_00,2,MethodInfo__System__Collections__Generic__List<int>__Add_int_)
            ;
            func_?(this_00,1,MethodInfo__System__Collections__Generic__List<int>__Add_int_)
            ;
            func_?(this_00,0,MethodInfo__System__Collections__Generic__List<int>__Add_int_)
            ;
            UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_set_vertices
                      (this_02,value_00,(MethodInfo *)0x0);
            value_01 = FaceCursor_SetUVs(this,(info->fields).pickedEdge,
                                         (info->fields).pickedEdgeIndex1,(MethodInfo *)0x0);
            UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_set_uv
                      (this_02,value_01,(MethodInfo *)0x0);
            value_02 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
                       UnitySynchronizationContext+WorkRequest]::
                       List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__ToArray
                                 (this_00,
                                  MethodInfo__System__Collections__Generic__List<int>__ToArray__);
            UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_set_triangles
                      (this_02,(Int32__Array *)value_02,(MethodInfo *)0x0);
            UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_RecalculateNormals
                      (this_02,(MethodInfo *)0x0);
            UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_RecalculateBounds
                      (this_02,(MethodInfo *)0x0);
            if ((info->fields).pickedEdge == 0) {
              pGVar3 = (this->fields).gameObject;
              if (pGVar3 != (GameObject *)0x0) {
                this_03 = (Renderer *)
                          UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                          GameObject_GetComponent_1
                                    (pGVar3,
                                     UnityEngine__MeshRenderer_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::MeshRenderer>__
                                    );
                if (this_03 != (Renderer *)0x0) {
                  value_03 = (this->fields).materialNone;
                  goto code_?;
                }
              }
            }
            else if (((info->fields).pickedEdgeIndex0 == 0) &&
                    ((info->fields).pickedEdgeIndex1 == 0)) {
              pGVar3 = (this->fields).gameObject;
              if (pGVar3 != (GameObject *)0x0) {
                this_03 = (Renderer *)
                          UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                          GameObject_GetComponent_1
                                    (pGVar3,
                                     UnityEngine__MeshRenderer_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::MeshRenderer>__
                                    );
                if (this_03 != (Renderer *)0x0) {
                  value_03 = (this->fields).materialEdge;
code_?:
                  UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_sharedMaterial
                            (this_03,value_03,(MethodInfo *)0x0);
                  pGVar3 = (this->fields).gameObject;
                  if (pGVar3 != (GameObject *)0x0) {
                    pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                              GameObject_get_transform(pGVar3,(MethodInfo *)0x0);
                    pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_get_vertices
                                        (this_02,(MethodInfo *)0x0);
                    if (pVVar5 != (Vector3__Array *)0x0) {
                      if (pVVar5->max_length == 0) goto code_?;
                      if (pTVar4 != (Transform *)0x0) {
                        pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                  Transform_TransformPoint
                                            ((Vector3 *)&stack0xffffffd4,pTVar4,pVVar5->vector[0],
                                             (MethodInfo *)0x0);
                        uVar7 = pVVar6->x;
                        uVar8 = pVVar6->y;
                        fVar9 = pVVar6->z;
                        pGVar3 = (this->fields).gameObject;
                        if (pGVar3 != (GameObject *)0x0) {
                          pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                    GameObject_get_transform(pGVar3,(MethodInfo *)0x0);
                          if (pTVar4 != (Transform *)0x0) {
                            pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                      Transform_get_position
                                                ((Vector3 *)&fStack_10,pTVar4,(MethodInfo *)0x0);
                            uVar11 = pVVar6->x;
                            uVar12 = pVVar6->y;
                            if (value_00 != (Vector3__Array *)0x0) {
                              if (value_00->max_length != 0) {
                                fStack_10 = value_00->vector[0].x;
                                puStack_13 = (undefined *)value_00->vector[0].y;
                                uVar14 = (info->fields).normal.x;
                                uVar15 = (info->fields).normal.y;
                                fVar9 = pVVar6->z +
                                         (value_00->vector[0].z - fVar9) +
                                         (info->fields).normal.z * _UNK_?;
                                info._0_2_ = SUB42(fVar9,0);
                                info._2_2_ = (undefined2)((uint)fVar9 >> 0x10);
                                value.y = (float)uVar12 +
                                          ((float)puStack_13 - (float)uVar8) +
                                          (float)uVar15 * _UNK_?;
                                value.x = (float)uVar11 +
                                          (float)uVar14 * _UNK_? + (fStack_10 - (float)uVar7);
                                value.z._0_2_ = info._0_2_;
                                value.z._2_2_ = info._2_2_;
                                UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                Transform_set_position(pTVar4,value,(MethodInfo *)0x0);
                                return;
                              }
                              goto code_?;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            else {
              pGVar3 = (this->fields).gameObject;
              if (pGVar3 != (GameObject *)0x0) {
                this_03 = (Renderer *)
                          UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                          GameObject_GetComponent_1
                                    (pGVar3,
                                     UnityEngine__MeshRenderer_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::MeshRenderer>__
                                    );
                if (this_03 != (Renderer *)0x0) {
                  value_03 = (this->fields).materialCorner;
                  goto code_?;
                }
              }
            }
          }
        }
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar16 = (code *)swi(3);
  (*pcVar16)();
  return;
}


/* FaceCursor(Material, Material, Material) */

void Assembly-CSharp.dll::FaceCursor::FaceCursor__ctor
               (FaceCursor *this,Material *materialEdgePath,Material *materialCornerPath,
               Material *materialNonePath,MethodInfo *method)

{
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
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_EDI);
  pGVar1 = (GameObject *)func_?(TypeInfo__UnityEngine__GameObject);
  if (pGVar1 != (GameObject *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject__ctor
              (pGVar1,StringLiteral_Cursor,(MethodInfo *)0x0);
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
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_1
                    (pGVar1,
                     UnityEngine__MeshFilter_MethodInfo__UnityEngine__GameObject__AddComponent<UnityEngine::MeshFilter>__
                    );
          (this->fields).materialEdge = materialEdgePath;
          func_?(&(this->fields).materialEdge,materialEdgePath);
          (this->fields).materialCorner = materialCornerPath;
          func_?(&this->fields,materialCornerPath);
          (this->fields).materialNone = materialNonePath;
          func_?(&(this->fields).materialNone,materialNonePath);
          if (this_00 != (Renderer *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_sharedMaterial
                      (this_00,(this->fields).materialEdge,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

