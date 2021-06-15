
/* Int64 ConvertDateTimeToJavaScriptTicks(DateTime, TimeSpan) */

int64_t Assembly-CSharp.dll::Newtonsoft::Json::JsonConvert::
        JsonConvert_ConvertDateTimeToJavaScriptTicks
                  (DateTime dateTime,TimeSpan offset,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__Newtonsoft__Json__JsonConvert->vtable).Equals.methodPtr & 0x2000000) != 0)
     && ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_started == 0)) {
    func_?(TypeInfo__Newtonsoft__Json__JsonConvert);
  }
  iVar1 = JsonConvert_ToUniversalTicks_1(dateTime,offset,(MethodInfo *)0x0);
  iVar1 = JsonConvert_UniversialTicksToJavaScriptTicks(iVar1,(MethodInfo *)0x0);
  return iVar1;
}


/* Int64 ConvertDateTimeToJavaScriptTicks(DateTime) */

int64_t Assembly-CSharp.dll::Newtonsoft::Json::JsonConvert::
        JsonConvert_ConvertDateTimeToJavaScriptTicks_1(DateTime dateTime,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__Newtonsoft__Json__JsonConvert->vtable).Equals.methodPtr & 0x2000000) != 0)
     && ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_started == 0)) {
    func_?(TypeInfo__Newtonsoft__Json__JsonConvert);
  }
  iVar1 = JsonConvert_ConvertDateTimeToJavaScriptTicks_2(dateTime,1,(MethodInfo *)0x0);
  return iVar1;
}


/* Int64 ConvertDateTimeToJavaScriptTicks(DateTime, Boolean) */

int64_t Assembly-CSharp.dll::Newtonsoft::Json::JsonConvert::
        JsonConvert_ConvertDateTimeToJavaScriptTicks_2
                  (DateTime dateTime,bool convertToUtc,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pOVar1 = (Object *)dateTime._12_4_;
  if (convertToUtc == 0) {
    pDVar2 = &dateTime;
  }
  else {
    pCStack_3 = (Collection_1_VoxelHit___Class *)dateTime.ticks._ticks;
    pMStack_4 = dateTime.ticks._ticks._4_4_;
    pIVar5 = (IList_1_VoxelHit_ *)dateTime.kind;
    if ((((uint)(TypeInfo__Newtonsoft__Json__JsonConvert->vtable).Equals.methodPtr & 0x2000000) != 0
        ) && ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_started == 0)) {
      func_?(TypeInfo__Newtonsoft__Json__JsonConvert);
    }
    pIStack_6 = pIVar5;
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    pIVar5 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
             Collection_1_VoxelHit__get_Items
                       ((Collection_1_VoxelHit_ *)&pCStack_3,(MethodInfo *)0x0);
    if (pIVar5 != (IList_1_VoxelHit_ *)0x1) {
      pIVar5 = pIStack_6;
      pCVar7 = pCStack_3;
      pMVar8 = pMStack_4;
      if ((((uint)(TypeInfo__Newtonsoft__Json__JsonConvert->vtable).Equals.methodPtr & 0x2000000) !=
           0) && ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_started == 0)) {
        func_?(TypeInfo__Newtonsoft__Json__JsonConvert);
      }
      dateTime_00.ticks._ticks._4_4_ = pMVar8;
      dateTime_00.ticks._ticks._0_4_ = pCVar7;
      dateTime_00.kind = (int32_t)pIVar5;
      dateTime_00._12_4_ = pOVar1;
      offset = JsonConvert_GetUtcOffset(dateTime_00,(MethodInfo *)0x0);
      dateTime_01.ticks._ticks._4_4_ = pMVar8;
      dateTime_01.ticks._ticks._0_4_ = pCVar7;
      dateTime_01.kind = (int32_t)pIVar5;
      dateTime_01._12_4_ = pOVar1;
      iVar9 = JsonConvert_ToUniversalTicks_1(dateTime_01,offset,(MethodInfo *)0x0);
      goto code_?;
    }
    pDVar2 = (DateTime *)&pCStack_3;
  }
  iVar9 = func_?(pDVar2,0);
code_?:
  if ((((uint)(TypeInfo__Newtonsoft__Json__JsonConvert->vtable).Equals.methodPtr & 0x2000000) != 0)
     && ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_started == 0)) {
    func_?();
  }
  iVar9 = JsonConvert_UniversialTicksToJavaScriptTicks(iVar9,(MethodInfo *)0x0);
  return iVar9;
}


/* DateTime ConvertJavaScriptTicksToDateTime(Int64) */

DateTime *
Assembly-CSharp.dll::Newtonsoft::Json::JsonConvert::JsonConvert_ConvertJavaScriptTicksToDateTime
          (DateTime *__return_storage_ptr__,int64_t javaScriptTicks,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  uStack_1 = 0;
  uStack_2 = 0;
  iStack_3 = 0;
  uStack_4 = 0;
  if ((((uint)(TypeInfo__Newtonsoft__Json__JsonConvert->vtable).Equals.methodPtr & 0x2000000) != 0)
     && ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_started == 0)) {
    func_?(TypeInfo__Newtonsoft__Json__JsonConvert);
  }
  pJVar5 = TypeInfo__Newtonsoft__Json__JsonConvert;
  uVar6 = func_?(in_stack_7,(undefined4)javaScriptTicks,10000,0,1,0);
  piVar8 = &pJVar5->static_fields->InitialJavaScriptDateTicks;
  func_?(&uStack_1,(uint)uVar6 + (int)*piVar8,
                  (int)((ulonglong)uVar6 >> 0x20) +
                  *(int *)((int)&pJVar5->static_fields->InitialJavaScriptDateTicks + 4) +
                  (uint)CARRY4((uint)uVar6,(uint)*piVar8));
  *(undefined4 *)&(__return_storage_ptr__->ticks)._ticks = uStack_1;
  *(undefined4 *)((int)&(__return_storage_ptr__->ticks)._ticks + 4) = uStack_2;
  __return_storage_ptr__->kind = iStack_3;
  *(undefined4 *)&__return_storage_ptr__->field_0xc = uStack_4;
  return __return_storage_ptr__;
}


/* Object DeserializeAnonymousType[Object](String, Object) */

Object * Assembly-CSharp.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeAnonymousType
                   (String *value,Object *anonymousTypeObject,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__Newtonsoft__Json__JsonConvert->vtable).Equals.methodPtr & 0x2000000) != 0)
     && ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_started == 0)) {
    func_?(TypeInfo__Newtonsoft__Json__JsonConvert);
  }
  pOVar1 = (Object *)(*(code *)(*method->parameters)->data)(value,*method->parameters);
  return pOVar1;
}


/* Object DeserializeObject(String) */

Object * Assembly-CSharp.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject
                   (String *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__Newtonsoft__Json__JsonConvert->vtable).Equals.methodPtr & 0x2000000) != 0)
     && ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_started == 0)) {
    func_?(TypeInfo__Newtonsoft__Json__JsonConvert);
  }
  pOVar1 = JsonConvert_DeserializeObject_4
                     (value,(Type *)0x0,(JsonSerializerSettings *)0x0,(MethodInfo *)0x0);
  return pOVar1;
}


/* Object DeserializeObject(String, JsonSerializerSettings) */

Object * Assembly-CSharp.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_1
                   (String *value,JsonSerializerSettings *settings,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__Newtonsoft__Json__JsonConvert->vtable).Equals.methodPtr & 0x2000000) != 0)
     && ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_started == 0)) {
    func_?(TypeInfo__Newtonsoft__Json__JsonConvert);
  }
  pOVar1 = JsonConvert_DeserializeObject_4(value,(Type *)0x0,settings,(MethodInfo *)0x0);
  return pOVar1;
}


/* WebAdManager+JSONRewardedAdSuccessful
   DeserializeObject[WebAdManager+JSONRewardedAdSuccessful](String) */

WebAdManager_JSONRewardedAdSuccessful
Assembly-CSharp.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_12
          (String *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__Newtonsoft__Json__JsonConvert->vtable).Equals.methodPtr & 0x2000000) != 0)
     && ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_started == 0)) {
    func_?(TypeInfo__Newtonsoft__Json__JsonConvert);
  }
  bVar1 = (*(code *)(*method->parameters)->data)(value,0,*method->parameters);
  return (WebAdManager_JSONRewardedAdSuccessful)bVar1;
}


/* WebAdManager+JSONAdReturnedData DeserializeObject[WebAdManager+JSONAdReturnedData](String) */

WebAdManager_JSONAdReturnedData
Assembly-CSharp.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_13
          (String *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__Newtonsoft__Json__JsonConvert->vtable).Equals.methodPtr & 0x2000000) != 0)
     && ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_started == 0)) {
    func_?(TypeInfo__Newtonsoft__Json__JsonConvert);
  }
  bVar1 = (*(code *)(*method->parameters)->data)(value,0,*method->parameters);
  return (WebAdManager_JSONAdReturnedData)bVar1;
}


/* Object DeserializeObject(String, Type) */

Object * Assembly-CSharp.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_2
                   (String *value,Type *type,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__Newtonsoft__Json__JsonConvert->vtable).Equals.methodPtr & 0x2000000) != 0)
     && ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_started == 0)) {
    func_?(TypeInfo__Newtonsoft__Json__JsonConvert);
  }
  pOVar1 = JsonConvert_DeserializeObject_4
                     (value,type,(JsonSerializerSettings *)0x0,(MethodInfo *)0x0);
  return pOVar1;
}


/* Int32 DeserializeObject[Int32](String) */

int32_t Assembly-CSharp.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_24
                  (String *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__Newtonsoft__Json__JsonConvert->vtable).Equals.methodPtr & 0x2000000) != 0)
     && ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_started == 0)) {
    func_?(TypeInfo__Newtonsoft__Json__JsonConvert);
  }
  iVar1 = (*(code *)(*method->parameters)->data)(value,0,*method->parameters);
  return iVar1;
}


/* Object DeserializeObject(String, Type, JsonConverter[]) */

Object * Assembly-CSharp.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_3
                   (String *value,Type *type,JsonConverter__Array *converters,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((converters == (JsonConverter__Array *)0x0) || ((int)converters->max_length < 1)) {
    this = (JsonSerializerSettings *)0x0;
  }
  else {
    this = (JsonSerializerSettings *)
           func_?(TypeInfo__Newtonsoft__Json__JsonSerializerSettings);
    JsonSerializerSettings::JsonSerializerSettings__ctor(this,(MethodInfo *)0x0);
    if (this == (JsonSerializerSettings *)0x0) {
      func_?(0);
      pcVar1 = (code *)swi(3);
      pOVar2 = (Object *)(*pcVar1)();
      return pOVar2;
    }
    (this->fields)._Converters_k__BackingField =
         (IList_1_Newtonsoft_Json_JsonConverter_ *)converters;
  }
  if ((((uint)(TypeInfo__Newtonsoft__Json__JsonConvert->vtable).Equals.methodPtr & 0x2000000) != 0)
     && ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_started == 0)) {
    func_?(TypeInfo__Newtonsoft__Json__JsonConvert);
  }
  pOVar2 = JsonConvert_DeserializeObject_4(value,type,this,(MethodInfo *)0x0);
  return pOVar2;
}


/* Object DeserializeObject(String, Type, JsonSerializerSettings) */

Object * Assembly-CSharp.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_4
                   (String *value,Type *type,JsonSerializerSettings *settings,MethodInfo *method)

