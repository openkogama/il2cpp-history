
/* Boolean CanConvert(Type) */

bool Assembly-CSharp.dll::Newtonsoft::Json::Converters::StringEnumConverter::
     StringEnumConverter_CanConvert(StringEnumConverter *this,Type *objectType,MethodInfo *method)

{
  bVar1 = Json::Utilities::ReflectionUtils::ReflectionUtils_IsNullableType
                    (objectType,(MethodInfo *)0x0);
  if (bVar1 != 0) {
    objectType = mscorlib.dll::System::Nullable::Nullable_GetUnderlyingType
                           (objectType,(MethodInfo *)0x0);
  }
  if (objectType != (Type *)0x0) {
    bVar1 = (*(objectType->klass->vtable).get_IsEnum.methodPtr)
                      (objectType,(objectType->klass->vtable).get_IsEnum.method);
    return bVar1;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  bVar1 = (*pcVar2)();
  return bVar1;
}


/* BidirectionalDictionary`2[System.String,System.String] GetEnumNameMap(Type) */

BidirectionalDictionary_2_System_String_System_String_ *
Assembly-CSharp.dll::Newtonsoft::Json::Converters::StringEnumConverter::
StringEnumConverter_GetEnumNameMap(StringEnumConverter *this,Type *t,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffb0;
  puVar5 = &stack0xffffffb0;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__Newtonsoft__Json__Utilities__BidirectionalDictionary<System::String,_System::String>__Add_System__String__System__String_
                   );
    func_?(&
                    MethodInfo__Newtonsoft__Json__Utilities__BidirectionalDictionary<System::String,_System::String>__TryGetBySecond_System__String__System__String__
                   );
    func_?(&
                    MethodInfo__Newtonsoft__Json__Utilities__BidirectionalDictionary<System::String,_System::String>__BidirectionalDictionary_System__Collections__Generic__IEqualityComparer<System::String>__System__Collections__Generic__IEqualityComparer<System::String>_
                   );
    func_?(&
                    TypeInfo__Newtonsoft__Json__Utilities__BidirectionalDictionary<System::String,_System::String>
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Type,_Newtonsoft::Json::Utilities::BidirectionalDictionary<System::String,_System::String>_>__TryGetValue_System__Type__Newtonsoft__Json__Utilities__BidirectionalDictionary<System::String,_System::String>__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Type,_Newtonsoft::Json::Utilities::BidirectionalDictionary<System::String,_System::String>_>__set_Item_System__Type__Newtonsoft__Json__Utilities__BidirectionalDictionary<System::String,_System::String>_
                   );
    func_?(&TypeRef__System__Runtime__Serialization__EnumMemberAttribute);
    func_?(&
                    System__Collections__Generic__IEnumerable<System::Runtime::Serialization::EnumMemberAttribute>_MethodInfo__System__Linq__Enumerable__Cast<System::Runtime::Serialization::EnumMemberAttribute>_System__Collections__IEnumerable_
                   );
    func_?(&
                    System__Collections__Generic__IEnumerable<System::String>_MethodInfo__System__Linq__Enumerable__Select<System::Runtime::Serialization::EnumMemberAttribute,_System::String>_System__Collections__Generic__IEnumerable<System::Runtime::Serialization::EnumMemberAttribute>__System__Func<System::Runtime::Serialization::EnumMemberAttribute,_System::String>_
                   );
    func_?(&
                    System__String_MethodInfo__System__Linq__Enumerable__SingleOrDefault<System::String>_System__Collections__Generic__IEnumerable<System::String>_
                   );
    func_?(&
                    TypeInfo__System__Func<System::Runtime::Serialization::EnumMemberAttribute,_System::String>
                   );
    func_?(&TypeInfo__System__StringComparer);
    func_?(&TypeInfo__System__Type);
    func_?(&
                    MethodInfo__Newtonsoft__Json__Converters__StringEnumConverter____c___GetEnumNameMap_b__7_0_System__Runtime__Serialization__EnumMemberAttribute_
                   );
    func_?(&TypeInfo__Newtonsoft__Json__Converters__StringEnumConverter____c);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  pBStack_6 = (BidirectionalDictionary_2_System_Object_System_Object_ *)0x0;
  pDVar7 = (this->fields)._enumMemberNamesPerType;
  if (pDVar7 != (Dictionary_2_System_Type_Newtonsoft_Json_Utilities_BidirectionalDictionary_2_System_String_System_String_
                 *)0x0) {
    bVar8 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
            ::Dictionary_2_System_Object_System_Object__TryGetValue
                      ((Dictionary_2_System_Object_System_Object_ *)pDVar7,(Object *)t,
                       (Object **)&pBStack_6,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Type,_Newtonsoft::Json::Utilities::BidirectionalDictionary<System::String,_System::String>_>__TryGetValue_System__Type__Newtonsoft__Json__Utilities__BidirectionalDictionary<System::String,_System::String>__
                      );
    if (bVar8 != 0) {
code_?:
      *unaff_FS_OFFSET = uStack_3;
      return (BidirectionalDictionary_2_System_String_System_String_ *)pBStack_6;
    }
    pDVar7 = (this->fields)._enumMemberNamesPerType;
    bStack_9 = 0;
    uStack_1 = 1;
    mscorlib.dll::System::Threading::Monitor::Monitor_1_Enter_1
              ((Object *)pDVar7,&bStack_9,(MethodInfo *)0x0);
    pDVar10 = (this->fields)._enumMemberNamesPerType;
    if (pDVar10 != (Dictionary_2_System_Type_Newtonsoft_Json_Utilities_BidirectionalDictionary_2_System_String_System_String_
                   *)0x0) {
      bVar8 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
              Object]::Dictionary_2_System_Object_System_Object__TryGetValue
                        ((Dictionary_2_System_Object_System_Object_ *)pDVar10,(Object *)t,
                         (Object **)&pBStack_6,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Type,_Newtonsoft::Json::Utilities::BidirectionalDictionary<System::String,_System::String>_>__TryGetValue_System__Type__Newtonsoft__Json__Utilities__BidirectionalDictionary<System::String,_System::String>__
                        );
      pBVar11 = pBStack_6;
      if (bVar8 != 0) {
        uStack_1 = 0xffffffff;
        if (bStack_9 != 0) {
          mscorlib.dll::System::Threading::Monitor::Monitor_1_Exit
                    ((Object *)pDVar7,(MethodInfo *)0x0);
        }
        *unaff_FS_OFFSET = uStack_3;
        return (BidirectionalDictionary_2_System_String_System_String_ *)pBVar11;
      }
      if ((TypeInfo__System__StringComparer->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      if ((TypeInfo__System__StringComparer->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      firstEqualityComparer = TypeInfo__System__StringComparer->static_fields->s_ordinalIgnoreCase;
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      if ((TypeInfo__System__StringComparer->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      secondEqualityComparer = TypeInfo__System__StringComparer->static_fields->s_ordinalIgnoreCase;
      pBVar11 = (BidirectionalDictionary_2_System_Object_System_Object_ *)func_?();
      if (pBVar11 != (BidirectionalDictionary_2_System_Object_System_Object_ *)0x0) {
        Json::Utilities::BidirectionalDictionary`2[System::Object,System::Object]::
        BidirectionalDictionary_2_System_Object_System_Object___ctor_1
                  (pBVar11,(IEqualityComparer_1_System_Object_ *)firstEqualityComparer,
                   (IEqualityComparer_1_System_Object_ *)secondEqualityComparer,
                   MethodInfo__Newtonsoft__Json__Utilities__BidirectionalDictionary<System::String,_System::String>__BidirectionalDictionary_System__Collections__Generic__IEqualityComparer<System::String>__System__Collections__Generic__IEqualityComparer<System::String>_
                  );
        pBStack_6 = pBVar11;
        if (t != (Type *)0x0) {
          pFVar12 = mscorlib.dll::System::Type::Type_GetFields(t,(MethodInfo *)0x0);
          uVar13 = 0;
          if (pFVar12 != (FieldInfo_1__Array *)0x0) {
            for (; (int)uVar13 < (int)pFVar12->max_length; uVar13 = uVar13 + 1) {
              if (pFVar12->max_length <= uVar13) {
                func_?();
                goto code_?;
              }
              pFVar14 = pFVar12->vector[uVar13];
              if (pFVar14 == (FieldInfo_1 *)0x0) goto code_?;
              first = (Object *)
                      (*(pFVar14->klass->vtable).__unknown.methodPtr)
                                (pFVar14,(pFVar14->klass->vtable).__unknown.method);
              handle = TypeRef__System__Runtime__Serialization__EnumMemberAttribute;
              if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
                func_?(TypeInfo__System__Type);
              }
              pTVar15 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                                 ((RuntimeTypeHandle)handle,(MethodInfo *)0x0);
              source = (IEnumerable *)
                       (*(pFVar14->klass->vtable).__unknown_5.methodPtr)(pFVar14,pTVar15);
              pIVar16 = System.Core.dll::System::Linq::Enumerable::Enumerable_Cast_4
                                  (source,
                                   System__Collections__Generic__IEnumerable<System::Runtime::Serialization::EnumMemberAttribute>_MethodInfo__System__Linq__Enumerable__Cast<System::Runtime::Serialization::EnumMemberAttribute>_System__Collections__IEnumerable_
                                  );
              if ((TypeInfo__Newtonsoft__Json__Converters__StringEnumConverter____c->_1).
                  cctor_finished_or_no_cctor == 0) {
                func_?(TypeInfo__Newtonsoft__Json__Converters__StringEnumConverter____c);
              }
              this_00 = TypeInfo__Newtonsoft__Json__Converters__StringEnumConverter____c->
                        static_fields->__9__7_0;
              if (this_00 == (Func_2_System_Runtime_Serialization_EnumMemberAttribute_String_ *)0x0)
              {
                if ((TypeInfo__Newtonsoft__Json__Converters__StringEnumConverter____c->_1).
                    cctor_finished_or_no_cctor == 0) {
                  func_?(TypeInfo__Newtonsoft__Json__Converters__StringEnumConverter____c);
                }
                object = TypeInfo__Newtonsoft__Json__Converters__StringEnumConverter____c->
                         static_fields->__9;
                this_00 = (Func_2_System_Runtime_Serialization_EnumMemberAttribute_String_ *)
                          func_?(
                                         TypeInfo__System__Func<System::Runtime::Serialization::EnumMemberAttribute,_System::String>
                                         );
                if (this_00 ==
                    (Func_2_System_Runtime_Serialization_EnumMemberAttribute_String_ *)0x0)
                goto code_?;
                mscorlib.dll::System::Reflection::RuntimePropertyInfo+Getter`2[System::Object,System
                ::Object]::RuntimePropertyInfo_Getter_2_System_Object_System_Object___ctor
                          ((RuntimePropertyInfo_Getter_2_System_Object_System_Object_ *)this_00,
                           (Object *)object,
                           MethodInfo__Newtonsoft__Json__Converters__StringEnumConverter____c___GetEnumNameMap_b__7_0_System__Runtime__Serialization__EnumMemberAttribute_
                           ,(MethodInfo *)0x0);
                TypeInfo__Newtonsoft__Json__Converters__StringEnumConverter____c->static_fields->
                __9__7_0 = this_00;
                func_?();
              }
              pIVar16 = System.Core.dll::System::Linq::Enumerable::Enumerable_Select_3
                                  (pIVar16,(Func_2_Object_Object_ *)this_00,
                                   System__Collections__Generic__IEnumerable<System::String>_MethodInfo__System__Linq__Enumerable__Select<System::Runtime::Serialization::EnumMemberAttribute,_System::String>_System__Collections__Generic__IEnumerable<System::Runtime::Serialization::EnumMemberAttribute>__System__Func<System::Runtime::Serialization::EnumMemberAttribute,_System::String>_
                                  );
              second = System.Core.dll::System::Linq::Enumerable::Enumerable_SingleOrDefault_1
                                 (pIVar16,
                                  System__String_MethodInfo__System__Linq__Enumerable__SingleOrDefault<System::String>_System__Collections__Generic__IEnumerable<System::String>_
                                 );
              if (second == (Object *)0x0) {
                second = (Object *)func_?(7,pFVar14);
              }
              if (pBStack_6 == (BidirectionalDictionary_2_System_Object_System_Object_ *)0x0)
              goto code_?;
              bVar8 = Json::Utilities::BidirectionalDictionary`2[System::Object,System::Object]::
                      BidirectionalDictionary_2_System_Object_System_Object__TryGetBySecond
                                (pBStack_6,second,(Object **)&stack0xffffffd4,
                                 MethodInfo__Newtonsoft__Json__Utilities__BidirectionalDictionary<System::String,_System::String>__TryGetBySecond_System__String__System__String__
                                );
              if (bVar8 != 0) goto code_?;
              if (pBStack_6 == (BidirectionalDictionary_2_System_Object_System_Object_ *)0x0)
              goto code_?;
              Json::Utilities::BidirectionalDictionary`2[System::Object,System::Object]::
              BidirectionalDictionary_2_System_Object_System_Object__Add
                        (pBStack_6,first,second,
                         MethodInfo__Newtonsoft__Json__Utilities__BidirectionalDictionary<System::String,_System::String>__Add_System__String__System__String_
                        );
            }
            pDVar10 = (this->fields)._enumMemberNamesPerType;
            if (pDVar10 != (Dictionary_2_System_Type_Newtonsoft_Json_Utilities_BidirectionalDictionary_2_System_String_System_String_
                           *)0x0) {
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
              Object]::Dictionary_2_System_Object_System_Object__set_Item
                        ((Dictionary_2_System_Object_System_Object_ *)pDVar10,(Object *)t,
                         (Object *)pBStack_6,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Type,_Newtonsoft::Json::Utilities::BidirectionalDictionary<System::String,_System::String>_>__set_Item_System__Type__Newtonsoft__Json__Utilities__BidirectionalDictionary<System::String,_System::String>_
                        );
              uStack_1 = 0xffffffff;
              if (bStack_9 != 0) {
                mscorlib.dll::System::Threading::Monitor::Monitor_1_Exit
                          ((Object *)pDVar7,(MethodInfo *)0x0);
              }
              goto code_?;
            }
          }
        }
      }
    }
  }
code_?:
  func_?();
code_?:
  uVar17 = func_?(&TypeInfo__System__Globalization__CultureInfo);
  func_?(uVar17);
  provider = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                       ((MethodInfo *)0x0);
  uVar17 = func_?();
  args = (Object__Array *)func_?(uVar17);
  func_?();
  func_?(args);
  func_?(0);
  func_?(t);
  uVar17 = func_?(7,t);
  func_?(args);
  func_?(args,uVar17);
  func_?(1,uVar17);
  pSVar18 = (String *)func_?(&StringLiteral_Enum_name___0___already_exists_o);
  pSVar18 = Json::Utilities::StringUtils::StringUtils_FormatWith
                      (pSVar18,(IFormatProvider *)provider,args,(MethodInfo *)0x0);
  func_?();
  this_01 = (Exception *)func_?();
  func_?();
  mscorlib.dll::System::Exception::Exception__ctor_1(this_01,pSVar18,(MethodInfo *)0x0);
  func_?();
  func_?();
  pcVar19 = (code *)swi(3);
  pBVar20 = (BidirectionalDictionary_2_System_String_System_String_ *)(*pcVar19)();
  return pBVar20;
}


