
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
  pDVar2 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
           TypeInfo__PricesManager->static_fields->prices;
  if (pDVar2 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
    bVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                      (pDVar2,(Object *)priceName,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                      );
    if (bVar3 == 0) {
      uVar4 = func_?(&TypeInfo__System__Exception);
      this.m_Index = func_?(uVar4);
      method_00 = (MethodInfo *)0x0;
      pSVar1 = (String *)func_?(&StringLiteral_Unknown_price_name);
      mscorlib.dll::System::Exception::Exception__ctor_1((Exception *)this.m_Index,pSVar1,method_00)
      ;
      method = (MethodInfo *)func_?(&MethodInfo__PricesManager__GetPrice_System__String_);
      priceName = (String *)this.m_Index;
      func_?();
    }
    else {
      pDVar2 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
               TypeInfo__PricesManager->static_fields->prices;
      if (pDVar2 == (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0)
      goto code_?;
      this = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
             UIElements::TextureId]::
             Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                       (pDVar2,(Object *)pSVar1,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
      unaff_EDI = TypeInfo__System__Int32;
      priceName = (String *)0x0;
      if (this.m_Index == 0) {
code_?:
        method = (MethodInfo *)0x0;
        MVCommon.dll::MV::Common::Price::Price__ctor
                  ((Price *)&priceName,(Int32__Array *)priceName,(MethodInfo *)0x0);
        return (Price)(int32_t)priceName;
      }
      method = (MethodInfo *)TypeInfo__System__Int32;
      priceName = (String *)this;
      priceName = (String *)func_?();
      if ((Int32__Array *)priceName != (Int32__Array *)0x0) goto code_?;
    }
    priceName = (String *)this.m_Index;
    method = (MethodInfo *)unaff_EDI;
    func_?();
  }
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  PVar6.gold = (*pcVar5)();
  return (Price)PVar6.gold;
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