{
  *unaff_FS_OFFSET = &stack0xfffffff0;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  func_?();
  this = (StringReader *)func_?(TypeInfo__System__IO__StringReader);
  mscorlib.dll::System::IO::StringReader::StringReader__ctor(this,value,(MethodInfo *)0x0);
  pJVar1 = JsonSerializer::JsonSerializer_Create(settings,(MethodInfo *)0x0);
  this_00 = (JsonTextReader *)func_?(TypeInfo__Newtonsoft__Json__JsonTextReader);
  JsonTextReader::JsonTextReader__ctor(this_00,(TextReader *)this,(MethodInfo *)0x0);
  if ((pJVar1 != (JsonSerializer *)0x0) &&
     (pOVar2 = (Object *)(*(code *)(pJVar1->klass->vtable).DeserializeInternal.method)(),
     this_00 != (JsonTextReader *)0x0)) {
    pJVar3 = (JsonTextReader *)(this_00->klass->vtable).ReadAsBytes.methodPtr;
    cVar4 = (*(code *)(this_00->klass->vtable).Read.method)();
    if (cVar4 != '\0') {
      pJVar3 = (JsonTextReader *)(this_00->klass->vtable).get_Value.methodPtr;
      iVar5 = (*(code *)(this_00->klass->vtable).get_TokenType.method)();
      if (iVar5 != 5) {
        this_01 = (JsonSchemaException *)func_?();
        Json::Schema::JsonSchemaException::JsonSchemaException__ctor_1
                  (this_01,StringLiteral_Additional_text_found_in_JSON_st,(MethodInfo *)0x0);
        func_?();
        goto code_?;
      }
    }
    pJVar1->klass = (JsonSerializer__Class *)0x52;
    if (this_00 != (JsonTextReader *)0x0) {
      func_?();
      pJVar3 = this_00;
    }
    *unaff_FS_OFFSET = pJVar3;
    return pOVar2;
  }
code_?:
  func_?();
  func_?();
  pcVar6 = (code *)swi(3);
  pOVar2 = (Object *)(*pcVar6)();
  return pOVar2;
}


/* XPLevelLimits DeserializeObject[XPLevelLimits](String) */

XPLevelLimits *
Assembly-CSharp.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_43
          (String *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__Newtonsoft__Json__JsonConvert->vtable).Equals.methodPtr & 0x2000000) != 0)
     && ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_started == 0)) {
    func_?(TypeInfo__Newtonsoft__Json__JsonConvert);
  }
  pXVar1 = (XPLevelLimits *)(*(code *)(*method->parameters)->data)(value,0,*method->parameters);
  return pXVar1;
}


/* WebAdManager+JSONAdReturnedData DeserializeObject[WebAdManager+JSONAdReturnedData](String,
   JsonSerializerSettings) */

WebAdManager_JSONAdReturnedData
Assembly-CSharp.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_44
          (String *value,JsonSerializerSettings *settings,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  handle.value = *method->parameters;
  if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__Type->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__Type);
  }
  type = mscorlib.dll::System::Type::Type_GetTypeFromHandle(handle,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__Newtonsoft__Json__JsonConvert->vtable).Equals.methodPtr & 0x2000000) != 0)
     && ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_started == 0)) {
    func_?(TypeInfo__Newtonsoft__Json__JsonConvert);
  }
  pOVar1 = JsonConvert_DeserializeObject_4(value,type,settings,(MethodInfo *)0x0);
  pIVar2 = method->parameters[1];
  if ((pIVar2[0x17].type & 1) == 0) {
    func_?();
  }
  if (pOVar1 == (Object *)0x0) {
    func_?();
  }
  else if ((pOVar1->klass->_0).element_class == pIVar2[4].data.dummy) {
    pbVar3 = (bool *)func_?();
    return (WebAdManager_JSONAdReturnedData)*pbVar3;
  }
  func_?();
  pcVar4 = (code *)swi(3);
  bVar5 = (*pcVar4)();
  return (WebAdManager_JSONAdReturnedData)bVar5;
}


/* WebAdManager+JSONRewardedAdSuccessful
   DeserializeObject[WebAdManager+JSONRewardedAdSuccessful](String, JsonSerializerSettings) */

WebAdManager_JSONRewardedAdSuccessful
Assembly-CSharp.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_45
          (String *value,JsonSerializerSettings *settings,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  handle.value = *method->parameters;
  if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__Type->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__Type);
  }
  type = mscorlib.dll::System::Type::Type_GetTypeFromHandle(handle,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__Newtonsoft__Json__JsonConvert->vtable).Equals.methodPtr & 0x2000000) != 0)
     && ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_started == 0)) {
    func_?(TypeInfo__Newtonsoft__Json__JsonConvert);
  }
  pOVar1 = JsonConvert_DeserializeObject_4(value,type,settings,(MethodInfo *)0x0);
  pIVar2 = method->parameters[1];
  if ((pIVar2[0x17].type & 1) == 0) {
    func_?();
  }
  if (pOVar1 == (Object *)0x0) {
    func_?();
  }
  else if ((pOVar1->klass->_0).element_class == pIVar2[4].data.dummy) {
    pbVar3 = (bool *)func_?();
    return (WebAdManager_JSONRewardedAdSuccessful)*pbVar3;
  }
  func_?();
  pcVar4 = (code *)swi(3);
  bVar5 = (*pcVar4)();
  return (WebAdManager_JSONRewardedAdSuccessful)bVar5;
}


/* Int32 DeserializeObject[Int32](String, JsonSerializerSettings) */

int32_t Assembly-CSharp.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_46
                  (String *value,JsonSerializerSettings *settings,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  handle.value = *method->parameters;
  if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__Type->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__Type);
  }
  type = mscorlib.dll::System::Type::Type_GetTypeFromHandle(handle,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__Newtonsoft__Json__JsonConvert->vtable).Equals.methodPtr & 0x2000000) != 0)
     && ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_started == 0)) {
    func_?(TypeInfo__Newtonsoft__Json__JsonConvert);
  }
  pOVar1 = JsonConvert_DeserializeObject_4(value,type,settings,(MethodInfo *)0x0);
  pIVar2 = method->parameters[1];
  if ((pIVar2[0x17].type & 1) == 0) {
    func_?();
  }
  if (pOVar1 == (Object *)0x0) {
    func_?();
  }
  else if ((pOVar1->klass->_0).element_class == pIVar2[4].data.dummy) {
    piVar3 = (int32_t *)func_?();
    return *piVar3;
  }
  func_?();
  pcVar4 = (code *)swi(3);
  iVar5 = (*pcVar4)();
  return iVar5;
}


/* Object DeserializeObject[Object](String, JsonConverter[]) */

Object * Assembly-CSharp.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_6
                   (String *value,JsonConverter__Array *converters,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  handle.value = *method->parameters;
  if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__Type->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__Type);
  }
  type = mscorlib.dll::System::Type::Type_GetTypeFromHandle(handle,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__Newtonsoft__Json__JsonConvert->vtable).Equals.methodPtr & 0x2000000) != 0)
     && ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_started == 0)) {
    func_?(TypeInfo__Newtonsoft__Json__JsonConvert);
  }
  pOVar1 = JsonConvert_DeserializeObject_3(value,type,converters,(MethodInfo *)0x0);
  if ((method->parameters[1][0x17].type & 1) == 0) {
    func_?();
  }
  if (pOVar1 == (Object *)0x0) {
    return (Object *)0x0;
  }
  pOVar1 = (Object *)func_?();
  if (pOVar1 != (Object *)0x0) {
    return pOVar1;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  pOVar1 = (Object *)(*pcVar2)();
  return pOVar1;
}


/* Object DeserializeObject[Object](String, JsonSerializerSettings) */

Object * Assembly-CSharp.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_7
                   (String *value,JsonSerializerSettings *settings,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  handle.value = *method->parameters;
  if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__Type->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__Type);
  }
  type = mscorlib.dll::System::Type::Type_GetTypeFromHandle(handle,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__Newtonsoft__Json__JsonConvert->vtable).Equals.methodPtr & 0x2000000) != 0)
     && ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_started == 0)) {
    func_?(TypeInfo__Newtonsoft__Json__JsonConvert);
  }
  pOVar1 = JsonConvert_DeserializeObject_4(value,type,settings,(MethodInfo *)0x0);
  if ((method->parameters[1][0x17].type & 1) == 0) {
    func_?();
  }
  if (pOVar1 == (Object *)0x0) {
    return (Object *)0x0;
  }
  pOVar1 = (Object *)func_?();
  if (pOVar1 != (Object *)0x0) {
    return pOVar1;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  pOVar1 = (Object *)(*pcVar2)();
  return pOVar1;
}


/* String EnsureDecimalPlace(Double, String) */

String * Assembly-CSharp.dll::Newtonsoft::Json::JsonConvert::JsonConvert_EnsureDecimalPlace
                   (double value,String *text,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  bVar1 = mscorlib.dll::System::Double::Double_IsNaN(value,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    bVar1 = mscorlib.dll::System::Double::Double_IsInfinity(value,(MethodInfo *)0x0);
    if (bVar1 == 0) {
      if (text == (String *)0x0) {
        func_?();
        pcVar2 = (code *)swi(3);
        pSVar3 = (String *)(*pcVar2)();
        return pSVar3;
      }
      iVar4 = mscorlib.dll::System::String::String_IndexOf_2(text,0x2e,(MethodInfo *)0x0);
      if (iVar4 == -1) {
        iVar4 = mscorlib.dll::System::String::String_IndexOf_2(text,0x45,(MethodInfo *)0x0);
        if (iVar4 == -1) {
          if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__System__String->_1).cctor_started == 0)) {
            func_?();
          }
          pSVar3 = mscorlib.dll::System::String::String_Concat_2
                             (text,StringLiteral__0,(MethodInfo *)0x0);
          return pSVar3;
        }
      }
    }
  }
  return text;
}


/* String EnsureDecimalPlace(String) */

String * Assembly-CSharp.dll::Newtonsoft::Json::JsonConvert::JsonConvert_EnsureDecimalPlace_1
                   (String *text,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (text != (String *)0x0) {
    iVar1 = mscorlib.dll::System::String::String_IndexOf_2(text,0x2e,(MethodInfo *)0x0);
    if (iVar1 == -1) {
      if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__String->_1).cctor_started == 0)) {
        func_?();
      }
      pSVar2 = mscorlib.dll::System::String::String_Concat_2
                         (text,StringLiteral__0,(MethodInfo *)0x0);
      return pSVar2;
    }
    return text;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  pSVar2 = (String *)(*pcVar3)();
  return pSVar2;
}


/* TimeSpan GetUtcOffset(DateTime) */

TimeSpan Assembly-CSharp.dll::Newtonsoft::Json::JsonConvert::JsonConvert_GetUtcOffset
                   (DateTime dateTime,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__System__TimeZone->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__TimeZone->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__TimeZone);
  }
  pTVar1 = mscorlib.dll::System::TimeZone::TimeZone_get_CurrentTimeZone((MethodInfo *)0x0);
  if (pTVar1 != (TimeZone *)0x0) {
    TVar2._ticks = (*(code *)(pTVar1->klass->vtable).__unknown_1.method)
                             (pTVar1,(undefined4)dateTime.ticks._ticks,dateTime.ticks._ticks._4_4_,
                              dateTime.kind,dateTime._12_4_,
                              (pTVar1->klass->vtable).IsDaylightSavingTime.methodPtr);
    return (TimeSpan)TVar2._ticks;
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  TVar2._ticks = (*pcVar3)();
  return (TimeSpan)TVar2._ticks;
}


/* Boolean IsJsonPrimitive(Object) */

