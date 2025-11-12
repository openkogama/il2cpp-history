
/* Void Init(String, String) */

void MVCommon.dll::MV::Common::Urls::Urls_Init
               (String *apiUrl,String *streamingAssetsUrl,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MV__Common__Urls);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__MV__Common__Urls->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__MV__Common__Urls);
  }
  TypeInfo__MV__Common__Urls->static_fields->api = apiUrl;
  if (iRam_? != 0) {
    uVar1 = (uint)((ulonglong)&TypeInfo__MV__Common__Urls->static_fields->api >> 0xc);
    lVar2 = (ulonglong)((uVar1 & 0x1fffff) >> 6) * 8;
    do {
      uVar3 = *(ulonglong *)(lVar2 + 0xADDR);
      puVar4 = (ulonglong *)(lVar2 + 0xADDR);
      LOCK();
      bVar5 = uVar3 == *puVar4;
      if (bVar5) {
        *puVar4 = uVar3 | 1L << (uVar1 & 0x3f);
      }
      UNLOCK();
    } while (!bVar5);
  }
  TypeInfo__MV__Common__Urls->static_fields->streamingAssets = streamingAssetsUrl;
  if (iRam_? != 0) {
    uVar1 = (uint)((ulonglong)&TypeInfo__MV__Common__Urls->static_fields->streamingAssets >> 0xc);
    lVar2 = (ulonglong)((uVar1 & 0x1fffff) >> 6) * 8;
    do {
      uVar3 = *(ulonglong *)(lVar2 + 0xADDR);
      puVar4 = (ulonglong *)(lVar2 + 0xADDR);
      LOCK();
      bVar5 = uVar3 == *puVar4;
      if (bVar5) {
        *puVar4 = uVar3 | 1L << (uVar1 & 0x3f);
      }
      UNLOCK();
    } while (!bVar5);
  }
  if (TypeInfo__MV__Common__Urls->static_fields->onStreamingAssetsUrlAvailable !=
      (Urls_OnStreamingAssetsUrlAvailable *)0x0) {
    if (*(int *)&(TypeInfo__MV__Common__Urls->_1).field_0x1c == 0) {
      FUN_?();
    }
    pUVar6 = TypeInfo__MV__Common__Urls->static_fields->onStreamingAssetsUrlAvailable;
    if (pUVar6 == (Urls_OnStreamingAssetsUrlAvailable *)0x0) {
      FUN_?();
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    (*(pUVar6->fields)._._.invoke_impl)
              ((pUVar6->fields)._._.method_code,(pUVar6->fields)._._.method);
  }
  return;
}


/* Boolean StreamingAssetUrlReady() */

bool MVCommon.dll::MV::Common::Urls::Urls_StreamingAssetUrlReady(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MV__Common__Urls);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__MV__Common__Urls->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__MV__Common__Urls);
  }
  pSVar1 = TypeInfo__MV__Common__Urls->static_fields->streamingAssets;
  if ((pSVar1 != (String *)0x0) && ((pSVar1->fields)._stringLength != 0)) {
    return 1;
  }
  return 0;
}


/* Void ValidateGet(String) */

void MVCommon.dll::MV::Common::Urls::Urls_ValidateGet(String *value,MethodInfo *method)

