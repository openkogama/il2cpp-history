
/* Void Count(String, Int32) */

void Assembly-CSharp.dll::StatHatWrapper::StatHatWrapper_Count
               (String *key,int32_t count,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__StatHatWrapper);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__0__u_standalone__1_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__0__u_fts__1_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__0__u__1_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__0__u_fts_standalone__1_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__StatHatWrapper->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__StatHatWrapper);
  }
  if ((TypeInfo__StatHatWrapper->static_fields->statHatConfig).isEnabled != 0) {
    if (*(int *)&(TypeInfo__StatHatWrapper->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__StatHatWrapper);
    }
    pSVar1 = StringLiteral__0__u__1_;
    PStack_2._arg0 = (Object *)0x0;
    PStack_2._arg1 = (Object *)0x0;
    PStack_2._arg2 = (Object *)0x0;
    PStack_2._args = (Object__Array *)0x0;
    mscorlib.dll::System::ParamsArray::ParamsArray__ctor_1
              (&PStack_2,
               (Object *)(TypeInfo__StatHatWrapper->static_fields->statHatConfig).regionKey,
               (Object *)key,(MethodInfo *)0x0);
    PStack_3._arg0 = PStack_2._arg0;
    PStack_3._arg1 = PStack_2._arg1;
    PStack_3._arg2 = PStack_2._arg2;
    PStack_3._args = PStack_2._args;
    pSVar4 = mscorlib.dll::System::String::String_FormatHelper
                       ((IFormatProvider *)0x0,pSVar1,&PStack_3,(MethodInfo *)0x0);
    pSVar1 = StringLiteral__0__u_standalone__1_;
    PStack_3._arg0 = (Object *)0x0;
    PStack_3._arg1 = (Object *)0x0;
    PStack_3._arg2 = (Object *)0x0;
    PStack_3._args = (Object__Array *)0x0;
    mscorlib.dll::System::ParamsArray::ParamsArray__ctor_1
              (&PStack_3,
               (Object *)(TypeInfo__StatHatWrapper->static_fields->statHatConfig).regionKey,
               (Object *)key,(MethodInfo *)0x0);
    PStack_5._arg0 = PStack_3._arg0;
    PStack_5._arg1 = PStack_3._arg1;
    PStack_5._arg2 = PStack_3._arg2;
    PStack_5._args = PStack_3._args;
    pSVar1 = mscorlib.dll::System::String::String_FormatHelper
                       ((IFormatProvider *)0x0,pSVar1,&PStack_5,(MethodInfo *)0x0);
    StatHatWrapper_Count_1(pSVar4,pSVar1,count,(MethodInfo *)0x0);
    if (TypeInfo__StatHatWrapper->static_fields->isFirstTimeSession != 0) {
      if (*(int *)&(TypeInfo__StatHatWrapper->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__StatHatWrapper);
      }
      pSVar1 = StringLiteral__0__u_fts__1_;
      PStack_3._arg0 = (Object *)0x0;
      PStack_3._arg1 = (Object *)0x0;
      PStack_3._arg2 = (Object *)0x0;
      PStack_3._args = (Object__Array *)0x0;
      mscorlib.dll::System::ParamsArray::ParamsArray__ctor_1
                (&PStack_3,
                 (Object *)(TypeInfo__StatHatWrapper->static_fields->statHatConfig).regionKey,
                 (Object *)key,(MethodInfo *)0x0);
      PStack_5._arg0 = PStack_3._arg0;
      PStack_5._arg1 = PStack_3._arg1;
      PStack_5._arg2 = PStack_3._arg2;
      PStack_5._args = PStack_3._args;
      pSVar4 = mscorlib.dll::System::String::String_FormatHelper
                         ((IFormatProvider *)0x0,pSVar1,&PStack_5,(MethodInfo *)0x0);
      pSVar1 = StringLiteral__0__u_fts_standalone__1_;
      PStack_2._arg0 = (Object *)0x0;
      PStack_2._arg1 = (Object *)0x0;
      PStack_2._arg2 = (Object *)0x0;
      PStack_2._args = (Object__Array *)0x0;
      mscorlib.dll::System::ParamsArray::ParamsArray__ctor_1
                (&PStack_2,
                 (Object *)(TypeInfo__StatHatWrapper->static_fields->statHatConfig).regionKey,
                 (Object *)key,(MethodInfo *)0x0);
      PStack_5._arg0 = PStack_2._arg0;
      PStack_5._arg1 = PStack_2._arg1;
      PStack_5._arg2 = PStack_2._arg2;
      PStack_5._args = PStack_2._args;
      pSVar1 = mscorlib.dll::System::String::String_FormatHelper
                         ((IFormatProvider *)0x0,pSVar1,&PStack_5,(MethodInfo *)0x0);
      StatHatWrapper_Count_1(pSVar4,pSVar1,count,(MethodInfo *)0x0);
    }
  }
  return;
}


