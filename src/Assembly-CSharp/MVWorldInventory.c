
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
        } while (*(int *)((int)RVar3 + 0x10) != 3);
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
      } while (*(MeshGeneratePriority__Enum *)((int)RVar3 + 0x10) != priority);
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
        } while (*(int *)((int)RVar4 + 0x10) != 3);
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


/* Void NotifyWorldInventoryChange() */

void Assembly-CSharp.dll::MVWorldInventory::MVWorldInventory_NotifyWorldInventoryChange
               (MVWorldInventory *this,MethodInfo *method)

{
  pMVar1 = (this->fields).OnWorldInventoryChange;
  if (pMVar1 != (MVWorldInventory_OnWorldInventoryChangeDelegate *)0x0) {
    (*(pMVar1->fields)._._.invoke_impl)
              ((pMVar1->fields)._._.method_code,this,(pMVar1->fields)._._.method);
  }
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
       (this_02 = (MVCubeModelBase *)
                  MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                            (pMVar4,iVar1,(MethodInfo *)0x0), this_02 == (MVCubeModelBase *)0x0))
    goto code_?;
    if (((this_02->klass->_1).naturalAligment < (TypeInfo__MVCubeModelInstance->_1).naturalAligment)
       || ((MVCubeModelInstance__Class *)
           (this_02->klass->_1).typeHierarchy
           [(TypeInfo__MVCubeModelInstance->_1).naturalAligment - 1] !=
           TypeInfo__MVCubeModelInstance)) {
code_?:
      func_?();
      goto code_?;
    }
    iVar1 = MVCubeModelBase::MVCubeModelBase_get_Pid(this_02,(MethodInfo *)0x0);
    pDVar5 = (this->fields).runtimePrototypes;
    if ((pDVar5 == (Dictionary_2_System_Int32_RuntimePrototypeCubeModel_ *)0x0) ||
       (pRVar6 = (RuntimePrototypeCubeModel *)
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                  Object]::Dictionary_2_System_Int32_System_Object__get_Item
                            ((Dictionary_2_System_Int32_System_Object_ *)pDVar5,iVar1,
                             MethodInfo__System__Collections__Generic__Dictionary<int,_RuntimePrototypeCubeModel>__get_Item_int_
                            ), pRVar6 == (RuntimePrototypeCubeModel *)0x0)) goto code_?;
    bVar3 = (bool)*(undefined4 *)&(pRVar6->fields).PendingScaleUpdate;
    worldInventoryId = 0;
    woId = 0;
    pRVar6 = RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_CloneGeometry
                        (pRVar6,0,(MethodInfo *)0x0);
    iVar1 = worldInventoryId;
    if (pRVar6 == (RuntimePrototypeCubeModel *)0x0) goto code_?;
    (pRVar6->fields).prototypeId = worldInventoryId;
    worldInventoryId = (int32_t)&UNK_?;
    method = (MethodInfo *)pRVar6;
    RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_set_PrototypeState
              (pRVar6,PrototypeState__Enum_Registered,(MethodInfo *)0x0);
    pDVar5 = (this->fields).runtimePrototypes;
    if (pDVar5 == (Dictionary_2_System_Int32_RuntimePrototypeCubeModel_ *)0x0)
    goto code_?;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
    Dictionary_2_System_Int32_System_Object__Add
              ((Dictionary_2_System_Int32_System_Object_ *)pDVar5,iVar1,(Object *)pRVar6,
               MethodInfo__System__Collections__Generic__Dictionary<int,_RuntimePrototypeCubeModel>__Add_int__RuntimePrototypeCubeModel_
              );
    this_00 = (this_02->fields).prototypeCubeModel;
    if (this_00 == (RuntimePrototypeCubeModel *)0x0) goto code_?;
    RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_RemoveInstance
              (this_00,woId,(MethodInfo *)0x0);
    MVCubeModelBase::MVCubeModelBase_set_PrototypeCubeModel(this_02,pRVar6,(MethodInfo *)0x0);
    RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_CreateInstance
              (pRVar6,this_02,(MethodInfo *)0x0);
    this_01 = (this_02->fields)._._.data;
    pOVar7 = (Object *)func_?();
    if (this_01 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__set_Item
              (this_01,(Object *)StringLiteral_protoTypeID,pOVar7,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
              );
  }
  else {
    pDVar2 = (this->fields).pendingRuntimePrototypes;
    if (pDVar2 == (Dictionary_2_System_Int32_PendingPrototypeData_ *)0x0) goto code_?;
    PVar8 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
             Int32,PendingPrototypeData]::Dictionary_2_System_Int32_PendingPrototypeData__get_Item
                       (pDVar2,iVar1,
                        MethodInfo__System__Collections__Generic__Dictionary<int,_PendingPrototypeData>__get_Item_int_
                       );
    iVar1 = worldInventoryId;
    pRVar6 = PVar8.pendingRuntimePrototype;
    if (pRVar6 == (RuntimePrototypeCubeModel *)0x0) goto code_?;
    (pRVar6->fields).prototypeId = worldInventoryId;
    pDVar5 = (this->fields).runtimePrototypes;
    if (pDVar5 == (Dictionary_2_System_Int32_RuntimePrototypeCubeModel_ *)0x0)
    goto code_?;
    bVar9 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Single]::
            Dictionary_2_System_Int32_System_Single__ContainsKey
                      ((Dictionary_2_System_Int32_System_Single_ *)pDVar5,worldInventoryId,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_RuntimePrototypeCubeModel>__ContainsKey_int_
                      );
    bVar3 = (bool)pDVar5;
    if (bVar9 == 0) {
      pDVar5 = (this->fields).runtimePrototypes;
      if (pDVar5 == (Dictionary_2_System_Int32_RuntimePrototypeCubeModel_ *)0x0)
      goto code_?;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
      Dictionary_2_System_Int32_System_Object__Add
                ((Dictionary_2_System_Int32_System_Object_ *)pDVar5,iVar1,(Object *)pRVar6,
                 MethodInfo__System__Collections__Generic__Dictionary<int,_RuntimePrototypeCubeModel>__Add_int__RuntimePrototypeCubeModel_
                );
      RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_set_PrototypeState
                (pRVar6,PrototypeState__Enum_Registered,(MethodInfo *)0x0);
      pMVar4 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      key = woId;
      if ((pMVar4 == (MVWorldObjectClientManager *)0x0) ||
         (woId = (int32_t)MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                                    (pMVar4,woId,(MethodInfo *)0x0),
         (MVWorldObject *)woId == (MVWorldObject *)0x0)) goto code_?;
      if (((((MVWorldObject *)woId)->klass->_1).naturalAligment <
           (TypeInfo__MVCubeModelInstance->_1).naturalAligment) ||
         ((MVCubeModelInstance__Class *)
          (((MVWorldObject *)woId)->klass->_1).typeHierarchy
          [(TypeInfo__MVCubeModelInstance->_1).naturalAligment - 1] != TypeInfo__MVCubeModelInstance
         )) {
        func_?();
        goto code_?;
      }
      woId = (int32_t)(((MVWorldObject *)woId)->fields).data;
      pOVar7 = (Object *)func_?();
      if (woId == 0) goto code_?;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__set_Item
                ((Dictionary_2_System_Object_System_Object_ *)woId,
                 (Object *)StringLiteral_protoTypeID,pOVar7,
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
  pMVar10 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
  mscorlib.dll::System::Nullable`1[Single]::Nullable_1_Single__get_Value
            ((Nullable_1_Single_ *)&stack0xffffffec,MethodInfo__System__Nullable<float>__get_Value__
            );
  if (pMVar10 != (MVNetworkGame_OperationRequests *)0x0) {
    if (cRam_? == '\0') {
      func_?();
      func_?();
      func_?();
      func_?();
      func_?();
      func_?();
      cRam_? = '\x01';
    }
    this_03 = (Dictionary_2_System_Byte_System_Object_ *)
              func_?(
                             TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                             );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object___ctor
              (this_03,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
              );
    woId = iVar1;
    pOVar7 = (Object *)func_?(TypeInfo__System__Int32,&woId);
    if (this_03 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
      Dictionary_2_System_Byte_System_Object__Add
                (this_03,0x2f,pOVar7,
                 MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                );
      pOVar7 = (Object *)func_?(TypeInfo__System__Single,&stack0xfffffff8);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
      Dictionary_2_System_Byte_System_Object__Add
                (this_03,0x22,pOVar7,
                 MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                );
      pPVar11 = (pMVar10->fields).peer;
      if ((TypeInfo__ExitGames__Client__Photon__SendOptions->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
      }
      pSVar12 = TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields;
      uVar13._0_1_ = (pSVar12->SendReliable).Encrypt;
      uVar13._1_1_ = (pSVar12->SendReliable).Channel;
      uVar13._2_2_ = *(undefined2 *)&(pSVar12->SendReliable).field_0x6;
      if (pPVar11 != (PhotonPeer *)0x0) {
        (*(code *)(pPVar11->klass->vtable).SendOperation.method)
                  (pPVar11,8,this_03,(pSVar12->SendReliable).DeliveryMode,uVar13,
                   pPVar11->klass[1]._0.image);
        return;
      }
    }
  }
code_?:
  func_?();
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
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
    unaff_ESI = (MVCubeModelBase *)
                MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                          (this_03,woId,(MethodInfo *)0x0);
    if (unaff_ESI != (MVCubeModelBase *)0x0) {
      pMVar1 = TypeInfo__MVCubeModelInstance;
      if (((unaff_ESI->klass->_1).naturalAligment <
           (TypeInfo__MVCubeModelInstance->_1).naturalAligment) ||
         ((MVCubeModelInstance__Class *)
          (unaff_ESI->klass->_1).typeHierarchy
          [(TypeInfo__MVCubeModelInstance->_1).naturalAligment - 1] != TypeInfo__MVCubeModelInstance
         )) goto code_?;
      this_00 = (unaff_ESI->fields).prototypeCubeModel;
      iVar2 = MVCubeModelBase::MVCubeModelBase_get_Pid(unaff_ESI,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      this_01 = (this->fields).runtimePrototypes;
      if (this_01 != (Dictionary_2_System_Int32_RuntimePrototypeCubeModel_ *)0x0) {
        this_04 = (RuntimePrototypeCubeModel *)
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                  Object]::Dictionary_2_System_Int32_System_Object__get_Item
                            ((Dictionary_2_System_Int32_System_Object_ *)this_01,iVar2,
                             MethodInfo__System__Collections__Generic__Dictionary<int,_RuntimePrototypeCubeModel>__get_Item_int_
                            );
        if (this_04 != (RuntimePrototypeCubeModel *)0x0) {
          this_05 = (MVCubeModelBase *)
                    RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_CloneGeometry
                              (this_04,1,(MethodInfo *)0x0);
          if (this_05 != (MVCubeModelBase *)0x0) {
            RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_set_PrototypeState
                      ((RuntimePrototypeCubeModel *)this_05,PrototypeState__Enum_Pending,
                       (MethodInfo *)0x0);
            if (this_00 != (RuntimePrototypeCubeModel *)0x0) {
              fVar3 = (this_00->fields).PendingScaleUpdate.value;
              (this_05->fields)._._.objectLinkRefs =
                   *(List_1_MV_WorldObject_ObjectLink_ **)&(this_00->fields).PendingScaleUpdate;
              (this_05->fields)._._.ownerActorNr = (int32_t)fVar3;
              (this_00->fields).PendingScaleUpdate.hasValue = 0;
              *(undefined3 *)&(this_00->fields).PendingScaleUpdate.field_0x1 = 0;
              (this_00->fields).PendingScaleUpdate.value = 0.0;
              this_02 = (this_00->fields).deltaCubes;
              if (this_02 != (DeltaCubes *)0x0) {
                DeltaCubes::DeltaCubes_Clear(this_02,(MethodInfo *)0x0);
                RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_RemoveInstance
                          (this_00,0xADDR,(MethodInfo *)0x0);
                MVCubeModelBase::MVCubeModelBase_set_PrototypeCubeModel
                          (unaff_ESI,(RuntimePrototypeCubeModel *)this_05,(MethodInfo *)0x0);
                RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_CreateInstance
                          ((RuntimePrototypeCubeModel *)this_05,unaff_ESI,(MethodInfo *)0x0);
                iVar2 = MVCubeModelBase::MVCubeModelBase_get_Pid(unaff_ESI,(MethodInfo *)0x0);
                unaff_ESI = this_05;
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
  pMVar1 = extraout_EDX;
code_?:
  func_?(unaff_ESI,pMVar1);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
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
      if (((this_03->klass->_1).naturalAligment <
           (TypeInfo__MVCubeModelInstance->_1).naturalAligment) ||
         ((MVCubeModelInstance__Class *)
          (this_03->klass->_1).typeHierarchy
          [(TypeInfo__MVCubeModelInstance->_1).naturalAligment - 1] != TypeInfo__MVCubeModelInstance
         )) {
        func_?(this_03,TypeInfo__MVCubeModelInstance);
      }
      else {
        this_00 = (this->fields).runtimePrototypes;
        iVar1 = MVCubeModelBase::MVCubeModelBase_get_Pid(this_03,(MethodInfo *)0x0);
        if (this_00 != (Dictionary_2_System_Int32_RuntimePrototypeCubeModel_ *)0x0) {
          this_04 = (RuntimePrototypeCubeModel *)
                    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                    Object]::Dictionary_2_System_Int32_System_Object__get_Item
                              ((Dictionary_2_System_Int32_System_Object_ *)this_00,iVar1,
                               MethodInfo__System__Collections__Generic__Dictionary<int,_RuntimePrototypeCubeModel>__get_Item_int_
                              );
          if (this_04 != (RuntimePrototypeCubeModel *)0x0) {
            iVar1 = RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_get_InstancesCount
                              (this_04,(MethodInfo *)0x0);
            if (iVar1 == 1) {
              if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
                func_?();
              }
              UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                        ((Object *)StringLiteral_The_CubeModel_is_already_unique,(MethodInfo *)0x0);
              return;
            }
            this_01 = (this->fields).pendingRuntimePrototypes;
            if (this_01 != (Dictionary_2_System_Int32_PendingPrototypeData_ *)0x0) {
              bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                      Int32,PendingPrototypeData]::
                      Dictionary_2_System_Int32_PendingPrototypeData__ContainsKey
                                (this_01,woId,
                                 MethodInfo__System__Collections__Generic__Dictionary<int,_PendingPrototypeData>__ContainsKey_int_
                                );
              if (bVar2 != 0) {
                if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
                  func_?();
                }
                UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                          ((Object *)StringLiteral_already_pending_,(MethodInfo *)0x0);
                return;
              }
              MVWorldInventory_ReplaceWithPendingRuntimePrototype(this,woId,(MethodInfo *)0x0);
              pMVar3 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests
                                 ((MethodInfo *)0x0);
              if (pMVar3 != (MVNetworkGame_OperationRequests *)0x0) {
                if (cRam_? == '\0') {
                  ppMStack4 =
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
                ppMStack4 =
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
                  pPVar5 = (pMVar3->fields).peer;
                  if ((TypeInfo__ExitGames__Client__Photon__SendOptions->_1).
                      cctor_finished_or_no_cctor == 0) {
                    ppMStack4 =
                         (MethodInfo **)TypeInfo__ExitGames__Client__Photon__SendOptions;
                    func_?();
                  }
                  if (pPVar5 != (PhotonPeer *)0x0) {
                    pPVar6 = pPVar5->klass;
                    ppMStack4 = (MethodInfo **)pPVar6[1]._0.image;
                    (*(code *)(pPVar6->vtable).SendOperation.method)();
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
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
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
      if (((this_02->klass->_1).naturalAligment <
           (TypeInfo__MVCubeModelInstance->_1).naturalAligment) ||
         ((MVCubeModelInstance__Class *)
          (this_02->klass->_1).typeHierarchy
          [(TypeInfo__MVCubeModelInstance->_1).naturalAligment - 1] != TypeInfo__MVCubeModelInstance
         )) goto code_?;
      pDVar1 = (this->fields).pendingRuntimePrototypes;
      if (pDVar1 != (Dictionary_2_System_Int32_PendingPrototypeData_ *)0x0) {
        PVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                Int32,PendingPrototypeData]::
                Dictionary_2_System_Int32_PendingPrototypeData__get_Item
                          (pDVar1,woId,
                           MethodInfo__System__Collections__Generic__Dictionary<int,_PendingPrototypeData>__get_Item_int_
                          );
        if (woId != 0) {
          bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                  Single]::Dictionary_2_System_Int32_System_Single__ContainsKey
                            ((Dictionary_2_System_Int32_System_Single_ *)woId,PVar3.prevPrototypeId,
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
              PVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                      Int32,PendingPrototypeData]::
                      Dictionary_2_System_Int32_PendingPrototypeData__get_Item
                                (pDVar1,woId,
                                 MethodInfo__System__Collections__Generic__Dictionary<int,_PendingPrototypeData>__get_Item_int_
                                );
              if (this_00 != (Dictionary_2_System_Int32_RuntimePrototypeCubeModel_ *)0x0) {
                pRVar4 = (RuntimePrototypeCubeModel *)
                         mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                         Int32,System::Object]::Dictionary_2_System_Int32_System_Object__get_Item
                                   ((Dictionary_2_System_Int32_System_Object_ *)this_00,
                                    PVar3.prevPrototypeId,
                                    MethodInfo__System__Collections__Generic__Dictionary<int,_RuntimePrototypeCubeModel>__get_Item_int_
                                   );
                MVCubeModelBase::MVCubeModelBase_set_PrototypeCubeModel
                          (this_02,pRVar4,(MethodInfo *)0x0);
                pRVar4 = (this_02->fields).prototypeCubeModel;
                if (pRVar4 != (RuntimePrototypeCubeModel *)0x0) {
                  RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_CreateInstance
                            (pRVar4,this_02,(MethodInfo *)0x0);
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
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
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
  (this->fields).pendingRuntimePrototypes =
       (Dictionary_2_System_Int32_PendingPrototypeData_ *)pDVar1;
  func_?(&(this->fields).pendingRuntimePrototypes,pDVar1);
  this_00 = (List_1_RuntimePrototypeCubeModel_ *)
            func_?(TypeInfo__System__Collections__Generic__List<RuntimePrototypeCubeModel>)
  ;
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_00,
             MethodInfo__System__Collections__Generic__List<RuntimePrototypeCubeModel>__List__);
  method_00 = (MethodInfo *)&(this->fields).dirtyRPCM;
  (this->fields).dirtyRPCM = this_00;
  func_?(method_00,this_00);
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            ((Object *)this,ExceptionArgument__Enum_obj,method_00);
  return;
}

