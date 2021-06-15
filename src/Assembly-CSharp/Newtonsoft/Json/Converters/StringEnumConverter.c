
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
    bVar1 = mscorlib.dll::System::Type::Type_get_IsEnum(objectType,(MethodInfo *)0x0);
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
  pEStack_1 = (EventInfo *)0xffffffff;
  pFStack_2 = (FieldInfo *)&DAT_?;
  pIStack_3 = (Il2CppClass *)*unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &pIStack_3;
  pIStack_4 = (Il2CppInteropData *)&stack0xffffffb4;
  pIVar5 = (Il2CppInteropData *)&stack0xffffffb4;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    pIVar5 = pIStack_4;
  }
  pIStack_4 = pIVar5;
  pTStack_6 = (Theme *)0x0;
  pIStack_7 = (Il2CppClass *)0x0;
  pIVar8 = (Il2CppClass *)0x0;
  pBVar9 = (BidirectionalDictionary_2_System_String_System_String___Class *)&stack0xffffffb4;
  func_?();
  pDVar10 = (this->fields)._enumMemberNamesPerType;
  pIStack_4 = (Il2CppInteropData *)&stack0xffffffb4;
  if (pDVar10 != (Dictionary_2_System_Type_Newtonsoft_Json_Utilities_BidirectionalDictionary_2_System_String_System_String_
                 *)0x0) {
    pIStack_4 = (Il2CppInteropData *)&stack0xffffffb4;
    bVar11 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,UnityEngine::
            Sprite]::Dictionary_2_System_String_UnityEngine_Sprite__TryGetValue
                      ((Dictionary_2_System_String_UnityEngine_Sprite_ *)pDVar10,(String *)t,
                       (Sprite **)&pTStack_6,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Type,_Newtonsoft::Json::Utilities::BidirectionalDictionary<System::String,_System::String>_>__TryGetValue_System__Type__Newtonsoft__Json__Utilities__BidirectionalDictionary<System::String,_System::String>__
                      );
    if (bVar11 != 0) {
code_?:
      pTVar12 = pTStack_6;
code_?:
      *unaff_FS_OFFSET = pIStack_3;
      return (BidirectionalDictionary_2_System_String_System_String_ *)pTVar12;
    }
    pDVar10 = (this->fields)._enumMemberNamesPerType;
    mscorlib.dll::System::Threading::Monitor::Monitor_Enter((Object *)pDVar10,(MethodInfo *)0x0);
    pDVar13 = (this->fields)._enumMemberNamesPerType;
    pEStack_1 = (EventInfo *)0x0;
    if (pDVar13 != (Dictionary_2_System_Type_Newtonsoft_Json_Utilities_BidirectionalDictionary_2_System_String_System_String_
                   *)0x0) {
      bVar11 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,UnityEngine::
              Sprite]::Dictionary_2_System_String_UnityEngine_Sprite__TryGetValue
                        ((Dictionary_2_System_String_UnityEngine_Sprite_ *)pDVar13,(String *)t,
                         (Sprite **)&pTStack_6,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Type,_Newtonsoft::Json::Utilities::BidirectionalDictionary<System::String,_System::String>_>__TryGetValue_System__Type__Newtonsoft__Json__Utilities__BidirectionalDictionary<System::String,_System::String>__
                        );
      pTVar12 = pTStack_6;
      if (bVar11 != 0) {
code_?:
        pEStack_1 = (EventInfo *)0xffffffff;
        mscorlib.dll::System::Threading::Monitor::Monitor_Exit((Object *)pDVar10,(MethodInfo *)0x0);
        if (pIVar8 != (Il2CppClass *)0x0) goto code_?;
        if ((pBVar9->_0).image == (Il2CppImage *)0x122) goto code_?;
        goto code_?;
      }
      if ((((uint)(TypeInfo__System__StringComparer->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__StringComparer->_1).cctor_started == 0)) {
        func_?();
      }
      firstEqualityComparer =
           mscorlib.dll::System::StringComparer::StringComparer_get_OrdinalIgnoreCase
                     ((MethodInfo *)0x0);
      secondEqualityComparer =
           mscorlib.dll::System::StringComparer::StringComparer_get_OrdinalIgnoreCase
                     ((MethodInfo *)0x0);
      pBVar9 = 
      TypeInfo__Newtonsoft__Json__Utilities__BidirectionalDictionary<System::String,_System::String>
      ;
      pIVar8 = (Il2CppClass *)&UNK_?;
      pTVar12 = (Theme *)func_?();
      Json::Utilities::BidirectionalDictionary`2[System::String,System::Object]::
      BidirectionalDictionary_2_System_String_System_Object___ctor
                ((BidirectionalDictionary_2_System_String_System_Object_ *)pTVar12,
                 (IEqualityComparer_1_System_String_ *)firstEqualityComparer,
                 (IEqualityComparer_1_System_Object_ *)secondEqualityComparer,
                 MethodInfo__Newtonsoft__Json__Utilities__BidirectionalDictionary<System::String,_System::String>__BidirectionalDictionary_System__Collections__Generic__IEqualityComparer<System::String>__System__Collections__Generic__IEqualityComparer<System::String>_
                );
      pTStack_6 = pTVar12;
      if (t != (Type *)0x0) {
        pFVar14 = mscorlib.dll::System::Type::Type_GetFields(t,(MethodInfo *)0x0);
        uVar15 = 0;
        while (pFVar14 != (FieldInfo_1__Array *)0x0) {
          if ((int)pFVar14->max_length <= (int)uVar15) {
            pDVar13 = (this->fields)._enumMemberNamesPerType;
            if (pDVar13 != (Dictionary_2_System_Type_Newtonsoft_Json_Utilities_BidirectionalDictionary_2_System_String_System_String_
                           *)0x0) {
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,Theme]::
              Dictionary_2_System_String_Theme__set_Item
                        ((Dictionary_2_System_String_Theme_ *)pDVar13,(String *)t,pTStack_6,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Type,_Newtonsoft::Json::Utilities::BidirectionalDictionary<System::String,_System::String>_>__set_Item_System__Type__Newtonsoft__Json__Utilities__BidirectionalDictionary<System::String,_System::String>_
                        );
              (pBVar9->_0).image = (Il2CppImage *)0x120;
              pTVar12 = (Theme *)0x0;
              goto code_?;
            }
            break;
          }
          if (pFVar14->max_length <= uVar15) {
            uVar16 = func_?();
            func_?(uVar16,0,0);
            break;
          }
          pFVar17 = pFVar14->vector[uVar15];
          if (pFVar17 == (FieldInfo_1 *)0x0) break;
          pSVar18 = (String *)
                   (*(code *)(pFVar17->klass->vtable).__unknown_1.method)
                             (pFVar17,(pFVar17->klass->vtable).__unknown_2.methodPtr);
          handle = TypeRef__System__Runtime__Serialization__EnumMemberAttribute;
          if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__System__Type->_1).cctor_started == 0)) {
            func_?(TypeInfo__System__Type);
          }
          mscorlib.dll::System::Type::Type_GetTypeFromHandle
                    ((RuntimeTypeHandle)handle,(MethodInfo *)0x0);
          source = (IEnumerable *)func_?(0xd,pFVar17);
          source_00 = (Il2CppClass *)
                      System.Core.dll::System::Linq::Enumerable::Enumerable_Cast_8
                                (source,
                                 System__Collections__Generic__IEnumerable<System::Runtime::Serialization::EnumMemberAttribute>_MethodInfo__System__Linq__Enumerable__Cast<System::Runtime::Serialization::EnumMemberAttribute>_System__Collections__IEnumerable_
                                );
          if (TypeInfo__Newtonsoft__Json__Converters__StringEnumConverter->static_fields->
              __f__am_cache0 ==
              (Func_2_System_Runtime_Serialization_EnumMemberAttribute_String_ *)0x0) {
            this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                       *)func_?(
                                        TypeInfo__System__Func<System::Runtime::Serialization::EnumMemberAttribute,_System::String>
                                        );
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
            SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
            UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                      (this_00,(Object *)0x0,
                       MethodInfo__Newtonsoft__Json__Converters__StringEnumConverter___GetEnumNameMap_m__0_System__Runtime__Serialization__EnumMemberAttribute_
                       ,
                       MethodInfo__System__Func<System::Runtime::Serialization::EnumMemberAttribute,_System::String>__Func_System__Object__void__
                      );
            TypeInfo__Newtonsoft__Json__Converters__StringEnumConverter->static_fields->
            __f__am_cache0 =
                 (Func_2_System_Runtime_Serialization_EnumMemberAttribute_String_ *)this_00;
          }
          source_01 = System.Core.dll::System::Linq::Enumerable::Enumerable_Select_14
                                ((IEnumerable_1_System_Object_ *)source_00,
                                 (Func_2_Object_Single_ *)
                                 TypeInfo__Newtonsoft__Json__Converters__StringEnumConverter->
                                 static_fields->__f__am_cache0,
                                 System__Collections__Generic__IEnumerable<System::String>_MethodInfo__System__Linq__Enumerable__Select<System::Runtime::Serialization::EnumMemberAttribute,_System::String>_System__Collections__Generic__IEnumerable<System::Runtime::Serialization::EnumMemberAttribute>__System__Func<System::Runtime::Serialization::EnumMemberAttribute,_System::String>_
                                );
          second = System.Core.dll::System::Linq::Enumerable::Enumerable_SingleOrDefault_5
                             ((IEnumerable_1_System_Reflection_MemberInfo_ *)source_01,
                              System__String_MethodInfo__System__Linq__Enumerable__SingleOrDefault<System::String>_System__Collections__Generic__IEnumerable<System::String>_
                             );
          if (second == (MemberInfo_1 *)0x0) {
            second = (MemberInfo_1 *)func_?(8,pFVar17);
          }
          if (pTStack_6 == (Theme *)0x0) break;
          bVar11 = Json::Utilities::BidirectionalDictionary`2[System::String,System::Object]::
                  BidirectionalDictionary_2_System_String_System_Object__TryGetBySecond
                            ((BidirectionalDictionary_2_System_String_System_Object_ *)pTStack_6,
                             (Object *)second,(String **)&pIStack_7,
                             MethodInfo__Newtonsoft__Json__Utilities__BidirectionalDictionary<System::String,_System::String>__TryGetBySecond_System__String__System__String__
                            );
          if (bVar11 != 0) goto code_?;
          if (pTStack_6 == (Theme *)0x0) break;
          Json::Utilities::BidirectionalDictionary`2[System::String,System::Object]::
          BidirectionalDictionary_2_System_String_System_Object__Add
                    ((BidirectionalDictionary_2_System_String_System_Object_ *)pTStack_6,pSVar18,
                     (Object *)second,
                     MethodInfo__Newtonsoft__Json__Utilities__BidirectionalDictionary<System::String,_System::String>__Add_System__String__System__String_
                    );
          uVar15 = uVar15 + 1;
        }
      }
    }
  }
  func_?(0);
code_?:
  if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr & 0x2000000)
       != 0) && ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__Globalization__CultureInfo);
  }
  provider = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                       ((MethodInfo *)0x0);
  args = (Object__Array *)func_?(TypeInfo__System__Object);
  func_?(args);
  func_?(args);
  func_?(0);
  func_?(t,0);
  uVar16 = func_?(8,t);
  func_?(args,0);
  func_?(args,uVar16);
  func_?(1,uVar16);
  pSVar18 = Json::Utilities::StringUtils::StringUtils_FormatWith
                     (StringLiteral_Enum_name___0___already_exists_o,(IFormatProvider *)provider,
                      args,(MethodInfo *)0x0);
  this_01 = (IsolatedStorageException *)func_?();
  mscorlib.dll::System::IO::IsolatedStorage::IsolatedStorageException::
  IsolatedStorageException__ctor_1(this_01,pSVar18,(MethodInfo *)0x0);
  func_?();
code_?:
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pCVar1 = (CultureInfo *)objectType;
  bVar2 = Json::Utilities::ReflectionUtils::ReflectionUtils_IsNullableType
                    (objectType,(MethodInfo *)0x0);
  t = (Type *)pCVar1;
  if (bVar2 != 0) {
    t = mscorlib.dll::System::Nullable::Nullable_GetUnderlyingType((Type *)pCVar1,(MethodInfo *)0x0)
    ;
  }
  objectType = t;
  if (reader == (JsonReader *)0x0) {
code_?:
    func_?();
  }
  else {
    iVar3 = (*(code *)(reader->klass->vtable).get_TokenType.method)(reader);
    if (iVar3 == 0xb) {
      bVar2 = Json::Utilities::ReflectionUtils::ReflectionUtils_IsNullableType
                        ((Type *)pCVar1,(MethodInfo *)0x0);
      if (bVar2 != 0) {
        return (Object *)0x0;
      }
      goto code_?;
    }
    iVar3 = (*(code *)(reader->klass->vtable).get_TokenType.method)(reader);
    if (iVar3 == 9) {
      this_00 = StringEnumConverter_GetEnumNameMap(this,t,(MethodInfo *)0x0);
      piVar4 = (int *)(*(code *)(reader->klass->vtable).get_Value.method)(reader);
      if ((piVar4 != (int *)0x0) &&
         (pOVar5 = (Object *)(**(code **)(*piVar4 + 0xd8))(piVar4),
         this_00 != (BidirectionalDictionary_2_System_String_System_String_ *)0x0)) {
        value = 
        MethodInfo__Newtonsoft__Json__Utilities__BidirectionalDictionary<System::String,_System::String>__TryGetBySecond_System__String__System__String__
        ;
        Json::Utilities::BidirectionalDictionary`2[System::String,System::Object]::
        BidirectionalDictionary_2_System_String_System_Object__TryGetBySecond
                  ((BidirectionalDictionary_2_System_String_System_Object_ *)this_00,pOVar5,
                   (String **)&stack0xfffffff8,
                   MethodInfo__Newtonsoft__Json__Utilities__BidirectionalDictionary<System::String,_System::String>__TryGetBySecond_System__String__System__String__
                  );
        if (value != (MethodInfo *)0x0) {
code_?:
          if ((((uint)(TypeInfo__System__Enum->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__System__Enum->_1).cctor_started == 0)) {
            func_?();
          }
          pOVar5 = mscorlib.dll::System::Enum::Enum_Parse_1
                             (objectType,(String *)value,1,(MethodInfo *)0x0);
          return pOVar5;
        }
        piVar4 = (int *)(*(code *)(reader->klass->vtable).get_Value.method)();
        if (piVar4 != (int *)0x0) {
          value = (MethodInfo *)(**(code **)(*piVar4 + 0xd8))(piVar4);
          goto code_?;
        }
      }
      goto code_?;
    }
    iVar3 = (*(code *)(reader->klass->vtable).get_TokenType.method)(reader);
    if (iVar3 == 7) {
      pOVar5 = (Object *)(*(code *)(reader->klass->vtable).get_Value.method)(reader);
      if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr &
           0x2000000) != 0) &&
         ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
        func_?();
      }
      pCVar1 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                         ((MethodInfo *)0x0);
      if ((((uint)(TypeInfo__Newtonsoft__Json__Utilities__ConvertUtils->vtable).Equals.methodPtr &
           0x2000000) != 0) &&
         ((TypeInfo__Newtonsoft__Json__Utilities__ConvertUtils->_1).cctor_started == 0)) {
        func_?();
      }
      pOVar5 = Json::Utilities::ConvertUtils::ConvertUtils_ConvertOrCast
                         (pOVar5,pCVar1,t,(MethodInfo *)0x0);
      return pOVar5;
    }
  }
  if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr & 0x2000000)
       != 0) && ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
    func_?();
  }
  pCVar1 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                     ((MethodInfo *)0x0);
  pOVar6 = (Object__Array *)func_?(TypeInfo__System__Object);
  func_?(reader,0);
  objectType = (Type *)func_?(7,reader);
  uVar7 = func_?(TypeInfo__Newtonsoft__Json__JsonToken,&objectType);
  func_?(pOVar6,0);
  func_?(pOVar6,uVar7);
  func_?();
  pSVar8 = Json::Utilities::StringUtils::StringUtils_FormatWith
                     (StringLiteral_Unexpected_token_when_parsing_en,(IFormatProvider *)pCVar1,
                      pOVar6,(MethodInfo *)0x0);
  pIVar9 = (IsolatedStorageException *)func_?(TypeInfo__System__Exception);
  mscorlib.dll::System::IO::IsolatedStorage::IsolatedStorageException::
  IsolatedStorageException__ctor_1(pIVar9,pSVar8,(MethodInfo *)0x0);
  existingValue =
       (Object *)
       MethodInfo__Newtonsoft__Json__Converters__StringEnumConverter__ReadJson_Newtonsoft__Json__JsonReader__System__Type__System__Object__Newtonsoft__Json__JsonSerializer_
  ;
  objectType = (Type *)0x0;
  func_?();
