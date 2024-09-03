
/* Void Add(IGizmoHandle) */

void Assembly-CSharp.dll::RTG::GizmoHandleCollection::GizmoHandleCollection_Add
               (GizmoHandleCollection *this,IGizmoHandle *handle,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_RTG::IGizmoHandle>__Add_int__RTG__IGizmoHandle_
                   );
    func_?(&TypeInfo__RTG__IGizmoHandle);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<RTG::IGizmoHandle>__Add_RTG__IGizmoHandle_
                   );
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_RTG::IGizmoHandle>__ContainsKey_int_
                   );
    func_?(&TypeInfo__RTG__IGizmoHandle);
    cRam_? = '\x01';
  }
  pDVar1 = (this->fields)._idToHandle;
  if ((handle != (IGizmoHandle *)0x0) &&
     (iVar2 = func_?(0,TypeInfo__RTG__IGizmoHandle,handle),
     pDVar1 != (Dictionary_2_System_Int32_RTG_IGizmoHandle_ *)0x0)) {
    bVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Single]::
            Dictionary_2_System_Int32_System_Single__ContainsKey
                      ((Dictionary_2_System_Int32_System_Single_ *)pDVar1,iVar2,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_RTG::IGizmoHandle>__ContainsKey_int_
                      );
    if ((bVar3 != 0) ||
       (pGVar4 = (Gizmo *)func_?(1,TypeInfo__RTG__IGizmoHandle,handle),
       pGVar4 != (this->fields)._gizmo)) {
      return;
    }
    this_00 = (List_1_System_Object_ *)(this->fields)._handles;
    if (this_00 != (List_1_System_Object_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object__Add
                (this_00,(Object *)handle,
                 MethodInfo__System__Collections__Generic__List<RTG::IGizmoHandle>__Add_RTG__IGizmoHandle_
                );
      pDVar1 = (this->fields)._idToHandle;
      iVar2 = func_?(0,TypeInfo__RTG__IGizmoHandle,handle);
      if (pDVar1 != (Dictionary_2_System_Int32_RTG_IGizmoHandle_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
        Dictionary_2_System_Int32_System_Object__Add
                  ((Dictionary_2_System_Int32_System_Object_ *)pDVar1,iVar2,(Object *)handle,
                   MethodInfo__System__Collections__Generic__Dictionary<int,_RTG::IGizmoHandle>__Add_int__RTG__IGizmoHandle_
                  );
        return;
      }
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void Clear() */

void Assembly-CSharp.dll::RTG::GizmoHandleCollection::GizmoHandleCollection_Clear
               (GizmoHandleCollection *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_RTG::IGizmoHandle>__Clear__
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<RTG::IGizmoHandle>__Clear__);
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields)._handles;
  if (pLVar1 != (List_1_RTG_IGizmoHandle_ *)0x0) {
    length = (pLVar1->fields)._size;
    piVar2 = &(pLVar1->fields)._version;
    *piVar2 = *piVar2 + 1;
    (pLVar1->fields)._size = 0;
    if (0 < length) {
      mscorlib.dll::System::Array::Array_Clear
                ((Array *)(pLVar1->fields)._items,0,length,(MethodInfo *)0x0);
    }
    this_00 = (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
               *)(this->fields)._idToHandle;
    if (this_00 !=
        (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
         *)0x0) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::StyleSheets
      ::StyleSheetCache+SheetHandleKey,System::Object]::
      Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__Clear
                (this_00,
                 MethodInfo__System__Collections__Generic__Dictionary<int,_RTG::IGizmoHandle>__Clear__
                );
      return;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Boolean Contains(IGizmoHandle) */

bool Assembly-CSharp.dll::RTG::GizmoHandleCollection::GizmoHandleCollection_Contains
               (GizmoHandleCollection *this,IGizmoHandle *handle,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_RTG::IGizmoHandle>__ContainsKey_int_
                   );
    func_?(&TypeInfo__RTG__IGizmoHandle);
    cRam_? = '\x01';
  }
  this_00 = (this->fields)._idToHandle;
  if (handle != (IGizmoHandle *)0x0) {
    key = func_?(0,TypeInfo__RTG__IGizmoHandle,handle);
    if (this_00 != (Dictionary_2_System_Int32_RTG_IGizmoHandle_ *)0x0) {
      bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Single]
              ::Dictionary_2_System_Int32_System_Single__ContainsKey
                        ((Dictionary_2_System_Int32_System_Single_ *)this_00,key,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_RTG::IGizmoHandle>__ContainsKey_int_
                        );
      return bVar1;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  bVar1 = (*pcVar2)();
  return bVar1;
}


/* Boolean Contains(Int32) */

bool Assembly-CSharp.dll::RTG::GizmoHandleCollection::GizmoHandleCollection_Contains_1
               (GizmoHandleCollection *this,int32_t handleId,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  this_00 = (this->fields)._idToHandle;
  if (this_00 != (Dictionary_2_System_Int32_RTG_IGizmoHandle_ *)0x0) {
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Single]::
            Dictionary_2_System_Int32_System_Single__ContainsKey
                      ((Dictionary_2_System_Int32_System_Single_ *)this_00,handleId,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_RTG::IGizmoHandle>__ContainsKey_int_
                      );
    return bVar1;
  }
  uVar2 = func_?(&stack0xfffffff0);
  func_?(uVar2);
  pcVar3 = (code *)swi(3);
  bVar1 = (*pcVar3)();
  return bVar1;
}