{
  if ((value != (String *)0x0) && ((value->fields)._stringLength != 0)) {
    return;
  }
  uVar1 = func_?(&TypeInfo__System__Exception);
  this = (Exception *)func_?(uVar1);
  message = (String *)func_?(&StringLiteral_Url_not_set);
  mscorlib.dll::System::Exception::Exception__ctor_1(this,message,(MethodInfo *)0x0);
  uVar1 = func_?(&MethodInfo__MV__Common__Urls__ValidateGet_System__String_);
  FUN_?(this,uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Urls() */

void MVCommon.dll::MV::Common::Urls::Urls__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MV__Common__Urls);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  TypeInfo__MV__Common__Urls->static_fields->streamingAssets = ::StringLiteral__;
  if (iRam_? != 0) {
    uVar1 = (uint)((ulonglong)&TypeInfo__MV__Common__Urls->static_fields->streamingAssets >> 0xc);
    lVar2 = (ulonglong)((uVar1 & 0x1fffff) >> 6) * 8;
    do {
      uVar3 = *(ulonglong *)(lVar2 + 0xADDR);
      puVar4 = (ulonglong *)(lVar2 + 0xADDR);
      LOCK();
      bVar5 = uVar3 == *puVar4;
      if (bVar5) {
        *puVar4 = uVar3 | 1L << (uVar1 & 0x3f);
      }
      UNLOCK();
    } while (!bVar5);
  }
  TypeInfo__MV__Common__Urls->static_fields->api = ::StringLiteral__;
  if (iRam_? != 0) {
    uVar1 = (uint)((ulonglong)&TypeInfo__MV__Common__Urls->static_fields->api >> 0xc);
    lVar2 = (ulonglong)((uVar1 & 0x1fffff) >> 6) * 8;
    do {
      uVar3 = *(ulonglong *)(lVar2 + 0xADDR);
      puVar4 = (ulonglong *)(lVar2 + 0xADDR);
      LOCK();
      bVar5 = uVar3 == *puVar4;
      if (bVar5) {
        *puVar4 = uVar3 | 1L << (uVar1 & 0x3f);
      }
      UNLOCK();
    } while (!bVar5);
  }
  return;
}


/* String get_API() */

String * MVCommon.dll::MV::Common::Urls::Urls_get_API(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MV__Common__Urls);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__MV__Common__Urls->_1).field_0x1c == 0) {
    FUN_?();
  }
  pSVar1 = TypeInfo__MV__Common__Urls->static_fields->api;
  if ((pSVar1 != (String *)0x0) && ((pSVar1->fields)._stringLength != 0)) {
    return pSVar1;
  }
  uVar2 = func_?(&TypeInfo__System__Exception);
  this = (Exception *)func_?(uVar2);
  pSVar1 = (String *)func_?(&StringLiteral_Url_not_set);
  mscorlib.dll::System::Exception::Exception__ctor_1(this,pSVar1,(MethodInfo *)0x0);
  uVar2 = func_?(&MethodInfo__MV__Common__Urls__ValidateGet_System__String_);
  FUN_?(this,uVar2);
  pcVar3 = (code *)swi(3);
  pSVar1 = (String *)(*pcVar3)();
  return pSVar1;
}


/* String get_InitialData() */