/* Void Count(String, String, Int32) */

void Assembly-CSharp.dll::StatHatWrapper::StatHatWrapper_Count_1
               (String *allBtKey,String *btKey,int32_t count,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_h5g9REtmi1LT7JY5);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  StatHat::Post::Post_1_EzCounter_1
            (StringLiteral_h5g9REtmi1LT7JY5,allBtKey,(float)count,(MethodInfo *)0x0);
  pSVar1 = StringLiteral_h5g9REtmi1LT7JY5;
  uVar2 = 0;
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__Add_System__String__System__String_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<System::String,_System::String>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__StatHat__Post__FormPoster);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_count);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__ez);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_https___api_stathat_com);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_ezkey);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_stat);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
          *)FUN_?(
                         TypeInfo__System__Collections__Generic__Dictionary<System::String,_System::String>
                         );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements::
  UIR::UIRenderDevice+DisableForceGammaMaterial]::
  Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
            (this,
             MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__Dictionary__
            );
  if (this != (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
               *)0x0) {
    uVar2 = CONCAT71((int7)((ulonglong)uVar2 >> 8),2);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__TryInsert
              ((Dictionary_2_System_Object_System_Object_ *)this,(Object *)StringLiteral_ezkey,
               (Object *)pSVar1,(InsertionBehavior__Enum)uVar2,
               MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__Add_System__String__System__String_
               ->klass->rgctx_data[0x22].method);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__TryInsert
              ((Dictionary_2_System_Object_System_Object_ *)this,(Object *)StringLiteral_stat,
               (Object *)btKey,(InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar2 >> 8),2),
               MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__Add_System__String__System__String_
               ->klass->rgctx_data[0x22].method);
    if (cRam_? == '\0') {
      FUN_?();
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    info = mscorlib.dll::System::Globalization::NumberFormatInfo::NumberFormatInfo_get_CurrentInfo
                     ((MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__System__Number->_1).field_0x1c == 0) {
      FUN_?();
    }
    uVar2 = 0;
    pSVar1 = mscorlib.dll::System::Number::Number_FormatSingle
                       ((float)count,(String *)0x0,info,(MethodInfo *)0x0);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__TryInsert
              ((Dictionary_2_System_Object_System_Object_ *)this,(Object *)StringLiteral_count,
               (Object *)pSVar1,(InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar2 >> 8),2),
               MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__Add_System__String__System__String_
               ->klass->rgctx_data[0x22].method);
    this_00 = (Post_FormPoster *)FUN_?(TypeInfo__StatHat__Post__FormPoster);
    StatHat::Post+FormPoster::Post_FormPoster__ctor
              (this_00,StringLiteral_https___api_stathat_com,StringLiteral__ez,
               (Dictionary_2_System_String_System_String_ *)this,(MethodInfo *)0x0);
    return;
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void Initialize(Boolean, StatHatConfig) */

