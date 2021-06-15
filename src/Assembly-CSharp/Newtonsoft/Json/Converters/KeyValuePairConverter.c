
/* Boolean CanConvert(Type) */

bool Assembly-CSharp.dll::Newtonsoft::Json::Converters::KeyValuePairConverter::
     KeyValuePairConverter_CanConvert
               (KeyValuePairConverter *this,Type *objectType,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (objectType != (Type *)0x0) {
    bVar1 = mscorlib.dll::System::Type::Type_get_IsValueType(objectType,(MethodInfo *)0x0);
    if (bVar1 != 0) {
      cVar2 = (*(code *)(objectType->klass->vtable).get_IsGenericType.method)
                        (objectType,(objectType->klass->vtable).MakeGenericType.methodPtr);
      if (cVar2 != '\0') {
        pTVar3 = (Type *)(*(code *)(objectType->klass->vtable).GetGenericTypeDefinition.method)
                                   (objectType,
                                    (objectType->klass->vtable).get_IsGenericType.methodPtr);
        handle = TypeRef__System__Collections__Generic__KeyValuePair;
        if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__System__Type->_1).cctor_started == 0)) {
          func_?(TypeInfo__System__Type);
        }
        pTVar4 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                           ((RuntimeTypeHandle)handle,(MethodInfo *)0x0);
        return pTVar3 == pTVar4;
      }
    }
    return 0;
  }
  func_?();
  pcVar5 = (code *)swi(3);
  bVar1 = (*pcVar5)();
  return bVar1;
}


/* Object ReadJson(JsonReader, Type, Object, JsonSerializer) */

Object * Assembly-CSharp.dll::Newtonsoft::Json::Converters::KeyValuePairConverter::
         KeyValuePairConverter_ReadJson
                   (KeyValuePairConverter *this,JsonReader *reader,Type *objectType,
                   Object *existingValue,JsonSerializer *serializer,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((objectType == (Type *)0x0) ||
     (iVar1 = (*(code *)(objectType->klass->vtable).GetGenericArguments.method)
                        (objectType,
                         (objectType->klass->vtable).get_ContainsGenericParameters.methodPtr),
     iVar1 == 0)) {
code_?:
    func_?(0);
code_?:
    uVar2 = func_?(0,0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0,0);
    func_?(uVar2);
  }
  else {
    uVar2 = func_?(3,TypeInfo__System__Collections__Generic__IList<System::Type>,iVar1,0);
    uVar3 = func_?(3,TypeInfo__System__Collections__Generic__IList<System::Type>,iVar1,1);
    if (reader == (JsonReader *)0x0) goto code_?;
    (*(code *)(reader->klass->vtable).__unknown.method)
              (reader,(reader->klass->vtable).__unknown_1.methodPtr);
    (*(code *)(reader->klass->vtable).__unknown.method)
              (reader,(reader->klass->vtable).__unknown_1.methodPtr);
    if (serializer == (JsonSerializer *)0x0) goto code_?;
    pOVar4 = (Object *)
             (*(code *)(serializer->klass->vtable).DeserializeInternal.method)
                       (serializer,reader,uVar2,
                        (serializer->klass->vtable).SerializeInternal.methodPtr);
    (*(code *)(reader->klass->vtable).__unknown.method)
              (reader,(reader->klass->vtable).__unknown_1.methodPtr);
    (*(code *)(reader->klass->vtable).__unknown.method)
              (reader,(reader->klass->vtable).__unknown_1.methodPtr);
    pOVar5 = (Object *)
             (*(code *)(serializer->klass->vtable).DeserializeInternal.method)
                       (serializer,reader,uVar3,
                        (serializer->klass->vtable).SerializeInternal.methodPtr);
    (*(code *)(reader->klass->vtable).__unknown.method)
              (reader,(reader->klass->vtable).__unknown_1.methodPtr);
    args = (Object__Array *)func_?(TypeInfo__System__Object,2);
    if (args == (Object__Array *)0x0) goto code_?;
    if ((pOVar4 != (Object *)0x0) &&
       (iVar1 = func_?(pOVar4,(args->klass->_0).element_class), iVar1 == 0))
    goto code_?;
    if (args->max_length == 0) goto code_?;
    args->vector[0] = pOVar4;
    if ((pOVar5 == (Object *)0x0) ||
       (iVar1 = func_?(pOVar5,(args->klass->_0).element_class), iVar1 != 0)) {
      if (1 < args->max_length) {
        args->vector[1] = pOVar5;
        pOVar4 = Json::Utilities::ReflectionUtils::ReflectionUtils_CreateInstance
                           (objectType,args,(MethodInfo *)0x0);
        return pOVar4;
      }
      goto code_?;
    }
  }
  uVar2 = func_?(0,0);
  func_?(uVar2);
code_?:
  uVar2 = func_?(0);
  func_?(uVar2);
  pcVar6 = (code *)swi(3);
  pOVar4 = (Object *)(*pcVar6)();
  return pOVar4;
}


/* Void WriteJson(JsonWriter, Object, JsonSerializer) */

void Assembly-CSharp.dll::Newtonsoft::Json::Converters::KeyValuePairConverter::
     KeyValuePairConverter_WriteJson
               (KeyValuePairConverter *this,JsonWriter *writer,Object *value,
               JsonSerializer *serializer,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (value != (Object *)0x0) {
    this_00 = mscorlib.dll::System::Object::Object_GetType(value,(MethodInfo *)0x0);
    if (this_00 != (Type *)0x0) {
      member_00 = mscorlib.dll::System::Type::Type_GetProperty
                            (this_00,StringLiteral_Key,(MethodInfo *)0x0);
      mscorlib.dll::System::Type::Type_GetProperty(this_00,StringLiteral_Value,(MethodInfo *)0x0);
      if (writer != (JsonWriter *)0x0) {
        (*(code *)(writer->klass->vtable).WriteStartObject.method)();
        (*(code *)(writer->klass->vtable).WritePropertyName.method)(writer);
        Json::Utilities::ReflectionUtils::ReflectionUtils_GetMemberValue
                  ((MemberInfo_1 *)member_00,value,(MethodInfo *)0x0);
        if (serializer != (JsonSerializer *)0x0) {
          member = serializer->klass[1]._0.image;
          (*(code *)(serializer->klass->vtable).SerializeInternal.method)();
          (*(code *)(writer->klass->vtable).WritePropertyName.method)
                    (writer,StringLiteral_Value,(writer->klass->vtable).WriteEnd.methodPtr);
          pOVar1 = Json::Utilities::ReflectionUtils::ReflectionUtils_GetMemberValue
                             ((MemberInfo_1 *)member,value,(MethodInfo *)0x0);
          (*(code *)(serializer->klass->vtable).SerializeInternal.method)
                    (serializer,writer,pOVar1,serializer->klass[1]._0.image);
          (*(code *)(writer->klass->vtable).WriteEndObject.method)
                    (writer,(writer->klass->vtable).WriteStartArray.methodPtr);
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

