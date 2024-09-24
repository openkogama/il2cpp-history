
/* Boolean IsColliding() */

bool Assembly-CSharp.dll::IndentArea::IndentArea_IsColliding(IndentArea *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    UnityEngine__MeshFilter_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::MeshFilter>__
                   );
    func_?(&TypeInfo__MVInputWrapper);
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  VStack_1.x = 0.0;
  VStack_1.y = 0.0;
  VStack_1.z = 0.0;
  method_00 = (MethodInfo *)(this->fields).gameObject;
  if (method_00 != (MethodInfo *)0x0) {
    this_02 = (MeshFilter *)
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                        ((GameObject *)method_00,
                         UnityEngine__MeshFilter_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::MeshFilter>__
                        );
    if (this_02 != (MeshFilter *)0x0) {
      pMStack_2 = UnityEngine.CoreModule.dll::UnityEngine::MeshFilter::MeshFilter_get_mesh
                            (this_02,(MethodInfo *)0x0);
      this_00 = (this->fields).mainCamera;
      if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__MVInputWrapper);
      }
      pVVar3 = UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::DefaultEventSystem+Input::
               DefaultEventSystem_Input_get_mousePosition
                         (&RStack_4.m_Direction,(DefaultEventSystem_Input *)0x0,method_00);
      if (this_00 != (Camera *)0x0) {
        pRVar5 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_ScreenPointToRay_2
                            (&RStack_4,this_00,*pVVar3,(MethodInfo *)0x0);
        fVar6 = (pRVar5->m_Origin).x;
        fVar7 = (pRVar5->m_Origin).y;
        fVar8 = (pRVar5->m_Origin).z;
        fVar9 = (pRVar5->m_Direction).x;
        uVar10 = (pRVar5->m_Direction).y;
        uVar11 = (pRVar5->m_Direction).z;
        iVar12 = func_?(TypeInfo__UnityEngine__Vector3,4);
        pTStack_13 = (Transform *)0x0;
        if (pMStack_2 != (Mesh *)0x0) {
          iVar14 = 0;
          while( true ) {
            pTVar15 = pTStack_13;
            pVVar16 = UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_get_vertices
                                (pMStack_2,(MethodInfo *)0x0);
            if (pVVar16 == (Vector3__Array *)0x0) break;
            if ((int)pVVar16->max_length <= (int)pTStack_13) {
              RStack_4.m_Direction.x = fVar6 + fVar9 * _UNK_?;
              fVar9 = fVar8 + (float)uVar11 * _UNK_?;
              RStack_4.m_Direction.y = fVar7 + (float)uVar10 * _UNK_?;
              RStack_4.m_Direction.z = fVar9;
              if (iVar12 != 0) {
                if ((*(int *)(iVar12 + 0xc) != 0) && (3 < *(uint *)(iVar12 + 0xc))) {
                  p2.y = RStack_4.m_Direction.y;
                  p2.x = RStack_4.m_Direction.x;
                  p1.y = fVar7;
                  p1.x = fVar6;
                  p1.z = fVar8;
                  p2.z = fVar9;
                  bVar17 = MathFunctions::MathFunctions_LineFacet
                                    (p1,p2,*(Vector3 *)(iVar12 + 0x10),*(Vector3 *)(iVar12 + 0x34),
                                     *(Vector3 *)(iVar12 + 0x28),&VStack_1,(MethodInfo *)0x0);
                  if (2 < *(uint *)(iVar12 + 0xc)) {
                    uVar18 = ((Vector3 *)(iVar12 + 0x10))->y;
                    p1_00.y = (float)*(undefined4 *)(iVar12 + 0x18);
                    p1_00.x = (float)uVar18;
                    p1_00.z = fVar8;
                    p2_00.y = RStack_4.m_Direction.y;
                    p2_00.x = RStack_4.m_Direction.x;
                    p2_00.z = fVar9;
                    bVar19 = MathFunctions::MathFunctions_LineFacet
                                      (p1_00,p2_00,*(Vector3 *)(iVar12 + 0x28),
                                       *(Vector3 *)(iVar12 + 0x1c),*(Vector3 *)(iVar12 + 0x10),
                                       &VStack_1,(MethodInfo *)0x0);
                    return bVar19 != 0 || bVar17 != 0;
                  }
                }
                goto code_?;
              }
              break;
            }
            this_01 = (this->fields).gameObject;
            if (this_01 == (GameObject *)0x0) break;
            pTStack_13 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                        GameObject_get_transform(this_01,(MethodInfo *)0x0);
            pVVar16 = UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_get_vertices
                                (pMStack_2,(MethodInfo *)0x0);
            if (pVVar16 == (Vector3__Array *)0x0) break;
            if ((Transform *)pVVar16->max_length <= pTVar15) goto code_?;
            if (pTStack_13 == (Transform *)0x0) break;
            position.z = *(float *)((int)&pVVar16->vector[0].z + iVar14);
            position._0_8_ = *(undefined8 *)((int)&pVVar16->vector[0].x + iVar14);
            pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_TransformPoint
                               (&RStack_4.m_Direction,pTStack_13,position,(MethodInfo *)0x0);
            if (iVar12 == 0) break;
            fVar20 = pVVar3->z;
            if (*(Transform **)(iVar12 + 0xc) <= pTVar15) goto code_?;
            *(undefined8 *)(iVar12 + 0x10 + iVar14) = *(undefined8 *)pVVar3;
            pTStack_13 = (Transform *)((int)&pTVar15->klass + 1);
            *(float *)(iVar12 + 0x18 + iVar14) = fVar20;
            iVar14 = iVar14 + 0xc;
          }
        }
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar21 = (code *)swi(3);
  bVar17 = (*pcVar21)();
  return bVar17;
}


