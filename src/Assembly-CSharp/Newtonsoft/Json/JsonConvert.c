
/* Int64 ConvertDateTimeToJavaScriptTicks(DateTime, TimeSpan) */

int64_t Assembly-CSharp.dll::Newtonsoft::Json::JsonConvert::
        JsonConvert_ConvertDateTimeToJavaScriptTicks
                  (DateTime dateTime,TimeSpan offset,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Newtonsoft__Json__JsonConvert);
    cRam_? = '\x01';
  }
  if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__Newtonsoft__Json__JsonConvert);
  }
  iVar1 = JsonConvert_ToUniversalTicks_1(dateTime,offset,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  piVar2 = &TypeInfo__Newtonsoft__Json__JsonConvert->static_fields->InitialJavaScriptDateTicks;
  iVar1 = func_?((uint)iVar1 - (int)*piVar2,
                          ((int)((ulonglong)iVar1 >> 0x20) -
                          *(int *)((int)&TypeInfo__Newtonsoft__Json__JsonConvert->static_fields->
                                         InitialJavaScriptDateTicks + 4)) -
                          (uint)((uint)iVar1 < (uint)*piVar2));
  return iVar1;
}


/* Int64 ConvertDateTimeToJavaScriptTicks(DateTime) */

int64_t Assembly-CSharp.dll::Newtonsoft::Json::JsonConvert::
        JsonConvert_ConvertDateTimeToJavaScriptTicks_1(DateTime dateTime,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Newtonsoft__Json__JsonConvert);
    cRam_? = '\x01';
  }
  DVar1._dateData = dateTime._dateData;
  if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__Newtonsoft__Json__JsonConvert);
    DVar1._dateData = dateTime._dateData;
  }
  dateTime._dateData = DVar1._dateData;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Newtonsoft__Json__JsonConvert);
    cRam_? = '\x01';
  }
  if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__Newtonsoft__Json__JsonConvert);
  }
  dateTime._dateData = DVar1._dateData;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Newtonsoft__Json__JsonConvert);
    cRam_? = '\x01';
  }
  DVar2 = mscorlib.dll::System::DateTime::DateTime_get_Kind(&dateTime,(MethodInfo *)0x0);
  DVar1._dateData = dateTime._dateData;
  uVar3 = dateTime._dateData._4_4_;
  uVar4 = (undefined4)dateTime._dateData;
  if (DVar2 == DateTimeKind__Enum_Utc) {
    iVar5 = mscorlib.dll::System::DateTime::DateTime_get_Ticks(&dateTime,(MethodInfo *)0x0);
  }
  else {
    if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__Newtonsoft__Json__JsonConvert);
    }
    pTVar6 = mscorlib.dll::System::TimeZone::TimeZone_get_CurrentTimeZone((MethodInfo *)0x0);
    if (pTVar6 == (TimeZone *)0x0) {
      func_?();
      pcVar7 = (code *)swi(3);
      iVar5 = (*pcVar7)();
      return iVar5;
    }
    offset._ticks =
         (*(pTVar6->klass->vtable).__unknown.methodPtr)
                   (pTVar6,uVar4,uVar3,(pTVar6->klass->vtable).__unknown.method);
    iVar5 = JsonConvert_ToUniversalTicks_1(DVar1,offset,(MethodInfo *)0x0);
  }
  if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  piVar8 = &TypeInfo__Newtonsoft__Json__JsonConvert->static_fields->InitialJavaScriptDateTicks;
  iVar5 = func_?((uint)iVar5 - (int)*piVar8,
                          ((int)((ulonglong)iVar5 >> 0x20) -
                          *(int *)((int)&TypeInfo__Newtonsoft__Json__JsonConvert->static_fields->
                                         InitialJavaScriptDateTicks + 4)) -
                          (uint)((uint)iVar5 < (uint)*piVar8),10000);
  return iVar5;
}


/* Int64 ConvertDateTimeToJavaScriptTicks(DateTime, Boolean) */

int64_t Assembly-CSharp.dll::Newtonsoft::Json::JsonConvert::
        JsonConvert_ConvertDateTimeToJavaScriptTicks_2
                  (DateTime dateTime,bool convertToUtc,MethodInfo *method)

{
  DVar1._dateData = dateTime._dateData;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Newtonsoft__Json__JsonConvert);
    cRam_? = '\x01';
    DVar1 = dateTime;
  }
  if (convertToUtc == 0) {
    this = &dateTime;
  }
  else {
    dateTime._dateData = DVar1._dateData;
    if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__Newtonsoft__Json__JsonConvert);
    }
    DStack_2._dateData = DVar1._dateData;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__Newtonsoft__Json__JsonConvert);
      cRam_? = '\x01';
    }
    DVar3 = mscorlib.dll::System::DateTime::DateTime_get_Kind(&DStack_2,(MethodInfo *)0x0);
    DVar1._dateData = DStack_2._dateData;
    uVar4 = DStack_2._dateData._4_4_;
    uVar5 = (undefined4)DStack_2._dateData;
    if (DVar3 != DateTimeKind__Enum_Utc) {
      if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__Newtonsoft__Json__JsonConvert);
      }
      pTVar6 = mscorlib.dll::System::TimeZone::TimeZone_get_CurrentTimeZone((MethodInfo *)0x0);
      if (pTVar6 == (TimeZone *)0x0) {
        func_?();
        pcVar7 = (code *)swi(3);
        iVar8 = (*pcVar7)();
        return iVar8;
      }
      offset._ticks =
           (*(pTVar6->klass->vtable).__unknown.methodPtr)
                     (pTVar6,uVar5,uVar4,(pTVar6->klass->vtable).__unknown.method);
      iVar8 = JsonConvert_ToUniversalTicks_1(DVar1,offset,(MethodInfo *)0x0);
      goto code_?;
    }
    this = &DStack_2;
    DVar1._dateData = dateTime._dateData;
  }
  dateTime._dateData = DVar1._dateData;
  iVar8 = mscorlib.dll::System::DateTime::DateTime_get_Ticks(this,(MethodInfo *)0x0);
code_?:
  if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__Newtonsoft__Json__JsonConvert);
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Newtonsoft__Json__JsonConvert);
    cRam_? = '\x01';
  }
  if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__Newtonsoft__Json__JsonConvert);
  }
  piVar9 = &TypeInfo__Newtonsoft__Json__JsonConvert->static_fields->InitialJavaScriptDateTicks;
  iVar8 = func_?((uint)iVar8 - (int)*piVar9,
                          ((int)((ulonglong)iVar8 >> 0x20) -
                          *(int *)((int)&TypeInfo__Newtonsoft__Json__JsonConvert->static_fields->
                                         InitialJavaScriptDateTicks + 4)) -
                          (uint)((uint)iVar8 < (uint)*piVar9),10000,0);
  return iVar8;
}


/* DateTime ConvertJavaScriptTicksToDateTime(Int64) */

DateTime Assembly-CSharp.dll::Newtonsoft::Json::JsonConvert::
         JsonConvert_ConvertJavaScriptTicksToDateTime(int64_t javaScriptTicks,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Newtonsoft__Json__JsonConvert);
    cRam_? = '\x01';
  }
  if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__Newtonsoft__Json__JsonConvert);
  }
  iVar1 = TypeInfo__Newtonsoft__Json__JsonConvert->static_fields->InitialJavaScriptDateTicks;
  iVar2 = *(int *)((int)&TypeInfo__Newtonsoft__Json__JsonConvert->static_fields->
                         InitialJavaScriptDateTicks + 4);
  method_00 = (MethodInfo *)0x2710;
  DStack_3._dateData = 0;
  uVar4 = func_?();
  mscorlib.dll::System::DateTime::DateTime__ctor_2
            (&DStack_3,
             CONCAT44((int)javaScriptTicks,
                      (int)((ulonglong)uVar4 >> 0x20) + iVar2 +
                      (uint)CARRY4((uint)uVar4,(uint)iVar1)),
             (DateTimeKind__Enum)((ulonglong)javaScriptTicks >> 0x20),method_00);
  return (DateTime)DStack_3._dateData;
}


/* Object DeserializeAnonymousType[Object](String, Object) */

Object * Assembly-CSharp.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeAnonymousType
                   (String *value,Object *anonymousTypeObject,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Newtonsoft__Json__JsonConvert);
    cRam_? = '\x01';
  }
  if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__Newtonsoft__Json__JsonConvert);
  }
  pOVar1 = (Object *)
           (*((method->field7_0x1c).rgctx_data)->method->virtualMethodPointer)
                     (value,((method->field7_0x1c).rgctx_data)->rgctxDataDummy);
  return pOVar1;
}


/* Object DeserializeObject(String) */

Object * Assembly-CSharp.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject
                   (String *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Newtonsoft__Json__JsonConvert);
    cRam_? = '\x01';
  }
  if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
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
    func_?(&TypeInfo__Newtonsoft__Json__JsonConvert);
    cRam_? = '\x01';
  }
  if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__Newtonsoft__Json__JsonConvert);
  }
  pOVar1 = JsonConvert_DeserializeObject_4(value,(Type *)0x0,settings,(MethodInfo *)0x0);
  return pOVar1;
}


/* Int32 DeserializeObject[Int32](String, JsonSerializerSettings) */

int32_t Assembly-CSharp.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_10
                  (String *value,JsonSerializerSettings *settings,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Newtonsoft__Json__JsonConvert);
    func_?(&TypeInfo__System__Type);
    cRam_? = '\x01';
  }
  handle = *(method->field7_0x1c).rgctx_data;
  if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__Type);
  }
  type = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                   ((RuntimeTypeHandle)handle,(MethodInfo *)0x0);
  if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__Newtonsoft__Json__JsonConvert);
  }
  pOVar1 = JsonConvert_DeserializeObject_4(value,type,settings,(MethodInfo *)0x0);
  pIVar2 = (method->field7_0x1c).rgctx_data[1].klass;
  if (pIVar2->initialized_and_no_error == 0) {
    pIVar2 = (Il2CppClass *)func_?();
  }
  if (pOVar1 == (Object *)0x0) {
    func_?();
  }
  else if ((pOVar1->klass->_0).element_class == pIVar2->element_class) {
    piVar3 = (int32_t *)func_?();
    return *piVar3;
  }
  func_?();
  pcVar4 = (code *)swi(3);
  iVar5 = (*pcVar4)();
  return iVar5;
}


/* Object DeserializeObject[Object](String, JsonConverter[]) */

