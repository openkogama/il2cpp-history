
/* Void Counter(String, String, Single) */

void Assembly-CSharp.dll::StatHat::Post::Post_1_Counter
               (String *key,String *ukey,float count,MethodInfo *method)

{
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
    FUN_?(&StringLiteral__c);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_ukey);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_https___api_stathat_com);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_key);
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
    uVar1 = CONCAT71((int7)((ulonglong)method >> 8),2);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__TryInsert
              ((Dictionary_2_System_Object_System_Object_ *)this,(Object *)StringLiteral_key,
               (Object *)key,(InsertionBehavior__Enum)uVar1,
               MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__Add_System__String__System__String_
               ->klass->rgctx_data[0x22].method);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__TryInsert
              ((Dictionary_2_System_Object_System_Object_ *)this,(Object *)StringLiteral_ukey,
               (Object *)ukey,(InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar1 >> 8),2),
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
    uVar1 = 0;
    value = mscorlib.dll::System::Number::Number_FormatSingle
                      (count,(String *)0x0,info,(MethodInfo *)0x0);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__TryInsert
              ((Dictionary_2_System_Object_System_Object_ *)this,(Object *)StringLiteral_count,
               (Object *)value,(InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar1 >> 8),2),
               MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__Add_System__String__System__String_
               ->klass->rgctx_data[0x22].method);
    this_00 = (Post_FormPoster *)FUN_?(TypeInfo__StatHat__Post__FormPoster);
    Post+FormPoster::Post_FormPoster__ctor
              (this_00,StringLiteral_https___api_stathat_com,StringLiteral__c,
               (Dictionary_2_System_String_System_String_ *)this,(MethodInfo *)0x0);
    return;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void Counter(String, String, Int32) */

void Assembly-CSharp.dll::StatHat::Post::Post_1_Counter_1
               (String *key,String *ukey,int32_t count,MethodInfo *method)

{
  uVar1 = 0;
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__Add_System__String__System__String_
                  ,ukey,CONCAT44(in_register_00000084,count),0);
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
    FUN_?(&StringLiteral__c);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_ukey);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_https___api_stathat_com);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_key);
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
    uVar1 = CONCAT71((int7)((ulonglong)uVar1 >> 8),2);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__TryInsert
              ((Dictionary_2_System_Object_System_Object_ *)this,(Object *)StringLiteral_key,
               (Object *)key,(InsertionBehavior__Enum)uVar1,
               MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__Add_System__String__System__String_
               ->klass->rgctx_data[0x22].method);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__TryInsert
              ((Dictionary_2_System_Object_System_Object_ *)this,(Object *)StringLiteral_ukey,
               (Object *)ukey,(InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar1 >> 8),2),
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
    uVar1 = 0;
    value = mscorlib.dll::System::Number::Number_FormatSingle
                      ((float)count,(String *)0x0,info,(MethodInfo *)0x0);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__TryInsert
              ((Dictionary_2_System_Object_System_Object_ *)this,(Object *)StringLiteral_count,
               (Object *)value,(InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar1 >> 8),2),
               MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__Add_System__String__System__String_
               ->klass->rgctx_data[0x22].method);
    this_00 = (Post_FormPoster *)FUN_?(TypeInfo__StatHat__Post__FormPoster);
    Post+FormPoster::Post_FormPoster__ctor
              (this_00,StringLiteral_https___api_stathat_com,StringLiteral__c,
               (Dictionary_2_System_String_System_String_ *)this,(MethodInfo *)0x0);
    return;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void EzCounter(String, String, Int32) */

void Assembly-CSharp.dll::StatHat::Post::Post_1_EzCounter
               (String *ezkey,String *stat,int32_t count,MethodInfo *method)

{
  uVar1 = 0;
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__Add_System__String__System__String_
                  ,stat,CONCAT44(in_register_00000084,count),0);
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
    uVar1 = CONCAT71((int7)((ulonglong)uVar1 >> 8),2);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__TryInsert
              ((Dictionary_2_System_Object_System_Object_ *)this,(Object *)StringLiteral_ezkey,
               (Object *)ezkey,(InsertionBehavior__Enum)uVar1,
               MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__Add_System__String__System__String_
               ->klass->rgctx_data[0x22].method);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__TryInsert
              ((Dictionary_2_System_Object_System_Object_ *)this,(Object *)StringLiteral_stat,
               (Object *)stat,(InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar1 >> 8),2),
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
    uVar1 = 0;
    value = mscorlib.dll::System::Number::Number_FormatSingle
                      ((float)count,(String *)0x0,info,(MethodInfo *)0x0);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__TryInsert
              ((Dictionary_2_System_Object_System_Object_ *)this,(Object *)StringLiteral_count,
               (Object *)value,(InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar1 >> 8),2),
               MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__Add_System__String__System__String_
               ->klass->rgctx_data[0x22].method);
    this_00 = (Post_FormPoster *)FUN_?(TypeInfo__StatHat__Post__FormPoster);
    Post+FormPoster::Post_FormPoster__ctor
              (this_00,StringLiteral_https___api_stathat_com,StringLiteral__ez,
               (Dictionary_2_System_String_System_String_ *)this,(MethodInfo *)0x0);
    return;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void EzCounter(String, String, Single) */