String * MVCommon.dll::MV::Common::Urls::Urls_get_InitialData(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MV__Common__Urls);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_xp_level_init_data__profile_id_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__MV__Common__Urls->_1).field_0x1c == 0) {
    FUN_?();
  }
  pSVar1 = StringLiteral_xp_level_init_data__profile_id_;
  pSVar2 = TypeInfo__MV__Common__Urls->static_fields->api;
  if ((pSVar2 == (String *)0x0) || ((pSVar2->fields)._stringLength == 0)) {
    if ((StringLiteral_xp_level_init_data__profile_id_ != (String *)0x0) &&
       ((StringLiteral_xp_level_init_data__profile_id_->fields)._stringLength != 0)) {
      return StringLiteral_xp_level_init_data__profile_id_;
    }
    return (String *)**(undefined8 **)(lRam_? + 0xb8);
  }
  if ((StringLiteral_xp_level_init_data__profile_id_ == (String *)0x0) ||
     ((StringLiteral_xp_level_init_data__profile_id_->fields)._stringLength == 0)) {
    return pSVar2;
  }
  iVar3 = (pSVar2->fields)._stringLength;
  pSVar4 = (String *)
           FUN_?((StringLiteral_xp_level_init_data__profile_id_->fields)._stringLength +
                         iVar3,StringLiteral_xp_level_init_data__profile_id_,0);
  if (pSVar4 == (String *)0x0) {
    FUN_?();
    pcVar5 = (code *)swi(3);
    pSVar2 = (String *)(*pcVar5)();
    return pSVar2;
  }
  if ((pSVar2->fields)._stringLength <= (pSVar4->fields)._stringLength) {
    puVar6 = &(pSVar4->fields)._firstChar;
    puVar7 = &(pSVar2->fields)._firstChar;
    uVar8 = (pSVar2->fields)._stringLength * 2;
    if (((ulonglong)((longlong)puVar6 - (longlong)puVar7) < (ulonglong)uVar8) ||
       ((ulonglong)((longlong)puVar7 - (longlong)puVar6) < (ulonglong)uVar8)) {
      FUN_?();
    }
    else {
      mscorlib.dll::System::Buffer::Buffer_Memcpy_1
                ((uint8_t *)puVar6,(uint8_t *)puVar7,uVar8,(MethodInfo *)0x0);
    }
    if ((pSVar1->fields)._stringLength <= (pSVar4->fields)._stringLength - iVar3) {
      puVar7 = &(pSVar4->fields)._firstChar + iVar3;
      puVar6 = &(pSVar1->fields)._firstChar;
      uVar8 = (pSVar1->fields)._stringLength * 2;
      if (((ulonglong)((longlong)puVar7 - (longlong)puVar6) < (ulonglong)uVar8) ||
         ((ulonglong)((longlong)puVar6 - (longlong)puVar7) < (ulonglong)uVar8)) {
        FUN_?();
      }
      else {
        mscorlib.dll::System::Buffer::Buffer_Memcpy_1
                  ((uint8_t *)puVar7,(uint8_t *)puVar6,uVar8,(MethodInfo *)0x0);
      }
      return pSVar4;
    }
    uVar9 = func_?(&TypeInfo__System__IndexOutOfRangeException);
    pIVar10 = (IndexOutOfRangeException *)func_?(uVar9);
    mscorlib.dll::System::IndexOutOfRangeException::IndexOutOfRangeException__ctor
              (pIVar10,(MethodInfo *)0x0);
    uVar9 = func_?(&
                                MethodInfo__System__String__FillStringChecked_MethodInfo__System__String__int__MethodInfo__System__String_
                               );
    FUN_?(pIVar10,uVar9);
    pcVar5 = (code *)swi(3);
    pSVar2 = (String *)(*pcVar5)();
    return pSVar2;
  }
  uVar9 = func_?(&TypeInfo__System__IndexOutOfRangeException);
  pIVar10 = (IndexOutOfRangeException *)func_?(uVar9);
  mscorlib.dll::System::IndexOutOfRangeException::IndexOutOfRangeException__ctor
            (pIVar10,(MethodInfo *)0x0);
  uVar9 = func_?(&
                              MethodInfo__System__String__FillStringChecked_MethodInfo__System__String__int__MethodInfo__System__String_
                             );
  FUN_?(pIVar10,uVar9);
  pcVar5 = (code *)swi(3);
  pSVar2 = (String *)(*pcVar5)();
  return pSVar2;
}


/* String get_Level() */