Object * Assembly-CSharp.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_11
                   (String *value,JsonConverter__Array *converters,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Newtonsoft__Json__JsonConvert);
    func_?(&TypeInfo__System__Type);
    cRam_? = '\x01';
  }
  handle = *(method->field7_0x1c).rgctx_data;
  if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__Type);
  }
  type = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                   ((RuntimeTypeHandle)handle,(MethodInfo *)0x0);
  if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__Newtonsoft__Json__JsonConvert);
  }
  pOVar1 = JsonConvert_DeserializeObject_3(value,type,converters,(MethodInfo *)0x0);
  if ((*(byte *)((int)(method->field7_0x1c).rgctx_data[1].rgctxDataDummy + 0xba) & 1) == 0) {
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

Object * Assembly-CSharp.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_12
                   (String *value,JsonSerializerSettings *settings,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Newtonsoft__Json__JsonConvert);
    func_?(&TypeInfo__System__Type);
    cRam_? = '\x01';
  }
  handle = *(method->field7_0x1c).rgctx_data;
  if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__Type);
  }
  type = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                   ((RuntimeTypeHandle)handle,(MethodInfo *)0x0);
  if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__Newtonsoft__Json__JsonConvert);
  }
  pOVar1 = JsonConvert_DeserializeObject_4(value,type,settings,(MethodInfo *)0x0);
  if ((*(byte *)((int)(method->field7_0x1c).rgctx_data[1].rgctxDataDummy + 0xba) & 1) == 0) {
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


/* WebAdManager+JSONAdReturnedData DeserializeObject[WebAdManager+JSONAdReturnedData](String,
   JsonSerializerSettings) */

WebAdManager_JSONAdReturnedData
Assembly-CSharp.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_13
          (String *value,JsonSerializerSettings *settings,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Newtonsoft__Json__JsonConvert);
    func_?(&TypeInfo__System__Type);
    cRam_? = '\x01';
  }
  handle = *(method->field7_0x1c).rgctx_data;
  if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__Type);
  }
  type = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                   ((RuntimeTypeHandle)handle,(MethodInfo *)0x0);
  if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__Newtonsoft__Json__JsonConvert);
  }
  pOVar1 = JsonConvert_DeserializeObject_4(value,type,settings,(MethodInfo *)0x0);
  pIVar2 = (method->field7_0x1c).rgctx_data[1].klass;
  if (pIVar2->initialized_and_no_error == 0) {
    pIVar2 = (Il2CppClass *)func_?();
  }
  if (pOVar1 == (Object *)0x0) {
    func_?();
  }
  else if ((pOVar1->klass->_0).element_class == pIVar2->element_class) {
    pbVar3 = (bool *)func_?();
    return (WebAdManager_JSONAdReturnedData)*pbVar3;
  }
  func_?();
  pcVar4 = (code *)swi(3);
  bVar5 = (*pcVar4)();
  return (WebAdManager_JSONAdReturnedData)bVar5;
}


/* WebAdManager+JSONInterstitialAdSuccessful
   DeserializeObject[WebAdManager+JSONInterstitialAdSuccessful](String, JsonSerializerSettings) */

WebAdManager_JSONInterstitialAdSuccessful
Assembly-CSharp.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_14
          (String *value,JsonSerializerSettings *settings,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Newtonsoft__Json__JsonConvert);
    func_?(&TypeInfo__System__Type);
    cRam_? = '\x01';
  }
  handle = *(method->field7_0x1c).rgctx_data;
  if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__Type);
  }
  type = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                   ((RuntimeTypeHandle)handle,(MethodInfo *)0x0);
  if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__Newtonsoft__Json__JsonConvert);
  }
  pOVar1 = JsonConvert_DeserializeObject_4(value,type,settings,(MethodInfo *)0x0);
  pIVar2 = (method->field7_0x1c).rgctx_data[1].klass;
  if (pIVar2->initialized_and_no_error == 0) {
    pIVar2 = (Il2CppClass *)func_?();
  }
  if (pOVar1 == (Object *)0x0) {
    func_?();
  }
  else if ((pOVar1->klass->_0).element_class == pIVar2->element_class) {
    pbVar3 = (bool *)func_?();
    return (WebAdManager_JSONInterstitialAdSuccessful)*pbVar3;
  }
  func_?();
  pcVar4 = (code *)swi(3);
  bVar5 = (*pcVar4)();
  return (WebAdManager_JSONInterstitialAdSuccessful)bVar5;
}


/* WebAdManager+JSONRewardedAdSuccessful
   DeserializeObject[WebAdManager+JSONRewardedAdSuccessful](String, JsonSerializerSettings) */

WebAdManager_JSONRewardedAdSuccessful
Assembly-CSharp.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_15
          (String *value,JsonSerializerSettings *settings,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Newtonsoft__Json__JsonConvert);
    func_?(&TypeInfo__System__Type);
    cRam_? = '\x01';
  }
  handle = *(method->field7_0x1c).rgctx_data;
  if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__Type);
  }
  type = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                   ((RuntimeTypeHandle)handle,(MethodInfo *)0x0);
  if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__Newtonsoft__Json__JsonConvert);
  }
  pOVar1 = JsonConvert_DeserializeObject_4(value,type,settings,(MethodInfo *)0x0);
  pIVar2 = (method->field7_0x1c).rgctx_data[1].klass;
  if (pIVar2->initialized_and_no_error == 0) {
    pIVar2 = (Il2CppClass *)func_?();
  }
  if (pOVar1 == (Object *)0x0) {
    func_?();
  }
  else if ((pOVar1->klass->_0).element_class == pIVar2->element_class) {
    pWVar3 = (WebAdManager_JSONRewardedAdSuccessful *)func_?();
    return *pWVar3;
  }
  func_?();
  pcVar4 = (code *)swi(3);
  WVar5 = (WebAdManager_JSONRewardedAdSuccessful)(*pcVar4)();
  return WVar5;
}


/* Object DeserializeObject(String, Type) */

Object * Assembly-CSharp.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_2
                   (String *value,Type *type,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Newtonsoft__Json__JsonConvert);
    cRam_? = '\x01';
  }
  if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__Newtonsoft__Json__JsonConvert);
  }
  pOVar1 = JsonConvert_DeserializeObject_4
                     (value,type,(JsonSerializerSettings *)0x0,(MethodInfo *)0x0);
  return pOVar1;
}


/* Object DeserializeObject(String, Type, JsonConverter[]) */

Object * Assembly-CSharp.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_3
                   (String *value,Type *type,JsonConverter__Array *converters,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Newtonsoft__Json__JsonConvert);
    func_?(&TypeInfo__Newtonsoft__Json__JsonSerializerSettings);
    cRam_? = '\x01';
  }
  if ((converters == (JsonConverter__Array *)0x0) || (converters->max_length == 0)) {
    this = (JsonSerializerSettings *)0x0;
  }
  else {
    this = (JsonSerializerSettings *)
           func_?(TypeInfo__Newtonsoft__Json__JsonSerializerSettings);
    if (this == (JsonSerializerSettings *)0x0) {
      func_?();
      pcVar1 = (code *)swi(3);
      pOVar2 = (Object *)(*pcVar1)();
      return pOVar2;
    }
    JsonSerializerSettings::JsonSerializerSettings__ctor(this,(MethodInfo *)0x0);
    (this->fields)._Converters_k__BackingField =
         (IList_1_Newtonsoft_Json_JsonConverter_ *)converters;
    func_?(&(this->fields)._Converters_k__BackingField,converters);
  }
  if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__Newtonsoft__Json__JsonConvert);
  }
  pOVar2 = JsonConvert_DeserializeObject_4(value,type,this,(MethodInfo *)0x0);
  return pOVar2;
}


/* Object DeserializeObject(String, Type, JsonSerializerSettings) */

Object * Assembly-CSharp.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_4
                   (String *value,Type *type,JsonSerializerSettings *settings,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__IDisposable);
    func_?(&TypeInfo__Newtonsoft__Json__JsonTextReader);
    func_?(&TypeInfo__System__IO__StringReader);
    cRam_? = '\x01';
  }
  this = (StringReader *)func_?(TypeInfo__System__IO__StringReader);
  if (this != (StringReader *)0x0) {
    mscorlib.dll::System::IO::StringReader::StringReader__ctor(this,value,(MethodInfo *)0x0);
    pJVar4 = JsonSerializer::JsonSerializer_Create(settings,(MethodInfo *)0x0);
    this_00 = (JsonTextReader *)func_?(TypeInfo__Newtonsoft__Json__JsonTextReader);
    if (this_00 != (JsonTextReader *)0x0) {
      JsonTextReader::JsonTextReader__ctor(this_00,(TextReader *)this,(MethodInfo *)0x0);
      uStack_1 = 1;
      if (pJVar4 != (JsonSerializer *)0x0) {
        pOVar5 = (Object *)
                 (*(pJVar4->klass->vtable).DeserializeInternal.methodPtr)
                           (pJVar4,this_00,type,(pJVar4->klass->vtable).DeserializeInternal.method);
        if (this_00 != (JsonTextReader *)0x0) {
          cVar6 = (*(this_00->klass->vtable).Read.methodPtr)
                            (this_00,(this_00->klass->vtable).Read.method);
          if (cVar6 == '\0') {
code_?:
            uStack_1 = 0xffffffff;
            if (this_00 != (JsonTextReader *)0x0) {
              func_?(0,TypeInfo__System__IDisposable,this_00);
              *unaff_FS_OFFSET = uStack_3;
              return pOVar5;
            }
            *unaff_FS_OFFSET = uStack_3;
            return pOVar5;
          }
          if (this_00 != (JsonTextReader *)0x0) {
            iVar7 = (*(this_00->klass->vtable).get_TokenType.methodPtr)
                              (this_00,(this_00->klass->vtable).get_TokenType.method);
            if (iVar7 == 5) goto code_?;
            uVar8 = func_?(&TypeInfo__Newtonsoft__Json__JsonSerializationException);
            this_01 = (JsonSerializationException *)func_?(uVar8);
            func_?(this_01);
            message = (String *)func_?(&StringLiteral_Additional_text_found_in_JSON_st);
            JsonSerializationException::JsonSerializationException__ctor_1
                      (this_01,message,(MethodInfo *)0x0);
            func_?();
            func_?();
          }
        }
      }
    }
  }
  uVar8 = func_?();
  func_?(uVar8);
  pcVar9 = (code *)swi(3);
  pOVar5 = (Object *)(*pcVar9)();
  return pOVar5;
}


/* Int32 DeserializeObject[Int32](String) */

int32_t Assembly-CSharp.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_5
                  (String *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Newtonsoft__Json__JsonConvert);
    cRam_? = '\x01';
  }
  if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__Newtonsoft__Json__JsonConvert);
  }
  iVar1 = (*((method->field7_0x1c).rgctx_data)->method->virtualMethodPointer)
                    (value,0,((method->field7_0x1c).rgctx_data)->rgctxDataDummy);
  return iVar1;
}


/* Object DeserializeObject[Object](String) */

Object * Assembly-CSharp.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_6
                   (String *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Newtonsoft__Json__JsonConvert);
    cRam_? = '\x01';
  }
  if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__Newtonsoft__Json__JsonConvert);
  }
  pOVar1 = (Object *)
           (*((method->field7_0x1c).rgctx_data)->method->virtualMethodPointer)
                     (value,0,((method->field7_0x1c).rgctx_data)->rgctxDataDummy);
  return pOVar1;
}


/* WebAdManager+JSONAdReturnedData DeserializeObject[WebAdManager+JSONAdReturnedData](String) */

WebAdManager_JSONAdReturnedData
Assembly-CSharp.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_7
          (String *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Newtonsoft__Json__JsonConvert);
    cRam_? = '\x01';
  }
  if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__Newtonsoft__Json__JsonConvert);
  }
  bVar1 = (*((method->field7_0x1c).rgctx_data)->method->virtualMethodPointer)
                    (value,0,((method->field7_0x1c).rgctx_data)->rgctxDataDummy);
  return (WebAdManager_JSONAdReturnedData)bVar1;
}


/* WebAdManager+JSONInterstitialAdSuccessful
   DeserializeObject[WebAdManager+JSONInterstitialAdSuccessful](String) */