/* Object ReadJson(JsonReader, Type, Object, JsonSerializer) */

Object * Assembly-CSharp.dll::Newtonsoft::Json::Converters::StringEnumConverter::
         StringEnumConverter_ReadJson
                   (StringEnumConverter *this,JsonReader *reader,Type *objectType,
                   Object *existingValue,JsonSerializer *serializer,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__Newtonsoft__Json__Utilities__BidirectionalDictionary<System::String,_System::String>__TryGetBySecond_System__String__System__String__
                   );
    func_?(&TypeInfo__Newtonsoft__Json__Utilities__ConvertUtils);
    func_?(&TypeInfo__System__Globalization__CultureInfo);
    func_?(&TypeInfo__System__Enum);
    cRam_? = '\x01';
  }
  bVar1 = Json::Utilities::ReflectionUtils::ReflectionUtils_IsNullableType
                    (objectType,(MethodInfo *)0x0);
  t = objectType;
  if (bVar1 != 0) {
    t = mscorlib.dll::System::Nullable::Nullable_GetUnderlyingType(objectType,(MethodInfo *)0x0);
  }
  if (reader == (JsonReader *)0x0) {
code_?:
    func_?();
  }
  else {
    iVar2 = (*(reader->klass->vtable).get_TokenType.methodPtr)(reader);
    if (iVar2 == 0xb) {
      bVar1 = Json::Utilities::ReflectionUtils::ReflectionUtils_IsNullableType
                        (objectType,(MethodInfo *)0x0);
      if (bVar1 != 0) {
        return (Object *)0x0;
      }
      func_?();
      func_?();
      pCVar3 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                         ((MethodInfo *)0x0);
      func_?();
      args = (Object__Array *)func_?();
      func_?();
      func_?(args);
      func_?();
      ppSVar4 = &StringLiteral_Cannot_convert_null_value_to__0_;
      goto code_?;
    }
    iVar2 = (*(reader->klass->vtable).get_TokenType.methodPtr)(reader);
    if (iVar2 == 9) {
      this_00 = StringEnumConverter_GetEnumNameMap(this,t,(MethodInfo *)0x0);
      piVar5 = (int *)(*(reader->klass->vtable).get_Value.methodPtr)(reader);
      if ((piVar5 != (int *)0x0) &&
         (pOVar6 = (Object *)(**(code **)(*piVar5 + 0xd4))(piVar5),
         this_00 != (BidirectionalDictionary_2_System_String_System_String_ *)0x0)) {
        pMVar7 = 
        MethodInfo__Newtonsoft__Json__Utilities__BidirectionalDictionary<System::String,_System::String>__TryGetBySecond_System__String__System__String__
        ;
        Json::Utilities::BidirectionalDictionary`2[System::Object,System::Object]::
        BidirectionalDictionary_2_System_Object_System_Object__TryGetBySecond
                  ((BidirectionalDictionary_2_System_Object_System_Object_ *)this_00,pOVar6,
                   (Object **)&stack0xfffffff8,
                   MethodInfo__Newtonsoft__Json__Utilities__BidirectionalDictionary<System::String,_System::String>__TryGetBySecond_System__String__System__String__
                  );
        if (pMVar7 != (MethodInfo *)0x0) {
code_?:
          if ((TypeInfo__System__Enum->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          pOVar6 = mscorlib.dll::System::Enum::Enum_Parse_1(t,(String *)pMVar7,1,(MethodInfo *)0x0);
          return pOVar6;
        }
        piVar5 = (int *)(*(reader->klass->vtable).get_Value.methodPtr)();
        if (piVar5 != (int *)0x0) {
          pMVar7 = (MethodInfo *)(**(code **)(*piVar5 + 0xd4))(piVar5);
          goto code_?;
        }
      }
      goto code_?;
    }
    iVar2 = (*(reader->klass->vtable).get_TokenType.methodPtr)(reader);
    if (iVar2 == 7) {
      pOVar6 = (Object *)(*(reader->klass->vtable).get_Value.methodPtr)(reader);
      if ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pCVar3 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                         ((MethodInfo *)0x0);
      if ((TypeInfo__Newtonsoft__Json__Utilities__ConvertUtils->_1).cctor_finished_or_no_cctor == 0)
      {
        func_?();
      }
      pOVar6 = Json::Utilities::ConvertUtils::ConvertUtils_ConvertOrCast
                         (pOVar6,pCVar3,t,(MethodInfo *)0x0);
      return pOVar6;
    }
  }
  uVar8 = func_?();
  func_?(uVar8);
  pCVar3 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                     ((MethodInfo *)0x0);
  func_?();
  args = (Object__Array *)func_?();
  func_?(reader);
  func_?(7,reader);
  func_?();
  uVar8 = func_?();
  func_?(args);
  func_?(args,uVar8);
  func_?();
  ppSVar4 = &StringLiteral_Unexpected_token_when_parsing_en;
code_?:
  pMVar7 = (MethodInfo *)0x0;
  pSVar9 = (String *)func_?(ppSVar4);
  pSVar9 = Json::Utilities::StringUtils::StringUtils_FormatWith
                     (pSVar9,(IFormatProvider *)pCVar3,args,pMVar7);
  func_?();
  this_01 = (Exception *)func_?();
  func_?(this_01);
  mscorlib.dll::System::Exception::Exception__ctor_1(this_01,pSVar9,(MethodInfo *)0x0);
  func_?(&
                  MethodInfo__Newtonsoft__Json__Converters__StringEnumConverter__ReadJson_Newtonsoft__Json__JsonReader__System__Type__System__Object__Newtonsoft__Json__JsonSerializer_
                 );
  func_?();
  pcVar10 = (code *)swi(3);
  pOVar6 = (Object *)(*pcVar10)();
  return pOVar6;
}


/* Void WriteJson(JsonWriter, Object, JsonSerializer) */

void Assembly-CSharp.dll::Newtonsoft::Json::Converters::StringEnumConverter::
     StringEnumConverter_WriteJson
               (StringEnumConverter *this,JsonWriter *writer,Object *value,
               JsonSerializer *serializer,MethodInfo *method)

{
  this_02 = (StringEnumConverter *)value;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__Newtonsoft__Json__Utilities__BidirectionalDictionary<System::String,_System::String>__TryGetByFirst_System__String__System__String__
                   );
    func_?(&TypeInfo__System__Char);
    func_?(&TypeInfo__System__Enum);
    func_?(&StringLiteral_G);
    cRam_? = '\x01';
  }
  value = (Object *)0x0;
  if (this_02 == (StringEnumConverter *)0x0) {
    if (writer != (JsonWriter *)0x0) {
      (*(writer->klass->vtable).WriteNull.methodPtr)
                (writer,(writer->klass->vtable).WriteNull.method);
      return;
    }
  }
  else {
    pEVar1 = TypeInfo__System__Enum;
    if (((((Object *)this_02)->klass->_1).typeHierarchyDepth <
         (TypeInfo__System__Enum->_1).typeHierarchyDepth) ||
       ((((Object *)this_02)->klass->_1).typeHierarchy
        [(TypeInfo__System__Enum->_1).typeHierarchyDepth - 1] !=
        (Il2CppClass *)TypeInfo__System__Enum)) goto code_?;
    this_00 = (JsonSerializer *)
              mscorlib.dll::System::Enum::Enum_ToString_2
                        ((Enum *)this_02,StringLiteral_G,(MethodInfo *)0x0);
    if (this_00 != (JsonSerializer *)0x0) {
      uVar2 = mscorlib.dll::System::String::String_get_Chars((String *)this_00,0,(MethodInfo *)0x0);
      if ((TypeInfo__System__Char->_1).cctor_finished_or_no_cctor == 0) {
        this = (StringEnumConverter *)TypeInfo__System__Char;
        func_?();
      }
      bVar3 = mscorlib.dll::System::Char::Char_IsNumber(uVar2,(MethodInfo *)0x0);
      if (bVar3 == 0) {
        uVar2 = mscorlib.dll::System::String::String_get_Chars
                          ((String *)this_00,0,(MethodInfo *)0x0);
        if (uVar2 != 0x2d) {
          t = mscorlib.dll::System::Object::Object_GetType((Object *)this_02,(MethodInfo *)0x0);
          this_01 = StringEnumConverter_GetEnumNameMap(this,t,(MethodInfo *)0x0);
          this_02 = this;
          if (this_01 != (BidirectionalDictionary_2_System_String_System_String_ *)0x0) {
            Json::Utilities::BidirectionalDictionary`2[System::Object,System::Object]::
            BidirectionalDictionary_2_System_Object_System_Object__TryGetByFirst
                      ((BidirectionalDictionary_2_System_Object_System_Object_ *)this_01,
                       (Object *)this_00,&value,
                       MethodInfo__Newtonsoft__Json__Utilities__BidirectionalDictionary<System::String,_System::String>__TryGetByFirst_System__String__System__String__
                      );
            if (value != (Object *)0x0) {
              this_00 = (JsonSerializer *)value;
            }
            if ((this->fields)._CamelCaseText_k__BackingField != 0) {
              method = (MethodInfo *)0x0;
              value = (Object *)&UNK_?;
              serializer = this_00;
              this_00 = (JsonSerializer *)
                        Json::Utilities::StringUtils::StringUtils_ToCamelCase
                                  ((String *)this_00,(MethodInfo *)0x0);
            }
            value = (Object *)this_00;
            if (writer != (JsonWriter *)0x0) {
              (*(writer->klass->vtable).WriteValue.methodPtr)
                        (writer,this_00,(writer->klass->vtable).WriteValue.method);
              return;
            }
          }
          goto code_?;
        }
      }
      if (writer != (JsonWriter *)0x0) {
        (*(writer->klass->vtable).WriteValue_37.methodPtr)
                  (writer,this_02,(writer->klass->vtable).WriteValue_37.method);
        return;
      }
    }
  }
