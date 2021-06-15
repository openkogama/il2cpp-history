
/* Boolean IsKnownCountryCode(String) */

bool Assembly-CSharp.dll::GNU::Gettext::IsoCodes::IsoCodes_IsKnownCountryCode
               (String *code,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__GNU__Gettext__IsoCodes->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__GNU__Gettext__IsoCodes->_1).cctor_started == 0)) {
    func_?(TypeInfo__GNU__Gettext__IsoCodes);
  }
  pIVar1 = TypeInfo__GNU__Gettext__IsoCodes->static_fields->isoCountriesByCode;
  if (pIVar1 != (IDictionary_2_System_String_GNU_Gettext_IsoCodes_IsoCode_ *)0x0) {
    bVar2 = func_?(1,
                            TypeInfo__System__Collections__Generic__IDictionary<System::String,_GNU::Gettext::IsoCodes::IsoCode>
                            ,pIVar1,code);
    return bVar2;
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  bVar2 = (*pcVar3)();
  return bVar2;
}


/* Boolean IsKnownLanguageCode(String) */

bool Assembly-CSharp.dll::GNU::Gettext::IsoCodes::IsoCodes_IsKnownLanguageCode
               (String *code,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__GNU__Gettext__IsoCodes->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__GNU__Gettext__IsoCodes->_1).cctor_started == 0)) {
    func_?(TypeInfo__GNU__Gettext__IsoCodes);
  }
  pIVar1 = TypeInfo__GNU__Gettext__IsoCodes->static_fields->isoLanguagesByCode;
  if (pIVar1 != (IDictionary_2_System_String_GNU_Gettext_IsoCodes_IsoCode_ *)0x0) {
    bVar2 = func_?(1,
                            TypeInfo__System__Collections__Generic__IDictionary<System::String,_GNU::Gettext::IsoCodes::IsoCode>
                            ,pIVar1,code);
    return bVar2;
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  bVar2 = (*pcVar3)();
  return bVar2;
}


/* IsoCodes+IsoCode LookupCountryCode(String) */

IsoCodes_IsoCode *
Assembly-CSharp.dll::GNU::Gettext::IsoCodes::IsoCodes_LookupCountryCode
          (String *code,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__GNU__Gettext__IsoCodes->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__GNU__Gettext__IsoCodes->_1).cctor_started == 0)) {
    func_?(TypeInfo__GNU__Gettext__IsoCodes);
  }
  pIVar1 = TypeInfo__GNU__Gettext__IsoCodes->static_fields->isoCountriesByCode;
  if (pIVar1 != (IDictionary_2_System_String_GNU_Gettext_IsoCodes_IsoCode_ *)0x0) {
    cVar2 = func_?(1,
                            TypeInfo__System__Collections__Generic__IDictionary<System::String,_GNU::Gettext::IsoCodes::IsoCode>
                            ,pIVar1,code);
    if (cVar2 == '\0') {
      return (IsoCodes_IsoCode *)0x0;
    }
    if ((((uint)(TypeInfo__GNU__Gettext__IsoCodes->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__GNU__Gettext__IsoCodes->_1).cctor_started == 0)) {
      func_?(TypeInfo__GNU__Gettext__IsoCodes);
    }
    pIVar1 = TypeInfo__GNU__Gettext__IsoCodes->static_fields->isoCountriesByCode;
    if (pIVar1 != (IDictionary_2_System_String_GNU_Gettext_IsoCodes_IsoCode_ *)0x0) {
      pIVar3 = (IsoCodes_IsoCode *)
               func_?(4,
                               TypeInfo__System__Collections__Generic__IDictionary<System::String,_GNU::Gettext::IsoCodes::IsoCode>
                               ,pIVar1,code);
      return pIVar3;
    }
  }
  func_?(0);
  pcVar4 = (code *)swi(3);
  pIVar3 = (IsoCodes_IsoCode *)(*pcVar4)();
  return pIVar3;
}


/* IsoCodes+IsoCode LookupLanguageCode(String) */

