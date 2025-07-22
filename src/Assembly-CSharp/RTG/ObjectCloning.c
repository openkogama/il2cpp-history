
/* List`1[UnityEngine.GameObject] CloneHierarchies(List`1[UnityEngine.GameObject],
   ObjectCloning+Config) */

List_1_UnityEngine_GameObject_ *
Assembly-CSharp.dll::RTG::ObjectCloning::ObjectCloning_CloneHierarchies
          (List_1_UnityEngine_GameObject_ *roots,ObjectCloning_Config cloneConfig,MethodInfo *method
          )

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffb8;
  puVar5 = &stack0xffffffb8;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::GameObject>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::GameObject>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::GameObject>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__Add_UnityEngine__GameObject_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__GetEnumerator__
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__List__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__List_int_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__get_Count__
                   );
    func_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::GameObject>);
    func_?(&TypeInfo__RTG__ObjectCloning);
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  LStack_6._list = (List_1_System_Object_ *)0x0;
  LStack_6._index = 0;
  LStack_6._version = 0;
  LStack_6._current = (Object *)0x0;
  if (roots != (List_1_UnityEngine_GameObject_ *)0x0) {
    if ((roots->fields)._size == 0) {
      pLVar7 = (List_1_UnityEngine_GameObject_ *)
               func_?(TypeInfo__System__Collections__Generic__List<UnityEngine::GameObject>
                              );
      mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
      __Il2CppFullySharedGenericType]::
      LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
                ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)pLVar7,
                 MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__List__);
      *unaff_FS_OFFSET = uStack_3;
      return pLVar7;
    }
    capacity = (roots->fields)._size;
    this = (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
            *)func_?(TypeInfo__System__Collections__Generic__List<UnityEngine::GameObject>)
    ;
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::Internal::
    MultiColumnCollectionHeader+ViewState+ColumnState]::
    List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState___ctor_2
              (this,capacity,
               MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__List_int_);
    pLStack_8 = this;
    pLVar9 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
             RegexCharClass+SingleRange]::
             List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                       (&LStack_10,
                        (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)roots,
                        MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__GetEnumerator__
                       );
    LStack_6._list = (List_1_System_Object_ *)pLVar9->_list;
    LStack_6._index = pLVar9->_index;
    LStack_6._version = pLVar9->_version;
    LStack_6._current = *(Object **)&pLVar9->_current;
    LStack_10._version = 0;
    uStack_1 = 1;
    LStack_10._current = (RegexCharClass_SingleRange)&LStack_6;
    while( true ) {
      do {
        bVar11 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
                List_1_T_Enumerator_System_Object__MoveNext
                          (&LStack_6,
                           MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::GameObject>__MoveNext__
                          );
        root = LStack_6._current;
        if (bVar11 == 0) {
          uStack_1 = 0xffffffff;
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                    ((Object *)&LStack_6,
                     (ExceptionArgument__Enum)
                     MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::GameObject>__Dispose__
                     ,unaff_EBX);
          *unaff_FS_OFFSET = uStack_3;
          return (List_1_UnityEngine_GameObject_ *)this;
        }
        if ((TypeInfo__RTG__ObjectCloning->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        x = ObjectCloning_CloneHierarchy((GameObject *)root,cloneConfig,(MethodInfo *)0x0);
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          LStack_6._current = (Object *)TypeInfo__UnityEngine__Object;
          LStack_6._version = (int32_t)&UNK_?;
          func_?();
        }
        bVar11 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                          ((Object_1 *)x,(Object_1 *)0x0,(MethodInfo *)0x0);
      } while (bVar11 == 0);
      if (this == (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
                   *)0x0) break;
      mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object__Add
                ((List_1_System_Object_ *)this,(Object *)x,
                 MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__Add_UnityEngine__GameObject_
                );
    }
  }
  uVar12 = func_?();
  func_?(uVar12);
  pcVar13 = (code *)swi(3);
  pLVar7 = (List_1_UnityEngine_GameObject_ *)(*pcVar13)();
  return pLVar7;
}


/* GameObject CloneHierarchy(GameObject, ObjectCloning+Config) */

GameObject *
Assembly-CSharp.dll::RTG::ObjectCloning::ObjectCloning_CloneHierarchy
          (GameObject *root,ObjectCloning_Config cloneConfig,MethodInfo *method)