bool Assembly-CSharp.dll::Newtonsoft::Json::JsonConvert::JsonConvert_IsJsonPrimitive
               (Object *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (value != (Object *)0x0) {
    iVar1 = func_?(value,TypeInfo__System__IConvertible);
    if (iVar1 != 0) {
      uVar2 = func_?(0,TypeInfo__System__IConvertible,iVar1);
      if ((((uint)(TypeInfo__Newtonsoft__Json__JsonConvert->vtable).Equals.methodPtr & 0x2000000) !=
           0) && ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_started == 0)) {
        func_?(TypeInfo__Newtonsoft__Json__JsonConvert);
      }
      switch(uVar2) {
      case 2:
      case 3:
      case 4:
      case 5:
      case 6:
      case 7:
      case 8:
      case 9:
      case 10:
      case 0xb:
      case 0xc:
      case 0xd:
      case 0xe:
      case 0xf:
      case 0x10:
      case 0x12:
        goto code_?;
      default:
        return 0;
      }
    }
    pOVar3 = (Object *)0x0;
    if ((DateTimeOffset__Class *)value->klass == TypeInfo__System__DateTimeOffset) {
      pOVar3 = value;
    }
    if (((pOVar3 == (Object *)0x0) &&
        (iVar1 = func_?(value,TypeInfo__System__Byte), iVar1 == 0)) &&
       (iVar1 = func_?(value,TypeInfo__System__Uri), iVar1 == 0)) {
      pOVar3 = (Object *)0x0;
      if ((Guid__Class *)value->klass == (Guid__Class *)TypeInfo__System__TimeSpan) {
        pOVar3 = value;
      }
      if (pOVar3 == (Object *)0x0) {
        pOVar3 = (Object *)0x0;
        if ((Guid__Class *)value->klass == TypeInfo__System__Guid) {
          pOVar3 = value;
        }
        if (pOVar3 == (Object *)0x0) {
          return 0;
        }
      }
    }
  }
code_?:
  return 1;
}


/* Boolean IsJsonPrimitiveType(Type) */

bool Assembly-CSharp.dll::Newtonsoft::Json::JsonConvert::JsonConvert_IsJsonPrimitiveType
               (Type *type,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  bVar1 = Json::Utilities::ReflectionUtils::ReflectionUtils_IsNullableType(type,(MethodInfo *)0x0);
  if (bVar1 != 0) {
    type = mscorlib.dll::System::Nullable::Nullable_GetUnderlyingType(type,(MethodInfo *)0x0);
  }
  pIVar2 = TypeRef__System__DateTimeOffset;
  if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__Type->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__Type);
  }
  pTVar3 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                     ((RuntimeTypeHandle)pIVar2,(MethodInfo *)0x0);
  pIVar2 = TypeRef__System__Byte;
  if (type != pTVar3) {
    if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__Type->_1).cctor_started == 0)) {
      func_?();
    }
    pTVar3 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                       ((RuntimeTypeHandle)pIVar2,(MethodInfo *)0x0);
    pIVar2 = TypeRef__System__Uri;
    if (type != pTVar3) {
      if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__Type->_1).cctor_started == 0)) {
        func_?();
      }
      pTVar3 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                         ((RuntimeTypeHandle)pIVar2,(MethodInfo *)0x0);
      pIVar2 = TypeRef__System__TimeSpan;
      if (type != pTVar3) {
        if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__System__Type->_1).cctor_started == 0)) {
          func_?();
        }
        pTVar3 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                           ((RuntimeTypeHandle)pIVar2,(MethodInfo *)0x0);
        pIVar2 = TypeRef__System__Guid;
        if (type != pTVar3) {
          if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__System__Type->_1).cctor_started == 0)) {
            func_?();
          }
          pTVar3 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                             ((RuntimeTypeHandle)pIVar2,(MethodInfo *)0x0);
          if (type != pTVar3) {
            if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
               ((TypeInfo__System__Type->_1).cctor_started == 0)) {
              func_?();
            }
            typeCode = mscorlib.dll::System::Type::Type_GetTypeCode(type,(MethodInfo *)0x0);
            if ((((uint)(TypeInfo__Newtonsoft__Json__JsonConvert->vtable).Equals.methodPtr &
                 0x2000000) != 0) &&
               ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_started == 0)) {
              func_?();
            }
            bVar1 = JsonConvert_IsJsonPrimitiveTypeCode(typeCode,(MethodInfo *)0x0);
            return bVar1;
          }
        }
      }
    }
  }
  return 1;
}


/* Boolean IsJsonPrimitiveTypeCode(TypeCode) */

bool Assembly-CSharp.dll::Newtonsoft::Json::JsonConvert::JsonConvert_IsJsonPrimitiveTypeCode
               (TypeCode__Enum typeCode,MethodInfo *method)

{
  switch(typeCode) {
  case TypeCode__Enum_DBNull:
  case TypeCode__Enum_Boolean:
  case TypeCode__Enum_Char:
  case TypeCode__Enum_SByte:
  case TypeCode__Enum_Byte:
  case TypeCode__Enum_Int16:
  case TypeCode__Enum_UInt16:
  case TypeCode__Enum_Int32:
  case TypeCode__Enum_UInt32:
  case TypeCode__Enum_Int64:
  case TypeCode__Enum_UInt64:
  case TypeCode__Enum_Single:
  case TypeCode__Enum_Double:
  case TypeCode__Enum_Decimal:
  case TypeCode__Enum_DateTime:
  case TypeCode__Enum_String:
    return 1;
  default:
    return 0;
  }
}


/* Void PopulateObject(String, Object) */

void Assembly-CSharp.dll::Newtonsoft::Json::JsonConvert::JsonConvert_PopulateObject
               (String *value,Object *target,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__Newtonsoft__Json__JsonConvert->vtable).Equals.methodPtr & 0x2000000) != 0)
     && ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_started == 0)) {
    func_?(TypeInfo__Newtonsoft__Json__JsonConvert);
  }
  JsonConvert_PopulateObject_1(value,target,(JsonSerializerSettings *)0x0,(MethodInfo *)0x0);
  return;
}


/* Void PopulateObject(String, Object, JsonSerializerSettings) */

void Assembly-CSharp.dll::Newtonsoft::Json::JsonConvert::JsonConvert_PopulateObject_1
               (String *value,Object *target,JsonSerializerSettings *settings,MethodInfo *method)

{
  *unaff_FS_OFFSET = &stack0xfffffff0;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  func_?();
  this = (StringReader *)func_?(TypeInfo__System__IO__StringReader);
  mscorlib.dll::System::IO::StringReader::StringReader__ctor(this,value,(MethodInfo *)0x0);
  pJVar1 = JsonSerializer::JsonSerializer_Create(settings,(MethodInfo *)0x0);
  this_00 = (IDisposable__Class *)func_?(TypeInfo__Newtonsoft__Json__JsonTextReader);
  JsonTextReader::JsonTextReader__ctor
            ((JsonTextReader *)this_00,(TextReader *)this,(MethodInfo *)0x0);
  if ((pJVar1 != (JsonSerializer *)0x0) &&
     ((*(code *)(pJVar1->klass->vtable).PopulateInternal.method)(),
     this_00 != (IDisposable__Class *)0x0)) {
    pIVar2 = this_00;
    cVar3 = (*(code *)(this_00->_0).image[6].exportedTypeCount)();
    if ((cVar3 == '\0') ||
       (pIVar2 = this_00, iVar4 = (*(code *)(this_00->_0).image[5].nameToClassHashTable)(),
       iVar4 == 5)) {
      pJVar1->klass = (JsonSerializer__Class *)0x51;
      if (this_00 != (IDisposable__Class *)0x0) {
        pIVar2 = TypeInfo__System__IDisposable;
        func_?();
      }
      *unaff_FS_OFFSET = pIVar2;
      return;
    }
    this_01 = (JsonSchemaException *)func_?();
    Json::Schema::JsonSchemaException::JsonSchemaException__ctor_1
              (this_01,StringLiteral_Additional_text_found_in_JSON_st,(MethodInfo *)0x0);
    func_?();
  }
  func_?();
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* String SerializeObject(Object) */

String * Assembly-CSharp.dll::Newtonsoft::Json::JsonConvert::JsonConvert_SerializeObject
                   (Object *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__Newtonsoft__Json__JsonConvert->vtable).Equals.methodPtr & 0x2000000) != 0)
     && ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_started == 0)) {
    func_?(TypeInfo__Newtonsoft__Json__JsonConvert);
  }
  pSVar1 = JsonConvert_SerializeObject_4
                     (value,Formatting__Enum_None,(JsonSerializerSettings *)0x0,(MethodInfo *)0x0);
  return pSVar1;
}


/* String SerializeObject(Object, Formatting) */

String * Assembly-CSharp.dll::Newtonsoft::Json::JsonConvert::JsonConvert_SerializeObject_1
                   (Object *value,Formatting__Enum formatting,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__Newtonsoft__Json__JsonConvert->vtable).Equals.methodPtr & 0x2000000) != 0)
     && ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_started == 0)) {
    func_?(TypeInfo__Newtonsoft__Json__JsonConvert);
  }
  pSVar1 = JsonConvert_SerializeObject_4
                     (value,formatting,(JsonSerializerSettings *)0x0,(MethodInfo *)0x0);
  return pSVar1;
}


/* String SerializeObject(Object, JsonConverter[]) */

String * Assembly-CSharp.dll::Newtonsoft::Json::JsonConvert::JsonConvert_SerializeObject_2
                   (Object *value,JsonConverter__Array *converters,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__Newtonsoft__Json__JsonConvert->vtable).Equals.methodPtr & 0x2000000) != 0)
     && ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_started == 0)) {
    func_?(TypeInfo__Newtonsoft__Json__JsonConvert);
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((converters == (JsonConverter__Array *)0x0) || ((int)converters->max_length < 1)) {
    this = (JsonSerializerSettings *)0x0;
  }
  else {
    this = (JsonSerializerSettings *)
           func_?(TypeInfo__Newtonsoft__Json__JsonSerializerSettings);
    JsonSerializerSettings::JsonSerializerSettings__ctor(this,(MethodInfo *)0x0);
    if (this == (JsonSerializerSettings *)0x0) {
      func_?(0);
      pcVar1 = (code *)swi(3);
      pSVar2 = (String *)(*pcVar1)();
      return pSVar2;
    }
    (this->fields)._Converters_k__BackingField =
         (IList_1_Newtonsoft_Json_JsonConverter_ *)converters;
  }
  if ((((uint)(TypeInfo__Newtonsoft__Json__JsonConvert->vtable).Equals.methodPtr & 0x2000000) != 0)
     && ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_started == 0)) {
    func_?(TypeInfo__Newtonsoft__Json__JsonConvert);
  }
  pSVar2 = JsonConvert_SerializeObject_4(value,Formatting__Enum_None,this,(MethodInfo *)0x0);
  return pSVar2;
}


/* String SerializeObject(Object, Formatting, JsonConverter[]) */

String * Assembly-CSharp.dll::Newtonsoft::Json::JsonConvert::JsonConvert_SerializeObject_3
                   (Object *value,Formatting__Enum formatting,JsonConverter__Array *converters,
                   MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((converters == (JsonConverter__Array *)0x0) || ((int)converters->max_length < 1)) {
    this = (JsonSerializerSettings *)0x0;
  }
  else {
    this = (JsonSerializerSettings *)
           func_?(TypeInfo__Newtonsoft__Json__JsonSerializerSettings);
    JsonSerializerSettings::JsonSerializerSettings__ctor(this,(MethodInfo *)0x0);
    if (this == (JsonSerializerSettings *)0x0) {
      func_?(0);
      pcVar1 = (code *)swi(3);
      pSVar2 = (String *)(*pcVar1)();
      return pSVar2;
    }
    (this->fields)._Converters_k__BackingField =
         (IList_1_Newtonsoft_Json_JsonConverter_ *)converters;
  }
  if ((((uint)(TypeInfo__Newtonsoft__Json__JsonConvert->vtable).Equals.methodPtr & 0x2000000) != 0)
     && ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_started == 0)) {
    func_?(TypeInfo__Newtonsoft__Json__JsonConvert);
  }
  pSVar2 = JsonConvert_SerializeObject_4(value,formatting,this,(MethodInfo *)0x0);
  return pSVar2;
}


