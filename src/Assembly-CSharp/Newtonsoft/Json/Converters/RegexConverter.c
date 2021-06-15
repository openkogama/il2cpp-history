
/* Boolean CanConvert(Type) */

bool Assembly-CSharp.dll::Newtonsoft::Json::Converters::RegexConverter::RegexConverter_CanConvert
               (RegexConverter *this,Type *objectType,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  handle = TypeRef__System__Text__RegularExpressions__Regex;
  if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__Type->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__Type);
  }
  pTVar1 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                     ((RuntimeTypeHandle)handle,(MethodInfo *)0x0);
  return objectType == pTVar1;
}


/* Object ReadBson(BsonReader) */

Object * Assembly-CSharp.dll::Newtonsoft::Json::Converters::RegexConverter::RegexConverter_ReadBson
                   (RegexConverter *this,BsonReader *reader,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (reader != (BsonReader *)0x0) {
    pSVar1 = (String *)
             (*(code *)(reader->klass->vtable).get_Value.method)
                       (reader,(reader->klass->vtable).get_ValueType.methodPtr);
    if (pSVar1 != (String *)0x0) {
      this_02 = (String *)0x0;
      if (pSVar1->klass == TypeInfo__System__String) {
        this_02 = pSVar1;
      }
      pSVar2 = TypeInfo__System__String;
      if (this_02 == (String *)0x0) goto code_?;
      iVar3 = mscorlib.dll::System::String::String_LastIndexOf_3
                        (this_02,::StringLiteral__,(MethodInfo *)0x0);
      mscorlib.dll::System::String::String_Substring_1(this_02,1,iVar3 + -1,(MethodInfo *)0x0);
      options = RegexOptions__Enum_None;
      this_00 = (Collection_1_VoxelHit_ *)
                mscorlib.dll::System::String::String_Substring(this_02,iVar3 + 1,(MethodInfo *)0x0);
      index = 0;
      if (this_00 != (Collection_1_VoxelHit_ *)0x0) {
        while( true ) {
          pIVar4 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                   Collection_1_VoxelHit__get_Items(this_00,(MethodInfo *)0x0);
          if ((int)pIVar4 <= index) break;
          uVar5 = mscorlib.dll::System::String::String_get_Chars
                            ((String *)this_00,index,(MethodInfo *)0x0);
          if (uVar5 == 0x69) {
            options = options | RegexOptions__Enum_IgnoreCase;
            index = index + 1;
          }
          else if (uVar5 == 0x6d) {
            options = options | RegexOptions__Enum_Multiline;
            index = index + 1;
          }
          else if (uVar5 == 0x73) {
            options = options | RegexOptions__Enum_Singleline;
            index = index + 1;
          }
          else {
            if (uVar5 == 0x78) {
              options = options | RegexOptions__Enum_ExplicitCapture;
            }
            index = index + 1;
          }
        }
        this_01 = (Regex *)func_?(TypeInfo__System__Text__RegularExpressions__Regex);
        System.dll::System::Text::RegularExpressions::Regex::Regex__ctor_2
                  (this_01,(String *)0x0,options,(MethodInfo *)0x0);
        return (Object *)this_01;
      }
    }
  }
  pSVar1 = (String *)func_?(0);
  pSVar2 = extraout_ECX;
code_?:
  func_?(pSVar1,pSVar2);
  pcVar6 = (code *)swi(3);
  pOVar7 = (Object *)(*pcVar6)();
  return pOVar7;
}


/* Object ReadJson(JsonReader, Type, Object, JsonSerializer) */

