
/* JToken Evaluate(JToken, Boolean) */

JToken * Assembly-CSharp.dll::Newtonsoft::Json::Linq::JPath::JPath_Evaluate
                   (JPath *this,JToken *root,bool errorWhenNoMatch,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffb4;
  puVar5 = &stack0xffffffb4;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<System::Object>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<System::Object>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<System::Object>__get_Current__
                   );
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__Newtonsoft__Json__Linq__JArray);
    func_?(&TypeInfo__Newtonsoft__Json__Linq__JObject);
    func_?(&MethodInfo__System__Collections__Generic__List<System::Object>__GetEnumerator__
                   );
    func_?(&TypeInfo__System__String);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  pJVar6 = root;
  LStack_7._list = (List_1_System_Object_ *)0x0;
  LStack_7._index = 0;
  LStack_7._version = 0;
  LStack_7._current = (Object *)0x0;
  pJStack_8 = root;
  this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
            (this->fields)._Parts_k__BackingField;
  if (this_00 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
    pLVar9 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
             RegexCharClass+SingleRange]::
             List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                       (&LStack_10,this_00,
                        MethodInfo__System__Collections__Generic__List<System::Object>__GetEnumerator__
                       );
    LStack_7._list = (List_1_System_Object_ *)pLVar9->_list;
    LStack_7._index = pLVar9->_index;
    LStack_7._version = pLVar9->_version;
    LStack_7._current = *(Object **)&pLVar9->_current;
    LStack_10._version = 0;
    uStack_1 = 1;
    LStack_10._current = (RegexCharClass_SingleRange)&LStack_7;
