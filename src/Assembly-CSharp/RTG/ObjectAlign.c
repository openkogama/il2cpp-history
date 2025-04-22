
/* Void AlignRootsToPlane(List`1[UnityEngine.GameObject], Plane) */

void Assembly-CSharp.dll::RTG::ObjectAlign::ObjectAlign_AlignRootsToPlane
               (List_1_UnityEngine_GameObject_ *roots,Plane alignmentPlane,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffff1c;
  puVar5 = &stack0xffffff1c;
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
    func_?(&TypeInfo__RTG__GameObjectTypeHelper);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__GetEnumerator__
                   );
    func_?(&TypeInfo__RTG__ObjectBounds);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  LStack_6._list = (List_1_System_Object_ *)0x0;
  LStack_6._index = 0;
  LStack_6._version = 0;
  LStack_6._current = (Object *)0x0;
  iStack_7 = 0;
  uStack_8 = 0;
  fStack_9 = 0.0;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  pVVar10 = TypeInfo__UnityEngine__Vector3->static_fields;
  uStack_8._0_4_ = (pVVar10->zeroVector).x;
  uStack_8._4_4_ = (pVVar10->zeroVector).y;
  fStack_9 = (pVVar10->zeroVector).z;
  if ((TypeInfo__RTG__GameObjectTypeHelper->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__RTG__GameObjectTypeHelper);
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__GameObjectTypeHelper);
    cRam_? = '\x01';
  }
  if ((TypeInfo__RTG__GameObjectTypeHelper->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__RTG__GameObjectTypeHelper);
  }
  iStack_7 = TypeInfo__RTG__GameObjectTypeHelper->static_fields->_allCombined;
  if (roots != (List_1_UnityEngine_GameObject_ *)0x0) {
    pLVar11 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
             RegexCharClass+SingleRange]::
             List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                       ((List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                         *)auStack_12,
                        (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)roots,
                        MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__GetEnumerator__
                       );
    uStack_13 = 0;
    LStack_6._list = (List_1_System_Object_ *)pLVar11->_list;
    LStack_6._index = pLVar11->_index;
    LStack_6._version = pLVar11->_version;
    LStack_6._current = *(Object **)&pLVar11->_current;
    uStack_1 = 1;
    pLStack_14 = &LStack_6;
    while( true ) {
      do {
        bVar15 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
                List_1_T_Enumerator_System_Object__MoveNext
                          (&LStack_6,
                           MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::GameObject>__MoveNext__
                          );
        root = LStack_6._current;
        if (bVar15 == 0) {
          uStack_1 = 0xffffffff;
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                    ((Object *)&LStack_6,
                     (ExceptionArgument__Enum)
                     MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::GameObject>__Dispose__
                     ,in_stack_16);
          *unaff_FS_OFFSET = uStack_3;
          return;
        }
        if ((TypeInfo__RTG__ObjectBounds->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        queryConfig.NoVolumeSize.x = (float)(undefined4)uStack_8;
        queryConfig.ObjectTypes = iStack_7;
        queryConfig.NoVolumeSize.y = (float)uStack_8._4_4_;
        queryConfig.NoVolumeSize.z = fStack_9;
        pOVar17 = ObjectBounds::ObjectBounds_CalcHierarchyWorldOBB
                           ((OBB *)&stack0xffffff28,(GameObject *)root,queryConfig,(MethodInfo *)0x0
                           );
        fStack_18 = (pOVar17->_size).x;
        fStack_19 = (pOVar17->_size).y;
        fStack_20 = (pOVar17->_size).z;
        fStack_21 = (pOVar17->_center).x;
        fStack_22 = (pOVar17->_center).y;
        fStack_23 = (pOVar17->_center).z;
        fStack_24 = (pOVar17->_rotation).x;
        fStack_25 = (pOVar17->_rotation).y;
        uStack_26._0_4_ = (pOVar17->_rotation).z;
        uStack_26._4_4_ = (pOVar17->_rotation).w;
        uStack_27 = *(undefined4 *)&pOVar17->_isValid;
      } while ((char)uStack_27 == '\0');
      pVVar28 = PlaneEx::PlaneEx_ProjectPoint
                         (&VStack_29,alignmentPlane,pOVar17->_center,(MethodInfo *)0x0);
      uStack_30._0_4_ = pVVar28->x;
      uStack_30._4_4_ = pVVar28->y;
      fStack_31 = pVVar28->z;
      if ((RegexCharClass_SingleRange)root == (RegexCharClass_SingleRange)0x0) break;
      this = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                       ((GameObject *)root,(MethodInfo *)0x0);
      if (this == (Transform *)0x0) break;
      pVVar28 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                         ((Vector3 *)(auStack_12 + 4),this,(MethodInfo *)0x0);
      uStack_32._0_4_ = pVVar28->x;
      uStack_32._4_4_ = pVVar28->y;
      fStack_33 = pVVar28->z;
      fStack_34 = fStack_33 + (fStack_31 - fStack_23);
      value.y = (float)uStack_32._4_4_ + (uStack_30._4_4_ - fStack_22);
      value.x = (float)(undefined4)uStack_32 + ((float)uStack_30 - fStack_21);
      value.z = fStack_34;
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                (this,value,(MethodInfo *)0x0);
    }
  }
  func_?();
  pcVar35 = (code *)swi(3);
  (*pcVar35)();
  return;
}


