
/* Boolean CanConvert(Type) */

bool Assembly-CSharp.dll::Newtonsoft::Json::Converters::CustomCreationConverter`1[System::Object]::
     CustomCreationConverter_1_System_Object__CanConvert
               (CustomCreationConverter_1_System_Object_ *this,Type *objectType,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Type);
    cRam_? = '\x01';
  }
  handle = method->klass->rgctx_data[3];
  if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__Type);
  }
  pTVar1 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                     ((RuntimeTypeHandle)handle,(MethodInfo *)0x0);
  if (pTVar1 != (Type *)0x0) {
    bVar2 = (*(pTVar1->klass->vtable).IsAssignableFrom.methodPtr)(pTVar1,objectType);
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
  if (reader != (JsonReader *)0x0) {
    iVar1 = (*(reader->klass->vtable).get_TokenType.methodPtr)
                      (reader,(reader->klass->vtable).get_TokenType.method);
    if (iVar1 == 0xb) {
      return (Object *)0x0;
    }
    pOVar2 = (Object *)
             (*(this->klass->vtable).__unknown.methodPtr)
                       (this,objectType,(this->klass->vtable).__unknown.method);
    if (pOVar2 == (Object *)0x0) goto code_?;
    if (serializer != (JsonSerializer *)0x0) {
      JsonSerializer::JsonSerializer_Populate_1(serializer,reader,pOVar2,(MethodInfo *)0x0);
      return pOVar2;
    }
  }
  func_?();
code_?:
  uVar3 = func_?(&TypeInfo__Newtonsoft__Json__JsonSerializationException);
  this_00 = (JsonSerializationException *)func_?(uVar3);
  func_?(this_00);
  method_00 = (MethodInfo *)0x0;
  message = (String *)func_?(&StringLiteral_No_object_created_);
  JsonSerializationException::JsonSerializationException__ctor_1(this_00,message,method_00);
  func_?(&
                  MethodInfo__Newtonsoft__Json__Converters__CustomCreationConverter<System::Object>__ReadJson_Newtonsoft__Json__JsonReader__System__Type__System__Object__Newtonsoft__Json__JsonSerializer_
                 );
  func_?(this_00);
  pcVar4 = (code *)swi(3);
  pOVar2 = (Object *)(*pcVar4)();
  return pOVar2;
}


/* Void WriteJson(JsonWriter, Object, JsonSerializer) */

void Assembly-CSharp.dll::Newtonsoft::Json::Converters::CustomCreationConverter`1[System::Object]::
     CustomCreationConverter_1_System_Object__WriteJson
               (CustomCreationConverter_1_System_Object_ *this,JsonWriter *writer,Object *value,
               JsonSerializer *serializer,MethodInfo *method)

{
  uVar1 = func_?(&TypeInfo__System__NotSupportedException);
  this_00 = (NotSupportedException *)func_?(uVar1);
  func_?(this_00);
  method_00 = (MethodInfo *)0x0;
  message = (String *)func_?(&StringLiteral_CustomCreationConverter_should_o);
  mscorlib.dll::System::NotSupportedException::NotSupportedException__ctor_1
            (this_00,message,method_00);
  func_?(&
                  MethodInfo__Newtonsoft__Json__Converters__CustomCreationConverter<System::Object>__WriteJson_Newtonsoft__Json__JsonWriter__System__Object__Newtonsoft__Json__JsonSerializer_
                 );
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

