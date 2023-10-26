
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
        this_02 = (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)
                  func_?(TypeInfo__System__Collections__Generic__List<int>);
        if (this_02 != (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)0x0) {
          mscorlib.dll::System::Collections::Generic::LowLevelList`1[System::Object]::
          LowLevelList_1_System_Object___ctor
                    ((LowLevelList_1_System_Object_ *)this_02,
                     MethodInfo__System__Collections__Generic__List<int>__List__);
          this_03 = (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)
                    func_?(
                                   TypeInfo__System__Collections__Generic__List<UnityEngine::Vector2>
                                   );
          if (this_03 != (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)0x0) {
            mscorlib.dll::System::Collections::Generic::LowLevelList`1[System::Object]::
            LowLevelList_1_System_Object___ctor
                      ((LowLevelList_1_System_Object_ *)this_03,
                       MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__List__)
            ;
            if (this_00 != (MeshFilter *)0x0) {
              this_04 = UnityEngine.CoreModule.dll::UnityEngine::MeshFilter::MeshFilter_get_mesh
                                  (this_00,(MethodInfo *)0x0);
              if (this_04 != (Mesh *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_set_vertices
                          (this_04,vertices,(MethodInfo *)0x0);
                pSVar3 = (SendOrPostCallback *)0x2;
                while( true ) {
                  pMVar4 = MethodInfo__System__Collections__Generic__List<int>__Add_int_;
                  piVar5 = &(this_02->fields)._version;
                  *piVar5 = *piVar5 + 1;
                  pUVar6 = (this_02->fields)._items;
                  if (pUVar6 == (UnitySynchronizationContext_WorkRequest__Array *)0x0) break;
                  uVar7 = (this_02->fields)._size;
                  if (uVar7 < pUVar6->max_length) {
                    (this_02->fields)._size = uVar7 + 1;
                    if (pUVar6->max_length <= uVar7) goto code_?;
                    (&pUVar6->vector[0].m_DelagateCallback)[uVar7] = pSVar3;
                  }
                  else {
                    (*(pMVar4->klass->rgctx_data[0xb].method)->virtualMethodPointer)
                              (this_02,pSVar3,pMVar4->klass->rgctx_data[0xb].rgctxDataDummy);
                  }
                  pMVar4 = MethodInfo__System__Collections__Generic__List<int>__Add_int_;
                  piVar5 = &(this_02->fields)._version;
                  *piVar5 = *piVar5 + 1;
                  pUVar6 = (this_02->fields)._items;
                  if (pUVar6 == (UnitySynchronizationContext_WorkRequest__Array *)0x0) break;
                  uVar7 = (this_02->fields)._size;
                  if (uVar7 < pUVar6->max_length) {
                    (this_02->fields)._size = uVar7 + 1;
                    if (pUVar6->max_length <= uVar7) goto code_?;
                    (&pUVar6->vector[0].m_DelagateCallback)[uVar7] =
                         (SendOrPostCallback *)((int)&pSVar3->klass + 1);
                  }
                  else {
                    (*(pMVar4->klass->rgctx_data[0xb].method)->virtualMethodPointer)
                              (this_02,(undefined1 *)((int)&pSVar3->klass + 1),
                               pMVar4->klass->rgctx_data[0xb].rgctxDataDummy);
                  }
                  pMVar4 = MethodInfo__System__Collections__Generic__List<int>__Add_int_;
                  piVar5 = &(this_02->fields)._version;
                  *piVar5 = *piVar5 + 1;
                  pUVar6 = (this_02->fields)._items;
                  if (pUVar6 == (UnitySynchronizationContext_WorkRequest__Array *)0x0) break;
                  uVar7 = (this_02->fields)._size;
                  if (uVar7 < pUVar6->max_length) {
                    (this_02->fields)._size = uVar7 + 1;
                    if (pUVar6->max_length <= uVar7) goto code_?;
                    (&pUVar6->vector[0].m_DelagateCallback)[uVar7] =
                         (SendOrPostCallback *)((int)&pSVar3[-1].fields._.delegates + 2);
                  }
                  else {
                    (*(pMVar4->klass->rgctx_data[0xb].method)->virtualMethodPointer)
                              (this_02,(undefined1 *)((int)&pSVar3[-1].fields._.delegates + 2),
                               pMVar4->klass->rgctx_data[0xb].rgctxDataDummy);
                  }
                  pMVar4 = MethodInfo__System__Collections__Generic__List<int>__Add_int_;
                  piVar5 = &(this_02->fields)._version;
                  *piVar5 = *piVar5 + 1;
                  pUVar6 = (this_02->fields)._items;
                  if (pUVar6 == (UnitySynchronizationContext_WorkRequest__Array *)0x0) break;
                  uVar7 = (this_02->fields)._size;
                  if (uVar7 < pUVar6->max_length) {
                    (this_02->fields)._size = uVar7 + 1;
                    if (pUVar6->max_length <= uVar7) goto code_?;
                    (&pUVar6->vector[0].m_DelagateCallback)[uVar7] =
                         (SendOrPostCallback *)((int)&pSVar3[-1].fields._.delegates + 2);
                  }
                  else {
                    (*(pMVar4->klass->rgctx_data[0xb].method)->virtualMethodPointer)
                              (this_02,(undefined1 *)((int)&pSVar3[-1].fields._.delegates + 2),
                               pMVar4->klass->rgctx_data[0xb].rgctxDataDummy);
                  }
                  pMVar4 = MethodInfo__System__Collections__Generic__List<int>__Add_int_;
                  piVar5 = &(this_02->fields)._version;
                  *piVar5 = *piVar5 + 1;
                  pUVar6 = (this_02->fields)._items;
                  if (pUVar6 == (UnitySynchronizationContext_WorkRequest__Array *)0x0) break;
                  uVar7 = (this_02->fields)._size;
                  if (uVar7 < pUVar6->max_length) {
                    (this_02->fields)._size = uVar7 + 1;
                    if (pUVar6->max_length <= uVar7) goto code_?;
                    (&pUVar6->vector[0].m_DelagateCallback)[uVar7] =
                         (SendOrPostCallback *)((int)&pSVar3[-1].fields._.delegates + 3);
                  }
                  else {
                    (*(pMVar4->klass->rgctx_data[0xb].method)->virtualMethodPointer)
                              (this_02,(undefined1 *)((int)&pSVar3[-1].fields._.delegates + 3),
                               pMVar4->klass->rgctx_data[0xb].rgctxDataDummy);
                  }
                  pMVar4 = MethodInfo__System__Collections__Generic__List<int>__Add_int_;
                  piVar5 = &(this_02->fields)._version;
                  *piVar5 = *piVar5 + 1;
                  pUVar6 = (this_02->fields)._items;
                  if (pUVar6 == (UnitySynchronizationContext_WorkRequest__Array *)0x0) break;
                  uVar7 = (this_02->fields)._size;
                  if (uVar7 < pUVar6->max_length) {
                    (this_02->fields)._size = uVar7 + 1;
                    if (pUVar6->max_length <= uVar7) goto code_?;
                    (&pUVar6->vector[0].m_DelagateCallback)[uVar7] = pSVar3;
                  }
                  else {
                    (*(pMVar4->klass->rgctx_data[0xb].method)->virtualMethodPointer)
                              (this_02,pSVar3,pMVar4->klass->rgctx_data[0xb].rgctxDataDummy);
                  }
                  pMVar4 = 
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
                  ;
                  piVar5 = &(this_03->fields)._version;
                  *piVar5 = *piVar5 + 1;
                  pUVar6 = (this_03->fields)._items;
                  if (pUVar6 == (UnitySynchronizationContext_WorkRequest__Array *)0x0) break;
                  uVar7 = (this_03->fields)._size;
                  if (uVar7 < pUVar6->max_length) {
                    (this_03->fields)._size = uVar7 + 1;
                    if (pUVar6->max_length <= uVar7) goto code_?;
                    (&pUVar6->vector[0].m_DelagateCallback)[uVar7 * 2] = (SendOrPostCallback *)0x0;
                    (&pUVar6->vector[0].m_DelagateState)[uVar7 * 2] = (Object *)0x0;
                  }
                  else {
                    (*(pMVar4->klass->rgctx_data[0xb].method)->virtualMethodPointer)
                              (this_03,0,0,pMVar4->klass->rgctx_data[0xb].rgctxDataDummy);
                  }
                  pMVar4 = 
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
                  ;
                  piVar5 = &(this_03->fields)._version;
                  *piVar5 = *piVar5 + 1;
                  pUVar6 = (this_03->fields)._items;
                  if (pUVar6 == (UnitySynchronizationContext_WorkRequest__Array *)0x0) break;
                  uVar7 = (this_03->fields)._size;
                  if (uVar7 < pUVar6->max_length) {
                    (this_03->fields)._size = uVar7 + 1;
                    if (pUVar6->max_length <= uVar7) goto code_?;
                    (&pUVar6->vector[0].m_DelagateCallback)[uVar7 * 2] =
                         (SendOrPostCallback *)0x3f800000;
                    (&pUVar6->vector[0].m_DelagateState)[uVar7 * 2] = (Object *)0x0;
                  }
                  else {
                    (*(pMVar4->klass->rgctx_data[0xb].method)->virtualMethodPointer)
                              (this_03,pMVar4->klass->rgctx_data[0xb].rgctxDataDummy,0);
                  }
                  pMVar4 = 
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
                  ;
                  piVar5 = &(this_03->fields)._version;
                  *piVar5 = *piVar5 + 1;
                  pUVar6 = (this_03->fields)._items;
                  if (pUVar6 == (UnitySynchronizationContext_WorkRequest__Array *)0x0) break;
                  uVar7 = (this_03->fields)._size;
                  if (uVar7 < pUVar6->max_length) {
                    (this_03->fields)._size = uVar7 + 1;
                    if (pUVar6->max_length <= uVar7) goto code_?;
                    (&pUVar6->vector[0].m_DelagateCallback)[uVar7 * 2] =
                         (SendOrPostCallback *)0x3f800000;
                    (&pUVar6->vector[0].m_DelagateState)[uVar7 * 2] = (Object *)0x3f800000;
                  }
                  else {
                    (*(pMVar4->klass->rgctx_data[0xb].method)->virtualMethodPointer)
                              (this_03,0x3f800000,0x3f800000,
                               pMVar4->klass->rgctx_data[0xb].rgctxDataDummy);
                  }
                  pMVar4 = 
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
                  ;
                  piVar5 = &(this_03->fields)._version;
                  *piVar5 = *piVar5 + 1;
                  pUVar6 = (this_03->fields)._items;
                  if (pUVar6 == (UnitySynchronizationContext_WorkRequest__Array *)0x0) break;
                  uVar7 = (this_03->fields)._size;
                  if (uVar7 < pUVar6->max_length) {
                    (this_03->fields)._size = uVar7 + 1;
                    if (pUVar6->max_length <= uVar7) goto code_?;
                    (&pUVar6->vector[0].m_DelagateCallback)[uVar7 * 2] = (SendOrPostCallback *)0x0;
                    (&pUVar6->vector[0].m_DelagateState)[uVar7 * 2] = (Object *)0x3f800000;
                  }
                  else {
                    (*(pMVar4->klass->rgctx_data[0xb].method)->virtualMethodPointer)
                              (this_03,0,0x3f800000,pMVar4->klass->rgctx_data[0xb].rgctxDataDummy);
                  }
                  pSVar3 = (SendOrPostCallback *)&pSVar3->monitor;
                  if (0x19 < (int)pSVar3) {
                    pUVar6 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
                             UnitySynchronizationContext+WorkRequest]::
                             List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__ToArray
                                       (this_03,
                                        MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__ToArray__
                                       );
                    UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_set_uv
                              (this_04,(Vector2__Array *)pUVar6,(MethodInfo *)0x0);
                    pUVar6 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
                             UnitySynchronizationContext+WorkRequest]::
                             List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__ToArray
                                       (this_02,
                                        MethodInfo__System__Collections__Generic__List<int>__ToArray__
                                       );
                    UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_set_triangles
                              (this_04,(Int32__Array *)pUVar6,(MethodInfo *)0x0);
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
  }
  func_?();
code_?:
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
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
    if (((TypeInfo__ModelingDynamicBoxConstraint->_1).typeHierarchyDepth <=
         (pIVar2->_1).typeHierarchyDepth) &&
       ((pIVar2->_1).typeHierarchy
        [(TypeInfo__ModelingDynamicBoxConstraint->_1).typeHierarchyDepth - 1] ==
        (Il2CppClass *)TypeInfo__ModelingDynamicBoxConstraint)) {
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
    if (((TypeInfo__ModelingDynamicBoxConstraint->_1).typeHierarchyDepth <=
         (pIVar3->_1).typeHierarchyDepth) &&
       ((pIVar3->_1).typeHierarchy
        [(TypeInfo__ModelingDynamicBoxConstraint->_1).typeHierarchyDepth - 1] ==
        (Il2CppClass *)TypeInfo__ModelingDynamicBoxConstraint)) {
      pIVar1 = (this->fields).constraint;
      if (pIVar1 == (IModelingConstraint *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                  ((Component *)this,(MethodInfo *)0x0);
      }
      else {
        if (((pIVar1->klass->_1).typeHierarchyDepth <
             (TypeInfo__ModelingDynamicBoxConstraint->_1).typeHierarchyDepth) ||
           ((pIVar1->klass->_1).typeHierarchy
            [(TypeInfo__ModelingDynamicBoxConstraint->_1).typeHierarchyDepth - 1] !=
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
    if (((TypeInfo__ModelingBoxConstraint->_1).typeHierarchyDepth <=
         (pIVar3->_1).typeHierarchyDepth) &&
       ((pIVar3->_1).typeHierarchy[(TypeInfo__ModelingBoxConstraint->_1).typeHierarchyDepth - 1] ==
        (Il2CppClass *)TypeInfo__ModelingBoxConstraint)) {
      pIVar1 = (this->fields).constraint;
      pIVar5 = (IModelingConstraint *)0x0;
      if ((pIVar1->klass->_1).typeHierarchy
          [(TypeInfo__ModelingBoxConstraint->_1).typeHierarchyDepth - 1] ==
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
      IStack_20.monitor = (MonitorData *)(uStack_17._4_4_ + (float)uVar26 * _UNK_?);
      IStack_20.klass =
           (IModelingConstraint__Class *)((float)uStack_17 + (float)uVar25 * _UNK_?);
      pIStack_21 = (IModelingConstraint__Class *)
                   ((float)pMStack_18 + (pVVar22->oneVector).z * _UNK_?);
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
  this_01 = this;
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
        pVVar4 = (Vector3 *)(*(targetCubeModel->klass->vtable).get_Scale.methodPtr)();
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
                  ((constraint->klass->_1).typeHierarchyDepth <
                   (TypeInfo__ModelingDynamicBoxConstraint->_1).typeHierarchyDepth)) ||
                 ((constraint->klass->_1).typeHierarchy
                  [(TypeInfo__ModelingDynamicBoxConstraint->_1).typeHierarchyDepth - 1] !=
                  (Il2CppClass *)TypeInfo__ModelingDynamicBoxConstraint)) {
                pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                   ((Component *)this,(MethodInfo *)0x0);
                puVar5 = (undefined8 *)
                         (*(targetCubeModel->klass->vtable).get_WorldPosition_1.methodPtr)();
                if (pTVar2 != (Transform *)0x0) {
                  fVar6 = (float)*puVar5;
                  this = (ConstraintVisualizer *)*(undefined4 *)(puVar5 + 1);
                  fVar7 = (float)(int)((ulonglong)*puVar5 >> 0x20);
                  VVar8 = (Vector3)CONCAT84(uVar9,fVar6);
                  UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                            (pTVar2,VVar8,(MethodInfo *)0x0);
                  ConstraintVisualizer_CreateInsideOutCube(this_01,(MethodInfo *)0x0);
                  return;
                }
              }
              else {
                if (((constraint->klass->_1).typeHierarchyDepth <
                     (TypeInfo__ModelingDynamicBoxConstraint->_1).typeHierarchyDepth) ||
                   ((constraint->klass->_1).typeHierarchy
                    [(TypeInfo__ModelingDynamicBoxConstraint->_1).typeHierarchyDepth - 1] !=
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
                  this_02 = (UnityAction_2_System_Object_System_Object_ *)func_?();
                  this_00 = 
                  MethodInfo__ConstraintVisualizer__Constraint_BoxChanged_System__Object__ConstraintBoxChangedEventArgs_
                  ;
                  if (this_02 != (UnityAction_2_System_Object_System_Object_ *)0x0) {
                    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::
                    Object,System::Object]::UnityAction_2_System_Object_System_Object___ctor
                              (this_02,(Object *)this_01,
                               MethodInfo__ConstraintVisualizer__Constraint_BoxChanged_System__Object__ConstraintBoxChangedEventArgs_
                               ,(MethodInfo *)0x0);
                    if (cRam_? == '\0') {
                      func_?();
                      cRam_? = '\x01';
                    }
                    pDVar11 = (Delegate *)constraint[0xb].monitor;
                    do {
                      constraint = (IModelingConstraint *)&UNK_?;
                      pDVar12 = pDVar11;
                      pDVar11 = mscorlib.dll::System::Delegate::Delegate_Combine
                                         (pDVar11,(Delegate *)this_02,(MethodInfo *)0x0);
                      if (pDVar11 != (Delegate *)0x0) {
                        iVar13 = func_?();
                        if (iVar13 == 0) goto code_?;
                      }
                      pDVar11 = (Delegate *)func_?();
                      this_02 = (UnityAction_2_System_Object_System_Object_ *)constraint;
                      if (pDVar11 == pDVar12) {
                        ConstraintVisualizer_CreateInsideOutCube
                                  ((ConstraintVisualizer *)this_00,(MethodInfo *)0x0);
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
  pDVar1 = (Delegate *)(this->fields).constraint;
  if (((pDVar1 != (Delegate *)0x0) &&
      ((TypeInfo__ModelingDynamicBoxConstraint->_1).typeHierarchyDepth <=
       (pDVar1->klass->_1).typeHierarchyDepth)) &&
     ((pDVar1->klass->_1).typeHierarchy
      [(TypeInfo__ModelingDynamicBoxConstraint->_1).typeHierarchyDepth - 1] ==
      (Il2CppClass *)TypeInfo__ModelingDynamicBoxConstraint)) {
    this_00 = (UnityAction_2_System_Object_System_Object_ *)
              func_?(TypeInfo__System__EventHandler<ConstraintBoxChangedEventArgs>);
    if (this_00 == (UnityAction_2_System_Object_System_Object_ *)0x0) {
      func_?();
code_?:
      func_?(pDVar1);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              (this_00,(Object *)this,
               MethodInfo__ConstraintVisualizer__Constraint_BoxChanged_System__Object__ConstraintBoxChangedEventArgs_
               ,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      func_?(&TypeInfo__System__EventHandler<ConstraintBoxChangedEventArgs>);
      cRam_? = '\x01';
    }
    source = pDVar1[1].fields.method_code;
    ppvVar3 = &pDVar1[1].fields.method_code;
    do {
      pDVar1 = mscorlib.dll::System::Delegate::Delegate_Remove
                         (source,(Delegate *)this_00,(MethodInfo *)0x0);
      iVar4 = 0;
      if ((pDVar1 != (Delegate *)0x0) && (iVar4 = func_?(pDVar1), iVar4 == 0))
      goto code_?;
      this_00 = (UnityAction_2_System_Object_System_Object_ *)&UNK_?;
      pDVar1 = (Delegate *)ppvVar3;
      source = (Delegate *)func_?(ppvVar3,iVar4);
    } while (source != pDVar1);
  }
  return;
}

