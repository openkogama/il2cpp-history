
/* Void AddPrototype(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::MVWorldInventory::MVWorldInventory_AddPrototype
               (MVWorldInventory *this,Dictionary_2_System_Object_System_Object_ *data,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Byte);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_RuntimePrototypeCubeModel>__Add_int__RuntimePrototypeCubeModel_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__MV__WorldObject__PrototypeDataParameters);
    func_?(&TypeInfo__RuntimePrototypeCubeModel);
    func_?(&TypeInfo__System__Single);
    cRam_? = '\x01';
  }
  uStack_1 = (RuntimePrototypeCubeModel__Class *)((uint)uStack_1 & 0xffffff);
  pOVar2 = (Object *)
           func_?(TypeInfo__MV__WorldObject__PrototypeDataParameters,(int)&uStack_1 + 3);
  if (data == (Dictionary_2_System_Object_System_Object_ *)0x0) {
code_?:
    func_?();
  }
  else {
    TVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                      ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)data,pOVar2,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                      );
    uVar4 = CONCAT44(TypeInfo__System__Int32,TVar3.m_Index);
    if (TVar3.m_Index == 0) goto code_?;
    if (*(Il2CppClass **)(*(int *)TVar3.m_Index + 0x20) !=
        (TypeInfo__System__Int32->_0).element_class) goto code_?;
    func_?(TVar3.m_Index);
    uStack_1._0_3_ = CONCAT12(1,(undefined2)uStack_1);
    pOVar2 = (Object *)
             func_?(TypeInfo__MV__WorldObject__PrototypeDataParameters,(int)&uStack_1 + 2);
    TVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                      ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)data,pOVar2,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                      );
    uVar4 = CONCAT44(TypeInfo__System__Single,TVar3.m_Index);
    if (TVar3.m_Index == 0) goto code_?;
    if (*(Il2CppClass **)(*(int *)TVar3.m_Index + 0x20) !=
        (TypeInfo__System__Single->_0).element_class) goto code_?;
    pfVar5 = (float *)func_?(TVar3.m_Index);
    scale = *pfVar5;
    uStack_1._0_2_ = CONCAT11(3,(undefined1)uStack_1);
    pOVar2 = (Object *)
             func_?(TypeInfo__MV__WorldObject__PrototypeDataParameters,(int)&uStack_1 + 1);
    TVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                      ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)data,pOVar2,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                      );
    uVar4 = CONCAT44(TypeInfo__System__Int32,TVar3.m_Index);
    if (TVar3.m_Index == 0) goto code_?;
    if (*(Il2CppClass **)(*(int *)TVar3.m_Index + 0x20) !=
        (TypeInfo__System__Int32->_0).element_class) goto code_?;
    func_?(TVar3.m_Index);
    uStack_1 = (RuntimePrototypeCubeModel__Class *)CONCAT31(uStack_1._1_3_,2);
    pOVar2 = (Object *)func_?(TypeInfo__MV__WorldObject__PrototypeDataParameters,&uStack_1)
    ;
    pRVar6 = (RuntimePrototypeCubeModel__Class *)unaff_EDI.m_Index;
    unaff_EDI = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                ::UIElements::TextureId]::
                Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                          ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)data,
                           pOVar2,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                          );
    unaff_EBX = (RuntimePrototypeCubeModel__Class *)TypeInfo__System__Byte;
    if (unaff_EDI.m_Index == 0) {
      data_00 = (Byte__Array *)0x0;
code_?:
      unaff_EBX = pRVar6;
      uStack_1 = TypeInfo__RuntimePrototypeCubeModel;
      authorProfileId = &UNK_?;
      unaff_EDI.m_Index = func_?();
      RuntimePrototypeCubeModel::RuntimePrototypeCubeModel__ctor_1
                ((RuntimePrototypeCubeModel *)unaff_EDI.m_Index,(int32_t)unaff_EBX,
                 (int32_t)authorProfileId,scale,data_00,(MethodInfo *)0x0);
      this_00 = (this->fields).runtimePrototypes;
      if (this_00 != (Dictionary_2_System_Int32_RuntimePrototypeCubeModel_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
        Dictionary_2_System_Int32_System_Object__Add
                  ((Dictionary_2_System_Int32_System_Object_ *)this_00,(int32_t)unaff_EBX,
                   (Object *)unaff_EDI.m_Index,
                   MethodInfo__System__Collections__Generic__Dictionary<int,_RuntimePrototypeCubeModel>__Add_int__RuntimePrototypeCubeModel_
                  );
        pMVar7 = (this->fields).OnWorldInventoryChange;
        if (pMVar7 != (MVWorldInventory_OnWorldInventoryChangeDelegate *)0x0) {
          (*(pMVar7->fields)._._.invoke_impl)();
        }
        return;
      }
      goto code_?;
    }
    uStack_1 = (RuntimePrototypeCubeModel__Class *)TypeInfo__System__Byte;
    pRVar6 = (RuntimePrototypeCubeModel__Class *)&UNK_?;
    data_00 = (Byte__Array *)func_?(unaff_EDI.m_Index);
    if (data_00 != (Byte__Array *)0x0) goto code_?;
  }
  uStack_1 = unaff_EBX;
  uVar4 = func_?(unaff_EDI.m_Index);
code_?:
  func_?(uVar4);
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void AddRuntimePrototypeToDirty(RuntimePrototypeCubeModel) */

