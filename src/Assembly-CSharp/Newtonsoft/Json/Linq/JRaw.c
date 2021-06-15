
/* JToken CloneToken() */

JToken * Assembly-CSharp.dll::Newtonsoft::Json::Linq::JRaw::JRaw_CloneToken
                   (JRaw *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (ScaleAnimationBase *)func_?(TypeInfo__Newtonsoft__Json__Linq__JRaw);
  if (this != (JRaw *)0x0) {
    pSVar1 = (ScaleAnimationBase__Class *)(this->fields)._._value;
    pSVar2 = (ScaleAnimationBase_OnScaleAnimationStoppedDelegate *)
             (*(code *)(this->klass->vtable).get_Type.method)
                       (this,(this->klass->vtable).get_HasValues.methodPtr);
    ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,(MethodInfo *)this);
    this_00[1].klass = pSVar1;
    (this_00->fields).OnScaleAnimationStopped = pSVar2;
    return (JToken *)this_00;
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  pJVar4 = (JToken *)(*pcVar3)();
  return pJVar4;
}


/* JRaw Create(JsonReader) */

JRaw * Assembly-CSharp.dll::Newtonsoft::Json::Linq::JRaw::JRaw_Create
                 (JsonReader *reader,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  func_?();
  if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr & 0x2000000)
       != 0) && ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__Globalization__CultureInfo);
  }
  formatProvider =
       mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                 ((MethodInfo *)0x0);
  this = (JsonTextWriter *)func_?(TypeInfo__System__IO__StringWriter);
  mscorlib.dll::System::IO::StringWriter::StringWriter__ctor_1
            ((StringWriter *)this,(IFormatProvider *)formatProvider,(MethodInfo *)0x0);
  uStack_1 = 0;
  this_00 = (JsonTextWriter *)func_?(TypeInfo__Newtonsoft__Json__JsonTextWriter);
  JsonTextWriter::JsonTextWriter__ctor(this_00,(TextWriter *)this,(MethodInfo *)0x0);
  uStack_1 = CONCAT31(uStack_1._1_3_,1);
  if (this_00 != (JsonTextWriter *)0x0) {
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    Json::Utilities::ValidationUtils::ValidationUtils_ArgumentNotNull
              ((Object *)reader,StringLiteral_reader,(MethodInfo *)0x0);
    if (reader != (JsonReader *)0x0) {
      iVar4 = (*(code *)(reader->klass->vtable).get_TokenType.method)();
      if (iVar4 == 0) {
        initialDepth = -1;
      }
      else {
        iVar4 = (*(code *)(reader->klass->vtable).get_TokenType.method)();
        if (((iVar4 == 1) || (iVar4 == 2)) || (iVar4 == 3)) {
          initialDepth = (*(code *)(reader->klass->vtable).get_Depth.method)();
        }
        else {
          iVar4 = (*(code *)(reader->klass->vtable).get_Depth.method)();
          initialDepth = iVar4 + 1;
        }
      }
      JsonWriter::JsonWriter_WriteToken_1
                ((JsonWriter *)this_00,reader,initialDepth,(MethodInfo *)0x0);
      if (this != (JsonTextWriter *)0x0) {
        method_00 = (MethodInfo *)(*(code *)(this->klass->vtable).ToString.method)();
        pJStack_5 = (JsonTextWriter *)func_?();
        ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)pJStack_5,0.0,method_00);
        (pJStack_5->fields)._indentation = (int32_t)method_00;
        *(undefined4 *)&(pJStack_5->fields)._indentChar = 0xd;
        uStack_1 = uStack_1 & 0xffffff00;
        if (this_00 != (JsonTextWriter *)0x0) {
          func_?();
          pJStack_5 = this_00;
        }
        uStack_1 = 0xffffffff;
        if (this != (JsonTextWriter *)0x0) {
          func_?();
          pJStack_5 = this;
        }
        *unaff_FS_OFFSET = uStack_3;
        return (JRaw *)pJStack_5;
      }
    }
  }
  func_?();
  func_?();
  func_?();
  pcVar6 = (code *)swi(3);
  pJVar7 = (JRaw *)(*pcVar6)();
  return pJVar7;
}


/* JRaw(Object) */

void Assembly-CSharp.dll::Newtonsoft::Json::Linq::JRaw::JRaw__ctor_1
               (JRaw *this,Object *rawJson,MethodInfo *method)

{
  ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)this,0.0,unaff_ESI);
  (this->fields)._._value = rawJson;
  (this->fields)._._valueType = 0xd;
  return;
}

