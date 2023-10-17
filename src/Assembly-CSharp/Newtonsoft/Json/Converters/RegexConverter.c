
/* Boolean CanConvert(Type) */

bool Assembly-CSharp.dll::Newtonsoft::Json::Converters::RegexConverter::RegexConverter_CanConvert
               (RegexConverter *this,Type *objectType,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeRef__System__Text__RegularExpressions__Regex);
    func_?(&TypeInfo__System__Type);
    cRam_? = '\x01';
  }
  handle = TypeRef__System__Text__RegularExpressions__Regex;
  if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__Type);
  }
  right = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                    ((RuntimeTypeHandle)handle,(MethodInfo *)0x0);
  bVar1 = mscorlib.dll::System::Runtime::CompilerServices::Unsafe::Unsafe_AreSame_2
                    ((Object **)objectType,(Object **)right,(MethodInfo *)0x0);
  return bVar1;
}


/* Object ReadBson(BsonReader) */

Object * Assembly-CSharp.dll::Newtonsoft::Json::Converters::RegexConverter::RegexConverter_ReadBson
                   (RegexConverter *this,BsonReader *reader,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Text__RegularExpressions__Regex);
    func_?(&TypeInfo__System__String);
    func_?(&::StringLiteral__);
    cRam_? = '\x01';
  }
  if (reader != (BsonReader *)0x0) {
    pSVar1 = (String *)
             (*(reader->klass->vtable).get_Value.methodPtr)
                       (reader,(reader->klass->vtable).get_Value.method);
    if (pSVar1 != (String *)0x0) {
      pSVar2 = (String *)0x0;
      if (pSVar1->klass == TypeInfo__System__String) {
        pSVar2 = pSVar1;
      }
      pSVar3 = TypeInfo__System__String;
      if (pSVar2 == (String *)0x0) goto code_?;
      iVar4 = mscorlib.dll::System::String::String_LastIndexOf_3
                        (pSVar2,::StringLiteral__,(MethodInfo *)0x0);
      pSVar1 = mscorlib.dll::System::String::String_Substring_1
                         (pSVar2,1,iVar4 + -1,(MethodInfo *)0x0);
      options = RegexOptions__Enum_None;
      pSVar2 = mscorlib.dll::System::String::String_Substring(pSVar2,iVar4 + 1,(MethodInfo *)0x0);
      index = 0;
      if (pSVar2 != (String *)0x0) {
        while (index < (pSVar2->fields)._stringLength) {
          uVar5 = mscorlib.dll::System::String::String_get_Chars(pSVar2,index,(MethodInfo *)0x0);
          if (uVar5 < 0x6e) {
            if (uVar5 != 0x69) {
              if (uVar5 == 0x6d) {
                options = options | RegexOptions__Enum_Multiline;
              }
              goto code_?;
            }
            options = options | RegexOptions__Enum_IgnoreCase;
            index = index + 1;
          }
          else if (uVar5 == 0x73) {
            options = options | RegexOptions__Enum_Singleline;
            index = index + 1;
          }
          else if (uVar5 == 0x78) {
            options = options | RegexOptions__Enum_ExplicitCapture;
            index = index + 1;
          }
          else {
code_?:
            index = index + 1;
          }
        }
        this_00 = (Regex *)func_?(TypeInfo__System__Text__RegularExpressions__Regex);
        if (this_00 != (Regex *)0x0) {
          System.dll::System::Text::RegularExpressions::Regex::Regex__ctor_1
                    (this_00,pSVar1,options,(MethodInfo *)0x0);
          return (Object *)this_00;
        }
      }
    }
  }
  pSVar1 = (String *)func_?();
  pSVar3 = extraout_ECX;