IsoCodes_IsoCode *
Assembly-CSharp.dll::GNU::Gettext::IsoCodes::IsoCodes_LookupLanguageCode
          (String *code,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__GNU__Gettext__IsoCodes->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__GNU__Gettext__IsoCodes->_1).cctor_started == 0)) {
    func_?(TypeInfo__GNU__Gettext__IsoCodes);
  }
  pIVar1 = TypeInfo__GNU__Gettext__IsoCodes->static_fields->isoLanguagesByCode;
  if (pIVar1 != (IDictionary_2_System_String_GNU_Gettext_IsoCodes_IsoCode_ *)0x0) {
    cVar2 = func_?(1,
                            TypeInfo__System__Collections__Generic__IDictionary<System::String,_GNU::Gettext::IsoCodes::IsoCode>
                            ,pIVar1,code);
    if (cVar2 == '\0') {
      return (IsoCodes_IsoCode *)0x0;
    }
    if ((((uint)(TypeInfo__GNU__Gettext__IsoCodes->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__GNU__Gettext__IsoCodes->_1).cctor_started == 0)) {
      func_?(TypeInfo__GNU__Gettext__IsoCodes);
    }
    pIVar1 = TypeInfo__GNU__Gettext__IsoCodes->static_fields->isoLanguagesByCode;
    if (pIVar1 != (IDictionary_2_System_String_GNU_Gettext_IsoCodes_IsoCode_ *)0x0) {
      pIVar3 = (IsoCodes_IsoCode *)
               func_?(4,
                               TypeInfo__System__Collections__Generic__IDictionary<System::String,_GNU::Gettext::IsoCodes::IsoCode>
                               ,pIVar1,code);
      return pIVar3;
    }
  }
  func_?(0);
  pcVar4 = (code *)swi(3);
  pIVar3 = (IsoCodes_IsoCode *)(*pcVar4)();
  return pIVar3;
}

/* decompilation failed: Exception while decompiling 104d11f0: process: timeout */


/* IEnumerable`1[GNU.Gettext.IsoCodes+IsoCode] get_KnownCountries() */

IEnumerable_1_GNU_Gettext_IsoCodes_IsoCode_ *
Assembly-CSharp.dll::GNU::Gettext::IsoCodes::IsoCodes_get_KnownCountries(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__GNU__Gettext__IsoCodes->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__GNU__Gettext__IsoCodes->_1).cctor_started == 0)) {
    func_?(TypeInfo__GNU__Gettext__IsoCodes);
  }
  pIVar1 = TypeInfo__GNU__Gettext__IsoCodes->static_fields->isoCountriesByCountry;
  if (pIVar1 != (IDictionary_2_System_String_GNU_Gettext_IsoCodes_IsoCode_ *)0x0) {
    pIVar2 = (IEnumerable_1_GNU_Gettext_IsoCodes_IsoCode_ *)
             func_?(7,
                             TypeInfo__System__Collections__Generic__IDictionary<System::String,_GNU::Gettext::IsoCodes::IsoCode>
                             ,pIVar1);
    return pIVar2;
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  pIVar2 = (IEnumerable_1_GNU_Gettext_IsoCodes_IsoCode_ *)(*pcVar3)();
  return pIVar2;
}


/* IEnumerable`1[GNU.Gettext.IsoCodes+IsoCode] get_KnownLanguages() */

IEnumerable_1_GNU_Gettext_IsoCodes_IsoCode_ *
Assembly-CSharp.dll::GNU::Gettext::IsoCodes::IsoCodes_get_KnownLanguages(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__GNU__Gettext__IsoCodes->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__GNU__Gettext__IsoCodes->_1).cctor_started == 0)) {
    func_?(TypeInfo__GNU__Gettext__IsoCodes);
  }
  pIVar1 = TypeInfo__GNU__Gettext__IsoCodes->static_fields->isoLanguagesByLang;
  if (pIVar1 != (IDictionary_2_System_String_GNU_Gettext_IsoCodes_IsoCode_ *)0x0) {
    pIVar2 = (IEnumerable_1_GNU_Gettext_IsoCodes_IsoCode_ *)
             func_?(7,
                             TypeInfo__System__Collections__Generic__IDictionary<System::String,_GNU::Gettext::IsoCodes::IsoCode>
                             ,pIVar1);
    return pIVar2;
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  pIVar2 = (IEnumerable_1_GNU_Gettext_IsoCodes_IsoCode_ *)(*pcVar3)();
  return pIVar2;
}

