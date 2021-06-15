
/* Price GetPrice(String) */

Price Assembly-CSharp.dll::PricesManager::PricesManager_GetPrice
                (String *priceName,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pDVar1 = TypeInfo__PricesManager->static_fields->prices;
  if (pDVar1 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,MV::WorldObject
            ::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase]::
            Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase__ContainsKey
                      ((Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
                        *)pDVar1,priceName,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                      );
    if (bVar2 == 0) {
      this = (IsolatedStorageException *)func_?(TypeInfo__System__Exception);
      mscorlib.dll::System::IO::IsolatedStorage::IsolatedStorageException::
      IsolatedStorageException__ctor_1(this,StringLiteral_Unknown_price_name,(MethodInfo *)0x0);
      func_?();
    }
    else {
      pDVar1 = TypeInfo__PricesManager->static_fields->prices;
      if (pDVar1 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
      pPVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
               Dictionary_2_System_Type_Pool__get_Item
                         ((Dictionary_2_System_Type_Pool_ *)pDVar1,(Type *)priceName,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         );
      if (pPVar3 == (Pool *)0x0) {
code_?:
        func_?();
        return (Price)0;
      }
      iVar4 = func_?();
      if (iVar4 != 0) goto code_?;
    }
    func_?();
  }
code_?:
  func_?(0);
  pcVar5 = (code *)swi(3);
  PVar6.gold = (*pcVar5)();
  return (Price)PVar6.gold;
}


/* Void Init(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::PricesManager::PricesManager_Init
               (Dictionary_2_System_Object_System_Object_ *prices,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  TypeInfo__PricesManager->static_fields->prices = prices;
  return;
}


/* Void Reset() */

void Assembly-CSharp.dll::PricesManager::PricesManager_Reset(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  TypeInfo__PricesManager->static_fields->prices = (Dictionary_2_System_Object_System_Object_ *)0x0;
  return;
}