Object * Assembly-CSharp.dll::Newtonsoft::Json::Converters::RegexConverter::RegexConverter_ReadJson
                   (RegexConverter *this,JsonReader *reader,Type *objectType,Object *existingValue,
                   JsonSerializer *serializer,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (reader != (JsonReader *)0x0) {
    bVar1 = (TypeInfo__Newtonsoft__Json__Bson__BsonReader->_1).naturalAligment;
    if (((reader->klass->_1).naturalAligment < bVar1) ||
       ((reader->klass->_1).typeHierarchy[bVar1 - 1] !=
        (Il2CppClass *)TypeInfo__Newtonsoft__Json__Bson__BsonReader)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    pJVar3 = (JsonReader *)0x0;
    if (bVar2) {
      pJVar3 = reader;
    }
    if (pJVar3 != (JsonReader *)0x0) {
      if (cRam_? == '\0') {
        func_?(_UNK_?);
        cRam_? = '\x01';
      }
      pSVar4 = (String *)
               (*(code *)(pJVar3->klass->vtable).get_Value.method)
                         (pJVar3,(pJVar3->klass->vtable).get_ValueType.methodPtr);
      if (pSVar4 != (String *)0x0) {
        this_00 = (String *)0x0;
        if (pSVar4->klass == TypeInfo__System__String) {
          this_00 = pSVar4;
        }
        if (this_00 == (String *)0x0) {
          func_?(pSVar4,TypeInfo__System__String);
        }
        else {
          iVar5 = mscorlib.dll::System::String::String_LastIndexOf_3
                            (this_00,::StringLiteral__,(MethodInfo *)0x0);
          pSVar4 = mscorlib.dll::System::String::String_Substring_1
                             (this_00,1,iVar5 + -1,(MethodInfo *)0x0);
          options = RegexOptions__Enum_None;
          pJVar3 = (JsonReader *)
                   mscorlib.dll::System::String::String_Substring
                             (this_00,iVar5 + 1,(MethodInfo *)0x0);
          index = 0;
          if (pJVar3 != (JsonReader *)0x0) {
            while( true ) {
              reader = (JsonReader *)&UNK_?;
              pIVar6 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                       Collection_1_VoxelHit__get_Items
                                 ((Collection_1_VoxelHit_ *)pJVar3,(MethodInfo *)0x0);
              if ((int)pIVar6 <= index) break;
              uVar7 = mscorlib.dll::System::String::String_get_Chars
                                ((String *)&UNK_?,index,(MethodInfo *)0x0);
              if (uVar7 == 0x69) {
                options = options | RegexOptions__Enum_IgnoreCase;
                index = index + 1;
                pJVar3 = reader;
              }
              else if (uVar7 == 0x6d) {
                pJVar3 = (JsonReader *)&UNK_?;
                options = options | RegexOptions__Enum_Multiline;
                index = index + 1;
              }
              else if (uVar7 == 0x73) {
                pJVar3 = (JsonReader *)&UNK_?;
                options = options | RegexOptions__Enum_Singleline;
                index = index + 1;
              }
              else {
                if (uVar7 == 0x78) {
                  options = options | RegexOptions__Enum_ExplicitCapture;
                }
                pJVar3 = (JsonReader *)&UNK_?;
                index = index + 1;
              }
            }
            pRVar8 = (Regex *)func_?();
            System.dll::System::Text::RegularExpressions::Regex::Regex__ctor_2
                      (pRVar8,pSVar4,options,(MethodInfo *)0x0);
            return (Object *)pRVar8;
          }
        }
      }
      func_?();
      pcVar9 = (code *)swi(3);
      pOVar10 = (Object *)(*pcVar9)();
      return pOVar10;
    }
  }
  pRVar8 = RegexConverter_ReadJson_1(this,reader,(MethodInfo *)0x0);
  return (Object *)pRVar8;
}


/* Regex ReadJson(JsonReader) */

Regex * Assembly-CSharp.dll::Newtonsoft::Json::Converters::RegexConverter::RegexConverter_ReadJson_1
                  (RegexConverter *this,JsonReader *reader,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (reader != (JsonReader *)0x0) {
    (*(code *)(reader->klass->vtable).__unknown.method)
              (reader,(reader->klass->vtable).__unknown_1.methodPtr);
    (*(code *)(reader->klass->vtable).__unknown.method)
              (reader,(reader->klass->vtable).__unknown_1.methodPtr);
    pSVar1 = (String *)
             (*(code *)(reader->klass->vtable).get_Value.method)
                       (reader,(reader->klass->vtable).get_ValueType.methodPtr);
    pattern = (String *)0x0;
    if (pSVar1 != (String *)0x0) {
      if (pSVar1->klass == TypeInfo__System__String) {
        pattern = pSVar1;
      }
      pSVar2 = TypeInfo__System__String;
      if (pattern == (String *)0x0) goto code_?;
    }
    (*(code *)(reader->klass->vtable).__unknown.method)
              (reader,(reader->klass->vtable).__unknown_1.methodPtr);
    (*(code *)(reader->klass->vtable).__unknown.method)
              (reader,(reader->klass->vtable).__unknown_1.methodPtr);
    value = (Object *)
            (*(code *)(reader->klass->vtable).get_Value.method)
                      (reader,(reader->klass->vtable).get_ValueType.methodPtr);
    if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr & 0x2000000)
         != 0) && ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__Globalization__CultureInfo);
    }
    provider = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                         ((MethodInfo *)0x0);
    if ((((uint)(TypeInfo__System__Convert->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__Convert->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__Convert);
    }
    options = mscorlib.dll::System::Convert::Convert_ToInt32_17
                        (value,(IFormatProvider *)provider,(MethodInfo *)0x0);
    (*(code *)(reader->klass->vtable).__unknown.method)
              (reader,(reader->klass->vtable).__unknown_1.methodPtr);
    pRVar3 = (Regex *)func_?(TypeInfo__System__Text__RegularExpressions__Regex);
    System.dll::System::Text::RegularExpressions::Regex::Regex__ctor_2
              (pRVar3,pattern,options,(MethodInfo *)0x0);
    return pRVar3;
  }
  pSVar1 = (String *)func_?(0);
  pSVar2 = extraout_ECX;
code_?:
  func_?(pSVar1,pSVar2);
  pcVar4 = (code *)swi(3);
  pRVar3 = (Regex *)(*pcVar4)();
  return pRVar3;
}