String * MVCommon.dll::MV::Common::Urls::Urls_get_Level(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MV__Common__Urls);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_xp_level_level__profile_id_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__MV__Common__Urls->_1).field_0x1c == 0) {
    FUN_?();
  }
  pSVar1 = Urls_get_API((MethodInfo *)0x0);
  pSVar2 = StringLiteral_xp_level_level__profile_id_;
  if ((pSVar1 == (String *)0x0) || ((pSVar1->fields)._stringLength == 0)) {
    if ((StringLiteral_xp_level_level__profile_id_ != (String *)0x0) &&
       ((StringLiteral_xp_level_level__profile_id_->fields)._stringLength != 0)) {
      return StringLiteral_xp_level_level__profile_id_;
    }
    return (String *)**(undefined8 **)(lRam_? + 0xb8);
  }
  if ((StringLiteral_xp_level_level__profile_id_ == (String *)0x0) ||
     ((StringLiteral_xp_level_level__profile_id_->fields)._stringLength == 0)) {
    return pSVar1;
  }
  iVar3 = (pSVar1->fields)._stringLength;
  pSVar4 = (String *)
           FUN_?((StringLiteral_xp_level_level__profile_id_->fields)._stringLength + iVar3,
                         StringLiteral_xp_level_level__profile_id_,0);
  if (pSVar4 == (String *)0x0) {
    FUN_?();
    pcVar5 = (code *)swi(3);
    pSVar2 = (String *)(*pcVar5)();
    return pSVar2;
  }
  if ((pSVar1->fields)._stringLength <= (pSVar4->fields)._stringLength) {
    puVar6 = &(pSVar4->fields)._firstChar;
    puVar7 = &(pSVar1->fields)._firstChar;
    uVar8 = (pSVar1->fields)._stringLength * 2;
    if (((ulonglong)((longlong)puVar6 - (longlong)puVar7) < (ulonglong)uVar8) ||
       ((ulonglong)((longlong)puVar7 - (longlong)puVar6) < (ulonglong)uVar8)) {
      FUN_?();
    }
    else {
      mscorlib.dll::System::Buffer::Buffer_Memcpy_1
                ((uint8_t *)puVar6,(uint8_t *)puVar7,uVar8,(MethodInfo *)0x0);
    }
    if ((pSVar2->fields)._stringLength <= (pSVar4->fields)._stringLength - iVar3) {
      puVar7 = &(pSVar4->fields)._firstChar + iVar3;
      puVar6 = &(pSVar2->fields)._firstChar;
      uVar8 = (pSVar2->fields)._stringLength * 2;
      if (((ulonglong)((longlong)puVar7 - (longlong)puVar6) < (ulonglong)uVar8) ||
         ((ulonglong)((longlong)puVar6 - (longlong)puVar7) < (ulonglong)uVar8)) {
        FUN_?();
      }
      else {
        mscorlib.dll::System::Buffer::Buffer_Memcpy_1
                  ((uint8_t *)puVar7,(uint8_t *)puVar6,uVar8,(MethodInfo *)0x0);
      }
      return pSVar4;
    }
    uVar9 = func_?(&TypeInfo__System__IndexOutOfRangeException);
    pIVar10 = (IndexOutOfRangeException *)func_?(uVar9);
    mscorlib.dll::System::IndexOutOfRangeException::IndexOutOfRangeException__ctor
              (pIVar10,(MethodInfo *)0x0);
    uVar9 = func_?(&
                                MethodInfo__System__String__FillStringChecked_MethodInfo__System__String__int__MethodInfo__System__String_
                               );
    FUN_?(pIVar10,uVar9);
    pcVar5 = (code *)swi(3);
    pSVar2 = (String *)(*pcVar5)();
    return pSVar2;
  }
  uVar9 = func_?(&TypeInfo__System__IndexOutOfRangeException);
  pIVar10 = (IndexOutOfRangeException *)func_?(uVar9);
  mscorlib.dll::System::IndexOutOfRangeException::IndexOutOfRangeException__ctor
            (pIVar10,(MethodInfo *)0x0);
  uVar9 = func_?(&
                              MethodInfo__System__String__FillStringChecked_MethodInfo__System__String__int__MethodInfo__System__String_
                             );
  FUN_?(pIVar10,uVar9);
  pcVar5 = (code *)swi(3);
  pSVar2 = (String *)(*pcVar5)();
  return pSVar2;
}


/* String get_StreamingAssets() */

String * MVCommon.dll::MV::Common::Urls::Urls_get_StreamingAssets(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MV__Common__Urls);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__MV__Common__Urls->_1).field_0x1c == 0) {
    FUN_?();
  }
  pSVar1 = TypeInfo__MV__Common__Urls->static_fields->streamingAssets;
  if ((pSVar1 != (String *)0x0) && ((pSVar1->fields)._stringLength != 0)) {
    return pSVar1;
  }
  uVar2 = func_?(&TypeInfo__System__Exception);
  this = (Exception *)func_?(uVar2);
  pSVar1 = (String *)func_?(&StringLiteral_Url_not_set);
  mscorlib.dll::System::Exception::Exception__ctor_1(this,pSVar1,(MethodInfo *)0x0);
  uVar2 = func_?(&MethodInfo__MV__Common__Urls__ValidateGet_System__String_);
  FUN_?(this,uVar2);
  pcVar3 = (code *)swi(3);
  pSVar1 = (String *)(*pcVar3)();
  return pSVar1;
}


/* String get_XPLimit() */

