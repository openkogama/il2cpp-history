
/* Boolean ContainsRestrictionsForObject(GameObject) */

bool Assembly-CSharp.dll::RTG::ObjectTransformGizmo::
     ObjectTransformGizmo_ContainsRestrictionsForObject
               (ObjectTransformGizmo *this,GameObject *targetObject,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::GameObject,_RTG::ObjectTransformGizmo::ObjectRestrictions>__ContainsKey_UnityEngine__GameObject_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)targetObject,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    return 0;
  }
  this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
            (this->fields)._objectToRestrictions;
  if (this_00 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                      (this_00,(Object *)targetObject,
                       MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::GameObject,_RTG::ObjectTransformGizmo::ObjectRestrictions>__ContainsKey_UnityEngine__GameObject_
                      );
    return bVar1;
  }
  uVar2 = func_?(&stack0xfffffffc);
  func_?(uVar2);
  pcVar3 = (code *)swi(3);
  bVar1 = (*pcVar3)();
  return bVar1;
}


/* Int32 GetNumTransformableParentObjects() */

int32_t Assembly-CSharp.dll::RTG::ObjectTransformGizmo::
        ObjectTransformGizmo_GetNumTransformableParentObjects
                  (ObjectTransformGizmo *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pLVar1 = ObjectTransformGizmo_GetTransformableParentObjects(this,(MethodInfo *)0x0);
  if (pLVar1 != (List_1_UnityEngine_GameObject_ *)0x0) {
    return (pLVar1->fields)._size;
  }
  uVar2 = func_?(&stack0xfffffff8);
  func_?(uVar2);
  pcVar3 = (code *)swi(3);
  iVar4 = (*pcVar3)();
  return iVar4;
}


/* ObjectBounds+QueryConfig GetObjectBoundsQConfig() */

ObjectBounds_QueryConfig *
Assembly-CSharp.dll::RTG::ObjectTransformGizmo::ObjectTransformGizmo_GetObjectBoundsQConfig
          (ObjectBounds_QueryConfig *__return_storage_ptr__,ObjectTransformGizmo *this,
          MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__GameObjectTypeHelper);
    cRam_? = '\x01';
  }
  __return_storage_ptr__->ObjectTypes = 0;
  (__return_storage_ptr__->NoVolumeSize).x = 0.0;
  (__return_storage_ptr__->NoVolumeSize).y = 0.0;
  (__return_storage_ptr__->NoVolumeSize).z = 0.0;
  pVVar1 = Vector3Ex::Vector3Ex_FromValue(&VStack_2,1e-06,(MethodInfo *)0x0);
  fVar3 = pVVar1->y;
  fVar4 = pVVar1->z;
  (__return_storage_ptr__->NoVolumeSize).x = pVVar1->x;
  (__return_storage_ptr__->NoVolumeSize).y = fVar3;
  (__return_storage_ptr__->NoVolumeSize).z = fVar4;
  if ((TypeInfo__RTG__GameObjectTypeHelper->_1).cctor_finished_or_no_cctor == 0) {
    VStack_2.y = (float)TypeInfo__RTG__GameObjectTypeHelper;
    VStack_2.x = (float)&UNK_?;
    func_?();
  }
  if (cRam_? == '\0') {
    VStack_2.y = (float)&TypeInfo__RTG__GameObjectTypeHelper;
    VStack_2.x = (float)&UNK_?;
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__RTG__GameObjectTypeHelper->_1).cctor_finished_or_no_cctor == 0) {
    VStack_2.y = (float)TypeInfo__RTG__GameObjectTypeHelper;
    VStack_2.x = (float)&UNK_?;
    func_?();
  }
  __return_storage_ptr__->ObjectTypes =
       TypeInfo__RTG__GameObjectTypeHelper->static_fields->_allCombined;
  return __return_storage_ptr__;
}


/* Vector3 GetObjectCustomLocalPivot(GameObject) */

Vector3 * Assembly-CSharp.dll::RTG::ObjectTransformGizmo::
          ObjectTransformGizmo_GetObjectCustomLocalPivot
                    (Vector3 *__return_storage_ptr__,ObjectTransformGizmo *this,GameObject *gameObj,
                    MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::GameObject,_UnityEngine::Vector3>__ContainsKey_UnityEngine__GameObject_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::GameObject,_UnityEngine::Vector3>__get_Item_UnityEngine__GameObject_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)gameObj,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar1 != 0) {
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    pVVar2 = TypeInfo__UnityEngine__Vector3->static_fields;
    fVar3 = (pVVar2->zeroVector).y;
    fVar4 = (pVVar2->zeroVector).z;
    __return_storage_ptr__->x = (pVVar2->zeroVector).x;
    __return_storage_ptr__->y = fVar3;
    __return_storage_ptr__->z = fVar4;
    return __return_storage_ptr__;
  }
  pDVar5 = (this->fields)._objectToCustomLocalPivot;
  if (pDVar5 != (Dictionary_2_UnityEngine_GameObject_UnityEngine_Vector3_ *)0x0) {
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
            Object,AdminToolController+DefaultBan]::
            Dictionary_2_System_Object_AdminToolController_DefaultBan__ContainsKey
                      ((Dictionary_2_System_Object_AdminToolController_DefaultBan_ *)pDVar5,
                       (Object *)gameObj,
                       MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::GameObject,_UnityEngine::Vector3>__ContainsKey_UnityEngine__GameObject_
                      );
    if (bVar1 == 0) {
      if (gameObj != (GameObject *)0x0) {
        this_00 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                            (gameObj,(MethodInfo *)0x0);
        if (this_00 != (Transform *)0x0) {
          pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                              ((Vector3 *)&stack0xfffffff0,this_00,(MethodInfo *)0x0);
          uVar7 = pVVar6->x;
          pAVar8 = (AdminToolController_DefaultBan *)
                    UnityEngine.CoreModule.dll::UnityEngine::Transform::
                    Transform_InverseTransformPoint
                              ((Vector3 *)&stack0xfffffff0,this_00,*pVVar6,(MethodInfo *)0x0);
          __return_storage_ptr__ = (Vector3 *)uVar7;
          goto code_?;
        }
      }
    }
    else {
      pDVar5 = (this->fields)._objectToCustomLocalPivot;
      if (pDVar5 != (Dictionary_2_UnityEngine_GameObject_UnityEngine_Vector3_ *)0x0) {
        pAVar8 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                  Object,AdminToolController+DefaultBan]::
                  Dictionary_2_System_Object_AdminToolController_DefaultBan__get_Item
                            ((AdminToolController_DefaultBan *)&stack0xfffffff0,
                             (Dictionary_2_System_Object_AdminToolController_DefaultBan_ *)pDVar5,
                             (Object *)gameObj,
                             MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::GameObject,_UnityEngine::Vector3>__get_Item_UnityEngine__GameObject_
                            );
code_?:
        pSVar9 = pAVar8->BanDuration;
        pSVar10 = pAVar8->BanDurationFormat;
        __return_storage_ptr__->x = (float)pAVar8->BanReason;
        __return_storage_ptr__->y = (float)pSVar9;
        __return_storage_ptr__->z = (float)pSVar10;
        return __return_storage_ptr__;
      }
    }
  }
  func_?();
  pcVar11 = (code *)swi(3);
  pVVar6 = (Vector3 *)(*pcVar11)();
  return pVVar6;
}


/* ObjectTransformGizmo+ObjectRestrictions GetObjectRestrictions(GameObject) */

ObjectTransformGizmo_ObjectRestrictions *
Assembly-CSharp.dll::RTG::ObjectTransformGizmo::ObjectTransformGizmo_GetObjectRestrictions
          (ObjectTransformGizmo *this,GameObject *targetObject,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::GameObject,_RTG::ObjectTransformGizmo::ObjectRestrictions>__get_Item_UnityEngine__GameObject_
                   );
    cRam_? = '\x01';
  }
  bVar1 = ObjectTransformGizmo_ContainsRestrictionsForObject(this,targetObject,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    return (ObjectTransformGizmo_ObjectRestrictions *)0x0;
  }
  this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
            (this->fields)._objectToRestrictions;
  if (this_00 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
    TVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                      (this_00,(Object *)targetObject,
                       MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::GameObject,_RTG::ObjectTransformGizmo::ObjectRestrictions>__get_Item_UnityEngine__GameObject_
                      );
    return (ObjectTransformGizmo_ObjectRestrictions *)TVar2.m_Index;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  pOVar4 = (ObjectTransformGizmo_ObjectRestrictions *)(*pcVar3)();
  return pOVar4;
}


/* AABB GetTargetObjectGroupWorldAABB() */

