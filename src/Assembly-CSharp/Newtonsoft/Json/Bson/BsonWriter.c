
/* Void AddParent(BsonToken) */

void Assembly-CSharp.dll::Newtonsoft::Json::Bson::BsonWriter::BsonWriter_AddParent
               (BsonWriter *this,BsonToken *container,MethodInfo *method)

{
  BsonWriter_AddToken(this,container,(MethodInfo *)0x0);
  (this->fields)._parent = container;
  return;
}


/* Void AddToken(BsonToken) */

void Assembly-CSharp.dll::Newtonsoft::Json::Bson::BsonWriter::BsonWriter_AddToken
               (BsonWriter *this,BsonToken *token,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pBVar1 = token;
  pBVar2 = this;
  this_00 = (ScaleAnimationBase *)(this->fields)._parent;
  if (this_00 == (ScaleAnimationBase *)0x0) {
    this_00 = (ScaleAnimationBase *)token;
    if (token != (BsonToken *)0x0) {
      cVar3 = (*(code *)(token->klass->vtable).__unknown.method)(token,token->klass[1]._0.image);
      if (cVar3 == '\x03') {
code_?:
        (pBVar2->fields)._parent = pBVar1;
        (pBVar2->fields)._root = pBVar1;
        return;
      }
      cVar3 = (*(code *)(pBVar1->klass->vtable).__unknown.method)(pBVar1,pBVar1->klass[1]._0.image);
      this_00 = (ScaleAnimationBase *)pBVar1;
      if (cVar3 == '\x04') goto code_?;
      goto code_?;
    }
  }
  else {
    bVar4 = (TypeInfo__Newtonsoft__Json__Bson__BsonObject->_1).naturalAligment;
    if (((this_00->klass->_1).naturalAligment < bVar4) ||
       ((this_00->klass->_1).typeHierarchy[bVar4 - 1] !=
        (Il2CppClass *)TypeInfo__Newtonsoft__Json__Bson__BsonObject)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    pSVar6 = (ScaleAnimationBase *)0x0;
    if (bVar5) {
      pSVar6 = this_00;
    }
    if (pSVar6 == (ScaleAnimationBase *)0x0) {
      iVar7 = func_?(this_00,TypeInfo__Newtonsoft__Json__Bson__BsonArray);
      if (iVar7 != 0) {
        pBVar1 = (BsonToken *)func_?(this_00,TypeInfo__Newtonsoft__Json__Bson__BsonArray);
        if (cRam_? == '\0') {
          func_?(_UNK_?);
          cRam_? = '\x01';
        }
        pBVar8 = token;
        if (pBVar1[1].klass != (BsonToken__Class *)0x0) {
          mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
                    ((List_1_UIPushOption_ *)pBVar1[1].klass,(UIPushOption__Enum)token,
                     MethodInfo__System__Collections__Generic__List<Newtonsoft::Json::Bson::BsonToken>__Add_Newtonsoft__Json__Bson__BsonToken_
                    );
          this_00 = (ScaleAnimationBase *)0x0;
          if (pBVar8 != (BsonToken *)0x0) {
            (pBVar8->fields)._Parent_k__BackingField = pBVar1;
            return;
          }
        }
      }
    }
    else {
      this = (BsonWriter *)(this->fields)._propertyName;
      iVar7 = func_?(this_00,TypeInfo__Newtonsoft__Json__Bson__BsonObject);
      if (iVar7 != 0) {
        pBVar8 = (BsonToken *)func_?(this_00,TypeInfo__Newtonsoft__Json__Bson__BsonObject);
        pBVar1 = pBVar8;
        if (cRam_? == '\0') {
          func_?(_UNK_?);
          cRam_? = '\x01';
        }
        this_02 = pBVar8[1].klass;
        method_00 = TypeInfo__Newtonsoft__Json__Bson__BsonProperty;
        this_00 = (ScaleAnimationBase *)func_?();
        ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,(MethodInfo *)method_00);
        pSVar6 = (ScaleAnimationBase *)
                  func_?(TypeInfo__Newtonsoft__Json__Bson__BsonString);
        ScaleAnimationBase::ScaleAnimationBase_Play(pSVar6,0.0,in_stack_9);
        pBVar8 = token;
        (pSVar6->fields).originalScale.x = (float)this;
        *(undefined1 *)((int)&(pSVar6->fields).originalScale + 4) = 2;
        *(undefined1 *)&(pSVar6->fields).target = 0;
        if (this_00 != (ScaleAnimationBase *)0x0) {
          (this_00->fields)._._._._.m_CachedPtr = pSVar6;
          (this_00->fields).state = (int32_t)token;
          if (this_02 != (BsonToken__Class *)0x0) {
            mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::
            List_1_UIPushOption__Add
                      ((List_1_UIPushOption_ *)this_02,(UIPushOption__Enum)this_00,
                       MethodInfo__System__Collections__Generic__List<Newtonsoft::Json::Bson::BsonProperty>__Add_Newtonsoft__Json__Bson__BsonProperty_
                      );
            if (pBVar8 != (BsonToken *)0x0) {
              (pBVar8->fields)._Parent_k__BackingField = pBVar1;
              (pBVar2->fields)._propertyName = (String *)0x0;
              return;
            }
          }
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
  args = (Object__Array *)func_?(TypeInfo__System__Object,1);
  func_?(this_00,0);
  uVar10 = func_?(4,this_00);
  this = (BsonWriter *)CONCAT13(uVar10,this._0_3_);
  uVar11 = func_?(TypeInfo__Newtonsoft__Json__Bson__BsonType,(int)&this + 3);
  func_?(args,0);
  func_?(args,uVar11);
  func_?(0,uVar11);
  message = Json::Utilities::StringUtils::StringUtils_FormatWith
                      (StringLiteral_Error_writing__0__value__BSON_mu,(IFormatProvider *)provider,
                       args,(MethodInfo *)0x0);
  this_01 = (JsonSchemaException *)func_?(TypeInfo__Newtonsoft__Json__JsonWriterException);
  Json::Schema::JsonSchemaException::JsonSchemaException__ctor_1(this_01,message,(MethodInfo *)0x0);
  func_?(this_01,0,
                  MethodInfo__Newtonsoft__Json__Bson__BsonWriter__AddToken_Newtonsoft__Json__Bson__BsonToken_
                 );
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void AddValue(Object, BsonType) */

void Assembly-CSharp.dll::Newtonsoft::Json::Bson::BsonWriter::BsonWriter_AddValue
               (BsonWriter *this,Object *value,BsonType__Enum type,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__Newtonsoft__Json__Bson__BsonValue;
  this_00 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,(MethodInfo *)method_00);
  (this_00->fields).originalScale.x = (float)value;
  *(undefined1 *)&(this_00->fields).originalScale.y = (undefined1)type;
  BsonWriter_AddToken(this,(BsonToken *)this_00,(MethodInfo *)0x0);
  return;
}


/* Void Close() */

void Assembly-CSharp.dll::Newtonsoft::Json::Bson::BsonWriter::BsonWriter_Close
               (BsonWriter *this,MethodInfo *method)

{
  Json::Linq::JTokenWriter::JTokenWriter_Close((JTokenWriter *)this,(MethodInfo *)0x0);
  uVar1 = System.Core.dll::System::Linq::Enumerable+<CreateCastIterator>c__Iterator0`1[System::Byte]
          ::
          Enumerable_CreateCastIterator_c_Iterator0_1_System_Byte__System_Collections_Generic_IEnumerator_TResult__get_Current
                    ((Enumerable_CreateCastIterator_c_Iterator0_1_System_Byte_ *)this,
                     (MethodInfo *)0x0);
  if ((uVar1 != 0) && (pBVar2 = (this->fields)._writer, pBVar2 != (BsonBinaryWriter *)0x0)) {
    pBVar3 = (pBVar2->fields)._writer;
    if (pBVar3 == (BinaryWriter *)0x0) {
      func_?();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    (*(code *)(pBVar3->klass->vtable).Close.method)();
  }
  return;
}


/* Void Flush() */

void Assembly-CSharp.dll::Newtonsoft::Json::Bson::BsonWriter::BsonWriter_Flush
               (BsonWriter *this,MethodInfo *method)

{
  pBVar1 = (this->fields)._writer;
  if ((pBVar1 != (BsonBinaryWriter *)0x0) &&
     (pBVar2 = (pBVar1->fields)._writer, pBVar2 != (BinaryWriter *)0x0)) {
    (*(code *)(pBVar2->klass->vtable).Flush.method)(pBVar2,(pBVar2->klass->vtable).Write.methodPtr);
    return;
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void RemoveParent() */

void Assembly-CSharp.dll::Newtonsoft::Json::Bson::BsonWriter::BsonWriter_RemoveParent
               (BsonWriter *this,MethodInfo *method)

{
  pBVar1 = (this->fields)._parent;
  if (pBVar1 != (BsonToken *)0x0) {
    (this->fields)._parent = (pBVar1->fields)._Parent_k__BackingField;
    return;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void WriteComment(String) */

void Assembly-CSharp.dll::Newtonsoft::Json::Bson::BsonWriter::BsonWriter_WriteComment
               (BsonWriter *this,String *text,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (JsonSchemaException *)func_?(TypeInfo__Newtonsoft__Json__JsonWriterException);
  Json::Schema::JsonSchemaException::JsonSchemaException__ctor_1
            (this_00,StringLiteral_Cannot_write_JSON_comment_as_BSO,(MethodInfo *)0x0);
  func_?(this_00);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void WriteEnd(JsonToken) */

void Assembly-CSharp.dll::Newtonsoft::Json::Bson::BsonWriter::BsonWriter_WriteEnd
               (BsonWriter *this,JsonToken__Enum token,MethodInfo *method)

{
  ScaleAnimationBase::ScaleAnimationBase_Play
            ((ScaleAnimationBase *)this,(float)token,(MethodInfo *)0x0);
  pBVar1 = (this->fields)._parent;
  if (pBVar1 != (BsonToken *)0x0) {
    (this->fields)._parent = (pBVar1->fields)._Parent_k__BackingField;
    pIVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
             Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)this,(MethodInfo *)0x0);
    if (pIVar2 == (IList_1_VoxelHit_ *)0x0) {
      this_00 = (this->fields)._writer;
      pBVar1 = (this->fields)._root;
      if (this_00 == (BsonBinaryWriter *)0x0) goto code_?;
      BsonBinaryWriter::BsonBinaryWriter_CalculateSize_1(this_00,pBVar1,(MethodInfo *)0x0);
      BsonBinaryWriter::BsonBinaryWriter_WriteTokenInternal(this_00,pBVar1,(MethodInfo *)0x0);
    }
    return;
  }
code_?:
  func_?(0);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void WriteNull() */

void Assembly-CSharp.dll::Newtonsoft::Json::Bson::BsonWriter::BsonWriter_WriteNull
               (BsonWriter *this,MethodInfo *method)

{
  JsonWriter::JsonWriter_WriteNull((JsonWriter *)this,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__Newtonsoft__Json__Bson__BsonValue;
  this_00 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,(MethodInfo *)method_00);
  (this_00->fields).originalScale.x = 0.0;
  *(undefined1 *)&(this_00->fields).originalScale.y = 10;
  BsonWriter_AddToken(this,(BsonToken *)this_00,(MethodInfo *)0x0);
  return;
}


/* Void WriteObjectId(Byte[]) */

void Assembly-CSharp.dll::Newtonsoft::Json::Bson::BsonWriter::BsonWriter_WriteObjectId
               (BsonWriter *this,Byte__Array *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  Json::Utilities::ValidationUtils::ValidationUtils_ArgumentNotNull
            ((Object *)value,StringLiteral_value,(MethodInfo *)0x0);
  if (value == (Byte__Array *)0x0) {
    func_?(0);
  }
  else if (value->max_length == 0xc) {
    JsonWriter::JsonWriter_AutoComplete
              ((JsonWriter *)this,JsonToken__Enum_Undefined,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    method_00 = TypeInfo__Newtonsoft__Json__Bson__BsonValue;
    this_00 = (ScaleAnimationBase *)func_?();
    ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,(MethodInfo *)method_00);
    (this_00->fields).originalScale.x = (float)value;
    *(undefined1 *)&(this_00->fields).originalScale.y = 7;
    BsonWriter_AddToken((BsonWriter *)0x0,(BsonToken *)this_00,(MethodInfo *)0x0);
    return;
  }
  this_01 = (IsolatedStorageException *)func_?(TypeInfo__System__Exception);
  mscorlib.dll::System::IO::IsolatedStorage::IsolatedStorageException::
  IsolatedStorageException__ctor_1
            (this_01,StringLiteral_An_object_id_must_be_12_bytes,(MethodInfo *)0x0);
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void WritePropertyName(String) */

void Assembly-CSharp.dll::Newtonsoft::Json::Bson::BsonWriter::BsonWriter_WritePropertyName
               (BsonWriter *this,String *name,MethodInfo *method)

{
  JsonWriter::JsonWriter_WritePropertyName((JsonWriter *)this,name,(MethodInfo *)0x0);
  (this->fields)._propertyName = name;
  return;
}


/* Void WriteRaw(String) */

void Assembly-CSharp.dll::Newtonsoft::Json::Bson::BsonWriter::BsonWriter_WriteRaw
               (BsonWriter *this,String *json,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (JsonSchemaException *)func_?(TypeInfo__Newtonsoft__Json__JsonWriterException);
  Json::Schema::JsonSchemaException::JsonSchemaException__ctor_1
            (this_00,StringLiteral_Cannot_write_raw_JSON_as_BSON_,(MethodInfo *)0x0);
  func_?(this_00);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void WriteRawValue(String) */

void Assembly-CSharp.dll::Newtonsoft::Json::Bson::BsonWriter::BsonWriter_WriteRawValue
               (BsonWriter *this,String *json,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (JsonSchemaException *)func_?(TypeInfo__Newtonsoft__Json__JsonWriterException);
  Json::Schema::JsonSchemaException::JsonSchemaException__ctor_1
            (this_00,StringLiteral_Cannot_write_raw_JSON_as_BSON_,(MethodInfo *)0x0);
  func_?(this_00);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void WriteRegex(String, String) */

void Assembly-CSharp.dll::Newtonsoft::Json::Bson::BsonWriter::BsonWriter_WriteRegex
               (BsonWriter *this,String *pattern,String *options,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  Json::Utilities::ValidationUtils::ValidationUtils_ArgumentNotNull
            ((Object *)pattern,StringLiteral_pattern,(MethodInfo *)0x0);
  JsonWriter::JsonWriter_AutoComplete
            ((JsonWriter *)this,JsonToken__Enum_Undefined,(MethodInfo *)0x0);
  this_00 = (ScaleAnimationBase *)func_?(TypeInfo__Newtonsoft__Json__Bson__BsonRegex);
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,(MethodInfo *)pattern);
  method_00 = TypeInfo__Newtonsoft__Json__Bson__BsonString;
  pSVar1 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(pSVar1,0.0,(MethodInfo *)method_00);
  (pSVar1->fields).originalScale.x = (float)pattern;
  *(undefined1 *)&(pSVar1->fields).originalScale.y = 2;
  *(undefined1 *)&(pSVar1->fields).target = 0;
  (this_00->fields).originalScale.x = (float)pSVar1;
  method_01 = TypeInfo__Newtonsoft__Json__Bson__BsonString;
  pSVar1 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(pSVar1,0.0,(MethodInfo *)method_01);
  (pSVar1->fields).originalScale.x = (float)options;
  *(undefined1 *)&(pSVar1->fields).originalScale.y = 2;
  *(undefined1 *)&(pSVar1->fields).target = 0;
  (this_00->fields).originalScale.y = (float)pSVar1;
  BsonWriter_AddToken((BsonWriter *)method_00,(BsonToken *)this_00,(MethodInfo *)0x0);
  return;
}


/* Void WriteStartArray() */

void Assembly-CSharp.dll::Newtonsoft::Json::Bson::BsonWriter::BsonWriter_WriteStartArray
               (BsonWriter *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  JsonWriter::JsonWriter_WriteStartArray((JsonWriter *)this,(MethodInfo *)0x0);
  this_00 = (ScaleAnimationBase *)func_?(TypeInfo__Newtonsoft__Json__Bson__BsonArray);
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__System__Collections__Generic__List<Newtonsoft::Json::Bson::BsonToken>;
  this_01 = (List_1_UnityEngine_Vector4_ *)func_?();
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
  List_1_UnityEngine_Vector4___ctor
            (this_01,
             MethodInfo__System__Collections__Generic__List<Newtonsoft::Json::Bson::BsonToken>__List__
            );
  (this_00->fields).originalScale.x = (float)this_01;
  ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,(MethodInfo *)method_00);
  BsonWriter_AddToken(this,(BsonToken *)this_00,(MethodInfo *)0x0);
  (this->fields)._parent = (BsonToken *)this_00;
  return;
}


/* Void WriteStartConstructor(String) */

void Assembly-CSharp.dll::Newtonsoft::Json::Bson::BsonWriter::BsonWriter_WriteStartConstructor
               (BsonWriter *this,String *name,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (JsonSchemaException *)func_?(TypeInfo__Newtonsoft__Json__JsonWriterException);
  Json::Schema::JsonSchemaException::JsonSchemaException__ctor_1
            (this_00,StringLiteral_Cannot_write_JSON_constructor_as,(MethodInfo *)0x0);
  func_?(this_00);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void WriteStartObject() */

void Assembly-CSharp.dll::Newtonsoft::Json::Bson::BsonWriter::BsonWriter_WriteStartObject
               (BsonWriter *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  JsonWriter::JsonWriter_WriteStartObject((JsonWriter *)this,(MethodInfo *)0x0);
  this_00 = (ScaleAnimationBase *)func_?(TypeInfo__Newtonsoft__Json__Bson__BsonObject);
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__System__Collections__Generic__List<Newtonsoft::Json::Bson::BsonProperty>;
  this_01 = (List_1_UnityEngine_Vector4_ *)func_?();
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
  List_1_UnityEngine_Vector4___ctor
            (this_01,
             MethodInfo__System__Collections__Generic__List<Newtonsoft::Json::Bson::BsonProperty>__List__
            );
  (this_00->fields).originalScale.x = (float)this_01;
  ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,(MethodInfo *)method_00);
  BsonWriter_AddToken(this,(BsonToken *)this_00,(MethodInfo *)0x0);
  (this->fields)._parent = (BsonToken *)this_00;
  return;
}


/* Void WriteUndefined() */

void Assembly-CSharp.dll::Newtonsoft::Json::Bson::BsonWriter::BsonWriter_WriteUndefined
               (BsonWriter *this,MethodInfo *method)

{
  JsonWriter::JsonWriter_WriteUndefined((JsonWriter *)this,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__Newtonsoft__Json__Bson__BsonValue;
  this_00 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,(MethodInfo *)method_00);
  (this_00->fields).originalScale.x = 0.0;
  *(undefined1 *)&(this_00->fields).originalScale.y = 6;
  BsonWriter_AddToken(this,(BsonToken *)this_00,(MethodInfo *)0x0);
  return;
}


/* Void WriteValue(String) */

void Assembly-CSharp.dll::Newtonsoft::Json::Bson::BsonWriter::BsonWriter_WriteValue
               (BsonWriter *this,String *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  JsonWriter::JsonWriter_WriteValue_10((JsonWriter *)this,(uint16_t)value,(MethodInfo *)0x0);
  if (value == (String *)0x0) {
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    method_01 = TypeInfo__Newtonsoft__Json__Bson__BsonValue;
    this_00 = (ScaleAnimationBase *)func_?();
    ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,(MethodInfo *)method_01);
    (this_00->fields).originalScale.x = 0.0;
    *(undefined1 *)&(this_00->fields).originalScale.y = 10;
  }
  else {
    method_00 = TypeInfo__Newtonsoft__Json__Bson__BsonString;
    this_00 = (ScaleAnimationBase *)func_?();
    ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,(MethodInfo *)method_00);
    (this_00->fields).originalScale.x = (float)value;
    *(undefined1 *)&(this_00->fields).originalScale.y = 2;
    *(undefined1 *)&(this_00->fields).target = 1;
  }
  BsonWriter_AddToken((BsonWriter *)0x0,(BsonToken *)this_00,(MethodInfo *)0x0);
  return;
}


/* Void WriteValue(Int32) */

void Assembly-CSharp.dll::Newtonsoft::Json::Bson::BsonWriter::BsonWriter_WriteValue_1
               (BsonWriter *this,int32_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  iVar1 = value;
  JsonWriter::JsonWriter_WriteValue_12((JsonWriter *)this,(int8_t)value,(MethodInfo *)0x0);
  value = iVar1;
  fVar2 = (float)func_?(TypeInfo__System__Int32,&value);
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__Newtonsoft__Json__Bson__BsonValue;
  this_00 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,(MethodInfo *)method_00);
  (this_00->fields).originalScale.x = fVar2;
  *(undefined1 *)&(this_00->fields).originalScale.y = 0x10;
  BsonWriter_AddToken(this,(BsonToken *)this_00,(MethodInfo *)0x0);
  return;
}


/* Void WriteValue(Char) */

void Assembly-CSharp.dll::Newtonsoft::Json::Bson::BsonWriter::BsonWriter_WriteValue_10
               (BsonWriter *this,uint16_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  JsonWriter::JsonWriter_WriteValue_10((JsonWriter *)this,(uint16_t)_value,(MethodInfo *)0x0);
  fVar1 = (float)func_?(&value,0);
  method_00 = TypeInfo__Newtonsoft__Json__Bson__BsonString;
  this_00 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,(MethodInfo *)method_00);
  (this_00->fields).originalScale.x = fVar1;
  *(undefined1 *)&(this_00->fields).originalScale.y = 2;
  *(undefined1 *)&(this_00->fields).target = 1;
  BsonWriter_AddToken(this,(BsonToken *)this_00,(MethodInfo *)0x0);
  return;
}


/* Void WriteValue(Byte) */

void Assembly-CSharp.dll::Newtonsoft::Json::Bson::BsonWriter::BsonWriter_WriteValue_11
               (BsonWriter *this,uint8_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  JsonWriter::JsonWriter_WriteValue_12((JsonWriter *)this,value,(MethodInfo *)0x0);
  fVar1 = (float)func_?(TypeInfo__System__Byte,&stack0x0000000b);
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__Newtonsoft__Json__Bson__BsonValue;
  this_00 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,(MethodInfo *)method_00);
  (this_00->fields).originalScale.x = fVar1;
  *(undefined1 *)&(this_00->fields).originalScale.y = 0x10;
  BsonWriter_AddToken(this,(BsonToken *)this_00,(MethodInfo *)0x0);
  return;
}


/* Void WriteValue(SByte) */

void Assembly-CSharp.dll::Newtonsoft::Json::Bson::BsonWriter::BsonWriter_WriteValue_12
               (BsonWriter *this,int8_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  JsonWriter::JsonWriter_WriteValue_12((JsonWriter *)this,value,(MethodInfo *)0x0);
  fVar1 = (float)func_?(TypeInfo__System__SByte,&stack0x0000000b);
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__Newtonsoft__Json__Bson__BsonValue;
  this_00 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,(MethodInfo *)method_00);
  (this_00->fields).originalScale.x = fVar1;
  *(undefined1 *)&(this_00->fields).originalScale.y = 0x10;
  BsonWriter_AddToken(this,(BsonToken *)this_00,(MethodInfo *)0x0);
  return;
}


/* Void WriteValue(Decimal) */

void Assembly-CSharp.dll::Newtonsoft::Json::Bson::BsonWriter::BsonWriter_WriteValue_13
               (BsonWriter *this,Decimal value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  JsonWriter::JsonWriter_WriteValue_13((JsonWriter *)this,value,(MethodInfo *)0x0);
  fVar1 = (float)func_?(TypeInfo__System__Decimal,&stack0xffffffec);
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__Newtonsoft__Json__Bson__BsonValue;
  this_00 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,(MethodInfo *)method_00);
  (this_00->fields).originalScale.x = fVar1;
  *(undefined1 *)&(this_00->fields).originalScale.y = 1;
  BsonWriter_AddToken(this,(BsonToken *)this_00,(MethodInfo *)0x0);
  return;
}


/* Void WriteValue(DateTime) */

void Assembly-CSharp.dll::Newtonsoft::Json::Bson::BsonWriter::BsonWriter_WriteValue_14
               (BsonWriter *this,DateTime value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  value_00.dt._12_4_ = 0;
  value_00.dt.ticks._ticks = SUB128(value._0_12_,0);
  value_00.dt.kind = SUB124(value._0_12_,8);
  value_00.utc_offset._ticks._0_4_ = unaff_ESI;
  value_00.utc_offset._ticks._4_4_ = unaff_EBX;
  JsonWriter::JsonWriter_WriteValue_15((JsonWriter *)this,value_00,in_stack_1);
  fVar2 = (float)func_?(TypeInfo__System__DateTime,&stack0xffffffec);
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__Newtonsoft__Json__Bson__BsonValue;
  this_00 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,(MethodInfo *)method_00);
  (this_00->fields).originalScale.x = fVar2;
  *(undefined1 *)&(this_00->fields).originalScale.y = 9;
  BsonWriter_AddToken(this,(BsonToken *)this_00,(MethodInfo *)0x0);
  return;
}


/* Void WriteValue(DateTimeOffset) */

void Assembly-CSharp.dll::Newtonsoft::Json::Bson::BsonWriter::BsonWriter_WriteValue_15
               (BsonWriter *this,DateTimeOffset value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  value_00.utc_offset._ticks._4_4_ = 0;
  value_00._0_20_ = value._0_20_;
  JsonWriter::JsonWriter_WriteValue_15((JsonWriter *)this,value_00,unaff_ESI);
  puStack_1 = in_stack_2;
  fVar3 = (float)func_?(TypeInfo__System__DateTimeOffset,&puStack_1);
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__Newtonsoft__Json__Bson__BsonValue;
  this_00 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,(MethodInfo *)method_00);
  (this_00->fields).originalScale.x = fVar3;
  *(undefined1 *)&(this_00->fields).originalScale.y = 9;
  BsonWriter_AddToken(this,(BsonToken *)this_00,(MethodInfo *)0x0);
  return;
}


/* Void WriteValue(Byte[]) */

void Assembly-CSharp.dll::Newtonsoft::Json::Bson::BsonWriter::BsonWriter_WriteValue_16
               (BsonWriter *this,Byte__Array *value,MethodInfo *method)

{
  JsonWriter::JsonWriter_WriteValue_35((JsonWriter *)this,value,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__Newtonsoft__Json__Bson__BsonValue;
  this_00 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,(MethodInfo *)method_00);
  (this_00->fields).originalScale.x = (float)value;
  *(undefined1 *)&(this_00->fields).originalScale.y = 5;
  BsonWriter_AddToken(this,(BsonToken *)this_00,(MethodInfo *)0x0);
  return;
}


/* Void WriteValue(Guid) */

void Assembly-CSharp.dll::Newtonsoft::Json::Bson::BsonWriter::BsonWriter_WriteValue_17
               (BsonWriter *this,Guid value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  value_00._ticks._4_1_ = value._d;
  value_00._ticks._5_1_ = value._e;
  value_00._ticks._6_1_ = value._f;
  value_00._ticks._7_1_ = value._g;
  value_00._ticks._0_2_ = value._b;
  value_00._ticks._2_2_ = value._c;
  JsonWriter::JsonWriter_WriteValue_17((JsonWriter *)this,value_00,(MethodInfo *)value._12_4_);
  fVar1 = (float)func_?(&value,0);
  method_00 = TypeInfo__Newtonsoft__Json__Bson__BsonString;
  this_00 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,(MethodInfo *)method_00);
  (this_00->fields).originalScale.x = fVar1;
  *(undefined1 *)&(this_00->fields).originalScale.y = 2;
  *(undefined1 *)&(this_00->fields).target = 1;
  BsonWriter_AddToken(this,(BsonToken *)this_00,(MethodInfo *)0x0);
  return;
}


/* Void WriteValue(TimeSpan) */

void Assembly-CSharp.dll::Newtonsoft::Json::Bson::BsonWriter::BsonWriter_WriteValue_18
               (BsonWriter *this,TimeSpan value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  JsonWriter::JsonWriter_WriteValue_17
            ((JsonWriter *)this,(TimeSpan)(value._ticks & 0xffffffff),unaff_EDI);
  fVar1 = (float)func_?(&stack0x00000008,0);
  method_00 = TypeInfo__Newtonsoft__Json__Bson__BsonString;
  this_00 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,(MethodInfo *)method_00);
  (this_00->fields).originalScale.x = fVar1;
  *(undefined1 *)&(this_00->fields).originalScale.y = 2;
  *(undefined1 *)&(this_00->fields).target = 1;
  BsonWriter_AddToken(this,(BsonToken *)this_00,(MethodInfo *)0x0);
  return;
}


/* Void WriteValue(Uri) */

void Assembly-CSharp.dll::Newtonsoft::Json::Bson::BsonWriter::BsonWriter_WriteValue_19
               (BsonWriter *this,Uri *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  JsonWriter::JsonWriter_WriteValue_36((JsonWriter *)this,value,(MethodInfo *)0x0);
  if (value != (Uri *)0x0) {
    fVar1 = (float)(*(code *)(value->klass->vtable).ToString.method)
                             (value,(value->klass->vtable).
                                    System_Runtime_Serialization_ISerializable_GetObjectData.
                                    methodPtr);
    method_00 = TypeInfo__Newtonsoft__Json__Bson__BsonString;
    this_00 = (ScaleAnimationBase *)func_?();
    ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,(MethodInfo *)method_00);
    (this_00->fields).originalScale.x = fVar1;
    *(undefined1 *)&(this_00->fields).originalScale.y = 2;
    *(undefined1 *)&(this_00->fields).target = 1;
    BsonWriter_AddToken(this,(BsonToken *)this_00,(MethodInfo *)0x0);
    return;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void WriteValue(UInt32) */

void Assembly-CSharp.dll::Newtonsoft::Json::Bson::BsonWriter::BsonWriter_WriteValue_2
               (BsonWriter *this,uint32_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  uVar1 = value;
  if (value < 0x80000000) {
    JsonWriter::JsonWriter_WriteValue_12((JsonWriter *)this,(int8_t)value,(MethodInfo *)0x0);
    value = uVar1;
    fVar2 = (float)func_?(TypeInfo__System__UInt32,&value);
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    method_00 = TypeInfo__Newtonsoft__Json__Bson__BsonValue;
    this_00 = (ScaleAnimationBase *)func_?();
    ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,(MethodInfo *)method_00);
    (this_00->fields).originalScale.x = fVar2;
    *(undefined1 *)&(this_00->fields).originalScale.y = 0x10;
    BsonWriter_AddToken(this,(BsonToken *)this_00,(MethodInfo *)0x0);
    return;
  }
  this_01 = (JsonSchemaException *)func_?(TypeInfo__Newtonsoft__Json__JsonWriterException);
  Json::Schema::JsonSchemaException::JsonSchemaException__ctor_1
            (this_01,StringLiteral_Value_is_too_large_to_fit_in_a_s,(MethodInfo *)0x0);
  func_?(this_01,0,MethodInfo__Newtonsoft__Json__Bson__BsonWriter__WriteValue_unsigned_int_
                 );
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void WriteValue(Int64) */

void Assembly-CSharp.dll::Newtonsoft::Json::Bson::BsonWriter::BsonWriter_WriteValue_3
               (BsonWriter *this,int64_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  uVar1 = (undefined4)value;
  JsonWriter::JsonWriter_WriteValue_4((JsonWriter *)this,value & 0xffffffff,unaff_EDI);
  value._0_4_ = uVar1;
  fVar2 = (float)func_?(TypeInfo__System__Int64,&stack0x00000008);
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__Newtonsoft__Json__Bson__BsonValue;
  this_00 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,(MethodInfo *)method_00);
  (this_00->fields).originalScale.x = fVar2;
  *(undefined1 *)&(this_00->fields).originalScale.y = 0x12;
  BsonWriter_AddToken((BsonWriter *)method_00,(BsonToken *)this_00,(MethodInfo *)0x0);
  return;
}


/* Void WriteValue(UInt64) */

void Assembly-CSharp.dll::Newtonsoft::Json::Bson::BsonWriter::BsonWriter_WriteValue_4
               (BsonWriter *this,uint64_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  uVar1 = (uint)value;
  if (0x7fffffff < (uint)value) {
    this_01 = (JsonSchemaException *)
              func_?(TypeInfo__Newtonsoft__Json__JsonWriterException);
    Json::Schema::JsonSchemaException::JsonSchemaException__ctor_1
              (this_01,StringLiteral_Value_is_too_large_to_fit_in_a_s,(MethodInfo *)0x0);
    func_?(this_01,0,
                    MethodInfo__Newtonsoft__Json__Bson__BsonWriter__WriteValue_unsigned_long_);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  JsonWriter::JsonWriter_WriteValue_4((JsonWriter *)this,value & 0xffffffff,unaff_EDI);
  value._0_4_ = uVar1;
  fVar3 = (float)func_?(TypeInfo__System__UInt64,&stack0x00000008);
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__Newtonsoft__Json__Bson__BsonValue;
  this_00 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,(MethodInfo *)method_00);
  (this_00->fields).originalScale.x = fVar3;
  *(undefined1 *)&(this_00->fields).originalScale.y = 0x12;
  BsonWriter_AddToken((BsonWriter *)method_00,(BsonToken *)this_00,(MethodInfo *)0x0);
  return;
}


/* Void WriteValue(Single) */

void Assembly-CSharp.dll::Newtonsoft::Json::Bson::BsonWriter::BsonWriter_WriteValue_5
               (BsonWriter *this,float value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  JsonWriter::JsonWriter_WriteValue_5((JsonWriter *)this,value,(MethodInfo *)0x0);
  fVar1 = (float)func_?(TypeInfo__System__Single,&stack0xfffffff8);
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__Newtonsoft__Json__Bson__BsonValue;
  this_00 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,(MethodInfo *)method_00);
  (this_00->fields).originalScale.x = fVar1;
  *(undefined1 *)&(this_00->fields).originalScale.y = 1;
  BsonWriter_AddToken(this,(BsonToken *)this_00,(MethodInfo *)0x0);
  return;
}


/* Void WriteValue(Double) */

void Assembly-CSharp.dll::Newtonsoft::Json::Bson::BsonWriter::BsonWriter_WriteValue_6
               (BsonWriter *this,double value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  value_00.hi = value._0_4_;
  value_00.flags = in_stack_1;
  value_00.lo = 0;
  value_00.mid = unaff_ESI;
  JsonWriter::JsonWriter_WriteValue_13((JsonWriter *)this,value_00,unaff_EBX);
  fVar2 = (float)func_?(TypeInfo__System__Double,&stack0xfffffff4);
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__Newtonsoft__Json__Bson__BsonValue;
  this_00 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,(MethodInfo *)method_00);
  (this_00->fields).originalScale.x = fVar2;
  *(undefined1 *)&(this_00->fields).originalScale.y = 1;
  BsonWriter_AddToken(this,(BsonToken *)this_00,(MethodInfo *)0x0);
  return;
}


/* Void WriteValue(Boolean) */

void Assembly-CSharp.dll::Newtonsoft::Json::Bson::BsonWriter::BsonWriter_WriteValue_7
               (BsonWriter *this,bool value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  JsonWriter::JsonWriter_WriteValue_7((JsonWriter *)this,value,(MethodInfo *)0x0);
  fVar1 = (float)func_?(TypeInfo__System__Boolean,&stack0x0000000b);
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__Newtonsoft__Json__Bson__BsonValue;
  this_00 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,(MethodInfo *)method_00);
  (this_00->fields).originalScale.x = fVar1;
  *(undefined1 *)&(this_00->fields).originalScale.y = 8;
  BsonWriter_AddToken(this,(BsonToken *)this_00,(MethodInfo *)0x0);
  return;
}


/* Void WriteValue(Int16) */

void Assembly-CSharp.dll::Newtonsoft::Json::Bson::BsonWriter::BsonWriter_WriteValue_8
               (BsonWriter *this,int16_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  uVar1 = _value;
  JsonWriter::JsonWriter_WriteValue_12((JsonWriter *)this,(int8_t)_value,(MethodInfo *)0x0);
  _value = uVar1 & 0xffff;
  fVar2 = (float)func_?(TypeInfo__System__Int16,&value);
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__Newtonsoft__Json__Bson__BsonValue;
  this_00 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,(MethodInfo *)method_00);
  (this_00->fields).originalScale.x = fVar2;
  *(undefined1 *)&(this_00->fields).originalScale.y = 0x10;
  BsonWriter_AddToken(this,(BsonToken *)this_00,(MethodInfo *)0x0);
  return;
}


/* Void WriteValue(UInt16) */

void Assembly-CSharp.dll::Newtonsoft::Json::Bson::BsonWriter::BsonWriter_WriteValue_9
               (BsonWriter *this,uint16_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  uVar1 = _value;
  JsonWriter::JsonWriter_WriteValue_12((JsonWriter *)this,(int8_t)_value,(MethodInfo *)0x0);
  _value = uVar1 & 0xffff;
  fVar2 = (float)func_?(TypeInfo__System__UInt16,&value);
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__Newtonsoft__Json__Bson__BsonValue;
  this_00 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,(MethodInfo *)method_00);
  (this_00->fields).originalScale.x = fVar2;
  *(undefined1 *)&(this_00->fields).originalScale.y = 0x10;
  BsonWriter_AddToken(this,(BsonToken *)this_00,(MethodInfo *)0x0);
  return;
}


/* BsonWriter(Stream) */

void Assembly-CSharp.dll::Newtonsoft::Json::Bson::BsonWriter::BsonWriter__ctor
               (BsonWriter *this,Stream *stream,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__Newtonsoft__Json__JsonWriter->vtable).Equals.methodPtr & 0x2000000) != 0)
     && ((TypeInfo__Newtonsoft__Json__JsonWriter->_1).cctor_started == 0)) {
    func_?(TypeInfo__Newtonsoft__Json__JsonWriter);
  }
  JsonWriter::JsonWriter__ctor((JsonWriter *)this,(MethodInfo *)0x0);
  Json::Utilities::ValidationUtils::ValidationUtils_ArgumentNotNull
            ((Object *)stream,StringLiteral_stream,(MethodInfo *)0x0);
  this_00 = (ScaleAnimationBase *)
            func_?(TypeInfo__Newtonsoft__Json__Bson__BsonBinaryWriter);
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,(MethodInfo *)this);
  (this_00->fields).originalScale.y = 1.4013e-45;
  this_01 = (BinaryWriter *)func_?();
  mscorlib.dll::System::IO::BinaryWriter::BinaryWriter__ctor_1(this_01,stream,(MethodInfo *)0x0);
  (this_00->fields)._._._._.m_CachedPtr = this_01;
  (this->fields)._writer = (BsonBinaryWriter *)this_00;
  return;
}


/* DateTimeKind get_DateTimeKindHandling() */

DateTimeKind__Enum
Assembly-CSharp.dll::Newtonsoft::Json::Bson::BsonWriter::BsonWriter_get_DateTimeKindHandling
          (BsonWriter *this,MethodInfo *method)

{
  pBVar1 = (this->fields)._writer;
  if (pBVar1 != (BsonBinaryWriter *)0x0) {
    return (pBVar1->fields)._DateTimeKindHandling_k__BackingField;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  DVar3 = (*pcVar2)();
  return DVar3;
}


/* Void set_DateTimeKindHandling(DateTimeKind) */

void Assembly-CSharp.dll::Newtonsoft::Json::Bson::BsonWriter::BsonWriter_set_DateTimeKindHandling
               (BsonWriter *this,DateTimeKind__Enum value,MethodInfo *method)

{
  pBVar1 = (this->fields)._writer;
  if (pBVar1 != (BsonBinaryWriter *)0x0) {
    (pBVar1->fields)._DateTimeKindHandling_k__BackingField = value;
    return;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