/* ObjectAlign+Result AlignToWorldAxis(IEnumerable`1[UnityEngine.GameObject], Axis, Vector3) */

ObjectAlign_Result__Enum
Assembly-CSharp.dll::RTG::ObjectAlign::ObjectAlign_AlignToWorldAxis
          (IEnumerable_1_UnityEngine_GameObject_ *gameObjects,Axis__Enum axis,
          Vector3 alignmentPlaneOrigin,MethodInfo *method)

{
  uVar1 = 0;
  uVar2 = 0;
  uVar3 = 0;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3,0,0,0,0);
    cRam_? = '\x01';
  }
  pVVar4 = TypeInfo__UnityEngine__Vector3->static_fields;
  uVar5._0_4_ = (pVVar4->forwardVector).x;
  uVar5._4_4_ = (pVVar4->forwardVector).y;
  fVar6 = (pVVar4->forwardVector).z;
  if (axis == Axis__Enum_Y) {
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Vector3,uVar1,uVar2,uVar3);
      cRam_? = '\x01';
    }
    pVVar4 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar5._0_4_ = (pVVar4->upVector).x;
    uVar5._4_4_ = (pVVar4->upVector).y;
    fVar6 = (pVVar4->upVector).z;
  }
  else if (axis == Axis__Enum_Z) {
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Vector3,uVar1,uVar2,uVar3);
      cRam_? = '\x01';
    }
    pVVar4 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar5._0_4_ = (pVVar4->rightVector).x;
    uVar5._4_4_ = (pVVar4->rightVector).y;
    fVar6 = (pVVar4->rightVector).z;
  }
  value.z = fVar6;
  value.x = (float)(int)uVar5;
  value.y = (float)(int)((ulonglong)uVar5 >> 0x20);
  pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                     ((Vector3 *)&stack0xffffffe4,value,(MethodInfo *)0x0);
  uVar1._0_4_ = pVVar7->x;
  uVar1._4_4_ = pVVar7->y;
  if (cRam_? == '\0') {
    func_?();
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__get_Count__
                   );
    cRam_? = '\x01';
  }
  if ((TypeInfo__RTG__GameObjectEx->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  puVar8 = &UNK_?;
  roots = GameObjectEx::GameObjectEx_FilterParentsOnly_1(gameObjects,(MethodInfo *)0x0);
  if (roots != (List_1_UnityEngine_GameObject_ *)0x0) {
    if ((roots->fields)._size != 0) {
      alignmentPlane.m_Normal.z = (float)puVar8;
      alignmentPlane.m_Normal.x = (float)(int)uVar1;
      alignmentPlane.m_Normal.y = (float)(int)((ulonglong)uVar1 >> 0x20);
      alignmentPlane.m_Distance = (float)gameObjects;
      ObjectAlign_AlignRootsToPlane(roots,alignmentPlane,(MethodInfo *)0x0);
      return ObjectAlign_Result__Enum_Success;
    }
    return ObjectAlign_Result__Enum_Err_NoObjects;
  }
  func_?();
  pcVar9 = (code *)swi(3);
  OVar10 = (*pcVar9)();
  return OVar10;
}


/* ObjectAlign+Result AlignToWorldPlane(IEnumerable`1[UnityEngine.GameObject], Plane) */

ObjectAlign_Result__Enum
Assembly-CSharp.dll::RTG::ObjectAlign::ObjectAlign_AlignToWorldPlane
          (IEnumerable_1_UnityEngine_GameObject_ *gameObjects,Plane alignmentPlane,
          MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__get_Count__
                   );
    cRam_? = '\x01';
  }
  if ((TypeInfo__RTG__GameObjectEx->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  roots = GameObjectEx::GameObjectEx_FilterParentsOnly_1(gameObjects,(MethodInfo *)0x0);
  if (roots != (List_1_UnityEngine_GameObject_ *)0x0) {
    if ((roots->fields)._size != 0) {
      ObjectAlign_AlignRootsToPlane(roots,alignmentPlane,(MethodInfo *)0x0);
      return ObjectAlign_Result__Enum_Success;
    }
    return ObjectAlign_Result__Enum_Err_NoObjects;
  }
  uVar1 = func_?(&stack0xfffffff8);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  OVar3 = (*pcVar2)();
  return OVar3;
}