AABB * Assembly-CSharp.dll::RTG::ObjectTransformGizmo::
       ObjectTransformGizmo_GetTargetObjectGroupWorldAABB
                 (AABB *__return_storage_ptr__,ObjectTransformGizmo *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffff7c;
  puVar5 = &stack0xffffff7c;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__IDisposable);
    func_?(&TypeInfo__System__Collections__Generic__IEnumerable<UnityEngine::GameObject>);
    func_?(&TypeInfo__System__Collections__Generic__IEnumerator<UnityEngine::GameObject>);
    func_?(&TypeInfo__System__Collections__IEnumerator);
    func_?(&TypeInfo__RTG__ObjectBounds);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  AStack_6._size.x = 0.0;
  AStack_6._size.y = 0.0;
  AStack_6._size.z = 0.0;
  AStack_6._center.x = 0.0;
  AStack_6._isValid = 0;
  AStack_6._25_3_ = 0;
  AStack_6._center.y = 0.0;
  AStack_6._center.z = 0.0;
  if ((this->fields)._targetObjects == (IEnumerable_1_UnityEngine_GameObject_ *)0x0) {
    pAVar7 = AABB::AABB_GetInvalid(&AStack_8,(MethodInfo *)0x0);
    fVar9 = (pAVar7->_size).y;
    fVar10 = (pAVar7->_size).z;
    fVar11 = (pAVar7->_center).x;
    bVar12 = pAVar7->_isValid;
    uVar13 = *(undefined3 *)&pAVar7->field_0x19;
    (__return_storage_ptr__->_size).x = (pAVar7->_size).x;
    (__return_storage_ptr__->_size).y = fVar9;
    (__return_storage_ptr__->_size).z = fVar10;
    (__return_storage_ptr__->_center).x = fVar11;
    fVar9 = (pAVar7->_center).z;
    (__return_storage_ptr__->_center).y = (pAVar7->_center).y;
    (__return_storage_ptr__->_center).z = fVar9;
    __return_storage_ptr__->_isValid = bVar12;
    *(undefined3 *)&__return_storage_ptr__->field_0x19 = uVar13;
    *unaff_FS_OFFSET = uStack_3;
    return __return_storage_ptr__;
  }
  pOVar14 = ObjectTransformGizmo_GetObjectBoundsQConfig(&OStack_15,this,(MethodInfo *)0x0);
  OStack_15.ObjectTypes = pOVar14->ObjectTypes;
  OStack_15.NoVolumeSize.x = (pOVar14->NoVolumeSize).x;
  OStack_15.NoVolumeSize.y = (pOVar14->NoVolumeSize).y;
  OStack_15.NoVolumeSize.z = (pOVar14->NoVolumeSize).z;
  pAVar7 = AABB::AABB_GetInvalid(&AStack_8,(MethodInfo *)0x0);
  AStack_6._size.x = (pAVar7->_size).x;
  AStack_6._size.y = (pAVar7->_size).y;
  AStack_6._size.z = (pAVar7->_size).z;
  AStack_6._center.x = (pAVar7->_center).x;
  AStack_6._center.y = (pAVar7->_center).y;
  AStack_6._center.z = (pAVar7->_center).z;
  AStack_6._isValid = pAVar7->_isValid;
  AStack_6._25_3_ = *(undefined3 *)&pAVar7->field_0x19;
  pIVar16 = (this->fields)._targetObjects;
  if (pIVar16 != (IEnumerable_1_UnityEngine_GameObject_ *)0x0) {
    pIVar17 = pIVar16->klass;
    uVar18 = 0;
    uVar19._0_1_ = (pIVar17->_1).rank;
    uVar19._1_1_ = (pIVar17->_1).minimumAlignment;
    if (uVar19 != 0) {
      do {
        if (pIVar17->interfaceOffsets[uVar18].interfaceType ==
            (Il2CppClass *)
            TypeInfo__System__Collections__Generic__IEnumerable<UnityEngine::GameObject>) {
          ppMVar20 = &(&pIVar16->klass->vtable)[pIVar16->klass->interfaceOffsets[uVar18].offset].
                      GetEnumerator.method;
          goto code_?;
        }
        uVar18 = uVar18 + 1;
      } while (uVar18 < uVar19);
    }
    AStack_8._size.y = 0.0;
    AStack_8._size.x =
         (float)TypeInfo__System__Collections__Generic__IEnumerable<UnityEngine::GameObject>;
    ppMVar20 = (MethodInfo **)func_?();
code_?:
    AStack_8._size.y = (float)ppMVar20[1];
    AStack_8._size.x = (float)pIVar16;
    pIStack_21 = (IEnumerable_1_UnityEngine_GameObject_ *)(*(code *)*ppMVar20)();
    ppIStack_22 = &pIStack_21;
    uStack_23 = 0;
    uStack_1 = 1;
    fVar9 = AStack_6._size.x;
    fVar10 = AStack_6._size.y;
    fVar11 = AStack_6._size.z;
    fVar24 = AStack_6._center.x;
    uVar25 = AStack_6._center._4_8_;
    uVar26 = AStack_6._24_4_;
    while (AStack_6._24_4_ = uVar26, AStack_6._center._4_8_ = uVar25, AStack_6._center.x = fVar24
          , AStack_6._size.z = fVar11, AStack_6._size.y = fVar10, AStack_6._size.x = fVar9,
          pIVar16 = pIStack_21,
          pIStack_27 = (IEnumerable_1_UnityEngine_GameObject___Class *)pIStack_21,
          pIStack_21 != (IEnumerable_1_UnityEngine_GameObject_ *)0x0) {
      pIStack_28 = pIStack_21->klass;
      uVar19 = 0;
      uVar18._0_1_ = (pIStack_28->_1).rank;
      uVar18._1_1_ = (pIStack_28->_1).minimumAlignment;
      uStack_29 = (uint)uVar18;
      if (uVar18 != 0) {
        do {
          if (pIStack_28->interfaceOffsets[uVar19].interfaceType ==
              (Il2CppClass *)TypeInfo__System__Collections__IEnumerator) {
            ppMVar20 = &(&pIStack_21->klass->vtable)
                        [pIStack_21->klass->interfaceOffsets[uVar19].offset].GetEnumerator.method;
            goto code_?;
          }
          uVar19 = uVar19 + 1;
        } while (uVar19 < uVar18);
      }
      AStack_8._size.y = 0.0;
      AStack_8._size.x = (float)TypeInfo__System__Collections__IEnumerator;
      ppMVar20 = (MethodInfo **)func_?();
code_?:
      AStack_8._size.y = (float)ppMVar20[1];
      AStack_8._size.x = (float)pIVar16;
      cVar30 = (*(code *)*ppMVar20)();
      pIVar16 = pIStack_21;
      if (cVar30 == '\0') {
        uStack_1 = 0xffffffff;
        AStack_8._size.y = (float)&UNK_?;
        func_?();
        (__return_storage_ptr__->_size).x = AStack_6._size.x;
        (__return_storage_ptr__->_size).y = AStack_6._size.y;
        (__return_storage_ptr__->_size).z = AStack_6._size.z;
        (__return_storage_ptr__->_center).x = AStack_6._center.x;
        (__return_storage_ptr__->_center).y = AStack_6._center.y;
        (__return_storage_ptr__->_center).z = AStack_6._center.z;
        __return_storage_ptr__->_isValid = AStack_6._isValid;
        *(undefined3 *)&__return_storage_ptr__->field_0x19 = AStack_6._25_3_;
        *unaff_FS_OFFSET = uStack_3;
        return __return_storage_ptr__;
      }
      pIStack_28 = (IEnumerable_1_UnityEngine_GameObject___Class *)pIStack_21;
      if (pIStack_21 == (IEnumerable_1_UnityEngine_GameObject_ *)0x0) break;
      pIStack_27 = pIStack_21->klass;
      uVar19 = 0;
      uVar31._0_1_ = (pIStack_27->_1).rank;
      uVar31._1_1_ = (pIStack_27->_1).minimumAlignment;
      uStack_29 = (uint)uVar31;
      if (uVar31 != 0) {
        do {
          if (pIStack_27->interfaceOffsets[uVar19].interfaceType ==
              (Il2CppClass *)
              TypeInfo__System__Collections__Generic__IEnumerator<UnityEngine::GameObject>) {
            ppMVar20 = &(&pIStack_21->klass->vtable)
                        [pIStack_21->klass->interfaceOffsets[uVar19].offset].GetEnumerator.method;
            goto code_?;
          }
          uVar19 = uVar19 + 1;
        } while (uVar19 < uVar31);
      }
      AStack_8._size.y = 0.0;
      AStack_8._size.x =
           (float)TypeInfo__System__Collections__Generic__IEnumerator<UnityEngine::GameObject>;
      ppMVar20 = (MethodInfo **)func_?();
code_?:
      AStack_8._size.y = (float)ppMVar20[1];
      AStack_8._size.x = (float)pIVar16;
      gameObject = (GameObject *)(*(code *)*ppMVar20)();
      if ((TypeInfo__RTG__ObjectBounds->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__RTG__ObjectBounds);
      }
      queryConfig.NoVolumeSize.x = OStack_15.NoVolumeSize.x;
      queryConfig.ObjectTypes = OStack_15.ObjectTypes;
      queryConfig.NoVolumeSize.y = OStack_15.NoVolumeSize.y;
      queryConfig.NoVolumeSize.z = OStack_15.NoVolumeSize.z;
      pAVar7 = ObjectBounds::ObjectBounds_CalcWorldAABB
                          (&AStack_8,gameObject,queryConfig,(MethodInfo *)0x0);
      uVar26._0_1_ = pAVar7->_isValid;
      uVar26._1_3_ = *(undefined3 *)&pAVar7->field_0x19;
      uVar25._0_4_ = (pAVar7->_center).y;
      uVar25._4_4_ = (pAVar7->_center).z;
      fVar9 = (pAVar7->_size).x;
      fVar10 = (pAVar7->_size).y;
      fVar11 = (pAVar7->_size).z;
      fVar24 = (pAVar7->_center).x;
      if (AStack_6._isValid != 0) {
        AABB::AABB_Encapsulate_2(&AStack_6,*pAVar7,(MethodInfo *)0x0);
        fVar9 = AStack_6._size.x;
        fVar10 = AStack_6._size.y;
        fVar11 = AStack_6._size.z;
        fVar24 = AStack_6._center.x;
        uVar25 = AStack_6._center._4_8_;
        uVar26 = AStack_6._24_4_;
      }
    }
  }
  AStack_8._size.y = (float)&UNK_?;
  AStack_8._size.y = (float)func_?();
  AStack_8._size.x = (float)&UNK_?;
  func_?();
  pcVar32 = (code *)swi(3);
  pAVar7 = (AABB *)(*pcVar32)();
  return pAVar7;
}


/* List`1[UnityEngine.GameObject] GetTransformableParentObjects() */

List_1_UnityEngine_GameObject_ *
Assembly-CSharp.dll::RTG::ObjectTransformGizmo::ObjectTransformGizmo_GetTransformableParentObjects
          (ObjectTransformGizmo *this,MethodInfo *method)

{
  pMVar1 = (MethodInfo *)*unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &stack0xfffffff0;
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
    func_?(&TypeInfo__RTG__GameObjectEx);
    func_?(&
                    RTG__IRTTransformGizmoListener_MethodInfo__UnityEngine__GameObject__GetComponent<RTG::IRTTransformGizmoListener>__
                   );
    func_?(&TypeInfo__RTG__IRTTransformGizmoListener);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__Add_UnityEngine__GameObject_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__GetEnumerator__
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__List__
                   );
    func_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::GameObject>);
    cRam_? = '\x01';
  }
  gameObjects = (this->fields)._targetObjects;
  if ((TypeInfo__RTG__GameObjectEx->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__RTG__GameObjectEx);
  }
  this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
            GameObjectEx::GameObjectEx_FilterParentsOnly_1(gameObjects,(MethodInfo *)0x0);
  this_01 = (MethodInfo *)
            func_?(TypeInfo__System__Collections__Generic__List<UnityEngine::GameObject>);
  pMVar2 = this_01;
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_01,
             MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__List__);
  if (this_00 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
    RegexCharClass+SingleRange]::
    List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
              ((List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
               &stack0xffffffcc,this_00,
               MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__GetEnumerator__
              );
    method_00 = (MethodInfo *)0x0;
    while( true ) {
      this_02 = 
      MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::GameObject>__MoveNext__
      ;
      bVar3 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
              List_1_T_Enumerator_System_Object__MoveNext
                        ((List_1_T_Enumerator_System_Object_ *)&stack0xffffffbc,
                         MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::GameObject>__MoveNext__
                        );
      if (bVar3 == 0) {
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                  ((Object *)&stack0xffffffbc,
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::GameObject>__Dispose__
                   ,method_00);
        *unaff_FS_OFFSET = pMVar1;
        return (List_1_UnityEngine_GameObject_ *)this_01;
      }
      if (this_02 == (MethodInfo *)0x0) break;
      method_00 = (MethodInfo *)
                  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                            ((GameObject *)this_02,
                             RTG__IRTTransformGizmoListener_MethodInfo__UnityEngine__GameObject__GetComponent<RTG::IRTTransformGizmoListener>__
                            );
      this_01 = pMVar2;
      if ((method_00 == (MethodInfo *)0x0) ||
         (cVar4 = func_?(), pMVar2 = this_01, cVar4 != '\0')) {
        pOVar5 = (&(this->fields)._settings)
                 [(this->fields)._sharedSettings != (ObjectTransformGizmoSettings *)0x0];
        if ((this_02 == (MethodInfo *)0x0) ||
           (layerNumber = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_layer
                                    ((GameObject *)this_02,(MethodInfo *)0x0),
           pOVar5 == (ObjectTransformGizmoSettings *)0x0)) break;
        method_00 = (MethodInfo *)&UNK_?;
        bVar3 = LayerEx::LayerEx_IsLayerBitSet
                          ((pOVar5->fields)._transformableLayers,layerNumber,(MethodInfo *)0x0);
        pMVar2 = this_01;
        if (bVar3 != 0) {
          pOVar5 = (&(this->fields)._settings)
                   [(this->fields)._sharedSettings != (ObjectTransformGizmoSettings *)0x0];
          if (pOVar5 == (ObjectTransformGizmoSettings *)0x0) break;
          this_01 = this_02;
          bVar3 = ObjectTransformGizmoSettings::ObjectTransformGizmoSettings_IsObjectTransformable
                            (pOVar5,(GameObject *)this_02,(MethodInfo *)0x0);
          pMVar2 = this_01;
          if (bVar3 != 0) {
            if (this_01 == (MethodInfo *)0x0) break;
            pMVar1 = this_01;
            mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
            List_1_System_Object__Add
                      ((List_1_System_Object_ *)this_01,(Object *)this_02,
                       MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__Add_UnityEngine__GameObject_
                      );
          }
        }
      }
    }
  }
  func_?();
  func_?();
  pcVar6 = (code *)swi(3);
  pLVar7 = (List_1_UnityEngine_GameObject_ *)(*pcVar6)();
  return pLVar7;
}


/* Void MakeTransformPivotPermanent() */

void Assembly-CSharp.dll::RTG::ObjectTransformGizmo::
     ObjectTransformGizmo_MakeTransformPivotPermanent(ObjectTransformGizmo *this,MethodInfo *method)

{
  (this->fields)._isTransformPivotPermanent = 1;
  return;
}


/* Void MoveObject(GameObject, Vector3) */

