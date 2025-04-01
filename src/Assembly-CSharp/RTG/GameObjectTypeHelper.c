
/* Int32 ClearTypeBit(Int32, GameObjectType) */

int32_t Assembly-CSharp.dll::RTG::GameObjectTypeHelper::GameObjectTypeHelper_ClearTypeBit
                  (int32_t objectTypeMask,GameObjectType__Enum typeBit,MethodInfo *method)

{
  return ~typeBit & objectTypeMask;
}


/* Boolean HasVolume(GameObjectType) */

bool Assembly-CSharp.dll::RTG::GameObjectTypeHelper::GameObjectTypeHelper_HasVolume
               (GameObjectType__Enum objectType,MethodInfo *method)

{
  if ((objectType != GameObjectType__Enum_Terrain) && (objectType != GameObjectType__Enum_Mesh)) {
    return objectType == GameObjectType__Enum_Sprite;
  }
  return 1;
}


/* Boolean Is2DObjectType(GameObjectType) */

bool Assembly-CSharp.dll::RTG::GameObjectTypeHelper::GameObjectTypeHelper_Is2DObjectType
               (GameObjectType__Enum objectType,MethodInfo *method)

{
  return objectType == GameObjectType__Enum_Sprite;
}


/* Boolean Is3DObjectType(GameObjectType) */

bool Assembly-CSharp.dll::RTG::GameObjectTypeHelper::GameObjectTypeHelper_Is3DObjectType
               (GameObjectType__Enum objectType,MethodInfo *method)

{
  return objectType != GameObjectType__Enum_Sprite;
}


/* Int32 SetTypeBit(Int32, GameObjectType) */

int32_t Assembly-CSharp.dll::RTG::GameObjectTypeHelper::GameObjectTypeHelper_SetTypeBit
                  (int32_t objectTypeMask,GameObjectType__Enum typeBit,MethodInfo *method)

{
  return objectTypeMask | typeBit;
}


/* GameObjectTypeHelper() */