code_?:
  func_?(pSVar1,pSVar3);
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
    func_?(&TypeInfo__Newtonsoft__Json__Bson__BsonReader);
    cRam_? = '\x01';
  }
  if (reader != (JsonReader *)0x0) {
    if (((TypeInfo__Newtonsoft__Json__Bson__BsonReader->_1).typeHierarchyDepth <=
         (reader->klass->_1).typeHierarchyDepth) &&
       ((reader->klass->_1).typeHierarchy
        [(TypeInfo__Newtonsoft__Json__Bson__BsonReader->_1).typeHierarchyDepth - 1] ==
        (Il2CppClass *)TypeInfo__Newtonsoft__Json__Bson__BsonReader)) {
      if (cRam_? == '\0') {
        func_?(&TypeInfo__System__Text__RegularExpressions__Regex);
        func_?(&TypeInfo__System__String);
        func_?(&::StringLiteral__);
        cRam_? = '\x01';
      }
      pSVar1 = (String *)
               (*(reader->klass->vtable).get_Value.methodPtr)
                         (reader,(reader->klass->vtable).get_Value.method);
      if (pSVar1 != (String *)0x0) {
        this_00 = (String *)0x0;
        if (pSVar1->klass == TypeInfo__System__String) {
          this_00 = pSVar1;
        }
        if (this_00 == (String *)0x0) {
          func_?(pSVar1,TypeInfo__System__String);
        }
        else {
          iVar2 = mscorlib.dll::System::String::String_LastIndexOf_3
                            (this_00,::StringLiteral__,(MethodInfo *)0x0);
          reader = (JsonReader *)
                   mscorlib.dll::System::String::String_Substring_1
                             (this_00,1,iVar2 + -1,(MethodInfo *)0x0);
          options = RegexOptions__Enum_None;
          pSVar1 = mscorlib.dll::System::String::String_Substring
                             (this_00,iVar2 + 1,(MethodInfo *)0x0);
          index = 0;
          if (pSVar1 != (String *)0x0) {
            while (index < (pSVar1->fields)._stringLength) {
              reader = (JsonReader *)&UNK_?;
              uVar3 = mscorlib.dll::System::String::String_get_Chars(pSVar1,index,(MethodInfo *)0x0)
              ;
              if (uVar3 < 0x6e) {
                if (uVar3 != 0x69) {
                  if (uVar3 == 0x6d) {
                    options = options | RegexOptions__Enum_Multiline;
                  }
                  goto code_?;
                }
                options = options | RegexOptions__Enum_IgnoreCase;
                index = index + 1;
              }
              else if (uVar3 == 0x73) {
                options = options | RegexOptions__Enum_Singleline;
                index = index + 1;
              }
              else if (uVar3 == 0x78) {
                options = options | RegexOptions__Enum_ExplicitCapture;
                index = index + 1;
              }
              else {
code_?:
                index = index + 1;
              }
            }
            pRVar4 = (Regex *)func_?();
            if (pRVar4 != (Regex *)0x0) {
              System.dll::System::Text::RegularExpressions::Regex::Regex__ctor_1
                        (pRVar4,(String *)reader,options,(MethodInfo *)0x0);
              return (Object *)pRVar4;
            }
          }
        }
      }
      func_?();
      pcVar5 = (code *)swi(3);
      pOVar6 = (Object *)(*pcVar5)();
      return pOVar6;
    }
  }
  pRVar4 = RegexConverter_ReadJson_1(this,reader,(MethodInfo *)0x0);
  return (Object *)pRVar4;
}


/* Regex ReadJson(JsonReader) */

