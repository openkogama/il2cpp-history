
/* String GetKillText(Dictionary`2[System.Object,System.Object], Boolean) */

String * Assembly-CSharp.dll::KillNotification::KillNotification_GetKillText
                   (Dictionary_2_System_Object_System_Object_ *data,bool shotSelf,MethodInfo *method
                   )

{
  if (cRam_? == '\0') {
    FUN_?(&
                  System__Object_MethodInfo__System__Collections__Generic__CollectionExtensions__GetValueOrDefault<System::Object,_System::Object>_System__Collections__Generic__IReadOnlyDictionary<System::Object,_System::Object>__System__Object__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__Common__PlayerKilledByType);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  auStackX_8[0] = 8;
  pOVar1 = (Object *)FUN_?(uRam_?,auStackX_8);
  if (data == (Dictionary_2_System_Object_System_Object_ *)0x0) {
code_?:
    FUN_?();
    pcVar2 = (code *)swi(3);
    pSVar3 = (String *)(*pcVar2)();
    return pSVar3;
  }
  pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
            ::Dictionary_2_System_Object_System_Object__get_Item
                      (data,pOVar1,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                      );
  auStackX_8[0] = 0x13;
  key = (Object *)FUN_?(uRam_?,auStackX_8);
  pSVar4 = (String *)
            mscorlib.dll::System::Collections::Generic::CollectionExtensions::
            CollectionExtensions_GetValueOrDefault_5
                      ((IReadOnlyDictionary_2_System_Object_System_Object_ *)data,key,
                       (Object *)::StringLiteral__,
                       System__Object_MethodInfo__System__Collections__Generic__CollectionExtensions__GetValueOrDefault<System::Object,_System::Object>_System__Collections__Generic__IReadOnlyDictionary<System::Object,_System::Object>__System__Object__System__Object_
                      );
  pSVar3 = (String *)0x0;
  if (pSVar4 != (String *)0x0) {
    if (pSVar4->klass == pSRam0000000182dc50c0) {
      pSVar3 = pSVar4;
    }
    if (pSVar3 == (String *)0x0) {
      FUN_?(pSVar4);
      pcVar2 = (code *)swi(3);
      pSVar3 = (String *)(*pcVar2)();
      return pSVar3;
    }
  }
  if (pOVar1 == (Object *)0x0) goto code_?;
  if ((pOVar1->klass->_0).element_class !=
      (TypeInfo__MV__Common__PlayerKilledByType->_0).element_class) {
    FUN_?(pOVar1);
    pcVar2 = (code *)swi(3);
    pSVar3 = (String *)(*pcVar2)();
    return pSVar3;
  }
  uVar5 = *(undefined1 *)&pOVar1[1].klass;
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral__color___0___1___color__was_elim);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__color___0___1___color__was_kill);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__color___0___1___color__blew_up_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__color___0___1___color__was_burn);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_None);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__color___0___1___color__fell_off);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__color___2___3___color__incinera);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__color___2___3___color__eliminat);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_a_melee_weapon_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__color___2___3___color__leeched_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__color___0___1___color__shot_the);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__color___2___3___color__eliminat);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__color___0___1___color__got_caug);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__color___0___1___color__was_crus);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__color___2___3___color__eliminat);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_a_custom_gun_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__color___2___3___color__eliminat);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__color___2___3___color__sniped__);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__color___0___1___color__respawne);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__color___0___1___color__hit_the_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__color___2___3___color__eliminat);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral____);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (pSVar3 == (String *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    pSVar3 = (String *)(*pcVar2)();
    return pSVar3;
  }
  if (0x1e < (pSVar3->fields)._stringLength) {
    if ((pSVar3->fields)._stringLength + -0x1b < 0) {
      uVar6 = func_?(&TypeInfo__System__ArgumentOutOfRangeException);
      this_03 = (ArgumentOutOfRangeException *)func_?(uVar6);
      pSVar3 = (String *)func_?(&StringLiteral_Index_and_length_must_refer_to_a);
      pSVar4 = (String *)func_?(&StringLiteral_length);
      mscorlib.dll::System::ArgumentOutOfRangeException::ArgumentOutOfRangeException__ctor_2
                (this_03,pSVar4,pSVar3,(MethodInfo *)0x0);
      uVar6 = func_?(&MethodInfo__System__String__Substring_int__int_);
      FUN_?(this_03,uVar6);
      pcVar2 = (code *)swi(3);
      pSVar3 = (String *)(*pcVar2)();
      return pSVar3;
    }
    pSVar3 = mscorlib.dll::System::String::String_InternalSubString
                        (pSVar3,0,0x1b,(MethodInfo *)0x0);
    pSVar3 = mscorlib.dll::System::String::String_Concat_4
                        (pSVar3,::StringLiteral____,(MethodInfo *)0x0);
  }
  switch(uVar5) {
  case 0:
    pSVar3 = StringLiteral_None;
    break;
  default:
    pSVar3 = StringLiteral__color___2___3___color__eliminat;
    break;
  case 2:
    pSVar3 = StringLiteral__color___0___1___color__shot_the;
    if (shotSelf == 0) {
      pSVar3 = StringLiteral__color___2___3___color__eliminat;
    }
    break;
  case 3:
    pSVar3 = StringLiteral__color___2___3___color__sniped__;
    break;
  case 4:
    pSVar3 = StringLiteral__color___0___1___color__respawne;
    break;
  case 5:
    pSVar3 = StringLiteral__color___0___1___color__hit_the_;
    break;
  case 6:
    pSVar3 = StringLiteral__color___0___1___color__was_kill;
    break;
  case 7:
    pSVar4 = StringLiteral_a_melee_weapon_;
    if (pSVar3 != ::StringLiteral__) {
      if (((pSVar3 != (String *)0x0) && (::StringLiteral__ != (String *)0x0)) &&
         ((pSVar3->fields)._stringLength == (::StringLiteral__->fields)._stringLength)) {
        bVar7 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                          ((uint8_t *)&(pSVar3->fields)._firstChar,
                           (uint8_t *)&(::StringLiteral__->fields)._firstChar,
                           (longlong)(pSVar3->fields)._stringLength * 2,(MethodInfo *)0x0);
        pSVar4 = StringLiteral_a_melee_weapon_;
joined_?:
        if (bVar7 != 0) goto code_?;
      }
code_?:
      pSVar3 = mscorlib.dll::System::String::String_Concat_4
                          (pSVar3,::StringLiteral__,(MethodInfo *)0x0);
      goto code_?;
    }
    goto code_?;
  case 8:
    pSVar3 = StringLiteral__color___0___1___color__blew_up_;
    break;
  case 9:
    pSVar3 = StringLiteral__color___0___1___color__was_burn;
    break;
  case 10:
    pSVar3 = StringLiteral__color___0___1___color__fell_off;
    break;
  case 0xb:
    pSVar3 = StringLiteral__color___2___3___color__eliminat;
    break;
  case 0xc:
    pSVar3 = StringLiteral__color___2___3___color__eliminat;
    break;
  case 0xd:
    pSVar3 = StringLiteral__color___2___3___color__incinera;
    break;
  case 0xe:
    pSVar3 = StringLiteral__color___0___1___color__was_crus;
    break;
  case 0xf:
    pSVar3 = StringLiteral__color___0___1___color__got_caug;
    break;
  case 0x10:
    pSVar3 = StringLiteral__color___0___1___color__was_elim;
    break;
  case 0x16:
    pSVar3 = StringLiteral__color___2___3___color__leeched_;
    break;
  case 0x17:
    pSVar4 = StringLiteral_a_custom_gun_;
    if (pSVar3 != ::StringLiteral__) {
      if (((pSVar3 != (String *)0x0) && (::StringLiteral__ != (String *)0x0)) &&
         ((pSVar3->fields)._stringLength == (::StringLiteral__->fields)._stringLength)) {
        bVar7 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                          ((uint8_t *)&(pSVar3->fields)._firstChar,
                           (uint8_t *)&(::StringLiteral__->fields)._firstChar,
                           (longlong)(pSVar3->fields)._stringLength * 2,(MethodInfo *)0x0);
        pSVar4 = StringLiteral_a_custom_gun_;
        goto joined_?;
      }
      goto code_?;
    }
code_?:
    pSVar3 = TM::TM__(pSVar4,(MethodInfo *)0x0);
code_?:
    pSVar4 = TM::TM__(StringLiteral__color___2___3___color__eliminat,(MethodInfo *)0x0);
    if ((pSVar4 == (String *)0x0) || ((pSVar4->fields)._stringLength == 0)) {
      if ((pSVar3 != (String *)0x0) && ((pSVar3->fields)._stringLength != 0)) {
        return pSVar3;
      }
      return *(String **)pSRam0000000182dc50c0->static_fields;
    }
    if ((pSVar3 == (String *)0x0) || ((pSVar3->fields)._stringLength == 0)) {
      return pSVar4;
    }
    iVar8 = (pSVar4->fields)._stringLength;
    pSVar9 = (String *)FUN_?((pSVar3->fields)._stringLength + iVar8,pSVar3,0);
    if (pSVar9 == (String *)0x0) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      pSVar3 = (String *)(*pcVar2)();
      return pSVar3;
    }
    if ((pSVar4->fields)._stringLength <= (pSVar9->fields)._stringLength) {
      puVar10 = &(pSVar9->fields)._firstChar;
      puVar11 = &(pSVar4->fields)._firstChar;
      uVar12 = (pSVar4->fields)._stringLength * 2;
      if (((ulonglong)((longlong)puVar10 - (longlong)puVar11) < (ulonglong)uVar12) ||
         ((ulonglong)((longlong)puVar11 - (longlong)puVar10) < (ulonglong)uVar12)) {
        FUN_?();
      }
      else {
        mscorlib.dll::System::Buffer::Buffer_Memcpy_1
                  ((uint8_t *)puVar10,(uint8_t *)puVar11,uVar12,(MethodInfo *)0x0);
      }
      if ((pSVar3->fields)._stringLength <= (pSVar9->fields)._stringLength - iVar8) {
        puVar11 = &(pSVar9->fields)._firstChar + iVar8;
        puVar10 = &(pSVar3->fields)._firstChar;
        uVar12 = (pSVar3->fields)._stringLength * 2;
        if (((ulonglong)((longlong)puVar11 - (longlong)puVar10) < (ulonglong)uVar12) ||
           ((ulonglong)((longlong)puVar10 - (longlong)puVar11) < (ulonglong)uVar12)) {
          FUN_?();
        }
        else {
          mscorlib.dll::System::Buffer::Buffer_Memcpy_1
                    ((uint8_t *)puVar11,(uint8_t *)puVar10,uVar12,(MethodInfo *)0x0);
        }
        return pSVar9;
      }
      uVar6 = func_?(&TypeInfo__System__IndexOutOfRangeException);
      pIVar13 = (IndexOutOfRangeException *)func_?(uVar6);
      mscorlib.dll::System::IndexOutOfRangeException::IndexOutOfRangeException__ctor
                (pIVar13,(MethodInfo *)0x0);
      uVar6 = func_?(&
                                   MethodInfo__System__String__FillStringChecked_MethodInfo__System__String__int__MethodInfo__System__String_
                                  );
      FUN_?(pIVar13,uVar6);
      pcVar2 = (code *)swi(3);
      pSVar3 = (String *)(*pcVar2)();
      return pSVar3;
    }
    uVar6 = func_?(&TypeInfo__System__IndexOutOfRangeException);
    pIVar13 = (IndexOutOfRangeException *)func_?(uVar6);
    mscorlib.dll::System::IndexOutOfRangeException::IndexOutOfRangeException__ctor
              (pIVar13,(MethodInfo *)0x0);
    uVar6 = func_?(&
                                 MethodInfo__System__String__FillStringChecked_MethodInfo__System__String__int__MethodInfo__System__String_
                                );
    FUN_?(pIVar13,uVar6);
    pcVar2 = (code *)swi(3);
    pSVar3 = (String *)(*pcVar2)();
    return pSVar3;
  }
  if (cRam_? == '\0') {
    FUN_?(&::StringLiteral__,0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Text__RegularExpressions__Regex);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral___sPtr___sPtr_____________Ptr_________);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (pSVar3 == (String *)0x0) {
    return (String *)0x0;
  }
  this_00 = (Regex *)FUN_?(TypeInfo__System__Text__RegularExpressions__Regex);
  System.dll::System::Text::RegularExpressions::Regex::Regex__ctor_1
            (this_00,StringLiteral___sPtr___sPtr_____________Ptr_________,(MethodInfo *)0x0);
  if (this_00 != (Regex *)0x0) {
    if (((this_00->fields).roptions & 0x40) == 0) {
      startat = 0;
    }
    else {
      startat = (pSVar3->fields)._stringLength;
    }
    pMVar14 = System.dll::System::Text::RegularExpressions::Regex::Regex_Run
                       (this_00,0,-1,pSVar3,0,(pSVar3->fields)._stringLength,startat,
                        (MethodInfo *)0x0);
    if (pMVar14 != (Match *)0x0) {
      if ((pMVar14->fields)._._capcount != 0) {
        this_01 = (GroupCollection *)
                  (*(pMVar14->klass->vtable).get_Groups.methodPtr)
                            (pMVar14,(pMVar14->klass->vtable).get_Groups.method);
        if (((this_01 == (GroupCollection *)0x0) ||
            (pGVar15 = System.dll::System::Text::RegularExpressions::GroupCollection::
                      GroupCollection_GetGroup(this_01,1,(MethodInfo *)0x0), pGVar15 == (Group *)0x0)
            ) || (pSVar3 = (String *)
                            (*(pGVar15->klass->vtable).ToString.methodPtr)
                                      (pGVar15,(pGVar15->klass->vtable).ToString.method),
                 pSVar3 == (String *)0x0)) goto code_?;
        pSVar3 = mscorlib.dll::System::String::String_Substring_1
                            (pSVar3,1,(pSVar3->fields)._stringLength + -2,(MethodInfo *)0x0);
        pSVar3 = GNU::Gettext::StringEscaping::StringEscaping_FromGettextFormat
                            (pSVar3,(MethodInfo *)0x0);
      }
      if ((pSVar3 != (String *)0x0) && ((pSVar3->fields)._stringLength != 0)) {
        pTVar16 = TM::TM_get_Instance((MethodInfo *)0x0);
        if (pTVar16 == (TM *)0x0) goto code_?;
        if ((pTVar16->fields).catalog != (Catalog *)0x0) {
          pTVar16 = TM::TM_get_Instance((MethodInfo *)0x0);
          if ((pTVar16 == (TM *)0x0) || (this = (pTVar16->fields).catalog, this == (Catalog *)0x0))
          goto code_?;
          this_02 = GNU::Gettext::Catalog::Catalog_FindItem
                              (this,pSVar3,::StringLiteral__,(MethodInfo *)0x0);
          if ((this_02 != (CatalogEntry *)0x0) &&
             ((pSVar4 = GNU::Gettext::CatalogEntry::CatalogEntry_GetTranslation
                                   (this_02,0,(MethodInfo *)0x0), pSVar4 != (String *)0x0 &&
              ((pSVar4->fields)._stringLength != 0)))) {
            pSVar3 = GNU::Gettext::StringEscaping::StringEscaping_FromGettextFormat
                                (pSVar4,(MethodInfo *)0x0);
            return pSVar3;
          }
        }
      }
      return pSVar3;
    }
  }
