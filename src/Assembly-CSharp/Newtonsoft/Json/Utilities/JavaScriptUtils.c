
/* String ToEscapedJavaScriptString(String) */

String * Assembly-CSharp.dll::Newtonsoft::Json::Utilities::JavaScriptUtils::
         JavaScriptUtils_ToEscapedJavaScriptString(String *value,MethodInfo *method)

{
  pSVar1 = JavaScriptUtils_ToEscapedJavaScriptString_1(value,0x22,1,(MethodInfo *)0x0);
  return pSVar1;
}


/* String ToEscapedJavaScriptString(String, Char, Boolean) */

String * Assembly-CSharp.dll::Newtonsoft::Json::Utilities::JavaScriptUtils::
         JavaScriptUtils_ToEscapedJavaScriptString_1
                   (String *value,uint16_t delimiter,bool appendDelimiters,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  pSStack_3 = (StringWriter *)*unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &pSStack_3;
  pIStack_4 = (IDisposable__Class *)&stack0xffffffc0;
  pIVar5 = (IDisposable__Class *)&stack0xffffffc0;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    pIVar5 = pIStack_4;
  }
  pIStack_4 = pIVar5;
  uStack_6 = 0;
  func_?();
  puStack_7 = (undefined4 *)&stack0xffffffc0;
  pIStack_4 = (IDisposable__Class *)&stack0xffffffc0;
  if (cRam_? == '\0') {
    puStack_7 = (undefined4 *)&stack0xffffffc0;
    pIStack_4 = (IDisposable__Class *)&stack0xffffffc0;
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (value == (String *)0x0) {
    uStack_8 = 0;
  }
  else {
    pIVar9 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
             Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)value,(MethodInfo *)0x0);
    uStack_8 = 0;
    func_?(&uStack_8,pIVar9,MethodInfo__System__Nullable<int>__Nullable_int_);
  }
  uStack_10 = (undefined4)uStack_8;
  uStack_11 = uStack_8._4_4_;
  cVar12 = func_?(&uStack_10,MethodInfo__System__Nullable<int>__get_HasValue__);
  if (cVar12 == '\0') {
    capacity = 0x10;
  }
  else {
    capacity = func_?(&uStack_10,MethodInfo__System__Nullable<int>__get_Value__);
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pSStack_13 = (StringBuilder *)func_?(TypeInfo__System__Text__StringBuilder);
  mscorlib.dll::System::Text::StringBuilder::StringBuilder__ctor_3
            (pSStack_13,capacity,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr & 0x2000000)
       != 0) && ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
    func_?();
  }
  formatProvider =
       mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                 ((MethodInfo *)0x0);
  this = (StringWriter *)func_?();
  uStack_8 = CONCAT44(this,(undefined4)uStack_8);
  mscorlib.dll::System::IO::StringWriter::StringWriter__ctor_3
            (this,pSStack_13,(IFormatProvider *)formatProvider,(MethodInfo *)0x0);
  uStack_1 = 0;
  JavaScriptUtils_WriteEscapedJavaScriptString
            ((TextWriter *)this,value,delimiter,appendDelimiters,(MethodInfo *)0x0);
  if (this != (StringWriter *)0x0) {
    pSStack_3 = (StringWriter *)(this->klass->vtable).Dispose.methodPtr;
    pIStack_4 = (IDisposable__Class *)this;
    pSVar14 = (String *)(*(code *)(this->klass->vtable).ToString.method)();
    *puStack_7 = 0x49;
    uStack_1 = 0xffffffff;
    if (this != (StringWriter *)0x0) {
      pIStack_4 = TypeInfo__System__IDisposable;
      pSStack_13 = (StringBuilder *)0x0;
      pSStack_3 = this;
      func_?();
    }
    *unaff_FS_OFFSET = pSStack_3;
    return pSVar14;
  }
  pSStack_3 = (StringWriter *)0x0;
  func_?();
  pSStack_3 = (StringWriter *)0x0;
  pIStack_4 = (IDisposable__Class *)0x0;
  pSStack_13 = (StringBuilder *)0x0;
  func_?();
  pcVar15 = (code *)swi(3);
  pSVar14 = (String *)(*pcVar15)();
  return pSVar14;
}

/* decompilation failed: Low-level Error: Overlapping input varnodes */

