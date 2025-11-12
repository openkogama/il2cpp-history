
/* AccessoryShopDataClient() */

void Assembly-CSharp.dll::AccessoryShopDataClient::AccessoryShopDataClient__ctor
               (AccessoryShopDataClient *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__AccessoryBundleClient);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_AccessoryDataClient>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__Dictionary<int,_AccessoryDataClient>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef_ *
            )FUN_?(
                          TypeInfo__System__Collections__Generic__Dictionary<int,_AccessoryDataClient>
                          );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::TextCore::Text
  ::TextResourceManager+FontAssetRef]::
  Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<int,_AccessoryDataClient>__Dictionary__
            );
  bVar1 = iRam_? != 0;
  (this->fields).accessoryDatas = (Dictionary_2_System_Int32_AccessoryDataClient_ *)this_00;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&this->fields >> 0xc);
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
  pAVar6 = (AccessoryBundleClient *)FUN_?(TypeInfo__AccessoryBundleClient);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MV__WorldObject__Accessories__AccessoryTimelimit);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<MV::WorldObject::Accessories::AccessoryBundleItem>__List__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__List<MV::WorldObject::Accessories::AccessoryBundleItem>
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  (pAVar6->fields)._.accessoryBundleID = -1;
  this_01 = (List_1_MV_WorldObject_Accessories_AccessoryBundleItem_ *)
            FUN_?(
                         TypeInfo__System__Collections__Generic__List<MV::WorldObject::Accessories::AccessoryBundleItem>
                         );
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_01,
             MethodInfo__System__Collections__Generic__List<MV::WorldObject::Accessories::AccessoryBundleItem>__List__
            );
  bVar1 = iRam_? != 0;
  (pAVar6->fields)._.accessoryBundleItems = this_01;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(pAVar6->fields)._.accessoryBundleItems >> 0xc);
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
  pAVar7 = (AccessoryTimelimit *)
           FUN_?(TypeInfo__MV__WorldObject__Accessories__AccessoryTimelimit);
  (pAVar6->fields)._.timelimit = pAVar7;
  if (iRam_? != 0) {
    uVar2 = (uint)((ulonglong)&(pAVar6->fields)._.timelimit >> 0xc);
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
  iVar8 = iRam_?;
  (this->fields).accessoryBundle = pAVar6;
  if (iVar8 != 0) {
    uVar2 = (uint)((ulonglong)&(this->fields).accessoryBundle >> 0xc);
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