code_?:
  FUN_?();
  pcVar2 = (code *)swi(3);
  pSVar3 = (String *)(*pcVar2)();
  return pSVar3;
}


/* String GetKillText(PlayerKilledByType, Boolean, String) */

String * Assembly-CSharp.dll::KillNotification::KillNotification_GetKillText_1
                   (PlayerKilledByType__Enum type,bool shotSelf,String *weaponName,
                   MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral__color___0___1___color__was_elim);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__color___0___1___color__was_kill);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__color___0___1___color__blew_up_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__color___0___1___color__was_burn);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_None);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__color___0___1___color__fell_off);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__color___2___3___color__incinera);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__color___2___3___color__eliminat);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_a_melee_weapon_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__color___2___3___color__leeched_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__color___0___1___color__shot_the);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__color___2___3___color__eliminat);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__color___0___1___color__got_caug);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__color___0___1___color__was_crus);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__color___2___3___color__eliminat);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_a_custom_gun_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__color___2___3___color__eliminat);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__color___2___3___color__sniped__);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__color___0___1___color__respawne);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__color___0___1___color__hit_the_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__color___2___3___color__eliminat);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral____);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (weaponName == (String *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    pSVar2 = (String *)(*pcVar1)();
    return pSVar2;
  }
  if (0x1e < (weaponName->fields)._stringLength) {
    if ((weaponName->fields)._stringLength + -0x1b < 0) {
      uVar3 = func_?(&TypeInfo__System__ArgumentOutOfRangeException);
      this_03 = (ArgumentOutOfRangeException *)func_?(uVar3);
      pSVar2 = (String *)func_?(&StringLiteral_Index_and_length_must_refer_to_a);
      pSVar4 = (String *)func_?(&StringLiteral_length);
      mscorlib.dll::System::ArgumentOutOfRangeException::ArgumentOutOfRangeException__ctor_2
                (this_03,pSVar4,pSVar2,(MethodInfo *)0x0);
      uVar3 = func_?(&MethodInfo__System__String__Substring_int__int_);
      FUN_?(this_03,uVar3);
      pcVar1 = (code *)swi(3);
      pSVar2 = (String *)(*pcVar1)();
      return pSVar2;
    }
    pSVar2 = mscorlib.dll::System::String::String_InternalSubString
                        (weaponName,0,0x1b,(MethodInfo *)0x0);
    weaponName = mscorlib.dll::System::String::String_Concat_4
                           (pSVar2,::StringLiteral____,(MethodInfo *)0x0);
  }
  switch((char)type) {
  case '\0':
    pSVar2 = StringLiteral_None;
    break;
  default:
    pSVar2 = StringLiteral__color___2___3___color__eliminat;
    break;
  case '\x02':
    pSVar2 = StringLiteral__color___0___1___color__shot_the;
    if (shotSelf == 0) {
      pSVar2 = StringLiteral__color___2___3___color__eliminat;
    }
    break;
  case '\x03':
    pSVar2 = StringLiteral__color___2___3___color__sniped__;
    break;
  case '\x04':
    pSVar2 = StringLiteral__color___0___1___color__respawne;
    break;
  case '\x05':
    pSVar2 = StringLiteral__color___0___1___color__hit_the_;
    break;
  case '\x06':
    pSVar2 = StringLiteral__color___0___1___color__was_kill;
    break;
  case '\a':
    pSVar2 = StringLiteral_a_melee_weapon_;
    if (weaponName != ::StringLiteral__) {
      if (((weaponName != (String *)0x0) && (::StringLiteral__ != (String *)0x0)) &&
         ((weaponName->fields)._stringLength == (::StringLiteral__->fields)._stringLength)) {
        bVar5 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                          ((uint8_t *)&(weaponName->fields)._firstChar,
                           (uint8_t *)&(::StringLiteral__->fields)._firstChar,
                           (longlong)(weaponName->fields)._stringLength * 2,(MethodInfo *)0x0);
        pSVar2 = StringLiteral_a_melee_weapon_;
joined_?:
        if (bVar5 != 0) goto code_?;
      }
code_?:
      pSVar2 = mscorlib.dll::System::String::String_Concat_4
                          (weaponName,::StringLiteral__,(MethodInfo *)0x0);
      goto code_?;
    }
    goto code_?;
  case '\b':
    pSVar2 = StringLiteral__color___0___1___color__blew_up_;
    break;
  case '\t':
    pSVar2 = StringLiteral__color___0___1___color__was_burn;
    break;
  case '\n':
    pSVar2 = StringLiteral__color___0___1___color__fell_off;
    break;
  case '\v':
    pSVar2 = StringLiteral__color___2___3___color__eliminat;
    break;
  case '\f':
    pSVar2 = StringLiteral__color___2___3___color__eliminat;
    break;
  case '\r':
    pSVar2 = StringLiteral__color___2___3___color__incinera;
    break;
  case '\x0e':
    pSVar2 = StringLiteral__color___0___1___color__was_crus;
    break;
  case '\x0f':
    pSVar2 = StringLiteral__color___0___1___color__got_caug;
    break;
  case '\x10':
    pSVar2 = StringLiteral__color___0___1___color__was_elim;
    break;
  case '\x16':
    pSVar2 = StringLiteral__color___2___3___color__leeched_;
    break;
  case '\x17':
    pSVar2 = StringLiteral_a_custom_gun_;
    if (weaponName != ::StringLiteral__) {
      if (((weaponName != (String *)0x0) && (::StringLiteral__ != (String *)0x0)) &&
         ((weaponName->fields)._stringLength == (::StringLiteral__->fields)._stringLength)) {
        bVar5 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                          ((uint8_t *)&(weaponName->fields)._firstChar,
                           (uint8_t *)&(::StringLiteral__->fields)._firstChar,
                           (longlong)(weaponName->fields)._stringLength * 2,(MethodInfo *)0x0);
        pSVar2 = StringLiteral_a_custom_gun_;
        goto joined_?;
      }
      goto code_?;
    }
code_?:
    pSVar2 = TM::TM__(pSVar2,(MethodInfo *)0x0);
code_?:
    pSVar4 = TM::TM__(StringLiteral__color___2___3___color__eliminat,(MethodInfo *)0x0);
    if ((pSVar4 == (String *)0x0) || ((pSVar4->fields)._stringLength == 0)) {
      if ((pSVar2 != (String *)0x0) && ((pSVar2->fields)._stringLength != 0)) {
        return pSVar2;
      }
      return (String *)**(undefined8 **)(lRam_? + 0xb8);
    }
    if ((pSVar2 == (String *)0x0) || ((pSVar2->fields)._stringLength == 0)) {
      return pSVar4;
    }
    iVar6 = (pSVar4->fields)._stringLength;
    pSVar7 = (String *)FUN_?((pSVar2->fields)._stringLength + iVar6,pSVar2,0);
    if (pSVar7 == (String *)0x0) {
      FUN_?();
      pcVar1 = (code *)swi(3);
      pSVar2 = (String *)(*pcVar1)();
      return pSVar2;
    }
    if ((pSVar4->fields)._stringLength <= (pSVar7->fields)._stringLength) {
      puVar8 = &(pSVar7->fields)._firstChar;
      puVar9 = &(pSVar4->fields)._firstChar;
      uVar10 = (pSVar4->fields)._stringLength * 2;
      if (((ulonglong)((longlong)puVar8 - (longlong)puVar9) < (ulonglong)uVar10) ||
         ((ulonglong)((longlong)puVar9 - (longlong)puVar8) < (ulonglong)uVar10)) {
        FUN_?();
      }
      else {
        mscorlib.dll::System::Buffer::Buffer_Memcpy_1
                  ((uint8_t *)puVar8,(uint8_t *)puVar9,uVar10,(MethodInfo *)0x0);
      }
      if ((pSVar2->fields)._stringLength <= (pSVar7->fields)._stringLength - iVar6) {
        puVar9 = &(pSVar7->fields)._firstChar + iVar6;
        puVar8 = &(pSVar2->fields)._firstChar;
        uVar10 = (pSVar2->fields)._stringLength * 2;
        if (((ulonglong)((longlong)puVar9 - (longlong)puVar8) < (ulonglong)uVar10) ||
           ((ulonglong)((longlong)puVar8 - (longlong)puVar9) < (ulonglong)uVar10)) {
          FUN_?();
        }
        else {
          mscorlib.dll::System::Buffer::Buffer_Memcpy_1
                    ((uint8_t *)puVar9,(uint8_t *)puVar8,uVar10,(MethodInfo *)0x0);
        }
        return pSVar7;
      }
      uVar3 = func_?(&TypeInfo__System__IndexOutOfRangeException);
      pIVar11 = (IndexOutOfRangeException *)func_?(uVar3);
      mscorlib.dll::System::IndexOutOfRangeException::IndexOutOfRangeException__ctor
                (pIVar11,(MethodInfo *)0x0);
      uVar3 = func_?(&
                                   MethodInfo__System__String__FillStringChecked_MethodInfo__System__String__int__MethodInfo__System__String_
                                  );
      FUN_?(pIVar11,uVar3);
      pcVar1 = (code *)swi(3);
      pSVar2 = (String *)(*pcVar1)();
      return pSVar2;
    }
    uVar3 = func_?(&TypeInfo__System__IndexOutOfRangeException);
    pIVar11 = (IndexOutOfRangeException *)func_?(uVar3);
    mscorlib.dll::System::IndexOutOfRangeException::IndexOutOfRangeException__ctor
              (pIVar11,(MethodInfo *)0x0);
    uVar3 = func_?(&
                                 MethodInfo__System__String__FillStringChecked_MethodInfo__System__String__int__MethodInfo__System__String_
                                );
    FUN_?(pIVar11,uVar3);
    pcVar1 = (code *)swi(3);
    pSVar2 = (String *)(*pcVar1)();
    return pSVar2;
  }
  if (cRam_? == '\0') {
    FUN_?(&::StringLiteral__,0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Text__RegularExpressions__Regex);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral___sPtr___sPtr_____________Ptr_________);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (pSVar2 == (String *)0x0) {
    return (String *)0x0;
  }
  this_00 = (Regex *)FUN_?(TypeInfo__System__Text__RegularExpressions__Regex);
  System.dll::System::Text::RegularExpressions::Regex::Regex__ctor_1
            (this_00,StringLiteral___sPtr___sPtr_____________Ptr_________,(MethodInfo *)0x0);
  if (this_00 != (Regex *)0x0) {
    if (((this_00->fields).roptions & 0x40) == 0) {
      startat = 0;
    }
    else {
      startat = (pSVar2->fields)._stringLength;
    }
    pMVar12 = System.dll::System::Text::RegularExpressions::Regex::Regex_Run
                       (this_00,0,-1,pSVar2,0,(pSVar2->fields)._stringLength,startat,
                        (MethodInfo *)0x0);
    if (pMVar12 != (Match *)0x0) {
      if ((pMVar12->fields)._._capcount != 0) {
        this_01 = (GroupCollection *)
                  (*(pMVar12->klass->vtable).get_Groups.methodPtr)
                            (pMVar12,(pMVar12->klass->vtable).get_Groups.method);
        if (((this_01 == (GroupCollection *)0x0) ||
            (pGVar13 = System.dll::System::Text::RegularExpressions::GroupCollection::
                      GroupCollection_GetGroup(this_01,1,(MethodInfo *)0x0), pGVar13 == (Group *)0x0)
            ) || (pSVar2 = (String *)
                            (*(pGVar13->klass->vtable).ToString.methodPtr)
                                      (pGVar13,(pGVar13->klass->vtable).ToString.method),
                 pSVar2 == (String *)0x0)) goto code_?;
        pSVar2 = mscorlib.dll::System::String::String_Substring_1
                            (pSVar2,1,(pSVar2->fields)._stringLength + -2,(MethodInfo *)0x0);
        pSVar2 = GNU::Gettext::StringEscaping::StringEscaping_FromGettextFormat
                            (pSVar2,(MethodInfo *)0x0);
      }
      if ((pSVar2 != (String *)0x0) && ((pSVar2->fields)._stringLength != 0)) {
        pTVar14 = TM::TM_get_Instance((MethodInfo *)0x0);
        if (pTVar14 == (TM *)0x0) goto code_?;
        if ((pTVar14->fields).catalog != (Catalog *)0x0) {
          pTVar14 = TM::TM_get_Instance((MethodInfo *)0x0);
          if ((pTVar14 == (TM *)0x0) || (this = (pTVar14->fields).catalog, this == (Catalog *)0x0))
          goto code_?;
          this_02 = GNU::Gettext::Catalog::Catalog_FindItem
                              (this,pSVar2,::StringLiteral__,(MethodInfo *)0x0);
          if ((this_02 != (CatalogEntry *)0x0) &&
             ((pSVar4 = GNU::Gettext::CatalogEntry::CatalogEntry_GetTranslation
                                   (this_02,0,(MethodInfo *)0x0), pSVar4 != (String *)0x0 &&
              ((pSVar4->fields)._stringLength != 0)))) {
            pSVar2 = GNU::Gettext::StringEscaping::StringEscaping_FromGettextFormat
                                (pSVar4,(MethodInfo *)0x0);
            return pSVar2;
          }
        }
      }
      return pSVar2;
    }
  }
code_?:
  FUN_?();
  pcVar1 = (code *)swi(3);
  pSVar2 = (String *)(*pcVar1)();
  return pSVar2;
}


