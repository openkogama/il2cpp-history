
/* Void Init(String, String) */

void MVCommon.dll::MV::Common::Urls::Urls_Init
               (String *apiUrl,String *streamingAssetsUrl,MethodInfo *method)

{
  if (cRam_? == '\0') {
    pUStack_1 = (Urls__Class *)&TypeInfo__MV__Common__Urls;
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__MV__Common__Urls->_1).cctor_finished_or_no_cctor == 0) {
    pUStack_1 = TypeInfo__MV__Common__Urls;
    func_?();
  }
  pUStack_1 = (Urls__Class *)apiUrl;
  TypeInfo__MV__Common__Urls->static_fields->api = apiUrl;
  ppSStack_2 = &TypeInfo__MV__Common__Urls->static_fields->api;
  func_?();
  pSStack_3 = streamingAssetsUrl;
  TypeInfo__MV__Common__Urls->static_fields->streamingAssets = streamingAssetsUrl;
  func_?(&TypeInfo__MV__Common__Urls->static_fields->streamingAssets);
  if (TypeInfo__MV__Common__Urls->static_fields->onStreamingAssetsUrlAvailable !=
      (Urls_OnStreamingAssetsUrlAvailable *)0x0) {
    if ((TypeInfo__MV__Common__Urls->_1).cctor_finished_or_no_cctor == 0) {
      pUStack_1 = TypeInfo__MV__Common__Urls;
      func_?();
    }
    pUVar4 = TypeInfo__MV__Common__Urls->static_fields->onStreamingAssetsUrlAvailable;
    if (pUVar4 == (Urls_OnStreamingAssetsUrlAvailable *)0x0) {
      pUStack_1 = (Urls__Class *)&stack0xfffffffc;
      uVar5 = func_?(&pSStack_3);
      func_?(uVar5);
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pUStack_1 = (pUVar4->fields)._._.method;
    ppSStack_2 = (pUVar4->fields)._._.method_code;
    (*(pUVar4->fields)._._.invoke_impl)();
  }
  return;
}


/* Boolean StreamingAssetUrlReady() */

bool MVCommon.dll::MV::Common::Urls::Urls_StreamingAssetUrlReady(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MV__Common__Urls);
    cRam_? = '\x01';
  }
  if ((TypeInfo__MV__Common__Urls->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__MV__Common__Urls);
  }
  bVar1 = mscorlib.dll::System::String::String_IsNullOrEmpty
                    (TypeInfo__MV__Common__Urls->static_fields->streamingAssets,(MethodInfo *)0x0);
  return bVar1 ^ 1;
}


/* Void ValidateGet(String) */

void MVCommon.dll::MV::Common::Urls::Urls_ValidateGet(String *value,MethodInfo *method)

{
  bVar1 = mscorlib.dll::System::String::String_IsNullOrEmpty(value,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    return;
  }
  uVar2 = func_?(&TypeInfo__System__Exception);
  this = (Exception *)func_?(uVar2);
  method_00 = (MethodInfo *)0x0;
  message = (String *)func_?(&StringLiteral_Url_not_set);
  mscorlib.dll::System::Exception::Exception__ctor_1(this,message,method_00);
  func_?(&MethodInfo__MV__Common__Urls__ValidateGet_System__String_);
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Urls() */

void MVCommon.dll::MV::Common::Urls::Urls__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MV__Common__Urls);
    func_?(&::StringLiteral__);
    cRam_? = '\x01';
  }
  TypeInfo__MV__Common__Urls->static_fields->streamingAssets = ::StringLiteral__;
  func_?(&TypeInfo__MV__Common__Urls->static_fields->streamingAssets,::StringLiteral__);
  TypeInfo__MV__Common__Urls->static_fields->api = ::StringLiteral__;
  func_?(&TypeInfo__MV__Common__Urls->static_fields->api,::StringLiteral__);
  return;
}


/* String get_API() */