/* String SerializeObject(Object, Formatting, JsonSerializerSettings) */

String * Assembly-CSharp.dll::Newtonsoft::Json::JsonConvert::JsonConvert_SerializeObject_4
                   (Object *value,Formatting__Enum formatting,JsonSerializerSettings *settings,
                   MethodInfo *method)

{
  puStack_1 = (undefined *)*unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &puStack_1;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  func_?();
  pJVar2 = JsonSerializer::JsonSerializer_Create(settings,(MethodInfo *)0x0);
  this = (StringBuilder *)func_?(TypeInfo__System__Text__StringBuilder);
  mscorlib.dll::System::Text::StringBuilder::StringBuilder__ctor_3(this,0x80,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr & 0x2000000)
       != 0) && ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
    func_?();
  }
  formatProvider =
       mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                 ((MethodInfo *)0x0);
  this_00 = (StringWriter *)func_?();
  mscorlib.dll::System::IO::StringWriter::StringWriter__ctor_3
            (this_00,this,(IFormatProvider *)formatProvider,(MethodInfo *)0x0);
  this_01 = (JsonTextWriter *)func_?();
  JsonTextWriter::JsonTextWriter__ctor(this_01,(TextWriter *)this_00,(MethodInfo *)0x0);
  if (this_01 != (JsonTextWriter *)0x0) {
    UnityEngine.UI.dll::UnityEngine::UI::ObjectPool`1[System::Object]::
    ObjectPool_1_System_Object__set_countAll
              ((ObjectPool_1_System_Object_ *)this_01,formatting,(MethodInfo *)0x0);
    if (pJVar2 != (JsonSerializer *)0x0) {
      (*(code *)(pJVar2->klass->vtable).SerializeInternal.method)();
      if (this_01 != (JsonTextWriter *)0x0) {
        func_?();
      }
      if (this_00 != (StringWriter *)0x0) {
        pSVar3 = (String *)(*(code *)(this_00->klass->vtable).ToString.method)();
        *unaff_FS_OFFSET = puStack_1;
        return pSVar3;
      }
    }
  }
  func_?();
  func_?();
  pcVar4 = (code *)swi(3);
  pSVar3 = (String *)(*pcVar4)();
  return pSVar3;
}


/* String ToString(DateTime) */

String * Assembly-CSharp.dll::Newtonsoft::Json::JsonConvert::JsonConvert_ToString
                   (DateTime value,MethodInfo *method)

{
  puStack_1 = (undefined *)0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = (MethodInfo *)&stack0xffffffbc;
  func_?();
  writer = Json::Utilities::StringUtils::StringUtils_CreateStringWriter(0x40,(MethodInfo *)0x0);
  puStack_1 = (undefined *)0x0;
  pcVar4 = (char *)(StringWriter *)value.ticks._ticks;
  pIVar5 = value.ticks._ticks._4_4_;
  pIVar6 = (Il2CppType *)value.kind;
  ppIVar7 = (Il2CppType **)value._12_4_;
  if ((((uint)(TypeInfo__Newtonsoft__Json__JsonConvert->vtable).Equals.methodPtr & 0x2000000) != 0)
     && ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_started == 0)) {
    func_?();
  }
  dateTime.ticks._ticks._4_4_ = pIVar5;
  dateTime.ticks._ticks._0_4_ = pcVar4;
  dateTime.kind = (int32_t)pIVar6;
  dateTime._12_4_ = ppIVar7;
  TVar8 = JsonConvert_GetUtcOffset(dateTime,(MethodInfo *)0x0);
  this = (Collection_1_VoxelHit_ *)&value;
  ppIVar7 = (Il2CppType **)0x0;
  pIVar5 = (Il2CppClass *)&UNK_?;
  pIVar9 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
           Collection_1_VoxelHit__get_Items(this,(MethodInfo *)0x0);
  value_00.ticks._ticks._4_4_ = this;
  value_00.ticks._ticks._0_4_ = pIVar5;
  value_00.kind = (int32_t)ppIVar7;
  value_00._12_4_ = (Il2CppType *)TVar8._ticks;
  offset._ticks._4_4_ = pIVar9;
  offset._ticks._0_4_ = (int)((ulonglong)TVar8._ticks >> 0x20);
  JsonConvert_WriteDateTimeString_1
            ((TextWriter *)writer,value_00,offset,DateTimeKind__Enum_Unspecified,method_00);
  if (writer != (StringWriter *)0x0) {
    value.ticks._ticks._0_4_ = (StringWriter *)(writer->klass->vtable).Dispose.methodPtr;
    pSVar10 = (String *)(*(code *)(writer->klass->vtable).ToString.method)();
    method_00->methodPointer = (Il2CppMethodPointer)0x35;
    if (writer != (StringWriter *)0x0) {
      value.ticks._ticks._0_4_ = writer;
      func_?();
    }
    *unaff_FS_OFFSET = uStack_3;
    return pSVar10;
  }
  value.ticks._ticks._0_4_ = (StringWriter *)0x0;
  func_?();
  value.ticks._ticks._0_4_ = (StringWriter *)0x0;
  func_?();
  pcVar11 = (code *)swi(3);
  pSVar10 = (String *)(*pcVar11)();
  return pSVar10;
}


/* String ToString(DateTimeOffset) */

String * Assembly-CSharp.dll::Newtonsoft::Json::JsonConvert::JsonConvert_ToString_1
                   (DateTimeOffset value,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  pSStack_3 = (StringWriter *)*unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &pSStack_3;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  func_?();
  writer = Json::Utilities::StringUtils::StringUtils_CreateStringWriter(0x40,(MethodInfo *)0x0);
  uStack_1 = 0;
  iVar4 = func_?(&stack0xffffffc8,&value,0);
  method_00 = *(MethodInfo **)(iVar4 + 4);
  uVar5 = *(undefined4 *)(iVar4 + 8);
  uVar6 = *(undefined4 *)(iVar4 + 0xc);
  CVar7 = mscorlib.dll::System::Array+ArrayReadOnlyList`1[T]+<GetEnumerator>c__Iterator0[System::
          Reflection::CustomAttributeTypedArgument]::
          Array_ArrayReadOnlyList_1_T_GetEnumerator_c_Iterator0_System_Reflection_CustomAttributeTypedArgument__System_Collections_Generic_IEnumerator_T__get_Current
                    ((Array_ArrayReadOnlyList_1_T_GetEnumerator_c_Iterator0_System_Reflection_CustomAttributeTypedArgument_
                      *)&value,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__Newtonsoft__Json__JsonConvert->vtable).Equals.methodPtr & 0x2000000) != 0)
     && ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_started == 0)) {
    func_?();
  }
  value_00.ticks._ticks._4_4_ = uVar5;
  value_00.ticks._ticks._0_4_ = method_00;
  value_00.kind = uVar6;
  value_00._12_4_ = CVar7.argumentType;
  offset._ticks._4_4_ = 2;
  offset._ticks._0_4_ = CVar7.value;
  JsonConvert_WriteDateTimeString_1
            ((TextWriter *)writer,value_00,offset,DateTimeKind__Enum_Unspecified,method_00);
  if (writer != (StringWriter *)0x0) {
    pSStack_3 = (StringWriter *)(writer->klass->vtable).Dispose.methodPtr;
    pSStack_8 = (String *)(*(code *)(writer->klass->vtable).ToString.method)();
    uStack_1 = 0xffffffff;
    if (writer != (StringWriter *)0x0) {
      pSStack_3 = writer;
      func_?();
    }
    *unaff_FS_OFFSET = pSStack_3;
    return pSStack_8;
  }
  pSStack_3 = (StringWriter *)0x0;
  func_?();
  pSStack_3 = (StringWriter *)0x0;
  func_?();
  pcVar9 = (code *)swi(3);
  pSVar10 = (String *)(*pcVar9)();
  return pSVar10;
}


/* String ToString(UInt64) */

String * Assembly-CSharp.dll::Newtonsoft::Json::JsonConvert::JsonConvert_ToString_10
                   (uint64_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr & 0x2000000)
       != 0) && ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__Globalization__CultureInfo);
  }
  pCVar1 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                     ((MethodInfo *)0x0);
  pSVar2 = (String *)func_?(&value,0,pCVar1,0);
  return pSVar2;
}


/* String ToString(Single) */

String * Assembly-CSharp.dll::Newtonsoft::Json::JsonConvert::JsonConvert_ToString_11
                   (float value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  fVar1 = value;
  if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr & 0x2000000)
       != 0) && ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__Globalization__CultureInfo);
  }
  pCVar2 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                     ((MethodInfo *)0x0);
  pSVar3 = (String *)func_?(&value,StringLiteral_R,pCVar2,0);
  if ((((uint)(TypeInfo__Newtonsoft__Json__JsonConvert->vtable).Equals.methodPtr & 0x2000000) != 0)
     && ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_started == 0)) {
    func_?(TypeInfo__Newtonsoft__Json__JsonConvert);
  }
  pSVar3 = JsonConvert_EnsureDecimalPlace((double)fVar1,pSVar3,(MethodInfo *)0x0);
  return pSVar3;
}


/* String ToString(Double) */

String * Assembly-CSharp.dll::Newtonsoft::Json::JsonConvert::JsonConvert_ToString_12
                   (double value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  value_00 = value;
  if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr & 0x2000000)
       != 0) && ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__Globalization__CultureInfo);
  }
  pCVar1 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                     ((MethodInfo *)0x0);
  pSVar2 = (String *)func_?(&value,StringLiteral_R,pCVar1,0);
  if ((((uint)(TypeInfo__Newtonsoft__Json__JsonConvert->vtable).Equals.methodPtr & 0x2000000) != 0)
     && ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_started == 0)) {
    func_?(TypeInfo__Newtonsoft__Json__JsonConvert);
  }
  pSVar2 = JsonConvert_EnsureDecimalPlace(value_00,pSVar2,(MethodInfo *)0x0);
  return pSVar2;
}


/* String ToString(Byte) */

String * Assembly-CSharp.dll::Newtonsoft::Json::JsonConvert::JsonConvert_ToString_13
                   (uint8_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr & 0x2000000)
       != 0) && ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__Globalization__CultureInfo);
  }
  pCVar1 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                     ((MethodInfo *)0x0);
  pSVar2 = (String *)func_?(&value,0,pCVar1,0);
  return pSVar2;
}


/* String ToString(SByte) */

String * Assembly-CSharp.dll::Newtonsoft::Json::JsonConvert::JsonConvert_ToString_14
                   (int8_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr & 0x2000000)
       != 0) && ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__Globalization__CultureInfo);
  }
  pCVar1 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                     ((MethodInfo *)0x0);
  pSVar2 = (String *)func_?(&value,0,pCVar1,0);
  return pSVar2;
}


/* String ToString(Decimal) */

String * Assembly-CSharp.dll::Newtonsoft::Json::JsonConvert::JsonConvert_ToString_15
                   (Decimal value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr & 0x2000000)
       != 0) && ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__Globalization__CultureInfo);
  }
  pCVar1 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                     ((MethodInfo *)0x0);
  pSVar2 = (String *)func_?(&value,0,pCVar1,0);
  if ((((uint)(TypeInfo__Newtonsoft__Json__JsonConvert->vtable).Equals.methodPtr & 0x2000000) != 0)
     && ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_started == 0)) {
    func_?(TypeInfo__Newtonsoft__Json__JsonConvert);
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (pSVar2 != (String *)0x0) {
    iVar3 = mscorlib.dll::System::String::String_IndexOf_2(pSVar2,0x2e,(MethodInfo *)0x0);
    if (iVar3 == -1) {
      if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__String->_1).cctor_started == 0)) {
        value.flags = (uint32_t)TypeInfo__System__String;
        func_?();
      }
      value.flags = 0;
      pSVar2 = mscorlib.dll::System::String::String_Concat_2
                         (pSVar2,StringLiteral__0,(MethodInfo *)0x0);
    }
    return pSVar2;
  }
  func_?();
  pcVar4 = (code *)swi(3);
  pSVar2 = (String *)(*pcVar4)();
  return pSVar2;
}