/* Void Initialize(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::KillNotification::KillNotification_Initialize
               (KillNotification *this,Dictionary_2_System_Object_System_Object_ *data,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<MV::WorldObject::MVTeam>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Object);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Styles);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar1 = cRam_? == '\0';
  (this->fields)._.timeSinceStart = 0.0;
  if (bVar1) {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar2 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if ((pMVar2 != (MVGameControllerBase *)0x0) &&
     (pMVar3 = (pMVar2->fields).game, pMVar3 != (MVNetworkGame *)0x0)) {
    pMVar4 = (pMVar3->fields).playerContainer;
    auStackX_8[0] = 6;
    pOVar5 = (Object *)FUN_?(uRam_?,auStackX_8);
    if (data != (Dictionary_2_System_Object_System_Object_ *)0x0) {
      pOVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                Object]::Dictionary_2_System_Object_System_Object__get_Item
                          (data,pOVar5,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                          );
      if ((pMVar4 != (MVPlayerContainer *)0x0) && (pOVar5 != (Object *)0x0)) {
        if ((pOVar5->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
          FUN_?(pOVar5,lRam_?);
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        iVar7 = *(int32_t *)&pOVar5[1].klass;
        if (cRam_? == '\0') {
          FUN_?(&
                        MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__get_Item_int_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pDVar8 = (pMVar4->fields).players;
        if (pDVar8 != (Dictionary_2_System_Int32_MVPlayer_ *)0x0) {
          pOVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                    Object]::Dictionary_2_System_Int32_System_Object__get_Item
                              ((Dictionary_2_System_Int32_System_Object_ *)pDVar8,iVar7,
                               MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__get_Item_int_
                              );
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__MVGameControllerBase);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pMVar2 = TypeInfo__MVGameControllerBase->static_fields->instance;
          if ((pMVar2 != (MVGameControllerBase *)0x0) &&
             (pMVar3 = (pMVar2->fields).game, pMVar3 != (MVNetworkGame *)0x0)) {
            pMVar4 = (pMVar3->fields).playerContainer;
            auStackX_8[0] = 7;
            pOVar9 = (Object *)FUN_?(uRam_?,auStackX_8);
            pOVar9 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System
                      ::Object]::Dictionary_2_System_Object_System_Object__get_Item
                                (data,pOVar9,
                                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                );
            if ((pMVar4 != (MVPlayerContainer *)0x0) && (pOVar9 != (Object *)0x0)) {
              if ((pOVar9->klass->_0).element_class !=
                  *(Il2CppClass **)(lRam_? + 0x40)) {
                FUN_?(pOVar9,lRam_?);
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              iVar7 = *(int32_t *)&pOVar9[1].klass;
              if (cRam_? == '\0') {
                FUN_?(&
                              MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__get_Item_int_
                             );
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              pDVar8 = (pMVar4->fields).players;
              if (pDVar8 != (Dictionary_2_System_Int32_MVPlayer_ *)0x0) {
                pOVar9 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                          Int32,System::Object]::Dictionary_2_System_Int32_System_Object__get_Item
                                    ((Dictionary_2_System_Int32_System_Object_ *)pDVar8,iVar7,
                                     MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__get_Item_int_
                                    );
                if ((((pOVar9 != (Object *)0x0) && (pOVar9[7].klass != (Object__Class *)0x0)) &&
                    (pOVar5 != (Object *)0x0)) && (pOVar5[7].klass != (Object__Class *)0x0)) {
                  pcVar10 = ((pOVar9[7].klass)->_0).namespaze;
                  pcVar11 = ((pOVar5[7].klass)->_0).namespaze;
                  if (pcVar10 == pcVar11) {
                    shotSelf = 1;
                  }
                  else if (((pcVar10 == (char *)0x0) || (pcVar11 == (char *)0x0)) ||
                          (*(int *)(pcVar10 + 0x10) != *(int *)(pcVar11 + 0x10))) {
                    shotSelf = 0;
                  }
                  else {
                    shotSelf = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                                         ((uint8_t *)(pcVar10 + 0x14),(uint8_t *)(pcVar11 + 0x14),
                                          (longlong)*(int *)(pcVar10 + 0x10) * 2,(MethodInfo *)0x0);
                  }
                  if (cRam_? == '\0') {
                    FUN_?(&TypeInfo__MVGameControllerBase);
                    LOCK();
                    UNLOCK();
                    cRam_? = '\x01';
                  }
                  pMVar2 = TypeInfo__MVGameControllerBase->static_fields->instance;
                  if (((pMVar2 != (MVGameControllerBase *)0x0) &&
                      (pMVar3 = (pMVar2->fields).game, pMVar3 != (MVNetworkGame *)0x0)) &&
                     (this_00 = (pMVar3->fields).teamManager, this_00 != (MVTeamManager *)0x0)) {
                    pLVar12 = MVTeamManager::MVTeamManager_GetTeamList(this_00,(MethodInfo *)0x0);
                    if (pLVar12 != (List_1_MV_WorldObject_MVTeam_ *)0x0) {
                      if ((pLVar12->fields)._size < 2) {
                        if (*(int *)&(TypeInfo__Styles->_1).field_0x1c == 0) {
                          FUN_?();
                        }
                        pCVar13 = Styles::Styles_GetColor
                                            ((Color *)auStack_14,ColorStyle__Enum_TeamNone,
                                             (MethodInfo *)0x0);
                        fVar15 = pCVar13->r;
                        fVar16 = pCVar13->g;
                        fVar17 = pCVar13->b;
                        fVar18 = pCVar13->a;
                        pCVar13 = Styles::Styles_GetColor
                                            ((Color *)auStack_14,ColorStyle__Enum_TeamNone,
                                             (MethodInfo *)0x0);
                        fVar19 = pCVar13->r;
                        fVar20 = pCVar13->g;
                        fVar21 = pCVar13->b;
                        fVar22 = pCVar13->a;
                      }
                      else {
                        MVar23 = *(MVTeam__Enum *)((longlong)&pOVar9[8].klass + 4);
                        if (*(int *)&(TypeInfo__Styles->_1).field_0x1c == 0) {
                          FUN_?();
                        }
                        pCVar13 = Styles::Styles_GetTeamColor
                                            ((Color *)auStack_14,MVar23,0,(MethodInfo *)0x0);
                        MVar23 = *(MVTeam__Enum *)((longlong)&pOVar5[8].klass + 4);
                        player = (MVPlayer *)(ulonglong)MVar23;
                        method_00 = (MethodInfo *)0x0;
                        fVar15 = pCVar13->r;
                        fVar16 = pCVar13->g;
                        fVar17 = pCVar13->b;
                        fVar18 = pCVar13->a;
                        pCVar13 = Styles::Styles_GetTeamColor
                                            ((Color *)auStack_14,MVar23,0,(MethodInfo *)0x0);
                        fVar19 = pCVar13->r;
                        fVar20 = pCVar13->g;
                        fVar21 = pCVar13->b;
                        fVar22 = pCVar13->a;
                        MVTriggerBox::MVTriggerBox_OnExit((MVTriggerBox *)0x0,player,method_00);
                        uVar24 = _UNK_?;
                        uVar25 = _UNK_?;
                        if (extraout_RAX == 0) goto code_?;
                        pEVar26 = (this->fields).Background;
                        if (*(int *)(extraout_RAX + 0x84) ==
                            *(int *)((longlong)&pOVar9[8].klass + 4)) {
                          if (pEVar26 == (EnhancedGradientEffect *)0x0) goto code_?;
                          uVar27 = _UNK_?;
                          (pEVar26->fields).top.r = (float)_UNK_?;
                          uVar24 = _UNK_?;
                          (pEVar26->fields).top.g = (float)uVar27;
                          _UNK_? = (undefined4)uVar25;
                          _UNK_? = SUB84(uVar25,4);
                          uVar27 = _UNK_?;
                          (pEVar26->fields).top.b = (float)_UNK_?;
                          _UNK_? = uVar24;
                          (pEVar26->fields).top.a = (float)uVar27;
                          uVar25 = _UNK_?;
                          uVar24 = _UNK_?;
                        }
                        else {
                          if (pEVar26 == (EnhancedGradientEffect *)0x0) goto code_?;
                          uVar27 = _UNK_?;
                          (pEVar26->fields).top.r = (float)_UNK_?;
                          uVar25 = _UNK_?;
                          (pEVar26->fields).top.g = (float)uVar27;
                          _UNK_? = (undefined4)uVar24;
                          _UNK_? = SUB84(uVar24,4);
                          uVar27 = _UNK_?;
                          (pEVar26->fields).top.b = (float)_UNK_?;
                          _UNK_? = uVar25;
                          (pEVar26->fields).top.a = (float)uVar27;
                          uVar25 = _UNK_?;
                          uVar24 = _UNK_?;
                        }
                        pEVar26 = (this->fields).Background;
                        if (pEVar26 == (EnhancedGradientEffect *)0x0) goto code_?;
                        (pEVar26->fields).bottom.r = (float)(int)uVar25;
                        (pEVar26->fields).bottom.g = (float)(int)((ulonglong)uVar25 >> 0x20);
                        (pEVar26->fields).bottom.b = (float)(int)uVar24;
                        (pEVar26->fields).bottom.a = (float)(int)((ulonglong)uVar24 >> 0x20);
                      }
                      pTVar28 = (this->fields).Label;
                      if (cRam_? == '\0') {
                        FUN_?(&
                                      System__Object_MethodInfo__System__Collections__Generic__CollectionExtensions__GetValueOrDefault<System::Object,_System::Object>_System__Collections__Generic__IReadOnlyDictionary<System::Object,_System::Object>__System__Object__System__Object_
                                     );
                        LOCK();
                        UNLOCK();
                        FUN_?(&
                                      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                     );
                        LOCK();
                        UNLOCK();
                        FUN_?(&TypeInfo__MV__Common__PlayerKilledByType);
                        LOCK();
                        UNLOCK();
                        FUN_?(&::StringLiteral__);
                        LOCK();
                        UNLOCK();
                        cRam_? = '\x01';
                      }
                      auStackX_8[0] = 8;
                      pOVar29 = (Object *)FUN_?(uRam_?,auStackX_8);
                      pOVar29 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                                Object,System::Object]::
                                Dictionary_2_System_Object_System_Object__get_Item
                                          (data,pOVar29,
                                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                          );
                      auStackX_8[0] = 0x13;
                      key = (Object *)FUN_?(uRam_?,auStackX_8);
                      pSVar30 = (String *)
                                mscorlib.dll::System::Collections::Generic::CollectionExtensions::
                                CollectionExtensions_GetValueOrDefault_5
                                          ((IReadOnlyDictionary_2_System_Object_System_Object_ *)
                                           data,key,(Object *)::StringLiteral__,
                                           System__Object_MethodInfo__System__Collections__Generic__CollectionExtensions__GetValueOrDefault<System::Object,_System::Object>_System__Collections__Generic__IReadOnlyDictionary<System::Object,_System::Object>__System__Object__System__Object_
                                          );
                      pSVar31 = (String *)0x0;
                      if (pSVar30 != (String *)0x0) {
                        if (pSVar30->klass == pSRam0000000182dc50c0) {
                          pSVar31 = pSVar30;
                        }
                        if (pSVar31 == (String *)0x0) {
                          FUN_?(pSVar30);
                          pcVar6 = (code *)swi(3);
                          (*pcVar6)();
                          return;
                        }
                      }
                      if (pOVar29 != (Object *)0x0) {
                        if ((pOVar29->klass->_0).element_class !=
                            (TypeInfo__MV__Common__PlayerKilledByType->_0).element_class) {
                          FUN_?(pOVar29);
                          pcVar6 = (code *)swi(3);
                          (*pcVar6)();
                          return;
                        }
                        pSVar31 = KillNotification_GetKillText_1
                                            ((uint)*(byte *)&pOVar29[1].klass,shotSelf,pSVar31,
                                             (MethodInfo *)0x0);
                        args = (Object__Array *)FUN_?(TypeInfo__System__Object);
                        auStack_14._4_4_ = fVar16;
                        auStack_14._0_4_ = fVar15;
                        uStack_32 = (Object *)CONCAT44(fVar18,fVar17);
                        uVar33 = FUN_?(auStack_14);
                        color_00.r = 0;
                        color_00.g = 0;
                        color_00.b = 0;
                        color_00.a = 0;
                        color_00.rgba = uVar33;
                        if (*(int *)&(TypeInfo__Styles->_1).field_0x1c == 0) {
                          FUN_?();
                        }
                        pSVar30 = Styles::Styles_ColorToHex(color_00,(MethodInfo *)0x0);
                        if (args != (Object__Array *)0x0) {
                          if (pSVar30 != (String *)0x0) {
                            lVar34 = FUN_?(pSVar30,(args->klass->_0).element_class);
                            if (lVar34 == 0) {
                              uVar25 = FUN_?();
                              FUN_?(uVar25,0);
                              pcVar6 = (code *)swi(3);
                              (*pcVar6)();
                              return;
                            }
                          }
                          FUN_?(args,0,pSVar30);
                          if (pOVar9[7].klass != (Object__Class *)0x0) {
                            pcVar10 = ((pOVar9[7].klass)->_0).namespaze;
                            if (pcVar10 != (char *)0x0) {
                              lVar34 = FUN_?(pcVar10,(args->klass->_0).element_class);
                              if (lVar34 == 0) {
                                uVar25 = FUN_?();
                                FUN_?(uVar25,0);
                                pcVar6 = (code *)swi(3);
                                (*pcVar6)();
                                return;
                              }
                            }
                            FUN_?(args,1,pcVar10);
                            auStack_14._4_4_ = fVar20;
                            auStack_14._0_4_ = fVar19;
                            uStack_32 = (Object *)CONCAT44(fVar22,fVar21);
                            uVar33 = FUN_?(auStack_14);
                            color.r = 0;
                            color.g = 0;
                            color.b = 0;
                            color.a = 0;
                            color.rgba = uVar33;
                            pSVar30 = Styles::Styles_ColorToHex(color,(MethodInfo *)0x0);
                            if (pSVar30 != (String *)0x0) {
                              lVar34 = FUN_?(pSVar30,(args->klass->_0).element_class);
                              if (lVar34 == 0) {
                                uVar25 = FUN_?();
                                FUN_?(uVar25,0);
                                pcVar6 = (code *)swi(3);
                                (*pcVar6)();
                                return;
                              }
                            }
                            FUN_?(args,2,pSVar30);
                            if (pOVar5[7].klass != (Object__Class *)0x0) {
                              pcVar10 = ((pOVar5[7].klass)->_0).namespaze;
                              if (pcVar10 != (char *)0x0) {
                                lVar34 = FUN_?(pcVar10,(args->klass->_0).element_class);
                                if (lVar34 == 0) {
                                  uVar25 = FUN_?();
                                  FUN_?(uVar25,0);
                                  pcVar6 = (code *)swi(3);
                                  (*pcVar6)();
                                  return;
                                }
                              }
                              FUN_?(args,3);
                              auStack_14 = (undefined1  [8])0x0;
                              uStack_32 = (Object *)0x0;
                              pOStack_35 = (Object *)0x0;
                              pOStack_36 = (Object__Array *)0x0;
                              mscorlib.dll::System::ParamsArray::ParamsArray__ctor_3
                                        ((ParamsArray *)auStack_14,args,(MethodInfo *)0x0);
                              aPStack_37[0]._arg0 = (Object *)auStack_14;
                              aPStack_37[0]._arg1 = uStack_32;
                              aPStack_37[0]._arg2 = pOStack_35;
                              aPStack_37[0]._args = pOStack_36;
                              pSVar31 = mscorlib.dll::System::String::String_FormatHelper
                                                  ((IFormatProvider *)0x0,pSVar31,aPStack_37,
                                                   (MethodInfo *)0x0);
                              if (pTVar28 != (Text *)0x0) {
                                (*(pTVar28->klass->vtable).set_text.methodPtr)
                                          (pTVar28,pSVar31,(pTVar28->klass->vtable).set_text.method)
                                ;
                                this_01 = (this->fields).tertiaryNotificationUI;
                                l = (*(this->klass->vtable).get_Lifetime.methodPtr)
                                              (this,(this->klass->vtable).get_Lifetime.method);
                                if (this_01 != (TertiaryNotificationUI *)0x0) {
                                  TertiaryNotificationUI::TertiaryNotificationUI_Initialize
                                            (this_01,(Notification *)this,l,0,(MethodInfo *)0x0);
                                  return;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}