WebAdManager_JSONInterstitialAdSuccessful
Assembly-CSharp.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_8
          (String *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Newtonsoft__Json__JsonConvert);
    cRam_? = '\x01';
  }
  if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__Newtonsoft__Json__JsonConvert);
  }
  bVar1 = (*((method->field7_0x1c).rgctx_data)->method->virtualMethodPointer)
                    (value,0,((method->field7_0x1c).rgctx_data)->rgctxDataDummy);
  return (WebAdManager_JSONInterstitialAdSuccessful)bVar1;
}


/* WebAdManager+JSONRewardedAdSuccessful
   DeserializeObject[WebAdManager+JSONRewardedAdSuccessful](String) */

WebAdManager_JSONRewardedAdSuccessful
Assembly-CSharp.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_9
          (String *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Newtonsoft__Json__JsonConvert);
    cRam_? = '\x01';
  }
  if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__Newtonsoft__Json__JsonConvert);
  }
  WVar1 = (WebAdManager_JSONRewardedAdSuccessful)
          (*((method->field7_0x1c).rgctx_data)->method->virtualMethodPointer)
                    (value,0,((method->field7_0x1c).rgctx_data)->rgctxDataDummy);
  return WVar1;
}


/* String EnsureDecimalPlace(Double, String) */

String * Assembly-CSharp.dll::Newtonsoft::Json::JsonConvert::JsonConvert_EnsureDecimalPlace
                   (double value,String *text,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&StringLiteral__0);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__BitConverter);
    cRam_? = '\x01';
  }
  if ((TypeInfo__System__BitConverter->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__BitConverter);
  }
  uVar1 = (uint)((ulonglong)value >> 0x20);
  uVar2 = uVar1 & 0x7fffffff;
  if ((uVar2 < 0x7ff00001) && ((uVar2 < 0x7ff00000 || (SUB84(value,0) == 0)))) {
    if (cRam_? == '\0') {
      func_?(&TypeInfo__System__BitConverter);
      cRam_? = '\x01';
    }
    if ((TypeInfo__System__BitConverter->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__System__BitConverter);
    }
    if ((SUB84(value,0) != 0) || ((uVar1 & 0x7fffffff) != 0x7ff00000)) {
      if (text == (String *)0x0) {
        func_?();
        pcVar3 = (code *)swi(3);
        pSVar4 = (String *)(*pcVar3)();
        return pSVar4;
      }
      iVar5 = mscorlib.dll::System::String::String_IndexOf(text,0x2e,(MethodInfo *)0x0);
      if (iVar5 == -1) {
        iVar5 = mscorlib.dll::System::String::String_IndexOf(text,0x45,(MethodInfo *)0x0);
        if (iVar5 == -1) {
          pSVar4 = mscorlib.dll::System::String::String_Concat_3
                             (text,StringLiteral__0,(MethodInfo *)0x0);
          return pSVar4;
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
    func_?(&StringLiteral__0);
    cRam_? = '\x01';
  }
  if (text != (String *)0x0) {
    iVar1 = mscorlib.dll::System::String::String_IndexOf(text,0x2e,(MethodInfo *)0x0);
    if (iVar1 == -1) {
      pSVar2 = mscorlib.dll::System::String::String_Concat_3
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
  pTVar1 = mscorlib.dll::System::TimeZone::TimeZone_get_CurrentTimeZone((MethodInfo *)0x0);
  if (pTVar1 != (TimeZone *)0x0) {
    puStack_2 = (undefined *)dateTime._dateData;
    TVar3._ticks = (*(pTVar1->klass->vtable).__unknown.methodPtr)(pTVar1);
    return (TimeSpan)TVar3._ticks;
  }
  uVar4 = func_?(&puStack_2);
  func_?(uVar4);
  pcVar5 = (code *)swi(3);
  TVar3._ticks = (*pcVar5)();
  return (TimeSpan)TVar3._ticks;
}


/* Boolean IsJsonPrimitive(Object) */

bool Assembly-CSharp.dll::Newtonsoft::Json::JsonConvert::JsonConvert_IsJsonPrimitive
               (Object *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Byte);
    func_?(&TypeInfo__System__DateTimeOffset);
    func_?(&TypeInfo__System__Guid);
    func_?(&TypeInfo__System__IConvertible);
    func_?(&TypeInfo__Newtonsoft__Json__JsonConvert);
    func_?(&TypeInfo__System__TimeSpan);
    func_?(&TypeInfo__System__Uri);
    cRam_? = '\x01';
  }
  if (value != (Object *)0x0) {
    iVar1 = func_?(value,TypeInfo__System__IConvertible);
    if (iVar1 == 0) {
      pOVar2 = (Object *)0x0;
      if ((DateTimeOffset__Class *)value->klass == TypeInfo__System__DateTimeOffset) {
        pOVar2 = value;
      }
      if (((pOVar2 == (Object *)0x0) &&
          (iVar1 = func_?(value,TypeInfo__System__Byte), iVar1 == 0)) &&
         ((pTVar3 = (TimeSpan__Class *)value->klass,
          (pTVar3->_1).typeHierarchyDepth < (TypeInfo__System__Uri->_1).typeHierarchyDepth ||
          ((pTVar3->_1).typeHierarchy[(TypeInfo__System__Uri->_1).typeHierarchyDepth - 1] !=
           (Il2CppClass *)TypeInfo__System__Uri)))) {
        pOVar2 = (Object *)0x0;
        if (pTVar3 == TypeInfo__System__TimeSpan) {
          pOVar2 = value;
        }
        if (pOVar2 == (Object *)0x0) {
          pOVar2 = (Object *)0x0;
          if (pTVar3 == (TimeSpan__Class *)TypeInfo__System__Guid) {
            pOVar2 = value;
          }
          if (pOVar2 == (Object *)0x0) {
            return 0;
          }
        }
      }
    }
    else {
      iVar1 = func_?(0,TypeInfo__System__IConvertible,iVar1);
      if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__Newtonsoft__Json__JsonConvert);
      }
      if ((0xe < iVar1 - 2U) && (iVar1 != 0x12)) {
        return 0;
      }
    }
  }
  return 1;
}


/* Boolean IsJsonPrimitiveType(Type) */

bool Assembly-CSharp.dll::Newtonsoft::Json::JsonConvert::JsonConvert_IsJsonPrimitiveType
               (Type *type,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeRef__System__Byte);
    func_?(&TypeRef__System__DateTimeOffset);
    func_?(&TypeRef__System__Guid);
    func_?(&TypeInfo__Newtonsoft__Json__JsonConvert);
    func_?(&TypeRef__System__TimeSpan);
    func_?(&TypeInfo__System__Type);
    func_?(&TypeRef__System__Uri);
    cRam_? = '\x01';
  }
  bVar1 = Json::Utilities::ReflectionUtils::ReflectionUtils_IsNullableType(type,(MethodInfo *)0x0);
  if (bVar1 != 0) {
    type = mscorlib.dll::System::Nullable::Nullable_GetUnderlyingType(type,(MethodInfo *)0x0);
  }
  pIVar2 = TypeRef__System__DateTimeOffset;
  if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__Type);
  }
  pTVar3 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                     ((RuntimeTypeHandle)pIVar2,(MethodInfo *)0x0);
  bVar1 = mscorlib.dll::System::Runtime::CompilerServices::Unsafe::Unsafe_AreSame_2
                    ((Object **)type,(Object **)pTVar3,(MethodInfo *)0x0);
  pIVar2 = TypeRef__System__Byte;
  if (bVar1 == 0) {
    if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pTVar3 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                       ((RuntimeTypeHandle)pIVar2,(MethodInfo *)0x0);
    bVar1 = mscorlib.dll::System::Runtime::CompilerServices::Unsafe::Unsafe_AreSame_2
                      ((Object **)type,(Object **)pTVar3,(MethodInfo *)0x0);
    pIVar2 = TypeRef__System__Uri;
    if (bVar1 == 0) {
      if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pTVar3 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                         ((RuntimeTypeHandle)pIVar2,(MethodInfo *)0x0);
      bVar1 = mscorlib.dll::System::Runtime::CompilerServices::Unsafe::Unsafe_AreSame_2
                        ((Object **)type,(Object **)pTVar3,(MethodInfo *)0x0);
      pIVar2 = TypeRef__System__TimeSpan;
      if (bVar1 == 0) {
        if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        pTVar3 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                           ((RuntimeTypeHandle)pIVar2,(MethodInfo *)0x0);
        bVar1 = mscorlib.dll::System::Runtime::CompilerServices::Unsafe::Unsafe_AreSame_2
                          ((Object **)type,(Object **)pTVar3,(MethodInfo *)0x0);
        pIVar2 = TypeRef__System__Guid;
        if (bVar1 == 0) {
          if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          pTVar3 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                             ((RuntimeTypeHandle)pIVar2,(MethodInfo *)0x0);
          bVar1 = mscorlib.dll::System::Runtime::CompilerServices::Unsafe::Unsafe_AreSame_2
                            ((Object **)type,(Object **)pTVar3,(MethodInfo *)0x0);
          if (bVar1 == 0) {
            if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            TVar4 = mscorlib.dll::System::Type::Type_GetTypeCode(type,(MethodInfo *)0x0);
            if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
              pJStack5 = TypeInfo__Newtonsoft__Json__JsonConvert;
              func_?();
            }
            if ((0xe < TVar4 - TypeCode__Enum_DBNull) && (TVar4 != TypeCode__Enum_String)) {
              return 0;
            }
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
  if (0xe < typeCode - TypeCode__Enum_DBNull) {
    return typeCode == TypeCode__Enum_String;
  }
  return 1;
}


/* Void PopulateObject(String, Object) */

void Assembly-CSharp.dll::Newtonsoft::Json::JsonConvert::JsonConvert_PopulateObject
               (String *value,Object *target,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Newtonsoft__Json__JsonConvert);
    cRam_? = '\x01';
  }
  if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__Newtonsoft__Json__JsonConvert);
  }
  JsonConvert_PopulateObject_1(value,target,(JsonSerializerSettings *)0x0,(MethodInfo *)0x0);
  return;
}


/* Void PopulateObject(String, Object, JsonSerializerSettings) */

void Assembly-CSharp.dll::Newtonsoft::Json::JsonConvert::JsonConvert_PopulateObject_1
               (String *value,Object *target,JsonSerializerSettings *settings,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__IDisposable);
    func_?(&TypeInfo__Newtonsoft__Json__JsonTextReader);
    func_?(&TypeInfo__System__IO__StringReader);
    cRam_? = '\x01';
  }
  this = (StringReader *)func_?(TypeInfo__System__IO__StringReader);
  if (this != (StringReader *)0x0) {
    mscorlib.dll::System::IO::StringReader::StringReader__ctor(this,value,(MethodInfo *)0x0);
    pJVar4 = JsonSerializer::JsonSerializer_Create(settings,(MethodInfo *)0x0);
    this_00 = (JsonTextReader *)func_?(TypeInfo__Newtonsoft__Json__JsonTextReader);
    if (this_00 != (JsonTextReader *)0x0) {
      JsonTextReader::JsonTextReader__ctor(this_00,(TextReader *)this,(MethodInfo *)0x0);
      uStack_1 = 1;
      if (pJVar4 != (JsonSerializer *)0x0) {
        (*(pJVar4->klass->vtable).PopulateInternal.methodPtr)
                  (pJVar4,this_00,target,(pJVar4->klass->vtable).PopulateInternal.method);
        if (this_00 != (JsonTextReader *)0x0) {
          cVar5 = (*(this_00->klass->vtable).Read.methodPtr)
                            (this_00,(this_00->klass->vtable).Read.method);
          if (cVar5 == '\0') {
code_?:
            uStack_1 = 0xffffffff;
            if (this_00 != (JsonTextReader *)0x0) {
              func_?(0,TypeInfo__System__IDisposable,this_00);
            }
            *unaff_FS_OFFSET = uStack_3;
            return;
          }
          if (this_00 != (JsonTextReader *)0x0) {
            iVar6 = (*(this_00->klass->vtable).get_TokenType.methodPtr)
                              (this_00,(this_00->klass->vtable).get_TokenType.method);
            if (iVar6 == 5) goto code_?;
            uVar7 = func_?(&TypeInfo__Newtonsoft__Json__JsonSerializationException);
            this_01 = (JsonSerializationException *)func_?(uVar7);
            func_?(this_01);
            message = (String *)func_?(&StringLiteral_Additional_text_found_in_JSON_st);
            JsonSerializationException::JsonSerializationException__ctor_1
                      (this_01,message,(MethodInfo *)0x0);
            func_?();
            func_?();
          }
        }
      }
    }
  }
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* String SerializeObject(Object) */

