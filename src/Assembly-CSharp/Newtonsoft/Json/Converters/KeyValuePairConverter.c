
/* Boolean CanConvert(Type) */

bool Assembly-CSharp.dll::Newtonsoft::Json::Converters::KeyValuePairConverter::
     KeyValuePairConverter_CanConvert
               (KeyValuePairConverter *this,Type *objectType,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeRef__System__Collections__Generic__KeyValuePair);
    func_?(&TypeInfo__System__Type);
    cRam_? = '\x01';
  }
  if (objectType != (Type *)0x0) {
    bVar1 = mscorlib.dll::System::Type::Type_get_IsValueType(objectType,(MethodInfo *)0x0);
    if (bVar1 != 0) {
      cVar2 = (*(objectType->klass->vtable).get_IsGenericType.methodPtr)
                        (objectType,(objectType->klass->vtable).get_IsGenericType.method);
      if (cVar2 != '\0') {
        left = (Object **)
               (*(objectType->klass->vtable).GetGenericTypeDefinition.methodPtr)
                         (objectType,(objectType->klass->vtable).GetGenericTypeDefinition.method);
        handle = TypeRef__System__Collections__Generic__KeyValuePair;
        if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__System__Type);
        }
        right = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                          ((RuntimeTypeHandle)handle,(MethodInfo *)0x0);
        bVar1 = mscorlib.dll::System::Runtime::CompilerServices::Unsafe::Unsafe_AreSame_2
                          (left,(Object **)right,(MethodInfo *)0x0);
        return bVar1;
      }
    }
    return 0;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  bVar1 = (*pcVar3)();
  return bVar1;
}


/* Object ReadJson(JsonReader, Type, Object, JsonSerializer) */

Object * Assembly-CSharp.dll::Newtonsoft::Json::Converters::KeyValuePairConverter::
         KeyValuePairConverter_ReadJson
                   (KeyValuePairConverter *this,JsonReader *reader,Type *objectType,
                   Object *existingValue,JsonSerializer *serializer,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Collections__Generic__IList<System::Type>);
    func_?(&TypeInfo__System__Object);
    cRam_? = '\x01';
  }
  if ((objectType == (Type *)0x0) ||
     (iVar1 = (*(objectType->klass->vtable).GetGenericArguments.methodPtr)
                        (objectType,(objectType->klass->vtable).GetGenericArguments.method),
     iVar1 == 0)) {
code_?:
    func_?();
code_?:
    uVar2 = func_?(0);
    func_?(uVar2);
  }
  else {
    objectType_00 =
         (Type *)func_?(0,TypeInfo__System__Collections__Generic__IList<System::Type>,iVar1
                                 ,0);
    objectType_01 =
         (Type *)func_?(0,TypeInfo__System__Collections__Generic__IList<System::Type>,iVar1
                                 ,1);
    if (reader == (JsonReader *)0x0) goto code_?;
    (*(reader->klass->vtable).__unknown.methodPtr)(reader,(reader->klass->vtable).__unknown.method);
    (*(reader->klass->vtable).__unknown.methodPtr)(reader,(reader->klass->vtable).__unknown.method);
    if (serializer == (JsonSerializer *)0x0) goto code_?;
    pOVar3 = JsonSerializer::JsonSerializer_Deserialize_2
                       (serializer,reader,objectType_00,(MethodInfo *)0x0);
    (*(reader->klass->vtable).__unknown.methodPtr)(reader,(reader->klass->vtable).__unknown.method);
    (*(reader->klass->vtable).__unknown.methodPtr)(reader,(reader->klass->vtable).__unknown.method);
    pOVar4 = JsonSerializer::JsonSerializer_Deserialize_2
                       (serializer,reader,objectType_01,(MethodInfo *)0x0);
    (*(reader->klass->vtable).__unknown.methodPtr)(reader,(reader->klass->vtable).__unknown.method);
    args = (Object__Array *)func_?(TypeInfo__System__Object,2);
    if (args == (Object__Array *)0x0) goto code_?;
    if ((pOVar3 != (Object *)0x0) &&
       (iVar1 = func_?(pOVar3,(args->klass->_0).element_class), iVar1 == 0))
    goto code_?;
    if (args->max_length == 0) goto code_?;
    args->vector[0] = pOVar3;
    func_?(args->vector,pOVar3);
    if ((pOVar4 == (Object *)0x0) ||
       (iVar1 = func_?(pOVar4,(args->klass->_0).element_class), iVar1 != 0)) {
      if (1 < args->max_length) {
        args->vector[1] = pOVar4;
        func_?(args->vector + 1,pOVar4);
        pOVar3 = Json::Utilities::ReflectionUtils::ReflectionUtils_CreateInstance
                           (objectType,args,(MethodInfo *)0x0);
        return pOVar3;
      }
      goto code_?;
    }
  }
  uVar2 = func_?(0);
  func_?(uVar2);
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  pOVar3 = (Object *)(*pcVar5)();
  return pOVar3;
}


/* Void WriteJson(JsonWriter, Object, JsonSerializer) */

void Assembly-CSharp.dll::Newtonsoft::Json::Converters::KeyValuePairConverter::
     KeyValuePairConverter_WriteJson
               (KeyValuePairConverter *this,JsonWriter *writer,Object *value,
               JsonSerializer *serializer,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&StringLiteral_Value);
    func_?(&StringLiteral_Key);
    cRam_? = '\x01';
  }
  if (value != (Object *)0x0) {
    this_00 = mscorlib.dll::System::Object::Object_GetType(value,(MethodInfo *)0x0);
    if (this_00 != (Type *)0x0) {
      member_00 = mscorlib.dll::System::Type::Type_GetProperty
                            (this_00,StringLiteral_Key,(MethodInfo *)0x0);
      mscorlib.dll::System::Type::Type_GetProperty(this_00,StringLiteral_Value,(MethodInfo *)0x0);
      if (writer != (JsonWriter *)0x0) {
        (*(writer->klass->vtable).WriteStartObject.methodPtr)();
        (*(writer->klass->vtable).WritePropertyName.methodPtr)(writer);
        pOVar1 = Json::Utilities::ReflectionUtils::ReflectionUtils_GetMemberValue
                           ((MemberInfo_1 *)member_00,value,(MethodInfo *)0x0);
        if (serializer != (JsonSerializer *)0x0) {
          JsonSerializer::JsonSerializer_Serialize_1(serializer,writer,pOVar1,(MethodInfo *)0x0);
          member = (writer->klass->vtable).WritePropertyName.method;
          (*(writer->klass->vtable).WritePropertyName.methodPtr)();
          pOVar1 = Json::Utilities::ReflectionUtils::ReflectionUtils_GetMemberValue
                             ((MemberInfo_1 *)member,value,(MethodInfo *)0x0);
          JsonSerializer::JsonSerializer_Serialize_1(serializer,writer,pOVar1,(MethodInfo *)0x0);
          (*(writer->klass->vtable).WriteEndObject.methodPtr)(writer);
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

