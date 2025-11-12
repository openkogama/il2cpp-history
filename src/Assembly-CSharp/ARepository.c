
/* KoGaMaPackageClient GetKoGaMaPackageFromItem(MVItem) */

KoGaMaPackageClient *
Assembly-CSharp.dll::ARepository::ARepository_GetKoGaMaPackageFromItem
          (MVItem *item,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MV__WorldObject__BytePacker);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__KoGaMaPackageClient);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (item != (MVItem *)0x0) {
    buffer = (item->fields).data;
    this = (BytePacker *)FUN_?(TypeInfo__MV__WorldObject__BytePacker);
    MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker__ctor_1
              (this,buffer,(MethodInfo *)0x0);
    pKVar1 = (KoGaMaPackageClient *)FUN_?(TypeInfo__KoGaMaPackageClient);
    KoGaMaPackageClient::KoGaMaPackageClient__ctor(pKVar1,this,0,(MethodInfo *)0x0);
    if (pKVar1 != (KoGaMaPackageClient *)0x0) {
      KoGaMaPackageClient::KoGaMaPackageClient_InventoryInitialize(pKVar1,(MethodInfo *)0x0);
      return pKVar1;
    }
  }
  FUN_?();
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
    FUN_?(&TypeInfo__MV__WorldObject__BytePacker);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__KoGaMaDataHandler);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__ARepository____c__DisplayClass11_0___GetWorldObjectTypeFromMVItemData_b__0_System__Collections__Generic__Dictionary<System::Object,_System::Object>__MV__WorldObject__KogamaDataType_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ARepository____c__DisplayClass11_0);
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__UnityEngine__Events__UnityAction<System::Collections::Generic::Dictionary<System::Object,_System::Object>,_MV::WorldObject::KogamaDataType>
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  object = (Object *)FUN_?(TypeInfo__ARepository____c__DisplayClass11_0);
  if (object == (Object *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  bVar2 = iRam_? != 0;
  object[1].klass = (Object__Class *)onWorldObjectExtracted;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)(object + 1) >> 0xc);
    puVar4 = (ulonglong *)((ulonglong)((uVar3 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar5 = *puVar4;
      LOCK();
      uVar6 = *puVar4;
      if (uVar5 == uVar6) {
        *puVar4 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (uVar5 != uVar6);
  }
  this = (UnityAction_2_System_Object_System_ByteEnum_ *)
         FUN_?(
                      TypeInfo__UnityEngine__Events__UnityAction<System::Collections::Generic::Dictionary<System::Object,_System::Object>,_MV::WorldObject::KogamaDataType>
                      );
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::ByteEnum]::
  UnityAction_2_System_Object_System_ByteEnum___ctor
            (this,object,
             MethodInfo__ARepository____c__DisplayClass11_0___GetWorldObjectTypeFromMVItemData_b__0_System__Collections__Generic__Dictionary<System::Object,_System::Object>__MV__WorldObject__KogamaDataType_
             ,(MethodInfo *)0x0);
  this_00 = (BytePacker *)FUN_?(TypeInfo__MV__WorldObject__BytePacker);
  MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker__ctor_1(this_00,data,(MethodInfo *)0x0)
  ;
  if (*(int *)&(TypeInfo__KoGaMaDataHandler->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__KoGaMaDataHandler);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  iVar7 = FUN_?();
  if (*(int *)&(TypeInfo__KoGaMaDataHandler->_1).field_0x1c == 0) {
    FUN_?();
  }
  TypeInfo__KoGaMaDataHandler->static_fields->timeSinceService = iVar7;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__KoGaMaDataHandler);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (this_00 == (BytePacker *)0x0) {
DAT_?:
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar7 = MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_ReadInt32
                    (this_00,(MethodInfo *)0x0);
  iVar8 = 0;
  if (0 < iVar7) {
    do {
      if (*(int *)&(TypeInfo__KoGaMaDataHandler->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__KoGaMaDataHandler);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__KoGaMaDataHandler->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (TypeInfo__KoGaMaDataHandler->static_fields->serializeVersion == 0xb) {
        pDVar9 = MVWorldObject.dll::MV::WorldObject::BytePackerFunctions::
                 BytePackerFunctionsVersion11::
                 BytePackerFunctionsVersion11_GetPrototypeDataParameters(this_00,(MethodInfo *)0x0);
      }
      else {
        pDVar9 = (Dictionary_2_System_Object_System_Object_ *)0x0;
      }
      if (this == (UnityAction_2_System_Object_System_ByteEnum_ *)0x0) goto DAT_?;
      (*(this->fields)._._.invoke_impl)((this->fields)._._.method_code,pDVar9,0);
      KoGaMaDataHandler::KoGaMaDataHandler_HandleService((MethodInfo *)0x0);
      iVar8 = iVar8 + 1;
    } while (iVar8 < iVar7);
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__KoGaMaDataHandler);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uVar3 = MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_ReadInt32
                    (this_00,(MethodInfo *)0x0);
  iVar8 = -1;
  if (0 < (int)uVar3) {
    uVar6 = (ulonglong)uVar3;
    do {
      if (*(int *)&(TypeInfo__KoGaMaDataHandler->_1).field_0x1c == 0) {
        FUN_?();
      }
      iVar7 = KoGaMaDataHandler::KoGaMaDataHandler_DeserializeWorldObject
                        (this_00,(UnityAction_2_System_Collections_Generic_Dictionary_2_System_Object_System_Object_MV_WorldObject_KogamaDataType_
                                  *)this,0,(MethodInfo *)0x0);
      if (iVar8 == -1) {
        iVar8 = iVar7;
      }
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__KoGaMaDataHandler);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  iVar7 = MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_ReadInt32
                    (this_00,(MethodInfo *)0x0);
  iVar8 = 0;
  if (0 < iVar7) {
    do {
      if (*(int *)&(TypeInfo__KoGaMaDataHandler->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__KoGaMaDataHandler);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__KoGaMaDataHandler->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (TypeInfo__KoGaMaDataHandler->static_fields->serializeVersion == 0xb) {
        pDVar9 = MVWorldObject.dll::MV::WorldObject::BytePackerFunctions::
                 BytePackerFunctionsVersion11::BytePackerFunctionsVersion11_GetLinkDataParameters
                           (this_00,(MethodInfo *)0x0);
      }
      else {
        pDVar9 = (Dictionary_2_System_Object_System_Object_ *)0x0;
      }
      if (this == (UnityAction_2_System_Object_System_ByteEnum_ *)0x0) goto DAT_?;
      (*(this->fields)._._.invoke_impl)
                ((this->fields)._._.method_code,pDVar9,2,(this->fields)._._.method);
      KoGaMaDataHandler::KoGaMaDataHandler_HandleService((MethodInfo *)0x0);
      iVar8 = iVar8 + 1;
    } while (iVar8 < iVar7);
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__KoGaMaDataHandler);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  iVar7 = MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_ReadInt32
                    (this_00,(MethodInfo *)0x0);
  iVar8 = 0;
  if (0 < iVar7) {
    do {
      if (*(int *)&(TypeInfo__KoGaMaDataHandler->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__KoGaMaDataHandler);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__KoGaMaDataHandler->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (TypeInfo__KoGaMaDataHandler->static_fields->serializeVersion == 0xb) {
        pDVar9 = MVWorldObject.dll::MV::WorldObject::BytePackerFunctions::
                 BytePackerFunctionsVersion11::
                 BytePackerFunctionsVersion11_GetObjectLinkDataParameters(this_00,(MethodInfo *)0x0)
        ;
      }
      else {
        pDVar9 = (Dictionary_2_System_Object_System_Object_ *)0x0;
      }
      if (this == (UnityAction_2_System_Object_System_ByteEnum_ *)0x0) goto DAT_?;
      (*(this->fields)._._.invoke_impl)
                ((this->fields)._._.method_code,pDVar9,3,(this->fields)._._.method);
      KoGaMaDataHandler::KoGaMaDataHandler_HandleService((MethodInfo *)0x0);
      iVar8 = iVar8 + 1;
    } while (iVar8 < iVar7);
  }
  return;
}


/* Void MoveItem(Int32, Int32) */

void Assembly-CSharp.dll::ARepository::ARepository_MoveItem
               (ARepository *this,int32_t itemId,int32_t slotIndex,MethodInfo *method)

{
  uVar1 = SUB84(method,0);
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                  ,CONCAT44(in_register_00000014,itemId),CONCAT44(in_register_00000084,slotIndex),
                  uVar1);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).itemIDToInventorySlotIndex;
  aiStackX_10[0] = itemId;
  key = (Object *)FUN_?(uRam_?,aiStackX_10);
  aiStackX_10[0] = slotIndex;
  value = (Object *)FUN_?(uRam_?,aiStackX_10);
  if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__TryInsert
              (this_00,key,value,CONCAT31((int3)((uint)uVar1 >> 8),1),
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
               ->klass->rgctx_data[0x22].method);
    if ((this->fields).OnRepositoryChange != (ARepository_OnRepositoryChangeDelegate *)0x0) {
      pAVar2 = (this->fields).OnRepositoryChange;
      (*(pAVar2->fields)._._.invoke_impl)
                ((pAVar2->fields)._._.method_code,this,(pAVar2->fields)._._.method);
    }
    return;
  }
  FUN_?();
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
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(pAVar1->fields)._._.invoke_impl)
              ((pAVar1->fields)._._.method_code,this,(pAVar1->fields)._._.method);
    return;
  }
  return;
}


/* Void RemoveItem(Int32) */

void Assembly-CSharp.dll::ARepository::ARepository_RemoveItem
               (ARepository *this,int32_t itemId,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Remove_System__Object_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).itemIDToInventorySlotIndex;
  aiStackX_10[0] = itemId;
  key = (Object *)FUN_?(uRam_?,aiStackX_10);
  if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Remove
              (this_00,key,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Remove_System__Object_
              );
    if ((this->fields).OnRepositoryChange != (ARepository_OnRepositoryChangeDelegate *)0x0) {
      pAVar1 = (this->fields).OnRepositoryChange;
      (*(pAVar1->fields)._._.invoke_impl)
                ((pAVar1->fields)._._.method_code,this,(pAVar1->fields)._._.method);
    }
    return;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SwapItems(Int32, Int32) */

void Assembly-CSharp.dll::ARepository::ARepository_SwapItems
               (ARepository *this,int32_t itemId1,int32_t itemId2,MethodInfo *method)

{
  uVar1 = SUB84(method,0);
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                  ,CONCAT44(in_register_00000014,itemId1),CONCAT44(in_register_00000084,itemId2),
                  uVar1);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDVar2 = (this->fields).itemIDToInventorySlotIndex;
  aiStackX_10[0] = itemId1;
  pOVar3 = (Object *)FUN_?(lRam_?,aiStackX_10);
  if (pDVar2 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
             ::Dictionary_2_System_Object_System_Object__get_Item
                       (pDVar2,pOVar3,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    if (pOVar3 != (Object *)0x0) {
      if ((pOVar3->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
        FUN_?(pOVar3,lRam_?);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar5 = *(int32_t *)&pOVar3[1].klass;
      pDVar2 = (this->fields).itemIDToInventorySlotIndex;
      aiStackX_10[0] = itemId1;
      pOVar3 = (Object *)FUN_?(lRam_?,aiStackX_10);
      this_00 = (this->fields).itemIDToInventorySlotIndex;
      aiStackX_10[0] = itemId2;
      pOVar6 = (Object *)FUN_?(lRam_?,aiStackX_10);
      if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
        pOVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                 Object]::Dictionary_2_System_Object_System_Object__get_Item
                           (this_00,pOVar6,
                            MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                           );
        if (pOVar6 != (Object *)0x0) {
          if ((pOVar6->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
            FUN_?(pOVar6,lRam_?);
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          aiStackX_10[0] = *(int32_t *)&pOVar6[1].klass;
          pOVar6 = (Object *)FUN_?(lRam_?,aiStackX_10);
          if (pDVar2 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
            behavior = CONCAT31((int3)((uint)uVar1 >> 8),1);
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
            ::Dictionary_2_System_Object_System_Object__TryInsert
                      (pDVar2,pOVar3,pOVar6,behavior,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                       ->klass->rgctx_data[0x22].method);
            pDVar2 = (this->fields).itemIDToInventorySlotIndex;
            aiStackX_10[0] = itemId2;
            pOVar3 = (Object *)FUN_?(lRam_?,aiStackX_10);
            aiStackX_10[0] = iVar5;
            pOVar6 = (Object *)FUN_?(lRam_?,aiStackX_10);
            if (pDVar2 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
              Object]::Dictionary_2_System_Object_System_Object__TryInsert
                        (pDVar2,pOVar3,pOVar6,CONCAT31((int3)(behavior >> 8),1),
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                         ->klass->rgctx_data[0x22].method);
              if ((this->fields).OnRepositoryChange != (ARepository_OnRepositoryChangeDelegate *)0x0
                 ) {
                pAVar7 = (this->fields).OnRepositoryChange;
                (*(pAVar7->fields)._._.invoke_impl)
                          ((pAVar7->fields)._._.method_code,this,(pAVar7->fields)._._.method);
              }
              return;
            }
          }
        }
      }
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* ARepository() */

void Assembly-CSharp.dll::ARepository::ARepository__ctor(ARepository *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_System::String>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__Dictionary<int,_System::String>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef_ *
            )FUN_?(TypeInfo__System__Collections__Generic__Dictionary<int,_System::String>);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::TextCore::Text
  ::TextResourceManager+FontAssetRef]::
  Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<int,_System::String>__Dictionary__
            );
  bVar1 = iRam_? != 0;
  (this->fields).PlanetOwnershipTypes = (Dictionary_2_System_Int32_System_String_ *)this_00;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).PlanetOwnershipTypes >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  this_01 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
             *)FUN_?(
                            TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                            );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements::
  UIR::UIRenderDevice+DisableForceGammaMaterial]::
  Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
            (this_01,
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
            );
  bVar1 = iRam_? != 0;
  (this->fields).itemIDToInventorySlotIndex = (Dictionary_2_System_Object_System_Object_ *)this_01;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).itemIDToInventorySlotIndex >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  return;
}