void Assembly-CSharp.dll::StatHatWrapper::StatHatWrapper_Initialize
               (bool isFirstTimeSession,StatHatConfig *statHatConfig,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__StatHatWrapper);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__StatHatWrapper->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__StatHatWrapper);
  }
  pSVar1 = statHatConfig->regionKey;
  bVar2 = statHatConfig->isEnabled;
  uVar3 = *(undefined7 *)&statHatConfig->field_0x9;
  TypeInfo__StatHatWrapper->static_fields->isFirstTimeSession = isFirstTimeSession;
  pSVar4 = TypeInfo__StatHatWrapper->static_fields;
  (pSVar4->statHatConfig).regionKey = pSVar1;
  (pSVar4->statHatConfig).isEnabled = bVar2;
  *(undefined7 *)&(pSVar4->statHatConfig).field_0x9 = uVar3;
  if (iRam_? != 0) {
    uVar5 = (uint)((ulonglong)&TypeInfo__StatHatWrapper->static_fields->statHatConfig >> 0xc);
    puVar6 = (ulonglong *)((ulonglong)((uVar5 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar7 = *puVar6;
      LOCK();
      uVar8 = *puVar6;
      if (uVar7 == uVar8) {
        *puVar6 = uVar7 | 1L << (uVar5 & 0x3f);
      }
      UNLOCK();
    } while (uVar7 != uVar8);
  }
  return;
}


/* Void Value(String, Int32) */

void Assembly-CSharp.dll::StatHatWrapper::StatHatWrapper_Value
               (String *key,int32_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__StatHatWrapper);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__0__u_standalone__1_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__0__u_fts__1_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__0__u__1_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__0__u_fts_standalone__1_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__StatHatWrapper->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__StatHatWrapper);
  }
  if ((TypeInfo__StatHatWrapper->static_fields->statHatConfig).isEnabled != 0) {
    if (*(int *)&(TypeInfo__StatHatWrapper->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__StatHatWrapper);
    }
    pSVar1 = StringLiteral__0__u__1_;
    PStack_2._arg0 = (Object *)0x0;
    PStack_2._arg1 = (Object *)0x0;
    PStack_2._arg2 = (Object *)0x0;
    PStack_2._args = (Object__Array *)0x0;
    mscorlib.dll::System::ParamsArray::ParamsArray__ctor_1
              (&PStack_2,
               (Object *)(TypeInfo__StatHatWrapper->static_fields->statHatConfig).regionKey,
               (Object *)key,(MethodInfo *)0x0);
    PStack_3._arg0 = PStack_2._arg0;
    PStack_3._arg1 = PStack_2._arg1;
    PStack_3._arg2 = PStack_2._arg2;
    PStack_3._args = PStack_2._args;
    pSVar4 = mscorlib.dll::System::String::String_FormatHelper
                       ((IFormatProvider *)0x0,pSVar1,&PStack_3,(MethodInfo *)0x0);
    pSVar1 = StringLiteral__0__u_standalone__1_;
    PStack_3._arg0 = (Object *)0x0;
    PStack_3._arg1 = (Object *)0x0;
    PStack_3._arg2 = (Object *)0x0;
    PStack_3._args = (Object__Array *)0x0;
    mscorlib.dll::System::ParamsArray::ParamsArray__ctor_1
              (&PStack_3,
               (Object *)(TypeInfo__StatHatWrapper->static_fields->statHatConfig).regionKey,
               (Object *)key,(MethodInfo *)0x0);
    PStack_5._arg0 = PStack_3._arg0;
    PStack_5._arg1 = PStack_3._arg1;
    PStack_5._arg2 = PStack_3._arg2;
    PStack_5._args = PStack_3._args;
    pSVar1 = mscorlib.dll::System::String::String_FormatHelper
                       ((IFormatProvider *)0x0,pSVar1,&PStack_5,(MethodInfo *)0x0);
    StatHatWrapper_Value_2(pSVar4,pSVar1,value,(MethodInfo *)0x0);
    if (TypeInfo__StatHatWrapper->static_fields->isFirstTimeSession != 0) {
      if (*(int *)&(TypeInfo__StatHatWrapper->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__StatHatWrapper);
      }
      pSVar1 = StringLiteral__0__u_fts__1_;
      PStack_3._arg0 = (Object *)0x0;
      PStack_3._arg1 = (Object *)0x0;
      PStack_3._arg2 = (Object *)0x0;
      PStack_3._args = (Object__Array *)0x0;
      mscorlib.dll::System::ParamsArray::ParamsArray__ctor_1
                (&PStack_3,
                 (Object *)(TypeInfo__StatHatWrapper->static_fields->statHatConfig).regionKey,
                 (Object *)key,(MethodInfo *)0x0);
      PStack_5._arg0 = PStack_3._arg0;
      PStack_5._arg1 = PStack_3._arg1;
      PStack_5._arg2 = PStack_3._arg2;
      PStack_5._args = PStack_3._args;
      pSVar4 = mscorlib.dll::System::String::String_FormatHelper
                         ((IFormatProvider *)0x0,pSVar1,&PStack_5,(MethodInfo *)0x0);
      pSVar1 = StringLiteral__0__u_fts_standalone__1_;
      PStack_2._arg0 = (Object *)0x0;
      PStack_2._arg1 = (Object *)0x0;
      PStack_2._arg2 = (Object *)0x0;
      PStack_2._args = (Object__Array *)0x0;
      mscorlib.dll::System::ParamsArray::ParamsArray__ctor_1
                (&PStack_2,
                 (Object *)(TypeInfo__StatHatWrapper->static_fields->statHatConfig).regionKey,
                 (Object *)key,(MethodInfo *)0x0);
      PStack_5._arg0 = PStack_2._arg0;
      PStack_5._arg1 = PStack_2._arg1;
      PStack_5._arg2 = PStack_2._arg2;
      PStack_5._args = PStack_2._args;
      pSVar1 = mscorlib.dll::System::String::String_FormatHelper
                         ((IFormatProvider *)0x0,pSVar1,&PStack_5,(MethodInfo *)0x0);
      StatHatWrapper_Value_2(pSVar4,pSVar1,value,(MethodInfo *)0x0);
    }
  }
  return;
}


