
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
            item = 2;
            if (this_02 !=
                (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
                 *)0x0) {
              while( true ) {
                pMVar3 = MethodInfo__System__Collections__Generic__List<int>__Add_int_;
                piVar4 = &(this_02->fields)._version;
                *piVar4 = *piVar4 + 1;
                pMVar5 = (this_02->fields)._items;
                if (pMVar5 == (MultiColumnCollectionHeader_ViewState_ColumnState__Array *)0x0)
                break;
                uVar6 = (this_02->fields)._size;
                if (uVar6 < pMVar5->max_length) {
                  (this_02->fields)._size = uVar6 + 1;
                  if (pMVar5->max_length <= uVar6) goto code_?;
                  (&pMVar5->vector[0].index)[uVar6] = item;
                }
                else {
                  mscorlib.dll::System::Collections::Generic::List`1[System::Int32]::
                  List_1_System_Int32__AddWithResize
                            ((List_1_System_Int32_ *)this_02,item,
                             pMVar3->klass->rgctx_data[0xe].method);
                }
                pMVar3 = MethodInfo__System__Collections__Generic__List<int>__Add_int_;
                piVar4 = &(this_02->fields)._version;
                *piVar4 = *piVar4 + 1;
                pMVar5 = (this_02->fields)._items;
                if (pMVar5 == (MultiColumnCollectionHeader_ViewState_ColumnState__Array *)0x0)
                break;
                uVar6 = (this_02->fields)._size;
                if (uVar6 < pMVar5->max_length) {
                  (this_02->fields)._size = uVar6 + 1;
                  if (pMVar5->max_length <= uVar6) goto code_?;
                  (&pMVar5->vector[0].index)[uVar6] = item + 1;
                }
                else {
                  mscorlib.dll::System::Collections::Generic::List`1[System::Int32]::
                  List_1_System_Int32__AddWithResize
                            ((List_1_System_Int32_ *)this_02,item + 1,
                             pMVar3->klass->rgctx_data[0xe].method);
                }
                pMVar3 = MethodInfo__System__Collections__Generic__List<int>__Add_int_;
                piVar4 = &(this_02->fields)._version;
                *piVar4 = *piVar4 + 1;
                pMVar5 = (this_02->fields)._items;
                if (pMVar5 == (MultiColumnCollectionHeader_ViewState_ColumnState__Array *)0x0)
                break;
                uVar6 = (this_02->fields)._size;
                if (uVar6 < pMVar5->max_length) {
                  (this_02->fields)._size = uVar6 + 1;
                  if (pMVar5->max_length <= uVar6) goto code_?;
                  (&pMVar5->vector[0].index)[uVar6] = item + -2;
                }
                else {
                  mscorlib.dll::System::Collections::Generic::List`1[System::Int32]::
                  List_1_System_Int32__AddWithResize
                            ((List_1_System_Int32_ *)this_02,item + -2,
                             pMVar3->klass->rgctx_data[0xe].method);
                }
                pMVar3 = MethodInfo__System__Collections__Generic__List<int>__Add_int_;
                piVar4 = &(this_02->fields)._version;
                *piVar4 = *piVar4 + 1;
                pMVar5 = (this_02->fields)._items;
                if (pMVar5 == (MultiColumnCollectionHeader_ViewState_ColumnState__Array *)0x0)
                break;
                uVar6 = (this_02->fields)._size;
                if (uVar6 < pMVar5->max_length) {
                  (this_02->fields)._size = uVar6 + 1;
                  if (pMVar5->max_length <= uVar6) goto code_?;
                  (&pMVar5->vector[0].index)[uVar6] = item + -2;
                }
                else {
                  mscorlib.dll::System::Collections::Generic::List`1[System::Int32]::
                  List_1_System_Int32__AddWithResize
                            ((List_1_System_Int32_ *)this_02,item + -2,
                             pMVar3->klass->rgctx_data[0xe].method);
                }
                pMVar3 = MethodInfo__System__Collections__Generic__List<int>__Add_int_;
                piVar4 = &(this_02->fields)._version;
                *piVar4 = *piVar4 + 1;
                pMVar5 = (this_02->fields)._items;
                if (pMVar5 == (MultiColumnCollectionHeader_ViewState_ColumnState__Array *)0x0)
                break;
                uVar6 = (this_02->fields)._size;
                if (uVar6 < pMVar5->max_length) {
                  (this_02->fields)._size = uVar6 + 1;
                  if (pMVar5->max_length <= uVar6) goto code_?;
                  (&pMVar5->vector[0].index)[uVar6] = item + -1;
                }
                else {
                  mscorlib.dll::System::Collections::Generic::List`1[System::Int32]::
                  List_1_System_Int32__AddWithResize
                            ((List_1_System_Int32_ *)this_02,item + -1,
                             pMVar3->klass->rgctx_data[0xe].method);
                }
                pMVar3 = MethodInfo__System__Collections__Generic__List<int>__Add_int_;
                piVar4 = &(this_02->fields)._version;
                *piVar4 = *piVar4 + 1;
                pMVar5 = (this_02->fields)._items;
                if (pMVar5 == (MultiColumnCollectionHeader_ViewState_ColumnState__Array *)0x0)
                break;
                uVar6 = (this_02->fields)._size;
                if (uVar6 < pMVar5->max_length) {
                  (this_02->fields)._size = uVar6 + 1;
                  if (pMVar5->max_length <= uVar6) goto code_?;
                  (&pMVar5->vector[0].index)[uVar6] = item;
                }
                else {
                  mscorlib.dll::System::Collections::Generic::List`1[System::Int32]::
                  List_1_System_Int32__AddWithResize
                            ((List_1_System_Int32_ *)this_02,item,
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
                if (pMVar5 == (MultiColumnCollectionHeader_ViewState_ColumnState__Array *)0x0)
                break;
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
                if (pMVar5 == (MultiColumnCollectionHeader_ViewState_ColumnState__Array *)0x0)
                break;
                uVar6 = (this_03->fields)._size;
                if (uVar6 < pMVar5->max_length) {
                  (this_03->fields)._size = uVar6 + 1;
                  if (pMVar5->max_length <= uVar6) goto code_?;
                  (&pMVar5->vector[0].index)[uVar6 * 2] = 0x3f800000;
                  (&pMVar5->vector[0].name)[uVar6 * 2] = (String *)0x0;
                }
                else {
                  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
                  List_1_UnityEngine_Vector2__AddWithResize
                            ((List_1_UnityEngine_Vector2_ *)this_03,(Vector2)0x3f800000,
                             pMVar3->klass->rgctx_data[0xe].method);
                }
                pMVar3 = 
                MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
                ;
                piVar4 = &(this_03->fields)._version;
                *piVar4 = *piVar4 + 1;
                pMVar5 = (this_03->fields)._items;
                if (pMVar5 == (MultiColumnCollectionHeader_ViewState_ColumnState__Array *)0x0)
                break;
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
                if (pMVar5 == (MultiColumnCollectionHeader_ViewState_ColumnState__Array *)0x0)
                break;
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
                item = item + 4;
                if (0x19 < item) {
                  pMVar5 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
                           UIElements::Internal::MultiColumnCollectionHeader+ViewState+ColumnState]
                           ::
                           List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState__ToArray
                                     (this_03,
                                      MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__ToArray__
                                     );
                  UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_set_uv
                            (this_04,(Vector2__Array *)pMVar5,(MethodInfo *)0x0);
                  pMVar5 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
                           UIElements::Internal::MultiColumnCollectionHeader+ViewState+ColumnState]
                           ::
                           List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState__ToArray
                                     (this_02,
                                      MethodInfo__System__Collections__Generic__List<int>__ToArray__
                                     );
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
    if (((TypeInfo__ModelingDynamicBoxConstraint->_1).naturalAligment <=
         (pIVar2->_1).naturalAligment) &&
       ((pIVar2->_1).typeHierarchy[(TypeInfo__ModelingDynamicBoxConstraint->_1).naturalAligment - 1]
        == (Il2CppClass *)TypeInfo__ModelingDynamicBoxConstraint)) {
      this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                          ((Component *)this,(MethodInfo *)0x0);
      if ((e == (ConstraintBoxChangedEventArgs *)0x0) || (this_00 == (Transform *)0x0)) {
        func_?();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
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
  pVVar2 = (Vector3__Array *)0x0;
  if (pIVar1 != (IModelingConstraint *)0x0) {
    pIVar3 = pIVar1->klass;
    if (((TypeInfo__ModelingDynamicBoxConstraint->_1).naturalAligment <=
         (pIVar3->_1).naturalAligment) &&
       ((pIVar3->_1).typeHierarchy
        [(TypeInfo__ModelingDynamicBoxConstraint->_1).naturalAligment - 1] ==
        (Il2CppClass *)TypeInfo__ModelingDynamicBoxConstraint)) {
      pIVar1 = (this->fields).constraint;
      if (pIVar1 == (IModelingConstraint *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                  ((Component *)this,(MethodInfo *)0x0);
      }
      else {
        if (((pIVar1->klass->_1).naturalAligment <
             (TypeInfo__ModelingDynamicBoxConstraint->_1).naturalAligment) ||
           ((pIVar1->klass->_1).typeHierarchy
            [(TypeInfo__ModelingDynamicBoxConstraint->_1).naturalAligment - 1] !=
            (Il2CppClass *)TypeInfo__ModelingDynamicBoxConstraint)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        pIVar5 = (IModelingConstraint *)0x0;
        if (bVar4) {
          pIVar5 = pIVar1;
        }
        this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                            ((Component *)this,(MethodInfo *)0x0);
        if (pIVar5 != (IModelingConstraint *)0x0) {
          pMVar6 = pIVar5[0xc].monitor;
          pIVar3 = pIVar5[0xd].klass;
          VStack_7.x = (float)pIVar5[0xe].klass;
          VStack_7.y = (float)*(undefined8 *)&pIVar5[0xe].monitor;
          VStack_7.z = (float)((ulonglong)*(undefined8 *)&pIVar5[0xe].monitor >> 0x20);
          if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->_1).
              cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort);
          }
          OVar8._4_4_ = pIVar3;
          OVar8._0_4_ = pMVar6;
          iVar9 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort
                   ::ObscuredShort_op_Implicit_1(OVar8,(MethodInfo *)0x0);
          pTVar10 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                              ((Component *)this,(MethodInfo *)0x0);
          if (pTVar10 != (Transform *)0x0) {
            pVVar11 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localScale
                                (&VStack_7,pTVar10,(MethodInfo *)0x0);
            fStack_12 = pVVar11->x;
            VStack_7.y = (float)*(undefined8 *)&pIVar5[0xe].monitor;
            VStack_7.z = (float)((ulonglong)*(undefined8 *)&pIVar5[0xe].monitor >> 0x20);
            uVar13 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::
                     ObscuredShort::ObscuredShort_op_Implicit_1
                               (*(ObscuredShort *)&pIVar5[0xd].monitor,(MethodInfo *)0x0);
            uStack_14 = (uint)uVar13;
            pTVar10 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                ((Component *)this,(MethodInfo *)0x0);
            if (pTVar10 != (Transform *)0x0) {
              pVVar11 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localScale
                                  (&VStack_7,pTVar10,(MethodInfo *)0x0);
              fStack_15 = pVVar11->y;
              pMVar6 = pIVar5[0xd].monitor;
              VStack_7.x = (float)pIVar5[0xe].klass;
              OVar8 = *(ObscuredShort *)&pIVar5[0xe].monitor;
              VStack_7.y = OVar8._0_4_;
              VStack_7.z = OVar8._4_4_;
              iVar16 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::
                       ObscuredShort::ObscuredShort_op_Implicit_1(OVar8,(MethodInfo *)0x0);
              pTVar10 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                  ((Component *)this,(MethodInfo *)0x0);
              if (pTVar10 != (Transform *)0x0) {
                uStack_17 = CONCAT44((float)(int)(short)uStack_14 * fStack_15,
                                     (float)(int)iVar9 * fStack_12);
                pVVar11 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                          Transform_get_localScale(&VStack_7,pTVar10,(MethodInfo *)0x0);
                pMStack_18 = (MonitorData *)((float)(int)iVar16 * pVVar11->z);
                if (this_00 != (Transform *)0x0) {
                  value.z = (float)pMStack_18;
                  value.x = (float)uStack_17;
                  value.y = uStack_17._4_4_;
                  UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
                            (this_00,value,(MethodInfo *)0x0);
                  if ((TypeInfo__SharedCubeFunctions->_1).cctor_finished_or_no_cctor == 0) {
                    func_?(TypeInfo__SharedCubeFunctions,pMVar6);
                  }
                  pVVar2 = SharedCubeFunctions::SharedCubeFunctions_GetVertices((MethodInfo *)0x0);
                  goto code_?;
                }
              }
            }
          }
        }
      }
code_?:
      func_?();
      pcVar19 = (code *)swi(3);
      (*pcVar19)();
      return;
    }
    pIVar3 = ((this->fields).constraint)->klass;
    if (((TypeInfo__ModelingBoxConstraint->_1).naturalAligment <= (pIVar3->_1).naturalAligment) &&
       ((pIVar3->_1).typeHierarchy[(TypeInfo__ModelingBoxConstraint->_1).naturalAligment - 1] ==
        (Il2CppClass *)TypeInfo__ModelingBoxConstraint)) {
      pIVar1 = (this->fields).constraint;
      pIVar5 = (IModelingConstraint *)0x0;
      if ((pIVar1->klass->_1).typeHierarchy
          [(TypeInfo__ModelingBoxConstraint->_1).naturalAligment - 1] ==
          (Il2CppClass *)TypeInfo__ModelingBoxConstraint) {
        pIVar5 = pIVar1;
      }
      if (pIVar5 == (IModelingConstraint *)0x0) goto code_?;
      IStack_20 = pIVar5[7];
      pIStack_21 = pIVar5[8].klass;
      if (cRam_? == '\0') {
        func_?(&TypeInfo__UnityEngine__Vector3);
        cRam_? = '\x01';
      }
      pVVar22 = TypeInfo__UnityEngine__Vector3->static_fields;
      uVar23 = (pVVar22->oneVector).x;
      uVar24 = (pVVar22->oneVector).y;
      VStack_7.x = (float)IStack_20.klass - (float)uVar23 * _UNK_?;
      VStack_7.y = (float)IStack_20.monitor - (float)uVar24 * _UNK_?;
      VStack_7.z = (float)pIStack_21 - (pVVar22->oneVector).z * _UNK_?;
      uStack_17 = *(undefined8 *)&pIVar5[8].monitor;
      pMStack_18 = pIVar5[9].monitor;
      if (cRam_? == '\0') {
        func_?(&TypeInfo__UnityEngine__Vector3);
        cRam_? = '\x01';
      }
      pVVar22 = TypeInfo__UnityEngine__Vector3->static_fields;
      uVar25 = (pVVar22->oneVector).x;
      uVar26 = (pVVar22->oneVector).y;
      pIStack_21 = (IModelingConstraint__Class *)
                   ((float)pMStack_18 + (pVVar22->oneVector).z * _UNK_?);
      IStack_20.monitor = (MonitorData *)(uStack_17._4_4_ + (float)uVar26 * _UNK_?);
      IStack_20.klass =
           (IModelingConstraint__Class *)((float)uStack_17 + (float)uVar25 * _UNK_?);
      if ((TypeInfo__SharedCubeFunctions->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__SharedCubeFunctions);
      }
      min.y = VStack_7.y;
      min.x = VStack_7.x;
      min.z = VStack_7.z;
      max.z = (float)pIStack_21;
      max.x = (float)IStack_20.klass;
      max.y = (float)IStack_20.monitor;
      pVVar2 = SharedCubeFunctions::SharedCubeFunctions_GetCorners_2(min,max,(MethodInfo *)0x0);
      pVVar2 = SharedCubeFunctions::SharedCubeFunctions_GetVertices_1(pVVar2,(MethodInfo *)0x0);
    }
  }
code_?:
  ConstraintVisualizer_BuildMesh(this,pVVar2,(MethodInfo *)0x0);
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
  (this->fields).constraint = constraint;
  func_?(&(this->fields).constraint,constraint);
  pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
  value = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                    (layer,(MethodInfo *)0x0);
  if (pGVar1 != (GameObject *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_set_layer
              (pGVar1,value,(MethodInfo *)0x0);
    pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                       ((Component *)this,(MethodInfo *)0x0);
    if (targetCubeModel != (MVCubeModelBase *)0x0) {
      pQVar3 = MVWorldObjectClient::MVWorldObjectClient_get_SyncRot
                         ((Quaternion *)&stack0xffffffe8,(MVWorldObjectClient *)targetCubeModel,
                          (MethodInfo *)0x0);
      if (pTVar2 != (Transform *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
                  (pTVar2,*pQVar3,(MethodInfo *)0x0);
        pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                           ((Component *)this,(MethodInfo *)0x0);
        pVVar4 = (Vector3 *)(*(code *)(targetCubeModel->klass->vtable).get_Scale.method)();
        if (pTVar2 != (Transform *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
                    (pTVar2,*pVVar4,(MethodInfo *)0x0);
          pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                             ((Component *)this,(MethodInfo *)0x0);
          pGVar1 = (targetCubeModel->fields)._.gameObject;
          if (pGVar1 != (GameObject *)0x0) {
            value_00 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                                 (pGVar1,(MethodInfo *)0x0);
            if (pTVar2 != (Transform *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_parent
                        (pTVar2,value_00,(MethodInfo *)0x0);
              if (((constraint == (IModelingConstraint *)0x0) ||
                  ((constraint->klass->_1).naturalAligment <
                   (TypeInfo__ModelingDynamicBoxConstraint->_1).naturalAligment)) ||
                 ((constraint->klass->_1).typeHierarchy
                  [(TypeInfo__ModelingDynamicBoxConstraint->_1).naturalAligment - 1] !=
                  (Il2CppClass *)TypeInfo__ModelingDynamicBoxConstraint)) {
                pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                   ((Component *)this,(MethodInfo *)0x0);
                puVar5 = (undefined8 *)
                         (*(code *)(targetCubeModel->klass->vtable).get_WorldPosition_1.method)();
                if (pTVar2 != (Transform *)0x0) {
                  fVar6 = (float)*puVar5;
                  this = (ConstraintVisualizer *)*(undefined4 *)(puVar5 + 1);
                  fVar7 = (float)(int)((ulonglong)*puVar5 >> 0x20);
                  VVar8 = (Vector3)CONCAT84(uVar9,fVar6);
                  UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                            (pTVar2,VVar8,(MethodInfo *)0x0);
                  ConstraintVisualizer_CreateInsideOutCube(this_00,(MethodInfo *)0x0);
                  return;
                }
              }
              else {
                if (((constraint->klass->_1).naturalAligment <
                     (TypeInfo__ModelingDynamicBoxConstraint->_1).naturalAligment) ||
                   ((constraint->klass->_1).typeHierarchy
                    [(TypeInfo__ModelingDynamicBoxConstraint->_1).naturalAligment - 1] !=
                    (Il2CppClass *)TypeInfo__ModelingDynamicBoxConstraint)) goto code_?;
                pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                   ((Component *)this,(MethodInfo *)0x0);
                if (pTVar2 != (Transform *)0x0) {
                  pIVar10 = constraint[10].klass;
                  this = (ConstraintVisualizer *)constraint[0xb].klass;
                  fVar7 = (float)constraint[10].monitor;
                  VVar8 = (Vector3)CONCAT84(uVar9,pIVar10);
                  UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                            (pTVar2,VVar8,(MethodInfo *)0x0);
                  this_01 = (EventHandler_1_Object_ *)func_?();
                  mscorlib.dll::System::EventHandler`1[Object]::EventHandler_1_Object___ctor
                            (this_01,(Object *)this_00,
                             MethodInfo__ConstraintVisualizer__Constraint_BoxChanged_System__Object__ConstraintBoxChangedEventArgs_
                             ,(MethodInfo *)0x0);
                  if (cRam_? == '\0') {
                    func_?();
                    cRam_? = '\x01';
                  }
                  pDVar11 = (Delegate *)constraint[0xb].monitor;
                  do {
                    pDVar12 = pDVar11;
                    pDVar11 = mscorlib.dll::System::Delegate::Delegate_Combine
                                       (pDVar11,(Delegate *)this_01,(MethodInfo *)0x0);
                    if (pDVar11 != (Delegate *)0x0) {
                      iVar13 = func_?();
                      if (iVar13 == 0) goto code_?;
                    }
                    pDVar11 = (Delegate *)func_?();
                    if (pDVar11 == pDVar12) {
                      ConstraintVisualizer_CreateInsideOutCube
                                ((ConstraintVisualizer *)0x0,(MethodInfo *)0x0);
                      return;
                    }
                  } while( true );
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
code_?:
  func_?();
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
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
    if (((pIVar1->klass->_1).naturalAligment <
         (TypeInfo__ModelingDynamicBoxConstraint->_1).naturalAligment) ||
       ((pIVar1->klass->_1).typeHierarchy
        [(TypeInfo__ModelingDynamicBoxConstraint->_1).naturalAligment - 1] !=
        (Il2CppClass *)TypeInfo__ModelingDynamicBoxConstraint)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    pIVar3 = (IModelingConstraint *)0x0;
    if (bVar2) {
      pIVar3 = pIVar1;
    }
    if (pIVar3 != (IModelingConstraint *)0x0) {
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
      pDVar4 = (Delegate *)pIVar3[0xb].monitor;
      ppMVar5 = &pIVar3[0xb].monitor;
      do {
        pDVar4 = mscorlib.dll::System::Delegate::Delegate_Remove
                           (pDVar4,(Delegate *)this_00,(MethodInfo *)pDVar4);
        iVar6 = 0;
        if (pDVar4 != (Delegate *)0x0) {
          ppMVar5 = (MonitorData **)&UNK_?;
          iVar6 = func_?(pDVar4);
          if (iVar6 == 0) {
            func_?(pDVar4);
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
        }
        pDVar8 = (Delegate *)&UNK_?;
        pDVar4 = (Delegate *)func_?(ppMVar5,iVar6);
      } while (pDVar4 != pDVar8);
    }
  }
  return;
}

