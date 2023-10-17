
/* KoGaMaPackageClient GetKoGaMaPackageFromItem(MVItem) */

KoGaMaPackageClient *
Assembly-CSharp.dll::ARepository::ARepository_GetKoGaMaPackageFromItem
          (MVItem *item,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MV__WorldObject__BytePacker);
    func_?(&TypeInfo__KoGaMaPackageClient);
    cRam_? = '\x01';
  }
  if (item != (MVItem *)0x0) {
    buffer = (item->fields).data;
    this_00 = (BytePacker *)func_?(TypeInfo__MV__WorldObject__BytePacker);
    if (this_00 != (BytePacker *)0x0) {
      MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker__ctor_1
                (this_00,buffer,(MethodInfo *)0x0);
      pKVar1 = (KoGaMaPackageClient *)func_?(TypeInfo__KoGaMaPackageClient);
      if (pKVar1 != (KoGaMaPackageClient *)0x0) {
        KoGaMaPackageClient::KoGaMaPackageClient__ctor(pKVar1,this_00,0,(MethodInfo *)0x0);
        if (cRam_? == '\0') {
          func_?(&
                          MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Item_int_
                         );
          cRam_? = '\x01';
        }
        this = (pKVar1->fields).worldObjects;
        if (this != (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0) {
          this_01 = (MVWorldObjectClient *)
                    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                    Int32Enum,System::Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                              ((Dictionary_2_System_Int32Enum_System_Object_ *)this,
                               (pKVar1->fields).worldObjectRoot,
                               MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Item_int_
                              );
          if (this_01 != (MVWorldObjectClient *)0x0) {
            MVWorldObjectClient::MVWorldObjectClient_InventoryInitialize(this_01,(MethodInfo *)0x0);
            return pKVar1;
          }
        }
      }
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  pKVar1 = (KoGaMaPackageClient *)(*pcVar2)();
  return pKVar1;
}


/* Void GetWorldObjectTypeFromMVItemData(Byte[], ARepository+OnWorldObjectTypeExtracted) */

void Assembly-CSharp.dll::ARepository::ARepository_GetWorldObjectTypeFromMVItemData
               (Byte__Array *data,ARepository_OnWorldObjectTypeExtracted *onWorldObjectExtracted,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MV__WorldObject__BytePacker);
    func_?(&TypeInfo__KoGaMaDataHandler);
    func_?(&
                    MethodInfo__ARepository____c__DisplayClass11_0___GetWorldObjectTypeFromMVItemData_b__0_System__Collections__Generic__Dictionary<System::Object,_System::Object>__MV__WorldObject__KogamaDataType_
                   );
    func_?(&TypeInfo__ARepository____c__DisplayClass11_0);
    func_?(&
                    TypeInfo__UnityEngine__Events__UnityAction<System::Collections::Generic::Dictionary<System::Object,_System::Object>,_MV::WorldObject::KogamaDataType>
                   );
    cRam_? = '\x01';
  }
  value = (Object *)func_?(TypeInfo__ARepository____c__DisplayClass11_0);
  if (value != (Object *)0x0) {
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              (value,ExceptionArgument__Enum_obj,unaff_EDI);
    value[1].klass = (Object__Class *)onWorldObjectExtracted;
    func_?(value + 1,onWorldObjectExtracted);
    this = (UnityAction_2_System_Object_System_ByteEnum_ *)
           func_?(
                          TypeInfo__UnityEngine__Events__UnityAction<System::Collections::Generic::Dictionary<System::Object,_System::Object>,_MV::WorldObject::KogamaDataType>
                          );
    if (this != (UnityAction_2_System_Object_System_ByteEnum_ *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
      ByteEnum]::UnityAction_2_System_Object_System_ByteEnum___ctor
                (this,value,
                 MethodInfo__ARepository____c__DisplayClass11_0___GetWorldObjectTypeFromMVItemData_b__0_System__Collections__Generic__Dictionary<System::Object,_System::Object>__MV__WorldObject__KogamaDataType_
                 ,(MethodInfo *)0x0);
      this_00 = (BytePacker *)func_?(TypeInfo__MV__WorldObject__BytePacker);
      if (this_00 != (BytePacker *)0x0) {
        MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker__ctor_1
                  (this_00,data,(MethodInfo *)0x0);
        if ((TypeInfo__KoGaMaDataHandler->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__KoGaMaDataHandler);
        }
        KoGaMaDataHandler::KoGaMaDataHandler_GetKoGaMaData
                  (this_00,(UnityAction_2_System_Collections_Generic_Dictionary_2_System_Object_System_Object_MV_WorldObject_KogamaDataType_
                            *)this,0,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void MoveItem(Int32, Int32) */

void Assembly-CSharp.dll::ARepository::ARepository_MoveItem
               (ARepository *this,int32_t itemId,int32_t slotIndex,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                   );
    func_?(&TypeInfo__System__Int32);
    cRam_? = '\x01';
  }
  pAVar1 = this;
  this = (ARepository *)itemId;
  this_00 = (pAVar1->fields).itemIDToInventorySlotIndex;
  key = (Object *)func_?(TypeInfo__System__Int32,&this);
  itemId = slotIndex;
  value = (Object *)func_?(TypeInfo__System__Int32,&itemId);
  if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__set_Item
              (this_00,key,value,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
              );
    if ((pAVar1->fields).OnRepositoryChange != (ARepository_OnRepositoryChangeDelegate *)0x0) {
      pAVar2 = (pAVar1->fields).OnRepositoryChange;
      (*(pAVar2->fields)._._.invoke_impl)
                ((pAVar2->fields)._._.method_code,pAVar1,(pAVar2->fields)._._.method);
    }
    return;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void NotifyRepositoryChange() */

void Assembly-CSharp.dll::ARepository::ARepository_NotifyRepositoryChange
               (ARepository *this,MethodInfo *method)

{
  if ((this->fields).OnRepositoryChange != (ARepository_OnRepositoryChangeDelegate *)0x0) {
    pAVar1 = (this->fields).OnRepositoryChange;
    (*(pAVar1->fields)._._.invoke_impl)
              ((pAVar1->fields)._._.method_code,this,(pAVar1->fields)._._.method);
  }
  return;
}


/* Void RemoveItem(Int32) */

void Assembly-CSharp.dll::ARepository::ARepository_RemoveItem
               (ARepository *this,int32_t itemId,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Remove_System__Object_
                   );
    func_?(&TypeInfo__System__Int32);
    cRam_? = '\x01';
  }
  pAVar1 = this;
  this = (ARepository *)itemId;
  this_00 = (pAVar1->fields).itemIDToInventorySlotIndex;
  key = (Object *)func_?(TypeInfo__System__Int32,&this);
  if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Remove
              (this_00,key,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Remove_System__Object_
              );
    if ((pAVar1->fields).OnRepositoryChange != (ARepository_OnRepositoryChangeDelegate *)0x0) {
      pAVar2 = (pAVar1->fields).OnRepositoryChange;
      (*(pAVar2->fields)._._.invoke_impl)
                ((pAVar2->fields)._._.method_code,pAVar1,(pAVar2->fields)._._.method);
    }
    return;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void SwapItems(Int32, Int32) */

void Assembly-CSharp.dll::ARepository::ARepository_SwapItems
               (ARepository *this,int32_t itemId1,int32_t itemId2,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                   );
    func_?(&TypeInfo__System__Int32);
    cRam_? = '\x01';
  }
  iVar1 = itemId1;
  pAVar2 = this;
  pDVar3 = (this->fields).itemIDToInventorySlotIndex;
  this = (ARepository *)itemId1;
  pOVar4 = (Object *)func_?(TypeInfo__System__Int32,&this);
  if (pDVar3 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    pOVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
             ::Dictionary_2_System_Object_System_Object__get_Item
                       (pDVar3,pOVar4,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    uVar5 = CONCAT44(TypeInfo__System__Int32,pOVar4);
    if (pOVar4 != (Object *)0x0) {
      if ((pOVar4->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
      goto code_?;
      puVar6 = (undefined4 *)func_?(pOVar4);
      puStack_7 = (undefined *)*puVar6;
      pDStack_8 = (pAVar2->fields).itemIDToInventorySlotIndex;
      itemId1 = iVar1;
      pOStack_9 = (Object *)func_?(TypeInfo__System__Int32,&itemId1);
      iVar1 = itemId2;
      pDVar3 = (pAVar2->fields).itemIDToInventorySlotIndex;
      iStack_10 = itemId2;
      pOVar4 = (Object *)func_?(TypeInfo__System__Int32,&iStack_10);
      if (pDVar3 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
        pOVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                 Object]::Dictionary_2_System_Object_System_Object__get_Item
                           (pDVar3,pOVar4,
                            MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                           );
        uVar5 = CONCAT44(TypeInfo__System__Int32,pOVar4);
        if (pOVar4 != (Object *)0x0) {
          if ((pOVar4->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
          goto code_?;
          puVar6 = (undefined4 *)func_?(pOVar4);
          uStack_11 = *puVar6;
          pOVar4 = (Object *)func_?(TypeInfo__System__Int32,&uStack_11);
          if (pDStack_8 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
            ::Dictionary_2_System_Object_System_Object__set_Item
                      (pDStack_8,pOStack_9,pOVar4,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                      );
            pDVar3 = (pAVar2->fields).itemIDToInventorySlotIndex;
            pAStack_12 = (ARepository *)iVar1;
            pOVar4 = (Object *)func_?(TypeInfo__System__Int32,&pAStack_12);
            puStack_13 = puStack_7;
            value = (Object *)func_?(TypeInfo__System__Int32,&puStack_13);
            if (pDVar3 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
              Object]::Dictionary_2_System_Object_System_Object__set_Item
                        (pDVar3,pOVar4,value,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                        );
              if ((pAVar2->fields).OnRepositoryChange !=
                  (ARepository_OnRepositoryChangeDelegate *)0x0) {
                pAVar14 = (pAVar2->fields).OnRepositoryChange;
                pOStack_9 = (pAVar14->fields)._._.method;
                pAStack_12 = pAVar2;
                puStack_7 = (pAVar14->fields)._._.method_code;
                (*(pAVar14->fields)._._.invoke_impl)();
              }
              return;
            }
          }
        }
      }
    }
  }
  uVar5 = func_?();
code_?:
  func_?(uVar5);
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
  return;
}


/* ARepository() */

void Assembly-CSharp.dll::ARepository::ARepository__ctor(ARepository *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_System::String>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   );
    func_?(&TypeInfo__System__Collections__Generic__Dictionary<int,_System::String>);
    cRam_? = '\x01';
  }
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_EDI);
  this_00 = (Dictionary_2_System_Int32_System_String_ *)
            func_?(TypeInfo__System__Collections__Generic__Dictionary<int,_System::String>)
  ;
  if (this_00 != (Dictionary_2_System_Int32_System_String_ *)0x0) {
    Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
    ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
              ((ParameterOverride_1_System_Object_ *)this_00,
               MethodInfo__System__Collections__Generic__Dictionary<int,_System::String>__Dictionary__
              );
    (this->fields).PlanetOwnershipTypes = this_00;
    func_?(&(this->fields).PlanetOwnershipTypes,this_00);
    this_01 = (Dictionary_2_System_Object_System_Object_ *)
              func_?(
                             TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                             );
    if (this_01 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
      Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
      ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
                ((ParameterOverride_1_System_Object_ *)this_01,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                );
      (this->fields).itemIDToInventorySlotIndex = this_01;
      func_?(&(this->fields).itemIDToInventorySlotIndex,this_01);
      return;
    }
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

