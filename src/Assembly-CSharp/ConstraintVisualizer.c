
/* Void BuildMesh(Vector3[]) */

void Assembly-CSharp.dll::ConstraintVisualizer::ConstraintVisualizer_BuildMesh
               (ConstraintVisualizer *this,Vector3__Array *vertices,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    UnityEngine__MeshFilter_MethodInfo__UnityEngine__GameObject__AddComponent<UnityEngine::MeshFilter>__
                   );
    func_?(&
                    UnityEngine__MeshRenderer_MethodInfo__UnityEngine__GameObject__AddComponent<UnityEngine::MeshRenderer>__
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<int>__Add_int_);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<int>__ToArray__);
    func_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__ToArray__
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<int>__List__);
    func_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__List__);
    func_?(&TypeInfo__System__Collections__Generic__List<int>);
    func_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::Vector2>);
    cRam_? = '\x01';
  }
  pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
  if (pGVar1 != (GameObject *)0x0) {
    this_00 = (MeshFilter *)
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_1
                        (pGVar1,
                         UnityEngine__MeshFilter_MethodInfo__UnityEngine__GameObject__AddComponent<UnityEngine::MeshFilter>__
                        );
    pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this,(MethodInfo *)0x0);
    if (pGVar1 != (GameObject *)0x0) {
      this_01 = (Renderer *)
                UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_1
                          (pGVar1,
                           UnityEngine__MeshRenderer_MethodInfo__UnityEngine__GameObject__AddComponent<UnityEngine::MeshRenderer>__
                          );
      if (cRam_? == '\0') {
        func_?(&TypeInfo__PrefabPool);
        cRam_? = '\x01';
      }
      pPVar2 = TypeInfo__PrefabPool->static_fields->instance;
      if ((pPVar2 != (PrefabPool *)0x0) && (this_01 != (Renderer *)0x0)) {
        UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_sharedMaterial
                  (this_01,(pPVar2->fields).modelConstraintsMaterial,(MethodInfo *)0x0);
        this_02 = (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
                   *)func_?(TypeInfo__System__Collections__Generic__List<int>);
        mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
        __Il2CppFullySharedGenericType]::
        LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
                  ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_02,
                   MethodInfo__System__Collections__Generic__List<int>__List__);
        this_03 = (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
                   *)func_?(
                                    TypeInfo__System__Collections__Generic__List<UnityEngine::Vector2>
                                    );
        mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
        __Il2CppFullySharedGenericType]::
        LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
                  ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_03,
                   MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__List__);
        if (this_00 != (MeshFilter *)0x0) {
          this_04 = UnityEngine.CoreModule.dll::UnityEngine::MeshFilter::MeshFilter_get_mesh
                              (this_00,(MethodInfo *)0x0);
          if (this_04 != (Mesh *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_set_vertices
                      (this_04,vertices,(MethodInfo *)0x0);
            item_00 = 2;
            while (pMVar3 = MethodInfo__System__Collections__Generic__List<int>__Add_int_,
                  this_02 !=
                  (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
                   *)0x0) {
              piVar4 = &(this_02->fields)._version;
              *piVar4 = *piVar4 + 1;
              pMVar5 = (this_02->fields)._items;
              if (pMVar5 == (MultiColumnCollectionHeader_ViewState_ColumnState__Array *)0x0) break;
              uVar6 = (this_02->fields)._size;
              if (uVar6 < pMVar5->max_length) {
                (this_02->fields)._size = uVar6 + 1;
                if (pMVar5->max_length <= uVar6) goto code_?;
                (&pMVar5->vector[0].index)[uVar6] = item_00;
              }
              else {
                mscorlib.dll::System::Collections::Generic::List`1[System::Int32]::
                List_1_System_Int32__AddWithResize
                          ((List_1_System_Int32_ *)this_02,item_00,
                           pMVar3->klass->rgctx_data[0xe].method);
              }
              pMVar3 = MethodInfo__System__Collections__Generic__List<int>__Add_int_;
              piVar4 = &(this_02->fields)._version;
              *piVar4 = *piVar4 + 1;
              pMVar5 = (this_02->fields)._items;
              if (pMVar5 == (MultiColumnCollectionHeader_ViewState_ColumnState__Array *)0x0) break;
              uVar6 = (this_02->fields)._size;
              if (uVar6 < pMVar5->max_length) {
                (this_02->fields)._size = uVar6 + 1;
                if (pMVar5->max_length <= uVar6) goto code_?;
                (&pMVar5->vector[0].index)[uVar6] = item_00 + 1;
              }
              else {
                mscorlib.dll::System::Collections::Generic::List`1[System::Int32]::
                List_1_System_Int32__AddWithResize
                          ((List_1_System_Int32_ *)this_02,item_00 + 1,
                           pMVar3->klass->rgctx_data[0xe].method);
              }
              pMVar3 = MethodInfo__System__Collections__Generic__List<int>__Add_int_;
              piVar4 = &(this_02->fields)._version;
              *piVar4 = *piVar4 + 1;
              pMVar5 = (this_02->fields)._items;
              if (pMVar5 == (MultiColumnCollectionHeader_ViewState_ColumnState__Array *)0x0) break;
              uVar6 = (this_02->fields)._size;
              if (uVar6 < pMVar5->max_length) {
                (this_02->fields)._size = uVar6 + 1;
                if (pMVar5->max_length <= uVar6) goto code_?;
                (&pMVar5->vector[0].index)[uVar6] = item_00 + -2;
              }
              else {
                mscorlib.dll::System::Collections::Generic::List`1[System::Int32]::
                List_1_System_Int32__AddWithResize
                          ((List_1_System_Int32_ *)this_02,item_00 + -2,
                           pMVar3->klass->rgctx_data[0xe].method);
              }
              pMVar3 = MethodInfo__System__Collections__Generic__List<int>__Add_int_;
              piVar4 = &(this_02->fields)._version;
              *piVar4 = *piVar4 + 1;
              pMVar5 = (this_02->fields)._items;
              if (pMVar5 == (MultiColumnCollectionHeader_ViewState_ColumnState__Array *)0x0) break;
              uVar6 = (this_02->fields)._size;
              if (uVar6 < pMVar5->max_length) {
                (this_02->fields)._size = uVar6 + 1;
                if (pMVar5->max_length <= uVar6) goto code_?;
                (&pMVar5->vector[0].index)[uVar6] = item_00 + -2;
              }
              else {
                mscorlib.dll::System::Collections::Generic::List`1[System::Int32]::
                List_1_System_Int32__AddWithResize
                          ((List_1_System_Int32_ *)this_02,item_00 + -2,
                           pMVar3->klass->rgctx_data[0xe].method);
              }
              pMVar3 = MethodInfo__System__Collections__Generic__List<int>__Add_int_;
              piVar4 = &(this_02->fields)._version;
              *piVar4 = *piVar4 + 1;
              pMVar5 = (this_02->fields)._items;
              if (pMVar5 == (MultiColumnCollectionHeader_ViewState_ColumnState__Array *)0x0) break;
              uVar6 = (this_02->fields)._size;
              if (uVar6 < pMVar5->max_length) {
                (this_02->fields)._size = uVar6 + 1;
                if (pMVar5->max_length <= uVar6) goto code_?;
                (&pMVar5->vector[0].index)[uVar6] = item_00 + -1;
              }
              else {
                mscorlib.dll::System::Collections::Generic::List`1[System::Int32]::
                List_1_System_Int32__AddWithResize
                          ((List_1_System_Int32_ *)this_02,item_00 + -1,
                           pMVar3->klass->rgctx_data[0xe].method);
              }
              pMVar3 = MethodInfo__System__Collections__Generic__List<int>__Add_int_;
              piVar4 = &(this_02->fields)._version;
              *piVar4 = *piVar4 + 1;
              pMVar5 = (this_02->fields)._items;
              if (pMVar5 == (MultiColumnCollectionHeader_ViewState_ColumnState__Array *)0x0) break;
              uVar6 = (this_02->fields)._size;
              if (uVar6 < pMVar5->max_length) {
                (this_02->fields)._size = uVar6 + 1;
                if (pMVar5->max_length <= uVar6) goto code_?;
                (&pMVar5->vector[0].index)[uVar6] = item_00;
              }
              else {
                mscorlib.dll::System::Collections::Generic::List`1[System::Int32]::
                List_1_System_Int32__AddWithResize
                          ((List_1_System_Int32_ *)this_02,item_00,
                           pMVar3->klass->rgctx_data[0xe].method);
              }
              pMVar3 = 
              MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
              ;
              if (this_03 ==
                  (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
                   *)0x0) break;
              piVar4 = &(this_03->fields)._version;
              *piVar4 = *piVar4 + 1;
              pMVar5 = (this_03->fields)._items;
              if (pMVar5 == (MultiColumnCollectionHeader_ViewState_ColumnState__Array *)0x0) break;
              uVar6 = (this_03->fields)._size;
              if (uVar6 < pMVar5->max_length) {
                (this_03->fields)._size = uVar6 + 1;
                if (pMVar5->max_length <= uVar6) goto code_?;
                (&pMVar5->vector[0].index)[uVar6 * 2] = 0;
                (&pMVar5->vector[0].name)[uVar6 * 2] = (String *)0x0;
              }
              else {
                mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
                List_1_UnityEngine_Vector2__AddWithResize
                          ((List_1_UnityEngine_Vector2_ *)this_03,(Vector2)0x0,
                           pMVar3->klass->rgctx_data[0xe].method);
              }
              pMVar3 = 
              MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
              ;
              piVar4 = &(this_03->fields)._version;
              *piVar4 = *piVar4 + 1;
              pMVar5 = (this_03->fields)._items;
              if (pMVar5 == (MultiColumnCollectionHeader_ViewState_ColumnState__Array *)0x0) break;
              uVar6 = (this_03->fields)._size;
              if (uVar6 < pMVar5->max_length) {
                (this_03->fields)._size = uVar6 + 1;
                if (pMVar5->max_length <= uVar6) goto code_?;
                (&pMVar5->vector[0].index)[uVar6 * 2] = 0x3f800000;
                (&pMVar5->vector[0].name)[uVar6 * 2] = (String *)0x0;
              }
              else {
                pMVar3 = pMVar3->klass->rgctx_data[0xe].method;
                item.y = 0.0;
                item.x = (float)pMVar3;
                mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
                List_1_UnityEngine_Vector2__AddWithResize
                          ((List_1_UnityEngine_Vector2_ *)this_03,item,pMVar3);
              }
              pMVar3 = 
              MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
              ;
              piVar4 = &(this_03->fields)._version;
              *piVar4 = *piVar4 + 1;
              pMVar5 = (this_03->fields)._items;
              if (pMVar5 == (MultiColumnCollectionHeader_ViewState_ColumnState__Array *)0x0) break;
              uVar6 = (this_03->fields)._size;
              if (uVar6 < pMVar5->max_length) {
                (this_03->fields)._size = uVar6 + 1;
                if (pMVar5->max_length <= uVar6) goto code_?;
                (&pMVar5->vector[0].index)[uVar6 * 2] = 0x3f800000;
                (&pMVar5->vector[0].name)[uVar6 * 2] = (String *)0x3f800000;
              }
              else {
                mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
                List_1_UnityEngine_Vector2__AddWithResize
                          ((List_1_UnityEngine_Vector2_ *)this_03,(Vector2)0x3f8000003f800000,
                           pMVar3->klass->rgctx_data[0xe].method);
              }
              pMVar3 = 
              MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
              ;
              piVar4 = &(this_03->fields)._version;
              *piVar4 = *piVar4 + 1;
              pMVar5 = (this_03->fields)._items;
              if (pMVar5 == (MultiColumnCollectionHeader_ViewState_ColumnState__Array *)0x0) break;
              uVar6 = (this_03->fields)._size;
              if (uVar6 < pMVar5->max_length) {
                (this_03->fields)._size = uVar6 + 1;
                if (pMVar5->max_length <= uVar6) goto code_?;
                (&pMVar5->vector[0].index)[uVar6 * 2] = 0;
                (&pMVar5->vector[0].name)[uVar6 * 2] = (String *)0x3f800000;
              }
              else {
                mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
                List_1_UnityEngine_Vector2__AddWithResize
                          ((List_1_UnityEngine_Vector2_ *)this_03,(Vector2)0x3f80000000000000,
                           pMVar3->klass->rgctx_data[0xe].method);
              }
              item_00 = item_00 + 4;
              if (0x19 < item_00) {
                pMVar5 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements
                         ::Internal::MultiColumnCollectionHeader+ViewState+ColumnState]::
                         List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState__ToArray
                                   (this_03,
                                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__ToArray__
                                   );
                UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_set_uv
                          (this_04,(Vector2__Array *)pMVar5,(MethodInfo *)0x0);
                pMVar5 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements
                         ::Internal::MultiColumnCollectionHeader+ViewState+ColumnState]::
                         List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState__ToArray
                                   (this_02,
                                    MethodInfo__System__Collections__Generic__List<int>__ToArray__);
                UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_set_triangles
                          (this_04,(Int32__Array *)pMVar5,(MethodInfo *)0x0);
                UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_RecalculateNormals
                          (this_04,(MethodInfo *)0x0);
                UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_RecalculateBounds
                          (this_04,(MethodInfo *)0x0);
                return;
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
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void Constraint_BoxChanged(Object, ConstraintBoxChangedEventArgs) */

void Assembly-CSharp.dll::ConstraintVisualizer::ConstraintVisualizer_Constraint_BoxChanged
               (ConstraintVisualizer *this,Object *sender,ConstraintBoxChangedEventArgs *e,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__ModelingDynamicBoxConstraint);
    cRam_? = '\x01';
  }
  pIVar1 = (this->fields).constraint;
  if (pIVar1 != (IModelingConstraint *)0x0) {
    pIVar2 = pIVar1->klass;
    bVar3 = (TypeInfo__ModelingDynamicBoxConstraint->_1).naturalAligment;
    if ((bVar3 <= (pIVar2->_1).naturalAligment) &&
       ((pIVar2->_1).typeHierarchy[bVar3 - 1] ==
        (Il2CppClass *)TypeInfo__ModelingDynamicBoxConstraint)) {
      this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                          ((Component *)this,(MethodInfo *)0x0);
      if ((e == (ConstraintBoxChangedEventArgs *)0x0) || (this_00 == (Transform *)0x0)) {
        func_?();
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                (this_00,(e->fields).Center,(MethodInfo *)0x0);
    }
  }
  return;
}


/* Void CreateInsideOutCube() */

void Assembly-CSharp.dll::ConstraintVisualizer::ConstraintVisualizer_CreateInsideOutCube
               (ConstraintVisualizer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__ModelingBoxConstraint);
    func_?(&TypeInfo__ModelingDynamicBoxConstraint);
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort);
    func_?(&TypeInfo__SharedCubeFunctions);
    cRam_? = '\x01';
  }
  pIVar1 = (this->fields).constraint;
  if (pIVar1 != (IModelingConstraint *)0x0) {
    bVar2 = (TypeInfo__ModelingDynamicBoxConstraint->_1).naturalAligment;
    if (((pIVar1->klass->_1).naturalAligment < bVar2) ||
       ((pIVar1->klass->_1).typeHierarchy[bVar2 - 1] !=
        (Il2CppClass *)TypeInfo__ModelingDynamicBoxConstraint)) {
      bVar2 = (TypeInfo__ModelingBoxConstraint->_1).naturalAligment;
      if (((pIVar1->klass->_1).naturalAligment < bVar2) ||
         ((pIVar1->klass->_1).typeHierarchy[bVar2 - 1] !=
          (Il2CppClass *)TypeInfo__ModelingBoxConstraint)) goto code_?;
      if ((pIVar1->klass->_1).typeHierarchy[bVar2 - 1] ==
          (Il2CppClass *)TypeInfo__ModelingBoxConstraint) {
        IVar3 = pIVar1[7];
        pIVar4 = pIVar1[8].klass;
        if (cRam_? == '\0') {
          func_?(&TypeInfo__UnityEngine__Vector3);
          cRam_? = '\x01';
        }
        pVVar5 = TypeInfo__UnityEngine__Vector3->static_fields;
        uVar6 = (pVVar5->oneVector).x;
        uVar7 = (pVVar5->oneVector).y;
        pIStack_8 = IVar3.klass;
        fVar9 = (float)pIStack_8 - (float)uVar6 * _UNK_?;
        pMStack_10 = IVar3.monitor;
        fVar11 = (float)pMStack_10 - (float)uVar7 * _UNK_?;
        fVar12 = (float)pIVar4 - (pVVar5->oneVector).z * _UNK_?;
        uVar13 = *(undefined8 *)&pIVar1[8].monitor;
        pMVar14 = pIVar1[9].monitor;
        if (cRam_? == '\0') {
          func_?(&TypeInfo__UnityEngine__Vector3);
          cRam_? = '\x01';
        }
        pVVar5 = TypeInfo__UnityEngine__Vector3->static_fields;
        uVar15 = (pVVar5->oneVector).x;
        uVar16 = (pVVar5->oneVector).y;
        fVar17 = (float)uVar15 * _UNK_?;
        fVar18 = (float)uVar16 * _UNK_?;
        fVar19 = (pVVar5->oneVector).z * _UNK_?;
        fStack_20 = (float)uVar13;
        fStack_21 = (float)((ulonglong)uVar13 >> 0x20);
        if ((TypeInfo__SharedCubeFunctions->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__SharedCubeFunctions);
        }
        min.y = fVar11;
        min.x = fVar9;
        min.z = fVar12;
        max.y = fStack_21 + fVar18;
        max.x = fStack_20 + fVar17;
        max.z = (float)pMVar14 + fVar19;
        pVVar22 = SharedCubeFunctions::SharedCubeFunctions_GetCorners_2(min,max,(MethodInfo *)0x0);
        pVVar22 = SharedCubeFunctions::SharedCubeFunctions_GetVertices_1(pVVar22,(MethodInfo *)0x0);
        ConstraintVisualizer_BuildMesh(this,pVVar22,(MethodInfo *)0x0);
        return;
      }
    }
    else {
      if (((pIVar1->klass->_1).naturalAligment < bVar2) ||
         ((pIVar1->klass->_1).typeHierarchy[bVar2 - 1] !=
          (Il2CppClass *)TypeInfo__ModelingDynamicBoxConstraint)) {
        bVar23 = false;
      }
      else {
        bVar23 = true;
      }
      pIVar24 = (IModelingConstraint *)0x0;
      if (bVar23) {
        pIVar24 = pIVar1;
      }
      this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                          ((Component *)this,(MethodInfo *)0x0);
      if (pIVar24 != (IModelingConstraint *)0x0) {
        pMVar14 = pIVar24[0xc].monitor;
        pIVar4 = pIVar24[0xd].klass;
        if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->_1).
            cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort);
        }
        value._4_4_ = pIVar4;
        value._0_4_ = pMVar14;
        iVar25 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
                 ObscuredShort_op_Implicit_1(value,(MethodInfo *)0x0);
        pTVar26 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                            ((Component *)this,(MethodInfo *)0x0);
        if (pTVar26 != (Transform *)0x0) {
          pVVar27 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localScale
                              ((Vector3 *)&stack0xffffffcc,pTVar26,(MethodInfo *)0x0);
          fVar9 = pVVar27->x;
          iVar28 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort
                   ::ObscuredShort_op_Implicit_1
                             (*(ObscuredShort *)&pIVar24[0xd].monitor,(MethodInfo *)0x0);
          pTVar26 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                              ((Component *)this,(MethodInfo *)0x0);
          if (pTVar26 != (Transform *)0x0) {
            pVVar27 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localScale
                                ((Vector3 *)&stack0xffffffcc,pTVar26,(MethodInfo *)0x0);
            fVar11 = pVVar27->y;
            pMVar14 = pIVar24[0xd].monitor;
            iVar29 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::
                     ObscuredShort::ObscuredShort_op_Implicit_1
                               (*(ObscuredShort *)&pIVar24[0xe].monitor,(MethodInfo *)0x0);
            pTVar26 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                ((Component *)this,(MethodInfo *)0x0);
            if (pTVar26 != (Transform *)0x0) {
              pVVar27 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localScale
                                  ((Vector3 *)&stack0xffffffcc,pTVar26,(MethodInfo *)0x0);
              if (this_00 != (Transform *)0x0) {
                value_00.y = (float)(int)iVar28 * fVar11;
                value_00.x = (float)(int)iVar25 * fVar9;
                value_00.z = (float)(int)iVar29 * pVVar27->z;
                UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
                          (this_00,value_00,(MethodInfo *)0x0);
                if ((TypeInfo__SharedCubeFunctions->_1).cctor_finished_or_no_cctor == 0) {
                  func_?(TypeInfo__SharedCubeFunctions,pMVar14);
                }
                pVVar22 = SharedCubeFunctions::SharedCubeFunctions_GetVertices((MethodInfo *)0x0);
                ConstraintVisualizer_BuildMesh(this,pVVar22,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
    }
    func_?();
    pcVar30 = (code *)swi(3);
    (*pcVar30)();
    return;
  }
code_?:
  ConstraintVisualizer_BuildMesh(this,(Vector3__Array *)0x0,(MethodInfo *)0x0);
  return;
}


/* Void Init(MVCubeModelBase, IModelingConstraint, String) */

void Assembly-CSharp.dll::ConstraintVisualizer::ConstraintVisualizer_Init
               (ConstraintVisualizer *this,MVCubeModelBase *targetCubeModel,
               IModelingConstraint *constraint,String *layer,MethodInfo *method)

{
  this_00 = this;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__ConstraintVisualizer__Constraint_BoxChanged_System__Object__ConstraintBoxChangedEventArgs_
                   );
    func_?(&TypeInfo__System__EventHandler<ConstraintBoxChangedEventArgs>);
    func_?(&TypeInfo__ModelingDynamicBoxConstraint);
    cRam_? = '\x01';
  }
  ppIVar1 = &(this->fields).constraint;
  *ppIVar1 = constraint;
  func_?(ppIVar1,constraint);
  pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
  value = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                    (layer,(MethodInfo *)0x0);
  if (pGVar2 != (GameObject *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_set_layer
              (pGVar2,value,(MethodInfo *)0x0);
    pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                       ((Component *)this,(MethodInfo *)0x0);
    if (targetCubeModel != (MVCubeModelBase *)0x0) {
      pQVar4 = MVWorldObjectClient::MVWorldObjectClient_get_SyncRot
                         ((Quaternion *)&stack0xffffffe8,(MVWorldObjectClient *)targetCubeModel,
                          (MethodInfo *)0x0);
      if (pTVar3 != (Transform *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
                  (pTVar3,*pQVar4,(MethodInfo *)0x0);
        pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                           ((Component *)this,(MethodInfo *)0x0);
        pVVar5 = (Vector3 *)(*(code *)(targetCubeModel->klass->vtable).get_Scale.method)();
        if (pTVar3 != (Transform *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
                    (pTVar3,*pVVar5,(MethodInfo *)0x0);
          pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                             ((Component *)this,(MethodInfo *)0x0);
          pGVar2 = (targetCubeModel->fields)._.gameObject;
          if (pGVar2 != (GameObject *)0x0) {
            value_00 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                                 (pGVar2,(MethodInfo *)0x0);
            if (pTVar3 != (Transform *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_parent
                        (pTVar3,value_00,(MethodInfo *)0x0);
              if (constraint != (IModelingConstraint *)0x0) {
                bVar6 = (TypeInfo__ModelingDynamicBoxConstraint->_1).naturalAligment;
                if ((bVar6 <= (constraint->klass->_1).naturalAligment) &&
                   ((constraint->klass->_1).typeHierarchy[bVar6 - 1] ==
                    (Il2CppClass *)TypeInfo__ModelingDynamicBoxConstraint)) {
                  bVar6 = (TypeInfo__ModelingDynamicBoxConstraint->_1).naturalAligment;
                  if (((constraint->klass->_1).naturalAligment < bVar6) ||
                     ((constraint->klass->_1).typeHierarchy[bVar6 - 1] !=
                      (Il2CppClass *)TypeInfo__ModelingDynamicBoxConstraint)) goto code_?;
                  pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                           Component_get_transform((Component *)this,(MethodInfo *)0x0);
                  if (pTVar3 != (Transform *)0x0) {
                    pIVar7 = constraint[10].klass;
                    this = (ConstraintVisualizer *)constraint[0xb].klass;
                    fVar8 = (float)constraint[10].monitor;
                    VVar9 = (Vector3)CONCAT84(uVar10,pIVar7);
                    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                              (pTVar3,VVar9,(MethodInfo *)0x0);
                    this_01 = (EventHandler_1_Object_ *)func_?();
                    uVar11 = CONCAT44(this_00,this_01);
                    mscorlib.dll::System::EventHandler`1[Object]::EventHandler_1_Object___ctor
                              (this_01,(Object *)this_00,
                               MethodInfo__ConstraintVisualizer__Constraint_BoxChanged_System__Object__ConstraintBoxChangedEventArgs_
                               ,(MethodInfo *)0x0);
                    if (cRam_? == '\0') {
                      func_?();
                      cRam_? = '\x01';
                    }
                    a = (Delegate *)constraint[0xb].monitor;
                    do {
                      pDVar12 = mscorlib.dll::System::Delegate::Delegate_Combine
                                         (a,(Delegate *)this_01,(MethodInfo *)0x0);
                      if (pDVar12 != (Delegate *)0x0) {
                        iVar13 = func_?();
                        if (iVar13 == 0) goto code_?;
                      }
                      pDVar12 = (Delegate *)func_?();
                      this_01 = (EventHandler_1_Object_ *)uVar11;
                      bVar14 = pDVar12 == a;
                      a = pDVar12;
                      if (bVar14) {
                        ConstraintVisualizer_CreateInsideOutCube
                                  ((ConstraintVisualizer *)0x0,(MethodInfo *)0x0);
                        return;
                      }
                    } while( true );
                  }
                  goto code_?;
                }
              }
              pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                 ((Component *)this,(MethodInfo *)0x0);
              puVar15 = (undefined8 *)
                        (*(code *)(targetCubeModel->klass->vtable).get_WorldPosition_1.method)();
              if (pTVar3 != (Transform *)0x0) {
                fVar16 = (float)*puVar15;
                this = (ConstraintVisualizer *)*(undefined4 *)(puVar15 + 1);
                fVar8 = (float)(int)((ulonglong)*puVar15 >> 0x20);
                VVar9 = (Vector3)CONCAT84(uVar10,fVar16);
                UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                          (pTVar3,VVar9,(MethodInfo *)0x0);
                ConstraintVisualizer_CreateInsideOutCube(this_00,(MethodInfo *)0x0);
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
code_?:
  func_?();
code_?:
  func_?();
  pcVar17 = (code *)swi(3);
  (*pcVar17)();
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::ConstraintVisualizer::ConstraintVisualizer_OnDestroy
               (ConstraintVisualizer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__ConstraintVisualizer__Constraint_BoxChanged_System__Object__ConstraintBoxChangedEventArgs_
                   );
    func_?(&TypeInfo__System__EventHandler<ConstraintBoxChangedEventArgs>);
    func_?(&TypeInfo__ModelingDynamicBoxConstraint);
    cRam_? = '\x01';
  }
  pIVar1 = (this->fields).constraint;
  if (pIVar1 != (IModelingConstraint *)0x0) {
    bVar2 = (TypeInfo__ModelingDynamicBoxConstraint->_1).naturalAligment;
    if ((bVar2 <= (pIVar1->klass->_1).naturalAligment) &&
       ((pIVar1->klass->_1).typeHierarchy[bVar2 - 1] ==
        (Il2CppClass *)TypeInfo__ModelingDynamicBoxConstraint)) {
      this_00 = (EventHandler_1_Object_ *)
                func_?(TypeInfo__System__EventHandler<ConstraintBoxChangedEventArgs>);
      mscorlib.dll::System::EventHandler`1[Object]::EventHandler_1_Object___ctor
                (this_00,(Object *)this,
                 MethodInfo__ConstraintVisualizer__Constraint_BoxChanged_System__Object__ConstraintBoxChangedEventArgs_
                 ,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        func_?(&TypeInfo__System__EventHandler<ConstraintBoxChangedEventArgs>);
        cRam_? = '\x01';
      }
      ppMVar3 = &pIVar1[0xb].monitor;
      pDVar4 = (Delegate *)*ppMVar3;
      do {
        pDVar4 = mscorlib.dll::System::Delegate::Delegate_Remove
                           (pDVar4,(Delegate *)this_00,(MethodInfo *)0x0);
        iVar5 = 0;
        if ((pDVar4 != (Delegate *)0x0) && (iVar5 = func_?(pDVar4), iVar5 == 0)) {
          func_?(pDVar4);
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        this_00 = (EventHandler_1_Object_ *)&UNK_?;
        pDVar7 = (Delegate *)ppMVar3;
        pDVar4 = (Delegate *)func_?(ppMVar3,iVar5);
      } while (pDVar4 != pDVar7);
    }
  }
  return;
}