void Assembly-CSharp.dll::MVWorldInventory::MVWorldInventory_AddRuntimePrototypeToDirty
               (MVWorldInventory *this,RuntimePrototypeCubeModel *rpcm,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).dirtyRPCM;
  if (this_00 != (List_1_RuntimePrototypeCubeModel_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object__Add
              ((List_1_System_Object_ *)this_00,(Object *)rpcm,
               MethodInfo__System__Collections__Generic__List<RuntimePrototypeCubeModel>__Add_RuntimePrototypeCubeModel_
              );
    return;
  }
  uVar1 = func_?(&stack0xfffffff0);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* RuntimePrototypeCubeModel CreatePendingPrototype(Int32) */

RuntimePrototypeCubeModel *
Assembly-CSharp.dll::MVWorldInventory::MVWorldInventory_CreatePendingPrototype
          (MVWorldInventory *this,int32_t prototypeId,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_RuntimePrototypeCubeModel>__get_Item_int_
                   );
    cRam_? = '\x01';
  }
  this_00 = (this->fields).runtimePrototypes;
  if (this_00 != (Dictionary_2_System_Int32_RuntimePrototypeCubeModel_ *)0x0) {
    pRVar1 = (RuntimePrototypeCubeModel *)
             mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]
             ::Dictionary_2_System_Int32_System_Object__get_Item
                       ((Dictionary_2_System_Int32_System_Object_ *)this_00,prototypeId,
                        MethodInfo__System__Collections__Generic__Dictionary<int,_RuntimePrototypeCubeModel>__get_Item_int_
                       );
    if (pRVar1 != (RuntimePrototypeCubeModel *)0x0) {
      pRVar1 = RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_CloneGeometry
                         (pRVar1,1,(MethodInfo *)0x0);
      if (pRVar1 != (RuntimePrototypeCubeModel *)0x0) {
        RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_set_PrototypeState
                  (pRVar1,PrototypeState__Enum_Pending,(MethodInfo *)0x0);
        return pRVar1;
      }
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  pRVar1 = (RuntimePrototypeCubeModel *)(*pcVar2)();
  return pRVar1;
}


/* Void GenerateAllDirty(Int32 ByRef) */

void Assembly-CSharp.dll::MVWorldInventory::MVWorldInventory_GenerateAllDirty
               (MVWorldInventory *this,int32_t *counter,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<RuntimePrototypeCubeModel>__RemoveAt_int_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<RuntimePrototypeCubeModel>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<RuntimePrototypeCubeModel>__get_Item_int_
                   );
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).dirtyRPCM;
  if (pLVar1 != (List_1_RuntimePrototypeCubeModel_ *)0x0) {
    index = (pLVar1->fields)._size;
    while( true ) {
      do {
        do {
          index = index + -1;
          if (index < 0) {
            return;
          }
          pLVar2 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                   (this->fields).dirtyRPCM;
          if ((pLVar2 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)
             || (RVar3 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                         RegularExpressions::RegexCharClass+SingleRange]::
                         List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                   (pLVar2,index,
                                    MethodInfo__System__Collections__Generic__List<RuntimePrototypeCubeModel>__get_Item_int_
                                   ), RVar3 == (RegexCharClass_SingleRange)0x0))
          goto code_?;
        } while (*(int *)((int)RVar3 + 0x24) != 3);
        pLVar2 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                 (this->fields).dirtyRPCM;
        if ((pLVar2 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) ||
           (RVar3 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                    RegularExpressions::RegexCharClass+SingleRange]::
                    List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                              (pLVar2,index,
                               MethodInfo__System__Collections__Generic__List<RuntimePrototypeCubeModel>__get_Item_int_
                              ), RVar3 == (RegexCharClass_SingleRange)0x0)) goto code_?;
        bVar4 = RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_MeshGenerateDirtyChunksAll
                          ((RuntimePrototypeCubeModel *)RVar3,counter,(MethodInfo *)0x0);
      } while (bVar4 == 0);
      pLVar1 = (this->fields).dirtyRPCM;
      if (pLVar1 == (List_1_RuntimePrototypeCubeModel_ *)0x0) break;
      mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
      List_1_System_Object__RemoveAt
                ((List_1_System_Object_ *)pLVar1,index,
                 MethodInfo__System__Collections__Generic__List<RuntimePrototypeCubeModel>__RemoveAt_int_
                );
    }
  }
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Boolean GenerateDirty(MeshGeneratePriority, Int32 ByRef) */

bool Assembly-CSharp.dll::MVWorldInventory::MVWorldInventory_GenerateDirty
               (MVWorldInventory *this,MeshGeneratePriority__Enum priority,int32_t *counter,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<RuntimePrototypeCubeModel>__RemoveAt_int_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<RuntimePrototypeCubeModel>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<RuntimePrototypeCubeModel>__get_Item_int_
                   );
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).dirtyRPCM;
  if (pLVar1 != (List_1_RuntimePrototypeCubeModel_ *)0x0) {
    index = (int32_t *)(pLVar1->fields)._size;
    while( true ) {
      do {
        index = (int32_t *)((int)index + -1);
        if ((int)index < 0) {
          return 1;
        }
        pLVar2 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                 (this->fields).dirtyRPCM;
        if ((pLVar2 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) ||
           (RVar3 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                    RegularExpressions::RegexCharClass+SingleRange]::
                    List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                              (pLVar2,(int32_t)index,
                               MethodInfo__System__Collections__Generic__List<RuntimePrototypeCubeModel>__get_Item_int_
                              ), RVar3 == (RegexCharClass_SingleRange)0x0)) goto code_?;
      } while (*(MeshGeneratePriority__Enum *)((int)RVar3 + 0x24) != priority);
      pLVar2 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
               (this->fields).dirtyRPCM;
      if ((pLVar2 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) ||
         (RVar3 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                  RegularExpressions::RegexCharClass+SingleRange]::
                  List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                            (pLVar2,(int32_t)index,
                             MethodInfo__System__Collections__Generic__List<RuntimePrototypeCubeModel>__get_Item_int_
                            ), RVar3 == (RegexCharClass_SingleRange)0x0)) break;
      bVar4 = RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_MeshGenerateDirtyChunks
                        ((RuntimePrototypeCubeModel *)RVar3,counter,(MethodInfo *)0x0);
      if (bVar4 == 0) {
        return 0;
      }
      pLVar1 = (this->fields).dirtyRPCM;
      if (pLVar1 == (List_1_RuntimePrototypeCubeModel_ *)0x0) break;
      mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
      List_1_System_Object__RemoveAt
                ((List_1_System_Object_ *)pLVar1,(int32_t)index,
                 MethodInfo__System__Collections__Generic__List<RuntimePrototypeCubeModel>__RemoveAt_int_
                );
      counter = index;
    }
  }
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  bVar4 = (*pcVar5)();
  return bVar4;
}


