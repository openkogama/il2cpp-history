
/* Void Count(String, Int32) */

void Assembly-CSharp.dll::StatHatWrapper::StatHatWrapper_Count
               (String *key,int32_t count,MethodInfo *method)

{
  puVar1 = (undefined *)*unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &stack0xfffffff0;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  func_?();
  if ((((uint)(TypeInfo__StatHatWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__StatHatWrapper->_1).cctor_started == 0)) {
    func_?(TypeInfo__StatHatWrapper);
  }
  if ((TypeInfo__StatHatWrapper->static_fields->statHatConfig).isEnabled != 0) {
    if ((((uint)(TypeInfo__StatHatWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__StatHatWrapper->_1).cctor_started == 0)) {
      func_?(TypeInfo__StatHatWrapper);
    }
    pSVar2 = (TypeInfo__StatHatWrapper->static_fields->statHatConfig).regionKey;
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__String);
    }
    pSVar2 = mscorlib.dll::System::String::String_Format_1
                       (StringLiteral__0__u__1_,(Object *)pSVar2,(Object *)key,(MethodInfo *)0x0);
    mscorlib.dll::System::String::String_Format_1
              (StringLiteral__0__u_standalone__1_,
               (Object *)(TypeInfo__StatHatWrapper->static_fields->statHatConfig).regionKey,
               (Object *)key,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    StatHat::Post::Post_EzCounter(StringLiteral_h5g9REtmi1LT7JY5,pSVar2,count,(MethodInfo *)0x0);
    puVar1 = &UNK_?;
    StatHat::Post::Post_EzCounter(StringLiteral_h5g9REtmi1LT7JY5,pSVar2,count,(MethodInfo *)0x0);
    if (TypeInfo__StatHatWrapper->static_fields->isFirstTimeSession != 0) {
      if ((((uint)(TypeInfo__StatHatWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__StatHatWrapper->_1).cctor_started == 0)) {
        func_?();
      }
      pSVar2 = (TypeInfo__StatHatWrapper->static_fields->statHatConfig).regionKey;
      if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__String->_1).cctor_started == 0)) {
        func_?();
      }
      pSVar2 = mscorlib.dll::System::String::String_Format_1
                         (StringLiteral__0__u_fts__1_,(Object *)pSVar2,(Object *)key,
                          (MethodInfo *)0x0);
      btKey = mscorlib.dll::System::String::String_Format_1
                        (StringLiteral__0__u_fts_standalone__1_,
                         (Object *)
                         (TypeInfo__StatHatWrapper->static_fields->statHatConfig).regionKey,
                         (Object *)key,(MethodInfo *)0x0);
      StatHatWrapper_Count_1(pSVar2,btKey,count,(MethodInfo *)0x0);
    }
  }
  *unaff_FS_OFFSET = puVar1;
  return;
}


/* Void Count(String, String, Int32) */

void Assembly-CSharp.dll::StatHatWrapper::StatHatWrapper_Count_1
               (String *allBtKey,String *btKey,int32_t count,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  StatHat::Post::Post_EzCounter(StringLiteral_h5g9REtmi1LT7JY5,allBtKey,count,(MethodInfo *)0x0);
  StatHat::Post::Post_EzCounter(StringLiteral_h5g9REtmi1LT7JY5,btKey,count,(MethodInfo *)0x0);
  return;
}


/* Void Initialize(Boolean, StatHatConfig) */

void Assembly-CSharp.dll::StatHatWrapper::StatHatWrapper_Initialize
               (bool isFirstTimeSession,StatHatConfig statHatConfig,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__StatHatWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__StatHatWrapper->_1).cctor_started == 0)) {
    func_?(TypeInfo__StatHatWrapper);
  }
  TypeInfo__StatHatWrapper->static_fields->isFirstTimeSession = isFirstTimeSession;
  pSVar1 = TypeInfo__StatHatWrapper->static_fields;
  (pSVar1->statHatConfig).regionKey = statHatConfig.regionKey;
  (pSVar1->statHatConfig).isEnabled = statHatConfig.isEnabled;
  *(undefined3 *)&(pSVar1->statHatConfig).field_0x5 = statHatConfig._5_3_;
  return;
}


/* Void Value(String, Int32) */

void Assembly-CSharp.dll::StatHatWrapper::StatHatWrapper_Value
               (String *key,int32_t value,MethodInfo *method)