/* List`1[RTG.IGizmoHandle] GetAll() */

List_1_RTG_IGizmoHandle_ *
Assembly-CSharp.dll::RTG::GizmoHandleCollection::GizmoHandleCollection_GetAll
          (GizmoHandleCollection *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<RTG::IGizmoHandle>__List_System__Collections__Generic__IEnumerable<RTG::IGizmoHandle>_
                   );
    func_?(&TypeInfo__System__Collections__Generic__List<RTG::IGizmoHandle>);
    cRam_? = '\x01';
  }
  collection = (this->fields)._handles;
  this_00 = (List_1_System_Object_ *)
            func_?(TypeInfo__System__Collections__Generic__List<RTG::IGizmoHandle>);
  mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object___ctor_1
            (this_00,(IEnumerable_1_System_Object_ *)collection,
             MethodInfo__System__Collections__Generic__List<RTG::IGizmoHandle>__List_System__Collections__Generic__IEnumerable<RTG::IGizmoHandle>_
            );
  return (List_1_RTG_IGizmoHandle_ *)this_00;
}


/* List`1[RTG.GizmoHandleHoverData] GetAllHandlesHoverData(Ray) */

List_1_RTG_GizmoHandleHoverData_ *
Assembly-CSharp.dll::RTG::GizmoHandleCollection::GizmoHandleCollection_GetAllHandlesHoverData
          (GizmoHandleCollection *this,Ray hoverRay,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::IGizmoHandle>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::IGizmoHandle>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::IGizmoHandle>__get_Current__
                   );
    func_?(&TypeInfo__RTG__IGizmoHandle);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<RTG::GizmoHandleHoverData>__Add_RTG__GizmoHandleHoverData_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<RTG::IGizmoHandle>__GetEnumerator__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<RTG::GizmoHandleHoverData>__List_int_
                   );
    func_?(&TypeInfo__System__Collections__Generic__List<RTG::GizmoHandleHoverData>);
    cRam_? = '\x01';
  }
  pLStack_4 = (List_1_System_Object_ *)0x0;
  this_01 = (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
             *)func_?(
                              TypeInfo__System__Collections__Generic__List<RTG::GizmoHandleHoverData>
                              );
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::Internal::
  MultiColumnCollectionHeader+ViewState+ColumnState]::
  List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState___ctor_2
            (this_01,10,
             MethodInfo__System__Collections__Generic__List<RTG::GizmoHandleHoverData>__List_int_);
  this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
            (this->fields)._handles;
  if (this_00 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
    pLVar5 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
             RegexCharClass+SingleRange]::
             List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                       ((List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                         *)&stack0xffffffc4,this_00,
                        MethodInfo__System__Collections__Generic__List<RTG::IGizmoHandle>__GetEnumerator__
                       );
    lVar6 = (ulonglong)(uint)pLVar5->_current << 0x20;
    uStack_1 = 1;
    while( true ) {
      pOVar7 = (Object *)((ulonglong)lVar6 >> 0x20);
      bVar8 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
              List_1_T_Enumerator_System_Object__MoveNext
                        ((List_1_T_Enumerator_System_Object_ *)&pLStack_4,
                         MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::IGizmoHandle>__MoveNext__
                        );
      if (bVar8 == 0) {
        uStack_1 = 0xffffffff;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                  ((Object *)&pLStack_4,
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::IGizmoHandle>__Dispose__
                   ,in_stack_9);
        *unaff_FS_OFFSET = uStack_3;
        return (List_1_RTG_GizmoHandleHoverData_ *)this_01;
      }
      if (pOVar7 == (Object *)0x0) break;
      pOVar10 = pOVar7->klass;
      uVar11 = 0;
      uVar12._0_1_ = (pOVar10->_1).rank;
      uVar12._1_1_ = (pOVar10->_1).minimumAlignment;
      if (uVar12 != 0) {
        do {
          if ((IGizmoHandle__Class *)pOVar10->interfaceOffsets[uVar11].interfaceType ==
              TypeInfo__RTG__IGizmoHandle) {
            puVar13 = &pOVar10[2]._1.instance_size + pOVar10->interfaceOffsets[uVar11].offset * 2;
            goto code_?;
          }
          uVar11 = uVar11 + 1;
        } while (uVar11 < uVar12);
      }
      puVar13 = (uint32_t *)func_?();
code_?:
      pLStack_4 = (List_1_System_Object_ *)hoverRay.m_Origin.z;
      lVar6 = hoverRay.m_Direction._4_8_;
      pOVar7 = (Object *)(*(code *)*puVar13)();
      if (pOVar7 != (Object *)0x0) {
        if (this_01 ==
            (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
             *)0x0) break;
        mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
        List_1_System_Object__Add
                  ((List_1_System_Object_ *)this_01,pOVar7,
                   MethodInfo__System__Collections__Generic__List<RTG::GizmoHandleHoverData>__Add_RTG__GizmoHandleHoverData_
                  );
      }
    }
  }
  func_?();
  func_?();
  pcVar14 = (code *)swi(3);
  pLVar15 = (List_1_RTG_GizmoHandleHoverData_ *)(*pcVar14)();
  return pLVar15;
}


