
/* Boolean CanConvert(Type) */

bool Assembly-CSharp.dll::Newtonsoft::Json::Converters::CustomCreationConverter`1[System::Object]::
     CustomCreationConverter_1_System_Object__CanConvert
               (CustomCreationConverter_1_System_Object_ *this,Type *objectType,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  handle.value = *(void **)(*(int *)(method->name + 0x60) + 8);
  if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__Type->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__Type);
  }
  pTVar1 = mscorlib.dll::System::Type::Type_GetTypeFromHandle(handle,(MethodInfo *)0x0);
  if (pTVar1 != (Type *)0x0) {
    bVar2 = (*(code *)(pTVar1->klass->vtable).IsAssignableFrom.method)(pTVar1,objectType);
    return bVar2;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  bVar2 = (*pcVar3)();
  return bVar2;
}


/* Object ReadJson(JsonReader, Type, Object, JsonSerializer) */

Object * Assembly-CSharp.dll::Newtonsoft::Json::Converters::CustomCreationConverter`1[System::
         Object]::CustomCreationConverter_1_System_Object__ReadJson
                   (CustomCreationConverter_1_System_Object_ *this,JsonReader *reader,
                   Type *objectType,Object *existingValue,JsonSerializer *serializer,
                   MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (reader != (JsonReader *)0x0) {
    iVar1 = (*(code *)(reader->klass->vtable).get_TokenType.method)
                      (reader,(reader->klass->vtable).get_Value.methodPtr);
    if (iVar1 == 0xb) {
      return (Object *)0x0;
    }
    if (this != (CustomCreationConverter_1_System_Object_ *)0x0) {
      pOVar2 = (Object *)
               (*(code *)(this->klass->vtable).__unknown.method)
                         (this,objectType,this->klass[1]._0.image);
      if (pOVar2 == (Object *)0x0) goto code_?;
      if (serializer != (JsonSerializer *)0x0) {
        JsonSerializer::JsonSerializer_Populate_1(serializer,reader,pOVar2,(MethodInfo *)0x0);
        return pOVar2;
      }
    }
  }
  func_?(0);
code_?:
  this_00 = (JsonSchemaException *)
            func_?(TypeInfo__Newtonsoft__Json__JsonSerializationException);
  Json::Schema::JsonSchemaException::JsonSchemaException__ctor_1
            (this_00,StringLiteral_No_object_created_,(MethodInfo *)0x0);
  func_?(this_00,0);
  pcVar3 = (code *)swi(3);
  pOVar2 = (Object *)(*pcVar3)();
  return pOVar2;
}


/* Void WriteJson(JsonWriter, Object, JsonSerializer) */

void Assembly-CSharp.dll::Newtonsoft::Json::Converters::CustomCreationConverter`1[System::Object]::
     CustomCreationConverter_1_System_Object__WriteJson
               (CustomCreationConverter_1_System_Object_ *this,JsonWriter *writer,Object *value,
               JsonSerializer *serializer,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (NotSupportedException *)func_?(TypeInfo__System__NotSupportedException);
  mscorlib.dll::System::NotSupportedException::NotSupportedException__ctor_1
            (this_00,StringLiteral_CustomCreationConverter_should_o,(MethodInfo *)0x0);
  func_?(this_00);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

