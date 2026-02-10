
/* Boolean IsKnownCountryCode(String) */

bool Assembly-CSharp.dll::GNU::Gettext::IsoCodes::IsoCodes_IsKnownCountryCode
               (String *code,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__System__Collections__Generic__IDictionary<System::String,_GNU::Gettext::IsoCodes::IsoCode>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__GNU__Gettext__IsoCodes);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__GNU__Gettext__IsoCodes->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__GNU__Gettext__IsoCodes);
  }
  pIVar1 = TypeInfo__GNU__Gettext__IsoCodes->static_fields->isoCountriesByCode;
  if (pIVar1 == (IDictionary_2_System_String_GNU_Gettext_IsoCodes_IsoCode_ *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    bVar3 = (*pcVar2)();
    return bVar3;
  }
  uVar4 = 0;
  pIVar5 = pIVar1->klass;
  uVar6._0_1_ = (pIVar5->_1).rank;
  uVar6._1_1_ = (pIVar5->_1).minimumAlignment;
  if (uVar6 != 0) {
    do {
      if (pIVar5->interfaceOffsets[uVar4].interfaceType ==
          (Il2CppClass *)
          TypeInfo__System__Collections__Generic__IDictionary<System::String,_GNU::Gettext::IsoCodes::IsoCode>
         ) {
        pVVar7 = &(pIVar5->vtable).get_Item + (pIVar5->interfaceOffsets[uVar4].offset + 4);
        goto code_?;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar6);
  }
  pVVar7 = (VirtualInvokeData *)FUN_?(pIVar1);
code_?:
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar3 = (*pVVar7->methodPtr)(pIVar1,code,pVVar7->method,pVVar7->methodPtr);
  return bVar3;
}


/* Boolean IsKnownLanguageCode(String) */

bool Assembly-CSharp.dll::GNU::Gettext::IsoCodes::IsoCodes_IsKnownLanguageCode
               (String *code,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__System__Collections__Generic__IDictionary<System::String,_GNU::Gettext::IsoCodes::IsoCode>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__GNU__Gettext__IsoCodes);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__GNU__Gettext__IsoCodes->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__GNU__Gettext__IsoCodes);
  }
  pIVar1 = TypeInfo__GNU__Gettext__IsoCodes->static_fields->isoLanguagesByCode;
  if (pIVar1 == (IDictionary_2_System_String_GNU_Gettext_IsoCodes_IsoCode_ *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    bVar3 = (*pcVar2)();
    return bVar3;
  }
  uVar4 = 0;
  pIVar5 = pIVar1->klass;
  uVar6._0_1_ = (pIVar5->_1).rank;
  uVar6._1_1_ = (pIVar5->_1).minimumAlignment;
  if (uVar6 != 0) {
    do {
      if (pIVar5->interfaceOffsets[uVar4].interfaceType ==
          (Il2CppClass *)
          TypeInfo__System__Collections__Generic__IDictionary<System::String,_GNU::Gettext::IsoCodes::IsoCode>
         ) {
        pVVar7 = &(pIVar5->vtable).get_Item + (pIVar5->interfaceOffsets[uVar4].offset + 4);
        goto code_?;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar6);
  }
  pVVar7 = (VirtualInvokeData *)FUN_?(pIVar1);
code_?:
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar3 = (*pVVar7->methodPtr)(pIVar1,code,pVVar7->method,pVVar7->methodPtr);
  return bVar3;
}


/* IsoCodes+IsoCode LookupCountryCode(String) */

IsoCodes_IsoCode *
Assembly-CSharp.dll::GNU::Gettext::IsoCodes::IsoCodes_LookupCountryCode
          (String *code,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__System__Collections__Generic__IDictionary<System::String,_GNU::Gettext::IsoCodes::IsoCode>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__GNU__Gettext__IsoCodes);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__GNU__Gettext__IsoCodes->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__GNU__Gettext__IsoCodes);
  }
  pIVar1 = TypeInfo__GNU__Gettext__IsoCodes->static_fields->isoCountriesByCode;
  if (pIVar1 != (IDictionary_2_System_String_GNU_Gettext_IsoCodes_IsoCode_ *)0x0) {
    cVar2 = FUN_?(4,
                          TypeInfo__System__Collections__Generic__IDictionary<System::String,_GNU::Gettext::IsoCodes::IsoCode>
                          ,pIVar1,code);
    if (cVar2 == '\0') {
      return (IsoCodes_IsoCode *)0x0;
    }
    if (*(int *)&(TypeInfo__GNU__Gettext__IsoCodes->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__GNU__Gettext__IsoCodes);
    }
    pIVar1 = TypeInfo__GNU__Gettext__IsoCodes->static_fields->isoCountriesByCode;
    if (pIVar1 != (IDictionary_2_System_String_GNU_Gettext_IsoCodes_IsoCode_ *)0x0) {
      pIVar3 = pIVar1->klass;
      uVar4 = 0;
      uVar5._0_1_ = (pIVar3->_1).rank;
      uVar5._1_1_ = (pIVar3->_1).minimumAlignment;
      if (uVar5 != 0) {
        do {
          if (pIVar3->interfaceOffsets[uVar4].interfaceType ==
              (Il2CppClass *)
              TypeInfo__System__Collections__Generic__IDictionary<System::String,_GNU::Gettext::IsoCodes::IsoCode>
             ) {
            pVVar6 = &(pIVar3->vtable).get_Item + pIVar3->interfaceOffsets[uVar4].offset;
            goto code_?;
          }
          uVar4 = uVar4 + 1;
        } while (uVar4 < uVar5);
      }
      pVVar6 = (VirtualInvokeData *)
               FUN_?(pIVar1,
                             TypeInfo__System__Collections__Generic__IDictionary<System::String,_GNU::Gettext::IsoCodes::IsoCode>
                             ,0);
code_?:
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pIVar7 = (IsoCodes_IsoCode *)
               (*pVVar6->methodPtr)(pIVar1,code,pVVar6->method,pVVar6->methodPtr);
      return pIVar7;
    }
  }
  FUN_?();
  pcVar8 = (code *)swi(3);
  pIVar7 = (IsoCodes_IsoCode *)(*pcVar8)();
  return pIVar7;
}