{
  puVar1 = (undefined *)*unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &stack0xfffffff0;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  func_?();
  if ((((uint)(TypeInfo__StatHatWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__StatHatWrapper->_1).cctor_started == 0)) {
    func_?(TypeInfo__StatHatWrapper);
  }
  if ((TypeInfo__StatHatWrapper->static_fields->statHatConfig).isEnabled != 0) {
    if ((((uint)(TypeInfo__StatHatWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__StatHatWrapper->_1).cctor_started == 0)) {
      func_?(TypeInfo__StatHatWrapper);
    }
    pSVar2 = (TypeInfo__StatHatWrapper->static_fields->statHatConfig).regionKey;
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__String);
    }
    pSVar2 = mscorlib.dll::System::String::String_Format_1
                       (StringLiteral__0__u__1_,(Object *)pSVar2,(Object *)key,(MethodInfo *)0x0);
    pSVar3 = mscorlib.dll::System::String::String_Format_1
                       (StringLiteral__0__u_standalone__1_,
                        (Object *)(TypeInfo__StatHatWrapper->static_fields->statHatConfig).regionKey
                        ,(Object *)key,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    StatHat::Post::Post_EzValue
              (StringLiteral_h5g9REtmi1LT7JY5,pSVar2,(float)value,(MethodInfo *)0x0);
    puVar1 = &UNK_?;
    StatHat::Post::Post_EzValue
              (StringLiteral_h5g9REtmi1LT7JY5,pSVar3,(float)value,(MethodInfo *)0x0);
    if (TypeInfo__StatHatWrapper->static_fields->isFirstTimeSession != 0) {
      if ((((uint)(TypeInfo__StatHatWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__StatHatWrapper->_1).cctor_started == 0)) {
        func_?();
      }
      pSVar2 = (TypeInfo__StatHatWrapper->static_fields->statHatConfig).regionKey;
      if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__String->_1).cctor_started == 0)) {
        func_?();
      }
      pSVar3 = mscorlib.dll::System::String::String_Format_1
                         (StringLiteral__0__u_fts__1_,(Object *)pSVar2,(Object *)key,
                          (MethodInfo *)0x0);
      btKey = mscorlib.dll::System::String::String_Format_1
                        (StringLiteral__0__u_fts_standalone__1_,
                         (Object *)
                         (TypeInfo__StatHatWrapper->static_fields->statHatConfig).regionKey,
                         (Object *)key,(MethodInfo *)0x0);
      StatHatWrapper_Value_2(pSVar3,btKey,(int32_t)pSVar2,(MethodInfo *)0x0);
    }
  }
  *unaff_FS_OFFSET = puVar1;
  return;
}


/* Void Value(String, Single) */

void Assembly-CSharp.dll::StatHatWrapper::StatHatWrapper_Value_1
               (String *key,float value,MethodInfo *method)

{
  puVar1 = (undefined *)*unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &stack0xfffffff0;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  func_?();
  if ((((uint)(TypeInfo__StatHatWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__StatHatWrapper->_1).cctor_started == 0)) {
    func_?(TypeInfo__StatHatWrapper);
  }
  if ((TypeInfo__StatHatWrapper->static_fields->statHatConfig).isEnabled != 0) {
    if ((((uint)(TypeInfo__StatHatWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__StatHatWrapper->_1).cctor_started == 0)) {
      func_?(TypeInfo__StatHatWrapper);
    }
    pSVar2 = (TypeInfo__StatHatWrapper->static_fields->statHatConfig).regionKey;
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__String);
    }
    pSVar2 = mscorlib.dll::System::String::String_Format_1
                       (StringLiteral__0__u__1_,(Object *)pSVar2,(Object *)key,(MethodInfo *)0x0);
    pSVar3 = mscorlib.dll::System::String::String_Format_1
                       (StringLiteral__0__u_standalone__1_,
                        (Object *)(TypeInfo__StatHatWrapper->static_fields->statHatConfig).regionKey
                        ,(Object *)key,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    StatHat::Post::Post_EzValue(StringLiteral_h5g9REtmi1LT7JY5,pSVar2,value,(MethodInfo *)0x0);
    puVar1 = &UNK_?;
    StatHat::Post::Post_EzValue(StringLiteral_h5g9REtmi1LT7JY5,pSVar3,value,(MethodInfo *)0x0);
    if (TypeInfo__StatHatWrapper->static_fields->isFirstTimeSession != 0) {
      if ((((uint)(TypeInfo__StatHatWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__StatHatWrapper->_1).cctor_started == 0)) {
        func_?();
      }
      pSVar2 = (TypeInfo__StatHatWrapper->static_fields->statHatConfig).regionKey;
      if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__String->_1).cctor_started == 0)) {
        func_?();
      }
      pSVar3 = mscorlib.dll::System::String::String_Format_1
                         (StringLiteral__0__u_fts__1_,(Object *)pSVar2,(Object *)key,
                          (MethodInfo *)0x0);
      btKey = mscorlib.dll::System::String::String_Format_1
                        (StringLiteral__0__u_fts_standalone__1_,
                         (Object *)
                         (TypeInfo__StatHatWrapper->static_fields->statHatConfig).regionKey,
                         (Object *)key,(MethodInfo *)0x0);
      StatHatWrapper_Value_3(pSVar3,btKey,(float)pSVar2,(MethodInfo *)0x0);
    }
  }
  *unaff_FS_OFFSET = puVar1;
  return;
}


/* Void Value(String, String, Int32) */

void Assembly-CSharp.dll::StatHatWrapper::StatHatWrapper_Value_2
               (String *allBtKey,String *btKey,int32_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  StatHat::Post::Post_EzValue
            (StringLiteral_h5g9REtmi1LT7JY5,allBtKey,(float)value,(MethodInfo *)0x0);
  StatHat::Post::Post_EzValue
            (StringLiteral_h5g9REtmi1LT7JY5,(String *)0x0,(float)value,(MethodInfo *)0x0);
  return;
}


/* Void Value(String, String, Single) */

void Assembly-CSharp.dll::StatHatWrapper::StatHatWrapper_Value_3
               (String *allBtKey,String *btKey,float value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  StatHat::Post::Post_EzValue(StringLiteral_h5g9REtmi1LT7JY5,allBtKey,value,(MethodInfo *)0x0);
  StatHat::Post::Post_EzValue(StringLiteral_h5g9REtmi1LT7JY5,(String *)0x0,value,(MethodInfo *)0x0);
  return;
}


/* StatHatWrapper() */

void Assembly-CSharp.dll::StatHatWrapper::StatHatWrapper__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  TypeInfo__StatHatWrapper->static_fields->isFirstTimeSession = 0;
  pSVar1 = TypeInfo__StatHatWrapper->static_fields;
  (pSVar1->statHatConfig).regionKey = (String *)0x0;
  *(undefined4 *)&(pSVar1->statHatConfig).isEnabled = 0;
  return;
}

