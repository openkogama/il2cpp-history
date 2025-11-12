
/* Void BuildMesh(Vector3[]) */

void Assembly-CSharp.dll::ConstraintVisualizer::ConstraintVisualizer_BuildMesh
               (ConstraintVisualizer *this,Vector3__Array *vertices,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  UnityEngine__MeshFilter_MethodInfo__UnityEngine__GameObject__AddComponent<UnityEngine::MeshFilter>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__MeshRenderer_MethodInfo__UnityEngine__GameObject__AddComponent<UnityEngine::MeshRenderer>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<int>__Add_int_);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<int>__ToArray__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__ToArray__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<int>__List__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__List__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<int>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::Vector2>);
    LOCK();
    UNLOCK();
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
        FUN_?(&TypeInfo__PrefabPool);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pPVar2 = TypeInfo__PrefabPool->static_fields->instance;
      if ((pPVar2 != (PrefabPool *)0x0) && (this_01 != (Renderer *)0x0)) {
        UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_SetMaterial
                  (this_01,(pPVar2->fields).modelConstraintsMaterial,(MethodInfo *)0x0);
        this_02 = (List_1_System_UInt32Enum_ *)
                  FUN_?(TypeInfo__System__Collections__Generic__List<int>);
        FUN_?(this_02,MethodInfo__System__Collections__Generic__List<int>__List__);
        this_03 = (List_1_UnityEngine_Vector2_ *)
                  FUN_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Vector2>);
        FUN_?(this_03);
        if ((this_00 != (MeshFilter *)0x0) &&
           (this_04 = UnityEngine.CoreModule.dll::UnityEngine::MeshFilter::MeshFilter_get_mesh
                                (this_00,(MethodInfo *)0x0), this_04 != (Mesh *)0x0)) {
          if (cRam_? == '\0') {
            FUN_?(&
                          void_MethodInfo__UnityEngine__Mesh__SetArrayForChannel<UnityEngine::Vector3>_UnityEngine__Rendering__VertexAttribute__UnityEngine__Vector3_____UnityEngine__Rendering__MeshUpdateFlags_
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          valuesArrayLength_00 = 0;
          valuesArrayLength = valuesArrayLength_00;
          if (vertices != (Vector3__Array *)0x0) {
            valuesArrayLength =
                 mscorlib.dll::System::Array::Array_get_Length((Array *)vertices,(MethodInfo *)0x0);
          }
          UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_SetSizedArrayForChannel
                    (this_04,VertexAttribute__Enum_Position,VertexAttributeFormat__Enum_Float32,3,
                     (Array *)vertices,valuesArrayLength,0,valuesArrayLength,
                     MeshUpdateFlags__Enum_Default,(MethodInfo *)0x0);
          fVar3 = _UNK_?;
          item_01 = 2;
          if (this_02 != (List_1_System_UInt32Enum_ *)0x0) {
            while( true ) {
              pMVar4 = MethodInfo__System__Collections__Generic__List<int>__Add_int_;
              piVar5 = &(this_02->fields)._version;
              *piVar5 = *piVar5 + 1;
              pUVar6 = (this_02->fields)._items;
              if (pUVar6 == (UInt32Enum__Enum__Array *)0x0) break;
              uVar7 = (this_02->fields)._size;
              if (uVar7 < (uint)pUVar6->max_length) {
                (this_02->fields)._size = uVar7 + 1;
                if ((uint)pUVar6->max_length <= uVar7) goto code_?;
                pUVar6->vector[(int)uVar7] = item_01;
              }
              else {
                mscorlib.dll::System::Collections::Generic::List`1[System::UInt32Enum]::
                List_1_System_UInt32Enum__AddWithResize
                          (this_02,item_01,pMVar4->klass->rgctx_data[0xe].method);
              }
              pMVar4 = MethodInfo__System__Collections__Generic__List<int>__Add_int_;
              piVar5 = &(this_02->fields)._version;
              *piVar5 = *piVar5 + 1;
              pUVar6 = (this_02->fields)._items;
              if (pUVar6 == (UInt32Enum__Enum__Array *)0x0) break;
              uVar7 = (this_02->fields)._size;
              if (uVar7 < (uint)pUVar6->max_length) {
                (this_02->fields)._size = uVar7 + 1;
                if ((uint)pUVar6->max_length <= uVar7) goto code_?;
                pUVar6->vector[(int)uVar7] = item_01 + 1;
              }
              else {
                mscorlib.dll::System::Collections::Generic::List`1[System::UInt32Enum]::
                List_1_System_UInt32Enum__AddWithResize
                          (this_02,item_01 + 1,pMVar4->klass->rgctx_data[0xe].method);
              }
              pMVar4 = MethodInfo__System__Collections__Generic__List<int>__Add_int_;
              piVar5 = &(this_02->fields)._version;
              *piVar5 = *piVar5 + 1;
              pUVar6 = (this_02->fields)._items;
              if (pUVar6 == (UInt32Enum__Enum__Array *)0x0) break;
              uVar7 = (this_02->fields)._size;
              if (uVar7 < (uint)pUVar6->max_length) {
                (this_02->fields)._size = uVar7 + 1;
                if ((uint)pUVar6->max_length <= uVar7) goto code_?;
                pUVar6->vector[(int)uVar7] = item_01 - 2;
              }
              else {
                mscorlib.dll::System::Collections::Generic::List`1[System::UInt32Enum]::
                List_1_System_UInt32Enum__AddWithResize
                          (this_02,item_01 - 2,pMVar4->klass->rgctx_data[0xe].method);
              }
              pMVar4 = MethodInfo__System__Collections__Generic__List<int>__Add_int_;
              piVar5 = &(this_02->fields)._version;
              *piVar5 = *piVar5 + 1;
              pUVar6 = (this_02->fields)._items;
              if (pUVar6 == (UInt32Enum__Enum__Array *)0x0) break;
              uVar7 = (this_02->fields)._size;
              if (uVar7 < (uint)pUVar6->max_length) {
                (this_02->fields)._size = uVar7 + 1;
                if ((uint)pUVar6->max_length <= uVar7) goto code_?;
                pUVar6->vector[(int)uVar7] = item_01 - 2;
              }
              else {
                mscorlib.dll::System::Collections::Generic::List`1[System::UInt32Enum]::
                List_1_System_UInt32Enum__AddWithResize
                          (this_02,item_01 - 2,pMVar4->klass->rgctx_data[0xe].method);
              }
              pMVar4 = MethodInfo__System__Collections__Generic__List<int>__Add_int_;
              piVar5 = &(this_02->fields)._version;
              *piVar5 = *piVar5 + 1;
              pUVar6 = (this_02->fields)._items;
              if (pUVar6 == (UInt32Enum__Enum__Array *)0x0) break;
              uVar7 = (this_02->fields)._size;
              if (uVar7 < (uint)pUVar6->max_length) {
                (this_02->fields)._size = uVar7 + 1;
                if ((uint)pUVar6->max_length <= uVar7) goto code_?;
                pUVar6->vector[(int)uVar7] = item_01 - 1;
              }
              else {
                mscorlib.dll::System::Collections::Generic::List`1[System::UInt32Enum]::
                List_1_System_UInt32Enum__AddWithResize
                          (this_02,item_01 - 1,pMVar4->klass->rgctx_data[0xe].method);
              }
              pMVar4 = MethodInfo__System__Collections__Generic__List<int>__Add_int_;
              piVar5 = &(this_02->fields)._version;
              *piVar5 = *piVar5 + 1;
              pUVar6 = (this_02->fields)._items;
              if (pUVar6 == (UInt32Enum__Enum__Array *)0x0) break;
              uVar7 = (this_02->fields)._size;
              if (uVar7 < (uint)pUVar6->max_length) {
                (this_02->fields)._size = uVar7 + 1;
                if ((uint)pUVar6->max_length <= uVar7) goto code_?;
                pUVar6->vector[(int)uVar7] = item_01;
              }
              else {
                mscorlib.dll::System::Collections::Generic::List`1[System::UInt32Enum]::
                List_1_System_UInt32Enum__AddWithResize
                          (this_02,item_01,pMVar4->klass->rgctx_data[0xe].method);
              }
              pMVar4 = 
              MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
              ;
              if (this_03 == (List_1_UnityEngine_Vector2_ *)0x0) break;
              piVar5 = &(this_03->fields)._version;
              *piVar5 = *piVar5 + 1;
              pVVar8 = (this_03->fields)._items;
              if (pVVar8 == (Vector2__Array *)0x0) break;
              uVar7 = (this_03->fields)._size;
              if (uVar7 < (uint)pVVar8->max_length) {
                (this_03->fields)._size = uVar7 + 1;
                if ((uint)pVVar8->max_length <= uVar7) goto code_?;
                pVVar8->vector[(int)uVar7].x = 0.0;
                pVVar8->vector[(int)uVar7].y = 0.0;
              }
              else {
                mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
                List_1_UnityEngine_Vector2__AddWithResize
                          (this_03,(Vector2)0x0,pMVar4->klass->rgctx_data[0xe].method);
              }
              pMVar4 = 
              MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
              ;
              piVar5 = &(this_03->fields)._version;
              *piVar5 = *piVar5 + 1;
              pVVar8 = (this_03->fields)._items;
              if (pVVar8 == (Vector2__Array *)0x0) break;
              uVar7 = (this_03->fields)._size;
              if (uVar7 < (uint)pVVar8->max_length) {
                (this_03->fields)._size = uVar7 + 1;
                if ((uint)pVVar8->max_length <= uVar7) goto code_?;
                pVVar8->vector[(int)uVar7].x = 1.0;
                pVVar8->vector[(int)uVar7].y = 0.0;
              }
              else {
                item_00.y = 0.0;
                item_00.x = fVar3;
                mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
                List_1_UnityEngine_Vector2__AddWithResize
                          (this_03,item_00,pMVar4->klass->rgctx_data[0xe].method);
              }
              pMVar4 = 
              MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
              ;
              piVar5 = &(this_03->fields)._version;
              *piVar5 = *piVar5 + 1;
              pVVar8 = (this_03->fields)._items;
              if (pVVar8 == (Vector2__Array *)0x0) break;
              uVar7 = (this_03->fields)._size;
              if (uVar7 < (uint)pVVar8->max_length) {
                (this_03->fields)._size = uVar7 + 1;
                if ((uint)pVVar8->max_length <= uVar7) goto code_?;
                pVVar8->vector[(int)uVar7].x = 1.0;
                pVVar8->vector[(int)uVar7].y = 1.0;
              }
              else {
                item.y = fVar3;
                item.x = fVar3;
                mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
                List_1_UnityEngine_Vector2__AddWithResize
                          (this_03,item,pMVar4->klass->rgctx_data[0xe].method);
              }
              pMVar4 = 
              MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
              ;
              piVar5 = &(this_03->fields)._version;
              *piVar5 = *piVar5 + 1;
              pVVar8 = (this_03->fields)._items;
              if (pVVar8 == (Vector2__Array *)0x0) break;
              uVar7 = (this_03->fields)._size;
              if (uVar7 < (uint)pVVar8->max_length) {
                (this_03->fields)._size = uVar7 + 1;
                if ((uint)pVVar8->max_length <= uVar7) {
code_?:
                  FUN_?();
                  pcVar9 = (code *)swi(3);
                  (*pcVar9)();
                  return;
                }
                pVVar8->vector[(int)uVar7].x = 0.0;
                pVVar8->vector[(int)uVar7].y = 1.0;
              }
              else {
                mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
                List_1_UnityEngine_Vector2__AddWithResize
                          (this_03,(Vector2)((ulonglong)(uint)fVar3 << 0x20),
                           pMVar4->klass->rgctx_data[0xe].method);
              }
              item_01 = item_01 + 4;
              if (0x19 < (int)item_01) {
                this_05 = (Array *)FUN_?(this_03);
                if (cRam_? == '\0') {
                  FUN_?(&
                                void_MethodInfo__UnityEngine__Mesh__SetArrayForChannel<UnityEngine::Vector2>_UnityEngine__Rendering__VertexAttribute__UnityEngine__Vector2_____UnityEngine__Rendering__MeshUpdateFlags_
                               );
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                if (this_05 != (Array *)0x0) {
                  valuesArrayLength_00 =
                       mscorlib.dll::System::Array::Array_get_Length(this_05,(MethodInfo *)0x0);
                }
                UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_SetSizedArrayForChannel
                          (this_04,VertexAttribute__Enum_TexCoord0,
                           VertexAttributeFormat__Enum_Float32,2,this_05,valuesArrayLength_00,0,
                           valuesArrayLength_00,MeshUpdateFlags__Enum_Default,(MethodInfo *)0x0);
                value = (Int32__Array *)
                        FUN_?(this_02,
                                      MethodInfo__System__Collections__Generic__List<int>__ToArray__
                                     );
                UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_set_triangles
                          (this_04,value,(MethodInfo *)0x0);
                UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_RecalculateNormals_1
                          (this_04,MeshUpdateFlags__Enum_Default,(MethodInfo *)0x0);
                if (cRam_? == '\0') {
                  FUN_?(&TypeInfo__UnityEngine__Debug);
                  LOCK();
                  UNLOCK();
                  FUN_?(&StringLiteral_Not_allowed_to_call_RecalculateB);
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                if (cRam_? == '\0') {
                  FUN_?(&
                                void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Mesh>_UnityEngine__Mesh_
                               );
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                if (this_04 == (Mesh *)0x0) {
                  FUN_?();
                  pcVar9 = (code *)swi(3);
                  (*pcVar9)();
                  return;
                }
                pvVar10 = (this_04->fields)._.m_CachedPtr;
                if (pvVar10 != (void *)0x0) {
                  pcVar9 = pcRam_?;
                  if ((pcRam_? == (code *)0x0) &&
                     (pcVar9 = (code *)FUN_?(&UNK_?), pcVar9 == (code *)0x0)) {
                    uVar11 = func_?(&UNK_?);
                    FUN_?(uVar11,0);
                    pcVar9 = (code *)swi(3);
                    (*pcVar9)();
                    return;
                  }
                  pcRam_? = pcVar9;
                  cVar12 = (*pcRam_?)(pvVar10);
                  if (cVar12 == '\0') {
                    arg0 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_GetName
                                     ((Object_1 *)this_04,(MethodInfo *)0x0);
                    pSVar13 = StringLiteral_Not_allowed_to_call_RecalculateB;
                    pOVar14 = (Object *)0x0;
                    pOVar15 = (Object *)0x0;
                    pOVar16 = (Object *)0x0;
                    pOVar17 = (Object__Array *)0x0;
                    mscorlib.dll::System::ParamsArray::ParamsArray__ctor
                              ((ParamsArray *)&stack0xffffffffffffffb8,(Object *)arg0,
                               (MethodInfo *)0x0);
                    PStack_18._arg0 = pOVar14;
                    PStack_18._arg1 = pOVar15;
                    PStack_18._arg2 = pOVar16;
                    PStack_18._args = pOVar17;
                    pSVar13 = mscorlib.dll::System::String::String_FormatHelper
                                        ((IFormatProvider *)0x0,pSVar13,&PStack_18,(MethodInfo *)0x0
                                        );
                    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
                      FUN_?();
                    }
                    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                              ((Object *)pSVar13,(MethodInfo *)0x0);
                    return;
                  }
                  if (cRam_? == '\0') {
                    FUN_?(&
                                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Mesh>_UnityEngine__Mesh_
                                 );
                    LOCK();
                    UNLOCK();
                    cRam_? = '\x01';
                  }
                  pvVar10 = (this_04->fields)._.m_CachedPtr;
                  if (pvVar10 != (void *)0x0) {
                    pcVar9 = pcRam_?;
                    if ((pcRam_? == (code *)0x0) &&
                       (pcVar9 = (code *)FUN_?(&UNK_?), pcVar9 == (code *)0x0)) {
                      uVar11 = func_?(&UNK_?);
                      FUN_?(uVar11,0);
                      pcVar9 = (code *)swi(3);
                      (*pcVar9)();
                      return;
                    }
                    pcRam_? = pcVar9;
                    (*pcRam_?)(pvVar10,0);
                    return;
                  }
                }
                UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                ThrowHelper_2_ThrowNullReferenceException((Object *)this_04,(MethodInfo *)0x0);
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
            }
          }
        }
      }
    }
  }
  FUN_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void Constraint_BoxChanged(Object, ConstraintBoxChangedEventArgs) */

void Assembly-CSharp.dll::ConstraintVisualizer::ConstraintVisualizer_Constraint_BoxChanged
               (ConstraintVisualizer *this,Object *sender,ConstraintBoxChangedEventArgs *e,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__ModelingDynamicBoxConstraint);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pIVar1 = (this->fields).constraint;
  if (pIVar1 != (IModelingConstraint *)0x0) {
    pIVar2 = pIVar1->klass;
    bVar3 = (TypeInfo__ModelingDynamicBoxConstraint->_1).naturalAligment;
    if ((bVar3 <= (pIVar2->_1).naturalAligment) &&
       ((pIVar2->_1).typeHierarchy[(ulonglong)bVar3 - 1] ==
        (Il2CppClass *)TypeInfo__ModelingDynamicBoxConstraint)) {
      obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                      ((Component *)this,(MethodInfo *)0x0);
      if ((e == (ConstraintBoxChangedEventArgs *)0x0) || (obj == (Transform *)0x0)) {
        FUN_?();
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uStack_5._0_4_ = (e->fields).Center.x;
      uStack_5._4_4_ = (e->fields).Center.y;
      fStack_6 = (e->fields).Center.z;
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pvVar7 = (obj->fields)._._.m_CachedPtr;
      if (pvVar7 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pcVar4 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
        uVar8 = func_?(&UNK_?);
        FUN_?(uVar8,0);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pcRam_? = pcVar4;
      (*pcRam_?)(pvVar7,&uStack_5);
    }
  }
  return;
}


/* Void CreateInsideOutCube() */

void Assembly-CSharp.dll::ConstraintVisualizer::ConstraintVisualizer_CreateInsideOutCube
               (ConstraintVisualizer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__ModelingBoxConstraint);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ModelingDynamicBoxConstraint);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__SharedCubeFunctions);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar1 = (Vector3__Array *)(this->fields).constraint;
  vertices = (Vector3__Array *)0x0;
  if (pVVar1 != (Vector3__Array *)0x0) {
    bVar2 = (TypeInfo__ModelingDynamicBoxConstraint->_1).naturalAligment;
    if (((((IModelingConstraint__Class *)pVVar1->klass)->_1).naturalAligment < bVar2) ||
       (bVar3 = true,
       (((IModelingConstraint__Class *)pVVar1->klass)->_1).typeHierarchy[(ulonglong)bVar2 - 1] !=
       (Il2CppClass *)TypeInfo__ModelingDynamicBoxConstraint)) {
      bVar3 = false;
    }
    pVVar4 = vertices;
    if (bVar3) {
      pVVar4 = pVVar1;
    }
    if (pVVar4 != (Vector3__Array *)0x0) {
      bVar2 = (TypeInfo__ModelingDynamicBoxConstraint->_1).naturalAligment;
      if (((((IModelingConstraint__Class *)pVVar1->klass)->_1).naturalAligment < bVar2) ||
         (pVVar4 = (Vector3__Array *)0x1,
         (((IModelingConstraint__Class *)pVVar1->klass)->_1).typeHierarchy[(ulonglong)bVar2 - 1] !=
         (Il2CppClass *)TypeInfo__ModelingDynamicBoxConstraint)) {
        pVVar4 = vertices;
      }
      if ((int)pVVar4 != 0) {
        vertices = pVVar1;
      }
      obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                      ((Component *)this,(MethodInfo *)0x0);
      if (vertices != (Vector3__Array *)0x0) {
        uStack_5 = *(ObscuredShort *)&vertices->vector[7].y;
        OStack_6 = *(ObscuredShort *)&vertices->vector[8].x;
        OStack_7 = *(ObscuredShort *)&vertices->vector[8].z;
        if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->_1).field_0x1c
            == 0) {
          FUN_?();
        }
        OStackX_8 = uStack_5;
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->_1).field_0x1c
            == 0) {
          FUN_?();
        }
        iVar8 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
                ObscuredShort_InternalDecrypt(&OStackX_8,(MethodInfo *)0x0);
        pTVar9 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                            ((Component *)this,(MethodInfo *)0x0);
        if (pTVar9 != (Transform *)0x0) {
          if (cRam_? == '\0') {
            FUN_?(&
                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pvVar10 = (pTVar9->fields)._._.m_CachedPtr;
          if (pvVar10 == (void *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
            ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar9,(MethodInfo *)0x0);
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          pcVar11 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar11 = (code *)FUN_?(&UNK_?), pcVar11 == (code *)0x0)) {
            uVar12 = func_?(&UNK_?);
            FUN_?(uVar12,0);
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          pcRam_? = pcVar11;
          (*pcRam_?)(pvVar10);
          uStack_5 = *(ObscuredShort *)&vertices->vector[7].y;
          OStackX_8 = *(ObscuredShort *)&vertices->vector[8].x;
          OStack_7 = *(ObscuredShort *)&vertices->vector[8].z;
          OStack_6 = OStackX_8;
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->_1).field_0x1c
              == 0) {
            FUN_?();
          }
          iVar13 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort
                   ::ObscuredShort_InternalDecrypt(&OStackX_8,(MethodInfo *)0x0);
          pTVar9 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                              ((Component *)this,(MethodInfo *)0x0);
          if (pTVar9 != (Transform *)0x0) {
            if (cRam_? == '\0') {
              FUN_?(&
                            void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                           );
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            VStack_14.x = 0.0;
            VStack_14.y = 0.0;
            VStack_14.z = 0.0;
            pvVar10 = (pTVar9->fields)._._.m_CachedPtr;
            if (pvVar10 == (void *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
              ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar9,(MethodInfo *)0x0);
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
            pcVar11 = pcRam_?;
            if ((pcRam_? == (code *)0x0) &&
               (pcVar11 = (code *)FUN_?(&UNK_?), pcVar11 == (code *)0x0)) {
              uVar12 = func_?(&UNK_?);
              FUN_?(uVar12,0);
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
            pcRam_? = pcVar11;
            (*pcRam_?)(pvVar10);
            OStackX_8 = *(ObscuredShort *)&vertices->vector[8].z;
            uStack_5 = *(ObscuredShort *)&vertices->vector[7].y;
            OStack_6 = *(ObscuredShort *)&vertices->vector[8].x;
            OStack_7 = OStackX_8;
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->_1).
                         field_0x1c == 0) {
              FUN_?();
            }
            iVar15 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::
                     ObscuredShort::ObscuredShort_InternalDecrypt(&OStackX_8,(MethodInfo *)0x0);
            pTVar9 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                ((Component *)this,(MethodInfo *)0x0);
            if (pTVar9 != (Transform *)0x0) {
              if (cRam_? == '\0') {
                FUN_?(&
                              void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                             );
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              uStack_5._0_2_ = 0;
              uStack_5._2_2_ = 0;
              uStack_5._4_2_ = 0;
              uStack_5._6_1_ = 0;
              uStack_5._7_1_ = 0;
              OStack_6 = (ObscuredShort)((ulonglong)OStack_6 & 0xffffffff00000000);
              pvVar10 = (pTVar9->fields)._._.m_CachedPtr;
              if (pvVar10 == (void *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar9,(MethodInfo *)0x0);
                pcVar11 = (code *)swi(3);
                (*pcVar11)();
                return;
              }
              pcVar11 = pcRam_?;
              if ((pcRam_? == (code *)0x0) &&
                 (pcVar11 = (code *)FUN_?(&UNK_?), pcVar11 == (code *)0x0)) {
                uVar12 = func_?(&UNK_?);
                FUN_?(uVar12,0);
                pcVar11 = (code *)swi(3);
                (*pcVar11)();
                return;
              }
              pcRam_? = pcVar11;
              (*pcRam_?)(pvVar10);
              uVar12._0_4_ = (float)(int)iVar8 * 0.0;
              if (obj != (Transform *)0x0) {
                uVar12._4_4_ = (float)(int)iVar13 * VStack_14.y;
                VStack_14._0_8_ = uVar12;
                VStack_14.z = (float)(int)iVar15 * (float)OStack_6._0_4_;
                if (cRam_? == '\0') {
                  FUN_?(&
                                void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                               );
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                pvVar10 = (obj->fields)._._.m_CachedPtr;
                if (pvVar10 == (void *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                  ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
                  pcVar11 = (code *)swi(3);
                  (*pcVar11)();
                  return;
                }
                pcVar11 = pcRam_?;
                if ((pcRam_? == (code *)0x0) &&
                   (pcVar11 = (code *)FUN_?(&UNK_?), pcVar11 == (code *)0x0)) {
                  uVar12 = func_?(&UNK_?);
                  FUN_?(uVar12,0);
                  pcVar11 = (code *)swi(3);
                  (*pcVar11)();
                  return;
                }
                pcRam_? = pcVar11;
                (*pcRam_?)(pvVar10,&VStack_14);
                if (*(int *)&(TypeInfo__SharedCubeFunctions->_1).field_0x1c == 0) {
                  FUN_?();
                }
                if (cRam_? == '\0') {
                  FUN_?(&TypeInfo__SharedCubeFunctions);
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                if (*(int *)&(TypeInfo__SharedCubeFunctions->_1).field_0x1c == 0) {
                  FUN_?();
                }
                if (cRam_? == '\0') {
                  FUN_?(&TypeInfo__UnityEngine__Vector3);
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                pVVar1 = (Vector3__Array *)FUN_?(TypeInfo__UnityEngine__Vector3);
                fVar16 = _UNK_?;
                fVar17 = _UNK_?;
                if (pVVar1 != (Vector3__Array *)0x0) {
                  if ((int)pVVar1->max_length != 0) {
                    pVVar1->vector[0].x = _UNK_?;
                    pVVar1->vector[0].y = fVar17;
                    pVVar1->vector[0].z = fVar16;
                    if (1 < (uint)pVVar1->max_length) {
                      pVVar1->vector[1].x = fVar17;
                      pVVar1->vector[1].y = fVar17;
                      pVVar1->vector[1].z = fVar16;
                      if (2 < (uint)pVVar1->max_length) {
                        pVVar1->vector[2].x = fVar17;
                        pVVar1->vector[2].y = fVar17;
                        pVVar1->vector[2].z = fVar17;
                        if (3 < (uint)pVVar1->max_length) {
                          pVVar1->vector[3].x = fVar16;
                          pVVar1->vector[3].y = fVar17;
                          pVVar1->vector[3].z = fVar17;
                          if (4 < (uint)pVVar1->max_length) {
                            pVVar1->vector[4].x = fVar16;
                            pVVar1->vector[4].y = fVar16;
                            pVVar1->vector[4].z = fVar17;
                            if (5 < (uint)pVVar1->max_length) {
                              pVVar1->vector[5].x = fVar17;
                              pVVar1->vector[5].y = fVar16;
                              pVVar1->vector[5].z = fVar17;
                              if (6 < (uint)pVVar1->max_length) {
                                pVVar1->vector[6].x = fVar17;
                                pVVar1->vector[6].y = fVar16;
                                pVVar1->vector[6].z = fVar16;
                                if (7 < (uint)pVVar1->max_length) {
                                  pVVar1->vector[7].x = fVar16;
                                  pVVar1->vector[7].y = fVar16;
                                  pVVar1->vector[7].z = fVar16;
                                  vertices = SharedCubeFunctions::SharedCubeFunctions_GetVertices_1
                                                       (pVVar1,(MethodInfo *)0x0);
                                  goto DAT_?;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                  FUN_?();
                  pcVar11 = (code *)swi(3);
                  (*pcVar11)();
                  return;
                }
              }
              FUN_?();
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
          }
        }
      }
code_?:
      FUN_?();
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    bVar2 = (TypeInfo__ModelingBoxConstraint->_1).naturalAligment;
    if ((bVar2 <= (((IModelingConstraint__Class *)pVVar1->klass)->_1).naturalAligment) &&
       ((((IModelingConstraint__Class *)pVVar1->klass)->_1).typeHierarchy[(ulonglong)bVar2 - 1] ==
        (Il2CppClass *)TypeInfo__ModelingBoxConstraint)) {
      if ((((IModelingConstraint__Class *)pVVar1->klass)->_1).typeHierarchy
          [(ulonglong)(TypeInfo__ModelingBoxConstraint->_1).naturalAligment - 1] !=
          (Il2CppClass *)TypeInfo__ModelingBoxConstraint) goto code_?;
      uStack_5 = *(ObscuredShort *)&pVVar1->vector[2].z;
      fVar17 = pVVar1->vector[3].y;
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Vector3);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      fVar18 = _UNK_?;
      pVVar19 = TypeInfo__UnityEngine__Vector3->static_fields;
      VStack_14.x = (pVVar19->oneVector).x;
      VStack_14.y = (pVVar19->oneVector).y;
      fVar20 = (float)uStack_5 - VStack_14.x * _UNK_?;
      fVar21 = (pVVar19->oneVector).z * _UNK_?;
      fVar22 = uStack_5._4_4_ - VStack_14.y * _UNK_?;
      uStack_5 = *(ObscuredShort *)&pVVar1->vector[3].z;
      fVar16 = pVVar1->vector[4].y;
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Vector3);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pVVar19 = TypeInfo__UnityEngine__Vector3->static_fields;
      VStack_14.x = (pVVar19->oneVector).x;
      VStack_14.y = (pVVar19->oneVector).y;
      fVar23 = (pVVar19->oneVector).z;
      fVar24 = VStack_14.y * fVar18 + uStack_5._4_4_;
      fVar25 = VStack_14.x * fVar18 + (float)uStack_5;
      if (*(int *)&(TypeInfo__SharedCubeFunctions->_1).field_0x1c == 0) {
        FUN_?();
      }
      uStack_5._4_4_ = fVar24;
      uStack_5._0_4_ = fVar25;
      VStack_14.y = fVar22;
      VStack_14.x = fVar20;
      OStack_6._0_4_ = fVar23 * fVar18 + fVar16;
      VStack_14.z = fVar17 - fVar21;
      pVVar1 = SharedCubeFunctions::SharedCubeFunctions_GetCorners_2
                          (&VStack_14,(Vector3 *)&uStack_5,(MethodInfo *)0x0);
      vertices = SharedCubeFunctions::SharedCubeFunctions_GetVertices_1(pVVar1,(MethodInfo *)0x0);
    }
  }
DAT_?:
  ConstraintVisualizer_BuildMesh(this,vertices,(MethodInfo *)0x0);
  return;
}


/* Void Init(MVCubeModelBase, IModelingConstraint, String) */

void Assembly-CSharp.dll::ConstraintVisualizer::ConstraintVisualizer_Init
               (ConstraintVisualizer *this,MVCubeModelBase *targetCubeModel,
               IModelingConstraint *constraint,String *layer,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__ConstraintVisualizer__Constraint_BoxChanged_System__Object__ConstraintBoxChangedEventArgs_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__EventHandler<ConstraintBoxChangedEventArgs>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ModelingDynamicBoxConstraint);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar1 = iRam_? != 0;
  (this->fields).constraint = constraint;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).constraint >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                      ((Component *)this,(MethodInfo *)0x0);
  value = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                    (layer,(MethodInfo *)0x0);
  if (pGVar6 == (GameObject *)0x0) {
DAT_?:
    FUN_?();
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_set_layer
            (pGVar6,value,(MethodInfo *)0x0);
  pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                      ((Component *)this,(MethodInfo *)0x0);
  if (targetCubeModel == (MVCubeModelBase *)0x0) goto DAT_?;
  pQVar9 = MVWorldObjectClient::MVWorldObjectClient_get_WorldRotation
                      (&QStack_10,(MVWorldObjectClient *)targetCubeModel,(MethodInfo *)0x0);
  if (pTVar8 == (Transform *)0x0) {
    FUN_?();
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  uStack_11._0_4_ = pQVar9->x;
  uStack_11._4_4_ = pQVar9->y;
  uStack_12._0_4_ = pQVar9->z;
  uStack_12._4_4_ = pQVar9->w;
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pvVar13 = (pTVar8->fields)._._.m_CachedPtr;
  if (pvVar13 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar8,(MethodInfo *)0x0);
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pcVar7 = pcRam_?;
  if (pcRam_? == (code *)0x0) {
    pcVar7 = (code *)FUN_?(&UNK_?);
    if (pcVar7 == (code *)0x0) {
      uVar14 = func_?(&UNK_?);
      FUN_?(uVar14,0);
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  pcRam_? = pcVar7;
  (*pcRam_?)(pvVar13);
  pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                      ((Component *)this,(MethodInfo *)0x0);
  puVar15 = (undefined8 *)(*(targetCubeModel->klass->vtable).get_Scale.methodPtr)(&QStack_10);
  if (pTVar8 == (Transform *)0x0) {
code_?:
    FUN_?();
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  uStack_16 = (MonitorData *)*puVar15;
  uStack_17 = *(undefined4 *)(puVar15 + 1);
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pvVar13 = (pTVar8->fields)._._.m_CachedPtr;
  if (pvVar13 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar8,(MethodInfo *)0x0);
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pcVar7 = pcRam_?;
  if (pcRam_? == (code *)0x0) {
    pcVar7 = (code *)FUN_?(&UNK_?);
    if (pcVar7 == (code *)0x0) {
      uVar14 = func_?(&UNK_?);
      FUN_?(uVar14,0);
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  pcRam_? = pcVar7;
  (*pcRam_?)(pvVar13);
  pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                      ((Component *)this,(MethodInfo *)0x0);
  pGVar6 = (targetCubeModel->fields)._.gameObject;
  if (pGVar6 == (GameObject *)0x0) goto code_?;
  pTVar18 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                      (pGVar6,(MethodInfo *)0x0);
  if (pTVar8 == (Transform *)0x0) goto code_?;
  UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_parent
            (pTVar8,pTVar18,(MethodInfo *)0x0);
  if (constraint == (IModelingConstraint *)0x0) {
code_?:
    pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        ((Component *)this,(MethodInfo *)0x0);
    puVar15 = (undefined8 *)
              (*(targetCubeModel->klass->vtable).get_WorldPosition_1.methodPtr)
                        (&QStack_10,targetCubeModel,
                         (targetCubeModel->klass->vtable).get_WorldPosition_1.method);
    if (pTVar8 == (Transform *)0x0) {
      FUN_?();
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    uStack_16 = (MonitorData *)*puVar15;
    uStack_17 = *(undefined4 *)(puVar15 + 1);
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pvVar13 = (pTVar8->fields)._._.m_CachedPtr;
    if (pvVar13 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar8,(MethodInfo *)0x0);
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pcVar7 = pcRam_?;
    if (pcRam_? == (code *)0x0) {
      pcVar7 = (code *)FUN_?(&UNK_?);
      if (pcVar7 == (code *)0x0) {
        uVar14 = func_?(&UNK_?);
        FUN_?(uVar14,0);
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    pcRam_? = pcVar7;
    (*pcRam_?)(pvVar13,&uStack_16);
  }
  else {
    pIVar19 = constraint->klass;
    bVar20 = (TypeInfo__ModelingDynamicBoxConstraint->_1).naturalAligment;
    if (((pIVar19->_1).naturalAligment < bVar20) ||
       ((pIVar19->_1).typeHierarchy[(ulonglong)bVar20 - 1] !=
        (Il2CppClass *)TypeInfo__ModelingDynamicBoxConstraint)) goto code_?;
    bVar20 = (TypeInfo__ModelingDynamicBoxConstraint->_1).naturalAligment;
    if (((pIVar19->_1).naturalAligment < bVar20) ||
       ((pIVar19->_1).typeHierarchy[(ulonglong)bVar20 - 1] !=
        (Il2CppClass *)TypeInfo__ModelingDynamicBoxConstraint)) {
      FUN_?(constraint);
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        ((Component *)this,(MethodInfo *)0x0);
    if (pTVar8 == (Transform *)0x0) {
      FUN_?();
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    uStack_16 = constraint[5].monitor;
    uStack_17 = *(undefined4 *)&constraint[6].klass;
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pvVar13 = (pTVar8->fields)._._.m_CachedPtr;
    if (pvVar13 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar8,(MethodInfo *)0x0);
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pcVar7 = pcRam_?;
    if (pcRam_? == (code *)0x0) {
      pcVar7 = (code *)FUN_?(&UNK_?);
      if (pcVar7 == (code *)0x0) {
        uVar14 = func_?(&UNK_?);
        FUN_?(uVar14,0);
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    pcRam_? = pcVar7;
    (*pcRam_?)(pvVar13,&uStack_16);
    this_00 = (UnityAction_2_System_Object_System_Object_ *)
              FUN_?(TypeInfo__System__EventHandler<ConstraintBoxChangedEventArgs>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              (this_00,(Object *)this,
               MethodInfo__ConstraintVisualizer__Constraint_BoxChanged_System__Object__ConstraintBoxChangedEventArgs_
               ,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__System__EventHandler<ConstraintBoxChangedEventArgs>);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    ppMVar21 = &constraint[6].monitor;
    a = (Delegate *)constraint[6].monitor;
    do {
      pDVar22 = mscorlib.dll::System::Delegate::Delegate_Combine
                          (a,(Delegate *)this_00,(MethodInfo *)0x0);
      pEVar23 = TypeInfo__System__EventHandler<ConstraintBoxChangedEventArgs>;
      if (pDVar22 == (Delegate *)0x0) {
        pMVar24 = (MonitorData *)0x0;
      }
      else {
        pMVar24 = (MonitorData *)
                  FUN_?(pDVar22,
                                TypeInfo__System__EventHandler<ConstraintBoxChangedEventArgs>);
        if (pMVar24 == (MonitorData *)0x0) {
          FUN_?(pDVar22,pEVar23);
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
      LOCK();
      pDVar22 = (Delegate *)*ppMVar21;
      bVar1 = a == pDVar22;
      if (bVar1) {
        *ppMVar21 = pMVar24;
        pDVar22 = a;
      }
      UNLOCK();
      pDVar25 = a;
      if (!bVar1) {
        pDVar25 = pDVar22;
      }
      if (iRam_? != 0) {
        uVar2 = (uint)((ulonglong)ppMVar21 >> 0xc);
        lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
        do {
          uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
          puVar5 = (ulonglong *)(lVar3 + 0xADDR);
          LOCK();
          bVar1 = uVar4 == *puVar5;
          if (bVar1) {
            *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
          }
          UNLOCK();
        } while (!bVar1);
      }
      bVar1 = pDVar25 != a;
      a = pDVar25;
    } while (bVar1);
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__ModelingBoxConstraint,0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ModelingDynamicBoxConstraint);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__SharedCubeFunctions);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar26 = (Vector3__Array *)(this->fields).constraint;
  vertices = (Vector3__Array *)0x0;
  if (pVVar26 != (Vector3__Array *)0x0) {
    bVar20 = (TypeInfo__ModelingDynamicBoxConstraint->_1).naturalAligment;
    if (((((IModelingConstraint__Class *)pVVar26->klass)->_1).naturalAligment < bVar20) ||
       (bVar1 = true,
       (((IModelingConstraint__Class *)pVVar26->klass)->_1).typeHierarchy[(ulonglong)bVar20 - 1] !=
       (Il2CppClass *)TypeInfo__ModelingDynamicBoxConstraint)) {
      bVar1 = false;
    }
    pVVar27 = vertices;
    if (bVar1) {
      pVVar27 = pVVar26;
    }
    if (pVVar27 != (Vector3__Array *)0x0) {
      bVar20 = (TypeInfo__ModelingDynamicBoxConstraint->_1).naturalAligment;
      if (((((IModelingConstraint__Class *)pVVar26->klass)->_1).naturalAligment < bVar20) ||
         (pVVar27 = (Vector3__Array *)0x1,
         (((IModelingConstraint__Class *)pVVar26->klass)->_1).typeHierarchy[(ulonglong)bVar20 - 1] !=
         (Il2CppClass *)TypeInfo__ModelingDynamicBoxConstraint)) {
        pVVar27 = vertices;
      }
      if ((int)pVVar27 != 0) {
        vertices = pVVar26;
      }
      pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                          ((Component *)this,(MethodInfo *)0x0);
      if (vertices != (Vector3__Array *)0x0) {
        auStack_28._0_4_ = vertices->vector[7].y;
        auStack_28._4_4_ = vertices->vector[7].z;
        auStack_28._8_4_ = vertices->vector[8].x;
        auStack_28._12_4_ = vertices->vector[8].y;
        uStack_29 = *(undefined8 *)&vertices->vector[8].z;
        if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->_1).field_0x1c
            == 0) {
          FUN_?();
        }
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->_1).field_0x1c
            == 0) {
          FUN_?();
        }
        iVar30 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
                 ObscuredShort_InternalDecrypt((ObscuredShort *)&stack0x00000008,(MethodInfo *)0x0);
        pTVar18 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                            ((Component *)this,(MethodInfo *)0x0);
        if (pTVar18 != (Transform *)0x0) {
          if (cRam_? == '\0') {
            FUN_?(&
                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pvVar13 = (pTVar18->fields)._._.m_CachedPtr;
          if (pvVar13 == (void *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
            ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar18,(MethodInfo *)0x0);
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          pcVar7 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0)) {
            uVar14 = func_?(&UNK_?);
            FUN_?(uVar14,0);
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          pcRam_? = pcVar7;
          (*pcRam_?)(pvVar13);
          auStack_28._0_4_ = vertices->vector[7].y;
          auStack_28._4_4_ = vertices->vector[7].z;
          auStack_28._8_4_ = vertices->vector[8].x;
          auStack_28._12_4_ = vertices->vector[8].y;
          uStack_29 = *(undefined8 *)&vertices->vector[8].z;
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->_1).field_0x1c
              == 0) {
            FUN_?();
          }
          iVar31 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort
                   ::ObscuredShort_InternalDecrypt
                             ((ObscuredShort *)&stack0x00000008,(MethodInfo *)0x0);
          pTVar18 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                              ((Component *)this,(MethodInfo *)0x0);
          if (pTVar18 != (Transform *)0x0) {
            if (cRam_? == '\0') {
              FUN_?(&
                            void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                           );
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            VStack_32.x = 0.0;
            VStack_32.y = 0.0;
            VStack_32.z = 0.0;
            pvVar13 = (pTVar18->fields)._._.m_CachedPtr;
            if (pvVar13 == (void *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
              ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar18,(MethodInfo *)0x0);
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            pcVar7 = pcRam_?;
            if ((pcRam_? == (code *)0x0) &&
               (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0)) {
              uVar14 = func_?(&UNK_?);
              FUN_?(uVar14,0);
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            pcRam_? = pcVar7;
            (*pcRam_?)(pvVar13);
            uStack_29 = *(undefined8 *)&vertices->vector[8].z;
            auStack_28._0_4_ = vertices->vector[7].y;
            auStack_28._4_4_ = vertices->vector[7].z;
            auStack_28._8_4_ = vertices->vector[8].x;
            auStack_28._12_4_ = vertices->vector[8].y;
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->_1).
                         field_0x1c == 0) {
              FUN_?();
            }
            iVar33 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::
                     ObscuredShort::ObscuredShort_InternalDecrypt
                               ((ObscuredShort *)&stack0x00000008,(MethodInfo *)0x0);
            pTVar18 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                ((Component *)this,(MethodInfo *)0x0);
            if (pTVar18 != (Transform *)0x0) {
              if (cRam_? == '\0') {
                FUN_?(&
                              void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                             );
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              auStack_28._0_4_ = 0.0;
              auStack_28._4_4_ = 0.0;
              auStack_28._8_8_ = auStack_28._8_8_ & 0xffffffff00000000;
              pvVar13 = (pTVar18->fields)._._.m_CachedPtr;
              if (pvVar13 == (void *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar18,(MethodInfo *)0x0);
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              pcVar7 = pcRam_?;
              if ((pcRam_? == (code *)0x0) &&
                 (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0)) {
                uVar14 = func_?(&UNK_?);
                FUN_?(uVar14,0);
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              pcRam_? = pcVar7;
              (*pcRam_?)(pvVar13);
              uVar14._0_4_ = (float)(int)iVar30 * 0.0;
              if (pTVar8 != (Transform *)0x0) {
                uVar14._4_4_ = (float)(int)iVar31 * VStack_32.y;
                VStack_32._0_8_ = uVar14;
                VStack_32.z = (float)(int)iVar33 * (float)auStack_28._8_4_;
                if (cRam_? == '\0') {
                  FUN_?(&
                                void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                               );
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                pvVar13 = (pTVar8->fields)._._.m_CachedPtr;
                if (pvVar13 == (void *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                  ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar8,(MethodInfo *)0x0);
                  pcVar7 = (code *)swi(3);
                  (*pcVar7)();
                  return;
                }
                pcVar7 = pcRam_?;
                if ((pcRam_? == (code *)0x0) &&
                   (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0)) {
                  uVar14 = func_?(&UNK_?);
                  FUN_?(uVar14,0);
                  pcVar7 = (code *)swi(3);
                  (*pcVar7)();
                  return;
                }
                pcRam_? = pcVar7;
                (*pcRam_?)(pvVar13,&VStack_32);
                if (*(int *)&(TypeInfo__SharedCubeFunctions->_1).field_0x1c == 0) {
                  FUN_?();
                }
                if (cRam_? == '\0') {
                  FUN_?(&TypeInfo__SharedCubeFunctions);
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                if (*(int *)&(TypeInfo__SharedCubeFunctions->_1).field_0x1c == 0) {
                  FUN_?();
                }
                if (cRam_? == '\0') {
                  FUN_?(&TypeInfo__UnityEngine__Vector3);
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                pVVar26 = (Vector3__Array *)FUN_?(TypeInfo__UnityEngine__Vector3);
                fVar34 = _UNK_?;
                fVar35 = _UNK_?;
                if (pVVar26 != (Vector3__Array *)0x0) {
                  if ((int)pVVar26->max_length != 0) {
                    pVVar26->vector[0].x = _UNK_?;
                    pVVar26->vector[0].y = fVar35;
                    pVVar26->vector[0].z = fVar34;
                    if (1 < (uint)pVVar26->max_length) {
                      pVVar26->vector[1].x = fVar35;
                      pVVar26->vector[1].y = fVar35;
                      pVVar26->vector[1].z = fVar34;
                      if (2 < (uint)pVVar26->max_length) {
                        pVVar26->vector[2].x = fVar35;
                        pVVar26->vector[2].y = fVar35;
                        pVVar26->vector[2].z = fVar35;
                        if (3 < (uint)pVVar26->max_length) {
                          pVVar26->vector[3].x = fVar34;
                          pVVar26->vector[3].y = fVar35;
                          pVVar26->vector[3].z = fVar35;
                          if (4 < (uint)pVVar26->max_length) {
                            pVVar26->vector[4].x = fVar34;
                            pVVar26->vector[4].y = fVar34;
                            pVVar26->vector[4].z = fVar35;
                            if (5 < (uint)pVVar26->max_length) {
                              pVVar26->vector[5].x = fVar35;
                              pVVar26->vector[5].y = fVar34;
                              pVVar26->vector[5].z = fVar35;
                              if (6 < (uint)pVVar26->max_length) {
                                pVVar26->vector[6].x = fVar35;
                                pVVar26->vector[6].y = fVar34;
                                pVVar26->vector[6].z = fVar34;
                                if (7 < (uint)pVVar26->max_length) {
                                  pVVar26->vector[7].x = fVar34;
                                  pVVar26->vector[7].y = fVar34;
                                  pVVar26->vector[7].z = fVar34;
                                  vertices = SharedCubeFunctions::SharedCubeFunctions_GetVertices_1
                                                       (pVVar26,(MethodInfo *)0x0);
                                  goto DAT_?;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                  FUN_?();
                  pcVar7 = (code *)swi(3);
                  (*pcVar7)();
                  return;
                }
              }
              FUN_?();
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
          }
        }
      }
code_?:
      FUN_?();
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    bVar20 = (TypeInfo__ModelingBoxConstraint->_1).naturalAligment;
    if ((bVar20 <= (((IModelingConstraint__Class *)pVVar26->klass)->_1).naturalAligment) &&
       ((((IModelingConstraint__Class *)pVVar26->klass)->_1).typeHierarchy[(ulonglong)bVar20 - 1] ==
        (Il2CppClass *)TypeInfo__ModelingBoxConstraint)) {
      if ((((IModelingConstraint__Class *)pVVar26->klass)->_1).typeHierarchy
          [(ulonglong)(TypeInfo__ModelingBoxConstraint->_1).naturalAligment - 1] !=
          (Il2CppClass *)TypeInfo__ModelingBoxConstraint) goto code_?;
      auStack_28._0_8_ = *(undefined8 *)&pVVar26->vector[2].z;
      fVar35 = pVVar26->vector[3].y;
      uStack_11 = CONCAT44(unaff_XMM6_Db,unaff_XMM6_Da);
      uStack_12 = CONCAT44(unaff_XMM6_Dd,unaff_XMM6_Dc);
      uStack_16 = (MonitorData *)CONCAT44(unaff_XMM8_Db,unaff_XMM8_Da);
      uStack_36 = (undefined *)CONCAT44(unaff_XMM11_Dd,unaff_XMM11_Dc);
      uStack_17 = unaff_XMM8_Dc;
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Vector3);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      fVar37 = _UNK_?;
      pVVar38 = TypeInfo__UnityEngine__Vector3->static_fields;
      VStack_32.x = (pVVar38->oneVector).x;
      VStack_32.y = (pVVar38->oneVector).y;
      fVar39 = (float)auStack_28._0_4_ - VStack_32.x * _UNK_?;
      fVar40 = (pVVar38->oneVector).z * _UNK_?;
      fVar41 = (float)auStack_28._4_4_ - VStack_32.y * _UNK_?;
      auStack_28._0_8_ = *(undefined8 *)&pVVar26->vector[3].z;
      fVar34 = pVVar26->vector[4].y;
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Vector3);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pVVar38 = TypeInfo__UnityEngine__Vector3->static_fields;
      VStack_32.x = (pVVar38->oneVector).x;
      VStack_32.y = (pVVar38->oneVector).y;
      fVar42 = (pVVar38->oneVector).z;
      fVar43 = VStack_32.y * fVar37 + (float)auStack_28._4_4_;
      fVar44 = VStack_32.x * fVar37 + (float)auStack_28._0_4_;
      if (*(int *)&(TypeInfo__SharedCubeFunctions->_1).field_0x1c == 0) {
        FUN_?();
      }
      auStack_28._4_4_ = fVar43;
      auStack_28._0_4_ = fVar44;
      VStack_32.y = fVar41;
      VStack_32.x = fVar39;
      auStack_28._8_4_ = fVar42 * fVar37 + fVar34;
      VStack_32.z = fVar35 - fVar40;
      pVVar26 = SharedCubeFunctions::SharedCubeFunctions_GetCorners_2
                          (&VStack_32,(Vector3 *)auStack_28,(MethodInfo *)0x0);
      vertices = SharedCubeFunctions::SharedCubeFunctions_GetVertices_1(pVVar26,(MethodInfo *)0x0);
    }
  }
DAT_?:
  ConstraintVisualizer_BuildMesh(this,vertices,(MethodInfo *)0x0);
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::ConstraintVisualizer::ConstraintVisualizer_OnDestroy
               (ConstraintVisualizer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__ConstraintVisualizer__Constraint_BoxChanged_System__Object__ConstraintBoxChangedEventArgs_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__EventHandler<ConstraintBoxChangedEventArgs>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ModelingDynamicBoxConstraint);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pIVar1 = (this->fields).constraint;
  if (pIVar1 != (IModelingConstraint *)0x0) {
    bVar2 = (TypeInfo__ModelingDynamicBoxConstraint->_1).naturalAligment;
    if ((bVar2 <= (pIVar1->klass->_1).naturalAligment) &&
       ((pIVar1->klass->_1).typeHierarchy[(ulonglong)bVar2 - 1] ==
        (Il2CppClass *)TypeInfo__ModelingDynamicBoxConstraint)) {
      this_00 = (UnityAction_2_System_Object_System_Object_ *)
                FUN_?(TypeInfo__System__EventHandler<ConstraintBoxChangedEventArgs>);
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                (this_00,(Object *)this,
                 MethodInfo__ConstraintVisualizer__Constraint_BoxChanged_System__Object__ConstraintBoxChangedEventArgs_
                 ,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__System__EventHandler<ConstraintBoxChangedEventArgs>);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      ppMVar3 = &pIVar1[6].monitor;
      source = (Delegate *)pIVar1[6].monitor;
      do {
        pDVar4 = mscorlib.dll::System::Delegate::Delegate_Remove
                           (source,(Delegate *)this_00,(MethodInfo *)0x0);
        pEVar5 = TypeInfo__System__EventHandler<ConstraintBoxChangedEventArgs>;
        if (pDVar4 == (Delegate *)0x0) {
          pMVar6 = (MonitorData *)0x0;
        }
        else {
          pMVar6 = (MonitorData *)
                   FUN_?(pDVar4,
                                 TypeInfo__System__EventHandler<ConstraintBoxChangedEventArgs>);
          if (pMVar6 == (MonitorData *)0x0) {
            FUN_?(pDVar4,pEVar5);
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
        }
        LOCK();
        pDVar4 = (Delegate *)*ppMVar3;
        bVar8 = source == pDVar4;
        if (bVar8) {
          *ppMVar3 = pMVar6;
          pDVar4 = source;
        }
        UNLOCK();
        pDVar9 = source;
        if (!bVar8) {
          pDVar9 = pDVar4;
        }
        if (iRam_? != 0) {
          uVar10 = (uint)((ulonglong)ppMVar3 >> 0xc);
          uVar11 = (ulonglong)((uVar10 & 0x1fffff) >> 6);
          do {
            uVar12 = *(ulonglong *)(uVar11 * 8 + 0xADDR);
            puVar13 = (ulonglong *)(uVar11 * 8 + 0xADDR);
            LOCK();
            bVar8 = uVar12 == *puVar13;
            if (bVar8) {
              *puVar13 = uVar12 | 1L << (uVar10 & 0x3f);
            }
            UNLOCK();
          } while (!bVar8);
        }
        bVar8 = pDVar9 != source;
        source = pDVar9;
      } while (bVar8);
    }
  }
  return;
}

