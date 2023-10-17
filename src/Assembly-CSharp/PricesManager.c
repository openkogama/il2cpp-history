
/* Price GetPrice(String) */

Price Assembly-CSharp.dll::PricesManager::PricesManager_GetPrice
                (String *priceName,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__PricesManager);
    cRam_? = '\x01';
  }
  pSVar1 = priceName;
  this = (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)
         TypeInfo__PricesManager->static_fields->prices;
  if (this != (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)0x0) {
    bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
            Object,GUILoginHandler+PlanetData]::
            Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                      (this,(Object *)priceName,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                      );
    if (bVar2 == 0) {
      uVar3 = func_?(&TypeInfo__System__Exception);
      this_01 = (Exception *)func_?(uVar3);
      func_?(this_01);
      method_00 = (MethodInfo *)0x0;
      pSVar1 = (String *)func_?(&StringLiteral_Unknown_price_name);
      mscorlib.dll::System::Exception::Exception__ctor_1(this_01,pSVar1,method_00);
      method = (MethodInfo *)func_?(&MethodInfo__PricesManager__GetPrice_System__String_);
      priceName = (String *)this_01;
      func_?();
    }
    else {
      this_00 = TypeInfo__PricesManager->static_fields->prices;
      if (this_00 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
      this_01 = (Exception *)
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                Object]::Dictionary_2_System_Object_System_Object__get_Item
                          (this_00,(Object *)pSVar1,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                          );
      unaff_EDI = TypeInfo__System__Int32;
      priceName = (String *)0x0;
      if (this_01 == (Exception *)0x0) {
code_?:
        method = (MethodInfo *)0x0;
        MVCommon.dll::MV::Common::Price::Price__ctor_1
                  ((Price *)&priceName,(Int32__Array *)priceName,(MethodInfo *)0x0);
        return (Price)(int32_t)priceName;
      }
      method = (MethodInfo *)TypeInfo__System__Int32;
      priceName = (String *)this_01;
      priceName = (String *)func_?();
      if ((Int32__Array *)priceName != (Int32__Array *)0x0) goto code_?;
    }
    priceName = (String *)this_01;
    method = (MethodInfo *)unaff_EDI;
    func_?();
  }
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  PVar5.gold = (*pcVar4)();
  return (Price)PVar5.gold;
}


/* Void Init(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::PricesManager::PricesManager_Init
               (Dictionary_2_System_Object_System_Object_ *prices,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__PricesManager);
    cRam_? = '\x01';
  }
  TypeInfo__PricesManager->static_fields->prices = prices;
  func_?(TypeInfo__PricesManager->static_fields,prices);
  return;
}


/* Void Reset() */

void Assembly-CSharp.dll::PricesManager::PricesManager_Reset(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__PricesManager);
    cRam_? = '\x01';
  }
  TypeInfo__PricesManager->static_fields->prices = (Dictionary_2_System_Object_System_Object_ *)0x0;
  func_?(TypeInfo__PricesManager->static_fields,0);
  return;
}