/* Void Value(String, Single) */

void Assembly-CSharp.dll::StatHatWrapper::StatHatWrapper_Value_1
               (String *key,float value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__StatHatWrapper);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__0__u_standalone__1_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__0__u_fts__1_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__0__u__1_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__0__u_fts_standalone__1_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__StatHatWrapper->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__StatHatWrapper);
  }
  if ((TypeInfo__StatHatWrapper->static_fields->statHatConfig).isEnabled != 0) {
    if (*(int *)&(TypeInfo__StatHatWrapper->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__StatHatWrapper);
    }
    pSVar1 = StringLiteral__0__u__1_;
    PStack_2._arg0 = (Object *)0x0;
    PStack_2._arg1 = (Object *)0x0;
    PStack_2._arg2 = (Object *)0x0;
    PStack_2._args = (Object__Array *)0x0;
    mscorlib.dll::System::ParamsArray::ParamsArray__ctor_1
              (&PStack_2,
               (Object *)(TypeInfo__StatHatWrapper->static_fields->statHatConfig).regionKey,
               (Object *)key,(MethodInfo *)0x0);
    PStack_3._arg0 = PStack_2._arg0;
    PStack_3._arg1 = PStack_2._arg1;
    PStack_3._arg2 = PStack_2._arg2;
    PStack_3._args = PStack_2._args;
    pSVar4 = mscorlib.dll::System::String::String_FormatHelper
                       ((IFormatProvider *)0x0,pSVar1,&PStack_3,(MethodInfo *)0x0);
    pSVar1 = StringLiteral__0__u_standalone__1_;
    PStack_3._arg0 = (Object *)0x0;
    PStack_3._arg1 = (Object *)0x0;
    PStack_3._arg2 = (Object *)0x0;
    PStack_3._args = (Object__Array *)0x0;
    mscorlib.dll::System::ParamsArray::ParamsArray__ctor_1
              (&PStack_3,
               (Object *)(TypeInfo__StatHatWrapper->static_fields->statHatConfig).regionKey,
               (Object *)key,(MethodInfo *)0x0);
    PStack_5._arg0 = PStack_3._arg0;
    PStack_5._arg1 = PStack_3._arg1;
    PStack_5._arg2 = PStack_3._arg2;
    PStack_5._args = PStack_3._args;
    pSVar1 = mscorlib.dll::System::String::String_FormatHelper
                       ((IFormatProvider *)0x0,pSVar1,&PStack_5,(MethodInfo *)0x0);
    StatHatWrapper_Value_3(pSVar4,pSVar1,value,(MethodInfo *)0x0);
    if (TypeInfo__StatHatWrapper->static_fields->isFirstTimeSession != 0) {
      if (*(int *)&(TypeInfo__StatHatWrapper->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__StatHatWrapper);
      }
      pSVar1 = StringLiteral__0__u_fts__1_;
      PStack_3._arg0 = (Object *)0x0;
      PStack_3._arg1 = (Object *)0x0;
      PStack_3._arg2 = (Object *)0x0;
      PStack_3._args = (Object__Array *)0x0;
      mscorlib.dll::System::ParamsArray::ParamsArray__ctor_1
                (&PStack_3,
                 (Object *)(TypeInfo__StatHatWrapper->static_fields->statHatConfig).regionKey,
                 (Object *)key,(MethodInfo *)0x0);
      PStack_5._arg0 = PStack_3._arg0;
      PStack_5._arg1 = PStack_3._arg1;
      PStack_5._arg2 = PStack_3._arg2;
      PStack_5._args = PStack_3._args;
      pSVar4 = mscorlib.dll::System::String::String_FormatHelper
                         ((IFormatProvider *)0x0,pSVar1,&PStack_5,(MethodInfo *)0x0);
      pSVar1 = StringLiteral__0__u_fts_standalone__1_;
      PStack_2._arg0 = (Object *)0x0;
      PStack_2._arg1 = (Object *)0x0;
      PStack_2._arg2 = (Object *)0x0;
      PStack_2._args = (Object__Array *)0x0;
      mscorlib.dll::System::ParamsArray::ParamsArray__ctor_1
                (&PStack_2,
                 (Object *)(TypeInfo__StatHatWrapper->static_fields->statHatConfig).regionKey,
                 (Object *)key,(MethodInfo *)0x0);
      PStack_5._arg0 = PStack_2._arg0;
      PStack_5._arg1 = PStack_2._arg1;
      PStack_5._arg2 = PStack_2._arg2;
      PStack_5._args = PStack_2._args;
      pSVar1 = mscorlib.dll::System::String::String_FormatHelper
                         ((IFormatProvider *)0x0,pSVar1,&PStack_5,(MethodInfo *)0x0);
      StatHatWrapper_Value_3(pSVar4,pSVar1,value,(MethodInfo *)0x0);
    }
  }
  return;
}


