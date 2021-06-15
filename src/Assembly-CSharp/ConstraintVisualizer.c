
/* Void BuildMesh(Vector3[]) */

void Assembly-CSharp.dll::ConstraintVisualizer::ConstraintVisualizer_BuildMesh
               (ConstraintVisualizer *this,Vector3__Array *vertices,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                     ((Component_1 *)this,(MethodInfo *)0x0);
  if (pGVar1 != (GameObject *)0x0) {
    this_00 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_85
                        (pGVar1,
                         UnityEngine__MeshFilter_MethodInfo__UnityEngine__GameObject__AddComponent<UnityEngine::MeshFilter>__
                        );
    pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                       ((Component_1 *)this,(MethodInfo *)0x0);
    if (pGVar1 != (GameObject *)0x0) {
      this_01 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_85
                          (pGVar1,
                           UnityEngine__MeshRenderer_MethodInfo__UnityEngine__GameObject__AddComponent<UnityEngine::MeshRenderer>__
                          );
      if ((((uint)(TypeInfo__PrefabPool->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__PrefabPool->_1).cctor_started == 0)) {
        func_?();
      }
      this_02 = PrefabPool::PrefabPool_get_Instance((MethodInfo *)0x0);
      if (this_02 != (PrefabPool *)0x0) {
        value = PrefabPool::PrefabPool_get_ModelConstraintsMaterial(this_02,(MethodInfo *)0x0);
        if (this_01 != (Worker *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_sharedMaterial
                    ((Renderer *)this_01,value,(MethodInfo *)0x0);
          this_03 = (List_1_VoxelHit_ *)func_?();
          mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
          List_1_UnityEngine_Vector4___ctor
                    ((List_1_UnityEngine_Vector4_ *)this_03,
                     MethodInfo__System__Collections__Generic__List<int>__List__);
          this_04 = (List_1_VoxelHit_ *)func_?();
          mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
          List_1_UnityEngine_Vector4___ctor
                    ((List_1_UnityEngine_Vector4_ *)this_04,
                     MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__List__);
          if (this_00 != (Worker *)0x0) {
            this_05 = UnityEngine.CoreModule.dll::UnityEngine::MeshFilter::MeshFilter_get_mesh
                                ((MeshFilter *)this_00,(MethodInfo *)0x0);
            if (this_05 != (Mesh *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_set_vertices
                        (this_05,vertices,(MethodInfo *)0x0);
              item_02 = UIPushOption__Enum_HideAll;
              while (this_07 = this_04, this_03 != (List_1_VoxelHit_ *)0x0) {
                item_03 = item_02;
                mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::
                List_1_UIPushOption__Add
                          ((List_1_UIPushOption_ *)this_03,item_02,
                           MethodInfo__System__Collections__Generic__List<int>__Add_int_);
                mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::
                List_1_UIPushOption__Add
                          ((List_1_UIPushOption_ *)this_03,item_02 + UIPushOption__Enum_Blocking,
                           MethodInfo__System__Collections__Generic__List<int>__Add_int_);
                mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::
                List_1_UIPushOption__Add
                          ((List_1_UIPushOption_ *)this_03,item_02 - UIPushOption__Enum_HideAll,
                           MethodInfo__System__Collections__Generic__List<int>__Add_int_);
                mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::
                List_1_UIPushOption__Add
                          ((List_1_UIPushOption_ *)this_03,item_02 - UIPushOption__Enum_HideAll,
                           MethodInfo__System__Collections__Generic__List<int>__Add_int_);
                mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::
                List_1_UIPushOption__Add
                          ((List_1_UIPushOption_ *)this_03,item_02 - UIPushOption__Enum_Blocking,
                           MethodInfo__System__Collections__Generic__List<int>__Add_int_);
                mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::
                List_1_UIPushOption__Add
                          ((List_1_UIPushOption_ *)this_03,item_03,
                           MethodInfo__System__Collections__Generic__List<int>__Add_int_);
                func_?();
                if (this_07 == (List_1_VoxelHit_ *)0x0) break;
                item.y = (float)
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
                ;
                item.x = (float)
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
                ;
                mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
                List_1_UnityEngine_Vector2__Add
                          ((List_1_UnityEngine_Vector2_ *)this_07,item,
                           MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
                          );
                fVar2 = 0.0;
                fVar3 = 0.0;
                func_?();
                item_00.y = fVar3;
                item_00.x = fVar2;
                mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
                List_1_UnityEngine_Vector2__Add
                          ((List_1_UnityEngine_Vector2_ *)this_07,item_00,
                           MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
                          );
                item_01.x = 0.0;
                item_01.y = 0.0;
                func_?();
                this_04 = (List_1_VoxelHit_ *)item_01.x;
                this_06 = this_07;
                mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
                List_1_UnityEngine_Vector2__Add
                          ((List_1_UnityEngine_Vector2_ *)this_07,item_01,
                           MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
                          );
                func_?();
                mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
                List_1_UnityEngine_Vector2__Add
                          ((List_1_UnityEngine_Vector2_ *)this_07,(Vector2)0x0,
                           MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
                          );
                item_02 = item_03 + UIPushOption__Enum_InvisibleBlocker;
                if (0x19 < (int)item_02) {
                  pVVar4 = mscorlib.dll::System::Collections::Generic::List`1[VoxelHit]::
                           List_1_VoxelHit__ToArray
                                     (this_07,
                                      MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__ToArray__
                                     );
                  UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_set_uv
                            ((Mesh *)this_06,(Vector2__Array *)pVVar4,(MethodInfo *)0x0);
                  pVVar4 = mscorlib.dll::System::Collections::Generic::List`1[VoxelHit]::
                           List_1_VoxelHit__ToArray
                                     (this_03,
                                      MethodInfo__System__Collections__Generic__List<int>__ToArray__
                                     );
                  UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_set_triangles
                            ((Mesh *)this_06,(Int32__Array *)pVVar4,(MethodInfo *)0x0);
                  UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_RecalculateNormals
                            ((Mesh *)this_06,(MethodInfo *)0x0);
                  UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_RecalculateBounds
                            ((Mesh *)this_06,(MethodInfo *)0x0);
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
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void Constraint_BoxChanged(Object, ConstraintBoxChangedEventArgs) */

void Assembly-CSharp.dll::ConstraintVisualizer::ConstraintVisualizer_Constraint_BoxChanged
               (ConstraintVisualizer *this,Object *sender,ConstraintBoxChangedEventArgs *e,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pIVar1 = (this->fields).constraint;
  if (pIVar1 != (IModelingConstraint *)0x0) {
    bVar2 = (TypeInfo__ModelingDynamicBoxConstraint->_1).naturalAligment;
    if (((pIVar1->klass->_1).naturalAligment < bVar2) ||
       ((pIVar1->klass->_1).typeHierarchy[bVar2 - 1] !=
        (Il2CppClass *)TypeInfo__ModelingDynamicBoxConstraint)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    pIVar4 = (IModelingConstraint *)0x0;
    if (bVar3) {
      pIVar4 = pIVar1;
    }
    if (pIVar4 != (IModelingConstraint *)0x0) {
      this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                          ((Component_1 *)this,(MethodInfo *)0x0);
      if ((e == (ConstraintBoxChangedEventArgs *)0x0) || (this_00 == (Transform *)0x0)) {
        func_?(0);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pVVar1 = (Vector3__Array *)0x0;
  pIVar2 = (this->fields).constraint;
  if (pIVar2 != (IModelingConstraint *)0x0) {
    pIVar3 = pIVar2->klass;
    bStack_4 = (pIVar3->_1).naturalAligment;
    bStack_5 = (TypeInfo__ModelingDynamicBoxConstraint->_1).naturalAligment;
    if ((bStack_4 < bStack_5) ||
       (bVar6 = true,
       (pIVar3->_1).typeHierarchy[bStack_5 - 1] !=
       (Il2CppClass *)TypeInfo__ModelingDynamicBoxConstraint)) {
      bVar6 = false;
    }
    pMVar7 = (ModelingDynamicBoxConstraint *)(this->fields).constraint;
    pMVar8 = (ModelingDynamicBoxConstraint *)0x0;
    if (bVar6) {
      pMVar8 = pMVar7;
    }
    if (pMVar8 != (ModelingDynamicBoxConstraint *)0x0) {
      if (pMVar7 == (ModelingDynamicBoxConstraint *)0x0) {
        pMVar8 = (ModelingDynamicBoxConstraint *)0x0;
      }
      else {
        if ((bStack_4 < bStack_5) ||
           ((pMVar7->klass->_1).typeHierarchy[bStack_5 - 1] !=
            (Il2CppClass *)TypeInfo__ModelingDynamicBoxConstraint)) {
          bVar6 = false;
        }
        else {
          bVar6 = true;
        }
        pMVar8 = (ModelingDynamicBoxConstraint *)0x0;
        if (bVar6) {
          pMVar8 = pMVar7;
        }
      }
      this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                          ((Component_1 *)this,(MethodInfo *)0x0);
      if (pMVar8 != (ModelingDynamicBoxConstraint *)0x0) {
        pOVar9 = ModelingDynamicBoxConstraint::ModelingDynamicBoxConstraint_get_Size
                            ((ObscuredIntVector *)auStack_10,pMVar8,(MethodInfo *)0x0);
        puStack_11 = *(undefined **)&pOVar9->x;
        pOStack_12 = *(ObscuredShort__Class **)&(pOVar9->x).fakeValue;
        auStack_13._0_2_ = (pOVar9->y).currentCryptoKey;
        auStack_13._2_2_ = (pOVar9->y).hiddenValue;
        auStack_13._4_2_ = (pOVar9->y).fakeValue;
        auStack_13[6] = (pOVar9->y).inited;
        auStack_13[7] = (pOVar9->y).field_0x7;
        OStack_14 = pOVar9->z;
        if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->vtable).Equals.
                    methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->_1).cctor_started == 0))
        {
          pOStack_12 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort;
          func_?();
        }
        value._4_4_ = pOStack_12;
        value._0_4_ = puStack_11;
        iVar15 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
                 ObscuredShort_op_Implicit_1(value,(MethodInfo *)0x0);
        uStack_16 = (ulonglong)CONCAT24(iVar15,(undefined4)uStack_16);
        pTVar17 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                            ((Component_1 *)this,(MethodInfo *)0x0);
        if (pTVar17 != (Transform *)0x0) {
          pVVar18 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localScale
                              (&VStack_19,pTVar17,(MethodInfo *)0x0);
          auStack_10._12_8_ = *(undefined8 *)pVVar18;
          pOVar9 = ModelingDynamicBoxConstraint::ModelingDynamicBoxConstraint_get_Size
                              ((ObscuredIntVector *)&puStack_11,pMVar8,(MethodInfo *)0x0);
          OStack_14 = pOVar9->z;
          iVar15 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort
                   ::ObscuredShort_op_Implicit_1(pOVar9->y,(MethodInfo *)0x0);
          pTVar17 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                              ((Component_1 *)this,(MethodInfo *)0x0);
          if (pTVar17 != (Transform *)0x0) {
            pVVar18 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localScale
                                ((Vector3 *)(auStack_20 + 0xc),pTVar17,(MethodInfo *)0x0);
            VStack_19.x = pVVar18->x;
            VStack_19.y = pVVar18->y;
            pOVar9 = ModelingDynamicBoxConstraint::ModelingDynamicBoxConstraint_get_Size
                                ((ObscuredIntVector *)auStack_20,pMVar8,(MethodInfo *)0x0);
            puStack_11 = *(undefined **)&pOVar9->x;
            pOStack_12 = *(ObscuredShort__Class **)&(pOVar9->x).fakeValue;
            auStack_13._0_2_ = (pOVar9->y).currentCryptoKey;
            auStack_13._2_2_ = (pOVar9->y).hiddenValue;
            auStack_13._4_2_ = (pOVar9->y).fakeValue;
            auStack_13[6] = (pOVar9->y).inited;
            auStack_13[7] = (pOVar9->y).field_0x7;
            OStack_14 = pOVar9->z;
            iVar21 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::
                     ObscuredShort::ObscuredShort_op_Implicit_1(OStack_14,(MethodInfo *)0x0);
            pTVar17 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                                ((Component_1 *)this,(MethodInfo *)0x0);
            if (pTVar17 != (Transform *)0x0) {
              pVVar18 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localScale
                                  ((Vector3 *)(auStack_13 + 4),pTVar17,(MethodInfo *)0x0);
              auStack_20._12_8_ = *(undefined8 *)pVVar18;
              fStack_22 = pVVar18->z;
              uStack_23 = 0;
              uStack_24 = 0;
              fStack_25 = 0.0;
              func_?(&uStack_23,
                              (float)(int)(short)(uStack_16 >> 0x20) * (float)auStack_10._12_4_,
                              (float)(int)iVar15 * VStack_19.y,(float)(int)iVar21 * fStack_22,0);
              if (this_00 != (Transform *)0x0) {
                value_00.y = (float)uStack_24;
                value_00.x = (float)uStack_23;
                value_00.z = fStack_25;
                UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
                          (this_00,value_00,(MethodInfo *)0x0);
                if ((((uint)(TypeInfo__SharedCubeFunctions->vtable).Equals.methodPtr & 0x2000000) !=
                     0) && ((TypeInfo__SharedCubeFunctions->_1).cctor_started == 0)) {
                  func_?(TypeInfo__SharedCubeFunctions);
                }
                pVVar1 = SharedCubeFunctions::SharedCubeFunctions_GetVertices((MethodInfo *)0x0);
                goto code_?;
              }
            }
          }
        }
      }
code_?:
      func_?(0);
      pcVar26 = (code *)swi(3);
      (*pcVar26)();
      return;
    }
    if (pMVar7 != (ModelingDynamicBoxConstraint *)0x0) {
      bVar27 = (TypeInfo__ModelingBoxConstraint->_1).naturalAligment;
      if (((pMVar7->klass->_1).naturalAligment < bVar27) ||
         ((pMVar7->klass->_1).typeHierarchy[bVar27 - 1] !=
          (Il2CppClass *)TypeInfo__ModelingBoxConstraint)) {
        bVar6 = false;
      }
      else {
        bVar6 = true;
      }
      pMVar8 = (ModelingDynamicBoxConstraint *)0x0;
      if (bVar6) {
        pMVar8 = pMVar7;
      }
      if (pMVar8 != (ModelingDynamicBoxConstraint *)0x0) {
        this_01 = (AdvancedGhostMotor *)func_?(pMVar7,TypeInfo__ModelingBoxConstraint);
        if (this_01 == (AdvancedGhostMotor *)0x0) goto code_?;
        pVVar18 = ModelingBoxConstraint::ModelingBoxConstraint_get_FMinCorner
                            ((Vector3 *)(auStack_13 + 4),(ModelingBoxConstraint *)this_01,
                             (MethodInfo *)0x0);
        uStack_16._0_4_ = pVVar18->x;
        uStack_16._4_4_ = pVVar18->y;
        fVar28 = pVVar18->z;
        if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
          func_?(TypeInfo__UnityEngine__Vector3);
        }
        pVVar18 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_one
                            ((Vector3 *)(auStack_13 + 4),(MethodInfo *)0x0);
        pVVar18 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                            ((Vector3 *)(auStack_13 + 4),*pVVar18,0.5,(MethodInfo *)0x0);
        a.z = fVar28;
        a.x = (float)(undefined4)uStack_16;
        a.y = (float)uStack_16._4_4_;
        pVVar18 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
                            ((Vector3 *)(auStack_13 + 4),a,*pVVar18,(MethodInfo *)0x0);
        uVar29 = pVVar18->x;
        uVar30 = pVVar18->y;
        fVar28 = pVVar18->z;
        uStack_24 = uVar29;
        fStack_25 = (float)uVar30;
        pVVar18 = AdvancedGhostMotor::AdvancedGhostMotor_get_Velocity
                            ((Vector3 *)(auStack_13 + 4),this_01,(MethodInfo *)0x0);
        uStack_16._0_4_ = pVVar18->x;
        uStack_16._4_4_ = pVVar18->y;
        fVar31 = pVVar18->z;
        pVVar18 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_one
                            ((Vector3 *)(auStack_13 + 4),(MethodInfo *)0x0);
        pVVar18 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                            ((Vector3 *)(auStack_13 + 4),*pVVar18,0.5,(MethodInfo *)0x0);
        a_00.z = fVar31;
        a_00.x = (float)(undefined4)uStack_16;
        a_00.y = (float)uStack_16._4_4_;
        pVVar18 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                            ((Vector3 *)(auStack_13 + 4),a_00,*pVVar18,(MethodInfo *)0x0);
        uStack_16._0_4_ = pVVar18->x;
        uStack_16._4_4_ = pVVar18->y;
        fVar31 = pVVar18->z;
        if ((((uint)(TypeInfo__SharedCubeFunctions->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__SharedCubeFunctions->_1).cctor_started == 0)) {
          func_?(TypeInfo__SharedCubeFunctions);
        }
        min.y = fStack_25;
        min.x = (float)uStack_24;
        min.z = fVar28;
        max.z = fVar31;
        max.x = (float)(undefined4)uStack_16;
        max.y = (float)uStack_16._4_4_;
        pVVar1 = SharedCubeFunctions::SharedCubeFunctions_GetCorners_2(min,max,(MethodInfo *)0x0);
        pVVar1 = SharedCubeFunctions::SharedCubeFunctions_GetVertices_1(pVVar1,(MethodInfo *)0x0);
      }
    }
  }
code_?:
  ConstraintVisualizer_BuildMesh(this,pVVar1,(MethodInfo *)0x0);
  return;
}


/* Void Init(MVCubeModelBase, IModelingConstraint, String) */

void Assembly-CSharp.dll::ConstraintVisualizer::ConstraintVisualizer_Init
               (ConstraintVisualizer *this,MVCubeModelBase *targetCubeModel,
               IModelingConstraint *constraint,String *layer,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  (this->fields).constraint = constraint;
  this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                      ((Component_1 *)this,(MethodInfo *)0x0);
  value = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                    (layer,(MethodInfo *)0x0);
  if (this_00 != (GameObject *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_set_layer
              (this_00,value,(MethodInfo *)0x0);
    pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                       ((Component_1 *)this,(MethodInfo *)0x0);
    if (targetCubeModel != (MVCubeModelBase *)0x0) {
      pQVar2 = MVWorldObjectClient::MVWorldObjectClient_get_SyncRot
                         ((Quaternion *)&stack0xffffffec,(MVWorldObjectClient *)targetCubeModel,
                          (MethodInfo *)0x0);
      if (pTVar1 != (Transform *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
                  (pTVar1,*pQVar2,(MethodInfo *)0x0);
        UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                  ((Component_1 *)this,(MethodInfo *)0x0);
        pTVar1 = (Transform *)(targetCubeModel->klass->vtable).set_Scale.methodPtr;
        pVVar3 = (Vector3 *)(*(code *)(targetCubeModel->klass->vtable).get_Scale.method)();
        if (pTVar1 != (Transform *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
                    (pTVar1,*pVVar3,(MethodInfo *)0x0);
          pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                             ((Component_1 *)this,(MethodInfo *)0x0);
          this_01 = DayNightCycle::DayNightCycle_get_CurrentMoonParam
                              ((DayNightCycle *)targetCubeModel,(MethodInfo *)0x0);
          if (this_01 != (CelestialParam *)0x0) {
            value_00 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                                 ((GameObject *)this_01,(MethodInfo *)0x0);
            if (pTVar1 != (Transform *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_parent
                        (pTVar1,value_00,(MethodInfo *)0x0);
              if (constraint != (IModelingConstraint *)0x0) {
                bVar4 = (constraint->klass->_1).naturalAligment;
                bVar5 = (TypeInfo__ModelingDynamicBoxConstraint->_1).naturalAligment;
                if ((bVar4 < bVar5) ||
                   ((constraint->klass->_1).typeHierarchy[bVar5 - 1] !=
                    (Il2CppClass *)TypeInfo__ModelingDynamicBoxConstraint)) {
                  bVar6 = false;
                }
                else {
                  bVar6 = true;
                }
                pIVar7 = (IModelingConstraint *)0x0;
                if (bVar6) {
                  pIVar7 = constraint;
                }
                if (pIVar7 != (IModelingConstraint *)0x0) {
                  bVar5 = (TypeInfo__ModelingDynamicBoxConstraint->_1).naturalAligment;
                  if ((bVar4 < bVar5) ||
                     ((constraint->klass->_1).typeHierarchy[bVar5 - 1] !=
                      (Il2CppClass *)TypeInfo__ModelingDynamicBoxConstraint)) {
                    bVar6 = false;
                  }
                  else {
                    bVar6 = true;
                  }
                  this_03 = (MvCharacterController *)0x0;
                  if (bVar6) {
                    this_03 = (MvCharacterController *)constraint;
                  }
                  if (this_03 == (MvCharacterController *)0x0) goto code_?;
                  pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                           Component_1_get_transform((Component_1 *)this,(MethodInfo *)0x0);
                  pVVar3 = MvCharacterController::MvCharacterController_get_Velocity
                                     ((Vector3 *)&stack0xfffffff0,this_03,(MethodInfo *)0x0);
                  if (pTVar1 != (Transform *)0x0) {
                    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                              (pTVar1,*pVVar3,(MethodInfo *)0x0);
                    this_02 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                               *)func_?();
                    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
                    SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
                    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                              (this_02,(Object *)this,
                               MethodInfo__ConstraintVisualizer__Constraint_BoxChanged_System__Object__ConstraintBoxChangedEventArgs_
                               ,
                               MethodInfo__System__EventHandler<ConstraintBoxChangedEventArgs>__EventHandler_System__Object__void__
                              );
                    ModelingBoxConstraint::ModelingBoxConstraint_add_BoxChanged
                              ((ModelingBoxConstraint *)this_03,
                               (EventHandler_1_ConstraintBoxChangedEventArgs_ *)this_02,
                               (MethodInfo *)0x0);
                    ConstraintVisualizer_CreateInsideOutCube(this,(MethodInfo *)0x0);
                    return;
                  }
                  goto code_?;
                }
              }
              pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                                 ((Component_1 *)this,(MethodInfo *)0x0);
              pVVar3 = (Vector3 *)
                       (*(code *)(targetCubeModel->klass->vtable).get_WorldPosition_1.method)();
              if (pTVar1 != (Transform *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                          (pTVar1,*pVVar3,(MethodInfo *)0x0);
                ConstraintVisualizer_CreateInsideOutCube(this,(MethodInfo *)0x0);
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
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::ConstraintVisualizer::ConstraintVisualizer_OnDestroy
               (ConstraintVisualizer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pMVar1 = (ModelingBoxConstraint *)(this->fields).constraint;
  if (pMVar1 != (ModelingBoxConstraint *)0x0) {
    bVar2 = (TypeInfo__ModelingDynamicBoxConstraint->_1).naturalAligment;
    if (((pMVar1->klass->_1).naturalAligment < bVar2) ||
       ((pMVar1->klass->_1).typeHierarchy[bVar2 - 1] !=
        (Il2CppClass *)TypeInfo__ModelingDynamicBoxConstraint)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    this_01 = (ModelingBoxConstraint *)0x0;
    if (bVar3) {
      this_01 = pMVar1;
    }
    if (this_01 != (ModelingBoxConstraint *)0x0) {
      this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                 *)func_?(TypeInfo__System__EventHandler<ConstraintBoxChangedEventArgs>);
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (this_00,(Object *)this,
                 MethodInfo__ConstraintVisualizer__Constraint_BoxChanged_System__Object__ConstraintBoxChangedEventArgs_
                 ,
                 MethodInfo__System__EventHandler<ConstraintBoxChangedEventArgs>__EventHandler_System__Object__void__
                );
      ModelingBoxConstraint::ModelingBoxConstraint_remove_BoxChanged
                (this_01,(EventHandler_1_ConstraintBoxChangedEventArgs_ *)this_00,(MethodInfo *)0x0)
      ;
    }
  }
  return;
}