String * Assembly-CSharp.dll::Newtonsoft::Json::JsonConvert::JsonConvert_SerializeObject
                   (Object *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Newtonsoft__Json__JsonConvert);
    cRam_? = '\x01';
  }
  if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
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
    func_?(&TypeInfo__Newtonsoft__Json__JsonConvert);
    cRam_? = '\x01';
  }
  if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
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
    func_?(&TypeInfo__Newtonsoft__Json__JsonConvert);
    cRam_? = '\x01';
  }
  if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__Newtonsoft__Json__JsonConvert);
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Newtonsoft__Json__JsonConvert);
    func_?(&TypeInfo__Newtonsoft__Json__JsonSerializerSettings);
    cRam_? = '\x01';
  }
  if ((converters == (JsonConverter__Array *)0x0) || (converters->max_length == 0)) {
    this = (JsonSerializerSettings *)0x0;
  }
  else {
    this = (JsonSerializerSettings *)
           func_?(TypeInfo__Newtonsoft__Json__JsonSerializerSettings);
    if (this == (JsonSerializerSettings *)0x0) {
      func_?();
      pcVar1 = (code *)swi(3);
      pSVar2 = (String *)(*pcVar1)();
      return pSVar2;
    }
    JsonSerializerSettings::JsonSerializerSettings__ctor(this,(MethodInfo *)0x0);
    (this->fields)._Converters_k__BackingField =
         (IList_1_Newtonsoft_Json_JsonConverter_ *)converters;
    func_?(&(this->fields)._Converters_k__BackingField,converters);
  }
  if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
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
    func_?(&TypeInfo__Newtonsoft__Json__JsonConvert);
    func_?(&TypeInfo__Newtonsoft__Json__JsonSerializerSettings);
    cRam_? = '\x01';
  }
  if ((converters == (JsonConverter__Array *)0x0) || (converters->max_length == 0)) {
    this = (JsonSerializerSettings *)0x0;
  }
  else {
    this = (JsonSerializerSettings *)
           func_?(TypeInfo__Newtonsoft__Json__JsonSerializerSettings);
    if (this == (JsonSerializerSettings *)0x0) {
      func_?();
      pcVar1 = (code *)swi(3);
      pSVar2 = (String *)(*pcVar1)();
      return pSVar2;
    }
    JsonSerializerSettings::JsonSerializerSettings__ctor(this,(MethodInfo *)0x0);
    (this->fields)._Converters_k__BackingField =
         (IList_1_Newtonsoft_Json_JsonConverter_ *)converters;
    func_?(&(this->fields)._Converters_k__BackingField,converters);
  }
  if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
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
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Globalization__CultureInfo);
    func_?(&TypeInfo__System__IDisposable);
    func_?(&TypeInfo__Newtonsoft__Json__JsonTextWriter);
    func_?(&TypeInfo__System__Text__StringBuilder);
    func_?(&TypeInfo__System__IO__StringWriter);
    cRam_? = '\x01';
  }
  pJVar4 = JsonSerializer::JsonSerializer_Create(settings,(MethodInfo *)0x0);
  this = (StringBuilder *)func_?(TypeInfo__System__Text__StringBuilder);
  if (this != (StringBuilder *)0x0) {
    mscorlib.dll::System::Text::StringBuilder::StringBuilder__ctor_1(this,0x80,(MethodInfo *)0x0);
    if ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    formatProvider =
         mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                   ((MethodInfo *)0x0);
    this_00 = (JsonWriter__Class *)func_?();
    if (this_00 != (JsonWriter__Class *)0x0) {
      mscorlib.dll::System::IO::StringWriter::StringWriter__ctor_2
                ((StringWriter *)this_00,this,(IFormatProvider *)formatProvider,(MethodInfo *)0x0);
      this_01 = (JsonWriter *)func_?();
      if (this_01 != (JsonWriter *)0x0) {
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        if ((TypeInfo__Newtonsoft__Json__JsonWriter->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        JsonWriter::JsonWriter__ctor(this_01,(MethodInfo *)0x0);
        this_01[1].klass = this_00;
        func_?();
        *(undefined1 *)((int)&this_01[1].fields._currentState + 2) = 1;
        *(undefined2 *)&this_01[1].fields._currentState = 0x22;
        this_01[1].fields._stack = (List_1_Newtonsoft_Json_Linq_JTokenType_ *)0x2;
        *(undefined2 *)&this_01[1].fields._top = 0x20;
        uStack_1 = 1;
        if ((this_01 != (JsonWriter *)0x0) &&
           ((this_01->fields)._formatting = formatting, pJVar4 != (JsonSerializer *)0x0)) {
          (*(pJVar4->klass->vtable).SerializeInternal.methodPtr)(pJVar4,this_01);
          uStack_1 = 0xffffffff;
          if (this_01 != (JsonWriter *)0x0) {
            func_?(0);
          }
          uStack_1 = 0xffffffff;
          pSVar5 = (String *)
                   (*(((StringWriter__Class *)(this_00->_0).image)->vtable).ToString.methodPtr)();
          *unaff_FS_OFFSET = uStack_3;
          return pSVar5;
        }
      }
    }
  }
  func_?();
  func_?();
  pcVar6 = (code *)swi(3);
  pSVar5 = (String *)(*pcVar6)();
  return pSVar5;
}


/* String ToString(DateTime) */

String * Assembly-CSharp.dll::Newtonsoft::Json::JsonConvert::JsonConvert_ToString
                   (DateTime value,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__IDisposable);
    func_?(&TypeInfo__Newtonsoft__Json__JsonConvert);
    cRam_? = '\x01';
  }
  writer = Json::Utilities::StringUtils::StringUtils_CreateStringWriter(0x40,(MethodInfo *)0x0);
  uVar4 = value._dateData._4_4_;
  uStack_1 = 1;
  if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  pTVar5 = mscorlib.dll::System::TimeZone::TimeZone_get_CurrentTimeZone((MethodInfo *)0x0);
  if (pTVar5 != (TimeZone *)0x0) {
    uVar6 = (*(pTVar5->klass->vtable).__unknown.methodPtr)(pTVar5);
    DVar7 = mscorlib.dll::System::DateTime::DateTime_get_Kind(&value,(MethodInfo *)0x0);
    value_00._dateData._4_4_ = (int)uVar6;
    value_00._dateData._0_4_ = uVar4;
    offset._ticks._4_4_ = DVar7;
    offset._ticks._0_4_ = (int)((ulonglong)uVar6 >> 0x20);
    JsonConvert_WriteDateTimeString_1
              ((TextWriter *)writer,value_00,offset,DateTimeKind__Enum_Unspecified,in_stack_8
              );
    if (writer != (StringWriter *)0x0) {
      pSVar9 = (String *)(*(writer->klass->vtable).ToString.methodPtr)();
      uStack_1 = 0xffffffff;
      if (writer != (StringWriter *)0x0) {
        func_?();
        *unaff_FS_OFFSET = uStack_3;
        return pSVar9;
      }
      *unaff_FS_OFFSET = uStack_3;
      return pSVar9;
    }
  }
  func_?();
  func_?();
  pcVar10 = (code *)swi(3);
  pSVar9 = (String *)(*pcVar10)();
  return pSVar9;
}


/* String ToString(DateTimeOffset) */

String * Assembly-CSharp.dll::Newtonsoft::Json::JsonConvert::JsonConvert_ToString_1
                   (DateTimeOffset value,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__IDisposable);
    func_?(&TypeInfo__Newtonsoft__Json__JsonConvert);
    cRam_? = '\x01';
  }
  pSVar4 = Json::Utilities::StringUtils::StringUtils_CreateStringWriter(0x40,(MethodInfo *)0x0);
  uStack_1 = 1;
  method_00 = pSVar4;
  DVar5 = mscorlib.dll::System::DateTimeOffset::DateTimeOffset_get_UtcDateTime
                    (&value,(MethodInfo *)0x0);
  TVar6 = mscorlib.dll::System::DateTimeOffset::DateTimeOffset_get_Offset(&value,(MethodInfo *)0x0);
  if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  value_00._dateData._4_4_ = (int)TVar6._ticks;
  value_00._dateData._0_4_ = (int)(DVar5._dateData >> 0x20);
  offset._ticks._4_4_ = 2;
  offset._ticks._0_4_ = (int)((ulonglong)TVar6._ticks >> 0x20);
  JsonConvert_WriteDateTimeString_1
            ((TextWriter *)method_00,value_00,offset,DateTimeKind__Enum_Unspecified,
             (MethodInfo *)method_00);
  if (pSVar4 == (StringWriter *)0x0) {
    func_?();
    func_?();
    pcVar7 = (code *)swi(3);
    pSVar8 = (String *)(*pcVar7)();
    return pSVar8;
  }
  pSVar8 = (String *)(*(pSVar4->klass->vtable).ToString.methodPtr)();
  uStack_1 = 0xffffffff;
  func_?();
  *unaff_FS_OFFSET = uStack_3;
  return pSVar8;
}


/* String ToString(UInt64) */

String * Assembly-CSharp.dll::Newtonsoft::Json::JsonConvert::JsonConvert_ToString_10
                   (uint64_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Globalization__CultureInfo);
    cRam_? = '\x01';
  }
  if ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__Globalization__CultureInfo);
  }
  provider = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                       ((MethodInfo *)0x0);
  pSVar1 = mscorlib.dll::System::UInt64::UInt64_ToString_3
                     ((UInt64 *)&value,(String *)0x0,(IFormatProvider *)provider,(MethodInfo *)0x0);
  return pSVar1;
}


/* String ToString(Single) */

String * Assembly-CSharp.dll::Newtonsoft::Json::JsonConvert::JsonConvert_ToString_11
                   (float value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Globalization__CultureInfo);
    func_?(&TypeInfo__Newtonsoft__Json__JsonConvert);
    func_?(&StringLiteral_R);
    cRam_? = '\x01';
  }
  fVar1 = value;
  if ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__Globalization__CultureInfo);
  }
  provider = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                       ((MethodInfo *)0x0);
  pSVar2 = mscorlib.dll::System::Single::Single_ToString_3
                     ((Single *)&value,StringLiteral_R,(IFormatProvider *)provider,(MethodInfo *)0x0
                     );
  if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
    value = (float)TypeInfo__Newtonsoft__Json__JsonConvert;
    func_?();
  }
  value = 0.0;
  pSVar2 = JsonConvert_EnsureDecimalPlace((double)fVar1,pSVar2,(MethodInfo *)0x0);
  return pSVar2;
}