code_?:
    do {
      method_00 = (MethodInfo *)&UNK_?;
      bVar11 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
              List_1_T_Enumerator_System_Object__MoveNext
                        (&LStack_7,
                         MethodInfo__System__Collections__Generic__List_1_T___Enumerator<System::Object>__MoveNext__
                        );
      if (bVar11 == 0) {
        uStack_1 = 0xffffffff;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                  ((Object *)&LStack_7,
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__List_1_T___Enumerator<System::Object>__Dispose__
                   ,unaff_EDI);
        *unaff_FS_OFFSET = uStack_3;
        return pJVar6;
      }
      if ((RegexCharClass_SingleRange)LStack_7._current == (RegexCharClass_SingleRange)0x0) {
code_?:
        if ((RegexCharClass_SingleRange)LStack_7._current == (RegexCharClass_SingleRange)0x0)
        goto code_?;
        pIVar12 = TypeInfo__System__Int32;
        RVar13 = (RegexCharClass_SingleRange)LStack_7._current;
        if (*(Il2CppClass **)(*(int *)LStack_7._current + 0x20) !=
            (TypeInfo__System__Int32->_0).element_class) goto code_?;
        puVar14 = (undefined4 *)func_?(LStack_7._current);
        root = (JToken *)*puVar14;
        this = (JPath *)func_?(pJVar6,TypeInfo__Newtonsoft__Json__Linq__JArray);
        if ((JContainer *)this == (JContainer *)0x0) {
          if (errorWhenNoMatch != 0) {
            uVar15 = func_?(&TypeInfo__System__Globalization__CultureInfo);
            func_?(uVar15);
            pCStack_16 = mscorlib.dll::System::Globalization::CultureInfo::
                         CultureInfo_get_InvariantCulture((MethodInfo *)0x0);
            uVar15 = func_?(&TypeInfo__System__Object);
            pOVar17 = (Object__Array *)func_?(uVar15,2);
            this = (JPath *)root;
            uVar15 = func_?(&TypeInfo__System__Int32);
            root = (JToken *)func_?(uVar15,&this);
            func_?(pOVar17);
            func_?(pOVar17,root);
            func_?(0,root);
            func_?(pJVar6);
            pTVar18 = mscorlib.dll::System::Object::Object_GetType
                               ((Object *)pJVar6,(MethodInfo *)0x0);
            func_?(pTVar18);
            uVar15 = func_?(7,pTVar18);
            func_?(pOVar17);
            func_?(pOVar17,uVar15);
            func_?(1,uVar15);
            pSVar19 = (String *)func_?(&StringLiteral_Index__0__not_valid_on__1__);
            provider = pCStack_16;
            goto code_?;
          }
        }
        else {
          iVar20 = JContainer::JContainer_get_Count((JContainer *)this,(MethodInfo *)0x0);
          pJVar6 = root;
          if ((int)root < iVar20) {
            pJVar6 = (JToken *)
                      JContainer::JContainer_System_Collections_IList_get_Item
                                ((JContainer *)this,(int32_t)root,(MethodInfo *)0x0);
            pJStack_8 = pJVar6;
            goto code_?;
          }
          if (errorWhenNoMatch != 0) {
            uVar15 = func_?(&TypeInfo__System__Globalization__CultureInfo);
            func_?(uVar15);
            this = (JPath *)mscorlib.dll::System::Globalization::CultureInfo::
                            CultureInfo_get_InvariantCulture((MethodInfo *)0x0);
            uVar15 = func_?(&TypeInfo__System__Object);
            pOVar17 = (Object__Array *)func_?(uVar15,1);
            root = pJVar6;
            uVar15 = func_?(&TypeInfo__System__Int32);
            uVar15 = func_?(uVar15,&root);
            func_?(pOVar17);
            func_?(pOVar17,uVar15);
            func_?(0,uVar15);
            pSVar19 = (String *)func_?(&StringLiteral_Index__0__outside_the_bounds_of_);
            pSVar19 = Json::Utilities::StringUtils::StringUtils_FormatWith
                                (pSVar19,(IFormatProvider *)this,pOVar17,(MethodInfo *)0x0);
            uVar15 = func_?(&TypeInfo__System__IndexOutOfRangeException);
            this_02 = (IndexOutOfRangeException *)func_?(uVar15);
            func_?(this_02);
            mscorlib.dll::System::IndexOutOfRangeException::IndexOutOfRangeException__ctor_1
                      (this_02,pSVar19,(MethodInfo *)0x0);
            goto code_?;
          }
        }
code_?:
        uStack_1 = 0xffffffff;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                  ((Object *)&LStack_7,
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__List_1_T___Enumerator<System::Object>__Dispose__
                   ,method_00);
        *unaff_FS_OFFSET = uStack_3;
        return (JToken *)0x0;
      }
      root._0_2_ = 0;
      root._2_2_ = 0;
      if (*(String__Class **)LStack_7._current == TypeInfo__System__String) {
        root = (JToken *)LStack_7._current;
      }
      if ((RegexCharClass_SingleRange)root == (RegexCharClass_SingleRange)0x0)
      goto code_?;
      this_01 = (JObject *)func_?(pJVar6,TypeInfo__Newtonsoft__Json__Linq__JObject);
      if (this_01 == (JObject *)0x0) {
        if (errorWhenNoMatch == 0) goto code_?;
        uVar15 = func_?(&TypeInfo__System__Globalization__CultureInfo);
        func_?(uVar15);
        this = (JPath *)mscorlib.dll::System::Globalization::CultureInfo::
                        CultureInfo_get_InvariantCulture((MethodInfo *)0x0);
        uVar15 = func_?(&TypeInfo__System__Object);
        pOVar17 = (Object__Array *)func_?(uVar15,2);
        func_?(pOVar17);
        func_?(pOVar17,root);
        func_?(0,root);
        func_?(pJVar6);
        pTVar18 = mscorlib.dll::System::Object::Object_GetType((Object *)pJVar6,(MethodInfo *)0x0);
        func_?(pTVar18);
        uVar15 = func_?(7,pTVar18);
        func_?(pOVar17);
        func_?(pOVar17,uVar15);
        func_?(1,uVar15);
        pSVar19 = (String *)func_?(&StringLiteral_Property___0___not_valid_on__1__);
        provider = (CultureInfo *)this;
        goto code_?;
      }
      pJVar6 = JObject::JObject_get_Item_1(this_01,(String *)root,(MethodInfo *)0x0);
      bVar11 = 0;
      if (pJVar6 == (JToken *)0x0) {
        bVar11 = errorWhenNoMatch;
      }
      pJStack_8 = pJVar6;
    } while (bVar11 == 0);
    uVar15 = func_?(&TypeInfo__System__Globalization__CultureInfo);
    func_?(uVar15);
    this = (JPath *)mscorlib.dll::System::Globalization::CultureInfo::
                    CultureInfo_get_InvariantCulture((MethodInfo *)0x0);
    uVar15 = func_?(&TypeInfo__System__Object);
    pOVar17 = (Object__Array *)func_?(uVar15,1);
    func_?(pOVar17);
    pJVar6 = root;
    func_?(pOVar17,root);
    func_?(0,pJVar6);
    pSVar19 = (String *)func_?(&StringLiteral_Property___0___does_not_exist_on);
    provider = (CultureInfo *)this;
