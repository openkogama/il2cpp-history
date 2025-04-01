
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
  this_00 = (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
             *)func_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Vector2>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_00,
             MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__List__);
  switch(edge) {
  case Edge__Enum_None:
    if (this_00 ==
        (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_ *
        )0x0) {
code_?:
      bVar1 = 0;
      uVar2 = func_?();
      uRam_? = uVar2;
      *unaff_EDI = *unaff_ESI;
      bVar3 = (byte)uVar2 + extraout_CH;
      unaff_EDI[1] = unaff_ESI[1];
      pcVar4 = (char *)((int)&this_00[-0x9f526f].fields._size + 2);
      *pcVar4 = *pcVar4 + bVar3 + bVar1 + (CARRY1((byte)uVar2,extraout_CH) || CARRY1(bVar3,bVar1));
      pcVar5 = (code *)swi(3);
      pVVar6 = (Vector2__Array *)(*pcVar5)();
      return pVVar6;
    }
    func_?(this_00,0,0,
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
                   );
    func_?(this_00,0x3f800000,0,
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
                   );
    func_?(this_00,0x3f800000,0x3f800000,
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
                   );
    fStack_7 = 0.0;
    break;
  case Edge__Enum_Front:
    unaff_ESI = (undefined4 *)(uint)mirror;
    if (this_00 ==
        (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_ *
        )0x0) goto code_?;
    func_?(this_00,(float)(int)unaff_ESI,0,
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
                   );
    func_?(this_00,(float)(mirror ^ 1),0,
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
                   );
    func_?(this_00,(float)(mirror ^ 1),0x3f800000,
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
                   );
    func_?(this_00,(float)(int)unaff_ESI,0x3f800000,
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
                   );
    goto code_?;
  case Edge__Enum_Back:
    unaff_ESI = (undefined4 *)(uint)(mirror ^ 1);
    if (this_00 ==
        (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_ *
        )0x0) goto code_?;
    func_?(this_00,(float)(int)unaff_ESI,0x3f800000,
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
                   );
    func_?(this_00,(float)mirror,0x3f800000,
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
                   );
    uStack_8 = 0;
    goto code_?;
  case Edge__Enum_Left:
    unaff_ESI = (undefined4 *)(uint)(mirror ^ 1);
    if (this_00 ==
        (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_ *
        )0x0) goto code_?;
    func_?(this_00,(float)(int)unaff_ESI,0,
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
                   );
    func_?(this_00,(float)(int)unaff_ESI,0x3f800000,
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
                   );
    unaff_ESI = (undefined4 *)(uint)mirror;
    uStack_8 = 0x3f800000;
code_?:
    func_?(this_00,(float)mirror,uStack_8,
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
                   );
    fStack_7 = (float)(int)unaff_ESI;
    uStack_8 = 0;
    goto code_?;
  case Edge__Enum_Right:
    unaff_ESI = (undefined4 *)(uint)mirror;
    if (this_00 ==
        (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_ *
        )0x0) goto code_?;
    func_?(this_00,(float)(int)unaff_ESI,0x3f800000,
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
                   );
    func_?(this_00,(float)(int)unaff_ESI,0,
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
                   );
    func_?(this_00,(float)(mirror ^ 1),0,
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
                   );
    fStack_7 = (float)(mirror ^ 1);
    break;
  default:
    if (this_00 ==
        (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_ *
        )0x0) goto code_?;
    goto code_?;
  }
  uStack_8 = 0x3f800000;
code_?:
  func_?(this_00,fStack_7,uStack_8,
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
                 );
code_?:
  pMVar9 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::Internal::
           MultiColumnCollectionHeader+ViewState+ColumnState]::
           List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState__ToArray
                     (this_00,
                      MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__ToArray__
                     );
  return (Vector2__Array *)pMVar9;
}


/* Void UpdateCursor(CubePickingInfo, GameObject) */