/* IsoCodes+IsoCode LookupLanguageCode(String) */

IsoCodes_IsoCode *
Assembly-CSharp.dll::GNU::Gettext::IsoCodes::IsoCodes_LookupLanguageCode
          (String *code,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__System__Collections__Generic__IDictionary<System::String,_GNU::Gettext::IsoCodes::IsoCode>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__GNU__Gettext__IsoCodes);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__GNU__Gettext__IsoCodes->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__GNU__Gettext__IsoCodes);
  }
  pIVar1 = TypeInfo__GNU__Gettext__IsoCodes->static_fields->isoLanguagesByCode;
  if (pIVar1 != (IDictionary_2_System_String_GNU_Gettext_IsoCodes_IsoCode_ *)0x0) {
    cVar2 = FUN_?(4,
                          TypeInfo__System__Collections__Generic__IDictionary<System::String,_GNU::Gettext::IsoCodes::IsoCode>
                          ,pIVar1,code);
    if (cVar2 == '\0') {
      return (IsoCodes_IsoCode *)0x0;
    }
    if (*(int *)&(TypeInfo__GNU__Gettext__IsoCodes->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__GNU__Gettext__IsoCodes);
    }
    pIVar1 = TypeInfo__GNU__Gettext__IsoCodes->static_fields->isoLanguagesByCode;
    if (pIVar1 != (IDictionary_2_System_String_GNU_Gettext_IsoCodes_IsoCode_ *)0x0) {
      pIVar3 = pIVar1->klass;
      uVar4 = 0;
      uVar5._0_1_ = (pIVar3->_1).rank;
      uVar5._1_1_ = (pIVar3->_1).minimumAlignment;
      if (uVar5 != 0) {
        do {
          if (pIVar3->interfaceOffsets[uVar4].interfaceType ==
              (Il2CppClass *)
              TypeInfo__System__Collections__Generic__IDictionary<System::String,_GNU::Gettext::IsoCodes::IsoCode>
             ) {
            pVVar6 = &(pIVar3->vtable).get_Item + pIVar3->interfaceOffsets[uVar4].offset;
            goto code_?;
          }
          uVar4 = uVar4 + 1;
        } while (uVar4 < uVar5);
      }
      pVVar6 = (VirtualInvokeData *)
               FUN_?(pIVar1,
                             TypeInfo__System__Collections__Generic__IDictionary<System::String,_GNU::Gettext::IsoCodes::IsoCode>
                             ,0);
code_?:
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pIVar7 = (IsoCodes_IsoCode *)
               (*pVVar6->methodPtr)(pIVar1,code,pVVar6->method,pVVar6->methodPtr);
      return pIVar7;
    }
  }
  FUN_?();
  pcVar8 = (code *)swi(3);
  pIVar7 = (IsoCodes_IsoCode *)(*pcVar8)();
  return pIVar7;
}

/* decompilation failed: Exception while decompiling 180785530: process: timeout */


/* IEnumerable`1[GNU.Gettext.IsoCodes+IsoCode] get_KnownCountries() */