code_?:
  if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr & 0x2000000)
       != 0) && ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
    func_?();
  }
  provider = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                       ((MethodInfo *)0x0);
  pOVar6 = (Object__Array *)func_?();
  func_?(pOVar6);
  func_?(pOVar6,pCVar1);
  func_?();
  pSVar8 = Json::Utilities::StringUtils::StringUtils_FormatWith
                     (StringLiteral_Cannot_convert_null_value_to__0_,(IFormatProvider *)provider,
                      pOVar6,(MethodInfo *)0x0);
  pIVar9 = (IsolatedStorageException *)func_?();
  mscorlib.dll::System::IO::IsolatedStorage::IsolatedStorageException::
  IsolatedStorageException__ctor_1(pIVar9,pSVar8,(MethodInfo *)0x0);
  method = 
  MethodInfo__Newtonsoft__Json__Converters__StringEnumConverter__ReadJson_Newtonsoft__Json__JsonReader__System__Type__System__Object__Newtonsoft__Json__JsonSerializer_
  ;
  serializer = (JsonSerializer *)0x0;
  objectType = (Type *)&UNK_?;
  existingValue = (Object *)pIVar9;
  func_?();
  pcVar10 = (code *)swi(3);
  pOVar5 = (Object *)(*pcVar10)();
  return pOVar5;
}