/* Void LateUpdate() */

void Assembly-CSharp.dll::MVWorldInventory::MVWorldInventory_LateUpdate
               (MVWorldInventory *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<RuntimePrototypeCubeModel>__RemoveAt_int_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<RuntimePrototypeCubeModel>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<RuntimePrototypeCubeModel>__get_Item_int_
                   );
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).dirtyRPCM;
  if (pLVar1 != (List_1_RuntimePrototypeCubeModel_ *)0x0) {
    index = (pLVar1->fields)._size;
    while( true ) {
      do {
        do {
          index = index + -1;
          if (index < 0) {
            bVar2 = MVWorldInventory_GenerateDirty
                              (this,MeshGeneratePriority__Enum_Medium,(int32_t *)&stack0xfffffff8,
                               (MethodInfo *)0x0);
            if (bVar2 != 0) {
              MVWorldInventory_GenerateDirty
                        (this,MeshGeneratePriority__Enum_Low,(int32_t *)&stack0xfffffff8,
                         (MethodInfo *)0x0);
            }
            return;
          }
          pLVar3 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                   (this->fields).dirtyRPCM;
          if ((pLVar3 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)
             || (RVar4 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                         RegularExpressions::RegexCharClass+SingleRange]::
                         List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                   (pLVar3,index,
                                    MethodInfo__System__Collections__Generic__List<RuntimePrototypeCubeModel>__get_Item_int_
                                   ), RVar4 == (RegexCharClass_SingleRange)0x0))
          goto code_?;
        } while (*(int *)((int)RVar4 + 0x24) != 3);
        pLVar3 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                 (this->fields).dirtyRPCM;
        if ((pLVar3 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) ||
           (RVar4 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                    RegularExpressions::RegexCharClass+SingleRange]::
                    List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                              (pLVar3,index,
                               MethodInfo__System__Collections__Generic__List<RuntimePrototypeCubeModel>__get_Item_int_
                              ), RVar4 == (RegexCharClass_SingleRange)0x0)) goto code_?;
        bVar2 = RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_MeshGenerateDirtyChunksAll
                          ((RuntimePrototypeCubeModel *)RVar4,(int32_t *)&stack0xfffffff8,
                           (MethodInfo *)0x0);
      } while (bVar2 == 0);
      pLVar1 = (this->fields).dirtyRPCM;
      if (pLVar1 == (List_1_RuntimePrototypeCubeModel_ *)0x0) break;
      mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
      List_1_System_Object__RemoveAt
                ((List_1_System_Object_ *)pLVar1,index,
                 MethodInfo__System__Collections__Generic__List<RuntimePrototypeCubeModel>__RemoveAt_int_
                );
    }
  }
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void OnReplaceWoPrototype(Int32, Int32) */

