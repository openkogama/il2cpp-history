
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
    pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
             ::Dictionary_2_System_Object_System_Object__get_Item
                       (data,pOVar2,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    uVar3 = CONCAT44(TypeInfo__System__Int32,pOVar2);
    if (pOVar2 == (Object *)0x0) goto code_?;
    if ((pOVar2->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
    goto code_?;
    func_?(pOVar2);
    uStack_1._0_3_ = CONCAT12(1,(undefined2)uStack_1);
    pOVar2 = (Object *)
             func_?(TypeInfo__MV__WorldObject__PrototypeDataParameters,(int)&uStack_1 + 2);
    pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
             ::Dictionary_2_System_Object_System_Object__get_Item
                       (data,pOVar2,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    uVar3 = CONCAT44(TypeInfo__System__Single,pOVar2);
    if (pOVar2 == (Object *)0x0) goto code_?;
    if ((pOVar2->klass->_0).element_class != (TypeInfo__System__Single->_0).element_class)
    goto code_?;
    pfVar4 = (float *)func_?(pOVar2);
    scale = *pfVar4;
    uStack_1._0_2_ = CONCAT11(3,(undefined1)uStack_1);
    pOVar2 = (Object *)
             func_?(TypeInfo__MV__WorldObject__PrototypeDataParameters,(int)&uStack_1 + 1);
    pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
             ::Dictionary_2_System_Object_System_Object__get_Item
                       (data,pOVar2,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    uVar3 = CONCAT44(TypeInfo__System__Int32,pOVar2);
    if (pOVar2 == (Object *)0x0) goto code_?;
    if ((pOVar2->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
    goto code_?;
    func_?(pOVar2);
    uStack_1 = (RuntimePrototypeCubeModel__Class *)CONCAT31(uStack_1._1_3_,2);
    pOVar2 = (Object *)func_?(TypeInfo__MV__WorldObject__PrototypeDataParameters,&uStack_1)
    ;
    key = unaff_EDI;
    unaff_EDI = (RuntimePrototypeCubeModel__Class *)
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                Object]::Dictionary_2_System_Object_System_Object__get_Item
                          (data,pOVar2,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                          );
    unaff_EBX = (RuntimePrototypeCubeModel__Class *)TypeInfo__System__Byte;
    if (unaff_EDI == (RuntimePrototypeCubeModel__Class *)0x0) {
      data_00 = (Byte__Array *)0x0;
code_?:
      uStack_1 = TypeInfo__RuntimePrototypeCubeModel;
      authorProfileId = &UNK_?;
      unaff_EDI = (RuntimePrototypeCubeModel__Class *)func_?();
      if (unaff_EDI != (RuntimePrototypeCubeModel__Class *)0x0) {
        RuntimePrototypeCubeModel::RuntimePrototypeCubeModel__ctor_1
                  ((RuntimePrototypeCubeModel *)unaff_EDI,(int32_t)key,(int32_t)authorProfileId,
                   scale,data_00,(MethodInfo *)0x0);
        this_00 = (Dictionary_2_System_Object_System_Object_ *)(this->fields).runtimePrototypes;
        unaff_EBX = key;
        if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__Add
                    (this_00,(Object *)key,(Object *)unaff_EDI,
                     MethodInfo__System__Collections__Generic__Dictionary<int,_RuntimePrototypeCubeModel>__Add_int__RuntimePrototypeCubeModel_
                    );
          if ((this->fields).OnWorldInventoryChange !=
              (MVWorldInventory_OnWorldInventoryChangeDelegate *)0x0) {
            (*(((this->fields).OnWorldInventoryChange)->fields)._._.invoke_impl)();
          }
          return;
        }
      }
      goto code_?;
    }
    uStack_1 = (RuntimePrototypeCubeModel__Class *)TypeInfo__System__Byte;
    key = (RuntimePrototypeCubeModel__Class *)&UNK_?;
    data_00 = (Byte__Array *)func_?(unaff_EDI);
    if (data_00 != (Byte__Array *)0x0) goto code_?;
  }
  uStack_1 = unaff_EBX;
  uVar3 = func_?(unaff_EDI);
code_?:
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
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
             mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
             Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                       ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,prototypeId,
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
  if ((this->fields).OnWorldInventoryChange !=
      (MVWorldInventory_OnWorldInventoryChangeDelegate *)0x0) {
    pMVar1 = (this->fields).OnWorldInventoryChange;
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
  pDVar2 = (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)
            (this->fields).pendingRuntimePrototypes;
  if (pDVar2 == (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)0x0)
  goto code_?;
  bVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
          Object,GUILoginHandler+PlanetData]::
          Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                    (pDVar2,(Object *)woId,
                     MethodInfo__System__Collections__Generic__Dictionary<int,_PendingPrototypeData>__ContainsKey_int_
                    );
  if (bVar3 == 0) {
    pMVar4 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if ((pMVar4 == (MVWorldObjectClientManager *)0x0) ||
       (pMVar5 = (MVCubeModelBase *)
                 MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                           (pMVar4,iVar1,(MethodInfo *)0x0), pMVar5 == (MVCubeModelBase *)0x0))
    goto code_?;
    if (((pMVar5->klass->_1).typeHierarchyDepth <
         (TypeInfo__MVCubeModelInstance->_1).typeHierarchyDepth) ||
       ((MVCubeModelInstance__Class *)
        (pMVar5->klass->_1).typeHierarchy
        [(TypeInfo__MVCubeModelInstance->_1).typeHierarchyDepth - 1] !=
        TypeInfo__MVCubeModelInstance)) {
code_?:
      func_?();
      goto code_?;
    }
    key = MVCubeModelBase::MVCubeModelBase_get_Pid(pMVar5,(MethodInfo *)0x0);
    this_00 = (this->fields).runtimePrototypes;
    if ((this_00 == (Dictionary_2_System_Int32_RuntimePrototypeCubeModel_ *)0x0) ||
       (pMVar5 = (MVCubeModelBase *)
                 mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
                 Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                           ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,key,
                            MethodInfo__System__Collections__Generic__Dictionary<int,_RuntimePrototypeCubeModel>__get_Item_int_
                           ), pMVar5 == (MVCubeModelBase *)0x0)) goto code_?;
    bVar3 = (bool)(pMVar5->fields)._._.objectLinkRefs;
    worldInventoryId = 0;
    woId = 0;
    pRVar6 = RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_CloneGeometry
                        ((RuntimePrototypeCubeModel *)pMVar5,0,(MethodInfo *)0x0);
    iVar1 = worldInventoryId;
    if (pRVar6 == (RuntimePrototypeCubeModel *)0x0) goto code_?;
    (pRVar6->fields).prototypeId = worldInventoryId;
    worldInventoryId = (int32_t)&UNK_?;
    method = (MethodInfo *)pRVar6;
    RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_set_PrototypeState
              (pRVar6,PrototypeState__Enum_Registered,(MethodInfo *)0x0);
    pDVar7 = (Dictionary_2_System_Object_System_Object_ *)(this->fields).runtimePrototypes;
    if (pDVar7 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              (pDVar7,(Object *)iVar1,(Object *)pRVar6,
               MethodInfo__System__Collections__Generic__Dictionary<int,_RuntimePrototypeCubeModel>__Add_int__RuntimePrototypeCubeModel_
              );
    this_01 = (pMVar5->fields).prototypeCubeModel;
    if (this_01 == (RuntimePrototypeCubeModel *)0x0) goto code_?;
    RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_RemoveInstance
              (this_01,woId,(MethodInfo *)0x0);
    MVCubeModelBase::MVCubeModelBase_set_PrototypeCubeModel(pMVar5,pRVar6,(MethodInfo *)0x0);
    RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_CreateInstance
              (pRVar6,pMVar5,(MethodInfo *)0x0);
    pDVar7 = (pMVar5->fields)._._.data;
    pOVar8 = (Object *)func_?();
    if (pDVar7 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__set_Item
              (pDVar7,(Object *)StringLiteral_protoTypeID,pOVar8,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
              );
  }
  else {
    pDVar9 = (this->fields).pendingRuntimePrototypes;
    if (pDVar9 == (Dictionary_2_System_Int32_PendingPrototypeData_ *)0x0) goto code_?;
    GVar10 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
             Int32Enum,GamePassesHighScoreList+HighScoreListData]::
             Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData__get_Item
                       ((Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData_ *)
                        pDVar9,iVar1,
                        MethodInfo__System__Collections__Generic__Dictionary<int,_PendingPrototypeData>__get_Item_int_
                       );
    iVar1 = worldInventoryId;
    pRVar6 = (RuntimePrototypeCubeModel *)GVar10.topRank;
    if (pRVar6 == (RuntimePrototypeCubeModel *)0x0) goto code_?;
    (pRVar6->fields).prototypeId = worldInventoryId;
    pDVar2 = (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)
              (this->fields).runtimePrototypes;
    if (pDVar2 == (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)0x0)
    goto code_?;
    bVar11 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
            Object,GUILoginHandler+PlanetData]::
            Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                      (pDVar2,(Object *)worldInventoryId,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_RuntimePrototypeCubeModel>__ContainsKey_int_
                      );
    bVar3 = (bool)pDVar2;
    if (bVar11 == 0) {
      pDVar7 = (Dictionary_2_System_Object_System_Object_ *)(this->fields).runtimePrototypes;
      if (pDVar7 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__Add
                (pDVar7,(Object *)iVar1,(Object *)pRVar6,
                 MethodInfo__System__Collections__Generic__Dictionary<int,_RuntimePrototypeCubeModel>__Add_int__RuntimePrototypeCubeModel_
                );
      RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_set_PrototypeState
                (pRVar6,PrototypeState__Enum_Registered,(MethodInfo *)0x0);
      pMVar4 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      key_00 = woId;
      if ((pMVar4 == (MVWorldObjectClientManager *)0x0) ||
         (woId = (int32_t)MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                                    (pMVar4,woId,(MethodInfo *)0x0),
         (MVWorldObject *)woId == (MVWorldObject *)0x0)) goto code_?;
      if (((((MVWorldObject *)woId)->klass->_1).typeHierarchyDepth <
           (TypeInfo__MVCubeModelInstance->_1).typeHierarchyDepth) ||
         ((MVCubeModelInstance__Class *)
          (((MVWorldObject *)woId)->klass->_1).typeHierarchy
          [(TypeInfo__MVCubeModelInstance->_1).typeHierarchyDepth - 1] !=
          TypeInfo__MVCubeModelInstance)) {
        func_?();
        goto code_?;
      }
      woId = (int32_t)(((MVWorldObject *)woId)->fields).data;
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
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                ((Object *)StringLiteral_Pending_runtime_prototype_alread,(MethodInfo *)0x0);
      key_00 = woId;
    }
    pDVar9 = (this->fields).pendingRuntimePrototypes;
    if (pDVar9 == (Dictionary_2_System_Int32_PendingPrototypeData_ *)0x0) goto code_?;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,PendingPrototypeData]::
    Dictionary_2_System_Int32_PendingPrototypeData__Remove
              (pDVar9,key_00,
               MethodInfo__System__Collections__Generic__Dictionary<int,_PendingPrototypeData>__Remove_int_
              );
  }
  if (bVar3 == 0) {
    return;
  }
  pMVar12 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
  mscorlib.dll::System::Nullable`1[Single]::Nullable_1_Single__get_Value
            ((Nullable_1_Single_ *)&stack0xffffffec,MethodInfo__System__Nullable<float>__get_Value__
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
    pDVar7 = (Dictionary_2_System_Object_System_Object_ *)
              func_?(
                             TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                             );
    if (pDVar7 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
      Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
      ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
                ((ParameterOverride_1_System_Object_ *)pDVar7,
                 MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                );
      woId = iVar1;
      pOVar8 = (Object *)func_?(TypeInfo__System__Int32,&woId);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__Add
                (pDVar7,(Object *)0x2f,pOVar8,
                 MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                );
      pOVar8 = (Object *)func_?(TypeInfo__System__Single,&stack0xfffffff8);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__Add
                (pDVar7,(Object *)0x22,pOVar8,
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
        (*(pPVar13->klass->vtable).SendOperation.methodPtr)
                  (pPVar13,8,pDVar7,(pSVar14->SendReliable).DeliveryMode,uVar15,
                   (pPVar13->klass->vtable).SendOperation.method);
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
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
              Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                        ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,worldInventoryID,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_RuntimePrototypeCubeModel>__get_Item_int_
                        );
    this_02 = (BytePacker *)func_?(TypeInfo__MV__WorldObject__BytePacker);
    if (this_02 != (BytePacker *)0x0) {
      MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker__ctor_1
                (this_02,worldInventoryData,(MethodInfo *)0x0);
      if (this_01 != (RuntimePrototypeCubeModel *)0x0) {
        RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_UpdatePrototype
                  (this_01,this_02,(MethodInfo *)0x0);
        return;
      }
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
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
              Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                        ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,worldInventoryID,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_RuntimePrototypeCubeModel>__get_Item_int_
                        );
    if (this_01 != (RuntimePrototypeCubeModel *)0x0) {
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
  this_00 = (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)
            (this->fields).runtimePrototypes;
  if (this_00 != (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)0x0) {
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
            Object,GUILoginHandler+PlanetData]::
            Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                      (this_00,(Object *)id,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_RuntimePrototypeCubeModel>__ContainsKey_int_
                      );
    if (bVar1 == 0) {
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Debug);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                ((Object *)StringLiteral_Failed_to_remove_runtime_prototy,(MethodInfo *)0x0);
      return;
    }
    pDVar2 = (this->fields).runtimePrototypes;
    if (pDVar2 != (Dictionary_2_System_Int32_RuntimePrototypeCubeModel_ *)0x0) {
      this_01 = (RuntimePrototypeCubeModel *)
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
                Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                          ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar2,id,
                           MethodInfo__System__Collections__Generic__Dictionary<int,_RuntimePrototypeCubeModel>__get_Item_int_
                          );
      if (this_01 != (RuntimePrototypeCubeModel *)0x0) {
        RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_Destroy(this_01,(MethodInfo *)0x0);
        pDVar2 = (this->fields).runtimePrototypes;
        if (pDVar2 != (Dictionary_2_System_Int32_RuntimePrototypeCubeModel_ *)0x0) {
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
          Dictionary_2_System_Int32_System_Object__Remove
                    ((Dictionary_2_System_Int32_System_Object_ *)pDVar2,id,
                     MethodInfo__System__Collections__Generic__Dictionary<int,_RuntimePrototypeCubeModel>__Remove_int_
                    );
          if ((this->fields).OnWorldInventoryChange !=
              (MVWorldInventory_OnWorldInventoryChangeDelegate *)0x0) {
            pMVar3 = (this->fields).OnWorldInventoryChange;
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
  this_03 = (MVCubeModelBase *)
            MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (this_03 != (MVCubeModelBase *)0x0) {
    if (cRam_? == '\0') {
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__TryGetValue_int__MVWorldObjectClient__
                     );
      cRam_? = '\x01';
    }
    this_00 = (Dictionary_2_System_Object_System_Object_ *)(this_03->fields)._._.id;
    if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
      this_03 = (MVCubeModelBase *)0x0;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__TryGetValue
                (this_00,(Object *)woId,(Object **)&stack0xfffffff8,
                 MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__TryGetValue_int__MVWorldObjectClient__
                );
      if (this_03 != (MVCubeModelBase *)0x0) {
        pMVar1 = TypeInfo__MVCubeModelInstance;
        if ((((this_03->klass->_1).typeHierarchyDepth <
              (TypeInfo__MVCubeModelInstance->_1).typeHierarchyDepth) ||
            ((MVCubeModelInstance__Class *)
             (this_03->klass->_1).typeHierarchy
             [(TypeInfo__MVCubeModelInstance->_1).typeHierarchyDepth - 1] !=
             TypeInfo__MVCubeModelInstance)) || (this_03 == (MVCubeModelBase *)0x0))
        goto code_?;
        pRVar2 = (this_03->fields).prototypeCubeModel;
        key_00 = (MVCubeModelBase *)
                 MVCubeModelBase::MVCubeModelBase_get_Pid(this_03,(MethodInfo *)0x0);
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        this_01 = (this->fields).runtimePrototypes;
        if (this_01 != (Dictionary_2_System_Int32_RuntimePrototypeCubeModel_ *)0x0) {
          pRVar3 = (RuntimePrototypeCubeModel *)
                   mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System
                   ::Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                             ((Dictionary_2_System_Int32Enum_System_Object_ *)this_01,
                              (Int32Enum__Enum)key_00,
                              MethodInfo__System__Collections__Generic__Dictionary<int,_RuntimePrototypeCubeModel>__get_Item_int_
                             );
          if (pRVar3 != (RuntimePrototypeCubeModel *)0x0) {
            pRVar3 = RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_CloneGeometry
                               (pRVar3,1,(MethodInfo *)0x0);
            if (pRVar3 != (RuntimePrototypeCubeModel *)0x0) {
              RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_set_PrototypeState
                        (pRVar3,PrototypeState__Enum_Pending,(MethodInfo *)0x0);
              if (pRVar2 != (RuntimePrototypeCubeModel *)0x0) {
                uVar4 = *(undefined3 *)&(pRVar2->fields).PendingScaleUpdate.field_0x1;
                fVar5 = (pRVar2->fields).PendingScaleUpdate.value;
                (pRVar3->fields).PendingScaleUpdate.hasValue =
                     (pRVar2->fields).PendingScaleUpdate.hasValue;
                *(undefined3 *)&(pRVar3->fields).PendingScaleUpdate.field_0x1 = uVar4;
                (pRVar3->fields).PendingScaleUpdate.value = fVar5;
                this_02 = (pRVar2->fields).deltaCubes;
                if (this_02 != (DeltaCubes *)0x0) {
                  DeltaCubes::DeltaCubes_Clear(this_02,(MethodInfo *)0x0);
                  RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_RemoveInstance
                            (pRVar2,0,(MethodInfo *)0x0);
                  MVCubeModelBase::MVCubeModelBase_set_PrototypeCubeModel
                            (this_03,pRVar3,(MethodInfo *)0x0);
                  RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_CreateInstance
                            (pRVar3,this_03,(MethodInfo *)0x0);
                  pSVar6 = (String *)
                           MVCubeModelBase::MVCubeModelBase_get_Pid(this_03,(MethodInfo *)0x0);
                  this_04 = (Dictionary_2_Newtonsoft_Json_Serialization_DefaultSerializationBinder_TypeNameKey_System_Object_
                             *)&UNK_?;
                  this_03 = key_00;
                  pRVar2 = pRVar3;
                  func_?();
                  if (this_04 !=
                      (Dictionary_2_Newtonsoft_Json_Serialization_DefaultSerializationBinder_TypeNameKey_System_Object_
                       *)0x0) {
                    key.TypeName = pSVar6;
                    key.AssemblyName = (String *)pRVar3;
                    mscorlib.dll::System::Collections::Generic::Dictionary`2[Newtonsoft::Json::
                    Serialization::DefaultSerializationBinder+TypeNameKey,System::Object]::
                    Dictionary_2_Newtonsoft_Json_Serialization_DefaultSerializationBinder_TypeNameKey_System_Object__Add
                              (this_04,key,(Object *)pRVar2,
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
  }
  func_?();
  pMVar1 = extraout_EDX;
code_?:
  func_?(this_03,pMVar1);
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
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
    func_?(&StringLiteral_allready_pending_);
    func_?(&StringLiteral_The_cubemodel_is_allready_unique);
    cRam_? = '\x01';
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (pMVar1 != (MVWorldObjectClientManager *)0x0) {
    if (cRam_? == '\0') {
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__TryGetValue_int__MVWorldObjectClient__
                     );
      cRam_? = '\x01';
    }
    key = woId;
    pDVar2 = (Dictionary_2_System_Object_System_Object_ *)(pMVar1->fields).worldObjects;
    this_03 = (MVCubeModelBase *)0x0;
    if (pDVar2 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__TryGetValue
                (pDVar2,(Object *)woId,(Object **)&stack0xfffffff8,
                 MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__TryGetValue_int__MVWorldObjectClient__
                );
      if (this_03 != (MVCubeModelBase *)0x0) {
        if ((((this_03->klass->_1).typeHierarchyDepth <
              (TypeInfo__MVCubeModelInstance->_1).typeHierarchyDepth) ||
            ((MVCubeModelInstance__Class *)
             (this_03->klass->_1).typeHierarchy
             [(TypeInfo__MVCubeModelInstance->_1).typeHierarchyDepth - 1] !=
             TypeInfo__MVCubeModelInstance)) || (this_03 == (MVCubeModelBase *)0x0)) {
          func_?();
        }
        else {
          this_00 = (this->fields).runtimePrototypes;
          key_00 = MVCubeModelBase::MVCubeModelBase_get_Pid(this_03,(MethodInfo *)0x0);
          if (this_00 != (Dictionary_2_System_Int32_RuntimePrototypeCubeModel_ *)0x0) {
            this_02 = (RuntimePrototypeCubeModel *)
                      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                      Int32Enum,System::Object]::
                      Dictionary_2_System_Int32Enum_System_Object__get_Item
                                ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,key_00,
                                 MethodInfo__System__Collections__Generic__Dictionary<int,_RuntimePrototypeCubeModel>__get_Item_int_
                                );
            if (this_02 != (RuntimePrototypeCubeModel *)0x0) {
              woId = (int32_t)&UNK_?;
              method = (MethodInfo *)this_02;
              iVar3 = RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_get_InstancesCount
                                (this_02,(MethodInfo *)0x0);
              if (iVar3 == 1) {
                if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
                  func_?();
                }
                UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                          ((Object *)StringLiteral_The_cubemodel_is_allready_unique,
                           (MethodInfo *)0x0);
                return;
              }
              this_01 = (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)
                        (this->fields).pendingRuntimePrototypes;
              if (this_01 != (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)0x0) {
                method = (MethodInfo *)&UNK_?;
                bVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                        Object,GUILoginHandler+PlanetData]::
                        Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                                  (this_01,(Object *)key,
                                   MethodInfo__System__Collections__Generic__Dictionary<int,_PendingPrototypeData>__ContainsKey_int_
                                  );
                if (bVar4 != 0) {
                  if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
                    func_?();
                  }
                  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                            ((Object *)StringLiteral_allready_pending_,(MethodInfo *)0x0);
                  return;
                }
                MVWorldInventory_ReplaceWithPendingRuntimePrototype(this,key,(MethodInfo *)0x0);
                pMVar5 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests
                                   ((MethodInfo *)0x0);
                if (pMVar5 != (MVNetworkGame_OperationRequests *)0x0) {
                  if (cRam_? == '\0') {
                    func_?();
                    func_?();
                    func_?();
                    func_?();
                    func_?();
                    cRam_? = '\x01';
                  }
                  pDVar2 = (Dictionary_2_System_Object_System_Object_ *)
                           func_?(
                                          TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                                          );
                  if (pDVar2 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
                    Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
                    ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
                              ((ParameterOverride_1_System_Object_ *)pDVar2,
                               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                              );
                    woId = key;
                    value = (Object *)func_?(TypeInfo__System__Int32,&woId);
                    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                    Object]::Dictionary_2_System_Object_System_Object__Add
                              (pDVar2,(Object *)0x16,value,
                               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                              );
                    pPVar6 = (pMVar5->fields).peer;
                    if ((TypeInfo__ExitGames__Client__Photon__SendOptions->_1).
                        cctor_finished_or_no_cctor == 0) {
                      func_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
                    }
                    pSVar7 = TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields;
                    uVar8._0_1_ = (pSVar7->SendReliable).Encrypt;
                    uVar8._1_1_ = (pSVar7->SendReliable).Channel;
                    uVar8._2_2_ = *(undefined2 *)&(pSVar7->SendReliable).field_0x6;
                    if (pPVar6 != (PhotonPeer *)0x0) {
                      (*(pPVar6->klass->vtable).SendOperation.methodPtr)
                                (pPVar6,0x16,pDVar2,(pSVar7->SendReliable).DeliveryMode,uVar8,
                                 (pPVar6->klass->vtable).SendOperation.method);
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
  }
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
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
  pDVar1 = (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)
           (this->fields).pendingRuntimePrototypes;
  if (pDVar1 != (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)0x0) {
    bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
            Object,GUILoginHandler+PlanetData]::
            Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                      (pDVar1,(Object *)woId,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_PendingPrototypeData>__ContainsKey_int_
                      );
    if (bVar2 == 0) {
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Debug);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                ((Object *)StringLiteral_Trying_to_unpend_runtime_prototy,(MethodInfo *)0x0);
      return;
    }
    this_01 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (this_01 != (MVWorldObjectClientManager *)0x0) {
      pMVar3 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                         (this_01,woId,(MethodInfo *)0x0);
      if (pMVar3 == (MVWorldObject *)0x0) {
        if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                  ((Object *)StringLiteral_Trying_to_unpend_non_existing_cu,(MethodInfo *)0x0);
        goto code_?;
      }
      if (((pMVar3->klass->_1).typeHierarchyDepth <
           (TypeInfo__MVCubeModelInstance->_1).typeHierarchyDepth) ||
         ((MVCubeModelInstance__Class *)
          (pMVar3->klass->_1).typeHierarchy
          [(TypeInfo__MVCubeModelInstance->_1).typeHierarchyDepth - 1] !=
          TypeInfo__MVCubeModelInstance)) goto code_?;
      pDVar4 = (this->fields).pendingRuntimePrototypes;
      pDVar1 = (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)
               (this->fields).runtimePrototypes;
      if (pDVar4 != (Dictionary_2_System_Int32_PendingPrototypeData_ *)0x0) {
        GVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                Int32Enum,GamePassesHighScoreList+HighScoreListData]::
                Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData__get_Item
                          ((Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData_
                            *)pDVar4,woId,
                           MethodInfo__System__Collections__Generic__Dictionary<int,_PendingPrototypeData>__get_Item_int_
                          );
        if (pDVar1 != (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)0x0) {
          bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                  Object,GUILoginHandler+PlanetData]::
                  Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                            (pDVar1,(Object *)GVar5.scoreList,
                             MethodInfo__System__Collections__Generic__Dictionary<int,_RuntimePrototypeCubeModel>__ContainsKey_int_
                            );
          if (bVar2 == 0) {
            if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                      ((Object *)StringLiteral_Trying_to_unpend_but_prev_protot,(MethodInfo *)0x0);
code_?:
            pDVar4 = (this->fields).pendingRuntimePrototypes;
            if (pDVar4 != (Dictionary_2_System_Int32_PendingPrototypeData_ *)0x0) {
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
              Int32,PendingPrototypeData]::Dictionary_2_System_Int32_PendingPrototypeData__Remove
                        (pDVar4,woId,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_PendingPrototypeData>__Remove_int_
                        );
              return;
            }
          }
          else {
            pDVar4 = (this->fields).pendingRuntimePrototypes;
            this_00 = (this->fields).runtimePrototypes;
            if (pDVar4 != (Dictionary_2_System_Int32_PendingPrototypeData_ *)0x0) {
              GVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                      Int32Enum,GamePassesHighScoreList+HighScoreListData]::
                      Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData__get_Item
                                ((Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData_
                                  *)pDVar4,woId,
                                 MethodInfo__System__Collections__Generic__Dictionary<int,_PendingPrototypeData>__get_Item_int_
                                );
              if (this_00 != (Dictionary_2_System_Int32_RuntimePrototypeCubeModel_ *)0x0) {
                value = (RuntimePrototypeCubeModel *)
                        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                        Int32Enum,System::Object]::
                        Dictionary_2_System_Int32Enum_System_Object__get_Item
                                  ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,
                                   (Int32Enum__Enum)GVar5.scoreList,
                                   MethodInfo__System__Collections__Generic__Dictionary<int,_RuntimePrototypeCubeModel>__get_Item_int_
                                  );
                MVCubeModelBase::MVCubeModelBase_set_PrototypeCubeModel
                          ((MVCubeModelBase *)woId,value,(MethodInfo *)0x0);
                if (*(RuntimePrototypeCubeModel **)(woId + 0xd8) != (RuntimePrototypeCubeModel *)0x0
                   ) {
                  RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_CreateInstance
                            (*(RuntimePrototypeCubeModel **)(woId + 0xd8),(MVCubeModelBase *)woId,
                             (MethodInfo *)0x0);
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
  this_00 = (Dictionary_2_System_Int32_RuntimePrototypeCubeModel_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<int,_RuntimePrototypeCubeModel>
                           );
  if (this_00 != (Dictionary_2_System_Int32_RuntimePrototypeCubeModel_ *)0x0) {
    Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
    ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
              ((ParameterOverride_1_System_Object_ *)this_00,
               MethodInfo__System__Collections__Generic__Dictionary<int,_RuntimePrototypeCubeModel>__Dictionary__
              );
    (this->fields).runtimePrototypes = this_00;
    func_?(&this->fields,this_00);
    this_01 = (Dictionary_2_System_Int32_PendingPrototypeData_ *)
              func_?(
                             TypeInfo__System__Collections__Generic__Dictionary<int,_PendingPrototypeData>
                             );
    if (this_01 != (Dictionary_2_System_Int32_PendingPrototypeData_ *)0x0) {
      Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
      ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
                ((ParameterOverride_1_System_Object_ *)this_01,
                 MethodInfo__System__Collections__Generic__Dictionary<int,_PendingPrototypeData>__Dictionary__
                );
      (this->fields).pendingRuntimePrototypes = this_01;
      func_?(&(this->fields).pendingRuntimePrototypes,this_01);
      this_02 = (List_1_RuntimePrototypeCubeModel_ *)
                func_?(
                               TypeInfo__System__Collections__Generic__List<RuntimePrototypeCubeModel>
                               );
      if (this_02 != (List_1_RuntimePrototypeCubeModel_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::LowLevelList`1[System::Object]::
        LowLevelList_1_System_Object___ctor
                  ((LowLevelList_1_System_Object_ *)this_02,
                   MethodInfo__System__Collections__Generic__List<RuntimePrototypeCubeModel>__List__
                  );
        method_00 = (MethodInfo *)&(this->fields).dirtyRPCM;
        (this->fields).dirtyRPCM = this_02;
        func_?(method_00,this_02);
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                  ((Object *)this,ExceptionArgument__Enum_obj,method_00);
        return;
      }
    }
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