void Assembly-CSharp.dll::RTG::ObjectTransformGizmo::ObjectTransformGizmo_MoveObject
               (ObjectTransformGizmo *this,GameObject *gameObject,Vector3 moveVector,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    RTG__IRTTransformGizmoListener_MethodInfo__UnityEngine__GameObject__GetComponent<RTG::IRTTransformGizmoListener>__
                   );
    func_?(&TypeInfo__RTG__IRTTransformGizmoListener);
    cRam_? = '\x01';
  }
  pOVar1 = ObjectTransformGizmo_GetObjectRestrictions(this,gameObject,(MethodInfo *)0x0);
  if (pOVar1 == (ObjectTransformGizmo_ObjectRestrictions *)0x0) {
code_?:
    if ((gameObject != (GameObject *)0x0) &&
       (this_02 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                            (gameObject,(MethodInfo *)0x0), this_02 != (Transform *)0x0)) {
      pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                         ((Vector3 *)&stack0xffffffe4,this_02,(MethodInfo *)0x0);
      uVar3 = pVVar2->x;
      uVar4 = pVVar2->y;
      value.y = moveVector.y + (float)uVar4;
      value.x = moveVector.x + (float)uVar3;
      value.z = moveVector.z + pVVar2->z;
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                (this_02,value,(MethodInfo *)0x0);
      pOVar5 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                         (gameObject,
                          RTG__IRTTransformGizmoListener_MethodInfo__UnityEngine__GameObject__GetComponent<RTG::IRTTransformGizmoListener>__
                         );
      if (pOVar5 != (Object *)0x0) {
        func_?();
      }
      return;
    }
  }
  else {
    this_00 = (this->fields)._._gizmo;
    if (this_00 != (Gizmo *)0x0) {
      item = UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::PointerEventBase`1[System::
             Object]::PointerEventBase_1_System_Object__get_pointerType
                       ((PointerEventBase_1_System_Object_ *)this_00,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      this_01 = (HashSet_1_System_UInt32_ *)(pOVar1->fields)._handleMask;
      if (this_01 != (HashSet_1_System_UInt32_ *)0x0) {
        bVar6 = System.Core.dll::System::Collections::Generic::HashSet`1[System::UInt32]::
                HashSet_1_System_UInt32__Contains
                          (this_01,(uint32_t)item,
                           MethodInfo__System__Collections__Generic__HashSet<int>__Contains_int_);
        if (bVar6 != 0) {
          return;
        }
        pBVar7 = (pOVar1->fields)._moveAxesMask;
        if (pBVar7 != (Boolean__Array *)0x0) {
          if (pBVar7->max_length == 0) goto code_?;
          if (pBVar7->vector[0] == 0) {
            moveVector.x = 0.0;
          }
          if (pBVar7 != (Boolean__Array *)0x0) {
            if (pBVar7->max_length < 2) goto code_?;
            if (pBVar7->vector[1] == 0) {
              moveVector.y = 0.0;
            }
            if (pBVar7 != (Boolean__Array *)0x0) {
              if (pBVar7->max_length < 3) goto code_?;
              if (pBVar7->vector[2] == 0) {
                moveVector.z = 0.0;
              }
              goto code_?;
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


/* Void MoveObjects(Vector3) */

void Assembly-CSharp.dll::RTG::ObjectTransformGizmo::ObjectTransformGizmo_MoveObjects
               (ObjectTransformGizmo *this,Vector3 moveVector,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffbc;
  puVar5 = &stack0xffffffbc;
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
                    MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__GetEnumerator__
                   );
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
            (this->fields)._transformableParents;
  if (this_00 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
    pLVar6 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
             RegexCharClass+SingleRange]::
             List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                       (&LStack_7,this_00,
                        MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__GetEnumerator__
                       );
    method_00 = (MethodInfo *)pLVar6->_version;
    gameObject = pLVar6->_current;
    LStack_7._version = 0;
    uStack_1 = 1;
    LStack_7._current = (RegexCharClass_SingleRange)&stack0xffffffc8;
    while( true ) {
      bVar8 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
              List_1_T_Enumerator_System_Object__MoveNext
                        ((List_1_T_Enumerator_System_Object_ *)&stack0xffffffc8,
                         MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::GameObject>__MoveNext__
                        );
      if (bVar8 == 0) break;
      ObjectTransformGizmo_MoveObject(this,(GameObject *)gameObject,moveVector,(MethodInfo *)0x0);
    }
    uStack_1 = 0xffffffff;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              ((Object *)&stack0xffffffc8,
               (ExceptionArgument__Enum)
               MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::GameObject>__Dispose__
               ,method_00);
    *unaff_FS_OFFSET = uStack_3;
    return;
  }
  uVar9 = func_?();
  func_?(uVar9);
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void OnAttached() */

void Assembly-CSharp.dll::RTG::ObjectTransformGizmo::ObjectTransformGizmo_OnAttached
               (ObjectTransformGizmo *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__RTG__MonoSingleton<RTG::RTUndoRedo>__get_Get__);
    func_?(&TypeInfo__RTG__MonoSingleton<RTG::RTUndoRedo>);
    func_?(&MethodInfo__RTG__ObjectTransformGizmo__OnUndoRedoEnd_RTG__IUndoRedoAction_);
    func_?(&TypeInfo__RTG__RedoEndHandler);
    func_?(&TypeInfo__RTG__UndoEndHandler);
    cRam_? = '\x01';
  }
  if ((TypeInfo__RTG__MonoSingleton<RTG::RTUndoRedo>->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__RTG__MonoSingleton<RTG::RTUndoRedo>);
  }
  pRVar1 = (RTUndoRedo *)
           MonoSingleton`1[System::Object]::MonoSingleton_1_System_Object__get_Get
                     (MethodInfo__RTG__MonoSingleton<RTG::RTUndoRedo>__get_Get__);
  value = (UndoEndHandler *)func_?(TypeInfo__RTG__UndoEndHandler);
  UnityEngine.CoreModule.dll::UnityEngine::Windows::WebCam::
  VideoCapture+OnVideoCaptureResourceCreatedCallback::
  VideoCapture_OnVideoCaptureResourceCreatedCallback__ctor
            ((VideoCapture_OnVideoCaptureResourceCreatedCallback *)value,(Object *)this,
             MethodInfo__RTG__ObjectTransformGizmo__OnUndoRedoEnd_RTG__IUndoRedoAction_,
             (MethodInfo *)0x0);
  if (pRVar1 != (RTUndoRedo *)0x0) {
    RTUndoRedo::RTUndoRedo_add_UndoEnd(pRVar1,value,(MethodInfo *)0x0);
    pRVar1 = (RTUndoRedo *)
             MonoSingleton`1[System::Object]::MonoSingleton_1_System_Object__get_Get
                       (MethodInfo__RTG__MonoSingleton<RTG::RTUndoRedo>__get_Get__);
    object = TypeInfo__RTG__RedoEndHandler;
    value_00 = (RedoEndHandler *)func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Windows::WebCam::
    VideoCapture+OnVideoCaptureResourceCreatedCallback::
    VideoCapture_OnVideoCaptureResourceCreatedCallback__ctor
              ((VideoCapture_OnVideoCaptureResourceCreatedCallback *)value_00,(Object *)object,
               MethodInfo__RTG__ObjectTransformGizmo__OnUndoRedoEnd_RTG__IUndoRedoAction_,
               (MethodInfo *)0x0);
    if (pRVar1 != (RTUndoRedo *)0x0) {
      RTUndoRedo::RTUndoRedo_add_RedoEnd(pRVar1,value_00,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void OnDetached() */

void Assembly-CSharp.dll::RTG::ObjectTransformGizmo::ObjectTransformGizmo_OnDetached
               (ObjectTransformGizmo *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__RTG__MonoSingleton<RTG::RTUndoRedo>__get_Get__);
    func_?(&TypeInfo__RTG__MonoSingleton<RTG::RTUndoRedo>);
    func_?(&MethodInfo__RTG__ObjectTransformGizmo__OnUndoRedoEnd_RTG__IUndoRedoAction_);
    func_?(&TypeInfo__RTG__RedoEndHandler);
    func_?(&TypeInfo__RTG__UndoEndHandler);
    cRam_? = '\x01';
  }
  if ((TypeInfo__RTG__MonoSingleton<RTG::RTUndoRedo>->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__RTG__MonoSingleton<RTG::RTUndoRedo>);
  }
  pRVar1 = (RTUndoRedo *)
           MonoSingleton`1[System::Object]::MonoSingleton_1_System_Object__get_Get
                     (MethodInfo__RTG__MonoSingleton<RTG::RTUndoRedo>__get_Get__);
  value = (UndoEndHandler *)func_?(TypeInfo__RTG__UndoEndHandler);
  UnityEngine.CoreModule.dll::UnityEngine::Windows::WebCam::
  VideoCapture+OnVideoCaptureResourceCreatedCallback::
  VideoCapture_OnVideoCaptureResourceCreatedCallback__ctor
            ((VideoCapture_OnVideoCaptureResourceCreatedCallback *)value,(Object *)this,
             MethodInfo__RTG__ObjectTransformGizmo__OnUndoRedoEnd_RTG__IUndoRedoAction_,
             (MethodInfo *)0x0);
  if (pRVar1 != (RTUndoRedo *)0x0) {
    RTUndoRedo::RTUndoRedo_remove_UndoEnd(pRVar1,value,(MethodInfo *)0x0);
    pRVar1 = (RTUndoRedo *)
             MonoSingleton`1[System::Object]::MonoSingleton_1_System_Object__get_Get
                       (MethodInfo__RTG__MonoSingleton<RTG::RTUndoRedo>__get_Get__);
    object = TypeInfo__RTG__RedoEndHandler;
    value_00 = (RedoEndHandler *)func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Windows::WebCam::
    VideoCapture+OnVideoCaptureResourceCreatedCallback::
    VideoCapture_OnVideoCaptureResourceCreatedCallback__ctor
              ((VideoCapture_OnVideoCaptureResourceCreatedCallback *)value_00,(Object *)object,
               MethodInfo__RTG__ObjectTransformGizmo__OnUndoRedoEnd_RTG__IUndoRedoAction_,
               (MethodInfo *)0x0);
    if (pRVar1 != (RTUndoRedo *)0x0) {
      RTUndoRedo::RTUndoRedo_remove_RedoEnd(pRVar1,value_00,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void OnGizmoDragBegin(Int32) */

void Assembly-CSharp.dll::RTG::ObjectTransformGizmo::ObjectTransformGizmo_OnGizmoDragBegin
               (ObjectTransformGizmo *this,int32_t handleId,MethodInfo *method)

{
  pLVar1 = LocalTransformSnapshot::LocalTransformSnapshot_GetSnapshotCollection
                     ((this->fields)._targetObjects,(MethodInfo *)0x0);
  (this->fields)._preTransformSnapshots = pLVar1;
  func_?(&(this->fields)._preTransformSnapshots,pLVar1);
  pLVar2 = ObjectTransformGizmo_GetTransformableParentObjects(this,(MethodInfo *)0x0);
  (this->fields)._transformableParents = pLVar2;
  func_?(&(this->fields)._transformableParents,pLVar2);
  pAVar3 = ObjectTransformGizmo_GetTargetObjectGroupWorldAABB(&AStack_4,this,(MethodInfo *)0x0);
  fVar5 = (pAVar3->_size).y;
  fVar6 = (pAVar3->_size).z;
  fVar7 = (pAVar3->_center).x;
  fVar8 = (pAVar3->_center).y;
  fVar9 = (pAVar3->_center).z;
  bVar10 = pAVar3->_isValid;
  uVar11 = *(undefined3 *)&pAVar3->field_0x19;
  (this->fields)._targetGroupAABBOnDragBegin._size.x = (pAVar3->_size).x;
  (this->fields)._targetGroupAABBOnDragBegin._size.y = fVar5;
  (this->fields)._targetGroupAABBOnDragBegin._size.z = fVar6;
  (this->fields)._targetGroupAABBOnDragBegin._center.x = fVar7;
  (this->fields)._targetGroupAABBOnDragBegin._center.y = fVar8;
  (this->fields)._targetGroupAABBOnDragBegin._center.z = fVar9;
  (this->fields)._targetGroupAABBOnDragBegin._isValid = bVar10;
  *(undefined3 *)&(this->fields)._targetGroupAABBOnDragBegin.field_0x19 = uVar11;
  return;
}


/* Void OnGizmoDragEnd(Int32) */

void Assembly-CSharp.dll::RTG::ObjectTransformGizmo::ObjectTransformGizmo_OnGizmoDragEnd
               (ObjectTransformGizmo *this,int32_t handleId,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__get_Count__
                   );
    func_?(&TypeInfo__RTG__PostObjectTransformsChangedAction);
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields)._transformableParents;
  if (pLVar1 != (List_1_UnityEngine_GameObject_ *)0x0) {
    if ((pLVar1->fields)._size != 0) {
      preChangeTransformSnapshots = (this->fields)._preTransformSnapshots;
      postChangeTransformSnapshots =
           LocalTransformSnapshot::LocalTransformSnapshot_GetSnapshotCollection
                     ((this->fields)._targetObjects,(MethodInfo *)0x0);
      this_00 = (PostObjectTransformsChangedAction *)
                func_?(TypeInfo__RTG__PostObjectTransformsChangedAction);
      PostObjectTransformsChangedAction::PostObjectTransformsChangedAction__ctor
                (this_00,preChangeTransformSnapshots,postChangeTransformSnapshots,(MethodInfo *)0x0)
      ;
      if (this_00 == (PostObjectTransformsChangedAction *)0x0) goto code_?;
      PostObjectTransformsChangedAction::PostObjectTransformsChangedAction_Execute
                (this_00,(MethodInfo *)0x0);
    }
    ObjectTransformGizmo_RefreshPosition(this,(MethodInfo *)0x0);
    ObjectTransformGizmo_RefreshRotation(this,(MethodInfo *)0x0);
    return;
  }
code_?:
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void OnGizmoDragUpdate(Int32) */

void Assembly-CSharp.dll::RTG::ObjectTransformGizmo::ObjectTransformGizmo_OnGizmoDragUpdate
               (ObjectTransformGizmo *this,int32_t handleId,MethodInfo *method)

{
  if (((this->fields)._transformChannelFlags & 1) != 0) {
    pGVar1 = (this->fields)._._gizmo;
    if (pGVar1 == (Gizmo *)0x0) goto code_?;
    pIVar2 = UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::MouseEventBase`1[System::
             Object]::
             MouseEventBase_1_System_Object__UnityEngine_UIElements_IMouseEventInternal_get_sourcePointerEvent
                       ((MouseEventBase_1_System_Object_ *)pGVar1,(MethodInfo *)0x0);
    if (pIVar2 == (IPointerEvent *)0x1) {
      pGVar1 = (this->fields)._._gizmo;
      if (pGVar1 == (Gizmo *)0x0) goto code_?;
      pVVar3 = Gizmo::Gizmo_get_RelativeDragOffset
                         ((Vector3 *)&stack0xfffffff0,pGVar1,(MethodInfo *)0x0);
      ObjectTransformGizmo_MoveObjects(this,*pVVar3,(MethodInfo *)0x0);
    }
  }
  if (((this->fields)._transformChannelFlags & 2) != 0) {
    pGVar1 = (this->fields)._._gizmo;
    if (pGVar1 == (Gizmo *)0x0) goto code_?;
    pIVar2 = UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::MouseEventBase`1[System::
             Object]::
             MouseEventBase_1_System_Object__UnityEngine_UIElements_IMouseEventInternal_get_sourcePointerEvent
                       ((MouseEventBase_1_System_Object_ *)pGVar1,(MethodInfo *)0x0);
    if (pIVar2 == (IPointerEvent *)0x2) {
      pGVar1 = (this->fields)._._gizmo;
      if (pGVar1 == (Gizmo *)0x0) goto code_?;
      pQVar4 = Gizmo::Gizmo_get_RelativeDragRotation
                         ((Quaternion *)&stack0xffffffec,pGVar1,(MethodInfo *)0x0);
      ObjectTransformGizmo_RotateObjects(this,*pQVar4,(MethodInfo *)0x0);
    }
  }
  if (((this->fields)._transformChannelFlags & 4) != 0) {
    pGVar1 = (this->fields)._._gizmo;
    if (pGVar1 == (Gizmo *)0x0) {
code_?:
      func_?();
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pIVar2 = UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::MouseEventBase`1[System::
             Object]::
             MouseEventBase_1_System_Object__UnityEngine_UIElements_IMouseEventInternal_get_sourcePointerEvent
                       ((MouseEventBase_1_System_Object_ *)pGVar1,(MethodInfo *)0x0);
    if (pIVar2 == (IPointerEvent *)0x3) {
      ObjectTransformGizmo_ScaleObjects(this,(MethodInfo *)0x0);
    }
  }
  return;
}


/* Void OnUndoRedoEnd(IUndoRedoAction) */

void Assembly-CSharp.dll::RTG::ObjectTransformGizmo::ObjectTransformGizmo_OnUndoRedoEnd
               (ObjectTransformGizmo *this,IUndoRedoAction *action,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__PostObjectTransformsChangedAction);
    cRam_? = '\x01';
  }
  if (((action != (IUndoRedoAction *)0x0) &&
      ((TypeInfo__RTG__PostObjectTransformsChangedAction->_1).naturalAligment <=
       (action->klass->_1).naturalAligment)) &&
     ((action->klass->_1).typeHierarchy
      [(TypeInfo__RTG__PostObjectTransformsChangedAction->_1).naturalAligment - 1] ==
      (Il2CppClass *)TypeInfo__RTG__PostObjectTransformsChangedAction)) {
    ObjectTransformGizmo_RefreshPosition(this,(MethodInfo *)0x0);
    ObjectTransformGizmo_RefreshRotation(this,(MethodInfo *)0x0);
  }
  return;
}


/* Void RefreshPosition() */

void Assembly-CSharp.dll::RTG::ObjectTransformGizmo::ObjectTransformGizmo_RefreshPosition
               (ObjectTransformGizmo *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__ObjectBounds);
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if ((this->fields)._targetObjects == (IEnumerable_1_UnityEngine_GameObject_ *)0x0) {
    return;
  }
  this_00 = (DataTable *)(this->fields)._._gizmo;
  if (this_00 == (DataTable *)0x0) goto code_?;
  bVar1 = System.Data.dll::System::Data::DataTable::DataTable_get_CaseSensitive
                     (this_00,(MethodInfo *)0x0);
  if (bVar1 != 0) {
    pGVar2 = (this->fields)._._gizmo;
    if (pGVar2 == (Gizmo *)0x0) goto code_?;
    if ((pGVar2->fields)._forceRefresh == 0) {
      return;
    }
  }
  pGVar2 = (this->fields)._._gizmo;
  if (pGVar2 == (Gizmo *)0x0) goto code_?;
  this_01 = (pGVar2->fields)._transform;
  if ((this->fields)._transformPivot == 0) {
code_?:
    method_00 = (MethodInfo *)0x0;
code_?:
    pAVar3 = ObjectTransformGizmo_GetTargetObjectGroupWorldAABB
                        ((AABB *)&stack0xffffffc4,this,method_00);
    fVar4 = (pAVar3->_center).x;
    fVar5 = (pAVar3->_center).y;
    uVar6 = (pAVar3->_center).z;
    fStack_7 = (float)uVar6;
code_?:
    if (this_01 == (GizmoTransform *)0x0) goto code_?;
    uVar8 = CONCAT44(fVar5,fVar4);
code_?:
    value.z = fStack_7;
    value.x = (float)(int)uVar8;
    value.y = (float)(int)((ulonglong)uVar8 >> 0x20);
    GizmoTransform::GizmoTransform_set_Position3D(this_01,value,(MethodInfo *)0x0);
  }
  else {
    pGVar9 = (this->fields)._targetPivotObject;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                       ((Object_1 *)pGVar9,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar1 != 0) goto code_?;
    if ((this->fields)._transformPivot == 1) {
      pGVar9 = (this->fields)._targetPivotObject;
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                         ((Object_1 *)pGVar9,(Object_1 *)0x0,(MethodInfo *)0x0);
      if (bVar1 != 0) goto code_?;
      pGVar9 = (this->fields)._targetPivotObject;
      if (((pGVar9 == (GameObject *)0x0) ||
          (pTVar10 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                               (pGVar9,(MethodInfo *)0x0), pTVar10 == (Transform *)0x0)) ||
         (pVVar11 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                              ((Vector3 *)&stack0xfffffff0,pTVar10,(MethodInfo *)0x0),
         this_01 == (GizmoTransform *)0x0)) goto code_?;
      uVar8._0_4_ = pVVar11->x;
      uVar8._4_4_ = pVVar11->y;
      fStack_7 = pVVar11->z;
      goto code_?;
    }
    if ((this->fields)._transformPivot == 2) {
      pGVar9 = (this->fields)._targetPivotObject;
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      method_00 = (MethodInfo *)0x0;
      bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                         ((Object_1 *)pGVar9,(Object_1 *)0x0,(MethodInfo *)0x0);
      if (bVar1 != 0) goto code_?;
      pOVar12 = ObjectTransformGizmo_GetObjectBoundsQConfig
                          ((ObjectBounds_QueryConfig *)&stack0xffffffec,in_stack_13,
                           (MethodInfo *)0x0);
      pGVar9 = (this->fields)._targetPivotObject;
      iVar14 = pOVar12->ObjectTypes;
      fVar5 = (pOVar12->NoVolumeSize).x;
      fVar4 = (pOVar12->NoVolumeSize).y;
      fVar15 = (pOVar12->NoVolumeSize).z;
      if ((TypeInfo__RTG__ObjectBounds->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__RTG__ObjectBounds);
      }
      queryConfig.NoVolumeSize.x = fVar5;
      queryConfig.ObjectTypes = iVar14;
      queryConfig.NoVolumeSize.y = fVar4;
      queryConfig.NoVolumeSize.z = fVar15;
      pAVar3 = ObjectBounds::ObjectBounds_CalcWorldAABB
                          ((AABB *)&stack0xffffffc4,pGVar9,queryConfig,(MethodInfo *)0x0);
      fVar4 = (pAVar3->_center).x;
      uVar16 = (pAVar3->_center).y;
      uVar17 = (pAVar3->_center).z;
      fVar5 = (float)uVar16;
      fStack_7 = (float)uVar17;
      if ((char)*(undefined4 *)&pAVar3->_isValid == '\0') goto code_?;
      goto code_?;
    }
  }
code_?:
  if ((this->fields)._transformPivot == 3) {
    if (this_01 != (GizmoTransform *)0x0) {
      GizmoTransform::GizmoTransform_set_Position3D
                (this_01,(this->fields)._customWorldPivot,(MethodInfo *)0x0);
      return;
    }
  }
  else {
    if ((this->fields)._transformPivot != 4) {
      return;
    }
    pGVar9 = (this->fields)._targetPivotObject;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                       ((Object_1 *)pGVar9,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar1 == 0) {
      pGVar9 = (this->fields)._targetPivotObject;
      if (pGVar9 != (GameObject *)0x0) {
        pTVar10 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                            (pGVar9,(MethodInfo *)0x0);
        pVVar11 = ObjectTransformGizmo_GetObjectCustomLocalPivot
                            ((Vector3 *)&stack0xfffffff0,this,(this->fields)._targetPivotObject,
                             (MethodInfo *)0x0);
        if ((pTVar10 != (Transform *)0x0) &&
           (pVVar11 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_TransformPoint
                                ((Vector3 *)&stack0xfffffff0,pTVar10,*pVVar11,(MethodInfo *)0x0),
           this_01 != (GizmoTransform *)0x0)) {
          GizmoTransform::GizmoTransform_set_Position3D(this_01,*pVVar11,(MethodInfo *)0x0);
          return;
        }
      }
    }
    else {
      pAVar3 = ObjectTransformGizmo_GetTargetObjectGroupWorldAABB
                          ((AABB *)&stack0xffffffc4,this,(MethodInfo *)0x0);
      uVar18 = (pAVar3->_center).z;
      uVar19 = (pAVar3->_center).x;
      uVar20 = (pAVar3->_center).y;
      value_00.y = (float)uVar20;
      value_00.x = (float)uVar19;
      if (this_01 != (GizmoTransform *)0x0) {
        value_00.z = (float)uVar18;
        GizmoTransform::GizmoTransform_set_Position3D(this_01,value_00,(MethodInfo *)0x0);
        return;
      }
    }
  }
code_?:
  func_?();
  pcVar21 = (code *)swi(3);
  (*pcVar21)();
  return;
}


/* Void RefreshPositionAndRotation() */

void Assembly-CSharp.dll::RTG::ObjectTransformGizmo::ObjectTransformGizmo_RefreshPositionAndRotation
               (ObjectTransformGizmo *this,MethodInfo *method)

{
  ObjectTransformGizmo_RefreshPosition(this,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if (*(int *)(in_stack_1 + 0x18) == 0) {
    return;
  }
  if (*(DataTable **)(in_stack_1 + 8) != (DataTable *)0x0) {
    method_00 = (MethodInfo *)&UNK_?;
    bVar2 = System.Data.dll::System::Data::DataTable::DataTable_get_CaseSensitive
                      (*(DataTable **)(in_stack_1 + 8),(MethodInfo *)0x0);
    if (bVar2 != 0) {
      if (*(int *)(in_stack_1 + 8) == 0) goto code_?;
      if (*(char *)(*(int *)(in_stack_1 + 8) + 0x55) == '\0') {
        return;
      }
    }
    if (*(int *)(in_stack_1 + 8) != 0) {
      this_00 = *(GizmoTransform **)(*(int *)(in_stack_1 + 8) + 0xf8);
      if (*(int *)(in_stack_1 + 0x44) == 0) {
        if (cRam_? == '\0') {
          func_?(&TypeInfo__UnityEngine__Quaternion);
          cRam_? = '\x01';
        }
        if (this_00 != (GizmoTransform *)0x0) {
          GizmoTransform::GizmoTransform_set_Rotation3D
                    (this_00,TypeInfo__UnityEngine__Quaternion->static_fields->identityQuaternion,
                     (MethodInfo *)0x0);
          return;
        }
      }
      else {
        x = *(Object_1 **)(in_stack_1 + 0x1c);
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__UnityEngine__Object);
        }
        bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                          (x,(Object_1 *)0x0,(MethodInfo *)0x0);
        if (bVar2 == 0) {
          if ((*(GameObject **)(in_stack_1 + 0x1c) == (GameObject *)0x0) ||
             (this_01 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                        GameObject_get_transform
                                  (*(GameObject **)(in_stack_1 + 0x1c),(MethodInfo *)0x0),
             this_01 == (Transform *)0x0)) goto code_?;
          pQVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                             ((Quaternion *)&stack0xfffffff4,this_01,(MethodInfo *)0x0);
        }
        else {
          pQVar3 = MVWorldObject.dll::MV::WorldObject::MVWorldObject::
                   MVWorldObject_get_WorldRotation
                             ((Quaternion *)&stack0xfffffff4,(MVWorldObject *)0x0,method_00);
        }
        if (this_00 != (GizmoTransform *)0x0) {
          GizmoTransform::GizmoTransform_set_Rotation3D(this_00,*pQVar3,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void RefreshRotation() */

void Assembly-CSharp.dll::RTG::ObjectTransformGizmo::ObjectTransformGizmo_RefreshRotation
               (ObjectTransformGizmo *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if ((this->fields)._targetObjects == (IEnumerable_1_UnityEngine_GameObject_ *)0x0) {
    return;
  }
  this_00 = (DataTable *)(this->fields)._._gizmo;
  if (this_00 != (DataTable *)0x0) {
    method_00 = (MethodInfo *)&UNK_?;
    bVar1 = System.Data.dll::System::Data::DataTable::DataTable_get_CaseSensitive
                      (this_00,(MethodInfo *)0x0);
    if (bVar1 != 0) {
      pGVar2 = (this->fields)._._gizmo;
      if (pGVar2 == (Gizmo *)0x0) goto code_?;
      if ((pGVar2->fields)._forceRefresh == 0) {
        return;
      }
    }
    pGVar2 = (this->fields)._._gizmo;
    if (pGVar2 != (Gizmo *)0x0) {
      this_01 = (pGVar2->fields)._transform;
      if ((this->fields)._transformSpace == 0) {
        if (cRam_? == '\0') {
          func_?(&TypeInfo__UnityEngine__Quaternion);
          cRam_? = '\x01';
        }
        if (this_01 != (GizmoTransform *)0x0) {
          GizmoTransform::GizmoTransform_set_Rotation3D
                    (this_01,TypeInfo__UnityEngine__Quaternion->static_fields->identityQuaternion,
                     (MethodInfo *)0x0);
          return;
        }
      }
      else {
        pGVar3 = (this->fields)._targetPivotObject;
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__UnityEngine__Object);
        }
        bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                          ((Object_1 *)pGVar3,(Object_1 *)0x0,(MethodInfo *)0x0);
        if (bVar1 == 0) {
          pGVar3 = (this->fields)._targetPivotObject;
          if ((pGVar3 == (GameObject *)0x0) ||
             (this_02 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                        GameObject_get_transform(pGVar3,(MethodInfo *)0x0),
             this_02 == (Transform *)0x0)) goto code_?;
          pQVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                             (&QStack_5,this_02,(MethodInfo *)0x0);
        }
        else {
          pQVar4 = MVWorldObject.dll::MV::WorldObject::MVWorldObject::
                   MVWorldObject_get_WorldRotation(&QStack_5,(MVWorldObject *)0x0,method_00);
        }
        if (this_01 != (GizmoTransform *)0x0) {
          GizmoTransform::GizmoTransform_set_Rotation3D(this_01,*pQVar4,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void RegisterObjectRestrictions(GameObject, ObjectTransformGizmo+ObjectRestrictions) */

void Assembly-CSharp.dll::RTG::ObjectTransformGizmo::ObjectTransformGizmo_RegisterObjectRestrictions
               (ObjectTransformGizmo *this,GameObject *targetObject,
               ObjectTransformGizmo_ObjectRestrictions *restrictions,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::GameObject,_RTG::ObjectTransformGizmo::ObjectRestrictions>__Add_UnityEngine__GameObject__RTG__ObjectTransformGizmo__ObjectRestrictions_
                   );
    cRam_? = '\x01';
  }
  bVar1 = ObjectTransformGizmo_ContainsRestrictionsForObject(this,targetObject,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    this_00 = (this->fields)._objectToRestrictions;
    if (this_00 ==
        (Dictionary_2_UnityEngine_GameObject_RTG_ObjectTransformGizmo_ObjectRestrictions_ *)0x0) {
      func_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              ((Dictionary_2_System_Object_System_Object_ *)this_00,(Object *)targetObject,
               (Object *)restrictions,
               MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::GameObject,_RTG::ObjectTransformGizmo::ObjectRestrictions>__Add_UnityEngine__GameObject__RTG__ObjectTransformGizmo__ObjectRestrictions_
              );
  }
  return;
}


/* Void RegisterObjectRestrictions(List`1[UnityEngine.GameObject],
   ObjectTransformGizmo+ObjectRestrictions) */

void Assembly-CSharp.dll::RTG::ObjectTransformGizmo::
     ObjectTransformGizmo_RegisterObjectRestrictions_1
               (ObjectTransformGizmo *this,List_1_UnityEngine_GameObject_ *targetObjects,
               ObjectTransformGizmo_ObjectRestrictions *restrictions,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffbc;
  puVar5 = &stack0xffffffbc;
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
                    MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__GetEnumerator__
                   );
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  LStack_6._list = (List_1_System_Object_ *)0x0;
  LStack_6._index = 0;
  LStack_6._version = 0;
  LStack_6._current = (Object *)0x0;
  if (targetObjects != (List_1_UnityEngine_GameObject_ *)0x0) {
    pLVar7 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
             RegexCharClass+SingleRange]::
             List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                       (&LStack_8,
                        (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                        targetObjects,
                        MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__GetEnumerator__
                       );
    LStack_6._list = (List_1_System_Object_ *)pLVar7->_list;
    LStack_6._index = pLVar7->_index;
    LStack_6._version = pLVar7->_version;
    LStack_6._current = *(Object **)&pLVar7->_current;
    LStack_8._version = 0;
    uStack_1 = 1;
    LStack_8._current = (RegexCharClass_SingleRange)&LStack_6;
    while( true ) {
      do {
        bVar9 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
                List_1_T_Enumerator_System_Object__MoveNext
                          (&LStack_6,
                           MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::GameObject>__MoveNext__
                          );
        targetObject = LStack_6._current;
        if (bVar9 == 0) {
          uStack_1 = 0xffffffff;
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                    ((Object *)&LStack_6,
                     (ExceptionArgument__Enum)
                     MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::GameObject>__Dispose__
                     ,unaff_EBX);
          *unaff_FS_OFFSET = uStack_3;
          return;
        }
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        bVar9 = ObjectTransformGizmo_ContainsRestrictionsForObject
                          (this,(GameObject *)targetObject,(MethodInfo *)0x0);
      } while (bVar9 != 0);
      this_00 = (this->fields)._objectToRestrictions;
      if (this_00 ==
          (Dictionary_2_UnityEngine_GameObject_RTG_ObjectTransformGizmo_ObjectRestrictions_ *)0x0)
      break;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__Add
                ((Dictionary_2_System_Object_System_Object_ *)this_00,targetObject,
                 (Object *)restrictions,
                 MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::GameObject,_RTG::ObjectTransformGizmo::ObjectRestrictions>__Add_UnityEngine__GameObject__RTG__ObjectTransformGizmo__ObjectRestrictions_
                );
    }
  }
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void RotateObject(GameObject, Quaternion, Vector3) */

void Assembly-CSharp.dll::RTG::ObjectTransformGizmo::ObjectTransformGizmo_RotateObject
               (ObjectTransformGizmo *this,GameObject *gameObject,Quaternion rotation,
               Vector3 rotationPivot,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    RTG__IRTTransformGizmoListener_MethodInfo__UnityEngine__GameObject__GetComponent<RTG::IRTTransformGizmoListener>__
                   );
    func_?(&TypeInfo__RTG__IRTTransformGizmoListener);
    cRam_? = '\x01';
  }
  pOVar1 = ObjectTransformGizmo_GetObjectRestrictions(this,gameObject,(MethodInfo *)0x0);
  if (pOVar1 != (ObjectTransformGizmo_ObjectRestrictions *)0x0) {
    this_00 = (this->fields)._._gizmo;
    if (this_00 == (Gizmo *)0x0) goto code_?;
    item = UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::PointerEventBase`1[System::
           Object]::PointerEventBase_1_System_Object__get_pointerType
                     ((PointerEventBase_1_System_Object_ *)this_00,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    this_01 = (HashSet_1_System_UInt32_ *)(pOVar1->fields)._handleMask;
    if (this_01 == (HashSet_1_System_UInt32_ *)0x0) goto code_?;
    bVar2 = System.Core.dll::System::Collections::Generic::HashSet`1[System::UInt32]::
            HashSet_1_System_UInt32__Contains
                      (this_01,(uint32_t)item,
                       MethodInfo__System__Collections__Generic__HashSet<int>__Contains_int_);
    if (bVar2 != 0) {
      return;
    }
  }
  if (gameObject != (GameObject *)0x0) {
    transform = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                          (gameObject,(MethodInfo *)0x0);
    TransformEx::TransformEx_RotateAroundPivot(transform,rotation,rotationPivot,(MethodInfo *)0x0);
    pOStack3 =
         UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                   (gameObject,
                    RTG__IRTTransformGizmoListener_MethodInfo__UnityEngine__GameObject__GetComponent<RTG::IRTTransformGizmoListener>__
                   );
    if (pOStack3 != (Object *)0x0) {
      pGStack4 = (this->fields)._._gizmo;
      pIStack5 = TypeInfo__RTG__IRTTransformGizmoListener;
      func_?();
    }
    return;
  }
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void RotateObjects(Quaternion) */

void Assembly-CSharp.dll::RTG::ObjectTransformGizmo::ObjectTransformGizmo_RotateObjects
               (ObjectTransformGizmo *this,Quaternion rotation,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffff64;
  method_00 = unaff_EDI;
  puVar5 = &stack0xffffff64;
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
                    MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__GetEnumerator__
                   );
    func_?(&TypeInfo__RTG__ObjectBounds);
    cRam_? = '\x01';
    method_00 = unaff_EDI;
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  _Stack_74.dummy = (void *)0x0;
  _Stack_70.dummy = (void *)0x0;
  _Stack_6c.dummy = (void *)0x0;
  RStack_6.First = 0;
  RStack_6.Last = 0;
  if ((this->fields)._transformPivot == 0) {
    pLVar7 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
             (this->fields)._transformableParents;
    if (pLVar7 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
code_?:
      uVar8 = func_?();
      uVar8 = func_?(uVar8);
      uVar8 = func_?(uVar8);
      func_?(uVar8);
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    p_Var10 = (_union_86 *)
              mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
              RegexCharClass+SingleRange]::
              List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                        ((List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                          *)auStack_10,pLVar7,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__GetEnumerator__
                        );
    RStack_11 = (RegexCharClass_SingleRange)&_Stack_74;
    uStack_12._0_2_ = 0;
    uStack_12._2_1_ = 0;
    uStack_12._3_1_ = 0;
    _Stack_74 = *p_Var10;
    _Stack_70 = p_Var10[1];
    _Stack_6c = p_Var10[2];
    RStack_6 = (RegexCharClass_SingleRange)p_Var10[3].typeHandle;
    uStack_1 = 1;
    while( true ) {
      bVar13 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
              List_1_T_Enumerator_System_Object__MoveNext
                        ((List_1_T_Enumerator_System_Object_ *)&_Stack_74,
                         MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::GameObject>__MoveNext__
                        );
      if (bVar13 == 0) break;
      ObjectTransformGizmo_RotateObject
                (this,(GameObject *)RStack_6,rotation,
                 (this->fields)._targetGroupAABBOnDragBegin._center,(MethodInfo *)0x0);
    }
  }
  else if ((this->fields)._transformPivot == 1) {
    pLVar7 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
             (this->fields)._transformableParents;
    if (pLVar7 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)
    goto code_?;
    p_Var10 = (_union_86 *)
              mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
              RegexCharClass+SingleRange]::
              List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                        ((List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                          *)auStack_10,pLVar7,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__GetEnumerator__
                        );
    p_Stack_34 = &_Stack_74;
    pIStack_14 = (Il2CppClass *)0x0;
    _Stack_74 = *p_Var10;
    _Stack_70 = p_Var10[1];
    _Stack_6c = p_Var10[2];
    RStack_6 = (RegexCharClass_SingleRange)p_Var10[3].typeHandle;
    uStack_1 = 4;
    while( true ) {
      bVar13 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
              List_1_T_Enumerator_System_Object__MoveNext
                        ((List_1_T_Enumerator_System_Object_ *)&_Stack_74,
                         MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::GameObject>__MoveNext__
                        );
      if (bVar13 == 0) break;
      RStack_11 = RStack_6;
      if (RStack_6 == (RegexCharClass_SingleRange)0x0) goto code_?;
      this_00 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                          ((GameObject *)RStack_6,(MethodInfo *)0x0);
      if (this_00 == (Transform *)0x0) goto code_?;
      pVVar15 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                          ((Vector3 *)(auStack_16 + 4),this_00,(MethodInfo *)0x0);
      method_00 = (MethodInfo *)pVVar15->y;
      ObjectTransformGizmo_RotateObject
                (this,(GameObject *)RStack_11,rotation,*pVVar15,(MethodInfo *)0x0);
    }
  }
  else if ((this->fields)._transformPivot == 3) {
    pLVar7 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
             (this->fields)._transformableParents;
    if (pLVar7 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)
    goto code_?;
    p_Var10 = (_union_86 *)
              mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
              RegexCharClass+SingleRange]::
              List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                        ((List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                          *)auStack_10,pLVar7,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__GetEnumerator__
                        );
    p_Stack_34 = &_Stack_74;
    pIStack_14 = (Il2CppClass *)0x0;
    _Stack_74 = *p_Var10;
    _Stack_70 = p_Var10[1];
    _Stack_6c = p_Var10[2];
    RStack_6 = (RegexCharClass_SingleRange)p_Var10[3].typeHandle;
    uStack_1 = 7;
    while( true ) {
      bVar13 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
              List_1_T_Enumerator_System_Object__MoveNext
                        ((List_1_T_Enumerator_System_Object_ *)&_Stack_74,
                         MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::GameObject>__MoveNext__
                        );
      if (bVar13 == 0) break;
      ObjectTransformGizmo_RotateObject
                (this,(GameObject *)RStack_6,rotation,(this->fields)._customWorldPivot,
                 (MethodInfo *)0x0);
    }
  }
  else if ((this->fields)._transformPivot == 2) {
    pOVar17 = ObjectTransformGizmo_GetObjectBoundsQConfig
                        ((ObjectBounds_QueryConfig *)auStack_10,this,(MethodInfo *)0x0);
    auStack_10._0_4_ = pOVar17->ObjectTypes;
    auStack_10._4_4_ = (pOVar17->NoVolumeSize).x;
    fStack_18 = (pOVar17->NoVolumeSize).y;
    RStack_19 = (RegexCharClass_SingleRange)(pOVar17->NoVolumeSize).z;
    pLVar7 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
             (this->fields)._transformableParents;
    if (pLVar7 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)
    goto code_?;
    method_00 = (MethodInfo *)auStack_16;
    p_Var10 = (_union_86 *)
              mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
              RegexCharClass+SingleRange]::
              List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                        ((List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                          *)method_00,pLVar7,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__GetEnumerator__
                        );
    p_Stack_34 = &_Stack_74;
    pIStack_14 = (Il2CppClass *)0x0;
    _Stack_74 = *p_Var10;
    _Stack_70 = p_Var10[1];
    _Stack_6c = p_Var10[2];
    RStack_6 = (RegexCharClass_SingleRange)p_Var10[3].typeHandle;
    uStack_1 = 10;
    while( true ) {
      bVar13 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
              List_1_T_Enumerator_System_Object__MoveNext
                        ((List_1_T_Enumerator_System_Object_ *)&_Stack_74,
                         MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::GameObject>__MoveNext__
                        );
      if (bVar13 == 0) break;
      RStack_11 = RStack_6;
      if ((TypeInfo__RTG__ObjectBounds->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__RTG__ObjectBounds);
      }
      queryConfig.NoVolumeSize.x = (float)auStack_10._4_4_;
      queryConfig.ObjectTypes = auStack_10._0_4_;
      queryConfig.NoVolumeSize.y = fStack_18;
      queryConfig.NoVolumeSize.z = (float)RStack_19;
      pAVar20 = ObjectBounds::ObjectBounds_CalcWorldAABB
                          ((AABB *)&stack0xffffff70,(GameObject *)RStack_11,queryConfig,
                           (MethodInfo *)0x0);
      fStack_21 = (pAVar20->_size).x;
      fStack_22 = (pAVar20->_size).y;
      fStack_23 = (pAVar20->_size).z;
      pVVar15 = &pAVar20->_center;
      auStack_16._0_4_ = pVVar15->x;
      uVar24 = (pAVar20->_center).y;
      uVar25 = (pAVar20->_center).z;
      uVar26 = pVVar15->x;
      uVar27 = pVVar15->y;
      rotationPivot.y = (float)uVar27;
      rotationPivot.x = (float)uVar26;
      pcStack_28 = *(char **)&pAVar20->_isValid;
      auStack_16._4_4_ = uVar24;
      pIStack_29 = (InvokerMethod)uVar25;
      if ((char)pcStack_28 != '\0') {
        rotationPivot.z = (float)uVar25;
        method_00 = (MethodInfo *)rotation.y;
        ObjectTransformGizmo_RotateObject
                  (this,(GameObject *)RStack_11,rotation,rotationPivot,(MethodInfo *)0x0);
      }
    }
  }
  else {
    if ((this->fields)._transformPivot != 4) goto code_?;
    pLVar30 = (this->fields)._transformableParents;
    if (pLVar30 == (List_1_UnityEngine_GameObject_ *)0x0) goto code_?;
    p_Var10 = (_union_86 *)
              func_?(auStack_10,pLVar30,
                              MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__GetEnumerator__
                             );
    p_Stack_34 = &_Stack_74;
    pIStack_14 = (Il2CppClass *)0x0;
    _Stack_74 = *p_Var10;
    _Stack_70 = p_Var10[1];
    _Stack_6c = p_Var10[2];
    RStack_6 = (RegexCharClass_SingleRange)p_Var10[3].typeHandle;
    uStack_1 = 0xd;
    while( true ) {
      bVar13 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
              List_1_T_Enumerator_System_Object__MoveNext
                        ((List_1_T_Enumerator_System_Object_ *)&_Stack_74,
                         MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::GameObject>__MoveNext__
                        );
      gameObj = RStack_6;
      if (bVar13 == 0) break;
      if (RStack_6 == (RegexCharClass_SingleRange)0x0) goto code_?;
      RStack_11 = (RegexCharClass_SingleRange)
                  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                            ((GameObject *)RStack_6,(MethodInfo *)0x0);
      pVVar15 = ObjectTransformGizmo_GetObjectCustomLocalPivot
                          ((Vector3 *)(auStack_16 + 4),this,(GameObject *)gameObj,(MethodInfo *)0x0)
      ;
      if (RStack_11 == (RegexCharClass_SingleRange)0x0) goto code_?;
      pVVar15 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_TransformPoint
                          ((Vector3 *)(auStack_10 + 4),(Transform *)RStack_11,*pVVar15,
                           (MethodInfo *)0x0);
      method_00 = (MethodInfo *)rotation.z;
      ObjectTransformGizmo_RotateObject
                (this,(GameObject *)gameObj,rotation,*pVVar15,(MethodInfo *)0x0);
    }
  }
  uStack_1 = 0xffffffff;
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)&_Stack_74,
             (ExceptionArgument__Enum)
             MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::GameObject>__Dispose__
             ,method_00);
code_?:
  *unaff_FS_OFFSET = uStack_3;
  return;
}


