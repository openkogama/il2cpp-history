
/* Boolean Add(IGizmoBehaviour) */

bool Assembly-CSharp.dll::RTG::GizmoBehaviourCollection::GizmoBehaviourCollection_Add
               (GizmoBehaviourCollection *this,IGizmoBehaviour *behaviour,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<RTG::IGizmoBehaviour>__Add_RTG__IGizmoBehaviour_
                   );
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<RTG::IGizmoBehaviour>__Contains_RTG__IGizmoBehaviour_
                   );
    cRam_? = '\x01';
  }
  pLVar1 = (List_1_System_Object_ *)(this->fields)._behaviours;
  if (pLVar1 != (List_1_System_Object_ *)0x0) {
    bVar2 = mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
            List_1_System_Object__Contains
                      (pLVar1,(Object *)behaviour,
                       MethodInfo__System__Collections__Generic__List<RTG::IGizmoBehaviour>__Contains_RTG__IGizmoBehaviour_
                      );
    if (bVar2 != 0) {
      return 0;
    }
    pLVar1 = (List_1_System_Object_ *)(this->fields)._behaviours;
    if (pLVar1 != (List_1_System_Object_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object__Add
                (pLVar1,(Object *)behaviour,
                 MethodInfo__System__Collections__Generic__List<RTG::IGizmoBehaviour>__Add_RTG__IGizmoBehaviour_
                );
      return 1;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  bVar2 = (*pcVar3)();
  return bVar2;
}


/* Boolean Contains(IGizmoBehaviour) */

bool Assembly-CSharp.dll::RTG::GizmoBehaviourCollection::GizmoBehaviourCollection_Contains
               (GizmoBehaviourCollection *this,IGizmoBehaviour *behaviour,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  this_00 = (List_1_System_Object_ *)(this->fields)._behaviours;
  if (this_00 != (List_1_System_Object_ *)0x0) {
    bVar1 = mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
            List_1_System_Object__Contains
                      (this_00,(Object *)behaviour,
                       MethodInfo__System__Collections__Generic__List<RTG::IGizmoBehaviour>__Contains_RTG__IGizmoBehaviour_
                      );
    return bVar1;
  }
  uVar2 = func_?(&stack0xfffffff0);
  func_?(uVar2);
  pcVar3 = (code *)swi(3);
  bVar1 = (*pcVar3)();
  return bVar1;
}


/* List`1[RTG.IGizmoBehaviour] GetBehavioursOfType(Type) */

List_1_RTG_IGizmoBehaviour_ *
Assembly-CSharp.dll::RTG::GizmoBehaviourCollection::GizmoBehaviourCollection_GetBehavioursOfType
          (GizmoBehaviourCollection *this,Type *behaviourType,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffb4;
  puVar5 = &stack0xffffffb4;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::IGizmoBehaviour>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::IGizmoBehaviour>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::IGizmoBehaviour>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<RTG::IGizmoBehaviour>__Add_RTG__IGizmoBehaviour_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<RTG::IGizmoBehaviour>__GetEnumerator__
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<RTG::IGizmoBehaviour>__List__);
    func_?(&MethodInfo__System__Collections__Generic__List<RTG::IGizmoBehaviour>__List_int_
                   );
    func_?(&TypeInfo__System__Collections__Generic__List<RTG::IGizmoBehaviour>);
    func_?(&TypeInfo__System__Type);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<RTG::IGizmoBehaviour>__get_Count__
                   );
    cRam_? = '\x01';
  }
  pLVar6 = (this->fields)._behaviours;
  if (pLVar6 != (List_1_RTG_IGizmoBehaviour_ *)0x0) {
    if ((pLVar6->fields)._size == 0) {
      pLVar6 = (List_1_RTG_IGizmoBehaviour_ *)
               func_?(TypeInfo__System__Collections__Generic__List<RTG::IGizmoBehaviour>);
      mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
      __Il2CppFullySharedGenericType]::
      LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
                ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)pLVar6,
                 MethodInfo__System__Collections__Generic__List<RTG::IGizmoBehaviour>__List__);
      *unaff_FS_OFFSET = uStack_3;
      return pLVar6;
    }
    if (cRam_? == '\0') {
      func_?(&
                      MethodInfo__System__Collections__Generic__List<RTG::IGizmoBehaviour>__get_Count__
                     );
      cRam_? = '\x01';
    }
    pLVar6 = (this->fields)._behaviours;
    if (pLVar6 != (List_1_RTG_IGizmoBehaviour_ *)0x0) {
      capacity = (pLVar6->fields)._size;
      this_01 = (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
                 *)func_?(
                                  TypeInfo__System__Collections__Generic__List<RTG::IGizmoBehaviour>
                                  );
      pLStack_7 = this_01;
      mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::Internal::
      MultiColumnCollectionHeader+ViewState+ColumnState]::
      List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState___ctor_2
                (this_01,capacity,
                 MethodInfo__System__Collections__Generic__List<RTG::IGizmoBehaviour>__List_int_);
      this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                (this->fields)._behaviours;
      pLStack_8 = this_01;
      if (this_00 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
        pLVar9 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions
                 ::RegexCharClass+SingleRange]::
                 List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                           (&LStack_10,this_00,
                            MethodInfo__System__Collections__Generic__List<RTG::IGizmoBehaviour>__GetEnumerator__
                           );
        method_00 = (MethodInfo *)pLVar9->_version;
        LStack_10._version = 0;
        uStack_1 = 1;
        RVar11 = pLVar9->_current;
        LStack_10._current = (RegexCharClass_SingleRange)&stack0xffffffc0;