/* String ToString(Guid) */

String * Assembly-CSharp.dll::Newtonsoft::Json::JsonConvert::JsonConvert_ToString_16
                   (Guid value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  uStack_1 = 0x22;
  arg0 = (Object *)func_?(TypeInfo__System__Char,&uStack_1);
  if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr & 0x2000000)
       != 0) && ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__Globalization__CultureInfo);
  }
  pCVar2 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                     ((MethodInfo *)0x0);
  arg1 = (Object *)func_?(&value,StringLiteral_D,pCVar2,0);
  uStack_3 = 0x22;
  arg2 = (Object *)func_?(TypeInfo__System__Char,&uStack_3);
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__String);
  }
  pSVar4 = mscorlib.dll::System::String::String_Concat_1(arg0,arg1,arg2,(MethodInfo *)0x0);
  return pSVar4;
}


/* String ToString(TimeSpan) */

String * Assembly-CSharp.dll::Newtonsoft::Json::JsonConvert::JsonConvert_ToString_17
                   (TimeSpan value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  uStack_1 = 0x22;
  arg0 = (Object *)func_?(TypeInfo__System__Char,&uStack_1);
  arg1 = (Object *)func_?(&value,0);
  uStack_2 = 0x22;
  arg2 = (Object *)func_?(TypeInfo__System__Char,&uStack_2);
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__String);
  }
  pSVar3 = mscorlib.dll::System::String::String_Concat_1(arg0,arg1,arg2,(MethodInfo *)0x0);
  return pSVar3;
}


/* String ToString(Uri) */

String * Assembly-CSharp.dll::Newtonsoft::Json::JsonConvert::JsonConvert_ToString_18
                   (Uri *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  uStack_1 = 0x22;
  arg0 = (Object *)func_?(TypeInfo__System__Char,&uStack_1);
  if (value != (Uri *)0x0) {
    arg1 = (Object *)
           (*(code *)(value->klass->vtable).ToString.method)
                     (value,(value->klass->vtable).
                            System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
    uStack_2 = 0x22;
    arg2 = (Object *)func_?(TypeInfo__System__Char,&uStack_2);
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__String);
    }
    pSVar3 = mscorlib.dll::System::String::String_Concat_1(arg0,arg1,arg2,(MethodInfo *)0x0);
    return pSVar3;
  }
  func_?(0);
  pcVar4 = (code *)swi(3);
  pSVar3 = (String *)(*pcVar4)();
  return pSVar3;
}


/* String ToString(String) */

String * Assembly-CSharp.dll::Newtonsoft::Json::JsonConvert::JsonConvert_ToString_19
                   (String *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__Newtonsoft__Json__JsonConvert->vtable).Equals.methodPtr & 0x2000000) != 0)
     && ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_started == 0)) {
    func_?(TypeInfo__Newtonsoft__Json__JsonConvert);
  }
  pSVar1 = Json::Utilities::JavaScriptUtils::JavaScriptUtils_ToEscapedJavaScriptString_1
                     (value,0x22,1,(MethodInfo *)0x0);
  return pSVar1;
}


/* String ToString(Boolean) */

String * Assembly-CSharp.dll::Newtonsoft::Json::JsonConvert::JsonConvert_ToString_2
                   (bool value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (value == 0) {
    if ((((uint)(TypeInfo__Newtonsoft__Json__JsonConvert->vtable).Equals.methodPtr & 0x2000000) != 0
        ) && ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_started == 0)) {
      func_?(TypeInfo__Newtonsoft__Json__JsonConvert);
    }
    return TypeInfo__Newtonsoft__Json__JsonConvert->static_fields->False;
  }
  if ((((uint)(TypeInfo__Newtonsoft__Json__JsonConvert->vtable).Equals.methodPtr & 0x2000000) != 0)
     && ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_started == 0)) {
    func_?(TypeInfo__Newtonsoft__Json__JsonConvert);
  }
  return TypeInfo__Newtonsoft__Json__JsonConvert->static_fields->True;
}


/* String ToString(String, Char) */

String * Assembly-CSharp.dll::Newtonsoft::Json::JsonConvert::JsonConvert_ToString_20
                   (String *value,uint16_t delimter,MethodInfo *method)

{
  pSVar1 = Json::Utilities::JavaScriptUtils::JavaScriptUtils_ToEscapedJavaScriptString_1
                     (value,delimter,1,(MethodInfo *)0x0);
  return pSVar1;
}


/* String ToString(Object) */

String * Assembly-CSharp.dll::Newtonsoft::Json::JsonConvert::JsonConvert_ToString_21
                   (Object *value,MethodInfo *method)

{
  byte bVar1;
  ushort uVar2;
  DateTimeOffset__Class *pDVar3;
  DateTimeOffset value_00;
  Decimal value_01;
  DateTime value_02;
  bool value_03;
  int8_t value_04;
  uint8_t value_05;
  int16_t value_06;
  uint16_t uVar4;
  int *piVar5;
  int iVar6;
  Object *pOVar7;
  int64_t *piVar8;
  String *pSVar9;
  Uri *value_07;
  Guid *pGVar10;
  undefined1 (*pauVar11) [20];
  undefined4 uVar12;
  int32_t value_08;
  uint32_t value_09;
  undefined4 *puVar13;
  CultureInfo *pCVar14;
  Object__Array *args;
  Type *pTVar15;
  ArgumentException *this;
  ushort uVar16;
  byte bVar17;
  byte *extraout_ECX;
  char *extraout_EDX;
  Uri__Class *pUVar18;
  float10 fVar19;
  int64_t value_10;
  uint64_t value_11;
  undefined1 uVar20;
  undefined1 uVar21;
  undefined2 uVar22;
  undefined4 uStack_23;
  undefined *puStack_24;
  undefined8 uStack_25;
  
  if (cRam_? == '\0') {
    func_?((char)_UNK_?);
    cRam_? = '\x01';
  }
  if (value != (Object *)0x0) {
    piVar5 = (int *)func_?(value,(char)TypeInfo__System__IConvertible);
    pUVar18 = TypeInfo__System__Uri;
    if (piVar5 == (int *)0x0) {
      pDVar3 = (DateTimeOffset__Class *)value->klass;
      pOVar7 = (Object *)0x0;
      if (pDVar3 == TypeInfo__System__DateTimeOffset) {
        pOVar7 = value;
      }
      if (pOVar7 != (Object *)0x0) {
        if ((((uint)(TypeInfo__Newtonsoft__Json__JsonConvert->vtable).Equals.methodPtr & 0x2000000)
             != 0) && ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_started == 0)) {
          func_?((char)TypeInfo__Newtonsoft__Json__JsonConvert);
        }
        pauVar11 = (undefined1 (*) [20])
                   func_?(value,(char)TypeInfo__System__DateTimeOffset);
        value_00.utc_offset._ticks._4_4_ =
             (int)((ulonglong)*(undefined8 *)(*pauVar11 + 0x10) >> 0x20);
        value_00._0_20_ = *pauVar11;
        pSVar9 = JsonConvert_ToString_1(value_00,(MethodInfo *)0x0);
        return pSVar9;
      }
      pOVar7 = (Object *)0x0;
      if (pDVar3 == (DateTimeOffset__Class *)TypeInfo__System__Guid) {
        pOVar7 = value;
      }
      if (pOVar7 != (Object *)0x0) {
        if ((((uint)(TypeInfo__Newtonsoft__Json__JsonConvert->vtable).Equals.methodPtr & 0x2000000)
             != 0) && ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_started == 0)) {
          func_?((char)TypeInfo__Newtonsoft__Json__JsonConvert);
        }
        pGVar10 = (Guid *)func_?(value,(char)TypeInfo__System__Guid);
        pSVar9 = JsonConvert_ToString_16(*pGVar10,(MethodInfo *)0x0);
        return pSVar9;
      }
      iVar6 = func_?(value,(char)TypeInfo__System__Uri);
      if (iVar6 != 0) {
        if ((((uint)(TypeInfo__Newtonsoft__Json__JsonConvert->vtable).Equals.methodPtr & 0x2000000)
             != 0) && ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_started == 0)) {
          func_?((char)TypeInfo__Newtonsoft__Json__JsonConvert);
          pUVar18 = TypeInfo__System__Uri;
        }
        uVar20 = 0;
        uVar21 = 0;
        uVar22 = 0;
        value_07 = (Uri *)func_?(value,pUVar18);
        pSVar9 = JsonConvert_ToString_18
                           (value_07,(MethodInfo *)CONCAT22(uVar22,CONCAT11(uVar21,uVar20)));
        return pSVar9;
      }
      pOVar7 = (Object *)0x0;
      if (pDVar3 == (DateTimeOffset__Class *)TypeInfo__System__TimeSpan) {
        pOVar7 = value;
      }
      if (pOVar7 != (Object *)0x0) {
        if ((((uint)(TypeInfo__Newtonsoft__Json__JsonConvert->vtable).Equals.methodPtr & 0x2000000)
             != 0) && ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_started == 0)) {
          func_?((char)TypeInfo__Newtonsoft__Json__JsonConvert);
        }
        piVar8 = (int64_t *)func_?(value,(char)TypeInfo__System__TimeSpan);
        pSVar9 = JsonConvert_ToString_17((TimeSpan)*piVar8,(MethodInfo *)0x0);
        return pSVar9;
      }
    }
    else {
      uVar12 = func_?(0,TypeInfo__System__IConvertible,(char)piVar5);
      uVar20 = SUB41(TypeInfo__System__Globalization__CultureInfo,0);
      switch(uVar12) {
      case 2:
        goto code_?;
      case 3:
        if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr &
             0x2000000) != 0) &&
           ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
          func_?(uVar20);
        }
        pCVar14 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                            ((MethodInfo *)0x0);
        uVar16 = 0;
        uVar2 = *(ushort *)(*piVar5 + 0xb6);
        if (uVar2 != 0) {
          iVar6 = *(int *)(*piVar5 + 0x58);
          do {
            if (*(IConvertible__Class **)(iVar6 + (uint)uVar16 * 8) ==
                TypeInfo__System__IConvertible) {
              puVar13 = (undefined4 *)
                        (*piVar5 + (*(int *)(iVar6 + 4 + (uint)uVar16 * 8) + 0x19) * 8);
              goto code_?;
            }
            uVar16 = uVar16 + 1;
          } while (uVar16 < uVar2);
        }
        puVar13 = (undefined4 *)func_?(piVar5,(char)TypeInfo__System__IConvertible,1);
code_?:
        value_03 = (*(code *)*puVar13)(piVar5,(char)pCVar14,puVar13[1]);
        if ((((uint)(TypeInfo__Newtonsoft__Json__JsonConvert->vtable).Equals.methodPtr & 0x2000000)
             != 0) && ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_started == 0)) {
          func_?(TypeInfo__Newtonsoft__Json__JsonConvert);
        }
        pSVar9 = JsonConvert_ToString_2(value_03,(MethodInfo *)0x0);
        return pSVar9;
      case 4:
        if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr &
             0x2000000) != 0) &&
           ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
          func_?(uVar20);
        }
        pCVar14 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                            ((MethodInfo *)0x0);
        uVar16 = 0;
        uVar2 = *(ushort *)(*piVar5 + 0xb6);
        if (uVar2 != 0) {
          iVar6 = *(int *)(*piVar5 + 0x58);
          do {
            if (*(IConvertible__Class **)(iVar6 + (uint)uVar16 * 8) ==
                TypeInfo__System__IConvertible) {
              puVar13 = (undefined4 *)
                        (*piVar5 + (*(int *)(iVar6 + 4 + (uint)uVar16 * 8) + 0x1b) * 8);
              goto code_?;
            }
            uVar16 = uVar16 + 1;
          } while (uVar16 < uVar2);
        }
        puVar13 = (undefined4 *)func_?(piVar5,(char)TypeInfo__System__IConvertible,3);