code_?:
    pSVar19 = Json::Utilities::StringUtils::StringUtils_FormatWith
                        (pSVar19,(IFormatProvider *)provider,pOVar17,(MethodInfo *)0x0);
    func_?();
    this_02 = (IndexOutOfRangeException *)func_?();
    func_?();
    mscorlib.dll::System::Exception::Exception__ctor_1
              ((Exception *)this_02,pSVar19,(MethodInfo *)0x0);
code_?:
    func_?();
    func_?(this_02);
    pIVar12 = extraout_ECX;
    RVar13 = extraout_EDX;
code_?:
    func_?(RVar13,pIVar12);
  }
code_?:
  uVar15 = func_?();
  func_?(uVar15);
  pcVar21 = (code *)swi(3);
  pJVar6 = (JToken *)(*pcVar21)();
  return pJVar6;
}


/* Void ParseIndexer(Char) */

void Assembly-CSharp.dll::Newtonsoft::Json::Linq::JPath::JPath_ParseIndexer
               (JPath *this,uint16_t indexerOpenChar,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Char);
    func_?(&TypeInfo__System__Convert);
    func_?(&TypeInfo__System__Globalization__CultureInfo);
    func_?(&TypeInfo__System__Int32);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<System::Object>__Add_System__Object_
                   );
    cRam_? = '\x01';
  }
  startIndex = (this->fields)._currentIndex + 1;
  (this->fields)._currentIndex = startIndex;
  uVar1 = 0x5d;
  if (indexerOpenChar != 0x5b) {
    uVar1 = 0x29;
  }
  length = 0;
  pSVar2 = (this->fields)._expression;
  index = startIndex;
  do {
    if (pSVar2 == (String *)0x0) {
code_?:
      func_?();
code_?:
      pSVar2 = mscorlib.dll::System::Char::Char_ToString((Char *)&stack0xfffffff8,(MethodInfo *)0x0)
      ;
      ppSVar3 = &StringLiteral_Unexpected_character_while_parsi;
code_?:
      pMVar4 = (MethodInfo *)0x0;
      str0 = (String *)func_?(ppSVar3);
      pSVar2 = mscorlib.dll::System::String::String_Concat_3(str0,pSVar2,pMVar4);
      uVar1 = func_?(&TypeInfo__System__Exception);
      pEVar5 = (Exception *)func_?(uVar1);
      func_?(pEVar5);
      mscorlib.dll::System::Exception::Exception__ctor_1(pEVar5,pSVar2,(MethodInfo *)0x0);
      func_?(&MethodInfo__Newtonsoft__Json__Linq__JPath__ParseIndexer_wchar_t_);
      func_?();
code_?:
      uVar1 = func_?(&TypeInfo__System__Exception);
      pEVar5 = (Exception *)func_?(uVar1);
      func_?(pEVar5);
      pMVar4 = (MethodInfo *)0x0;
      pSVar2 = (String *)func_?(&StringLiteral_Empty_path_indexer_);
      mscorlib.dll::System::Exception::Exception__ctor_1(pEVar5,pSVar2,pMVar4);
      uVar1 = func_?(&MethodInfo__Newtonsoft__Json__Linq__JPath__ParseIndexer_wchar_t_);
      func_?(pEVar5,uVar1);
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    if ((pSVar2->fields)._stringLength <= index) {
      pSVar2 = mscorlib.dll::System::Char::Char_ToString((Char *)&stack0xfffffff4,(MethodInfo *)0x0)
      ;
      ppSVar3 = &StringLiteral_Path_ended_with_open_indexer__Ex;
      goto code_?;
    }
    pSVar2 = (this->fields)._expression;
    if (pSVar2 == (String *)0x0) goto code_?;
    c = mscorlib.dll::System::String::String_get_Chars(pSVar2,index,(MethodInfo *)0x0);
    CVar7.m_value = c;
    if ((TypeInfo__System__Char->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__System__Char);
    }
    bVar8 = mscorlib.dll::System::Char::Char_IsDigit(c,(MethodInfo *)0x0);
    if (bVar8 == 0) {
      if (CVar7.m_value != (uint16_t)uVar1) goto code_?;
      if (length == 0) goto code_?;
      pSVar2 = (this->fields)._expression;
      if (pSVar2 != (String *)0x0) {
        pSVar2 = mscorlib.dll::System::String::String_Substring_1
                           (pSVar2,startIndex,length,(MethodInfo *)0x0);
        this_00 = (this->fields)._Parts_k__BackingField;
        if ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        provider = mscorlib.dll::System::Globalization::CultureInfo::
                   CultureInfo_get_InvariantCulture((MethodInfo *)0x0);
        if ((TypeInfo__System__Convert->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        mscorlib.dll::System::Convert::Convert_ToInt32_15
                  (pSVar2,(IFormatProvider *)provider,(MethodInfo *)0x0);
        item = (Object *)func_?();
        if (this_00 != (List_1_System_Object_ *)0x0) {
          mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
          List_1_System_Object__Add
                    (this_00,item,
                     MethodInfo__System__Collections__Generic__List<System::Object>__Add_System__Object_
                    );
          return;
        }
      }
      goto code_?;
    }
    length = length + 1;
    piVar9 = &(this->fields)._currentIndex;
    *piVar9 = *piVar9 + 1;
    pSVar2 = (this->fields)._expression;
    index = (this->fields)._currentIndex;
  } while( true );
}


/* Void ParseMain() */

void Assembly-CSharp.dll::Newtonsoft::Json::Linq::JPath::JPath_ParseMain
               (JPath *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<System::Object>__Add_System__Object_
                   );
    cRam_? = '\x01';
  }
  pSVar1 = (this->fields)._expression;
  iVar2 = (this->fields)._currentIndex;
  startIndex = iVar2;
  bVar3 = false;
  do {
    if (pSVar1 == (String *)0x0) {
code_?:
      func_?();
code_?:
      pSVar1 = mscorlib.dll::System::Char::Char_ToString((Char *)&stack0xfffffff8,(MethodInfo *)0x0)
      ;
      method_00 = (MethodInfo *)0x0;
      ppSVar4 = &StringLiteral_Unexpected_character_following_i;
code_?:
      str0 = (String *)func_?(ppSVar4);
      pSVar1 = mscorlib.dll::System::String::String_Concat_3(str0,pSVar1,method_00);
      uVar5 = func_?(&TypeInfo__System__Exception);
      this_00 = (Exception *)func_?(uVar5);
      func_?(this_00);
      mscorlib.dll::System::Exception::Exception__ctor_1(this_00,pSVar1,(MethodInfo *)0x0);
      func_?(&MethodInfo__Newtonsoft__Json__Linq__JPath__ParseMain__);
      func_?();
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    if ((pSVar1->fields)._stringLength <= iVar2) {
      if (startIndex < (this->fields)._currentIndex) {
        pSVar1 = (this->fields)._expression;
        if (pSVar1 == (String *)0x0) goto code_?;
        pSVar1 = mscorlib.dll::System::String::String_Substring_1
                           (pSVar1,startIndex,(this->fields)._currentIndex - startIndex,
                            (MethodInfo *)0x0);
        pLVar7 = (this->fields)._Parts_k__BackingField;
        if (pLVar7 == (List_1_System_Object_ *)0x0) goto code_?;
        mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
        List_1_System_Object__Add
                  (pLVar7,(Object *)pSVar1,
                   MethodInfo__System__Collections__Generic__List<System::Object>__Add_System__Object_
                  );
      }
      return;
    }
    pSVar1 = (this->fields)._expression;
    if (pSVar1 == (String *)0x0) goto code_?;
    indexerOpenChar.m_value =
         mscorlib.dll::System::String::String_get_Chars
                   (pSVar1,(this->fields)._currentIndex,(MethodInfo *)0x0);
    if (indexerOpenChar.m_value < 0x2a) {
      if (indexerOpenChar.m_value != 0x28) {
        bVar8 = indexerOpenChar.m_value == 0x29;
        goto code_?;
      }
code_?:
      if (startIndex < (this->fields)._currentIndex) {
        pSVar1 = (this->fields)._expression;
        if (pSVar1 == (String *)0x0) goto code_?;
        pSVar1 = mscorlib.dll::System::String::String_Substring_1
                           (pSVar1,startIndex,(this->fields)._currentIndex - startIndex,
                            (MethodInfo *)0x0);
        pLVar7 = (this->fields)._Parts_k__BackingField;
        if (pLVar7 == (List_1_System_Object_ *)0x0) goto code_?;
        indexerOpenChar.m_value = 0x2040;
        mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
        List_1_System_Object__Add
                  (pLVar7,(Object *)pSVar1,
                   MethodInfo__System__Collections__Generic__List<System::Object>__Add_System__Object_
                  );
      }
      JPath_ParseIndexer(this,indexerOpenChar.m_value,(MethodInfo *)0x0);
      startIndex = (this->fields)._currentIndex + 1;
      bVar8 = true;
    }
    else if (indexerOpenChar.m_value == 0x2e) {
      if (startIndex < (this->fields)._currentIndex) {
        pSVar1 = (this->fields)._expression;
        if (pSVar1 == (String *)0x0) goto code_?;
        pSVar1 = mscorlib.dll::System::String::String_Substring_1
                           (pSVar1,startIndex,(this->fields)._currentIndex - startIndex,
                            (MethodInfo *)0x0);
        pLVar7 = (this->fields)._Parts_k__BackingField;
        if (pLVar7 == (List_1_System_Object_ *)0x0) goto code_?;
        mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
        List_1_System_Object__Add
                  (pLVar7,(Object *)pSVar1,
                   MethodInfo__System__Collections__Generic__List<System::Object>__Add_System__Object_
                  );
      }
      startIndex = (this->fields)._currentIndex + 1;
      bVar8 = false;
    }
    else {
      if (indexerOpenChar.m_value == 0x5b) goto code_?;
      bVar8 = indexerOpenChar.m_value == 0x5d;
code_?:
      if (bVar8) {
        method_00 = (MethodInfo *)&stack0xfffffff8;
        pSVar1 = (String *)&UNK_?;
        mscorlib.dll::System::Char::Char_ToString((Char *)method_00,(MethodInfo *)0x0);
        ppSVar4 = &StringLiteral_Unexpected_character_while_parsi;
        goto code_?;
      }
      bVar8 = false;
      if (bVar3) goto code_?;
    }
    piVar9 = &(this->fields)._currentIndex;
    *piVar9 = *piVar9 + 1;
    pSVar1 = (this->fields)._expression;
    iVar2 = (this->fields)._currentIndex;
    bVar3 = bVar8;
  } while( true );
}


/* JPath(String) */

void Assembly-CSharp.dll::Newtonsoft::Json::Linq::JPath::JPath__ctor
               (JPath *this,String *expression,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__List<System::Object>__List__);
    func_?(&TypeInfo__System__Collections__Generic__List<System::Object>);
    func_?(&StringLiteral_expression);
    cRam_? = '\x01';
  }
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_EDI);
  Json::Utilities::ValidationUtils::ValidationUtils_ArgumentNotNull
            ((Object *)expression,StringLiteral_expression,(MethodInfo *)0x0);
  (this->fields)._expression = expression;
  func_?(&this->fields,expression);
  this_00 = (List_1_System_Object_ *)
            func_?(TypeInfo__System__Collections__Generic__List<System::Object>);
  if (this_00 != (List_1_System_Object_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::LowLevelList`1[System::Object]::
    LowLevelList_1_System_Object___ctor
              ((LowLevelList_1_System_Object_ *)this_00,
               MethodInfo__System__Collections__Generic__List<System::Object>__List__);
    (this->fields)._Parts_k__BackingField = this_00;
    func_?();
    JPath_ParseMain(this,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