code_?:
        this_02 = RVar11;
        bVar12 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
                List_1_T_Enumerator_System_Object__MoveNext
                          ((List_1_T_Enumerator_System_Object_ *)&stack0xffffffc0,
                           MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::IGizmoBehaviour>__MoveNext__
                          );
        if (bVar12 == 0) {
          uStack_1 = 0xffffffff;
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                    ((Object *)&stack0xffffffc0,
                     (ExceptionArgument__Enum)
                     MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::IGizmoBehaviour>__Dispose__
                     ,method_00);
          *unaff_FS_OFFSET = uStack_3;
          return (List_1_RTG_IGizmoBehaviour_ *)this_01;
        }
        if (this_02 != (RegexCharClass_SingleRange)0x0) {
          lhs = mscorlib.dll::System::Object::Object_GetType((Object *)this_02,(MethodInfo *)0x0);
          if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          RVar11.First = 0;
          RVar11.Last = 0;
          method_00 = (MethodInfo *)behaviourType;
          bVar12 = UnityEngine.CoreModule.dll::Unity::Collections::LowLevel::Unsafe::UnsafeUtility::
                  UnsafeUtility_EnumEquals
                            ((Int32Enum__Enum)lhs,(Int32Enum__Enum)behaviourType,(MethodInfo *)0x0);
          if (bVar12 != 0) goto code_?;
          if (lhs != (Type *)0x0) goto code_?;
        }
      }
    }
  }
code_?:
  uVar13 = func_?();
  func_?(uVar13);
  pcVar14 = (code *)swi(3);
  pLVar6 = (List_1_RTG_IGizmoBehaviour_ *)(*pcVar14)();
  return pLVar6;
code_?:
  LStack_10._version = (int32_t)behaviourType;
  LStack_10._list = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x15;
  RVar11 = (RegexCharClass_SingleRange)&UNK_?;
  LStack_10._index = (int32_t)lhs;
  cVar15 = func_?();
  this_01 = pLStack_7;
  if (cVar15 != '\0') {
code_?:
    this_01 = pLStack_7;
    if (pLStack_7 ==
        (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_ *
        )0x0) goto code_?;
    mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object__Add
              ((List_1_System_Object_ *)pLStack_7,(Object *)this_02,
               MethodInfo__System__Collections__Generic__List<RTG::IGizmoBehaviour>__Add_RTG__IGizmoBehaviour_
              );
  }
  goto code_?;
}


/* List`1[System.Object] GetBehavioursOfType[Object]() */