code_?:
  func_?();
  pEVar1 = extraout_EDX;
code_?:
  func_?(this_02,pEVar1);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* StringEnumConverter() */

void Assembly-CSharp.dll::Newtonsoft::Json::Converters::StringEnumConverter::
     StringEnumConverter__ctor(StringEnumConverter *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Type,_Newtonsoft::Json::Utilities::BidirectionalDictionary<System::String,_System::String>_>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<System::Type,_Newtonsoft::Json::Utilities::BidirectionalDictionary<System::String,_System::String>_>
                   );
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Type_Newtonsoft_Json_Utilities_BidirectionalDictionary_2_System_String_System_String_
             *)func_?(
                              TypeInfo__System__Collections__Generic__Dictionary<System::Type,_Newtonsoft::Json::Utilities::BidirectionalDictionary<System::String,_System::String>_>
                              );
  if (this_00 !=
      (Dictionary_2_System_Type_Newtonsoft_Json_Utilities_BidirectionalDictionary_2_System_String_System_String_
       *)0x0) {
    Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
    ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
              ((ParameterOverride_1_System_Object_ *)this_00,
               MethodInfo__System__Collections__Generic__Dictionary<System::Type,_Newtonsoft::Json::Utilities::BidirectionalDictionary<System::String,_System::String>_>__Dictionary__
              );
    (this->fields)._enumMemberNamesPerType = this_00;
    func_?(&this->fields,this_00);
    UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::TweenRunner`1[FloatTween]::
    TweenRunner_1_FloatTween___ctor((TweenRunner_1_FloatTween_ *)this,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