/* Void Value(String, String, Int32) */

void Assembly-CSharp.dll::StatHatWrapper::StatHatWrapper_Value_2
               (String *allBtKey,String *btKey,int32_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_h5g9REtmi1LT7JY5);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  StatHat::Post::Post_1_EzValue
            (StringLiteral_h5g9REtmi1LT7JY5,allBtKey,(float)value,(MethodInfo *)0x0);
  pSVar1 = StringLiteral_h5g9REtmi1LT7JY5;
  uVar2 = 0;
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__Add_System__String__System__String_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<System::String,_System::String>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__StatHat__Post__FormPoster);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_value);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__ez);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_https___api_stathat_com);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_ezkey);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_stat);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
          *)FUN_?(
                         TypeInfo__System__Collections__Generic__Dictionary<System::String,_System::String>
                         );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements::
  UIR::UIRenderDevice+DisableForceGammaMaterial]::
  Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
            (this,
             MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__Dictionary__
            );
  if (this != (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
               *)0x0) {
    uVar2 = CONCAT71((int7)((ulonglong)uVar2 >> 8),2);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__TryInsert
              ((Dictionary_2_System_Object_System_Object_ *)this,(Object *)StringLiteral_ezkey,
               (Object *)pSVar1,(InsertionBehavior__Enum)uVar2,
               MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__Add_System__String__System__String_
               ->klass->rgctx_data[0x22].method);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__TryInsert
              ((Dictionary_2_System_Object_System_Object_ *)this,(Object *)StringLiteral_stat,
               (Object *)btKey,(InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar2 >> 8),2),
               MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__Add_System__String__System__String_
               ->klass->rgctx_data[0x22].method);
    if (cRam_? == '\0') {
      FUN_?();
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    info = mscorlib.dll::System::Globalization::NumberFormatInfo::NumberFormatInfo_get_CurrentInfo
                     ((MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__System__Number->_1).field_0x1c == 0) {
      FUN_?();
    }
    uVar2 = 0;
    pSVar1 = mscorlib.dll::System::Number::Number_FormatSingle
                       ((float)value,(String *)0x0,info,(MethodInfo *)0x0);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__TryInsert
              ((Dictionary_2_System_Object_System_Object_ *)this,(Object *)StringLiteral_value,
               (Object *)pSVar1,(InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar2 >> 8),2),
               MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__Add_System__String__System__String_
               ->klass->rgctx_data[0x22].method);
    this_00 = (Post_FormPoster *)FUN_?(TypeInfo__StatHat__Post__FormPoster);
    StatHat::Post+FormPoster::Post_FormPoster__ctor
              (this_00,StringLiteral_https___api_stathat_com,StringLiteral__ez,
               (Dictionary_2_System_String_System_String_ *)this,(MethodInfo *)0x0);
    return;
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void Value(String, String, Single) */