void Assembly-CSharp.dll::StatHat::Post::Post_1_EzCounter_1
               (String *ezkey,String *stat,float count,MethodInfo *method)

{
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
    uVar1 = CONCAT71((int7)((ulonglong)method >> 8),2);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__TryInsert
              ((Dictionary_2_System_Object_System_Object_ *)this,(Object *)StringLiteral_ezkey,
               (Object *)ezkey,(InsertionBehavior__Enum)uVar1,
               MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__Add_System__String__System__String_
               ->klass->rgctx_data[0x22].method);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__TryInsert
              ((Dictionary_2_System_Object_System_Object_ *)this,(Object *)StringLiteral_stat,
               (Object *)stat,(InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar1 >> 8),2),
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
    uVar1 = 0;
    value = mscorlib.dll::System::Number::Number_FormatSingle
                      (count,(String *)0x0,info,(MethodInfo *)0x0);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__TryInsert
              ((Dictionary_2_System_Object_System_Object_ *)this,(Object *)StringLiteral_count,
               (Object *)value,(InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar1 >> 8),2),
               MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__Add_System__String__System__String_
               ->klass->rgctx_data[0x22].method);
    this_00 = (Post_FormPoster *)FUN_?(TypeInfo__StatHat__Post__FormPoster);
    Post+FormPoster::Post_FormPoster__ctor
              (this_00,StringLiteral_https___api_stathat_com,StringLiteral__ez,
               (Dictionary_2_System_String_System_String_ *)this,(MethodInfo *)0x0);
    return;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void EzValue(String, String, Single) */

void Assembly-CSharp.dll::StatHat::Post::Post_1_EzValue
               (String *ezkey,String *stat,float value,MethodInfo *method)

{
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
    uVar1 = CONCAT71((int7)((ulonglong)method >> 8),2);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__TryInsert
              ((Dictionary_2_System_Object_System_Object_ *)this,(Object *)StringLiteral_ezkey,
               (Object *)ezkey,(InsertionBehavior__Enum)uVar1,
               MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__Add_System__String__System__String_
               ->klass->rgctx_data[0x22].method);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__TryInsert
              ((Dictionary_2_System_Object_System_Object_ *)this,(Object *)StringLiteral_stat,
               (Object *)stat,(InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar1 >> 8),2),
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
    uVar1 = 0;
    value_00 = mscorlib.dll::System::Number::Number_FormatSingle
                         (value,(String *)0x0,info,(MethodInfo *)0x0);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__TryInsert
              ((Dictionary_2_System_Object_System_Object_ *)this,(Object *)StringLiteral_value,
               (Object *)value_00,(InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar1 >> 8),2)
               ,MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__Add_System__String__System__String_
                ->klass->rgctx_data[0x22].method);
    this_00 = (Post_FormPoster *)FUN_?(TypeInfo__StatHat__Post__FormPoster);
    Post+FormPoster::Post_FormPoster__ctor
              (this_00,StringLiteral_https___api_stathat_com,StringLiteral__ez,
               (Dictionary_2_System_String_System_String_ *)this,(MethodInfo *)0x0);
    return;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void EzValue(String, String, Int32) */

void Assembly-CSharp.dll::StatHat::Post::Post_1_EzValue_1
               (String *ezkey,String *stat,int32_t value,MethodInfo *method)