code_?:
        uVar4 = (*(code *)*puVar13)(piVar5,(char)pCVar14,puVar13[1]);
        if ((((uint)(TypeInfo__Newtonsoft__Json__JsonConvert->vtable).Equals.methodPtr & 0x2000000)
             != 0) && ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_started == 0)) {
          func_?(TypeInfo__Newtonsoft__Json__JsonConvert);
        }
        pSVar9 = JsonConvert_ToString_3(uVar4,(MethodInfo *)0x0);
        return pSVar9;
      case 5:
        if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr &
             0x2000000) != 0) &&
           ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
          func_?(uVar20);
        }
        pCVar14 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                            ((MethodInfo *)0x0);
        uVar16 = 0;
        uVar2 = *(ushort *)(*piVar5 + 0xb6);
        if (uVar2 != 0) {
          iVar6 = *(int *)(*piVar5 + 0x58);
          do {
            if (*(IConvertible__Class **)(iVar6 + (uint)uVar16 * 8) ==
                TypeInfo__System__IConvertible) {
              puVar13 = (undefined4 *)
                        (*piVar5 + (*(int *)(iVar6 + 4 + (uint)uVar16 * 8) + 0x22) * 8);
              goto code_?;
            }
            uVar16 = uVar16 + 1;
          } while (uVar16 < uVar2);
        }
        puVar13 = (undefined4 *)func_?(piVar5,(char)TypeInfo__System__IConvertible,10);
code_?:
        value_04 = (*(code *)*puVar13)(piVar5,(char)pCVar14,puVar13[1]);
        if ((((uint)(TypeInfo__Newtonsoft__Json__JsonConvert->vtable).Equals.methodPtr & 0x2000000)
             != 0) && ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_started == 0)) {
          func_?(TypeInfo__Newtonsoft__Json__JsonConvert);
        }
        pSVar9 = JsonConvert_ToString_14(value_04,(MethodInfo *)0x0);
        return pSVar9;
      case 6:
        if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr &
             0x2000000) != 0) &&
           ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
          func_?(uVar20);
        }
        pCVar14 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                            ((MethodInfo *)0x0);
        uVar16 = 0;
        uVar2 = *(ushort *)(*piVar5 + 0xb6);
        if (uVar2 != 0) {
          iVar6 = *(int *)(*piVar5 + 0x58);
          do {
            if (*(IConvertible__Class **)(iVar6 + (uint)uVar16 * 8) ==
                TypeInfo__System__IConvertible) {
              puVar13 = (undefined4 *)
                        (*piVar5 + (*(int *)(iVar6 + 4 + (uint)uVar16 * 8) + 0x1a) * 8);
              goto code_?;
            }
            uVar16 = uVar16 + 1;
          } while (uVar16 < uVar2);
        }
        puVar13 = (undefined4 *)func_?(piVar5,(char)TypeInfo__System__IConvertible,2);
code_?:
        value_05 = (*(code *)*puVar13)(piVar5,(char)pCVar14,puVar13[1]);
        if ((((uint)(TypeInfo__Newtonsoft__Json__JsonConvert->vtable).Equals.methodPtr & 0x2000000)
             != 0) && ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_started == 0)) {
          func_?(TypeInfo__Newtonsoft__Json__JsonConvert);
        }
        pSVar9 = JsonConvert_ToString_13(value_05,(MethodInfo *)0x0);
        return pSVar9;
      case 7:
        if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr &
             0x2000000) != 0) &&
           ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
          func_?(uVar20);
        }
        pCVar14 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                            ((MethodInfo *)0x0);
        uVar16 = 0;
        uVar2 = *(ushort *)(*piVar5 + 0xb6);
        if (uVar2 != 0) {
          iVar6 = *(int *)(*piVar5 + 0x58);
          do {
            if (*(IConvertible__Class **)(iVar6 + (uint)uVar16 * 8) ==
                TypeInfo__System__IConvertible) {
              puVar13 = (undefined4 *)
                        (*piVar5 + (*(int *)(iVar6 + 4 + (uint)uVar16 * 8) + 0x1f) * 8);
              goto code_?;
            }
            uVar16 = uVar16 + 1;
          } while (uVar16 < uVar2);
        }
        puVar13 = (undefined4 *)func_?(piVar5,(char)TypeInfo__System__IConvertible,7);
code_?:
        value_06 = (*(code *)*puVar13)(piVar5,(char)pCVar14,puVar13[1]);
        if ((((uint)(TypeInfo__Newtonsoft__Json__JsonConvert->vtable).Equals.methodPtr & 0x2000000)
             != 0) && ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_started == 0)) {
          func_?(TypeInfo__Newtonsoft__Json__JsonConvert);
        }
        pSVar9 = JsonConvert_ToString_6(value_06,(MethodInfo *)0x0);
        return pSVar9;
      case 8:
        if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr &
             0x2000000) != 0) &&
           ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
          func_?(uVar20);
        }
        pCVar14 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                            ((MethodInfo *)0x0);
        uVar16 = 0;
        uVar2 = *(ushort *)(*piVar5 + 0xb6);
        if (uVar2 != 0) {
          iVar6 = *(int *)(*piVar5 + 0x58);
          do {
            if (*(IConvertible__Class **)(iVar6 + (uint)uVar16 * 8) ==
                TypeInfo__System__IConvertible) {
              puVar13 = (undefined4 *)
                        (*piVar5 + (*(int *)(iVar6 + 4 + (uint)uVar16 * 8) + 0x26) * 8);
              goto code_?;
            }
            uVar16 = uVar16 + 1;
          } while (uVar16 < uVar2);
        }
        puVar13 = (undefined4 *)func_?(piVar5,(char)TypeInfo__System__IConvertible,0xe);
code_?:
        uVar4 = (*(code *)*puVar13)(piVar5,(char)pCVar14,puVar13[1]);
        if ((((uint)(TypeInfo__Newtonsoft__Json__JsonConvert->vtable).Equals.methodPtr & 0x2000000)
             != 0) && ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_started == 0)) {
          func_?(TypeInfo__Newtonsoft__Json__JsonConvert);
        }
        pSVar9 = JsonConvert_ToString_7(uVar4,(MethodInfo *)0x0);
        return pSVar9;
      case 9:
        if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr &
             0x2000000) != 0) &&
           ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
          func_?(uVar20);
        }
        pCVar14 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                            ((MethodInfo *)0x0);
        uVar16 = 0;
        uVar2 = *(ushort *)(*piVar5 + 0xb6);
        if (uVar2 != 0) {
          iVar6 = *(int *)(*piVar5 + 0x58);
          do {
            if (*(IConvertible__Class **)(iVar6 + (uint)uVar16 * 8) ==
                TypeInfo__System__IConvertible) {
              puVar13 = (undefined4 *)
                        (*piVar5 + (*(int *)(iVar6 + 4 + (uint)uVar16 * 8) + 0x20) * 8);
              goto code_?;
            }
            uVar16 = uVar16 + 1;
          } while (uVar16 < uVar2);
        }
        puVar13 = (undefined4 *)func_?(piVar5,(char)TypeInfo__System__IConvertible,8);
code_?:
        value_08 = (*(code *)*puVar13)(piVar5,(char)pCVar14,puVar13[1]);
        if ((((uint)(TypeInfo__Newtonsoft__Json__JsonConvert->vtable).Equals.methodPtr & 0x2000000)
             != 0) && ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_started == 0)) {
          func_?(TypeInfo__Newtonsoft__Json__JsonConvert);
        }
        pSVar9 = JsonConvert_ToString_5(value_08,(MethodInfo *)0x0);
        return pSVar9;
      case 10:
        if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr &
             0x2000000) != 0) &&
           ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
          func_?(uVar20);
        }
        pCVar14 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                            ((MethodInfo *)0x0);
        uVar16 = 0;
        uVar2 = *(ushort *)(*piVar5 + 0xb6);
        if (uVar2 != 0) {
          iVar6 = *(int *)(*piVar5 + 0x58);
          do {
            if (*(IConvertible__Class **)(iVar6 + (uint)uVar16 * 8) ==
                TypeInfo__System__IConvertible) {
              puVar13 = (undefined4 *)
                        (*piVar5 + (*(int *)(iVar6 + 4 + (uint)uVar16 * 8) + 0x27) * 8);
              goto code_?;
            }
            uVar16 = uVar16 + 1;
          } while (uVar16 < uVar2);
        }
        puVar13 = (undefined4 *)func_?(piVar5,(char)TypeInfo__System__IConvertible,0xf);
code_?:
        value_09 = (*(code *)*puVar13)(piVar5,(char)pCVar14,puVar13[1]);
        if ((((uint)(TypeInfo__Newtonsoft__Json__JsonConvert->vtable).Equals.methodPtr & 0x2000000)
             != 0) && ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_started == 0)) {
          func_?(TypeInfo__Newtonsoft__Json__JsonConvert);
        }
        pSVar9 = JsonConvert_ToString_8(value_09,(MethodInfo *)0x0);
        return pSVar9;
      case 0xb:
        if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr &
             0x2000000) != 0) &&
           ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
          func_?(uVar20);
        }
        pCVar14 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                            ((MethodInfo *)0x0);
        uVar16 = 0;
        uVar2 = *(ushort *)(*piVar5 + 0xb6);
        if (uVar2 != 0) {
          iVar6 = *(int *)(*piVar5 + 0x58);
          do {
            if (*(IConvertible__Class **)(iVar6 + (uint)uVar16 * 8) ==
                TypeInfo__System__IConvertible) {
              puVar13 = (undefined4 *)
                        (*piVar5 + (*(int *)(iVar6 + 4 + (uint)uVar16 * 8) + 0x21) * 8);
              goto code_?;
            }
            uVar16 = uVar16 + 1;
          } while (uVar16 < uVar2);
        }
        puVar13 = (undefined4 *)func_?(piVar5,(char)TypeInfo__System__IConvertible,9);
code_?:
        value_10 = (*(code *)*puVar13)(piVar5,(char)pCVar14,puVar13[1]);
        if ((((uint)(TypeInfo__Newtonsoft__Json__JsonConvert->vtable).Equals.methodPtr & 0x2000000)
             != 0) && ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_started == 0)) {
          func_?(TypeInfo__Newtonsoft__Json__JsonConvert);
        }
        pSVar9 = JsonConvert_ToString_9(value_10,(MethodInfo *)0x0);
        return pSVar9;
      case 0xc:
        if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr &
             0x2000000) != 0) &&
           ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
          func_?(uVar20);
        }
        pCVar14 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                            ((MethodInfo *)0x0);
        uVar16 = 0;
        uVar2 = *(ushort *)(*piVar5 + 0xb6);
        if (uVar2 != 0) {
          iVar6 = *(int *)(*piVar5 + 0x58);
          do {
            if (*(IConvertible__Class **)(iVar6 + (uint)uVar16 * 8) ==
                TypeInfo__System__IConvertible) {
              puVar13 = (undefined4 *)
                        (*piVar5 + (*(int *)(iVar6 + 4 + (uint)uVar16 * 8) + 0x28) * 8);
              goto code_?;
            }
            uVar16 = uVar16 + 1;
          } while (uVar16 < uVar2);
        }
        puVar13 = (undefined4 *)func_?(piVar5,(char)TypeInfo__System__IConvertible,0x10);
