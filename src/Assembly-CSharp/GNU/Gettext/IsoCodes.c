
/* Boolean IsKnownCountryCode(String) */

bool Assembly-CSharp.dll::GNU::Gettext::IsoCodes::IsoCodes_IsKnownCountryCode
               (String *code,MethodInfo *method)

{
  if (cRam_? == '\0') {
    pIStack_1 = (IsoCodes__Class *)
                &
                TypeInfo__System__Collections__Generic__IDictionary<System::String,_GNU::Gettext::IsoCodes::IsoCode>
    ;
    func_?();
    pIStack_2 = (IDictionary_2_System_String_GNU_Gettext_IsoCodes_IsoCode_ *)
                &TypeInfo__GNU__Gettext__IsoCodes;
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__GNU__Gettext__IsoCodes->_1).cctor_finished_or_no_cctor == 0) {
    pIStack_1 = TypeInfo__GNU__Gettext__IsoCodes;
    func_?();
  }
  pIVar3 = TypeInfo__GNU__Gettext__IsoCodes->static_fields->isoCountriesByCode;
  if (pIVar3 != (IDictionary_2_System_String_GNU_Gettext_IsoCodes_IsoCode_ *)0x0) {
    pIStack_1 = (IsoCodes__Class *)code;
    pIStack_4 = 
    TypeInfo__System__Collections__Generic__IDictionary<System::String,_GNU::Gettext::IsoCodes::IsoCode>
    ;
    pIStack_2 = pIVar3;
    bVar5 = func_?(4);
    return bVar5;
  }
  pIStack_1 = (IsoCodes__Class *)&stack0xfffffffc;
  uVar6 = func_?(&pIStack_4);
  func_?(uVar6);
  pcVar7 = (code *)swi(3);
  bVar5 = (*pcVar7)();
  return bVar5;
}


/* Boolean IsKnownLanguageCode(String) */

bool Assembly-CSharp.dll::GNU::Gettext::IsoCodes::IsoCodes_IsKnownLanguageCode
               (String *code,MethodInfo *method)

{
  if (cRam_? == '\0') {
    pIStack_1 = (IsoCodes__Class *)
                &
                TypeInfo__System__Collections__Generic__IDictionary<System::String,_GNU::Gettext::IsoCodes::IsoCode>
    ;
    func_?();
    pIStack_2 = (IDictionary_2_System_String_GNU_Gettext_IsoCodes_IsoCode_ *)
                &TypeInfo__GNU__Gettext__IsoCodes;
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__GNU__Gettext__IsoCodes->_1).cctor_finished_or_no_cctor == 0) {
    pIStack_1 = TypeInfo__GNU__Gettext__IsoCodes;
    func_?();
  }
  pIVar3 = TypeInfo__GNU__Gettext__IsoCodes->static_fields->isoLanguagesByCode;
  if (pIVar3 != (IDictionary_2_System_String_GNU_Gettext_IsoCodes_IsoCode_ *)0x0) {
    pIStack_1 = (IsoCodes__Class *)code;
    pIStack_4 = 
    TypeInfo__System__Collections__Generic__IDictionary<System::String,_GNU::Gettext::IsoCodes::IsoCode>
    ;
    pIStack_2 = pIVar3;
    bVar5 = func_?(4);
    return bVar5;
  }
  pIStack_1 = (IsoCodes__Class *)&stack0xfffffffc;
  uVar6 = func_?(&pIStack_4);
  func_?(uVar6);
  pcVar7 = (code *)swi(3);
  bVar5 = (*pcVar7)();
  return bVar5;
}


/* IsoCodes+IsoCode LookupCountryCode(String) */

IsoCodes_IsoCode *
Assembly-CSharp.dll::GNU::Gettext::IsoCodes::IsoCodes_LookupCountryCode
          (String *code,MethodInfo *method)

