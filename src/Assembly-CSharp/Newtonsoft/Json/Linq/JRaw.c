
/* JToken CloneToken() */

JToken * Assembly-CSharp.dll::Newtonsoft::Json::Linq::JRaw::JRaw_CloneToken
                   (JRaw *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Newtonsoft__Json__Linq__JRaw);
    cRam_? = '\x01';
  }
  pJVar1 = (JToken *)func_?(TypeInfo__Newtonsoft__Json__Linq__JRaw);
  if ((pJVar1 != (JToken *)0x0) && (this != (JRaw *)0x0)) {
    pOVar2 = (this->fields)._._value;
    pJVar3 = (JToken__Class *)
             (*(this->klass->vtable).get_Type.methodPtr)(this,(this->klass->vtable).get_Type.method)
    ;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              ((Object *)pJVar1,ExceptionArgument__Enum_obj,(MethodInfo *)this);
    pJVar1[1].monitor = (MonitorData *)pOVar2;
    func_?(&pJVar1[1].monitor,pOVar2);
    pJVar1[1].klass = pJVar3;
    return pJVar1;
  }
  func_?();
  pcVar4 = (code *)swi(3);
  pJVar1 = (JToken *)(*pcVar4)();
  return pJVar1;
}


/* JRaw Create(JsonReader) */

JRaw * Assembly-CSharp.dll::Newtonsoft::Json::Linq::JRaw::JRaw_Create
                 (JsonReader *reader,MethodInfo *method)

{
  uStack_1._0_1_ = 0xff;
  uStack_1._1_3_ = 0xffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Globalization__CultureInfo);
    func_?(&TypeInfo__System__IDisposable);
    func_?(&TypeInfo__Newtonsoft__Json__Linq__JRaw);
    func_?(&TypeInfo__Newtonsoft__Json__JsonTextWriter);
    func_?(&TypeInfo__System__IO__StringWriter);
    cRam_? = '\x01';
  }
  if ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__Globalization__CultureInfo);
  }
  formatProvider =
       mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                 ((MethodInfo *)0x0);
  this = (StringWriter *)func_?(TypeInfo__System__IO__StringWriter);
  if (this != (StringWriter *)0x0) {
    mscorlib.dll::System::IO::StringWriter::StringWriter__ctor_1
              (this,(IFormatProvider *)formatProvider,(MethodInfo *)0x0);
    uStack_1._0_1_ = 1;
    uStack_1._1_3_ = 0;
    this_00 = (JsonTextWriter *)func_?();
    if (this_00 != (JsonTextWriter *)0x0) {
      JsonTextWriter::JsonTextWriter__ctor(this_00,(TextWriter *)this,(MethodInfo *)0x0);
      uStack_1._0_1_ = 3;
      if (this_00 != (JsonTextWriter *)0x0) {
        JsonWriter::JsonWriter_WriteToken((JsonWriter *)this_00,reader,(MethodInfo *)0x0);
        if (this != (StringWriter *)0x0) {
          pOVar4 = (Object *)(*(this->klass->vtable).ToString.methodPtr)(this);
          pJVar5 = (JRaw *)func_?();
          if (pJVar5 != (JRaw *)0x0) {
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                      ((Object *)pJVar5,ExceptionArgument__Enum_obj,unaff_ESI);
            (pJVar5->fields)._._value = pOVar4;
            func_?();
            (pJVar5->fields)._._valueType = 0xd;
            uStack_1 = CONCAT31(uStack_1._1_3_,1);
            if (this_00 != (JsonTextWriter *)0x0) {
              func_?();
            }
            uStack_1 = 0xffffffff;
            if (this != (StringWriter *)0x0) {
              func_?();
              *unaff_FS_OFFSET = uStack_3;
              return pJVar5;
            }
            *unaff_FS_OFFSET = uStack_3;
            return pJVar5;
          }
        }
      }
    }
  }
  func_?();
  uVar6 = func_?();
  func_?(uVar6);
  pcVar7 = (code *)swi(3);
  pJVar5 = (JRaw *)(*pcVar7)();
  return pJVar5;
}


/* JRaw(Object) */

void Assembly-CSharp.dll::Newtonsoft::Json::Linq::JRaw::JRaw__ctor_1
               (JRaw *this,Object *rawJson,MethodInfo *method)

{
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_ESI);
  (this->fields)._._value = rawJson;
  func_?(&(this->fields)._._value,rawJson);
  (this->fields)._._valueType = 0xd;
  return;
}

