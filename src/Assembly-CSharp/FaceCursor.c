
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
    func_?();
    func_?();
    func_?();
    func_?();
    cRam_? = '\x01';
  }
  pLVar1 = (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
             *)func_?();
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)pLVar1,
             MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__List__);
  switch(edge) {
  case Edge__Enum_None:
    if (pLVar1 !=
        (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_ *
        )0x0) {
      func_?();
      func_?();
      func_?(pLVar1,0x3f800000,0x3f800000,
                      MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
                     );
      fVar2 = 0.0;
code_?:
      uVar3 = 0x3f80;
code_?:
      func_?(pLVar1,fVar2,(uint)uVar3 << 0x10,
                      MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
                     );
code_?:
      pMVar4 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::Internal
                ::MultiColumnCollectionHeader+ViewState+ColumnState]::
                List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState__ToArray
                          (pLVar1,
                           MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__ToArray__
                          );
      return (Vector2__Array *)pMVar4;
    }
    break;
  case Edge__Enum_Front:
    if (pLVar1 !=
        (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_ *
        )0x0) {
      func_?();
      func_?();
      func_?(pLVar1,(float)(mirror ^ 1),0x3f800000,
                      MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
                     );
      func_?(pLVar1,(float)mirror,0x3f800000,
                      MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
                     );
      goto code_?;
    }
    break;
  case Edge__Enum_Back:
    if (pLVar1 !=
        (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_ *
        )0x0) {
      func_?();
      func_?();
      func_?(pLVar1,(float)mirror,0,
                      MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
                     );
      mirror = mirror ^ 1;
code_?:
      uVar3 = 0;
      fVar2 = (float)mirror;
      goto code_?;
    }
    break;
  case Edge__Enum_Left:
    if (pLVar1 !=
        (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_ *
        )0x0) {
      func_?();
      func_?();
      func_?(pLVar1,(float)mirror,0x3f800000,
                      MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
                     );
      goto code_?;
    }
    break;
  case Edge__Enum_Right:
    if (pLVar1 !=
        (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_ *
        )0x0) {
      func_?();
      func_?();
      func_?(pLVar1,(float)(mirror ^ 1),0,
                      MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
                     );
      fVar2 = (float)(mirror ^ 1);
      goto code_?;
    }
    break;
  default:
    if (pLVar1 !=
        (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_ *
        )0x0) goto code_?;
  }
  bVar5 = 0;
  func_?();
  if (extraout_ECX == 1) {
    pbVar6 = (byte *)(extraout_EDX + 0x4a);
    bVar7 = (byte)((uint)extraout_EDX >> 8);
    bVar8 = *pbVar6 + bVar7;
    bVar9 = CARRY1(*pbVar6,bVar7) || CARRY1(bVar8,bVar5);
    *pbVar6 = bVar8 + bVar5;
    bVar10 = CARRY1(bRam_?,bVar9);
    bRam_? = bRam_? + bVar9;
    *(char *)(extraout_EDX + 0x4c) = *(char *)(extraout_EDX + 0x4c) + extraout_AH + bVar10;
    pcVar11 = (code *)swi(3);
    pVVar12 = (Vector2__Array *)(*pcVar11)();
    return pVVar12;
  }
  func_?();
  func_?();
  func_?();
  func_?();
  func_?();
  uRam_? = 1;
  if (edge != Edge__Enum_None) {
    uVar13 = *(undefined4 *)(edge + 0x30);
    cube = *(Cube **)(edge + 8);
    face = *(Face__Enum *)(edge + 0xc);
    uVar14 = (undefined1)uVar13;
    uVar15 = (undefined1)((uint)uVar13 >> 8);
    uVar16 = (undefined2)((uint)uVar13 >> 0x10);
    uVar17 = *(undefined2 *)(edge + 0x34);
    if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
      uVar14 = 0xd2;
      uVar15 = 0x4d;
      uVar16 = 0x1046;
      func_?();
    }
    iVector.x._1_1_ = uVar15;
    iVector.x._0_1_ = uVar14;
    iVector.y = uVar16;
    iVector.z._0_1_ = (char)uVar17;
    iVector.z._1_1_ = (char)((ushort)uVar17 >> 8);
    pVVar18 = Cube::Cube_GetFaceVerticesWorld(_mirror,cube,face,iVector,(MethodInfo *)0x0);
    pLVar1 = (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
               *)func_?();
    mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
    __Il2CppFullySharedGenericType]::
    LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
              ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)pLVar1,
               MethodInfo__System__Collections__Generic__List<int>__List__);
    pGVar19 = (this->fields).gameObject;
    if ((((pGVar19 != (GameObject *)0x0) &&
         (this_00 = (MeshFilter *)
                    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                              (pGVar19,
                               UnityEngine__MeshFilter_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::MeshFilter>__
                              ), this_00 != (MeshFilter *)0x0)) &&
        (this_01 = UnityEngine.CoreModule.dll::UnityEngine::MeshFilter::MeshFilter_get_mesh
                             (this_00,(MethodInfo *)0x0), this_01 != (Mesh *)0x0)) &&
       (UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_Clear(this_01,(MethodInfo *)0x0),
       pMVar20 = MethodInfo__System__Collections__Generic__List<int>__Add_int_,
       pLVar1 !=
       (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_ *)
       0x0)) {
      piVar21 = &(pLVar1->fields)._version;
      *piVar21 = *piVar21 + 1;
      pMVar4 = (pLVar1->fields)._items;
      if (pMVar4 != (MultiColumnCollectionHeader_ViewState_ColumnState__Array *)0x0) {
        uVar22 = (pLVar1->fields)._size;
        if (uVar22 < pMVar4->max_length) {
          (pLVar1->fields)._size = uVar22 + 1;
          if (pMVar4->max_length <= uVar22) goto code_?;
          (&pMVar4->vector[0].index)[uVar22] = 0;
        }
        else {
          mscorlib.dll::System::Collections::Generic::List`1[System::Int32]::
          List_1_System_Int32__AddWithResize
                    ((List_1_System_Int32_ *)pLVar1,0,pMVar20->klass->rgctx_data[0xe].method);
        }
        pMVar20 = MethodInfo__System__Collections__Generic__List<int>__Add_int_;
        piVar21 = &(pLVar1->fields)._version;
        *piVar21 = *piVar21 + 1;
        pMVar4 = (pLVar1->fields)._items;
        if (pMVar4 != (MultiColumnCollectionHeader_ViewState_ColumnState__Array *)0x0) {
          uVar22 = (pLVar1->fields)._size;
          if (uVar22 < pMVar4->max_length) {
            (pLVar1->fields)._size = uVar22 + 1;
            if (pMVar4->max_length <= uVar22) goto code_?;
            (&pMVar4->vector[0].index)[uVar22] = 3;
          }
          else {
            mscorlib.dll::System::Collections::Generic::List`1[System::Int32]::
            List_1_System_Int32__AddWithResize
                      ((List_1_System_Int32_ *)pLVar1,3,pMVar20->klass->rgctx_data[0xe].method);
          }
          pMVar20 = MethodInfo__System__Collections__Generic__List<int>__Add_int_;
          piVar21 = &(pLVar1->fields)._version;
          *piVar21 = *piVar21 + 1;
          pMVar4 = (pLVar1->fields)._items;
          if (pMVar4 != (MultiColumnCollectionHeader_ViewState_ColumnState__Array *)0x0) {
            uVar22 = (pLVar1->fields)._size;
            if (uVar22 < pMVar4->max_length) {
              (pLVar1->fields)._size = uVar22 + 1;
              if (pMVar4->max_length <= uVar22) goto code_?;
              (&pMVar4->vector[0].index)[uVar22] = 2;
            }
            else {
              mscorlib.dll::System::Collections::Generic::List`1[System::Int32]::
              List_1_System_Int32__AddWithResize
                        ((List_1_System_Int32_ *)pLVar1,2,pMVar20->klass->rgctx_data[0xe].method);
            }
            pMVar20 = MethodInfo__System__Collections__Generic__List<int>__Add_int_;
            piVar21 = &(pLVar1->fields)._version;
            *piVar21 = *piVar21 + 1;
            pMVar4 = (pLVar1->fields)._items;
            if (pMVar4 != (MultiColumnCollectionHeader_ViewState_ColumnState__Array *)0x0) {
              uVar22 = (pLVar1->fields)._size;
              if (uVar22 < pMVar4->max_length) {
                (pLVar1->fields)._size = uVar22 + 1;
                if (pMVar4->max_length <= uVar22) goto code_?;
                (&pMVar4->vector[0].index)[uVar22] = 2;
              }
              else {
                mscorlib.dll::System::Collections::Generic::List`1[System::Int32]::
                List_1_System_Int32__AddWithResize
                          ((List_1_System_Int32_ *)pLVar1,2,pMVar20->klass->rgctx_data[0xe].method)
                ;
              }
              pMVar20 = MethodInfo__System__Collections__Generic__List<int>__Add_int_;
              piVar21 = &(pLVar1->fields)._version;
              *piVar21 = *piVar21 + 1;
              pMVar4 = (pLVar1->fields)._items;
              if (pMVar4 != (MultiColumnCollectionHeader_ViewState_ColumnState__Array *)0x0) {
                uVar22 = (pLVar1->fields)._size;
                if (uVar22 < pMVar4->max_length) {
                  (pLVar1->fields)._size = uVar22 + 1;
                  if (pMVar4->max_length <= uVar22) goto code_?;
                  (&pMVar4->vector[0].index)[uVar22] = 1;
                }
                else {
                  mscorlib.dll::System::Collections::Generic::List`1[System::Int32]::
                  List_1_System_Int32__AddWithResize
                            ((List_1_System_Int32_ *)pLVar1,1,
                             pMVar20->klass->rgctx_data[0xe].method);
                }
                pMVar20 = MethodInfo__System__Collections__Generic__List<int>__Add_int_;
                piVar21 = &(pLVar1->fields)._version;
                *piVar21 = *piVar21 + 1;
                pMVar4 = (pLVar1->fields)._items;
                if (pMVar4 != (MultiColumnCollectionHeader_ViewState_ColumnState__Array *)0x0) {
                  uVar22 = (pLVar1->fields)._size;
                  if (uVar22 < pMVar4->max_length) {
                    (pLVar1->fields)._size = uVar22 + 1;
                    if (pMVar4->max_length <= uVar22) goto code_?;
                    (&pMVar4->vector[0].index)[uVar22] = 0;
                  }
                  else {
                    mscorlib.dll::System::Collections::Generic::List`1[System::Int32]::
                    List_1_System_Int32__AddWithResize
                              ((List_1_System_Int32_ *)pLVar1,0,
                               pMVar20->klass->rgctx_data[0xe].method);
                  }
                  UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_set_vertices
                            (this_01,pVVar18,(MethodInfo *)0x0);
                  pVVar12 = FaceCursor_SetUVs(this,*(Edge__Enum *)(edge + 0x10),
                                              *(bool *)(edge + 0x15),(MethodInfo *)0x0);
                  UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_set_uv
                            (this_01,pVVar12,(MethodInfo *)0x0);
                  pMVar4 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
                            UIElements::Internal::MultiColumnCollectionHeader+ViewState+ColumnState]
                            ::
                            List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState__ToArray
                                      (pLVar1,
                                       MethodInfo__System__Collections__Generic__List<int>__ToArray__
                                      );
                  UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_set_triangles
                            (this_01,(Int32__Array *)pMVar4,(MethodInfo *)0x0);
                  UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_RecalculateNormals
                            (this_01,(MethodInfo *)0x0);
                  UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_RecalculateBounds
                            (this_01,(MethodInfo *)0x0);
                  if (*(int *)(edge + 0x10) == 0) {
                    pGVar19 = (this->fields).gameObject;
                    if ((pGVar19 != (GameObject *)0x0) &&
                       (this_02 = (Renderer *)
                                  UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                  GameObject_GetComponent_1
                                            (pGVar19,
                                             UnityEngine__MeshRenderer_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::MeshRenderer>__
                                            ), this_02 != (Renderer *)0x0)) {
                      value_00 = (this->fields).materialNone;
                      goto code_?;
                    }
                  }
                  else if ((*(char *)(edge + 0x14) == '\0') && (*(char *)(edge + 0x15) == '\0')) {
                    pGVar19 = (this->fields).gameObject;
                    if ((pGVar19 != (GameObject *)0x0) &&
                       (this_02 = (Renderer *)
                                  UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                  GameObject_GetComponent_1
                                            (pGVar19,
                                             UnityEngine__MeshRenderer_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::MeshRenderer>__
                                            ), this_02 != (Renderer *)0x0)) {
                      value_00 = (this->fields).materialEdge;
code_?:
                      UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_sharedMaterial
                                (this_02,value_00,(MethodInfo *)0x0);
                      pGVar19 = (this->fields).gameObject;
                      if (pGVar19 != (GameObject *)0x0) {
                        pMVar20 = (MethodInfo *)
                                  UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                  GameObject_get_transform(pGVar19,(MethodInfo *)0x0);
                        pVVar18 = UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_get_vertices
                                            (this_01,pMVar20);
                        if (pVVar18 != (Vector3__Array *)0x0) {
                          if (pVVar18->max_length == 0) goto code_?;
                          if (pMVar20 != (MethodInfo *)0x0) {
                            uVar23 = pVVar18->vector[0].x;
                            pVVar24 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                      Transform_TransformPoint
                                                ((Vector3 *)&stack0xffffffd4,(Transform *)pMVar20,
                                                 pVVar18->vector[0],(MethodInfo *)0x0);
                            uVar25._0_4_ = pVVar24->x;
                            uVar25._4_4_ = pVVar24->y;
                            fVar2 = pVVar24->z;
                            pGVar19 = (this->fields).gameObject;
                            if ((pGVar19 != (GameObject *)0x0) &&
                               (this_03 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                          GameObject_get_transform(pGVar19,(MethodInfo *)0x0),
                               this_03 != (Transform *)0x0)) {
                              pVVar24 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                        Transform_get_position
                                                  ((Vector3 *)&stack0xffffffec,this_03,
                                                   (MethodInfo *)0x0);
                              uVar26 = pVVar24->x;
                              uVar27 = pVVar24->y;
                              if (uVar23 != 0) {
                                if (*(int *)(uVar23 + 0xc) != 0) {
                                  value.y = (float)uVar27 +
                                            (float)((ulonglong)*(undefined8 *)(edge + 0x18) >> 0x20)
                                            * _UNK_? +
                                            ((float)((ulonglong)*(undefined8 *)(uVar23 + 0x10) >>
                                                    0x20) - (float)((ulonglong)uVar25 >> 0x20));
                                  value.x = (float)uVar26 +
                                            (float)*(undefined8 *)(edge + 0x18) * _UNK_? +
                                            ((float)*(undefined8 *)(uVar23 + 0x10) - (float)uVar25);
                                  value.z = pVVar24->z +
                                            *(float *)(edge + 0x20) * _UNK_? +
                                            (*(float *)(uVar23 + 0x18) - fVar2);
                                  UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                  Transform_set_position(this_03,value,(MethodInfo *)0x0);
                                  return extraout_EAX;
                                }
                                goto code_?;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                  else {
                    pGVar19 = (this->fields).gameObject;
                    if ((pGVar19 != (GameObject *)0x0) &&
                       (this_02 = (Renderer *)
                                  UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                  GameObject_GetComponent_1
                                            (pGVar19,
                                             UnityEngine__MeshRenderer_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::MeshRenderer>__
                                            ), this_02 != (Renderer *)0x0)) {
                      value_00 = (this->fields).materialCorner;
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
  func_?();
code_?:
  func_?();
  pcVar11 = (code *)swi(3);
  pVVar12 = (Vector2__Array *)(*pcVar11)();
  return pVVar12;
}


/* Void UpdateCursor(CubePickingInfo, GameObject) */

void Assembly-CSharp.dll::FaceCursor::FaceCursor_UpdateCursor
               (FaceCursor *this,CubePickingInfo *info,GameObject *cubeGameObject,MethodInfo *method
               )

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Cube);
    func_?(0x22a8);
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
  (this->fields).gameObject = pGVar1;
  func_?(&(this->fields).gameObject,pGVar1);
  pGVar1 = (this->fields).gameObject;
  value = (Material *)
          UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                    (StringLiteral_UIItems,(MethodInfo *)0x0);
  if (pGVar1 != (GameObject *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_set_layer
              (pGVar1,(int32_t)value,(MethodInfo *)0x0);
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
        (this->fields).materialEdge = value;
        func_?();
        (this->fields).materialCorner = (Material *)0x0;
        func_?();
        (this->fields).materialNone = (Material *)&UNK_?;
        func_?();
        if (this_00 != (Renderer *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_sharedMaterial
                    (this_00,(this->fields).materialEdge,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

