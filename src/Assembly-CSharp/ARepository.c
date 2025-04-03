
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
    MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker__ctor_1
              (this_00,buffer,(MethodInfo *)0x0);
    pKVar1 = (KoGaMaPackageClient *)func_?(TypeInfo__KoGaMaPackageClient);
    if (cRam_? == '\0') {
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::ObjectLink>__Dictionary__
                     );
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<int,_RuntimePrototypeCubeModel>__Dictionary__
                     );
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__Dictionary__
                     );
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::Link>__Dictionary__
                     );
      func_?(&
                      TypeInfo__System__Collections__Generic__Dictionary<int,_RuntimePrototypeCubeModel>
                     );
      func_?(&
                      TypeInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::Link>
                     );
      func_?(&
                      TypeInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::ObjectLink>
                     );
      func_?(&TypeInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>)
      ;
      func_?(&TypeInfo__KoGaMaDataHandler);
      func_?(&
                      MethodInfo__KoGaMaPackageClient__HandleDeserializedData_System__Collections__Generic__Dictionary<System::Object,_System::Object>__MV__WorldObject__KogamaDataType_
                     );
      func_?(&
                      TypeInfo__UnityEngine__Events__UnityAction<System::Collections::Generic::Dictionary<System::Object,_System::Object>,_MV::WorldObject::KogamaDataType>
                     );
      cRam_? = '\x01';
    }
    pDVar2 = (Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef_
              *)func_?(
                               TypeInfo__System__Collections__Generic__Dictionary<int,_RuntimePrototypeCubeModel>
                               );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::TextCore::
    Text::TextResourceManager+FontAssetRef]::
    Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef___ctor
              (pDVar2,
               MethodInfo__System__Collections__Generic__Dictionary<int,_RuntimePrototypeCubeModel>__Dictionary__
              );
    (pKVar1->fields).prototypes = (Dictionary_2_System_Int32_RuntimePrototypeCubeModel_ *)pDVar2;
    func_?(&pKVar1->fields,pDVar2);
    pDVar2 = (Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef_
              *)func_?(
                               TypeInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>
                               );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::TextCore::
    Text::TextResourceManager+FontAssetRef]::
    Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef___ctor
              (pDVar2,
               MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__Dictionary__
              );
    ppDVar3 = &(pKVar1->fields).worldObjects;
    *ppDVar3 = (Dictionary_2_System_Int32_MVWorldObjectClient_ *)pDVar2;
    func_?(ppDVar3,pDVar2);
    pDVar2 = (Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef_
              *)func_?(
                               TypeInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::Link>
                               );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::TextCore::
    Text::TextResourceManager+FontAssetRef]::
    Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef___ctor
              (pDVar2,
               MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::Link>__Dictionary__
              );
    ppDVar4 = &(pKVar1->fields).links;
    *ppDVar4 = (Dictionary_2_System_Int32_MV_WorldObject_Link_ *)pDVar2;
    func_?(ppDVar4,pDVar2);
    pDVar2 = (Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef_
              *)func_?(
                               TypeInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::ObjectLink>
                               );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::TextCore::
    Text::TextResourceManager+FontAssetRef]::
    Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef___ctor
              (pDVar2,
               MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::ObjectLink>__Dictionary__
              );
    method_00 = &(pKVar1->fields).objectLinks;
    *method_00 = (Dictionary_2_System_Int32_MV_WorldObject_ObjectLink_ *)pDVar2;
    func_?();
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              ((Object *)pKVar1,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
    this_01 = (UnityAction_2_System_Object_System_ByteEnum_ *)func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::ByteEnum]
    ::UnityAction_2_System_Object_System_ByteEnum___ctor
              (this_01,(Object *)pKVar1,
               MethodInfo__KoGaMaPackageClient__HandleDeserializedData_System__Collections__Generic__Dictionary<System::Object,_System::Object>__MV__WorldObject__KogamaDataType_
               ,(MethodInfo *)0x0);
    if ((TypeInfo__KoGaMaDataHandler->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__KoGaMaDataHandler);
    }
    iVar5 = KoGaMaDataHandler::KoGaMaDataHandler_GetKoGaMaData
                      (this_00,(UnityAction_2_System_Collections_Generic_Dictionary_2_System_Object_System_Object_MV_WorldObject_KogamaDataType_
                                *)this_01,0,(MethodInfo *)0x0);
    (pKVar1->fields).worldObjectRoot = iVar5;
    if (cRam_? == '\0') {
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Item_int_
                     );
      cRam_? = '\x01';
    }
    this = (pKVar1->fields).worldObjects;
    if (this != (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0) {
      this_02 = (MVWorldObjectClient *)
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                Object]::Dictionary_2_System_Int32_System_Object__get_Item
                          ((Dictionary_2_System_Int32_System_Object_ *)this,
                           (pKVar1->fields).worldObjectRoot,
                           MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Item_int_
                          );
      if (this_02 != (MVWorldObjectClient *)0x0) {
        MVWorldObjectClient::MVWorldObjectClient_InventoryInitialize(this_02,(MethodInfo *)0x0);
        return pKVar1;
      }
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  pKVar1 = (KoGaMaPackageClient *)(*pcVar6)();
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
  method_00 = TypeInfo__ARepository____c__DisplayClass11_0;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  if (value != (Object *)0x0) {
    value[1].klass = (Object__Class *)onWorldObjectExtracted;
    func_?(value + 1,onWorldObjectExtracted);
    this = (UnityAction_2_System_Object_System_ByteEnum_ *)
           func_?(
                          TypeInfo__UnityEngine__Events__UnityAction<System::Collections::Generic::Dictionary<System::Object,_System::Object>,_MV::WorldObject::KogamaDataType>
                          );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::ByteEnum]
    ::UnityAction_2_System_Object_System_ByteEnum___ctor
              (this,value,
               MethodInfo__ARepository____c__DisplayClass11_0___GetWorldObjectTypeFromMVItemData_b__0_System__Collections__Generic__Dictionary<System::Object,_System::Object>__MV__WorldObject__KogamaDataType_
               ,(MethodInfo *)0x0);
    this_00 = (BytePacker *)func_?(TypeInfo__MV__WorldObject__BytePacker);
    MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker__ctor_1
              (this_00,data,(MethodInfo *)0x0);
    if ((TypeInfo__KoGaMaDataHandler->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    KoGaMaDataHandler::KoGaMaDataHandler_GetKoGaMaData
              (this_00,(UnityAction_2_System_Collections_Generic_Dictionary_2_System_Object_System_Object_MV_WorldObject_KogamaDataType_
                        *)this,0,(MethodInfo *)0x0);
    return;
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
    pAVar2 = (pAVar1->fields).OnRepositoryChange;
    if (pAVar2 != (ARepository_OnRepositoryChangeDelegate *)0x0) {
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
  pAVar1 = (this->fields).OnRepositoryChange;
  if (pAVar1 != (ARepository_OnRepositoryChangeDelegate *)0x0) {
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
    pAVar2 = (pAVar1->fields).OnRepositoryChange;
    if (pAVar2 != (ARepository_OnRepositoryChangeDelegate *)0x0) {
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
  pDVar3 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
           (this->fields).itemIDToInventorySlotIndex;
  this = (ARepository *)itemId1;
  pOVar4 = (Object *)func_?(TypeInfo__System__Int32,&this);
  if (pDVar3 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
    TVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                      (pDVar3,pOVar4,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                      );
    uVar6 = CONCAT44(TypeInfo__System__Int32,TVar5.m_Index);
    if (TVar5.m_Index != 0) {
      if (*(Il2CppClass **)(*(int *)TVar5.m_Index + 0x20) !=
          (TypeInfo__System__Int32->_0).element_class) goto code_?;
      puVar7 = (undefined4 *)func_?(TVar5.m_Index);
      puStack_8 = (undefined *)*puVar7;
      pDStack_9 = (pAVar2->fields).itemIDToInventorySlotIndex;
      itemId1 = iVar1;
      pOStack_10 = (Object *)func_?(TypeInfo__System__Int32,&itemId1);
      iVar1 = itemId2;
      pDVar3 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
               (pAVar2->fields).itemIDToInventorySlotIndex;
      iStack_11 = itemId2;
      pOVar4 = (Object *)func_?(TypeInfo__System__Int32,&iStack_11);
      if (pDVar3 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
        TVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                ::UIElements::TextureId]::
                Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                          (pDVar3,pOVar4,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                          );
        uVar6 = CONCAT44(TypeInfo__System__Int32,TVar5.m_Index);
        if (TVar5.m_Index != 0) {
          if (*(Il2CppClass **)(*(int *)TVar5.m_Index + 0x20) !=
              (TypeInfo__System__Int32->_0).element_class) goto code_?;
          puVar7 = (undefined4 *)func_?(TVar5.m_Index);
          uStack_12 = *puVar7;
          pOVar4 = (Object *)func_?(TypeInfo__System__Int32,&uStack_12);
          if (pDStack_9 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
            ::Dictionary_2_System_Object_System_Object__set_Item
                      (pDStack_9,pOStack_10,pOVar4,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                      );
            this_00 = (pAVar2->fields).itemIDToInventorySlotIndex;
            pAStack_13 = (ARepository *)iVar1;
            pOVar4 = (Object *)func_?(TypeInfo__System__Int32,&pAStack_13);
            puStack_14 = puStack_8;
            value = (Object *)func_?(TypeInfo__System__Int32,&puStack_14);
            if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
              Object]::Dictionary_2_System_Object_System_Object__set_Item
                        (this_00,pOVar4,value,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                        );
              pAVar15 = (pAVar2->fields).OnRepositoryChange;
              if (pAVar15 != (ARepository_OnRepositoryChangeDelegate *)0x0) {
                pOStack_10 = (pAVar15->fields)._._.method;
                pAStack_13 = pAVar2;
                puStack_8 = (pAVar15->fields)._._.method_code;
                (*(pAVar15->fields)._._.invoke_impl)();
              }
              return;
            }
          }
        }
      }
    }
  }
  uVar6 = func_?();
code_?:
  func_?(uVar6);
  pcVar16 = (code *)swi(3);
  (*pcVar16)();
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
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_EDI);
  this_00 = (Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef_ *
            )func_?(TypeInfo__System__Collections__Generic__Dictionary<int,_System::String>
                            );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::TextCore::Text
  ::TextResourceManager+FontAssetRef]::
  Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<int,_System::String>__Dictionary__
            );
  ppDVar1 = &(this->fields).PlanetOwnershipTypes;
  *ppDVar1 = (Dictionary_2_System_Int32_System_String_ *)this_00;
  func_?(ppDVar1,this_00);
  this_01 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
             *)func_?(
                              TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                              );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements::
  StyleComplexSelector+PseudoStateData]::
  Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___ctor
            (this_01,
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
            );
  ppDVar2 = &(this->fields).itemIDToInventorySlotIndex;
  *ppDVar2 = (Dictionary_2_System_Object_System_Object_ *)this_01;
  func_?(ppDVar2,this_01);
  return;
}