/* Void WriteJson(JsonWriter, Object, JsonSerializer) */

void Assembly-CSharp.dll::Newtonsoft::Json::Converters::StringEnumConverter::
     StringEnumConverter_WriteJson
               (StringEnumConverter *this,JsonWriter *writer,Object *value,
               JsonSerializer *serializer,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pSStack_1 = (String *)0x0;
  if (value == (Object *)0x0) {
    if (writer != (JsonWriter *)0x0) {
      (*(code *)(writer->klass->vtable).WriteNull.method)
                (writer,(writer->klass->vtable).WriteUndefined.methodPtr);
      return;
    }
  }
  else {
    bVar2 = (TypeInfo__System__Enum->_1).naturalAligment;
    if (((value->klass->_1).naturalAligment < bVar2) ||
       ((value->klass->_1).typeHierarchy[bVar2 - 1] != (Il2CppClass *)TypeInfo__System__Enum)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    this_02 = (Enum *)0x0;
    if (bVar3) {
      this_02 = (Enum *)value;
    }
    pEVar4 = TypeInfo__System__Enum;
    if (this_02 == (Enum *)0x0) goto code_?;
    this_00 = mscorlib.dll::System::Enum::Enum_ToString_2(this_02,StringLiteral_G,(MethodInfo *)0x0)
    ;
    if (this_00 != (String *)0x0) {
      uVar5 = mscorlib.dll::System::String::String_get_Chars(this_00,0,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__System__Char->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__Char->_1).cctor_started == 0)) {
        func_?();
      }
      bVar6 = mscorlib.dll::System::Char::Char_IsNumber(uVar5,(MethodInfo *)0x0);
      if (bVar6 == 0) {
        uVar5 = mscorlib.dll::System::String::String_get_Chars(this_00,0,(MethodInfo *)0x0);
        if (uVar5 != 0x2d) {
          t = mscorlib.dll::System::Object::Object_GetType((Object *)this_02,(MethodInfo *)0x0);
          this_01 = StringEnumConverter_GetEnumNameMap(this,t,(MethodInfo *)0x0);
          pMVar7 = 
          MethodInfo__Newtonsoft__Json__Utilities__BidirectionalDictionary<System::String,_System::String>__TryGetByFirst_System__String__System__String__
          ;
          value = (Object *)this;
          if (this_01 != (BidirectionalDictionary_2_System_String_System_String_ *)0x0) {
            Json::Utilities::BidirectionalDictionary`2[System::String,System::Object]::
            BidirectionalDictionary_2_System_String_System_Object__TryGetByFirst
                      ((BidirectionalDictionary_2_System_String_System_Object_ *)this_01,this_00,
                       (Object **)&pSStack_1,
                       MethodInfo__Newtonsoft__Json__Utilities__BidirectionalDictionary<System::String,_System::String>__TryGetByFirst_System__String__System__String__
                      );
            if (pSStack_1 != (String *)0x0) {
              this_00 = pSStack_1;
            }
            if ((this->fields)._CamelCaseText_k__BackingField != 0) {
              pSStack_1 = this_00;
              this_00 = Json::Utilities::StringUtils::StringUtils_ToCamelCase
                                  (this_00,(MethodInfo *)0x0);
            }
            pSStack_1 = this_00;
            if (pMVar7 != (MethodInfo *)0x0) {
              (**(code **)(pMVar7->methodPointer + 0x178))
                        (pMVar7,this_00,*(undefined4 *)(pMVar7->methodPointer + 0x17c));
              return;
            }
          }
          goto code_?;
        }
      }
      if (writer != (JsonWriter *)0x0) {
        (*(code *)(writer->klass->vtable).WriteValue_37.method)
                  (writer,value,(writer->klass->vtable).WriteComment.methodPtr);
        return;
      }
    }
  }
code_?:
  func_?(0);
  pEVar4 = extraout_EDX;
code_?:
  func_?(value,pEVar4);
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* StringEnumConverter() */

void Assembly-CSharp.dll::Newtonsoft::Json::Converters::StringEnumConverter::
     StringEnumConverter__ctor(StringEnumConverter *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Type_Newtonsoft_Json_Utilities_BidirectionalDictionary_2_System_String_System_String_
             *)func_?(
                              TypeInfo__System__Collections__Generic__Dictionary<System::Type,_Newtonsoft::Json::Utilities::BidirectionalDictionary<System::String,_System::String>_>
                              );
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this_00,
             MethodInfo__System__Collections__Generic__Dictionary<System::Type,_Newtonsoft::Json::Utilities::BidirectionalDictionary<System::String,_System::String>_>__Dictionary__
            );
  (this->fields)._enumMemberNamesPerType = this_00;
  return;
}