code_?:
        value_11 = (*(code *)*puVar13)(piVar5,(char)pCVar14,puVar13[1]);
        if ((((uint)(TypeInfo__Newtonsoft__Json__JsonConvert->vtable).Equals.methodPtr & 0x2000000)
             != 0) && ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_started == 0)) {
          func_?(TypeInfo__Newtonsoft__Json__JsonConvert);
        }
        pSVar9 = JsonConvert_ToString_10(value_11,(MethodInfo *)0x0);
        return pSVar9;
      case 0xd:
        if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr &
             0x2000000) != 0) &&
           ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
          func_?(uVar20);
        }
        pCVar14 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                            ((MethodInfo *)0x0);
        uVar16 = 0;
        uVar2 = *(ushort *)(*piVar5 + 0xb6);
        if (uVar2 != 0) {
          iVar6 = *(int *)(*piVar5 + 0x58);
          do {
            if (*(IConvertible__Class **)(iVar6 + (uint)uVar16 * 8) ==
                TypeInfo__System__IConvertible) {
              puVar13 = (undefined4 *)
                        (*piVar5 + (*(int *)(iVar6 + 4 + (uint)uVar16 * 8) + 0x23) * 8);
              goto code_?;
            }
            uVar16 = uVar16 + 1;
          } while (uVar16 < uVar2);
        }
        puVar13 = (undefined4 *)func_?(piVar5,(char)TypeInfo__System__IConvertible,0xb);
code_?:
        fVar19 = (float10)(*(code *)*puVar13)(piVar5,(char)pCVar14,puVar13[1]);
        if ((((uint)(TypeInfo__Newtonsoft__Json__JsonConvert->vtable).Equals.methodPtr & 0x2000000)
             != 0) && ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_started == 0)) {
          func_?(TypeInfo__Newtonsoft__Json__JsonConvert);
        }
        pSVar9 = JsonConvert_ToString_11((float)fVar19,(MethodInfo *)0x0);
        return pSVar9;
      case 0xe:
        if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr &
             0x2000000) != 0) &&
           ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
          func_?(uVar20);
        }
        pCVar14 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                            ((MethodInfo *)0x0);
        uVar16 = 0;
        uVar2 = *(ushort *)(*piVar5 + 0xb6);
        if (uVar2 != 0) {
          iVar6 = *(int *)(*piVar5 + 0x58);
          do {
            if (*(IConvertible__Class **)(iVar6 + (uint)uVar16 * 8) ==
                TypeInfo__System__IConvertible) {
              puVar13 = (undefined4 *)
                        (*piVar5 + (*(int *)(iVar6 + 4 + (uint)uVar16 * 8) + 0x1e) * 8);
              goto code_?;
            }
            uVar16 = uVar16 + 1;
          } while (uVar16 < uVar2);
        }
        puVar13 = (undefined4 *)func_?(piVar5,(char)TypeInfo__System__IConvertible,6);
code_?:
        fVar19 = (float10)(*(code *)*puVar13)(piVar5,(char)pCVar14,puVar13[1]);
        uStack_25 = (double)fVar19;
        if ((((uint)(TypeInfo__Newtonsoft__Json__JsonConvert->vtable).Equals.methodPtr & 0x2000000)
             != 0) && ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_started == 0)) {
          func_?(TypeInfo__Newtonsoft__Json__JsonConvert);
        }
        pSVar9 = JsonConvert_ToString_12(uStack_25,(MethodInfo *)0x0);
        return pSVar9;
      case 0xf:
        if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr &
             0x2000000) != 0) &&
           ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
          func_?(uVar20);
        }
        pCVar14 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                            ((MethodInfo *)0x0);
        uVar16 = 0;
        uVar2 = *(ushort *)(*piVar5 + 0xb6);
        if (uVar2 != 0) {
          iVar6 = *(int *)(*piVar5 + 0x58);
          do {
            if (*(IConvertible__Class **)(iVar6 + (uint)uVar16 * 8) ==
                TypeInfo__System__IConvertible) {
              puVar13 = (undefined4 *)
                        (*piVar5 + (*(int *)(iVar6 + 4 + (uint)uVar16 * 8) + 0x1d) * 8);
              goto code_?;
            }
            uVar16 = uVar16 + 1;
          } while (uVar16 < uVar2);
        }
        puVar13 = (undefined4 *)func_?(piVar5,(char)TypeInfo__System__IConvertible,5);
code_?:
        puVar13 = (undefined4 *)(*(code *)*puVar13)(&uStack_23,piVar5,(char)pCVar14,puVar13[1]);
        uStack_23 = *puVar13;
        puStack_24 = (undefined *)puVar13[1];
        uStack_25._0_4_ = puVar13[2];
        uStack_25._4_4_ = puVar13[3];
        if ((((uint)(TypeInfo__Newtonsoft__Json__JsonConvert->vtable).Equals.methodPtr & 0x2000000)
             != 0) && ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_started == 0)) {
          func_?(TypeInfo__Newtonsoft__Json__JsonConvert);
        }
        value_01.hi = (uint32_t)puStack_24;
        value_01.flags = uStack_23;
        value_01.lo = (undefined4)uStack_25;
        value_01.mid._0_1_ = (char)uStack_25._4_4_;
        value_01.mid._1_1_ = (char)((uint)uStack_25._4_4_ >> 8);
        value_01.mid._2_2_ = (short)((uint)uStack_25._4_4_ >> 0x10);
        pSVar9 = JsonConvert_ToString_15(value_01,(MethodInfo *)0x0);
        return pSVar9;
      case 0x10:
        if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr &
             0x2000000) != 0) &&
           ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
          func_?(uVar20);
        }
        pCVar14 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                            ((MethodInfo *)0x0);
        uVar16 = 0;
        uVar2 = *(ushort *)(*piVar5 + 0xb6);
        if (uVar2 != 0) {
          iVar6 = *(int *)(*piVar5 + 0x58);
          do {
            if (*(IConvertible__Class **)(iVar6 + (uint)uVar16 * 8) ==
                TypeInfo__System__IConvertible) {
              puVar13 = (undefined4 *)
                        (*piVar5 + (*(int *)(iVar6 + 4 + (uint)uVar16 * 8) + 0x1c) * 8);
              goto code_?;
            }
            uVar16 = uVar16 + 1;
          } while (uVar16 < uVar2);
        }
        puVar13 = (undefined4 *)func_?(piVar5,(char)TypeInfo__System__IConvertible,4);
code_?:
        puVar13 = (undefined4 *)(*(code *)*puVar13)(&uStack_23,piVar5,(char)pCVar14,puVar13[1]);
        uStack_23 = *puVar13;
        puStack_24 = (undefined *)puVar13[1];
        uStack_25._0_4_ = puVar13[2];
        uStack_25._4_4_ = puVar13[3];
        if ((((uint)(TypeInfo__Newtonsoft__Json__JsonConvert->vtable).Equals.methodPtr & 0x2000000)
             != 0) && ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_started == 0)) {
          func_?(TypeInfo__Newtonsoft__Json__JsonConvert);
        }
        value_02.ticks._ticks._4_4_ = puStack_24;
        value_02.ticks._ticks._0_4_ = uStack_23;
        value_02.kind = (undefined4)uStack_25;
        value_02._12_1_ = (char)uStack_25._4_4_;
        value_02._13_1_ = (char)((uint)uStack_25._4_4_ >> 8);
        value_02._14_2_ = (short)((uint)uStack_25._4_4_ >> 0x10);
        pSVar9 = JsonConvert_ToString(value_02,(MethodInfo *)0x0);
        return pSVar9;
      case 0x12:
        if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr &
             0x2000000) != 0) &&
           ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
          func_?(uVar20);
        }
        pCVar14 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                            ((MethodInfo *)0x0);
        uVar16 = 0;
        uVar2 = *(ushort *)(*piVar5 + 0xb6);
        if (uVar2 != 0) {
          iVar6 = *(int *)(*piVar5 + 0x58);
          do {
            if (*(IConvertible__Class **)(iVar6 + (uint)uVar16 * 8) ==
                TypeInfo__System__IConvertible) {
              puVar13 = (undefined4 *)
                        (*piVar5 + (*(int *)(iVar6 + 4 + (uint)uVar16 * 8) + 0x24) * 8);
              goto code_?;
            }
            uVar16 = uVar16 + 1;
          } while (uVar16 < uVar2);
        }
        puVar13 = (undefined4 *)func_?(piVar5,(char)TypeInfo__System__IConvertible,0xc);
code_?:
        pSVar9 = (String *)(*(code *)*puVar13)(piVar5,(char)pCVar14,puVar13[1]);
        if ((((uint)(TypeInfo__Newtonsoft__Json__JsonConvert->vtable).Equals.methodPtr & 0x2000000)
             != 0) && ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_started == 0)) {
          func_?(TypeInfo__Newtonsoft__Json__JsonConvert);
        }
        pSVar9 = JsonConvert_ToString_19(pSVar9,(MethodInfo *)0x0);
        return pSVar9;
      }
    }
    if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr & 0x2000000)
         != 0) && ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
      func_?((char)TypeInfo__System__Globalization__CultureInfo);
    }
    pCVar14 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                        ((MethodInfo *)0x0);
    args = (Object__Array *)func_?(TypeInfo__System__Object,1);
    func_?(value,0);
    pTVar15 = mscorlib.dll::System::Object::Object_GetType(value,(MethodInfo *)0x0);
    func_?(args,0);
    func_?(args,pTVar15);
    func_?(0,pTVar15);
    pSVar9 = Json::Utilities::StringUtils::StringUtils_FormatWith
                       (StringLiteral_Unsupported_type___0___Use_the_J,(IFormatProvider *)pCVar14,
                        args,(MethodInfo *)0x0);
    this = (ArgumentException *)func_?(TypeInfo__System__ArgumentException);
    mscorlib.dll::System::ArgumentException::ArgumentException__ctor_1
              (this,pSVar9,(MethodInfo *)0x0);
    uStack_25 = (double)ZEXT48(this);
    func_?();
    bVar1 = *extraout_ECX;
    bVar17 = (byte)((uint)extraout_ECX >> 8);
    *extraout_ECX = *extraout_ECX + bVar17;
    *extraout_EDX = *extraout_EDX + (char)((uint)pCVar14 >> 8) + CARRY1(bVar1,bVar17);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
code_?:
  if ((((uint)(TypeInfo__Newtonsoft__Json__JsonConvert->vtable).Equals.methodPtr & 0x2000000) != 0)
     && ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_started == 0)) {
    func_?((char)TypeInfo__Newtonsoft__Json__JsonConvert);
  }
  return TypeInfo__Newtonsoft__Json__JsonConvert->static_fields->Null;
}


/* String ToString(Char) */

String * Assembly-CSharp.dll::Newtonsoft::Json::JsonConvert::JsonConvert_ToString_3
                   (uint16_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__System__Char->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__Char->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__Char);
  }
  pSVar1 = mscorlib.dll::System::Char::Char_ToString_1(value,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__Newtonsoft__Json__JsonConvert->vtable).Equals.methodPtr & 0x2000000) != 0)
     && ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_started == 0)) {
    func_?(TypeInfo__Newtonsoft__Json__JsonConvert);
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__Newtonsoft__Json__JsonConvert->vtable).Equals.methodPtr & 0x2000000) != 0)
     && ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_started == 0)) {
    func_?(TypeInfo__Newtonsoft__Json__JsonConvert);
  }
  pSVar1 = Json::Utilities::JavaScriptUtils::JavaScriptUtils_ToEscapedJavaScriptString_1
                     (pSVar1,0x22,1,(MethodInfo *)0x0);
  return pSVar1;
}


/* String ToString(Enum) */