Regex * Assembly-CSharp.dll::Newtonsoft::Json::Converters::RegexConverter::RegexConverter_ReadJson_1
                  (RegexConverter *this,JsonReader *reader,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Convert);
    func_?(&TypeInfo__System__Globalization__CultureInfo);
    func_?(&TypeInfo__System__Text__RegularExpressions__Regex);
    func_?(&TypeInfo__System__String);
    cRam_? = '\x01';
  }
  if (reader != (JsonReader *)0x0) {
    (*(reader->klass->vtable).__unknown.methodPtr)(reader,(reader->klass->vtable).__unknown.method);
    (*(reader->klass->vtable).__unknown.methodPtr)(reader,(reader->klass->vtable).__unknown.method);
    unaff_EDI = (String *)
                (*(reader->klass->vtable).get_Value.methodPtr)
                          (reader,(reader->klass->vtable).get_Value.method);
    (*(reader->klass->vtable).__unknown.methodPtr)(reader,(reader->klass->vtable).__unknown.method);
    (*(reader->klass->vtable).__unknown.methodPtr)(reader,(reader->klass->vtable).__unknown.method);
    value = (Object *)
            (*(reader->klass->vtable).get_Value.methodPtr)
                      (reader,(reader->klass->vtable).get_Value.method);
    if ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__System__Globalization__CultureInfo);
    }
    provider = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                         ((MethodInfo *)0x0);
    if ((TypeInfo__System__Convert->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__System__Convert);
    }
    options = mscorlib.dll::System::Convert::Convert_ToInt32_1
                        (value,(IFormatProvider *)provider,(MethodInfo *)0x0);
    (*(reader->klass->vtable).__unknown.methodPtr)(reader,(reader->klass->vtable).__unknown.method);
    pRVar1 = (Regex *)func_?(TypeInfo__System__Text__RegularExpressions__Regex);
    if (pRVar1 != (Regex *)0x0) {
      pattern = (String *)0x0;
      if (unaff_EDI == (String *)0x0) {
code_?:
        System.dll::System::Text::RegularExpressions::Regex::Regex__ctor_1
                  (pRVar1,pattern,options,(MethodInfo *)0x0);
        return pRVar1;
      }
      if (unaff_EDI->klass == TypeInfo__System__String) {
        pattern = unaff_EDI;
      }
      pSVar2 = TypeInfo__System__String;
      if (pattern != (String *)0x0) goto code_?;
      goto code_?;
    }
  }
  pSVar2 = (String__Class *)func_?();
code_?:
  func_?(unaff_EDI,pSVar2);
  pcVar3 = (code *)swi(3);
  pRVar1 = (Regex *)(*pcVar3)();
  return pRVar1;
}


/* Void WriteBson(BsonWriter, Regex) */