List_1_System_Object_ *
Assembly-CSharp.dll::RTG::GizmoBehaviourCollection::GizmoBehaviourCollection_GetBehavioursOfType_1
          (GizmoBehaviourCollection *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  if ((method->field7_0x1c).rgctx_data == (Il2CppRGCTXData *)0x0) {
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::IGizmoBehaviour>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::IGizmoBehaviour>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::IGizmoBehaviour>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<RTG::IGizmoBehaviour>__GetEnumerator__
                   );
    func_?(&TypeInfo__System__Type);
    if ((method->field7_0x1c).rgctx_data == (Il2CppRGCTXData *)0x0) {
      func_?(method);
    }
  }
  OStack_4.klass = (Object__Class *)0x0;
  OStack_4.monitor = (MonitorData *)0x0;
  iVar5 = GizmoBehaviourCollection_get_Count(this,(MethodInfo *)0x0);
  if (iVar5 == 0) {
    if (((uint)((method->field7_0x1c).rgctx_data)->klass->vtable[0].methodPtr & 0x100) == 0) {
      func_?();
    }
    pLVar6 = (List_1_System_Object_ *)func_?();
    mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
    __Il2CppFullySharedGenericType]::
    LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
              ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)pLVar6,
               (method->field7_0x1c).rgctx_data[1].method);
    *unaff_FS_OFFSET = uStack_3;
    return pLVar6;
  }
  iVar5 = GizmoBehaviourCollection_get_Count(this,(MethodInfo *)0x0);
  OStack_4.klass = (Object__Class *)((method->field7_0x1c).rgctx_data)->klass;
  if (((uint)((Il2CppClass *)OStack_4.klass)->vtable[0].methodPtr & 0x100) == 0) {
    OStack_4.klass = (Object__Class *)func_?();
  }
  pMVar7 = (MethodInfo *)func_?();
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::Internal::
  MultiColumnCollectionHeader+ViewState+ColumnState]::
  List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState___ctor_2
            ((List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
              *)pMVar7,iVar5,(method->field7_0x1c).rgctx_data[2].method);
  handle = (method->field7_0x1c).rgctx_data[3];
  if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  OStack_4.monitor = (MonitorData *)&UNK_?;
  pMStack_8 = (MethodInfo *)
               mscorlib.dll::System::Type::Type_GetTypeFromHandle(handle.method,(MethodInfo *)0x0);
  this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
            (this->fields)._behaviours;
  if (this_00 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
code_?:
    func_?();
code_?:
    func_?();
    func_?();
    pcVar9 = (code *)swi(3);
    pLVar6 = (List_1_System_Object_ *)(*pcVar9)();
    return pLVar6;
  }
  pLVar10 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
           RegexCharClass+SingleRange]::
           List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                     ((List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                       *)&stack0xffffffc0,this_00,
                      MethodInfo__System__Collections__Generic__List<RTG::IGizmoBehaviour>__GetEnumerator__
                     );
  OStack_4.klass = (Object__Class *)pLVar10->_list;
  OStack_4.monitor = (MonitorData *)pLVar10->_index;
  this_01 = pLVar10->_current;
  uStack_1 = 1;
  pMStack_11 = pMVar7;
code_?:
  bVar12 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
          List_1_T_Enumerator_System_Object__MoveNext
                    ((List_1_T_Enumerator_System_Object_ *)&OStack_4,
                     MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::IGizmoBehaviour>__MoveNext__
                    );
  if (bVar12 == 0) {
    uStack_1 = 0xffffffff;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              (&OStack_4,
               (ExceptionArgument__Enum)
               MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::IGizmoBehaviour>__Dispose__
               ,in_stack_13);
    *unaff_FS_OFFSET = uStack_3;
    return (List_1_System_Object_ *)pMVar7;
  }
  if (this_01 != (RegexCharClass_SingleRange)0x0) {
    pMVar7 = (MethodInfo *)
             mscorlib.dll::System::Object::Object_GetType((Object *)this_01,(MethodInfo *)0x0);
    if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    in_stack_13 = pMStack_8;
    bVar12 = UnityEngine.CoreModule.dll::Unity::Collections::LowLevel::Unsafe::UnsafeUtility::
            UnsafeUtility_EnumEquals
                      ((Int32Enum__Enum)pMVar7,(Int32Enum__Enum)pMStack_8,(MethodInfo *)0x0);
    pMVar14 = in_stack_13;
    if (bVar12 != 0) goto code_?;
    if (pMVar7 != (MethodInfo *)0x0) goto code_?;
  }
  goto code_?;