void Assembly-CSharp.dll::StatHatWrapper::StatHatWrapper_Value_3
               (String *allBtKey,String *btKey,float value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_h5g9REtmi1LT7JY5,btKey,in_R8,method,
                  CONCAT44(unaff_XMM6_Db,unaff_XMM6_Da),CONCAT44(unaff_XMM6_Dd,unaff_XMM6_Dc));
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  StatHat::Post::Post_1_EzValue(StringLiteral_h5g9REtmi1LT7JY5,allBtKey,value,(MethodInfo *)0x0);
  pSVar1 = StringLiteral_h5g9REtmi1LT7JY5;
  uVar2 = 0;
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__Add_System__String__System__String_
                  ,btKey,value,0);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<System::String,_System::String>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__StatHat__Post__FormPoster);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_value);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__ez);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_https___api_stathat_com);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_ezkey);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_stat);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
          *)FUN_?(
                         TypeInfo__System__Collections__Generic__Dictionary<System::String,_System::String>
                         );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements::
  UIR::UIRenderDevice+DisableForceGammaMaterial]::
  Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
            (this,
             MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__Dictionary__
            );
  if (this != (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
               *)0x0) {
    uVar2 = CONCAT71((int7)((ulonglong)uVar2 >> 8),2);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__TryInsert
              ((Dictionary_2_System_Object_System_Object_ *)this,(Object *)StringLiteral_ezkey,
               (Object *)pSVar1,(InsertionBehavior__Enum)uVar2,
               MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__Add_System__String__System__String_
               ->klass->rgctx_data[0x22].method);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__TryInsert
              ((Dictionary_2_System_Object_System_Object_ *)this,(Object *)StringLiteral_stat,
               (Object *)btKey,(InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar2 >> 8),2),
               MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__Add_System__String__System__String_
               ->klass->rgctx_data[0x22].method);
    if (cRam_? == '\0') {
      FUN_?();
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    info = mscorlib.dll::System::Globalization::NumberFormatInfo::NumberFormatInfo_get_CurrentInfo
                     ((MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__System__Number->_1).field_0x1c == 0) {
      FUN_?();
    }
    uVar2 = 0;
    pSVar1 = mscorlib.dll::System::Number::Number_FormatSingle
                       (value,(String *)0x0,info,(MethodInfo *)0x0);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__TryInsert
              ((Dictionary_2_System_Object_System_Object_ *)this,(Object *)StringLiteral_value,
               (Object *)pSVar1,(InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar2 >> 8),2),
               MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__Add_System__String__System__String_
               ->klass->rgctx_data[0x22].method);
    this_00 = (Post_FormPoster *)FUN_?(TypeInfo__StatHat__Post__FormPoster);
    StatHat::Post+FormPoster::Post_FormPoster__ctor
              (this_00,StringLiteral_https___api_stathat_com,StringLiteral__ez,
               (Dictionary_2_System_String_System_String_ *)this,(MethodInfo *)0x0);
    return;
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