void Assembly-CSharp.dll::MVWorldInventory::MVWorldInventory_OnReplaceWoPrototype
               (MVWorldInventory *this,int32_t woId,int32_t worldInventoryId,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_RuntimePrototypeCubeModel>__Add_int__RuntimePrototypeCubeModel_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_PendingPrototypeData>__ContainsKey_int_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_RuntimePrototypeCubeModel>__ContainsKey_int_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_PendingPrototypeData>__Remove_int_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_RuntimePrototypeCubeModel>__get_Item_int_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_PendingPrototypeData>__get_Item_int_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                   );
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__MVCubeModelInstance);
    func_?(&MethodInfo__System__Nullable<float>__get_HasValue__);
    func_?(&MethodInfo__System__Nullable<float>__get_Value__);
    func_?(&StringLiteral_Pending_runtime_prototype_alread);
    func_?(&StringLiteral_protoTypeID);
    cRam_? = '\x01';
  }
  iVar1 = woId;
  pDVar2 = (this->fields).pendingRuntimePrototypes;
  if (pDVar2 == (Dictionary_2_System_Int32_PendingPrototypeData_ *)0x0) goto code_?;
  bVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
          Int32,PendingPrototypeData]::Dictionary_2_System_Int32_PendingPrototypeData__ContainsKey
                    (pDVar2,woId,
                     MethodInfo__System__Collections__Generic__Dictionary<int,_PendingPrototypeData>__ContainsKey_int_
                    );
  if (bVar3 == 0) {
    pMVar4 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if ((pMVar4 == (MVWorldObjectClientManager *)0x0) ||
       (this_01 = (MVCubeModelBase *)
                  MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                            (pMVar4,iVar1,(MethodInfo *)0x0), this_01 == (MVCubeModelBase *)0x0))
    goto code_?;
    bVar5 = (TypeInfo__MVCubeModelInstance->_1).naturalAligment;
    if (((this_01->klass->_1).naturalAligment < bVar5) ||
       ((MVCubeModelInstance__Class *)(this_01->klass->_1).typeHierarchy[bVar5 - 1] !=
        TypeInfo__MVCubeModelInstance)) {
code_?:
      func_?();
      goto code_?;
    }
    iVar1 = MVCubeModelBase::MVCubeModelBase_get_Pid(this_01,(MethodInfo *)0x0);
    pDVar6 = (this->fields).runtimePrototypes;
    if ((pDVar6 == (Dictionary_2_System_Int32_RuntimePrototypeCubeModel_ *)0x0) ||
       (pRVar7 = (RuntimePrototypeCubeModel *)
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                  Object]::Dictionary_2_System_Int32_System_Object__get_Item
                            ((Dictionary_2_System_Int32_System_Object_ *)pDVar6,iVar1,
                             MethodInfo__System__Collections__Generic__Dictionary<int,_RuntimePrototypeCubeModel>__get_Item_int_
                            ), pRVar7 == (RuntimePrototypeCubeModel *)0x0)) goto code_?;
    bVar3 = (bool)*(undefined4 *)&(pRVar7->fields).PendingScaleUpdate;
    woId = 0;
    pRVar7 = RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_CloneGeometry
                        (pRVar7,0,(MethodInfo *)0x0);
    iVar1 = worldInventoryId;
    if (pRVar7 == (RuntimePrototypeCubeModel *)0x0) goto code_?;
    method = (MethodInfo *)0x0;
    (pRVar7->fields).prototypeId = worldInventoryId;
    woId = (int32_t)&UNK_?;
    worldInventoryId = (int32_t)pRVar7;
    RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_set_PrototypeState
              (pRVar7,PrototypeState__Enum_Registered,(MethodInfo *)0x0);
    pDVar6 = (this->fields).runtimePrototypes;
    if (pDVar6 == (Dictionary_2_System_Int32_RuntimePrototypeCubeModel_ *)0x0)
    goto code_?;
    method = (MethodInfo *)&UNK_?;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
    Dictionary_2_System_Int32_System_Object__Add
              ((Dictionary_2_System_Int32_System_Object_ *)pDVar6,iVar1,(Object *)pRVar7,
               MethodInfo__System__Collections__Generic__Dictionary<int,_RuntimePrototypeCubeModel>__Add_int__RuntimePrototypeCubeModel_
              );
    if (pRRam000000d8 == (RuntimePrototypeCubeModel *)0x0) goto code_?;
    RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_RemoveInstance
              (pRRam000000d8,woId,(MethodInfo *)0x0);
    MVCubeModelBase::MVCubeModelBase_set_PrototypeCubeModel
              ((MVCubeModelBase *)0x0,pRVar7,(MethodInfo *)0x0);
    RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_CreateInstance
              (pRVar7,(MVCubeModelBase *)0x0,(MethodInfo *)0x0);
    this_00 = pDRam00000058;
    pOVar8 = (Object *)func_?();
    if (this_00 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__set_Item
              (this_00,(Object *)StringLiteral_protoTypeID,pOVar8,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
              );
  }
  else {
    pDVar2 = (this->fields).pendingRuntimePrototypes;
    if (pDVar2 == (Dictionary_2_System_Int32_PendingPrototypeData_ *)0x0) goto code_?;
    PVar9 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
             Int32,PendingPrototypeData]::Dictionary_2_System_Int32_PendingPrototypeData__get_Item
                       (pDVar2,iVar1,
                        MethodInfo__System__Collections__Generic__Dictionary<int,_PendingPrototypeData>__get_Item_int_
                       );
    iVar1 = worldInventoryId;
    pRVar7 = PVar9.pendingRuntimePrototype;
    if (pRVar7 == (RuntimePrototypeCubeModel *)0x0) goto code_?;
    (pRVar7->fields).prototypeId = worldInventoryId;
    pDVar6 = (this->fields).runtimePrototypes;
    if (pDVar6 == (Dictionary_2_System_Int32_RuntimePrototypeCubeModel_ *)0x0)
    goto code_?;
    bVar10 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Single]::
            Dictionary_2_System_Int32_System_Single__ContainsKey
                      ((Dictionary_2_System_Int32_System_Single_ *)pDVar6,worldInventoryId,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_RuntimePrototypeCubeModel>__ContainsKey_int_
                      );
    bVar3 = (bool)pDVar6;
    if (bVar10 == 0) {
      pDVar6 = (this->fields).runtimePrototypes;
      if (pDVar6 == (Dictionary_2_System_Int32_RuntimePrototypeCubeModel_ *)0x0)
      goto code_?;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
      Dictionary_2_System_Int32_System_Object__Add
                ((Dictionary_2_System_Int32_System_Object_ *)pDVar6,iVar1,(Object *)pRVar7,
                 MethodInfo__System__Collections__Generic__Dictionary<int,_RuntimePrototypeCubeModel>__Add_int__RuntimePrototypeCubeModel_
                );
      RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_set_PrototypeState
                (pRVar7,PrototypeState__Enum_Registered,(MethodInfo *)0x0);
      pMVar4 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      key = woId;
      if (pMVar4 == (MVWorldObjectClientManager *)0x0) goto code_?;
      method = (MethodInfo *)&UNK_?;
      pMVar11 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                          (pMVar4,woId,(MethodInfo *)0x0);
      if (pMVar11 == (MVWorldObject *)0x0) goto code_?;
      bVar5 = (TypeInfo__MVCubeModelInstance->_1).naturalAligment;
      woId = CONCAT13(bVar5,(undefined3)woId);
      if (((pMVar11->klass->_1).naturalAligment < bVar5) ||
         ((MVCubeModelInstance__Class *)(pMVar11->klass->_1).typeHierarchy[bVar5 - 1] !=
          TypeInfo__MVCubeModelInstance)) {
        func_?();
        goto code_?;
      }
      woId = (int32_t)(pMVar11->fields).data;
      pOVar8 = (Object *)func_?();
      if (woId == 0) goto code_?;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__set_Item
                ((Dictionary_2_System_Object_System_Object_ *)woId,
                 (Object *)StringLiteral_protoTypeID,pOVar8,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                );
    }
    else {
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                ((Object *)StringLiteral_Pending_runtime_prototype_alread,(MethodInfo *)0x0);
      key = woId;
    }
    pDVar2 = (this->fields).pendingRuntimePrototypes;
    if (pDVar2 == (Dictionary_2_System_Int32_PendingPrototypeData_ *)0x0) goto code_?;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,PendingPrototypeData]::
    Dictionary_2_System_Int32_PendingPrototypeData__Remove
              (pDVar2,key,
               MethodInfo__System__Collections__Generic__Dictionary<int,_PendingPrototypeData>__Remove_int_
              );
  }
  if (bVar3 == 0) {
    return;
  }
  pMVar12 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
  mscorlib.dll::System::Nullable`1[Single]::Nullable_1_Single__get_Value
            ((Nullable_1_Single_ *)&stack0xffffffe8,MethodInfo__System__Nullable<float>__get_Value__
            );
  if (pMVar12 != (MVNetworkGame_OperationRequests *)0x0) {
    if (cRam_? == '\0') {
      func_?();
      func_?();
      func_?();
      func_?();
      func_?();
      func_?();
      cRam_? = '\x01';
    }
    this_02 = (Dictionary_2_System_Byte_System_Object_ *)
              func_?(
                             TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                             );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object___ctor
              (this_02,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
              );
    woId = iVar1;
    pOVar8 = (Object *)func_?(TypeInfo__System__Int32,&woId);
    if (this_02 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
      Dictionary_2_System_Byte_System_Object__Add
                (this_02,0x2f,pOVar8,
                 MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                );
      pOVar8 = (Object *)func_?(TypeInfo__System__Single,&stack0xfffffff4);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
      Dictionary_2_System_Byte_System_Object__Add
                (this_02,0x22,pOVar8,
                 MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                );
      pPVar13 = (pMVar12->fields).peer;
      if ((TypeInfo__ExitGames__Client__Photon__SendOptions->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
      }
      pSVar14 = TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields;
      uVar15._0_1_ = (pSVar14->SendReliable).Encrypt;
      uVar15._1_1_ = (pSVar14->SendReliable).Channel;
      uVar15._2_2_ = *(undefined2 *)&(pSVar14->SendReliable).field_0x6;
      if (pPVar13 != (PhotonPeer *)0x0) {
        (*(code *)(pPVar13->klass->vtable).SendOperation.method)
                  (pPVar13,8,this_02,(pSVar14->SendReliable).DeliveryMode,uVar15,
                   pPVar13->klass[1]._0.image);
        return;
      }
    }
  }
code_?:
  func_?();
  pcVar16 = (code *)swi(3);
  (*pcVar16)();
  return;
}


/* Void OnUpdatePrototypeEvent(Int32, Byte[]) */

void Assembly-CSharp.dll::MVWorldInventory::MVWorldInventory_OnUpdatePrototypeEvent
               (MVWorldInventory *this,int32_t worldInventoryID,Byte__Array *worldInventoryData,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MV__WorldObject__BytePacker);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_RuntimePrototypeCubeModel>__get_Item_int_
                   );
    cRam_? = '\x01';
  }
  this_00 = (this->fields).runtimePrototypes;
  if (this_00 != (Dictionary_2_System_Int32_RuntimePrototypeCubeModel_ *)0x0) {
    this_01 = (RuntimePrototypeCubeModel *)
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]
              ::Dictionary_2_System_Int32_System_Object__get_Item
                        ((Dictionary_2_System_Int32_System_Object_ *)this_00,worldInventoryID,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_RuntimePrototypeCubeModel>__get_Item_int_
                        );
    this_02 = (BytePacker *)func_?(TypeInfo__MV__WorldObject__BytePacker);
    MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker__ctor_1
              (this_02,worldInventoryData,(MethodInfo *)0x0);
    if (this_01 != (RuntimePrototypeCubeModel *)0x0) {
      RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_UpdatePrototype
                (this_01,this_02,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void OnUpdatePrototypeScaleEvent(Int32, Single) */

void Assembly-CSharp.dll::MVWorldInventory::MVWorldInventory_OnUpdatePrototypeScaleEvent
               (MVWorldInventory *this,int32_t worldInventoryID,float scale,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).runtimePrototypes;
  if (this_00 != (Dictionary_2_System_Int32_RuntimePrototypeCubeModel_ *)0x0) {
    this_01 = (RuntimePrototypeCubeModel *)
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]
              ::Dictionary_2_System_Int32_System_Object__get_Item
                        ((Dictionary_2_System_Int32_System_Object_ *)this_00,worldInventoryID,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_RuntimePrototypeCubeModel>__get_Item_int_
                        );
    if (this_01 != (RuntimePrototypeCubeModel *)0x0) {
      (this_01->fields).PendingScaleUpdate.hasValue = 0;
      *(undefined3 *)&(this_01->fields).PendingScaleUpdate.field_0x1 = 0;
      (this_01->fields).PendingScaleUpdate.value = 0.0;
      RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_UpdatePrototypeScale
                (this_01,scale,(MethodInfo *)0x0);
      return;
    }
  }
  uVar1 = func_?(&stack0xfffffff0);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void RemovePrototype(Int32) */

void Assembly-CSharp.dll::MVWorldInventory::MVWorldInventory_RemovePrototype
               (MVWorldInventory *this,int32_t id,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_RuntimePrototypeCubeModel>__ContainsKey_int_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_RuntimePrototypeCubeModel>__Remove_int_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_RuntimePrototypeCubeModel>__get_Item_int_
                   );
    func_?(&StringLiteral_Failed_to_remove_runtime_prototy);
    cRam_? = '\x01';
  }
  pDVar1 = (this->fields).runtimePrototypes;
  if (pDVar1 != (Dictionary_2_System_Int32_RuntimePrototypeCubeModel_ *)0x0) {
    bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Single]::
            Dictionary_2_System_Int32_System_Single__ContainsKey
                      ((Dictionary_2_System_Int32_System_Single_ *)pDVar1,id,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_RuntimePrototypeCubeModel>__ContainsKey_int_
                      );
    if (bVar2 == 0) {
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Debug);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                ((Object *)StringLiteral_Failed_to_remove_runtime_prototy,(MethodInfo *)0x0);
      return;
    }
    pDVar1 = (this->fields).runtimePrototypes;
    if (pDVar1 != (Dictionary_2_System_Int32_RuntimePrototypeCubeModel_ *)0x0) {
      this_00 = (RuntimePrototypeCubeModel *)
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                Object]::Dictionary_2_System_Int32_System_Object__get_Item
                          ((Dictionary_2_System_Int32_System_Object_ *)pDVar1,id,
                           MethodInfo__System__Collections__Generic__Dictionary<int,_RuntimePrototypeCubeModel>__get_Item_int_
                          );
      if (this_00 != (RuntimePrototypeCubeModel *)0x0) {
        RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_Destroy(this_00,(MethodInfo *)0x0);
        pDVar1 = (this->fields).runtimePrototypes;
        if (pDVar1 != (Dictionary_2_System_Int32_RuntimePrototypeCubeModel_ *)0x0) {
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
          Dictionary_2_System_Int32_System_Object__Remove
                    ((Dictionary_2_System_Int32_System_Object_ *)pDVar1,id,
                     MethodInfo__System__Collections__Generic__Dictionary<int,_RuntimePrototypeCubeModel>__Remove_int_
                    );
          pMVar3 = (this->fields).OnWorldInventoryChange;
          if (pMVar3 != (MVWorldInventory_OnWorldInventoryChangeDelegate *)0x0) {
            pvStack4 = (pMVar3->fields)._._.method;
            pMStack5 = this;
            pvStack6 = (pMVar3->fields)._._.method_code;
            (*(pMVar3->fields)._._.invoke_impl)();
          }
          return;
        }
      }
    }
  }
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void ReplaceWithPendingRuntimePrototype(Int32) */

void Assembly-CSharp.dll::MVWorldInventory::MVWorldInventory_ReplaceWithPendingRuntimePrototype
               (MVWorldInventory *this,int32_t woId,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_PendingPrototypeData>__Add_int__PendingPrototypeData_
                   );
    func_?(&TypeInfo__MVCubeModelInstance);
    cRam_? = '\x01';
  }
  this_03 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (this_03 != (MVWorldObjectClientManager *)0x0) {
    this_04 = (MVCubeModelBase *)
              MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                        (this_03,woId,(MethodInfo *)0x0);
    unaff_ESI = TypeInfo__MVCubeModelInstance;
    if (this_04 != (MVCubeModelBase *)0x0) {
      bVar1 = (TypeInfo__MVCubeModelInstance->_1).naturalAligment;
      if (((this_04->klass->_1).naturalAligment < bVar1) ||
         ((MVCubeModelInstance__Class *)(this_04->klass->_1).typeHierarchy[bVar1 - 1] !=
          TypeInfo__MVCubeModelInstance)) goto code_?;
      this_00 = (this_04->fields).prototypeCubeModel;
      unaff_ESI = (MVCubeModelInstance__Class *)
                  MVCubeModelBase::MVCubeModelBase_get_Pid(this_04,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      this_01 = (this->fields).runtimePrototypes;
      if (this_01 != (Dictionary_2_System_Int32_RuntimePrototypeCubeModel_ *)0x0) {
        this_05 = (RuntimePrototypeCubeModel *)
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                  Object]::Dictionary_2_System_Int32_System_Object__get_Item
                            ((Dictionary_2_System_Int32_System_Object_ *)this_01,(int32_t)unaff_ESI,
                             MethodInfo__System__Collections__Generic__Dictionary<int,_RuntimePrototypeCubeModel>__get_Item_int_
                            );
        if (this_05 != (RuntimePrototypeCubeModel *)0x0) {
          unaff_ESI = (MVCubeModelInstance__Class *)
                      RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_CloneGeometry
                                (this_05,1,(MethodInfo *)0x0);
          if (unaff_ESI != (MVCubeModelInstance__Class *)0x0) {
            RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_set_PrototypeState
                      ((RuntimePrototypeCubeModel *)unaff_ESI,PrototypeState__Enum_Pending,
                       (MethodInfo *)0x0);
            if (this_00 != (RuntimePrototypeCubeModel *)0x0) {
              _Var2 = (_union_86)(this_00->fields).PendingScaleUpdate.value;
              (unaff_ESI->_0).namespaze = *(char **)&(this_00->fields).PendingScaleUpdate;
              (unaff_ESI->_0).byval_arg.data = _Var2;
              (this_00->fields).PendingScaleUpdate.hasValue = 0;
              *(undefined3 *)&(this_00->fields).PendingScaleUpdate.field_0x1 = 0;
              (this_00->fields).PendingScaleUpdate.value = 0.0;
              this_02 = (this_00->fields).deltaCubes;
              if (this_02 != (DeltaCubes *)0x0) {
                DeltaCubes::DeltaCubes_Clear(this_02,(MethodInfo *)0x0);
                RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_RemoveInstance
                          (this_00,0xADDR,(MethodInfo *)0x0);
                MVCubeModelBase::MVCubeModelBase_set_PrototypeCubeModel
                          (this_04,(RuntimePrototypeCubeModel *)unaff_ESI,(MethodInfo *)0x0);
                RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_CreateInstance
                          ((RuntimePrototypeCubeModel *)unaff_ESI,this_04,(MethodInfo *)0x0);
                iVar2 = MVCubeModelBase::MVCubeModelBase_get_Pid(this_04,(MethodInfo *)0x0);
                func_?();
                if (pDRam0000000d != (Dictionary_2_System_Int32_PendingPrototypeData_ *)0x0) {
                  value.pendingRuntimePrototype = (RuntimePrototypeCubeModel *)unaff_ESI;
                  value.prevPrototypeId = iVar2;
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                  Int32,PendingPrototypeData]::Dictionary_2_System_Int32_PendingPrototypeData__Add
                            (pDRam0000000d,0xADDR,value,
                             MethodInfo__System__Collections__Generic__Dictionary<int,_PendingPrototypeData>__Add_int__PendingPrototypeData_
                            );
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
  this_04 = extraout_EDX;
code_?:
  func_?(this_04,unaff_ESI);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void RequestWoMakeUniquePrototype(Int32) */

void Assembly-CSharp.dll::MVWorldInventory::MVWorldInventory_RequestWoMakeUniquePrototype
               (MVWorldInventory *this,int32_t woId,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_PendingPrototypeData>__ContainsKey_int_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_RuntimePrototypeCubeModel>__get_Item_int_
                   );
    func_?(&TypeInfo__MVCubeModelInstance);
    func_?(&StringLiteral_already_pending_);
    func_?(&StringLiteral_The_CubeModel_is_already_unique);
    cRam_? = '\x01';
  }
  this_02 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (this_02 != (MVWorldObjectClientManager *)0x0) {
    this_03 = (MVCubeModelBase *)
              MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                        (this_02,woId,(MethodInfo *)0x0);
    if (this_03 != (MVCubeModelBase *)0x0) {
      bVar1 = (TypeInfo__MVCubeModelInstance->_1).naturalAligment;
      if (((this_03->klass->_1).naturalAligment < bVar1) ||
         ((MVCubeModelInstance__Class *)(this_03->klass->_1).typeHierarchy[bVar1 - 1] !=
          TypeInfo__MVCubeModelInstance)) {
        func_?(this_03,TypeInfo__MVCubeModelInstance);
      }
      else {
        this_00 = (this->fields).runtimePrototypes;
        iVar2 = MVCubeModelBase::MVCubeModelBase_get_Pid(this_03,(MethodInfo *)0x0);
        if (this_00 != (Dictionary_2_System_Int32_RuntimePrototypeCubeModel_ *)0x0) {
          this_04 = (RuntimePrototypeCubeModel *)
                    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                    Object]::Dictionary_2_System_Int32_System_Object__get_Item
                              ((Dictionary_2_System_Int32_System_Object_ *)this_00,iVar2,
                               MethodInfo__System__Collections__Generic__Dictionary<int,_RuntimePrototypeCubeModel>__get_Item_int_
                              );
          if (this_04 != (RuntimePrototypeCubeModel *)0x0) {
            iVar2 = RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_get_InstancesCount
                              (this_04,(MethodInfo *)0x0);
            if (iVar2 == 1) {
              if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
                func_?();
              }
              UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                        ((Object *)StringLiteral_The_CubeModel_is_already_unique,(MethodInfo *)0x0);
              return;
            }
            this_01 = (this->fields).pendingRuntimePrototypes;
            if (this_01 != (Dictionary_2_System_Int32_PendingPrototypeData_ *)0x0) {
              bVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                      Int32,PendingPrototypeData]::
                      Dictionary_2_System_Int32_PendingPrototypeData__ContainsKey
                                (this_01,woId,
                                 MethodInfo__System__Collections__Generic__Dictionary<int,_PendingPrototypeData>__ContainsKey_int_
                                );
              if (bVar3 != 0) {
                if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
                  func_?();
                }
                UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                          ((Object *)StringLiteral_already_pending_,(MethodInfo *)0x0);
                return;
              }
              MVWorldInventory_ReplaceWithPendingRuntimePrototype(this,woId,(MethodInfo *)0x0);
              pMVar4 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests
                                 ((MethodInfo *)0x0);
              if (pMVar4 != (MVNetworkGame_OperationRequests *)0x0) {
                if (cRam_? == '\0') {
                  ppMStack5 =
                       &
                       MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                  ;
                  func_?();
                  func_?();
                  func_?();
                  func_?();
                  func_?();
                  cRam_? = '\x01';
                }
                ppMStack5 =
                     (MethodInfo **)
                     TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                ;
                this_05 = (Dictionary_2_System_Byte_System_Object_ *)func_?();
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::
                Object]::Dictionary_2_System_Byte_System_Object___ctor
                          (this_05,
                           MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                          );
                value = (Object *)func_?();
                if (this_05 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::
                  Object]::Dictionary_2_System_Byte_System_Object__Add
                            (this_05,0x16,value,
                             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                            );
                  pPVar6 = (pMVar4->fields).peer;
                  if ((TypeInfo__ExitGames__Client__Photon__SendOptions->_1).
                      cctor_finished_or_no_cctor == 0) {
                    ppMStack5 =
                         (MethodInfo **)TypeInfo__ExitGames__Client__Photon__SendOptions;
                    func_?();
                  }
                  if (pPVar6 != (PhotonPeer *)0x0) {
                    pPVar7 = pPVar6->klass;
                    ppMStack5 = (MethodInfo **)pPVar7[1]._0.image;
                    (*(code *)(pPVar7->vtable).SendOperation.method)();
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
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void UnpendRuntimePrototype(Int32) */

void Assembly-CSharp.dll::MVWorldInventory::MVWorldInventory_UnpendRuntimePrototype
               (MVWorldInventory *this,int32_t woId,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_PendingPrototypeData>__ContainsKey_int_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_RuntimePrototypeCubeModel>__ContainsKey_int_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_PendingPrototypeData>__Remove_int_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_RuntimePrototypeCubeModel>__get_Item_int_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_PendingPrototypeData>__get_Item_int_
                   );
    func_?(&TypeInfo__MVCubeModelInstance);
    func_?(&StringLiteral_Trying_to_unpend_non_existing_cu);
    func_?(&StringLiteral_Trying_to_unpend_runtime_prototy);
    func_?(&StringLiteral_Trying_to_unpend_but_prev_protot);
    cRam_? = '\x01';
  }
  pDVar1 = (this->fields).pendingRuntimePrototypes;
  if (pDVar1 != (Dictionary_2_System_Int32_PendingPrototypeData_ *)0x0) {
    bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
            Int32,PendingPrototypeData]::Dictionary_2_System_Int32_PendingPrototypeData__ContainsKey
                      (pDVar1,woId,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_PendingPrototypeData>__ContainsKey_int_
                      );
    if (bVar2 == 0) {
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Debug);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                ((Object *)StringLiteral_Trying_to_unpend_runtime_prototy,(MethodInfo *)0x0);
      return;
    }
    this_01 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (this_01 != (MVWorldObjectClientManager *)0x0) {
      this_02 = (MVCubeModelBase *)
                MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                          (this_01,woId,(MethodInfo *)0x0);
      if (this_02 == (MVCubeModelBase *)0x0) {
        if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                  ((Object *)StringLiteral_Trying_to_unpend_non_existing_cu,(MethodInfo *)0x0);
        goto code_?;
      }
      bVar3 = (TypeInfo__MVCubeModelInstance->_1).naturalAligment;
      if (((this_02->klass->_1).naturalAligment < bVar3) ||
         ((MVCubeModelInstance__Class *)(this_02->klass->_1).typeHierarchy[bVar3 - 1] !=
          TypeInfo__MVCubeModelInstance)) goto code_?;
      pDVar1 = (this->fields).pendingRuntimePrototypes;
      if (pDVar1 != (Dictionary_2_System_Int32_PendingPrototypeData_ *)0x0) {
        PVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                Int32,PendingPrototypeData]::
                Dictionary_2_System_Int32_PendingPrototypeData__get_Item
                          (pDVar1,woId,
                           MethodInfo__System__Collections__Generic__Dictionary<int,_PendingPrototypeData>__get_Item_int_
                          );
        if (woId != 0) {
          bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                  Single]::Dictionary_2_System_Int32_System_Single__ContainsKey
                            ((Dictionary_2_System_Int32_System_Single_ *)woId,PVar4.prevPrototypeId,
                             MethodInfo__System__Collections__Generic__Dictionary<int,_RuntimePrototypeCubeModel>__ContainsKey_int_
                            );
          if (bVar2 == 0) {
            if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                      ((Object *)StringLiteral_Trying_to_unpend_but_prev_protot,(MethodInfo *)0x0);
code_?:
            pDVar1 = (this->fields).pendingRuntimePrototypes;
            if (pDVar1 != (Dictionary_2_System_Int32_PendingPrototypeData_ *)0x0) {
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
              Int32,PendingPrototypeData]::Dictionary_2_System_Int32_PendingPrototypeData__Remove
                        (pDVar1,woId,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_PendingPrototypeData>__Remove_int_
                        );
              return;
            }
          }
          else {
            this_00 = (this->fields).runtimePrototypes;
            pDVar1 = (this->fields).pendingRuntimePrototypes;
            if (pDVar1 != (Dictionary_2_System_Int32_PendingPrototypeData_ *)0x0) {
              PVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                      Int32,PendingPrototypeData]::
                      Dictionary_2_System_Int32_PendingPrototypeData__get_Item
                                (pDVar1,woId,
                                 MethodInfo__System__Collections__Generic__Dictionary<int,_PendingPrototypeData>__get_Item_int_
                                );
              if (this_00 != (Dictionary_2_System_Int32_RuntimePrototypeCubeModel_ *)0x0) {
                pRVar5 = (RuntimePrototypeCubeModel *)
                         mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                         Int32,System::Object]::Dictionary_2_System_Int32_System_Object__get_Item
                                   ((Dictionary_2_System_Int32_System_Object_ *)this_00,
                                    PVar4.prevPrototypeId,
                                    MethodInfo__System__Collections__Generic__Dictionary<int,_RuntimePrototypeCubeModel>__get_Item_int_
                                   );
                MVCubeModelBase::MVCubeModelBase_set_PrototypeCubeModel
                          (this_02,pRVar5,(MethodInfo *)0x0);
                pRVar5 = (this_02->fields).prototypeCubeModel;
                if (pRVar5 != (RuntimePrototypeCubeModel *)0x0) {
                  RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_CreateInstance
                            (pRVar5,this_02,(MethodInfo *)0x0);
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
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* MVWorldInventory() */

void Assembly-CSharp.dll::MVWorldInventory::MVWorldInventory__ctor
               (MVWorldInventory *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_RuntimePrototypeCubeModel>__Dictionary__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_PendingPrototypeData>__Dictionary__
                   );
    func_?(&TypeInfo__System__Collections__Generic__Dictionary<int,_PendingPrototypeData>);
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<int,_RuntimePrototypeCubeModel>
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<RuntimePrototypeCubeModel>__List__
                   );
    func_?(&TypeInfo__System__Collections__Generic__List<RuntimePrototypeCubeModel>);
    cRam_? = '\x01';
  }
  pDVar1 = (Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef_ *)
           func_?(
                          TypeInfo__System__Collections__Generic__Dictionary<int,_RuntimePrototypeCubeModel>
                          );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::TextCore::Text
  ::TextResourceManager+FontAssetRef]::
  Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef___ctor
            (pDVar1,
             MethodInfo__System__Collections__Generic__Dictionary<int,_RuntimePrototypeCubeModel>__Dictionary__
            );
  (this->fields).runtimePrototypes = (Dictionary_2_System_Int32_RuntimePrototypeCubeModel_ *)pDVar1;
  func_?(&this->fields,pDVar1);
  pDVar1 = (Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef_ *)
           func_?(
                          TypeInfo__System__Collections__Generic__Dictionary<int,_PendingPrototypeData>
                          );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::TextCore::Text
  ::TextResourceManager+FontAssetRef]::
  Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef___ctor
            (pDVar1,
             MethodInfo__System__Collections__Generic__Dictionary<int,_PendingPrototypeData>__Dictionary__
            );
  ppDVar2 = &(this->fields).pendingRuntimePrototypes;
  *ppDVar2 = (Dictionary_2_System_Int32_PendingPrototypeData_ *)pDVar1;
  func_?(ppDVar2,pDVar1);
  this_00 = (List_1_RuntimePrototypeCubeModel_ *)
            func_?(TypeInfo__System__Collections__Generic__List<RuntimePrototypeCubeModel>)
  ;
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_00,
             MethodInfo__System__Collections__Generic__List<RuntimePrototypeCubeModel>__List__);
  method_00 = (MethodInfo *)&(this->fields).dirtyRPCM;
  *(List_1_RuntimePrototypeCubeModel_ **)method_00 = this_00;
  func_?(method_00,this_00);
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,method_00);
  return;
}