/* String ToString(Double) */

String * Assembly-CSharp.dll::Newtonsoft::Json::JsonConvert::JsonConvert_ToString_12
                   (double value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Globalization__CultureInfo);
    func_?(&TypeInfo__Newtonsoft__Json__JsonConvert);
    func_?(&StringLiteral_R);
    cRam_? = '\x01';
  }
  value_00 = value;
  if ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__Globalization__CultureInfo);
  }
  provider = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                       ((MethodInfo *)0x0);
  pSVar1 = mscorlib.dll::System::Double::Double_ToString_3
                     ((Double *)&value,StringLiteral_R,(IFormatProvider *)provider,(MethodInfo *)0x0
                     );
  if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  pSVar1 = JsonConvert_EnsureDecimalPlace(value_00,pSVar1,(MethodInfo *)0x0);
  return pSVar1;
}


/* String ToString(Byte) */

String * Assembly-CSharp.dll::Newtonsoft::Json::JsonConvert::JsonConvert_ToString_13
                   (uint8_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Globalization__CultureInfo);
    cRam_? = '\x01';
  }
  if ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__Globalization__CultureInfo);
  }
  provider = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                       ((MethodInfo *)0x0);
  pSVar1 = mscorlib.dll::System::Byte::Byte_ToString_3
                     ((Byte *)&value,(String *)0x0,(IFormatProvider *)provider,(MethodInfo *)0x0);
  return pSVar1;
}


/* String ToString(SByte) */

String * Assembly-CSharp.dll::Newtonsoft::Json::JsonConvert::JsonConvert_ToString_14
                   (int8_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Globalization__CultureInfo);
    cRam_? = '\x01';
  }
  if ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__Globalization__CultureInfo);
  }
  provider = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                       ((MethodInfo *)0x0);
  pSVar1 = mscorlib.dll::System::SByte::SByte_ToString_3
                     ((SByte *)&value,(String *)0x0,(IFormatProvider *)provider,(MethodInfo *)0x0);
  return pSVar1;
}


/* String ToString(Decimal) */

String * Assembly-CSharp.dll::Newtonsoft::Json::JsonConvert::JsonConvert_ToString_15
                   (Decimal value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Globalization__CultureInfo);
    func_?(&TypeInfo__Newtonsoft__Json__JsonConvert);
    cRam_? = '\x01';
  }
  if ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__Globalization__CultureInfo);
  }
  provider = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                       ((MethodInfo *)0x0);
  pSVar1 = mscorlib.dll::System::Decimal::Decimal_ToString_3
                     (&value,(String *)0x0,(IFormatProvider *)provider,(MethodInfo *)0x0);
  if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
    value.hi = (int32_t)TypeInfo__Newtonsoft__Json__JsonConvert;
    value.flags._0_2_ = 0xd30a;
    value.flags._2_2_ = 0x1046;
    func_?();
  }
  if (cRam_? == '\0') {
    value.hi = (int32_t)&StringLiteral__0;
    value.flags._0_2_ = 0xd320;
    value.flags._2_2_ = 0x1046;
    func_?();
    cRam_? = '\x01';
  }
  if (pSVar1 != (String *)0x0) {
    value.hi = 0;
    value.flags._0_2_ = 0x2e;
    value.flags._2_2_ = 0;
    iVar2 = mscorlib.dll::System::String::String_IndexOf(pSVar1,0x2e,(MethodInfo *)0x0);
    if (iVar2 == -1) {
      value.ulomidLE._0_4_ = 0;
      value.mid = (int32_t)StringLiteral__0;
      value.hi = (int32_t)&UNK_?;
      value.lo = (int32_t)pSVar1;
      pSVar1 = mscorlib.dll::System::String::String_Concat_3
                         (pSVar1,StringLiteral__0,(MethodInfo *)0x0);
    }
    return pSVar1;
  }
  value.hi = (int32_t)&UNK_?;
  func_?();
  pcVar3 = (code *)swi(3);
  pSVar1 = (String *)(*pcVar3)();
  return pSVar1;
}


/* String ToString(Guid) */

String * Assembly-CSharp.dll::Newtonsoft::Json::JsonConvert::JsonConvert_ToString_16
                   (Guid value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Globalization__CultureInfo);
    func_?(&StringLiteral_D);
    func_?(&::StringLiteral__);
    cRam_? = '\x01';
  }
  if ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__Globalization__CultureInfo);
  }
  provider = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                       ((MethodInfo *)0x0);
  pSVar1 = mscorlib.dll::System::Guid::Guid_ToString_2
                     (&value,StringLiteral_D,(IFormatProvider *)provider,(MethodInfo *)0x0);
  pSVar1 = mscorlib.dll::System::String::String_Concat_4
                     (::StringLiteral__,pSVar1,::StringLiteral__,(MethodInfo *)0x0);
  return pSVar1;
}


/* String ToString(TimeSpan) */

String * Assembly-CSharp.dll::Newtonsoft::Json::JsonConvert::JsonConvert_ToString_17
                   (TimeSpan value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&::StringLiteral__);
    cRam_? = '\x01';
  }
  pSVar1 = mscorlib.dll::System::TimeSpan::TimeSpan_ToString(&value,(MethodInfo *)0x0);
  pSVar1 = mscorlib.dll::System::String::String_Concat_4
                     (::StringLiteral__,pSVar1,::StringLiteral__,(MethodInfo *)0x0);
  return pSVar1;
}


/* String ToString(Uri) */

String * Assembly-CSharp.dll::Newtonsoft::Json::JsonConvert::JsonConvert_ToString_18
                   (Uri *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if (value != (Uri *)0x0) {
    pSVar1 = (String *)(*(value->klass->vtable).ToString.methodPtr)();
    pSVar1 = mscorlib.dll::System::String::String_Concat_4
                       (::StringLiteral__,pSVar1,::StringLiteral__,(MethodInfo *)0x0);
    return pSVar1;
  }
  uVar2 = func_?(&stack0xfffffff0);
  func_?(uVar2);
  pcVar3 = (code *)swi(3);
  pSVar1 = (String *)(*pcVar3)();
  return pSVar1;
}


/* String ToString(String) */

String * Assembly-CSharp.dll::Newtonsoft::Json::JsonConvert::JsonConvert_ToString_19
                   (String *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Newtonsoft__Json__JsonConvert);
    cRam_? = '\x01';
  }
  if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
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
    func_?(&TypeInfo__Newtonsoft__Json__JsonConvert);
    cRam_? = '\x01';
  }
  if (value != 0) {
    if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__Newtonsoft__Json__JsonConvert);
    }
    return TypeInfo__Newtonsoft__Json__JsonConvert->static_fields->True;
  }
  if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__Newtonsoft__Json__JsonConvert);
  }
  return TypeInfo__Newtonsoft__Json__JsonConvert->static_fields->False;
}


/* String ToString(String, Char) */

String * Assembly-CSharp.dll::Newtonsoft::Json::JsonConvert::JsonConvert_ToString_20
                   (String *value,uint16_t delimter,MethodInfo *method)

{
  pSVar1 = Json::Utilities::JavaScriptUtils::JavaScriptUtils_ToEscapedJavaScriptString_1
                     (value,delimter,1,(MethodInfo *)0x0);
  return pSVar1;
}


/* WARNING: Instruction at (ram,0xADDR) overlaps instruction at (ram,0xADDR)
    */
/* String ToString(Object) */