/* IGizmoHandle GetHandleById(Int32) */

IGizmoHandle *
Assembly-CSharp.dll::RTG::GizmoHandleCollection::GizmoHandleCollection_GetHandleById
          (GizmoHandleCollection *this,int32_t handleId,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  this_00 = (this->fields)._idToHandle;
  if (this_00 != (Dictionary_2_System_Int32_RTG_IGizmoHandle_ *)0x0) {
    pIVar1 = (IGizmoHandle *)
             mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]
             ::Dictionary_2_System_Int32_System_Object__get_Item
                       ((Dictionary_2_System_Int32_System_Object_ *)this_00,handleId,
                        MethodInfo__System__Collections__Generic__Dictionary<int,_RTG::IGizmoHandle>__get_Item_int_
                       );
    return pIVar1;
  }
  uVar2 = func_?(&stack0xfffffff0);
  func_?(uVar2);
  pcVar3 = (code *)swi(3);
  pIVar1 = (IGizmoHandle *)(*pcVar3)();
  return pIVar1;
}


/* Void Remove(IGizmoHandle) */

void Assembly-CSharp.dll::RTG::GizmoHandleCollection::GizmoHandleCollection_Remove
               (GizmoHandleCollection *this,IGizmoHandle *handle,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_RTG::IGizmoHandle>__Remove_int_
                   );
    func_?(&TypeInfo__RTG__IGizmoHandle);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<RTG::IGizmoHandle>__Remove_RTG__IGizmoHandle_
                   );
    cRam_? = '\x01';
  }
  this_00 = (List_1_System_Object_ *)(this->fields)._handles;
  if (this_00 != (List_1_System_Object_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object__Remove
              (this_00,(Object *)handle,
               MethodInfo__System__Collections__Generic__List<RTG::IGizmoHandle>__Remove_RTG__IGizmoHandle_
              );
    this_01 = (this->fields)._idToHandle;
    if (handle != (IGizmoHandle *)0x0) {
      key = func_?(0,TypeInfo__RTG__IGizmoHandle,handle);
      if (this_01 != (Dictionary_2_System_Int32_RTG_IGizmoHandle_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
        Dictionary_2_System_Int32_System_Object__Remove
                  ((Dictionary_2_System_Int32_System_Object_ *)this_01,key,
                   MethodInfo__System__Collections__Generic__Dictionary<int,_RTG::IGizmoHandle>__Remove_int_
                  );
        return;
      }
    }
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* GizmoHandleCollection(Gizmo) */

void Assembly-CSharp.dll::RTG::GizmoHandleCollection::GizmoHandleCollection__ctor
               (GizmoHandleCollection *this,Gizmo *gizmo,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_RTG::IGizmoHandle>__Dictionary__
                   );
    func_?(&TypeInfo__System__Collections__Generic__Dictionary<int,_RTG::IGizmoHandle>);
    func_?(&MethodInfo__System__Collections__Generic__List<RTG::IGizmoHandle>__List__);
    func_?(&TypeInfo__System__Collections__Generic__List<RTG::IGizmoHandle>);
    cRam_? = '\x01';
  }
  this_00 = (List_1_RTG_IGizmoHandle_ *)
            func_?(TypeInfo__System__Collections__Generic__List<RTG::IGizmoHandle>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_00,
             MethodInfo__System__Collections__Generic__List<RTG::IGizmoHandle>__List__);
  (this->fields)._handles = this_00;
  func_?(&(this->fields)._handles,this_00);
  this_01 = (Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef_ *
            )func_?(
                            TypeInfo__System__Collections__Generic__Dictionary<int,_RTG::IGizmoHandle>
                            );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::TextCore::Text
  ::TextResourceManager+FontAssetRef]::
  Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef___ctor
            (this_01,
             MethodInfo__System__Collections__Generic__Dictionary<int,_RTG::IGizmoHandle>__Dictionary__
            );
  method_00 = (MethodInfo *)&(this->fields)._idToHandle;
  (this->fields)._idToHandle = (Dictionary_2_System_Int32_RTG_IGizmoHandle_ *)this_01;
  func_?(method_00,this_01);
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,method_00);
  (this->fields)._gizmo = gizmo;
  func_?(&this->fields,gizmo);
  return;
}


