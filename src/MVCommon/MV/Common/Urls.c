
/* Void Init(String, String) */

void MVCommon.dll::MV::Common::Urls::Urls_Init
               (String *apiUrl,String *streamingAssetsUrl,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MV__Common__Urls->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MV__Common__Urls->_1).cctor_started == 0)) {
    func_?(TypeInfo__MV__Common__Urls);
  }
  TypeInfo__MV__Common__Urls->static_fields->api = apiUrl;
  TypeInfo__MV__Common__Urls->static_fields->streamingAssets = streamingAssetsUrl;
  if (TypeInfo__MV__Common__Urls->static_fields->onStreamingAssetsUrlAvailable !=
      (Urls_OnStreamingAssetsUrlAvailable *)0x0) {
    if ((((uint)(TypeInfo__MV__Common__Urls->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MV__Common__Urls->_1).cctor_started == 0)) {
      func_?(TypeInfo__MV__Common__Urls);
    }
    this = TypeInfo__MV__Common__Urls->static_fields->onStreamingAssetsUrlAvailable;
    if (this == (Urls_OnStreamingAssetsUrlAvailable *)0x0) {
      func_?();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    Urls+OnStreamingAssetsUrlAvailable::Urls_OnStreamingAssetsUrlAvailable_Invoke
              (this,(MethodInfo *)0x0);
  }
  return;
}


/* Boolean StreamingAssetUrlReady() */

bool MVCommon.dll::MV::Common::Urls::Urls_StreamingAssetUrlReady(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MV__Common__Urls->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MV__Common__Urls->_1).cctor_started == 0)) {
    func_?(TypeInfo__MV__Common__Urls);
  }
  value = TypeInfo__MV__Common__Urls->static_fields->streamingAssets;
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__String);
  }
  bVar1 = mscorlib.dll::System::String::String_IsNullOrEmpty(value,(MethodInfo *)0x0);
  return bVar1 == 0;
}


/* Void ValidateGet(String) */

void MVCommon.dll::MV::Common::Urls::Urls_ValidateGet(String *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__String);
  }
  bVar1 = mscorlib.dll::System::String::String_IsNullOrEmpty(value,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    return;
  }
  this = (IsolatedStorageException *)func_?(TypeInfo__System__Exception);
  mscorlib.dll::System::IO::IsolatedStorage::IsolatedStorageException::
  IsolatedStorageException__ctor_1(this,StringLiteral_Url_not_set,(MethodInfo *)0x0);
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Urls() */

void MVCommon.dll::MV::Common::Urls::Urls__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  TypeInfo__MV__Common__Urls->static_fields->streamingAssets = ::StringLiteral__;
  TypeInfo__MV__Common__Urls->static_fields->api = ::StringLiteral__;
  return;
}


/* String get_API() */

String * MVCommon.dll::MV::Common::Urls::Urls_get_API(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MV__Common__Urls->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MV__Common__Urls->_1).cctor_started == 0)) {
    func_?(TypeInfo__MV__Common__Urls);
  }
  Urls_ValidateGet(TypeInfo__MV__Common__Urls->static_fields->api,(MethodInfo *)0x0);
  return TypeInfo__MV__Common__Urls->static_fields->api;
}


/* String get_InitialData() */

String * MVCommon.dll::MV::Common::Urls::Urls_get_InitialData(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MV__Common__Urls->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MV__Common__Urls->_1).cctor_started == 0)) {
    func_?(TypeInfo__MV__Common__Urls);
  }
  pSVar1 = TypeInfo__MV__Common__Urls->static_fields->api;
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__String);
  }
  pSVar1 = mscorlib.dll::System::String::String_Concat_2
                     (pSVar1,StringLiteral_xp_level_init_data__profile_id_,(MethodInfo *)0x0);
  return pSVar1;
}


/* String get_Level() */

String * MVCommon.dll::MV::Common::Urls::Urls_get_Level(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MV__Common__Urls->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MV__Common__Urls->_1).cctor_started == 0)) {
    func_?(TypeInfo__MV__Common__Urls);
  }
  pSVar1 = Urls_get_API((MethodInfo *)0x0);
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__String);
  }
  pSVar1 = mscorlib.dll::System::String::String_Concat_2
                     (pSVar1,StringLiteral_xp_level_level__profile_id_,(MethodInfo *)0x0);
  return pSVar1;
}


/* String get_StreamingAssets() */

String * MVCommon.dll::MV::Common::Urls::Urls_get_StreamingAssets(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MV__Common__Urls->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MV__Common__Urls->_1).cctor_started == 0)) {
    func_?(TypeInfo__MV__Common__Urls);
  }
  Urls_ValidateGet(TypeInfo__MV__Common__Urls->static_fields->streamingAssets,(MethodInfo *)0x0);
  return TypeInfo__MV__Common__Urls->static_fields->streamingAssets;
}


/* String get_XPLimit() */

String * MVCommon.dll::MV::Common::Urls::Urls_get_XPLimit(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MV__Common__Urls->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MV__Common__Urls->_1).cctor_started == 0)) {
    func_?(TypeInfo__MV__Common__Urls);
  }
  pSVar1 = Urls_get_API((MethodInfo *)0x0);
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__String);
  }
  pSVar1 = mscorlib.dll::System::String::String_Concat_2
                     (pSVar1,StringLiteral_xp_level_xp_limits_data__level_,(MethodInfo *)0x0);
  return pSVar1;
}