String * Assembly-CSharp.dll::Newtonsoft::Json::JsonConvert::JsonConvert_ToString_21
                   (Object *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    func_?();
    func_?();
    func_?(&TypeInfo__System__IConvertible);
    func_?(&TypeInfo__Newtonsoft__Json__JsonConvert);
    func_?(&TypeInfo__System__TimeSpan);
    func_?(&TypeInfo__System__Uri);
    cRam_? = '\x01';
  }
  pOVar1 = value;
  if (value == (Object *)0x0) {
code_?:
    if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    return TypeInfo__Newtonsoft__Json__JsonConvert->static_fields->Null;
  }
  piVar2 = (int *)func_?();
  if (piVar2 == (int *)0x0) {
    pOVar3 = (Object *)0x0;
    if ((DateTimeOffset__Class *)pOVar1->klass == TypeInfo__System__DateTimeOffset) {
      pOVar3 = pOVar1;
    }
    if (pOVar3 == (Object *)0x0) {
      pOVar3 = (Object *)0x0;
      if ((Guid__Class *)pOVar1->klass == TypeInfo__System__Guid) {
        pOVar3 = pOVar1;
      }
      if (pOVar3 == (Object *)0x0) {
        pTVar4 = (TimeSpan__Class *)pOVar1->klass;
        if (((pTVar4->_1).typeHierarchyDepth < (TypeInfo__System__Uri->_1).typeHierarchyDepth) ||
           ((pTVar4->_1).typeHierarchy[(TypeInfo__System__Uri->_1).typeHierarchyDepth - 1] !=
            (Il2CppClass *)TypeInfo__System__Uri)) {
          pOVar3 = (Object *)0x0;
          if (pTVar4 == TypeInfo__System__TimeSpan) {
            pOVar3 = pOVar1;
          }
          if (pOVar3 == (Object *)0x0) goto code_?;
          if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          if ((pOVar1->klass->_0).element_class == (TypeInfo__System__TimeSpan->_0).element_class) {
            piVar5 = (int64_t *)func_?();
            pSVar6 = JsonConvert_ToString_17((TimeSpan)*piVar5,(MethodInfo *)0x0);
            return pSVar6;
          }
        }
        else {
          if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          if (((TypeInfo__System__Uri->_1).typeHierarchyDepth <=
               (pOVar1->klass->_1).typeHierarchyDepth) &&
             ((pOVar1->klass->_1).typeHierarchy[(TypeInfo__System__Uri->_1).typeHierarchyDepth - 1]
              == (Il2CppClass *)TypeInfo__System__Uri)) {
            pSVar6 = JsonConvert_ToString_18((Uri *)pOVar1,(MethodInfo *)0x0);
            return pSVar6;
          }
          func_?();
        }
      }
      else {
        if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        if ((pOVar1->klass->_0).element_class == (TypeInfo__System__Guid->_0).element_class) {
          pGVar7 = (Guid *)func_?();
          pSVar6 = JsonConvert_ToString_16(*pGVar7,(MethodInfo *)0x0);
          return pSVar6;
        }
      }
    }
    else {
      if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      if ((pOVar1->klass->_0).element_class == (TypeInfo__System__DateTimeOffset->_0).element_class)
      {
        pDVar8 = (DateTimeOffset *)func_?();
        pSVar6 = JsonConvert_ToString_1(*pDVar8,(MethodInfo *)0x0);
        return pSVar6;
      }
    }
    func_?();
  }
  else {
    uVar9 = func_?();
    switch(uVar9) {
    case 2:
      goto code_?;
    case 3:
      if ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      value = (Object *)
              mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                        ((MethodInfo *)0x0);
      uVar10 = 0;
      uVar11 = *(ushort *)(*piVar2 + 0xb2);
      if (uVar11 != 0) {
        do {
          if (*(IConvertible__Class **)(*(int *)(*piVar2 + 0x58) + (uint)uVar10 * 8) ==
              TypeInfo__System__IConvertible) {
            puVar12 = (undefined4 *)
                      (*(int *)(*(int *)(*piVar2 + 0x58) + 4 + (uint)uVar10 * 8) * 8 + 0xc4 +
                      *piVar2);
            goto code_?;
          }
          uVar10 = uVar10 + 1;
        } while (uVar10 < uVar11);
      }
      puVar12 = (undefined4 *)func_?();
code_?:
      uVar13 = (*(code *)*puVar12)();
      value = (Object *)CONCAT31(value._1_3_,uVar13);
      if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pSVar6 = JsonConvert_ToString_2((bool)value,(MethodInfo *)0x0);
      return pSVar6;
    case 4:
      if ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      value = (Object *)
              mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                        ((MethodInfo *)0x0);
      uVar10 = 0;
      uVar11 = *(ushort *)(*piVar2 + 0xb2);
      if (uVar11 != 0) {
        do {
          if (*(IConvertible__Class **)(*(int *)(*piVar2 + 0x58) + (uint)uVar10 * 8) ==
              TypeInfo__System__IConvertible) {
            puVar12 = (undefined4 *)
                      (*(int *)(*(int *)(*piVar2 + 0x58) + 4 + (uint)uVar10 * 8) * 8 + 0xcc +
                      *piVar2);
            goto code_?;
          }
          uVar10 = uVar10 + 1;
        } while (uVar10 < uVar11);
      }
      puVar12 = (undefined4 *)func_?();
code_?:
      uVar14 = (*(code *)*puVar12)();
      if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pSVar6 = JsonConvert_ToString_3(uVar14,(MethodInfo *)0x0);
      return pSVar6;
    case 5:
      if ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      value = (Object *)
              mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                        ((MethodInfo *)0x0);
      uVar10 = 0;
      uVar11 = *(ushort *)(*piVar2 + 0xb2);
      if (uVar11 != 0) {
        do {
          if (*(IConvertible__Class **)(*(int *)(*piVar2 + 0x58) + (uint)uVar10 * 8) ==
              TypeInfo__System__IConvertible) {
            puVar12 = (undefined4 *)
                      (*(int *)(*(int *)(*piVar2 + 0x58) + 4 + (uint)uVar10 * 8) * 8 + 0xd4 +
                      *piVar2);
            goto code_?;
          }
          uVar10 = uVar10 + 1;
        } while (uVar10 < uVar11);
      }
      puVar12 = (undefined4 *)func_?();
code_?:
      uVar13 = (*(code *)*puVar12)();
      value = (Object *)CONCAT31(value._1_3_,uVar13);
      if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pSVar6 = JsonConvert_ToString_14((int8_t)value,(MethodInfo *)0x0);
      return pSVar6;
    case 6:
      if ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      value = (Object *)
              mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                        ((MethodInfo *)0x0);
      uVar10 = 0;
      uVar11 = *(ushort *)(*piVar2 + 0xb2);
      if (uVar11 != 0) {
        do {
          if (*(IConvertible__Class **)(*(int *)(*piVar2 + 0x58) + (uint)uVar10 * 8) ==
              TypeInfo__System__IConvertible) {
            puVar12 = (undefined4 *)
                      (*(int *)(*(int *)(*piVar2 + 0x58) + 4 + (uint)uVar10 * 8) * 8 + 0xdc +
                      *piVar2);
            goto code_?;
          }
          uVar10 = uVar10 + 1;
        } while (uVar10 < uVar11);
      }
      puVar12 = (undefined4 *)func_?();
code_?:
      uVar13 = (*(code *)*puVar12)();
      value = (Object *)CONCAT31(value._1_3_,uVar13);
      if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pSVar6 = JsonConvert_ToString_13((uint8_t)value,(MethodInfo *)0x0);
      return pSVar6;
    case 7:
      if ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      value = (Object *)
              mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                        ((MethodInfo *)0x0);
      uVar10 = 0;
      uVar11 = *(ushort *)(*piVar2 + 0xb2);
      if (uVar11 != 0) {
        do {
          if (*(IConvertible__Class **)(*(int *)(*piVar2 + 0x58) + (uint)uVar10 * 8) ==
              TypeInfo__System__IConvertible) {
            puVar12 = (undefined4 *)
                      (*(int *)(*(int *)(*piVar2 + 0x58) + 4 + (uint)uVar10 * 8) * 8 + 0xe4 +
                      *piVar2);
            goto code_?;
          }
          uVar10 = uVar10 + 1;
        } while (uVar10 < uVar11);
      }
      puVar12 = (undefined4 *)func_?();
code_?:
      value_01 = (*(code *)*puVar12)();
      if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pSVar6 = JsonConvert_ToString_6(value_01,(MethodInfo *)0x0);
      return pSVar6;
    case 8:
      if ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      value = (Object *)
              mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                        ((MethodInfo *)0x0);
      uVar10 = 0;
      uVar11 = *(ushort *)(*piVar2 + 0xb2);
      if (uVar11 != 0) {
        do {
          if (*(IConvertible__Class **)(*(int *)(*piVar2 + 0x58) + (uint)uVar10 * 8) ==
              TypeInfo__System__IConvertible) {
            puVar12 = (undefined4 *)
                      (*(int *)(*(int *)(*piVar2 + 0x58) + 4 + (uint)uVar10 * 8) * 8 + 0xec +
                      *piVar2);
            goto code_?;
          }
          uVar10 = uVar10 + 1;
        } while (uVar10 < uVar11);
      }
      puVar12 = (undefined4 *)func_?();
code_?:
      uVar14 = (*(code *)*puVar12)();
      if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pSVar6 = JsonConvert_ToString_7(uVar14,(MethodInfo *)0x0);
      return pSVar6;
    case 9:
      if ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      value = (Object *)
              mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                        ((MethodInfo *)0x0);
      uVar10 = 0;
      uVar11 = *(ushort *)(*piVar2 + 0xb2);
      if (uVar11 != 0) {
        do {
          if (*(IConvertible__Class **)(*(int *)(*piVar2 + 0x58) + (uint)uVar10 * 8) ==
              TypeInfo__System__IConvertible) {
            puVar12 = (undefined4 *)
                      (*(int *)(*(int *)(*piVar2 + 0x58) + 4 + (uint)uVar10 * 8) * 8 + 0xf4 +
                      *piVar2);
            goto code_?;
          }
          uVar10 = uVar10 + 1;
        } while (uVar10 < uVar11);
      }
      puVar12 = (undefined4 *)func_?();
code_?:
      value_02 = (*(code *)*puVar12)();
      if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pSVar6 = JsonConvert_ToString_5(value_02,(MethodInfo *)0x0);
      return pSVar6;
    case 10:
      if ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      value = (Object *)
              mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                        ((MethodInfo *)0x0);
      uVar10 = 0;
      uVar11 = *(ushort *)(*piVar2 + 0xb2);
      if (uVar11 != 0) {
        do {
          if (*(IConvertible__Class **)(*(int *)(*piVar2 + 0x58) + (uint)uVar10 * 8) ==
              TypeInfo__System__IConvertible) {
            puVar12 = (undefined4 *)
                      (*(int *)(*(int *)(*piVar2 + 0x58) + 4 + (uint)uVar10 * 8) * 8 + 0xfc +
                      *piVar2);
            goto code_?;
          }
          uVar10 = uVar10 + 1;
        } while (uVar10 < uVar11);
      }
      puVar12 = (undefined4 *)func_?();
code_?:
      value_03 = (*(code *)*puVar12)();
      if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pSVar6 = JsonConvert_ToString_8(value_03,(MethodInfo *)0x0);
      return pSVar6;
    case 0xb:
      if ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      value = (Object *)
              mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                        ((MethodInfo *)0x0);
      uVar10 = 0;
      uVar11 = *(ushort *)(*piVar2 + 0xb2);
      if (uVar11 != 0) {
        do {
          if (*(IConvertible__Class **)(*(int *)(*piVar2 + 0x58) + (uint)uVar10 * 8) ==
              TypeInfo__System__IConvertible) {
            puVar12 = (undefined4 *)
                      (*(int *)(*(int *)(*piVar2 + 0x58) + 4 + (uint)uVar10 * 8) * 8 + 0x104 +
                      *piVar2);
            goto code_?;
          }
          uVar10 = uVar10 + 1;
        } while (uVar10 < uVar11);
      }
      puVar12 = (undefined4 *)func_?();
code_?:
      value_04 = (*(code *)*puVar12)();
      if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pSVar6 = JsonConvert_ToString_9(value_04,(MethodInfo *)0x0);
      return pSVar6;
    case 0xc:
      if ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      value = (Object *)
              mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                        ((MethodInfo *)0x0);
      uVar10 = 0;
      uVar11 = *(ushort *)(*piVar2 + 0xb2);
      if (uVar11 != 0) {
        do {
          if (*(IConvertible__Class **)(*(int *)(*piVar2 + 0x58) + (uint)uVar10 * 8) ==
              TypeInfo__System__IConvertible) {
            puVar12 = (undefined4 *)
                      (*(int *)(*(int *)(*piVar2 + 0x58) + 4 + (uint)uVar10 * 8) * 8 + 0x10c +
                      *piVar2);
            goto code_?;
          }
          uVar10 = uVar10 + 1;
        } while (uVar10 < uVar11);
      }
      puVar12 = (undefined4 *)func_?();
code_?:
      value_05 = (*(code *)*puVar12)();
      if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pSVar6 = JsonConvert_ToString_10(value_05,(MethodInfo *)0x0);
      return pSVar6;
    case 0xd:
      if ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      value = (Object *)
              mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                        ((MethodInfo *)0x0);
      uVar10 = 0;
      uVar11 = *(ushort *)(*piVar2 + 0xb2);
      if (uVar11 != 0) {
        do {
          if (*(IConvertible__Class **)(*(int *)(*piVar2 + 0x58) + (uint)uVar10 * 8) ==
              TypeInfo__System__IConvertible) {
            puVar12 = (undefined4 *)
                      (*(int *)(*(int *)(*piVar2 + 0x58) + 4 + (uint)uVar10 * 8) * 8 + 0x114 +
                      *piVar2);
            goto code_?;
          }
          uVar10 = uVar10 + 1;
        } while (uVar10 < uVar11);
      }
      puVar12 = (undefined4 *)func_?();
code_?:
      fVar15 = (float10)(*(code *)*puVar12)();
      value = (Object *)(float)fVar15;
      if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pSVar6 = JsonConvert_ToString_11((float)value,(MethodInfo *)0x0);
      return pSVar6;
    case 0xe:
      if ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      value = (Object *)
              mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                        ((MethodInfo *)0x0);
      uVar10 = 0;
      uVar11 = *(ushort *)(*piVar2 + 0xb2);
      if (uVar11 != 0) {
        do {
          if (*(IConvertible__Class **)(*(int *)(*piVar2 + 0x58) + (uint)uVar10 * 8) ==
              TypeInfo__System__IConvertible) {
            puVar12 = (undefined4 *)
                      (*(int *)(*(int *)(*piVar2 + 0x58) + 4 + (uint)uVar10 * 8) * 8 + 0x11c +
                      *piVar2);
            goto code_?;
          }
          uVar10 = uVar10 + 1;
        } while (uVar10 < uVar11);
      }
      puVar12 = (undefined4 *)func_?();
code_?:
      fVar15 = (float10)(*(code *)*puVar12)();
      if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pSVar6 = JsonConvert_ToString_12((double)fVar15,(MethodInfo *)0x0);
      return pSVar6;
    case 0xf:
      if ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      value = (Object *)
              mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                        ((MethodInfo *)0x0);
      uVar10 = 0;
      uVar11 = *(ushort *)(*piVar2 + 0xb2);
      if (uVar11 != 0) {
        do {
          if (*(IConvertible__Class **)(*(int *)(*piVar2 + 0x58) + (uint)uVar10 * 8) ==
              TypeInfo__System__IConvertible) {
            puVar12 = (undefined4 *)
                      (*(int *)(*(int *)(*piVar2 + 0x58) + 4 + (uint)uVar10 * 8) * 8 + 0x124 +
                      *piVar2);
            goto code_?;
          }
          uVar10 = uVar10 + 1;
        } while (uVar10 < uVar11);
      }
      puVar12 = (undefined4 *)func_?();
code_?:
      puVar12 = (undefined4 *)(*(code *)*puVar12)();
      uVar9 = *puVar12;
      uVar16 = puVar12[1];
      uVar17 = puVar12[2];
      uVar18 = puVar12[3];
      if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      value_00.hi = uVar16;
      value_00.flags = uVar9;
      value_00.lo = uVar17;
      value_00.mid._0_1_ = (char)uVar18;
      value_00.mid._1_1_ = (char)((uint)uVar18 >> 8);
      value_00.mid._2_2_ = (short)((uint)uVar18 >> 0x10);
      value_00.ulomidLE._0_4_ = 0;
      value_00.ulomidLE._4_4_ = unaff_ESI;
      pSVar6 = JsonConvert_ToString_15(value_00,unaff_EBX);
      return pSVar6;
    case 0x10:
      if ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      value = (Object *)
              mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                        ((MethodInfo *)0x0);
      uVar10 = 0;
      uVar11 = *(ushort *)(*piVar2 + 0xb2);
      if (uVar11 != 0) {
        do {
          if (*(IConvertible__Class **)(*(int *)(*piVar2 + 0x58) + (uint)uVar10 * 8) ==
              TypeInfo__System__IConvertible) {
            puVar12 = (undefined4 *)
                      (*(int *)(*(int *)(*piVar2 + 0x58) + 4 + (uint)uVar10 * 8) * 8 + 300 + *piVar2
                      );
            goto code_?;
          }
          uVar10 = uVar10 + 1;
        } while (uVar10 < uVar11);
      }
      puVar12 = (undefined4 *)func_?();
code_?:
      value_06._dateData = (*(code *)*puVar12)();
      if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pSVar6 = JsonConvert_ToString(value_06,(MethodInfo *)0x0);
      return pSVar6;
    case 0x12:
      if ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      value = (Object *)
              mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                        ((MethodInfo *)0x0);
      uVar10 = 0;
      uVar11 = *(ushort *)(*piVar2 + 0xb2);
      if (uVar11 != 0) {
        do {
          if (*(IConvertible__Class **)(*(int *)(*piVar2 + 0x58) + (uint)uVar10 * 8) ==
              TypeInfo__System__IConvertible) {
            puVar12 = (undefined4 *)
                      (*(int *)(*(int *)(*piVar2 + 0x58) + 4 + (uint)uVar10 * 8) * 8 + 0x134 +
                      *piVar2);
            goto code_?;
          }
          uVar10 = uVar10 + 1;
        } while (uVar10 < uVar11);
      }
      puVar12 = (undefined4 *)func_?();
code_?:
      pSVar6 = (String *)(*(code *)*puVar12)();
      if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pSVar6 = JsonConvert_ToString_19(pSVar6,(MethodInfo *)0x0);
      return pSVar6;
    }
  }
