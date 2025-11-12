
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
  if (objectType - GameObjectType__Enum_Mesh < 2) {
    return 1;
  }
  return objectType == GameObjectType__Enum_Sprite;
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
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__GameObjectTypeHelper);
    LOCK();
    UNLOCK();
    FUN_?(&TypeRef__RTG__GameObjectType);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__GameObjectType);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__IDisposable);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__IEnumerator);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<RTG::GameObjectType>__Add_RTG__GameObjectType_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<RTG::GameObjectType>__List_int_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<RTG::GameObjectType>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  plVar1 = (longlong *)0x0;
  TypeInfo__RTG__GameObjectTypeHelper->static_fields->_allCombined = 0x7f;
  pIVar2 = TypeRef__RTG__GameObjectType;
  if (*(int *)(lRam_? + 0xe4) == 0) {
    FUN_?();
  }
  if (pIVar2 != (Il2CppType *)0x0) {
    if (*(int *)(lRam_? + 0xe4) == 0) {
      FUN_?();
    }
    lVar3 = FUN_?(pIVar2,1);
    plVar1 = (longlong *)FUN_?(lVar3 + 0x20);
  }
  if (*(int *)(lRam_? + 0xe4) == 0) {
    FUN_?();
  }
  if (*(int *)(lRam_? + 0xe4) == 0) {
    FUN_?();
  }
  if (plVar1 == (longlong *)0x0) {
    uVar4 = func_?(&TypeInfo__System__ArgumentNullException);
    this_02 = (ArgumentNullException *)func_?(uVar4);
    paramName = (String *)func_?(&StringLiteral_enumType);
    mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
              (this_02,paramName,(MethodInfo *)0x0);
    uVar4 = func_?(&MethodInfo__System__Enum__GetValues_System__Type_);
    FUN_?(this_02,uVar4);
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  this_00 = (Array *)(**(code **)(*plVar1 + 0x888))(plVar1);
  if (this_00 == (Array *)0x0) {
    FUN_?();
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar6 = mscorlib.dll::System::Array::Array_get_Length(this_00,(MethodInfo *)0x0);
  TypeInfo__RTG__GameObjectTypeHelper->static_fields->_numTypes = iVar6;
  iVar6 = TypeInfo__RTG__GameObjectTypeHelper->static_fields->_numTypes;
  this_01 = (List_1_UnityEngine_UIElements_UIR_RenderTreeManager_VisualChangesProcessor_EntryProcessingInfo_
             *)FUN_?(TypeInfo__System__Collections__Generic__List<RTG::GameObjectType>);
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::UIR::
  RenderTreeManager+VisualChangesProcessor+EntryProcessingInfo]::
  List_1_UnityEngine_UIElements_UIR_RenderTreeManager_VisualChangesProcessor_EntryProcessingInfo___ctor_2
            (this_01,iVar6,
             MethodInfo__System__Collections__Generic__List<RTG::GameObjectType>__List_int_);
  TypeInfo__RTG__GameObjectTypeHelper->static_fields->_allObjectTypes =
       (List_1_RTG_GameObjectType_ *)this_01;
  if (iRam_? != 0) {
    uVar7 = (uint)((ulonglong)&TypeInfo__RTG__GameObjectTypeHelper->static_fields->_allObjectTypes
                   >> 0xc);
    puVar8 = (ulonglong *)((ulonglong)((uVar7 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar9 = *puVar8;
      LOCK();
      uVar10 = *puVar8;
      if (uVar9 == uVar10) {
        *puVar8 = uVar9 | 1L << (uVar7 & 0x3f);
      }
      UNLOCK();
    } while (uVar9 != uVar10);
  }
  pIVar11 = mscorlib.dll::System::Array::Array_GetEnumerator(this_00,(MethodInfo *)0x0);
  do {
    if (pIVar11 == (IEnumerator *)0x0) {
code_?:
      FUN_?();
      FUN_?();
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    cVar12 = FUN_?(0,TypeInfo__System__Collections__IEnumerator);
    if (cVar12 == '\0') {
      lVar3 = FUN_?(pIVar11,TypeInfo__System__IDisposable);
      if (lVar3 != 0) {
        FUN_?(0,TypeInfo__System__IDisposable,lVar3);
      }
      return;
    }
    if (pIVar11 == (IEnumerator *)0x0) {
code_?:
      FUN_?();
      goto code_?;
    }
    pIVar13 = pIVar11->klass;
    uVar14 = 0;
    uVar15._0_1_ = (pIVar13->_1).rank;
    uVar15._1_1_ = (pIVar13->_1).minimumAlignment;
    if (uVar15 != 0) {
      do {
        if (pIVar13->interfaceOffsets[uVar14].interfaceType ==
            (Il2CppClass *)TypeInfo__System__Collections__IEnumerator) {
          pVVar16 = &(pIVar13->vtable).MoveNext + (pIVar13->interfaceOffsets[uVar14].offset + 1);
          goto code_?;
        }
        uVar14 = uVar14 + 1;
      } while (uVar14 < uVar15);
    }
    pVVar16 = (VirtualInvokeData *)
              FUN_?(pIVar11,TypeInfo__System__Collections__IEnumerator,1);
code_?:
    pUVar17 = (UInt32Enum__Enum__Array *)(*pVVar16->methodPtr)(pIVar11,pVVar16->method);
    pMVar18 = 
    MethodInfo__System__Collections__Generic__List<RTG::GameObjectType>__Add_RTG__GameObjectType_;
    this = (List_1_System_UInt32Enum_ *)
           TypeInfo__RTG__GameObjectTypeHelper->static_fields->_allObjectTypes;
    if (this == (List_1_System_UInt32Enum_ *)0x0) {
code_?:
      FUN_?();
      goto code_?;
    }
    if (pUVar17 == (UInt32Enum__Enum__Array *)0x0) {
code_?:
      FUN_?();
      goto code_?;
    }
    if ((pUVar17->klass->_0).element_class != (TypeInfo__RTG__GameObjectType->_0).element_class) {
code_?:
      FUN_?(pUVar17);
      goto code_?;
    }
    item = *(UInt32Enum__Enum *)&pUVar17->bounds;
    piVar19 = &(this->fields)._version;
    *piVar19 = *piVar19 + 1;
    pUVar17 = (this->fields)._items;
    uVar7 = (this->fields)._size;
    if (pUVar17 == (UInt32Enum__Enum__Array *)0x0) {
code_?:
      FUN_?();
      goto code_?;
    }
    if (uVar7 < (uint)pUVar17->max_length) {
      (this->fields)._size = uVar7 + 1;
      if ((uint)pUVar17->max_length <= uVar7) {
        FUN_?();
        goto code_?;
      }
      pUVar17->vector[(int)uVar7] = item;
    }
    else {
      mscorlib.dll::System::Collections::Generic::List`1[System::UInt32Enum]::
      List_1_System_UInt32Enum__AddWithResize(this,item,pMVar18->klass->rgctx_data[0xe].method);
    }
  } while( true );
}


/* GameObjectType get_AllCombined() */

GameObjectType__Enum
Assembly-CSharp.dll::RTG::GameObjectTypeHelper::GameObjectTypeHelper_get_AllCombined
          (MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__GameObjectTypeHelper);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__RTG__GameObjectTypeHelper->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__RTG__GameObjectTypeHelper);
  }
  return TypeInfo__RTG__GameObjectTypeHelper->static_fields->_allCombined;
}


/* GameObjectType[] get_AllObjectTypes() */

GameObjectType__Enum__Array *
Assembly-CSharp.dll::RTG::GameObjectTypeHelper::GameObjectTypeHelper_get_AllObjectTypes
          (MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__GameObjectTypeHelper);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<RTG::GameObjectType>__ToArray__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__RTG__GameObjectTypeHelper->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__RTG__GameObjectTypeHelper);
  }
  pMVar1 = MethodInfo__System__Collections__Generic__List<RTG::GameObjectType>__ToArray__;
  pLVar2 = TypeInfo__RTG__GameObjectTypeHelper->static_fields->_allObjectTypes;
  if (pLVar2 != (List_1_RTG_GameObjectType_ *)0x0) {
    pIVar3 = MethodInfo__System__Collections__Generic__List<RTG::GameObjectType>__ToArray__->klass->
             rgctx_data;
    if ((pLVar2->fields)._size != 0) {
      pvVar4 = pIVar3[3].rgctxDataDummy;
      if ((*(byte *)((longlong)pvVar4 + 0x135) & 1) == 0) {
        pvVar4 = (void *)FUN_?(pvVar4);
      }
      pGVar5 = (GameObjectType__Enum__Array *)FUN_?(pvVar4);
      mscorlib.dll::System::Array::Array_Copy_3
                ((Array *)(pLVar2->fields)._items,0,(Array *)pGVar5,0,(pLVar2->fields)._size,
                 (MethodInfo *)0x0);
      return pGVar5;
    }
    pvVar4 = pIVar3[2].rgctxDataDummy;
    if ((*(byte *)((longlong)pvVar4 + 0x135) & 1) == 0) {
      pvVar4 = (void *)FUN_?(pvVar4);
    }
    if (*(int *)((longlong)pvVar4 + 0xe4) == 0) {
      FUN_?(pvVar4);
    }
    pIVar6 = pMVar1->klass->rgctx_data[2].klass;
    if ((pIVar6->field_0x135 & 1) == 0) {
      pIVar6 = (Il2CppClass *)FUN_?(pIVar6);
    }
    return *(GameObjectType__Enum__Array **)pIVar6->static_fields;
  }
  FUN_?();
  pcVar7 = (code *)swi(3);
  pGVar5 = (GameObjectType__Enum__Array *)(*pcVar7)();
  return pGVar5;
}


/* Int32 get_NumTypes() */

int32_t Assembly-CSharp.dll::RTG::GameObjectTypeHelper::GameObjectTypeHelper_get_NumTypes
                  (MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__GameObjectTypeHelper);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__RTG__GameObjectTypeHelper->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__RTG__GameObjectTypeHelper);
  }
  return TypeInfo__RTG__GameObjectTypeHelper->static_fields->_numTypes;
}