String * Assembly-CSharp.dll::Newtonsoft::Json::JsonConvert::JsonConvert_ToString_4
                   (Enum *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (value != (Enum *)0x0) {
    pSVar1 = mscorlib.dll::System::Enum::Enum_ToString_2(value,StringLiteral_D,(MethodInfo *)0x0);
    return pSVar1;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  pSVar1 = (String *)(*pcVar2)();
  return pSVar1;
}


/* String ToString(Int32) */

String * Assembly-CSharp.dll::Newtonsoft::Json::JsonConvert::JsonConvert_ToString_5
                   (int32_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr & 0x2000000)
       != 0) && ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__Globalization__CultureInfo);
  }
  pCVar1 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                     ((MethodInfo *)0x0);
  pSVar2 = (String *)func_?(&value,0,pCVar1,0);
  return pSVar2;
}


/* String ToString(Int16) */

String * Assembly-CSharp.dll::Newtonsoft::Json::JsonConvert::JsonConvert_ToString_6
                   (int16_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr & 0x2000000)
       != 0) && ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__Globalization__CultureInfo);
  }
  pCVar1 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                     ((MethodInfo *)0x0);
  pSVar2 = (String *)func_?(&value,0,pCVar1,0);
  return pSVar2;
}


/* String ToString(UInt16) */

String * Assembly-CSharp.dll::Newtonsoft::Json::JsonConvert::JsonConvert_ToString_7
                   (uint16_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr & 0x2000000)
       != 0) && ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__Globalization__CultureInfo);
  }
  pCVar1 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                     ((MethodInfo *)0x0);
  pSVar2 = (String *)func_?(&value,0,pCVar1,0);
  return pSVar2;
}


/* String ToString(UInt32) */

String * Assembly-CSharp.dll::Newtonsoft::Json::JsonConvert::JsonConvert_ToString_8
                   (uint32_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr & 0x2000000)
       != 0) && ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__Globalization__CultureInfo);
  }
  pCVar1 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                     ((MethodInfo *)0x0);
  pSVar2 = (String *)func_?(&value,0,pCVar1,0);
  return pSVar2;
}


/* String ToString(Int64) */

String * Assembly-CSharp.dll::Newtonsoft::Json::JsonConvert::JsonConvert_ToString_9
                   (int64_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr & 0x2000000)
       != 0) && ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__Globalization__CultureInfo);
  }
  pCVar1 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                     ((MethodInfo *)0x0);
  pSVar2 = (String *)func_?(&value,0,pCVar1,0);
  return pSVar2;
}


/* Int64 ToUniversalTicks(DateTime) */

int64_t Assembly-CSharp.dll::Newtonsoft::Json::JsonConvert::JsonConvert_ToUniversalTicks
                  (DateTime dateTime,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pIVar1 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
           Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)&dateTime,(MethodInfo *)0x0);
  if (pIVar1 != (IList_1_VoxelHit_ *)0x1) {
    puVar2 = (undefined *)dateTime.ticks._ticks;
    pJVar3 = dateTime.ticks._ticks._4_4_;
    iVar4 = dateTime.kind;
    uVar5 = dateTime._12_4_;
    if ((((uint)(TypeInfo__Newtonsoft__Json__JsonConvert->vtable).Equals.methodPtr & 0x2000000) != 0
        ) && ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_started == 0)) {
      puVar2 = &UNK_?;
      pJVar3 = TypeInfo__Newtonsoft__Json__JsonConvert;
      func_?();
    }
    uVar6 = 0;
    dateTime_00.ticks._ticks._4_4_ = pJVar3;
    dateTime_00.ticks._ticks._0_4_ = puVar2;
    dateTime_00.kind = iVar4;
    dateTime_00._12_4_ = uVar5;
    uVar7 = uVar5;
    offset = JsonConvert_GetUtcOffset(dateTime_00,(MethodInfo *)0x0);
    dateTime.ticks._ticks._0_4_ = (undefined *)0x0;
    dateTime_01.ticks._ticks._4_4_ = uVar6;
    dateTime_01.ticks._ticks._0_4_ = uVar5;
    dateTime_01.kind = iVar4;
    dateTime_01._12_4_ = uVar7;
    iVar8 = JsonConvert_ToUniversalTicks_1(dateTime_01,offset,(MethodInfo *)0x0);
    return iVar8;
  }
  iVar8 = func_?(&dateTime,0);
  return iVar8;
}


/* Int64 ToUniversalTicks(DateTime, TimeSpan) */

int64_t Assembly-CSharp.dll::Newtonsoft::Json::JsonConvert::JsonConvert_ToUniversalTicks_1
                  (DateTime dateTime,TimeSpan offset,MethodInfo *method)

{
  pIVar1 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
           Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)&dateTime,(MethodInfo *)0x0);
  lVar2 = func_?(&dateTime,0);
  if (pIVar1 != (IList_1_VoxelHit_ *)0x1) {
    lVar3 = func_?(&offset,0);
    lVar2 = lVar2 - lVar3;
    if (lVar2 < 0x2bca2875f4374000) {
      if (lVar2 < 0) {
        return 0;
      }
      return lVar2;
    }
    lVar2 = 0x2bca2875f4373fff;
  }
  return lVar2;
}


/* Int64 UniversialTicksToJavaScriptTicks(Int64) */

int64_t Assembly-CSharp.dll::Newtonsoft::Json::JsonConvert::
        JsonConvert_UniversialTicksToJavaScriptTicks(int64_t universialTicks,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__Newtonsoft__Json__JsonConvert->vtable).Equals.methodPtr & 0x2000000) != 0)
     && ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_started == 0)) {
    func_?(TypeInfo__Newtonsoft__Json__JsonConvert);
  }
  piVar1 = &TypeInfo__Newtonsoft__Json__JsonConvert->static_fields->InitialJavaScriptDateTicks;
  iVar2 = func_?((uint)universialTicks - (int)*piVar1,
                          (universialTicks._4_4_ -
                          *(int *)((int)&TypeInfo__Newtonsoft__Json__JsonConvert->static_fields->
                                         InitialJavaScriptDateTicks + 4)) -
                          (uint)((uint)universialTicks < (uint)*piVar1),10000,0);
  return iVar2;
}


/* Void WriteDateTimeString(TextWriter, DateTime) */

void Assembly-CSharp.dll::Newtonsoft::Json::JsonConvert::JsonConvert_WriteDateTimeString
               (TextWriter *writer,DateTime value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  uVar1 = (undefined4)value.ticks._ticks;
  uVar2 = value.ticks._ticks._4_4_;
  iVar3 = value.kind;
  if ((((uint)(TypeInfo__Newtonsoft__Json__JsonConvert->vtable).Equals.methodPtr & 0x2000000) != 0)
     && ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_started == 0)) {
    func_?(TypeInfo__Newtonsoft__Json__JsonConvert);
  }
  dateTime.ticks._ticks._4_4_ = uVar1;
  dateTime.ticks._ticks._0_4_ = in_stack_4;
  dateTime.kind = uVar2;
  dateTime._12_4_ = iVar3;
  TVar5 = JsonConvert_GetUtcOffset(dateTime,(MethodInfo *)0x0);
  pIVar6 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
           Collection_1_VoxelHit__get_Items
                     ((Collection_1_VoxelHit_ *)&stack0x00000008,(MethodInfo *)0x0);
  value_00.ticks._ticks._4_4_ = uVar2;
  value_00.ticks._ticks._0_4_ = uVar1;
  value_00.kind = iVar3;
  value_00._12_4_ = (int)TVar5._ticks;
  offset._ticks._4_4_ = pIVar6;
  offset._ticks._0_4_ = (int)((ulonglong)TVar5._ticks >> 0x20);
  JsonConvert_WriteDateTimeString_1
            (writer,value_00,offset,DateTimeKind__Enum_Unspecified,unaff_retaddr);
  return;
}


/* Void WriteDateTimeString(TextWriter, DateTime, TimeSpan, DateTimeKind) */

void Assembly-CSharp.dll::Newtonsoft::Json::JsonConvert::JsonConvert_WriteDateTimeString_1
               (TextWriter *writer,DateTime value,TimeSpan offset,DateTimeKind__Enum kind,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__Newtonsoft__Json__JsonConvert->vtable).Equals.methodPtr & 0x2000000) != 0)
     && ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_started == 0)) {
    func_?(TypeInfo__Newtonsoft__Json__JsonConvert);
  }
  dateTime.ticks._ticks._4_4_ = (undefined4)value.ticks._ticks;
  dateTime.ticks._ticks._0_4_ = in_stack_1;
  dateTime.kind = value.ticks._ticks._4_4_;
  dateTime._12_4_ = value.kind;
  offset_00._ticks._4_4_ = (undefined4)offset._ticks;
  offset_00._ticks._0_4_ = value._12_4_;
  iVar2 = JsonConvert_ConvertDateTimeToJavaScriptTicks(dateTime,offset_00,(MethodInfo *)0x0);
  if (writer != (TextWriter *)0x0) {
    in_stack_1 = (writer->klass->vtable).Write_5.methodPtr;
    (*(code *)(writer->klass->vtable).Write_4.method)();
    (*(code *)(writer->klass->vtable).Write_3.method)
              (writer,iVar2,(writer->klass->vtable).Write_4.methodPtr);
    if ((offset._ticks._4_4_ == 2) || (offset._ticks._4_4_ == 0)) {
      in_stack_1 = (Il2CppMethodPointer)0x0;
      func_?();
      in_stack_1 = (writer->klass->vtable).Write_5.methodPtr;
      (*(code *)(writer->klass->vtable).Write_4.method)();
      uVar3 = func_?();
      if ((int)((uVar3 ^ (int)uVar3 >> 0x1f) - ((int)uVar3 >> 0x1f)) < 10) {
        in_stack_1 = (writer->klass->vtable).Write_3.methodPtr;
        (*(code *)(writer->klass->vtable).Write_2.method)();
      }
      in_stack_1 = (writer->klass->vtable).Write_3.methodPtr;
      (*(code *)(writer->klass->vtable).Write_2.method)();
      uVar3 = func_?();
      if ((int)((uVar3 ^ (int)uVar3 >> 0x1f) - ((int)uVar3 >> 0x1f)) < 10) {
        in_stack_1 = (writer->klass->vtable).Write_3.methodPtr;
        (*(code *)(writer->klass->vtable).Write_2.method)();
      }
      in_stack_1 = (writer->klass->vtable).Write_3.methodPtr;
      (*(code *)(writer->klass->vtable).Write_2.method)();
    }
    in_stack_1 = (writer->klass->vtable).Write_5.methodPtr;
    (*(code *)(writer->klass->vtable).Write_4.method)();
    return;
  }
  in_stack_1 = (Il2CppMethodPointer)0x0;
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* JsonConvert() */

void Assembly-CSharp.dll::Newtonsoft::Json::JsonConvert::JsonConvert__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  TypeInfo__Newtonsoft__Json__JsonConvert->static_fields->True = StringLiteral_true;
  TypeInfo__Newtonsoft__Json__JsonConvert->static_fields->False = StringLiteral_false;
  TypeInfo__Newtonsoft__Json__JsonConvert->static_fields->Null = StringLiteral_null;
  TypeInfo__Newtonsoft__Json__JsonConvert->static_fields->Undefined = StringLiteral_undefined;
  TypeInfo__Newtonsoft__Json__JsonConvert->static_fields->PositiveInfinity = StringLiteral_Infinity;
  TypeInfo__Newtonsoft__Json__JsonConvert->static_fields->NegativeInfinity = StringLiteral__Infinity
  ;
  TypeInfo__Newtonsoft__Json__JsonConvert->static_fields->NaN = StringLiteral_NaN;
  pJVar1 = TypeInfo__Newtonsoft__Json__JsonConvert->static_fields;
  *(undefined4 *)&pJVar1->InitialJavaScriptDateTicks = 0xf7b58000;
  *(undefined4 *)((int)&pJVar1->InitialJavaScriptDateTicks + 4) = 0x89f7ff5;
  return;
}