code_?:
  func_?();
  func_?();
  pCVar19 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                      ((MethodInfo *)0x0);
  func_?();
  uVar9 = func_?();
  pOVar1 = value;
  func_?();
  pTVar20 = mscorlib.dll::System::Object::Object_GetType(pOVar1,(MethodInfo *)0x0);
  func_?();
  func_?(uVar9,pTVar20);
  func_?();
  method_00 = (MethodInfo *)0x0;
  uVar13 = (undefined1)uVar9;
  uVar21 = (undefined1)((uint)uVar9 >> 8);
  uVar22 = (undefined2)((uint)uVar9 >> 0x10);
  pCVar23 = pCVar19;
  pSVar6 = (String *)func_?();
  pSVar6 = Json::Utilities::StringUtils::StringUtils_FormatWith
                      (pSVar6,(IFormatProvider *)pCVar23,
                       (Object__Array *)CONCAT22(uVar22,CONCAT11(uVar21,uVar13)),method_00);
  func_?();
  this = (ArgumentException *)func_?();
  func_?();
  mscorlib.dll::System::ArgumentException::ArgumentException__ctor_1(this,pSVar6,(MethodInfo *)0x0)
  ;
  func_?();
  bVar24 = (undefined1 *)0xffffffd3 < &stack0xffffffd4;
  func_?();
  out(pSVar6->klass,extraout_DX);
  uVar25 = func_?();
  pbVar26 = (byte *)((ulonglong)uVar25 >> 0x20);
  pbVar27 = (byte *)uVar25;
  bVar28 = *pbVar26 + (byte)pCVar19;
  bVar29 = CARRY1(*pbVar26,(byte)pCVar19) || CARRY1(bVar28,bVar24);
  *pbVar26 = bVar28 + bVar24;
  bVar24 = (byte)((ulonglong)uVar25 >> 0x20);
  bVar28 = (byte)uVar25;
  if (extraout_ECX != 1 && *pbVar26 != 0) {
    in((short)CONCAT31((int3)((ulonglong)uVar25 >> 0x28),bVar24 - bVar28));
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  bVar30 = CARRY1(*pbVar27,bVar24) || CARRY1(*pbVar27 + bVar24,bVar29);
  *pbVar27 = *pbVar27 + bVar24 + bVar29;
  if (extraout_ECX == 2 || *pbVar27 != 0) {
    pbVar26 = pbVar27 + 0x5c1046e1;
    bVar31 = (byte)((uint)pCVar19 >> 8);
    bVar24 = *pbVar26 + bVar31;
    bVar29 = CARRY1(*pbVar26,bVar31) || CARRY1(bVar24,bVar30);
    *pbVar26 = bVar24 + bVar30;
    if (extraout_ECX == 3) {
      bVar24 = *pbVar27;
      bVar31 = *pbVar27;
      *pbVar27 = bVar31 + bVar28 + bVar29;
      cRam_? = cRam_? + bVar28 + (CARRY1(bVar24,bVar28) || CARRY1(bVar31 + bVar28,bVar29));
      goto code_?;
    }
  }
  else {
    func_?();
  }
  uRam_? = 1;
code_?:
  if ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  pCVar23 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                      ((MethodInfo *)0x0);
  pSVar6 = mscorlib.dll::System::UInt32::UInt32_ToString_3
                      ((UInt32 *)&value,(String *)0x0,(IFormatProvider *)pCVar23,(MethodInfo *)0x0);
  return pSVar6;
}


/* String ToString(Char) */

String * Assembly-CSharp.dll::Newtonsoft::Json::JsonConvert::JsonConvert_ToString_3
                   (uint16_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Char);
    func_?(&TypeInfo__Newtonsoft__Json__JsonConvert);
    cRam_? = '\x01';
  }
  if ((TypeInfo__System__Char->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__Char);
  }
  pSVar1 = mscorlib.dll::System::Char::Char_ToString_2(value,(MethodInfo *)0x0);
  if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__Newtonsoft__Json__JsonConvert);
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Newtonsoft__Json__JsonConvert);
    cRam_? = '\x01';
  }
  if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
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
    func_?();
    cRam_? = '\x01';
  }
  if (value != (Enum *)0x0) {
    pSVar1 = mscorlib.dll::System::Enum::Enum_ToString_2(value,StringLiteral_D,(MethodInfo *)0x0);
    return pSVar1;
  }
  uVar2 = func_?(&stack0xfffffff0);
  func_?(uVar2);
  pcVar3 = (code *)swi(3);
  pSVar1 = (String *)(*pcVar3)();
  return pSVar1;
}


/* String ToString(Int32) */

String * Assembly-CSharp.dll::Newtonsoft::Json::JsonConvert::JsonConvert_ToString_5
                   (int32_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Globalization__CultureInfo);
    cRam_? = '\x01';
  }
  if ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__Globalization__CultureInfo);
  }
  provider = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                       ((MethodInfo *)0x0);
  pSVar1 = mscorlib.dll::System::Int32::Int32_ToString_3
                     ((Int32 *)&value,(String *)0x0,(IFormatProvider *)provider,(MethodInfo *)0x0);
  return pSVar1;
}


/* String ToString(Int16) */

String * Assembly-CSharp.dll::Newtonsoft::Json::JsonConvert::JsonConvert_ToString_6
                   (int16_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Globalization__CultureInfo);
    cRam_? = '\x01';
  }
  if ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__Globalization__CultureInfo);
  }
  provider = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                       ((MethodInfo *)0x0);
  pSVar1 = mscorlib.dll::System::Int16::Int16_ToString_3
                     ((Int16 *)&value,(String *)0x0,(IFormatProvider *)provider,(MethodInfo *)0x0);
  return pSVar1;
}


/* String ToString(UInt16) */

String * Assembly-CSharp.dll::Newtonsoft::Json::JsonConvert::JsonConvert_ToString_7
                   (uint16_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Globalization__CultureInfo);
    cRam_? = '\x01';
  }
  if ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__Globalization__CultureInfo);
  }
  provider = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                       ((MethodInfo *)0x0);
  pSVar1 = mscorlib.dll::System::UInt16::UInt16_ToString_3
                     ((UInt16 *)&value,(String *)0x0,(IFormatProvider *)provider,(MethodInfo *)0x0);
  return pSVar1;
}


/* String ToString(UInt32) */

String * Assembly-CSharp.dll::Newtonsoft::Json::JsonConvert::JsonConvert_ToString_8
                   (uint32_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Globalization__CultureInfo);
    cRam_? = '\x01';
  }
  if ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__Globalization__CultureInfo);
  }
  provider = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                       ((MethodInfo *)0x0);
  pSVar1 = mscorlib.dll::System::UInt32::UInt32_ToString_3
                     ((UInt32 *)&value,(String *)0x0,(IFormatProvider *)provider,(MethodInfo *)0x0);
  return pSVar1;
}


/* String ToString(Int64) */

String * Assembly-CSharp.dll::Newtonsoft::Json::JsonConvert::JsonConvert_ToString_9
                   (int64_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Globalization__CultureInfo);
    cRam_? = '\x01';
  }
  if ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__Globalization__CultureInfo);
  }
  provider = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                       ((MethodInfo *)0x0);
  pSVar1 = mscorlib.dll::System::Int64::Int64_ToString_3
                     ((Int64 *)&value,(String *)0x0,(IFormatProvider *)provider,(MethodInfo *)0x0);
  return pSVar1;
}


/* Int64 ToUniversalTicks(DateTime) */