String * MVCommon.dll::MV::Common::Urls::Urls_get_XPLimit(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MV__Common__Urls);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_xp_level_xp_limits_data__level_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__MV__Common__Urls->_1).field_0x1c == 0) {
    FUN_?();
  }
  pSVar1 = Urls_get_API((MethodInfo *)0x0);
  pSVar2 = StringLiteral_xp_level_xp_limits_data__level_;
  if ((pSVar1 == (String *)0x0) || ((pSVar1->fields)._stringLength == 0)) {
    if ((StringLiteral_xp_level_xp_limits_data__level_ != (String *)0x0) &&
       ((StringLiteral_xp_level_xp_limits_data__level_->fields)._stringLength != 0)) {
      return StringLiteral_xp_level_xp_limits_data__level_;
    }
    return (String *)**(undefined8 **)(lRam_? + 0xb8);
  }
  if ((StringLiteral_xp_level_xp_limits_data__level_ == (String *)0x0) ||
     ((StringLiteral_xp_level_xp_limits_data__level_->fields)._stringLength == 0)) {
    return pSVar1;
  }
  iVar3 = (pSVar1->fields)._stringLength;
  pSVar4 = (String *)
           FUN_?((StringLiteral_xp_level_xp_limits_data__level_->fields)._stringLength +
                         iVar3,StringLiteral_xp_level_xp_limits_data__level_,0);
  if (pSVar4 == (String *)0x0) {
    FUN_?();
    pcVar5 = (code *)swi(3);
    pSVar2 = (String *)(*pcVar5)();
    return pSVar2;
  }
  if ((pSVar1->fields)._stringLength <= (pSVar4->fields)._stringLength) {
    puVar6 = &(pSVar4->fields)._firstChar;
    puVar7 = &(pSVar1->fields)._firstChar;
    uVar8 = (pSVar1->fields)._stringLength * 2;
    if (((ulonglong)((longlong)puVar6 - (longlong)puVar7) < (ulonglong)uVar8) ||
       ((ulonglong)((longlong)puVar7 - (longlong)puVar6) < (ulonglong)uVar8)) {
      FUN_?();
    }
    else {
      mscorlib.dll::System::Buffer::Buffer_Memcpy_1
                ((uint8_t *)puVar6,(uint8_t *)puVar7,uVar8,(MethodInfo *)0x0);
    }
    if ((pSVar2->fields)._stringLength <= (pSVar4->fields)._stringLength - iVar3) {
      puVar7 = &(pSVar4->fields)._firstChar + iVar3;
      puVar6 = &(pSVar2->fields)._firstChar;
      uVar8 = (pSVar2->fields)._stringLength * 2;
      if (((ulonglong)((longlong)puVar7 - (longlong)puVar6) < (ulonglong)uVar8) ||
         ((ulonglong)((longlong)puVar6 - (longlong)puVar7) < (ulonglong)uVar8)) {
        FUN_?();
      }
      else {
        mscorlib.dll::System::Buffer::Buffer_Memcpy_1
                  ((uint8_t *)puVar7,(uint8_t *)puVar6,uVar8,(MethodInfo *)0x0);
      }
      return pSVar4;
    }
    uVar9 = func_?(&TypeInfo__System__IndexOutOfRangeException);
    pIVar10 = (IndexOutOfRangeException *)func_?(uVar9);
    mscorlib.dll::System::IndexOutOfRangeException::IndexOutOfRangeException__ctor
              (pIVar10,(MethodInfo *)0x0);
    uVar9 = func_?(&
                                MethodInfo__System__String__FillStringChecked_MethodInfo__System__String__int__MethodInfo__System__String_
                               );
    FUN_?(pIVar10,uVar9);
    pcVar5 = (code *)swi(3);
    pSVar2 = (String *)(*pcVar5)();
    return pSVar2;
  }
  uVar9 = func_?(&TypeInfo__System__IndexOutOfRangeException);
  pIVar10 = (IndexOutOfRangeException *)func_?(uVar9);
  mscorlib.dll::System::IndexOutOfRangeException::IndexOutOfRangeException__ctor
            (pIVar10,(MethodInfo *)0x0);
  uVar9 = func_?(&
                              MethodInfo__System__String__FillStringChecked_MethodInfo__System__String__int__MethodInfo__System__String_
                             );
  FUN_?(pIVar10,uVar9);
  pcVar5 = (code *)swi(3);
  pSVar2 = (String *)(*pcVar5)();
  return pSVar2;
}