String * MVCommon.dll::MV::Common::Urls::Urls_get_API(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MV__Common__Urls);
    cRam_? = '\x01';
  }
  if ((TypeInfo__MV__Common__Urls->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__MV__Common__Urls);
  }
  bVar1 = mscorlib.dll::System::String::String_IsNullOrEmpty
                    (TypeInfo__MV__Common__Urls->static_fields->api,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    return TypeInfo__MV__Common__Urls->static_fields->api;
  }
  uVar2 = func_?();
  this = (Exception *)func_?(uVar2);
  method_00 = (MethodInfo *)0x0;
  pSVar3 = (String *)func_?(&StringLiteral_Url_not_set);
  mscorlib.dll::System::Exception::Exception__ctor_1(this,pSVar3,method_00);
  uStack4 = func_?();
  pEStack5 = this;
  func_?();
  pcVar6 = (code *)swi(3);
  pSVar3 = (String *)(*pcVar6)();
  return pSVar3;
}


/* String get_InitialData() */

String * MVCommon.dll::MV::Common::Urls::Urls_get_InitialData(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MV__Common__Urls);
    func_?(&StringLiteral_xp_level_init_data__profile_id_);
    cRam_? = '\x01';
  }
  if ((TypeInfo__MV__Common__Urls->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__MV__Common__Urls);
  }
  pSVar1 = mscorlib.dll::System::String::String_Concat_3
                     (TypeInfo__MV__Common__Urls->static_fields->api,
                      StringLiteral_xp_level_init_data__profile_id_,(MethodInfo *)0x0);
  return pSVar1;
}


/* String get_Level() */

String * MVCommon.dll::MV::Common::Urls::Urls_get_Level(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MV__Common__Urls);
    func_?(&StringLiteral_xp_level_level__profile_id_);
    cRam_? = '\x01';
  }
  if ((TypeInfo__MV__Common__Urls->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__MV__Common__Urls);
  }
  pSVar1 = Urls_get_API((MethodInfo *)0x0);
  pSVar1 = mscorlib.dll::System::String::String_Concat_3
                     (pSVar1,StringLiteral_xp_level_level__profile_id_,(MethodInfo *)0x0);
  return pSVar1;
}


/* String get_StreamingAssets() */

String * MVCommon.dll::MV::Common::Urls::Urls_get_StreamingAssets(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MV__Common__Urls);
    cRam_? = '\x01';
  }
  if ((TypeInfo__MV__Common__Urls->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__MV__Common__Urls);
  }
  bVar1 = mscorlib.dll::System::String::String_IsNullOrEmpty
                    (TypeInfo__MV__Common__Urls->static_fields->streamingAssets,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    return TypeInfo__MV__Common__Urls->static_fields->streamingAssets;
  }
  uVar2 = func_?();
  this = (Exception *)func_?(uVar2);
  method_00 = (MethodInfo *)0x0;
  pSVar3 = (String *)func_?(&StringLiteral_Url_not_set);
  mscorlib.dll::System::Exception::Exception__ctor_1(this,pSVar3,method_00);
  uStack4 = func_?();
  pEStack5 = this;
  func_?();
  pcVar6 = (code *)swi(3);
  pSVar3 = (String *)(*pcVar6)();
  return pSVar3;
}


/* String get_XPLimit() */

String * MVCommon.dll::MV::Common::Urls::Urls_get_XPLimit(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MV__Common__Urls);
    func_?(&StringLiteral_xp_level_xp_limits_data__level_);
    cRam_? = '\x01';
  }
  if ((TypeInfo__MV__Common__Urls->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__MV__Common__Urls);
  }
  pSVar1 = Urls_get_API((MethodInfo *)0x0);
  pSVar1 = mscorlib.dll::System::String::String_Concat_3
                     (pSVar1,StringLiteral_xp_level_xp_limits_data__level_,(MethodInfo *)0x0);
  return pSVar1;
}