void Assembly-CSharp.dll::Newtonsoft::Json::Converters::RegexConverter::RegexConverter_WriteBson
               (RegexConverter *this,BsonWriter *writer,Regex *regex,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&StringLiteral_x);
    func_?(&StringLiteral_i);
    func_?(&StringLiteral_m);
    func_?(&StringLiteral_u);
    func_?(&StringLiteral_s);
    cRam_? = '\x01';
  }
  method_00 = (MethodInfo *)0x0;
  if (regex != (Regex *)0x0) {
    if (((regex->fields).roptions & 1) != 0) {
      method_00 = (MethodInfo *)
                  mscorlib.dll::System::String::String_Concat_3
                            ((String *)0x0,StringLiteral_i,(MethodInfo *)0x0);
    }
    if (((uint)(regex->fields).roptions >> 1 & 1) != 0) {
      method_00 = (MethodInfo *)
                  mscorlib.dll::System::String::String_Concat_3
                            ((String *)method_00,StringLiteral_m,(MethodInfo *)0x0);
    }
    if (((uint)(regex->fields).roptions >> 4 & 1) != 0) {
      method_00 = (MethodInfo *)
                  mscorlib.dll::System::String::String_Concat_3
                            ((String *)method_00,StringLiteral_s,(MethodInfo *)0x0);
    }
    str0 = (Object__Class *)
           mscorlib.dll::System::String::String_Concat_3
                     ((String *)method_00,StringLiteral_u,(MethodInfo *)0x0);
    if (((uint)(regex->fields).roptions >> 2 & 1) != 0) {
      str0 = (Object__Class *)
             mscorlib.dll::System::String::String_Concat_3
                       ((String *)str0,StringLiteral_x,(MethodInfo *)0x0);
    }
    pOVar1 = (Object *)(*(regex->klass->vtable).ToString.methodPtr)();
    if (cRam_? == '\0') {
      func_?(&TypeInfo__Newtonsoft__Json__Bson__BsonRegex);
      func_?(&StringLiteral_pattern);
      cRam_? = '\x01';
    }
    Json::Utilities::ValidationUtils::ValidationUtils_ArgumentNotNull
              (pOVar1,StringLiteral_pattern,(MethodInfo *)0x0);
    JsonWriter::JsonWriter_AutoComplete
              ((JsonWriter *)&UNK_?,JsonToken__Enum_Undefined,(MethodInfo *)0x0);
    token = (BsonToken *)func_?(TypeInfo__Newtonsoft__Json__Bson__BsonRegex);
    if (token != (BsonToken *)0x0) {
      if (cRam_? == '\0') {
        func_?(&TypeInfo__Newtonsoft__Json__Bson__BsonString);
        cRam_? = '\x01';
      }
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                ((Object *)token,ExceptionArgument__Enum_obj,method_00);
      value = (BsonToken__Class *)func_?(TypeInfo__Newtonsoft__Json__Bson__BsonString);
      if (value != (BsonToken__Class *)0x0) {
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                  ((Object *)value,ExceptionArgument__Enum_obj,method_00);
        (value->_0).byval_arg.data.typeHandle = (Il2CppMetadataTypeHandle)pOVar1;
        func_?(&(value->_0).byval_arg,pOVar1);
        *(undefined1 *)&(value->_0).byval_arg.attrs = 2;
        *(undefined1 *)&(value->_0).this_arg.attrs = 0;
        token[1].klass = value;
        func_?(token + 1,value);
        pOVar1 = (Object *)func_?(TypeInfo__Newtonsoft__Json__Bson__BsonString);
        if (pOVar1 != (Object *)0x0) {
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                    (pOVar1,ExceptionArgument__Enum_obj,method_00);
          pOVar1[2].klass = str0;
          func_?(pOVar1 + 2,str0);
          *(undefined1 *)&pOVar1[2].monitor = 2;
          *(undefined1 *)&pOVar1[3].monitor = 0;
          token[1].monitor = (MonitorData *)pOVar1;
          func_?(&token[1].monitor,pOVar1);
          Bson::BsonWriter::BsonWriter_AddToken((BsonWriter *)&UNK_?,token,(MethodInfo *)0x0)
          ;
          return;
        }
      }
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void WriteJson(JsonWriter, Object, JsonSerializer) */

void Assembly-CSharp.dll::Newtonsoft::Json::Converters::RegexConverter::RegexConverter_WriteJson
               (RegexConverter *this,JsonWriter *writer,Object *value,JsonSerializer *serializer,
               MethodInfo *method)

{
  pOVar1 = value;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Newtonsoft__Json__Bson__BsonWriter);
    func_?(&TypeInfo__System__Text__RegularExpressions__Regex);
    cRam_? = '\x01';
  }
  if ((pOVar1 == (Object *)0x0) ||
     (((TypeInfo__System__Text__RegularExpressions__Regex->_1).typeHierarchyDepth <=
       (pOVar1->klass->_1).typeHierarchyDepth &&
      ((pOVar1->klass->_1).typeHierarchy
       [(TypeInfo__System__Text__RegularExpressions__Regex->_1).typeHierarchyDepth - 1] ==
       (Il2CppClass *)TypeInfo__System__Text__RegularExpressions__Regex)))) {
    if (writer != (JsonWriter *)0x0) {
      if (((TypeInfo__Newtonsoft__Json__Bson__BsonWriter->_1).typeHierarchyDepth <=
           (writer->klass->_1).typeHierarchyDepth) &&
         ((BsonWriter__Class *)
          (writer->klass->_1).typeHierarchy
          [(TypeInfo__Newtonsoft__Json__Bson__BsonWriter->_1).typeHierarchyDepth - 1] ==
          TypeInfo__Newtonsoft__Json__Bson__BsonWriter)) {
        if (cRam_? == '\0') {
          func_?(&StringLiteral_x);
          func_?(&StringLiteral_i);
          func_?(&StringLiteral_m);
          func_?(&StringLiteral_u);
          func_?(&StringLiteral_s);
          cRam_? = '\x01';
        }
        str0 = (String *)0x0;
        if (pOVar1 != (Object *)0x0) {
          if (((uint)pOVar1[2].monitor & 1) != 0) {
            str0 = mscorlib.dll::System::String::String_Concat_3
                             ((String *)0x0,StringLiteral_i,(MethodInfo *)0x0);
          }
          if (((uint)pOVar1[2].monitor >> 1 & 1) != 0) {
            str0 = mscorlib.dll::System::String::String_Concat_3
                             (str0,StringLiteral_m,(MethodInfo *)0x0);
          }
          if (((uint)pOVar1[2].monitor >> 4 & 1) != 0) {
            str0 = mscorlib.dll::System::String::String_Concat_3
                             (str0,StringLiteral_s,(MethodInfo *)0x0);
          }
          value = (Object *)
                  mscorlib.dll::System::String::String_Concat_3
                            (str0,StringLiteral_u,(MethodInfo *)0x0);
          if (((uint)pOVar1[2].monitor >> 2 & 1) != 0) {
            unaff_EDI = (MethodInfo *)value;
            value = (Object *)
                    mscorlib.dll::System::String::String_Concat_3
                              ((String *)value,StringLiteral_x,(MethodInfo *)0x0);
          }
          pOVar1 = (Object *)(*(pOVar1->klass->vtable).ToString.methodPtr)(pOVar1);
          if (cRam_? == '\0') {
            func_?();
            func_?(&StringLiteral_pattern);
            cRam_? = '\x01';
          }
          Json::Utilities::ValidationUtils::ValidationUtils_ArgumentNotNull
                    (pOVar1,StringLiteral_pattern,(MethodInfo *)0x0);
          pJVar2 = writer;
          JsonWriter::JsonWriter_AutoComplete(writer,JsonToken__Enum_Undefined,(MethodInfo *)0x0);
          token = (BsonToken *)func_?();
          if (token != (BsonToken *)0x0) {
            if (cRam_? == '\0') {
              func_?(&TypeInfo__Newtonsoft__Json__Bson__BsonString);
              cRam_? = '\x01';
            }
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                      ((Object *)token,ExceptionArgument__Enum_obj,unaff_EDI);
            value_00 = (BsonToken__Class *)
                       func_?(TypeInfo__Newtonsoft__Json__Bson__BsonString);
            if (value_00 != (BsonToken__Class *)0x0) {
              mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                        ((Object *)value_00,ExceptionArgument__Enum_obj,unaff_EDI);
              (value_00->_0).byval_arg.data.dummy = pJVar2;
              func_?(&(value_00->_0).byval_arg,pJVar2);
              *(undefined1 *)&(value_00->_0).byval_arg.attrs = 2;
              *(undefined1 *)&(value_00->_0).this_arg.attrs = 0;
              token[1].klass = value_00;
              func_?(token + 1,value_00);
              pOVar1 = (Object *)func_?(TypeInfo__Newtonsoft__Json__Bson__BsonString);
              if (pOVar1 != (Object *)0x0) {
                mscorlib.dll::System::ThrowHelper::
                ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                          (pOVar1,ExceptionArgument__Enum_obj,unaff_EDI);
                pOVar1[2].klass = (Object__Class *)value;
                func_?(pOVar1 + 2,value);
                *(undefined1 *)&pOVar1[2].monitor = 2;
                *(undefined1 *)&pOVar1[3].monitor = 0;
                token[1].monitor = (MonitorData *)pOVar1;
                func_?(&token[1].monitor,pOVar1);
                Bson::BsonWriter::BsonWriter_AddToken((BsonWriter *)writer,token,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
        goto code_?;
      }
    }
    if (cRam_? == '\0') {
      func_?(&TypeInfo__System__Text__RegularExpressions__RegexOptions);
      func_?(&StringLiteral_Pattern);
      func_?(&StringLiteral_Options);
      cRam_? = '\x01';
    }
    if (writer != (JsonWriter *)0x0) {
      (*(writer->klass->vtable).WriteStartObject.methodPtr)
                (writer,(writer->klass->vtable).WriteStartObject.method);
      (*(writer->klass->vtable).WritePropertyName.methodPtr)
                (writer,StringLiteral_Pattern,(writer->klass->vtable).WritePropertyName.method);
      if (pOVar1 != (Object *)0x0) {
        uVar3 = (*(pOVar1->klass->vtable).ToString.methodPtr)
                          (pOVar1,(pOVar1->klass->vtable).ToString.method);
        (*(writer->klass->vtable).WriteValue.methodPtr)
                  (writer,uVar3,(writer->klass->vtable).WriteValue.method);
        (*(writer->klass->vtable).WritePropertyName.methodPtr)
                  (writer,StringLiteral_Options,(writer->klass->vtable).WritePropertyName.method);
        value = (Object *)pOVar1[2].monitor;
        uVar3 = func_?(TypeInfo__System__Text__RegularExpressions__RegexOptions,&value);
        (*(writer->klass->vtable).WriteValue_37.methodPtr)
                  (writer,uVar3,(writer->klass->vtable).WriteValue_37.method);
        (*(writer->klass->vtable).WriteEndObject.methodPtr)
                  (writer,(writer->klass->vtable).WriteEndObject.method);
        return;
      }
    }
  }
  else {
    func_?(pOVar1,TypeInfo__System__Text__RegularExpressions__Regex);
  }
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void WriteJson(JsonWriter, Regex) */

void Assembly-CSharp.dll::Newtonsoft::Json::Converters::RegexConverter::RegexConverter_WriteJson_1
               (RegexConverter *this,JsonWriter *writer,Regex *regex,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Text__RegularExpressions__RegexOptions);
    func_?(&StringLiteral_Pattern);
    func_?(&StringLiteral_Options);
    cRam_? = '\x01';
  }
  pJVar1 = writer;
  if (writer != (JsonWriter *)0x0) {
    (*(writer->klass->vtable).WriteStartObject.methodPtr)
              (writer,(writer->klass->vtable).WriteStartObject.method);
    (*(pJVar1->klass->vtable).WritePropertyName.methodPtr)
              (pJVar1,StringLiteral_Pattern,(pJVar1->klass->vtable).WritePropertyName.method);
    pRVar2 = regex;
    if (regex != (Regex *)0x0) {
      uVar3 = (*(regex->klass->vtable).ToString.methodPtr)
                        (regex,(regex->klass->vtable).ToString.method);
      (*(pJVar1->klass->vtable).WriteValue.methodPtr)
                (pJVar1,uVar3,(pJVar1->klass->vtable).WriteValue.method);
      (*(pJVar1->klass->vtable).WritePropertyName.methodPtr)
                (pJVar1,StringLiteral_Options,(pJVar1->klass->vtable).WritePropertyName.method);
      writer = (JsonWriter *)(pRVar2->fields).roptions;
      uVar3 = func_?(TypeInfo__System__Text__RegularExpressions__RegexOptions,&writer);
      (*(pJVar1->klass->vtable).WriteValue_37.methodPtr)
                (pJVar1,uVar3,(pJVar1->klass->vtable).WriteValue_37.method);
      (*(pJVar1->klass->vtable).WriteEndObject.methodPtr)
                (pJVar1,(pJVar1->klass->vtable).WriteEndObject.method);
      return;
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