void Assembly-CSharp.dll::FaceCursor::FaceCursor_UpdateCursor
               (FaceCursor *this,CubePickingInfo *info,GameObject *cubeGameObject,MethodInfo *method
               )

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Cube);
    func_?(0x618c);
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
    this_00 = (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
               *)func_?(TypeInfo__System__Collections__Generic__List<int>);
    mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
    __Il2CppFullySharedGenericType]::
    LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
              ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_00,
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
          pMVar4 = MethodInfo__System__Collections__Generic__List<int>__Add_int_;
          if (this_00 !=
              (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
               *)0x0) {
            piVar5 = &(this_00->fields)._version;
            *piVar5 = *piVar5 + 1;
            pMVar6 = (this_00->fields)._items;
            if (pMVar6 != (MultiColumnCollectionHeader_ViewState_ColumnState__Array *)0x0) {
              uVar7 = (this_00->fields)._size;
              if (uVar7 < pMVar6->max_length) {
                (this_00->fields)._size = uVar7 + 1;
                if (pMVar6->max_length <= uVar7) goto code_?;
                (&pMVar6->vector[0].index)[uVar7] = 0;
              }
              else {
                mscorlib.dll::System::Collections::Generic::List`1[System::Int32]::
                List_1_System_Int32__AddWithResize
                          ((List_1_System_Int32_ *)this_00,0,pMVar4->klass->rgctx_data[0xe].method)
                ;
              }
              pMVar4 = MethodInfo__System__Collections__Generic__List<int>__Add_int_;
              piVar5 = &(this_00->fields)._version;
              *piVar5 = *piVar5 + 1;
              pMVar6 = (this_00->fields)._items;
              if (pMVar6 != (MultiColumnCollectionHeader_ViewState_ColumnState__Array *)0x0) {
                uVar7 = (this_00->fields)._size;
                if (uVar7 < pMVar6->max_length) {
                  (this_00->fields)._size = uVar7 + 1;
                  if (pMVar6->max_length <= uVar7) goto code_?;
                  (&pMVar6->vector[0].index)[uVar7] = 3;
                }
                else {
                  mscorlib.dll::System::Collections::Generic::List`1[System::Int32]::
                  List_1_System_Int32__AddWithResize
                            ((List_1_System_Int32_ *)this_00,3,
                             pMVar4->klass->rgctx_data[0xe].method);
                }
                pMVar4 = MethodInfo__System__Collections__Generic__List<int>__Add_int_;
                piVar5 = &(this_00->fields)._version;
                *piVar5 = *piVar5 + 1;
                pMVar6 = (this_00->fields)._items;
                if (pMVar6 != (MultiColumnCollectionHeader_ViewState_ColumnState__Array *)0x0) {
                  uVar7 = (this_00->fields)._size;
                  if (uVar7 < pMVar6->max_length) {
                    (this_00->fields)._size = uVar7 + 1;
                    if (pMVar6->max_length <= uVar7) goto code_?;
                    (&pMVar6->vector[0].index)[uVar7] = 2;
                  }
                  else {
                    mscorlib.dll::System::Collections::Generic::List`1[System::Int32]::
                    List_1_System_Int32__AddWithResize
                              ((List_1_System_Int32_ *)this_00,2,
                               pMVar4->klass->rgctx_data[0xe].method);
                  }
                  pMVar4 = MethodInfo__System__Collections__Generic__List<int>__Add_int_;
                  piVar5 = &(this_00->fields)._version;
                  *piVar5 = *piVar5 + 1;
                  pMVar6 = (this_00->fields)._items;
                  if (pMVar6 != (MultiColumnCollectionHeader_ViewState_ColumnState__Array *)0x0) {
                    uVar7 = (this_00->fields)._size;
                    if (uVar7 < pMVar6->max_length) {
                      (this_00->fields)._size = uVar7 + 1;
                      if (pMVar6->max_length <= uVar7) goto code_?;
                      (&pMVar6->vector[0].index)[uVar7] = 2;
                    }
                    else {
                      mscorlib.dll::System::Collections::Generic::List`1[System::Int32]::
                      List_1_System_Int32__AddWithResize
                                ((List_1_System_Int32_ *)this_00,2,
                                 pMVar4->klass->rgctx_data[0xe].method);
                    }
                    pMVar4 = MethodInfo__System__Collections__Generic__List<int>__Add_int_;
                    piVar5 = &(this_00->fields)._version;
                    *piVar5 = *piVar5 + 1;
                    pMVar6 = (this_00->fields)._items;
                    if (pMVar6 != (MultiColumnCollectionHeader_ViewState_ColumnState__Array *)0x0)
                    {
                      uVar7 = (this_00->fields)._size;
                      if (uVar7 < pMVar6->max_length) {
                        (this_00->fields)._size = uVar7 + 1;
                        if (pMVar6->max_length <= uVar7) goto code_?;
                        (&pMVar6->vector[0].index)[uVar7] = 1;
                      }
                      else {
                        mscorlib.dll::System::Collections::Generic::List`1[System::Int32]::
                        List_1_System_Int32__AddWithResize
                                  ((List_1_System_Int32_ *)this_00,1,
                                   pMVar4->klass->rgctx_data[0xe].method);
                      }
                      pMVar4 = MethodInfo__System__Collections__Generic__List<int>__Add_int_;
                      piVar5 = &(this_00->fields)._version;
                      *piVar5 = *piVar5 + 1;
                      pMVar6 = (this_00->fields)._items;
                      if (pMVar6 != (MultiColumnCollectionHeader_ViewState_ColumnState__Array *)0x0
                         ) {
                        uVar7 = (this_00->fields)._size;
                        if (uVar7 < pMVar6->max_length) {
                          (this_00->fields)._size = uVar7 + 1;
                          if (pMVar6->max_length <= uVar7) goto code_?;
                          (&pMVar6->vector[0].index)[uVar7] = 0;
                        }
                        else {
                          mscorlib.dll::System::Collections::Generic::List`1[System::Int32]::
                          List_1_System_Int32__AddWithResize
                                    ((List_1_System_Int32_ *)this_00,0,
                                     pMVar4->klass->rgctx_data[0xe].method);
                        }
                        UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_set_vertices
                                  (this_02,value_00,(MethodInfo *)0x0);
                        value_01 = FaceCursor_SetUVs(this,(info->fields).pickedEdge,
                                                     (info->fields).pickedEdgeIndex1,
                                                     (MethodInfo *)0x0);
                        UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_set_uv
                                  (this_02,value_01,(MethodInfo *)0x0);
                        pMVar6 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
                                  UIElements::Internal::
                                  MultiColumnCollectionHeader+ViewState+ColumnState]::
                                  List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState__ToArray
                                            (this_00,
                                             MethodInfo__System__Collections__Generic__List<int>__ToArray__
                                            );
                        UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_set_triangles
                                  (this_02,(Int32__Array *)pMVar6,(MethodInfo *)0x0);
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
                              value_02 = (this->fields).materialNone;
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
                              value_02 = (this->fields).materialEdge;
code_?:
                              UnityEngine.CoreModule.dll::UnityEngine::Renderer::
                              Renderer_set_sharedMaterial(this_03,value_02,(MethodInfo *)0x0);
                              pGVar3 = (this->fields).gameObject;
                              if (pGVar3 != (GameObject *)0x0) {
                                pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                          GameObject_get_transform(pGVar3,(MethodInfo *)0x0);
                                pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Mesh::
                                          Mesh_get_vertices(this_02,(MethodInfo *)0x0);
                                if (pVVar9 != (Vector3__Array *)0x0) {
                                  if (pVVar9->max_length == 0) goto code_?;
                                  if (pTVar8 != (Transform *)0x0) {
                                    pVVar10 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                              Transform_TransformPoint
                                                        ((Vector3 *)&stack0xffffffd4,pTVar8,
                                                         pVVar9->vector[0],(MethodInfo *)0x0);
                                    uVar11 = pVVar10->x;
                                    uVar12 = pVVar10->y;
                                    fVar13 = pVVar10->z;
                                    pGVar3 = (this->fields).gameObject;
                                    if (pGVar3 != (GameObject *)0x0) {
                                      pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::GameObject
                                                ::GameObject_get_transform(pGVar3,(MethodInfo *)0x0)
                                      ;
                                      if (pTVar8 != (Transform *)0x0) {
                                        pVVar10 = UnityEngine.CoreModule.dll::UnityEngine::Transform
                                                  ::Transform_get_position
                                                            ((Vector3 *)&fStack_14,pTVar8,
                                                             (MethodInfo *)0x0);
                                        uVar15 = pVVar10->x;
                                        uVar16 = pVVar10->y;
                                        if (value_00 != (Vector3__Array *)0x0) {
                                          if (value_00->max_length != 0) {
                                            fStack_14 = value_00->vector[0].x;
                                            puStack_17 = (undefined *)value_00->vector[0].y;
                                            uVar18 = (info->fields).normal.x;
                                            uVar19 = (info->fields).normal.y;
                                            fVar13 = pVVar10->z +
                                                     (info->fields).normal.z * _UNK_? +
                                                     (value_00->vector[0].z - fVar13);
                                            info._0_2_ = SUB42(fVar13,0);
                                            info._2_2_ = (undefined2)((uint)fVar13 >> 0x10);
                                            value.y = (float)uVar16 +
                                                      (float)uVar19 * _UNK_? +
                                                      ((float)puStack_17 - (float)uVar12);
                                            value.x = (float)uVar15 +
                                                      (float)uVar18 * _UNK_? +
                                                      (fStack_14 - (float)uVar11);
                                            value.z._0_2_ = info._0_2_;
                                            value.z._2_2_ = info._2_2_;
                                            UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                            Transform_set_position(pTVar8,value,(MethodInfo *)0x0);
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
                              value_02 = (this->fields).materialCorner;
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
          }
        }
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar20 = (code *)swi(3);
  (*pcVar20)();
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
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_EDI);
  pGVar1 = (GameObject *)func_?(TypeInfo__UnityEngine__GameObject);
  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject__ctor
            (pGVar1,StringLiteral_Cursor,(MethodInfo *)0x0);
  ppGVar2 = &(this->fields).gameObject;
  *ppGVar2 = pGVar1;
  func_?(ppGVar2,pGVar1);
  pGVar1 = *ppGVar2;
  value = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                    (StringLiteral_UIItems,(MethodInfo *)0x0);
  if (pGVar1 != (GameObject *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_set_layer
              (pGVar1,value,(MethodInfo *)0x0);
    if (*ppGVar2 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_1
                (*ppGVar2,
                 UnityEngine__MeshRenderer_MethodInfo__UnityEngine__GameObject__AddComponent<UnityEngine::MeshRenderer>__
                );
      if (*ppGVar2 != (GameObject *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_1
                  (*ppGVar2,
                   UnityEngine__MeshFilter_MethodInfo__UnityEngine__GameObject__AddComponent<UnityEngine::MeshFilter>__
                  );
        ppMVar3 = &(this->fields).materialEdge;
        *ppMVar3 = (Material *)0x0;
        func_?();
        (this->fields).materialCorner = (Material *)&UNK_?;
        func_?();
        (this->fields).materialNone = (Material *)&this->fields;
        func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_sharedMaterial
                  ((Renderer *)&UNK_?,*ppMVar3,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

