
/* Price GetPrice(String) */

Price Assembly-CSharp.dll::PricesManager::PricesManager_GetPrice
                (String *priceName,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Int32);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__PricesManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_ *)
         TypeInfo__PricesManager->static_fields->prices;
  if (this != (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
               *)0x0) {
    iVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::StyleComplexSelector+PseudoStateData]::
            Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                      (this,(Object *)priceName,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                       ->klass->rgctx_data[0x21].method);
    if (iVar1 < 0) {
      uVar2 = func_?(&TypeInfo__System__Exception);
      this_01 = (Exception *)func_?(uVar2);
      message = (String *)func_?(&StringLiteral_Unknown_price_name);
      mscorlib.dll::System::Exception::Exception__ctor_1(this_01,message,(MethodInfo *)0x0);
      uVar2 = func_?(&MethodInfo__PricesManager__GetPrice_System__String_);
      FUN_?(this_01,uVar2);
      pcVar3 = (code *)swi(3);
      iVar1 = (*pcVar3)();
      return (Price)iVar1;
    }
    this_00 = TypeInfo__PricesManager->static_fields->prices;
    if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
      pOVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
               Object]::Dictionary_2_System_Object_System_Object__get_Item
                         (this_00,(Object *)priceName,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         );
      pIVar5 = TypeInfo__System__Int32;
      if (pOVar4 != (Object *)0x0) {
        lVar6 = FUN_?(pOVar4,TypeInfo__System__Int32);
        if (lVar6 == 0) {
          FUN_?(pOVar4,pIVar5);
          pcVar3 = (code *)swi(3);
          iVar1 = (*pcVar3)();
          return (Price)iVar1;
        }
        if (*(int *)(lVar6 + 0x18) != 0) {
          return (Price)*(int32_t *)(lVar6 + 0x20);
        }
        FUN_?();
        pcVar3 = (code *)swi(3);
        iVar1 = (*pcVar3)();
        return (Price)iVar1;
      }
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  iVar1 = (*pcVar3)();
  return (Price)iVar1;
}


/* Void Init(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::PricesManager::PricesManager_Init
               (Dictionary_2_System_Object_System_Object_ *prices,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__PricesManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  TypeInfo__PricesManager->static_fields->prices = prices;
  if (iRam_? != 0) {
    uVar1 = (uint)((ulonglong)TypeInfo__PricesManager->static_fields >> 0xc);
    puVar2 = (ulonglong *)((ulonglong)((uVar1 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar3 = *puVar2;
      LOCK();
      uVar4 = *puVar2;
      if (uVar3 == uVar4) {
        *puVar2 = uVar3 | 1L << (uVar1 & 0x3f);
      }
      UNLOCK();
    } while (uVar3 != uVar4);
  }
  return;
}


/* Void Reset() */

void Assembly-CSharp.dll::PricesManager::PricesManager_Reset(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__PricesManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  TypeInfo__PricesManager->static_fields->prices = (Dictionary_2_System_Object_System_Object_ *)0x0;
  if (iRam_? != 0) {
    uVar1 = (uint)((ulonglong)TypeInfo__PricesManager->static_fields >> 0xc);
    puVar2 = (ulonglong *)((ulonglong)((uVar1 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar3 = *puVar2;
      LOCK();
      uVar4 = *puVar2;
      if (uVar3 == uVar4) {
        *puVar2 = uVar3 | 1L << (uVar1 & 0x3f);
      }
      UNLOCK();
    } while (uVar3 != uVar4);
  }
  return;
}