{
  pGVar1 = root;
  if (cRam_? == '\0') {
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject__UnityEngine__Vector3__UnityEngine__Quaternion_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)root,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    return (GameObject *)0x0;
  }
  if (root != (GameObject *)0x0) {
    pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                       (root,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    pVVar4 = TypeInfo__UnityEngine__Vector3->static_fields;
    uStack_5._0_4_ = (pVVar4->zeroVector).x;
    uStack_5._4_4_ = (pVVar4->zeroVector).y;
    root = (GameObject *)(pVVar4->zeroVector).z;
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    pQVar6 = TypeInfo__UnityEngine__Quaternion->static_fields;
    pTVar7 = (Transform *)(pQVar6->identityQuaternion).x;
    ppVVar8 = (Vector3__Class **)(pQVar6->identityQuaternion).y;
    fStack_9 = (pQVar6->identityQuaternion).z;
    fStack_10 = (pQVar6->identityQuaternion).w;
    if (cRam_? == '\0') {
      ppVVar8 = &TypeInfo__UnityEngine__Vector3;
      pTVar7 = (Transform *)&UNK_?;
      func_?();
      cRam_? = '\x01';
    }
    pVVar4 = TypeInfo__UnityEngine__Vector3->static_fields;
    uStack_11._0_4_ = (pVVar4->oneVector).x;
    uStack_11._4_4_ = (pVVar4->oneVector).y;
    fStack_12 = (pVVar4->oneVector).z;
    if ((cloneConfig.TransformFlags & 1U) != 0) {
      if (pTVar3 == (Transform *)0x0) goto code_?;
      ppVVar8 = (Vector3__Class **)0x0;
      pTVar7 = pTVar3;
      pVVar13 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                         (&VStack_14,pTVar3,(MethodInfo *)0x0);
      uStack_5._0_4_ = pVVar13->x;
      uStack_5._4_4_ = pVVar13->y;
      root = (GameObject *)pVVar13->z;
    }
    if ((cloneConfig.TransformFlags & 2U) != 0) {
      if (pTVar3 == (Transform *)0x0) goto code_?;
      pQVar15 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                         ((Quaternion *)&stack0xffffffcc,pTVar3,(MethodInfo *)0x0);
      pTVar7 = (Transform *)pQVar15->x;
      ppVVar8 = (Vector3__Class **)pQVar15->y;
      fStack_9 = pQVar15->z;
      fStack_10 = pQVar15->w;
    }
    fVar16 = fStack_12;
    if ((cloneConfig.TransformFlags & 4U) != 0) {
      if (pTVar3 == (Transform *)0x0) goto code_?;
      ppVVar8 = (Vector3__Class **)0x0;
      pVVar13 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_lossyScale
                         (&VStack_14,pTVar3,(MethodInfo *)0x0);
      uStack_11._0_4_ = pVVar13->x;
      uStack_11._4_4_ = pVVar13->y;
      fVar16 = pVVar13->z;
      pTVar7 = pTVar3;
    }
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    position.z = (float)root;
    position.x = (float)(undefined4)uStack_5;
    position.y = (float)uStack_5._4_4_;
    rotation.y = (float)ppVVar8;
    rotation.x = (float)pTVar7;
    rotation.z = fStack_9;
    rotation.w = fStack_10;
    this = (GameObject *)
           UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_7
                     ((Object *)pGVar1,position,rotation,
                      UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject__UnityEngine__Vector3__UnityEngine__Quaternion_
                     );
    value_00 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_get_name
                         ((Object_1 *)pGVar1,(MethodInfo *)0x0);
    if (this != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_set_name
                ((Object_1 *)this,value_00,(MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_set_layer
                (this,cloneConfig.Layer,(MethodInfo *)0x0);
      pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                         (this,(MethodInfo *)0x0);
      if (pTVar3 != (Transform *)0x0) {
        value.z = fVar16;
        value.x = (float)(undefined4)uStack_11;
        value.y = (float)uStack_11._4_4_;
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
                  (pTVar3,value,(MethodInfo *)0x0);
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_parent
                  (pTVar3,cloneConfig.Parent,(MethodInfo *)0x0);
        return this;
      }
    }
  }
code_?:
  func_?();
  pcVar17 = (code *)swi(3);
  pGVar1 = (GameObject *)(*pcVar17)();
  return pGVar1;
}


/* ObjectCloning() */

void Assembly-CSharp.dll::RTG::ObjectCloning::ObjectCloning__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__ObjectCloning);
    cRam_? = '\x01';
  }
  pOVar1 = TypeInfo__RTG__ObjectCloning->static_fields;
  (pOVar1->_defaultConfig).Parent = (Transform *)0x0;
  (pOVar1->_defaultConfig).TransformFlags = 0;
  (pOVar1->_defaultConfig).Layer = 0;
  (TypeInfo__RTG__ObjectCloning->static_fields->_defaultConfig).TransformFlags = 7;
  (TypeInfo__RTG__ObjectCloning->static_fields->_defaultConfig).Layer = 0;
  return;
}


/* ObjectCloning+Config get_DefaultConfig() */

ObjectCloning_Config *
Assembly-CSharp.dll::RTG::ObjectCloning::ObjectCloning_get_DefaultConfig
          (ObjectCloning_Config *__return_storage_ptr__,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__ObjectCloning);
    cRam_? = '\x01';
  }
  if ((TypeInfo__RTG__ObjectCloning->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__RTG__ObjectCloning);
  }
  pOVar1 = TypeInfo__RTG__ObjectCloning->static_fields;
  iVar2 = (pOVar1->_defaultConfig).TransformFlags;
  iVar3 = (pOVar1->_defaultConfig).Layer;
  __return_storage_ptr__->Parent = (pOVar1->_defaultConfig).Parent;
  __return_storage_ptr__->TransformFlags = iVar2;
  __return_storage_ptr__->Layer = iVar3;
  return __return_storage_ptr__;
}