/* Void WriteBson(BsonWriter, Regex) */

void Assembly-CSharp.dll::Newtonsoft::Json::Converters::RegexConverter::RegexConverter_WriteBson
               (RegexConverter *this,BsonWriter *writer,Regex *regex,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pSVar1 = (String *)0x0;
  if (regex != (Regex *)0x0) {
    pSVar2 = ThemeAttributes::NamedThemeAttribute`1[UnityEngine::Color]::
             NamedThemeAttribute_1_UnityEngine_Color__get_Name
                       ((NamedThemeAttribute_1_UnityEngine_Color_ *)regex,(MethodInfo *)0x0);
    if (((uint)pSVar2 & 1) != 0) {
      if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__String->_1).cctor_started == 0)) {
        func_?(TypeInfo__System__String);
      }
      pSVar1 = mscorlib.dll::System::String::String_Concat_2
                         ((String *)0x0,StringLiteral_i,(MethodInfo *)0x0);
    }
    pSVar2 = ThemeAttributes::NamedThemeAttribute`1[UnityEngine::Color]::
             NamedThemeAttribute_1_UnityEngine_Color__get_Name
                       ((NamedThemeAttribute_1_UnityEngine_Color_ *)regex,(MethodInfo *)0x0);
    if (((uint)pSVar2 >> 1 & 1) != 0) {
      if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__String->_1).cctor_started == 0)) {
        func_?(TypeInfo__System__String);
      }
      pSVar1 = mscorlib.dll::System::String::String_Concat_2
                         (pSVar1,StringLiteral_m,(MethodInfo *)0x0);
    }
    pSVar2 = ThemeAttributes::NamedThemeAttribute`1[UnityEngine::Color]::
             NamedThemeAttribute_1_UnityEngine_Color__get_Name
                       ((NamedThemeAttribute_1_UnityEngine_Color_ *)regex,(MethodInfo *)0x0);
    if (((uint)pSVar2 >> 4 & 1) != 0) {
      if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__String->_1).cctor_started == 0)) {
        func_?();
      }
      pSVar1 = mscorlib.dll::System::String::String_Concat_2
                         (pSVar1,StringLiteral_s,(MethodInfo *)0x0);
    }
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?();
    }
    pSVar1 = mscorlib.dll::System::String::String_Concat_2(pSVar1,StringLiteral_u,(MethodInfo *)0x0)
    ;
    pSVar2 = ThemeAttributes::NamedThemeAttribute`1[UnityEngine::Color]::
             NamedThemeAttribute_1_UnityEngine_Color__get_Name
                       ((NamedThemeAttribute_1_UnityEngine_Color_ *)regex,(MethodInfo *)0x0);
    if (((uint)pSVar2 >> 2 & 1) != 0) {
      if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__String->_1).cctor_started == 0)) {
        func_?();
      }
      pSVar1 = mscorlib.dll::System::String::String_Concat_2
                         (pSVar1,StringLiteral_x,(MethodInfo *)0x0);
    }
    value = (Object *)(*(code *)(regex->klass->vtable).ToString.method)();
    if (writer != (BsonWriter *)0x0) {
      if (cRam_? == '\0') {
        func_?(_UNK_?);
        cRam_? = '\x01';
      }
      Json::Utilities::ValidationUtils::ValidationUtils_ArgumentNotNull
                (value,StringLiteral_pattern,(MethodInfo *)0x0);
      JsonWriter::JsonWriter_AutoComplete
                ((JsonWriter *)writer,JsonToken__Enum_Undefined,(MethodInfo *)0x0);
      this_00 = (ScaleAnimationBase *)func_?(TypeInfo__Newtonsoft__Json__Bson__BsonRegex);
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,(MethodInfo *)writer);
      pBVar3 = TypeInfo__Newtonsoft__Json__Bson__BsonString;
      pSVar4 = (ScaleAnimationBase *)func_?();
      ScaleAnimationBase::ScaleAnimationBase_Play(pSVar4,0.0,(MethodInfo *)pBVar3);
      (pSVar4->fields).originalScale.x = (float)value;
      *(undefined1 *)&(pSVar4->fields).originalScale.y = 2;
      *(undefined1 *)&(pSVar4->fields).target = 0;
      (this_00->fields).originalScale.x = (float)pSVar4;
      pBVar3 = TypeInfo__Newtonsoft__Json__Bson__BsonString;
      pSVar4 = (ScaleAnimationBase *)func_?();
      ScaleAnimationBase::ScaleAnimationBase_Play(pSVar4,0.0,(MethodInfo *)pBVar3);
      (pSVar4->fields).originalScale.x = (float)pSVar1;
      *(undefined1 *)&(pSVar4->fields).originalScale.y = 2;
      *(undefined1 *)&(pSVar4->fields).target = 0;
      (this_00->fields).originalScale.y = (float)pSVar4;
      Bson::BsonWriter::BsonWriter_AddToken(writer,(BsonToken *)this_00,(MethodInfo *)0x0);
      return;
    }
  }
  func_?(0);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void WriteJson(JsonWriter, Object, JsonSerializer) */