{
  uVar1 = 0;
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__Add_System__String__System__String_
                  ,stat,CONCAT44(in_register_00000084,value),0);
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
    uVar1 = CONCAT71((int7)((ulonglong)uVar1 >> 8),2);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__TryInsert
              ((Dictionary_2_System_Object_System_Object_ *)this,(Object *)StringLiteral_ezkey,
               (Object *)ezkey,(InsertionBehavior__Enum)uVar1,
               MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__Add_System__String__System__String_
               ->klass->rgctx_data[0x22].method);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__TryInsert
              ((Dictionary_2_System_Object_System_Object_ *)this,(Object *)StringLiteral_stat,
               (Object *)stat,(InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar1 >> 8),2),
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
    uVar1 = 0;
    value_00 = mscorlib.dll::System::Number::Number_FormatSingle
                         ((float)value,(String *)0x0,info,(MethodInfo *)0x0);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__TryInsert
              ((Dictionary_2_System_Object_System_Object_ *)this,(Object *)StringLiteral_value,
               (Object *)value_00,(InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar1 >> 8),2)
               ,MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__Add_System__String__System__String_
                ->klass->rgctx_data[0x22].method);
    this_00 = (Post_FormPoster *)FUN_?(TypeInfo__StatHat__Post__FormPoster);
    Post+FormPoster::Post_FormPoster__ctor
              (this_00,StringLiteral_https___api_stathat_com,StringLiteral__ez,
               (Dictionary_2_System_String_System_String_ *)this,(MethodInfo *)0x0);
    return;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void Value(String, String, Int32) */

void Assembly-CSharp.dll::StatHat::Post::Post_1_Value
               (String *key,String *ukey,int32_t value,MethodInfo *method)

{
  uVar1 = 0;
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__Add_System__String__System__String_
                  ,ukey,CONCAT44(in_register_00000084,value),0);
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
    FUN_?(&StringLiteral__v);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_ukey);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_value);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_https___api_stathat_com);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_key);
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
    uVar1 = CONCAT71((int7)((ulonglong)uVar1 >> 8),2);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__TryInsert
              ((Dictionary_2_System_Object_System_Object_ *)this,(Object *)StringLiteral_key,
               (Object *)key,(InsertionBehavior__Enum)uVar1,
               MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__Add_System__String__System__String_
               ->klass->rgctx_data[0x22].method);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__TryInsert
              ((Dictionary_2_System_Object_System_Object_ *)this,(Object *)StringLiteral_ukey,
               (Object *)ukey,(InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar1 >> 8),2),
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
    uVar1 = 0;
    value_00 = mscorlib.dll::System::Number::Number_FormatSingle
                         ((float)value,(String *)0x0,info,(MethodInfo *)0x0);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__TryInsert
              ((Dictionary_2_System_Object_System_Object_ *)this,(Object *)StringLiteral_value,
               (Object *)value_00,(InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar1 >> 8),2)
               ,MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__Add_System__String__System__String_
                ->klass->rgctx_data[0x22].method);
    this_00 = (Post_FormPoster *)FUN_?(TypeInfo__StatHat__Post__FormPoster);
    Post+FormPoster::Post_FormPoster__ctor
              (this_00,StringLiteral_https___api_stathat_com,StringLiteral__v,
               (Dictionary_2_System_String_System_String_ *)this,(MethodInfo *)0x0);
    return;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void Value(String, String, Single) */

void Assembly-CSharp.dll::StatHat::Post::Post_1_Value_1
               (String *key,String *ukey,float value,MethodInfo *method)

{
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
    FUN_?(&StringLiteral__v);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_ukey);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_value);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_https___api_stathat_com);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_key);
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
    uVar1 = CONCAT71((int7)((ulonglong)method >> 8),2);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__TryInsert
              ((Dictionary_2_System_Object_System_Object_ *)this,(Object *)StringLiteral_key,
               (Object *)key,(InsertionBehavior__Enum)uVar1,
               MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__Add_System__String__System__String_
               ->klass->rgctx_data[0x22].method);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__TryInsert
              ((Dictionary_2_System_Object_System_Object_ *)this,(Object *)StringLiteral_ukey,
               (Object *)ukey,(InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar1 >> 8),2),
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
    uVar1 = 0;
    value_00 = mscorlib.dll::System::Number::Number_FormatSingle
                         (value,(String *)0x0,info,(MethodInfo *)0x0);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__TryInsert
              ((Dictionary_2_System_Object_System_Object_ *)this,(Object *)StringLiteral_value,
               (Object *)value_00,(InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar1 >> 8),2)
               ,MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__Add_System__String__System__String_
                ->klass->rgctx_data[0x22].method);
    this_00 = (Post_FormPoster *)FUN_?(TypeInfo__StatHat__Post__FormPoster);
    Post+FormPoster::Post_FormPoster__ctor
              (this_00,StringLiteral_https___api_stathat_com,StringLiteral__v,
               (Dictionary_2_System_String_System_String_ *)this,(MethodInfo *)0x0);
    return;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