code_?:
  pMStack_8 = (MethodInfo *)0x15;
  cVar15 = func_?();
  pMVar14 = in_stack_13;
  pMStack_11 = pMVar7;
  if (cVar15 != '\0') {
code_?:
    if (pMStack_11 == (MethodInfo *)0x0) goto code_?;
    func_?();
    func_?();
    in_stack_13 = pMVar14;
    pMVar7 = (MethodInfo *)func_?();
    pMVar16 = (MethodInfo *)0x0;
    pMStack_11 = pMVar14;
    if (pMVar7 != (MethodInfo *)0x0) {
      pMVar16 = (MethodInfo *)func_?();
      pMStack_11 = pMVar7;
      if (pMVar16 == (MethodInfo *)0x0) goto code_?;
    }
    pMStack_8 = pMStack_11;
    func_?();
    pMVar7 = pMStack_11;
    pMStack_11 = pMVar16;
  }
  goto code_?;
}


/* IEnumerator`1[RTG.IGizmoBehaviour] GetEnumerator() */

IEnumerator_1_RTG_IGizmoBehaviour_ *
Assembly-CSharp.dll::RTG::GizmoBehaviourCollection::GizmoBehaviourCollection_GetEnumerator
          (GizmoBehaviourCollection *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::IGizmoBehaviour>
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<RTG::IGizmoBehaviour>__GetEnumerator__
                   );
    cRam_? = '\x01';
  }
  this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
            (this->fields)._behaviours;
  if (this_00 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
    pLVar1 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
             RegexCharClass+SingleRange]::
             List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                       (&LStack_2,this_00,
                        MethodInfo__System__Collections__Generic__List<RTG::IGizmoBehaviour>__GetEnumerator__
                       );
    pLStack_3 = pLVar1->_list;
    iStack_4 = pLVar1->_index;
    iStack_5 = pLVar1->_version;
    RStack_6 = pLVar1->_current;
    pIVar7 = (IEnumerator_1_RTG_IGizmoBehaviour_ *)
             func_?(TypeInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::IGizmoBehaviour>
                             ,&pLStack_3);
    return pIVar7;
  }
  func_?();
  pcVar8 = (code *)swi(3);
  pIVar7 = (IEnumerator_1_RTG_IGizmoBehaviour_ *)(*pcVar8)();
  return pIVar7;
}


/* IGizmoBehaviour GetFirstBehaviourOfType(Type) */

IGizmoBehaviour *
Assembly-CSharp.dll::RTG::GizmoBehaviourCollection::GizmoBehaviourCollection_GetFirstBehaviourOfType
          (GizmoBehaviourCollection *this,Type *behaviourType,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<RTG::IGizmoBehaviour>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<RTG::IGizmoBehaviour>__get_Item_int_
                   );
    cRam_? = '\x01';
  }
  this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
            GizmoBehaviourCollection_GetBehavioursOfType(this,behaviourType,(MethodInfo *)0x0);
  if (this_00 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
    if ((this_00->fields)._size == 0) {
      return (IGizmoBehaviour *)0x0;
    }
    RVar1 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
            RegexCharClass+SingleRange]::
            List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                      (this_00,0,
                       MethodInfo__System__Collections__Generic__List<RTG::IGizmoBehaviour>__get_Item_int_
                      );
    return (IGizmoBehaviour *)RVar1;
  }
  uVar2 = func_?(&stack0xfffffffc);
  func_?(uVar2);
  pcVar3 = (code *)swi(3);
  pIVar4 = (IGizmoBehaviour *)(*pcVar3)();
  return pIVar4;
}


/* Object GetFirstBehaviourOfType[Object]() */

Object * Assembly-CSharp.dll::RTG::GizmoBehaviourCollection::
         GizmoBehaviourCollection_GetFirstBehaviourOfType_1
                   (GizmoBehaviourCollection *this,MethodInfo *method)

{
  if ((method->field7_0x1c).rgctx_data == (Il2CppRGCTXData *)0x0) {
    func_?(method);
  }
  this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
            GizmoBehaviourCollection_GetBehavioursOfType_1
                      (this,((method->field7_0x1c).rgctx_data)->method);
  if (this_00 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
    if ((this_00->fields)._size == 0) {
      return (Object *)0x0;
    }
    RVar1 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
            RegexCharClass+SingleRange]::
            List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                      (this_00,0,(method->field7_0x1c).rgctx_data[3].method);
    return (Object *)RVar1;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  pOVar3 = (Object *)(*pcVar2)();
  return pOVar3;
}