/* Int32 get_Count() */

int32_t Assembly-CSharp.dll::RTG::GizmoHandleCollection::GizmoHandleCollection_get_Count
                  (GizmoHandleCollection *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    ppMStack_1 = &MethodInfo__System__Collections__Generic__List<RTG::IGizmoHandle>__get_Count__;
    func_?();
    cRam_? = '\x01';
  }
  pLVar2 = (this->fields)._handles;
  if (pLVar2 != (List_1_RTG_IGizmoHandle_ *)0x0) {
    return (pLVar2->fields)._size;
  }
  ppMStack_1 = (MethodInfo **)&stack0xfffffffc;
  uVar3 = func_?(auStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  iVar6 = (*pcVar5)();
  return iVar6;
}


/* IGizmoHandle get_Item(Int32) */

IGizmoHandle *
Assembly-CSharp.dll::RTG::GizmoHandleCollection::GizmoHandleCollection_get_Item
          (GizmoHandleCollection *this,int32_t index,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
            (this->fields)._handles;
  if (this_00 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
    RVar1 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
            RegexCharClass+SingleRange]::
            List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                      (this_00,index,
                       MethodInfo__System__Collections__Generic__List<RTG::IGizmoHandle>__get_Item_int_
                      );
    return (IGizmoHandle *)RVar1;
  }
  uVar2 = func_?(&stack0xfffffff0);
  func_?(uVar2);
  pcVar3 = (code *)swi(3);
  pIVar4 = (IGizmoHandle *)(*pcVar3)();
  return pIVar4;
}