void Assembly-CSharp.dll::RTG::GameObjectTypeHelper::GameObjectTypeHelper__cctor(MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Enum);
    func_?(&TypeInfo__RTG__GameObjectTypeHelper);
    func_?(&TypeRef__RTG__GameObjectType);
    func_?(&TypeInfo__RTG__GameObjectType);
    func_?(&TypeInfo__System__IDisposable);
    func_?(&TypeInfo__System__Collections__IEnumerator);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<RTG::GameObjectType>__Add_RTG__GameObjectType_
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<RTG::GameObjectType>__List_int_)
    ;
    func_?(&TypeInfo__System__Collections__Generic__List<RTG::GameObjectType>);
    func_?(&TypeInfo__System__Type);
    cRam_? = '\x01';
  }
  TypeInfo__RTG__GameObjectTypeHelper->static_fields->_allCombined = 0x7f;
  handle = TypeRef__RTG__GameObjectType;
  if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__Type);
  }
  enumType = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                       ((RuntimeTypeHandle)handle,(MethodInfo *)0x0);
  if ((TypeInfo__System__Enum->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  this_00 = mscorlib.dll::System::Enum::Enum_GetValues(enumType,(MethodInfo *)0x0);
  if (this_00 != (Array *)0x0) {
    iVar4 = mscorlib.dll::System::Array::Array_get_Length(this_00,(MethodInfo *)0x0);
    TypeInfo__RTG__GameObjectTypeHelper->static_fields->_numTypes = iVar4;
    iVar4 = TypeInfo__RTG__GameObjectTypeHelper->static_fields->_numTypes;
    this_01 = (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
               *)func_?();
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::Internal::
    MultiColumnCollectionHeader+ViewState+ColumnState]::
    List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState___ctor_2
              (this_01,iVar4,
               MethodInfo__System__Collections__Generic__List<RTG::GameObjectType>__List_int_);
    TypeInfo__RTG__GameObjectTypeHelper->static_fields->_allObjectTypes =
         (List_1_RTG_GameObjectType_ *)this_01;
    func_?();
    pIVar5 = mscorlib.dll::System::Array::Array_GetEnumerator(this_00,(MethodInfo *)0x0);
    uStack_1 = 1;
    while (pIVar5 != (IEnumerator *)0x0) {
      cVar6 = func_?();
      if (cVar6 == '\0') {
        uStack_1 = 0xffffffff;
        iVar7 = func_?();
        if (iVar7 != 0) {
          func_?();
          *unaff_FS_OFFSET = uStack_3;
          return;
        }
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
      if (pIVar5 == (IEnumerator *)0x0) break;
      pIVar8 = pIVar5->klass;
      uVar9 = 0;
      uVar10._0_1_ = (pIVar8->_1).rank;
      uVar10._1_1_ = (pIVar8->_1).minimumAlignment;
      if (uVar10 != 0) {
        do {
          if (pIVar8->interfaceOffsets[uVar9].interfaceType ==
              (Il2CppClass *)TypeInfo__System__Collections__IEnumerator) {
            ppMVar11 = &(&(pIVar5->klass->vtable).get_Current)
                        [pIVar8->interfaceOffsets[uVar9].offset].method;
            goto code_?;
          }
          uVar9 = uVar9 + 1;
        } while (uVar9 < uVar10);
      }
      ppMVar11 = (MethodInfo **)func_?();
code_?:
      piVar12 = (int *)(*(code *)*ppMVar11)();
      pMVar13 = 
      MethodInfo__System__Collections__Generic__List<RTG::GameObjectType>__Add_RTG__GameObjectType_;
      this = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
             TypeInfo__RTG__GameObjectTypeHelper->static_fields->_allObjectTypes;
      if (this == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) break;
      if (piVar12 == (int *)0x0) break;
      if (*(Il2CppClass **)(*piVar12 + 0x20) != (TypeInfo__RTG__GameObjectType->_0).element_class)
      goto code_?;
      pRVar14 = (RegexCharClass_SingleRange *)func_?();
      pRVar15 = (this->fields)._items;
      uVar16 = (this->fields)._size;
      item = *pRVar14;
      piVar17 = &(this->fields)._version;
      *piVar17 = *piVar17 + 1;
      if (pRVar15 == (RegexCharClass_SingleRange__Array *)0x0) break;
      if (uVar16 < pRVar15->max_length) {
        (this->fields)._size = uVar16 + 1;
        if (pRVar15->max_length <= uVar16) {
          func_?();
          break;
        }
        pRVar15->vector[uVar16] = item;
      }
      else {
        mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
        RegexCharClass+SingleRange]::
        List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__AddWithResize
                  (this,item,pMVar13->klass->rgctx_data[0xe].method);
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar18 = (code *)swi(3);
  (*pcVar18)();
  return;
}


/* GameObjectType get_AllCombined() */

GameObjectType__Enum
Assembly-CSharp.dll::RTG::GameObjectTypeHelper::GameObjectTypeHelper_get_AllCombined
          (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__GameObjectTypeHelper);
    cRam_? = '\x01';
  }
  if ((TypeInfo__RTG__GameObjectTypeHelper->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__RTG__GameObjectTypeHelper);
  }
  return TypeInfo__RTG__GameObjectTypeHelper->static_fields->_allCombined;
}


/* GameObjectType[] get_AllObjectTypes() */

GameObjectType__Enum__Array *
Assembly-CSharp.dll::RTG::GameObjectTypeHelper::GameObjectTypeHelper_get_AllObjectTypes
          (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__RTG__GameObjectTypeHelper->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  this = (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
          *)TypeInfo__RTG__GameObjectTypeHelper->static_fields->_allObjectTypes;
  if (this != (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
               *)0x0) {
    pMVar1 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::Internal::
             MultiColumnCollectionHeader+ViewState+ColumnState]::
             List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState__ToArray
                       (this,
                        MethodInfo__System__Collections__Generic__List<RTG::GameObjectType>__ToArray__
                       );
    return (GameObjectType__Enum__Array *)pMVar1;
  }
  uVar2 = func_?(&puStack_3);
  func_?(uVar2);
  pcVar4 = (code *)swi(3);
  pGVar5 = (GameObjectType__Enum__Array *)(*pcVar4)();
  return pGVar5;
}


/* Int32 get_NumTypes() */

int32_t Assembly-CSharp.dll::RTG::GameObjectTypeHelper::GameObjectTypeHelper_get_NumTypes
                  (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__GameObjectTypeHelper);
    cRam_? = '\x01';
  }
  if ((TypeInfo__RTG__GameObjectTypeHelper->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__RTG__GameObjectTypeHelper);
  }
  return TypeInfo__RTG__GameObjectTypeHelper->static_fields->_numTypes;
}