/* Boolean Remove(IGizmoBehaviour) */

bool Assembly-CSharp.dll::RTG::GizmoBehaviourCollection::GizmoBehaviourCollection_Remove
               (GizmoBehaviourCollection *this,IGizmoBehaviour *behaviour,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  this_00 = (List_1_System_Object_ *)(this->fields)._behaviours;
  if (this_00 != (List_1_System_Object_ *)0x0) {
    bVar1 = mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
            List_1_System_Object__Remove
                      (this_00,(Object *)behaviour,
                       MethodInfo__System__Collections__Generic__List<RTG::IGizmoBehaviour>__Remove_RTG__IGizmoBehaviour_
                      );
    return bVar1;
  }
  uVar2 = func_?(&stack0xfffffff0);
  func_?(uVar2);
  pcVar3 = (code *)swi(3);
  bVar1 = (*pcVar3)();
  return bVar1;
}


/* IEnumerator System.Collections.IEnumerable.GetEnumerator() */

IEnumerator *
Assembly-CSharp.dll::RTG::GizmoBehaviourCollection::
GizmoBehaviourCollection_System_Collections_IEnumerable_GetEnumerator
          (GizmoBehaviourCollection *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::IGizmoBehaviour>
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<RTG::IGizmoBehaviour>__GetEnumerator__
                   );
    cRam_? = '\x01';
  }
  this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
            (this->fields)._behaviours;
  if (this_00 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
    pLVar1 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
             RegexCharClass+SingleRange]::
             List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                       (&LStack_2,this_00,
                        MethodInfo__System__Collections__Generic__List<RTG::IGizmoBehaviour>__GetEnumerator__
                       );
    pLStack_3 = pLVar1->_list;
    iStack_4 = pLVar1->_index;
    iStack_5 = pLVar1->_version;
    RStack_6 = pLVar1->_current;
    pIVar7 = (IEnumerator *)
             func_?(TypeInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::IGizmoBehaviour>
                             ,&pLStack_3);
    return pIVar7;
  }
  func_?();
  pcVar8 = (code *)swi(3);
  pIVar7 = (IEnumerator *)(*pcVar8)();
  return pIVar7;
}


/* GizmoBehaviourCollection() */

void Assembly-CSharp.dll::RTG::GizmoBehaviourCollection::GizmoBehaviourCollection__ctor
               (GizmoBehaviourCollection *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__List<RTG::IGizmoBehaviour>__List_int_
                   );
    func_?(&TypeInfo__System__Collections__Generic__List<RTG::IGizmoBehaviour>);
    cRam_? = '\x01';
  }
  this_00 = (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
             *)func_?(TypeInfo__System__Collections__Generic__List<RTG::IGizmoBehaviour>);
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::Internal::
  MultiColumnCollectionHeader+ViewState+ColumnState]::
  List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState___ctor_2
            (this_00,10,
             MethodInfo__System__Collections__Generic__List<RTG::IGizmoBehaviour>__List_int_);
  method_00 = (MethodInfo *)&this->fields;
  (this->fields)._behaviours = (List_1_RTG_IGizmoBehaviour_ *)this_00;
  func_?(method_00,this_00);
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,method_00);
  return;
}


/* Int32 get_Count() */

int32_t Assembly-CSharp.dll::RTG::GizmoBehaviourCollection::GizmoBehaviourCollection_get_Count
                  (GizmoBehaviourCollection *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    ppMStack_1 = &MethodInfo__System__Collections__Generic__List<RTG::IGizmoBehaviour>__get_Count__;
    func_?();
    cRam_? = '\x01';
  }
  pLVar2 = (this->fields)._behaviours;
  if (pLVar2 != (List_1_RTG_IGizmoBehaviour_ *)0x0) {
    return (pLVar2->fields)._size;
  }
  ppMStack_1 = (MethodInfo **)&stack0xfffffffc;
  uVar3 = func_?(auStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  iVar6 = (*pcVar5)();
  return iVar6;
}