/* Void Remove() */

void Assembly-CSharp.dll::IndentArea::IndentArea_Remove(IndentArea *this,MethodInfo *method)

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


/* Vector2[] SetUVs() */

Vector2__Array *
Assembly-CSharp.dll::IndentArea::IndentArea_SetUVs(IndentArea *this,MethodInfo *method)

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
  pMVar1 = 
  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_;
  if (this_00 !=
      (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_ *)
      0x0) {
    piVar2 = &(this_00->fields)._version;
    *piVar2 = *piVar2 + 1;
    pMVar3 = (this_00->fields)._items;
    if (pMVar3 != (MultiColumnCollectionHeader_ViewState_ColumnState__Array *)0x0) {
      uVar4 = (this_00->fields)._size;
      if (uVar4 < pMVar3->max_length) {
        (this_00->fields)._size = uVar4 + 1;
        if (pMVar3->max_length <= uVar4) goto code_?;
        (&pMVar3->vector[0].index)[uVar4 * 2] = 0;
        (&pMVar3->vector[0].name)[uVar4 * 2] = (String *)0x0;
      }
      else {
        mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
        List_1_UnityEngine_Vector2__AddWithResize
                  ((List_1_UnityEngine_Vector2_ *)this_00,(Vector2)0x0,
                   pMVar1->klass->rgctx_data[0xe].method);
      }
      pMVar1 = 
      MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
      ;
      piVar2 = &(this_00->fields)._version;
      *piVar2 = *piVar2 + 1;
      pMVar3 = (this_00->fields)._items;
      if (pMVar3 != (MultiColumnCollectionHeader_ViewState_ColumnState__Array *)0x0) {
        uVar4 = (this_00->fields)._size;
        if (uVar4 < pMVar3->max_length) {
          (this_00->fields)._size = uVar4 + 1;
          if (pMVar3->max_length <= uVar4) goto code_?;
          (&pMVar3->vector[0].index)[uVar4 * 2] = 0x3f800000;
          (&pMVar3->vector[0].name)[uVar4 * 2] = (String *)0x0;
        }
        else {
          mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
          List_1_UnityEngine_Vector2__AddWithResize
                    ((List_1_UnityEngine_Vector2_ *)this_00,(Vector2)0x3f800000,
                     pMVar1->klass->rgctx_data[0xe].method);
        }
        pMVar1 = 
        MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
        ;
        piVar2 = &(this_00->fields)._version;
        *piVar2 = *piVar2 + 1;
        pMVar3 = (this_00->fields)._items;
        if (pMVar3 != (MultiColumnCollectionHeader_ViewState_ColumnState__Array *)0x0) {
          uVar4 = (this_00->fields)._size;
          if (uVar4 < pMVar3->max_length) {
            (this_00->fields)._size = uVar4 + 1;
            if (pMVar3->max_length <= uVar4) goto code_?;
            (&pMVar3->vector[0].index)[uVar4 * 2] = 0x3f800000;
            (&pMVar3->vector[0].name)[uVar4 * 2] = (String *)0x3f800000;
          }
          else {
            mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
            List_1_UnityEngine_Vector2__AddWithResize
                      ((List_1_UnityEngine_Vector2_ *)this_00,(Vector2)0x3f8000003f800000,
                       pMVar1->klass->rgctx_data[0xe].method);
          }
          pMVar1 = 
          MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
          ;
          piVar2 = &(this_00->fields)._version;
          *piVar2 = *piVar2 + 1;
          pMVar3 = (this_00->fields)._items;
          if (pMVar3 != (MultiColumnCollectionHeader_ViewState_ColumnState__Array *)0x0) {
            uVar4 = (this_00->fields)._size;
            if (pMVar3->max_length <= uVar4) {
              mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
              List_1_UnityEngine_Vector2__AddWithResize
                        ((List_1_UnityEngine_Vector2_ *)this_00,(Vector2)0x3f80000000000000,
                         pMVar1->klass->rgctx_data[0xe].method);
code_?:
              pMVar3 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
                       Internal::MultiColumnCollectionHeader+ViewState+ColumnState]::
                       List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState__ToArray
                                 (this_00,
                                  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__ToArray__
                                 );
              return (Vector2__Array *)pMVar3;
            }
            (this_00->fields)._size = uVar4 + 1;
            if (uVar4 < pMVar3->max_length) {
              (&pMVar3->vector[0].index)[uVar4 * 2] = 0;
              (&pMVar3->vector[0].name)[uVar4 * 2] = (String *)0x3f800000;
              goto code_?;
            }
            goto code_?;
          }
        }
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  pVVar6 = (Vector2__Array *)(*pcVar5)();
  return pVVar6;
}


/* Void UpdateIndentArea(CubePickingInfo, GameObject) */

void Assembly-CSharp.dll::IndentArea::IndentArea_UpdateIndentArea
               (IndentArea *this,CubePickingInfo *info,GameObject *cubeGameObject,MethodInfo *method
               )

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Cube);
    func_?(0x880c);
    func_?(&MethodInfo__System__Collections__Generic__List<int>__Add_int_);
    func_?(&MethodInfo__System__Collections__Generic__List<int>__ToArray__);
    func_?(&MethodInfo__System__Collections__Generic__List<int>__List__);
    func_?(&TypeInfo__System__Collections__Generic__List<int>);
    cRam_? = '\x01';
  }
  if (info != (CubePickingInfo *)0x0) {
    cube = (info->fields).cube;
    face = (info->fields).pickedFace;
    uVar1 = (info->fields).iLocalPos.x;
    uVar2 = (info->fields).iLocalPos.y;
    iVector.y = uVar2;
    iVector.x = uVar1;
    iVar3 = (info->fields).iLocalPos.z;
    if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__Cube);
    }
    iVector.z = iVar3;
    pVVar4 = Cube::Cube_GetFaceVerticesWorld(cubeGameObject,cube,face,iVector,(MethodInfo *)0x0);
    this_00 = (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
               *)func_?(TypeInfo__System__Collections__Generic__List<int>);
    mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
    __Il2CppFullySharedGenericType]::
    LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
              ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_00,
               MethodInfo__System__Collections__Generic__List<int>__List__);
    pGVar5 = (this->fields).gameObject;
    if (pGVar5 != (GameObject *)0x0) {
      this_01 = (MeshFilter *)
                UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                          (pGVar5,
                           UnityEngine__MeshFilter_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::MeshFilter>__
                          );
      if (this_01 != (MeshFilter *)0x0) {
        this_02 = UnityEngine.CoreModule.dll::UnityEngine::MeshFilter::MeshFilter_get_mesh
                            (this_01,(MethodInfo *)0x0);
        if (this_02 != (Mesh *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_Clear(this_02,(MethodInfo *)0x0);
          pMVar6 = MethodInfo__System__Collections__Generic__List<int>__Add_int_;
          if (this_00 !=
              (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
               *)0x0) {
            piVar7 = &(this_00->fields)._version;
            *piVar7 = *piVar7 + 1;
            pMVar8 = (this_00->fields)._items;
            if (pMVar8 != (MultiColumnCollectionHeader_ViewState_ColumnState__Array *)0x0) {
              uVar9 = (this_00->fields)._size;
              if (uVar9 < pMVar8->max_length) {
                (this_00->fields)._size = uVar9 + 1;
                if (pMVar8->max_length <= uVar9) goto code_?;
                (&pMVar8->vector[0].index)[uVar9] = 0;
              }
              else {
                mscorlib.dll::System::Collections::Generic::List`1[System::Int32]::
                List_1_System_Int32__AddWithResize
                          ((List_1_System_Int32_ *)this_00,0,pMVar6->klass->rgctx_data[0xe].method)
                ;
              }
              pMVar6 = MethodInfo__System__Collections__Generic__List<int>__Add_int_;
              piVar7 = &(this_00->fields)._version;
              *piVar7 = *piVar7 + 1;
              pMVar8 = (this_00->fields)._items;
              if (pMVar8 != (MultiColumnCollectionHeader_ViewState_ColumnState__Array *)0x0) {
                uVar9 = (this_00->fields)._size;
                if (uVar9 < pMVar8->max_length) {
                  (this_00->fields)._size = uVar9 + 1;
                  if (pMVar8->max_length <= uVar9) goto code_?;
                  (&pMVar8->vector[0].index)[uVar9] = 3;
                }
                else {
                  mscorlib.dll::System::Collections::Generic::List`1[System::Int32]::
                  List_1_System_Int32__AddWithResize
                            ((List_1_System_Int32_ *)this_00,3,
                             pMVar6->klass->rgctx_data[0xe].method);
                }
                pMVar6 = MethodInfo__System__Collections__Generic__List<int>__Add_int_;
                piVar7 = &(this_00->fields)._version;
                *piVar7 = *piVar7 + 1;
                pMVar8 = (this_00->fields)._items;
                if (pMVar8 != (MultiColumnCollectionHeader_ViewState_ColumnState__Array *)0x0) {
                  uVar9 = (this_00->fields)._size;
                  if (uVar9 < pMVar8->max_length) {
                    (this_00->fields)._size = uVar9 + 1;
                    if (pMVar8->max_length <= uVar9) goto code_?;
                    (&pMVar8->vector[0].index)[uVar9] = 2;
                  }
                  else {
                    mscorlib.dll::System::Collections::Generic::List`1[System::Int32]::
                    List_1_System_Int32__AddWithResize
                              ((List_1_System_Int32_ *)this_00,2,
                               pMVar6->klass->rgctx_data[0xe].method);
                  }
                  pMVar6 = MethodInfo__System__Collections__Generic__List<int>__Add_int_;
                  piVar7 = &(this_00->fields)._version;
                  *piVar7 = *piVar7 + 1;
                  pMVar8 = (this_00->fields)._items;
                  if (pMVar8 != (MultiColumnCollectionHeader_ViewState_ColumnState__Array *)0x0) {
                    uVar9 = (this_00->fields)._size;
                    if (uVar9 < pMVar8->max_length) {
                      (this_00->fields)._size = uVar9 + 1;
                      if (pMVar8->max_length <= uVar9) goto code_?;
                      (&pMVar8->vector[0].index)[uVar9] = 2;
                    }
                    else {
                      mscorlib.dll::System::Collections::Generic::List`1[System::Int32]::
                      List_1_System_Int32__AddWithResize
                                ((List_1_System_Int32_ *)this_00,2,
                                 pMVar6->klass->rgctx_data[0xe].method);
                    }
                    pMVar6 = MethodInfo__System__Collections__Generic__List<int>__Add_int_;
                    piVar7 = &(this_00->fields)._version;
                    *piVar7 = *piVar7 + 1;
                    pMVar8 = (this_00->fields)._items;
                    if (pMVar8 != (MultiColumnCollectionHeader_ViewState_ColumnState__Array *)0x0)
                    {
                      uVar9 = (this_00->fields)._size;
                      if (uVar9 < pMVar8->max_length) {
                        (this_00->fields)._size = uVar9 + 1;
                        if (pMVar8->max_length <= uVar9) goto code_?;
                        (&pMVar8->vector[0].index)[uVar9] = 1;
                      }
                      else {
                        mscorlib.dll::System::Collections::Generic::List`1[System::Int32]::
                        List_1_System_Int32__AddWithResize
                                  ((List_1_System_Int32_ *)this_00,1,
                                   pMVar6->klass->rgctx_data[0xe].method);
                      }
                      pMVar6 = MethodInfo__System__Collections__Generic__List<int>__Add_int_;
                      piVar7 = &(this_00->fields)._version;
                      *piVar7 = *piVar7 + 1;
                      pMVar8 = (this_00->fields)._items;
                      if (pMVar8 != (MultiColumnCollectionHeader_ViewState_ColumnState__Array *)0x0
                         ) {
                        uVar9 = (this_00->fields)._size;
                        if (uVar9 < pMVar8->max_length) {
                          (this_00->fields)._size = uVar9 + 1;
                          if (pMVar8->max_length <= uVar9) goto code_?;
                          (&pMVar8->vector[0].index)[uVar9] = 0;
                        }
                        else {
                          mscorlib.dll::System::Collections::Generic::List`1[System::Int32]::
                          List_1_System_Int32__AddWithResize
                                    ((List_1_System_Int32_ *)this_00,0,
                                     pMVar6->klass->rgctx_data[0xe].method);
                        }
                        UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_set_vertices
                                  (this_02,pVVar4,(MethodInfo *)0x0);
                        value_01 = IndentArea_SetUVs(this,(MethodInfo *)0x0);
                        UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_set_uv
                                  (this_02,value_01,(MethodInfo *)0x0);
                        pMVar8 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
                                  UIElements::Internal::
                                  MultiColumnCollectionHeader+ViewState+ColumnState]::
                                  List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState__ToArray
                                            (this_00,
                                             MethodInfo__System__Collections__Generic__List<int>__ToArray__
                                            );
                        UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_set_triangles
                                  (this_02,(Int32__Array *)pMVar8,(MethodInfo *)0x0);
                        UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_RecalculateNormals
                                  (this_02,(MethodInfo *)0x0);
                        UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_RecalculateBounds
                                  (this_02,(MethodInfo *)0x0);
                        if (pVVar4 != (Vector3__Array *)0x0) {
                          if (pVVar4->max_length < 3) goto code_?;
                          uVar10 = pVVar4->vector[0].x;
                          uVar11 = pVVar4->vector[2].x;
                          fVar12 = ((float)uVar11 - (float)uVar10) * _UNK_?;
                          if (pVVar4->max_length == 0) goto code_?;
                          uVar13 = pVVar4->vector[0].x;
                          pGVar5 = (this->fields).gameObject;
                          if (pGVar5 != (GameObject *)0x0) {
                            pTVar14 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                      GameObject_get_transform(pGVar5,(MethodInfo *)0x0);
                            if (cRam_? == '\0') {
                              func_?(&TypeInfo__UnityEngine__Vector3);
                              cRam_? = '\x01';
                            }
                            fVar15 = (this->fields).size;
                            pVVar16 = TypeInfo__UnityEngine__Vector3->static_fields;
                            uVar17 = (pVVar16->oneVector).x;
                            uVar18 = (pVVar16->oneVector).y;
                            fVar19 = (pVVar16->oneVector).z * fVar15;
                            if (pTVar14 != (Transform *)0x0) {
                              value_00.y = (float)uVar18 * fVar15;
                              value_00.x = (float)uVar17 * fVar15;
                              value_00.z._0_2_ = SUB42(fVar19,0);
                              value_00.z._2_2_ = (short)((uint)fVar19 >> 0x10);
                              UnityEngine.CoreModule.dll::UnityEngine::Transform::
                              Transform_set_localScale(pTVar14,value_00,(MethodInfo *)0x0);
                              pGVar5 = (this->fields).gameObject;
                              if (pGVar5 != (GameObject *)0x0) {
                                pTVar14 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                          GameObject_get_transform(pGVar5,(MethodInfo *)0x0);
                                pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Mesh::
                                          Mesh_get_vertices(this_02,(MethodInfo *)0x0);
                                if (pVVar4 != (Vector3__Array *)0x0) {
                                  if (pVVar4->max_length == 0) goto code_?;
                                  if (pTVar14 != (Transform *)0x0) {
                                    pVVar20 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                              Transform_TransformPoint
                                                        ((Vector3 *)&stack0xffffffd0,pTVar14,
                                                         pVVar4->vector[0],(MethodInfo *)0x0);
                                    uVar21 = pVVar20->x;
                                    uVar22 = pVVar20->y;
                                    fVar15 = pVVar20->z;
                                    pGVar5 = (this->fields).gameObject;
                                    if (pGVar5 != (GameObject *)0x0) {
                                      pTVar14 = UnityEngine.CoreModule.dll::UnityEngine::GameObject
                                                ::GameObject_get_transform
                                                          (pGVar5,(MethodInfo *)0x0);
                                      pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Mesh::
                                                Mesh_get_vertices(this_02,(MethodInfo *)0x0);
                                      if (pVVar4 != (Vector3__Array *)0x0) {
                                        if (pVVar4->max_length < 3) goto code_?;
                                        if (pTVar14 != (Transform *)0x0) {
                                          fVar19 = pVVar4->vector[2].x;
                                          pVVar20 = (Vector3 *)&stack0xffffffc4;
                                          pVVar23 = UnityEngine.CoreModule.dll::UnityEngine::
                                                    Transform::Transform_TransformPoint
                                                              (pVVar20,pTVar14,pVVar4->vector[2],
                                                               (MethodInfo *)0x0);
                                          uVar24 = pVVar23->x;
                                          uVar25 = pVVar23->y;
                                          fVar26 = (pVVar23->z - fVar15) * _UNK_?;
                                          fVar27 = (float)uVar21 +
                                                   ((float)uVar24 - (float)uVar21) * _UNK_?;
                                          fVar28 = (float)uVar22 +
                                                   ((float)uVar25 - (float)uVar22) * _UNK_?;
                                          pGVar5 = (this->fields).gameObject;
                                          if (pGVar5 != (GameObject *)0x0) {
                                            pTVar14 = UnityEngine.CoreModule.dll::UnityEngine::
                                                      GameObject::GameObject_get_transform
                                                                (pGVar5,(MethodInfo *)0x0);
                                            if (pTVar14 != (Transform *)0x0) {
                                              pVVar23 = UnityEngine.CoreModule.dll::UnityEngine::
                                                        Transform::Transform_get_position
                                                                  ((Vector3 *)&stack0xffffffc4,
                                                                   pTVar14,(MethodInfo *)0x0);
                                              uVar29 = pVVar23->x;
                                              uVar30 = pVVar23->y;
                                              uVar31 = (info->fields).normal.x;
                                              uVar32 = (info->fields).normal.y;
                                              value.y = (float)uVar30 +
                                                        (float)uVar32 * _UNK_? +
                                                        (fVar19 - fVar28);
                                              value.x = (float)uVar29 +
                                                        (float)uVar31 * _UNK_? +
                                                        (((float)uVar13 + fVar12) - fVar27);
                                              value.z = pVVar23->z +
                                                        (info->fields).normal.z * _UNK_? +
                                                        ((float)pVVar20 - (fVar15 + fVar26));
                                              UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                              Transform_set_position
                                                        (pTVar14,value,(MethodInfo *)0x0);
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
        }
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar33 = (code *)swi(3);
  (*pcVar33)();
  return;
}


/* IndentArea() */

void Assembly-CSharp.dll::IndentArea::IndentArea__ctor(IndentArea *this,MethodInfo *method)

{
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
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_EDI);
  pGVar1 = (GameObject *)func_?(TypeInfo__UnityEngine__GameObject);
  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject__ctor
            (pGVar1,StringLiteral_IndentArea,(MethodInfo *)0x0);
  (this->fields).gameObject = pGVar1;
  func_?(&(this->fields).gameObject,pGVar1);
  pGVar1 = (this->fields).gameObject;
  value = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                    (StringLiteral_UIItems,(MethodInfo *)0x0);
  if (pGVar1 != (GameObject *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_set_layer
              (pGVar1,value,(MethodInfo *)0x0);
    pCVar2 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_main((MethodInfo *)0x0);
    (this->fields).mainCamera = pCVar2;
    func_?();
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
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        pPVar3 = TypeInfo__PrefabPool->static_fields->instance;
        if (pPVar3 != (PrefabPool *)0x0) {
          (this->fields).materialNone = (pPVar3->fields).indentMaterial;
          func_?();
          if (this_00 != (Renderer *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_sharedMaterial
                      (this_00,(this->fields).materialNone,(MethodInfo *)0x0);
            return;
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