int64_t Assembly-CSharp.dll::Newtonsoft::Json::JsonConvert::JsonConvert_ToUniversalTicks
                  (DateTime dateTime,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Newtonsoft__Json__JsonConvert);
    cRam_? = '\x01';
  }
  DVar1 = mscorlib.dll::System::DateTime::DateTime_get_Kind(&dateTime,(MethodInfo *)0x0);
  dateTime_00._dateData = dateTime._dateData;
  uVar2 = dateTime._dateData._4_4_;
  uVar3 = (undefined4)dateTime._dateData;
  if (DVar1 == DateTimeKind__Enum_Utc) {
    iVar4 = mscorlib.dll::System::DateTime::DateTime_get_Ticks(&dateTime,(MethodInfo *)0x0);
    return iVar4;
  }
  if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__Newtonsoft__Json__JsonConvert);
  }
  pTVar5 = mscorlib.dll::System::TimeZone::TimeZone_get_CurrentTimeZone((MethodInfo *)0x0);
  if (pTVar5 != (TimeZone *)0x0) {
    offset._ticks =
         (*(pTVar5->klass->vtable).__unknown.methodPtr)
                   (pTVar5,uVar3,uVar2,(pTVar5->klass->vtable).__unknown.method);
    iVar4 = JsonConvert_ToUniversalTicks_1(dateTime_00,offset,(MethodInfo *)0x0);
    return iVar4;
  }
  func_?();
  pcVar6 = (code *)swi(3);
  iVar4 = (*pcVar6)();
  return iVar4;
}


/* Int64 ToUniversalTicks(DateTime, TimeSpan) */

int64_t Assembly-CSharp.dll::Newtonsoft::Json::JsonConvert::JsonConvert_ToUniversalTicks_1
                  (DateTime dateTime,TimeSpan offset,MethodInfo *method)

{
  DVar1 = mscorlib.dll::System::DateTime::DateTime_get_Kind(&dateTime,(MethodInfo *)0x0);
  if (DVar1 == DateTimeKind__Enum_Utc) {
    lVar2 = mscorlib.dll::System::DateTime::DateTime_get_Ticks(&dateTime,(MethodInfo *)0x0);
  }
  else {
    iVar3 = mscorlib.dll::System::DateTime::DateTime_get_Ticks(&dateTime,(MethodInfo *)0x0);
    lVar4 = iVar3 - offset._ticks;
    if (0x2bca2875f4373fff < lVar4) {
      return 0x2bca2875f4373fff;
    }
    if (lVar4 < 0) {
      return 0;
    }
    lVar2 = iVar3 - offset._ticks;
    if (lVar4 < 0x100000000) {
      lVar2 = iVar3 - offset._ticks;
    }
  }
  return lVar2;
}


/* Int64 UniversialTicksToJavaScriptTicks(Int64) */

int64_t Assembly-CSharp.dll::Newtonsoft::Json::JsonConvert::
        JsonConvert_UniversialTicksToJavaScriptTicks(int64_t universialTicks,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Newtonsoft__Json__JsonConvert);
    cRam_? = '\x01';
  }
  if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
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
    func_?(&TypeInfo__Newtonsoft__Json__JsonConvert);
    cRam_? = '\x01';
  }
  uVar1 = (undefined4)value._dateData;
  if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__Newtonsoft__Json__JsonConvert);
  }
  method_00 = (MethodInfo *)
              mscorlib.dll::System::TimeZone::TimeZone_get_CurrentTimeZone((MethodInfo *)0x0);
  if (method_00 != (MethodInfo *)0x0) {
    uVar2 = (*(((TimeZone__Class *)method_00->methodPointer)->vtable).__unknown.methodPtr)
                      (method_00,in_stack_3,uVar1,
                       (((TimeZone__Class *)method_00->methodPointer)->vtable).__unknown.method);
    DVar4 = mscorlib.dll::System::DateTime::DateTime_get_Kind
                      ((DateTime *)&stack0x00000008,(MethodInfo *)0x0);
    value_00._dateData._4_4_ = (int)uVar2;
    value_00._dateData._0_4_ = uVar1;
    offset._ticks._4_4_ = DVar4;
    offset._ticks._0_4_ = (int)((ulonglong)uVar2 >> 0x20);
    JsonConvert_WriteDateTimeString_1
              (writer,value_00,offset,DateTimeKind__Enum_Unspecified,method_00);
    return;
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void WriteDateTimeString(TextWriter, DateTime, TimeSpan, DateTimeKind) */

void Assembly-CSharp.dll::Newtonsoft::Json::JsonConvert::JsonConvert_WriteDateTimeString_1
               (TextWriter *writer,DateTime value,TimeSpan offset,DateTimeKind__Enum kind,
               MethodInfo *method)

{
  DVar1._dateData = value._dateData;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Newtonsoft__Json__JsonConvert);
    func_?(&TypeInfo__System__Math);
    func_?(&::StringLiteral__);
    func_?(&::StringLiteral__);
    func_?(&::StringLiteral_____);
    func_?(&StringLiteral____Date_);
    cRam_? = '\x01';
    DVar1 = value;
  }
  value._dateData._4_4_ = (undefined4)(DVar1._dateData >> 0x20);
  uVar2 = value._dateData._4_4_;
  value._dateData = DVar1._dateData;
  if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__Newtonsoft__Json__JsonConvert);
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Newtonsoft__Json__JsonConvert);
    cRam_? = '\x01';
  }
  if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__Newtonsoft__Json__JsonConvert);
  }
  DVar1._dateData._4_4_ = (uint)value._dateData;
  DVar1._dateData._0_4_ = in_stack_3;
  offset_00._ticks._4_4_ = (int)offset._ticks;
  offset_00._ticks._0_4_ = uVar2;
  iVar4 = JsonConvert_ToUniversalTicks_1(DVar1,offset_00,(MethodInfo *)0x0);
  DVar1._dateData = value._dateData;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Newtonsoft__Json__JsonConvert);
    cRam_? = '\x01';
    DVar1 = value;
  }
  value._dateData._4_4_ = (undefined4)(DVar1._dateData >> 0x20);
  if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
    value._dateData = DVar1._dateData;
    func_?(TypeInfo__Newtonsoft__Json__JsonConvert);
  }
  value._dateData._0_4_ =
       (uint)TypeInfo__Newtonsoft__Json__JsonConvert->static_fields->InitialJavaScriptDateTicks;
  if (writer != (TextWriter *)0x0) {
    pMVar5 = (writer->klass->vtable).Write_5.method;
    pSVar6 = StringLiteral____Date_;
    (*(writer->klass->vtable).Write_5.methodPtr)(writer,StringLiteral____Date_,pMVar5);
    pTVar7 = writer->klass;
    uVar8 = func_?((uint)iVar4 - (uint)value._dateData,
                            (int)pMVar5 +
                            (-(uint)((uint)iVar4 < (uint)value._dateData) - (int)pSVar6),10000,0,
                            (pTVar7->vtable).Write_4.method);
    (*(pTVar7->vtable).Write_4.methodPtr)(writer,(int)uVar8,(int)((ulonglong)uVar8 >> 0x20));
    if ((offset._ticks._4_4_ == 0) || (offset._ticks._4_4_ == 2)) {
      pSVar6 = ::StringLiteral__;
      if (-1 < (int)offset._ticks) {
        pSVar6 = ::StringLiteral__;
      }
      (*(writer->klass->vtable).Write_5.methodPtr)
                (writer,pSVar6,(writer->klass->vtable).Write_5.method);
      uVar9 = mscorlib.dll::System::TimeSpan::TimeSpan_get_Hours
                        ((TimeSpan *)((int)&value._dateData + 4),(MethodInfo *)0x0);
      if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__System__Math);
      }
      iVar10 = (uVar9 ^ (int)uVar9 >> 0x1f) - ((int)uVar9 >> 0x1f);
      if (iVar10 < 10) {
        (*(writer->klass->vtable).Write_3.methodPtr)
                  (writer,0,(writer->klass->vtable).Write_3.method);
      }
      (*(writer->klass->vtable).Write_3.methodPtr)
                (writer,iVar10,(writer->klass->vtable).Write_3.method);
      uVar9 = mscorlib.dll::System::TimeSpan::TimeSpan_get_Minutes
                        ((TimeSpan *)((int)&value._dateData + 4),(MethodInfo *)0x0);
      if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__System__Math);
      }
      iVar10 = (uVar9 ^ (int)uVar9 >> 0x1f) - ((int)uVar9 >> 0x1f);
      if (iVar10 < 10) {
        (*(writer->klass->vtable).Write_3.methodPtr)
                  (writer,0,(writer->klass->vtable).Write_3.method);
      }
      (*(writer->klass->vtable).Write_3.methodPtr)
                (writer,iVar10,(writer->klass->vtable).Write_3.method);
    }
    (*(writer->klass->vtable).Write_5.methodPtr)
              (writer,::StringLiteral_____,(writer->klass->vtable).Write_5.method);
    return;
  }
  func_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* JsonConvert() */

void Assembly-CSharp.dll::Newtonsoft::Json::JsonConvert::JsonConvert__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Newtonsoft__Json__JsonConvert);
    func_?(&StringLiteral_Infinity);
    func_?(&StringLiteral_null);
    func_?(&StringLiteral_undefined);
    func_?(&StringLiteral__Infinity);
    func_?(&StringLiteral_false);
    func_?(&StringLiteral_NaN);
    func_?(&StringLiteral_true);
    cRam_? = '\x01';
  }
  TypeInfo__Newtonsoft__Json__JsonConvert->static_fields->True = StringLiteral_true;
  func_?(TypeInfo__Newtonsoft__Json__JsonConvert->static_fields,StringLiteral_true);
  TypeInfo__Newtonsoft__Json__JsonConvert->static_fields->False = StringLiteral_false;
  func_?(&TypeInfo__Newtonsoft__Json__JsonConvert->static_fields->False,StringLiteral_false
                 );
  TypeInfo__Newtonsoft__Json__JsonConvert->static_fields->Null = StringLiteral_null;
  func_?(&TypeInfo__Newtonsoft__Json__JsonConvert->static_fields->Null,StringLiteral_null);
  TypeInfo__Newtonsoft__Json__JsonConvert->static_fields->Undefined = StringLiteral_undefined;
  func_?(&TypeInfo__Newtonsoft__Json__JsonConvert->static_fields->Undefined,
                  StringLiteral_undefined);
  TypeInfo__Newtonsoft__Json__JsonConvert->static_fields->PositiveInfinity = StringLiteral_Infinity;
  func_?(&TypeInfo__Newtonsoft__Json__JsonConvert->static_fields->PositiveInfinity,
                  StringLiteral_Infinity);
  TypeInfo__Newtonsoft__Json__JsonConvert->static_fields->NegativeInfinity = StringLiteral__Infinity
  ;
  func_?(&TypeInfo__Newtonsoft__Json__JsonConvert->static_fields->NegativeInfinity,
                  StringLiteral__Infinity);
  TypeInfo__Newtonsoft__Json__JsonConvert->static_fields->NaN = StringLiteral_NaN;
  func_?(&TypeInfo__Newtonsoft__Json__JsonConvert->static_fields->NaN,StringLiteral_NaN);
  pJVar1 = TypeInfo__Newtonsoft__Json__JsonConvert->static_fields;
  *(undefined4 *)&pJVar1->InitialJavaScriptDateTicks = 0xf7b58000;
  *(undefined4 *)((int)&pJVar1->InitialJavaScriptDateTicks + 4) = 0x89f7ff5;
  return;
}