void Assembly-CSharp.dll::Newtonsoft::Json::Converters::RegexConverter::RegexConverter_WriteJson
               (RegexConverter *this,JsonWriter *writer,Object *value,JsonSerializer *serializer,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (value == (Object *)0x0) {
    regex = (Regex *)0x0;
  }
  else {
    bVar1 = (TypeInfo__System__Text__RegularExpressions__Regex->_1).naturalAligment;
    if (((value->klass->_1).naturalAligment < bVar1) ||
       ((value->klass->_1).typeHierarchy[bVar1 - 1] !=
        (Il2CppClass *)TypeInfo__System__Text__RegularExpressions__Regex)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    regex = (Regex *)0x0;
    if (bVar2) {
      regex = (Regex *)value;
    }
    if (regex == (Regex *)0x0) {
      func_?(value,TypeInfo__System__Text__RegularExpressions__Regex);
      goto code_?;
    }
  }
  if (writer != (JsonWriter *)0x0) {
    bVar1 = (TypeInfo__Newtonsoft__Json__Bson__BsonWriter->_1).naturalAligment;
    if (((writer->klass->_1).naturalAligment < bVar1) ||
       ((BsonWriter__Class *)(writer->klass->_1).typeHierarchy[bVar1 - 1] !=
        TypeInfo__Newtonsoft__Json__Bson__BsonWriter)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    writer_00 = (BsonWriter *)0x0;
    if (bVar2) {
      writer_00 = (BsonWriter *)writer;
    }
    if (writer_00 != (BsonWriter *)0x0) {
      RegexConverter_WriteBson(this,writer_00,regex,(MethodInfo *)0x0);
      return;
    }
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (writer != (JsonWriter *)0x0) {
    (*(code *)(writer->klass->vtable).WriteStartObject.method)
              (writer,(writer->klass->vtable).WriteEndObject.methodPtr);
    (*(code *)(writer->klass->vtable).WritePropertyName.method)
              (writer,StringLiteral_Pattern,(writer->klass->vtable).WriteEnd.methodPtr);
    if (regex != (Regex *)0x0) {
      uVar3 = (*(code *)(regex->klass->vtable).ToString.method)
                        (regex,(regex->klass->vtable).
                               System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
      (*(code *)(writer->klass->vtable).WriteValue.method)
                (writer,uVar3,(writer->klass->vtable).WriteValue_1.methodPtr);
      (*(code *)(writer->klass->vtable).WritePropertyName.method)
                (writer,StringLiteral_Options,(writer->klass->vtable).WriteEnd.methodPtr);
      value = (Object *)
              ThemeAttributes::NamedThemeAttribute`1[UnityEngine::Color]::
              NamedThemeAttribute_1_UnityEngine_Color__get_Name
                        ((NamedThemeAttribute_1_UnityEngine_Color_ *)regex,(MethodInfo *)0x0);
      uVar3 = func_?(TypeInfo__System__Text__RegularExpressions__RegexOptions,&value);
      (*(code *)(writer->klass->vtable).WriteValue_37.method)
                (writer,uVar3,(writer->klass->vtable).WriteComment.methodPtr);
      (*(code *)(writer->klass->vtable).WriteEndObject.method)
                (writer,(writer->klass->vtable).WriteStartArray.methodPtr);
      return;
    }
  }
code_?:
  func_?(0);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void WriteJson(JsonWriter, Regex) */

void Assembly-CSharp.dll::Newtonsoft::Json::Converters::RegexConverter::RegexConverter_WriteJson_1
               (RegexConverter *this,JsonWriter *writer,Regex *regex,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pJVar1 = writer;
  if (writer != (JsonWriter *)0x0) {
    (*(code *)(writer->klass->vtable).WriteStartObject.method)
              (writer,(writer->klass->vtable).WriteEndObject.methodPtr);
    (*(code *)(pJVar1->klass->vtable).WritePropertyName.method)
              (pJVar1,StringLiteral_Pattern,(pJVar1->klass->vtable).WriteEnd.methodPtr);
    this_00 = regex;
    if (regex != (Regex *)0x0) {
      uVar2 = (*(code *)(regex->klass->vtable).ToString.method)
                        (regex,(regex->klass->vtable).
                               System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
      (*(code *)(pJVar1->klass->vtable).WriteValue.method)
                (pJVar1,uVar2,(pJVar1->klass->vtable).WriteValue_1.methodPtr);
      (*(code *)(pJVar1->klass->vtable).WritePropertyName.method)
                (pJVar1,StringLiteral_Options,(pJVar1->klass->vtable).WriteEnd.methodPtr);
      writer = (JsonWriter *)
               ThemeAttributes::NamedThemeAttribute`1[UnityEngine::Color]::
               NamedThemeAttribute_1_UnityEngine_Color__get_Name
                         ((NamedThemeAttribute_1_UnityEngine_Color_ *)this_00,(MethodInfo *)0x0);
      uVar2 = func_?(TypeInfo__System__Text__RegularExpressions__RegexOptions,&writer);
      (*(code *)(pJVar1->klass->vtable).WriteValue_37.method)
                (pJVar1,uVar2,(pJVar1->klass->vtable).WriteComment.methodPtr);
      (*(code *)(pJVar1->klass->vtable).WriteEndObject.method)
                (pJVar1,(pJVar1->klass->vtable).WriteStartArray.methodPtr);
      return;
    }
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