{
  if (cRam_? == '\0') {
    pIStack_1 = (IsoCodes__Class *)
                &
                TypeInfo__System__Collections__Generic__IDictionary<System::String,_GNU::Gettext::IsoCodes::IsoCode>
    ;
    func_?();
    pIStack_2 = (IDictionary_2_System_String_GNU_Gettext_IsoCodes_IsoCode_ *)
                &TypeInfo__GNU__Gettext__IsoCodes;
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__GNU__Gettext__IsoCodes->_1).cctor_finished_or_no_cctor == 0) {
    pIStack_1 = TypeInfo__GNU__Gettext__IsoCodes;
    func_?();
  }
  pIVar3 = TypeInfo__GNU__Gettext__IsoCodes->static_fields->isoCountriesByCode;
  if (pIVar3 != (IDictionary_2_System_String_GNU_Gettext_IsoCodes_IsoCode_ *)0x0) {
    pIStack_1 = (IsoCodes__Class *)code;
    pIStack_4 = 
    TypeInfo__System__Collections__Generic__IDictionary<System::String,_GNU::Gettext::IsoCodes::IsoCode>
    ;
    pIStack_2 = pIVar3;
    cVar5 = func_?(4);
    if (cVar5 == '\0') {
      return (IsoCodes_IsoCode *)0x0;
    }
    if ((TypeInfo__GNU__Gettext__IsoCodes->_1).cctor_finished_or_no_cctor == 0) {
      pIStack_1 = TypeInfo__GNU__Gettext__IsoCodes;
      func_?();
    }
    pIVar3 = TypeInfo__GNU__Gettext__IsoCodes->static_fields->isoCountriesByCode;
    if (pIVar3 != (IDictionary_2_System_String_GNU_Gettext_IsoCodes_IsoCode_ *)0x0) {
      pIStack_1 = (IsoCodes__Class *)code;
      pIStack_4 = 
      TypeInfo__System__Collections__Generic__IDictionary<System::String,_GNU::Gettext::IsoCodes::IsoCode>
      ;
      pIStack_2 = pIVar3;
      pIVar6 = (IsoCodes_IsoCode *)func_?(0);
      return pIVar6;
    }
  }
  pIStack_1 = (IsoCodes__Class *)&stack0xfffffffc;
  uVar7 = func_?(&pIStack_4);
  func_?(uVar7);
  pcVar8 = (code *)swi(3);
  pIVar6 = (IsoCodes_IsoCode *)(*pcVar8)();
  return pIVar6;
}


/* IsoCodes+IsoCode LookupLanguageCode(String) */

IsoCodes_IsoCode *
Assembly-CSharp.dll::GNU::Gettext::IsoCodes::IsoCodes_LookupLanguageCode
          (String *code,MethodInfo *method)

{
  if (cRam_? == '\0') {
    pIStack_1 = (IsoCodes__Class *)
                &
                TypeInfo__System__Collections__Generic__IDictionary<System::String,_GNU::Gettext::IsoCodes::IsoCode>
    ;
    func_?();
    pIStack_2 = (IDictionary_2_System_String_GNU_Gettext_IsoCodes_IsoCode_ *)
                &TypeInfo__GNU__Gettext__IsoCodes;
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__GNU__Gettext__IsoCodes->_1).cctor_finished_or_no_cctor == 0) {
    pIStack_1 = TypeInfo__GNU__Gettext__IsoCodes;
    func_?();
  }
  pIVar3 = TypeInfo__GNU__Gettext__IsoCodes->static_fields->isoLanguagesByCode;
  if (pIVar3 != (IDictionary_2_System_String_GNU_Gettext_IsoCodes_IsoCode_ *)0x0) {
    pIStack_1 = (IsoCodes__Class *)code;
    pIStack_4 = 
    TypeInfo__System__Collections__Generic__IDictionary<System::String,_GNU::Gettext::IsoCodes::IsoCode>
    ;
    pIStack_2 = pIVar3;
    cVar5 = func_?(4);
    if (cVar5 == '\0') {
      return (IsoCodes_IsoCode *)0x0;
    }
    if ((TypeInfo__GNU__Gettext__IsoCodes->_1).cctor_finished_or_no_cctor == 0) {
      pIStack_1 = TypeInfo__GNU__Gettext__IsoCodes;
      func_?();
    }
    pIVar3 = TypeInfo__GNU__Gettext__IsoCodes->static_fields->isoLanguagesByCode;
    if (pIVar3 != (IDictionary_2_System_String_GNU_Gettext_IsoCodes_IsoCode_ *)0x0) {
      pIStack_1 = (IsoCodes__Class *)code;
      pIStack_4 = 
      TypeInfo__System__Collections__Generic__IDictionary<System::String,_GNU::Gettext::IsoCodes::IsoCode>
      ;
      pIStack_2 = pIVar3;
      pIVar6 = (IsoCodes_IsoCode *)func_?(0);
      return pIVar6;
    }
  }
  pIStack_1 = (IsoCodes__Class *)&stack0xfffffffc;
  uVar7 = func_?(&pIStack_4);
  func_?(uVar7);
  pcVar8 = (code *)swi(3);
  pIVar6 = (IsoCodes_IsoCode *)(*pcVar8)();
  return pIVar6;
}