/* Void ScaleObject(GameObject, Vector3) */

void Assembly-CSharp.dll::RTG::ObjectTransformGizmo::ObjectTransformGizmo_ScaleObject
               (ObjectTransformGizmo *this,GameObject *gameObject,Vector3 scalePivot,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    RTG__IRTTransformGizmoListener_MethodInfo__UnityEngine__GameObject__GetComponent<RTG::IRTTransformGizmoListener>__
                   );
    func_?(&TypeInfo__RTG__IRTTransformGizmoListener);
    cRam_? = '\x01';
  }
  if (gameObject != (GameObject *)0x0) {
    transform = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                          (gameObject,(MethodInfo *)0x0);
    pGVar1 = (this->fields)._._gizmo;
    if (pGVar1 != (Gizmo *)0x0) {
      pVVar2 = Gizmo::Gizmo_get_RelativeDragScale
                          ((Vector3 *)&stack0xffffffd0,pGVar1,(MethodInfo *)0x0);
      uVar3 = pVVar2->x;
      uVar4 = pVVar2->y;
      fVar5 = pVVar2->z;
      uVar6 = uVar4;
      uVar7 = uVar3;
      pOVar8 = ObjectTransformGizmo_GetObjectRestrictions(this,gameObject,(MethodInfo *)0x0);
      uStack_9 = uVar4;
      if (pOVar8 == (ObjectTransformGizmo_ObjectRestrictions *)0x0) {
code_?:
        if ((this->fields)._scaleConstraintEnabled == 0) {
          scaleFactor.y = (float)uStack_9;
          scaleFactor.x = (float)uVar7;
          scaleFactor.z = fVar5;
          TransformEx::TransformEx_ScaleFromPivot
                    (transform,scaleFactor,scalePivot,(MethodInfo *)0x0);
code_?:
          pOVar10 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                              (gameObject,
                               RTG__IRTTransformGizmoListener_MethodInfo__UnityEngine__GameObject__GetComponent<RTG::IRTTransformGizmoListener>__
                              );
          if (pOVar10 != (Object *)0x0) {
            func_?();
          }
          return;
        }
        pGVar1 = (this->fields)._._gizmo;
        if (pGVar1 != (Gizmo *)0x0) {
          pVVar2 = Gizmo::Gizmo_get_TotalDragScale(&VStack_11,pGVar1,(MethodInfo *)0x0);
          uVar12 = pVVar2->x;
          uVar13 = pVVar2->y;
          if ((float)uVar12 < 0.0) {
            uVar3 = 0x3f800000;
            uVar7 = 0x3f800000;
            uStack_9 = uVar6;
          }
          if ((float)uVar13 < 0.0) {
            uStack_9 = 0x3f800000;
            uVar7 = uVar3;
          }
          if (pVVar2->z < 0.0) {
            fVar5 = 1.0;
          }
          scaleFactor_00.y = (float)uStack_9;
          scaleFactor_00.x = (float)uVar7;
          scaleFactor_00.z = fVar5;
          TransformEx::TransformEx_ScaleFromPivot
                    (transform,scaleFactor_00,scalePivot,(MethodInfo *)0x0);
          if (transform != (Transform *)0x0) {
            pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localScale
                                (&VStack_11,transform,(MethodInfo *)0x0);
            fVar14 = pVVar2->x;
            fVar15 = pVVar2->y;
            uVar16 = (this->fields)._minPositiveScale.x;
            uVar17 = (this->fields)._minPositiveScale.y;
            fVar18 = (this->fields)._minPositiveScale.z;
            fVar5 = pVVar2->z;
            if (pVVar2->z <= fVar18) {
              fVar5 = fVar18;
            }
            if (fVar14 <= (float)uVar16) {
              fVar14 = (float)uVar16;
            }
            if (fVar15 <= (float)uVar17) {
              fVar15 = (float)uVar17;
            }
            value.y = fVar15;
            value.x = fVar14;
            value.z = fVar5;
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
                      (transform,value,(MethodInfo *)0x0);
            goto code_?;
          }
        }
      }
      else {
        pGVar1 = (this->fields)._._gizmo;
        if (pGVar1 != (Gizmo *)0x0) {
          VStack_11.z = (float)&UNK_?;
          item = UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
                 PointerEventBase`1[System::Object]::
                 PointerEventBase_1_System_Object__get_pointerType
                           ((PointerEventBase_1_System_Object_ *)pGVar1,(MethodInfo *)0x0);
          uVar3 = uVar7;
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
            uVar3 = uVar7;
          }
          this_00 = (HashSet_1_System_UInt32_ *)(pOVar8->fields)._handleMask;
          if (this_00 != (HashSet_1_System_UInt32_ *)0x0) {
            bVar19 = System.Core.dll::System::Collections::Generic::HashSet`1[System::UInt32]::
                     HashSet_1_System_UInt32__Contains
                               (this_00,(uint32_t)item,
                                MethodInfo__System__Collections__Generic__HashSet<int>__Contains_int_
                               );
            if (bVar19 != 0) {
              return;
            }
            pBVar20 = (pOVar8->fields)._scaleAxesMask;
            if (pBVar20 != (Boolean__Array *)0x0) {
              if (pBVar20->max_length == 0) goto code_?;
              if (pBVar20->vector[0] == 0) {
                uVar3 = 0x3f800000;
              }
              if (pBVar20 != (Boolean__Array *)0x0) {
                if (pBVar20->max_length < 2) goto code_?;
                uVar6 = uVar4;
                if (pBVar20->vector[1] == 0) {
                  uVar6 = 0x3f800000;
                }
                if (pBVar20 != (Boolean__Array *)0x0) {
                  if (pBVar20->max_length < 3) goto code_?;
                  uVar7 = uVar3;
                  uStack_9 = uVar6;
                  if (pBVar20->vector[2] == 0) {
                    fVar5 = 1.0;
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
  func_?();
code_?:
  func_?();
  pcVar21 = (code *)swi(3);
  (*pcVar21)();
  return;
}


/* Void ScaleObjects() */

void Assembly-CSharp.dll::RTG::ObjectTransformGizmo::ObjectTransformGizmo_ScaleObjects
               (ObjectTransformGizmo *this,MethodInfo *method)

{
  uStack_1._0_1_ = 0xff;
  uStack_1._1_3_ = 0xffffff;
  puStack_2 = &DAT_?;
  fStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (float)&fStack_3;
  puStack_4 = &stack0xffffff64;
  method_00 = unaff_EDI;
  puVar5 = &stack0xffffff64;
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
                    MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__GetEnumerator__
                   );
    func_?(&TypeInfo__RTG__ObjectBounds);
    cRam_? = '\x01';
    method_00 = unaff_EDI;
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  LStack_6._list = (List_1_System_Object_ *)0x0;
  LStack_6._index = 0;
  LStack_6._version = 0;
  LStack_6._current = (Object *)0x0;
  if ((this->fields)._transformPivot == 0) {
    pLVar7 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
             (this->fields)._transformableParents;
    if (pLVar7 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
code_?:
      uVar8 = func_?();
      uVar8 = func_?(uVar8);
      uVar8 = func_?(uVar8);
      func_?(uVar8);
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    pLVar10 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
              RegexCharClass+SingleRange]::
              List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                        ((List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                          *)auStack_11,pLVar7,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__GetEnumerator__
                        );
    RStack_12 = (RegexCharClass_SingleRange)&LStack_6;
    fStack_13 = 0.0;
    LStack_6._list = (List_1_System_Object_ *)pLVar10->_list;
    LStack_6._index = pLVar10->_index;
    LStack_6._version = pLVar10->_version;
    LStack_6._current = *(Object **)&pLVar10->_current;
    uStack_1._0_1_ = 1;
    uStack_1._1_3_ = 0;
    while( true ) {
      bVar14 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
              List_1_T_Enumerator_System_Object__MoveNext
                        (&LStack_6,
                         MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::GameObject>__MoveNext__
                        );
      if (bVar14 == 0) break;
      ObjectTransformGizmo_ScaleObject
                (this,(GameObject *)LStack_6._current,
                 (this->fields)._targetGroupAABBOnDragBegin._center,(MethodInfo *)0x0);
    }
  }
  else if ((this->fields)._transformPivot == 1) {
    pLVar7 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
             (this->fields)._transformableParents;
    if (pLVar7 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)
    goto code_?;
    pLVar10 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
              RegexCharClass+SingleRange]::
              List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                        ((List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                          *)auStack_11,pLVar7,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__GetEnumerator__
                        );
    pLStack_15 = &LStack_6;
    iStack_16 = 0;
    LStack_6._list = (List_1_System_Object_ *)pLVar10->_list;
    LStack_6._index = pLVar10->_index;
    LStack_6._version = pLVar10->_version;
    LStack_6._current = *(Object **)&pLVar10->_current;
    uStack_1._0_1_ = 4;
    uStack_1._1_3_ = 0;
    while( true ) {
      bVar14 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
              List_1_T_Enumerator_System_Object__MoveNext
                        (&LStack_6,
                         MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::GameObject>__MoveNext__
                        );
      if (bVar14 == 0) break;
      RStack_12 = (RegexCharClass_SingleRange)LStack_6._current;
      if ((RegexCharClass_SingleRange)LStack_6._current == (RegexCharClass_SingleRange)0x0)
      goto code_?;
      this_00 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                          ((GameObject *)LStack_6._current,(MethodInfo *)0x0);
      if (this_00 == (Transform *)0x0) goto code_?;
      pVVar17 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                          (&VStack_18,this_00,(MethodInfo *)0x0);
      method_00 = (ObjectTransformGizmo *)pVVar17->y;
      ObjectTransformGizmo_ScaleObject(this,(GameObject *)RStack_12,*pVVar17,(MethodInfo *)0x0);
    }
  }
  else if ((this->fields)._transformPivot == 3) {
    pLVar7 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
             (this->fields)._transformableParents;
    if (pLVar7 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)
    goto code_?;
    pLVar10 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
              RegexCharClass+SingleRange]::
              List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                        ((List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                          *)auStack_11,pLVar7,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__GetEnumerator__
                        );
    pLStack_15 = &LStack_6;
    iStack_16 = 0;
    LStack_6._list = (List_1_System_Object_ *)pLVar10->_list;
    LStack_6._index = pLVar10->_index;
    LStack_6._version = pLVar10->_version;
    LStack_6._current = *(Object **)&pLVar10->_current;
    uStack_1._0_1_ = 7;
    uStack_1._1_3_ = 0;
    while( true ) {
      bVar14 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
              List_1_T_Enumerator_System_Object__MoveNext
                        (&LStack_6,
                         MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::GameObject>__MoveNext__
                        );
      if (bVar14 == 0) break;
      ObjectTransformGizmo_ScaleObject
                (this,(GameObject *)LStack_6._current,(this->fields)._customWorldPivot,
                 (MethodInfo *)0x0);
    }
  }
  else if ((this->fields)._transformPivot == 2) {
    pOVar19 = ObjectTransformGizmo_GetObjectBoundsQConfig
                        ((ObjectBounds_QueryConfig *)auStack_11,this,(MethodInfo *)0x0);
    auStack_11._0_4_ = pOVar19->ObjectTypes;
    auStack_11._4_4_ = (pOVar19->NoVolumeSize).x;
    fStack_20 = (pOVar19->NoVolumeSize).y;
    RStack_21 = (RegexCharClass_SingleRange)(pOVar19->NoVolumeSize).z;
    pLVar7 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
             (this->fields)._transformableParents;
    if (pLVar7 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)
    goto code_?;
    method_00 = (ObjectTransformGizmo *)&pOStack_22;
    pLVar10 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
              RegexCharClass+SingleRange]::
              List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                        ((List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                          *)method_00,pLVar7,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__GetEnumerator__
                        );
    pLStack_15 = &LStack_6;
    iStack_16 = 0;
    LStack_6._list = (List_1_System_Object_ *)pLVar10->_list;
    LStack_6._index = pLVar10->_index;
    LStack_6._version = pLVar10->_version;
    LStack_6._current = *(Object **)&pLVar10->_current;
    uStack_1._0_1_ = 10;
    uStack_1._1_3_ = 0;
    while( true ) {
      bVar14 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
              List_1_T_Enumerator_System_Object__MoveNext
                        (&LStack_6,
                         MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::GameObject>__MoveNext__
                        );
      if (bVar14 == 0) break;
      RStack_12 = (RegexCharClass_SingleRange)LStack_6._current;
      if ((TypeInfo__RTG__ObjectBounds->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__RTG__ObjectBounds);
      }
      queryConfig.NoVolumeSize.x = (float)auStack_11._4_4_;
      queryConfig.ObjectTypes = auStack_11._0_4_;
      queryConfig.NoVolumeSize.y = fStack_20;
      queryConfig.NoVolumeSize.z = (float)RStack_21;
      pAVar23 = ObjectBounds::ObjectBounds_CalcWorldAABB
                          ((AABB *)&stack0xffffff70,(GameObject *)RStack_12,queryConfig,
                           (MethodInfo *)0x0);
      fStack_24 = (pAVar23->_size).x;
      fStack_25 = (pAVar23->_size).y;
      fStack_26 = (pAVar23->_size).z;
      pVVar17 = &pAVar23->_center;
      pOStack_22 = (ObjectTransformGizmo__Class *)pVVar17->x;
      uVar27 = (pAVar23->_center).y;
      uVar28 = (pAVar23->_center).z;
      uVar29 = pVVar17->x;
      uVar30 = pVVar17->y;
      scalePivot.y = (float)uVar30;
      scalePivot.x = (float)uVar29;
      VStack_18.z = *(float *)&pAVar23->_isValid;
      VStack_18.x = (float)uVar27;
      VStack_18.y = (float)uVar28;
      if (SUB41(VStack_18.z,0) != '\0') {
        method_00 = (ObjectTransformGizmo *)&UNK_?;
        scalePivot.z = (float)uVar28;
        ObjectTransformGizmo_ScaleObject(this,(GameObject *)RStack_12,scalePivot,(MethodInfo *)0x0);
      }
    }
  }
  else {
    if ((this->fields)._transformPivot != 4) goto code_?;
    pLVar31 = (this->fields)._transformableParents;
    if (pLVar31 == (List_1_UnityEngine_GameObject_ *)0x0) goto code_?;
    puVar32 = (undefined4 *)
              func_?(auStack_11,pLVar31,
                              MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__GetEnumerator__
                             );
    pLStack_15 = &LStack_6;
    iStack_16 = 0;
    LStack_6._list = (List_1_System_Object_ *)*puVar32;
    LStack_6._index = puVar32[1];
    LStack_6._version = puVar32[2];
    LStack_6._current = *(Object **)(puVar32 + 3);
    uStack_1._0_1_ = 0xd;
    uStack_1._1_3_ = 0;
    while( true ) {
      bVar14 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
              List_1_T_Enumerator_System_Object__MoveNext
                        (&LStack_6,
                         MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::GameObject>__MoveNext__
                        );
      gameObj = LStack_6._current;
      if (bVar14 == 0) break;
      if ((RegexCharClass_SingleRange)LStack_6._current == (RegexCharClass_SingleRange)0x0)
      goto code_?;
      RStack_12 = (RegexCharClass_SingleRange)
                  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                            ((GameObject *)LStack_6._current,(MethodInfo *)0x0);
      pVVar17 = ObjectTransformGizmo_GetObjectCustomLocalPivot
                          (&VStack_18,this,(GameObject *)gameObj,(MethodInfo *)0x0);
      if (RStack_12 == (RegexCharClass_SingleRange)0x0) goto code_?;
      pVVar17 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_TransformPoint
                          ((Vector3 *)(auStack_11 + 4),(Transform *)RStack_12,*pVVar17,
                           (MethodInfo *)0x0);
      method_00 = this;
      ObjectTransformGizmo_ScaleObject(this,(GameObject *)gameObj,*pVVar17,(MethodInfo *)0x0);
    }
  }
  uStack_1._0_1_ = 0xff;
  uStack_1._1_3_ = 0xffffff;
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)&LStack_6,
             (ExceptionArgument__Enum)
             MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::GameObject>__Dispose__
             ,(MethodInfo *)method_00);
code_?:
  *unaff_FS_OFFSET = fStack_3;
  return;
}


/* Void SetCanAffectPosition(Boolean) */

void Assembly-CSharp.dll::RTG::ObjectTransformGizmo::ObjectTransformGizmo_SetCanAffectPosition
               (ObjectTransformGizmo *this,bool affectPosition,MethodInfo *method)

{
  this_00 = (DataTable *)(this->fields)._._gizmo;
  if (this_00 == (DataTable *)0x0) {
    func_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  bVar2 = System.Data.dll::System::Data::DataTable::DataTable_get_CaseSensitive
                    (this_00,(MethodInfo *)0x0);
  if (bVar2 == 0) {
    uVar3 = (this->fields)._transformChannelFlags;
    if (affectPosition != 0) {
      (this->fields)._transformChannelFlags = uVar3 | 1;
      return;
    }
    (this->fields)._transformChannelFlags = uVar3 & 0xfffffffe;
  }
  return;
}


/* Void SetCanAffectRotation(Boolean) */

void Assembly-CSharp.dll::RTG::ObjectTransformGizmo::ObjectTransformGizmo_SetCanAffectRotation
               (ObjectTransformGizmo *this,bool affectRotation,MethodInfo *method)

{
  this_00 = (DataTable *)(this->fields)._._gizmo;
  if (this_00 == (DataTable *)0x0) {
    func_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  bVar2 = System.Data.dll::System::Data::DataTable::DataTable_get_CaseSensitive
                    (this_00,(MethodInfo *)0x0);
  if (bVar2 == 0) {
    uVar3 = (this->fields)._transformChannelFlags;
    if (affectRotation != 0) {
      (this->fields)._transformChannelFlags = uVar3 | 2;
      return;
    }
    (this->fields)._transformChannelFlags = uVar3 & 0xfffffffd;
  }
  return;
}


/* Void SetCanAffectScale(Boolean) */

void Assembly-CSharp.dll::RTG::ObjectTransformGizmo::ObjectTransformGizmo_SetCanAffectScale
               (ObjectTransformGizmo *this,bool affectScale,MethodInfo *method)

{
  this_00 = (DataTable *)(this->fields)._._gizmo;
  if (this_00 == (DataTable *)0x0) {
    func_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  bVar2 = System.Data.dll::System::Data::DataTable::DataTable_get_CaseSensitive
                    (this_00,(MethodInfo *)0x0);
  if (bVar2 == 0) {
    uVar3 = (this->fields)._transformChannelFlags;
    if (affectScale != 0) {
      (this->fields)._transformChannelFlags = uVar3 | 4;
      return;
    }
    (this->fields)._transformChannelFlags = uVar3 & 0xfffffffb;
  }
  return;
}


/* Void SetCustomWorldPivot(Vector3) */

void Assembly-CSharp.dll::RTG::ObjectTransformGizmo::ObjectTransformGizmo_SetCustomWorldPivot
               (ObjectTransformGizmo *this,Vector3 pivot,MethodInfo *method)

{
  this_00 = (DataTable *)(this->fields)._._gizmo;
  if (this_00 != (DataTable *)0x0) {
    bVar1 = System.Data.dll::System::Data::DataTable::DataTable_get_CaseSensitive
                      (this_00,(MethodInfo *)0x0);
    if (bVar1 == 0) {
      (this->fields)._customWorldPivot.x = pivot.x;
      (this->fields)._customWorldPivot.y = pivot.y;
      (this->fields)._customWorldPivot.z = pivot.z;
      ObjectTransformGizmo_RefreshPosition(this,(MethodInfo *)0x0);
    }
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SetObjectCustomLocalPivot(GameObject, Vector3) */

void Assembly-CSharp.dll::RTG::ObjectTransformGizmo::ObjectTransformGizmo_SetObjectCustomLocalPivot
               (ObjectTransformGizmo *this,GameObject *gameObj,Vector3 pivot,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::GameObject,_UnityEngine::Vector3>__Add_UnityEngine__GameObject__UnityEngine__Vector3_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::GameObject,_UnityEngine::Vector3>__ContainsKey_UnityEngine__GameObject_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::GameObject,_UnityEngine::Vector3>__set_Item_UnityEngine__GameObject__UnityEngine__Vector3_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)gameObj,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar1 != 0) {
    return;
  }
  this_00 = (DataTable *)(this->fields)._._gizmo;
  if (this_00 != (DataTable *)0x0) {
    bVar1 = System.Data.dll::System::Data::DataTable::DataTable_get_CaseSensitive
                      (this_00,(MethodInfo *)0x0);
    if (bVar1 != 0) {
      return;
    }
    pDVar2 = (this->fields)._objectToCustomLocalPivot;
    if (pDVar2 != (Dictionary_2_UnityEngine_GameObject_UnityEngine_Vector3_ *)0x0) {
      bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
              Object,AdminToolController+DefaultBan]::
              Dictionary_2_System_Object_AdminToolController_DefaultBan__ContainsKey
                        ((Dictionary_2_System_Object_AdminToolController_DefaultBan_ *)pDVar2,
                         (Object *)gameObj,
                         MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::GameObject,_UnityEngine::Vector3>__ContainsKey_UnityEngine__GameObject_
                        );
      pDVar2 = (this->fields)._objectToCustomLocalPivot;
      if (bVar1 == 0) {
        if (pDVar2 != (Dictionary_2_UnityEngine_GameObject_UnityEngine_Vector3_ *)0x0) {
          value.y = (float)
                    MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::GameObject,_UnityEngine::Vector3>__Add_UnityEngine__GameObject__UnityEngine__Vector3_
          ;
          value.x = pivot.x;
          value.z = pivot.z;
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
          Vector3]::Dictionary_2_System_Object_UnityEngine_Vector3__Add
                    ((Dictionary_2_System_Object_UnityEngine_Vector3_ *)pDVar2,(Object *)gameObj,
                     value,
                     MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::GameObject,_UnityEngine::Vector3>__Add_UnityEngine__GameObject__UnityEngine__Vector3_
                    );
          ObjectTransformGizmo_RefreshPosition(this,(MethodInfo *)0x0);
          return;
        }
      }
      else if (pDVar2 != (Dictionary_2_UnityEngine_GameObject_UnityEngine_Vector3_ *)0x0) {
        value_00.y = (float)
                     MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::GameObject,_UnityEngine::Vector3>__set_Item_UnityEngine__GameObject__UnityEngine__Vector3_
        ;
        value_00.x = pivot.x;
        value_00.z = pivot.z;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
        Vector3]::Dictionary_2_System_Object_UnityEngine_Vector3__set_Item
                  ((Dictionary_2_System_Object_UnityEngine_Vector3_ *)pDVar2,(Object *)gameObj,
                   value_00,
                   MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::GameObject,_UnityEngine::Vector3>__set_Item_UnityEngine__GameObject__UnityEngine__Vector3_
                  );
        ObjectTransformGizmo_RefreshPosition(this,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void SetTargetObject(GameObject) */

void Assembly-CSharp.dll::RTG::ObjectTransformGizmo::ObjectTransformGizmo_SetTargetObject
               (ObjectTransformGizmo *this,GameObject *targetObject,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__Add_UnityEngine__GameObject_
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__List__
                   );
    func_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::GameObject>);
    cRam_? = '\x01';
  }
  this_00 = (DataTable *)(this->fields)._._gizmo;
  if (this_00 != (DataTable *)0x0) {
    bVar1 = System.Data.dll::System::Data::DataTable::DataTable_get_CaseSensitive
                      (this_00,(MethodInfo *)0x0);
    if (bVar1 == 0) {
      (this->fields)._targetObjectMode = 1;
      this_01 = (List_1_System_Object_ *)
                func_?(
                               TypeInfo__System__Collections__Generic__List<UnityEngine::GameObject>
                               );
      mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
      __Il2CppFullySharedGenericType]::
      LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
                ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_01,
                 MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__List__);
      if (this_01 == (List_1_System_Object_ *)0x0) goto code_?;
      mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object__Add
                (this_01,(Object *)targetObject,
                 MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__Add_UnityEngine__GameObject_
                );
      (this->fields)._targetObjects = (IEnumerable_1_UnityEngine_GameObject_ *)this_01;
      func_?(&(this->fields)._targetObjects,this_01);
      (this->fields)._targetPivotObject = targetObject;
      func_?(&(this->fields)._targetPivotObject,targetObject);
      ObjectTransformGizmo_RefreshPosition(this,(MethodInfo *)0x0);
      ObjectTransformGizmo_RefreshRotation(this,(MethodInfo *)0x0);
    }
    return;
  }
code_?:
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SetTargetObjects(IEnumerable`1[UnityEngine.GameObject]) */

void Assembly-CSharp.dll::RTG::ObjectTransformGizmo::ObjectTransformGizmo_SetTargetObjects
               (ObjectTransformGizmo *this,IEnumerable_1_UnityEngine_GameObject_ *targetObjects,
               MethodInfo *method)

{
  this_00 = (DataTable *)(this->fields)._._gizmo;
  if (this_00 != (DataTable *)0x0) {
    bVar1 = System.Data.dll::System::Data::DataTable::DataTable_get_CaseSensitive
                      (this_00,(MethodInfo *)0x0);
    if (bVar1 == 0) {
      (this->fields)._targetObjects = targetObjects;
      (this->fields)._targetObjectMode = 0;
      func_?(&(this->fields)._targetObjects,targetObjects);
      ObjectTransformGizmo_RefreshPosition(this,(MethodInfo *)0x0);
      ObjectTransformGizmo_RefreshRotation(this,(MethodInfo *)0x0);
    }
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SetTargetPivotObject(GameObject) */

void Assembly-CSharp.dll::RTG::ObjectTransformGizmo::ObjectTransformGizmo_SetTargetPivotObject
               (ObjectTransformGizmo *this,GameObject *targetPivotObject,MethodInfo *method)

{
  this_00 = (DataTable *)(this->fields)._._gizmo;
  if (this_00 != (DataTable *)0x0) {
    bVar1 = System.Data.dll::System::Data::DataTable::DataTable_get_CaseSensitive
                      (this_00,(MethodInfo *)0x0);
    if ((bVar1 == 0) && ((this->fields)._targetObjectMode != 1)) {
      (this->fields)._targetPivotObject = targetPivotObject;
      func_?(&(this->fields)._targetPivotObject,targetPivotObject);
      ObjectTransformGizmo_RefreshPosition(this,(MethodInfo *)0x0);
      ObjectTransformGizmo_RefreshRotation(this,(MethodInfo *)0x0);
    }
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SetTransformChannelFlags(ObjectTransformGizmo+Channels) */

void Assembly-CSharp.dll::RTG::ObjectTransformGizmo::ObjectTransformGizmo_SetTransformChannelFlags
               (ObjectTransformGizmo *this,ObjectTransformGizmo_Channels__Enum flags,
               MethodInfo *method)

{
  this_00 = (DataTable *)(this->fields)._._gizmo;
  if (this_00 != (DataTable *)0x0) {
    bVar1 = System.Data.dll::System::Data::DataTable::DataTable_get_CaseSensitive
                      (this_00,(MethodInfo *)0x0);
    if (bVar1 == 0) {
      (this->fields)._transformChannelFlags = flags;
    }
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SetTransformPivot(GizmoObjectTransformPivot) */

void Assembly-CSharp.dll::RTG::ObjectTransformGizmo::ObjectTransformGizmo_SetTransformPivot
               (ObjectTransformGizmo *this,GizmoObjectTransformPivot__Enum transformPivot,
               MethodInfo *method)

{
  this_00 = (DataTable *)(this->fields)._._gizmo;
  if (this_00 != (DataTable *)0x0) {
    bVar1 = System.Data.dll::System::Data::DataTable::DataTable_get_CaseSensitive
                      (this_00,(MethodInfo *)0x0);
    if ((bVar1 == 0) && ((this->fields)._isTransformPivotPermanent == 0)) {
      (this->fields)._transformPivot = transformPivot;
      ObjectTransformGizmo_RefreshPosition(this,(MethodInfo *)0x0);
    }
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SetTransformSpace(GizmoSpace) */

void Assembly-CSharp.dll::RTG::ObjectTransformGizmo::ObjectTransformGizmo_SetTransformSpace
               (ObjectTransformGizmo *this,GizmoSpace__Enum transformSpace,MethodInfo *method)

{
  this_00 = (DataTable *)(this->fields)._._gizmo;
  if (this_00 != (DataTable *)0x0) {
    bVar1 = System.Data.dll::System::Data::DataTable::DataTable_get_CaseSensitive
                      (this_00,(MethodInfo *)0x0);
    if ((bVar1 == 0) && ((this->fields)._isTransformSpacePermanent == 0)) {
      (this->fields)._transformSpace = transformSpace;
      ObjectTransformGizmo_RefreshRotation(this,(MethodInfo *)0x0);
    }
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void UnregisterObjectRestrictions(GameObject) */

void Assembly-CSharp.dll::RTG::ObjectTransformGizmo::
     ObjectTransformGizmo_UnregisterObjectRestrictions
               (ObjectTransformGizmo *this,GameObject *targetObject,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::GameObject,_RTG::ObjectTransformGizmo::ObjectRestrictions>__Remove_UnityEngine__GameObject_
                   );
    cRam_? = '\x01';
  }
  bVar1 = ObjectTransformGizmo_ContainsRestrictionsForObject(this,targetObject,(MethodInfo *)0x0);
  if (bVar1 != 0) {
    this_00 = (this->fields)._objectToRestrictions;
    if (this_00 ==
        (Dictionary_2_UnityEngine_GameObject_RTG_ObjectTransformGizmo_ObjectRestrictions_ *)0x0) {
      func_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Remove
              ((Dictionary_2_System_Object_System_Object_ *)this_00,(Object *)targetObject,
               MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::GameObject,_RTG::ObjectTransformGizmo::ObjectRestrictions>__Remove_UnityEngine__GameObject_
              );
  }
  return;
}


/* ObjectTransformGizmo() */

void Assembly-CSharp.dll::RTG::ObjectTransformGizmo::ObjectTransformGizmo__ctor
               (ObjectTransformGizmo *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::GameObject,_UnityEngine::Vector3>__Dictionary__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::GameObject,_RTG::ObjectTransformGizmo::ObjectRestrictions>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<UnityEngine::GameObject,_RTG::ObjectTransformGizmo::ObjectRestrictions>
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<UnityEngine::GameObject,_UnityEngine::Vector3>
                   );
    func_?(&TypeInfo__RTG__ObjectTransformGizmoSettings);
    cRam_? = '\x01';
  }
  pVVar1 = Vector3Ex::Vector3Ex_FromValue((Vector3 *)&stack0xfffffff0,1e-05,(MethodInfo *)0x0);
  fVar2 = pVVar1->y;
  fVar3 = pVVar1->z;
  (this->fields)._minPositiveScale.x = pVVar1->x;
  (this->fields)._minPositiveScale.y = fVar2;
  (this->fields)._minPositiveScale.z = fVar3;
  this_00 = (Dictionary_2_UnityEngine_GameObject_UnityEngine_Vector3_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<UnityEngine::GameObject,_UnityEngine::Vector3>
                           );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements::
  StyleComplexSelector+PseudoStateData]::
  Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___ctor
            ((Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
              *)this_00,
             MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::GameObject,_UnityEngine::Vector3>__Dictionary__
            );
  (this->fields)._objectToCustomLocalPivot = this_00;
  func_?(&(this->fields)._objectToCustomLocalPivot,this_00);
  this_01 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
             *)func_?(
                              TypeInfo__System__Collections__Generic__Dictionary<UnityEngine::GameObject,_RTG::ObjectTransformGizmo::ObjectRestrictions>
                              );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements::
  StyleComplexSelector+PseudoStateData]::
  Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___ctor
            (this_01,
             MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::GameObject,_RTG::ObjectTransformGizmo::ObjectRestrictions>__Dictionary__
            );
  (this->fields)._objectToRestrictions =
       (Dictionary_2_UnityEngine_GameObject_RTG_ObjectTransformGizmo_ObjectRestrictions_ *)this_01;
  func_?(&(this->fields)._objectToRestrictions,this_01);
  this_02 = (ObjectTransformGizmoSettings *)
            func_?(TypeInfo__RTG__ObjectTransformGizmoSettings);
  if (cRam_? == '\0') {
    func_?();
    func_?();
    cRam_? = '\x01';
  }
  (this_02->fields)._transformableLayers = -1;
  this_03 = (HashSet_1_UnityEngine_GameObject_ *)func_?();
  System.Core.dll::System::Collections::Generic::HashSet`1[System::Object]::
  HashSet_1_System_Object___ctor
            ((HashSet_1_System_Object_ *)this_03,
             MethodInfo__System__Collections__Generic__HashSet<UnityEngine::GameObject>__HashSet__);
  (this_02->fields)._nonTransformableObjects = this_03;
  func_?();
  Settings::Settings__ctor((Settings *)this_02,(MethodInfo *)0x0);
  (this->fields)._settings = this_02;
  func_?(&(this->fields)._settings);
  GizmoBehaviour::GizmoBehaviour__ctor((GizmoBehaviour *)this,(MethodInfo *)0x0);
  return;
}


/* Boolean get_CanAffectPosition() */

bool Assembly-CSharp.dll::RTG::ObjectTransformGizmo::ObjectTransformGizmo_get_CanAffectPosition
               (ObjectTransformGizmo *this,MethodInfo *method)

{
  return ((this->fields)._transformChannelFlags & 1) != 0;
}


/* Boolean get_CanAffectRotation() */

bool Assembly-CSharp.dll::RTG::ObjectTransformGizmo::ObjectTransformGizmo_get_CanAffectRotation
               (ObjectTransformGizmo *this,MethodInfo *method)

{
  return ((this->fields)._transformChannelFlags & 2) != 0;
}


/* Boolean get_CanAffectScale() */

bool Assembly-CSharp.dll::RTG::ObjectTransformGizmo::ObjectTransformGizmo_get_CanAffectScale
               (ObjectTransformGizmo *this,MethodInfo *method)

{
  return ((this->fields)._transformChannelFlags & 4) != 0;
}


/* Vector3 get_MinPositiveScale() */

Vector3 * Assembly-CSharp.dll::RTG::ObjectTransformGizmo::ObjectTransformGizmo_get_MinPositiveScale
                    (Vector3 *__return_storage_ptr__,ObjectTransformGizmo *this,MethodInfo *method)

{
  fVar1 = (this->fields)._minPositiveScale.y;
  fVar2 = (this->fields)._minPositiveScale.z;
  __return_storage_ptr__->x = (this->fields)._minPositiveScale.x;
  __return_storage_ptr__->y = fVar1;
  __return_storage_ptr__->z = fVar2;
  return __return_storage_ptr__;
}


/* Boolean get_ScaleConstraintEnabled() */

bool Assembly-CSharp.dll::RTG::ObjectTransformGizmo::ObjectTransformGizmo_get_ScaleConstraintEnabled
               (ObjectTransformGizmo *this,MethodInfo *method)

{
  return (this->fields)._scaleConstraintEnabled;
}


/* ObjectTransformGizmoSettings get_Settings() */

ObjectTransformGizmoSettings *
Assembly-CSharp.dll::RTG::ObjectTransformGizmo::ObjectTransformGizmo_get_Settings
          (ObjectTransformGizmo *this,MethodInfo *method)

{
  if ((this->fields)._sharedSettings != (ObjectTransformGizmoSettings *)0x0) {
    return (this->fields)._sharedSettings;
  }
  return (this->fields)._settings;
}


/* Void set_MinPositiveScale(Vector3) */

void Assembly-CSharp.dll::RTG::ObjectTransformGizmo::ObjectTransformGizmo_set_MinPositiveScale
               (ObjectTransformGizmo *this,Vector3 value,MethodInfo *method)

{
  pVVar1 = Vector3Ex::Vector3Ex_FromValue(&VStack_2,1e-05,(MethodInfo *)0x0);
  uVar3 = pVVar1->x;
  uVar4 = pVVar1->y;
  if (value.z <= pVVar1->z) {
    value.z = pVVar1->z;
  }
  if (value.x <= (float)uVar3) {
    value.x = (float)uVar3;
  }
  if (value.y <= (float)uVar4) {
    value.y = (float)uVar4;
  }
  (this->fields)._minPositiveScale.x = value.x;
  (this->fields)._minPositiveScale.y = value.y;
  (this->fields)._minPositiveScale.z = value.z;
  return;
}