IEnumerable_1_GNU_Gettext_IsoCodes_IsoCode_ *
Assembly-CSharp.dll::GNU::Gettext::IsoCodes::IsoCodes_get_KnownCountries(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__System__Collections__Generic__IDictionary<System::String,_GNU::Gettext::IsoCodes::IsoCode>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__GNU__Gettext__IsoCodes);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__GNU__Gettext__IsoCodes->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__GNU__Gettext__IsoCodes);
  }
  pIVar1 = TypeInfo__GNU__Gettext__IsoCodes->static_fields->isoCountriesByCountry;
  if (pIVar1 != (IDictionary_2_System_String_GNU_Gettext_IsoCodes_IsoCode_ *)0x0) {
    uVar2 = 0;
    pIVar3 = pIVar1->klass;
    uVar4._0_1_ = (pIVar3->_1).rank;
    uVar4._1_1_ = (pIVar3->_1).minimumAlignment;
    if (uVar4 != 0) {
      do {
        if (pIVar3->interfaceOffsets[uVar2].interfaceType ==
            (Il2CppClass *)
            TypeInfo__System__Collections__Generic__IDictionary<System::String,_GNU::Gettext::IsoCodes::IsoCode>
           ) {
          pVVar5 = &(pIVar3->vtable).get_Item + (pIVar3->interfaceOffsets[uVar2].offset + 3);
          UNRECOVERED_JUMPTABLE = pVVar5->methodPtr;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          pIVar6 = (IEnumerable_1_GNU_Gettext_IsoCodes_IsoCode_ *)
                   (*UNRECOVERED_JUMPTABLE)(pIVar1,pVVar5->method,UNRECOVERED_JUMPTABLE);
          return pIVar6;
        }
        uVar2 = uVar2 + 1;
      } while (uVar2 < uVar4);
    }
    puVar7 = (undefined8 *)FUN_?(pIVar1);
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pIVar6 = (IEnumerable_1_GNU_Gettext_IsoCodes_IsoCode_ *)
             (*(code *)*puVar7)(pIVar1,puVar7[1],(code *)*puVar7);
    return pIVar6;
  }
  FUN_?();
  pcVar8 = (code *)swi(3);
  pIVar6 = (IEnumerable_1_GNU_Gettext_IsoCodes_IsoCode_ *)(*pcVar8)();
  return pIVar6;
}


/* IEnumerable`1[GNU.Gettext.IsoCodes+IsoCode] get_KnownLanguages() */

IEnumerable_1_GNU_Gettext_IsoCodes_IsoCode_ *
Assembly-CSharp.dll::GNU::Gettext::IsoCodes::IsoCodes_get_KnownLanguages(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__System__Collections__Generic__IDictionary<System::String,_GNU::Gettext::IsoCodes::IsoCode>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__GNU__Gettext__IsoCodes);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__GNU__Gettext__IsoCodes->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__GNU__Gettext__IsoCodes);
  }
  pIVar1 = TypeInfo__GNU__Gettext__IsoCodes->static_fields->isoLanguagesByLang;
  if (pIVar1 != (IDictionary_2_System_String_GNU_Gettext_IsoCodes_IsoCode_ *)0x0) {
    uVar2 = 0;
    pIVar3 = pIVar1->klass;
    uVar4._0_1_ = (pIVar3->_1).rank;
    uVar4._1_1_ = (pIVar3->_1).minimumAlignment;
    if (uVar4 != 0) {
      do {
        if (pIVar3->interfaceOffsets[uVar2].interfaceType ==
            (Il2CppClass *)
            TypeInfo__System__Collections__Generic__IDictionary<System::String,_GNU::Gettext::IsoCodes::IsoCode>
           ) {
          pVVar5 = &(pIVar3->vtable).get_Item + (pIVar3->interfaceOffsets[uVar2].offset + 3);
          UNRECOVERED_JUMPTABLE = pVVar5->methodPtr;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          pIVar6 = (IEnumerable_1_GNU_Gettext_IsoCodes_IsoCode_ *)
                   (*UNRECOVERED_JUMPTABLE)(pIVar1,pVVar5->method,UNRECOVERED_JUMPTABLE);
          return pIVar6;
        }
        uVar2 = uVar2 + 1;
      } while (uVar2 < uVar4);
    }
    puVar7 = (undefined8 *)FUN_?(pIVar1);
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pIVar6 = (IEnumerable_1_GNU_Gettext_IsoCodes_IsoCode_ *)
             (*(code *)*puVar7)(pIVar1,puVar7[1],(code *)*puVar7);
    return pIVar6;
  }
  FUN_?();
  pcVar8 = (code *)swi(3);
  pIVar6 = (IEnumerable_1_GNU_Gettext_IsoCodes_IsoCode_ *)(*pcVar8)();
  return pIVar6;
}