/* decompilation failed: Exception while decompiling 10451910: process: timeout */


/* IEnumerable`1[GNU.Gettext.IsoCodes+IsoCode] get_KnownCountries() */

IEnumerable_1_GNU_Gettext_IsoCodes_IsoCode_ *
Assembly-CSharp.dll::GNU::Gettext::IsoCodes::IsoCodes_get_KnownCountries(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    pIStack_1 = (IDictionary_2_System_String_GNU_Gettext_IsoCodes_IsoCode___Class *)
                &TypeInfo__GNU__Gettext__IsoCodes;
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__GNU__Gettext__IsoCodes->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  if (TypeInfo__GNU__Gettext__IsoCodes->static_fields->isoCountriesByCountry !=
      (IDictionary_2_System_String_GNU_Gettext_IsoCodes_IsoCode_ *)0x0) {
    pIStack_1 = 
    TypeInfo__System__Collections__Generic__IDictionary<System::String,_GNU::Gettext::IsoCodes::IsoCode>
    ;
    puStack_2 = (undefined *)0x3;
    pIVar3 = (IEnumerable_1_GNU_Gettext_IsoCodes_IsoCode_ *)func_?();
    return pIVar3;
  }
  uVar4 = func_?(&puStack_2);
  func_?(uVar4);
  pcVar5 = (code *)swi(3);
  pIVar3 = (IEnumerable_1_GNU_Gettext_IsoCodes_IsoCode_ *)(*pcVar5)();
  return pIVar3;
}


/* IEnumerable`1[GNU.Gettext.IsoCodes+IsoCode] get_KnownLanguages() */

IEnumerable_1_GNU_Gettext_IsoCodes_IsoCode_ *
Assembly-CSharp.dll::GNU::Gettext::IsoCodes::IsoCodes_get_KnownLanguages(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    pIStack_1 = (IDictionary_2_System_String_GNU_Gettext_IsoCodes_IsoCode___Class *)
                &TypeInfo__GNU__Gettext__IsoCodes;
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__GNU__Gettext__IsoCodes->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  if (TypeInfo__GNU__Gettext__IsoCodes->static_fields->isoLanguagesByLang !=
      (IDictionary_2_System_String_GNU_Gettext_IsoCodes_IsoCode_ *)0x0) {
    pIStack_1 = 
    TypeInfo__System__Collections__Generic__IDictionary<System::String,_GNU::Gettext::IsoCodes::IsoCode>
    ;
    puStack_2 = (undefined *)0x3;
    pIVar3 = (IEnumerable_1_GNU_Gettext_IsoCodes_IsoCode_ *)func_?();
    return pIVar3;
  }
  uVar4 = func_?(&puStack_2);
  func_?(uVar4);
  pcVar5 = (code *)swi(3);
  pIVar3 = (IEnumerable_1_GNU_Gettext_IsoCodes_IsoCode_ *)(*pcVar5)();
  return pIVar3;
}

